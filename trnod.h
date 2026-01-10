#ifndef __TRNOD_HPP__
#define __TRNOD_HPP__


#include "tpexpr.h"

enum context {
  ctx_program,      // 0 program
  ctx_module,       // list of declaration
  ctx_object,       // list of object components
  ctx_value,        // value of expression
  ctx_rvalue,       // rvalue part of assignment
  ctx_lvalue,       // 5 lvalue part of assignment
  ctx_lvalarray,    // array element is used as lvalue
  ctx_procptr,      // pointer to procedure 
  ctx_apply,        // function is applied to arguments
  ctx_varpar,       // parameter passed by reference
  ctx_valpar,       // 10 parameter passed by value
  ctx_statement,    // statement
  ctx_condition,    // result is used in condition expression
  ctx_component,    // type od array component
  ctx_block,        // block context
  ctx_access,       // result is used in access to record component operation
  ctx_array,        // 16 result is used as base value in index expression
  ctx_variant,      // variant part of record
  ctx_reftyp,       // reference definition type
  ctx_record,       // initializer for record constant
  ctx_union,        // record with only variant component
  ctx_constant,     // constant expression
  ctx_toascii,      // convertion of number to string
  ctx_constpar      // 23 parameter passed as const by value
};
  


class decl_node;
class expr_node;
class block_node;
class compound_node; 
class expr_group_node;

class node : public heap_object {
  public:
    token*    f_tkn;	/* First token */
    token*    l_tkn;	/* Last token */

    void force_semicolon(); 
    void swallow_semicolon(); 

    node() { f_tkn = l_tkn = nullptr; }

    virtual void attrib(int) {};
    virtual void translate(int) {};
    virtual void print_debug() {};
};

class two_tokens : public token {
public:
    token* t_tok2;

    two_tokens(token* token1, token* token2): token(*token1)
    {
        //*(token*)this = *token1;
        t_tok2 = token2;
    }

 //   void attrib(int) override { f_tkn = t_tok1; l_tkn = t_tok2; };
 //   void translate(int ctx) override;

};

class token_list : public heap_object {
  public: 
    token*           ident;
    symbol*          var; 
    token_list*      next;  

    token_list(token* id, token_list* chain = nullptr)
    {
        ident = id;
        next = chain;
        var = nullptr;
    }

    virtual void print_debug() 
    {
        auto tkns = this;
        do 
        {         
            fprintf(stderr, " (");
            tkns->ident->print_debug(); tkns = tkns->next;
            fprintf(stderr, ") ");
        } 
        while (tkns);
    }
};  

//=============================================================================
// Program level grammar:
//   program         ::= PROGRAM ident [ '(' parameter_list ')' ] block '.'
//   parameter_list  ::= ident { ',' ident } 
//   block           ::= decl_part_list compoundst
//   decl_part_list  ::= { decl_part }
//   decl_part       ::= label_decl_part | const_def_part | type_def_part
//                       | var_decl_part | proc_decl proc_fwd_decl
//=============================================================================

class import_list_node : public node { 
  public: 
    token*                lpar; 
    token_list*           params; 
    token*                rpar;
    
