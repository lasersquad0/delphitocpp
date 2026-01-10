/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zzparse
#define yylex           zzlex
#define yyerror         zzerror
#define yydebug         zzdebug
#define yynerrs         zznerrs
#define yylval          zzlval
#define yychar          zzchar

/* First part of user prologue.  */


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



# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACT = 3,                   /* ABSTRACT  */
  YYSYMBOL_ARRAY = 4,                      /* ARRAY  */
  YYSYMBOL_ASM = 5,                        /* ASM  */
  YYSYMBOL_BEGIN = 6,                      /* BEGIN  */
  YYSYMBOL_CASE = 7,                       /* CASE  */
  YYSYMBOL_CDECL = 8,                      /* CDECL  */
  YYSYMBOL_CELSE = 9,                      /* CELSE  */
  YYSYMBOL_CENDIF = 10,                    /* CENDIF  */
  YYSYMBOL_CIF = 11,                       /* CIF  */
  YYSYMBOL_CIFDEF = 12,                    /* CIFDEF  */
  YYSYMBOL_CIFNDEF = 13,                   /* CIFNDEF  */
  YYSYMBOL_CLASS = 14,                     /* CLASS  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_DEPRECATED = 17,                /* DEPRECATED  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_DOTS = 19,                      /* DOTS  */
  YYSYMBOL_DYNAMIC = 20,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_END = 22,                       /* END  */
  YYSYMBOL_EXCEPT = 23,                    /* EXCEPT  */
  YYSYMBOL_EXTERNAL = 24,                  /* EXTERNAL  */
  YYSYMBOL_FIL = 25,                       /* FIL  */
  YYSYMBOL_FINAL = 26,                     /* FINAL  */
  YYSYMBOL_FINALIZATION = 27,              /* FINALIZATION  */
  YYSYMBOL_FINALLY = 28,                   /* FINALLY  */
  YYSYMBOL_FAR = 29,                       /* FAR  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_FORWARD = 31,                   /* FORWARD  */
  YYSYMBOL_FUNCTION = 32,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 33,                      /* GOTO  */
  YYSYMBOL_IDENT = 34,                     /* IDENT  */
  YYSYMBOL_ICONST = 35,                    /* ICONST  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_IMPLEMENTATION = 37,            /* IMPLEMENTATION  */
  YYSYMBOL_INDEX = 38,                     /* INDEX  */
  YYSYMBOL_INHERITED = 39,                 /* INHERITED  */
  YYSYMBOL_INITIALIZATION = 40,            /* INITIALIZATION  */
  YYSYMBOL_INLINE = 41,                    /* INLINE  */
  YYSYMBOL_INTERFACE = 42,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 43,                     /* LABEL  */
  YYSYMBOL_OBJECT = 44,                    /* OBJECT  */
  YYSYMBOL_OF = 45,                        /* OF  */
  YYSYMBOL_ON = 46,                        /* ON  */
  YYSYMBOL_OPERATOR = 47,                  /* OPERATOR  */
  YYSYMBOL_ORIGIN = 48,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 49,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 50,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 51,                  /* OVERRIDE  */
  YYSYMBOL_OUT = 52,                       /* OUT  */
  YYSYMBOL_PACKED = 53,                    /* PACKED  */
  YYSYMBOL_PASCAL = 54,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 55,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 56,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 57,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 58,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 59,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 60,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 61,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 62,                     /* RAISE  */
  YYSYMBOL_RCONST = 63,                    /* RCONST  */
  YYSYMBOL_READ = 64,                      /* READ  */
  YYSYMBOL_RECORD = 65,                    /* RECORD  */
  YYSYMBOL_REGISTER = 66,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 67,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 68,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 69,            /* RESOURCESTRING  */
  YYSYMBOL_SAFECALL = 70,                  /* SAFECALL  */
  YYSYMBOL_SET = 71,                       /* SET  */
  YYSYMBOL_SCONST = 72,                    /* SCONST  */
  YYSYMBOL_STATIC = 73,                    /* STATIC  */
  YYSYMBOL_STDCALL = 74,                   /* STDCALL  */
  YYSYMBOL_STORED = 75,                    /* STORED  */
  YYSYMBOL_STRICT = 76,                    /* STRICT  */
  YYSYMBOL_STRING = 77,                    /* STRING  */
  YYSYMBOL_THEN = 78,                      /* THEN  */
  YYSYMBOL_TO = 79,                        /* TO  */
  YYSYMBOL_TRY = 80,                       /* TRY  */
  YYSYMBOL_TYPE = 81,                      /* TYPE  */
  YYSYMBOL_UNTIL = 82,                     /* UNTIL  */
  YYSYMBOL_UNIT = 83,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 84,                  /* UNIT_END  */
  YYSYMBOL_UNSAFE = 85,                    /* UNSAFE  */
  YYSYMBOL_VAR = 86,                       /* VAR  */
  YYSYMBOL_VARARGS = 87,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 88,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 89,                     /* WHILE  */
  YYSYMBOL_WINAPI = 90,                    /* WINAPI  */
  YYSYMBOL_WITH = 91,                      /* WITH  */
  YYSYMBOL_WRITE = 92,                     /* WRITE  */
  YYSYMBOL_93_ = 93,                       /* '.'  */
  YYSYMBOL_94_ = 94,                       /* ','  */
  YYSYMBOL_95_ = 95,                       /* ':'  */
  YYSYMBOL_96_ = 96,                       /* ';'  */
  YYSYMBOL_97_ = 97,                       /* '('  */
  YYSYMBOL_98_ = 98,                       /* ')'  */
  YYSYMBOL_99_ = 99,                       /* '['  */
  YYSYMBOL_100_ = 100,                     /* ']'  */
  YYSYMBOL_101_ = 101,                     /* '^'  */
  YYSYMBOL_102_ = 102,                     /* '@'  */
  YYSYMBOL_SCOPE = 103,                    /* SCOPE  */
  YYSYMBOL_LET = 104,                      /* LET  */
  YYSYMBOL_LETADD = 105,                   /* LETADD  */
  YYSYMBOL_LETSUB = 106,                   /* LETSUB  */
  YYSYMBOL_LETDIV = 107,                   /* LETDIV  */
  YYSYMBOL_LETMUL = 108,                   /* LETMUL  */
  YYSYMBOL_LETAND = 109,                   /* LETAND  */
  YYSYMBOL_LETOR = 110,                    /* LETOR  */
  YYSYMBOL_LETSHL = 111,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 112,                   /* LETSHR  */
  YYSYMBOL_EQ = 113,                       /* EQ  */
  YYSYMBOL_NE = 114,                       /* NE  */
  YYSYMBOL_LT = 115,                       /* LT  */
  YYSYMBOL_LE = 116,                       /* LE  */
  YYSYMBOL_GT = 117,                       /* GT  */
  YYSYMBOL_GE = 118,                       /* GE  */
  YYSYMBOL_IN = 119,                       /* IN  */
  YYSYMBOL_IS = 120,                       /* IS  */
  YYSYMBOL_PLUS = 121,                     /* PLUS  */
  YYSYMBOL_MINUS = 122,                    /* MINUS  */
  YYSYMBOL_OR = 123,                       /* OR  */
  YYSYMBOL_XOR = 124,                      /* XOR  */
  YYSYMBOL_BINOR = 125,                    /* BINOR  */
  YYSYMBOL_MOD = 126,                      /* MOD  */
  YYSYMBOL_DIV = 127,                      /* DIV  */
  YYSYMBOL_DIVR = 128,                     /* DIVR  */
  YYSYMBOL_MUL = 129,                      /* MUL  */
  YYSYMBOL_AND = 130,                      /* AND  */
  YYSYMBOL_SHR = 131,                      /* SHR  */
  YYSYMBOL_SHL = 132,                      /* SHL  */
  YYSYMBOL_BINAND = 133,                   /* BINAND  */
  YYSYMBOL_AS = 134,                       /* AS  */
  YYSYMBOL_UPLUS = 135,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 136,                   /* UMINUS  */
  YYSYMBOL_NOT = 137,                      /* NOT  */
  YYSYMBOL_ADDRESS = 138,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 139,                   /* BINNOT  */
  YYSYMBOL_EQUAL = 140,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 141,                 /* NOTEQUAL  */
  YYSYMBOL_LESSTH = 142,                   /* LESSTH  */
  YYSYMBOL_GREATERTH = 143,                /* GREATERTH  */
  YYSYMBOL_ADD = 144,                      /* ADD  */
  YYSYMBOL_SUBSTRACT = 145,                /* SUBSTRACT  */
  YYSYMBOL_MULTIPLY = 146,                 /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 147,                   /* DIVIDE  */
  YYSYMBOL_INTDIVIDE = 148,                /* INTDIVIDE  */
  YYSYMBOL_MODULUS = 149,                  /* MODULUS  */
  YYSYMBOL_IMPLICIT = 150,                 /* IMPLICIT  */
  YYSYMBOL_EXPLICIT = 151,                 /* EXPLICIT  */
  YYSYMBOL_YYACCEPT = 152,                 /* $accept  */
  YYSYMBOL_translation = 153,              /* translation  */
  YYSYMBOL_154_1 = 154,                    /* $@1  */
  YYSYMBOL_input_file = 155,               /* input_file  */
  YYSYMBOL_program = 156,                  /* program  */
  YYSYMBOL_progend = 157,                  /* progend  */
  YYSYMBOL_module = 158,                   /* module  */
  YYSYMBOL_unit = 159,                     /* unit  */
  YYSYMBOL_init_finit = 160,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 161, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 162,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 163,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 164,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 165,                /* ident_ext  */
  YYSYMBOL_ident_list = 166,               /* ident_list  */
  YYSYMBOL_block = 167,                    /* block  */
  YYSYMBOL_decl_part_list = 168,           /* decl_part_list  */
  YYSYMBOL_decl_part = 169,                /* decl_part  */
  YYSYMBOL_unit_spec = 170,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 171,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 172,                /* unit_decl  */
  YYSYMBOL_inherited = 173,                /* inherited  */
  YYSYMBOL_try_finally = 174,              /* try_finally  */
  YYSYMBOL_try_except = 175,               /* try_except  */
  YYSYMBOL_except_many = 176,              /* except_many  */
  YYSYMBOL_except = 177,                   /* except  */
  YYSYMBOL_statement = 178,                /* statement  */
  YYSYMBOL_compoundst = 179,               /* compoundst  */
  YYSYMBOL_assemblerst = 180,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 181,                  /* asm_kwd  */
  YYSYMBOL_asm_line = 182,                 /* asm_line  */
  YYSYMBOL_asm_text = 183,                 /* asm_text  */
  YYSYMBOL_sequence = 184,                 /* sequence  */
  YYSYMBOL_case_list = 185,                /* case_list  */
  YYSYMBOL_otherwise = 186,                /* otherwise  */
  YYSYMBOL_case_items = 187,               /* case_items  */
  YYSYMBOL_case_item = 188,                /* case_item  */
  YYSYMBOL_case_elem_list = 189,           /* case_elem_list  */
  YYSYMBOL_case_elem = 190,                /* case_elem  */
  YYSYMBOL_condition_start = 191,          /* condition_start  */
  YYSYMBOL_condition_const_expr = 192,     /* condition_const_expr  */
  YYSYMBOL_const_expr = 193,               /* const_expr  */
  YYSYMBOL_const_simple_expr = 194,        /* const_simple_expr  */
  YYSYMBOL_const_expr_list = 195,          /* const_expr_list  */
  YYSYMBOL_const_act_param_list = 196,     /* const_act_param_list  */
  YYSYMBOL_const_act_param = 197,          /* const_act_param  */
  YYSYMBOL_condition_expr = 198,           /* condition_expr  */
  YYSYMBOL_expr = 199,                     /* expr  */
  YYSYMBOL_simple_expr = 200,              /* simple_expr  */
  YYSYMBOL_primary = 201,                  /* primary  */
  YYSYMBOL_constant = 202,                 /* constant  */
  YYSYMBOL_set_elem_list = 203,            /* set_elem_list  */
  YYSYMBOL_set_elem = 204,                 /* set_elem  */
  YYSYMBOL_expr_list = 205,                /* expr_list  */
  YYSYMBOL_act_param_list = 206,           /* act_param_list  */
  YYSYMBOL_act_param = 207,                /* act_param  */
  YYSYMBOL_record_constant = 208,          /* record_constant  */
  YYSYMBOL_field_init_list = 209,          /* field_init_list  */
  YYSYMBOL_field_init_item = 210,          /* field_init_item  */
  YYSYMBOL_label_decl_part = 211,          /* label_decl_part  */
  YYSYMBOL_label_list = 212,               /* label_list  */
  YYSYMBOL_const = 213,                    /* const  */
  YYSYMBOL_const_def_part = 214,           /* const_def_part  */
  YYSYMBOL_const_def_list = 215,           /* const_def_list  */
  YYSYMBOL_const_def = 216,                /* const_def  */
  YYSYMBOL_type_def_part = 217,            /* type_def_part  */
  YYSYMBOL_type_def_list = 218,            /* type_def_list  */
  YYSYMBOL_type_def = 219,                 /* type_def  */
  YYSYMBOL_var_decl_part = 220,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 221,            /* var_decl_list  */
  YYSYMBOL_attr_content = 222,             /* attr_content  */
  YYSYMBOL_attr_decl = 223,                /* attr_decl  */
  YYSYMBOL_var_decl_c = 224,               /* var_decl_c  */
  YYSYMBOL_var_decl_semi = 225,            /* var_decl_semi  */
  YYSYMBOL_var_decl = 226,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 227,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 228,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 229,        /* operator_fwd_decl  */
  YYSYMBOL_proc_def = 230,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 231,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 232,           /* meth_qualifier  */
  YYSYMBOL_optional_semicolon = 233,       /* optional_semicolon  */
  YYSYMBOL_qualifier = 234,                /* qualifier  */
  YYSYMBOL_qualifiers = 235,               /* qualifiers  */
  YYSYMBOL_property_decl = 236,            /* property_decl  */
  YYSYMBOL_prop_array = 237,               /* prop_array  */
  YYSYMBOL_prop_index = 238,               /* prop_index  */
  YYSYMBOL_prop_type_def = 239,            /* prop_type_def  */
  YYSYMBOL_prop_read = 240,                /* prop_read  */
  YYSYMBOL_prop_write = 241,               /* prop_write  */
  YYSYMBOL_prop_stored = 242,              /* prop_stored  */
  YYSYMBOL_prop_default = 243,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 244,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 245,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 246,          /* prop_param_decl  */
  YYSYMBOL_formal_params = 247,            /* formal_params  */
  YYSYMBOL_formal_param_list = 248,        /* formal_param_list  */
  YYSYMBOL_formal_param = 249,             /* formal_param  */
  YYSYMBOL_param_decl = 250,               /* param_decl  */
  YYSYMBOL_param_type = 251,               /* param_type  */
  YYSYMBOL_type = 252,                     /* type  */
  YYSYMBOL_const_type = 253,               /* const_type  */
  YYSYMBOL_fptr_type = 254,                /* fptr_type  */
  YYSYMBOL_string_type = 255,              /* string_type  */
  YYSYMBOL_simple_templ_type = 256,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 257,              /* simple_type  */
  YYSYMBOL_array_type = 258,               /* array_type  */
  YYSYMBOL_const_array_type = 259,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 260,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 261,                /* enum_type  */
  YYSYMBOL_range_type = 262,               /* range_type  */
  YYSYMBOL_pointer_type = 263,             /* pointer_type  */
  YYSYMBOL_set_type = 264,                 /* set_type  */
  YYSYMBOL_const_set_type = 265,           /* const_set_type  */
  YYSYMBOL_packed = 266,                   /* packed  */
  YYSYMBOL_record_type = 267,              /* record_type  */
  YYSYMBOL_record_body = 268,              /* record_body  */
  YYSYMBOL_record_components = 269,        /* record_components  */
  YYSYMBOL_condition_rec_method = 270,     /* condition_rec_method  */
  YYSYMBOL_record_component = 271,         /* record_component  */
  YYSYMBOL_record_field_list = 272,        /* record_field_list  */
  YYSYMBOL_record_methods = 273,           /* record_methods  */
  YYSYMBOL_record_method_decl = 274,       /* record_method_decl  */
  YYSYMBOL_deprecatd = 275,                /* deprecatd  */
  YYSYMBOL_interface_type = 276,           /* interface_type  */
  YYSYMBOL_interface_methods = 277,        /* interface_methods  */
  YYSYMBOL_condition_interface_method = 278, /* condition_interface_method  */
  YYSYMBOL_interface_method_decl_c = 279,  /* interface_method_decl_c  */
  YYSYMBOL_interface_method_decl = 280,    /* interface_method_decl  */
  YYSYMBOL_class_or_object = 281,          /* class_or_object  */
  YYSYMBOL_class_type = 282,               /* class_type  */
  YYSYMBOL_object_body = 283,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 284,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 285,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 286,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 287,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 288,        /* object_components  */
  YYSYMBOL_condition_obj_method = 289,     /* condition_obj_method  */
  YYSYMBOL_object_component = 290,         /* object_component  */
  YYSYMBOL_field_decl_part = 291,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 292,          /* field_decl_list  */
  YYSYMBOL_object_methods = 293,           /* object_methods  */
  YYSYMBOL_method_decl_list = 294,         /* method_decl_list  */
  YYSYMBOL_method_decl = 295,              /* method_decl  */
  YYSYMBOL_field_list = 296,               /* field_list  */
  YYSYMBOL_fixed_part = 297,               /* fixed_part  */
  YYSYMBOL_variant_part = 298,             /* variant_part  */
  YYSYMBOL_selector = 299,                 /* selector  */
  YYSYMBOL_variant_list = 300,             /* variant_list  */
  YYSYMBOL_variant = 301,                  /* variant  */
  YYSYMBOL_file_type = 302,                /* file_type  */
  YYSYMBOL_indices = 303,                  /* indices  */
  YYSYMBOL_index_spec = 304                /* index_spec  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3012

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  152
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  490
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  986

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   396


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      97,    98,     2,     2,    94,     2,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    96,
       2,     2,     2,     2,   102,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    99,     2,   100,   101,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   424,   424,   424,   449,   449,   449,   451,   452,   455,
     455,   457,   458,   464,   466,   468,   470,   472,   476,   478,
     480,   482,   484,   486,   489,   490,   492,   492,   494,   496,
     497,   501,   501,   501,   501,   503,   504,   506,   508,   511,
     512,   514,   514,   514,   514,   515,   515,   515,   517,   519,
     523,   524,   526,   526,   526,   526,   527,   527,   527,   557,
     559,   561,   565,   568,   570,   573,   574,   576,   577,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   596,   598,   599,   602,   603,   605,
     606,   607,   608,   609,   610,   612,   614,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   619,
     621,   622,   625,   625,   632,   633,   645,   645,   647,   648,
     649,   651,   653,   654,   656,   657,   681,   681,   681,   684,
     685,   687,   688,   689,   690,   691,   692,   693,   694,   696,
     697,   698,   699,   700,   701,   702,   704,   705,   706,   707,
     709,   710,   711,   712,   713,   714,   715,   717,   718,   720,
     722,   724,   727,   727,   729,   730,   732,   732,   735,   736,
     738,   739,   740,   741,   742,   743,   744,   745,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   757,   758,   759,
     760,   761,   762,   763,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   775,   776,   778,   780,   782,   784,   785,
     787,   788,   789,   790,   791,   792,   793,   796,   797,   798,
     799,   800,   801,   802,   806,   807,   808,   810,   811,   813,
     813,   815,   816,   818,   818,   821,   823,   824,   826,   877,
     880,   881,   882,   883,   885,   885,   887,   889,   890,   893,
     895,   898,   901,   902,   905,   906,   907,   908,   910,   913,
     914,   917,   918,   919,   920,   923,   925,   926,   927,   929,
     932,   933,   935,   936,   954,   956,   958,   960,   964,   966,
     968,   970,   975,   977,   981,   983,   985,   987,   989,   991,
     993,   995,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,
    1008,  1008,  1008,  1008,  1010,  1010,  1010,  1010,  1010,  1010,
    1010,  1012,  1012,  1014,  1015,  1016,  1018,  1019,  1024,  1026,
    1028,  1030,  1037,  1038,  1040,  1041,  1043,  1045,  1046,  1048,
    1049,  1051,  1052,  1054,  1055,  1057,  1058,  1061,  1062,  1064,
    1067,  1068,  1069,  1071,  1072,  1074,  1075,  1076,  1077,  1080,
    1081,  1082,  1084,  1084,  1090,  1090,  1090,  1090,  1090,  1090,
    1090,  1091,  1091,  1091,  1091,  1091,  1091,  1093,  1093,  1093,
    1093,  1093,  1093,  1096,  1100,  1102,  1106,  1109,  1111,  1113,
    1114,  1115,  1116,  1121,  1123,  1126,  1133,  1135,  1143,  1145,
    1148,  1150,  1152,  1162,  1162,  1165,  1167,  1170,  1177,  1178,
    1180,  1181,  1191,  1192,  1194,  1195,  1197,  1199,  1201,  1202,
    1203,  1204,  1206,  1210,  1211,  1213,  1214,  1218,  1219,  1220,
    1228,  1230,  1237,  1239,  1245,  1246,  1249,  1250,  1252,  1253,
    1256,  1258,  1260,  1262,  1262,  1265,  1267,  1269,  1271,  1273,
    1275,  1279,  1280,  1293,  1293,  1295,  1295,  1295,  1297,  1298,
    1300,  1301,  1302,  1304,  1305,  1316,  1317,  1319,  1320,  1322,
    1323,  1324,  1325,  1326,  1331,  1333,  1340,  1342,  1344,  1345,
    1348,  1350,  1352,  1354,  1356,  1360,  1362,  1366,  1369,  1371,
    1374,  1375,  1377,  1378,  1379,  1381,  1384,  1392,  1393,  1396,
    1397
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACT", "ARRAY",
  "ASM", "BEGIN", "CASE", "CDECL", "CELSE", "CENDIF", "CIF", "CIFDEF",
  "CIFNDEF", "CLASS", "CONST", "DEFAULT", "DEPRECATED", "DO", "DOTS",
  "DYNAMIC", "ELSE", "END", "EXCEPT", "EXTERNAL", "FIL", "FINAL",
  "FINALIZATION", "FINALLY", "FAR", "FOR", "FORWARD", "FUNCTION", "GOTO",
  "IDENT", "ICONST", "IF", "IMPLEMENTATION", "INDEX", "INHERITED",
  "INITIALIZATION", "INLINE", "INTERFACE", "LABEL", "OBJECT", "OF", "ON",
  "OPERATOR", "ORIGIN", "OTHERWISE", "OVERLOAD", "OVERRIDE", "OUT",
  "PACKED", "PASCAL", "PROCEDURE", "PROGRAM", "PROPERTY", "PRIVATE",
  "PROTECTED", "PUBLIC", "PUBLISHED", "RAISE", "RCONST", "READ", "RECORD",
  "REGISTER", "REINTRODUCE", "REPEAT", "RESOURCESTRING", "SAFECALL", "SET",
  "SCONST", "STATIC", "STDCALL", "STORED", "STRICT", "STRING", "THEN",
  "TO", "TRY", "TYPE", "UNTIL", "UNIT", "UNIT_END", "UNSAFE", "VAR",
  "VARARGS", "VIRTUAL", "WHILE", "WINAPI", "WITH", "WRITE", "'.'", "','",
  "':'", "';'", "'('", "')'", "'['", "']'", "'^'", "'@'", "SCOPE", "LET",
  "LETADD", "LETSUB", "LETDIV", "LETMUL", "LETAND", "LETOR", "LETSHL",
  "LETSHR", "EQ", "NE", "LT", "LE", "GT", "GE", "IN", "IS", "PLUS",
  "MINUS", "OR", "XOR", "BINOR", "MOD", "DIV", "DIVR", "MUL", "AND", "SHR",
  "SHL", "BINAND", "AS", "UPLUS", "UMINUS", "NOT", "ADDRESS", "BINNOT",
  "EQUAL", "NOTEQUAL", "LESSTH", "GREATERTH", "ADD", "SUBSTRACT",
  "MULTIPLY", "DIVIDE", "INTDIVIDE", "MODULUS", "IMPLICIT", "EXPLICIT",
  "$accept", "translation", "$@1", "input_file", "program", "progend",
  "module", "unit", "init_finit", "var_const_decl_part_list",
  "var_const_decl_part", "unit_def_list", "prog_param_list", "ident_ext",
  "ident_list", "block", "decl_part_list", "decl_part", "unit_spec",
  "unit_decl_list", "unit_decl", "inherited", "try_finally", "try_except",
  "except_many", "except", "statement", "compoundst", "assemblerst",
  "asm_kwd", "asm_line", "asm_text", "sequence", "case_list", "otherwise",
  "case_items", "case_item", "case_elem_list", "case_elem",
  "condition_start", "condition_const_expr", "const_expr",
  "const_simple_expr", "const_expr_list", "const_act_param_list",
  "const_act_param", "condition_expr", "expr", "simple_expr", "primary",
  "constant", "set_elem_list", "set_elem", "expr_list", "act_param_list",
  "act_param", "record_constant", "field_init_list", "field_init_item",
  "label_decl_part", "label_list", "const", "const_def_part",
  "const_def_list", "const_def", "type_def_part", "type_def_list",
  "type_def", "var_decl_part", "var_decl_list", "attr_content",
  "attr_decl", "var_decl_c", "var_decl_semi", "var_decl", "proc_fwd_decl",
  "proc_spec", "operator_fwd_decl", "proc_def", "fun_qualifier",
  "meth_qualifier", "optional_semicolon", "qualifier", "qualifiers",
  "property_decl", "prop_array", "prop_index", "prop_type_def",
  "prop_read", "prop_write", "prop_stored", "prop_default",
  "prop_default_directive", "prop_param_list", "prop_param_decl",
  "formal_params", "formal_param_list", "formal_param", "param_decl",
  "param_type", "type", "const_type", "fptr_type", "string_type",
  "simple_templ_type", "simple_type", "array_type", "const_array_type",
  "conformant_array_type", "enum_type", "range_type", "pointer_type",
  "set_type", "const_set_type", "packed", "record_type", "record_body",
  "record_components", "condition_rec_method", "record_component",
  "record_field_list", "record_methods", "record_method_decl", "deprecatd",
  "interface_type", "interface_methods", "condition_interface_method",
  "interface_method_decl_c", "interface_method_decl", "class_or_object",
  "class_type", "object_body", "record_access_spec_tok",
  "class_access_spec_tok", "record_access_spec_decl",
  "class_access_spec_decl", "object_components", "condition_obj_method",
  "object_component", "field_decl_part", "field_decl_list",
  "object_methods", "method_decl_list", "method_decl", "field_list",
  "fixed_part", "variant_part", "selector", "variant_list", "variant",
  "file_type", "indices", "index_spec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-798)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-380)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -798,   100,   658,  -798,   899,   210,  -798,    46,  1499,   329,
     135,    78,  -798,    90,    98,   288,   209,  -798,  -798,  -798,
    -798,   -10,   187,  1344,  -798,  -798,  -798,   191,  -798,  -798,
    -798,   220,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,   899,   182,   186,
     199,   248,   153,  -798,  -798,  -798,   192,   191,  1499,   191,
     263,  -798,    39,  1499,  -798,  -798,  -798,  -798,   229,  -798,
    -798,   225,   249,   218,   258,   192,   274,    71,  -798,   290,
     299,   325,  -798,  -798,  -798,  -798,   339,   344,   682,  -798,
     191,   288,  -798,   348,   350,  -798,  -798,   353,  -798,  2327,
    -798,  -798,   -18,  -798,   360,   191,   191,  -798,  -798,   365,
     300,   369,   191,   540,   377,   192,   380,   192,   382,  1344,
    -798,  -798,   191,   191,   329,   329,  -798,   191,   435,   191,
     439,  1272,    51,    90,  1462,   448,   191,  1462,   460,   450,
    -798,  -798,   589,  -798,   589,   191,   441,   453,   463,   589,
    -798,   529,   589,  -798,  2327,  -798,  2327,   589,   589,  1694,
    1806,  -798,  -798,  -798,   469,  -798,   550,  1788,  -798,  -798,
      51,  1806,   191,   192,   192,   191,   539,   481,   191,   192,
     191,   191,   191,  -798,   484,   486,   489,  -798,  1462,   487,
     490,   546,    91,  -798,   192,   192,  -798,  -798,   192,   385,
    2672,   491,   905,    45,   192,  2050,  -798,   839,  -798,  -798,
     192,   494,  1462,  1283,  1462,   769,   769,   769,   769,   769,
    1806,  -798,  1957,   493,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,    74,  -798,  -798,  2446,  -798,
    -798,   321,   477,  -798,  -798,  -798,  -798,  -798,    88,  -798,
    -798,   558,  -798,  1499,  -798,    23,   682,  -798,  1462,  -798,
     946,  2216,  2216,   946,  2216,  2216,   589,  -798,  2857,  -798,
    1813,   507,   517,  2449,   509,  -798,  -798,  2327,  2327,  2695,
     518,  2857,   534,    83,  1912,  2759,   601,   530,   533,   535,
     538,  1814,  2073,   537,   541,  2327,  -798,   191,   589,   589,
    -798,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     526,  1890,  -798,   547,   545,   192,   192,  1462,   192,   549,
    -798,  -798,  -798,   226,  -798,   972,   551,  1462,  2717,  1499,
     552,   557,   561,   563,   564,   568,   187,  -798,  -798,   595,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
     578,  -798,   582,    27,   642,   585,   191,   649,   620,  -798,
     651,   653,   108,    61,  -798,  -798,  -798,   671,  -798,   394,
    -798,   650,  1806,  -798,   294,   222,   596,  2800,   598,  -798,
     664,  -798,  -798,  -798,  -798,  -798,  1841,  1806,  1806,  1806,
    1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,
    1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,
      62,   663,  2370,   670,   400,  -798,  -798,  -798,  -798,  -798,
     424,   288,   191,   698,  -798,  -798,  -798,   381,  -798,  -798,
    -798,   687,  -798,  -798,   288,  -798,  -798,  2609,  -798,  2609,
    -798,  -798,   123,  -798,   618,   676,    72,   652,  1806,  -798,
     715,    34,   366,  -798,   366,  -798,   366,  -798,  -798,  1501,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,  -798,   589,  1806,   589,  -798,  -798,  2327,   589,   589,
     683,  2327,  2327,   589,  2327,  1806,  -798,  -798,   664,  1806,
    -798,  1806,  -798,  -798,   633,   634,  2857,  2857,  2857,  2857,
    2857,  2857,  2857,  2857,  2857,  1806,  -798,  1462,  -798,  2672,
     640,   643,   641,   644,  1462,  -798,   629,  -798,  -798,   741,
    -798,   385,  2672,   662,   675,  -798,  -798,  1462,  2717,   905,
    -798,  -798,  2717,  2672,  -798,  -798,  -798,  -798,  1462,  -798,
     656,   713,   669,   673,   479,   712,   738,   759,  -798,   734,
    2835,  -798,  1806,  -798,   530,  1806,  -798,  2878,  1972,  1972,
    1972,  1972,  1972,  1972,  1972,   993,   993,   993,   993,   993,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  2878,
     684,   689,  1462,  1737,  1462,  1683,   212,   759,   727,   164,
    1017,  -798,  -798,  -798,   765,  -798,  -798,  1687,  1687,  -798,
     207,  -798,   164,  -798,  -798,   788,  -798,  1462,   288,  -798,
    -798,  -798,  -798,  -798,   700,   260,   485,   759,  -798,   123,
    -798,  -798,  -798,  1737,    51,  1344,  -798,  -798,  1890,  -798,
    1806,  -798,   589,  -798,  1993,  1993,  1993,  1993,  1993,  1993,
    1993,  1993,  1234,  1234,  1234,  1234,  1234,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  2857,  2857,  2857,  2857,
    2857,  2857,  2857,  2857,  2857,  -798,   774,   160,   706,   711,
     714,  2094,  2718,   790,   716,  2857,   779,   476,   719,   801,
    -798,  -798,  -798,  2878,  -798,  2878,  -798,  -798,  -798,  1890,
     545,   728,  1462,  1462,   905,   905,   729,  1806,   781,   732,
     733,  2717,   735,   737,  -798,   785,  -798,   669,   191,   739,
     555,   108,  -798,   805,   669,  -798,  -798,  -798,  -798,  1869,
    -798,  1806,  -798,   281,  2115,  -798,   740,   752,  -798,    49,
    -798,   802,   814,   164,  -798,  -798,  -798,  -798,   255,   542,
     759,   207,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  2573,
     123,  -798,  -798,   749,  -798,   318,  -798,  1890,  1338,  -798,
    -798,  -798,  2327,  1806,  2327,  1806,  1806,   589,  2327,  -798,
     760,  2327,  -798,   683,  -798,  -798,  2672,  2717,   758,   762,
     763,   768,   905,  2878,    54,  -798,  2717,  2717,  -798,   821,
     739,   775,   777,   773,  1462,   837,   759,   857,   870,   669,
     739,  -798,  -798,  1806,   836,  1737,  1462,   589,   192,  -798,
     207,  -798,  -798,   759,   861,   874,   841,   794,  2259,   885,
     799,  -798,  -798,  -798,  -798,  -798,  -798,  2878,  1934,  -798,
     134,   887,  -798,   816,   905,   905,  -798,  -798,   817,  -798,
    -798,  -798,   837,   226,  -798,   191,  -798,  1114,   850,  -798,
     759,  -798,   739,   837,  2878,  1462,  -798,  -798,   820,  -798,
     822,   826,   906,  -798,   759,  -798,    51,  -798,  2327,    22,
     895,  -798,  -798,   830,  -798,  2327,   909,  -798,  2717,   833,
     835,  -798,   850,  -798,  -798,  -798,   901,   852,  -798,   837,
     850,  -798,   845,   589,  1462,  -798,  -798,  -798,   922,  -798,
    2259,  -798,  -798,  2327,  -798,  -798,   852,  -798,   916,   876,
     850,   852,   164,  -798,   856,  2259,  2327,  -798,  -798,   876,
    -798,   920,   939,   852,   876,   858,  1180,  2672,  2327,  -798,
    -798,   939,  -798,  1114,   862,   876,   939,  -798,   863,  -798,
     865,  -798,   941,   939,   866,  2461,   941,   867,  -798,   868,
     941,  -798,  -798,   941,  -798,  -798
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    39,     1,     0,     0,   244,     0,    50,     0,
       0,     0,   245,   252,     0,     0,     0,     3,     4,     5,
       6,     0,    11,    39,    47,    38,    41,     0,    42,    43,
      44,     0,    46,    45,    97,    99,   106,   101,   104,   105,
     102,   103,   100,   107,   108,    98,   109,   110,     0,     0,
       0,     0,    31,    32,    33,    34,   340,     0,    50,     0,
       0,    58,     0,    50,    52,    53,    54,    55,     0,    57,
      56,   242,   240,     0,    31,   340,    29,     0,   251,     0,
       0,     0,   127,   126,   128,    31,    36,     0,     0,   258,
       0,   259,   266,     0,   263,   261,   262,     0,     7,    69,
      37,    40,     0,   246,     0,     0,     0,   111,    96,     0,
     340,     0,     0,     0,     0,   340,     0,   340,     0,    39,
      49,    51,     0,     0,     0,     0,   239,     0,   311,     0,
       0,   393,   393,   252,   393,     0,     0,   393,     0,     0,
     260,   269,   234,   265,     0,     0,     0,   222,   218,     0,
     223,    59,     0,   219,    69,   220,    69,     0,     0,     0,
     224,   216,    93,    94,   112,    92,     0,    88,   210,   217,
     393,     0,   247,   340,   340,     0,     0,     0,     0,   340,
       0,     0,     0,   341,   351,     0,   343,   348,   393,     0,
     311,     0,     0,    28,   340,   340,   243,   241,   340,   312,
       0,     0,    39,   434,   340,   379,   218,     0,   433,   394,
     340,   381,   393,     0,   393,     0,     0,     0,     0,     0,
       0,   132,     0,   131,   157,   254,   365,   364,   366,   354,
     355,   362,   363,   361,   359,     0,   356,   358,     0,   357,
     360,   379,     0,   371,   367,   368,   372,   370,     0,   369,
     253,   434,   257,    50,    35,   417,     0,   268,   393,   222,
       0,     0,     0,     0,     0,     0,     0,   171,   233,   170,
     203,     0,   231,     0,     0,    80,    79,    69,    69,     0,
      60,    87,     0,     0,     0,   229,     0,   222,     0,     0,
     236,     0,   227,     0,   225,    69,    95,     0,   234,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   248,     0,   311,   340,   340,   393,   340,     0,
     346,   347,   345,   393,   342,     0,   311,   393,   278,    50,
       0,     0,     0,   311,     0,     0,     0,   305,   296,     0,
     307,   301,   310,   292,   302,   293,   309,   295,   294,   304,
     298,   308,   297,   303,   300,   306,   299,   313,   314,   316,
     311,    30,     0,     9,     0,     0,     0,     0,     0,   421,
       0,     0,     0,     0,   430,   431,   432,     0,   429,   424,
     428,   375,     0,   255,   222,   223,     0,   162,     0,   390,
       0,   156,   158,   159,   160,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,   439,   443,   446,   444,   447,
       0,     0,     0,     0,   462,   463,   466,     0,   470,   471,
     474,     0,   445,   450,   457,   441,   461,   453,   459,     0,
     460,   467,   468,   378,     0,     0,     0,   418,     0,   270,
       0,   417,   208,   204,   203,   205,   209,   206,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   264,   234,   118,     0,    91,    90,    69,   234,     0,
      67,    69,    69,     0,    69,     0,   211,   235,     0,     0,
     221,   224,   113,   213,     0,     0,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,   249,   393,   312,     0,
       0,     0,     0,     0,   393,   381,   349,   352,   353,     0,
     344,   312,     0,   311,     0,    15,    16,   393,   280,    39,
     284,   315,   274,     0,     8,    10,    12,   440,   393,   380,
       0,     0,   322,     0,     0,     0,     0,   417,   425,     0,
       0,   388,     0,   154,     0,     0,   130,   389,   150,   147,
     148,   146,   149,   151,   152,   133,   134,   143,   145,   144,
     135,   137,   138,   136,   139,   142,   141,   140,   153,   166,
       0,   164,   393,     0,   393,   393,     0,   417,     0,     0,
       0,   410,   411,   478,     0,   398,   409,   400,   399,   408,
     413,   448,   404,   415,   412,   476,   477,   393,     0,   472,
     473,   451,   452,   464,     0,     0,     0,   417,   458,     0,
     454,   442,   469,     0,   393,    39,    48,   419,   417,   267,
       0,   272,     0,   169,   198,   199,   195,   196,   194,   197,
     200,   201,   172,   173,   191,   193,   192,   174,   176,   177,
     175,   187,   190,   189,   188,   202,   178,   179,   180,   181,
     182,   185,   186,   183,   184,   232,     0,   114,   119,     0,
     122,   124,     0,    82,     0,    86,     0,     0,    65,     0,
      85,   230,    89,   238,   237,   228,   226,   212,   215,   417,
     311,   311,   393,   393,    39,    39,     0,     0,     0,     0,
     311,   279,   311,     0,   317,   373,   382,   322,     0,     0,
       0,     0,   427,     0,   322,   420,   376,   377,   163,     0,
     155,   167,   384,   222,     0,   489,     0,   487,   486,   222,
     481,     0,     0,     0,   416,   396,   449,   406,     0,     0,
     417,     0,   401,   397,   414,   405,   475,   391,   465,   438,
       0,   456,   435,     0,   392,     0,   271,   417,     0,    81,
     117,   116,    69,   118,    69,     0,     0,     0,    69,    61,
       0,    69,    63,    67,    62,   250,     0,   276,     0,     0,
       0,     0,    39,   350,     0,   285,   275,   281,   286,     0,
       0,     0,     0,   337,   393,   324,   417,     0,     0,   322,
       0,   129,   165,     0,     0,     0,   393,     0,   340,   407,
       0,   403,   395,   417,     0,     0,     0,     0,    69,     0,
       0,   273,   168,   115,   120,   121,   123,   125,     0,    83,
       0,     0,    66,   311,    39,    39,   290,   288,     0,   387,
     386,   374,   324,   393,   323,     0,   326,     0,   327,   423,
     417,   426,     0,   324,   490,   393,   488,   480,     0,   479,
     482,     0,     0,   437,   417,   455,   393,    13,    69,    24,
      19,    26,    27,     0,    14,    69,     0,    64,   277,     0,
       0,   287,   327,   339,   338,   325,     0,   329,   422,   324,
     327,   383,     0,   483,   393,   402,   436,   385,    18,    25,
      69,    17,    84,    69,   289,   291,   329,   328,     0,   331,
     327,   329,     0,   484,   311,    69,    69,    23,    68,   331,
     330,     0,   333,   329,   331,     0,   312,     0,    69,    22,
      21,   333,   332,     0,     0,   331,   333,   485,   311,    20,
       0,   334,   335,   333,     0,   312,   335,     0,   318,     0,
     335,   319,   336,   335,   320,   321
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -797,
    -798,   310,  -798,  1006,   -55,  -183,    15,  -798,    40,    -8,
    -798,  -798,  -798,  -798,   163,  -798,  -234,    20,  -798,  -798,
    -798,   924,  -146,  -798,  -798,   176,  -798,   178,  -798,    30,
    -798,   757,   488,   393,   228,  -798,  -798,  1184,    43,    84,
     685,   457,  -798,  -129,  -284,  -798,  -798,   465,  -798,    56,
     437,  -798,    -6,   818,  -798,    38,   859,  -798,    -4,   -12,
    -798,    -2,  -798,   -61,  -798,    24,   227,  -798,  -798,  -798,
    -798,  -123,   440,  -511,  -187,  -672,  -678,  -715,  -654,  -623,
    -599,  -765,  -582,   125,  -798,   -44,   680,  -798,   243,   138,
     223,  -163,  -798,  -121,    57,  -117,  -798,  -798,  -798,  -798,
    -798,  -108,  -798,  -798,  -110,  -107,  -798,   -57,  -798,  -798,
     375,   378,  -552,    31,  -798,  -367,  -798,  -798,  -371,  -798,
    -798,   236,  -413,  -798,  -798,  -798,   -45,  -798,  -798,  -798,
    -408,  -798,   567,  -199,  -601,  -798,   387,  -798,   102,  -798,
    -798,  -619,  -798
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    17,    18,   566,    19,    20,   849,   898,
     899,   192,   130,    86,    87,    21,   336,    23,    24,    62,
      63,   161,   162,   163,   707,   708,   164,   165,    25,    46,
      47,    48,   166,   696,   792,   697,   698,   699,   700,   220,
     221,   222,   223,   388,   610,   611,   267,   285,   269,   270,
     168,   293,   294,   888,   271,   272,   169,   289,   290,    26,
      73,    27,    28,   103,   104,    29,    78,    79,    30,   436,
      97,   373,    91,    92,    93,   438,   439,   764,    33,   357,
     358,   563,   359,   360,   440,   739,   878,   825,   917,   939,
     952,   964,   978,   822,   823,   114,   185,   186,   187,   546,
     225,   242,   226,   227,   228,   229,   230,   245,   548,   231,
     232,   233,   234,   247,   235,   236,   624,   625,   626,   627,
     628,   629,   630,   459,   237,   377,   378,   379,   380,   238,
     239,   441,   442,   443,   632,   444,   445,   446,   447,   448,
     449,   450,   451,   633,   634,   635,   636,   761,   889,   890,
     240,   756,   757
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   574,    65,    89,    67,   200,    68,   310,   282,   631,
     283,   243,   578,    90,   524,   244,   335,    22,   767,   362,
     376,    31,   248,   643,   246,   249,    32,   138,   721,   286,
     288,   128,    69,    99,   783,   139,   648,     6,   101,   452,
     457,   730,   100,   505,   506,    88,    66,    32,    61,   243,
     116,   457,    65,   244,    67,   121,    68,    65,   184,    67,
     248,    68,   246,   249,    64,   820,   177,   200,   769,   869,
      80,   189,   830,   190,   201,   575,   119,   170,   420,   140,
      52,   254,    69,    98,    53,   241,    90,    69,   241,    90,
     364,    12,   454,   122,  -379,   171,    66,    99,    61,   421,
       3,    66,   929,    61,   209,   872,   510,   612,    15,   655,
      54,   511,    76,   330,    64,   883,   123,    31,   576,    64,
     565,    88,   368,   120,    77,   184,   184,   184,   211,   313,
     314,   545,    81,   946,   193,   319,   458,   645,    55,   422,
      57,  -256,   366,    32,   836,   423,   367,   660,   958,   522,
     332,   333,   214,   422,   334,    57,   656,   882,   386,   455,
     365,   613,   839,    59,   132,   370,   381,   919,   241,    74,
     525,   615,   266,    53,   266,    82,    83,    84,    59,   266,
     370,   790,   266,   167,   131,   376,   132,   266,   266,   266,
      80,   539,   376,    99,   912,   460,   970,    31,    85,    54,
      31,   974,    53,   552,   108,   920,   547,    16,   979,   791,
     539,   545,   331,   549,   631,   631,   886,   363,   695,   769,
     109,   768,    16,    32,   704,    85,    32,    55,    54,    53,
     778,   374,   434,   110,   646,    70,   437,   372,   167,    57,
     167,   940,    49,    94,    57,   456,   112,    65,   452,    67,
     452,    68,   105,   452,    90,    54,    55,    50,   936,   762,
     241,   122,    59,    16,   370,    51,   941,    59,   433,   571,
     184,   540,   541,   703,   543,   106,   435,    69,   710,   209,
     712,    95,   111,    55,   123,    70,   953,    57,   892,   113,
      70,    66,    57,    61,    96,   863,   266,   118,   763,    82,
      83,    84,   762,   545,   463,   465,    16,   467,   468,    64,
      59,    16,   571,   949,   126,    59,   -32,   571,   954,   124,
     -32,   554,    85,    65,    99,    67,    53,    68,   266,   266,
     965,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     847,   955,   536,   125,   462,   464,   464,   466,   464,   464,
     961,   127,    54,    69,    16,   966,   100,   252,   848,    16,
     255,   167,   167,    71,    72,   709,   973,    66,   729,    61,
     828,   129,   138,   827,   366,  -379,   733,   644,   367,   167,
      55,  -379,   139,   100,   711,    64,   133,    16,   -31,   515,
       4,   -39,   -31,   176,   981,   575,   374,   113,   984,     5,
       6,   985,   650,   374,   651,    82,    83,    84,   368,   372,
     623,   326,   134,   122,   366,    85,   621,     7,   367,    53,
     437,   135,    68,   320,   321,   322,    57,    58,     9,    90,
     552,   437,    57,   136,   375,   383,   123,   389,   576,   137,
      10,   434,    90,   434,   141,    54,   968,   142,   639,    59,
     646,   370,   620,   143,    12,    59,   172,   571,   175,   297,
     622,    88,   178,   298,   120,   299,    13,   300,    60,   256,
     257,    15,   188,    55,    88,   275,   276,   649,   191,   649,
      70,   461,   641,   642,    16,   435,   638,   435,   741,   742,
     253,   784,   661,    16,   780,   781,   755,   801,   802,    16,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   199,   266,   243,   266,   202,   755,   244,   266,   266,
     542,   810,   811,   266,   248,   258,   246,   249,   277,    31,
     553,   840,   841,   376,   376,   180,    70,    31,   278,   138,
     855,   196,   197,   280,   859,   295,    82,    83,    84,   368,
     772,   773,   296,   316,    85,    32,   317,   826,    53,   323,
     452,   845,   327,    32,   324,   325,   328,    57,   329,   361,
     419,   167,   181,   382,   453,   167,   167,   806,   167,   375,
      82,    83,    84,   364,    54,   501,   375,   623,   745,   806,
      59,   502,   370,   504,    68,   508,   509,    90,   437,   514,
     623,   621,   621,   259,   206,   515,   182,   150,   151,   868,
      90,   516,    55,   517,   518,   521,    90,   520,   183,   535,
     639,   538,   537,    68,   544,   555,   853,   551,   765,    88,
     556,   640,   153,    31,    16,   861,   557,   771,   771,   558,
     559,   155,    88,     4,   560,   622,   622,   561,    88,   639,
     193,   932,     5,     6,   562,   564,   567,   571,   782,    32,
     568,   909,   910,   821,   570,   572,   159,   573,   160,   786,
       7,   260,   266,   577,   581,   579,   583,   870,   584,   948,
       8,     9,   900,   391,   392,   393,   394,   395,   614,   647,
     261,   262,   645,    10,    11,   637,    85,   653,   755,   263,
      53,   654,    31,    31,   657,   659,   264,    12,   265,   706,
      57,   717,    85,   927,   718,   722,    53,   724,   723,    13,
     725,    14,   727,   906,    15,   728,    54,   737,    32,    32,
     805,   623,   928,    59,   736,   370,   547,    16,   731,   656,
     720,    90,    54,   549,   374,   374,    68,   726,   738,   743,
     372,   740,   744,   434,    55,   243,   457,   437,   746,   244,
     732,    16,   750,   751,   947,   766,   248,   770,   246,   249,
      55,   735,   639,    88,   891,   615,   789,    16,   779,   959,
     960,   842,   793,   259,   206,   850,   794,   150,   795,   433,
      31,   798,   969,   800,   799,   803,   224,   435,   851,   224,
     821,   957,   224,   804,   807,   812,   814,   266,   815,   816,
     819,   817,   153,   818,   824,   752,    32,   758,   760,   829,
     834,   155,   901,   640,   902,   224,   835,   837,   838,   846,
      82,    83,    84,   368,   864,   860,   224,   879,   865,   866,
     777,   369,    31,    31,   867,   871,   390,   266,   160,   875,
     873,    57,   640,   224,   893,   877,   167,   874,   167,   880,
     881,   885,   167,   894,   895,   167,   896,   897,    32,    32,
     216,   217,   904,   901,    59,   902,   370,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   218,   903,   219,   907,
       4,   918,   908,   911,   916,   922,   925,   292,   923,     5,
       6,   924,   930,   931,   901,   926,   902,   933,   311,   934,
     623,   935,   167,    34,    35,   937,   371,     7,    16,   901,
      90,   902,   942,   224,   938,   808,   809,    58,     9,   945,
     950,   951,   956,   266,   962,   963,   967,   977,   972,   975,
      10,   976,   980,   982,   983,   785,   862,   375,   375,   854,
     387,   107,    88,   856,    12,   748,   224,   396,   716,   832,
     259,   206,   167,   714,   150,   151,    13,   180,    60,   167,
     312,    15,   250,    36,    37,   640,    38,    39,    40,    41,
     914,    42,   224,   734,    16,   550,    85,   775,   774,   153,
      53,   913,   224,    56,   167,   844,    75,   167,   155,   652,
      43,    44,   776,    45,   181,   943,     0,     0,     0,   167,
     167,   768,     0,   102,     0,     0,    54,     0,     0,     0,
       0,     0,   167,   159,     0,   160,     0,   876,   387,    57,
       0,    85,     0,     0,     0,    53,     0,     0,   182,   887,
       0,     0,     0,   115,    55,   117,     0,   224,     0,     0,
       0,     0,    59,     0,   370,     0,     0,     0,     0,     0,
       0,    54,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,     0,     0,     0,   921,    55,
       0,   173,   174,     0,     0,     0,    16,     0,   179,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   194,   195,
       0,     0,     0,   198,     0,     0,     0,     0,     0,   580,
       0,     0,     0,   224,     0,     0,     0,   944,   259,   206,
       0,   274,   150,     0,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   153,   102,     0,
       0,   315,     0,     0,   318,     0,   155,     0,   224,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,     0,     0,     0,     0,
     224,     0,  -282,     0,   224,     0,   224,     0,     0,     0,
       0,   390,  -282,   160,     0,   658,     0,     0,     0,     0,
     224,     0,   224,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,  -282,     0,  -282,  -282,     0,
    -282,     0,   224,     0,     0,     0,     0,     0,     0,  -282,
       0,     0,     0,   224,     0,     0,  -282,     0,     0,     0,
     701,  -282,     0,     0,     0,     0,  -282,   224,     0,     0,
     224,     0,   713,     0,     0,     0,   715,     0,   292,  -282,
       0,     0,     0,    82,    83,    84,   203,     0,     0,     0,
       0,     0,   719,     0,    82,    83,    84,   224,   224,   224,
     224,     0,     0,   523,   204,     0,   205,   206,     0,     0,
     150,     0,     0,     0,   207,     0,   208,   384,   206,     0,
       0,   385,   224,     0,     0,   209,   268,   210,   273,     0,
       0,     0,     0,   279,     0,   153,   281,     0,   224,   387,
       0,   284,   749,     0,   155,   224,   153,    54,   852,   211,
       0,     0,     0,   212,     0,   155,     0,     0,     5,     6,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   213,
     754,   160,   569,   214,   215,    55,     7,     0,     0,     0,
     291,     0,   160,     0,     0,   215,    58,     9,     0,     0,
       0,     0,     0,   216,   217,     0,     0,     0,     0,    10,
       0,     0,     0,     0,   216,   217,     0,   224,   224,   218,
     754,   219,   224,    12,     0,     0,     0,   787,     0,     0,
     218,     0,   219,     0,     0,    13,     0,    60,     0,     0,
      15,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,    82,    83,    84,   251,     0,   224,     0,
     224,   224,   268,     0,   813,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   204,     0,   205,   206,     0,     0,
     150,     0,     0,     0,   207,     0,   208,     0,   609,   224,
     662,   663,     0,     0,     6,   209,     0,   210,   224,     0,
     224,   224,     0,     0,     0,   153,     0,     0,     0,     0,
       0,    57,     0,     0,   155,     0,     0,     0,     0,   211,
       0,    58,     9,     0,     0,     0,     0,     0,     0,     0,
     701,     0,   701,   857,    59,     0,     0,     0,     0,   213,
       0,   160,   915,   214,   215,     0,     0,     0,    12,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    60,   216,   217,    15,     0,     0,     0,     0,
     884,     0,   754,     0,     0,     0,     0,     0,    16,   218,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,     0,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,     0,   268,     0,   702,     0,
       0,     0,   268,   705,    82,    83,    84,   251,    82,    83,
      84,   616,     6,     0,     0,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,   204,     0,   759,   206,    57,
       0,   150,     0,     0,     0,   207,     0,   208,   287,   206,
       0,     0,   150,   151,     0,     0,   209,     0,   210,     0,
       0,     0,    59,     0,   370,   426,   153,   428,    82,    83,
      84,     0,     0,     0,     0,   155,    12,   153,     0,     0,
     211,     0,     0,   618,     0,     0,   155,     0,    13,     0,
       0,   753,   206,   619,     0,   150,     0,     0,     0,     0,
     213,     0,   160,     0,   214,   215,    16,     0,     0,     0,
       0,   159,     0,   160,     0,     0,   260,     0,     0,     0,
     153,     0,     0,     0,   216,   217,     0,     0,     0,   155,
       0,     0,     0,     0,   545,   261,   262,    82,    83,    84,
     218,     0,   219,     0,   263,    82,    83,    84,     0,     0,
       0,   264,     0,   265,   291,     0,   160,     0,     0,   215,
     259,   206,     0,     0,   150,     0,   788,     0,   287,   206,
     585,   586,   150,     0,     0,     0,     0,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,   218,     0,   219,   153,   155,   831,
       0,   297,     0,     0,     0,   298,   155,   299,     0,   300,
       0,     0,   301,   302,   303,   304,   305,   306,   307,   308,
     309,     0,     0,   291,     0,   160,   297,   457,   215,     0,
     298,   291,   299,   160,   300,     0,   215,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   216,   217,     0,
     512,     0,     0,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,     0,     0,     0,
       0,   218,   905,   219,     0,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   397,     0,     0,     0,
       0,   858,     0,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,  -222,
       0,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   519,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,     0,     0,     0,
       0,     0,     0,   796,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,     0,     0,
       0,     0,     0,     0,   833,     0,     0,     0,     0,     0,
       0,     0,     0,   366,     0,     0,     0,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -222,   132,  -222,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,  -222,     0,     0,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     259,   206,     0,     0,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   144,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,   153,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   145,
       0,     0,   146,   147,   148,   149,     0,   150,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,   160,     0,     0,   260,     0,
       0,   152,   153,     0,     0,     0,     0,   154,    12,     0,
       0,   155,     0,    99,   144,     0,     0,   261,   262,   156,
       0,     0,     0,     0,     0,    15,   263,     0,   157,     0,
     158,     0,     0,   264,     0,   265,   159,   145,   160,     0,
     146,   147,   148,   149,     0,   150,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   615,     0,     0,
       0,    82,    83,    84,   616,     6,     0,     0,     0,   152,
     153,     0,   617,     0,     0,   154,     0,     0,     0,   155,
       0,     0,    57,     0,    85,     0,     0,   156,    53,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   158,     0,
       0,     0,     0,     0,   159,    59,   160,   370,   426,     0,
     428,     0,     0,     0,    54,     0,     0,     0,     0,    12,
       0,     0,     0,     0,     0,     0,   618,     0,     0,     0,
       0,    13,     0,     0,     0,     0,   619,    82,    83,    84,
     424,     6,    55,     0,     0,     0,     0,     0,   425,    16,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,    57,     0,
      85,     0,     0,  -283,    53,     0,     0,     0,     0,     0,
       0,     0,     0,  -283,   503,     0,     0,     0,     0,     0,
       0,    59,     0,   370,   426,   427,   428,   429,     0,     0,
      54,     0,     0,     0,     0,    12,  -283,     0,  -283,  -283,
       0,  -283,   430,     0,     0,     0,     0,    13,     0,     0,
    -283,     0,   431,     0,     0,     0,     0,  -283,    55,     0,
       0,     0,  -283,   432,     0,    16,     0,  -283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -283,     0,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,    82,    83,    84,   424,     6,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    85,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,     0,     0,
      82,    83,    84,   424,     6,     0,     0,     0,    59,     0,
     370,   426,   427,   428,   429,     0,     0,    54,     0,     0,
       0,    57,    12,     0,     0,     0,     0,     0,     0,   430,
       0,     0,     0,     0,    13,     0,     0,     0,     0,   431,
       0,     0,     0,     0,    59,    55,   370,   426,   427,   428,
     429,     0,    16,     0,     0,   337,     0,     0,    12,     0,
     338,     0,     0,     0,     0,   430,     0,     0,     0,   339,
      13,     0,   340,     0,     0,   431,   341,     0,   342,     0,
       0,     0,     0,   343,     0,     0,     0,     0,    16,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
    -312,     0,   345,   346,     0,  -312,   347,     0,     0,     0,
       0,     0,     0,     0,  -312,     0,     0,  -312,   348,   349,
       0,  -312,   350,  -312,     0,   351,   352,     0,  -312,     0,
       0,     0,     0,     0,     0,     0,     0,   353,  -312,   354,
     355,     0,   356,     0,     0,     0,     0,  -312,  -312,     0,
       0,  -312,     0,   507,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -312,  -312,     0,     0,  -312,     0,     0,
    -312,  -312,     0,     0,     0,     0,     0,   797,     0,     0,
       0,     0,  -312,     0,  -312,  -312,     0,  -312,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
       0,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   747,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418
};

static const yytype_int16 yycheck[] =
{
       2,   372,     8,    15,     8,   128,     8,   170,   154,   422,
     156,   132,   379,    15,   298,   132,   199,     2,   619,   202,
     207,    23,   132,   431,   132,   132,     2,    88,   539,   158,
     159,    75,     8,     6,   653,    90,   444,    15,    23,   238,
      17,   552,    22,   277,   278,    15,     8,    23,     8,   170,
      58,    17,    58,   170,    58,    63,    58,    63,   113,    63,
     170,    63,   170,   170,     8,   737,   110,   190,   620,    15,
      13,   115,   744,   117,   129,    14,    37,    95,     4,    91,
      34,   136,    58,    93,    38,    34,    88,    63,    34,    91,
      45,    69,     4,    32,    45,   113,    58,     6,    58,    25,
       0,    63,   899,    63,    53,   820,    23,    45,    86,    37,
      64,    28,    34,    22,    58,   830,    55,   119,    57,    63,
      93,    91,    14,    84,    34,   180,   181,   182,    77,   173,
     174,    77,    34,   930,   119,   179,   113,    14,    92,    65,
      32,    96,    93,   119,    95,    71,    97,   113,   945,   295,
     194,   195,   101,    65,   198,    32,    84,   829,   213,    71,
     204,    99,   763,    55,   115,    57,   210,   882,    34,    34,
     299,     7,   142,    38,   144,    11,    12,    13,    55,   149,
      57,    21,   152,    99,   113,   372,   115,   157,   158,   159,
     133,   314,   379,     6,   872,   256,   961,   199,    34,    64,
     202,   966,    38,   326,    22,   883,   323,    99,   973,    49,
     333,    77,   192,   323,   627,   628,   835,   202,   502,   771,
      34,    14,    99,   199,   508,    34,   202,    92,    64,    38,
     638,   207,   238,    34,   433,     8,   238,   207,   154,    32,
     156,   919,    32,    34,    32,   253,    93,   253,   447,   253,
     449,   253,    32,   452,   256,    64,    92,    47,   912,    47,
      34,    32,    55,    99,    57,    55,   920,    55,   238,    57,
     325,   315,   316,   507,   318,    55,   238,   253,   512,    53,
     514,    72,    34,    92,    55,    58,   940,    32,   840,    97,
      63,   253,    32,   253,    85,   806,   266,    34,    86,    11,
      12,    13,    47,    77,   261,   262,    99,   264,   265,   253,
      55,    99,    57,   936,    96,    55,    94,    57,   941,    94,
      98,   329,    34,   329,     6,   329,    38,   329,   298,   299,
     953,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      22,   942,   311,    94,   260,   261,   262,   263,   264,   265,
     949,    93,    64,   329,    99,   954,   336,   134,    40,    99,
     137,   277,   278,    34,    35,   511,   965,   329,   551,   329,
     741,    97,   433,   740,    93,    94,   559,   432,    97,   295,
      92,   100,   437,   363,   513,   329,    96,    99,    94,    95,
       5,     6,    98,    93,   976,    14,   372,    97,   980,    14,
      15,   983,   447,   379,   449,    11,    12,    13,    14,   379,
     422,   188,   113,    32,    93,    34,   422,    32,    97,    38,
     422,    96,   424,   180,   181,   182,    32,    42,    43,   431,
     553,   433,    32,    94,   207,   212,    55,   214,    57,    95,
      55,   447,   444,   449,    96,    64,   957,    97,   424,    55,
     649,    57,   422,   100,    69,    55,    96,    57,    93,    93,
     422,   431,    93,    97,    84,    99,    81,   101,    83,     9,
      10,    86,    95,    92,   444,    34,    35,   447,    96,   449,
     253,   258,    58,    59,    99,   447,    86,   449,     9,    10,
      42,   654,   461,    99,     9,    10,   613,    21,    22,    99,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,    96,   502,   654,   504,    96,   653,   654,   508,   509,
     317,   724,   725,   513,   654,    95,   654,   654,    95,   551,
     327,     9,    10,   740,   741,    15,   329,   559,    95,   620,
     794,   124,   125,    34,   798,    96,    11,    12,    13,    14,
     627,   628,    22,    34,    34,   551,    95,    22,    38,    95,
     779,   780,    95,   559,    98,    96,    96,    32,    42,    98,
      97,   507,    52,    99,   117,   511,   512,   720,   514,   372,
      11,    12,    13,    45,    64,    98,   379,   619,   577,   732,
      55,    94,    57,   104,   616,    97,    82,   619,   620,    18,
     632,   627,   628,    34,    35,    95,    86,    38,    39,   812,
     632,    98,    92,    98,    96,    94,   638,   100,    98,   113,
     616,    96,    95,   645,    95,    93,   792,    96,   617,   619,
      93,   424,    63,   655,    99,   801,    95,   627,   628,    96,
      96,    72,   632,     5,    96,   627,   628,    72,   638,   645,
     655,   905,    14,    15,    96,    93,    34,    57,   647,   655,
      95,   864,   865,   738,    35,    34,    97,    34,    99,   658,
      32,   102,   662,    22,    98,    45,    98,   814,    34,   933,
      42,    43,   848,   215,   216,   217,   218,   219,    45,    22,
     121,   122,    14,    55,    56,    45,    34,    99,   835,   130,
      38,    45,   724,   725,    72,    10,   137,    69,   139,    46,
      32,    98,    34,   896,   100,    95,    38,    96,    95,    81,
      96,    83,   113,   860,    86,     4,    64,    34,   724,   725,
     719,   763,   898,    55,    98,    57,   873,    99,    96,    84,
     537,   763,    64,   873,   740,   741,   768,   544,    99,    57,
     740,    98,    34,   779,    92,   896,    17,   779,    44,   896,
     557,    99,    98,    94,   930,    58,   896,    22,   896,   896,
      92,   568,   768,   763,   838,     7,    22,    99,    98,   945,
     946,   770,    96,    34,    35,   785,    95,    38,    94,   779,
     812,    21,   958,    34,    98,    96,   131,   779,   787,   134,
     875,   944,   137,    22,    96,    96,    45,   797,    96,    96,
      45,    96,    63,    96,    95,   612,   812,   614,   615,    34,
     100,    72,   848,   616,   848,   160,    94,    45,    34,   100,
      11,    12,    13,    14,    96,    95,   171,   826,    96,    96,
     637,    22,   864,   865,    96,    44,    97,   837,    99,    96,
      95,    32,   645,   188,   843,    38,   792,   100,   794,    22,
      10,    45,   798,    22,    10,   801,    45,    93,   864,   865,
     121,   122,    93,   899,    55,   899,    57,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   137,    22,   139,    22,
       5,   880,    96,    96,    64,    95,    10,   160,    96,    14,
      15,    95,    27,    93,   930,   894,   930,    18,   171,    96,
     942,    96,   848,    34,    35,    34,    97,    32,    99,   945,
     942,   945,    97,   258,    92,   722,   723,    42,    43,    27,
      34,    75,    96,   923,    34,    16,    98,    16,    96,    96,
      55,    96,    96,    96,    96,   655,   803,   740,   741,   793,
     213,    47,   942,   795,    69,   582,   291,   220,   521,   751,
      34,    35,   898,   518,    38,    39,    81,    15,    83,   905,
     172,    86,   133,    94,    95,   768,    97,    98,    99,   100,
     875,   102,   317,   563,    99,   325,    34,   632,   630,    63,
      38,   873,   327,     7,   930,   779,    10,   933,    72,   452,
     121,   122,   635,   124,    52,   923,    -1,    -1,    -1,   945,
     946,    14,    -1,    27,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,   958,    97,    -1,    99,    -1,   824,   291,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    86,   836,
      -1,    -1,    -1,    57,    92,    59,    -1,   382,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,    -1,    -1,    -1,   885,    92,
      -1,   105,   106,    -1,    -1,    -1,    99,    -1,   112,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,   382,
      -1,    -1,    -1,   458,    -1,    -1,    -1,   924,    34,    35,
      -1,   145,    38,    -1,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,    63,   172,    -1,
      -1,   175,    -1,    -1,   178,    -1,    72,    -1,   503,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
     515,    -1,    22,    -1,   519,    -1,   521,    -1,    -1,    -1,
      -1,    97,    32,    99,    -1,   458,    -1,    -1,    -1,    -1,
     535,    -1,   537,    -1,    -1,    -1,    -1,    -1,    -1,   544,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      60,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,   568,    -1,    -1,    76,    -1,    -1,    -1,
     503,    81,    -1,    -1,    -1,    -1,    86,   582,    -1,    -1,
     585,    -1,   515,    -1,    -1,    -1,   519,    -1,   521,    99,
      -1,    -1,    -1,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,   535,    -1,    11,    12,    13,   612,   613,   614,
     615,    -1,    -1,   297,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    44,    34,    35,    -1,
      -1,    38,   637,    -1,    -1,    53,   142,    55,   144,    -1,
      -1,    -1,    -1,   149,    -1,    63,   152,    -1,   653,   582,
      -1,   157,   585,    -1,    72,   660,    63,    64,    10,    77,
      -1,    -1,    -1,    81,    -1,    72,    -1,    -1,    14,    15,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    97,
     613,    99,   366,   101,   102,    92,    32,    -1,    -1,    -1,
      97,    -1,    99,    -1,    -1,   102,    42,    43,    -1,    -1,
      -1,    -1,    -1,   121,   122,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,   121,   122,    -1,   722,   723,   137,
     653,   139,   727,    69,    -1,    -1,    -1,   660,    -1,    -1,
     137,    -1,   139,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,   751,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     266,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    11,    12,    13,    14,    -1,   793,    -1,
     795,   796,   298,    -1,   727,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    44,    -1,   751,   824,
       9,    10,    -1,    -1,    15,    53,    -1,    55,   833,    -1,
     835,   836,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     793,    -1,   795,   796,    55,    -1,    -1,    -1,    -1,    97,
      -1,    99,   877,   101,   102,    -1,    -1,    -1,    69,    -1,
     885,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,   121,   122,    86,    -1,    -1,    -1,    -1,
     833,    -1,   835,    -1,    -1,    -1,    -1,    -1,    99,   137,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   924,
      -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   963,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,    -1,   502,    -1,   504,    -1,
      -1,    -1,   508,   509,    11,    12,    13,    14,    11,    12,
      13,    14,    15,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    32,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    53,    -1,    55,    -1,
      -1,    -1,    55,    -1,    57,    58,    63,    60,    11,    12,
      13,    -1,    -1,    -1,    -1,    72,    69,    63,    -1,    -1,
      77,    -1,    -1,    76,    -1,    -1,    72,    -1,    81,    -1,
      -1,    34,    35,    86,    -1,    38,    -1,    -1,    -1,    -1,
      97,    -1,    99,    -1,   101,   102,    99,    -1,    -1,    -1,
      -1,    97,    -1,    99,    -1,    -1,   102,    -1,    -1,    -1,
      63,    -1,    -1,    -1,   121,   122,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,   121,   122,    11,    12,    13,
     137,    -1,   139,    -1,   130,    11,    12,    13,    -1,    -1,
      -1,   137,    -1,   139,    97,    -1,    99,    -1,    -1,   102,
      34,    35,    -1,    -1,    38,    -1,   662,    -1,    34,    35,
       9,    10,    38,    -1,    -1,    -1,    -1,    -1,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,   137,    -1,   139,    63,    72,    10,
      -1,    93,    -1,    -1,    -1,    97,    72,    99,    -1,   101,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    97,    -1,    99,    93,    17,   102,    -1,
      97,    97,    99,    99,   101,    -1,   102,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,   121,   122,    -1,
      18,    -1,    -1,    -1,    -1,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,    -1,    -1,    -1,    -1,
      -1,   137,    18,   139,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    19,    -1,    -1,    -1,
      -1,   797,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    19,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    19,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    19,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    99,    -1,    -1,   102,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    72,    -1,     6,     7,    -1,    -1,   121,   122,    80,
      -1,    -1,    -1,    -1,    -1,    86,   130,    -1,    89,    -1,
      91,    -1,    -1,   137,    -1,   139,    97,    30,    99,    -1,
      33,    34,    35,    36,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,    62,
      63,    -1,    22,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    32,    -1,    34,    -1,    -1,    80,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    55,    99,    57,    58,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    11,    12,    13,
      14,    15,    92,    -1,    -1,    -1,    -1,    -1,    22,    99,
       9,    10,    11,    12,    13,    14,    15,    -1,    32,    -1,
      34,    -1,    -1,    22,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    69,    55,    -1,    57,    58,
      -1,    60,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      69,    -1,    86,    -1,    -1,    -1,    -1,    76,    92,    -1,
      -1,    -1,    81,    97,    -1,    99,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    32,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    55,    92,    57,    58,    59,    60,
      61,    -1,    99,    -1,    -1,     3,    -1,    -1,    69,    -1,
       8,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    17,
      81,    -1,    20,    -1,    -1,    86,    24,    -1,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    50,    51,    -1,     8,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    66,    67,
      -1,    24,    70,    26,    -1,    73,    74,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    41,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    -1,    90,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   153,   154,     0,     5,    14,    15,    32,    42,    43,
      55,    56,    69,    81,    83,    86,    99,   155,   156,   158,
     159,   167,   168,   169,   170,   180,   211,   213,   214,   217,
     220,   223,   227,   230,    34,    35,    94,    95,    97,    98,
      99,   100,   102,   121,   122,   124,   181,   182,   183,    32,
      47,    55,    34,    38,    64,    92,   165,    32,    42,    55,
      83,   170,   171,   172,   211,   214,   217,   220,   223,   227,
     228,    34,    35,   212,    34,   165,    34,    34,   218,   219,
     256,    34,    11,    12,    13,    34,   165,   166,   191,   221,
     223,   224,   225,   226,    34,    72,    85,   222,    93,     6,
     179,   168,   165,   215,   216,    32,    55,   183,    22,    34,
      34,    34,    93,    97,   247,   165,   171,   165,    34,    37,
      84,   171,    32,    55,    94,    94,    96,    93,   247,    97,
     164,   113,   115,    96,   113,    96,    94,    95,   225,   166,
     221,    96,    97,   100,     7,    30,    33,    34,    35,    36,
      38,    39,    62,    63,    68,    72,    80,    89,    91,    97,
      99,   173,   174,   175,   178,   179,   184,   201,   202,   208,
      95,   113,    96,   165,   165,    93,    93,   247,    93,   165,
      15,    52,    86,    98,   166,   248,   249,   250,    95,   247,
     247,    96,   163,   168,   165,   165,   212,   212,   165,    96,
     233,   166,    96,    14,    32,    34,    35,    42,    44,    53,
      55,    77,    81,    97,   101,   102,   121,   122,   137,   139,
     191,   192,   193,   194,   202,   252,   254,   255,   256,   257,
     258,   261,   262,   263,   264,   266,   267,   276,   281,   282,
     302,    34,   253,   255,   257,   259,   263,   265,   266,   267,
     218,    14,   252,    42,   166,   252,     9,    10,    95,    34,
     102,   121,   122,   130,   137,   139,   191,   198,   199,   200,
     201,   206,   207,   199,   165,    34,    35,    95,    95,   199,
      34,   199,   184,   184,   199,   199,   205,    34,   205,   209,
     210,    97,   193,   203,   204,    96,    22,    93,    97,    99,
     101,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     253,   193,   215,   247,   247,   165,    34,    95,   165,   247,
     250,   250,   250,    95,    98,    96,   252,    95,    96,    42,
      22,   179,   247,   247,   247,   167,   168,     3,     8,    17,
      20,    24,    26,    31,    41,    50,    51,    54,    66,    67,
      70,    73,    74,    85,    87,    88,    90,   231,   232,   234,
     235,    98,   167,   168,    45,   247,    93,    97,    14,    22,
      57,    97,   191,   223,   227,   228,   236,   277,   278,   279,
     280,   247,    99,   252,    34,    38,   166,   193,   195,   252,
      97,   194,   194,   194,   194,   194,   193,    19,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    97,
       4,    25,    65,    71,    14,    22,    58,    59,    60,    61,
      76,    86,    97,   191,   214,   217,   221,   223,   227,   228,
     236,   283,   284,   285,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   117,     4,    71,   171,    17,   113,   275,
     225,   252,   201,   200,   201,   200,   201,   200,   200,   199,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    98,    94,    45,   104,   178,   178,    78,    97,    82,
      23,    28,    18,    94,    18,    95,    98,    98,    96,    19,
     100,    94,   184,   165,   206,   205,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   113,   275,    95,    96,   233,
     247,   247,   252,   247,    95,    77,   251,   257,   260,   266,
     248,    96,   233,   252,   171,    93,    93,    95,    96,    96,
      96,    72,    96,   233,    93,    93,   157,    34,    95,   165,
      35,    57,    34,    34,   280,    14,    57,    22,   277,    45,
     193,    98,    94,    98,    34,     9,    10,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     196,   197,    45,    99,    45,     7,    14,    22,    76,    86,
     191,   214,   217,   221,   268,   269,   270,   271,   272,   273,
     274,   284,   286,   295,   296,   297,   298,    45,    86,   227,
     228,    58,    59,   292,   166,    14,   295,    22,   292,   191,
     288,   288,   294,    99,    45,    37,    84,    72,   193,    10,
     113,   275,     9,    10,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   206,   185,   187,   188,   189,
     190,   193,   199,   178,   206,   199,    46,   176,   177,   184,
     178,   205,   178,   193,   209,   193,   203,    98,   100,   193,
     252,   235,    95,    95,    96,    96,   252,   113,     4,   167,
     235,    96,   252,   167,   234,   252,    98,    34,    99,   237,
      98,     9,    10,    57,    34,   275,    44,   100,   195,   193,
      98,    94,   252,    34,   193,   257,   303,   304,   252,    34,
     252,   299,    47,    86,   229,   275,    58,   296,    14,   274,
      22,   191,   269,   269,   273,   272,   298,   252,   292,    98,
       9,    10,   275,   303,   253,   163,   275,   193,   199,    22,
      21,    49,   186,    96,    95,    94,    19,    79,    21,    98,
      34,    21,    22,    96,    22,   275,   233,    96,   252,   252,
     167,   167,    96,   193,    45,    96,    96,    96,    96,    45,
     237,   166,   245,   246,    95,   239,    22,   277,   280,    34,
     237,    10,   196,    19,   100,    94,    95,    45,    34,   296,
       9,    10,   275,    22,   283,   295,   100,    22,    40,   160,
     179,   275,    10,   184,   187,   178,   189,   193,   199,   178,
      95,   184,   176,   235,    96,    96,    96,    96,   167,    15,
     257,    44,   239,    95,   100,    96,   252,    38,   238,   275,
      22,    10,   237,   239,   193,    45,   303,   252,   205,   300,
     301,   247,   274,   275,    22,    10,    45,    93,   161,   162,
     184,   214,   220,    22,    93,    18,   257,    22,    96,   167,
     167,    96,   238,   251,   245,   202,    64,   240,   275,   239,
     238,   252,    95,    96,    95,    10,   275,   253,   184,   161,
      27,    93,   178,    18,    96,    96,   240,    34,    92,   241,
     238,   240,    97,   300,   252,    27,   161,   184,   178,   241,
      34,    75,   242,   240,   241,   296,    96,   233,   161,   184,
     184,   242,    34,    16,   243,   241,   242,    98,   235,   184,
     243,   202,    96,   242,   243,    96,    96,    16,   244,   243,
      96,   244,    96,    96,   244,   244
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   152,   154,   153,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   159,   159,   159,   159,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   162,   163,   164,
     164,   165,   165,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   172,   172,   172,   172,   172,   173,
     173,   173,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   180,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     187,   188,   189,   189,   190,   190,   191,   191,   191,   192,
     192,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   194,   194,   194,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   200,   200,   200,   200,   200,   200,   200,
     201,   201,   201,   201,   201,   201,   201,   202,   202,   202,
     202,   202,   202,   202,   203,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   209,   209,   210,   211,
     212,   212,   212,   212,   213,   213,   214,   215,   215,   216,
     216,   217,   218,   218,   219,   219,   219,   219,   220,   221,
     221,   222,   222,   222,   222,   223,   224,   224,   224,   225,
     226,   226,   226,   226,   227,   227,   227,   227,   228,   228,
     228,   228,   229,   229,   230,   230,   230,   230,   230,   230,
     230,   230,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   234,   234,   234,   235,   235,   236,   236,
     236,   236,   237,   237,   238,   238,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     247,   247,   247,   248,   248,   249,   249,   249,   249,   250,
     250,   250,   251,   251,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   253,   253,   253,
     253,   253,   253,   254,   254,   254,   254,   255,   256,   257,
     257,   257,   257,   258,   258,   259,   260,   260,   261,   262,
     263,   264,   265,   266,   266,   267,   267,   268,   268,   268,
     269,   269,   270,   270,   271,   271,   271,   271,   271,   271,
     271,   271,   272,   273,   273,   274,   274,   275,   275,   275,
     276,   276,   276,   276,   277,   277,   278,   278,   279,   279,
     280,   280,   280,   281,   281,   282,   282,   282,   282,   282,
     282,   283,   283,   284,   284,   285,   285,   285,   286,   286,
     287,   287,   287,   288,   288,   289,   289,   290,   290,   290,
     290,   290,   290,   290,   291,   291,   292,   293,   294,   294,
     295,   295,   295,   295,   295,   296,   296,   296,   297,   298,
     299,   299,   300,   300,   300,   301,   302,   303,   303,   304,
     304
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     6,     0,
       1,     1,     6,     9,     9,     6,     6,    10,     3,     2,
       6,     5,     5,     4,     1,     2,     1,     1,     1,     0,
       3,     1,     1,     1,     1,     3,     1,     2,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     6,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     7,     1,     3,     0,     6,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     5,     4,     6,     8,     4,     4,     2,     1,     4,
       3,     3,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     1,     3,     1,     1,     0,     1,
       3,     3,     1,     3,     1,     3,     1,     1,     1,     5,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     2,     1,     2,     2,
       2,     2,     1,     3,     1,     3,     1,     0,     5,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     4,     3,     2,     4,     1,     1,     1,     1,
       1,     3,     1,     1,     0,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     0,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     2,     2,     3,     4,
       6,     2,     0,     3,     3,     4,     3,     3,     2,     1,
       2,     1,     1,     1,     4,     3,     1,     5,     3,     2,
       4,     6,     5,     7,     6,     8,     7,     9,     4,     6,
       5,     7,     6,     8,     6,     8,     8,    10,     9,    11,
       9,    11,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     2,     1,     3,    11,    12,
      12,    13,     0,     3,     0,     2,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     1,     3,     3,
       0,     2,     3,     1,     3,     2,     2,     2,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     2,     4,     4,     4,     1,
       3,     1,     4,     7,     4,     7,     4,     4,     3,     3,
       2,     4,     4,     0,     1,     5,     4,     2,     1,     1,
       1,     2,     5,     3,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     0,     1,     2,
       4,     2,     7,     6,     1,     2,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     4,     7,     6,     4,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     5,     3,     1,     2,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     2,
       1,     1,     2,     2,     1,     2,     1,     1,     1,     4,
       3,     1,     1,     2,     3,     5,     4,     1,     3,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_ABSTRACT: /* ABSTRACT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ARRAY: /* ARRAY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ASM: /* ASM  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_BEGIN: /* BEGIN  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CASE: /* CASE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CDECL: /* CDECL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CELSE: /* CELSE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CENDIF: /* CENDIF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CIF: /* CIF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CIFDEF: /* CIFDEF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CIFNDEF: /* CIFNDEF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CLASS: /* CLASS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_CONST: /* CONST  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DEFAULT: /* DEFAULT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DEPRECATED: /* DEPRECATED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DO: /* DO  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DOTS: /* DOTS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DYNAMIC: /* DYNAMIC  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ELSE: /* ELSE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_END: /* END  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_EXCEPT: /* EXCEPT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_EXTERNAL: /* EXTERNAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FIL: /* FIL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FINAL: /* FINAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FINALIZATION: /* FINALIZATION  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FINALLY: /* FINALLY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FAR: /* FAR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FOR: /* FOR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FORWARD: /* FORWARD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FUNCTION: /* FUNCTION  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_GOTO: /* GOTO  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IDENT: /* IDENT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ICONST: /* ICONST  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IF: /* IF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IMPLEMENTATION: /* IMPLEMENTATION  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INDEX: /* INDEX  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INHERITED: /* INHERITED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INITIALIZATION: /* INITIALIZATION  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INLINE: /* INLINE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INTERFACE: /* INTERFACE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LABEL: /* LABEL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OBJECT: /* OBJECT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OF: /* OF  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ON: /* ON  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OPERATOR: /* OPERATOR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ORIGIN: /* ORIGIN  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OTHERWISE: /* OTHERWISE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OVERLOAD: /* OVERLOAD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OVERRIDE: /* OVERRIDE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OUT: /* OUT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PACKED: /* PACKED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PASCAL: /* PASCAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PROCEDURE: /* PROCEDURE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PROGRAM: /* PROGRAM  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PROPERTY: /* PROPERTY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PRIVATE: /* PRIVATE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PROTECTED: /* PROTECTED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PUBLIC: /* PUBLIC  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PUBLISHED: /* PUBLISHED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_RAISE: /* RAISE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_RCONST: /* RCONST  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_READ: /* READ  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_RECORD: /* RECORD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_REGISTER: /* REGISTER  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_REINTRODUCE: /* REINTRODUCE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_REPEAT: /* REPEAT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_RESOURCESTRING: /* RESOURCESTRING  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SAFECALL: /* SAFECALL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SET: /* SET  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SCONST: /* SCONST  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_STATIC: /* STATIC  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_STDCALL: /* STDCALL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_STORED: /* STORED  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_STRICT: /* STRICT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_STRING: /* STRING  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_THEN: /* THEN  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_TO: /* TO  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_TRY: /* TRY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_TYPE: /* TYPE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UNTIL: /* UNTIL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UNIT: /* UNIT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UNIT_END: /* UNIT_END  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UNSAFE: /* UNSAFE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_VAR: /* VAR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_VARARGS: /* VARARGS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_VIRTUAL: /* VIRTUAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_WHILE: /* WHILE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_WINAPI: /* WINAPI  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_WITH: /* WITH  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_WRITE: /* WRITE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_94_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_95_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_96_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_97_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_98_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_99_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_100_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_101_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_102_: /* '@'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SCOPE: /* SCOPE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LET: /* LET  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETADD: /* LETADD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETSUB: /* LETSUB  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETDIV: /* LETDIV  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETMUL: /* LETMUL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETAND: /* LETAND  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETOR: /* LETOR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETSHL: /* LETSHL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LETSHR: /* LETSHR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_EQ: /* EQ  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_NE: /* NE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LT: /* LT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LE: /* LE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_GT: /* GT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_GE: /* GE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IN: /* IN  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IS: /* IS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_PLUS: /* PLUS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_MINUS: /* MINUS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_OR: /* OR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_XOR: /* XOR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_BINOR: /* BINOR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_MOD: /* MOD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DIV: /* DIV  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DIVR: /* DIVR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_MUL: /* MUL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_AND: /* AND  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SHR: /* SHR  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SHL: /* SHL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_BINAND: /* BINAND  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_AS: /* AS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UPLUS: /* UPLUS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_UMINUS: /* UMINUS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_NOT: /* NOT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ADDRESS: /* ADDRESS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_BINNOT: /* BINNOT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_EQUAL: /* EQUAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_NOTEQUAL: /* NOTEQUAL  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_LESSTH: /* LESSTH  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_GREATERTH: /* GREATERTH  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ADD: /* ADD  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_SUBSTRACT: /* SUBSTRACT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_MULTIPLY: /* MULTIPLY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_DIVIDE: /* DIVIDE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_INTDIVIDE: /* INTDIVIDE  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_MODULUS: /* MODULUS  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_IMPLICIT: /* IMPLICIT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_EXPLICIT: /* EXPLICIT  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_progend: /* progend  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ident_ext: /* ident_ext  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_ident_list: /* ident_list  */
         { ((*yyvaluep).toks)->print_debug(); }
        break;

    case YYSYMBOL_inherited: /* inherited  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_try_finally: /* try_finally  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_try_except: /* try_except  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_except_many: /* except_many  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_except: /* except  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_statement: /* statement  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_asm_kwd: /* asm_kwd  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_sequence: /* sequence  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_otherwise: /* otherwise  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_case_elem_list: /* case_elem_list  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_case_elem: /* case_elem  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_condition_start: /* condition_start  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_condition_const_expr: /* condition_const_expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_const_expr: /* const_expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_const_simple_expr: /* const_simple_expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_const_expr_list: /* const_expr_list  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_const_act_param_list: /* const_act_param_list  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_const_act_param: /* const_act_param  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_condition_expr: /* condition_expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_expr: /* expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_simple_expr: /* simple_expr  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_primary: /* primary  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_constant: /* constant  */
         { fprintf(yyo, "%s", ((*yyvaluep).n_expr)? ((literal_node*)((*yyvaluep).n_expr))->value_tkn->in_text: "NULL"); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_act_param_list: /* act_param_list  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_act_param: /* act_param  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_record_constant: /* record_constant  */
         { ((*yyvaluep).n_expr)->print_debug(); }
        break;

    case YYSYMBOL_label_list: /* label_list  */
         { ((*yyvaluep).toks)->print_debug(); }
        break;

    case YYSYMBOL_const: /* const  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_attr_content: /* attr_content  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
        break;

    case YYSYMBOL_fun_qualifier: /* fun_qualifier  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_meth_qualifier: /* meth_qualifier  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_optional_semicolon: /* optional_semicolon  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_qualifier: /* qualifier  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_qualifiers: /* qualifiers  */
         { ((*yyvaluep).toks)->print_debug(); }
        break;

    case YYSYMBOL_param_type: /* param_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_type: /* type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_const_type: /* const_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_fptr_type: /* fptr_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_string_type: /* string_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_simple_templ_type: /* simple_templ_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_simple_type: /* simple_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_array_type: /* array_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_const_array_type: /* const_array_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_conformant_array_type: /* conformant_array_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_enum_type: /* enum_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_range_type: /* range_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_pointer_type: /* pointer_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_set_type: /* set_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_const_set_type: /* const_set_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_packed: /* packed  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_record_type: /* record_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_interface_type: /* interface_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

    case YYSYMBOL_class_or_object: /* class_or_object  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_class_type: /* class_type  */
         { auto obj = dynamic_cast<base_obj_tpd_node*>(((*yyvaluep).n_tpd)); assert(obj); fprintf(yyo, "%s", obj->t_startof->in_text); }
        break;

    case YYSYMBOL_record_access_spec_tok: /* record_access_spec_tok  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_class_access_spec_tok: /* class_access_spec_tok  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_file_type: /* file_type  */
         { ((*yyvaluep).n_tpd)->print_debug(); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
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
    break;

  case 3: /* translation: $@1 input_file  */
           { 
    (yyvsp[0].n_node)->attrib(ctx_program);
    (yyvsp[0].n_node)->translate(ctx_program);
}
    break;

  case 7: /* program: block '.'  */
                   { (yyval.n_node) = new program_node(NULL, NULL, NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 8: /* program: PROGRAM IDENT prog_param_list ';' block '.'  */
        { (yyval.n_node) = new program_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_imp), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 9: /* progend: %empty  */
         { (yyval.tok) = NULL; }
    break;

  case 11: /* module: decl_part_list  */
                       { (yyval.n_node) = new module_node(NULL, NULL, NULL, NULL, (yyvsp[0].n_decl), NULL); }
    break;

  case 12: /* module: PROGRAM IDENT prog_param_list ';' decl_part_list progend  */
        { (yyval.n_node) = new module_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_imp), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 13: /* unit: UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list END '.'  */
        { (yyval.n_node) = new unit_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 14: /* unit: UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'  */
        { (yyval.n_node) = new unit_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 15: /* unit: INTERFACE unit_decl_list IMPLEMENTATION unit_def_list END '.'  */
        { (yyval.n_node) = new unit_node(NULL, NULL, NULL, (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 16: /* unit: INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'  */
        { (yyval.n_node) = new unit_node(NULL, NULL, NULL, (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 17: /* unit: UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list init_finit END '.'  */
        { (yyval.n_node) = new unit_node((yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_decl), (yyvsp[-4].tok), (yyvsp[-3].n_decl), NULL, (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 18: /* init_finit: INITIALIZATION var_const_decl_part_list sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].n_stmt), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 19: /* init_finit: INITIALIZATION sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-1].tok), NULL, (yyvsp[0].n_stmt), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 20: /* init_finit: INITIALIZATION var_const_decl_part_list sequence FINALIZATION var_const_decl_part_list sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].n_stmt), NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].n_stmt), NULL); }
    break;

  case 21: /* init_finit: INITIALIZATION sequence FINALIZATION var_const_decl_part_list sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-4].tok), NULL, (yyvsp[-3].n_stmt), NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].n_stmt), NULL); }
    break;

  case 22: /* init_finit: INITIALIZATION var_const_decl_part_list sequence FINALIZATION sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-4].tok), (yyvsp[-3].n_decl), (yyvsp[-2].n_stmt), NULL, (yyvsp[-1].tok), NULL, (yyvsp[0].n_stmt), NULL); }
    break;

  case 23: /* init_finit: INITIALIZATION sequence FINALIZATION sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-3].tok), NULL, (yyvsp[-2].n_stmt), NULL, (yyvsp[-1].tok), NULL, (yyvsp[0].n_stmt), NULL); }
    break;

  case 25: /* var_const_decl_part_list: var_const_decl_part var_const_decl_part_list  */
                                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 29: /* prog_param_list: %empty  */
                 { (yyval.n_imp) = NULL; }
    break;

  case 30: /* prog_param_list: '(' ident_list ')'  */
                         { (yyval.n_imp) = new import_list_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 35: /* ident_list: ident_ext ',' ident_list  */
                                     { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 36: /* ident_list: ident_ext  */
                { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 37: /* block: decl_part_list compoundst  */
        { (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp)); }
    break;

  case 38: /* block: assemblerst  */
        { (yyval.n_block) = new block_node((yyvsp[0].n_basm)); }
    break;

  case 39: /* decl_part_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 40: /* decl_part_list: decl_part decl_part_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 48: /* unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 49: /* unit_spec: INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node(NULL, NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 50: /* unit_decl_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 51: /* unit_decl_list: unit_decl unit_decl_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 59: /* inherited: INHERITED  */
        { (yyval.n_expr) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 60: /* inherited: INHERITED IDENT  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 61: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 62: /* try_finally: TRY sequence FINALLY sequence END  */
        { (yyval.n_stmt) = new try_finally_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 63: /* try_except: TRY sequence EXCEPT except_many END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 64: /* try_except: TRY sequence EXCEPT except_many ELSE sequence END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-6].tok), (yyvsp[-5].n_stmt), (yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 66: /* except_many: except ';' except_many  */
                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 67: /* except: %empty  */
        { (yyval.n_stmt) = NULL; }
    break;

  case 68: /* except: ON IDENT ':' simple_type DO statement  */
        { (yyval.n_stmt) = new on_except_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 69: /* statement: %empty  */
           { (yyval.n_stmt) = new empty_node(curr_token->prev_relevant()); }
    break;

  case 70: /* statement: primary LET expr  */
                       { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 71: /* statement: primary LETADD expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 72: /* statement: primary LETSUB expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 73: /* statement: primary LETDIV expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 74: /* statement: primary LETMUL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 75: /* statement: primary LETAND expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 76: /* statement: primary LETOR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 77: /* statement: primary LETSHL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 78: /* statement: primary LETSHR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 79: /* statement: GOTO ICONST  */
                  { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 80: /* statement: GOTO IDENT  */
                 { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 81: /* statement: CASE expr OF case_list END  */
                                 { (yyval.n_stmt) = new switch_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_case), (yyvsp[0].tok)); }
    break;

  case 82: /* statement: IF expr THEN statement  */
                             { (yyval.n_stmt) = new if_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 83: /* statement: IF expr THEN statement ELSE statement  */
        { (yyval.n_stmt) = new if_node((yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 84: /* statement: FOR ident_ext LET expr TO expr DO statement  */
        { (yyval.n_stmt) = new for_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 85: /* statement: WHILE expr DO statement  */
                              { (yyval.n_stmt) = new while_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 86: /* statement: REPEAT sequence UNTIL expr  */
                                 { (yyval.n_stmt) = new repeat_node((yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 87: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 88: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 89: /* statement: WITH expr_list DO statement  */
                                  { (yyval.n_stmt) = new with_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 90: /* statement: ICONST ':' statement  */
                           { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 91: /* statement: IDENT ':' statement  */
                          { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 92: /* statement: compoundst  */
                 { (yyval.n_stmt) = (yyvsp[0].n_comp); }
    break;

  case 95: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 96: /* assemblerst: ASM asm_text END  */
                              { (yyval.n_basm) = new asm_block_node((yyvsp[-2].tok), (yyvsp[-1].n_asm), (yyvsp[0].tok)); }
    break;

  case 109: /* asm_line: asm_kwd  */
                  { (yyval.n_asm) = new asm_line_node((yyvsp[0].tok), NULL); }
    break;

  case 113: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 115: /* case_list: case_items otherwise sequence  */
           { 
	     if ((yyvsp[-2].n_case) != NULL) { 
	         case_node** cpp;
	         for(cpp = &(yyvsp[-2].n_case)->next; *cpp != NULL; cpp = &(*cpp)->next);
	         *cpp = new case_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_stmt));
		 (yyval.n_case) = (yyvsp[-2].n_case);
             } else { 		 
	         (yyval.n_case) = new case_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_stmt));
             }
	   }
    break;

  case 118: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 120: /* case_items: case_item ';' case_items  */
                               { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 121: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 123: /* case_elem_list: case_elem ',' case_elem_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 124: /* case_elem: const_expr  */
                      { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 125: /* case_elem: const_expr DOTS const_expr  */
                                 { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* condition_const_expr: condition_start const_expr CELSE const_expr CENDIF  */
                                                          { (yyval.n_expr) = new cond_expr_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 130: /* condition_const_expr: condition_start const_expr CENDIF  */
                                         { (yyval.n_expr) = new cond_expr_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 133: /* const_expr: const_expr PLUS const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* const_expr: const_expr MINUS const_expr  */
                                  { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* const_expr: const_expr MOD const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* const_expr: const_expr MUL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* const_expr: const_expr DIV const_expr  */
                                { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* const_expr: const_expr DIVR const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 139: /* const_expr: const_expr AND const_expr  */
                                { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* const_expr: const_expr BINAND const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* const_expr: const_expr SHL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* const_expr: const_expr SHR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* const_expr: const_expr OR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* const_expr: const_expr BINOR const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 145: /* const_expr: const_expr XOR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 146: /* const_expr: const_expr GT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 147: /* const_expr: const_expr LT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 148: /* const_expr: const_expr LE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 149: /* const_expr: const_expr GE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 150: /* const_expr: const_expr NE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 151: /* const_expr: const_expr IN const_expr  */
                               { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 152: /* const_expr: const_expr IS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 153: /* const_expr: const_expr AS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 154: /* const_expr: '(' const_expr_list ')'  */
                              { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 155: /* const_expr: const_simple_expr '(' const_act_param_list ')'  */
                                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 156: /* const_expr: '@' const_simple_expr  */
                            { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 158: /* const_simple_expr: PLUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 159: /* const_simple_expr: MINUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 160: /* const_simple_expr: NOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 161: /* const_simple_expr: BINNOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 163: /* const_expr_list: const_expr ',' const_expr_list  */
                                                             { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 165: /* const_act_param_list: const_act_param ',' const_act_param_list  */
                                               { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 167: /* const_act_param: %empty  */
                              { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 168: /* condition_expr: condition_start expr CELSE expr CENDIF  */
                                              { (yyval.n_expr) = new cond_expr_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 169: /* condition_expr: condition_start expr CENDIF  */
                                   { (yyval.n_expr) = new cond_expr_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 172: /* expr: expr PLUS expr  */
                     { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 173: /* expr: expr MINUS expr  */
                      { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 174: /* expr: expr MOD expr  */
                    { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 175: /* expr: expr MUL expr  */
                    { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 176: /* expr: expr DIV expr  */
                    { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 177: /* expr: expr DIVR expr  */
                     { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 178: /* expr: primary LET expr  */
                       { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 179: /* expr: primary LETADD expr  */
                          { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 180: /* expr: primary LETSUB expr  */
                          { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 181: /* expr: primary LETDIV expr  */
                          { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 182: /* expr: primary LETMUL expr  */
                          { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 183: /* expr: primary LETSHL expr  */
                          { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 184: /* expr: primary LETSHR expr  */
                          { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 185: /* expr: primary LETAND expr  */
                          { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 186: /* expr: primary LETOR expr  */
                          { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 187: /* expr: expr AND expr  */
                    { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 188: /* expr: expr BINAND expr  */
                       { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 189: /* expr: expr SHL expr  */
                    { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 190: /* expr: expr SHR expr  */
                    { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 191: /* expr: expr OR expr  */
                    { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 192: /* expr: expr BINOR expr  */
                       { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 193: /* expr: expr XOR expr  */
                    { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 194: /* expr: expr GT expr  */
                   { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 195: /* expr: expr LT expr  */
                   { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 196: /* expr: expr LE expr  */
                   { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 197: /* expr: expr GE expr  */
                   { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 198: /* expr: expr EQ expr  */
                   { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 199: /* expr: expr NE expr  */
                   { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 200: /* expr: expr IN expr  */
                   { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 201: /* expr: expr IS expr  */
                   { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 202: /* expr: expr AS expr  */
                   { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 204: /* simple_expr: PLUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 205: /* simple_expr: MINUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 206: /* simple_expr: NOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 207: /* simple_expr: BINNOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 208: /* simple_expr: '@' primary  */
                  { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 209: /* simple_expr: AND primary  */
                                { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 211: /* primary: '(' expr_list ')'  */
                        { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 212: /* primary: primary '(' act_param_list ')'  */
                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 213: /* primary: primary '.' ident_ext  */
                            { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 214: /* primary: primary '^'  */
                  { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 215: /* primary: primary '[' expr_list ']'  */
                                { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 218: /* constant: ICONST  */
             { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 219: /* constant: RCONST  */
             { (yyval.n_expr) = new double_node((yyvsp[0].tok)); }
    break;

  case 220: /* constant: SCONST  */
             { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 221: /* constant: '[' set_elem_list ']'  */
                            { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 222: /* constant: IDENT  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 223: /* constant: INDEX  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 224: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 226: /* set_elem_list: set_elem ',' set_elem_list  */
                                 { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 227: /* set_elem: const_expr  */
                     { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 228: /* set_elem: const_expr DOTS const_expr  */
                                 { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 230: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 232: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 234: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 235: /* record_constant: '(' field_init_list ')'  */
                                         { (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); }
    break;

  case 236: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 237: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 238: /* field_init_item: IDENT ':' const_expr  */
                                      { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 239: /* label_decl_part: LABEL label_list ';'  */
        { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 240: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 241: /* label_list: ICONST ',' label_list  */
                            { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 242: /* label_list: IDENT  */
            { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 243: /* label_list: IDENT ',' label_list  */
                           { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 246: /* const_def_part: const const_def_list  */
                                     { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 247: /* const_def_list: const_def ';'  */
                              { (yyval.n_cdef) = (yyvsp[-1].n_cdef); }
    break;

  case 248: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 249: /* const_def: ident_ext EQ const_expr deprecatd  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok2)); }
    break;

  case 250: /* const_def: ident_ext ':' const_type EQ const_expr deprecatd  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok2)); }
    break;

  case 251: /* type_def_part: TYPE type_def_list  */
        { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 252: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 253: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 254: /* type_def: IDENT EQ type  */
                    { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 255: /* type_def: IDENT EQ TYPE type  */
                         { (yyval.n_tdef) = new type_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[0].n_tpd)); }
    break;

  case 256: /* type_def: IDENT EQ CLASS  */
                     {(yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL, NULL)); }
    break;

  case 257: /* type_def: simple_templ_type EQ type  */
                                { (yyval.n_tdef) = new type_def_templ_node((yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 258: /* var_decl_part: VAR var_decl_list  */
                                 { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 260: /* var_decl_list: var_decl_c var_decl_list  */
                               { (yyvsp[-1].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 261: /* attr_content: SCONST  */
                     { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 262: /* attr_content: UNSAFE  */
             { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 263: /* attr_content: IDENT  */
            { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 264: /* attr_content: IDENT '(' act_param_list ')'  */
                                   { (yyval.n_stmt) = new attrib_content((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 265: /* attr_decl: '[' attr_content ']'  */
                          { (yyval.n_attr) = new attrib_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 267: /* var_decl_c: condition_start var_decl_semi CELSE var_decl_semi CENDIF  */
                                                               { (yyval.n_vdcl) = new cond_var_decl_node((yyvsp[-4].tok), (yyvsp[-3].n_vdcl), (yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 268: /* var_decl_c: condition_start var_decl_semi CENDIF  */
                                            { (yyval.n_vdcl) = new cond_var_decl_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 269: /* var_decl_semi: var_decl ';'  */
                            {(yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 270: /* var_decl: ident_list ':' type deprecatd  */
                                    { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, NULL); }
    break;

  case 271: /* var_decl: ident_list ':' type EQ const_expr deprecatd  */
                                                  { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-5].toks), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok2)); }
    break;

  case 272: /* var_decl: attr_decl ident_list ':' type deprecatd  */
                                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].n_attr), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok2)); }
    break;

  case 273: /* var_decl: attr_decl ident_list ':' type EQ const_expr deprecatd  */
                                                            { (yyval.n_vdcl) = new var_decl_node((yyvsp[-6].n_attr), (yyvsp[-5].toks), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok2)); }
    break;

  case 274: /* proc_fwd_decl: PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 275: /* proc_fwd_decl: FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 276: /* proc_fwd_decl: attr_decl PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-6].n_attr), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 277: /* proc_fwd_decl: attr_decl FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-8].n_attr), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 278: /* proc_spec: PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok), NULL, NULL); }
    break;

  case 279: /* proc_spec: FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 280: /* proc_spec: attr_decl PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-4].n_attr), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok), NULL, NULL); }
    break;

  case 281: /* proc_spec: attr_decl FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-6].n_attr), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 282: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 283: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 284: /* proc_def: PROCEDURE ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 285: /* proc_def: FUNCTION ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 286: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 287: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 288: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 289: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 290: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 291: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 311: /* optional_semicolon: %empty  */
                    { (yyval.tok) = NULL; }
    break;

  case 315: /* qualifier: DEPRECATED SCONST  */
                        { (yyval.tok) = new two_tokens((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 316: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 317: /* qualifiers: qualifiers optional_semicolon qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 318: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node(NULL, NULL, (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 319: /* property_decl: CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node(NULL, (yyvsp[-11].tok), (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 320: /* property_decl: attr_decl PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-11].n_attr), NULL, (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 321: /* property_decl: attr_decl CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-12].n_attr), (yyvsp[-11].tok), (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 322: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 323: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 324: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 325: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 326: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 327: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 328: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 329: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 330: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 331: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 332: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 333: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 334: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 335: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 336: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 338: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 339: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL); }
    break;

  case 340: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 341: /* formal_params: '(' ')'  */
              { (yyval.n_plist) = new param_list_node((yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 342: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 344: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 345: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 346: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 347: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 348: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 349: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL); }
    break;

  case 350: /* param_decl: ident_list ':' param_type EQ const_expr  */
                                              { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL); }
    break;

  case 351: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 373: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 374: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 375: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 376: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 377: /* string_type: STRING '[' const_expr ']'  */
                                       { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 378: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 379: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 380: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 381: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 382: /* simple_type: IDENT '(' ICONST ')'  */
                           { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[-3].tok)); }
    break;

  case 383: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 384: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 385: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 386: /* conformant_array_type: packed ARRAY OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 387: /* conformant_array_type: packed ARRAY OF CONST  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), NULL); }
    break;

  case 388: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 389: /* range_type: const_expr DOTS const_expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 390: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 391: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 392: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 393: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 395: /* record_type: packed RECORD record_body END deprecatd  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 396: /* record_type: packed RECORD END deprecatd  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 397: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 401: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 402: /* condition_rec_method: condition_start record_method_decl CELSE record_method_decl CENDIF  */
                                                                         { (yyval.n_decl) = new cond_method_node((yyvsp[-4].tok), (yyvsp[-3].n_decl), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 403: /* condition_rec_method: condition_start record_method_decl CENDIF  */
                                                 { (yyval.n_decl) = new cond_method_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 405: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 406: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 407: /* record_component: CLASS VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 412: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, NULL, (yyvsp[0].n_fldls)); }
    break;

  case 414: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 416: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 417: /* deprecatd: %empty  */
           { (yyval.tok2) = NULL; }
    break;

  case 418: /* deprecatd: DEPRECATED  */
                 { (yyval.tok2) = new two_tokens((yyvsp[0].tok), NULL); }
    break;

  case 419: /* deprecatd: DEPRECATED SCONST  */
                        { (yyval.tok2) = new two_tokens((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 420: /* interface_type: INTERFACE interface_methods END deprecatd  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 421: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 422: /* interface_type: INTERFACE '(' IDENT ')' interface_methods END deprecatd  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), NULL, (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 423: /* interface_type: INTERFACE '(' IDENT ')' END deprecatd  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 425: /* interface_methods: interface_method_decl_c interface_methods  */
                                                { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 426: /* condition_interface_method: condition_start interface_method_decl CELSE interface_method_decl CENDIF  */
                                                                               { (yyval.n_decl) = new cond_method_node((yyvsp[-4].tok), (yyvsp[-3].n_decl), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 427: /* condition_interface_method: condition_start interface_method_decl CENDIF  */
                                                    { (yyval.n_decl) = new cond_method_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 430: /* interface_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 431: /* interface_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 435: /* class_type: class_or_object object_body END deprecatd  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 436: /* class_type: class_or_object '(' ident_list ')' object_body END deprecatd  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 437: /* class_type: class_or_object '(' ident_list ')' END deprecatd  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), NULL, (yyvsp[-1].tok), (yyvsp[0].tok2)); }
    break;

  case 438: /* class_type: class_or_object '(' ident_list ')'  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 439: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 440: /* class_type: CLASS OF IDENT  */
        { (yyval.n_tpd) = new metaclass_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 442: /* object_body: field_decl_list object_components  */
        { 
           // rare case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	   *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 448: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 449: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 450: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 451: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 452: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 454: /* object_components: object_component object_components  */
        { 
           // special case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	      *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 455: /* condition_obj_method: condition_start method_decl CELSE method_decl CENDIF  */
                                                           { (yyval.n_decl) = new cond_method_node((yyvsp[-4].tok), (yyvsp[-3].n_decl), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 456: /* condition_obj_method: condition_start method_decl CENDIF  */
                                          { (yyval.n_decl) = new cond_method_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 458: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 464: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 465: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 469: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 470: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 471: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 472: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 473: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 475: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 476: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 477: /* field_list: variant_part  */
        { (yyval.n_fldls) = new field_list_node(NULL, (yyvsp[0].n_varp)); }
    break;

  case 479: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 480: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 481: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 483: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 484: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 485: /* variant: expr_list ':' '(' field_list ')'  */
        { (yyval.n_vari) = new variant_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_fldls), (yyvsp[0].tok)); }
    break;

  case 486: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 488: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 489: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 490: /* index_spec: const_expr DOTS const_expr  */
                                 { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



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


