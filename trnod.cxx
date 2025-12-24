#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#include "nmtbl.h"
#include "token.h"
#include "trnod.h"
#include "util.h"

static proc_tp* curr_proc = NULL;
static char*    struct_path = "";
static token*   global_func_decl_level;

static void insert_depr(token* t_depr, token* t_mess, token* f_tkn)
{
	assert(f_tkn);
	if (t_depr)
	{
		if (t_mess)
		{
			f_tkn->prepend(dprintf("[[deprecated(\"%s\")]]\n", t_mess->in_text));
			token::disable(t_depr->prev, t_mess);
		}
		else
		{
			f_tkn->prepend("[[deprecated]]\n");
			t_depr->disable();
		}
	}
}

//-----------------------------------------------------------------------------

void node::force_semicolon()
{
    if (l_tkn->tag == TKN_SEMICOLON) return;

    token* tkn = l_tkn->next_relevant();

    if (tkn->tag != TKN_SEMICOLON)  {
	l_tkn = l_tkn->append(";");
	l_tkn->tag = TKN_SEMICOLON;
    } else {
	l_tkn = tkn;
	while ((tkn = tkn->prev)->cat == CAT_WSPC) {
	    if (tkn->tag != TKN_CMNT) tkn->disable();
	}
    }
}

void node::swallow_semicolon()
{
    token* tkn = l_tkn->next_relevant();

    if (tkn->tag == TKN_SEMICOLON)  {
	tkn->disable();
    }
}

#define CONS1(a) this->a = a
#define CONS2(a,b) CONS1(a), this->b = b
#define CONS3(a,b,c) CONS2(a,b), this->c = c
#define CONS4(a,b,c,d) CONS3(a,b,c), this->d = d
#define CONS5(a,b,c,d,e) CONS4(a,b,c,d), this->e = e
#define CONS6(a,b,c,d,e,f) CONS5(a,b,c,d,e), this->f = f
#define CONS7(a,b,c,d,e,f,g) CONS6(a,b,c,d,e,f), this->g = g
#define CONS8(a,b,c,d,e,f,g,i) CONS7(a,b,c,d,e,f,g), this->i = i
#define CONS9(a,b,c,d,e,f,g,i,j) CONS8(a,b,c,d,e,f,g,i), this->j = j
#define CONS10(a,b,c,d,e,f,g,i,j,k) CONS9(a,b,c,d,e,f,g,i,j), this->k = k
#define CONS11(a,b,c,d,e,f,g,i,j,k,l) CONS10(a,b,c,d,e,f,g,i,j,k), this->l = l
#define CONS12(a,b,c,d,e,f,g,i,j,k,l,m) CONS11(a,b,c,d,e,f,g,i,j,k,l), this->m = m
#define CONS13(a,b,c,d,e,f,g,i,j,k,l,m,n) CONS12(a,b,c,d,e,f,g,i,j,k,l,m), this->n = n
#define CONS14(a,b,c,d,e,f,g,i,j,k,l,m,n,o) CONS13(a,b,c,d,e,f,g,i,j,k,l,m,n), this->o = o
#define CONS15(a,b,c,d,e,f,g,i,j,k,l,m,n,o,p) CONS14(a,b,c,d,e,f,g,i,j,k,l,m,n,o), this->p = p


//=============================================================================
// Statements
//=============================================================================

import_list_node::import_list_node(token* lpar, token_list* params, token* rpar)
{
    CONS3(lpar, params, rpar);
}

void import_list_node::attrib(int)
{
}

void import_list_node::translate(int)
{
    token::remove(lpar, rpar);
}

program_node::program_node(token* program, token* name, import_list_node* params,
					  token* semi, block_node* block, token* end)
{
    CONS6(program, name, params, semi, block, end);
	main = NULL;
}

void program_node::attrib(int)
{
    curr_proc = main = new proc_tp;
    main->res_type = &integer_type;
	if (turbo_pascal) {
		b_ring::push(main);
		main->scope = b_ring::global;
		b_ring::top_b_ring = main;
	}
    block->attrib(ctx_program);
}

void program_node::translate(int)
{
    if (program != NULL) {
        token::disable(program, semi);
    }
    end->disable();
    curr_proc = main;
	global_func_decl_level = block->body_begin_tkn(); //block->body->t_begin;
    block->translate(ctx_program);
	token* first_stmt = block->body_begin_tkn()->next_relevant(); //block->body->t_begin->next_relevant();

    if (1/*pio_init*/) {
	block->body_begin_tkn()->prepend("int main(int argc, const char* argv[])\n");
	} else {
		block->body_begin_tkn()->prepend("int main()\n");
	}
    block->body_end_tkn()->prepend("return EXIT_SUCCESS;\n")->set_bind(first_stmt);
    main->insert_temporaries(first_stmt);
	if (1/*pio_init*/) {
		first_stmt->prepend("pio_initialize(argc, argv);\n");
	}
}

bool unit_node::interface_part;
char* unit_node::unit_name;

unit_node::unit_node(token* t_unit, token* t_name, token* t_semi, token* t_interface, decl_node* unit_decl, token* t_implementation,  
	  decl_node* unit_def, compound_node* initializer, decl_node* init_finit, token* t_end, token* t_dot)
{
    CONS11(t_unit, t_name, t_semi, t_interface, unit_decl, t_implementation,
	          unit_def, initializer, init_finit, t_end, t_dot);
	main = NULL;
}

void unit_node::attrib(int)
{
    decl_node* dcl;

    unit_tp* type = new unit_tp;
    b_ring::global_b_ring.add(t_name->name, symbol::s_var, type);
    b_ring::push(type);

    type->scope = b_ring::global;
    b_ring::top_b_ring = type;

	for (dcl = unit_decl; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx_module);
	}
	for (dcl = unit_def; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx_module);
	}
	if (initializer) {
		curr_proc = main = new proc_tp;
		initializer->attrib(ctx_program);
	}

	if (init_finit) {
		//curr_proc = main = new proc_tp;
		init_finit->attrib(ctx_program);
	}
}

void unit_node::translate(int)
{
    decl_node* dcl;
    char* unit_name = "";
	if (t_name != NULL) {
		unit_name = t_name->out_text;
		t_unit->set_trans(dprintf("#define __%s_implementation__\n", unit_name));
		token::disable(t_name, t_semi);
	}
	if (t_end) {
		t_end->disable();
	}
    t_dot->disable();
    curr_proc = NULL;

    interface_part = true;
	for (dcl = unit_decl; dcl != NULL; dcl = dcl->next) {
		unit_node::unit_name = unit_name;
		dcl->translate(ctx_module);
	}
    interface_part = false;
	for (dcl = unit_def; dcl != NULL; dcl = dcl->next) {
		unit_node::unit_name = unit_name;
		dcl->translate(ctx_module);
	}

	if (initializer) {
		curr_proc = main;
		global_func_decl_level = initializer->t_begin;
		unit_node::unit_name = unit_name;
		initializer->translate(ctx_program);
		token* first_stmt = initializer->t_begin->next_relevant();

		initializer->t_begin->prepend(
			dprintf("class unit_%s_initialize {\n"
				"  public: unit_%s_initialize();\n"
				"};\n"
				"static unit_%s_initialize %s_constructor;\n\n"
				"unit_%s_initialize::unit_%s_initialize() ",
				unit_name, unit_name, unit_name, unit_name,
				unit_name, unit_name));

		main->insert_temporaries(first_stmt);
	}

	if (init_finit)
	{
		init_finit->translate(ctx_program);
	}

    t_implementation->cat = CAT_WSPC; //TODO shall we call ->disable() here?
    t_interface->cat = CAT_WSPC;
}

init_finit_node::init_finit_node(token* t_initialization, decl_node* init_defs, stmt_node* initializer, token* t_semi1,
	                      token* t_finalization, decl_node* fini_defs, stmt_node* finalizer, token* t_semi2)
{
	CONS8(t_initialization, init_defs, initializer, t_semi1, t_finalization, fini_defs, finalizer, t_semi2);
}

void init_finit_node::attrib(int)
{
	f_tkn = t_initialization;
	l_tkn = token::last_relevant(); //t_semi2;

	for (decl_node* dcl = init_defs; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx_module);
	}

	// initializer is a list of statements
	for (stmt_node* stmt = initializer; stmt != NULL; stmt = stmt->next) {
		stmt->attrib(ctx_module);
	}

	for (decl_node* dcl = fini_defs; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx_module);
	}

	if (finalizer) { // finalizer is a list of statements
		for (stmt_node* stmt = finalizer; stmt != NULL; stmt = stmt->next) {
			stmt->attrib(ctx_module);
		}
	//	l_tkn = finalizer->find_last()->l_tkn; //t_semi2;
	}
}

void init_finit_node::translate(int)
{
	decl_node* dcl;

	for (dcl = init_defs; dcl != NULL; dcl = dcl->next) {
		dcl->translate(ctx_module);
	}

	for (dcl = fini_defs; dcl != NULL; dcl = dcl->next) {
		dcl->translate(ctx_module);
	}

	initializer->translate(ctx_module);

	token* lbr;
	token* rbr;
	bool has_lbr = false;

	token* first_stmt = t_initialization->next_relevant();
	if (first_stmt->tag != TKN_BEGIN) { // to avoid doubling of '{'
		lbr = first_stmt->prepend("{\n");
		lbr->set_pos(initializer->f_tkn);
		has_lbr = true;
	}

	token* last_stmt;
	if (t_finalization)
		last_stmt = t_finalization->prev_relevant(); // take initialiser last stmt from finalizer
	else
		last_stmt = token::last_relevant(); // if finalizer is missing then take very last unit stmt

	assert(last_stmt);

	if (has_lbr /*|| last_stmt->tag != TKN_END*/) { // avoid doubling of '}'
		rbr = last_stmt->append("\n}");
		rbr->set_pos(last_stmt);
		last_stmt->set_bind(rbr);
	}

	t_initialization->prepend(
		dprintf("class unit_%s_initialize {\n"
			"  public: \n"
			"    unit_%s_initialize();\n"
			"%s"
			"  };\n\n"
			"static unit_%s_initialize %s_constructor;\n\n"
			"unit_%s_initialize::unit_%s_initialize() ",
			unit_node::unit_name, unit_node::unit_name, 
			finalizer ? dprintf("    ~unit_%s_initialize();\n", unit_node::unit_name) : "",
			unit_node::unit_name, unit_node::unit_name, unit_node::unit_name, unit_node::unit_name));


	if (finalizer) {
		assert(t_finalization);
		finalizer->translate(ctx_module);
		t_finalization->prepend(dprintf("\nunit_%s_initialize::~unit_%s_initialize() ", unit_node::unit_name, unit_node::unit_name));

		first_stmt = t_finalization->next_relevant();
		has_lbr = false;
		if (first_stmt->tag != TKN_BEGIN) { // to avoid doubling of '{'
			lbr = first_stmt->prepend("{\n");
			lbr->set_pos(finalizer->f_tkn);
			finalizer->l_tkn->set_bind(lbr);
			has_lbr = true;
		}
		
		last_stmt = l_tkn; //token::last_relevant();
		assert(last_stmt);
		if (has_lbr /*||last_stmt->tag != TKN_END*/) { // to avoid doubling of '}'
			rbr = last_stmt->append("\n}");
			rbr->set_pos(last_stmt);
			last_stmt->set_bind(rbr);
		}
	}

	t_initialization->disable();
	if(t_finalization) t_finalization->disable();
}

module_node::module_node(token* program, token* name,
			 import_list_node* params,
			 token* semi, decl_node* decls, token* t_dot)
{
    CONS6(program, name, params, semi, decls, t_dot);
}

void module_node::attrib(int)
{
	for (decl_node* dcl = decls; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx_module);
	}
}

void module_node::translate(int)
{
    if (program != NULL) {
        token::disable(program, semi);
    }
	if (t_dot != NULL) {
		t_dot->disable();
	}
	for (decl_node* dcl = decls; dcl != NULL; dcl = dcl->next) {
		dcl->translate(ctx_module);
	}
}



block_node::block_node(asm_block_node* asm_body)
{
	CONS1(asm_body);
	decls = NULL;
	body = NULL;
}

block_node::block_node(decl_node* decls, compound_node* body)
{
    CONS2(decls, body);
	asm_body = NULL;
}

token* block_node::body_begin_tkn()
{
	// assumed that attrib() already called and asm_body->f_tkn is initialised 
	return body? body->t_begin : asm_body->t_asm;
}

token* block_node::body_end_tkn()
{
	// assumed that attrib() already called and asm_body->l_tkn is initialised 
	return body ? body->t_end : asm_body->t_end;
}


void block_node::attrib(int ctx)
{
	// one of two bodies must be NULL, another one must be not null
	assert((asm_body == NULL && body != NULL) || (asm_body != NULL && body == NULL));

    for (decl_node* dcl = decls; dcl != NULL; dcl = dcl->next) {
        dcl->attrib(ctx);
    }
	if (body)
		body->attrib(ctx);
	else
		asm_body->attrib(ctx);
}


void block_node::translate(int ctx)
{
    for( decl_node* dcl = decls; dcl != NULL; dcl = dcl->next ) {
        dcl->translate(ctx);
    }
	if (body)
	{
		body->translate(ctx);
		f_tkn = decls ? decls->f_tkn : body->f_tkn;
		l_tkn = body->l_tkn;
	}
	else
	{
		asm_body->translate(ctx);
		f_tkn = decls ? decls->f_tkn : asm_body->f_tkn;
		l_tkn = asm_body->l_tkn;
	}
}

label_node::label_node(token* ident, token* colon, stmt_node* stmt)
{
    CONS3(ident, colon, stmt);
}

void label_node::attrib(int ctx)
{
    stmt->attrib(ctx);
}

void label_node::translate(int ctx)
{
    ident->set_trans(dprintf("L%s", ident->out_text));
    stmt->translate(ctx);
    f_tkn = ident;
    l_tkn = stmt->l_tkn;
}

with_node::with_node(token* t_with, expr_node* ptrs, token* t_do, stmt_node* body)
{
    CONS4(t_with, ptrs, t_do, body);
	nested_counter = 0;
}


int with_node::nested = 0;

static void push_with_context(b_ring* block, expr_node* ptr, stmt_node* body)
{
    record_tp  *type;
    symbol     *save_with = NULL;
    b_ring     **bpp = NULL;

    ptr->attrib(ctx_value);
    if (ptr->type == NULL) {
	body->attrib(ctx_value);
	return;
    }
    type = (record_tp*)ptr->type->get_typedef();

	if (type->tag == tp_record || type->tag == tp_object) {
		for (bpp = &b_ring::curr_b_ring; *bpp != NULL; bpp = &(*bpp)->outer) {
			if (*bpp == type) {
				*bpp = (*bpp)->outer;
				break;
			}
		}
		b_ring::push(type);
		save_with = type->with;

		if (ptr->tag == tn_atom
			&& (((atom_expr_node*)ptr)->var == NULL
				|| ((atom_expr_node*)ptr)->var->ring->scope != b_ring::record))
		{
			// Variable of unnamed type is used as 'with' expression
			// Do not create new variable in this case (since it's type will
			// be incompatible), instead of this substitute original variable
			type->with = ((atom_expr_node*)ptr)->var;
		} else {
			nm_entry* with = with_node::nested
				? nm_entry::add(dprintf("with%d", with_node::nested), TKN_IDENT)
				: nm_entry::add("with", TKN_IDENT);
			type->with = block->add(with, symbol::s_ref, type);
		}
		with_node::nested += 1;
	}
    if (ptr->next) push_with_context(block, ptr->next, body);
    else body->attrib(ctx_value);

	if (type->tag == tp_record || type->tag == tp_object) {
		type->with = save_with;
		with_node::nested -= 1;
		b_ring::pop(type);
		if (bpp != NULL) {
			type->outer = *bpp;
			*bpp = type;
		}
	}
}

void with_node::attrib(int)
{
    b_ring *block = new b_ring(b_ring::block);

    b_ring::push(block);
    nested_counter = nested;
    push_with_context(block, ptrs, body);
    b_ring::pop(block);
}

void with_node::translate(int ctx)
{
    token* stmt1;

    body->translate(ctx);
    t_do->disable();

    f_tkn = t_with;
    l_tkn = body->l_tkn;

	if (ptrs->tag == tn_atom && ptrs->next == NULL
		&& (((atom_expr_node*)ptrs)->var == NULL
		|| ((atom_expr_node*)ptrs)->var->ring->scope != b_ring::record))
	{
		token::disable(t_with, t_do);
		t_do->disappear();
		return;
	}

	if (body->is_compound()) {
		t_with->set_trans("{\n");
		body->l_tkn->set_bind(t_with);
		body->f_tkn->disable();
		stmt1 = body->f_tkn->next_relevant();
	} else {
		t_with->set_trans("{");
		l_tkn = body->l_tkn->append("}");
		stmt1 = body->f_tkn;
	}

	for (expr_node* e = ptrs; e != NULL; e = e->next) {
		e->translate(language_c ? ctx_access : ctx_value);

		if (e->tag == tn_atom
			&& (((atom_expr_node*)e)->var == NULL
				|| ((atom_expr_node*)e)->var->ring->scope != b_ring::record))
		{
			token::disable(e->f_tkn, e->l_tkn);
			token* comma = e->l_tkn->next_relevant();
			if (comma->tag == TKN_COMMA) {
				comma->disable();
			}
		} else if (e->type != NULL) {
			if (e->type->name == NULL && e->type->tpd != NULL) {
				assert(dynamic_cast<record_tpd_node*>(e->type->tpd)); // make sure that e->type->tpd has expected type
				((record_tpd_node*)e->type->tpd)->assign_name();
			}
			e->type->insert_before(e->f_tkn)->set_pos(stmt1);
			if (language_c) {
				if (nested_counter == 0) {
					e->f_tkn->prepend("* with = ");
				} else {
					e->f_tkn->prepend(dprintf("* with%d = ", nested_counter));
				}
				if (e->tag != tn_address) {
					e->f_tkn->prepend("&");
				}
			} else {
				if (nested_counter == 0) {
					e->f_tkn->prepend("& with = ");
				} else {
					e->f_tkn->prepend(dprintf("& with%d = ", nested_counter));
				}
			}
			if (e->l_tkn->next_relevant()->tag == TKN_COMMA) {
				e->l_tkn->next_relevant()->set_trans(";\n");
			} else {
				e->l_tkn->append(";");
			}
		}
		nested_counter += 1;
	}
    swallow_semicolon();
}

pcall_node::pcall_node(expr_node* fcall)
{
    CONS1(fcall);
}

void pcall_node::attrib(int)
{
    fcall->attrib(ctx_statement);
}

void pcall_node::translate(int)
{
    fcall->translate(ctx_statement);
    f_tkn = fcall->f_tkn;
    l_tkn = fcall->l_tkn;
    force_semicolon();
}


read_node::read_node(token* t_read, expr_group_node* params)
{
    CONS2(t_read, params);
}

void read_node::attrib(int)
{
    if( params ) params->attrib(ctx_lvalue);
}


void read_node::translate(int)
{
    f_tkn = l_tkn = t_read;

    if (language_c) {
		if (params) {
			char const* format = "";
			char const* newln = (t_read->tag == TKN_READLN) ? "\\n" : "";
			expr_node* prm = params->expr;

			l_tkn = params->rpar;

			if (prm->type->tag == tp_file) {
				prm->translate(ctx_value);
				expr_node* file = prm;
				while ((prm = prm->next) != NULL) {
					prm->translate(ctx_lvalue);
					if (prm->tag == tn_filevar && language_c) {
						prm->f_tkn->prepend("scopy(")->set_pos(t_read);
					} else {
						prm->f_tkn->prepend("sread(")->set_pos(t_read);
					}
					prm->f_tkn->copy(file->f_tkn, file->l_tkn);
					prm->f_tkn->prepend(", ");
					prm->l_tkn->append(")");
				}
				token::disable(t_read, file->l_tkn->next_relevant());
				params->rpar->disable();
				force_semicolon();
				return;
			}
			if (prm->type->tag == tp_text) {
				prm->translate(ctx_access);
				if (prm->tag != tn_address) {
					prm->f_tkn->prepend("&");
				}
				prm = prm->next;
				t_read->set_trans("tread");
			} else {
				t_read->set_trans("cread");
			}
			int n_params = 0;
			while (prm != NULL) {
				char fmt = '?';
				prm->translate(ctx_access);
				n_params += 1;
				switch (prm->type->tag) {
				case tp_dynarray:
				case tp_array:
					fmt = 's';
					((array_tp*)prm->type->get_typedef())
						->insert_dimensions(prm);
					break;
				case tp_real:
				case tp_double:
					fmt = 'f';
					break;
				case tp_integer:
					fmt = 'i';
					break;
				case tp_char:
					fmt = 'c';
					break;
				case tp_bool:
					fmt = 'b';
					break;
				case tp_range:
					switch (((range_tp*)prm->type->get_typedef())->size) {
					case 1: fmt = 'B'; break;
					case 2: fmt = 'W'; break;
					case 4: fmt = 'i'; break;
					default:
						warning(prm->f_tkn, "sizeof range type is %d", ((range_tp*)prm->type->get_typedef())->size);
					}
					break;
				default:
					warning(prm->f_tkn, "invalid parameter for read operator");
				}
				format = dprintf("%s%%%c", format, fmt);
				if (fmt != 's' && prm->tag != tn_address) {
					prm->f_tkn = prm->f_tkn->prepend("&");
				}
				prm = prm->next;
			}
			if (params->expr->type->tag == tp_text) {
				params->expr->l_tkn->append(dprintf(", \"%s%s\"", format, newln));
			} else {
				params->lpar->append(dprintf(n_params ? "\"%s%s\", " : "\"%s%s\"", format, newln));
			}
		}
		else if (t_read->tag == TKN_READLN) {
	    t_read->set_trans("cread(\"\\n\")");
	} else {
			warning(t_read, "read statement with no effect");
			t_read->disable();
		}

	} else { // C++
		if (params) {
			l_tkn = params->rpar;
			params->lpar->disable();
			params->rpar->disable();

			expr_node* prm = params->expr;
			bool newln = (t_read->tag == TKN_READLN);

			if (prm->type->tag == tp_text || prm->type->tag == tp_file) {
				prm->translate(ctx_value);
				if (prm->next) {
					prm->l_tkn->next_relevant()->set_trans(" >> ");
				}
				prm->f_tkn->set_pos(t_read);
				t_read->disable();
				prm = prm->next;
			} else {
				t_read->set_trans("input >> ");
			}
			while (prm != NULL) {
				prm->translate(ctx_lvalue);
				if (prm->next != NULL) {
					prm->l_tkn->next_relevant()->set_trans(" >> ");
				}
				prm = prm->next;
			}
			if (newln) {
				l_tkn = l_tkn->append(" >> NL");
			}
		} else if (t_read->tag == TKN_READLN) {
			t_read->set_trans("input >> NL");
		} else {
			warning(t_read, "read statement with no effect");
			t_read->disable();
		}
	}
    force_semicolon();
}


write_node::write_node(token* t_write, write_list_node* params)
{
    CONS2(t_write, params);
}

void write_node::attrib(int)
{
    if( params ) {
	params->attrib(ctx_value);
    }
}


static char* write_format;
static int   n_write_params;

void write_node::translate(int)
{
    f_tkn = l_tkn = t_write;

    if (language_c) {
        if (params) {
	    write_param_node *prm = params->vals;

	    l_tkn = params->rpar;
	    char const* newln = (t_write->tag == TKN_WRITELN) ? "\\n" : "";
            write_format = NULL;
	    if (prm->type->tag == tp_file) {
		prm->translate(ctx_value);
		expr_node* file = prm;
		while ((prm = (write_param_node*)prm->next) != NULL){
		    prm->translate(ctx_value);
		    prm->f_tkn->prepend("swrite(")->set_pos(t_write);
		    prm->f_tkn->copy(file->f_tkn, file->l_tkn);
		    prm->f_tkn->prepend(", ");
		    prm->l_tkn->append(")");
		}
		token::disable(t_write, file->l_tkn->next_relevant());
		params->rpar->disable();
		force_semicolon();
		return;
	    }
	    if (prm->type->tag == tp_text) {
		prm->translate(ctx_access);
		if (prm->val->tag != tn_address) {
		    prm->f_tkn->prepend("&");
		}
		prm = (write_param_node*)prm->next;
		t_write->set_trans("twrite");
	    } else {
		t_write->set_trans("cwrite");
	    }
	    write_format = "";
	    n_write_params = 0;
	    while( prm != NULL ) {
		prm->translate(ctx_value);
		prm = (write_param_node*)prm->next;
	    }
	    if (params->vals->type->tag == tp_text) {
			params->vals->l_tkn->append(dprintf(", \"%s%s\"", write_format, newln));
	    } else {
			params->lpar->append(dprintf(n_write_params ? "\"%s%s\", " : "\"%s%s\"", write_format, newln));
	    }
	} else if (t_write->tag == TKN_WRITELN) {
	    t_write->set_trans("cwrite(\"\\n\")");
	} else {
	    warning(t_write, "write statement with no effect");
	    t_write->disable();
	}

    } else { // language C++

	if (params) {
	    l_tkn = params->rpar;
	    //if (t_write->tag == TKN_STR) { // Turbo Pascal
		if (t_write->tag == TKN_WRITE) { // Turbo Pascal
			write_param_node *prm = params->vals;
			while (prm != NULL) {
				prm->translate(ctx_toascii);
				prm = (write_param_node*)prm->next;
			}
	    } else {
		params->lpar->disable();
		params->rpar->disable();

		write_param_node *prm = params->vals;
		bool newln = (t_write->tag == TKN_WRITELN);
		if (prm->type->tag == tp_text || prm->type->tag == tp_file) {
		    prm->translate(ctx_value);
		    if (prm->next) {
			prm->l_tkn->next_relevant()->set_trans( " << ");
		    }
		    prm->f_tkn->set_pos(t_write);
		    t_write->disable();
		    prm = (write_param_node*)prm->next;
		} else {
		    t_write->set_trans("output << ");
		}
		while (prm != NULL) {
		    prm->translate(ctx_value);
		    if (prm->next != NULL) {
			prm->l_tkn->next_relevant()->set_trans(" << ");
		    }
		    prm = (write_param_node*)prm->next;
		}
		if (newln) {
		    l_tkn = l_tkn->append(" << NL");
		}
	    }
	} else if (t_write->tag == TKN_WRITELN) {
	    t_write->set_trans("output << NL");
	} else {
	    warning(t_write, "write statement with no effect");
	    t_write->disable();
	}
    }
    force_semicolon();
}

compound_node::compound_node(token* t_begin,  stmt_node* body, token* t_end)
{
    CONS3(t_begin, body, t_end);
}

void compound_node::attrib(int)
{
    for (stmt_node* stmt = body; stmt != NULL; stmt = stmt->next) {
        stmt->attrib(ctx_statement);
    }
}

void compound_node::translate(int)
{
    f_tkn = t_begin;
    l_tkn = t_end;
    for (stmt_node* stmt = body; stmt != NULL; stmt = stmt->next) {
        stmt->translate(ctx_statement);
    }
    t_begin->set_trans("{");
    t_end->set_trans("}");
    swallow_semicolon();
}

raise_node::raise_node(token* t_raise, expr_node* expr)
{
	CONS2(t_raise, expr);
}

void raise_node::attrib(int ctx)
{
	expr->attrib(ctx);
}

void raise_node::translate(int)
{
	t_raise->set_trans("throw");
}

void raise_node::print_debug()
{ 
	fprintf(stderr, "raise:"); expr->print_debug(); 
};


try_finally_node::try_finally_node(token* t_try, stmt_node* body1, token* t_finally, stmt_node* body2, token* t_end)
{
	CONS5(t_try, body1, body2, t_finally, t_end);
}

void try_finally_node::attrib(int)
{
	for (auto body = body1; body != NULL; body = body->next)
	{
		body->attrib(ctx_block);
	}

	if (body2)
	{
		for (auto body = body2; body != NULL; body = body->next)
		{
			body->attrib(ctx_block);
		}
	}
}

void try_finally_node::translate(int)
{
	t_try->set_trans("__try \n{");
	
	for (auto body = body1; body != NULL; body = body->next)
	{
		body->translate(ctx_block);
	}

	t_finally->prepend("}\n");
	t_finally->set_trans("__finally \n{");
	
	for (auto body = body2; body != NULL; body = body->next)
	{
		body->translate(ctx_block);
	}

	if (t_end) t_end->set_trans("}");

}

try_except_node::try_except_node(token* t_try, stmt_node* body1, token* t_except, stmt_node* ex_many, token* t_else, stmt_node* body2, token* t_end)
{
	CONS7(t_try, body1, t_except, ex_many, t_else, body2, t_end);
}

void try_except_node::attrib(int)
{
	for (auto body = body1; body != NULL; body = body->next)
	{
		body->attrib(ctx_block);
	}

	for (auto ex = ex_many; ex != NULL; ex = ex->next)
	{
		ex->attrib(ctx_block);
	}

	if (body2)
	{
		for (auto body = body2; body != NULL; body = body->next)
		{
			body->attrib(ctx_block);
		}
	}
}

void try_except_node::translate(int)
{
	t_try->set_trans("try \n{");
	t_except->disable();

	for (auto body = body1; body != NULL; body = body->next)
	{
		body->translate(ctx_block);
	}

	t_except->prepend("}");

	for (auto ex = ex_many; ex != NULL; ex = ex->next)
	{
		ex->translate(ctx_block);
	}

	if (t_else) 
	{
		t_else->set_trans("catch(...) {");
	}

	if (body2) 
	{
		for (auto body = body2; body != NULL; body = body->next)
		{
			body->translate(ctx_block);
		}	
	}

	if (t_end) t_end->set_trans("}");
}

on_except_node::on_except_node(token* t_on, token* t_ident, token* t_coln, tpd_node* ex_type, token* t_do, stmt_node* body)
{
	CONS6(t_on, t_ident, t_coln, ex_type, t_do, body);
}

void on_except_node::attrib(int ctx)
{
	ex_type->attrib(ctx);
	body->attrib(ctx);
}

void on_except_node::translate(int ctx)
{
	//f_tkn = t_on;
	//l_tkn = body->;

	body->translate(ctx);

	t_on->set_trans("catch(");
	t_coln->disable();
	
	ex_type->translate(ctx);
	t_ident->copy(ex_type->f_tkn, ex_type->l_tkn);
	token::disable(ex_type->f_tkn, ex_type->l_tkn);
	t_ident->prepend("& ");
	t_do->set_trans(")");
}

