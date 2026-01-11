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
%verbose
%no-lines
%define parse.trace
%define api.prefix {zz}


%union {
    token                *tok;
    two_tokens           *tok2;
    token_list           *toks; 

    node                 *n_node;
    tpd_node             *n_tpd;
    block_node           *n_block; 
    stmt_node            *n_stmt; 
    decl_node            *n_decl; 
    expr_node            *n_expr; 
    expr_group_node      *n_grp; 

    //write_param_node     *n_wrtp; 
    //write_list_node      *n_wrls; 
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
    
    attrib_node          *n_attr;
}




%token <tok> ABSTRACT
             ARRAY
             ASM
             BEGIN
             CASE
             CDECL
             CELSE
             CENDIF
             CIF
             CIFDEF
             CIFNDEF
             CLASS  
             CONST
             DEFAULT
             DEPRECATED
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
      //       FAR
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
             INLINE 
             INTERFACE
             LABEL
//             LOOPHOLE
             OBJECT
             OF
             ON
	     OPERATOR	
   //	          ORIGIN
  //           OTHERWISE
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
	     UNSAFE
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
  //           SCOPE


%right <tok>    LET LETADD LETSUB LETDIV LETMUL LETAND LETOR LETSHL LETSHR
%left  <tok>    EQ NE LT LE GT GE IN IS
%left  <tok>    PLUS MINUS OR XOR BINOR
%left  <tok>    MOD DIV DIVR MUL AND SHR SHL BINAND AS
%right <tok>    UPLUS UMINUS NOT ADDRESS BINNOT

%left  <tok>    EQUAL NOTEQUAL LESSTH GREATERTH 
%left  <tok>    ADD SUBSTRACT 
%left  <tok>    MULTIPLY DIVIDE INTDIVIDE MODULUS IMPLICIT EXPLICIT

%type <toks>    ident_list
%type <toks>    label_list
%type <toks>    qualifiers  
 
%type <tok>     fun_qualifier
                meth_qualifier
                qualifier
                condition_start
%type <tok>     packed
%type <tok>     progend
//%type <tok>     otherwise
%type <tok>     class_or_object
%type <tok>     class_access_spec_tok
%type <tok>     record_access_spec_tok
%type <tok>     const
%type <tok>     ident_ext
%type <tok>     optional_semicolon
%type <tok2>    deprecatd

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
%type <n_stmt>  attr_content

//%type <n_grp>   actual_params

%type <n_comp>  compoundst
//%type <n_wrls>  write_params
//%type <n_wrtp>  write_list
//%type <n_wrtp>  write_param

%type <n_expr>  const_expr
%type <n_expr>  const_simple_expr
%type <n_expr>  expr
%type <n_expr>  condition_expr
%type <n_expr>  condition_const_expr
%type <n_expr>  simple_expr
%type <n_expr>  primary
%type <n_expr>  constant
%type <n_expr>  record_constant
%type <n_expr>  expr_list
%type <n_expr>  const_expr_list
%type <n_expr>  const_act_param_list
%type <n_expr>  const_act_param
%type <n_expr>  act_param_list
%type <n_expr>  act_param
%type <n_expr>  case_elem
%type <n_expr>  case_elem_list
%type <n_expr>  inherited

//%type <n_grp>   expr_group

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
//%type <n_decl>  guid
%type <n_decl>  interface_methods
%type <n_decl>  interface_method_decl
%type <n_decl>  interface_method_decl_c
%type <n_decl>  object_methods
%type <n_decl>  condition_obj_method
%type <n_decl>  condition_interface_method
%type <n_decl>  condition_rec_method
//%type <n_decl>  condition_obj_body
%type <n_decl>  object_body
%type <n_decl>  object_components
%type <n_decl>  object_component
%type <n_decl>  record_components
%type <n_decl>  record_component
%type <n_decl>  record_methods
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
%type <n_decl>  var_const_decl_part
%type <n_decl>  field_decl_part
%type <n_vdcl>  var_decl_list
%type <n_vdcl>  var_decl_c
%type <n_vdcl>  var_decl_semi
%type <n_vdcl>  var_decl
%type <n_vdcl>  field_decl_list
%type <n_vdcl>  param_decl
%type <n_vdcl>  prop_param_decl
%type <n_vdcl>  prop_param_list

//%type <n_decl>  proc_decl
%type <n_decl>  proc_fwd_decl
%type <n_decl>  operator_fwd_decl
%type <n_decl>  record_method_decl
%type <n_decl>  method_decl_list
%type <n_decl>  method_decl
%type <n_decl>  proc_spec
%type <n_decl>  proc_def
%type <n_decl>  property_decl
//%type <n_decl>  property_decl_list

%type <n_plist> formal_params
%type <n_decl>  formal_param_list
%type <n_decl>  formal_param

