#include <stdio.h>

#include "nmtbl.h"
#include "token.h"
#include "trnod.h"
#include "util.h"

//=============================================================================
// Global data structures:

// Ring where all global variables are entered
b_ring b_ring::global_b_ring(b_ring::SCOPE::global);

// Current ring (record or procedure body)
b_ring *b_ring::curr_b_ring = &b_ring::global_b_ring;

b_ring *b_ring::top_b_ring = &b_ring::global_b_ring;

rename_item* rename_item::list;

void symbol::translate(token* t) const
{
    if( path != NULL)
	    t->set_trans(dprintf("%s%s", path, out_name->text)); 
    else
	    t->set_trans(out_name->text); 
} 

// Constructor for ring
b_ring::b_ring(int scope) { 
    b_ring::scope = scope;
    outer = NULL;
    inherite = NULL;
    syms = NULL;
    with = NULL; 
}

// Search for an entry at one level of binding ring
symbol* b_ring::shallow_search(token* t) const
{
    nm_entry* nm = t->name;
    for (symbol* vr = syms; vr != NULL; vr = vr->next) {
	if (vr->in_name == nm) { 
	    return vr->tag != symbol::s_dummy ? vr : (symbol*)0;
	} 
    }
    return NULL;
}

bool b_ring::find_scope(b_ring* type)
{
    for (b_ring* scp = this; scp != NULL; scp = scp->outer) {
        if (type == scp) { 
            return true;
        }
    }
    return false;
}

// Search for an entry in this binding ring
symbol* b_ring::search(token* t)
{
    nm_entry* nm = t->name;

    for (b_ring* scp = this; scp != NULL; scp = scp->outer) {
        for (b_ring* br = scp; br != NULL; br = br->inherite) {
            for (symbol* vr = br->syms; vr != NULL; vr = vr->next) {
                if (vr->in_name == nm) {
                    return vr->tag != symbol::s_dummy ? vr : (symbol*)0;
                }
            }
        }
    }
    return NULL;
}

// C++ has its own keywords and standard function names - further 'standard identificators'
// Pascal user functions and variables can have the same names
// The goal of his function is prevent translating such names to C++ as is (to avoid conflict with C++ standard identificators).
// Such names are be renamed by adding 1,2,3 postfix to identificator name.
// That is why make_unique checks global_b_ring (instead of curr_b_ring) because C++ standard identificators are global names
void b_ring::make_unique(symbol* sym) 
{ 
    symbol *sp, **spp;
    int version = 0;
    
  check_loop:
    //    for (spp = &top_b_ring->syms; (sp = *spp) != NULL; spp = &sp->next) {
    for (spp = &global_b_ring.syms; (sp = *spp) != NULL; spp = &sp->next) {
        if (sp->out_name == sym->out_name) { // we check out_names because we try to avoid conflict in translated C++ text, in_name we leave untouched
            char buf[256];
            sprintf(buf, "%s%d", sym->out_name->text, ++version); //TODO it was sym->in_name->text here instead of out_name
            assert(strlen(buf) < sizeof(buf));
            sym->out_name = nm_entry::add(buf, TKN_IDENT);
            goto check_loop;
        }
    }
    if (scope != SCOPE::global) {
        *spp = sp = new symbol; // this symbol will never be found
        sp->ring = top_b_ring; //TODO may be use global_b_ring instead of top_b_ring? 
        sp->next = NULL;
        sp->type = NULL;
        sp->in_name = sym->in_name;
        sp->out_name = sym->out_name;
        sp->tag = symbol::s_dummy;
    }
}

// Create variable block and add it to this binding ring
symbol* b_ring::add(nm_entry* in_name, nm_entry* out_name, int tag, tpexpr* type)
{
    symbol *sym = new symbol;
    sym->in_name = in_name;
    sym->out_name = out_name; 
    sym->flags = 0;
    sym->tag   = tag; 
    sym->type  = type; 
    sym->path  = NULL; 
    sym->ring  = this;

    if (compile_system_library) {
        sym->out_name = rename_item::rename(sym->out_name);
        sym->flags |= symbol::f_syslib;
    }
    else 
    {
        while (sym->out_name->flags & nm_entry::macro) {
            sym->out_name = nm_entry::add(dprintf("%s_", sym->out_name->text), TKN_IDENT);
        }
    }

    // if ring is global then make_unique is called for all name entries 
    // if ring's scope=record - make_unique never called for these name entries
    // if ring's scope is proc or block name_unique is called for s_proc and s_const tags only 
    if (scope != SCOPE::record && 
	   (tag == symbol::s_proc || tag == symbol::s_const || scope == SCOPE::global))
    { 
        make_unique(sym); 
    }

    sym->next  = syms;
    syms       = sym; 

    return sym;
}

void b_ring::make_vars_static() 
{ 
    for (symbol* sym = syms; sym != NULL; sym = sym->next) {
        if ( (sym->flags & (symbol::f_exported | symbol::f_val_param | symbol::f_var_param))
            == symbol::f_exported)
        {
            sym->flags |= symbol::f_static;
            sym->ring->make_unique(sym);
        }
    }
}
	
 
	    