inherited_node::inherited_node(token* t_inherited, token* t_ident, token* t_lpar, expr_node* params, token* t_rpar)
	: expr_node(tn_fcall)
{
	CONS5(t_inherited, t_ident, t_lpar, params, t_rpar);
}
void inherited_node::attrib(int)
{
	assert(!(t_ident == NULL && params != NULL));
	
	for (expr_node* e = params; e != NULL; e = e->next) {
		e->attrib(ctx_valpar); //TODO not sure if here should be ctx_valpar
	}

	f_tkn = t_inherited;
	l_tkn = t_rpar ? t_rpar : (t_ident ? t_ident : t_inherited);
}
void inherited_node::translate(int)
{
	// *** see function proc_def_node::attrib(int ctx) how to find class and work with it.
	
	object_tp* r = dynamic_cast<object_tp*>(curr_proc->forward->var->ring);
	assert(r);
	auto otpd = dynamic_cast<object_tpd_node*>(r->tpd);
	assert(otpd);
	token* anc_class = NULL;

	if (otpd->t_ancestorlist == NULL)
	{
		anc_class = new token("TBaseClass");
		warning(t_inherited/*curr_proc->forward->f_tkn*/, "Class '%s' does not have superclass. 'inherited' does nothing.", otpd->type->name /*curr_proc->forward->t_proc->out_text*/);
		t_inherited->set_trans("TBaseClass::"); //TODO temporary solution, think what to do in this case.
	}
	else 
	{
		anc_class = otpd->t_ancestorlist->ident; // first ancestor in list is a parent class
		t_inherited->set_trans(dprintf("%s::", anc_class->in_text)); 
	}

	if (params)
	{
		for (expr_node* e = params; e != NULL; e = e->next)
			e->translate(ctx_valpar); //TODO not sure if here should be ctx_valpar

		t_ident->prev->disable(); // remove space between 'inherited' and name of calling method, it is not needed any more
	}
	else
	{
		if (t_ident)
		{
			t_inherited->next->disappear(); // remove space(s) between TBaseClass:: and method name
			l_tkn = t_ident->append("()");
		}
		else
		{
			l_tkn = t_ident = t_inherited->append(curr_proc->proc_name); // if ident is missing than use current proc name for it

			l_tkn = l_tkn->append("(");
			for (param_spec* par = curr_proc->params; par != NULL; par = par->next)
			{
				l_tkn = l_tkn->append(par->var->out_name->text);
				if (par->next) l_tkn = l_tkn->append(", ");
			}
			l_tkn = l_tkn->append(")");
		}
	}

	if (curr_proc->is_constructor)
	{
		t_ident->set_trans(anc_class->in_text); // if ident is missing than use current proc name for it
	}

	if (curr_proc->is_destructor)
	{
		t_ident->set_trans(dprintf("~%s", anc_class->in_text)); // if ident is missing than use current proc name for it
	}

	//token::disable(t_inherited->next, t_inherited->next_relevant()->prev); // remove space between 'inherited' and name of calling method, it is not needed any more
	//token::disable(t_ident->next, t_ident->next_relevant()->prev);
}


assign_node* assign_node::stmt;

assign_node::assign_node(expr_node* lval, token* assign, expr_node* rval)
{
    CONS3(lval, assign, rval);
}

void assign_node::attrib(int)
{
    lval->attrib(ctx_lvalue);
    rval->attrib(lval->type && lval->type->tag == tp_proc
		 ? ctx_procptr : ctx_rvalue);
    if (lval->type && lval->type->tag == tp_set) {
	rval->type = lval->type->get_typedef();
    }
}

void assign_node::translate(int)
{
    stmt = this;
    lval->translate(ctx_lvalue);
    if (lval->tag == tn_filevar) {
	rval->translate(ctx_value);
	f_tkn = lval->f_tkn->prepend("store(");
	token::disable(lval->l_tkn->next, rval->f_tkn->prev);
	lval->l_tkn->append(", ");
	l_tkn = rval->l_tkn->append(")");
	force_semicolon();
	return;
    }
    rval->translate(lval->type && lval->type->tag == tp_proc
		    ? ctx_procptr : ctx_rvalue);

	if (language_c && rval->tag == tn_retarr) {
		// function return array right in assignment destination
		//   lval is moved into function arguments
		f_tkn = rval->f_tkn;
		l_tkn = rval->l_tkn;
		assign->disable();
		force_semicolon();
		return;
	}
    f_tkn = lval->f_tkn;
    l_tkn = rval->l_tkn;
    if (lval->type && (lval->type->tag == tp_array || lval->type->tag == tp_varying_string)) {
	if (language_c) {
		if (rval->type && rval->type->tag == tp_char) {
			f_tkn = lval->f_tkn->prepend("*");
			assign->set_trans("=");
		} else {
			token::disable(lval->l_tkn->next, rval->f_tkn->prev);
			lval->l_tkn->append(", ");
			if (lval->is_parameter()) {
				f_tkn = lval->f_tkn->prepend("memcpy(");
				if (lval->type->name != NULL) {
					l_tkn = rval->l_tkn->append(dprintf(", sizeof(%s))", lval->type->name));
				} else {
					l_tkn = rval->l_tkn->append(", ")->append("*sizeof(*");
					((array_tp*)lval->type->get_typedef())->insert_length(l_tkn);
					l_tkn = l_tkn->append("))");
					l_tkn->copy(lval->f_tkn, lval->l_tkn);
				}
			} else {
				f_tkn = lval->f_tkn->prepend("arrcpy(");
				token::disable(lval->l_tkn->next, rval->f_tkn->prev);
				lval->l_tkn->append(", ");
				l_tkn = rval->l_tkn->append(")");
			}
		}
	} else { // language C++
		if (no_array_assign_operator && rval->type &&
			(rval->type->tag == tp_char || rval->type->tag == tp_string))
		{
#if 0
			if (rval->type->tag == tp_char) {
				f_tkn = lval->f_tkn->prepend("*");
				assign->set_trans("=");
			} else
#endif
			{
				token::disable(lval->l_tkn->next, rval->f_tkn->prev);
				lval->l_tkn->append(".assign(");
				l_tkn = rval->l_tkn->append(")");
			}
		} else {
			assign->set_trans("=");
		}
	}
    } else {
	if (assign->tag == TKN_LET) {
	    assign->set_trans("=");
	}
    }
    force_semicolon();
}

void assign_node::print_debug() 
{ 
	fprintf(stderr, "assign_node. lval:");  lval->print_debug();
	fprintf(stderr, ", rval:");  rval->print_debug();
};



goto_node::goto_node(token* t_goto, token* t_label)
{
    CONS2(t_goto, t_label);
}

void goto_node::attrib(int)
{
}

void goto_node::translate(int)
{
    t_label->set_trans(dprintf("L%s", t_label->out_text));
    f_tkn = t_goto;
    l_tkn = t_label;
    force_semicolon();
}

//--------------------------------------------------------------------

case_node::case_node(expr_node* list, token* coln, stmt_node* stmt)
{
    CONS3(list, coln, stmt);
    next = NULL;
}

void case_node::attrib(int ctx)
{
    for (expr_node* e = list; e != NULL; e = e->next) {
	e->attrib(ctx);
    }
    stmt->attrib(ctx);
    if (turbo_pascal) {
	for (stmt_node* st = stmt->next; st != NULL; st = st->next) {
	    st->attrib(ctx);
	}
    }
}

void case_node::translate(int)
{
	if (list == NULL) {
		assert(turbo_pascal ? coln->tag == TKN_ELSE : coln->tag == TKN_OTHERWISE);
		coln->set_trans("default:");
		stmt->translate(ctx_statement);
		if (turbo_pascal) {
			for (stmt_node* st = stmt->next; st != NULL; st = st->next) {
				st->translate(ctx_statement);
			}
		}
		f_tkn = coln;
		l_tkn = stmt->l_tkn;

	} else {

	for (expr_node* e = list; e != NULL; e = e->next) {
	    e->translate(ctx_value);
	    e->f_tkn->prepend("case ");
	    e->l_tkn->next_relevant()->set_trans(":");  // replace comma
	}
	stmt->translate(ctx_statement);
	f_tkn = list->f_tkn;
	if (f_tkn->line != stmt->l_tkn->line) {
	    l_tkn = stmt->l_tkn->append("break;");
            l_tkn->set_bind(stmt->l_tkn->get_first_token());
	    stmt->l_tkn->append("\n");
        } else {
	    l_tkn = stmt->l_tkn->append(" break;");
	}
    }
}


switch_node::switch_node(token* t_case, expr_node* expr, token* t_of,
		         case_node* cases, token* t_end)
{
    CONS5(t_case, expr, t_of, cases, t_end);
}

void switch_node::attrib(int)
{
    expr->attrib(ctx_condition);
    for (case_node *c = cases; c != NULL; c = c->next) {
	c->attrib(ctx_statement);
    }
}

void switch_node::translate(int)
{
    f_tkn = t_case;
    l_tkn = t_end;
    expr->translate(ctx_value);
    t_case->set_trans("switch");
    if (expr->tag != tn_group) {
        expr->f_tkn->prepend("(");
        expr->l_tkn->append(")");
    }
    t_of->set_trans("{");
    for (case_node *c = cases; c != NULL; c = c->next) {
        c->translate(ctx_statement);
    }
    t_end->set_trans("}");
    swallow_semicolon();
}

if_node::if_node(token* t_if, expr_node* expr, token* t_then,
		 stmt_node* alt1, token* t_else, stmt_node* alt2)
{
    CONS6(t_if, expr, t_then, alt1, t_else, alt2);
}

void if_node::attrib(int)
{
    expr->attrib(ctx_condition);
    alt1->attrib(ctx_statement);
    if (alt2) {
	alt2->attrib(ctx_statement);
    }
}

void if_node::translate(int)
{
    expr->translate(ctx_condition);
    f_tkn = t_if;
    if (expr->tag != tn_group) {
        expr->f_tkn->prepend("(");
        expr->l_tkn->append(")");
    }
    t_then->disable();
    alt1->translate(ctx_statement);
    l_tkn = alt1->l_tkn;
    if (alt2) {
        alt2->translate(ctx_statement);
	l_tkn = alt2->l_tkn;
    }
}

for_node::for_node(token* t_for, token* t_ident, token* t_asg,
	           expr_node* from, token* t_to, expr_node* till,
	           token* t_do, stmt_node* body)
{
    CONS8(t_for, t_ident, t_asg, from, t_to, till, t_do, body);
	var = NULL;
}

void for_node::attrib(int)
{
    from->attrib(ctx_value);
    till->attrib(ctx_value);
    body->attrib(ctx_statement);
    var = b_ring::search_cur(t_ident);
}

void for_node::translate(int ctx)
{
    if (var != NULL) {
	var->translate(t_ident);
    }
    t_for->append("(");
    t_asg->set_trans("=");
    from->translate(ctx_value);
    from->l_tkn->append(";");
    t_to->set_trans(t_ident->out_text);
    t_to->append(t_to->name->tag == TKN_TO ? " <=" : " >=");
    till->translate(ctx_value);
    till->l_tkn->append(";");
    if (t_to->name->tag == TKN_TO) {
	if (var && var->type->tag == tp_enum && var->type->name != NULL) {
	    t_do->set_trans(dprintf("%s = succ(%s,%s))", t_ident->out_text, var->type->name, t_ident->out_text));
	} else {
	    t_do->set_trans(dprintf("%s ++)", t_ident->out_text));
	}
    } else {
	if (var && var->type->tag == tp_enum && var->type->name != NULL) {
	    t_do->set_trans(dprintf("%s = pred(%s,%s))", t_ident->out_text, var->type->name, t_ident->out_text));
	} else {
	    t_do->set_trans(dprintf("%s --)", t_ident->out_text));
	}
    }
    body->translate(ctx);
    f_tkn = t_for;
    l_tkn = body->l_tkn;
}

while_node::while_node(token* t_while, expr_node* expr, token* t_do,
	               stmt_node* body)
{
    CONS4(t_while, expr, t_do, body);
}

void while_node::attrib(int ctx)
{
    expr->attrib(ctx_condition);
    body->attrib(ctx);
}

void while_node::translate(int ctx)
{
    expr->translate(ctx_condition);
    if (expr->tag != tn_group) {
        expr->f_tkn->prepend("(");
        expr->l_tkn->append(")");
    }
    t_do->disable();
    body->translate(ctx);
    f_tkn = t_while;
    l_tkn = body->l_tkn;
}

repeat_node::repeat_node(token* t_repeat, stmt_node* body, token* t_until,
			 expr_node*expr)
{
    CONS4(t_repeat, body, t_until, expr) ;
}

void repeat_node::attrib(int ctx)
{
    for (stmt_node *stmt = body; stmt != NULL; stmt = stmt->next) {
        stmt->attrib(ctx);
    }
    expr->attrib(ctx_condition);
}

void repeat_node::translate(int ctx)
{
    bool body_is_block =
	body != NULL && body->is_compound() && body->next == NULL;

    t_repeat->set_trans(body_is_block ? "do" : "do {");
    for (stmt_node *stmt = body; stmt != NULL; stmt = stmt->next) {
        stmt->translate(ctx);
    }
    t_until->set_trans(body_is_block ? "while" : "} while");
    expr->translate(ctx_condition);
    f_tkn = t_repeat;
    l_tkn = expr->l_tkn;
    if (expr->tag != tn_group && expr->tag != tn_atom) {
        expr->f_tkn->prepend("(!(");
        l_tkn = expr->l_tkn->append("))");
    } else {
        expr->f_tkn->prepend("(!");
        l_tkn = expr->l_tkn->append(")");
    }
    force_semicolon();
}

/*
return_node::return_node(token* t_return)
{
    CONS1(t_return);
}

void return_node::attrib(int)
{
}

void return_node::translate(int)
{
    l_tkn = f_tkn = t_return;
    if (curr_proc->is_function()) {
	if (language_c && curr_proc->res_type->tag == tp_array) {
	    l_tkn = t_return->append(dprintf(" (%s*)%s_result", curr_proc->res_type->name, curr_proc->proc_name));
	} else {
	    if (curr_proc->is_constructor || curr_proc->is_destructor) {
			l_tkn = t_return->append(" this");
	    } else {
			l_tkn = t_return->append(dprintf(" %s_result", curr_proc->proc_name));
	    }
	}
    }
    force_semicolon();
}
*/

empty_node::empty_node(token* t_last)
{
    CONS1(t_last);
}

void empty_node::attrib(int)
{
	assert(t_last);
    f_tkn = l_tkn = t_last;
}

void empty_node::translate(int)
{
    token* last = l_tkn;
    token* prev = last->next->prev_relevant();
    if (prev->out_text == NULL || strcmp(prev->out_text, "}") != 0) {
        force_semicolon();
    }
    l_tkn->set_pos(last);
}


//
// Expression level
//
expr_node::expr_node(int expr_tag, int expr_flags) 
{
	tag = (char)expr_tag;
	parent_tag = tn_group;
	type = NULL;
	flags = (char)expr_flags;
	next = NULL;
	value = 0;
}

bool expr_node::is_parameter()
{
    symbol *var = ((atom_expr_node*)this)->var;
    return tag == tn_atom
	&& ((var->flags & (symbol::f_val_param|symbol::f_var_param))
	    || (var->ring->scope != b_ring::record
		&& var->ring != curr_proc
		&& var->ring->scope != b_ring::global));
}

atom_expr_node::atom_expr_node(token* t_tkn) : expr_node(tn_atom)
{
    CONS1(t_tkn);
	var = NULL;
	temp = NULL;
	with = NULL;
}

void atom_expr_node::attrib(int ctx)
{
	l_tkn = f_tkn = t_tkn;

	if (turbo_pascal && t_tkn->name->tag == TKN_SELF) { //TODO can we replace t_tkn->name->tag to t_tkn->tag? 
		assert(proc_def_node::self != nullptr);
		type = proc_def_node::self;
		with = proc_def_node::self->with;
		tag = tn_self;
		var = nullptr;
	} else if (turbo_pascal && t_tkn->name->tag == TKN_EXIT) {  //TODO can we replace t_tkn->name->tag to t_tkn->tag?
		type = &void_type; // do NOT replace to &any_type
	}
	else if (t_tkn->tag == TKN_BREAK) {
		type = &void_type; // do NOT replace to &any_type
	}
	else if (!turbo_pascal || t_tkn->name->tag != TKN_ABSTRACT) { //TODO can we replace t_tkn->name->tag to t_tkn->tag?
 		var = b_ring::search_cur(t_tkn);
		if (var != nullptr) {
			if (var->type == nullptr) {
				warning(t_tkn, "type of variable '%s' is unknown", t_tkn->in_text);
				var->type = &any_type; // &void_type
 			}

			type = var->type;
			with = var->ring->with;

			if (var->flags & symbol::f_const) {
				flags |= tn_is_const;
				value = var->value;
			}

			if (type->tag == tp_proc) {
				if (ctx == ctx_lvalue) {
					if (type == curr_proc) {
						type = curr_proc->res_type;
						if (type == NULL) {
							error(t_tkn, "attempt to return value from procedure");
						}
					}
				} else {
					if (ctx == ctx_procptr) {
						var->out_name->flags |= nm_entry::recursive;
					} else if (ctx != ctx_apply) {
						proc_tp* prc = (proc_tp*)type->get_typedef();
						prc->add_caller(curr_proc);
						type = prc->res_type;
						if (language_c && type != NULL && type->tag == tp_array
							&& ctx != ctx_rvalue)
						{
							temp = curr_proc->add_temp(type);
						}
					}
				}
			} else {
				if (var->ring->scope == b_ring::proc && var->ring != curr_proc)
				{
					if (var->tag == symbol::s_const) {
						if (!(var->flags & symbol::f_static)) {
							var->flags |= symbol::f_static;
							var->ring->make_unique(var);
						}
					} else {
						curr_proc->add_extra_param(var);
					}
				}
				if (ctx == ctx_lvalarray || ctx == ctx_lvalue) {
					var->flags |= symbol::f_lvalue;
				}
			}
		} else {
			// Let converter work well even with incorrect code
			warning(t_tkn, "undefined identifier '%s'", t_tkn->in_text);
			type = &any_type; //&void_type;
			with = nullptr;
		}
	}
}

void atom_expr_node::translate(int ctx)
{
	if (turbo_pascal && t_tkn->name->tag == TKN_SELF) {  //TODO can we replace t_tkn->name->tag to t_tkn->tag?
		if (ctx == ctx_access) 
			t_tkn->set_trans("this");
		else 
			t_tkn->set_trans("(*this)");

		return;
	}
	else if (turbo_pascal && t_tkn->name->tag == TKN_EXIT) { //TODO can we replace t_tkn->name->tag to t_tkn->tag?
		if (curr_proc && curr_proc->res_type) {
			if (curr_proc->proc_name != NULL) 
				t_tkn->set_trans(dprintf("return %s_result", curr_proc->proc_name));
			else 
				t_tkn->set_trans("return 0");
		}
		else {
			t_tkn->set_trans("return");
		}
		return;
	}
	else if (turbo_pascal && t_tkn->name->tag == TKN_ABSTRACT) {
		t_tkn->set_trans("assert(\"abstract method is called\",false)");
		return;
	}
	else if (t_tkn->tag == TKN_BREAK) {
		return; // noting special to do
	}

	if (var != NULL) {
		var->translate(t_tkn);
		if (var->type == curr_proc && ctx == ctx_lvalue) {
			t_tkn->set_trans(dprintf("%s_result", curr_proc->proc_name));

		}
		else if (var->type->tag == tp_proc) {
			if (turbo_pascal && t_tkn->name->tag == TKN_HALT) {
				t_tkn->set_trans(ctx == ctx_apply ? "exit" : "exit(0)");
				return;
			}
			proc_tp* prc = (proc_tp*)var->type->get_typedef();
			if (ctx != ctx_procptr && ctx != ctx_apply && ctx != ctx_lvalue) {
				token* lpar = t_tkn->append("(");
				token* t = lpar;
				bool first = true;
				param_spec* prm;

				if (language_c) {
					for (prm = prc->params; prm != NULL; prm = prm->next)
					{
						if (!first) {
							t = t->append(", ");
						}
						first = false;
						if (prm->var->type->tag == tp_file || prm->var->type->tag == tp_text)
						{
							t = t->append(strcmp(var->in_name->text, "page") ? "input" : "output");
						} else {
							t = t->append("0");
						}
					}
				}
				for (prm = prc->extra_params; prm != NULL; prm = prm->next)
				{
					if (prm->var->flags & symbol::f_static) continue;

					if (!first) {
						t = t->append(", ");
					}
					first = false;

					if (language_c && prm->var->tag != symbol::s_ref
						&& (prm->var->tag != symbol::s_const
							|| !prm->var->type->is_scalar())
						&& prm->var->ring == curr_proc
						&& !prm->var->type->is_array())
					{
						t = t->append("&");
					}
					t = t->append(prm->var->out_name->text);
				}

				l_tkn = t = t->append(")");
				if (language_c && type != NULL && type->tag == tp_array) {
					if (!first) {
						t = lpar->append(", ");
					}
					if (ctx == ctx_rvalue) {
						f_tkn->set_pos(assign_node::stmt->lval->f_tkn);
						t->move(assign_node::stmt->lval->f_tkn,
							assign_node::stmt->lval->l_tkn);
						tag = tn_retarr;
					} else {
						t->prepend(temp);
						f_tkn = f_tkn->prepend("*");
					}
				}
			} // endif not function  pointer
		}
		else if (var->ring->scope == b_ring::record) {
			if (with != NULL) {
				f_tkn = t_tkn->prepend(language_c && with->tag == symbol::s_ref ? "->" : ".")->prepend(with->out_name->text);
			}

		}
		else if (language_c &&
			(!var->type->is_array()
				&& (var->tag != symbol::s_const || !var->type->is_scalar())
				&& (var->tag == symbol::s_ref
					|| (!(var->flags & symbol::f_static)
						&& var->ring->scope != b_ring::record
						&& var->ring != curr_proc
						&& var->ring->scope != b_ring::global))))
		{
			if (ctx == ctx_access) {
				tag = tn_address;
			} else if (ctx == ctx_array || ctx == ctx_lvalarray) {
				f_tkn = t_tkn->prepend("(*");
				l_tkn = t_tkn->append(")");
			} else {
				f_tkn = t_tkn->prepend("*");
			}
		} else if (ctx == ctx_statement) {
			l_tkn = t_tkn->append("()");
		}
	}
}

literal_node::literal_node(token* value_tkn, int tag) : expr_node(tag, tn_is_literal)
{
    CONS1(value_tkn);
}

integer_node::integer_node(token* value_tkn) : literal_node(value_tkn, tn_intnum)
{
	radix = 0;
    flags |= tn_is_const;
}

// binary string to integer conversion 
static long long btoi(char* s)
{
    long long val = 0;
    while (*s == '0' || *s == '1') {
		val = (val << 1) | (*s++ - '0');
    }
    return val;
}

// conversion of integer constant into binary string representation 
static char* itob(long long x) 
{
	long long xx = x;
	char* s = (char*)malloc(65); // 64bits + terminating zero
	
	int sig_bit = 0;
	for (int i = 0; i < 64; i++) { // find position of the most significan bit in x
		if (xx & 0x01) sig_bit = i;
		xx >>= 1;
	}

	for (int i = sig_bit; i >= 0; --i) {
		s[i] = (x & 0x01) ? '1' : '0';
		x >>= 1;
	}
	
	s[sig_bit + 1] = '\0';

	return s;
}


// creates a copy of string with '_' symbols removed
// used to remove underscores from integer contanta like 50_000_000
static char* normalize_int_const(char* val)
{
	char* nval = _strdup(val);
	char* f = nval;

	while (*val != '\0') {
		if (*val != '_') *f = *val, f++;
		val++;
	}
	*f = '\0';
	return nval;
}

#define check_error(b_expr) if(!(b_expr)) warning(value_tkn, "cannot parse integer value.")

void integer_node::attrib(int)
{
    type = &integer_type;
    char* p = normalize_int_const(value_tkn->in_text);
	
	// Value field has long long type which is 64bit to cover all possible integer values in Delphi code
    if (p[0] == '0' && (p[1] == 'x' || p[1] == 'X'))
    {
		check_error(sscanf(p + 2, "%llx", &value) > 0);
		radix = 16;
    } else if (turbo_pascal && *p == '$') { //hex
		check_error(sscanf(p + 1, "%llx", &value) > 0);
		radix = 16;
    } else if(*p == '%') { // binary 
		value = btoi(p + 1);
		radix = 2;
    } else if(strncmp(p, "2#", 2) == 0) { // binary?
		value = btoi(p + 2); 
		radix = 2;
    } else if(strncmp(p, "8#", 2) == 0) {
		check_error(sscanf(p + 2, "%llo", &value) > 0);
		radix = 8;
    } else if(strncmp(p, "16#", 3) == 0) {
		check_error(sscanf(p + 3, "%llx", &value) > 0);
		radix = 16;
    } else if(strncmp(p, "10#", 3) == 0) {
		check_error(sscanf(p + 3, "%lld", &value) > 0);
		radix = 10;
	} else {
		int len = (int)strlen(p) - 1;
		if (p[len] == 'h' || p[len] == 'H') {
			check_error(sscanf(p, "%llx", &value) > 0);
			radix = 16;
		}
		else if (p[len] == 'b' || p[len] == 'B') { // binary
			value = btoi(p);
			radix = 2;
		}
		else {
			check_error(sscanf(p, "%lld", &value) > 0);
			radix = 10;
		}
	}

	if (value > INT_MAX) type = &int64_type;
}

void integer_node::translate(int)
{
    f_tkn = l_tkn = value_tkn; //TODO move to attrib()? for consistency

	switch (radix) {
	case 2:
		value_tkn->set_trans(dprintf("0b%s", itob(value)));
		break;
	case 8:
		value_tkn->set_trans(dprintf("%#llo", value));
		break;
	case 10:
		value_tkn->set_trans(dprintf("%lld", value));
		break;
	case 16:
		value_tkn->set_trans(dprintf("%#llx", value));
		break;
	default:
		error(value_tkn, "incorrect radix (%d) in integer_node", radix);
	}
}


double_node::double_node(token* value_tkn) : literal_node(value_tkn, tn_realnum) {}

void double_node::attrib(int)
{
    type = &double_type;
}

void double_node::translate(int)
{
    f_tkn = l_tkn = value_tkn;
}

string_node::string_node(token* value_tkn) : literal_node(value_tkn, tn_string) {}

void string_node::attrib(int)
{
    char *s = value_tkn->out_text;

    if ((s[0] == '\'' && s[1] != '\'' && s[2] == '\'' && s[3] == '\0') ||
       (s[0] == '\'' && s[1] == '\'' && s[2] == '\'' && s[3] == '\'' && s[4] == '\0') ||
	s[0] == '#' && strchr(s+1, '#') == NULL && strchr(s+1, '\'') == NULL)
    {
        type = &char_type;
    } else {
        type = &string_type;
    }
}

void string_node::translate(int ctx)
{
    char *s = value_tkn->out_text;

    f_tkn = l_tkn = value_tkn;

	if (s[0] == '\'' && s[1] != '\'' && s[2] == '\'' && s[3] == '\0') {
		tag = tn_char;
		value = (unsigned char)s[1];
		if (s[1] == '\\') {
			s[2] = '\\';
			s[3] = '\'';
			s[4] = '\0';
		}
	} else if (s[0] == '\'' && s[1] == '\'' && s[2] == '\''
		&& s[3] == '\'' && s[4] == '\0')
	{
		tag = tn_char;
		value = '\'';
		s[1] = '\\';
	} else if (s[0] == '#' && strchr(s + 1, '#') == NULL
		&& strchr(s + 1, '\'') == NULL)
	{
		tag = tn_char;
		if (s[1] == '$') {
			sscanf(s + 2, "%llx\n", &value);
			value_tkn->set_trans(dprintf("'\\x%llx'", value));
		} else {
			sscanf(s + 1, "%lld\n", &value);
			value_tkn->set_trans(dprintf("'\\%llo'", value));
		}
	} else {
	if (!language_c && ctx == ctx_record) {
	    char *buf = new char[strlen(s)*4];
	    char ch, *d = buf;
	    *d++ = '{';
	    *d++ = '{';
	    bool in_quotes = false;
	    while((ch = *s++) != '\0') {
		switch(ch) {
		  case '\\':
		    *d++ = '\\';
		    *d++ = '\\';
		    continue;
		  case '\'':
			  if (in_quotes) {
				  if (*s == '\'') {
					  if (*(d - 1) != '{') *d++ = ',';
					  *d++ = '\'';
					  *d++ = '\\';
					  *d++ = '\'';
					  *d++ = '\'';
					  s += 1;
				  }
				  in_quotes = false;
			  } else {
				  in_quotes = true;
			  }
		    continue;
		  case '#':
		    if (!in_quotes) {
			if (*(d-1) != '{') *d++ = ',';
			if (*s == '$') {
			    *d++ = '0';
			    *d++ = 'x';
			    s += 1;
			    while (ch = *++s, isxdigit((unsigned char)ch)) {
				*d++ = ch;
			    }
			} else {
			    while ((ch = *s++) >= '0' && ch <= '9') {
				*d++ = ch;
			    }
			    s -= 1;
			}
			continue;
		    }
		  default:
		    if (*(d-1) != '{') *d++ = ',';
		    *d++ = '\'';
		    *d++ = ch;
		    *d++ = '\'';
		}
	    }
	    *d++ = '}';
	    *d++ = '}';
	    *d++ = '\0';
	    value_tkn->set_trans(buf);
	    return;
	} else {
	    char *buf = new char[strlen(s)*2 + 1];
	    char ch, *d = buf;
	    bool in_quotes = false;
	    *d++ = '"';
	    while((ch = *s++) != '\0') {
		switch(ch) {
		  case '\\':
		    *d++ = '\\';
		    *d++ = '\\';
		    continue;
		  case '"':
		    *d++ = '\\';
		    *d++= '"';
		    continue;
		  case '\'':
		    if (in_quotes) {
			if (*s == '\'') {
			    *d++ = '\'';
			}
			in_quotes = false;
		    } else {
			in_quotes = true;
		    }
		    continue;
		  case '?':
		    if (s[-1] == '?' &&
			(s[1] == '=' || s[1] == '/' ||
			 (s[1] == '\'' && s[2] == '\'') ||
			 s[1] == '(' || s[1] == ')' || s[1] == '!' ||
			 s[1] == '-' || s[1] == '<' || s[1] == '>'))
		    {
			*d++ = '\\';
                    }
		    *d++ = ch;
		    continue;
		  case '#':
		    if (!in_quotes) {
			int code = 0;
			if (*s == '$') {
			    *d++ = '\\';
			    *d++ = 'x';
			    while (ch = *++s, isxdigit((unsigned char)ch)) {
				*d++ = ch;
			    }
			    continue;
			} else {
			    while ((ch = *s++) >= '0' && ch <= '9') {
				code = code*10 + ch - '0';
			    }
			    s -= 1;
			}
			switch (code) {
			  case '\n':
			    *d++ = '\\';
			    *d++ = 'n';
			    break;
			  case '\t':
			    *d++ = '\\';
			    *d++ = 'n';
			    break;
			  case '\r':
			    *d++ = '\\';
			    *d++ = 'r';
			    break;
			  case '\f':
			    *d++ = '\\';
			    *d++ = 'f';
			    break;
			  case '\b':
			    *d++ = '\\';
			    *d++ = 'b';
			    break;
			  case '\v':
			    *d++ = '\\';
			    *d++ = 'v';
			    break;
			  default:
			    *d++ = '\\';
			    d += sprintf(d, "%o", code);
			}
			continue;
		    }
		  default:
		    *d++ = ch;
		}
	    }
	    *d++ = '"';
	    *d++ = '\0';
	    value_tkn->set_trans(buf);
	}
    }
}