%type <n_tpd>   type
%type <n_tpd>   param_type
%type <n_tpd>   simple_type
%type <n_tpd>   simple_templ_type
%type <n_tpd>   fptr_type
%type <n_tpd>   const_type
%type <n_tpd>   const_array_type
%type <n_tpd>   const_set_type
%type <n_tpd>   array_type
//%type <n_tpd>   array_of_const_type
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
//%type <n_idx>   conformant_indices
//%type <n_idx>   conformant_index
%type <n_idx>   index_spec

%type <n_fldls> field_list
%type <n_vdcl>  fixed_part
%type <n_varp>  variant_part
%type <n_sel>   selector
%type <n_vari>  variant_list
%type <n_vari>  variant

%type <tok>    asm_kwd
//%type <toks>   asm_ident_list
%type <n_asm>  asm_line
%type <n_asm>  asm_text
%type <n_basm> assemblerst

%type <n_attr> attr_decl 

%precedence THEN
%precedence ELSE

%precedence PROCEDURE
%precedence FUNCTION
%precedence OF
%precedence OBJECT


%start translation

%printer { auto obj = dynamic_cast<base_obj_tpd_node*>($$); assert(obj); fprintf(yyo, "%s", obj->t_startof->in_text); } class_type
%printer { if($$) $$->print_debug(); } <tok> 
%printer { $$->print_debug(); } <toks> 
%printer { fprintf(yyo, "%s", $$? ((literal_node*)$$)->value_tkn->in_text: "NULL"); } constant 
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
//  if (turbo_pascal) { 
//    zzcnv_table[TKN_STRING] = STRING;
//    zzcnv_table[TKN_STR] = WRITE;
//    zzcnv_table[TKN_SHL] = SHL;
//    zzcnv_table[TKN_SHR] = SHR;
//    zzcnv_table[TKN_XOR] = XOR;
//    zzcnv_table[TKN_UNIT] = UNIT;
//    zzcnv_table[TKN_FAR] = FAR;
//    zzcnv_table[TKN_IMPLEMENTATION] = IMPLEMENTATION;
//    zzcnv_table[TKN_INTERFACE] = INTERFACE;

//    zzcnv_table[TKN_OBJECT] = OBJECT;
//    zzcnv_table[TKN_CLASS] = CLASS;
//    zzcnv_table[TKN_CONSTRUCTOR] = PROCEDURE;
//    zzcnv_table[TKN_DESTRUCTOR] = PROCEDURE;
//  } else { 
//    zzcnv_table[TKN_ORIGIN] = ORIGIN;
//  }      
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
  
init_finit: 
      INITIALIZATION var_const_decl_part_list sequence
        { $$ = new init_finit_node($1, $2, $3, NULL, NULL, NULL, NULL, NULL); }
    | INITIALIZATION sequence
        { $$ = new init_finit_node($1, NULL, $2, NULL, NULL, NULL, NULL, NULL); }
    | INITIALIZATION var_const_decl_part_list sequence FINALIZATION var_const_decl_part_list sequence
        { $$ = new init_finit_node($1, $2, $3, NULL, $4, $5, $6, NULL); }
    | INITIALIZATION sequence FINALIZATION var_const_decl_part_list sequence
        { $$ = new init_finit_node($1, NULL, $2, NULL, $3, $4, $5, NULL); }
    | INITIALIZATION var_const_decl_part_list sequence FINALIZATION sequence
        { $$ = new init_finit_node($1, $2, $3, NULL, $4, NULL, $5, NULL); }
    | INITIALIZATION sequence FINALIZATION sequence
        { $$ = new init_finit_node($1, NULL, $2, NULL, $3, NULL, $4, NULL); }

var_const_decl_part_list: var_const_decl_part //{ $$ = NULL; } 
    | var_const_decl_part var_const_decl_part_list { $1->next = $2; $$ = $1; }

var_const_decl_part: const_def_part | var_decl_part 

unit_def_list: decl_part_list 

prog_param_list: { $$ = NULL; } 
    | '(' ident_list ')' { $$ = new import_list_node($1, $2, $3); }

// read, write, index are reserved keywords in Delphi. However they can be used as variable and function names in source code.
// ident_ext non-terminal is an implementation for that.
ident_ext: IDENT | INDEX | READ | WRITE

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

inherited: 
      INHERITED 
        { $$ = new inherited_node($1, NULL, NULL, NULL, NULL); }
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
  //  | WRITE write_params { $$ = new write_node($1, $2); }
  //  | READ actual_params { $$ = new read_node($1, $2); }
    | RAISE expr { $$ = new raise_node($1, $2); }
    | primary { $$ = new pcall_node($1); } 
 //   | RETURN { $$ = new return_node($1); }
    | WITH expr_list DO statement { $$ = new with_node($1, $2, $3, $4); }
    | ICONST ':' statement { $$ = new label_node($1, $2, $3); } // label name can be just an integer 
    | IDENT ':' statement { $$ = new label_node($1, $2, $3); }
    | compoundst { $$ = $1; }
    | try_finally
    | try_except

compoundst: BEGIN sequence END { $$ = new compound_node($1, $2, $3); }

assemblerst: ASM asm_text END { $$ = new asm_block_node($1, $2, $3); }

