%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nmtbl.h"
#include "token.h"
#include "trnod.h"
#include "util.h"
#include "parser.h"

static int zzcnv_table[] = {
#define DEF_TOKEN(mnem, cat, cls, yacc) yacc,
#include "token.dpp"
};

#define YYINITDEPTH 100000

void zzerror(const char* text) 
{
    error(curr_token, "syntax error: %s", text); 
}

%}

%define parse.error verbose               // Enables detailed error messages (required for counterexamples)
//%define parse.counterexample timeout 15   // Set time limit to 15 seconds
//%define parse.lr.minimize timeout 30


%union {
    token                *tok;

    token_list           *toks; 

    node                 *n_node;
    tpd_node             *n_tpd;
    block_node           *n_block; 
    stmt_node            *n_stmt; 
    decl_node            *n_decl; 
    expr_node            *n_expr; 
    expr_group_node      *n_grp; 

    write_param_node     *n_wrtp; 
    write_list_node      *n_wrls; 
    case_node            *n_case; 
    set_item_node        *n_item; 

    const_def_node       *n_cdef; 
    type_def_node        *n_tdef; 
    var_decl_node        *n_vdcl; 

    field_init_node      *n_field;
    
    param_list_node      *n_plist; 
    idx_node             *n_idx; 

    field_list_node      *n_fldls;
    variant_part_node    *n_varp;
    selector_node        *n_sel; 
    variant_node         *n_vari;
    compound_node        *n_comp;

    asm_line_node        *n_asm;       
    asm_block_node       *n_basm;       
    import_list_node     *n_imp; 
}




%token <tok> ABSTRACT
             ARRAY
             ASM
             BEGIN
             CASE
             CDECL
             CLASS  
             CONST
             DEFAULT
             DO
             DOTS
             DYNAMIC
             ELSE
             END
             EXCEPT
             EXTERNAL
             FIL
             FINAL
	     FINALIZATION
             FINALLY
             FAR
             FOR
             FORWARD
             FUNCTION
             GOTO
             IDENT
             ICONST
             IF
             IMPLEMENTATION
             INDEX
             INHERITED
             INITIALIZATION
             INTERFACE
             LABEL
//             LOOPHOLE
             OBJECT
             OF
             ON
             ORIGIN
             OTHERWISE
             OVERLOAD
             OVERRIDE
	     OUT
             PACKED
             PASCAL
             PROCEDURE
             PROGRAM
             PROPERTY
             PRIVATE
             PROTECTED
             PUBLIC
             PUBLISHED
             RAISE
             RCONST
             READ
             RECORD
             REGISTER
             REINTRODUCE
             REPEAT
	     RESOURCESTRING
    //         RETURN
             SAFECALL
             SET
             SCONST
             STATIC
             STDCALL
             STORED
             STRICT
             STRING
             THEN
             TO
             TRY
             TYPE
             UNTIL
             UNIT
             UNIT_END
             VAR
             VARARGS            
             VIRTUAL
             WHILE
             WINAPI
             WITH
             WRITE
             '.'
             ','
             ':'
             ';'
             '('
             ')'
             '['
             ']'
             '^'
             '@'
             SCOPE


%right <tok>    LET LETADD LETSUB LETDIV LETMUL LETAND LETOR LETSHL LETSHR
%left  <tok>    EQ NE LT LE GT GE IN IS
%left  <tok>    PLUS MINUS OR XOR BINOR
%left  <tok>    MOD DIV DIVR MUL AND SHR SHL BINAND AS
%right <tok>    UPLUS UMINUS NOT ADDRESS BINNOT

%type <toks>    ident_list
%type <toks>    label_list
%type <toks>    qualifiers   
%type <tok>     fun_qualifier
                meth_qualifier
                qualifier
%type <tok>     packed
%type <tok>     progend
%type <tok>     otherwise
%type <tok>     class_or_object
%type <tok>     class_access_spec_tok
%type <tok>     record_access_spec_tok
%type <tok>     const
%type <tok>     ident_ext


%type <n_imp>   prog_param_list

%type <n_node>  unit

%type <n_node>  program
%type <n_node>  module
%type <n_node>  translation
%type <n_node>  input_file

%type <n_block> block
%type <n_stmt>  statement
%type <n_stmt>  sequence
%type <n_stmt>  try_finally
%type <n_stmt>  try_except
%type <n_stmt>  except
%type <n_stmt>  except_many
%type <n_grp>   actual_params

%type <n_comp>  compoundst
%type <n_wrls>  write_params
%type <n_wrtp>  write_list
%type <n_wrtp>  write_param

%type <n_expr>  expr
%type <n_expr>  simple_expr
%type <n_expr>  primary
%type <n_expr>  constant
%type <n_expr>  record_constant
%type <n_expr>  expr_list
%type <n_expr>  act_param_list
%type <n_expr>  act_param
%type <n_expr>  case_elem
%type <n_expr>  case_elem_list
%type <n_expr>  inherited

%type <n_grp>   expr_group

%type <n_field> field_init_list
%type <n_field> field_init_item

%type <n_case>  case_list
%type <n_case>  case_item
%type <n_case>  case_items

%type <n_item>  set_elem_list
%type <n_item>  set_elem

%type <n_decl>  decl_part
%type <n_decl>  unit_decl
%type <n_decl>  unit_spec
%type <n_decl>  unit_decl_list
%type <n_decl>  unit_def_list
%type <n_decl>  decl_part_list
%type <n_decl>  label_decl_part
%type <n_decl>  const_def_part
//%type <n_decl>  init_const_def_part
%type <n_decl>  var_const_decl_part_list
%type <n_decl>  guid
%type <n_decl>  interface_components
%type <n_decl>  interface_component
%type <n_decl>  object_properties 
%type <n_decl>  object_methods
%type <n_decl>  object_body
%type <n_decl>  object_components
%type <n_decl>  object_component
%type <n_decl>  record_components
%type <n_decl>  record_component
%type <n_decl>  record_body
%type <n_decl>  record_field_list
%type <n_decl>  record_access_spec_decl
%type <n_decl>  class_access_spec_decl
%type <n_decl>  init_finit