set_elem_node::set_elem_node(expr_node* item)
{
    CONS1(item);
}

void set_elem_node::attrib(int ctx)
{
    item->attrib(ctx);
    type = item->type;
}

void set_elem_node::translate(int ctx)
{
    item->translate(ctx);
    f_tkn = item->f_tkn;
    l_tkn = item->l_tkn;
    if (language_c && short_set && type->tag == tp_enum &&
	((enum_tp*)type->get_typedef())->n_elems <= SHORT_SET_CARD)
    {
	token* t = l_tkn->next_relevant();
	if (t->tag == TKN_COMMA) {
	    t->set_trans("|");
	    if (t->next->tag == TKN_SPACE) t->next->disable();
	    if (t->prev->tag == TKN_SPACE) t->prev->disable();
	}
	f_tkn = f_tkn->prepend("ELEM(");
	l_tkn = l_tkn->append(")");
    }
}

set_range_node::set_range_node(expr_node* low, token* dots, expr_node* high)
{
    CONS3(low, dots, high);
}

void set_range_node::attrib(int ctx)
{
    low->attrib(ctx);
    high->attrib(ctx);
    type = low->type;
}

void set_range_node::translate(int ctx)
{
    low->translate(ctx);
    high->translate(ctx);
    if (language_c && short_set && type->tag == tp_enum &&
	((enum_tp*)type->get_typedef())->n_elems <= SHORT_SET_CARD)
    {
	token* t = low->l_tkn->next_relevant();
	if (t->tag == TKN_COMMA) t->set_trans("|");
	f_tkn = low->f_tkn->prepend("RANGE(");
    } else {
	f_tkn = low->f_tkn->prepend("range(");
    }
    l_tkn = high->l_tkn->append(")");
    dots->set_trans(",");
}

set_node::set_node(token* t_lbr, set_item_node* items, token* t_rbr)
: expr_node(tn_set)
{
    CONS3(t_lbr, items, t_rbr);
}

void set_node::attrib(int)
{
    for (set_item_node* item = items; item != NULL; item = item->next) {
        item->attrib(ctx_value);
    }
    type = new set_tp(items ? items->type : &integer_type);
}

void set_node::translate(int)
{
    f_tkn = t_lbr;
    l_tkn = t_rbr;
    for (set_item_node* item = items; item != NULL; item = item->next) {
	item->translate(ctx_value);
    }
    if (language_c) {
	if (short_set && ((set_tp*)type)->is_short_set()) {
	    if (items) {
		if (items->next != NULL) {
		    t_lbr->set_trans("(");
		    t_rbr->set_trans(")");
		} else {
		    t_lbr->disable();
		    t_rbr->disable();
		}
	    } else {
		t_lbr->set_trans("0");
		t_rbr->disable();
	    }
	    return;
	} else {
	    t_lbr->set_trans("setof(");
	}
    } else {
	if (((set_tp*)type)->elem_type->tag == tp_enum) {
	    assert(((set_tp*)type)->elem_type->name != NULL);
	    t_lbr->set_trans(dprintf("set_of_enum(%s)::of(", ((set_tp*)type)->elem_type->name));
	} else {
	    t_lbr->set_trans("set::of(");
	}
    }
    t_rbr->set_trans(items ? ", eos)" : "eos)");
}

idx_expr_node::idx_expr_node(expr_node* arr, token* t_lbr, expr_node* indices, token* t_rbr)
  : expr_node(tn_index)
{
    CONS4(arr, t_lbr, indices, t_rbr);
}

void idx_expr_node::attrib(int ctx)
{
    arr->attrib(ctx == ctx_lvalue ? ctx_lvalarray : ctx_array);
    type = arr->type;

    for(expr_node* e = indices; e != NULL; e = e->next) {
        if (type && type->is_array()) {
	    type = ((array_tp*)type->get_typedef())->elem_type;
	}
        e->attrib(ctx_value);
    }
}

void idx_expr_node::translate(int ctx)
{
    arr->translate(ctx == ctx_lvalue ? ctx_lvalarray : ctx_array);
    f_tkn = arr->f_tkn;
    l_tkn = t_rbr;

    array_tp* arr_type = arr->type ? (array_tp*)arr->type->get_typedef() : (array_tp*)NULL;

    for (expr_node* e = indices; e != NULL; e = e->next) {
        e->translate(ctx_value);
	token *next = e->l_tkn->next_relevant();

	if (arr_type == NULL || !arr_type->is_array()) {
	    warning(e->f_tkn, "applying index operator to expression of non-array type");
	}
	if (language_c && arr_type && arr_type->is_array()) {
	    if (arr_type->base != 0 && !no_index_decrement) {
		if (arr_type->base != -1 && e->tag == tn_add
		    && ((op_node*)e)->right->is_const_literal())
		{
		    long long val = ((op_node*)e)->right->value - arr_type->base;
		    if (val == 0) {
				token::disable(((op_node*)e)->left->l_tkn->next, ((op_node*)e)->right->l_tkn);
		    } else {
				((op_node*)e)->right->f_tkn->set_trans(dprintf("%lld", val));
		    }
		}
		else if (arr_type->base != -1 && e->tag == tn_sub && ((op_node*)e)->right->is_const_literal())
		{
		    ((op_node*)e)->right->f_tkn->set_trans(dprintf("%lld", ((op_node*)e)->right->value + arr_type->base));
		}
		else if (arr_type->base != -1
			   && (e->tag == tn_add || e->tag == tn_sub)
			   && ((op_node*)e)->left->is_const_literal())
		{
		    ((op_node*)e)->left->f_tkn->set_trans(dprintf("%lld", ((op_node*)e)->left->value - arr_type->base));
		}
		else if (arr_type->base != -1 && e->is_const_literal())
		{
		    e->f_tkn->set_trans(dprintf("%lld", e->value - arr_type->base));
		}
		else if (arr_type->low)
		{
		    e->l_tkn->append(dprintf(" - %s", arr_type->low));
		}
		else
		{
		    assert(arr_type->low_expr != NULL);
		    token* nxt = e->l_tkn->next;
		    nxt->prepend("-(");
		    nxt->copy(arr_type->low_expr->f_tkn,
			       arr_type->low_expr->l_tkn);
		    nxt->prepend(")");
		    e->l_tkn = nxt->prev;
		}
	    }
	    if (arr_type->elem_type->tag == tp_dynarray) {
		if (arr->tag == tn_index
		    && t_lbr != ((idx_expr_node*)arr)->t_lbr)
		{
		    t_lbr->disable();
		    t_lbr = ((idx_expr_node*)arr)->t_lbr;
		}
		if (t_lbr->next_relevant() != e->l_tkn) {
		    t_lbr->append("(");
		    e->l_tkn->append(")");
		}
		if (e->l_tkn->next != next) {
		    token::disable(e->l_tkn->next, next->prev);
		}
		next->set_trans(dprintf("*(%s-%s+1) + ", arr_type->high, arr_type->low));
		arr_type = (array_tp*)arr_type->elem_type->get_typedef();
		continue;
	    } else if (arr_type->tag == tp_dynarray
		       && arr->tag == tn_index
		       && t_lbr != ((idx_expr_node*)arr)->t_lbr)
	    {
		    t_lbr->disable();
		    t_lbr = ((idx_expr_node*)arr)->t_lbr;
	    }

	} else if (arr_type && arr_type->tag == tp_string) {
	    e->l_tkn->append("-1");
	}

	if (arr_type && arr_type->is_array() && arr_type->elem_type->is_array()) {
	    arr_type = (array_tp*)arr_type->elem_type->get_typedef();
	}
	if (e->next != NULL) {
	    assert(next->tag == TKN_COMMA);

	    token::disable(e->l_tkn->next, next->next_relevant()->prev);
	    e->l_tkn->append("][");
	}
    }
}

deref_expr_node::deref_expr_node(expr_node* ptr, token* t_op) : expr_node(tn_deref)
{
    CONS2(ptr, t_op);
}

void deref_expr_node::attrib(int)
{
    ptr->attrib(ctx_array);
	f_tkn = ptr->f_tkn;
	l_tkn = t_op;

	assert(f_tkn);
	assert(l_tkn);

	type = ptr->type;
    if (type->is_reference()) {
		type = ((ref_tp*)type->get_typedef())->base_type;
    } else {
		warning(t_op, "dereferencing not pointer type '%s'", type->name);
    }
}

void deref_expr_node::translate(int ctx)
{
    ptr->translate(ctx_array);

	f_tkn = ptr->f_tkn;

	t_op->disable();
	if (ptr->type != NULL && (ptr->type->tag == tp_file || ptr->type->tag == tp_text)) {
		tag = tn_filevar;
		if (ctx != ctx_lvalue) {
			if (language_c) {
				ptr->l_tkn->append(")");
				if (ctx == ctx_access) {
					f_tkn = f_tkn->prepend("currec(");
					tag = tn_address;
				} else {
					if (ctx == ctx_array) {
						f_tkn = f_tkn->prepend("(*currec(");
						ptr->l_tkn->append(")");
					} else {
						f_tkn = f_tkn->prepend("*currec(");
					}
				}
			} else { //language C++
				f_tkn = f_tkn->prepend("*");
				if (ctx == ctx_array || ctx == ctx_access) {
					f_tkn = f_tkn->prepend("(");
					ptr->l_tkn->append(")");
				}
			}
		}
	} else {
		if (ctx != ctx_access) {
			if (type && type->tag == tp_void) { 
				f_tkn = f_tkn->prepend("{*}"); // marker to the user to pay attention, since tp_void usually is a marker of undefined function or undefined type 
			} else {
				f_tkn = f_tkn->prepend("*");
				if (ctx == ctx_array || ctx == ctx_lvalarray) {
					f_tkn = f_tkn->prepend("(");
					ptr->l_tkn->append(")");
				}
			}
		} else {
			tag = tn_address;
		}
		t_op->disable();
	}
}


access_expr_node::access_expr_node(expr_node* rec, token* pnt, token* field) : expr_node(tn_access)
{
    CONS3(rec, pnt, field);
	recfld = NULL;
}

void access_expr_node::attrib(int)
{
	assert(rec);
	assert(field);

    rec->attrib(ctx_access);
	f_tkn = rec->f_tkn;
	l_tkn = field;

	assert(f_tkn);
	assert(l_tkn);

	if (rec->type != NULL && (rec->type->tag == tp_record || rec->type->tag == tp_object || rec->type->tag == tp_unit)) {
		recfld = ((record_tp*)rec->type->get_typedef())->search(field); // because object_tp and unit_tp are descendants of record_tp
		if (recfld == NULL) { // recfld may be NULL when method is declared in parent type and this type is unknown for some reason.
			if (rec->f_tkn == NULL)
			{
				assert(rec->type->name);
				warning(field, "component '%s' is not found in type '%s'.", field->in_text, rec->type->name);
			}
			else
			{
				warning(field, "component '%s.%s' is not found.", rec->f_tkn->in_text, field->in_text);
			}
		}
	}
	// Delphi allows to access fields/methods by ref variable e.g.
	// ppt: ^TMyClass;
	// ppt.FValue := 'str1';
	// ppt^.FValue : = 'str2'; //equivalent to the line above 
	else if (rec->type != NULL && (rec->type->tag == tp_ref)) {
		ref_tp* rf = dynamic_cast<ref_tp*>(rec->type);
		if (rf->base_type->tag == tp_record || rf->base_type->tag == tp_object /*|| rf->base_type->tag == tp_unit*/)
		{
			recfld = ((record_tp*)rf->base_type->get_typedef())->search(field); // because object_tp is descendant of record_tp
			if (recfld == NULL) { // recfld may be NULL when method is declared in parent type and this type is unknown for some reason.
				if (rec->f_tkn == NULL)
				{
					assert(rec->type->name);
					warning(field, "component '%s' is not found in type '%s'.", field->in_text, rec->type->name);
				}
				else
				{
					warning(field, "component '%s.%s' is not found.", rec->f_tkn->in_text, field->in_text);
				}
			}
		}
		else
		{
			assert(rec->type);
			assert(rec->type->name);
			assert(rec->f_tkn);
			warning(field, "unknown type '%s' for expression '%s.%s'", rec->type->name, rec->f_tkn->in_text, field->in_text);
			recfld = nullptr;
		}
	}
	else 
	{
		assert(rec->type);
		assert(rec->type->name);
		assert(rec->f_tkn);
		warning(field, "unknown type '%s' for expression '%s.%s'", rec->type->name, rec->f_tkn->in_text, field->in_text);
		recfld = nullptr;
	}

	if (recfld == nullptr)
		type = &any_type; //&void_type;
	else
		type = recfld->type;
}

void access_expr_node::translate(int ctx)
{
    rec->translate(ctx_access);

	// whether 'rec' is object typename
	bool is_typename = (rec->tag == tn_atom) && (rec->type->tag == tp_object) && (dynamic_cast<atom_expr_node*>(rec)->var->tag == symbol::s_type);

	// whether 'field' is constructor
	if (is_typename && type->tag == tp_proc && ((proc_tp*)type)->is_constructor)
	{
		//TODO implement destructor too
		rec->f_tkn->prepend("new ");
		pnt->disable();
		field->disable();
	}
	else 
	{
		if (rec->tag == tn_address || rec->tag == tn_self || (rec->type->tag == tp_object && !is_typename) 
			|| (rec->type->tag == tp_ref && ((ref_tp*)(rec->type))->base_type->tag == tp_object) ) {
			pnt->set_trans("->");
		}
		else if (rec->type != NULL && (rec->type->tag == tp_unit || rec->type->tag == tp_object)) { // TMyClass.StaticField => TMyClass::StaticField
			pnt->set_trans("::");
		}
		
		if (recfld) recfld->translate(field);

		if (turbo_pascal && rec->type != NULL
			&& (rec->type->tag == tp_object || rec->type->tag == tp_unit)
			&& type->tag == tp_proc && ctx != ctx_apply)
		{
			l_tkn = l_tkn->append("()");
		}
	}
}

//---------------------------------------------------------

address_node::address_node(token* t_adr, expr_node* var)
: expr_node(tn_ref)
{
    CONS2(t_adr, var);
}

void address_node::attrib(int)
{
    var->attrib(ctx_lvalue);
    type = new ref_tp(var->type);
}

void address_node::translate(int)
{
	f_tkn = t_adr;
    if (turbo_pascal && var->tag == tn_self) {
       ((atom_expr_node*)var)->t_tkn->remove();
       l_tkn = f_tkn;
	   f_tkn->set_trans("this");
    } else {
	   var->translate(ctx_lvalue);
       t_adr->set_trans("&");
       l_tkn = var->l_tkn;
    }
}

//---------------------------------------------------------

void case_range_node::attrib(int ctx)
{
    from->attrib(ctx);
    to->attrib(ctx);
    type = from->type;
}

void case_range_node::translate(int ctx)
{
    from->translate(ctx);
    to->translate(ctx);
    if ((from->tag == tn_char || from->tag == tn_intnum) &&
	(to->tag == tn_char || to->tag == tn_intnum))
    {
	long long range = to->value - from->value + 1;
	if (range > 1 && (range <= 16 || range == 26 || range == 32))
	{
	    f_tkn = from->f_tkn->prepend(dprintf("RANGE_%lld(", range));
	    l_tkn = to->l_tkn->append(")");
	    t_range->set_trans(",");
	    return;
	}
    }
    warning(t_range,"Conversion of case range item is correct only for GCC\n");
    t_range->set_trans(" ... ");
    f_tkn = from->f_tkn;
    l_tkn = to->l_tkn;
}

case_range_node::case_range_node(expr_node* from, token* t_range, expr_node*to)
: expr_node(tn_case_range)
{
    CONS3(from, t_range, to);
}

//----------------------------------------------------------

op_node::op_node(int tag, expr_node* left, token* op, expr_node* right) : expr_node(tag)
{
    CONS3(left, op, right);
	parent = NULL;
}

void op_node::attrib(int)
{
    if (left) {
		left->parent_tag = tag;
        left->attrib(ctx_value);
		type = left->type;
    }
    if (right) {
		right->parent_tag = tag;
        right->attrib(ctx_value);
		type = right->type; // right type overrides left type
    }
    if ((unsigned(tag - tn_add) <= tn_div - tn_add) &&
	((left->type && left->type->get_typedef() == &long_type)
	 || (right->type && right->type->get_typedef() == &long_type)))
    {
		type = &long_type;
    }
	if ((left == NULL || (left->flags & tn_is_const)) &&
		(right == NULL || (right->flags & tn_is_const)))
	{
		switch (tag) {
		case tn_add:
			value = left->value + right->value;
			flags |= tn_is_const;
			break;
		case tn_sub:
			value = left->value - right->value;
			flags |= tn_is_const;
			break;
		case tn_plus:
			value = +right->value;
			flags |= tn_is_const | (right->flags & tn_is_literal);
			break;
		case tn_minus:
			value = -right->value;
			flags |= tn_is_const | (right->flags & tn_is_literal);
			break;
		case tn_mod:
			value = left->value % right->value;
			flags |= tn_is_const;
			break;
		case tn_mul:
			value = left->value * right->value;
			flags |= tn_is_const;
			break;
		case tn_div:
			value = left->value / right->value;
			flags |= tn_is_const;
			break;
		}
	}

    if (tag == tn_divr) {
        type = &double_type; //&real_type
    } else if (tag >= tn_in && tag <= tn_le) {
        type = &bool_type;
    } else if (left && right && right->type && right->type->tag == tp_set
	       && left->type && left->type->tag == tp_set)
    {
		set_tp* ltype = (set_tp*)left->type->get_typedef();
		set_tp* rtype = (set_tp*)right->type->get_typedef();
		type = (ltype->card() < rtype->card()) ? ltype : rtype;
    } else if (left && right && left->type && right->type &&
	          (left->type->tag == tp_double || right->type->tag == tp_double))
    {
        type = &double_type;
    } else if (left && right && left->type && right->type &&
		      (left->type->tag == tp_real || right->type->tag == tp_real))
	{
		type = &real_type;
	}
	else if (left && right && left->type && right->type &&
	        (right->type->tag == tp_string || right->type->tag == tp_char))
    {
        type = &varying_string_type;
	} else if (tag == tn_is) {
		type = &bool_type;
		assert(dynamic_cast<atom_expr_node*>(right->type)); //TODO here is a check that tn_is has right part is a type (atom type)
	} else if (tag == tn_as) {
		// type is already assigned above
		//assert(dynamic_cast<atom_expr_node*>(right->type)); //TODO here is a check that tn_is has right part is a type (atom type)
	}
}

static char* cmp_op[] = { "==", "!=", ">", ">=", "<", "<=" };
static char* rcmp_op[] = { "==", "!=", "<", "<=", ">", ">=" };

#define CMP_OP(c) cmp_op[(c)-tn_eq]
#define RCMP_OP(c) rcmp_op[(c)-tn_eq]