// this "stub" for pascal assembler functions, no real assembler parsing yet.
asm_kwd: IDENT | XOR | ICONST | '@' | ':' | '[' | ']' | '(' | ')' | ',' | PLUS | MINUS

asm_line: asm_kwd { $$ = new asm_line_node($1, NULL); }

asm_text: asm_line
    | asm_line asm_text 


sequence: statement | statement ';' sequence { $1->next = $3; $$ = $1; }

//actual_params: { $$ = NULL; } | expr_group { $$ = $1; }

//write_params:  { $$ = NULL; } 
//    | '(' write_list ')' { $$ = new write_list_node($1, $2, $3); } 

case_list: case_items
         | case_items ELSE sequence
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

//otherwise: OTHERWISE | ELSE /* Turbo Pascal */

case_items: { $$ = NULL; } 
    | case_item 
    | case_item ';' case_items { $1->next = $3; $$ = $1; }

case_item: case_elem_list ':' statement { $$ = new case_node($1, $2, $3); }

case_elem_list: case_elem 
    | case_elem ',' case_elem_list { $1->next = $3; $$ = $1; }

case_elem: const_expr { $$ = $1; }
    | const_expr DOTS const_expr { $$ = new case_range_node($1, $2, $3); }

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

condition_start: CIFDEF | CIF | CIFNDEF

condition_const_expr: 
      condition_start const_expr CELSE const_expr CENDIF  { $$ = new cond_expr_node($1, $2, $3, $4, $5); } 
    | condition_start const_expr CENDIF  { $$ = new cond_expr_node($1, $2, NULL, NULL, $3); }
        
const_expr: const_simple_expr
    | condition_const_expr
    | const_expr PLUS const_expr { $$ = new op_node(tn_add, $1, $2, $3); } 
    | const_expr MINUS const_expr { $$ = new op_node(tn_sub, $1, $2, $3); } 
    | const_expr MOD const_expr { $$ = new op_node(tn_mod, $1, $2, $3); } 
    | const_expr MUL const_expr { $$ = new op_node(tn_mul, $1, $2, $3); } 
    | const_expr DIV const_expr { $$ = new op_node(tn_div, $1, $2, $3); } 
    | const_expr DIVR const_expr { $$ = new op_node(tn_divr, $1, $2, $3); } 
 
    | const_expr AND const_expr { $$ = new op_node(tn_and, $1, $2, $3); } 
    | const_expr BINAND const_expr { $$ = new op_node(tn_binand, $1, $2, $3); } 
    | const_expr SHL const_expr { $$ = new op_node(tn_shl, $1, $2, $3); } 
    | const_expr SHR const_expr { $$ = new op_node(tn_shr, $1, $2, $3); } 
    | const_expr OR const_expr  { $$ = new op_node(tn_or, $1, $2, $3); } 
    | const_expr BINOR const_expr  { $$ = new op_node(tn_binor, $1, $2, $3); } 
    | const_expr XOR const_expr { $$ = new op_node(tn_xor, $1, $2, $3); } 

    | const_expr GT const_expr { $$ = new op_node(tn_gt, $1, $2, $3); } 
    | const_expr LT const_expr { $$ = new op_node(tn_lt, $1, $2, $3); } 
    | const_expr LE const_expr { $$ = new op_node(tn_le, $1, $2, $3); } 
    | const_expr GE const_expr { $$ = new op_node(tn_ge, $1, $2, $3); } 
   // | const_expr EQ const_expr { $$ = new op_node(tn_eq, $1, $2, $3); } // this rule causes many warnings because we have IDENT EQ const_expr in const_def and var_decl, temporary commented out
    | const_expr NE const_expr { $$ = new op_node(tn_ne, $1, $2, $3); } 
    | const_expr IN const_expr { $$ = new op_node(tn_in, $1, $2, $3); } 
    | const_expr IS const_expr { $$ = new op_node(tn_is, $1, $2, $3); } 
    | const_expr AS const_expr { $$ = new op_node(tn_as, $1, $2, $3); } 
    | '(' const_expr_list ')' { $$ = new expr_group_node($1, $2, $3); }
    | const_simple_expr '(' const_act_param_list ')' { $$ = new fcall_node($1, $2, $3, $4); }
    | '@' const_simple_expr { $$ = new address_node($1, $2); }
    
const_simple_expr: constant
    | PLUS const_simple_expr %prec UPLUS 
        { $$ = new op_node(tn_plus, NULL, $1, $2); }
    | MINUS const_simple_expr %prec UMINUS 
        { $$ = new op_node(tn_minus, NULL, $1, $2); }
    | NOT const_simple_expr 
        { $$ = new op_node(tn_not, NULL, $1, $2); }
    | BINNOT const_simple_expr 
        { $$ = new op_node(tn_binnot, NULL, $1, $2); }

const_expr_list: const_expr | const_expr ',' const_expr_list { $1->next = $3; $$ = $1; }

const_act_param_list: const_act_param 
    | const_act_param ',' const_act_param_list { $1->next = $3; $$ = $1; }