%type <n_decl>  prop_type_def
%type <n_decl>  prop_array
%type <n_decl>  prop_index
%type <n_decl>  prop_read
%type <n_decl>  prop_write
%type <n_decl>  prop_stored
%type <n_decl>  prop_default
%type <n_decl>  prop_default_directive

%type <n_cdef>  const_def_list
//%type <n_cdef>  init_const_def_list
%type <n_cdef>  const_def
%type <n_decl>  type_def_part
%type <n_tdef>  type_def_list
%type <n_tdef>  type_def
%type <n_decl>  var_decl_part
//%type <n_decl>  init_var_decl_part
%type <n_decl>  var_const_decl_part
%type <n_decl>  field_decl_part
%type <n_vdcl>  var_decl_list
//%type <n_vdcl>  init_var_decl_list
%type <n_vdcl>  field_decl_list
%type <n_vdcl>  var_decl
%type <n_vdcl>  param_decl
%type <n_vdcl>  prop_param_decl
%type <n_vdcl>  prop_param_list

//%type <n_decl>  proc_decl
%type <n_decl>  proc_fwd_decl
%type <n_decl>  method_decl_list
%type <n_decl>  method_decl
%type <n_decl>  proc_spec
%type <n_decl>  proc_def
%type <n_decl>  property_decl
%type <n_decl>  property_decl_list

%type <n_plist> formal_params
%type <n_decl>  formal_param_list
%type <n_decl>  formal_param

%type <n_tpd>   type
%type <n_tpd>   param_type
%type <n_tpd>   simple_type
%type <n_tpd>   fptr_type
%type <n_tpd>   const_type
%type <n_tpd>   const_array_type
%type <n_tpd>   const_set_type
%type <n_tpd>   array_type
%type <n_tpd>   string_type
%type <n_tpd>   conformant_array_type
%type <n_tpd>   enum_type
%type <n_tpd>   range_type
%type <n_tpd>   pointer_type
%type <n_tpd>   set_type
%type <n_tpd>   record_type
%type <n_tpd>   class_type
%type <n_tpd>   interface_type
%type <n_tpd>   file_type

%type <n_idx>   indices
%type <n_idx>   conformant_indices
%type <n_idx>   conformant_index
%type <n_idx>   index_spec

%type <n_fldls> field_list
%type <n_vdcl>  fixed_part
%type <n_varp>  variant_part
%type <n_sel>   selector
%type <n_vari>  variant_list
%type <n_vari>  variant

%type <tok>    asm_kwd
%type <toks>   asm_ident_list
%type <n_asm>  asm_line
%type <n_asm>  asm_text
%type <n_basm> assemblerst

%precedence THEN
%precedence ELSE

%precedence PROCEDURE
%precedence FUNCTION
%precedence OF
%precedence OBJECT


%start translation

%verbose
%no-lines
%define parse.trace

%printer { auto obj = (object_tpd_node*)$$; fprintf (yyo, "%s", obj->t_class->in_text); } class_type
%printer { if($$) $$->print_debug(); } <tok> 
%printer { $$->print_debug(); } <toks> 
%printer { fprintf (yyo, "%s", $$? ((literal_node*)$$)->value_tkn->in_text: "NULL"); } constant 
%printer { $$->print_debug(); } <n_expr> 
%printer { if($$) $$->print_debug(); } <n_stmt> 
%printer { $$->print_debug(); } <n_tpd> 

//%glr-parser

%%

/*
 Grammar section
*/

/*
//=============================================================================
// Program level grammar:
//   program         ::= PROGRAM ident [ '(' parameter_list ')' ] block '.'
//   parameter_list  ::= ident { ',' ident } 
//   block           ::= decl_part_list compoundst
//   decl_part_list  ::= { decl_part } 
//   decl_part       ::= label_decl_part | const_def_part | type_def_part
//                       | var_decl_part | proc_decl | proc_fwd_decl 
//=============================================================================
*/


translation: 
{
  if (turbo_pascal) { 
    zzcnv_table[TKN_STRING] = STRING;
//    zzcnv_table[TKN_STR] = WRITE;
    zzcnv_table[TKN_SHL] = SHL;
    zzcnv_table[TKN_SHR] = SHR;
    zzcnv_table[TKN_XOR] = XOR;
    zzcnv_table[TKN_UNIT] = UNIT;
    zzcnv_table[TKN_FAR] = FAR;
    zzcnv_table[TKN_IMPLEMENTATION] = IMPLEMENTATION;
    zzcnv_table[TKN_INTERFACE] = INTERFACE;

    zzcnv_table[TKN_OBJECT] = OBJECT;
    zzcnv_table[TKN_CLASS] = CLASS;
    zzcnv_table[TKN_CONSTRUCTOR] = PROCEDURE;
    zzcnv_table[TKN_DESTRUCTOR] = PROCEDURE;
  } else { 
    zzcnv_table[TKN_ORIGIN] = ORIGIN;
  }      
}	
input_file { 
    $2->attrib(ctx_program); 
    $2->translate(ctx_program); 
} 

input_file: program | module | unit

program: block '.' { $$ = new program_node(NULL, NULL, NULL, NULL, $1, $2); }
    | PROGRAM IDENT prog_param_list ';' block '.'
        { $$ = new program_node($1, $2, $3, $4, $5, $6); }

progend: { $$ = NULL; } | '.'