void op_node::translate(int)
{
    f_tkn = l_tkn = op;

    if (right && left && right->type && left->type && right->type->tag == tp_set) {
        if (left->type->tag == tp_set) {
            set_tp* ltype = (set_tp*)left->type->get_typedef();
            set_tp* rtype = (set_tp*)right->type->get_typedef();
            left->type = right->type =
                (ltype->card() < rtype->card()) ? ltype : rtype;
        } else {
            right->type = new set_tp(left->type);
        }
    }

    if (left) {
        left->translate(ctx_value);
        f_tkn = left->f_tkn;
    }
    if (right) {
        right->translate(ctx_value);
        l_tkn = right->l_tkn;
    }

	switch (tag) {
	case tn_mod:
		op->set_trans("%");
		break;
	case tn_div:
		op->set_trans("/");
		break;
	case tn_divr:
		op->set_trans("/"); // result of this op is double by default, unless....
		
		if ( left->type && left->type->tag != tp_double && right->type && right->type->tag != tp_double)
		{
			// if one side is real than expr type is real
			
			if ( ((left->type && right->type && left->type->tag == tp_real && right->type->tag != tp_double) || (right->type == nullptr))
			  || ((left->type && right->type && right->type->tag == tp_real && left->type->tag != tp_double) || (left->type  == nullptr)) )
				f_tkn = left->f_tkn->prepend("(real)(");
			else
				f_tkn = left->f_tkn->prepend("(double)(");
			
			left->l_tkn->append(")");
		}
		break;
	case tn_and:
		op->set_trans((!force_logical && ((left->type && left->type->tag != tp_bool) ||
			(right->type && right->type->tag != tp_bool) || nological)) ? "&" : "&&");
		// no break
		[[fallthrough]];
	case tn_binand:
		if (parent_tag != tn_group && parent_tag != tn_and) {
			f_tkn = left->f_tkn->prepend("(");
			l_tkn = right->l_tkn->append(")");
		}
		break;
	case tn_xor:
		op->set_trans("^");
		if (parent_tag != tn_group && parent_tag != tn_xor) {
			f_tkn = left->f_tkn->prepend("(");
			l_tkn = right->l_tkn->append(")");
		}
		break;
	case tn_let:
		op->set_trans("=");
		break;
	case tn_shr:
		if (parent_tag != tn_group) {
			assert(left->type->get_typedef() != &integer_type);//TODO this is to check whether integer_type comes here at all
			f_tkn = left->f_tkn->prepend(left->type &&
				left->type->get_typedef() == &long_type ? "((unsigned long)" :
				left->type->get_typedef() == &uint64_type ? "((uint64_t)" :
				left->type->get_typedef() == &int64_type ? "((int64_t)" : "((cardinal)"); //TODO shall be 'unsigned int' here?
			l_tkn = right->l_tkn->append(")");
		} else {
			f_tkn = left->f_tkn->prepend(left->type &&
				left->type->get_typedef() == &long_type ? "(unsigned long)" :
				left->type->get_typedef() == &uint64_type ? "(uint64_t)" :
				left->type->get_typedef() == &int64_type ? "(int64_t)" : "(cardinal)");
		}
		op->set_trans(">>");
		break;
	case tn_shl:
		if (parent_tag != tn_group) {
			f_tkn = left->f_tkn->prepend("(");
			l_tkn = right->l_tkn->append(")");
		}
		op->set_trans("<<");
		break;
	case tn_or:
		if (parent_tag != tn_group && parent_tag != tn_or) {
			f_tkn = left->f_tkn->prepend("(");
			l_tkn = right->l_tkn->append(")");
		}
		// no break
		[[fallthrough]];
	case tn_binor:
		op->set_trans((!force_logical && ((left->type && left->type->tag != tp_bool) ||
			(right->type && right->type->tag != tp_bool) ||
			nological)) ? "|" : "||");
		break;
	case tn_in:
		token::disable(left->l_tkn->next, right->f_tkn->prev);
		if (language_c) {
			f_tkn = left->f_tkn->prepend(
				short_set && ((set_tp*)right->type)->is_short_set()
				? "INSET(" : "inset(");
			left->l_tkn->append(", ");
			l_tkn = right->l_tkn->append(")");
		} else {
			left->f_tkn->move(right->f_tkn, right->l_tkn);
			if (right->tag == tn_add || right->tag == tn_sub || right->tag == tn_mul) {
				f_tkn = right->f_tkn->prepend("(");
				right->l_tkn->append(")");
			} else {
				f_tkn = right->f_tkn;
			}
			left->f_tkn->prepend(".has(");
			l_tkn = left->l_tkn->append(")");
		}
		break;
	case tn_add:
	case tn_sub:
	case tn_mul:
		if (left->type && left->type->tag == tp_set) {
			if (language_c) {
				if (short_set && ((set_tp*)type)->is_short_set()) {
					f_tkn = left->f_tkn->prepend(tag == tn_add ? "JOIN(" : tag == tn_sub ? "DIFFERENCE(" : "INTERSECT(");
				} else {
					f_tkn = left->f_tkn->prepend(tag == tn_add ? "join(" : tag == tn_sub ? "difference(" : "intersect(");
				}
				l_tkn = right->l_tkn->append(")");
				token::disable(left->l_tkn->next, right->f_tkn->prev);
				left->l_tkn->append(", ");
			}
		} else if (!language_c) {
			if (left->type
				&& (left->type->tag == tp_string || left->type->tag == tp_char))
			{
				f_tkn = left->f_tkn->prepend("string(");
				left->l_tkn->append(")");
			}
		}
		break;
	case tn_eq:
	case tn_ne:
	case tn_gt:
	case tn_ge:
	case tn_lt:
	case tn_le:
		if (unsigned_comparison && left->type && right->type &&
			(left->type->tag == tp_range || right->type->tag == tp_range ||
				left->type->tag == tp_enum || right->type->tag == tp_enum))
		{
			range_tp* ltype = dynamic_cast<range_tp*>(left->type->get_typedef());
			range_tp* rtype = dynamic_cast<range_tp*>(right->type->get_typedef());
			assert(ltype);
			assert(rtype);
			if (((ltype->tag == tp_range && ltype->min_value >= 0) ||
				ltype->tag == tp_enum) &&
				((rtype->tag == tp_range && rtype->min_value < 0) ||
					(rtype->tag == tp_integer && !(right->flags & tn_is_const))))
			{
				if (rtype->tag == tp_integer) {
					right->f_tkn->prepend("(cardinal)");
				}
				else if (ltype->tag == tp_enum || rtype->size <= ltype->size)
				{
					right->f_tkn->prepend(rtype->size == 1 ? "(unsigned char)" : rtype->size == 2 ? "(unsigned short)" : "(unsigned)");
				}
			} else if (((rtype->tag == tp_range && rtype->min_value >= 0) ||
				rtype->tag == tp_enum) &&
				((ltype->tag == tp_range && ltype->min_value < 0) ||
					(ltype->tag == tp_integer && !(left->flags & tn_is_const))))
			{
				if (ltype->tag == tp_integer) {
					f_tkn = left->f_tkn->prepend("(cardinal)");
				}
				else if (rtype->tag == tp_enum || ltype->size <= rtype->size)
				{
					f_tkn = left->f_tkn->prepend(ltype->size == 1 ? "(unsigned char)" :	ltype->size == 2 ? "(unsigned short)" : "(unsigned)");
				}
			}
		}

		if (language_c && left->type && right->type) {
			switch (left->type->tag) {
			case tp_string:
			case tp_record:
			case tp_array:
			case tp_dynarray:
				if (right->type->tag == tp_char) {
					f_tkn = left->f_tkn->prepend("*");
				} else {
					token::disable(left->l_tkn->next, right->f_tkn->prev);
					left->l_tkn->append(", ");
					if (left->is_parameter()) {
						f_tkn = left->f_tkn->prepend("memcmp(");
						if (left->type->tag == tp_record) {
							left->f_tkn->prepend("&");
							right->f_tkn->prepend("&");
						}
						if (left->type->name != NULL) {
							l_tkn = right->l_tkn->append(dprintf(", sizeof(%s)) %s 0", left->type->name, CMP_OP(tag)));
						} else {
							l_tkn = right->l_tkn->append(", ")->append("*sizeof(*");
							((array_tp*)left->type->get_typedef())->insert_length(l_tkn);
							l_tkn = l_tkn->append(dprintf(")) %s 0", CMP_OP(tag)));
							l_tkn->copy(left->f_tkn, left->l_tkn);
						}
					} else if (left->type->tag == tp_string) {
						token::swap(left->f_tkn, left->l_tkn,
							right->f_tkn, right->l_tkn);
						f_tkn = right->f_tkn->prepend("arrcmp(");
						l_tkn = left->l_tkn->append(dprintf(") %s 0", RCMP_OP(tag)));
					} else {
						if (left->type->tag == tp_record) {
							f_tkn = left->f_tkn->prepend("reccmp(");
						} else {
							f_tkn = left->f_tkn->prepend("arrcmp(");
						}
						l_tkn = right->l_tkn->append(dprintf(") %s 0", CMP_OP(tag)));
					}
					return;
				}
			case tp_char:
				if (right->type && right->type->is_array()) {
					right->f_tkn->prepend("*");
				}
				break;
			case tp_set:
				token::disable(left->l_tkn->next, right->f_tkn->prev);
				left->l_tkn->append(", ");

				if (short_set && left->type && ((set_tp*)left->type)->is_short_set()) {
					switch (tag) {
					case tn_eq:
						f_tkn = left->f_tkn->prepend("EQUIVALENT(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_ne:
						f_tkn = left->f_tkn->prepend("!EQUIVALENT(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_le:
						f_tkn = left->f_tkn->prepend("SUBSET(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_ge:
						token::swap(left->f_tkn, left->l_tkn,
							right->f_tkn, right->l_tkn);
						f_tkn = right->f_tkn->prepend("SUBSET(");
						l_tkn = left->l_tkn->append(")");
						break;
					}
				} else {
					switch (tag) {
					case tn_eq:
						f_tkn = left->f_tkn->prepend("equivalent(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_ne:
						f_tkn = left->f_tkn->prepend("!equivalent(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_le:
						f_tkn = left->f_tkn->prepend("subset(");
						l_tkn = right->l_tkn->append(")");
						break;
					case tn_ge:
						token::swap(left->f_tkn, left->l_tkn, right->f_tkn, right->l_tkn);
						f_tkn = right->f_tkn->prepend("subset(");
						l_tkn = left->l_tkn->append(")");
						break;
					}
				}
				return;
			}
		} else { // language C++
			if (left->type && right->type
				&& (right->type->tag == tp_array
					|| right->type->tag == tp_varying_string
					|| right->type->tag == tp_dynarray)
				&& (left->type->tag == tp_string
					|| left->type->tag == tp_char))
			{
				token::swap(left->f_tkn, left->l_tkn, right->f_tkn, right->l_tkn);
				f_tkn = right->f_tkn;
				l_tkn = left->l_tkn;
				op->set_trans(RCMP_OP(tag));
				return;
			}
		}
		op->set_trans(CMP_OP(tag));
		break;
	case tn_not:
		op->set_trans(force_logical || (right->type && right->type->tag == tp_bool) ? "!" : "~");
		break;
	case tn_binnot:
		break;
	case tn_is: 
		token::swap(left->f_tkn, left->l_tkn, right->f_tkn, right->l_tkn);
		token::disable(right->f_tkn->next, left->l_tkn->prev);
		right->f_tkn->prepend("dynamic_cast<");
		right->l_tkn->append(">(");
		left->l_tkn->append(") != nullptr");
		break;
	case tn_as:
		token::swap(left->f_tkn, left->l_tkn, right->f_tkn, right->l_tkn);
		token::disable(right->f_tkn->next, left->l_tkn->prev);
		right->f_tkn->prepend("dynamic_cast<");
		if(right->type->tag == tp_object) // object instances are pointers
			right->l_tkn->append("*>(");
		else
			right->l_tkn->append(">(");
		left->l_tkn->append(")");
		break;
	} // switch (tag)

	if ((unsigned(tag - tn_add) <= tn_div - tn_add) && type && type->tag == tp_long)
	{
		if (left->type && left->type->tag != tp_long) {
			f_tkn = f_tkn->prepend("long(");
			left->l_tkn->append(")");
		}
		else if (right->type && right->type->tag != tp_long) {
			right->f_tkn->prepend("long(");
			l_tkn = l_tkn->append(")");
		}
	}
}

fcall_node::fcall_node(expr_node* fptr, token* t_lpar, expr_node* args, token* t_rpar) : expr_node(tn_fcall)
{
    CONS4(fptr, t_lpar, args, t_rpar);
	temp = NULL;
}

/*
void fcall_node::translate_read(int ctx, bool newl)
{
	if (language_c) {
		if (args) {
			char const* format = "";
			char const* newln = newl ? "\\n" : "";
			expr_node* prm = args;

			l_tkn = args->l_tkn;

			if (prm->type->tag == tp_file) {
				prm->translate(ctx_value);
				expr_node* file = prm;
				while ((prm = prm->next) != NULL) {
					prm->translate(ctx_lvalue);
					if (prm->tag == tn_filevar && language_c) {
						prm->f_tkn->prepend("scopy(")->set_pos(fptr->f_tkn);
					}
					else {
						prm->f_tkn->prepend("sread(")->set_pos(fptr->f_tkn);
					}
					prm->f_tkn->copy(file->f_tkn, file->l_tkn);
					prm->f_tkn->prepend(", ");
					prm->l_tkn->append(")");
				}
				token::disable(fptr->f_tkn, file->l_tkn->next_relevant());
				//params->rpar->disable();
				force_semicolon();
				return;
			}
			if (prm->type->tag == tp_text) {
				prm->translate(ctx_access);
				if (prm->tag != tn_address) {
					prm->f_tkn->prepend("&");
				}
				prm = prm->next;
				fptr->f_tkn->set_trans("tread");
			}
			else {
				fptr->f_tkn->set_trans("cread");
			}
			int n_params = 0;
			while (prm != NULL) {
				char fmt = '?';
				prm->translate(ctx_access);
				n_params += 1;
				switch (prm->type->tag) {
				case tp_dynarray:
				case tp_array:
					fmt = 's';
					((array_tp*)prm->type->get_typedef())
						->insert_dimensions(prm);
					break;
				case tp_real:
					fmt = 'f';
					break;
				case tp_integer:
					fmt = 'i';
					break;
				case tp_char:
					fmt = 'c';
					break;
				case tp_bool:
					fmt = 'b';
					break;
				case tp_range:
					switch (((range_tp*)prm->type->get_typedef())->size) {
					case 1: fmt = 'B'; break;
					case 2: fmt = 'W'; break;
					case 4: fmt = 'i'; break;
					default:
						warning(prm->f_tkn, "sizeof range type is %d", ((range_tp*)prm->type->get_typedef())->size);
					}
					break;
				default:
					warning(prm->f_tkn, "invalid parameter for read operator");
				}
				format = dprintf("%s%%%c", format, fmt);
				if (fmt != 's' && prm->tag != tn_address) {
					prm->f_tkn = prm->f_tkn->prepend("&");
				}
				prm = prm->next;
			}
			if (args->type->tag == tp_text) {
				args->l_tkn->append(dprintf(", \"%s%s\"", format, newln));
			}
			else {
				args->f_tkn->append(dprintf(n_params ? "\"%s%s\", " : "\"%s%s\"", format, newln));
			}
		}
		else if (newl) {
			fptr->f_tkn->set_trans("cread(\"\\n\")");
		}
		else {
			warning(fptr->f_tkn, "read statement with no effect");
			fptr->f_tkn->disable();
		}

	}
	else { // C++
		if (args) {
			l_tkn = args->l_tkn; // params->rpar;
			args->l_tkn->disable();
			args->f_tkn->disable();

			expr_node* prm = args;
			bool newln = newl;

			if (prm->type->tag == tp_text || prm->type->tag == tp_file) {
				prm->translate(ctx_value);
				if (prm->next) {
					prm->l_tkn->next_relevant()->set_trans(" >> ");
				}
				prm->f_tkn->set_pos(fptr->f_tkn);
				fptr->f_tkn->disable();
				prm = prm->next;
			}
			else {
				fptr->f_tkn->set_trans("input >> ");
			}
			while (prm != NULL) {
				prm->translate(ctx_lvalue);
				if (prm->next != NULL) {
					prm->l_tkn->next_relevant()->set_trans(" >> ");
				}
				prm = prm->next;
			}
			if (newln) {
				l_tkn = l_tkn->append(" >> NL");
			}
		}
		else if (newl) {
			fptr->f_tkn->set_trans("input >> NL");
		}
		else {
			warning(fptr->f_tkn, "read statement with no effect");
			fptr->f_tkn->disable();
		}
	}
	force_semicolon();
}
*/

void fcall_node::attrib(int ctx)
{
	token* tok = ((atom_expr_node*)fptr)->t_tkn;
	
	f_tkn = tok;
	l_tkn = t_rpar;

	if (fptr->tag == tn_atom && tok->tag != TKN_IDENT)
	{
		if (args)
			args->attrib(ctx_value); //TODO attrib only first parameter of function call for some reason

		switch (tok->tag) {
		case TKN_NEW: // procedure New(var P: Pointer);
			assert(args);
			type = new ref_tp(args->type);
			if (turbo_pascal && args->next != NULL) {
				expr_node* arg = args->next;
				if (args->type->is_reference()) {
					tpexpr* bt = ((ref_tp*)args->type->get_typedef())->base_type;
					if (bt->tag == tp_object) {
						object_tp* obj = (object_tp*)bt->get_typedef();
						b_ring::push(obj);
						arg->attrib(ctx_value);
						arg = arg->next;
						b_ring::pop(obj);
					}
				}
				while (arg != NULL) {
					arg->attrib(ctx_value);
					arg = arg->next;
				}
			}
			break;
		case TKN_DISPOSE: // procedure Dispose(var P: Pointer);
			if (turbo_pascal && args->next != NULL) {
				if (args->type->is_reference()) {
					tpexpr* bt =
						((ref_tp*)args->type->get_typedef())->base_type;
					if (bt->tag == tp_object) {
						object_tp* obj = (object_tp*)bt->get_typedef();
						b_ring::push(obj);
						args->next->attrib(ctx_value);
						b_ring::pop(obj);
					}
				}
			}
			break;
		case TKN_REF:
			type = new ref_tp(args->type);
			break;
		case TKN_PRED:
			type = args->type;
			if (args->flags & symbol::f_const) {
				flags |= tn_is_const;
				value = args->value - 1;
			}
			break;
		case TKN_SUCC:
			type = args->type;
			if (args->flags & symbol::f_const) {
				flags |= tn_is_const;
				value = args->value + 1;
			}
			break;

		//case TKN_READ:
		//case TKN_READLN:
		//	if (args) args->attrib(ctx_lvalue);
		//	break;

		//case TKN_EXIT: //TODO заглушка, may be later add some code 
		   //args->attrib(ctx_value);
		   //goto normal_call;
		
		case TKN_HALT:
			if (turbo_pascal) {
				tok->set_trans("exit");
				//((atom_expr_node*)fptr)->tkn->set_trans("exit");
			}
			else {
				goto normal_call;
			}
			//nobreak;
		default:
			if (args) { //TODO here we attrib parameters starting from second because first one has already attrib above
				for (expr_node* expr = args->next; expr != NULL; expr = expr->next)
				{
					expr->attrib(ctx_value);
				}
			}
		} // switch
		return;
	}

  normal_call:
    fptr->attrib(ctx_apply);
	assert(fptr->type); // just in case to check that fptr always has type

    if (fptr->type != NULL) {
		if (fptr->type->tag == tp_proc) { // procedure/func call
			proc_tp* prc = (proc_tp*)fptr->type->get_typedef();
			type = prc->res_type;
			param_spec* p = prc->params;
			prc->add_caller(curr_proc);

			for (expr_node* e = args; e != NULL; e = e->next) {
				if (p != NULL) {
					e->attrib(p->var->type->tag == tp_proc
						? ctx_procptr : (p->var->flags & symbol::f_var_param)
						? ctx_lvalue : ctx_value);
					if (p->var->type->tag == tp_set) {
						e->type = p->var->type->get_typedef();
					}
					p = p->next;
				} else {
					e->attrib(ctx_value);
				}
			}
			if (language_c && type != NULL && type->tag == tp_array && ctx != ctx_rvalue)
			{
				temp = curr_proc->add_temp(type);
			}
		} else { // constant array or record constructor
			type = fptr->type;
			int expr_ctx = (type->tag == tp_record || type->tag == tp_object
				|| (type->tag == tp_array && (ctx == ctx_constant || language_c))) ? ctx_record : ctx_value;

			if (type->tag != tp_array && type->tag != tp_record && type->tag != tp_object
				&& !(fptr->tag == tn_atom && ((atom_expr_node*)fptr)->var != NULL && ((atom_expr_node*)fptr)->var->tag == symbol::s_type))
			{
				if (fptr->tag == tn_access)
				{
					auto access = (access_expr_node*)fptr;
					if (access->rec->tag == tn_atom) {
						auto atom = (atom_expr_node*)(access->rec);
						warning(t_lpar, "function '%s.%s' not defined.", atom->t_tkn->in_text, access->field->in_text);
					}
					else
						warning(t_lpar, "function not defined.");
				}
				else
					warning(t_lpar, "function not defined.");
			}

			for (expr_node* e = args; e != NULL; e = e->next) {
				e->attrib(expr_ctx);
			}
		}
    }
}

void fcall_node::translate(int ctx)
{
    if (fptr->tag == tn_atom && f_tkn->tag != TKN_IDENT)
    {
		// Built-in Delphi functions are processed here
		// We come here for special Delphi function calls only. They are defined in token.dpp and which have unique ID - TKN_* .
		// Like: New, Dispose, Pred, Succ, Inc, Dec, SetLength, Length, Move, etc. 

      switch(f_tkn->tag) {
	  case TKN_NEW: // procedure New(var P: Pointer);
		  if (language_c) {
			  args->translate(ctx_value);
			  args->f_tkn->set_pos(f_tkn);
			  f_tkn->disable();
			  t_lpar->disable();
			  if (args->next != NULL) {
				  token::remove(args->l_tkn->next, t_rpar->prev);
			  }
			  if (args->type->is_reference()) {
				  tpexpr* bt = ((ref_tp*)args->type->get_typedef())->base_type;
				  assert(bt->name != NULL);

				  t_rpar->set_trans(dprintf(" = (%s*)%s(%s))",
					  bt->name,
					  (bt->get_typedef()->flags & tp_need_init)
					  ? "calloc(1,sizeof" : "malloc(sizeof",
					  bt->name));
			  }
		  } else {
			  expr_node* expr = args;
			  if (expr != NULL && expr->tag == tn_fcall
				  && expr->type != NULL && expr->type->tag == tp_object)
			  {
				  (((fcall_node*)expr)->fptr)->translate(ctx_apply);
				  expr = ((fcall_node*)expr)->args;
			  }
			  while (expr != NULL) {
				  expr->translate(ctx_value);
				  expr = expr->next;
			  }
			  if (turbo_pascal) {
				  if (args->type->is_reference()) {
					  tpexpr* cls = ((ref_tp*)args->type->get_typedef())->base_type;
					  char* cls_name;
					  if (cls != NULL && cls->name != NULL) {
						  cls_name = cls->name;
					  } else {
						  cls_name = args->type->name;
					  }
					  if (ctx == ctx_rvalue) {
						  if (args->next != NULL) {
							  token::remove(t_lpar, args->next->f_tkn->prev);
							  f_tkn->set_trans(dprintf("(new %s)->", cls_name));
							  t_rpar->disable();
						  } else {
							  token::remove(t_lpar, t_rpar);
							  l_tkn = f_tkn;
							  f_tkn->set_trans(dprintf("new %s", cls_name));
						  }
					  } else {
						  args->f_tkn->set_pos(f_tkn);
						  f_tkn->disable();
						  t_lpar->disable();
						  if (args->next != NULL) {
							  token::disable(args->l_tkn->next,
								  args->next->f_tkn->prev);
							  args->l_tkn->append(dprintf(" = (new %s)->", cls_name));
							  t_rpar->disable();
						  } else {
							  token::disable(args->l_tkn->next, t_rpar);
							  args->l_tkn->append(dprintf(" = new %s", cls_name));
						  }
					  }
				  } else {
					  t_lpar->set_trans(" ");
					  t_rpar->disable();
					  warning(f_tkn, "Unknown type '%s' for operator 'new'\n", args->type->name);
				  }
			  } else {
				  args->f_tkn->set_pos(f_tkn);
				  f_tkn->disable();
				  t_lpar->disable();
				  if (args->next != NULL) {
					  token::remove(args->l_tkn->next, t_rpar->prev);
				  }
				  t_rpar->set_trans(" = new ");
				  if (args->type->is_reference()) {
					  tpexpr* bt = ((ref_tp*)args->type->get_typedef())->base_type;
					  assert(bt->name != NULL);
					  l_tkn = t_rpar->append(bt->name);
				  }
			  }
		  }
	    break;
	  case TKN_DISPOSE: // procedure Dispose(var P: Pointer);
	    args->translate(ctx_value);
	    if (language_c) {
			f_tkn->set_trans("free");
	    } else {
			f_tkn->set_trans("delete ");
			t_lpar->disable();
			t_rpar->disable();
			if (turbo_pascal) {
				if (args->next) {
					args->next->translate(ctx_value);
					token::remove(args->l_tkn->next, args->next->f_tkn->prev);
					args->l_tkn->append("->");
				}
			}
	    }
	    break;
	  case TKN_REF:
	    args->translate(ctx_lvalue);
	    f_tkn->set_trans("&");
	    t_lpar->disable();
	    t_rpar->disable();
	    break;
	  case TKN_PRED:
	  case TKN_SUCC:
	    assert(args->type->name != NULL);
	    args->translate(ctx_rvalue);
	    t_lpar->append(dprintf("%s,", args->type->name));
	    break;
	  case TKN_INC:
	    args->translate(ctx_lvalue);
	    token::disable(f_tkn, t_lpar);
	    args->f_tkn->set_pos(f_tkn);
	    if (args->next) {
			args->next->translate(ctx_rvalue);
			token::disable(args->l_tkn->next, args->next->f_tkn->prev);
			args = args->next;
			args->f_tkn->prepend(" += ");
	    } else {
			args->l_tkn->append(" += 1");
	    }
	    t_rpar->disable();
	    break;
	  case TKN_DEC:
	    args->translate(ctx_lvalue);
	    args->f_tkn->set_pos(f_tkn);
	    token::disable(f_tkn, t_lpar);
	    if (args->next) {
			args->next->translate(ctx_rvalue);
			token::disable(args->l_tkn->next, args->next->f_tkn->prev);
			args = args->next;
			args->f_tkn->prepend(" -= ");
	    } else {
			args->l_tkn->append(" -= 1");
	    }
	    t_rpar->disable();
	    break;
	  case TKN_EXIT:
		if (curr_proc && curr_proc->res_type) { // this is function call so we need result type
			assert(args); 
			if (args->next == NULL) { // Exit token has to have only one argument, replace it by return stmt
				if (args->type != curr_proc->res_type) //TODO implement here correct compare that types of Exit parameter and function return are the same 
					warning(f_tkn, "warning: function return type and parameter of Exit call have different types .");

				args->translate(ctx_value);
				f_tkn->set_trans("return ");
				t_lpar->disable();
				t_rpar->disable();
			}
			else
			{ 
				// ordinally function call
				for (expr_node* a = args; a != NULL; a = a->next) {
					a->translate(ctx_value);
				}
			}
		} else {
			warning(f_tkn, "warning: attempt to return value from procedure by Exit call.");
		}
		break;
	  case TKN_SETLENGTH:
	  {
		  args->translate(ctx_lvalue);
		  assert(args->next != NULL && args->next->next == NULL); // SetLength must have two arguments
		  args->f_tkn->set_pos(f_tkn);
		  token::disable(f_tkn, t_lpar);
		  //TODO improve this function to work with dynamic arrays
		 // assert(args->type->tag == tp_varying_string);
		  token* t_len = args->l_tkn->next_relevant()->next_relevant(); // look for second argument token
		  token::disable(args->l_tkn->next, t_len->prev); // disable spaces and comma between first and second SetLength arguments
		  args->l_tkn->append(".set_length(");
		  args->next->translate(ctx_rvalue);
		  break;
	  }
	  case TKN_LENGTH:
	  {
		  // special handling of Length() function for array and string types
		  if (args->type->tag == tp_array || args->type->tag == tp_varying_string)
		  {
			  assert(args);
			  args->translate(ctx_lvalue);
			  assert(args->next == NULL); // Length must have one argument
			  args->f_tkn->set_pos(f_tkn);
			  token::disable(f_tkn, t_lpar);
			  if (args->type->tag == tp_array) args->l_tkn->append(".size(");
			  if (args->type->tag == tp_varying_string) args->l_tkn->append(".length(");
		  }
		  else
		  {
			  goto normal_call;
		  }
		  break;
	  }

	  case TKN_MOVE:
		  args->translate(ctx_lvalue);
		  assert(args->next != NULL && args->next->next != NULL && args->next->next->next == NULL); // Move must have 3 arguments
		  //TODO add check here for args->next, son on like assert above
		  args->f_tkn->set_pos(f_tkn);
		  f_tkn->set_trans("memmove");

		  args->f_tkn->prepend("&(");
		  args->l_tkn->append(")");

		  args->next->translate(ctx_rvalue);
		  args->next->f_tkn->prepend("&(");
		  args->next->l_tkn->append(")");

		  args->next->next->translate(ctx_rvalue);
		  break;

	  case TKN_ASSERT:
		  args->translate(ctx_lvalue);
		  args->f_tkn->set_pos(f_tkn);
		  f_tkn->set_trans("assert");

		  if(args->next) args->next->translate(ctx_rvalue);
		  break;

/*	  case TKN_READ:
		  translate_read(ctx, false);
		  break;

	  case TKN_READLN:
		  translate_read(ctx, true);
		  break;
		  */
	  } // switch

	return;

    }

	// we come here for usual function calls and for Delphi style type casting e.g. TType(expr)
normal_call:
    fptr->translate(ctx_apply);
    f_tkn = fptr->f_tkn;
    l_tkn = t_rpar;

	if (fptr->type && fptr->type->tag == tp_proc) { // usual prodecure call
		proc_tp* prc = (proc_tp*)fptr->type->get_typedef();
		param_spec* p = prc->params;
		tpexpr* prev_param_type = NULL;

		for (expr_node* e = args; e != NULL; e = e->next) {
			if (p != NULL) {
				e->translate(p->var->type->tag == tp_proc ? ctx_procptr : (language_c && p->var->tag == symbol::s_ref) ? ctx_access : ctx_value);
				if (p->var->type->is_array() && e->type != NULL && e->type->tag == tp_char) {
					if (e->tag == tn_char) {
						char* s = ((string_node*)e)->value_tkn->out_text;
						if (*s == '\'') {
							*s = '"';
							s += strlen(s) - 1;
							*s = '"';
						}
						e->type = &string_type;
					} else {
						if (!turbo_pascal) {
							warning(e->f_tkn, "assignment of charater constant to array");
						}
					}
				}
				if (p->var->type->tag == tp_string) {
					if (e->type->tag == tp_array || e->type->tag == tp_dynarray)
					{
						e->f_tkn->prepend("lpsz(");
						if (language_c) {
							((array_tp*)e->type->get_typedef())->insert_dimensions(e);
						}
						e->l_tkn->append(")");
					}
				} else if (p->var->type->tag == tp_array
					&& !language_c && prc->is_extern_c
					&& (e->type->tag == tp_array
						|| e->type->tag == tp_dynarray))
				{
					e->l_tkn->append(".body()");
				} else {
					if (language_c) {
						if (p->var->type->tag == tp_dynarray) {
							if (prev_param_type != p->var->type) {
								if (!e->type->is_array())
								{
									warning(e->f_tkn, "passing non-aray object as conformant array parameter");
								} else {
									// push on stack bounds of array
									if (e->type->tag == tp_string) {
										e->f_tkn->prepend("array(");
										e->l_tkn->append(")");
									} else {
										((array_tp*)e->type->get_typedef())->insert_dimensions(e, (array_tp*)p->var->type->get_typedef());
									}
								}
								prev_param_type = p->var->type;
							}
						} else if (p->var->tag == symbol::s_ref && e->tag != tn_address)
						{
							e->f_tkn->prepend("&");
						}
					} else { // language C++
						if (!prc->is_extern_c
							&& p->var->type->tag == tp_array
							&& e->type->tag == tp_string)
						{
							if (p->var->type->name == NULL) {
								e->f_tkn->prepend("as_array(");
								e->l_tkn->append(")");
							} else {
								e->f_tkn->prepend(dprintf("as(%s,", p->var->type->name));
								e->l_tkn->append(")");
							}
						} else if (p->var->type->tag == tp_any || (p->var->tag == symbol::s_ref && prc->is_extern_c))
								{
									e->f_tkn->prepend("&");
								}
					}
				}
				p = p->next;
			} else {
				e->translate(ctx_value);
			}
		}
		if (language_c) {
			// push default values of skipped parameters
			while (p != NULL) {
				t_rpar->prepend(", 0");
				p = p->next;
			}
			if (type != NULL && type->tag == tp_array) {
				if (ctx == ctx_rvalue) {
					f_tkn->set_pos(assign_node::stmt->lval->f_tkn);
					t_lpar->append(", ")->move(assign_node::stmt->lval->f_tkn, assign_node::stmt->lval->l_tkn);
					tag = tn_retarr;
				} else {
					t_lpar->append(dprintf("%s, ", temp));
					f_tkn = f_tkn->prepend("*");
				}
			}
		}

		token* rest = t_rpar->prev_relevant();

		for (param_spec* prm = prc->extra_params; prm != NULL; prm = prm->next)
		{
			if (prm->var->flags & symbol::f_static) continue;

			rest = rest->append(", ");
			if (language_c && prm->var->tag != symbol::s_ref
				&& (prm->var->tag != symbol::s_const
					|| !prm->var->type->is_scalar())
				&& prm->var->ring == curr_proc
				&& !prm->var->type->is_array())
			{
				rest = rest->append("&");
			}
			rest = rest->append(prm->var->out_name->text);
		}

	} // delphi style type cast, not a procedure call  
	else if (type != NULL && (type->tag == tp_record || type->tag == tp_object
		|| (type->tag == tp_array && (language_c || ctx == ctx_constant))))
	{
		//TODO think whether we need two 'if' for type cast, merge into one?
		// TType(aaa) => ( (TType*)(aaa) )
		f_tkn = fptr->f_tkn->prepend("( (");
		if (type->tag == tp_object)
			fptr->l_tkn->append("*)");
		else
			fptr->l_tkn->append(")");

		l_tkn = t_rpar->append(" )");

		assert(args->next == nullptr); // type casting may have only one parameter

		for (expr_node* e = args; e != NULL; e = e->next) {
			e->translate(ctx_record);
		}

		/*if (hp_pascal) {
			if (language_c) {
				f_tkn = fptr->f_tkn->prepend("(");
				fptr->l_tkn->append("*)");
			}
		} else {
			token::remove(fptr->f_tkn, fptr->l_tkn);
			f_tkn = lpar;
			if (language_c || type->tag == tp_record || type->tag == tp_object) {
				lpar->set_trans("{");
				rpar->set_trans("}");
			} else {
				if (args->tag != tn_string || args->next != NULL) {
					lpar->set_trans("{{");
					rpar->set_trans("}}");
				}
			}

			for (expr_node* e = args; e != NULL; e = e->next) {
				e->translate(ctx_record);
			}

			if (ctx != ctx_constant) {
				assert(type->name != NULL);

				static int n_const;
				token* t = lpar->prev;
				char* const_name = dprintf("%s_const%d", type->name, ++n_const);

				assert(global_func_decl_level != NULL);

				global_func_decl_level->move(lpar, rpar);
				lpar->prepend(dprintf("const %s %s = ", type->name, const_name));
				rpar->append(";\n\n");

				f_tkn = l_tkn = t->append(const_name);
			}
		}*/
	} else { // again type conversion
		if (fptr->type && fptr->type->tag >= tp_any && //TODO fptr-> is not needed here because type==fptr->type
			(fptr->type->tag < tp_proc || fptr->type->tag == tp_ref || fptr->type->tag == tp_fwd_ref))
		{
			// type conversion TType(aaa) => ( (TType*)(aaa) )
			f_tkn = fptr->f_tkn->prepend("( (");
			if (type->tag == tp_object)
				fptr->l_tkn->append("*)");
			else
				fptr->l_tkn->append(")");

			l_tkn = t_rpar->append(" )");

		}
		//assert(args->next == nullptr); // type casting may have only one parameter

		for (expr_node* e = args; e != NULL; e = e->next) {
			e->translate(ctx_value);
		}

		if (!language_c && type != NULL && type->tag == tp_array) {
			fptr->l_tkn->append("::make");
		}
	}
}


skipped_node::skipped_node(token* comma) : expr_node(tn_skip)
{
	CONS1(comma);
   // this->comma = comma;
}

void skipped_node::attrib(int)
{
    type = &void_type;
}

void skipped_node::translate(int)
{
    l_tkn = f_tkn = comma->append(" 0");
}

/*
loophole_node::loophole_node(token* t_loophole, token* t_lpar, tpd_node* tpd,
			     token* t_comma, expr_node *expr, token* t_rpar) : expr_node(tn_loophole)
{
    CONS6(t_loophole, t_lpar, tpd, t_comma, expr, t_rpar);
}

void loophole_node::attrib(int ctx)
{
    tpd->attrib(ctx);
    expr->attrib(ctx_access);
    type = tpd->type;
}

void loophole_node::translate(int ctx)
{
    f_tkn = t_lpar;
    l_tkn = t_rpar;
    tpd->translate(ctx);
    expr->translate(ctx_access);
    t_loophole->disable();
    if (expr->tag == tn_address) {
	tpd->l_tkn->append("*)");
	f_tkn = f_tkn->prepend("*");
    }
    else if (language_c && tpd->type->tag == tp_integer
	    && expr->type->tag == tp_set
	    && (!short_set || !((set_tp*)expr->type->get_typedef())->is_short_set()))
    {
	token::disable(t_lpar, tpd->l_tkn);
	expr->l_tkn->append(".setarray[0]");
    }
    else
    {
	tpd->l_tkn->append(")");
    }
    t_rpar->disable();
    t_comma->disable();
}
*/

field_init_node::field_init_node(token* t_field,token* t_coln,expr_node* value)
{
    CONS3(t_field, t_coln, value);
    next = NULL;
}

void field_init_node::attrib(tpexpr* record_type)
{
    int ctx = ctx_constant;
	if (record_type != NULL && record_type->tag != tp_void) {
		symbol* s = ((record_tp*)record_type)->shallow_search(t_field);
		if (s == NULL) {
			warning(t_field, "Field '%s' is not found in record %s\n", t_field->in_text, record_type->name ? record_type->name : "");
		} else {
			value->type = s->type;
			ctx = s->type->tag == tp_record || s->type->tag == tp_object ? ctx_record : s->type->is_array() ? ctx_array : ctx_constant;
		}
	}

    value->attrib(ctx);
}

void field_init_node::translate(int)
{
    value->translate(ctx_constant);
    f_tkn = value->f_tkn;
    l_tkn = value->l_tkn;
    token::disable(t_field, f_tkn->prev);
    token* sep = l_tkn->next_relevant();
    if (sep->tag == TKN_SEMICOLON) {
		sep->set_trans(",");
    }
}

record_constant_node::record_constant_node(token* lpar, field_init_node* flist, token* rpar) : expr_node(tn_record_const)
{
    CONS3(lpar, flist, rpar);
}

void record_constant_node::attrib(int)
{
    tpexpr* record_type = type;
    if (record_type != NULL && (record_type->tag == tp_record || record_type->tag == tp_object)) {
		record_type = record_type->get_typedef();
    }
    for (field_init_node* val = flist; val != NULL; val = val->next) {
		val->attrib(record_type);
    }
}

void record_constant_node::translate(int ctx)
{
    f_tkn = lpar;
    l_tkn = rpar;
    lpar->set_trans("{");
    rpar->set_trans("}");
    for (field_init_node* val = flist; val != NULL; val = val->next) {
		val->translate(ctx);
    }
}

expr_group_node::expr_group_node(token* lpar, expr_node* expr, token* rpar) : expr_node(tn_group)
{
    CONS3(lpar, expr, rpar);
	ctx = -1; // becuase 0 is valid value (ctx_program)
}

static expr_node* aggregate_constant(expr_node* expr, symbol* component)
{
	if (component != NULL) {
		if (component->next != NULL) {
			expr = aggregate_constant(expr, component->next);
		}
	}
	if (expr != NULL) {
		int ctx = ctx_constant;
		if (component != NULL && component->type != NULL) {
			expr->type = component->type;
			ctx = component->type->tag == tp_record || component->type->tag == tp_object ? ctx_record
				: component->type->is_array() ? ctx_array : ctx_constant;
		}
		expr->attrib(ctx);
		return expr->next;
	}
    return NULL;
}

void expr_group_node::attrib(int ctx1)
{
	f_tkn = lpar;
	l_tkn = rpar;

    ctx = ctx1;
	if (type != NULL) {
		if (type->tag == tp_record || type->tag == tp_object) {
			for (expr_node* e = aggregate_constant(expr, ((record_tp*)type->get_typedef())->syms);
				e != NULL;
				e = e->next)
			{
				e->attrib(ctx_constant);
			}
			return;
		} else if (type->is_array()) {
			tpexpr* elem_type = ((array_tp*)type->get_typedef())->elem_type;
			ctx = (elem_type->tag == tp_record || elem_type->tag == tp_object) ? ctx_record //TODO are we updating class field or parameter here???
				: (elem_type->is_array()) ? ctx_array : ctx_constant;
			for (expr_node* e = expr; e != NULL; e = e->next) {
				e->type = elem_type;
				e->attrib(ctx);
			}
			return;
		}
	}

    for(expr_node* e = expr; e != NULL; e = e->next) {
		e->attrib(ctx1);
    }

    type = expr->type;
}

void expr_group_node::translate(int)
{
    if (ctx == ctx_record || (language_c && ctx == ctx_array)) {
	// constructor of record
        lpar->set_trans("{");
        rpar->set_trans("}");
    } else if (!language_c && ctx == ctx_array) {
        lpar->set_trans("{{");
        rpar->set_trans("}}");
    }
    for (expr_node* e = expr; e != NULL; e = e->next) {
        e->translate(ctx_constant);
    }
}


write_list_node::write_list_node(token* lpar, write_param_node* vals, token* rpar)
{
    CONS3(lpar, vals, rpar);
}

void write_list_node::attrib(int)
{
    for(expr_node* prm = vals; prm != NULL; prm = prm->next)
    {
        prm->attrib(ctx_value);
    }
}


void write_list_node::translate(int)
{
    f_tkn = lpar;
    l_tkn = rpar;

    for(expr_node* prm = vals; prm != NULL; prm = prm->next)
    {
        prm->translate(ctx_value);
    }
}


write_param_node::write_param_node(expr_node* val,
		     token* t_coln1, expr_node* width,
		     token* t_coln2, expr_node* prec)
: expr_node(tn_wrp)
{
    CONS5(val, t_coln1, width, t_coln2, prec);
}

void write_param_node::attrib(int ctx)
{

    val->attrib(ctx);
    type = val->type;
    if (width) {
	width->attrib(ctx_value);
	if (prec) {
	    prec->attrib(ctx_value);
        }
    }
}

static char* make_fmt_string(char* src) {
    char buf[65536];
    char* dst = buf;
    
	if (strcmp(src, "'\"'") == 0) return "\\\"";
    
	src += 1; // skip '"'
    
	while (*src != '\0') {
		if (*src == '%') *dst++ = '%'; // here we make %% from %
		*dst++ = *src++;
	}
    
	*--dst = '\0'; // skip '"'
    assert(dst < buf + sizeof(buf));
    
	return _strdup(buf);
}

void write_param_node::translate(int ctx)
{
    val->translate(ctx);
    f_tkn = val->f_tkn;
    l_tkn = val->l_tkn;

	if (language_c) {

		if (write_format == NULL) return;
		n_write_params += 1;

		char fmt = '?';
		switch (val->type->tag) {
		case tp_string:
			if (width == NULL && val->tag == tn_string) {
				write_format = dprintf("%s%s", write_format, make_fmt_string(((string_node*)val)->value_tkn->out_text));
				token* prev = f_tkn->prev_relevant();
				if (prev->tag == TKN_COMMA) {
					prev = prev->prev_relevant();
					token::disable(prev->next, l_tkn);
				} else {
					token* nxt = l_tkn->next_relevant();
					if (nxt->tag == TKN_COMMA) {
						nxt = nxt->next_relevant();
					}
					token::disable(f_tkn, nxt->prev);
				}
				n_write_params -= 1;
				return;
			}
#if 1
			fmt = 'z';
#else
			fmt = 's';
			f_tkn = val->f_tkn->prepend("array(");
			val->l_tkn->append(")");
#endif
			break;
		case tp_array:
			fmt = 's';
			((array_tp*)val->type->get_typedef())->insert_dimensions(val);
			break;
		case tp_char:
			if (width == NULL && val->tag == tn_char) {
				write_format = dprintf("%s%s", write_format, make_fmt_string(((string_node*)val)->value_tkn->out_text));
				token* prev = f_tkn->prev_relevant();
				if (prev->tag == TKN_COMMA) {
					prev = prev->prev_relevant();
					token::disable(prev->next, l_tkn);
				} else {
					token* nxt = l_tkn->next_relevant();
					if (nxt->tag == TKN_COMMA) {
						nxt = nxt->next_relevant();
					}
					token::disable(f_tkn, nxt->prev);
				}
				n_write_params -= 1;
				return;
			}
			fmt = 'c';
			break;
		case tp_bool:
			fmt = 'b';
			break;
		case tp_integer:
		case tp_range:
			fmt = 'i';
			break;
		case tp_real:
		case tp_double:
			fmt = 'f';
			break;
		default:
			warning(val->f_tkn, "invalid parameter for write operator");
		}
		if (width) {
			width->translate(ctx_value);
			t_coln1->set_trans(",");
			if (prec) {
				prec->translate(ctx_value);
				if (width->is_const_literal() && prec->is_const_literal()) {
					write_format = dprintf("%s%%%lld.%lld%c", write_format, width->value, prec->value, fmt);
					token::disable(val->l_tkn->next, prec->l_tkn);
				} else {
					t_coln2->set_trans(",");
					write_format = dprintf("%s%%*.*%c", write_format, fmt);
				}
			} else {
				if (width->is_const_literal()) {
					write_format = dprintf("%s%%%d%c", write_format, width->value, fmt);
					token::disable(val->l_tkn->next, width->l_tkn);
				} else {
					write_format = dprintf("%s%%*%c", write_format, fmt);
				}
			}
		} else {
			write_format = dprintf("%s%%%c", write_format, fmt);
		}

	} else { // language C++

		if (ctx == ctx_toascii) {
			if (width) {
				width->translate(ctx_value);
				t_coln1->set_trans(",");
				l_tkn = width->l_tkn;
				if (prec) {
					prec->translate(ctx_value);
					t_coln2->set_trans(",");
					l_tkn = prec->l_tkn;
				}
			}
		} else {
			if (val->type->tag == tp_bool) {
				f_tkn = val->f_tkn->prepend("btos(");
				l_tkn = val->l_tkn->append(")");
			}
			if (width) {
				width->translate(ctx_value);
				f_tkn = f_tkn->prepend("format(");
				t_coln1->set_trans(",");
				if (prec) {
					t_coln2->set_trans(",");
					prec->translate(ctx_value);
					l_tkn = prec->l_tkn->append(")");
				} else {
					l_tkn = width->l_tkn->append(")");
				}
			}
		}
	}
}


//
// Declaration
//

label_decl_part_node::label_decl_part_node(token* t_label,
					   token_list* labels,
					   token* t_semi)
{
    CONS3(t_label, labels, t_semi);
}

void label_decl_part_node::attrib(int)
{
}

void label_decl_part_node::translate(int)
{
    token::remove(t_label, t_semi);
}

const_def_node* const_def_node::enumeration;

const_def_node::const_def_node(token* t_ident, token* t_equal, expr_node* constant, token* t_depr, token* t_mess)
{
    CONS5(t_ident, t_equal, constant, t_depr, t_mess);
	sym = NULL;
}

void const_def_node::attrib(int)
{
    constant->attrib(ctx_constant);
    
	sym = b_ring::add_cur(t_ident, symbol::s_const, constant->type);
	
	if (constant->flags & tn_is_const) {
		sym->flags |= symbol::f_const;
		sym->value = constant->value;
	}
    if (language_c && (sym->type->tag == tp_integer
		       || sym->type->tag == tp_char
		       || sym->type->tag == tp_set))
    {
		sym->out_name->flags |= nm_entry::macro;
    }
}

void const_def_node::translate(int)
{
    constant->translate(ctx_constant);
    
	if (curr_proc && curr_proc->make_all_constants_global && !(sym->flags & symbol::f_static))
    {
		curr_proc->make_unique(sym);
    }
    
	sym->translate(t_ident);
 
	l_tkn = t_mess ? t_mess : t_depr ? t_depr : constant->l_tkn;
    
	token::disable(t_ident->next, constant->f_tkn->prev);

	if (language_c && (sym->type->tag == tp_integer
		|| sym->type->tag == tp_bool
		|| sym->type->tag == tp_char
		|| sym->type->tag == tp_set))
	{
		if (!do_not_use_enums && !(sym->flags & symbol::f_static) &&
			(sym->type->tag == tp_integer || sym->type->tag == tp_bool))
		{
			if (enumeration == NULL || (sym->flags & symbol::f_static)) {
				f_tkn = t_ident->prepend("enum { ");
				f_tkn->pos = curr_proc == NULL ? 0 : t_ident->pos;
			} else {
				enumeration->l_tkn->set_trans(",");
				enumeration->l_tkn->prev_relevant()->disable();
			}
			t_equal->set_trans(" = ");
			enumeration = this;
			l_tkn = constant->l_tkn->append("}");
			force_semicolon();
		} else {
			enumeration = NULL;
			token* t;
			f_tkn = t_ident->prepend("#define ");
			f_tkn->pos = 0;
			t_equal->set_trans(" ");
			if (curr_proc) {
				curr_proc->add_define(sym);
			}
			for (t = f_tkn->prev;
				t->cat == CAT_WSPC && t->tag != TKN_LN;
				t = t->prev);

			if (t->tag != TKN_LN) {
				f_tkn = f_tkn->prepend("\n");
				f_tkn->tag = TKN_LN;
			}
			t = l_tkn->next_relevant();
			if (t->tag == TKN_SEMICOLON) {
				t->set_trans("\n");
				t->tag = TKN_LN;
			}
		}
	} else { // C++ or complex types
		f_tkn = t_ident->prepend(language_c ? "static const " : "const ");
		enumeration = NULL;
		if (constant->type->tag == tp_string) {
			t_ident->prepend("char ");
			t_ident->append("[]");
		}
		else {
			constant->type->insert_before(t_ident);
			t_ident->prepend(" ");
		}
		t_equal->set_trans(" = ");
		force_semicolon();
	}

	insert_depr(t_depr, t_mess, f_tkn);

	if (sym->flags & symbol::f_static) {
		assert(global_func_decl_level != NULL);
		global_func_decl_level->move_region(f_tkn, l_tkn);
		global_func_decl_level->prepend("\n");
		(new token(NULL, TKN_BEG_SHIFT, f_tkn->line, f_tkn->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
	}
}

typed_const_def_node::typed_const_def_node(token* t_ident, token* t_coln, tpd_node* tpd, 
	                    token* t_equal, expr_node* constant, token* t_depr, token* t_mess)
				: const_def_node(t_ident, t_equal, constant, t_depr, t_mess)
{
    CONS2(t_coln, tpd);
}

void typed_const_def_node::attrib(int)
{
    tpd->attrib(ctx_constant);
    constant->type = tpd->type;
    constant->attrib(tpd->type->tag == tp_array
		     ? ctx_array : tpd->type->tag == tp_record || tpd->type->tag == tp_object
		     ? ctx_record : ctx_constant);

    sym = b_ring::add_cur(t_ident, symbol::s_const, constant->type);
    if (constant->flags & tn_is_const) {
		sym->flags |= symbol::f_const;
		sym->value = constant->value;
    }
}

void typed_const_def_node::translate(int)
{
    constant->translate(ctx_constant);
    tpd->translate(ctx_constant);
    if (curr_proc && curr_proc->make_all_constants_global && !(sym->flags & symbol::f_static))
    {
		curr_proc->make_unique(sym);
    }
    sym->translate(t_ident);
    l_tkn = constant->l_tkn;
    f_tkn = t_ident->prepend(" ")->move(tpd->f_tkn, tpd->l_tkn)->prepend("const ");
    token::disable(t_ident->next, constant->f_tkn->prev);
    t_equal->set_trans(" = ");
    force_semicolon();

	insert_depr(t_depr, t_mess, f_tkn);

	if (sym->flags & symbol::f_static) {
		assert(global_func_decl_level != NULL);
		global_func_decl_level->move_region(f_tkn, l_tkn);
		global_func_decl_level->prepend("\n");
		(new token(NULL, TKN_BEG_SHIFT, f_tkn->line, f_tkn->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
	}
}

const_def_part_node::const_def_part_node(token* t_const, const_def_node* list)
{
    CONS2(t_const, list);
}

void const_def_part_node::attrib(int ctx)
{
    for (decl_node* def = list; def != NULL; def = def->next) {
        def->attrib(ctx);
    }
}

void const_def_part_node::translate(int ctx)
{
    f_tkn = l_tkn = t_const;
    const_def_node::enumeration = nullptr;
	for (decl_node* def = list; def != nullptr; def = def->next) {
		def->translate(ctx);
		l_tkn = def->l_tkn;
	}
    t_const->disappear();
	if (ctx == ctx_block && curr_proc->make_all_constants_global) {
		// make type definition global
		global_func_decl_level->move_region(f_tkn, l_tkn);
		global_func_decl_level->prepend("\n\n");
		(new token(nullptr, TKN_BEG_SHIFT, f_tkn->line, f_tkn->next_relevant()->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
	}
    if (ctx == ctx_module || ctx == ctx_program) {
        (new token((char*)0, TKN_BEG_SHIFT, f_tkn->line, f_tkn->next_relevant()->pos))->insert_b(f_tkn);
        (new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
    }
}

type_def_node::type_def_node(token* t_ident, token* t_equal, tpd_node* tpd)
{
    CONS3(t_ident, t_equal, tpd);
	sym = NULL;
}

void type_def_node::attrib(int ctx)
{
	tpexpr* type;

	// special handling of record and object types because their methods' parameters can contain refs to current class/records
	// ex: procedure AAA(a: TMyClass) - method inside TMyClass
	// it means that current class/record type should exist in b_ring already (on the time of tpd->attrib() call)
	// that is why attrib() is divided into attrib1() and attrib2() for classes adn records
	// by default adding tpd into b_ring is done after tpd->attrib() which does work for all other types but does not work for classes and records.
	if (tpd->tag == tpd_node::tpd_object || tpd->tag == tpd_node::tpd_record)
	{
		// attrib1() initializes tpd->type which is required for 'new simple_tp(tpd->type)';
		// which is further required for b_ring::add_cur()
		auto obj_tpd = dynamic_cast<base_obj_tpd_node*>(tpd);
		assert(obj_tpd);
		obj_tpd->attrib1(ctx);

		type = new simple_tp(tpd->type);

		// we add this complex type to b_ring under simple name t_ident  
		sym = b_ring::add_cur(t_ident, symbol::s_type, type); 

		// attrib2() does rest of work required for attrib()
		obj_tpd->attrib2(ctx); 
	} 
	/*
	else if (tpd->tag == tpd_node::tpd_record)
	{
		// attrib1() initializes tpd->type which is required for 'new simple_tp(tpd->type)';
		// which is further required for b_ring::add_cur()
		auto rec_tpd = dynamic_cast<record_tpd_node*>(tpd);
		assert(rec_tpd);
		rec_tpd->attrib1(ctx); 

		type = new simple_tp(tpd->type);

		// we add this complex type to b_ring under simple name t_ident  
		sym = b_ring::add_cur(t_ident, symbol::s_type, type); 

		// attrib2() does rest of work required for attrib()
		rec_tpd->attrib2(ctx); 
	}*/
	else
	{
		tpd->attrib(ctx);

		type = new simple_tp(tpd->type);
		// we create simple_tp on top of tpd->type (which can be array type or any other complex type)
		// because on left side we have 'alias' for complex type from right side. alias is just simple name for the complex type.
		// this alias can be further used in code to represent complex type 

		// we add this complex type to b_ring under simple name t_ident  
		sym = b_ring::add_cur(t_ident, symbol::s_type, type); 
	}

	type->name = sym->out_name->text;
	sym->type = type;
	
	//TODO not sure about this change
	// for classes and records we do not have built-in name of type, that is why assign name here 
	if(tpd->type->name == nullptr)
		tpd->type->name = sym->out_name->text;

	switch (tpd->tag) {
	case tpd_node::tpd_enum:
		((enum_tp*)tpd->type)->set_bounds(sym);
		((enum_tp*)tpd->type)->set_enumeration_name(type);
		break;
	case tpd_node::tpd_range:
		((range_tp*)tpd->type)->set_bounds(sym);
		break;
	case tpd_node::tpd_object:
		((object_tp*)tpd->type)->class_name = sym;
	}
}

void type_def_node::translate(int ctx)
{
    tpd->translate(ctx);
    sym->translate(t_ident);
    f_tkn = t_ident;
    l_tkn = tpd->l_tkn;
    token::disable(t_ident->next, tpd->f_tkn->prev);

	if (language_c && tpd->tag == tpd_node::tpd_array) {
		tpd_node* eltd = ((array_tpd_node*)tpd)->eltd;
		f_tkn = t_ident->prepend("typedef ");
		t_ident->move(eltd->f_tkn, eltd->l_tkn);
		t_ident->prepend(" ");

	} else if (small_enum && tpd->tag == tpd_node::tpd_enum) {
		int n_elems = ((enum_tp*)tpd->type)->n_elems;
		t_ident->set_trans(dprintf("typedef %s %s;\n", n_elems < 0x100 ? "unsigned char" :
  				n_elems < 0x10000 ? "unsigned short" : "unsigned", t_ident->out_text));
		((enum_tpd_node*)tpd)->f_tkn->set_bind(t_ident);

	} else if (!language_c && tpd->tag == tpd_node::tpd_enum) {
		t_ident->append(" ");
		f_tkn = t_ident->prepend("enum ");
		((enum_tpd_node*)tpd)->f_tkn->disable();

	} else if (tpd->tag == tpd_node::tpd_object) {
		auto tmp = tpd->f_tkn->append(t_ident->out_text);
		if (tpd->f_tkn == tpd->l_tkn) l_tkn = tmp; // case of class forward declarations TMyClass = class;
		tpd->f_tkn->set_pos(t_ident);
		t_ident->disappear();

	} else if (tpd->tag == tpd_node::tpd_record) {
		auto rec_tpd = dynamic_cast<record_tpd_node*>(tpd);
		assert(rec_tpd);
		if (language_c) {
			rec_tpd->t_record->set_trans(dprintf("typedef %s%s ", rec_tpd->t_record->out_text, t_ident->out_text));
			l_tkn = l_tkn->append(" ")->append(t_ident->out_text);
		} else {
			rec_tpd->t_record->set_trans(dprintf("%s%s ", rec_tpd->t_record->out_text, t_ident->out_text));
		}
		rec_tpd->t_record->set_pos(t_ident);
		t_ident->disappear();

	} else if (tpd->tag == tpd_node::tpd_proc) {
		auto fptr = dynamic_cast<fptr_tpd_node*>(tpd);
		assert(fptr);
		fptr->t_params->prepend(dprintf("(*%s)", t_ident->out_text));
		t_ident->set_trans("typedef ");

	} else if (tpd->tag == tpd_node::tpd_metaclass) {
		t_ident->set_trans(dprintf("const type_info& %s = ", t_ident->out_text));

	} else {
		t_ident->append(" ");
		l_tkn = l_tkn->append(" ")->append(t_ident->out_text);
        t_ident->set_trans("typedef");
    }

    force_semicolon();
}

type_def_templ_node::type_def_templ_node(tpd_node* ident, token* t_equal, tpd_node* tpd): type_def_node(nullptr, t_equal, tpd)
{
	CONS2(t_equal, tpd);
	this->ident = dynamic_cast<simple_templ_tpd_node*>(ident);
}

void type_def_templ_node::attrib(int ctx)
{
	ident->attrib(ctx);
	t_ident = ident->t_ident;
	type_def_node::attrib(ctx);
}

void type_def_templ_node::translate(int ctx)
{
	ident->translate(ctx);
	tpd->translate(ctx);
	sym->translate(t_ident);
	f_tkn = t_ident;
	l_tkn = tpd->l_tkn;
	token::disable(t_ident->next, tpd->f_tkn->prev);

    if (small_enum && tpd->tag == tpd_node::tpd_enum) {
		int n_elems = ((enum_tp*)tpd->type)->n_elems;
		t_ident->set_trans(dprintf("typedef %s %s;\n",
			n_elems < 0x100 ? "unsigned char" :
			n_elems < 0x10000 ? "unsigned short" :
			"unsigned", t_ident->out_text));
		((enum_tpd_node*)tpd)->f_tkn->set_bind(t_ident);

	}
	else if (!language_c && tpd->tag == tpd_node::tpd_enum) {
		t_ident->append(" ");
		f_tkn = t_ident->prepend("enum ");
		((enum_tpd_node*)tpd)->f_tkn->disable();

	}
	else if (tpd->tag == tpd_node::tpd_object) {
		auto tmp = tpd->f_tkn->append(t_ident->out_text);
		if (tpd->f_tkn == tpd->l_tkn) l_tkn = tmp; // case of class forward declarations TMyClass = class;
		tpd->f_tkn->set_pos(t_ident);
		t_ident->disappear();

	}
	else if (tpd->tag == tpd_node::tpd_record) {
		record_tpd_node* rec_tpd = (record_tpd_node*)tpd;
		rec_tpd->t_record->set_trans(dprintf("%s%s ", rec_tpd->t_record->out_text, t_ident->out_text));
		rec_tpd->t_record->set_pos(t_ident);
		t_ident->disappear();

	}
	else if (tpd->tag == tpd_node::tpd_proc) {
		fptr_tpd_node* fptr = (fptr_tpd_node*)tpd;
		fptr->t_params->prepend(dprintf("(*%s)", t_ident->out_text));
		t_ident->set_trans("typedef ");
	}
	else {
		f_tkn = t_ident->prepend("using ");
		f_tkn = f_tkn->prepend(dprintf("template<typename %s>\n", ident->base_type->f_tkn->in_text));
		//l_tkn = l_tkn->append(" ")->append(t_ident->out_text);
		//l_tkn->next->move(t_ident, ident->t_rbr);
		t_ident->append(" = ");
		//l_tkn = ident->t_rbr;
	}
	force_semicolon();
}


type_def_part_node::type_def_part_node(token* t_type, type_def_node* types)
{
    CONS2(t_type, types);
}

void type_def_part_node::attrib(int ctx)
{
    for (decl_node* tpd = types; tpd != NULL; tpd = tpd->next) {
	tpd->attrib(ctx);
    }
    if (ctx == ctx_block && curr_proc) {
	curr_proc->make_all_constants_global = true;
    }
}

void type_def_part_node::translate(int ctx)
{
    f_tkn = l_tkn = t_type;
    t_type->disappear();
    for (decl_node* tpd = types; tpd != NULL; tpd = tpd->next) {
	tpd->translate(ctx);
	l_tkn = tpd->l_tkn;
    }
    if (ctx == ctx_block) {
	// make type definition global
  //      global_func_decl_level->move_region(f_tkn, l_tkn);
//	global_func_decl_level->prepend("\n\n");
        (new token(NULL, TKN_BEG_SHIFT, f_tkn->line,
		   f_tkn->next_relevant()->pos))->insert_b(f_tkn);
	(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
    } else {
        (new token((char*)0, TKN_BEG_SHIFT, f_tkn->line,
		   f_tkn->next_relevant()->pos))->insert_b(f_tkn);
	(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
    }
}

unit_spec_node::unit_spec_node(token* t_unit, token* t_name, token* t_semi,
			       token* t_interface, decl_node* decls)
{
    CONS5(t_unit, t_name, t_semi, t_interface, decls);
}

void unit_spec_node::attrib(int ctx)
{
    unit_tp* type = new unit_tp;
    b_ring::global_b_ring.add(t_name->name, symbol::s_var, type);
    b_ring* outer = b_ring::pop();

    b_ring::push(type);

    for (decl_node* dcl = decls; dcl != NULL; dcl = dcl->next) {
        dcl->attrib(ctx);
    }
    b_ring::push(outer);
}

void unit_spec_node::translate(int ctx)
{
    for (decl_node* dcl = decls; dcl != NULL; dcl = dcl->next) {
	dcl->translate(ctx);
	l_tkn = dcl->l_tkn;
    }
}


var_decl_node::var_decl_node(token_list* vars, token* t_coln, tpd_node* tpd, token* t_eq, expr_node* def_value, token* t_depr, token* t_mess)
{
    CONS7(vars, t_coln, tpd, t_eq, def_value, t_depr, t_mess);
    scope = NULL;
}

void var_decl_node::attrib(int ctx)
{
    tpexpr* tp;
	if (tpd != NULL) 
	{
		tpd->attrib(ctx);
		tp = tpd->type;
		if (tp == NULL)
		{
			if (/*tpd &&*/ tpd->f_tkn)
				warning(t_coln, "type is unknown '%s'", tpd->f_tkn->in_text);
			else 
				warning(t_coln, "type is unknown for variable '%s'", vars->ident->in_text);

			tpd->type = tp = &any_type;
		}
	}
	else 
	{
		tp = &any_type;
	}

	if (def_value) def_value->attrib(ctx);

	for (token_list* tkn = vars; tkn != NULL; tkn = tkn->next) 
	{
		int prm_class = symbol::s_var;
		if (ctx == ctx_constpar)
			prm_class = symbol::s_const;

		if (language_c) {
			if (tp->tag == tp_array || tp->tag == tp_dynarray) {
				if (ctx == ctx_valpar) {
					prm_class = symbol::s_const;
				}
			} else {
				if (ctx == ctx_varpar) {
					prm_class = symbol::s_ref;
				}
			}
		} // C++
		else if (ctx == ctx_varpar && tp->tag != tp_array
			&& tp->tag != tp_string && curr_proc->is_extern_c)
		{
			prm_class = symbol::s_ref;
		}

		tkn->var = b_ring::add_cur(tkn->ident, prm_class, tp);

		if (ctx == ctx_varpar) {
			tkn->var->flags |= symbol::f_var_param;
		}
		else if (ctx == ctx_valpar || ctx == ctx_constpar) {
			tkn->var->flags |= symbol::f_val_param;
		}
		if (*struct_path) {
			tkn->var->path = struct_path;
		}
		if (ctx == ctx_valpar || ctx == ctx_varpar || ctx == ctx_constpar) {
			curr_proc->add_param(tkn->var);
		}
	}
}

static token* var_decl_coln; // align formal parameters of procedures

void var_decl_node::translate(int ctx)
{
    tpexpr* tp;
    if (tpd != NULL) {
		tpd->translate(ctx);
		tp = tpd->type;
    } else {
		tp = &any_type;
    }

	if (def_value) def_value->translate(ctx); // need to be here to initialize def_value->l_tkn

    f_tkn = vars->ident;
    l_tkn = t_mess ? t_mess : t_depr ? t_depr: def_value ? def_value->l_tkn: t_coln ? t_coln : f_tkn; //TODO shall we use tpd->l_tkn instead of t_coln here?

    if (t_coln != NULL) {
		token::disable(t_coln->prev_relevant()->next, tpd->f_tkn->prev); // disables two tokens: ":" and "PascalType" in variable decl
    }

	if (ctx == ctx_valpar || ctx == ctx_varpar || ctx == ctx_constpar) {  // working with fun/method parameters here
		assert(!t_depr); //no deprecated in parameters
		assert(!t_mess);
		if (language_c && tp->tag == tp_dynarray) {
			token* t = vars->ident->prev;
			((array_tp*)tp->get_typedef())->insert_bound_params(vars->ident);
			if (var_decl_coln) {
				t->next->set_bind(var_decl_coln);
			}
		}
		for (token_list* tkn = vars; tkn != NULL; tkn = tkn->next) {
			token* t;
			tkn->var->translate(tkn->ident);
			if (language_c) {
				if (tpd != NULL) {
					if (tpd->tag == tpd_node::tpd_array) {
						tpd_node* eltd = ((array_tpd_node*)tpd)->eltd;
						t = tkn->ident->copy(eltd->f_tkn, eltd->l_tkn);
						if (tp->tag == tp_dynarray) {
							tkn->ident->prepend(ctx == ctx_varpar ? "* " : " const* ");
						} else {
							tkn->ident->prepend(ctx == ctx_varpar ? " " : "  const ");
							tkn->ident->next->copy(tpd->f_tkn, tpd->l_tkn);
						}
					} else {
						t = tkn->ident->prepend(ctx == ctx_varpar
							? tp->tag == tp_array || tp->tag == tp_string ? " " : "* "
							: tp->tag == tp_array ? " const " : " ")->copy(tpd->f_tkn, tpd->l_tkn);
					}
				} else {
					t = tkn->ident->prepend("void* ");
				}
			} else { // C++
				if (tpd == NULL) {
					t = tkn->ident->prepend("void* ");
				} else {
					char* modifier = " ";
					if (ctx == ctx_varpar) {
						if (tp->tag != tp_dynarray && tp->tag != tp_string) {
							if (curr_proc->is_extern_c) {
								if (tp->tag != tp_array) modifier = "* ";
							} else {
								modifier = "& ";
							}
						}
					}

					if (tp->tag == tp_object) modifier = "* "; // special case fot classes
					
					t = tkn->ident->prepend(modifier);
					if (curr_proc->is_extern_c && tp->tag == tp_array) {
						char* param_type_name = ((array_tp*)tp->get_typedef())->elem_type->name;
						t->prepend(dprintf("%s* ", param_type_name ? param_type_name : "void"));
					} else {
						token* tt = t->copy(tpd->f_tkn, tpd->l_tkn);
						if (ctx == ctx_constpar)
							tt->prepend("const ");	// parameters are with const modificator
					}
				}
			}

			if (var_decl_coln) {
				t->set_bind(var_decl_coln);
			} else {
				t->set_pos(tkn->ident);
			}
			if (tkn == vars) {
				f_tkn = t;
			}
		} //for

		if (tpd != NULL) {
			token::remove(tpd->f_tkn, tpd->l_tkn);
		}

		if (language_c && tpd != NULL && tpd->tag == tpd_node::tpd_array) {
			tpd_node* eltd = ((array_tpd_node*)tpd)->eltd;
			token::remove(eltd->f_tkn, eltd->l_tkn);
		}

		token* nr = l_tkn->next_relevant();
		if (nr->tag == TKN_SEMICOLON) {
			nr->set_trans(",");
		}
	}
	else { // working with var declaration here
		bool is_static = false;
		for (token_list* tkn = vars; tkn != NULL; tkn = tkn->next) {
			if (tkn->var->out_name != tkn->ident->name)
				tkn->ident->set_trans(tkn->var->out_name->text);

			if (language_c && ctx != ctx_record
				&& (tp->get_typedef()->flags & tp_need_init))
			{
				// initialize file structure
				tkn->ident->append((tp->tag == tp_file || tp->tag == tp_text) ? " = VOID_FILE" : " = {0}");
			}
			if (tkn->var->flags & symbol::f_static) is_static = true;

			//if (tp->tag == tp_object) tkn->ident->prepend("*"); // special case for classes
		}

		if (language_c && tpd->tag == tpd_node::tpd_array) {
			tpd_node* eltd = ((array_tpd_node*)tpd)->eltd;
			f_tkn = f_tkn->prepend(" ");
			f_tkn = f_tkn->move(eltd->f_tkn, eltd->l_tkn);
			for (token_list* tkn = vars; tkn != NULL; tkn = tkn->next) {
				tkn->ident->next->copy(tpd->f_tkn, tpd->l_tkn);
			}
			token::remove(tpd->f_tkn, tpd->l_tkn);
		} else {
			assert(tpd);
			
			if (tp->tag == tp_object && tpd->tag != tpd_node::tpd_array) { // arrays have tpd->type = type of array element
				f_tkn = vars->ident->prepend("*"); 
			} else if (tpd->tag == tpd_node::tpd_ref && (tp->tag == tp_ref && dynamic_cast<ref_tp*>(tp)->base_type->tag == tp_object) ) {
				// if tpd is ref then it already contains on '*' in its translated name
				f_tkn = f_tkn->prepend("*");
			}
			if (/*language_c &&*/ (tpd->tag == tpd_node::tpd_ref) || (tp->tag == tp_object) || (tp == &pointer_type) ) {
				// processing this case: a,b,c:^Integer => int* a, *b, *c;
				// for a we do not need to add '*' because translated ref type already contains it. for b and c we need to add '*'
				// that is why we start loop from vars->next
				for (token_list* tkn = vars->next; tkn != NULL; tkn = tkn->next) {
					if (tp->tag == tp_object && tpd->tag != tpd_node::tpd_array) tkn->ident->prepend("*");
					if (tp == &pointer_type  && tpd->tag != tpd_node::tpd_array) tkn->ident->prepend("*"); // special processing for Pointer type

					if (tpd->tag == tpd_node::tpd_ref) {
						tkn->ident->prepend("*"); 
						if(tp->tag == tp_ref && dynamic_cast<ref_tp*>(tp)->base_type->tag == tp_object)	tkn->ident->prepend("*");
					}
				}
			}
			f_tkn = f_tkn->prepend(" ");
			f_tkn = f_tkn->move(tpd->f_tkn, tpd->l_tkn);
			if (attr & decl_flags::is_static) f_tkn = f_tkn->prepend("static inline ");  // variable with static modificator
		}
		if (ctx != ctx_record && ctx != ctx_object && (unit_node::interface_part
				|| (extern_vars && t_coln != NULL && (t_coln->attr & token::from_include_file))))
		{
			f_tkn = f_tkn->prepend("EXTERN ");
		} else if (scope != NULL) {
			f_tkn = f_tkn->prepend(scope->tag == TKN_EXTERNAL ? "extern " :	scope->tag == TKN_STATIC ? "static " : "");
		}
		force_semicolon();
		if (is_static) {
			assert(global_func_decl_level != NULL);
			for (token_list* tkn = vars; tkn != NULL; tkn = tkn->next) {
				if (!(tkn->var->flags & symbol::f_static)) {
					tkn->var->flags |= symbol::f_static;
					tkn->var->ring->make_unique(tkn->var);
					tkn->var->translate(tkn->ident);
				}
			}
			f_tkn = f_tkn->prepend("static ");
			global_func_decl_level->move_region(f_tkn, l_tkn);
			global_func_decl_level->prepend("\n");
			(new token(NULL, TKN_BEG_SHIFT, f_tkn->line, f_tkn->pos))->insert_b(f_tkn);
			(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
		}

		insert_depr(t_depr, t_mess, f_tkn);
	}
}

var_decl_part_node::var_decl_part_node(token* t_classvar, token* t_var, var_decl_node* vars)
{
    CONS3(t_classvar, t_var, vars);
	is_const = false;
}

// used for: 
//      function/proc parameters when parameters declared with 'var', 'const' or 'out' specifier
//      for object's field definitions
//      for local and global variable definitions
void var_decl_part_node::attrib(int ctx)
{
	is_const = (t_var) && (strcmp(t_var->in_text, "const") == 0);

    for (decl_node* var = vars; var != NULL; var = var->next) {
        var->attrib(ctx == ctx_valpar ? (is_const? ctx_constpar: (int)ctx_varpar) : ctx);
    }
}

void var_decl_part_node::translate(int ctx)
{
    f_tkn = l_tkn = t_var;

    for (decl_node* var = vars; var != NULL; var = var->next) 
	{
		if (t_classvar) var->attr |= decl_flags::is_static; // raise up is_static flag for variable
		var->translate(ctx == ctx_valpar ? (is_const ? ctx_constpar : (int)ctx_varpar) : ctx);
		l_tkn = var->l_tkn;
    }

	if (t_classvar) t_classvar->disable();

    if (t_var) 
		t_var->disappear();
	else 
		f_tkn = vars->f_tkn;

    //    token::disable(t_var, t_var->next_relevant()->prev);
	if (ctx == ctx_module || ctx == ctx_program) {
		(new token((char*)0, TKN_BEG_SHIFT, f_tkn->line,
			f_tkn->next_relevant()->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
		if (unit_node::interface_part) {
			f_tkn = f_tkn->prepend(dprintf("\n#ifdef __%s_implementation__\n"
				"#undef EXTERN\n"
				"#define EXTERN\n"
				"#endif\n\n",
				unit_node::unit_name));
			l_tkn = l_tkn->append("\n#undef EXTERN\n"
				"#define EXTERN extern\n");
		}
	}
}

record_field_part_node::record_field_part_node(token* t_var, field_list_node* flist)
{
	CONS2(t_var, flist);
}

void record_field_part_node::attrib(int ctx)
{
	flist->attrib(ctx);
}

void record_field_part_node::translate(int ctx)
{
	flist->translate(ctx);
	if(t_var) t_var->disable();
}

/*
var_origin_decl_node::var_origin_decl_node(token* t_ident,
					   token* t_origin, expr_node *addr,
					   token* t_colon, tpd_node *tpd)
{
    CONS5(t_ident, t_origin, addr, t_colon, tpd);
	sym = NULL;
	type = NULL;
}


void var_origin_decl_node::attrib(int ctx)
{
    tpd->attrib(ctx);
    type = tpd->type;
    sym = b_ring::add_cur(t_ident, language_c ? symbol::s_ref : symbol::s_var, type);
    addr->attrib(ctx_value);
}

void var_origin_decl_node::translate(int ctx)
{
    tpd->translate(ctx);
    sym->translate(t_ident);
    addr->translate(ctx_value);
    l_tkn = addr->l_tkn;
    assert(type->name != NULL);
    f_tkn = t_ident->prepend(type->name);
    if (language_c) {
	t_ident->prepend("* ");
	t_origin->set_trans(dprintf(" = (%s*)", type->name));
    } else {
	t_ident->prepend("& ");
	t_origin->set_trans(dprintf(" = *(%s*)", type->name));
    }
    token::disable(l_tkn->next, tpd->l_tkn);
    force_semicolon();
    if (sym->flags & symbol::f_static) {
	assert(global_func_decl_level != NULL);
	f_tkn = f_tkn->prepend("static ");
	global_func_decl_level->move_region(f_tkn, l_tkn);
	global_func_decl_level->prepend("\n\n");
	(new token(NULL, TKN_BEG_SHIFT, f_tkn->line, f_tkn->pos))
	    ->insert_b(f_tkn);
	(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
    } else {
	if (ctx == ctx_module || ctx == ctx_program) {
	    (new token((char*)0, TKN_BEG_SHIFT, f_tkn->line,
		       f_tkn->next_relevant()->pos))->insert_b(f_tkn);
	    (new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
	}
    }
}
*/

void proc_decl_part_node::attrib(int ctx)
{
	for (decl_node* proc = procs; proc != NULL; proc = proc->next) 
	{
		proc->attrib(ctx);
	}
}

void proc_decl_part_node::translate(int ctx)
{
	//f_tkn = l_tkn = t_var;
	for (decl_node* proc = procs; proc != NULL; proc = proc->next) 
	{
		proc->translate(ctx);
		l_tkn = proc->l_tkn;
	}
	f_tkn = procs->f_tkn;

	/*
	//    token::disable(t_var, t_var->next_relevant()->prev);
	if (ctx == ctx_module || ctx == ctx_program) {
		(new token((char*)0, TKN_BEG_SHIFT, f_tkn->line,
			f_tkn->next_relevant()->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
		if (unit_node::interface_part) {
			f_tkn = f_tkn->prepend(dprintf("\n#ifdef __%s_implementation__\n"
				"#undef EXTERN\n"
				"#define EXTERN\n"
				"#endif\n\n",
				unit_node::unit_name));
			l_tkn = l_tkn->append("\n#undef EXTERN\n"
				"#define EXTERN extern\n");
		}
	}*/
}

void method_decl_node::attrib(int ctx)
{
	proc->attrib(ctx);
}

void method_decl_node::translate(int ctx)
{
	proc->translate(ctx);

	f_tkn = t_class ? t_class : proc->f_tkn;
	l_tkn = proc->l_tkn;

	if (t_class) t_class->set_trans("static ");
}


param_list_node::param_list_node(token* lpar, decl_node* params, token* rpar)
{
    CONS3(lpar, params, rpar);
}

void param_list_node::attrib(int)
{
    for (decl_node* dcl = params; dcl != NULL; dcl = dcl->next) {
        dcl->attrib(ctx_valpar);
    }
}

void param_list_node::translate(int)
{
    f_tkn = lpar;
    l_tkn = rpar;

    for (decl_node* dcl = params; dcl != NULL; dcl = dcl->next) {
        dcl->translate(ctx_valpar);
	if (var_decl_coln == NULL) {
	    var_decl_coln = dcl->f_tkn->prev->next_relevant();
        }
    }
    var_decl_coln = NULL;
}


// Class proc_decl_node is used for procedure formal parameter declaration

proc_decl_node::proc_decl_node(token* t_proc, token* t_ident, param_list_node* params, token* t_coln, tpd_node* ret_type)
{
    CONS5(t_proc, t_ident, params, t_coln, ret_type);
	var = NULL;
	type = NULL;
}

void proc_decl_node::attrib(int ctx)
{
    if (ret_type) ret_type->attrib(ctx);

    type = new proc_tp(ret_type ? ret_type->type : (tpexpr*)NULL, (tpd_node*)this); //TODO this is not tpd_node here!!
    var = b_ring::add_cur(t_ident, symbol::s_var, type);
    type->proc_name = var->out_name->text;
    curr_proc->add_param(var);
    if (params) {
        proc_tp* save_proc = curr_proc;
		assert(type);
        curr_proc = type;
        b_ring::push(type);
        params->attrib(ctx);
        b_ring::pop(type);
        curr_proc = save_proc;
    }
}

// does nothing if ret_type == NULL
void proc_decl_node::insert_return_type() {
    if (ret_type) {
        ret_type->translate(ctx_block);

		// if return type is object type then make it a pointer
		if (ret_type->type->tag == tp_object) ret_type->l_tkn = ret_type->l_tkn->append("*");

		assert(ret_type->type->name != NULL);
		if (language_c && ret_type->type->tag == tp_array) {
			t_proc->set_trans(dprintf("%s*", ret_type->type->name));
			var->flags |= symbol::f_var_param;
		} else {
			//assert(ret_type->f_tkn->out_text);
			//t_proc->set_trans(ret_type->f_tkn->out_text); //TODO out_text is NULL for some reason, need to investigate
			//t_proc->set_trans(ret_type->type->name);
			assert(ret_type->f_tkn);
			assert(ret_type->l_tkn);
			f_tkn = t_proc->move(ret_type->f_tkn, ret_type->l_tkn);
			t_proc->disable(); //set_trans(" "); // we need a space between ret type and fun/method name
		}
		token::disable(t_coln->prev_relevant()->next, t_coln);
    } else {

		t_proc->set_trans("void");

		/*
		if (type->is_constructor || type->is_destructor) {
			assert(var);
			assert(dynamic_cast<object_tp*>(var->ring)); // check that var->ring has proper type, records cannot have constructors in Delphi
			if (var != NULL)
				t_proc->set_trans(dprintf("%s*", ((object_tp*)var->ring)->class_name->out_name->text));
		} else {
			t_proc->set_trans("void");
		}
		*/

		/*
		// convert 'constructor Create(...)' into C++ constructor 'MyClassName(...)'
		if (type->is_constructor) {
			assert(var);
			token* tmp = t_proc->next_relevant();
			token::disable(t_proc->next, tmp->prev);
			t_ident->disable();
			t_proc->set_trans(var ? ((object_tp*)var->ring)->class_name->out_name->text: "<UNKNOWN CLASS>");
		}

		// convert 'destructor Destroy(...)' into C++ destructor '~MyClassName(...)'
		if (type->is_destructor) {
			assert(var);
			token* tmp = t_proc->next_relevant();
			token::disable(t_proc->next, tmp->prev);
			t_ident->disable();
			t_proc->set_trans(dprintf("~%s", var? ((object_tp*)var->ring)->class_name->out_name->text: "<UNKNOWN CLASS>"));
		}*/
    }

    if (*pascall) {
		t_proc->append(pascall);
		t_proc->append(" ");
    }
}

void proc_decl_node::insert_params() 
{
    token* rest = NULL;
    bool first = false;
    if (params) {
        proc_tp* save_proc = curr_proc;
		assert(type);
		curr_proc = type;
        params->translate(ctx_block);
		curr_proc = save_proc;
		rest = params->rpar;
    } else {
        rest = t_ident->append("(")->append(")");
		first = true;
    }

    if (language_c && type->res_type != NULL && type->res_type->tag == tp_array)
    {
		if (params) {
			params->lpar->append(dprintf("%s %s_result, ", type->res_type->name, type->proc_name));
		} else {
		    rest->prepend(dprintf("%s %s_result", type->res_type->name, type->proc_name));
		}

	first = false;
    }

	for (param_spec* p = type->extra_params; p != NULL; p = p->next) {

		if (p->var->flags & symbol::f_static) continue;

		if (!first) {
			rest->prepend(", ");
		}
		first = false;
		if (language_c) {
			if (p->var->type->tag == tp_array) {
				array_tpd_node* atp = (array_tpd_node*)p->var->type->tpd;
				rest->copy(atp->eltd->f_tkn, atp->eltd->l_tkn);
				rest->prepend(dprintf(p->var->tag == symbol::s_const ? " const %s" : " %s", p->var->out_name->text));
				rest->copy(atp->f_tkn, atp->l_tkn);
			} else if (p->var->type->tag == tp_dynarray) {
				array_tpd_node* atp = (array_tpd_node*)p->var->type->tpd;
				rest->copy(atp->eltd->f_tkn, atp->eltd->l_tkn);
				rest->prepend(dprintf(p->var->tag == symbol::s_const ? " const* %s" : "* %s", p->var->out_name->text));
			} else {
				p->var->type->insert_before(rest);
				if (p->var->tag == symbol::s_const) {
					if (p->var->type->is_scalar()
						|| p->var->type->tag == tp_string)
					{
						rest->prepend(dprintf(" const %s", p->var->out_name->text));
					} else {
						rest->prepend(dprintf(" const* %s", p->var->out_name->text));
					}
				} else {
					rest->prepend(dprintf("* %s", p->var->out_name->text));
				}
			}
		} else { // C++
			p->var->type->insert_before(rest);
			if (p->var->tag == symbol::s_const) {
				if (p->var->type->is_scalar()) {
					rest->prepend(dprintf(" const %s", p->var->out_name->text));
				} else {
					rest->prepend(dprintf(" const& %s", p->var->out_name->text));
				}
			} else {
				rest->prepend(dprintf("& %s", p->var->out_name->text));
			}
		}
	}
}


void proc_decl_node::translate(int)
{
    f_tkn = t_proc;

    insert_return_type();
    t_ident->set_trans(dprintf("(*%s)", var->out_name->text));
    insert_params();
    l_tkn = params ? params->l_tkn : t_ident->next->next;

    if (l_tkn->next_relevant()->tag == TKN_SEMICOLON) {
        l_tkn->next_relevant()->set_trans(",");
    }
}

proc_fwd_decl_node::proc_fwd_decl_node(token* t_proc, token* t_ident, param_list_node* params, token* t_coln,
               tpd_node* ret_type, token* t_semi1, token_list* qualifiers, token* t_semi2)
		       : proc_decl_node(t_proc, t_ident, params, t_coln, ret_type)
{
    CONS3(t_semi1, qualifiers, t_semi2);

	is_external = false;
	is_static = false;
	is_virtual = false;
	is_override = false;
	//is_overload = false;
	is_stdcall = false;
	is_pascal = false;
	is_cdecl = false;
	is_register = false;
	is_final = false;
	is_abstract = false;
	is_inline = false;
}

void proc_fwd_decl_node::attrib(int ctx)
{
	f_tkn = t_proc;
	l_tkn = t_semi1;

    if (ret_type) ret_type->attrib(ctx);
    
    type = new proc_tp(ret_type ? ret_type->type : (tpexpr*)NULL);
    type->forward = this;

	if (turbo_pascal) {
		if (t_proc->tag == TKN_CONSTRUCTOR) type->is_constructor = true;
		else if (t_proc->tag == TKN_DESTRUCTOR) type->is_destructor = true;
	}

	if ( (var = b_ring::search_cur(t_ident)) == NULL || var->type == NULL
	     || var->type->tag != tp_proc || var->ring != b_ring::curr_b_ring
		 || (var->flags & symbol::f_syslib))
	{
		var = b_ring::add_cur(t_ident, symbol::s_proc, type);
	}
	else {
		var->type = type;
	}

	// mark methods of interface as abstract, they really abstract methods.
	auto r = dynamic_cast<object_tp*>(var->ring);
	if (r) {
		auto interface = dynamic_cast<interface_tpd_node*>(r->tpd);
		if (interface) is_abstract = is_virtual = true;
	}


	for (token_list* t = qualifiers; t != NULL; t = t->next)
	{
		switch (t->ident->tag) {
		case TKN_VIRTUAL: 
			is_virtual = type->is_constructor ? false : true; // in C++ constructors cannot be virtual unlike to Delphi
			if (ctx != ctx_object) warning(t->ident, "method %s: virtual directive cannot be used here, only class methods can be marked virtual", t_ident->in_text);
			break;
		case TKN_DYNAMIC:
			is_virtual = type->is_constructor ? false : true;
			if (ctx != ctx_object) warning(t->ident, "method %s: dynamic directive cannot be used here, only class methods can be marked dynamic", t_ident->in_text);
			break;
		case TKN_OVERRIDE:
			is_override = type->is_constructor ? false : true; // in C++ constructors cannot be marked override since they are NOT virtual
			if (ctx != ctx_object) warning(t->ident, "method %s: override directive cannot be used here, only class methods can be marked override", t_ident->in_text);
			break;
		case TKN_EXTERNAL: is_external = true; break;
		case TKN_STATIC:   is_static   = true; break;
		//case TKN_OVERLOAD: is_overload = true; break;
		case TKN_WINAPI:   is_stdcall  = true; break; // winapi qualifier is the same as stdcall on WIN32
		case TKN_SAFECALL: is_stdcall  = true; break; // safecall qualifier is the same as stdcall in C++
		case TKN_STDCALL:  is_stdcall  = true; break;
		case TKN_PASCAL:   is_pascal   = true; break;
		case TKN_CDECL:    is_cdecl    = true; break;
		case TKN_REGISTER: is_register = true; break;
		case TKN_FINAL:    is_final    = true; break;
		case TKN_ABSTRACT: is_abstract = true; break;
		case TKN_INLINE:   is_inline   = true; break;
		case TKN_C: type->is_extern_c  = true; break;
		}

		/*
		if (t->ident->tag == TKN_EXTERNAL) {
			is_external = true;
		}
		else if (t->ident->tag == TKN_STATIC) {
			is_static = true;
		}
		else if (t->ident->tag == TKN_VIRTUAL) { 
			is_virtual = type->is_constructor ? false : true; // in C++ constructors cannot be virtual unlike to Delphi
			if (ctx != ctx_object) warning(t->ident, "method %s: virtual directive cannot be used here, only class methods can be marked virtual", t_ident->in_text);
		}
		else if (t->ident->tag == TKN_DYNAMIC) { // dynamic functions are marked virtual in C++ (constructors is an exception)
			is_virtual = type->is_constructor ? false : true;
			if (ctx != ctx_object) warning(t->ident, "method %s: dynamic directive cannot be used here, only class methods can be marked dynamic", t_ident->in_text);
		}
		else if (t->ident->tag == TKN_OVERRIDE) {
			is_override = type->is_constructor ? false : true; // in C++ constructors cannot be marked override since they are NOT virtual
			if (ctx != ctx_object) warning(t->ident, "method %s: override directive cannot be used here, only class methods can be marked override", t_ident->in_text);
		}
		else if (t->ident->tag == TKN_OVERLOAD) {
			is_overload = true;
		}
		else if (t->ident->tag == TKN_STDCALL) {
			is_stdcall = true;
		}
		else if (t->ident->tag == TKN_PASCAL) {
			is_pascal = true;
		}
		else if (t->ident->tag == TKN_CDECL) {
			is_cdecl = true;
		}
		else if (t->ident->tag == TKN_REGISTER) {
			is_register = true;
		}
		else if (t->ident->tag == TKN_FINAL) {
			is_final = true;
		}
		else if (t->ident->tag == TKN_ABSTRACT) {
			is_abstract = true;
		}
		else if (t->ident->tag == TKN_INLINE) {
			is_inline = true;
		}
		else if (t->ident->tag == TKN_C) {
			type->is_extern_c = true;
		}*/
	}

	if (is_static && (is_virtual || is_override || is_abstract))
		warning(t_ident, "method '%s' marked as 'static' cannot be abstract, virtual or dynamic", t_ident->in_text);
	
	if (is_inline && (is_virtual || is_override || is_abstract))
		warning(t_ident, "method '%s' marked as 'inline' cannot be abstract, virtual or dynamic", t_ident->in_text);
	
	if (is_abstract && !is_virtual)
		warning(t_ident, "abstract method '%s' must be virtual or dynamic", t_ident->in_text);


    type->proc_name = var->out_name->text;

    if (params) {
        proc_tp* save_proc = curr_proc;
		assert(type);
        curr_proc = type;
        b_ring::push(type);
        params->attrib(ctx);
        b_ring::pop(type);
        curr_proc = save_proc;
    }
}

void proc_fwd_decl_node::translate(int)
{
	insert_return_type();

	// convert 'constructor Create()' into C++ constructor 'MyClassName()'
	if (type->is_constructor) {
		assert(var);
		token* tmp = t_proc->next_relevant();
		token::disable(t_proc->next, tmp->prev);
		t_ident->disable();
		t_proc->set_trans(var ? ((object_tp*)var->ring)->class_name->out_name->text : "<UNKNOWN CLASS>");
	}

	// convert 'destructor Destroy()' into C++ destructor '~MyClassName()'
	if (type->is_destructor) {
		assert(var);
		token* tmp = t_proc->next_relevant();
		token::disable(t_proc->next, tmp->prev);
		t_ident->disable();
		t_proc->set_trans(dprintf("~%s", var ? ((object_tp*)var->ring)->class_name->out_name->text : "<UNKNOWN CLASS>"));
	}


	// 'static' directive is not translated into C++ keyword 'static' because keyword 'class' tells us that method is static
	// e.g. 'class procedure AAAA;'. Compare to - 'class procedure AAAA; static;'
	// 'reintroduce' directive is not translated into C++ keyword because this is C++ behavious by default

	if (is_external)
		f_tkn = f_tkn->prepend(type->is_extern_c && !language_c ? "extern \"C\" " : "extern ");

	if (is_virtual)
		f_tkn = f_tkn->prepend("virtual ");

	if (is_override)
		l_tkn = l_tkn->prepend(" override");

	if (is_stdcall)
		f_tkn->append(" __stdcall");

	if (is_pascal)
		f_tkn->append(" __pascal");

	if (is_cdecl)
		f_tkn->append(" __cdecl");

	if (is_register)
		f_tkn->append(" __fastcall");

	if (is_final)
		l_tkn = l_tkn->prepend(" final");

	// interfaces are translated as abstract classes. it means that methods of interface may not contain qualifiers but be abstract
	if (is_abstract)
		l_tkn = l_tkn->prepend(" = 0");

	if (is_inline)
		f_tkn = f_tkn->prepend("inline ");

	// explicit and implicit are C++ keywords. they are not translated by regular mechanism (via ptoc.cfg file) because  
	// they are Delphi tokens defined in token.dpp file. Tokens from token.dpp file are not tranlated using ptoc.cfg file.
	// So we need to translate those tokens manually here
	//if (t_ident->tag == TKN_EXPLICIT || t_ident->tag == TKN_IMPLICIT)
	//	t_ident->set_trans(dprintf("%s_", t_ident->in_text));

	//var->translate(t_ident); //TODO commented it out. Not sure what other places this can break 
	insert_params();

	if (qualifiers)
	{
		auto qual = qualifiers;
		while (qual->next) qual = qual->next; // look for the first qualifier because "qualifiers" refers to the last one
		token::disable(qual->ident, t_semi2);
	}
}

operator_fwd_decl_node::operator_fwd_decl_node(token* t_proc, token* t_ident, param_list_node* params, 
	       token* t_coln, tpd_node* ret_type, token* t_semi1, token_list* qualifiers, token* t_semi2)
	          : proc_fwd_decl_node(t_proc, t_ident, params, t_coln, ret_type, t_semi1, qualifiers, t_semi2)
{
	//this->t_semi = t_semi;
}

/*
void operator_fwd_decl_node::attrib(int ctx)
{
	//proc_fwd_decl_node::attrib(ctx);

	assert(ret_type); // operators must always have ret_type
	
	f_tkn = t_proc;
	l_tkn - t_semi;

	ret_type->attrib(ctx);

	type = new proc_tp(ret_type->type);
	//var = b_ring::add_cur(t_ident, symbol::s_var, type);
	type->proc_name = var->out_name->text;
	//curr_proc->add_param(var);
	if (params) {
		proc_tp* save_proc = curr_proc;
		curr_proc = type;
		b_ring::push(type);
		params->attrib(ctx);
		b_ring::pop(type);
		curr_proc = save_proc;
	}
}
*/

void operator_fwd_decl_node::translate(int ctx)
{
	proc_fwd_decl_node::translate(ctx);

	// do not do extra tranlation for two operators TKN_IMPLICIT and TKN_EXPLICIT, no equivalent in C++
	// they have intentionally ovewritten token tags to TKN_RESERVED because implicit and explicit are reserved words in C++.
	if (t_ident->tag == TKN_IMPLICIT || t_ident->tag == TKN_EXPLICIT) return;

	// no equivalent in C++ operators for these two ones
	if (t_ident->tag == TKN_INTDIVIDE || t_ident->tag == TKN_LOGICALXOR) return;

	l_tkn = l_tkn->append("\n");
	l_tkn = l_tkn->append(" "); // do NOT merge with previous statement
	l_tkn->copy(ret_type->f_tkn, ret_type->l_tkn)->set_pos(f_tkn);

	switch (t_ident->tag) {
	case TKN_EQUAL:
	case TKN_NOTEQUAL:
	case TKN_LESSTHAN:
	case TKN_GREATERTHAN:
	case TKN_GREATERTHANOREQUAL:
	case TKN_LESSTHANOREQUAL:
	case TKN_ADD:
	case TKN_SUBTRACT:
	case TKN_MULTPILY:
	case TKN_DIVIDE:
	case TKN_MODULUS:
	case TKN_LEFTSHIFT:
	case TKN_RIGHTSHIFT:
	case TKN_BITWISEAND:
	case TKN_BIWISEOR:
	case TKN_BIWISEXOR:
	case TKN_LOGICALAND:
	case TKN_LOGICALOR:
	{
		switch (t_ident->tag)
		{
		case TKN_EQUAL:       l_tkn = l_tkn->append("operator == ("); break;
		case TKN_NOTEQUAL:    l_tkn = l_tkn->append("operator != ("); break;//TODO think how to implement LogicalXor which is equivalent to !=
		case TKN_LESSTHAN:    l_tkn = l_tkn->append("operator < ("); break;
		case TKN_GREATERTHAN: l_tkn = l_tkn->append("operator > ("); break;
		case TKN_GREATERTHANOREQUAL:l_tkn = l_tkn->append("operator >= ("); break;
		case TKN_LESSTHANOREQUAL:   l_tkn = l_tkn->append("operator <= ("); break;
		case TKN_ADD:         l_tkn = l_tkn->append("operator + ("); break;
		case TKN_SUBTRACT:    l_tkn = l_tkn->append("operator - ("); break;
		case TKN_MULTPILY:    l_tkn = l_tkn->append("operator * ("); break;
		case TKN_DIVIDE:      l_tkn = l_tkn->append("operator / ("); break;//TODO think how to implement opertor IntDivide
		case TKN_MODULUS:     l_tkn = l_tkn->append("operator % ("); break;
		case TKN_LEFTSHIFT:   l_tkn = l_tkn->append("operator << ("); break;
		case TKN_RIGHTSHIFT:  l_tkn = l_tkn->append("operator >> ("); break;
		case TKN_BITWISEAND:  l_tkn = l_tkn->append("operator & ("); break;
		case TKN_BIWISEOR:    l_tkn = l_tkn->append("operator | ("); break;
		case TKN_BIWISEXOR:   l_tkn = l_tkn->append("operator ^ ("); break;
		case TKN_LOGICALAND:  l_tkn = l_tkn->append("operator && ("); break;
		case TKN_LOGICALOR:   l_tkn = l_tkn->append("operator || ("); break;

		default: 
			l_tkn = l_tkn->append("operator UNKNOWN (");
			warning("incorrect overloaded operator name: %s", t_ident->in_text);
		}

		char* var_name = nullptr;

		// take second parameter name and type
		auto vdn = dynamic_cast<var_decl_node*>(params->params);
		if (vdn->next)
		{
			vdn = dynamic_cast<var_decl_node*>(vdn->next);
			l_tkn = l_tkn->append(vdn->vars->var->type->name);
			l_tkn = l_tkn->append(" ");
			var_name = vdn->vars->var->out_name->text;
			l_tkn = l_tkn->append(var_name);
		}
		else
		{
			assert(vdn->vars->next);
			l_tkn = l_tkn->append(vdn->vars->next->var->type->name);
			l_tkn = l_tkn->append(" ");
			var_name = vdn->vars->next->var->out_name->text;
			l_tkn = l_tkn->append(var_name);
		}

		l_tkn = l_tkn->append(") const ");
		l_tkn = l_tkn->append(dprintf("{ return %s(*this, %s); }", t_ident->out_text, var_name));

		break;
	}

	case TKN_NEGATIVE:
	case TKN_POSITIVE:
	case TKN_IMPLICIT:
	case TKN_EXPLICIT:
	case TKN_LOGICALNOT:
	{
		switch (t_ident->tag)
		{
		case TKN_NEGATIVE:   l_tkn = l_tkn->append("operator - ("); break;
		case TKN_POSITIVE:   l_tkn = l_tkn->append("operator + ("); break;//TODO find proper operator for +
		case TKN_IMPLICIT:   l_tkn = l_tkn->append("operator () ("); break;
		case TKN_EXPLICIT:   l_tkn = l_tkn->append("operator () ("); break;//TODO how to distinguish between implicit and explicit
		case TKN_LOGICALNOT: l_tkn = l_tkn->append("operator ! ("); break;
		
		default: 
			l_tkn = l_tkn->append("operator UNKNOWN (");
			warning("incorrect overloaded operator name: %s", t_ident->in_text);
		}

		l_tkn = l_tkn->append(") const ");
		l_tkn = l_tkn->append(dprintf("{ return %s(*this); }", t_ident->out_text));

		break;
	}//case

	default: warning("incorrect overloaded operator name: %s", t_ident->in_text);
	
    }// main switch
}


record_tp* proc_def_node::self;

proc_def_node::proc_def_node
  (token* t_static, token* t_proc, token* t_class, token* t_dot, token* t_ident, param_list_node* params, token* t_coln,
   tpd_node* ret_type, token* t_semi1, /*token* t_attrib, token* t_semi2,*/ block_node* block, token* t_semi3) 
	   : proc_decl_node(t_proc, t_ident, params, t_coln, ret_type)
{
    CONS6(t_static, t_class, t_dot, t_semi1, /*t_attrib, t_semi2,*/ block, t_semi3);
    use_forward = false;
    s_self = NULL;
    self = NULL;
}

void proc_def_node::attrib(int ctx)
{
    //if (ret_type)
	//	ret_type->attrib(ctx); //TODO this will generate "unknown type" warning message if type is defined inside a class.
    //type = new proc_tp(ret_type ? ret_type->type : (tpexpr*)NULL);

	if (t_class != NULL) { // this is method of class
		s_self = b_ring::search_cur(t_class);
		if (s_self == NULL) {
			warning(t_class, "Class %s is not defined\n", t_class->out_text);
		} else {
			auto rec_tp = dynamic_cast<record_tp*>(s_self->type->get_typedef()); // check that get_typedef() really returns record_tp* (record_tp is parent for object_tp)
			assert(rec_tp);
			self = rec_tp; //(record_tp*)s_self->type->get_typedef();
			
			b_ring::push(self);
			if (ret_type)
				ret_type->attrib(ctx); //need b_ring::push(self) before ret_type->attrib() to find return type in class bring then in unit bring.

			var = self->search(t_ident); // searches in curr class, then searches in parent class and then searches in outer scope

			type = new proc_tp(ret_type ? ret_type->type : (tpexpr*)nullptr);
			// important to preserve reference to method forward declaration here, it is further used to find class's d_ring
			type->forward = ((proc_tp*)var->type)->forward; //TODO add dynamic_cast here
			
			if (t_proc->tag == TKN_CONSTRUCTOR) type->is_constructor = true;
			else if (t_proc->tag == TKN_DESTRUCTOR) type->is_destructor = true;

			if (var == NULL || var->type->tag != tp_proc) {
				warning(t_class, "Method '%s' not found in class '%s'", t_ident->out_text, t_class->out_text);
				var = self->add(t_ident->name, symbol::s_proc, type);
			}// else {
				//type = (proc_tp*)var->type;// this line caused parameters duplication in 'type' because var->type already contains params from forward declaration
			//}

			//b_ring::push(self);
			
			if (type == NULL)
				type = new proc_tp(ret_type ? ret_type->type : nullptr);
		}
	} else { // procedure-function  (not a method)
		if (ret_type)
			ret_type->attrib(ctx); 
		type = new proc_tp(ret_type ? ret_type->type : nullptr);

		if ((var = b_ring::search_cur(t_ident)) == NULL || var->type == NULL
			|| var->type->tag != tp_proc || var->ring != b_ring::curr_b_ring
			|| (var->flags & symbol::f_syslib))
		{
			var = b_ring::add_cur(t_ident, symbol::s_proc, type);
		} else {
			if (((proc_tp*)var->type)->forward != NULL && params == NULL && ret_type == NULL)
			{
				use_forward = true;
				type = (proc_tp*)var->type;
			} else {
				var->type = type;
			}
		}
	}

    if (var != NULL) {
		type->proc_name = var->out_name->text;
    }

	if (ret_type) // built-in variable Result for functions only.
		// name of variable must be in lower case. 'Result' does not work while 'result' - does 
		type->add(nm_entry::add("result", TKN_IDENT), symbol::s_var, ret_type->type);

    b_ring::push(type);
    proc_tp* save_proc = curr_proc;
	assert(type);
    curr_proc = type;
    if (params) 
		params->attrib(ctx);
    block->attrib(ctx_block);
    if (save_proc) {
		save_proc->n_subproc += curr_proc->n_subproc + 1;
    }
    curr_proc = save_proc;

    b_ring::pop(type);

    if (t_class && self) {
		b_ring::pop(self);
		self = NULL;
    }
}

void proc_def_node::translate(int ctx)
{
    f_tkn = t_proc;
    l_tkn = t_semi3;
    int is_recursive = var->out_name->flags & nm_entry::recursive;

    proc_tp* save_proc = curr_proc;
	assert(type);
    curr_proc = type;

    //if (t_attrib != NULL) token::remove(t_attrib, t_semi2);

    if (use_forward) {
        f_tkn = t_proc->copy(type->forward->f_tkn, type->forward->t_semi1->prev);// copy procedure name, lpar. params, rpar from forward decl to currect proc def
		token::remove(t_proc, t_semi1->prev);
    } else {
		insert_return_type();
        var->translate(t_ident);
		insert_params();
    }
    t_semi3->disable();

	// this is method of class, check if we need to add class name to the return type
	if (s_self) { // this code needs to be BEFORE insert_return_type()
		s_self->translate(t_class);

		if (ret_type) { // if type is defined inside a class then add 'MyClassName::' prefix to such return type
			record_tp* lself = (record_tp*)s_self->type->get_typedef();
			assert(lself);
			assert(ret_type->f_tkn);
			auto local = lself->shallow_search(ret_type->f_tkn); //TODO search only inside a class here. what if this type is declared in parent class?
			if (local != NULL && local->tag == symbol::s_type)
				f_tkn = f_tkn->prepend("::")->prepend(s_self->out_name->text);
		}
	}

	// convert 'constructor MyClassName.Create(...)' into C++ constructor 'MyClassName::MyClassName(...)'
	if (type->is_constructor) {
		assert(var);
		t_class->set_pos(t_proc);
		t_proc->disappear();
		t_ident->set_trans(var ? ((object_tp*)var->ring)->class_name->out_name->text : "<UNKNOWN CLASS>");
	}

	// convert 'destructor MyClassName.Destroy(...)' into C++ destructor 'MyClassName::~MyClassName(...)'
	if (type->is_destructor) {
		assert(var);
		t_class->set_pos(t_proc); 
		t_proc->disappear();
		t_ident->set_trans(dprintf("~%s", var ? ((object_tp*)var->ring)->class_name->out_name->text : "<UNKNOWN CLASS>"));
	}
 
    if (t_dot) t_dot->set_trans("::");

	// do not need to add 'static' in proc/method definition, it is enough to have it in declaration only 
	if (t_static) {
		f_tkn->set_pos(t_static);
		t_static->disappear(); //t_static->set_trans("static ");
	}

    if (ctx != ctx_block) {
		global_func_decl_level = f_tkn;
		if (type->n_subproc > 0 && t_class == NULL) { // make forward declaration
			f_tkn->copy(f_tkn, t_semi1);
			f_tkn->prepend("\n");
		}
    } else {
		f_tkn = f_tkn->prepend("static ");
		if (type->n_subproc > 0) { // make forward declaration
			global_func_decl_level->copy(f_tkn, t_semi1);
			global_func_decl_level->prepend("\n");
		}
    }
    if (var->ring->scope == b_ring::global && use_call_graph && !is_recursive){
		type->make_vars_static();
    }

    block->translate(ctx_block);

    t_semi1->disable();
    token* first_stmt = t_semi1->next_relevant();
    token* lbr = block->body_begin_tkn();
    if (first_stmt != block->body_begin_tkn()) { //put variable declarations into block code
		lbr = first_stmt->prepend("{\n");
		lbr->set_pos(block->body_begin_tkn());
		block->body_begin_tkn()->disable();
    }
    block->body_end_tkn()->set_bind(lbr);


    if (language_c) {
		type->undefine(block->body_end_tkn()->prev_relevant());
    }
    first_stmt = block->body_begin_tkn()->next_relevant();

    type->insert_temporaries(first_stmt);

    if (!language_c) {
		type->declare_conformant_array_bounds(first_stmt);
    }

	if (type->res_type != NULL)
	{
		if (language_c && type->res_type->tag == tp_array) {
			block->body_end_tkn()->prepend(dprintf("return (%s*)%s_result;\n", type->res_type->name, type->proc_name))->set_bind(first_stmt);
		} else {
			// define two variables that share the same memory.
			// one is Delphi built-in 'Result' variable (works for functions only)
			//TODO type->res_type->name will be 'void' for underfined types. needs to be fixed.
			token* tmp = first_stmt->prepend("\n");
			char* modifier = " ";
			if (type->res_type->tag == tp_object) modifier = "*";
			tmp = tmp->append(dprintf("%s%s %s_result;\n", type->res_type->name, modifier, type->proc_name));
			tmp->set_pos(first_stmt);
			tmp = tmp->append(dprintf("%s%s& result = %s_result;\n", type->res_type->name, modifier, type->proc_name));
			tmp->set_pos(first_stmt);
			block->body_end_tkn()->prepend(dprintf("return %s_result;\n", type->proc_name))->set_bind(first_stmt);
		}
	} 
	/*else if (type->is_constructor || type->is_destructor) { we do not need 'return this' any more
		block->body->t_end->prepend("return this;\n")->set_bind(first_stmt);
    }*/

    curr_proc = save_proc;
    if (ctx == ctx_block)
    {
        global_func_decl_level->move_region(f_tkn, l_tkn);
		global_func_decl_level->prepend("\n\n");
        (new token((char*)0, TKN_BEG_SHIFT, f_tkn->line, f_tkn->pos))->insert_b(f_tkn);
		(new token((char*)0, TKN_END_SHIFT))->insert_a(l_tkn);
    }
}

//
// Type declaration node
//


simple_tpd_node::simple_tpd_node(token* t_ident1, token* t_dot, token* t_ident2) : tpd_node(tpd_simple)
{
	CONS3(t_ident1, t_dot, t_ident2);
	sym1 = sym2 = NULL;
}

void simple_tpd_node::attrib(int ctx)
{
	assert(t_ident2); // t_ident2 must always be not null
	if (t_ident1) {   // 't_ident1.t_ident2' 
		sym1 = b_ring::search_cur(t_ident1);
		assert(sym1); 
		auto otp = dynamic_cast<record_tp*>(sym1->type->get_typedef()); //it is enough to cast to record_tp*
		assert(otp);
		sym2 = otp->shallow_search(t_ident2);
		if (sym2 == NULL)
		{
			if (ctx == ctx_reftyp)
			{
				type = new fwd_ref_tp(t_ident2);
			} 
			else 
			{
				char* full_name = dprintf("%s::%s", t_ident1->in_text, t_ident2->in_text);
				warning(t_ident2, "unknown type '%s'", full_name);
				// tp_last because we do not know its type yet
				//TODO understand better whether it is good solution. it creates new tpexpr node for each TBytes unknown type
				type = &any_type; // new tpexpr(tp_last, this, full_name); //&void_type; //TODO Or shall we use any_type here?
			}
		}
	} else {
		sym2 = b_ring::search_cur(t_ident2);
		if (sym2 == NULL) {
			if (ctx == ctx_reftyp)
			{
				type = new fwd_ref_tp(t_ident2);
			} 
			else 
			{
				warning(t_ident2, "unknown type '%s'", t_ident2->in_text);
				// tp_last because we do not know its type yet
				//TODO understand better whether it is good solution. it creates new tpexpr node for each TBytes unknown type
				type = &any_type; // new tpexpr(tp_last, this, t_ident2->in_text); //&void_type;
			}
		}
	}

	if(sym2) type = sym2->type;

	f_tkn = t_ident1 ? t_ident1 : t_ident2;
	l_tkn = t_ident2;
}

void simple_tpd_node::translate(int)
{
	if (sym1 != NULL) sym1->translate(t_ident1);
	if (sym2 != NULL) sym2->translate(t_ident2); // does actually the following: tkn->set_trans(out_name->text);
	//else if (ctx == ctx_reftyp) f_tkn = t_ident2->prepend("struct "); //TODO this is old code, I am not sure why 'struct' is needed for ctx_reftyp type

	if(t_dot) t_dot->set_trans("::");
}

simple_templ_tpd_node::simple_templ_tpd_node(token* t_ident, token* t_lbr, tpd_node* base_type, token* t_rbr) : tpd_node(tpd_simple)
{
	CONS4(t_ident, t_lbr, base_type, t_rbr);
	sym =  NULL;
}

void simple_templ_tpd_node::attrib(int ctx)
{
	base_type->attrib(ctx);
	sym = b_ring::search_cur(t_ident);
	if (sym == NULL) {
		assert(base_type->f_tkn);
		warning(t_ident, "unknown type '%s<%s>'", t_ident->in_text, base_type->f_tkn->in_text);//TODO take into account base_type->t_ident1
		type = &any_type; //&void_type;
	}
	else
	{
		type = sym->type;
	}

	f_tkn = t_ident;
	l_tkn = t_rbr;
}

void simple_templ_tpd_node::translate(int ctx)
{
	base_type->translate(ctx);
	if (sym) sym->translate(t_ident); // does actually the following: tkn->set_trans(out_name->text);
}


fptr_tpd_node::fptr_tpd_node(token* t_proc, param_list_node* params, token* t_coln, 
	                         tpd_node* ret_type, token* t_of, token* t_object) : tpd_node(tpd_proc)
{
    CONS6(t_proc, params, t_coln, ret_type, t_of, t_object);
	t_params = NULL;
}

void fptr_tpd_node::attrib(int ctx)
{
    if (ret_type) ret_type->attrib(ctx);
   
    type = new proc_tp(ret_type ? ret_type->type : (tpexpr*)NULL);
	if (params) {
		proc_tp* save_proc = curr_proc;
		assert(type);
		curr_proc = (proc_tp*)type;
		b_ring::push(curr_proc);
		params->attrib(ctx);
		b_ring::pop(curr_proc);
		curr_proc = save_proc;
	}
}

void fptr_tpd_node::translate(int)
{
    f_tkn = t_proc;
	if (ret_type) {
		ret_type->translate(ctx_block);
		assert(ret_type->type->name != NULL);
		t_proc->set_trans(ret_type->type->name);
		token::disable(t_coln->prev_relevant()->next, ret_type->l_tkn);
	}
	else {
        t_proc->set_trans("void");
    }
    if (*pascall) {
		t_proc->append(pascall);
		t_proc->append(" ");
    }
    if (params) {
        proc_tp* save_proc = curr_proc;
		assert(type);
		curr_proc = (proc_tp*)type;
        params->translate(ctx_block);
		curr_proc = save_proc;
		l_tkn = params->rpar;
		t_params = params->lpar;
    } else {
        t_params = l_tkn = t_proc->append("()");
    }

	if (t_of) {
		t_of->prepend("//")->prepend(";"); //TODO comment 'of object' stmt to leave hint about function pointer
		l_tkn = t_object;
	}
}


enum_tpd_node::enum_tpd_node(token* lpar, token_list* items, token* rpar) : tpd_node(tpd_enum)
{
    CONS3(lpar, items, rpar);
}

void enum_tpd_node::attrib(int)
{
    int n = 0;
    type = new enum_tp(this);
    for (token_list* t = items; t != NULL; t = t->next) {
        ((enum_tp*)type)->last = t->var = b_ring::add_cur(t->ident, symbol::s_const, &integer_type);
	t->var->value = n++;
	t->var->flags |= symbol::f_const;
	if (b_ring::curr_b_ring->scope != b_ring::global) {
	    t->var->flags |= symbol::f_static;
	    t->var->ring->make_unique(t->var);
	}
    }
    ((enum_tp*)type)->n_elems = n;
    ((enum_tp*)type)->first = items->var;
}


void enum_tpd_node::translate(int)
{
    f_tkn = lpar->prepend("enum ");
    l_tkn = rpar;
    for (token_list* t = items; t != NULL; t = t->next) {
        t->var->translate(t->ident);
		t->ident->attr |= token::fix_pos;
    }
    lpar->set_trans("{");
    rpar->set_trans("}");

    if (((enum_tp*)type)->max != NULL) {
        rpar->prepend(", ");
        rpar->prepend(((enum_tp*)type)->max);
    }
}

range_tpd_node::range_tpd_node(expr_node* low, token* dots, expr_node* high)
: tpd_node(tpd_range)
{
    CONS3(low, dots, high);
	ctype = NULL;
}

void range_tpd_node::attrib(int)
{
    low->attrib(ctx_value);
    high->attrib(ctx_value);
    range_tp* rtp = new range_tp(this);
    long long min_value = INT_MIN, max_value = INT_MAX;

    if (low->flags & tn_is_const) {
		min_value = low->value;
    }
    if (high->flags & tn_is_const) {
		max_value = high->value;
    }
    if (!(low->flags & high->flags & tn_is_const)) {
		warning(dots, "unable to calculate bounds for range type");
    }
    rtp->min_value = min_value;
    rtp->max_value = max_value;

    if (min_value >= 0 && max_value <= 255)  {
		rtp->name = "unsigned char";
		rtp->size = 1;
    } else if(min_value >= -128 && max_value <= 127) {
		rtp->name = "signed char";
		rtp->size = 1;
    } else if(min_value >= 0 && max_value <= USHRT_MAX) {
		rtp->name = "unsigned short";
		rtp->size = 2;
    } else if(min_value >= SHRT_MIN && max_value <= SHRT_MAX) {
		rtp->name = "short";
		rtp->size = 2;
    } else if(min_value >= 0 && (unsigned long)max_value <= UINT_MAX) {
		rtp->name = "unsigned";
		rtp->size = 4;
    } else if(min_value >= INT_MIN && max_value <= INT_MAX) {
		rtp->name = "int";
		rtp->size = 4;
    } else {
		rtp->name = "integer";
		rtp->size = 4;
    }
    type = rtp;
}


void range_tpd_node::translate(int)
{
    low->translate(ctx_value);
    high->translate(ctx_value);

    token* first = low->f_tkn->get_first_token();

    f_tkn = l_tkn = low->f_tkn->prepend(type->name);
    if (((range_tp*)type)->min != NULL) {
	if (language_c) {
	    low->f_tkn->prepend(dprintf("\n#define %s ", ((range_tp*)type)->min));
	    dots->disable();
	    high->f_tkn->prepend(dprintf("\n#define %s ", ((range_tp*)type)->max));
	    token* next = high->l_tkn->next_relevant();
	    if (next->tag == TKN_SEMICOLON) {
		next->set_trans("\n");
	    } else {
		high->l_tkn->append("\n");
	    }
	} else {
	    low->f_tkn->prepend("\n");
	    low->f_tkn->prepend("const int ")->set_pos(first);
	    low->f_tkn->prepend(((range_tp*)type)->min);
	    low->f_tkn->prepend(" = ");
	    low->l_tkn->append(";");
	    dots->disable();
	    high->f_tkn->prepend("\n");
	    high->f_tkn->prepend("const int ")->set_pos(first);
	    high->f_tkn->prepend(((range_tp*)type)->max);
	    high->f_tkn->prepend(" = ");
	    token* next = high->l_tkn->next_relevant();
	    if (next->tag != TKN_SEMICOLON) {
		next = high->l_tkn->append(";");
		next->tag = TKN_SEMICOLON;
	    }
	}
    } else {
	token::remove(low->f_tkn, high->l_tkn);
    }
}


static array_tp* curr_array = NULL;

type_index_node::type_index_node(tpd_node* tpd)
{
    this->tpd = tpd;
	type = NULL;
}

void type_index_node::attrib(int ctx)
{
    tpd->attrib(ctx);
    assert(tpd->tag == tpd_node::tpd_simple);

	auto stpd = (simple_tpd_node*)tpd;
	f_tkn = stpd->t_ident1 ? stpd->t_ident1 : stpd->t_ident2;
	l_tkn = stpd->t_ident2;
}

void type_index_node::translate(int)
{
    tpexpr* typ = tpd->type->get_typedef();

	if (language_c) {
		switch (typ->tag) {
		case tp_bool:
			f_tkn->set_trans("2");
			curr_array->set_dim("0", "1");
			break;
		case tp_range:
		{
			range_tp* range = (range_tp*)typ->get_typedef();
			if (no_index_decrement) {
				f_tkn->set_trans(dprintf("%s+1", range->max));
			} else {
				f_tkn->set_trans(dprintf("%s-%s+1", range->max, range->min));
			}
			curr_array->set_dim(range->min, range->max);
		}
		break;
		case tp_char:
			f_tkn->set_trans("256");
			curr_array->set_dim(" 0", "255");
			break;
		case tp_enum:
			f_tkn->set_trans(((enum_tp*)typ->get_typedef())->max);
			curr_array->set_dim("0", dprintf("%s-1", ((enum_tp*)typ->get_typedef())->max));
			break;
		default:
			warning(f_tkn, "Illegal type of index");
		}
	} else { //C++
		switch (typ->tag) {
		case tp_bool:
			f_tkn->set_trans("false,true");
			break;
		case tp_char:
			f_tkn->set_trans("0,255");
			break;
		case tp_short:
			f_tkn->set_trans("0,65535");
			break;
		case tp_range:
			f_tkn->set_trans(dprintf("%s,%s", ((range_tp*)typ->get_typedef())->min,	((range_tp*)typ->get_typedef())->max));
			break;
		case tp_enum:
			f_tkn->set_trans(dprintf("0,%s", ((enum_tp*)typ->get_typedef())->max));
			break;
		default:
			warning(f_tkn, "Illegal type of index");
		}
	}
}

range_index_node::range_index_node(expr_node *low, token* dots, expr_node* high)
{
    CONS3(low, dots, high);
}

void range_index_node::attrib(int)
{
    low->attrib(ctx_value);
    high->attrib(ctx_value);
}

void range_index_node::translate(int)
{
    low->translate(ctx_value);
    high->translate(ctx_value);
    f_tkn = low->f_tkn;
    l_tkn = high->l_tkn;

    if (language_c) {
	curr_array->set_dim(NULL, NULL, low, high);
	if (no_index_decrement) {
	    token::remove(low->f_tkn, high->f_tkn->prev);
	    l_tkn = high->l_tkn->append("+1");
	    return;
	}
	if (low->is_const_literal()) {
	    if (low->value == 1) {
		token::remove(low->f_tkn, high->f_tkn->prev);
		return;
	    }
	    if (high->is_const_literal()) {
		token::remove(low->f_tkn, high->f_tkn->prev);
		high->f_tkn->set_trans(dprintf("%lld", high->value - low->value + 1));
		return;
	    }
	}
	token::swap(low->f_tkn, low->l_tkn, high->f_tkn, high->l_tkn);
	dots->set_trans("-");
	f_tkn = high->f_tkn;
	l_tkn = low->l_tkn->append("+1");
    } else { // language C++
	dots->set_trans(",");
    }
}

conformant_index_node::conformant_index_node(token *t_low, token *t_dots, token *t_high, token *t_coln, tpd_node* tpd)
{
    CONS5(t_low, t_dots, t_high, t_coln, tpd);
}

void conformant_index_node::attrib(int)
{
    symbol *l = b_ring::add_cur(t_low, symbol::s_const, &integer_type);
    symbol *h = b_ring::add_cur(t_high, symbol::s_const, &integer_type);
    l->flags |= symbol::f_val_param;
    h->flags |= symbol::f_val_param;
    curr_array->set_conformant_dim(l, h);
}

void conformant_index_node::translate(int)
{
    // last and first tokens are not calculated here since it is not possible
    // (and not necessary)
}

array_tpd_node::array_tpd_node(token *t_packed, token *t_array, token* t_lbr, idx_node *indices,
	              token* t_rbr, token* t_of, tpd_node *eltd) : tpd_node(tpd_array)
{
    CONS7(t_packed, t_array, t_lbr, indices, t_rbr, t_of, eltd);
}

void array_tpd_node::set_indices_attrib(idx_node* idx)
{
    if (idx->next) {
		set_indices_attrib(idx->next);
    }
    type = curr_array = new array_tp(type, this);
    idx->attrib(ctx_component);
}

void array_tpd_node::attrib(int)
{
    eltd->attrib(ctx_component);
    type = eltd->type;
    if (indices) set_indices_attrib(indices);
}

void array_tpd_node::translate(int ctx)
{
    f_tkn = t_array;

    if (t_packed) t_packed->disable();
    
    eltd->translate(ctx_component);

	if (language_c) {
		token::disable(t_array, t_lbr->prev);
		token::disable(t_rbr->next, eltd->f_tkn->prev);
		f_tkn = t_lbr;
		l_tkn = t_rbr;
		if (eltd->tag == tpd_array) {
			l_tkn = eltd->l_tkn;
			eltd = ((array_tpd_node*)eltd)->eltd;
		}
		if (type->tag == tp_dynarray) {
			token::remove(t_lbr, t_rbr);
			f_tkn = eltd->f_tkn;
			l_tkn = eltd->l_tkn;
		} else {
			curr_array = (array_tp*)type;

			for (idx_node* idx = indices; idx != NULL; idx = idx->next) {
				idx->translate(ctx);
				if (idx->next) {
					token* comma = idx->l_tkn->next_relevant();
					assert(comma->tag == TKN_COMMA);
					token::disable(idx->l_tkn->next,
						comma->next_relevant()->prev);
					idx->l_tkn->append("][");
					curr_array = (array_tp*)curr_array->elem_type;
				}
			}
		}
	} else { // C++
		if (type->tag == tp_dynarray) {

			if (eltd->type->tag == tp_dynarray) {
				array_tpd_node* atp = (array_tpd_node*)eltd;
				eltd = atp->eltd;
				t_of = atp->t_of;
				t_array->set_trans("conf_matrix");
			} else {
				t_array->set_trans(indices->next == NULL ? "conf_array" : "conf_matrix");
			}
			token::disable(t_array->next, eltd->f_tkn->prev);
			eltd->f_tkn->prepend("<");
			l_tkn = eltd->l_tkn->append(">");

		} else if (indices) {

			for (idx_node* idx = indices; idx != NULL; idx = idx->next) {
				idx->translate(ctx_component);
			}

			t_lbr->set_trans("<");
			t_rbr->set_trans(",");
			if (t_array->next != t_lbr) {
				token::disable(t_array->next, t_lbr->prev);
			}
			if (indices->next == NULL && eltd->tag == tpd_array && !((array_tp*)eltd->type)->elem_type->is_array()) {
				token::disable(t_rbr->next, ((array_tpd_node*)eltd)->t_lbr);
				t_array->set_trans("matrix");
				l_tkn = eltd->l_tkn;
			} else {
				if (indices->next != NULL && indices->next->next == NULL) {
					t_array->set_trans("matrix");
				}
				token::disable(t_rbr->next, eltd->f_tkn->prev);
				l_tkn = eltd->l_tkn->append(">");
			}
		} else { // Delphi dynamic array		
			t_array->set_trans("conf_array<");
			token::disable(t_array->next, eltd->f_tkn->prev);
			if(eltd->type->tag == tp_object)
				l_tkn = eltd->l_tkn->append("*>");
			else
				l_tkn = eltd->l_tkn->append(">");
		}
	}
}

//-------------------------------------------------------------------

varying_tpd_node::varying_tpd_node(token *t_string, token* t_lbr, expr_node *size, token* t_rbr) : tpd_node(tpd_string)
{
    if (language_c) {
		error(t_string,"Varying string are supported only for C++ conversion");
    }
    CONS4(t_string, t_lbr, size, t_rbr);
}

void varying_tpd_node::attrib(int ctx)
{
    size->attrib(ctx_component);
    if (use_c_strings && (ctx == ctx_record || ctx == ctx_component)) {
		type = &string_type;
    } else {
		type = &varying_string_type;
    }
}

void varying_tpd_node::translate(int)
{
    f_tkn = t_string;
    l_tkn = t_rbr;
	if (type->tag == tp_string) {
		t_string->set_trans("asciiz");
		token::disable(t_lbr, t_rbr);
	} else {
		size->translate(ctx_component);
		t_lbr->set_trans("<");
		t_rbr->set_trans(">");
		t_string->set_trans("varying_string");
	}
}
//-------------------------------------------------------------------

string_tpd_node::string_tpd_node(token *t_string) : tpd_node(tpd_string)
{
    if (language_c) {
		error(t_string,"Varying string are supported only for C++ conversion");
    }
    CONS1(t_string);
}

void string_tpd_node::attrib(int ctx)
{
    if (use_c_strings && (ctx == ctx_record || ctx == ctx_component)) {
		type = &string_type;
    } else {
		type = &varying_string_type;
    }
}

void string_tpd_node::translate(int)
{
    f_tkn = l_tkn = t_string;
    if (type->tag == tp_string) {
		f_tkn->set_trans("asciiz");
    }
}

//----------------------------------------------------------------------

ptr_tpd_node::ptr_tpd_node(token* t_ref, tpd_node* tpd) : tpd_node(tpd_ref)
{
    CONS2(t_ref, tpd);
}

void ptr_tpd_node::attrib(int)
{
    tpd->attrib(ctx_reftyp);
    type = (tpd->type->tag == tp_fwd_ref) ? tpd->type : new ref_tp(tpd->type, this);
}

void ptr_tpd_node::translate(int)
{
    t_ref->disable();
    tpd->translate(ctx_reftyp);
    f_tkn = tpd->f_tkn;
    l_tkn = tpd->l_tkn->append("*");
}

variant_node::variant_node(expr_node* tag_list, token* t_coln, token* t_lpar, field_list_node* fields, token* t_rpar)
{
    CONS5(tag_list, t_coln, t_lpar, fields, t_rpar);
    next = NULL;
	struct_name = NULL;
}

int variant_node::number;

void variant_node::attrib(int ctx)
{
    tag_list->attrib(ctx);

    if (fields->is_single()) {
	fields->attrib(ctx);
    } else {
	char* save_path = struct_path;
	number += 1;
        if (tag_list->tag == tn_atom) {
	    token* tag = ((atom_expr_node*)tag_list)->t_tkn;
	    struct_name = isdigit(tag->out_text[0]) ? dprintf("s%s", tag->out_text) : dprintf("s_%s", tag->out_text);
	} else {
	    struct_name = dprintf("s%d", number);
        }
	struct_path = dprintf("%s%s.", struct_path, struct_name);
	fields->attrib(ctx);
	struct_path = save_path;
    }
}

void variant_node::translate(int ctx)
{
    tag_list->translate(ctx);
    f_tkn = t_lpar;
    l_tkn = t_rpar;
    fields->translate(ctx);

    if (fields->is_single()) {
	token* t = t_lpar->next_relevant();
	t_lpar->disable();
	t_rpar->disable();
	if (t->line == tag_list->f_tkn->line) {
	    t->set_pos(tag_list->f_tkn);
        }
	swallow_semicolon();
    } else {
	t_lpar->set_trans("struct {");
	t_rpar->set_trans(dprintf("} %s", struct_name));
	if (t_lpar->line == tag_list->f_tkn->line) {
	    t_lpar->set_pos(tag_list->f_tkn);
	}
	force_semicolon();
    }
    if (comment_tags) {
	tag_list->f_tkn->prepend("/*");
	t_lpar->prepend("*/");
    } else {
	token::disable(tag_list->f_tkn, t_lpar->prev);
    }
}



selector_node::selector_node(token* tag_field, token* coln,
			     tpd_node* tag_type)
{
    CONS3(tag_field, coln, tag_type);
    var = NULL;
}

variant_part_node::variant_part_node(token* t_case, selector_node* selector,
				     token* t_of, variant_node* variants)
{
    CONS4(t_case, selector, t_of, variants);
}

void variant_part_node::attrib(int ctx)
{
    selector->tag_type->attrib(ctx);
    if (selector->tag_field != NULL) {
	selector->var = b_ring::add_cur(selector->tag_field, symbol::s_var,	selector->tag_type->type);
	if (*struct_path) {
	    selector->var->path = struct_path;
	}
    }
    if (language_c && ctx != ctx_union) {
	char* save_path = struct_path;
	struct_path = dprintf("%su.", struct_path);
	for (variant_node* vp = variants; vp != NULL; vp = vp->next) {
	    vp->attrib(ctx);
	}
	struct_path = save_path;
    } else {
	for (variant_node* vp = variants; vp != NULL; vp = vp->next) {
	    vp->attrib(ctx);
	}
    }
}

void variant_part_node::translate(int ctx)
{
    f_tkn = t_case;
    l_tkn = t_of;
    for (variant_node* vp = variants; vp != NULL; vp = vp->next) {
	vp->translate(ctx);
	l_tkn = vp->l_tkn;
    }

    selector->tag_type->translate(ctx);

    if (selector->tag_field != NULL) {
	assert(selector->tag_type->type->name != NULL);
	t_case->set_trans(selector->tag_type->type->name);
	if (selector->tag_field->next != t_of) {
	    token::disable(selector->tag_field->next, t_of->prev);
	}
	selector->tag_field->append(";\n");
	t_of->set_trans("union {");
	t_of->set_bind(t_case);
    } else {
	t_case->set_trans("union ");
	t_case->append("{");
	token::disable(t_case->next->next, t_of);
    }
    l_tkn = l_tkn->append("\n");
    if (language_c && ctx != ctx_union) {
	l_tkn = l_tkn->append("} u");
    } else {
	l_tkn = l_tkn->append("}");
    }
    l_tkn->set_bind(t_case);
    if (ctx != ctx_union) {
	force_semicolon();
    }
}

field_list_node::field_list_node(var_decl_node* fix_part, variant_part_node* var_part)
{
    CONS2(fix_part, var_part);
	ctx = -1; // because 0 is valid value (ctx_program)
}

bool field_list_node::is_single()
{
    return (var_part == NULL && (fix_part == NULL ||
	(fix_part->vars->next == NULL && fix_part->next == NULL)));
}

void field_list_node::attrib(int)
{
    ctx = (smart_union && fix_part == NULL && var_part != NULL
	   && var_part->selector->tag_field == NULL)
	? ctx_union : ctx_record;

    for (decl_node *dcl = fix_part; dcl != NULL; dcl = dcl->next) {
		dcl->attrib(ctx);
    }
	if (var_part) {
		int save_number = variant_node::number;
		variant_node::number = 0;
		var_part->attrib(ctx);
		variant_node::number = save_number;
	}
}

void field_list_node::translate(int)
{
    f_tkn = l_tkn = NULL;

	for (decl_node* dcl = fix_part; dcl != NULL; dcl = dcl->next) {
		dcl->translate(ctx);
		if (f_tkn == NULL) f_tkn = dcl->f_tkn;
		l_tkn = dcl->l_tkn;
	}
	if (var_part) {
		var_part->translate(ctx);
		if (f_tkn == NULL) f_tkn = var_part->f_tkn;
		l_tkn = var_part->l_tkn;
	}
	if (l_tkn != NULL) {
		force_semicolon();
	}
}

guid_node::guid_node(token* t_lbr, token* t_guid, token* t_rbr)
{
	CONS3(t_lbr, t_guid, t_rbr);
}

void guid_node::attrib(int)
{
	f_tkn = t_lbr;
	l_tkn = t_rbr;
}
void guid_node::translate(int)
{
}

//TODO shall we introduce tpd_interface tag here?
interface_tpd_node::interface_tpd_node(token* t_interface, token* t_lbr, token* t_superinterface, 
	                token* t_rbr, decl_node* guid, decl_node* parts, token* t_end) 
	: object_tpd_node(t_interface, t_lbr, nullptr, t_rbr, parts, t_end)
{
	CONS2(t_superinterface, guid);
//	super = nullptr;
}

void interface_tpd_node::attrib1(int)
{
	if (t_superinterface) {
		super = b_ring::search_cur(t_superinterface);
		if (super) {
			auto sp = dynamic_cast<object_tp*>(super->type->get_typedef());
			assert(sp);
			type = new object_tp(this, sp);
		} else {
			warning(t_interface, "Base interface %s not defined.", t_superinterface->out_text);
			type = new object_tp(this); // TODO object_tp class is very simple, not sure if we need another such class interface_tp
		}
	} else {
		type = new object_tp(this);
	}

	if (guid) guid->attrib(ctx_object);
}

void interface_tpd_node::attrib2(int)
{
	b_ring::push((object_tp*)type);
	for (decl_node* dcl = parts; dcl != nullptr; dcl = dcl->next) {
		dcl->attrib(ctx_object);
	}
	b_ring::pop((object_tp*)type);
}

void interface_tpd_node::translate(int)
{
	f_tkn = t_interface;
	l_tkn = t_end;

	if (t_superinterface) {
		if (super)
			super->translate(t_superinterface);
	
		t_lbr->set_trans(" : public ");
		t_rbr->set_trans(" {\n");
		//t_rbr->append("public:")->set_bind(t_object);
		t_rbr->set_bind(t_interface);
	}
	else {
		//t_object->append(" {\n")->append("public:")->set_bind(t_object);
		t_interface->append(" {\n")->set_bind(t_interface);
	}

	if(guid) guid->f_tkn->prepend("//"); // comment out GUID for now
	
	for (decl_node* dcl = parts; dcl != nullptr; dcl = dcl->next) {
		dcl->translate(ctx_object);
	}
	t_interface->set_trans("class ");
	t_end->set_trans("}");
	t_end->set_bind(t_interface);
}

object_tpd_node::object_tpd_node(token* t_class, token* t_lbr, token_list* t_ancestorlist, token* t_rbr, 
	                 decl_node* parts, token* t_end): base_obj_tpd_node(tpd_object, t_class, parts, t_end)
{
    CONS3(t_lbr, t_ancestorlist, t_rbr);
	super = nullptr;
}

void object_tpd_node::attrib1(int)
{
	if (t_ancestorlist) {
		//TODO shall we check full ancestor list for existence in b_ring?
		//TODO add TObject as parent even when it is not mentioned in ancestor list 
		super = b_ring::search_cur(t_ancestorlist->ident); // first item in ancestor list is always superclass, all the others are interfaces
		if (super) {
			auto otp = dynamic_cast<object_tp*>(super->type->get_typedef());
			assert(otp);
			type = new object_tp(this, otp);
		}
		else {
			warning(t_class, "Base class %s not defined.", t_ancestorlist->ident->out_text);
			type = new object_tp(this);
		}
	}
	else 
	{
		// if no ancestor specified - assume that ancestor is TObject
		auto nm = nm_entry::find("tobject");
		assert(nm); // assume that TObject is in nm_entry already
		token tok("tobject", TKN_IDENT, 0, 0, nm);
		
		super = b_ring::search_cur(&tok);
		if (super) {
			auto otp = dynamic_cast<object_tp*>(super->type->get_typedef());
			assert(otp);
			type = new object_tp(this, otp);
		} else {
			type = new object_tp(this);
		}
	}
}

void object_tpd_node::attrib2(int)
{
	b_ring::push((object_tp*)type);
    for (decl_node* dcl = parts; dcl != nullptr; dcl = dcl->next) {
		dcl->attrib(ctx_object);
    }
    b_ring::pop((object_tp*)type);
}

/*void object_tpd_node::attrib(int ctx)
{
	attrib1(ctx);
	attrib2(ctx);
}*/

void object_tpd_node::translate(int)
{
    f_tkn = t_class;
    l_tkn = t_end? t_end: t_class;

	t_class->set_trans("class ");

	if (t_ancestorlist) {
		for (token_list* anc = t_ancestorlist; anc != nullptr; anc = anc->next) {
			anc->ident->set_trans(dprintf("public %s", anc->ident->in_text));
		}

		t_lbr->set_trans(" : ");

		if (t_end) {
			l_tkn = t_end;
			t_rbr->set_trans(" {\n");
			t_rbr->set_bind(t_class);
			t_end->set_trans("}");
			t_end->set_bind(t_class);
		} else {
			l_tkn = t_rbr;
			t_rbr->set_trans(" { }");
			t_rbr->set_bind(t_class);
		}
	}
	else {
		// if t_end=NULL than it is forward class declaration
		if (t_end) {
			if (super) // all Delphi classes has parent TObject, if ancestor list is enpty it means that parent is TObject
			{
				t_class->append(dprintf(" : public %s {\n", super->out_name->text));
			} else {
				t_class->append(" {\n"); // ->set_bind(t_class);
			}

			l_tkn = t_end;
			t_end->set_trans("}");
			t_end->set_bind(t_class);
		}
    }

    for (decl_node* dcl = parts; dcl != nullptr; dcl = dcl->next) {
		dcl->translate(ctx_object);
    }
}

//TODO shall we have separate tpd_meta tag ?
metaclass_tpd_node::metaclass_tpd_node(token* t_class, token* t_of, token* t_ident) : base_obj_tpd_node(tpd_metaclass, t_class, nullptr, t_of)
{
	CONS1(t_ident);
}

void metaclass_tpd_node::attrib1(int)
{
	f_tkn = t_class;
	l_tkn = t_ident;
	type = new object_tp(this);
}

void metaclass_tpd_node::attrib2(int)
{
	// nothing to do
}

void metaclass_tpd_node::translate(int)
{
	t_class->disappear();
	t_of->disappear();
	t_ident->set_trans(dprintf("typeid(%s)", t_ident->out_text));
}


base_obj_tpd_node::base_obj_tpd_node(tpd_type tp, token* t_startof, decl_node* parts, token* t_end): tpd_node(tp)
{
	CONS3(t_startof, parts, t_end);
}

record_tpd_node::record_tpd_node(token* t_packed, token* t_record, decl_node* parts, token* t_end)
           : base_obj_tpd_node(tpd_record, t_record, parts, t_end)
{
    CONS4(t_packed, t_record, parts, t_end);
	outer = nullptr;
}

void record_tpd_node::attrib1(int)
{
	type = new record_tp(this);
}

void record_tpd_node::attrib2(int ctx)
{
	static record_tpd_node* cur_outer;
	outer = cur_outer;
    cur_outer = this;
	
	char* save_path = struct_path;
    struct_path = "";

    b_ring::push((record_tp*)type);
	for (decl_node* dcl = parts; dcl != nullptr; dcl = dcl->next) {
		dcl->attrib(ctx);
	}
	((record_tp*)type)->calc_flags();
    b_ring::pop((record_tp*)type);

    struct_path = save_path;
    cur_outer = outer;
}

/*void record_tpd_node::attrib(int ctx)
{
	attrib1(ctx);
	attrib2(ctx);
}*/

void record_tpd_node::translate(int ctx)
{
	record_field_part_node* fpart = NULL;
	for (decl_node* dcl = parts; dcl != NULL; dcl = dcl->next) {
		dcl->translate(ctx);
		if(!fpart) fpart = dynamic_cast<record_field_part_node*>(dcl);
	}

	//assert(!(parts != NULL && fpart == NULL));
	
	field_list_node* fields = NULL;
	if(fpart) fields = fpart->flist;

	f_tkn = t_record;
    l_tkn = t_end;
    if (smart_union && fields && fields->fix_part == NULL && fields->var_part != NULL
	&& fields->var_part->selector->tag_field == NULL)
    {
		fields->var_part->t_case->set_pos(t_record);
        t_record->disappear();
		t_end->disappear();
		swallow_semicolon();
		f_tkn = t_record = fields->var_part->t_case;
		l_tkn = t_end = fields->var_part->l_tkn;
	}
	else {
		t_record->set_trans("struct ");
		t_record->append("{");
		t_end->set_trans("}");
		t_end->set_bind(t_record);
	}

    if (t_packed) {
      	t_packed->disable();
    }

//	if(methods) methods->translate(ctx);
}


void record_tpd_node::assign_name()
{
    static int anonymous_struct_counter = 0;

    assert(tag == tpd_node::tpd_record || tag == tpd_node::tpd_object);

    char* name = dprintf("A%d", ++anonymous_struct_counter);
    t_record->append(dprintf("%s ", name));

    if (language_c) {
	type->name = dprintf("%s%s", t_record->out_text, name);
    } else {
	if (tag == tpd_record && outer != NULL) {
	    if (outer->type->name == NULL) {
		outer->assign_name();
	    }
	    type->name = dprintf("%s::%s", outer->type->name, name);
	} else {
	    type->name = name;
	}
    }
}

access_specifier_node::access_specifier_node(token* t_strict, token* t_access_lvl)
{
	CONS2(t_strict, t_access_lvl);
}

void access_specifier_node::attrib(int)
{
	//	for (decl_node* dcl = components; dcl != NULL; dcl = dcl->next) {
	//		dcl->attrib(ctx_object);
	//	}
}

void access_specifier_node::translate(int)
{
	//TODO add special processing for Published access level
	if (t_strict) t_strict->set_trans("/*strict */");
	t_access_lvl->set_trans(t_access_lvl->in_text);
	t_access_lvl->append(":\n");

	//	for (decl_node* dcl = components; dcl != NULL; dcl = dcl->next) {
	//		dcl->translate(ctx_object);
	//	}
}

file_tpd_node::file_tpd_node(token* t_packed, token* t_file, token* t_of, tpd_node* recordtp)
: tpd_node(tpd_file)
{
    CONS4(t_packed, t_file, t_of, recordtp);
}

void file_tpd_node::attrib(int ctx)
{
    recordtp->attrib(ctx);
    type = new file_tp(recordtp->type, this);
}

void file_tpd_node::translate(int ctx)
{
    recordtp->translate(ctx);
    f_tkn = t_file;
    token::disable(t_file->next, recordtp->f_tkn->prev);

    if (t_packed) {
       	t_packed->disable();
    }
    if (language_c) {
	recordtp->f_tkn->prepend("(");
	l_tkn = recordtp->l_tkn->append(")");
    } else {
	recordtp->f_tkn->prepend("<");
	l_tkn = recordtp->l_tkn->append(">");
    }
}


set_tpd_node::set_tpd_node(token* t_packed, token* t_set, token* t_of, tpd_node* elemtp): tpd_node(tpd_set)
{
    CONS4(t_packed, t_set, t_of, elemtp);
}

void set_tpd_node::attrib(int ctx)
{
    elemtp->attrib(ctx);
    type = new set_tp(elemtp->type);
}

void set_tpd_node::translate(int ctx)
{
    elemtp->translate(ctx);
    l_tkn = f_tkn = t_set;
    if (t_packed) {
	t_packed->disable();
    }
    if (!language_c  && elemtp->type->tag == tp_enum) {
	t_set->set_trans("set_of_enum(");
	token::disable(t_set->next, elemtp->f_tkn->prev);
	l_tkn = elemtp->l_tkn->append(")");
    } else {
	if (language_c && short_set) {
	    int card = ((set_tp*)type)->card();
	    if (card <= 16) t_set->set_trans("set16");
	    else if (card <= 32) t_set->set_trans("set32");
	}
	token::disable(t_set->next, elemtp->l_tkn);
    }
}

prop_index_node::prop_index_node(token* t_index, expr_node* prop_index) 
{ 
	CONS2(t_index, prop_index); 
}
void prop_index_node::attrib(int ctx)
{
	if (strcmp(t_index->in_text, "index") != 0)
		error(t_index, "expected 'index' but '%s' found", t_index->in_text);
 	prop_index->attrib(ctx);
}
void prop_index_node::translate(int ctx)
{
	prop_index->translate(ctx);
	t_index->disable();
	token::disable(prop_index->f_tkn, prop_index->l_tkn);
}

prop_type_def_node::prop_type_def_node(token* t_coln, tpd_node* tpd)
{
	CONS2(t_coln, tpd);
}
void prop_type_def_node::attrib(int ctx)
{
	tpd->attrib(ctx);
}
void prop_type_def_node::translate(int ctx)
{
	tpd->translate(ctx);

	//TODO check this because string may be not considered as simple type
	if (tpd->tag == tpd_node::tpd_simple) // need to be BEFORE any ->disable() call
	{
		auto stpd = dynamic_cast<simple_tpd_node*>(tpd);
		assert(stpd);
		if(tpd->type->tag == tp_object) // Object types need to be passed by pointers
			val_type = dprintf("%s%s%s*", stpd->t_ident1 ? stpd->t_ident1->out_text : "", stpd->t_dot ? stpd->t_dot->out_text : "", stpd->t_ident2->out_text);
		else
			val_type = dprintf("%s%s%s", stpd->t_ident1 ? stpd->t_ident1->out_text : "", stpd->t_dot ? stpd->t_dot->out_text : "", stpd->t_ident2->out_text);
	}
	else
	{
		val_type = tpd->type->name;
	}
	
	t_coln->disable();
	token::disable(tpd->f_tkn, tpd->l_tkn);
}

prop_array_node::prop_array_node(token* t_lbr, var_decl_node* decls, token* t_rbr)
{
	CONS3(t_lbr, decls, t_rbr);
}
void prop_array_node::attrib(int ctx)
{
	f_tkn = t_lbr;
	l_tkn = t_rbr;

	for (decl_node* var = decls; var != NULL; var = var->next) var->attrib(ctx);
}
void prop_array_node::translate(int ctx)
{
	varcnt = 0; // total number of variables in array part of property (number of property indexes)

	for (var_decl_node* dcl = decls; dcl != NULL; dcl = (var_decl_node*)dcl->next) {
		if (dcl->tpd != NULL) dcl->tpd->translate(ctx);
		auto ltpd = dcl->tpd; // local tpd variable for convenience
		assert(ltpd); // assume that type is already defined

		for (token_list* tkn = dcl->vars; tkn != NULL; tkn = tkn->next) {
			char* modifier = " ";
			if (ctx == ctx_varpar) {
				if (ltpd->type->tag != tp_dynarray && ltpd->type->tag != tp_string) { //TODO not sure we need this conditiion here
					modifier = "& ";
				}
			}
			if (ltpd->type->tag == tp_object) modifier = "* "; // all class instance vars are passed by pointer

			if (type_list == NULL) // assume if type_list=NULL then param_list=NULL and var_list=NULL
			{
				type_list  = dprintf("%s%s", ltpd->type->name, modifier);
				var_list   = dprintf("%s", tkn->ident->out_text);
				param_list = dprintf("%s%s%s", ltpd->type->name, modifier, tkn->ident->out_text);
			}
			else
			{
				type_list  = dprintf("%s,%s%s", type_list, ltpd->type->name, modifier);
				var_list   = dprintf("%s,%s", var_list, tkn->ident->out_text);
				param_list = dprintf("%s,%s%s%s", param_list, ltpd->type->name, modifier, tkn->ident->out_text);
			}

			varcnt++;
		}
	}

	/*
	if (ind_type->tpd->tag == tpd_node::tpd_simple) // need to be BEFORE ant ->disable() call
	{
		auto stpd = (simple_tpd_node*)(ind_type->tpd);
		key_type = dprintf("%s%s%s", stpd->t_ident1 ? stpd->t_ident1->out_text : "", stpd->t_dot ? stpd->t_dot->out_text : "", stpd->t_ident2->out_text);
	}*/

	token::disable(t_lbr, t_rbr);
}

prop_read_node::prop_read_node(token* t_read, token* t_ident)
{
	CONS2(t_read, t_ident);
}
void prop_read_node::attrib(int)
{
	sym = b_ring::search_cur(t_ident);
	if (sym == NULL) {
		// if property is inside of record or class then curr_b_ring is record_tp or object_tp accordingly
		record_tp* tp = dynamic_cast<record_tp*>(b_ring::curr_b_ring);
		if (tp)
			warning("cannot find function/method '%s' in class/record '%s'", t_ident->in_text, tp->name);
		else
			warning("property '%s' is defined outside of class/record type", t_ident->in_text);
	}
}
void prop_read_node::translate(int)
{
	func_name = t_ident->out_text; // need to be BEFORE ant ->disable() call

	t_read->disable();
	t_ident->disable();
}

prop_write_node::prop_write_node(token* t_write, token* t_ident)
{
	CONS2(t_write, t_ident);
}
void prop_write_node::attrib(int)
{
	sym = b_ring::search_cur(t_ident);
}
void prop_write_node::translate(int)
{
	func_name = t_ident->out_text; // need to be BEFORE ant ->disable() call

	t_write->disable();
	t_ident->disable();
}

prop_stored_node::prop_stored_node(token* t_stored, token* t_truefalse)
{
	CONS2(t_stored, t_truefalse);
}
void prop_stored_node::attrib(int)
{
	f_tkn = t_stored;
	l_tkn = t_truefalse;

	//TODO think how to avoid strincmp here. Lexer should do this work for us.
	if (strincmp(t_truefalse->in_text, "true", 4) != 0 && strincmp(t_truefalse->in_text, "false", 5) != 0)
		error(t_truefalse, "property store value '%s' is incorrect, expecting 'true' or 'false'", t_truefalse->in_text);
}
void prop_stored_node::translate(int)
{
	// ignore 'store True/False' part of property
	t_stored->disable();
	t_truefalse->disable();
}

prop_default_node::prop_default_node(token* t_default, expr_node* def_value)
{
	CONS2(t_default, def_value);
}
void prop_default_node::attrib(int ctx)
{
	def_value->attrib(ctx);
}
void prop_default_node::translate(int ctx)
{
	def_value->translate(ctx);
	f_tkn = t_default;
	l_tkn = def_value->l_tkn;
	token::disable(f_tkn, l_tkn);
}

prop_default_directive_node::prop_default_directive_node(token* t_default_d, token* t_semi)
{
	CONS2(t_default_d, t_semi);
}
void prop_default_directive_node::attrib(int)
{
}
void prop_default_directive_node::translate(int)
{
	t_default_d->disable();
	t_semi->disable();
}

property_node::property_node(token* t_property, token* t_ident, decl_node* array, decl_node* type, decl_node* index,
	decl_node* read, decl_node* write, decl_node* stored, decl_node* dfault, token* t_semi, decl_node* dfault_d)
{
	this->t_property = t_property;
	this->t_ident = t_ident;
	this->array = (prop_array_node*)array;
	this->prop_type = (prop_type_def_node*)type;
	this->index = (prop_index_node*)index;
	this->read = (prop_read_node*)read;
	this->write = (prop_write_node*)write;
	this->stored = (prop_stored_node*)stored; 
	this->dfault = (prop_default_node*)dfault;
	this->t_semi = t_semi;
	this->dfault_d = (prop_default_directive_node*)dfault_d;
}
void property_node::attrib(int ctx)
{
	prop_type->attrib(ctx);
	if (array) array->attrib(ctx);
	if (index) index->attrib(ctx);
	if (read) read->attrib(ctx);
	if (write) write->attrib(ctx);
	if (stored) stored->attrib(ctx);
	if (dfault) dfault->attrib(ctx);
	if (dfault_d) dfault_d->attrib(ctx);

	//TODO think of tag and type of property. probably we need add new tag for this property type
	b_ring::add_cur(t_ident, symbol::s_var, prop_type->tpd->type);
}
void property_node::translate(int ctx)
{
	prop_type->translate(ctx);
	if (array) array->translate(ctx);
	if (index) index->translate(ctx);
	if (read) read->translate(ctx);
	if (write) write->translate(ctx);
	if (stored) stored->translate(ctx);
	if (dfault) dfault->translate(ctx);
	if (dfault_d) dfault_d->translate(ctx);

	if (!prop_type->val_type)
		warning(t_property, "property '%s' type '%s' is not a simple type", t_ident->out_text, prop_type->tpd->type->name);

	if (array) //Property PropName[key: key_type]: val_type index IND read GetPropName write SetPropName;
	{
		//if (!array->key_type)
		//	warning(t_property, "property '%s' index type '%s' is not a simple type", t_ident->out_text, array->ind_type->tpd->type->name);
		if(read && !read->is_function())
			warning(t_property, "property '%s' read ident '%s' must be function", t_ident->out_text, read->func_name);
		if (write && !write->is_function())
			warning(t_property, "property '%s' write ident '%s' must be function", t_ident->out_text, write->func_name);

		char* part2 = "nullptr";
		char* part3 = "nullptr";

		if (index)
		{
			if (read)
				if (read->is_function())
					part2 = dprintf("[this](%s)->%s { return %s(%s,%s); }", array->param_list, prop_type->val_type, read->func_name, array->var_list, index->get_val());
				else
					part2 = dprintf("[this](%s)->%s { return %s; }", array->param_list, prop_type->val_type, read->func_name);
			
			if (write)
				if (write->is_function())
					part3 = dprintf("[this](%s, %s value) { %s(%s,%s,value); }", array->param_list, prop_type->val_type, write->func_name, array->var_list, index->get_val());
				else
					part3 = dprintf("[this](%s, %s value) { %s%s; }", array->param_list, prop_type->val_type, write->func_name, " = value");
		}
		else
		{
			if (read)
				part2 = dprintf("[this](%s)->%s { return %s%s; }", array->param_list, prop_type->val_type, read->func_name, 
					          read->is_function() ? dprintf("(%s)", array->var_list) : "");
			if (write)
				part3 = dprintf("[this](%s, %s value) { %s%s; }", array->param_list, prop_type->val_type, write->func_name, 
					          write->is_function() ? dprintf("(%s, value)", array->var_list) : " = value");
		}

		char* svarcnt;
		if (array->varcnt == 1)
			svarcnt = "";
		else
			svarcnt = dprintf("%d", array->varcnt);

		t_property->append(dprintf("PropertyArray%s<%s, %s> %s \n {\n %s, \n %s \n};\n", svarcnt, array->type_list, prop_type->val_type, t_ident->out_text, part2, part3));

	}
	else
	{	//Property Value: string read GetValue write SetValue;

		char* part2 = "nullptr";
		char* part3 = "nullptr";

		if (index)
		{
			if(read)
				if (read->is_function())
					part2 = dprintf("[this]()->%s { return %s%s%s%s; }", prop_type->val_type, read->func_name, "(", index->get_val(), ")");
				else
					part2 = dprintf("[this]()->%s { return %s; }", prop_type->val_type, read->func_name);
			if(write)
				if (write->is_function())
					part3 = dprintf("[this](%s value) { %s%s%s%s; }", prop_type->val_type, write->func_name, "(", index->get_val(), ", value)");
				else
					part3 = dprintf("[this](%s value) { %s%s; }", prop_type->val_type, write->func_name, " = value");
		}
		else
		{
			if(read)
				part2 = dprintf("[this]()->%s { return %s%s; }", prop_type->val_type, read->func_name, read->is_function() ? "()" : "");
			if(write)
				part3 = dprintf("[this](%s value) { %s%s; }", prop_type->val_type, write->func_name, write->is_function() ? "(value)" : " = value");
		}

		t_property->append(dprintf("Property<%s> %s \n {\n %s, \n %s \n};\n", prop_type->val_type, t_ident->out_text, part2, part3));			
	}

	//if(dfault_d)
	//	t_semi->prepend(dprintf("\n\nconst %s operator[](const %s key) const { return (%s)(%s[key]); }", 
	//		            prop_type->val_type, array->key_type, prop_type->val_type, t_ident->out_text));

	t_property->disable();
	t_ident->disable();
	t_semi->disable();
}

void property_decl_part_node::attrib(int ctx)
{
	for (decl_node* p = props; p != NULL; p = p->next)
		p->attrib(ctx);
}
void property_decl_part_node::translate(int ctx)
{
	for (decl_node* p = props; p != NULL; p = p->next)
		p->translate(ctx);
}

asm_line_node::asm_line_node(token* t_list, token* comma) 
{ 
	CONS2(t_list, comma); 
}

void asm_line_node::attrib(int)
{
}
void asm_line_node::translate(int)
{
}

asm_block_node::asm_block_node(token* t_asm, asm_line_node* lines, token* t_end)
{
	CONS3(t_asm, lines, t_end);
}

void asm_block_node::attrib(int ctx)
{
	f_tkn = t_asm;
	l_tkn = t_end;

	for (decl_node* l = lines; l != NULL; l = l->next)
		l->attrib(ctx);

}
void asm_block_node::translate(int ctx)
{
	t_asm->set_trans("{");
	t_end->set_trans("}");
	t_asm->append("__asm {\n")->set_pos(t_asm);
	t_end->prepend("}\n")->set_pos(t_end);

	for (decl_node* l = lines; l != NULL; l = l->next)
		l->translate(ctx);
}