const_act_param: const_expr | { $$ = new skipped_node(curr_token->prev_relevant()); }
 
condition_expr: 
      condition_start expr CELSE expr CENDIF  { $$ = new cond_expr_node($1, $2, $3, $4, $5); } 
    | condition_start expr CENDIF  { $$ = new cond_expr_node($1, $2, NULL, NULL, $3); }

expr: simple_expr
    | condition_expr
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
    | expr EQ expr { $$ = new op_node(tn_eq, $1, $2, $3); } // this rule causes many warnings because we have IDENT EQ expr in const_def and var_decl, temporary commented out
    | expr NE expr { $$ = new op_node(tn_ne, $1, $2, $3); } 
    | expr IN expr { $$ = new op_node(tn_in, $1, $2, $3); } 
    | expr IS expr { $$ = new op_node(tn_is, $1, $2, $3); } 
    | expr AS expr { $$ = new op_node(tn_as, $1, $2, $3); } 

simple_expr: primary
    | PLUS simple_expr %prec UPLUS 
        { $$ = new op_node(tn_plus, NULL, $1, $2); }
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
    | RCONST { $$ = new double_node($1); } 
    | SCONST { $$ = new string_node($1); }
    | '[' set_elem_list ']' { $$ = new set_node($1, $2, $3); }
    | IDENT { $$ = new atom_expr_node($1); }
    | INDEX { $$ = new atom_expr_node($1); }
    //| READ  { $$ = new atom_expr_node($1); }
    //| WRITE { $$ = new atom_expr_node($1); }

set_elem_list: { $$ = NULL; } 
    | set_elem 
    | set_elem ',' set_elem_list { $1->next = $3; $$ = $1; }

set_elem: const_expr { $$ = new set_elem_node($1); }
    | const_expr DOTS const_expr { $$ = new set_range_node($1, $2, $3); }

expr_list: expr | expr ',' expr_list { $1->next = $3; $$ = $1; }

act_param_list: act_param 
    | act_param ',' act_param_list { $1->next = $3; $$ = $1; }

act_param: expr | { $$ = new skipped_node(curr_token->prev_relevant()); }


record_constant: '(' field_init_list ')' { $$ = new record_constant_node($1, $2, $3); }

field_init_list: field_init_item { $$ = $1; }
    | field_init_item ';' field_init_list { $1->next = $3; $$ = $1; }
   
field_init_item: IDENT ':' const_expr { $$ = new field_init_node($1, $2, $3); }


//expr_group: '(' expr_list ')' { $$ = new expr_group_node($1, $2, $3); }

//write_list: write_param | write_param ',' write_list { $1->next = $3; $$ = $1; }

//write_param: expr  { $$ = new write_param_node($1); }
//    | expr ':' expr { $$ = new write_param_node($1, $2, $3); }
//    | expr ':' expr ':' expr { $$ = new write_param_node($1, $2, $3, $4, $5); }


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

const_def_part: const const_def_list { $$ = new const_def_part_node($1, $2); } 

const_def_list: const_def ';' { $$ = $1; } 
    | const_def ';' const_def_list { $1->next = $3; $$ = $1; }

const_def: 
      ident_ext EQ const_expr deprecatd
        { $$ = new const_def_node($1, $2, $3, $4); }
    | ident_ext ':' const_type EQ const_expr deprecatd
        { $$ = new typed_const_def_node($1, $2, $3, $4, $5, $6); }

type_def_part: TYPE type_def_list  
        { $$ = new type_def_part_node($1, $2); }

type_def_list: { $$ = NULL; }
    | type_def ';' type_def_list { $1->next = $3; $$ = $1; }

type_def: 
      IDENT EQ type { $$ = new type_def_node($1, $2, $3); }
    | IDENT EQ TYPE type { $$ = new type_def_node($1, $2, $4); }  // this is so called 'strong type alias' in Delphi, example: type CppLongInt = type LongInt;
    | IDENT EQ CLASS {$$ = new type_def_node($1, $2, new object_tpd_node($3, NULL, NULL, NULL, NULL, NULL, NULL)); }
    | simple_templ_type EQ type { $$ = new type_def_templ_node($1, $2, $3); }

var_decl_part: VAR var_decl_list { $$ = new var_decl_part_node(NULL, $1, $2); }

var_decl_list: //var_decl
      var_decl_c //';' { $$ = $1; }
    | var_decl_c var_decl_list { $1->next = $2; $$ = $1; }


attr_content: SCONST { $$ = new attrib_content($1, NULL, NULL, NULL); }
    | UNSAFE { $$ = new attrib_content($1, NULL, NULL, NULL); }
    | IDENT { $$ = new attrib_content($1, NULL, NULL, NULL); }
    | IDENT '(' act_param_list ')' { $$ = new attrib_content($1, $2, $3, $4); }
 
attr_decl: // { $$ = NULL; } 
     '[' attr_content ']' { $$ = new attrib_node($1, $2, $3); }

