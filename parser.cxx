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
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_DEFAULT = 11,                   /* DEFAULT  */
  YYSYMBOL_DEPRECATED = 12,                /* DEPRECATED  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_DOTS = 14,                      /* DOTS  */
  YYSYMBOL_DYNAMIC = 15,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_END = 17,                       /* END  */
  YYSYMBOL_EXCEPT = 18,                    /* EXCEPT  */
  YYSYMBOL_EXTERNAL = 19,                  /* EXTERNAL  */
  YYSYMBOL_FIL = 20,                       /* FIL  */
  YYSYMBOL_FINAL = 21,                     /* FINAL  */
  YYSYMBOL_FINALIZATION = 22,              /* FINALIZATION  */
  YYSYMBOL_FINALLY = 23,                   /* FINALLY  */
  YYSYMBOL_FAR = 24,                       /* FAR  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_FORWARD = 26,                   /* FORWARD  */
  YYSYMBOL_FUNCTION = 27,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 28,                      /* GOTO  */
  YYSYMBOL_IDENT = 29,                     /* IDENT  */
  YYSYMBOL_ICONST = 30,                    /* ICONST  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_IMPLEMENTATION = 32,            /* IMPLEMENTATION  */
  YYSYMBOL_INDEX = 33,                     /* INDEX  */
  YYSYMBOL_INHERITED = 34,                 /* INHERITED  */
  YYSYMBOL_INITIALIZATION = 35,            /* INITIALIZATION  */
  YYSYMBOL_INTERFACE = 36,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 37,                     /* LABEL  */
  YYSYMBOL_OBJECT = 38,                    /* OBJECT  */
  YYSYMBOL_OF = 39,                        /* OF  */
  YYSYMBOL_ON = 40,                        /* ON  */
  YYSYMBOL_OPERATOR = 41,                  /* OPERATOR  */
  YYSYMBOL_ORIGIN = 42,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 43,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 44,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 45,                  /* OVERRIDE  */
  YYSYMBOL_OUT = 46,                       /* OUT  */
  YYSYMBOL_PACKED = 47,                    /* PACKED  */
  YYSYMBOL_PASCAL = 48,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 49,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 50,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 51,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 52,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 53,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 54,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 55,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 56,                     /* RAISE  */
  YYSYMBOL_RCONST = 57,                    /* RCONST  */
  YYSYMBOL_READ = 58,                      /* READ  */
  YYSYMBOL_RECORD = 59,                    /* RECORD  */
  YYSYMBOL_REGISTER = 60,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 61,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 62,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 63,            /* RESOURCESTRING  */
  YYSYMBOL_SAFECALL = 64,                  /* SAFECALL  */
  YYSYMBOL_SET = 65,                       /* SET  */
  YYSYMBOL_SCONST = 66,                    /* SCONST  */
  YYSYMBOL_STATIC = 67,                    /* STATIC  */
  YYSYMBOL_STDCALL = 68,                   /* STDCALL  */
  YYSYMBOL_STORED = 69,                    /* STORED  */
  YYSYMBOL_STRICT = 70,                    /* STRICT  */
  YYSYMBOL_STRING = 71,                    /* STRING  */
  YYSYMBOL_THEN = 72,                      /* THEN  */
  YYSYMBOL_TO = 73,                        /* TO  */
  YYSYMBOL_TRY = 74,                       /* TRY  */
  YYSYMBOL_TYPE = 75,                      /* TYPE  */
  YYSYMBOL_UNTIL = 76,                     /* UNTIL  */
  YYSYMBOL_UNIT = 77,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 78,                  /* UNIT_END  */
  YYSYMBOL_VAR = 79,                       /* VAR  */
  YYSYMBOL_VARARGS = 80,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 81,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 82,                     /* WHILE  */
  YYSYMBOL_WINAPI = 83,                    /* WINAPI  */
  YYSYMBOL_WITH = 84,                      /* WITH  */
  YYSYMBOL_WRITE = 85,                     /* WRITE  */
  YYSYMBOL_86_ = 86,                       /* '.'  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* ':'  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_90_ = 90,                       /* '('  */
  YYSYMBOL_91_ = 91,                       /* ')'  */
  YYSYMBOL_92_ = 92,                       /* '['  */
  YYSYMBOL_93_ = 93,                       /* ']'  */
  YYSYMBOL_94_ = 94,                       /* '^'  */
  YYSYMBOL_95_ = 95,                       /* '@'  */
  YYSYMBOL_SCOPE = 96,                     /* SCOPE  */
  YYSYMBOL_LET = 97,                       /* LET  */
  YYSYMBOL_LETADD = 98,                    /* LETADD  */
  YYSYMBOL_LETSUB = 99,                    /* LETSUB  */
  YYSYMBOL_LETDIV = 100,                   /* LETDIV  */
  YYSYMBOL_LETMUL = 101,                   /* LETMUL  */
  YYSYMBOL_LETAND = 102,                   /* LETAND  */
  YYSYMBOL_LETOR = 103,                    /* LETOR  */
  YYSYMBOL_LETSHL = 104,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 105,                   /* LETSHR  */
  YYSYMBOL_EQ = 106,                       /* EQ  */
  YYSYMBOL_NE = 107,                       /* NE  */
  YYSYMBOL_LT = 108,                       /* LT  */
  YYSYMBOL_LE = 109,                       /* LE  */
  YYSYMBOL_GT = 110,                       /* GT  */
  YYSYMBOL_GE = 111,                       /* GE  */
  YYSYMBOL_IN = 112,                       /* IN  */
  YYSYMBOL_IS = 113,                       /* IS  */
  YYSYMBOL_PLUS = 114,                     /* PLUS  */
  YYSYMBOL_MINUS = 115,                    /* MINUS  */
  YYSYMBOL_OR = 116,                       /* OR  */
  YYSYMBOL_XOR = 117,                      /* XOR  */
  YYSYMBOL_BINOR = 118,                    /* BINOR  */
  YYSYMBOL_MOD = 119,                      /* MOD  */
  YYSYMBOL_DIV = 120,                      /* DIV  */
  YYSYMBOL_DIVR = 121,                     /* DIVR  */
  YYSYMBOL_MUL = 122,                      /* MUL  */
  YYSYMBOL_AND = 123,                      /* AND  */
  YYSYMBOL_SHR = 124,                      /* SHR  */
  YYSYMBOL_SHL = 125,                      /* SHL  */
  YYSYMBOL_BINAND = 126,                   /* BINAND  */
  YYSYMBOL_AS = 127,                       /* AS  */
  YYSYMBOL_UPLUS = 128,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 129,                   /* UMINUS  */
  YYSYMBOL_NOT = 130,                      /* NOT  */
  YYSYMBOL_ADDRESS = 131,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 132,                   /* BINNOT  */
  YYSYMBOL_EQUAL = 133,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 134,                 /* NOTEQUAL  */
  YYSYMBOL_LESSTH = 135,                   /* LESSTH  */
  YYSYMBOL_GREATERTH = 136,                /* GREATERTH  */
  YYSYMBOL_ADD = 137,                      /* ADD  */
  YYSYMBOL_SUBSTRACT = 138,                /* SUBSTRACT  */
  YYSYMBOL_MULTIPLY = 139,                 /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 140,                   /* DIVIDE  */
  YYSYMBOL_INTDIVIDE = 141,                /* INTDIVIDE  */
  YYSYMBOL_MODULUS = 142,                  /* MODULUS  */
  YYSYMBOL_IMPLICIT = 143,                 /* IMPLICIT  */
  YYSYMBOL_EXPLICIT = 144,                 /* EXPLICIT  */
  YYSYMBOL_YYACCEPT = 145,                 /* $accept  */
  YYSYMBOL_translation = 146,              /* translation  */
  YYSYMBOL_147_1 = 147,                    /* $@1  */
  YYSYMBOL_input_file = 148,               /* input_file  */
  YYSYMBOL_program = 149,                  /* program  */
  YYSYMBOL_progend = 150,                  /* progend  */
  YYSYMBOL_module = 151,                   /* module  */
  YYSYMBOL_unit = 152,                     /* unit  */
  YYSYMBOL_init_finit = 153,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 154, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 155,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 156,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 157,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 158,                /* ident_ext  */
  YYSYMBOL_ident_list = 159,               /* ident_list  */
  YYSYMBOL_block = 160,                    /* block  */
  YYSYMBOL_decl_part_list = 161,           /* decl_part_list  */
  YYSYMBOL_decl_part = 162,                /* decl_part  */
  YYSYMBOL_unit_spec = 163,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 164,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 165,                /* unit_decl  */
  YYSYMBOL_inherited = 166,                /* inherited  */
  YYSYMBOL_try_finally = 167,              /* try_finally  */
  YYSYMBOL_try_except = 168,               /* try_except  */
  YYSYMBOL_except_many = 169,              /* except_many  */
  YYSYMBOL_except = 170,                   /* except  */
  YYSYMBOL_statement = 171,                /* statement  */
  YYSYMBOL_compoundst = 172,               /* compoundst  */
  YYSYMBOL_assemblerst = 173,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 174,                  /* asm_kwd  */
  YYSYMBOL_asm_line = 175,                 /* asm_line  */
  YYSYMBOL_asm_text = 176,                 /* asm_text  */
  YYSYMBOL_sequence = 177,                 /* sequence  */
  YYSYMBOL_case_list = 178,                /* case_list  */
  YYSYMBOL_otherwise = 179,                /* otherwise  */
  YYSYMBOL_case_items = 180,               /* case_items  */
  YYSYMBOL_case_item = 181,                /* case_item  */
  YYSYMBOL_case_elem_list = 182,           /* case_elem_list  */
  YYSYMBOL_case_elem = 183,                /* case_elem  */
  YYSYMBOL_expr = 184,                     /* expr  */
  YYSYMBOL_simple_expr = 185,              /* simple_expr  */
  YYSYMBOL_primary = 186,                  /* primary  */
  YYSYMBOL_constant = 187,                 /* constant  */
  YYSYMBOL_set_elem_list = 188,            /* set_elem_list  */
  YYSYMBOL_set_elem = 189,                 /* set_elem  */
  YYSYMBOL_expr_list = 190,                /* expr_list  */
  YYSYMBOL_act_param_list = 191,           /* act_param_list  */
  YYSYMBOL_act_param = 192,                /* act_param  */
  YYSYMBOL_record_constant = 193,          /* record_constant  */
  YYSYMBOL_field_init_list = 194,          /* field_init_list  */
  YYSYMBOL_field_init_item = 195,          /* field_init_item  */
  YYSYMBOL_label_decl_part = 196,          /* label_decl_part  */
  YYSYMBOL_label_list = 197,               /* label_list  */
  YYSYMBOL_const = 198,                    /* const  */
  YYSYMBOL_const_def_part = 199,           /* const_def_part  */
  YYSYMBOL_const_def_list = 200,           /* const_def_list  */
  YYSYMBOL_const_def = 201,                /* const_def  */
  YYSYMBOL_type_def_part = 202,            /* type_def_part  */
  YYSYMBOL_type_def_list = 203,            /* type_def_list  */
  YYSYMBOL_type_def = 204,                 /* type_def  */
  YYSYMBOL_var_decl_part = 205,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 206,            /* var_decl_list  */
  YYSYMBOL_var_decl = 207,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 208,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 209,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 210,        /* operator_fwd_decl  */
  YYSYMBOL_property_decl = 211,            /* property_decl  */
  YYSYMBOL_property_decl_list = 212,       /* property_decl_list  */
  YYSYMBOL_prop_array = 213,               /* prop_array  */
  YYSYMBOL_prop_index = 214,               /* prop_index  */
  YYSYMBOL_prop_type_def = 215,            /* prop_type_def  */
  YYSYMBOL_prop_read = 216,                /* prop_read  */
  YYSYMBOL_prop_write = 217,               /* prop_write  */
  YYSYMBOL_prop_stored = 218,              /* prop_stored  */
  YYSYMBOL_prop_default = 219,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 220,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 221,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 222,          /* prop_param_decl  */
  YYSYMBOL_proc_def = 223,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 224,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 225,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 226,                /* qualifier  */
  YYSYMBOL_qualifiers = 227,               /* qualifiers  */
  YYSYMBOL_formal_params = 228,            /* formal_params  */
  YYSYMBOL_formal_param_list = 229,        /* formal_param_list  */
  YYSYMBOL_formal_param = 230,             /* formal_param  */
  YYSYMBOL_param_decl = 231,               /* param_decl  */
  YYSYMBOL_param_type = 232,               /* param_type  */
  YYSYMBOL_type = 233,                     /* type  */
  YYSYMBOL_const_type = 234,               /* const_type  */
  YYSYMBOL_fptr_type = 235,                /* fptr_type  */
  YYSYMBOL_string_type = 236,              /* string_type  */
  YYSYMBOL_simple_templ_type = 237,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 238,              /* simple_type  */
  YYSYMBOL_array_type = 239,               /* array_type  */
  YYSYMBOL_const_array_type = 240,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 241,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 242,                /* enum_type  */
  YYSYMBOL_range_type = 243,               /* range_type  */
  YYSYMBOL_pointer_type = 244,             /* pointer_type  */
  YYSYMBOL_set_type = 245,                 /* set_type  */
  YYSYMBOL_const_set_type = 246,           /* const_set_type  */
  YYSYMBOL_record_type = 247,              /* record_type  */
  YYSYMBOL_record_body = 248,              /* record_body  */
  YYSYMBOL_record_components = 249,        /* record_components  */
  YYSYMBOL_record_component = 250,         /* record_component  */
  YYSYMBOL_record_methods = 251,           /* record_methods  */
  YYSYMBOL_record_method_decl = 252,       /* record_method_decl  */
  YYSYMBOL_record_field_list = 253,        /* record_field_list  */
  YYSYMBOL_interface_type = 254,           /* interface_type  */
  YYSYMBOL_interface_components = 255,     /* interface_components  */
  YYSYMBOL_interface_component = 256,      /* interface_component  */
  YYSYMBOL_guid = 257,                     /* guid  */
  YYSYMBOL_class_or_object = 258,          /* class_or_object  */
  YYSYMBOL_class_type = 259,               /* class_type  */
  YYSYMBOL_object_body = 260,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 261,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 262,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 263,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 264,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 265,        /* object_components  */
  YYSYMBOL_object_component = 266,         /* object_component  */
  YYSYMBOL_field_decl_part = 267,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 268,          /* field_decl_list  */
  YYSYMBOL_object_methods = 269,           /* object_methods  */
  YYSYMBOL_object_properties = 270,        /* object_properties  */
  YYSYMBOL_method_decl_list = 271,         /* method_decl_list  */
  YYSYMBOL_method_decl = 272,              /* method_decl  */
  YYSYMBOL_file_type = 273,                /* file_type  */
  YYSYMBOL_packed = 274,                   /* packed  */
  YYSYMBOL_conformant_indices = 275,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 276,         /* conformant_index  */
  YYSYMBOL_indices = 277,                  /* indices  */
  YYSYMBOL_index_spec = 278,               /* index_spec  */
  YYSYMBOL_field_list = 279,               /* field_list  */
  YYSYMBOL_fixed_part = 280,               /* fixed_part  */
  YYSYMBOL_variant_part = 281,             /* variant_part  */
  YYSYMBOL_selector = 282,                 /* selector  */
  YYSYMBOL_variant_list = 283,             /* variant_list  */
  YYSYMBOL_variant = 284                   /* variant  */
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
#define YYLAST   1768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  418
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  791

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   389


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
      90,    91,     2,     2,    87,     2,    86,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    89,
       2,     2,     2,     2,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,    94,     2,     2,     2,     2,     2,
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
      85,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   395,   395,   395,   420,   420,   420,   422,   423,   426,
     426,   428,   429,   435,   437,   439,   441,   443,   446,   448,
     451,   452,   454,   454,   470,   472,   473,   477,   477,   479,
     480,   482,   484,   487,   488,   490,   490,   490,   490,   491,
     491,   491,   493,   495,   499,   500,   502,   502,   502,   502,
     503,   503,   503,   532,   533,   535,   539,   542,   544,   547,
     548,   550,   551,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   570,   572,
     573,   576,   577,   579,   580,   581,   582,   583,   584,   586,
     588,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   600,   602,   603,   606,   606,   613,   614,
     626,   626,   628,   629,   630,   632,   634,   635,   637,   638,
     662,   663,   664,   665,   666,   667,   668,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   680,   681,   682,   683,
     684,   685,   686,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   698,   699,   701,   703,   705,   707,   708,   710,
     711,   712,   713,   714,   715,   716,   719,   720,   721,   722,
     723,   724,   725,   727,   728,   729,   731,   732,   734,   734,
     736,   737,   739,   739,   742,   744,   745,   747,   798,   801,
     802,   803,   804,   806,   806,   808,   810,   811,   813,   815,
     817,   819,   821,   823,   826,   829,   830,   832,   833,   834,
     836,   838,   839,   854,   856,   857,   877,   879,   891,   893,
     897,   899,   911,   913,   917,   921,   924,   925,   927,   928,
     930,   931,   933,   934,   936,   937,   939,   940,   942,   943,
     945,   946,   948,   949,   952,   953,   955,   959,   961,   963,
     965,   967,   969,   971,   973,   986,   986,   986,   986,   986,
     986,   986,   986,   986,   986,   988,   988,   988,   988,   988,
     988,   988,   990,   990,   992,   993,   996,   997,   999,  1000,
    1002,  1003,  1004,  1005,  1008,  1009,  1010,  1012,  1012,  1018,
    1018,  1018,  1018,  1018,  1018,  1018,  1019,  1019,  1019,  1019,
    1019,  1019,  1021,  1021,  1021,  1021,  1021,  1023,  1025,  1027,
    1029,  1032,  1034,  1036,  1037,  1038,  1040,  1042,  1045,  1048,
    1050,  1053,  1055,  1058,  1060,  1062,  1072,  1074,  1077,  1084,
    1085,  1087,  1093,  1095,  1096,  1098,  1100,  1101,  1102,  1103,
    1105,  1106,  1109,  1111,  1113,  1115,  1117,  1120,  1124,  1126,
    1128,  1130,  1135,  1144,  1146,  1147,  1149,  1150,  1154,  1154,
    1156,  1158,  1160,  1162,  1164,  1168,  1177,  1178,  1181,  1181,
    1183,  1183,  1183,  1185,  1186,  1188,  1189,  1190,  1192,  1201,
    1203,  1204,  1206,  1207,  1208,  1209,  1210,  1213,  1215,  1218,
    1219,  1221,  1223,  1226,  1227,  1230,  1232,  1234,  1236,  1240,
    1242,  1242,  1244,  1245,  1247,  1250,  1251,  1254,  1255,  1258,
    1260,  1263,  1265,  1268,  1269,  1272,  1273,  1274,  1276
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
  "ASM", "BEGIN", "CASE", "CDECL", "CLASS", "CONST", "DEFAULT",
  "DEPRECATED", "DO", "DOTS", "DYNAMIC", "ELSE", "END", "EXCEPT",
  "EXTERNAL", "FIL", "FINAL", "FINALIZATION", "FINALLY", "FAR", "FOR",
  "FORWARD", "FUNCTION", "GOTO", "IDENT", "ICONST", "IF", "IMPLEMENTATION",
  "INDEX", "INHERITED", "INITIALIZATION", "INTERFACE", "LABEL", "OBJECT",
  "OF", "ON", "OPERATOR", "ORIGIN", "OTHERWISE", "OVERLOAD", "OVERRIDE",
  "OUT", "PACKED", "PASCAL", "PROCEDURE", "PROGRAM", "PROPERTY", "PRIVATE",
  "PROTECTED", "PUBLIC", "PUBLISHED", "RAISE", "RCONST", "READ", "RECORD",
  "REGISTER", "REINTRODUCE", "REPEAT", "RESOURCESTRING", "SAFECALL", "SET",
  "SCONST", "STATIC", "STDCALL", "STORED", "STRICT", "STRING", "THEN",
  "TO", "TRY", "TYPE", "UNTIL", "UNIT", "UNIT_END", "VAR", "VARARGS",
  "VIRTUAL", "WHILE", "WINAPI", "WITH", "WRITE", "'.'", "','", "':'",
  "';'", "'('", "')'", "'['", "']'", "'^'", "'@'", "SCOPE", "LET",
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
  "case_items", "case_item", "case_elem_list", "case_elem", "expr",
  "simple_expr", "primary", "constant", "set_elem_list", "set_elem",
  "expr_list", "act_param_list", "act_param", "record_constant",
  "field_init_list", "field_init_item", "label_decl_part", "label_list",
  "const", "const_def_part", "const_def_list", "const_def",
  "type_def_part", "type_def_list", "type_def", "var_decl_part",
  "var_decl_list", "var_decl", "proc_fwd_decl", "proc_spec",
  "operator_fwd_decl", "property_decl", "property_decl_list", "prop_array",
  "prop_index", "prop_type_def", "prop_read", "prop_write", "prop_stored",
  "prop_default", "prop_default_directive", "prop_param_list",
  "prop_param_decl", "proc_def", "fun_qualifier", "meth_qualifier",
  "qualifier", "qualifiers", "formal_params", "formal_param_list",
  "formal_param", "param_decl", "param_type", "type", "const_type",
  "fptr_type", "string_type", "simple_templ_type", "simple_type",
  "array_type", "const_array_type", "conformant_array_type", "enum_type",
  "range_type", "pointer_type", "set_type", "const_set_type",
  "record_type", "record_body", "record_components", "record_component",
  "record_methods", "record_method_decl", "record_field_list",
  "interface_type", "interface_components", "interface_component", "guid",
  "class_or_object", "class_type", "object_body", "record_access_spec_tok",
  "class_access_spec_tok", "record_access_spec_decl",
  "class_access_spec_decl", "object_components", "object_component",
  "field_decl_part", "field_decl_list", "object_methods",
  "object_properties", "method_decl_list", "method_decl", "file_type",
  "packed", "conformant_indices", "conformant_index", "indices",
  "index_spec", "field_list", "fixed_part", "variant_part", "selector",
  "variant_list", "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-658)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-314)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -658,    97,   267,  -658,   377,   137,  -658,    70,  1373,   188,
     196,    60,  -658,   119,   155,   219,  -658,  -658,  -658,  -658,
     107,   194,   619,  -658,  -658,  -658,   182,  -658,  -658,  -658,
    -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,
    -658,  -658,  -658,  -658,  -658,   377,   211,   228,   231,   255,
     177,   185,   241,  1373,   300,   262,  -658,    31,  1373,  -658,
    -658,  -658,  -658,  -658,  -658,   146,   218,   224,   245,   185,
     238,   204,  -658,   251,   239,   264,  -658,  -658,   273,   263,
    -658,   268,  -658,   891,  -658,  -658,    16,  -658,   279,  -658,
    -658,   283,   248,   288,   219,   170,   287,   290,   185,   185,
     302,   185,   185,   294,   619,  -658,  -658,   188,   188,  -658,
     219,   295,   297,   219,   307,   343,    59,   119,   813,   353,
     219,   813,   219,   800,   219,   270,   309,   310,   800,  -658,
     372,   800,  -658,   891,  -658,   891,   800,   800,  1210,   800,
    -658,  -658,  -658,   314,  -658,   387,   653,  -658,  -658,    59,
     800,   182,   219,   376,   320,   219,   185,   219,   219,   219,
     322,   321,   327,  -658,   813,   813,   331,   332,   333,   337,
     394,    88,  -658,  -658,  -658,   185,  1420,  1470,   340,   246,
    -658,   185,   157,  -658,    43,  -658,  -658,   185,   342,   813,
    1216,   813,   325,   800,   800,   325,   800,   800,   982,  -658,
     675,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,
    -658,  -658,  -658,  1363,  -658,  -658,    78,   346,   329,  -658,
    -658,  -658,  -658,  -658,    87,  -658,  -658,  1373,  -658,   430,
    -658,  -658,  1244,   349,  -658,  -658,   891,   891,  1520,   357,
    1641,   367,   143,   931,  1584,   437,   364,   360,   365,   366,
    1015,   370,   373,   891,  -658,   219,   800,   800,  -658,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   389,   611,
    -658,   185,   185,   813,   185,   371,  -658,  -658,  -658,   159,
    -658,   170,   404,   407,   813,   813,  1470,  1470,  1373,   411,
     412,   410,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,
    -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,   420,
     194,  -658,  -658,  -658,   421,   422,  -658,   414,    35,   425,
     219,  -658,   485,   450,   136,   479,   800,  -658,   220,   256,
     428,  -658,   172,  -658,   172,  -658,   172,  -658,  -658,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,    41,  -658,   491,  -658,  -658,  -658,  -658,   311,   219,
     219,  -658,  -658,   434,  -658,  -658,   474,  -658,   509,  -658,
    -658,   219,  -658,   452,  -658,   452,  -658,  -658,  -658,    68,
       4,   489,  1545,   490,  -658,   438,   494,    61,   469,   800,
     800,  -658,  -658,   891,   800,   800,   496,   891,   891,   800,
     891,   800,  -658,  -658,   511,   800,  -658,   800,  -658,  -658,
    1641,   447,   454,   453,  1641,  1641,  1641,  1641,  1641,  1641,
    1641,  1641,  1641,   800,   477,   459,   460,   462,   463,   813,
    -658,   443,  -658,  -658,   549,  -658,  1420,  1470,   465,   466,
     478,  -658,  -658,   246,  -658,  1470,  1470,  -658,  -658,  -658,
     813,  -658,   467,   468,   174,   543,   136,  -658,  -658,   526,
    1619,  -658,  1641,  1029,  1029,  1029,  1029,  1029,  1029,  1029,
    1029,   363,   363,   363,   363,   363,  -658,  -658,  -658,  -658,
    -658,  -658,  -658,  -658,  -658,  1641,  1641,  1641,  1641,  1641,
    1641,  1641,  1641,  1641,   219,  -658,  -658,   473,  -658,  -658,
    -658,   482,   219,  -658,  -658,  -658,  -658,  -658,  -658,   813,
    1204,   813,   140,  -658,   516,   219,  -658,  -658,  -658,  -658,
     552,  -658,   608,  -658,   183,   608,  -658,   219,  -658,  -658,
    -658,   563,   813,  1204,    59,   619,  -658,  -658,   561,    86,
     495,   497,   500,  1067,  1543,   573,   502,  1641,   566,   303,
     507,   580,  -658,  -658,  -658,  1641,   364,  -658,  1641,  -658,
    -658,   800,  -658,   894,  -658,   813,   813,   246,   246,   510,
     800,   512,   514,   517,   519,  1470,  1470,   523,  -658,   574,
      42,  -658,  -658,  -658,  -658,  -658,  -658,   219,   528,  1512,
    -658,  -658,   192,  1105,  -658,   521,   518,  -658,   592,  -658,
    -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,   847,
    -658,  -658,   531,  -658,   156,  -658,  -658,  -658,   891,   800,
     891,   800,   800,   800,   891,  -658,   537,   891,  -658,   496,
    -658,  -658,   564,   538,   542,   547,   550,   246,  1641,   609,
    -658,  1470,  1470,  -658,   613,  -658,   136,   565,   556,   569,
     813,   630,  -658,   635,   800,   625,  1204,   185,    39,  -658,
     626,   628,   583,    63,   655,   584,  -658,  -658,  -658,  -658,
    1641,   953,  -658,    89,   656,  -658,  -658,   246,   246,  -658,
    -658,   588,   665,   587,   595,  -658,   664,   159,  -658,   219,
    -658,   179,   627,  -658,  1641,   813,  -658,   598,   813,   800,
      59,  -658,   891,    63,  -658,  -658,   602,  -658,   891,   676,
    -658,   601,   603,  -658,   662,   654,   609,  -658,  -658,  -658,
     511,  -658,   666,   614,  -658,   813,  -658,   624,  -658,   651,
    -658,   680,  -658,  -658,  -658,   891,  -658,  -658,   658,   159,
    -658,  -658,   684,   645,   652,   659,   800,    63,  -658,   813,
    -658,  -658,  -658,   713,   733,  -658,   219,  -658,   891,  -658,
    -658,   179,   673,   657,  -658,  -658,   752,  -658,   677,  -658,
    -658
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    33,     1,     0,     0,   193,     0,    44,     0,
       0,     0,   194,   205,     0,   211,     3,     4,     5,     6,
       0,    11,    33,    41,    32,    35,   196,    36,    37,    38,
      40,    39,    91,    93,   100,    95,    98,    99,    96,    97,
      94,   101,   102,    92,   103,   104,     0,     0,     0,     0,
     276,   276,     0,    44,     0,     0,    52,     0,    44,    46,
      47,    48,    49,    51,    50,   191,   189,     0,   276,   276,
      25,     0,   204,     0,     0,     0,    27,    28,    30,     0,
     210,     0,     7,    63,    31,    34,     0,   195,     0,   105,
      90,     0,   276,     0,     0,     0,     0,     0,   276,   276,
       0,   276,   276,     0,    33,    43,    45,     0,     0,   188,
       0,     0,     0,     0,     0,   400,   400,   205,   400,     0,
       0,   400,   211,     0,     0,     0,   171,   167,     0,   172,
      53,     0,   168,    63,   169,    63,     0,     0,     0,   173,
     165,    87,    88,   106,    86,     0,    82,   159,   166,   400,
       0,   196,     0,     0,     0,     0,   276,     0,     0,     0,
     286,     0,   278,   283,   400,   400,     0,     0,     0,     0,
       0,     0,    24,   192,   190,   276,    33,     0,     0,    33,
     359,   276,   171,   167,   356,   358,   401,   276,   315,   400,
       0,   400,     0,     0,     0,     0,     0,     0,     0,   120,
     152,   207,   300,   299,   301,   289,   290,   297,   298,   296,
     294,   291,   293,   364,   292,   295,     0,   313,     0,   306,
     302,   303,   305,   304,     0,   206,   209,    44,    29,   213,
     212,   171,     0,     0,    74,    73,    63,    63,     0,    54,
      81,     0,     0,     0,   178,     0,   171,     0,     0,   185,
     176,     0,   174,    63,    89,     0,   183,     0,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
     197,   276,   276,   400,   276,     0,   281,   282,   280,   400,
     277,     0,     0,     0,   400,   400,   220,   222,    44,     0,
       0,     0,   266,   259,   268,   264,   271,   255,   256,   270,
     258,   257,   265,   261,   269,   260,   263,   267,   262,     0,
       0,   272,   273,   274,     0,     0,    26,     0,     9,     0,
       0,   351,     0,     0,     0,   309,     0,   208,   171,   172,
       0,   323,   157,   153,   152,   154,   158,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,     0,   368,   371,   369,   372,     0,     0,
       0,   385,   386,     0,   395,   396,   226,   392,     0,   370,
     375,   380,   366,   379,   382,   367,   383,   384,   391,   393,
       0,     0,     0,     0,   312,     0,     0,     0,   214,   112,
       0,    85,    84,    63,   183,     0,    61,    63,    63,     0,
      63,     0,   160,   184,     0,     0,   170,   173,   107,   162,
     182,     0,   180,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,   199,     0,     0,     0,     0,   400,
     315,   284,   287,   288,     0,   279,    33,     0,     0,     0,
       0,    15,    16,    33,   247,   216,   218,     8,    10,    12,
     400,   314,     0,     0,     0,     0,   353,   354,   355,     0,
       0,   321,   322,   147,   148,   144,   145,   143,   146,   149,
     150,   121,   122,   140,   142,   141,   123,   125,   126,   124,
     136,   139,   138,   137,   151,   127,   128,   129,   130,   131,
     134,   135,   132,   133,     0,   397,   398,   228,   376,   377,
     387,     0,   389,   227,   360,   381,   378,   365,   394,   400,
       0,   400,     0,   327,     0,     0,   338,   339,   342,   343,
       0,   329,   332,   336,   340,   330,   373,   333,   411,   337,
     347,   410,   400,     0,   400,    33,    42,   215,     0,   108,
     113,     0,   116,   118,     0,    76,     0,    80,     0,     0,
      59,     0,    79,   179,    83,   187,     0,   186,   177,   175,
     161,   183,   164,   201,   200,   400,   400,    33,    33,     0,
       0,     0,     0,     0,     0,   221,   223,     0,   275,   307,
     356,   357,   348,   352,   310,   311,   388,     0,   232,     0,
     390,   317,   171,     0,   407,     0,   405,   399,     0,   344,
     345,   346,   374,   335,   326,   331,   341,   328,   334,   400,
     409,   324,     0,   325,     0,    75,   111,   110,    63,   112,
      63,     0,     0,     0,    63,    55,     0,    63,    57,    61,
      56,   181,   202,     0,     0,     0,     0,    33,   285,     0,
     248,   217,   219,   249,     0,   350,     0,     0,     0,   244,
     400,   230,   362,     0,     0,     0,     0,   276,   171,   414,
       0,     0,     0,    20,     0,     0,   109,   114,   115,   117,
     119,     0,    77,     0,     0,    60,   203,    33,    33,   253,
     251,     0,     0,     0,   402,   308,     0,   400,   229,     0,
     233,     0,   234,   361,   408,   400,   406,     0,   400,     0,
     400,    13,    63,    20,    22,    23,     0,    14,    63,     0,
      58,     0,     0,   250,     0,     0,     0,   349,   246,   245,
       0,   231,     0,   236,   316,   400,   413,     0,   412,   415,
     318,    18,    21,    17,    78,    63,   252,   254,     0,   400,
     403,   235,     0,   238,     0,     0,   416,    20,    62,   400,
     319,   320,   237,     0,   240,   224,     0,   417,    63,   404,
     239,     0,     0,     0,    19,   241,   242,   418,     0,   225,
     243
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -658,  -657,
    -658,   209,  -658,   -24,   -83,  -107,    45,  -658,    26,   -20,
    -658,  -658,  -658,  -658,   122,  -658,  -216,   -12,  -658,  -658,
    -658,   723,  -130,  -658,  -658,   142,  -658,   141,  -658,   444,
      96,   -81,  -640,   388,  -658,  -133,  -387,  -658,  -658,   392,
    -658,    27,   259,  -658,    -8,   667,  -658,    34,   700,  -658,
      -7,   697,    14,     0,   100,  -658,  -658,   435,  -658,  -658,
    -658,  -658,  -658,  -658,  -658,  -658,   111,  -658,  -658,  -658,
    -658,  -440,  -155,   -37,   544,  -658,    81,   116,  -108,  -143,
    -658,  -101,    23,  -105,  -658,  -658,    65,  -658,  -658,  -658,
    -658,  -658,  -100,  -658,  -388,  -658,   282,  -658,   280,  -658,
    -452,  -658,   232,  -658,  -658,   222,  -363,  -658,  -658,  -658,
     -45,  -658,  -658,  -196,  -305,  -301,   429,  -658,  -658,  -109,
      99,  -658,  -525,  -658,  -517,  -658,  -658,  -658,    71,  -658
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   469,    18,    19,   684,   722,
     723,   171,   114,    78,    79,    20,   310,    22,    23,    57,
      58,   140,   141,   142,   569,   570,   143,   144,    24,    44,
      45,    46,   145,   558,   638,   559,   560,   561,   562,   198,
     199,   200,   147,   251,   252,   247,   431,   432,   148,   248,
     249,    25,    67,    26,    27,    87,    88,    28,    72,    73,
      29,    80,   383,    30,   385,   621,   386,   387,   608,   712,
     671,   743,   763,   774,   782,   789,   668,   669,    31,   311,
     312,   313,   314,    96,   161,   162,   163,   451,   201,   218,
     202,   203,   204,   205,   206,   221,   453,   207,   208,   209,
     210,   222,   211,   540,   541,   542,   543,   544,   545,   212,
     475,   476,   324,   213,   214,   388,   389,   390,   547,   391,
     392,   393,   394,   548,   396,   397,   398,   399,   215,   216,
     703,   704,   615,   616,   550,   551,   630,   680,   748,   749
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,   146,   241,   245,   242,   268,   224,    63,    84,
     226,   220,   160,   229,    97,   219,   223,   395,   623,   477,
     411,   412,   315,   478,   603,   598,   598,   566,   632,    81,
     178,   111,   112,   100,    56,    59,    74,   228,   106,   546,
     224,    83,    61,   529,   220,    60,    62,    21,   219,   223,
      60,    62,   146,    63,   146,   154,   282,   283,    63,   665,
     321,   166,   167,   104,   168,   169,   752,    85,    52,   309,
     156,   741,   317,     6,   160,   160,   160,   474,  -313,    56,
      59,   327,   400,   331,    56,    59,   175,    61,   217,    70,
      54,   405,    61,   555,    83,    52,   530,     3,   401,    50,
     233,   549,   636,    51,   149,   289,   186,   330,    64,   105,
     778,   332,   334,   334,   336,   334,   334,    54,   217,   275,
     514,   468,   150,   428,   433,   320,    12,   718,   271,   637,
     188,   274,   315,   322,   323,   323,    81,   402,   291,   556,
      74,   785,    15,   403,   319,   474,   402,   116,    71,   172,
     325,   716,   406,    64,   625,   146,   146,   627,    64,   290,
     450,   416,    83,    52,    47,   447,   417,    52,  -313,  -313,
     454,   477,   146,   682,   452,   478,   458,   459,    48,   546,
     157,   618,   546,   520,    75,    54,    49,   373,   217,    54,
    -313,   683,   532,    82,   651,   525,  -313,   565,   160,    76,
      83,    52,   572,    77,   574,   381,   186,   407,   231,   183,
      52,    86,   129,   384,   706,  -313,   158,    65,    66,    60,
      62,   598,   598,    54,   318,    68,  -313,    63,    90,    69,
     450,   429,    54,   107,   445,   446,   132,   448,   276,   277,
     278,   549,  -313,   320,   549,   134,  -313,   382,    76,   159,
    -313,     4,    77,    56,    59,     5,     6,    91,   255,   783,
      92,    61,   256,    94,   257,   116,   258,    95,   460,   740,
      98,   139,     4,     7,    99,    95,     5,     6,   320,  -313,
      60,    62,    53,     9,    93,  -313,   573,   571,    63,   333,
     335,   103,   337,   338,     7,    10,   471,   521,    84,   234,
     235,   593,   594,     8,     9,   108,    84,   -27,   421,    12,
     115,   -27,   116,   109,    56,    59,    10,    11,   606,   647,
     648,    13,    61,    55,   384,    15,   610,    64,   113,   101,
      12,   110,   146,   102,   153,    95,   146,   146,    95,   146,
     117,   589,    13,   -28,    14,   118,    15,   -28,   526,   592,
     527,   121,   180,   119,   231,   183,   597,   122,   129,   130,
     120,   477,   599,   518,   519,   478,   173,   174,   151,   152,
     181,   515,   182,   183,   155,   164,   129,   130,   165,   184,
     105,   185,   132,   170,   176,   381,   177,   381,    64,   227,
     186,   134,   187,   384,   536,   384,   179,   236,   237,   384,
     132,   239,   538,   253,   254,   272,    32,    33,   273,   134,
     279,   633,   280,   395,   188,   138,   281,   139,   189,   284,
     285,   611,   286,   617,   688,   614,   287,   382,   692,   382,
     288,   316,   320,   190,   326,   139,   537,   191,   192,   404,
     593,   594,   408,   415,   631,   224,   410,   414,   614,   220,
     420,   422,   421,   219,   223,   424,   423,   193,   194,   449,
     427,   371,     6,   426,    34,    35,   195,    36,    37,    38,
      39,   516,    40,   196,   515,   197,   384,   653,   654,    52,
     655,   656,   353,   354,   355,   356,   357,   358,   359,   360,
     361,    41,    42,   456,    43,   443,   457,   461,   462,   463,
     467,    54,   539,   373,   374,   375,   376,   377,   686,   464,
     465,   466,   754,   470,   472,    12,   473,   694,   479,   481,
     517,   679,   378,   522,   667,   373,   524,    13,   531,   552,
     553,   379,   619,   554,   536,   557,   568,   536,   580,   768,
     576,   581,   538,   584,   538,   538,   582,   585,   586,   590,
     701,   587,   588,   591,   595,   596,   556,   146,   600,   146,
     602,   601,   710,   146,   604,   607,   146,   232,   622,   624,
     629,   614,   238,   609,   516,   240,   537,   750,   635,   537,
     243,   244,   244,   250,   639,   640,   747,   641,   729,   644,
     731,   732,   751,   645,   269,   646,   649,   650,   454,   657,
     172,   381,   452,   660,   659,   676,   661,   744,   662,   384,
     746,   224,   663,   664,   675,   220,   670,   532,     6,   219,
     223,   677,   685,   444,   681,   693,   667,   697,     5,     6,
     696,   698,   620,   747,   244,    52,   699,   764,   702,   700,
     717,   146,   539,   382,   539,   539,     7,   146,   784,   708,
     454,   705,   713,   707,   770,    53,     9,    54,   709,   373,
     374,   779,   376,   711,   715,   719,   384,   720,    10,   721,
     727,    12,   726,   730,   146,   724,   725,   733,   534,   734,
     735,   737,    12,    13,   736,   742,   745,   535,   753,   755,
     756,   758,   757,   759,    13,   761,    55,   146,    15,   762,
     430,   244,   767,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   765,   772,   773,   724,   725,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   255,
     766,   775,   780,   256,   781,   257,   769,   258,   787,   776,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   724,
     725,   255,   786,   788,   634,   256,   790,   257,    89,   258,
     480,   695,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   687,   689,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   579,   577,   225,   270,   230,
     739,   523,   180,   738,   771,   455,   626,   628,   528,   231,
     183,   673,   666,   129,   130,   760,     0,   777,     0,     0,
     181,     0,   182,   183,     0,     0,   129,   130,     0,   184,
       0,   185,     0,   563,   564,     0,   180,   132,   430,   567,
     186,     0,   187,   244,     0,   575,   134,     0,     0,   578,
     132,   250,     0,     0,   181,     0,   678,   183,     0,   134,
     129,   130,     0,   184,   188,   185,     0,   583,     0,     0,
     138,     0,   139,     0,   186,   192,   187,    83,   123,     0,
       0,     0,     0,   190,   132,   139,   652,   191,   192,     0,
       0,     0,     0,   134,   193,   194,   124,     0,   188,   125,
     126,   127,   128,   195,   129,   130,     0,   193,   194,     0,
     196,     0,   197,     0,     0,     0,   195,   190,     0,   139,
       0,   191,   192,   196,   418,   197,     0,   131,   132,     0,
       0,     0,     0,   133,     0,     0,     0,   134,     0,     0,
       0,   193,   194,     0,     0,   135,   728,     0,     0,     0,
     195,     0,     0,   136,   613,   137,     0,   196,     0,   197,
       0,   138,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   339,   613,     0,     0,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,     0,     0,     0,   430,     0,     0,     0,   425,
       0,     0,     0,     0,   658,     0,     0,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   642,     0,   563,     0,   563,   690,   691,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
       0,     0,     0,     0,     0,     0,     0,     0,   714,   674,
     613,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,     0,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   612,   183,     0,     0,   129,   130,   246,
     183,     0,     0,   129,   130,   328,   183,     0,     0,   329,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,   132,     0,     0,
     134,     0,     0,   132,     0,   450,   134,     0,     0,     0,
       0,     0,   134,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,   139,     0,     0,   192,
     138,     0,   139,     0,     0,   192,   138,     0,   139,     0,
       0,   192,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
     193,   194,     0,   195,   196,     0,   197,     0,     0,   195,
     196,     0,   197,     0,     0,     0,   196,     0,   197,     0,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   371,     6,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      52,     0,    76,     0,     0,     0,    77,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       9,     0,    54,     0,   373,   374,   375,   376,   377,     0,
       0,     0,    54,   292,     0,     4,    12,     0,   293,     5,
       6,     0,     0,   378,     0,   294,    12,     0,    13,   295,
       0,   296,   379,     0,     0,     0,   297,     7,    13,     0,
      55,     0,    15,   380,     0,     0,    53,     9,     0,     0,
       0,     0,     0,     0,   298,   299,     0,     0,   300,    10,
       0,     0,     0,   292,     0,     0,     0,     0,   293,     0,
     301,   302,     0,    12,   303,   294,     0,   304,   305,   295,
       0,   296,     0,     0,     0,    13,   297,    55,     0,    15,
     306,   307,     0,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   298,   299,     0,     0,   300,     0,
       0,   371,     6,     0,     0,     0,     0,     0,     0,   672,
     301,   302,     0,     0,   303,     0,     0,   304,   305,    52,
       0,    76,     0,     0,     0,    77,     0,     0,     0,     0,
     306,   307,     0,   308,   532,     6,     0,     0,     0,     0,
       0,    54,   533,   373,   374,   375,   376,   377,     0,     0,
       0,     0,    52,     0,    76,    12,     0,     0,    77,     0,
       0,     0,   378,     0,     0,     0,     0,    13,     0,     0,
       0,   379,   413,     0,    54,     0,   373,   374,     0,   376,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,   534,   643,     0,     0,     0,
      13,     0,     0,     0,   535,     0,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,     0,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   419,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   605,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361
};