module: decl_part_list { $$ = new module_node(NULL, NULL, NULL, NULL, $1, NULL); }
    | PROGRAM IDENT prog_param_list ';' decl_part_list progend
        { $$ = new module_node($1, $2, $3, $4, $5, $6); }


/* Turbo Pascal specific */

unit: UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list END '.'
        { $$ = new unit_node($1, $2, $3, $4, $5, $6, $7, NULL, NULL, $8, $9); }
    | UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'
        { $$ = new unit_node($1, $2, $3, $4, $5, $6, $7, $8, NULL, NULL, $9); }
    | INTERFACE unit_decl_list IMPLEMENTATION unit_def_list END '.'
        { $$ = new unit_node(NULL, NULL, NULL, $1, $2, $3, $4, NULL, NULL, $5, $6); }
    | INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'
        { $$ = new unit_node(NULL, NULL, NULL, $1, $2, $3, $4, $5, NULL, NULL, $6); }
    | UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list init_finit END '.'
        { $$ = new unit_node($1, $2, $3, $4, $5, $6, $7, NULL, $8, $9, $10); }
  
init_finit: INITIALIZATION var_const_decl_part_list sequence
        { $$ = new init_finit_node($1, $2, $3, NULL, NULL, NULL, NULL, NULL); }
    | INITIALIZATION var_const_decl_part_list sequence FINALIZATION var_const_decl_part_list sequence
        { $$ = new init_finit_node($1, $2, $3, NULL, $4, $5, $6, NULL); }

var_const_decl_part_list: { $$ = NULL; } 
    | var_const_decl_part var_const_decl_part_list { $1->next = $2; $$ = $1; }

var_const_decl_part: const_def_part | var_decl_part 
  
/*
init_const_def_part: CONST init_const_def_list  
    { $$ = new const_def_part_node($1, $2); } 

init_const_def_list: const_def
    | const_def ';' const_def_list { $1->next = $3; $$ = $1; }

init_var_decl_part: VAR init_var_decl_list  
    { $$ = new var_decl_part_node($1, $2); } 

init_var_decl_list: var_decl
    | var_decl ';' init_var_decl_list { $1->next = $3; $$ = $1; }
 */

unit_def_list: decl_part_list 

prog_param_list: { $$ = NULL; } 
    | '(' ident_list ')' { $$ = new import_list_node($1, $2, $3); }

// read, write, index are reserved keywords in Delphi. However they can be used as variable and function names in source code.
// ident_ext non-terminal is an implementation for that.
ident_ext: IDENT | READ | WRITE | INDEX

ident_list: ident_ext ',' ident_list { $$ = new token_list($1, $3); }
    | ident_ext { $$ = new token_list($1); }

block: decl_part_list compoundst 
        { $$ = new block_node($1, $2); }
    | assemblerst 
        { $$ = new block_node($1); }

decl_part_list: { $$ = NULL; } 
    | decl_part decl_part_list { $1->next = $2; $$ = $1; }

decl_part: label_decl_part | const_def_part | type_def_part | var_decl_part 
    | proc_def | proc_fwd_decl | unit_spec

unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  
        {  $$ = new unit_spec_node($1, $2, $3, $4, $5); }
    | INTERFACE unit_decl_list UNIT_END
        {  $$ = new unit_spec_node(NULL, NULL, NULL, $1, $2); }
  

unit_decl_list: { $$ = NULL; }
    | unit_decl unit_decl_list { $1->next = $2; $$ = $1; }

unit_decl: label_decl_part | const_def_part | type_def_part | var_decl_part
    | proc_spec | proc_fwd_decl | unit_spec

/*
//=============================================================================
// Statement level grammar
//   statement       ::= compoundst | assignmentst | gotost | switchst | ifst 
//                    | forst | whilest | repeatst | procst | returnst 
//                    | withst | labelst | emtyst | writest | readst
//   sequence        ::= statement { ';' statement }
//   compoundst      ::= BEGIN sequence END
//   assignmentst    ::= expr ':=' expr
//   gotost          ::= GOTO iconst
//   labelst         ::= iconst ':' 
//   switchst        ::= CASE expr OF case_list END
//   case_list       ::= case_list_elem { ';' case-list-elem } [ ';' ] 
//   case_list_elem  ::= expr_list ':' statement | OTHERWISE statement
//   ifst            ::= IF expr THEN statement [ELSE statement]
//   forst           ::= FOR identifier := expr (TO | DOWNTO) expr DO statement
//   repeatst        ::= REPEAT sequence UNTIL expr
//   whilest         ::= WHILE expr DO statement
//   withst          ::= WITH expr_list DO statement
//   procst          ::= ident [ expr_group ]
//   writest         ::= (WRITE | WRITELN) [ write_params ] 
//   readst          ::= (READ | READLN) [ expr_group ] 
//   returnst        ::= RETURN
//   emptyst         ::= 
//=============================================================================
*/

inherited: INHERITED { $$ = new inherited_node($1, NULL, NULL, NULL, NULL); }
    | INHERITED IDENT
        { $$ = new inherited_node($1, $2, NULL, NULL, NULL); }
    | INHERITED IDENT '(' act_param_list ')' 
        { $$ = new inherited_node($1, $2, $3, $4, $5); }

// probably we need separate class for try* nterminals
try_finally: TRY sequence FINALLY sequence END
        { $$ = new try_finally_node($1, $2, $3, $4, $5); }

try_except: TRY sequence EXCEPT except_many END
        { $$ = new try_except_node($1, $2, $3, $4, NULL, NULL, $5); }
    | TRY sequence EXCEPT except_many ELSE sequence END
        { $$ = new try_except_node($1, $2, $3, $4, $5, $6, $7); }

except_many: except 
    | except ';' except_many { $1->next = $3; $$ = $1; }