var_decl_c: var_decl_semi
    | condition_start var_decl_semi CELSE var_decl_semi CENDIF { $$ = new cond_var_decl_node($1, $2, $3, $4, $5); } 
    | condition_start var_decl_semi CENDIF  { $$ = new cond_var_decl_node($1, $2, NULL, NULL, $3); }

var_decl_semi: var_decl ';' {$$ = $1; }

var_decl:
      ident_list ':' type deprecatd { $$ = new var_decl_node(NULL, $1, $2, $3, NULL, NULL, NULL); }
    | ident_list ':' type EQ const_expr deprecatd { $$ = new var_decl_node(NULL, $1, $2, $3, $4, $5, $6); }

    | attr_decl ident_list ':' type deprecatd { $$ = new var_decl_node($1, $2, $3, $4, NULL, NULL, $5); }
    | attr_decl ident_list ':' type EQ const_expr deprecatd { $$ = new var_decl_node($1, $2, $3, $4, $5, $6, $7); }

   // temporarity commented out since it generates too many bison warnings (ambiguities)
   //  | IDENT ORIGIN const_expr ':' const_simple_type 
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
      PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';' 
        { $$ = new proc_fwd_decl_node(NULL, $1, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';' 
        { $$ = new proc_fwd_decl_node(NULL, $1, $2, $3, $4, $5, $6, $7, $8); } 
    | attr_decl PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, NULL, NULL, $5, $6, $7); } 
    | attr_decl FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';' 
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8, $9); } 
  
proc_spec: 
      PROCEDURE ident_ext formal_params ';'
        { $$ = new proc_fwd_decl_node(NULL, $1, $2, $3, NULL, NULL, $4, NULL, NULL); } 
    | FUNCTION ident_ext formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node(NULL, $1, $2, $3, $4, $5, $6, NULL, NULL); } 
    | attr_decl PROCEDURE ident_ext formal_params ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, NULL, NULL, $5, NULL, NULL); } 
    | attr_decl FUNCTION ident_ext formal_params ':' type ';'
        { $$ = new proc_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, NULL, NULL); } 

// operators cannot have Delphi attributes, that is why no version with attr_decl in front
operator_fwd_decl:     
      OPERATOR IDENT formal_params ':' type ';'
        { $$ = new operator_fwd_decl_node($1, $2, $3, $4, $5, $6, NULL, NULL); } 
    | OPERATOR IDENT formal_params ':' type optional_semicolon qualifiers ';' // here should be fun_qualifierS however we use qualifiers for simplicity.
        { $$ = new operator_fwd_decl_node($1, $2, $3, $4, $5, $6, $7, $8); } 

proc_def: 
      PROCEDURE ident_ext formal_params ';' block ';' 
          { $$ = new proc_def_node(NULL, $1, NULL, NULL, $2, $3, NULL, NULL, $4, $5, $6); } 
    | FUNCTION ident_ext formal_params ':' type ';' block ';' 
          { $$ = new proc_def_node(NULL, $1, NULL, NULL, $2, $3, $4, $5, $6, $7, $8); } 
    | PROCEDURE IDENT '.' ident_ext formal_params ';' block ';' 
          { $$ = new proc_def_node(NULL, $1, $2, $3, $4, $5, NULL, NULL, $6, $7, $8); } 
    | FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';' 
          { $$ = new proc_def_node(NULL, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10); } 
    | CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';' 
          { $$ = new proc_def_node($1, $2, $3, $4, $5, $6, NULL, NULL, $7, $8, $9); } 
    | CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';' 
          { $$ = new proc_def_node($1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11); } 
    | CLASS OPERATOR IDENT formal_params ':' type ';' block ';'
          { $$ = new proc_def_node($1, $2, NULL,NULL, $3, $4, $5, $6, $7, $8, $9); } 
    | CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'
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

fun_qualifier: FORWARD | OVERLOAD | REGISTER | PASCAL | CDECL | STDCALL | SAFECALL | WINAPI | VARARGS | EXTERNAL | INLINE | UNSAFE

meth_qualifier: REINTRODUCE | ABSTRACT | VIRTUAL | DYNAMIC | STATIC | OVERRIDE | FINAL

optional_semicolon: { $$ = NULL; } | ';'
 
qualifier: fun_qualifier 
    | meth_qualifier
    | DEPRECATED SCONST { $$ = new two_tokens($1, $2); }
      
qualifiers: qualifier { $$ = new token_list($1); }
    | qualifiers optional_semicolon qualifier
         { $$ = new token_list($3, $1); }


property_decl:
      PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive
        { $$ = new property_node(NULL, NULL, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11); }
    | CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive
        { $$ = new property_node(NULL, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12); } 
    | attr_decl PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive
        { $$ = new property_node($1, NULL, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12); }
    | attr_decl CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive
        { $$ = new property_node($1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13); } 

//property_decl_list: property_decl
//    | property_decl property_decl_list { $1->next = $2; $$ = $1; }


prop_array: { $$ = NULL; }
    | '[' prop_param_list ']'
        { $$ = new prop_array_node($1, $2, $3); }