static const yytype_int16 yycheck[] =
{
       8,     8,    83,   133,   137,   135,   149,   116,     8,    21,
     118,   116,    95,   121,    51,   116,   116,   213,   535,   324,
     236,   237,   177,   324,   476,   465,   466,   414,   553,    15,
     113,    68,    69,    53,     8,     8,    13,   120,    58,   402,
     149,     6,     8,    39,   149,    53,    53,     2,   149,   149,
      58,    58,   133,    53,   135,    92,   164,   165,    58,    17,
      17,    98,    99,    32,   101,   102,   723,    22,    27,   176,
      94,   711,   179,    10,   157,   158,   159,     9,    39,    53,
      53,   189,     4,   191,    58,    58,   110,    53,    29,    29,
      49,     4,    58,    32,     6,    27,    92,     0,    20,    29,
     124,   402,    16,    33,    88,    17,    47,   190,     8,    78,
     767,   192,   193,   194,   195,   196,   197,    49,    29,   156,
      79,    86,   106,   253,   257,    86,    63,    88,   152,    43,
      71,   155,   287,    90,    92,    92,   122,    59,   175,    78,
     117,   781,    79,    65,   181,     9,    59,   108,    29,   104,
     187,   676,    65,    53,   542,   236,   237,   545,    58,   171,
      71,    18,     6,    27,    27,   273,    23,    27,    11,    12,
     279,   476,   253,    17,   279,   476,   284,   285,    41,   542,
      10,    41,   545,   379,    29,    49,    49,    51,    29,    49,
      33,    35,     9,    86,   581,   391,    39,   413,   281,    29,
       6,    27,   418,    33,   420,   213,    47,   227,    29,    30,
      27,    29,    33,   213,   666,    58,    46,    29,    30,   227,
     227,   661,   662,    49,   179,    29,    69,   227,    17,    33,
      71,   255,    49,    87,   271,   272,    57,   274,   157,   158,
     159,   542,    85,    86,   545,    66,    89,   213,    29,    79,
      93,     5,    33,   227,   227,     9,    10,    29,    86,   776,
      29,   227,    90,    86,    92,   108,    94,    90,   288,    90,
      29,    92,     5,    27,    33,    90,     9,    10,    86,    87,
     288,   288,    36,    37,    29,    93,   419,   417,   288,   193,
     194,    29,   196,   197,    27,    49,   320,   380,   310,    29,
      30,   456,   457,    36,    37,    87,   318,    87,    88,    63,
     106,    91,   108,    89,   288,   288,    49,    50,   514,    16,
      17,    75,   288,    77,   324,    79,   522,   227,    90,    29,
      63,    86,   413,    33,    86,    90,   417,   418,    90,   420,
      89,   449,    75,    87,    77,   106,    79,    91,   393,   456,
     395,    88,     9,    89,    29,    30,   463,    89,    33,    34,
      87,   666,   470,    52,    53,   666,   107,   108,    89,    86,
      27,   371,    29,    30,    86,    88,    33,    34,    88,    36,
      78,    38,    57,    89,    89,   393,    89,   395,   288,    36,
      47,    66,    49,   393,   402,   395,    89,    88,    88,   399,
      57,    29,   402,    89,    17,    29,    29,    30,    88,    66,
      88,   554,    91,   609,    71,    90,    89,    92,    75,    88,
      88,   529,    89,   531,   640,   530,    89,   393,   644,   395,
      36,    91,    86,    90,    92,    92,   402,    94,    95,   110,
     595,   596,    12,    76,   552,   554,    97,    90,   553,   554,
      13,    91,    88,   554,   554,    89,    91,   114,   115,    88,
      87,     9,    10,    93,    87,    88,   123,    90,    91,    92,
      93,   371,    95,   130,   474,   132,   476,   585,   586,    27,
     587,   588,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   114,   115,    89,   117,   106,    89,    86,    86,    89,
      86,    49,   402,    51,    52,    53,    54,    55,   638,    89,
      89,    89,   728,    88,    29,    63,    66,   647,    39,    91,
      29,   629,    70,    89,   607,    51,    17,    75,    39,    39,
      92,    79,   532,    39,   542,    66,    40,   545,    91,   755,
      29,    87,   542,    66,   544,   545,    93,    88,    88,   106,
     657,    89,    89,     4,    89,    89,    78,   638,    91,   640,
      17,    93,   670,   644,    38,    92,   647,   123,    52,    17,
       7,   676,   128,    91,   474,   131,   542,   720,    17,   545,
     136,   137,   138,   139,    89,    88,   719,    87,   693,    16,
     697,   698,   722,    91,   150,    29,    89,    17,   707,    89,
     555,   609,   707,    89,    92,    87,    89,   715,    89,   609,
     718,   720,    89,    39,    93,   720,    88,     9,    10,   720,
     720,    29,   634,    12,    93,    88,   709,    89,     9,    10,
      66,    89,   532,   766,   190,    27,    89,   745,    29,    89,
     677,   722,   542,   609,   544,   545,    27,   728,   778,    93,
     759,    38,    17,    88,   759,    36,    37,    49,    89,    51,
      52,   769,    54,    33,    39,    39,   666,    39,    49,    86,
      86,    63,    17,    17,   755,   683,   683,    89,    70,    14,
      93,    17,    63,    75,    89,    58,    88,    79,    86,    13,
      89,    29,    89,    39,    75,    29,    77,   778,    79,    85,
     256,   257,    22,   259,   260,   261,   262,   263,   264,   265,
     266,   267,    88,    29,    69,   723,   723,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    86,
      89,    89,    29,    90,    11,    92,    88,    94,    91,    90,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   767,
     767,    86,    89,    11,   555,    90,    89,    92,    45,    94,
     326,   649,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   639,   641,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   427,   424,   117,   151,   122,
     709,   386,     9,   707,   759,   281,   544,   547,   399,    29,
      30,   609,   600,    33,    34,   736,    -1,   766,    -1,    -1,
      27,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    36,
      -1,    38,    -1,   409,   410,    -1,     9,    57,   414,   415,
      47,    -1,    49,   419,    -1,   421,    66,    -1,    -1,   425,
      57,   427,    -1,    -1,    27,    -1,    29,    30,    -1,    66,
      33,    34,    -1,    36,    71,    38,    -1,   443,    -1,    -1,
      90,    -1,    92,    -1,    47,    95,    49,     6,     7,    -1,
      -1,    -1,    -1,    90,    57,    92,    12,    94,    95,    -1,
      -1,    -1,    -1,    66,   114,   115,    25,    -1,    71,    28,
      29,    30,    31,   123,    33,    34,    -1,   114,   115,    -1,
     130,    -1,   132,    -1,    -1,    -1,   123,    90,    -1,    92,
      -1,    94,    95,   130,    13,   132,    -1,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,   114,   115,    -1,    -1,    74,    13,    -1,    -1,    -1,
     123,    -1,    -1,    82,   530,    84,    -1,   130,    -1,   132,
      -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,   553,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   581,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,   590,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    14,    -1,   639,    -1,   641,   642,   643,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   674,    14,
     676,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,   719,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     766,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    29,    30,    -1,    -1,    33,    34,    29,
      30,    -1,    -1,    33,    34,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      66,    -1,    -1,    57,    -1,    71,    66,    -1,    -1,    -1,
      -1,    -1,    66,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    92,    -1,    -1,    95,
      90,    -1,    92,    -1,    -1,    95,    90,    -1,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,   114,   115,    -1,   123,    -1,    -1,
     114,   115,    -1,   123,   130,    -1,   132,    -1,    -1,   123,
     130,    -1,   132,    -1,    -1,    -1,   130,    -1,   132,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    49,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    49,     3,    -1,     5,    63,    -1,     8,     9,
      10,    -1,    -1,    70,    -1,    15,    63,    -1,    75,    19,
      -1,    21,    79,    -1,    -1,    -1,    26,    27,    75,    -1,
      77,    -1,    79,    90,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    48,    49,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,    -1,
      60,    61,    -1,    63,    64,    15,    -1,    67,    68,    19,
      -1,    21,    -1,    -1,    -1,    75,    26,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      60,    61,    -1,    -1,    64,    -1,    -1,    67,    68,    27,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      80,    81,    -1,    83,     9,    10,    -1,    -1,    -1,    -1,
      -1,    49,    17,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    27,    -1,    29,    63,    -1,    -1,    33,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    72,    -1,    49,    -1,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    73,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   146,   147,     0,     5,     9,    10,    27,    36,    37,
      49,    50,    63,    75,    77,    79,   148,   149,   151,   152,
     160,   161,   162,   163,   173,   196,   198,   199,   202,   205,
     208,   223,    29,    30,    87,    88,    90,    91,    92,    93,
      95,   114,   115,   117,   174,   175,   176,    27,    41,    49,
      29,    33,    27,    36,    49,    77,   163,   164,   165,   196,
     199,   202,   205,   208,   209,    29,    30,   197,    29,    33,
      29,    29,   203,   204,   237,    29,    29,    33,   158,   159,
     206,   207,    86,     6,   172,   161,    29,   200,   201,   176,
      17,    29,    29,    29,    86,    90,   228,   228,    29,    33,
     164,    29,    33,    29,    32,    78,   164,    87,    87,    89,
      86,   228,   228,    90,   157,   106,   108,    89,   106,    89,
      87,    88,    89,     7,    25,    28,    29,    30,    31,    33,
      34,    56,    57,    62,    66,    74,    82,    84,    90,    92,
     166,   167,   168,   171,   172,   177,   186,   187,   193,    88,
     106,    89,    86,    86,   228,    86,   158,    10,    46,    79,
     159,   229,   230,   231,    88,    88,   228,   228,   228,   228,
      89,   156,   161,   197,   197,   158,    89,    89,   159,    89,
       9,    27,    29,    30,    36,    38,    47,    49,    71,    75,
      90,    94,    95,   114,   115,   123,   130,   132,   184,   185,
     186,   233,   235,   236,   237,   238,   239,   242,   243,   244,
     245,   247,   254,   258,   259,   273,   274,    29,   234,   236,
     238,   240,   246,   247,   274,   203,   233,    36,   159,   233,
     206,    29,   184,   158,    29,    30,    88,    88,   184,    29,
     184,   177,   177,   184,   184,   190,    29,   190,   194,   195,
     184,   188,   189,    89,    17,    86,    90,    92,    94,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   234,   184,
     200,   158,    29,    88,   158,   228,   231,   231,   231,    88,
      91,    89,   233,   233,    88,    88,    89,    89,    36,    17,
     172,   228,     3,     8,    15,    19,    21,    26,    44,    45,
      48,    60,    61,    64,    67,    68,    80,    81,    83,   160,
     161,   224,   225,   226,   227,   227,    91,   160,   161,   228,
      86,    17,    90,    92,   257,   228,    92,   233,    29,    33,
     159,   233,   186,   185,   186,   185,   186,   185,   185,    14,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     9,    17,    51,    52,    53,    54,    55,    70,    79,
      90,   199,   202,   207,   208,   209,   211,   212,   260,   261,
     262,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       4,    20,    59,    65,   110,     4,    65,   164,    12,    39,
      97,   171,   171,    72,    90,    76,    18,    23,    13,    87,
      13,    88,    91,    91,    89,    14,    93,    87,   177,   158,
     184,   191,   192,   190,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   106,    12,   228,   228,   233,   228,    88,
      71,   232,   238,   241,   274,   229,    89,    89,   233,   233,
     164,    86,    86,    89,    89,    89,    89,    86,    86,   150,
      88,   158,    29,    66,     9,   255,   256,   269,   270,    39,
     184,    91,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,    79,   208,   209,    29,    52,    53,
     268,   159,    89,   212,    17,   268,   265,   265,   271,    39,
      92,    39,     9,    17,    70,    79,   199,   202,   208,   209,
     248,   249,   250,   251,   252,   253,   261,   263,   268,   270,
     279,   280,    39,    92,    39,    32,    78,    66,   178,   180,
     181,   182,   183,   184,   184,   171,   191,   184,    40,   169,
     170,   177,   171,   190,   171,   184,    29,   194,   184,   188,
      91,    87,    93,   184,    66,    88,    88,    89,    89,   233,
     106,     4,   160,   227,   227,    89,    89,   160,   226,   233,
      91,    93,    17,   255,    38,    93,   268,    92,   213,    91,
     268,   233,    29,   184,   238,   277,   278,   233,    41,   208,
     209,   210,    52,   279,    17,   249,   251,   249,   253,     7,
     281,   233,   277,   234,   156,    17,    16,    43,   179,    89,
      88,    87,    14,    73,    16,    91,    29,    16,    17,    89,
      17,   191,    12,   233,   233,   160,   160,    89,   184,    92,
      89,    89,    89,    89,    39,    17,   257,   159,   221,   222,
      88,   215,    17,   260,    14,    93,    87,    29,    29,   233,
     282,    93,    17,    35,   153,   172,   177,   180,   171,   182,
     184,   184,   171,    88,   177,   169,    66,    89,    89,    89,
      89,   160,    29,   275,   276,    38,   255,    88,    93,    89,
     233,    33,   214,    17,   184,    39,   277,   228,    88,    39,
      39,    86,   154,   155,   199,   205,    17,    86,    13,   238,
      17,   160,   160,    89,    14,    93,    89,    17,   232,   221,
      90,   187,    58,   216,   233,    88,   233,   190,   283,   284,
     234,   177,   154,    86,   171,    13,    89,    89,    29,    39,
     275,    29,    85,   217,   233,    88,    89,    22,   171,    88,
     238,   241,    29,    69,   218,    89,    90,   283,   154,   233,
      29,    11,   219,   279,   177,   187,    89,    91,    11,   220,
      89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   145,   147,   146,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   172,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   181,   182,   182,   183,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   186,
     186,   186,   186,   186,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   193,   194,   194,   195,   196,   197,
     197,   197,   197,   198,   198,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   202,   203,   203,   204,   204,   204,
     205,   206,   206,   207,   207,   207,   208,   208,   208,   208,
     209,   209,   209,   209,   210,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   220,   220,   221,   221,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   225,   225,   225,
     225,   225,   226,   226,   227,   227,   228,   228,   229,   229,
     230,   230,   230,   230,   231,   231,   231,   232,   232,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   234,   234,   234,   234,   234,   235,   235,   235,
     235,   236,   237,   238,   238,   238,   239,   239,   240,   241,
     241,   242,   243,   244,   245,   246,   247,   247,   248,   248,
     248,   249,   249,   250,   250,   250,   250,   250,   250,   250,
     251,   251,   252,   252,   252,   252,   252,   253,   254,   254,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   259,   259,   259,   260,   260,   260,   261,   261,
     262,   262,   262,   263,   263,   264,   264,   264,   265,   265,
     266,   266,   266,   266,   266,   266,   266,   267,   267,   268,
     268,   269,   270,   271,   271,   272,   272,   272,   272,   273,
     274,   274,   275,   275,   276,   277,   277,   278,   278,   279,
     279,   280,   281,   282,   282,   283,   283,   283,   284
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     6,     0,
       1,     1,     6,     9,     9,     6,     6,    10,     3,     6,
       0,     2,     1,     1,     1,     0,     3,     1,     1,     3,
       1,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     6,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     5,     7,     1,
       3,     0,     6,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     5,     4,     6,     8,     4,
       4,     2,     1,     4,     3,     3,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     3,
       1,     1,     0,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     4,     3,     2,     4,     1,     1,     1,     1,     1,
       3,     1,     1,     0,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     0,     3,     1,     3,     3,     3,     1,
       3,     1,     3,     1,     1,     2,     0,     3,     3,     4,
       5,     5,     6,     7,     2,     0,     3,     3,     4,     3,
       2,     0,     3,     3,     4,     5,     6,     8,     6,     8,
       4,     6,     4,     6,     6,    11,     1,     2,     0,     3,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     1,     3,     3,     6,     8,     8,
      10,     9,    11,     9,    11,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     3,     1,     3,
       2,     2,     2,     1,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     6,     2,
       4,     4,     4,     1,     3,     1,     7,     4,     7,     7,
       7,     3,     3,     2,     4,     4,     4,     3,     2,     1,
       1,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     2,     1,     4,     7,
       5,     2,     2,     1,     1,     1,     0,     3,     1,     1,
       3,     6,     5,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     2,
       3,     1,     1,     1,     2,     1,     1,     2,     2,     4,
       0,     1,     1,     3,     5,     1,     3,     1,     3,     2,
       1,     1,     4,     3,     1,     1,     2,     3,     5
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

    case YYSYMBOL_86_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_87_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_88_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_94_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_95_: /* '@'  */
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
         { fprintf (yyo, "%s", ((*yyvaluep).n_expr)? ((literal_node*)((*yyvaluep).n_expr))->value_tkn->in_text: "NULL"); }
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

    case YYSYMBOL_fun_qualifier: /* fun_qualifier  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_meth_qualifier: /* meth_qualifier  */
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
         { auto obj = (object_tpd_node*)((*yyvaluep).n_tpd); fprintf (yyo, "%s", obj->t_class->in_text); }
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

    case YYSYMBOL_packed: /* packed  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
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

  case 19: /* init_finit: INITIALIZATION var_const_decl_part_list sequence FINALIZATION var_const_decl_part_list sequence  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].n_stmt), NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].n_stmt), NULL); }
    break;

  case 20: /* var_const_decl_part_list: %empty  */
                          { (yyval.n_decl) = NULL; }
    break;

  case 21: /* var_const_decl_part_list: var_const_decl_part var_const_decl_part_list  */
                                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 25: /* prog_param_list: %empty  */
                 { (yyval.n_imp) = NULL; }
    break;

  case 26: /* prog_param_list: '(' ident_list ')'  */
                         { (yyval.n_imp) = new import_list_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 29: /* ident_list: ident_ext ',' ident_list  */
                                     { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 30: /* ident_list: ident_ext  */
                { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 31: /* block: decl_part_list compoundst  */
        { (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp)); }
    break;

  case 32: /* block: assemblerst  */
        { (yyval.n_block) = new block_node((yyvsp[0].n_basm)); }
    break;

  case 33: /* decl_part_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 34: /* decl_part_list: decl_part decl_part_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 42: /* unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 43: /* unit_spec: INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node(NULL, NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 44: /* unit_decl_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 45: /* unit_decl_list: unit_decl unit_decl_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 53: /* inherited: INHERITED  */
                     { (yyval.n_expr) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 54: /* inherited: INHERITED IDENT  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 55: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 56: /* try_finally: TRY sequence FINALLY sequence END  */
        { (yyval.n_stmt) = new try_finally_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 57: /* try_except: TRY sequence EXCEPT except_many END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 58: /* try_except: TRY sequence EXCEPT except_many ELSE sequence END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-6].tok), (yyvsp[-5].n_stmt), (yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 60: /* except_many: except ';' except_many  */
                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 61: /* except: %empty  */
        { (yyval.n_stmt) = NULL; }
    break;

  case 62: /* except: ON IDENT ':' simple_type DO statement  */
        { (yyval.n_stmt) = new on_except_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 63: /* statement: %empty  */
           { (yyval.n_stmt) = new empty_node(curr_token->prev_relevant()); }
    break;

  case 64: /* statement: primary LET expr  */
                       { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 65: /* statement: primary LETADD expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 66: /* statement: primary LETSUB expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 67: /* statement: primary LETDIV expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 68: /* statement: primary LETMUL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 69: /* statement: primary LETAND expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 70: /* statement: primary LETOR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 71: /* statement: primary LETSHL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 72: /* statement: primary LETSHR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 73: /* statement: GOTO ICONST  */
                  { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 74: /* statement: GOTO IDENT  */
                 { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 75: /* statement: CASE expr OF case_list END  */
                                 { (yyval.n_stmt) = new switch_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_case), (yyvsp[0].tok)); }
    break;

  case 76: /* statement: IF expr THEN statement  */
                             { (yyval.n_stmt) = new if_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 77: /* statement: IF expr THEN statement ELSE statement  */
        { (yyval.n_stmt) = new if_node((yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 78: /* statement: FOR ident_ext LET expr TO expr DO statement  */
        { (yyval.n_stmt) = new for_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 79: /* statement: WHILE expr DO statement  */
                              { (yyval.n_stmt) = new while_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 80: /* statement: REPEAT sequence UNTIL expr  */
                                 { (yyval.n_stmt) = new repeat_node((yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 81: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 82: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 83: /* statement: WITH expr_list DO statement  */
                                  { (yyval.n_stmt) = new with_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 84: /* statement: ICONST ':' statement  */
                           { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 85: /* statement: IDENT ':' statement  */
                          { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 86: /* statement: compoundst  */
                 { (yyval.n_stmt) = (yyvsp[0].n_comp); }
    break;

  case 89: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 90: /* assemblerst: ASM asm_text END  */
                              { (yyval.n_basm) = new asm_block_node((yyvsp[-2].tok), (yyvsp[-1].n_asm), (yyvsp[0].tok)); }
    break;

  case 103: /* asm_line: asm_kwd  */
                  { (yyval.n_asm) = new asm_line_node((yyvsp[0].tok), NULL); }
    break;

  case 107: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 109: /* case_list: case_items otherwise sequence  */
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

  case 112: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 114: /* case_items: case_item ';' case_items  */
                               { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 115: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 117: /* case_elem_list: case_elem ',' case_elem_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 118: /* case_elem: expr  */
                { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 119: /* case_elem: expr DOTS expr  */
                     { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 121: /* expr: expr PLUS expr  */
                     { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 122: /* expr: expr MINUS expr  */
                      { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 123: /* expr: expr MOD expr  */
                    { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 124: /* expr: expr MUL expr  */
                    { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 125: /* expr: expr DIV expr  */
                    { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 126: /* expr: expr DIVR expr  */
                     { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 127: /* expr: primary LET expr  */
                       { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 128: /* expr: primary LETADD expr  */
                          { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* expr: primary LETSUB expr  */
                          { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 130: /* expr: primary LETDIV expr  */
                          { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* expr: primary LETMUL expr  */
                          { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 132: /* expr: primary LETSHL expr  */
                          { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* expr: primary LETSHR expr  */
                          { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* expr: primary LETAND expr  */
                          { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* expr: primary LETOR expr  */
                          { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* expr: expr AND expr  */
                    { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* expr: expr BINAND expr  */
                       { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* expr: expr SHL expr  */
                    { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 139: /* expr: expr SHR expr  */
                    { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* expr: expr OR expr  */
                    { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* expr: expr BINOR expr  */
                       { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* expr: expr XOR expr  */
                    { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* expr: expr GT expr  */
                   { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* expr: expr LT expr  */
                   { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 145: /* expr: expr LE expr  */
                   { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 146: /* expr: expr GE expr  */
                   { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 147: /* expr: expr EQ expr  */
                   { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 148: /* expr: expr NE expr  */
                   { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 149: /* expr: expr IN expr  */
                   { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 150: /* expr: expr IS expr  */
                   { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 151: /* expr: expr AS expr  */
                   { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 153: /* simple_expr: PLUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 154: /* simple_expr: MINUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 155: /* simple_expr: NOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 156: /* simple_expr: BINNOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 157: /* simple_expr: '@' primary  */
                  { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 158: /* simple_expr: AND primary  */
                                { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 160: /* primary: '(' expr_list ')'  */
                        { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 161: /* primary: primary '(' act_param_list ')'  */
                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 162: /* primary: primary '.' ident_ext  */
                            { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 163: /* primary: primary '^'  */
                  { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 164: /* primary: primary '[' expr_list ']'  */
                                { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 167: /* constant: ICONST  */
             { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 168: /* constant: RCONST  */
             { (yyval.n_expr) = new double_node((yyvsp[0].tok)); }
    break;

  case 169: /* constant: SCONST  */
             { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 170: /* constant: '[' set_elem_list ']'  */
                            { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 171: /* constant: IDENT  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 172: /* constant: INDEX  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 173: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 175: /* set_elem_list: set_elem ',' set_elem_list  */
                                 { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 176: /* set_elem: expr  */
               { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 177: /* set_elem: expr DOTS expr  */
                     { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 179: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 181: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 183: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 184: /* record_constant: '(' field_init_list ')'  */
                                         { (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); }
    break;

  case 185: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 186: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 187: /* field_init_item: IDENT ':' expr  */
                                { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 188: /* label_decl_part: LABEL label_list ';'  */
        { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 189: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 190: /* label_list: ICONST ',' label_list  */
                            { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 191: /* label_list: IDENT  */
            { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 192: /* label_list: IDENT ',' label_list  */
                           { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 195: /* const_def_part: const const_def_list  */
                                     { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 196: /* const_def_list: %empty  */
                { (yyval.n_cdef) = NULL; }
    break;

  case 197: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 198: /* const_def: IDENT EQ expr  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 199: /* const_def: IDENT EQ expr DEPRECATED  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok), NULL); }
    break;

  case 200: /* const_def: IDENT EQ expr DEPRECATED SCONST  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 201: /* const_def: IDENT ':' const_type EQ expr  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 202: /* const_def: IDENT ':' const_type EQ expr DEPRECATED  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok), NULL); }
    break;

  case 203: /* const_def: IDENT ':' const_type EQ expr DEPRECATED SCONST  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_tpd), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 204: /* type_def_part: TYPE type_def_list  */
        { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 205: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 206: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 207: /* type_def: IDENT EQ type  */
                        { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 208: /* type_def: IDENT EQ TYPE type  */
                         { (yyval.n_tdef) = new type_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[0].n_tpd)); }
    break;

  case 209: /* type_def: simple_templ_type EQ type  */
                                { (yyval.n_tdef) = new type_def_templ_node((yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 210: /* var_decl_part: VAR var_decl_list  */
                                 { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 211: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 212: /* var_decl_list: var_decl ';' var_decl_list  */
                                 { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 213: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 214: /* var_decl: ident_list ':' type DEPRECATED  */
                                     { (yyval.n_vdcl) = new var_decl_node((yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 215: /* var_decl: ident_list ':' type DEPRECATED SCONST  */
                                            { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 216: /* proc_fwd_decl: PROCEDURE IDENT formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 217: /* proc_fwd_decl: FUNCTION IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 218: /* proc_fwd_decl: PROCEDURE INDEX formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 219: /* proc_fwd_decl: FUNCTION INDEX formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 220: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 221: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 222: /* proc_spec: PROCEDURE INDEX formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 223: /* proc_spec: FUNCTION INDEX formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 224: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 225: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 227: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 228: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 229: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 230: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 231: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 232: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 233: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 234: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 235: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 236: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 237: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 238: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 239: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 240: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 241: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 242: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 243: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 245: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 246: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 247: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 248: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 249: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 250: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 251: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 252: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 253: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 254: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 274: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 275: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 276: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 277: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 279: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 280: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 281: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 282: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 283: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 284: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 285: /* param_decl: ident_list ':' param_type EQ expr  */
                                        { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 286: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 307: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 308: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 309: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 310: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 311: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 312: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 313: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 314: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 315: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 316: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 317: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 318: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 319: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 320: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 321: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 322: /* range_type: expr DOTS expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 323: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 324: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 325: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 326: /* record_type: packed RECORD record_body END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 327: /* record_type: packed RECORD END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 328: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 331: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 334: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 335: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 341: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 342: /* record_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 343: /* record_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 344: /* record_method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 345: /* record_method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 346: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 347: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 348: /* interface_type: INTERFACE guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 349: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 350: /* interface_type: INTERFACE '(' IDENT ')' END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 351: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 352: /* interface_components: interface_component interface_components  */
        { 
          // special case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
     	  *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 356: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 357: /* guid: '[' SCONST ']'  */
        { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 360: /* class_type: class_or_object object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 361: /* class_type: class_or_object '(' ident_list ')' object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 362: /* class_type: class_or_object '(' ident_list ')' END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 363: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 364: /* class_type: class_or_object  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 365: /* object_body: field_decl_list object_components  */
        { 
          // rare case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 367: /* object_body: field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 373: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 374: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 375: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 376: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 377: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 378: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 381: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 387: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 388: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 389: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 390: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 392: /* object_properties: property_decl_list  */
        { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 394: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 395: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 396: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 397: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 398: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 399: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 400: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 403: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 404: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 406: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 407: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 408: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 409: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 410: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 412: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 413: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 414: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 416: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 417: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 418: /* variant: expr_list ':' '(' field_list ')'  */
        { (yyval.n_vari) = new variant_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_fldls), (yyvsp[0].tok)); }
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