except: { $$ = NULL; }  
    | ON IDENT ':' simple_type DO statement //compoundst
        { $$ = new on_except_node($1, $2, $3, $4, $5, $6); }

statement: { $$ = new empty_node(curr_token->prev_relevant()); }
    | primary LET expr { $$ = new assign_node($1, $2, $3); }
    | primary LETADD expr { $$ = new assign_node($1, $2, $3); }
    | primary LETSUB expr { $$ = new assign_node($1, $2, $3); }
    | primary LETDIV expr { $$ = new assign_node($1, $2, $3); }
    | primary LETMUL expr { $$ = new assign_node($1, $2, $3); }
    | primary LETAND expr { $$ = new assign_node($1, $2, $3); }
    | primary LETOR  expr { $$ = new assign_node($1, $2, $3); }
    | primary LETSHL expr { $$ = new assign_node($1, $2, $3); }
    | primary LETSHR expr { $$ = new assign_node($1, $2, $3); }
    | GOTO ICONST { $$ = new goto_node($1, $2); }
    | GOTO IDENT { $$ = new goto_node($1, $2); }
    | CASE expr OF case_list END { $$ = new switch_node($1, $2, $3, $4, $5); }
    | IF expr THEN statement { $$ = new if_node($1, $2, $3, $4); } 
    | IF expr THEN statement ELSE statement 
        { $$ = new if_node($1, $2, $3, $4, $5, $6); }
    | FOR ident_ext LET expr TO expr DO statement 
        { $$ = new for_node($1, $2, $3, $4, $5, $6, $7, $8); }
    | WHILE expr DO statement { $$ = new while_node($1, $2, $3, $4); }
    | REPEAT sequence UNTIL expr { $$ = new repeat_node($1, $2, $3, $4); }
    | WRITE write_params { $$ = new write_node($1, $2); }
    | READ actual_params { $$ = new read_node($1, $2); }
    | RAISE expr { $$ = new raise_node($1, $2); }
    | primary { $$ = new pcall_node($1); } 
 //   | RETURN { $$ = new return_node($1); }
    | WITH expr_list DO statement { $$ = new with_node($1, $2, $3, $4); }
    | ICONST ':' statement { $$ = new label_node($1, $2, $3); }
    | IDENT ':' statement { $$ = new label_node($1, $2, $3); }
    | compoundst { $$ = $1; }
    | try_finally
    | try_except

compoundst: BEGIN sequence END { $$ = new compound_node($1, $2, $3); }

assemblerst: ASM asm_text END { $$ = new asm_block_node($1, $2, $3); }

// this "stub" for pascal assembler functions, no real assembler parsing yet.
asm_kwd: IDENT | XOR | ICONST | '@' | ':' | '[' | ']' | '(' | ')' | PLUS | MINUS

asm_ident_list: asm_kwd { $$ = new token_list($1); }
    | asm_kwd asm_ident_list { $$ = new token_list($1, $2); }

asm_line: asm_ident_list   { $$ = new asm_line_node($1, NULL); }
    | asm_ident_list ',' { $$ = new asm_line_node($1, $2); }
    //| IDENT IDENT ',' IDENT { $$ = new asm_line_node($1, $2, $3, $4); }

asm_text: asm_line
    | asm_text asm_line

sequence: statement | statement ';' sequence { $1->next = $3; $$ = $1; }

actual_params: { $$ = NULL; } | expr_group { $$ = $1; }

write_params:  { $$ = NULL; } 
    | '(' write_list ')' { $$ = new write_list_node($1, $2, $3); } 

case_list: case_items
         | case_items otherwise sequence
           { 
	     if ($1 != NULL) { 
	         case_node** cpp;
	         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	         *cpp = new case_node(NULL, $2, $3);
		 $$ = $1;
             } else { 		 
	         $$ = new case_node(NULL, $2, $3);
             }
	   }

otherwise: OTHERWISE | ELSE /* Turbo Pascal */

case_items: { $$ = NULL; } 
         | case_item 
         | case_item ';' case_items { $1->next = $3; $$ = $1; }

case_item: case_elem_list ':' statement { $$ = new case_node($1, $2, $3); }

case_elem_list: case_elem 
        | case_elem ',' case_elem_list { $1->next = $3; $$ = $1; }

case_elem: expr { $$ = $1; }
        | expr DOTS expr { $$ = new case_range_node($1, $2, $3); }

/*
//=============================================================================
// Expression level syntax:
//   constant      ::= integer | real | string | set_construct | ident
//   set_elem      ::= expr | expr '..' expr
//   set_construct ::= '[' set_elem { ',' set_elem } ']'
//   expr_group    ::= '(' expr_list ')'
//   expr_list     ::= expr { ',' expr }
//   primary       ::= '(' expr ')' | call_expr  
//                   | deref_expr | idx_expr | access_expr | constant
//   access_expr   ::= expr '.' ident  
//   deref_expr    ::= expr '^'
//   idx_expr      ::= expr '[' expr_list ']'
//   call_expr     ::= expr expr_group
//   binary        ::= expr op expr      
//   unary         ::= op expr 
//   expr          ::= primary | unary | binary 
//   write_list    ::= '(' write_param { ',' write_param } ')'
//   write_param   ::= expr [ ':' constant [ ':' constant ] ] 
//=============================================================================
*/