    import_list_node(token* lpar, token_list* params, token* rpar); 
      
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class program_node : public node { 
  public: 
    token*                program; 
    token*                name; 
    import_list_node*     params; 
    token*                semi; 
    block_node*           block; 
    token*                end;    // '.'           
    proc_tp*              main; 

    program_node(token* program, token* name, import_list_node* params, 
		 token* semi, block_node* body, token* end); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class module_node : public node { 
  public: 
    token*                program; 
    token*                name; 
    import_list_node*     params; 
    token*                semi; 
    decl_node*            decls;         
    token*                t_dot;
    module_node(token* program, token* name, import_list_node* params, 
		token* semi, decl_node* decls, token* t_dot);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class unit_node : public node { 
  public: 
    token*                t_unit;
    token*                t_name;
    token*                t_semi;
    token*                t_interface;
    decl_node*            unit_decl;       
    token*                t_implementation;
    decl_node*            unit_def;       
    compound_node*        initializer; 
    token*                t_end;
    token*                t_dot; // '.'
    decl_node*            init_finit;
    proc_tp*              main;

    static bool           interface_part; // translate interface part of module
    static char*          unit_name;

    unit_node(token* t_unit, token* t_name, token* t_semi, token* t_interface, decl_node* unit_decl, token* t_implementation, 
	      decl_node* unit_def, compound_node* initializer, decl_node* init_finit, token* t_end, token* t_dot);


    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class asm_block_node;

class block_node : public node {
  protected:
    compound_node* body;
    asm_block_node* asm_body;
  public:
    decl_node*        decls;         
 
    block_node(asm_block_node* asm_body);
    block_node(decl_node* decls, compound_node* body);

    token* body_begin_tkn();
    token* body_end_tkn();

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//=============================================================================
// Statement level grammar
//   statement       ::= compoundst | assignmentst | gotost | switchst | ifst 
//                    | forst | whilest | repeatst | procst | returnst 
//                    | withst | labelst | emtyst | writest | readst
//   sequence        ::= statement { ';' statement }
//   compoundst      ::= BEGIN sequence END
//   assignmentst    ::= expr ':=' expr
//   gotost          ::= GOTO ident
//   labelst         ::= ident ':' 
//   switchst        ::= CASE expr OF case_list END
//   case_list       ::= case_list_elem { ';' case-list-elem } [ ';' ]
//   case_list_elem  ::= expr_list ':' statement | OTHERWISE statement
//   ifst            ::= IF expr THEN statement [ELSE statement]
//   forst           ::= FOR identifier := expr (TO | DOWNTO) expr DO statement
//   repeatst        ::= REPEAT sequence UNTIL expr
//   whilest         ::= WHILE expr DO statement
//   withst          ::= WITH expr_list DO statement
//   procst          ::= ident [ expr_group ]
//   writest         ::= (WRITE | WRITELN) [ write_list ] 
//   readst          ::= (READ | READLN) [ expr_group ] 
//   returnst        ::= RETURN
//   emptyst         ::= 
//=============================================================================


class stmt_node : public node {
  public:
    stmt_node*   next;
    stmt_node() : next(nullptr) {}

    virtual bool is_compound() { return false; }

    virtual stmt_node* find_last() { 
        stmt_node* last; 
        for (last = this; last->next != nullptr; last = last->next); 
        return last;
    };
};

class label_node : public stmt_node {
  public:
    token*       ident;		/* label name */
    token*       colon;		/* colon */
    stmt_node*   stmt;

    label_node(token* ident, token* colon, stmt_node* stmt);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
    void print_debug() override { fprintf(stderr, "lbl:%s", ident->in_text); };
};

class with_node : public stmt_node { 
  public:
    token*      t_with; 
    expr_node*  ptrs; 
    token*      t_do; 
    stmt_node*  body; 
    int         nested_counter;

    static int  nested;

    with_node(token* t_with, expr_node* ptrs, token* t_do, stmt_node* body); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class pcall_node : public stmt_node { 
  public:
    expr_node*   fcall; 

    pcall_node(expr_node* fcall);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

/*
class read_node : public stmt_node { 
  public:
    token*           t_read; 
    expr_group_node* params;

    read_node(token* t_read, expr_group_node* params = NULL);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class write_list_node;

class write_node : public stmt_node { 
  public:
    token*           t_write; 
    write_list_node* params;

    write_node(token* t_write, write_list_node* params = NULL);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
*/

class compound_node : public stmt_node {
  public:
    token*       t_begin;
    token*       t_end;
    stmt_node*   body;

    compound_node(token* t_begin,  stmt_node* body, token* t_end);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
    virtual bool is_compound() { return true; }
    void print_debug() override { fprintf(stderr, "compound:"); body->print_debug(); };
};


class raise_node : public stmt_node {
public:
    token* t_raise;
    expr_node* expr;

    raise_node(token* t_raise, expr_node* expr);

    void attrib(int ctx) override;
    void translate(int ctx) override;
    void print_debug() override;
};

class try_finally_node : public stmt_node {
public:
    token* t_try, *t_finally, *t_end;
    stmt_node* body1;
    stmt_node* body2;

    try_finally_node(token* t_try, stmt_node* body1, token* t_finally, stmt_node* body2, token* t_end);

    void attrib(int ctx) override;
    void translate(int ctx) override;
    void print_debug() override { fprintf(stderr, "try-finally:"); body1->print_debug(); };
};

class try_except_node : public stmt_node {
public:
    token* t_try, *t_except, *t_else, *t_end;
    stmt_node* body1;
    stmt_node* body2;
    stmt_node* ex_many;

    try_except_node(token* t_try, stmt_node* body1, token* t_except, stmt_node* ex_many, token* t_else, stmt_node* body2, token* t_end);

    void attrib(int ctx) override;
    void translate(int ctx) override;
    void print_debug() override { fprintf(stderr, "try-except:"); body1->print_debug(); };
};

class on_except_node : public stmt_node {
public:
    token*          t_on;
    token*          t_ident;
    token*          t_coln;  // ':'
    token*          t_do;
    tpd_node*       ex_type;
    //compound_node*  body;
    stmt_node*      body;

    on_except_node(token* t_on, token* t_ident, token* t_coln, tpd_node* ex_type, token* t_do, stmt_node* body);
    
    void attrib(int ctx) override;
    void translate(int ctx) override;
    void print_debug() override { fprintf(stderr, "on-except:"); body->print_debug(); };
};


class assign_node : public stmt_node {
  public:
    expr_node*   lval;
    token*       assign; 
    expr_node*   rval;

    static assign_node* stmt; 

    assign_node(expr_node* lval, token* assign, expr_node* rval);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
    void print_debug() override;
};

class goto_node : public stmt_node {
  public:
    token*       t_goto;
    token*       t_label;

    goto_node(token* t_goto, token* t_label);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class case_node : public node { 
  public: 
    case_node*          next; 
    expr_node*          list; 
    token*              coln; // ':'
    stmt_node*          stmt; 
 
    case_node(expr_node*, token* coln, stmt_node* stmt); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class switch_node : public stmt_node {
  public:
    token        *t_case, *t_of;
    expr_node*   expr;
    case_node*   cases; 
    token*       t_end; 

    switch_node(token* t_case, expr_node* expr, token* t_of, case_node* cases,
		token* t_end);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class if_node : public stmt_node {
  public:
    expr_node*   expr;
    stmt_node*   alt1;
    stmt_node*   alt2;

    token        *t_if, *t_then, *t_else;    

    if_node(token* t_if, expr_node* expr, token* t_then, stmt_node* alt1, 
	    token* t_else = NULL, stmt_node* alt2 = NULL); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class for_node : public stmt_node {
  public:
    token        *t_for, *t_ident, *t_asg, *t_to, *t_do;
    expr_node    *from, *till;
    stmt_node    *body;
    symbol       *var;    

    for_node(token* t_for, token* t_ident, token* t_asg,  expr_node* from, 
	     token* t_to, expr_node* till, token* t_do, stmt_node* body);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class while_node : public stmt_node {
  public:
    token        *t_while, *t_do;
    expr_node    *expr;
    stmt_node    *body;

    while_node(token* t_while, expr_node* expr, token* t_do, stmt_node* body); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class repeat_node : public stmt_node {
  public:
    token        *t_repeat, *t_until;
    stmt_node    *body;
    expr_node    *expr;

    repeat_node(token* t_repeat, stmt_node* body, token* t_until, expr_node* expr); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
/*
class return_node : public stmt_node {
  public:
    token        *t_return;

    return_node(token* t_return);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
*/
class empty_node : public stmt_node {
  public:
    token* t_last; 
    empty_node(token* t_last);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//=============================================================================
// Expression level syntax:
//   constant     ::= integer | real | string | set
//   set_elem     ::= expr | expr '..' expr
//   set          ::= '[' set_elem { ',' set_elem } ']'
//   expr_group   ::= '(' expr_list ')
//   expr_list    ::= expr { ',' expr } ')'
//   primary      ::= '(' expr ')' | literal | call_expr | ident 
//                  | deref_expr | idx_expr | access_expr | set_constant
//   access_expr  ::= expr '.' ident  
//   deref_expr   ::= expr '^'
//   idx_expr     ::= expr '[' expr_list ']'
//   call_expr    ::= expr [ expr_group ] 
//   binary       ::= expresion op expr      
//   unary        ::= op expr 
//   expr         ::= primary | unary | binary 
//   write_list   ::= '(' write_param { ',' write_param } ')'
//   write_param  ::= expr [ ':' constant [ ':' constant ] ] 
//=============================================================================

// Values for expression flags 
enum {
    tn_is_const         = 0x01,  // constant integer expression
    tn_is_literal       = 0x02   // expression is literal (immediate constant)
};

//-----------------------------------------------------------------------------
// Values for expression tags

enum expr_tag {
    tn_add,         // addition
    tn_sub,         // subtraction
    tn_mod,         // modulo
    tn_mul,         // multiplication
    tn_div,         // division with truncation of the result
    tn_divr,        // division with real result
    tn_plus,        // unary plus
    tn_minus,       // unary minus
    tn_deref,       // dereferencing pointer
    tn_filevar,     // dereferencing file variable
    tn_address,     // 10 dereference operation eaten by getting address (&*x)
    tn_access,      // access to component of record
    tn_ref,         // reference to variable: &v
    tn_index,       // indiexation in array
    tn_in,          // in set predicat
    tn_eq,          // comparison operators
    tn_ne,          //
    tn_gt,          //
    tn_ge,          //
    tn_lt,          //  
    tn_le,          //
    tn_let,         // =
    tn_letadd,      // +=
    tn_letsub,      // -=
    tn_letmul,      // *=
    tn_letdiv,      // /=
    tn_letshl,      // <<=
    tn_letshr,      // >>=
    tn_letand,      // &=
    tn_letor,       // |=
	tn_binand,      // &
	tn_binor,       // |
	tn_binnot,      // ~
    tn_and,         // logical(bit) AND
    tn_shr,         // shift right
    tn_shl,         // shift left
    tn_not,         // logical(bit) NOT
    tn_or,          // logical(bit) OR
    tn_xor,         // bit eXclusive-OR
    tn_atom,        // atom expresion (variable)
    tn_self,        // 40 atom expresion (variable)
    tn_intnum,      // integer constant
    tn_realnum,     // real constant
    tn_string,      // string constant
    tn_char,        // character constant
    tn_set,         // set of elements 
    tn_group,       // group of expressions in braces
    tn_fcall,       // function call
    tn_loophole,    // type conversion
    tn_skip,        // skipped optional positional parameter
    tn_wrp,         // 50 write parameter
    tn_retarr,      // result of function is assigned to array
    tn_case_range,  // case items range
    tn_record_const,// record constant
    tn_is,          // is operator 
    tn_as           // as operator
};

class expr_node : public node {
  public:
    expr_node* next;

    char       tag;   // enum expr_tag{}
    char       parent_tag;  
    char       flags;
    long long  value; // was int here // integer value of constant expression
    tpexpr*    type;

    bool is_const_literal() const {
	    return (flags & (tn_is_const|tn_is_literal)) == (tn_is_const|tn_is_literal); 
    } 
    
    bool is_parameter();

    expr_node(int expr_tag, int expr_flags = 0);

    void print_debug() override 
    { 
        fprintf(stderr, "tag:%d val:%lld", (int)(tag), value);
    }
};

//=============================================================================

class cond_expr_node : public expr_node {
public:
    token* t_if; // can be $IF $IFDEF $IFNDEF
    expr_node* if_expr;
    token* t_else;
    expr_node* else_expr;
    token* t_endif; //esither $ENDIF or $IFEND

    cond_expr_node(token* t_if, expr_node* if_expr, token* t_else, expr_node* else_expr, token* t_endif);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};



class atom_expr_node : public expr_node { 
  public: 
    token *  t_tkn;

    symbol*  var;
    symbol*  with;  // variable stored result of 'with' expression 
    char*    temp;  // temporary variable for returning array
 
    atom_expr_node(token* t_tkn);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
    void print_debug() override { fprintf(stderr, "atom_expr_node:%s", t_tkn->in_text); };
};

class literal_node : public expr_node {
  public:
    token*  value_tkn;

    literal_node(token* value_tkn, int tag);
};

class integer_node : public literal_node {
  public:
    int  radix; 
    integer_node(token* value_str);   

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class double_node : public literal_node {
  public:
    double_node(token* value_str); 

    void attrib(int ctx) override;
    void translate(int ctx) override;
};


class string_node : public literal_node {
  public:
    string_node(token* value_str); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class address_node : public expr_node {
    expr_node* var;
    token*     t_adr;
  public:
    address_node(token* t_adr, expr_node* var); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class case_range_node : public expr_node { 
  public: 
    expr_node* from;
    token*     t_range;  
    expr_node* to;

    virtual void attrib(int ctx);
    virtual void translate(int ctx);

    case_range_node(expr_node* from, token* t_range, expr_node* to);
};

class set_item_node : public node { 
  public: 
    set_item_node* next;
    tpexpr*        type;

    set_item_node() { next = NULL; type = NULL; }
};  

class set_elem_node : public set_item_node { 
  public: 
    expr_node*        item; 
  
    set_elem_node(expr_node* item); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class set_range_node : public set_item_node { 
  public:
    expr_node*    low; 
    token*        dots; // '..'
    expr_node*    high; 
   
    set_range_node(expr_node* low, token* dots, expr_node* high); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class set_node : public expr_node { 
  public: 
    token*         t_lbr;    // '['
    token*         t_rbr;    // ']'
    set_item_node* items;
 
    set_node(token* t_lbr, set_item_node* items, token* t_rbr); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class idx_expr_node : public expr_node { 
  public:
    expr_node* arr; 
    token*     t_lbr; // '[' 
    token*     t_rbr; // ']'
    expr_node* indices; 

    idx_expr_node(expr_node* arr, token* t_lbr, expr_node* indices, token* t_rbr); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class deref_expr_node : public expr_node { 
  public:
    token*     t_op; // '^'
    expr_node* ptr; 

    deref_expr_node(expr_node* ptr, token* t_op); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class access_expr_node : public expr_node { 
  public:
    expr_node* rec; 
    token*     pnt; // '.'
    token*     field;
    symbol*    recfld; 

    access_expr_node(expr_node* rec, token* pnt, token* field); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class op_node : public expr_node {
public:
    token*     op;
    expr_node* left;
    expr_node* right;
    expr_node* parent;

    op_node(int tag, expr_node* left, token* op, expr_node* right = nullptr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class fcall_node : public expr_node {
  public:
    expr_node       *fptr;
    token           *t_lpar;
    expr_node       *args;
    token           *t_rpar;

    char            *temp; // temporary variable used for returning array

    fcall_node(expr_node* fptr, token* t_lpar, expr_node* args, token* t_rpar);

    //void translate_read(int ctx, bool newl);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class skipped_node : public expr_node { 
  public: 
    token* comma;

    skipped_node(token* comma);
 
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class tpd_node;
/*
class loophole_node : public expr_node {
  public:
    token           *t_loophole;
    token           *t_lpar;
    tpd_node        *tpd;            
    token           *t_comma; 
    expr_node       *expr;
    token           *t_rpar;

    loophole_node(token* t_loophole, token* t_lpar, tpd_node* tpd, token* t_comma, 
                  expr_node *expr, token* t_rpar);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
*/
class expr_group_node : public expr_node {
  public:
    token          *lpar;
    token          *rpar;
    expr_node  	   *expr;
    int             ctx;

    expr_group_node(token* lpar, expr_node* expr, token* rpar);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class field_init_node : public node {
  public:
    field_init_node* next;
    token*           t_field;
    token*           t_coln;  // ':'
    expr_node*       value;

    field_init_node(token* t_field, token* t_coln, expr_node* value);

    void attrib(tpexpr* record_type);
    void translate(int);
};

class record_constant_node : public expr_node {
  public:
    token           *lpar;
    token           *rpar;
    field_init_node *flist;

    record_constant_node(token* lpar, field_init_node* flist, token* rpar);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

/*
class write_param_node : public expr_node { 
  public: 
    expr_node*      val;
    token*          t_coln1;       
    expr_node*      width;
    token*          t_coln2;       
    expr_node*      prec; 

    write_param_node(expr_node* val, 
		     token* t_coln1 = NULL, expr_node* width = NULL,
		     token* t_coln2 = NULL, expr_node* prec = NULL); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
 

class write_list_node : public node { 
  public: 
    token            *lpar;
    token            *rpar;
    write_param_node *vals;

    write_list_node(token* lpar, write_param_node* vals, token* rpar);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
*/

class inherited_node : public expr_node {
public:
    token*      t_inherited;
    token*      t_ident;
    token*      t_lpar;
    token*      t_rpar;
    expr_node*  params;

    inherited_node(token* t_inherited, token* t_ident, token* t_lpar, expr_node* params, token* t_rpar);

    void attrib(int ctx) override;
    void translate(int ctx) override;
    void print_debug() override { fprintf(stderr, "inherited:%s", t_ident ? t_ident->in_text : "<no name>"); };
};



//=============================================================================
// Declaration syntax:
//   label_decl_part  ::= [ LABEL ident { ',' ident } ';' ]
//   const_def_part   ::= [ CONST const_def ';' { const_def ';' } ]
//   type_def_part    ::= [ TYPE type_def ';' { type_def ';' } ] 
//   var_decl_part    ::= [ VAR var_decls ';' ] 
//   proc_fwd_decl    ::= proc_decl ';' ident ';' 
//   proc_decl        ::= (PROCEDURE | FUNCTION) ident [ formal_params ] [ ':' type ]  
//   proc_def         ::= proc_decl ';' body ';'
//   formal_params    ::= '(' formal_param { ';' formal_param } ')'
//   formal_param     ::= var_decl | proc_decl
//   const_def        ::= ident '=' expr
//   type_def         ::= ident '=' type
//   var_decls        ::= var_decl { ';' var_decl } 
//   var_decl         ::= ident { ',' ident } ':' type 
//   type             ::= simple_type | array_type | record_type | set_type | 
//                        file_type | pointer_type | subrange_type | enum_type
//   subrange_type    ::= '[' expr '..' expr ']'
//   enum_type        ::= '(' expr { ',' expr } ')'
//   pointer_type     ::= '^' type
//   file_type        ::= FILE OF type_denoter
//   set_type         ::= SET OF type_denoter
//   record_type      ::= RECORD field_list END 
//   field_list       ::= [ (fixed_part [';' variant_part] | variant_part) [;] ] 
//   fixed_part       ::= var_decls
//   variant_part     ::= CASE selector OF 
//                        variant { ';' variant }
//   selector         ::= [ tag_field ':' ] tag_type
//   variant          ::= constant { ',' constant } ':' '(' field_list ')'
//   simple_type      ::= ident
//   array_type       ::= ARRAY '[' index ']' OF type
//   index            ::= conformant_index | fixed_index
//   conformant_index ::= var_decls 
//   fixed_index      ::= range { ',' range }
//   range            ::= expr '..' expr | type
//=============================================================================


class decl_node : public node {
  public:
    decl_node* next;

    enum decl_flags {
	is_toplevel = 1, // The declaration is at the top level of module
	is_argument = 2, // The declaration is in the argument list of procedure
	is_static   = 4, // keyword 'static' must be prepended before decl
	is_extern   = 8,
	is_member   = 16
    };	
    int	      attr;

    decl_node() { next = nullptr; attr = 0; }
};

class cond_method_node : public decl_node {
public:
    token* t_if; // can be $IF $IFDEF $IFNDEF
    decl_node* if_method;
    token* t_else;
    decl_node* else_method;
    token* t_endif; //esither $ENDIF or $IFEND

    cond_method_node(token* t_if, decl_node* if_method, token* t_else, decl_node* else_method, token* t_endif);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class attrib_node : public decl_node {
public:
    token* t_lbr;
    stmt_node* attr_cont; // actually this is attrib_content* type
    token* t_rbr;

    attrib_node(token* t_lbr, stmt_node* attr_cont, token* t_rbr);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class attrib_content : public stmt_node {
public:
    token* ident; //IDENT or SCONST
    token* t_lbr;
    expr_node* params;
    token* t_rbr;

    attrib_content(token* ident, token* t_lbr, expr_node* params, token* t_rbr);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};



//
// unit initialization and finalization declaration
//

class init_finit_node : public decl_node {
public:
    token* t_initialization;
    decl_node* init_defs;
    stmt_node* initializer;
    token* t_semi1; // ';'
    token* t_finalization;
    decl_node* fini_defs;
    stmt_node* finalizer;
    token* t_semi2; // ';'

    init_finit_node(token* t_initialization, decl_node* init_defs, stmt_node* initializer, token* t_semi,
        token* t_finalization, decl_node* fini_defs, stmt_node* finalizer, token* t_semi2);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};


//
// labels declaration
//

class label_decl_part_node : public decl_node { 
  public: 
    token*      t_label; 
    token*      t_semi;           // ';' 
    token_list* labels; 

    label_decl_part_node(token* t_label, token_list* label_list, token* t_semi); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Constant definition
//


class const_def_node : public decl_node { 
  public: 
    token*       t_ident; 
    token*       t_equal;
    expr_node*   constant;
    two_tokens*  t_depr;
    symbol*      sym;
    static const_def_node* enumeration;

    const_def_node(token* t_ident, token* t_equal, expr_node* value, two_tokens* t_depr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class typed_const_def_node : public const_def_node { 
  public: 
    token*           t_coln; // ':'
    tpd_node*        tpd; 
  
    typed_const_def_node(token* t_ident, token* t_coln, tpd_node* tpd, token* t_equal, 
                         expr_node* constant, two_tokens* t_depr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class const_def_part_node : public decl_node { 
  public: 
    token*           t_const; 
    const_def_node*  list; 

    const_def_part_node(token* t_const, const_def_node* list); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


//
// Type definition
//

class type_def_node : public decl_node { 
  public: 
    token*       t_ident; 
    token*       t_equal;
    tpd_node*    tpd;
    symbol*      sym;
  
    type_def_node(token* t_ident, token* t_equal, tpd_node* tpd); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class simple_templ_tpd_node;

class type_def_templ_node : public type_def_node {
public:
    simple_templ_tpd_node* ident;

    type_def_templ_node(tpd_node* ident, token* t_equal, tpd_node* tpd);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class type_def_part_node : public decl_node { 
public: 
    token*         t_type; 
    type_def_node* types; 

    type_def_part_node(token* t_type, type_def_node* types); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Variable declaration
//


class var_decl_node : public decl_node { 
  public: 
    attrib_node*  attribute;
    token_list*   vars; 
    token*        t_coln;   // ':'
    tpd_node*     tpd; 
    token*        scope;
    token*        t_eq;
    expr_node*    def_value;
    two_tokens*   t_depr;  // deprecated

    var_decl_node(attrib_node* attribute, token_list* vars, token* coln, tpd_node* tpd, token* eq, expr_node* def_value, two_tokens* t_depr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

// used for: 
//      function/proc parameters when parameters declared with 'var', 'const' or 'out' specifier
//      for object's field definitions
//      for local and global variable definitions
class var_decl_part_node : public decl_node { 
  public: 
    token*           t_classvar; // 'class' - marker that it is static field in class
    token*           t_var;      // var, const or out 
    var_decl_node*   vars;       
    bool             is_const;

    var_decl_part_node(token* t_classvar, token* t_var, var_decl_node* vars);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class cond_var_decl_node : public var_decl_node {
public:
    token* t_if; // can be $IF, $IFDEF or $IFNDEF
    var_decl_node* if_var;
    token* t_else;
    var_decl_node* else_var;
    token* t_endif; //esither $ENDIF or $IFEND

    cond_var_decl_node(token* t_if, var_decl_node* if_var, token* t_else, var_decl_node* else_var, token* t_endif);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class field_list_node;

class record_field_part_node : public decl_node {
public:
    token* t_classvar; // 'class' - marker that it is static field in record
    token* t_var;
    field_list_node* flist;

    record_field_part_node(token* t_classvar, token* t_var, field_list_node* flist);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

/*
class var_origin_decl_node : public decl_node { 
  public: 
    token     *t_ident;
    token     *t_origin;
    expr_node *addr;
    token     *t_colon;
    tpd_node  *tpd;

    symbol    *sym;
    tpexpr    *type;
    
    var_origin_decl_node(token* t_ident, token* t_origin, 
                         expr_node *addr, token* t_colon, tpd_node *tpd); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};
*/

class proc_decl_part_node : public decl_node {
public:
    decl_node* procs; // actually this is proc_fwd_decl_node

    proc_decl_part_node(decl_node* procs) { this->procs = procs; };

    void attrib(int ctx) override;
    void translate(int ctx) override;
};


//
// Procedures and functions declarations and definition
//

class param_list_node : public node {
  public: 
    token       *lpar, *rpar;
    decl_node   *params; 

    param_list_node(token* lpar, decl_node* params, token* rpar);
  
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class unit_spec_node : public decl_node { 
  public: 
    token* t_unit;
    token* t_name;
    token* t_semi;
    token* t_interface;
    
    decl_node* decls;

    unit_spec_node(token* t_unit, token* t_name, token* t_semi, token* t_interface, decl_node* decls);
  
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class proc_decl_node : public decl_node {
  protected:
    void                insert_return_type();
    void                insert_params();

  public: 
    token*              t_proc;
    token*              t_ident; 
    param_list_node*    params;  
    token*              t_coln;  // ':' 
    tpd_node*           ret_type; 
    symbol*             var;
    proc_tp*            type;

    proc_decl_node(token* t_proc, token* t_ident,  param_list_node* params,
                   token* t_coln = nullptr, tpd_node* ret_type = nullptr); 
  
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class proc_fwd_decl_node : public proc_decl_node {
protected:
    two_tokens*     t_depr;
  public: 
    attrib_node*    attribute;
    token*          t_semi1;
    token_list*     qualifiers; 
    token*          t_semi2;
    bool            is_external;
    bool            is_static;
    bool            is_virtual;
    bool            is_stdcall;
    bool            is_pascal;
    bool            is_cdecl;
    bool            is_register;
    bool            is_deprecated;
    bool            is_abstract;
    bool            is_final;
    bool            is_override;
    bool            is_inline;

    proc_fwd_decl_node(attrib_node* attribute, token* t_proc, token* t_ident, param_list_node* params, token* t_coln, 
                       tpd_node* ret_type, token* t_semi1, token_list* qualifiers, token* t_semi2); 
  
    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class operator_fwd_decl_node : public proc_fwd_decl_node {
public:
    //token* t_semi;  // semicolon

    operator_fwd_decl_node(token* t_proc, token* t_ident, param_list_node* params, token* t_coln, tpd_node* ret_type, 
                            token* t_semi, token_list* qualifiers, token* t_semi2);
   
     //void attrib(int ctx) override;
     void translate(int ctx) override;
};

// works with both proc_fwd_decl_node and operator_fwd_decl_node
class method_decl_node : public decl_node
{
public:
    token* t_class; // for static methods ('class method_name')
    proc_decl_node* proc;

    method_decl_node(token* t_cls, decl_node* prc) { t_class = t_cls; proc = dynamic_cast<proc_decl_node*>(prc); assert(proc); }

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class proc_def_node : public proc_decl_node {
  public: 
    token*              t_static;
    token*              t_class;
    token*              t_dot;
    token*              t_semi1; 
    block_node*         block; 
    //token*              t_semi2; 
    //token*              t_attrib; 
    token*              t_semi3; 
    bool                use_forward; // tell us that params for func/method need to be copied from func declaration in interface section
                                     // this is because Delphi allows to do NOT repeat func parameters in implmenmetation section if function was declared in interface section
                                     // that works for functions/procedures and does not work for methods.

    static record_tp* self; //object_tp*   self;
    symbol*             s_self;

    proc_def_node(token* t_static, token* t_proc, token* t_class, token* t_dot, token* t_ident, param_list_node* params,
		  token* t_coln, tpd_node* ret_type, token* t_semi1, 
        /*token* t_attrib, token* t_semi2,*/ block_node* block, token* t_semi3); 
  
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


//
// Type definitions
//

class tpd_node : public node {
  public:
    tpexpr*  type; // Type which is designated by this typenode 

    enum tpd_type { tpd_simple, tpd_set, tpd_enum, tpd_range, tpd_proc, //TODO what is the difference from enum type_tag{} ? 
                    tpd_array, tpd_string, tpd_ref,
                    tpd_object, tpd_record, tpd_metaclass, tpd_file };  
    
    int  tag;

    tpd_node(int tpd_tag) { type = nullptr; tag = tpd_tag; }
};


class simple_tpd_node: public tpd_node {
  public:
    token*      t_ident1; // always class/record name or null
    token*      t_dot;
    token*      t_ident2; // name of type (either single type of part of class.type expr)
    symbol*     sym1;
    symbol*     sym2;

    simple_tpd_node(token* t_ident1, token* t_dot, token* t_ident2);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);

    void print_debug() override 
    { 
        if(t_ident1) 
            fprintf(stderr, "%s.%s", t_ident1->in_text, t_ident2->in_text);  
        else 
            fprintf(stderr, "%s", t_ident2->in_text); 
    };
};

class string_tpd_node : public tpd_node {
public:
    token* t_string;	   // 'String'

    string_tpd_node(token* t_string);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

// simple tepmplate node like: TDynArray = TArray<Integer>
class simple_templ_tpd_node : public tpd_node {
public:
    //token* t_ident1; // always class/record name or null
    //token* t_dot;
    token* t_ident; // name of template type 
    token* t_lbr;
    tpd_node* base_type; // may be simple_tpd_node* and string_tpd_node*
    token* t_rbr;
    
    //symbol* sym1;
    symbol* sym;

    simple_templ_tpd_node(token* t_ident, token* t_lbr, tpd_node* base_type, token* t_rbr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);

    
    void print_debug() override
    {
        //TODO take into account base_type->t_ident1
        
        char* ttype = base_type->tag == tpd_node::tpd_simple ? ((simple_tpd_node*)base_type)->t_ident2->in_text
            : base_type->tag == tpd_node::tpd_string ? ((string_tpd_node*)base_type)->t_string->in_text
            : "unknown type";

        fprintf(stderr, "%s<%s>", t_ident->in_text, ttype);
    };
};

//
// Function (procedure) pointer type defineition
//

class fptr_tpd_node : public tpd_node { 
  public: 
    token*           t_proc;    
    token*           t_coln;    // ':'  
    token*           t_params;
    param_list_node* params;
    tpd_node*        ret_type;
    token*           t_semi1;
    token_list*      qualifiers;
    token*           t_of;
    token*           t_object;
      
    fptr_tpd_node(token* t_proc, param_list_node* params, token* t_coln, tpd_node* ret_type, 
                   token* t_semi1, token_list* qualifiers, token* t_of, token* t_object);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

//
// Enumeration type defineition
//

class enum_tpd_node : public tpd_node { 
  public: 
    token*      lpar;    
    token*      rpar;
    token_list* items; 
      
    enum_tpd_node(token* lpar, token_list* items, token* rpar); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Subrange type definition
//

class range_tpd_node: public tpd_node {
  public:
    expr_node*  low;
    expr_node*  high;
    token*      dots; // '..'

    char*         ctype;

    range_tpd_node(expr_node* low, token* dots, expr_node* high);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Array type defineition
//

class idx_node : public node { 
  public: 
    idx_node*      next;
    idx_node() { next = NULL; }
};
    
class type_index_node : public idx_node {
  public: 
    tpexpr*    type; 
    tpd_node*  tpd; 

    type_index_node(tpd_node* tpd);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

    
class range_index_node : public idx_node {
  public:
    expr_node*   low;
    token*       dots; 
    expr_node*   high;

    range_index_node(expr_node *low, token* dots, expr_node* high);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};


class conformant_index_node : public idx_node { 
  public: 
    token    *t_low;
    token    *t_dots;       
    token    *t_high;
    token    *t_coln;
    tpd_node *tpd; 
    
    conformant_index_node(token *t_low, token *t_dots, token *t_high, token *t_coln, tpd_node* tpd); 

    virtual void attrib(int ctx);
    virtual void  translate(int ctx);
};


class array_tpd_node: public tpd_node {
  public:
    token*      t_packed;      // 'Packed' (if any)
    token*      t_array;	   // 'Array'
    token*      t_lbr;         // '['
    idx_node*   indices;	   // indices (possibly with comma)
    token*      t_rbr;         // ']'
    token*      t_of;          // 'of'
    tpd_node*   eltd;		   // Declaration of element type

    void set_indices_attrib(idx_node* idx);

    array_tpd_node(token* t_packed, token *t_array, token* t_lbr, idx_node *indices, 
                   token* t_rbr, token* t_of, tpd_node *eltd);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Turbo Pascal string types
//

class varying_tpd_node: public tpd_node {
  public:
    token*      t_string;	   // 'String'
    token*      t_lbr;         // '['
    expr_node*  size; 	       // size of string
    token*      t_rbr;         // ']'

    varying_tpd_node(token *t_string, token* t_lbr, expr_node *size, 
		     token* t_rbr);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Pointer type definition
//

class ptr_tpd_node: public tpd_node {
  public:
    token*      t_ref; // '^'
    tpd_node*   tpd;     

    ptr_tpd_node(token* t_ref, tpd_node* tpd);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

// 
// Record type definition
//

class field_list_node;
  
class variant_node : public node { 
  public: 
    static int          number; 

    variant_node*       next;     
 
    expr_node*          tag_list; 
    token*              t_coln; // ':'
    token*              t_lpar; // '('
    token*              t_rpar; // ')'
    char*               struct_name;
    field_list_node*    fields; 

    variant_node(expr_node* tag_list, token* t_coln, token* t_lpar, field_list_node* fields, token* t_rpar); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class selector_node : public node { 
  public: 
    token*           tag_field; 
    token*           coln; 
    tpd_node*        tag_type;
    symbol*          var; 

    selector_node(token* tag_field, token* coln, tpd_node* tag_type); 
};


class variant_part_node : public node { 
  public: 
    token*           t_case; 
    selector_node*   selector; 
    token*           t_of; 
    variant_node*    variants; 
    
    variant_part_node(token* t_case, selector_node* selector, token* t_of, variant_node* variants);

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class field_list_node : public decl_node { 
  public: 
    var_decl_node*     fix_part; 
    variant_part_node* var_part; 
    int                ctx; // union / record

    bool               is_single(); // list has single declaration

    field_list_node(var_decl_node* fix_part, variant_part_node* var_part = NULL); 
   
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

class base_obj_tpd_node : public tpd_node {
public:
    using ptoken = token*;
    token*      t_startof; // keyword 'record'
    token*      t_end;    
    decl_node*  parts;
    two_tokens* t_depr;

    base_obj_tpd_node(tpd_type tp, token* t_startof, decl_node* parts, token* t_end, two_tokens* t_depr);

    virtual void attrib1(int ctx) = 0;
    virtual void attrib2(int ctx) = 0;
    void attrib(int ctx) override { attrib1(ctx); attrib2(ctx); };
};

class record_tpd_node : public base_obj_tpd_node { 
  public: 
    ptoken&     t_record = t_startof;
    token*      t_packed;
 //   token*        t_end; 
 //   decl_node*    parts; 

    record_tpd_node* outer;

    record_tpd_node(token* t_packed, token* t_record, decl_node* parts, token* t_end, two_tokens* t_depr);

    void assign_name();

    void attrib1(int ctx) override;
    void attrib2(int ctx) override;
    //void attrib(int ctx) override;
    void translate(int ctx) override;
};

class object_tpd_node : public base_obj_tpd_node { 
  public: 
    ptoken&      t_class = t_startof; // keyword 'class'
    token*       t_lbr;
    token_list*  t_ancestorlist;
    token*       t_rbr;
    //token*       t_end; 
    //decl_node*   parts;         

    symbol*      super;
    
    object_tpd_node(token* t_class, token* t_lbr, token_list* t_ancestorlist, token* t_rbr, decl_node* parts, token* t_end, two_tokens* t_depr);

    void attrib1(int ctx);
    void attrib2(int ctx);
    //void attrib(int ctx) override;
    void translate(int ctx) override;
};

class interface_tpd_node : public object_tpd_node {
public:
    ptoken&     t_interface = t_class;
   // token*      t_lbr;
    token*      t_superinterface;
  //  token*      t_rbr;
   // token*      t_end;
    decl_node*  guid;
   // decl_node*  parts;

   // symbol* super;

    interface_tpd_node(token* t_interface, token* t_lbr, token* t_superinterface, token* t_rbr,
                       decl_node* guid, decl_node* parts, token* t_end, two_tokens* t_depr);

    void attrib1(int ctx) override;
    void attrib2(int ctx) override;
    void translate(int ctx) override;
};

class metaclass_tpd_node : public base_obj_tpd_node {
public:
    ptoken&   t_class = t_startof;
    ptoken&   t_of = t_end;
    token*    t_ident;

    metaclass_tpd_node(token* t_class, token* t_of, token* t_ident);

    void attrib1(int ctx) override;
    void attrib2(int ctx) override;
    void translate(int ctx) override;
};

class access_specifier_node : public decl_node {
public:
    token* t_strict;
    token* t_access_lvl;

    access_specifier_node(token* t_strict, token* t_access_lvl);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class guid_node : public decl_node {
public:
    token* t_lbr;
    token* t_guid;
    token* t_rbr;

    guid_node(token* t_lbr, token* t_guid, token* t_rbr);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};


//
// File type definition
//


class file_tpd_node : public tpd_node { 
  public: 
    token*           t_packed;
    token*           t_file;
    token*           t_of; 
    tpd_node*        recordtp; 

    file_tpd_node(token* t_packed, token* t_file, token* t_of, tpd_node* recordtp); 

    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Set type definition
//

class set_tpd_node : public tpd_node { 
  public: 
    token*           t_packed;
    token*           t_set;
    token*           t_of; 
    tpd_node*        elemtp; 

    set_tpd_node(token* t_packed, token* t_set, token* t_of, tpd_node* elemtp);
 
    virtual void attrib(int ctx);
    virtual void translate(int ctx);
};

//
// Delphi Properties definition
//

class prop_index_node : public decl_node
{
public:
    token* t_index;
    expr_node* prop_index;

    prop_index_node(token* t_index, expr_node* prop_index);

    char* get_val()
    {
        return prop_index->f_tkn->in_text;
    }
    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_type_def_node : public decl_node
{
public:
    token* t_coln; // ':'
    tpd_node* tpd;

    char* val_type = NULL;

    prop_type_def_node(token* t_coln, tpd_node* type);
    
    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_array_node : public decl_node
{
public:
    token* t_lbr;
    var_decl_node* decls; // actually list of variable declarations
    token* t_rbr;

    int varcnt = 0;
    char* type_list = NULL;    // comma separated list of param types e.g. 'int, K, char'
    char* param_list = NULL;  // full translated param list as string e.g. 'int key1, K key2, char key3'
    char* var_list = NULL;    // list of param naes ony e.g. 'key1, key2, key3'

    prop_array_node(token* t_lbr, var_decl_node* decls, token* t_rbr);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_read_node : public decl_node
{
public:
    token* t_read;
    token* t_ident;
    symbol* sym = NULL;
    char* func_name = NULL;

    prop_read_node(token* t_read, token* t_ident);

    bool is_function() const
    {
        assert(sym);
        return sym->tag == symbol::s_proc;
    }

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_write_node : public decl_node
{
public:
    token* t_write;
    token* t_ident;
    symbol* sym = NULL;
    char* func_name = NULL;

    prop_write_node(token* t_write, token* t_ident);

    bool is_function() const
    {
        assert(sym);
        return sym->tag == symbol::s_proc;
    }

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_stored_node : public decl_node
{
public:
    token* t_stored;
    token* t_truefalse;
    prop_stored_node(token* t_stored, token* t_truefalse);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_default_node : public decl_node
{
public:
    token* t_default;
    expr_node* def_value;
    prop_default_node(token* t_default, expr_node* def_value);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class prop_default_directive_node : public decl_node
{
public:
    token* t_default_d;
    token* t_semi;
    prop_default_directive_node(token* t_default_d, token* t_semi);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class property_node : public decl_node {
public:
    attrib_node* attribute;
    token* t_class; // 'class' word before property declaration, makes property a static property
    token* t_property;
    token* t_ident;
    prop_array_node* array;
    prop_type_def_node* prop_type;
    prop_index_node* index;
    prop_read_node* read;
    prop_write_node* write;
    prop_stored_node* stored;
    prop_default_node* dfault;
    token* t_semi;
    prop_default_directive_node* dfault_d;

    property_node(attrib_node* attribute, token* t_class, token* t_property, token* t_ident, decl_node* array, decl_node* type, decl_node* index,
        decl_node* read, decl_node* write, decl_node* stored, decl_node* dfault, token* t_semi, decl_node* dfault_d);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class property_decl_part_node : public decl_node {
public:
    decl_node* props; // actually this is property_node

    property_decl_part_node(decl_node* props) { this->props = props; };

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class asm_line_node : public decl_node {
public:
    token* t_list;
    token* comma;
 
    asm_line_node(token* t_list, token* comma);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};

class asm_block_node : public decl_node {
public:
    token* t_asm;
    asm_line_node* lines;
    token* t_end;

    asm_block_node(token* t_asm, asm_line_node* lines, token* t_end);

    void attrib(int ctx) override;
    void translate(int ctx) override;
};


#endif