prop_index: { $$ = NULL; } 
    | INDEX constant     //TODO we may need expr type here instead of 'constant' to be able to handle 'property ... index IND+3 ...' statements 
        { $$ = new prop_index_node($1, $2); }
prop_type_def: ':' type 
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

prop_param_decl: ident_list ':' param_type { $$ = new var_decl_node(NULL, $1, $2, $3, NULL, NULL, NULL); }


formal_params: { $$ = NULL; } 
    | '(' ')' { $$ = new param_list_node($1, NULL, $2); }
    | '(' formal_param_list ')' { $$ = new param_list_node($1, $2, $3); }

formal_param_list: formal_param 
    | formal_param ';' formal_param_list { $1->next = $3; $$ = $1; }

formal_param: VAR param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | CONST param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | OUT param_decl { $$ = new var_decl_part_node(NULL, $1, $2); }
    | param_decl { $$ = $1; } 
    //| proc_decl - see comment to proc_decl definition

param_decl: ident_list ':' param_type { $$ = new var_decl_node(NULL, $1, $2, $3, NULL, NULL, NULL); }
    | ident_list ':' param_type EQ const_expr { $$ = new var_decl_node(NULL, $1, $2, $3, $4, $5, NULL); }
    | ident_list { $$ = new var_decl_node(NULL, $1, NULL, NULL, NULL, NULL, NULL); }

param_type: simple_type | conformant_array_type //| array_of_const_type



/* Types definition */ 

type: simple_type | array_type | record_type | class_type | interface_type | set_type | file_type 
    | pointer_type | enum_type | range_type | string_type | fptr_type | simple_templ_type

const_type: simple_type | const_array_type | record_type | const_set_type | string_type | pointer_type

fptr_type: 
      FUNCTION formal_params ':' type
        { $$ = new fptr_tpd_node($1, $2, $3, $4, NULL, NULL, NULL, NULL); }
 //   | FUNCTION formal_params ':' type optional_semicolon qualifiers
 //       { $$ = new fptr_tpd_node($1, $2, $3, $4, $5, $6, NULL, NULL); }
    | FUNCTION formal_params ':' type OF OBJECT
        { $$ = new fptr_tpd_node($1, $2, $3, $4, NULL, NULL, $5, $6); }
    | PROCEDURE formal_params 
        { $$ = new fptr_tpd_node($1, $2, NULL, NULL, NULL, NULL, NULL, NULL); }
 //   | PROCEDURE formal_params optional_semicolon qualifiers 
 //       { $$ = new fptr_tpd_node($1, $2, NULL, NULL, $3, $4, NULL, NULL); }
    | PROCEDURE formal_params OF OBJECT 
        { $$ = new fptr_tpd_node($1, $2, NULL, NULL, NULL, NULL, $3, $4); }

string_type: STRING '[' const_expr ']' { $$ = new varying_tpd_node($1, $2, $3, $4); }

simple_templ_type: IDENT LT const_type GT { $$ = new simple_templ_tpd_node($1, $2, $3, $4); }

simple_type: IDENT { $$ = new simple_tpd_node(NULL, NULL, $1); }
    | IDENT '.' ident_ext { $$ = new simple_tpd_node($1, $2, $3); }  
    | STRING { $$ = new string_tpd_node($1); }
    | IDENT '(' ICONST ')' { $$ = new simple_tpd_node(NULL, NULL, $1); } // !!** experimental 

//array_of_const_type: ARRAY OF CONST 
//        { $$ = new array_tpd_node(NULL, $1, NULL, NULL, NULL, $2, NULL); }

array_type: packed ARRAY '[' indices ']' OF type 
        { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }
    | packed ARRAY OF type 
        { $$ = new array_tpd_node($1, $2, NULL, NULL, NULL, $3, $4); }

const_array_type: packed ARRAY '[' indices ']' OF const_type 
        { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }

// Delphi does not support arrays with bounds in parameters e.g. 'array [0..10] of Integer' - not supported
// Also it does not support 'array of array...' in parameters
// However Delphi does support open arrays in parameters - 'array of Cardinal' works well
conformant_array_type: 
      packed ARRAY OF simple_type 
        { $$ = new array_tpd_node($1, $2, NULL, NULL, NULL, $3, $4); }
    | packed ARRAY OF CONST 
        { $$ = new array_tpd_node($1, $2, NULL, NULL, NULL, $3, NULL); }

 //       packed ARRAY '[' conformant_indices ']' OF simple_type 
 //       { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }
 //   | packed ARRAY '[' conformant_indices ']' OF conformant_array_type 
 //       { $$ = new array_tpd_node($1, $2, $3, $4, $5, $6, $7); }

enum_type: '(' ident_list ')' { $$ = new enum_tpd_node($1, $2, $3); }

range_type: const_expr DOTS const_expr 
        { $$ = new range_tpd_node($1, $2, $3); } 

pointer_type: '^' type { $$ = new ptr_tpd_node($1, $2); }

set_type: packed SET OF type { $$ = new set_tpd_node($1, $2, $3, $4); }