expr: simple_expr
   | expr PLUS expr { $$ = new op_node(tn_add, $1, $2, $3); } 
   | expr MINUS expr { $$ = new op_node(tn_sub, $1, $2, $3); } 
   | expr MOD expr { $$ = new op_node(tn_mod, $1, $2, $3); } 
   | expr MUL expr { $$ = new op_node(tn_mul, $1, $2, $3); } 
   | expr DIV expr { $$ = new op_node(tn_div, $1, $2, $3); } 
   | expr DIVR expr { $$ = new op_node(tn_divr, $1, $2, $3); } 

   | primary LET expr { $$ = new op_node(tn_let, $1, $2, $3); }
   | primary LETADD expr { $$ = new op_node(tn_letadd, $1, $2, $3); }
   | primary LETSUB expr { $$ = new op_node(tn_letsub, $1, $2, $3); }
   | primary LETDIV expr { $$ = new op_node(tn_letdiv, $1, $2, $3); }
   | primary LETMUL expr { $$ = new op_node(tn_letmul, $1, $2, $3); }
   | primary LETSHL expr { $$ = new op_node(tn_letshl, $1, $2, $3); }
   | primary LETSHR expr { $$ = new op_node(tn_letshr, $1, $2, $3); }
   | primary LETAND expr { $$ = new op_node(tn_letand, $1, $2, $3); }
   | primary LETOR  expr { $$ = new op_node(tn_letor,  $1, $2, $3); }


   | expr AND expr { $$ = new op_node(tn_and, $1, $2, $3); } 
   | expr BINAND expr { $$ = new op_node(tn_binand, $1, $2, $3); } 
   | expr SHL expr { $$ = new op_node(tn_shl, $1, $2, $3); } 
   | expr SHR expr { $$ = new op_node(tn_shr, $1, $2, $3); } 
   | expr OR expr  { $$ = new op_node(tn_or, $1, $2, $3); } 
   | expr BINOR expr  { $$ = new op_node(tn_binor, $1, $2, $3); } 
   | expr XOR expr { $$ = new op_node(tn_xor, $1, $2, $3); } 

   | expr GT expr { $$ = new op_node(tn_gt, $1, $2, $3); } 
   | expr LT expr { $$ = new op_node(tn_lt, $1, $2, $3); } 
   | expr LE expr { $$ = new op_node(tn_le, $1, $2, $3); } 
   | expr GE expr { $$ = new op_node(tn_ge, $1, $2, $3); } 
   | expr EQ expr { $$ = new op_node(tn_eq, $1, $2, $3); } 
   | expr NE expr { $$ = new op_node(tn_ne, $1, $2, $3); } 
   | expr IN expr { $$ = new op_node(tn_in, $1, $2, $3); } 
   | expr IS expr { $$ = new op_node(tn_is, $1, $2, $3); } 
   | expr AS expr { $$ = new op_node(tn_as, $1, $2, $3); } 

simple_expr: primary
   | PLUS simple_expr %prec UPLUS {
     $$ = new op_node(tn_plus, NULL, $1, $2); }
   | MINUS simple_expr %prec UMINUS 
     { $$ = new op_node(tn_minus, NULL, $1, $2); }
   | NOT simple_expr 
     { $$ = new op_node(tn_not, NULL, $1, $2); }
   | BINNOT simple_expr 
     { $$ = new op_node(tn_binnot, NULL, $1, $2); }
   | '@' primary { $$ = new address_node($1, $2); }
   | AND primary %prec ADDRESS { $$ = new address_node($1, $2); }
 
primary: constant 
   | '(' expr_list ')' { $$ = new expr_group_node($1, $2, $3); }
   | primary '(' act_param_list ')' { $$ = new fcall_node($1, $2, $3, $4); }
   | primary '.' ident_ext { $$ = new access_expr_node($1, $2, $3); }
   | primary '^' { $$ = new deref_expr_node($1, $2); }
   | primary '[' expr_list ']' { $$ = new idx_expr_node($1, $2, $3, $4); }
   | inherited
//   | LOOPHOLE '(' type ',' expr ')' { $$ = new loophole_node($1, $2, $3, $4, $5, $6); }

constant: record_constant
        | ICONST { $$ = new integer_node($1); }
        | RCONST { $$ = new real_node($1); } 
        | SCONST { $$ = new string_node($1); }
        | '[' set_elem_list ']' { $$ = new set_node($1, $2, $3); }
        | IDENT { $$ = new atom_expr_node($1); }
        | INDEX { $$ = new atom_expr_node($1); }

set_elem_list: { $$ = NULL; } 
             | set_elem 
             | set_elem ',' set_elem_list { $1->next = $3; $$ = $1; }

set_elem: expr { $$ = new set_elem_node($1); }
        | expr DOTS expr { $$ = new set_range_node($1, $2, $3); }

expr_list: expr | expr ',' expr_list { $1->next = $3; $$ = $1; }

act_param_list: act_param 
    | act_param ',' act_param_list { $1->next = $3; $$ = $1; }

act_param: expr | { $$ = new skipped_node(curr_token->prev_relevant()); }


record_constant: '(' field_init_list ')' { $$ = new record_constant_node($1, $2, $3); }

field_init_list: field_init_item { $$ = $1; }
    | field_init_item ';' field_init_list { $1->next = $3; $$ = $1; }
   
field_init_item: IDENT ':' expr { $$ = new field_init_node($1, $2, $3); }


expr_group: '(' expr_list ')' { $$ = new expr_group_node($1, $2, $3); }


write_list: write_param | write_param ',' write_list { $1->next = $3; $$ = $1; }

write_param: expr  { $$ = new write_param_node($1); }
    | expr ':' expr { $$ = new write_param_node($1, $2, $3); }
    | expr ':' expr ':' expr { $$ = new write_param_node($1, $2, $3, $4, $5); }


/*
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
//   formal_param     ::= VAR var_decl | var_decl | proc_decl 
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
*/

label_decl_part: LABEL label_list ';' 
    { $$ = new label_decl_part_node($1, $2, $3); }

label_list: ICONST { $$ = new token_list($1); } 
          | ICONST ',' label_list { $$ = new token_list($1, $3); }
          | IDENT { $$ = new token_list($1); } 
          | IDENT ',' label_list { $$ = new token_list($1, $3); }