const_set_type: packed SET OF const_type { $$ = new set_tpd_node($1, $2, $3, $4); }





/* Record, Classes, Interface definitions */

// **** NOTE: record can contain variant part declared in field_list nonterminal while class cannot

packed: { $$ = NULL; } | PACKED 

record_type: 
      packed RECORD record_body END deprecatd
        { $$ = new record_tpd_node($1, $2, $3, $4, $5); }
    | packed RECORD END deprecatd
        { $$ = new record_tpd_node($1, $2, NULL, $3, $4); }

record_body: record_field_list record_components 
        { 
          decl_node** cpp;   
          for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = $2;
          $$ = $1; 
        }
    | record_components
    | record_field_list

record_components: record_component
    | record_component record_components
        { 
          decl_node** cpp;   
          for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = $2;
          $$ = $1; 
        }


condition_rec_method: 
      condition_start record_method_decl CELSE record_method_decl CENDIF { $$ = new cond_method_node($1, $2, $3, $4, $5); } 
    | condition_start record_method_decl CENDIF  { $$ = new cond_method_node($1, $2, NULL, NULL, $3); }

record_component: record_access_spec_decl
    | record_access_spec_decl record_field_list
        { $1->next = $2; $$ = $1; }
    | VAR field_list
        { $$ = new record_field_part_node(NULL, $1, $2); }
    | CLASS VAR field_list
        { $$ = new record_field_part_node($1, $2, $3); }
    | record_methods
    | condition_rec_method
    | const_def_part 
    | type_def_part 

record_field_list: field_list
        { $$ = new record_field_part_node(NULL, NULL, $1); }
   

record_methods: record_method_decl
    | record_method_decl record_methods { $1->next = $2; $$ = $1; }

record_method_decl: method_decl 
    | CLASS operator_fwd_decl  
        { $$ = new method_decl_node($1, $2); } 
      

deprecatd: { $$ = NULL; } 
    | DEPRECATED { $$ = new two_tokens($1, NULL); }
    | DEPRECATED SCONST { $$ = new two_tokens($1, $2); }


interface_type: 
 //     INTERFACE guid interface_methods END
 //       { $$ = new interface_tpd_node($1, NULL, NULL, NULL, $2, $3, $4); }  
 //   | INTERFACE guid END
 //       { $$ = new interface_tpd_node($1, NULL, NULL, NULL, $2, NULL, $3); }      
      INTERFACE interface_methods END deprecatd
        { $$ = new interface_tpd_node($1, NULL, NULL, NULL, NULL, $2, $3, $4); }
    | INTERFACE END //deprecatd
        { $$ = new interface_tpd_node($1, NULL, NULL, NULL, NULL, NULL, $2, NULL); }

 //   | INTERFACE '(' IDENT ')' guid interface_components END
 //       { $$ = new interface_tpd_node($1, $2, $3, $4, $5, $6, $7); }
 //   | INTERFACE '(' IDENT ')' guid END
 //       { $$ = new interface_tpd_node($1, $2, $3, $4, $5, NULL, $6); }
    | INTERFACE '(' IDENT ')' interface_methods END deprecatd
        { $$ = new interface_tpd_node($1, $2, $3, $4, NULL, $5, $6, $7); }
    | INTERFACE '(' IDENT ')' END deprecatd
        { $$ = new interface_tpd_node($1, $2, $3, $4, NULL, NULL, $5, $6); }


//guid: '[' SCONST ']' { $$ = new guid_node($1, $2, $3); }

interface_methods: interface_method_decl_c
    | interface_method_decl_c interface_methods { $1->next = $2; $$ = $1; }

condition_interface_method: 
      condition_start interface_method_decl CELSE interface_method_decl CENDIF { $$ = new cond_method_node($1, $2, $3, $4, $5); } 
    | condition_start interface_method_decl CENDIF  { $$ = new cond_method_node($1, $2, NULL, NULL, $3); }

interface_method_decl_c: interface_method_decl
    | condition_interface_method 

interface_method_decl: 
      proc_fwd_decl
        { $$ = new method_decl_node(NULL, $1); }
    | proc_spec
        { $$ = new method_decl_node(NULL, $1); }
    | property_decl

class_or_object: OBJECT | CLASS
 
class_type: 
      class_or_object object_body END deprecatd
        { $$ = new object_tpd_node($1, NULL, NULL, NULL, $2, $3, $4); }  
    | class_or_object '(' ident_list ')' object_body END deprecatd
        { $$ = new object_tpd_node($1, $2, $3, $4, $5, $6, $7); }
    | class_or_object '(' ident_list ')' END deprecatd
        { $$ = new object_tpd_node($1, $2, $3, $4, NULL, $5, $6); }
    | class_or_object '(' ident_list ')'
        { $$ = new object_tpd_node($1, $2, $3, $4, NULL, NULL, NULL); }
    | class_or_object END //deprecatd
        { $$ = new object_tpd_node($1, NULL, NULL, NULL, NULL, $2, NULL); }
    | CLASS OF IDENT 
        { $$ = new metaclass_tpd_node($1, $2, $3); }
	