const: CONST | RESOURCESTRING

const_def_part: const const_def_list  
    { $$ = new const_def_part_node($1, $2); } 

const_def_list: { $$ = NULL; } 
    | const_def ';' const_def_list { $1->next = $3; $$ = $1; }

const_def: IDENT EQ expr { $$ = new const_def_node($1, $2, $3); }
| IDENT ':' const_type EQ expr { $$ = new typed_const_def_node($1, $2, $3, $4, $5); }

type_def_part: TYPE type_def_list  
    { $$ = new type_def_part_node($1, $2); }

type_def_list: { $$ = NULL; }
    | type_def ';' type_def_list { $1->next = $3; $$ = $1; }

type_def: IDENT EQ type { $$ = new type_def_node($1, $2, $3); }

var_decl_part: VAR var_decl_list 
     { $$ = new var_decl_part_node(NULL, $1, $2); }

var_decl_list: { $$ = NULL; }
//     | var_decl
// SCOPE was either 'external' or 'static' - remove it temporary since external or static keywords are not supported for variables any more 
//     | var_decl ';' SCOPE 
//       { 
//	 $1->scope = $3;
//	 $3->disable();
//       }
//     | var_decl ';' SCOPE ';' var_decl_list 
//       { 
//	 $1->scope = $3;
//	 token::remove($3, $4);	    
//	 $1->next = $5; $$ = $1; 
//       }
     | var_decl ';' var_decl_list { $1->next = $3; $$ = $1; }

var_decl: ident_list ':' type { $$ = new var_decl_node($1, $2, $3); }
   // temporarity commented out since it generates too many bison warnings (ambiguities)
   //  | IDENT ORIGIN expr ':' simple_type 
   //    { $$ = (var_decl_node*)new var_origin_decl_node($1, $2, $3, $4, $5); }

/* Temporary comment it out. Since we have proc_spec that does everything we need.
   The only problem need to be checked is having proc_decl in formal_params 
proc_decl: 
      PROCEDURE IDENT formal_params  
               { $$ = new proc_decl_node($1, $2, $3); } 
    | FUNCTION IDENT formal_params ':' type 
               { $$ = new proc_decl_node($1, $2, $3, $4, $5); } 
  */  

// proc_fwd_decl and proc_spec - we cannot replace IDENT by ident_ext because bison generates too many warnings for unknown reason
// while duplicated lines with IDENT replaced by READ, WRITE and INDEX work well
proc_fwd_decl: 
      PROCEDURE IDENT formal_params ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION IDENT formal_params ':' type ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8); } 
    | PROCEDURE READ formal_params ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION READ formal_params ':' type ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8); } 
    | PROCEDURE WRITE formal_params ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION WRITE formal_params ':' type ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8); } 
    | PROCEDURE INDEX formal_params ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION INDEX formal_params ':' type ';' qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8); } 

proc_spec: 
      PROCEDURE IDENT formal_params ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4); } 
    | FUNCTION IDENT formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6); } 
    | PROCEDURE READ formal_params ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4); } 
    | FUNCTION READ formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6); } 
    | PROCEDURE WRITE formal_params ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4); } 
    | FUNCTION WRITE formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6); } 
    | PROCEDURE INDEX formal_params ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, NULL, NULL, $4); } 
    | FUNCTION INDEX formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6); } 


property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive
        { $$ = new property_node($1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11); } 

property_decl_list: property_decl
    | property_decl property_decl_list { $1->next = $2; $$ = $1; }

prop_array: { $$ = NULL; }
    | '[' prop_param_list ']'
       { $$ = new prop_array_node($1, $2, $3); }
prop_index: { $$ = NULL; } 
    | INDEX constant     //TODO we may need expr type here instead of 'constant' to be able to handle 'property ... index IND+3 ...' statements 
       { $$ = new prop_index_node($1, $2); }
prop_type_def: { $$ = NULL; }
    | ':' type 
       { $$ = new prop_type_def_node($1, $2); }
prop_read: { $$ = NULL; }
    | READ IDENT
       { $$ = new prop_read_node($1, $2); }
prop_write: { $$ = NULL; }
    | WRITE IDENT
       { $$ = new prop_write_node($1, $2); }
prop_stored: { $$ = NULL; }
    | STORED IDENT
       { $$ = new prop_stored_node($1, $2); }
prop_default:  { $$ = NULL; }
    | DEFAULT constant
       { $$ = new prop_default_node($1, $2); }
prop_default_directive:  { $$ = NULL; }
    | DEFAULT ';'
       { $$ = new prop_default_directive_node($1, $2); }

prop_param_list: prop_param_decl 
    | prop_param_decl ';' prop_param_list { $1->next = $3; $$ = $1; }

prop_param_decl: ident_list ':' param_type { $$ = new var_decl_node($1, $2, $3); }


proc_def: 
      PROCEDURE IDENT formal_params ';' block ';' 
               { $$ = new proc_def_node(NULL, $1, NULL, NULL, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION IDENT formal_params ':' type ';' block ';' 
               { $$ = new proc_def_node(NULL, $1, NULL, NULL, $2, $3, $4, $5, $6, $7, $8); } 
    | PROCEDURE IDENT '.' ident_ext formal_params ';' block ';' 
               { $$ = new proc_def_node(NULL, $1, $2, $3, $4, $5, NULL, NULL, $6, $7, $8); } 
    | FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';' 
               { $$ = new proc_def_node(NULL, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10); } 
    | CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';' 
               { $$ = new proc_def_node($1, $2, $3, $4, $5, $6, NULL, NULL, $7, $8, $9); } 
    | CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';' 
               { $$ = new proc_def_node($1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11); } 
 
  //  | FUNCTION IDENT ';' block ';' 
  //             { $$ = new proc_def_node($1, NULL, NULL, $2, NULL, NULL, NULL, $3, NULL, NULL, $4, $5); } 
  /* we do not need FAR specifier any more */
  //  | PROCEDURE IDENT formal_params ';' FAR ';' block ';' 
  //             { $$ = new proc_def_node($1, NULL, NULL, $2, $3, NULL, NULL, $4, $5, $6, $7, $8); } 
  //  | FUNCTION IDENT formal_params ':' type ';' FAR ';' block ';' 
  //             { $$ = new proc_def_node($1, NULL, NULL, $2, $3, $4, $5, $6, $7, $8, $9, $10); } 
  //  | FUNCTION IDENT ';' FAR ';' block ';' 
  //             { $$ = new proc_def_node($1, NULL, NULL, $2, NULL, NULL, NULL, $3, $4, $5, $6, $7); } 

fun_qualifier: FORWARD | OVERLOAD | REGISTER | PASCAL | CDECL | STDCALL | SAFECALL | WINAPI | VARARGS | EXTERNAL 

meth_qualifier: REINTRODUCE | ABSTRACT | VIRTUAL | DYNAMIC | STATIC | OVERRIDE | FINAL

qualifier: fun_qualifier | meth_qualifier
      
qualifiers: qualifier { $$ = new token_list($1); }
     | qualifiers ';' qualifier
         { $$ = new token_list($3, $1); }

formal_params: { $$ = NULL; } 
    | '(' formal_param_list ')' { $$ = new param_list_node($1, $2, $3); }

formal_param_list: formal_param 
    | formal_param ';' formal_param_list { $1->next = $3; $$ = $1; }

formal_param: VAR param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | CONST param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | OUT param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | param_decl { $$ = $1; } 
    //| proc_decl - see comment to proc_decl definition

param_decl: ident_list ':' param_type { $$ = new var_decl_node($1, $2, $3); }
    |  ident_list ':' param_type EQ expr { $$ = new var_decl_node($1, $2, $3, $4, $5); }
    | ident_list { $$ = new var_decl_node($1, NULL, NULL); }

param_type: simple_type | conformant_array_type



/* Types definition */ 

type: simple_type | array_type | record_type | class_type | interface_type | set_type | file_type 
    | pointer_type | enum_type | range_type | string_type | fptr_type

const_type: simple_type | const_array_type | record_type | const_set_type | string_type

fptr_type: FUNCTION formal_params ':' type
       { $$ = new fptr_tpd_node($1, $2, $3, $4); }
    | FUNCTION formal_params ':' type OF OBJECT
       { $$ = new fptr_tpd_node($1, $2, $3, $4, $5, $6); }
    | PROCEDURE formal_params 
       { $$ = new fptr_tpd_node($1, $2); }
    | PROCEDURE formal_params OF OBJECT 
       { $$ = new fptr_tpd_node($1, $2, NULL, NULL, $3, $4); }

string_type: STRING '[' expr ']' { $$ = new varying_tpd_node($1, $2, $3, $4); }

simple_type: IDENT { $$ = new simple_tpd_node(NULL, NULL, $1); }
    | IDENT '.' ident_ext { $$ = new simple_tpd_node($1, $2, $3); }  
    | STRING { $$ = new string_tpd_node($1); }

array_type: packed ARRAY '[' indices ']' OF type 
       { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }
    | packed ARRAY OF type 
       { $$ = new array_tpd_node($1, $2, NULL, NULL, NULL, $3, $4); }

const_array_type: packed ARRAY '[' indices ']' OF const_type 
       { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }

conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type 
        { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }
    | packed ARRAY '[' conformant_indices ']' OF conformant_array_type 
        { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }

enum_type: '(' ident_list ')' { $$ = new enum_tpd_node($1, $2, $3); }

range_type: expr DOTS expr 
    { $$ = new range_tpd_node($1, $2, $3); } 

pointer_type: '^' type { $$ = new ptr_tpd_node($1, $2); }

set_type: packed SET OF type { $$ = new set_tpd_node($1, $2, $3, $4); }

const_set_type: packed SET OF const_type { $$ = new set_tpd_node($1, $2, $3, $4); }





/* Record, Classes, Interface definitions */

// **** NOTE: record can contain variant part declared in field_list nonterminal while class cannot

record_type: packed RECORD record_body END 
       { $$ = new record_tpd_node($1, $2, $3, $4); }
    | packed RECORD END 
       { $$ = new record_tpd_node($1, $2, NULL, $3); }

record_body: record_field_list record_components 
       { 
         decl_node** cpp;   
         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = $2;
         $$ = $1; 
       }
    | record_components
    | record_field_list

record_components: record_component record_components
       { 
         decl_node** cpp;   
         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = $2;
         $$ = $1; }
    | record_component

record_component: record_access_spec_decl
    | record_access_spec_decl record_field_list
       { $1->next = $2; $$ = $1; }
    | VAR field_list
       { $$ = new record_field_part_node($1, $2); } 
    | object_methods
    | const_def_part 
    | type_def_part 

record_field_list: field_list
       { $$ = new record_field_part_node(NULL, $1); }


interface_type: INTERFACE guid interface_components END
       { $$ = new interface_tpd_node($1, NULL, NULL, NULL, $2, $3, $4); }  
    | INTERFACE '(' IDENT ')' guid interface_components END
       { $$ = new interface_tpd_node($1, $2, $3, $4, $5, $6, $7); }
    | INTERFACE '(' IDENT ')' END
       { $$ = new interface_tpd_node($1, $2, $3, $4, NULL, NULL, $5); }
    | INTERFACE END
       { $$ = new interface_tpd_node($1, NULL, NULL, NULL, NULL, NULL, $2); }
//  | INTERFACE
 //      { $$ = new object_tpd_node($1, NULL, NULL, NULL, NULL, NULL, NULL); }

interface_components: interface_component interface_components
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = $2;
          $$ = $1; 
       }
    | interface_component

interface_component: object_methods
    | object_properties

guid: { $$ = NULL; }
    | '[' SCONST ']' 
       { $$ = new guid_node($1, $2, $3); }


class_or_object: OBJECT | CLASS
 
class_type: class_or_object object_body END
       { $$ = new object_tpd_node($1, NULL, NULL, NULL, $2, $3); }  
    | class_or_object '(' ident_list ')' object_body END
       { $$ = new object_tpd_node($1, $2, $3, $4, $5, $6); }
    | class_or_object '(' ident_list ')' END
       { $$ = new object_tpd_node($1, $2, $3, $4, NULL, $5); }
    | class_or_object END
       { $$ = new object_tpd_node($1, NULL, NULL, NULL, NULL, $2); }
    | class_or_object
       { $$ = new object_tpd_node($1, NULL, NULL, NULL, NULL, NULL); }


object_body: field_decl_list object_components
       { 
         // rare case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = $2;
         $$ = $1; 
       }
    | object_components
    | field_decl_list    //<n_vdcl>
       { $$ = new var_decl_part_node(NULL, NULL, $1); }

record_access_spec_tok: PRIVATE | PUBLIC 

class_access_spec_tok: record_access_spec_tok | PROTECTED | PUBLISHED

record_access_spec_decl: record_access_spec_tok { $$ = new access_specifier_node(NULL, $1); }
    | STRICT PRIVATE   { $$ = new access_specifier_node($1, $2); }

class_access_spec_decl: class_access_spec_tok { $$ = new access_specifier_node(NULL, $1); }
    | STRICT PRIVATE   { $$ = new access_specifier_node($1, $2); }
    | STRICT PROTECTED { $$ = new access_specifier_node($1, $2); }

object_components: object_component object_components
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = $2;
          $$ = $1; 
       }
    | object_component