object_body: object_components
    | field_decl_list object_components
        { 
           // rare case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	   *cpp = $2;
           $$ = $1; 
        }
 /*   | field_decl_list    //<n_vdcl>
        { $$ = new var_decl_part_node(NULL, NULL, $1); }
    */

record_access_spec_tok: PRIVATE | PUBLIC 

class_access_spec_tok: record_access_spec_tok | PROTECTED | PUBLISHED

record_access_spec_decl: record_access_spec_tok { $$ = new access_specifier_node(NULL, $1); }
    | STRICT PRIVATE   { $$ = new access_specifier_node($1, $2); }

class_access_spec_decl: class_access_spec_tok { $$ = new access_specifier_node(NULL, $1); }
    | STRICT PRIVATE   { $$ = new access_specifier_node($1, $2); }
    | STRICT PROTECTED { $$ = new access_specifier_node($1, $2); }

object_components: object_component
    | object_component object_components
        { 
           // special case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &$1->next; *cpp != NULL; cpp = &(*cpp)->next);
	      *cpp = $2;
           $$ = $1; 
        }
  
condition_obj_method: 
      condition_start method_decl CELSE method_decl CENDIF { $$ = new cond_method_node($1, $2, $3, $4, $5); } 
    | condition_start method_decl CENDIF  { $$ = new cond_method_node($1, $2, NULL, NULL, $3); }
       
object_component: class_access_spec_decl 
    | class_access_spec_decl field_decl_list
        { $1->next = $2; $$ = $1; } 
    | field_decl_part
    | object_methods
    | condition_obj_method
    | const_def_part 
    | type_def_part 


// used in object declaration only
field_decl_part:
      VAR field_decl_list
        { $$ = new var_decl_part_node(NULL, $1, $2); }
    | CLASS VAR field_decl_list
        { $$ = new var_decl_part_node($1, $2, $3); }

//used in both object and record declarations
//field_decl_list: var_decl //';' { $$ = $1; }
//    | var_decl ';' field_decl_list { $1->next = $3; $$ = $1; }

field_decl_list: var_decl_list // { $$ = $1; }

object_methods: method_decl_list

method_decl_list: method_decl
    | method_decl method_decl_list { $1->next = $2; $$ = $1; }

method_decl: 
      proc_fwd_decl
        { $$ = new method_decl_node(NULL, $1); }
    | proc_spec
        { $$ = new method_decl_node(NULL, $1); }
    | CLASS proc_fwd_decl
        { $$ = new method_decl_node($1, $2); }
    | CLASS proc_spec
        { $$ = new method_decl_node($1, $2); }
    | property_decl


// used in record declaration only
field_list: fixed_part variant_part  //<n_flds>
        { $$ = new field_list_node($1, $2); }
    | fixed_part 
        { $$ = new field_list_node($1); }
 //   | fixed_part ';'
 //       { $$ = new field_list_node($1); }
    | variant_part
        { $$ = new field_list_node(NULL, $1); }

fixed_part: var_decl_list  // field_decl_list //<n_vdcl>

variant_part: CASE selector OF variant_list 
        { $$ = new variant_part_node($1, $2, $3, $4); }

selector: IDENT ':' type { $$ = new selector_node($1, $2, $3); }
    | type { $$ = new selector_node(NULL, NULL, $1); }

variant_list: variant
    | variant ';' { $$ = $1; }
    | variant ';' variant_list { $1->next = $3; $$ = $1; }

variant: expr_list ':' '(' field_list ')' 
        { $$ = new variant_node($1, $2, $3, $4, $5); }

file_type: packed FIL OF type { $$ = new file_tpd_node($1, $2, $3, $4); }

//conformant_indices: conformant_index
//    | conformant_index ';' conformant_indices { $1->next = $3; $$ = $1; }

//conformant_index: IDENT DOTS IDENT ':' type 
//        { $$ = new conformant_index_node($1, $2, $3, $4, $5); }

indices: index_spec 
    | index_spec ',' indices 
        { $1->next = $3; $$ = $1; }

index_spec: simple_type { $$ = new type_index_node($1); }
    | const_expr DOTS const_expr { $$ = new range_index_node($1, $2, $3); }


%%

int zzlex() { 
    curr_token = curr_token ? curr_token->next_relevant() : token::first_relevant(); 
    
    if (curr_token->tag == TKN_SCONST) { 
        while (curr_token->next != NULL && curr_token->next->tag == TKN_SCONST)
        {
	    curr_token->in_text = curr_token->out_text = dprintf("%s%s", curr_token->in_text, curr_token->next->in_text);
	    curr_token->next->remove();
	}
    } else if (turbo_pascal && curr_token->tag == TKN_FILE && curr_token->next_relevant()->tag != TKN_OF) 
    {
	curr_token->tag = TKN_IDENT;
	curr_token->in_text = curr_token->out_text = "untyped_file";
	curr_token->name = nm_entry::find("untyped_file");
    }

    zzlval.tok = curr_token;
    return zzcnv_table[curr_token->tag];
}