object_component: class_access_spec_decl 
    | class_access_spec_decl field_decl_list
       { $1->next = $2; $$ = $1; } 
    | field_decl_part 
    | object_methods
    | object_properties
    | const_def_part 
    | type_def_part 


field_decl_part: VAR field_decl_list 
       { $$ = new var_decl_part_node(NULL, $1, $2); }
    | CLASS VAR field_decl_list 
       { $$ = new var_decl_part_node($1, $2, $3); }

field_decl_list: var_decl ';' { $$ = $1; }
    | var_decl ';' field_decl_list { $1->next = $3; $$ = $1; }

object_methods: method_decl_list
    //   { $$ = new proc_decl_part_node($1); }

object_properties: property_decl_list
       { $$ = new property_decl_part_node($1); }

method_decl: proc_fwd_decl 
       { $$ = new method_decl_node(NULL, $1); }
    | proc_spec 
       { $$ = new method_decl_node(NULL, $1); }
    | CLASS proc_fwd_decl  
       { $$ = new method_decl_node($1, $2); }
    | CLASS proc_spec  
       { $$ = new method_decl_node($1, $2); }

method_decl_list: method_decl
    | method_decl method_decl_list { $1->next = $2; $$ = $1; }
  //  | proc_spec     proc_fwd_decl_list { $1->next = $2; $$ = $1; }
  

file_type: packed FIL OF type { $$ = new file_tpd_node($1, $2, $3, $4); }

packed: { $$ = NULL; } | PACKED 

conformant_indices: conformant_index
    | conformant_index ';' conformant_indices { $1->next = $3; $$ = $1; }

conformant_index: IDENT DOTS IDENT ':' type 
        { $$ = new conformant_index_node($1, $2, $3, $4, $5); }

indices: index_spec 
    | index_spec ',' indices 
        { $1->next = $3; $$ = $1; }

index_spec: simple_type { $$ = new type_index_node($1); }
    | expr DOTS expr { $$ = new range_index_node($1, $2, $3); }


field_list: fixed_part variant_part  //<n_vdcl>   
        { $$ = new field_list_node($1, $2); }
    | fixed_part                   
        { $$ = new field_list_node($1); }

fixed_part: field_decl_list //var_decl_list //<n_vdcl>

variant_part: CASE selector OF variant_list 
        { $$ = new variant_part_node($1, $2, $3, $4); }

selector: IDENT ':' type { $$ = new selector_node($1, $2, $3); }
    | type { $$ = new selector_node(NULL, NULL, $1); }


variant_list: variant
    | variant ';' { $$ = $1; }
    | variant ';' variant_list { $1->next = $3; $$ = $1; }

variant: expr_list ':' '(' field_list ')' 
        { $$ = new variant_node($1, $2, $3, $4, $5); }

%%

int zzlex() { 
    curr_token = curr_token ? curr_token->next_relevant() : token::first_relevant(); 
    
    if (curr_token->tag == TKN_SCONST) { 
        while (curr_token->next != NULL && curr_token->next->tag == TKN_SCONST)
        {
	    curr_token->in_text = curr_token->out_text = 
	      dprintf("%s%s", curr_token->in_text, curr_token->next->in_text);
	    curr_token->next->remove();
	}
    } else if (turbo_pascal && curr_token->tag == TKN_FILE 
	       && curr_token->next_relevant()->tag != TKN_OF) 
    {
	curr_token->tag = TKN_IDENT;
	curr_token->in_text = curr_token->out_text = "untyped_file";
	curr_token->name = nm_entry::find("untyped_file");
    }

    zzlval.tok = curr_token;
    return zzcnv_table[curr_token->tag];
}


