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
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_DOTS = 13,                      /* DOTS  */
  YYSYMBOL_DYNAMIC = 14,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_END = 16,                       /* END  */
  YYSYMBOL_EXCEPT = 17,                    /* EXCEPT  */
  YYSYMBOL_EXTERNAL = 18,                  /* EXTERNAL  */
  YYSYMBOL_FIL = 19,                       /* FIL  */
  YYSYMBOL_FINAL = 20,                     /* FINAL  */
  YYSYMBOL_FINALIZATION = 21,              /* FINALIZATION  */
  YYSYMBOL_FINALLY = 22,                   /* FINALLY  */
  YYSYMBOL_FAR = 23,                       /* FAR  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_FORWARD = 25,                   /* FORWARD  */
  YYSYMBOL_FUNCTION = 26,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 27,                      /* GOTO  */
  YYSYMBOL_IDENT = 28,                     /* IDENT  */
  YYSYMBOL_ICONST = 29,                    /* ICONST  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_IMPLEMENTATION = 31,            /* IMPLEMENTATION  */
  YYSYMBOL_INDEX = 32,                     /* INDEX  */
  YYSYMBOL_INHERITED = 33,                 /* INHERITED  */
  YYSYMBOL_INITIALIZATION = 34,            /* INITIALIZATION  */
  YYSYMBOL_INTERFACE = 35,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 36,                     /* LABEL  */
  YYSYMBOL_OBJECT = 37,                    /* OBJECT  */
  YYSYMBOL_OF = 38,                        /* OF  */
  YYSYMBOL_ON = 39,                        /* ON  */
  YYSYMBOL_OPERATOR = 40,                  /* OPERATOR  */
  YYSYMBOL_ORIGIN = 41,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 42,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 43,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 44,                  /* OVERRIDE  */
  YYSYMBOL_OUT = 45,                       /* OUT  */
  YYSYMBOL_PACKED = 46,                    /* PACKED  */
  YYSYMBOL_PASCAL = 47,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 48,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 49,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 50,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 51,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 52,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 53,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 54,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 55,                     /* RAISE  */
  YYSYMBOL_RCONST = 56,                    /* RCONST  */
  YYSYMBOL_READ = 57,                      /* READ  */
  YYSYMBOL_RECORD = 58,                    /* RECORD  */
  YYSYMBOL_REGISTER = 59,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 60,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 61,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 62,            /* RESOURCESTRING  */
  YYSYMBOL_SAFECALL = 63,                  /* SAFECALL  */
  YYSYMBOL_SET = 64,                       /* SET  */
  YYSYMBOL_SCONST = 65,                    /* SCONST  */
  YYSYMBOL_STATIC = 66,                    /* STATIC  */
  YYSYMBOL_STDCALL = 67,                   /* STDCALL  */
  YYSYMBOL_STORED = 68,                    /* STORED  */
  YYSYMBOL_STRICT = 69,                    /* STRICT  */
  YYSYMBOL_STRING = 70,                    /* STRING  */
  YYSYMBOL_THEN = 71,                      /* THEN  */
  YYSYMBOL_TO = 72,                        /* TO  */
  YYSYMBOL_TRY = 73,                       /* TRY  */
  YYSYMBOL_TYPE = 74,                      /* TYPE  */
  YYSYMBOL_UNTIL = 75,                     /* UNTIL  */
  YYSYMBOL_UNIT = 76,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 77,                  /* UNIT_END  */
  YYSYMBOL_VAR = 78,                       /* VAR  */
  YYSYMBOL_VARARGS = 79,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 80,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 81,                     /* WHILE  */
  YYSYMBOL_WINAPI = 82,                    /* WINAPI  */
  YYSYMBOL_WITH = 83,                      /* WITH  */
  YYSYMBOL_WRITE = 84,                     /* WRITE  */
  YYSYMBOL_85_ = 85,                       /* '.'  */
  YYSYMBOL_86_ = 86,                       /* ','  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_89_ = 89,                       /* '('  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_91_ = 91,                       /* '['  */
  YYSYMBOL_92_ = 92,                       /* ']'  */
  YYSYMBOL_93_ = 93,                       /* '^'  */
  YYSYMBOL_94_ = 94,                       /* '@'  */
  YYSYMBOL_SCOPE = 95,                     /* SCOPE  */
  YYSYMBOL_LET = 96,                       /* LET  */
  YYSYMBOL_LETADD = 97,                    /* LETADD  */
  YYSYMBOL_LETSUB = 98,                    /* LETSUB  */
  YYSYMBOL_LETDIV = 99,                    /* LETDIV  */
  YYSYMBOL_LETMUL = 100,                   /* LETMUL  */
  YYSYMBOL_LETAND = 101,                   /* LETAND  */
  YYSYMBOL_LETOR = 102,                    /* LETOR  */
  YYSYMBOL_LETSHL = 103,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 104,                   /* LETSHR  */
  YYSYMBOL_EQ = 105,                       /* EQ  */
  YYSYMBOL_NE = 106,                       /* NE  */
  YYSYMBOL_LT = 107,                       /* LT  */
  YYSYMBOL_LE = 108,                       /* LE  */
  YYSYMBOL_GT = 109,                       /* GT  */
  YYSYMBOL_GE = 110,                       /* GE  */
  YYSYMBOL_IN = 111,                       /* IN  */
  YYSYMBOL_IS = 112,                       /* IS  */
  YYSYMBOL_PLUS = 113,                     /* PLUS  */
  YYSYMBOL_MINUS = 114,                    /* MINUS  */
  YYSYMBOL_OR = 115,                       /* OR  */
  YYSYMBOL_XOR = 116,                      /* XOR  */
  YYSYMBOL_BINOR = 117,                    /* BINOR  */
  YYSYMBOL_MOD = 118,                      /* MOD  */
  YYSYMBOL_DIV = 119,                      /* DIV  */
  YYSYMBOL_DIVR = 120,                     /* DIVR  */
  YYSYMBOL_MUL = 121,                      /* MUL  */
  YYSYMBOL_AND = 122,                      /* AND  */
  YYSYMBOL_SHR = 123,                      /* SHR  */
  YYSYMBOL_SHL = 124,                      /* SHL  */
  YYSYMBOL_BINAND = 125,                   /* BINAND  */
  YYSYMBOL_AS = 126,                       /* AS  */
  YYSYMBOL_UPLUS = 127,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 128,                   /* UMINUS  */
  YYSYMBOL_NOT = 129,                      /* NOT  */
  YYSYMBOL_ADDRESS = 130,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 131,                   /* BINNOT  */
  YYSYMBOL_EQUAL = 132,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 133,                 /* NOTEQUAL  */
  YYSYMBOL_LESSTH = 134,                   /* LESSTH  */
  YYSYMBOL_GREATERTH = 135,                /* GREATERTH  */
  YYSYMBOL_ADD = 136,                      /* ADD  */
  YYSYMBOL_SUBSTRACT = 137,                /* SUBSTRACT  */
  YYSYMBOL_MULTIPLY = 138,                 /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 139,                   /* DIVIDE  */
  YYSYMBOL_INTDIVIDE = 140,                /* INTDIVIDE  */
  YYSYMBOL_MODULUS = 141,                  /* MODULUS  */
  YYSYMBOL_IMPLICIT = 142,                 /* IMPLICIT  */
  YYSYMBOL_EXPLICIT = 143,                 /* EXPLICIT  */
  YYSYMBOL_YYACCEPT = 144,                 /* $accept  */
  YYSYMBOL_translation = 145,              /* translation  */
  YYSYMBOL_146_1 = 146,                    /* $@1  */
  YYSYMBOL_input_file = 147,               /* input_file  */
  YYSYMBOL_program = 148,                  /* program  */
  YYSYMBOL_progend = 149,                  /* progend  */
  YYSYMBOL_module = 150,                   /* module  */
  YYSYMBOL_unit = 151,                     /* unit  */
  YYSYMBOL_init_finit = 152,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 153, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 154,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 155,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 156,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 157,                /* ident_ext  */
  YYSYMBOL_ident_list = 158,               /* ident_list  */
  YYSYMBOL_block = 159,                    /* block  */
  YYSYMBOL_decl_part_list = 160,           /* decl_part_list  */
  YYSYMBOL_decl_part = 161,                /* decl_part  */
  YYSYMBOL_unit_spec = 162,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 163,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 164,                /* unit_decl  */
  YYSYMBOL_inherited = 165,                /* inherited  */
  YYSYMBOL_try_finally = 166,              /* try_finally  */
  YYSYMBOL_try_except = 167,               /* try_except  */
  YYSYMBOL_except_many = 168,              /* except_many  */
  YYSYMBOL_except = 169,                   /* except  */
  YYSYMBOL_statement = 170,                /* statement  */
  YYSYMBOL_compoundst = 171,               /* compoundst  */
  YYSYMBOL_assemblerst = 172,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 173,                  /* asm_kwd  */
  YYSYMBOL_asm_line = 174,                 /* asm_line  */
  YYSYMBOL_asm_text = 175,                 /* asm_text  */
  YYSYMBOL_sequence = 176,                 /* sequence  */
  YYSYMBOL_case_list = 177,                /* case_list  */
  YYSYMBOL_otherwise = 178,                /* otherwise  */
  YYSYMBOL_case_items = 179,               /* case_items  */
  YYSYMBOL_case_item = 180,                /* case_item  */
  YYSYMBOL_case_elem_list = 181,           /* case_elem_list  */
  YYSYMBOL_case_elem = 182,                /* case_elem  */
  YYSYMBOL_expr = 183,                     /* expr  */
  YYSYMBOL_simple_expr = 184,              /* simple_expr  */
  YYSYMBOL_primary = 185,                  /* primary  */
  YYSYMBOL_constant = 186,                 /* constant  */
  YYSYMBOL_set_elem_list = 187,            /* set_elem_list  */
  YYSYMBOL_set_elem = 188,                 /* set_elem  */
  YYSYMBOL_expr_list = 189,                /* expr_list  */
  YYSYMBOL_act_param_list = 190,           /* act_param_list  */
  YYSYMBOL_act_param = 191,                /* act_param  */
  YYSYMBOL_record_constant = 192,          /* record_constant  */
  YYSYMBOL_field_init_list = 193,          /* field_init_list  */
  YYSYMBOL_field_init_item = 194,          /* field_init_item  */
  YYSYMBOL_label_decl_part = 195,          /* label_decl_part  */
  YYSYMBOL_label_list = 196,               /* label_list  */
  YYSYMBOL_const = 197,                    /* const  */
  YYSYMBOL_const_def_part = 198,           /* const_def_part  */
  YYSYMBOL_const_def_list = 199,           /* const_def_list  */
  YYSYMBOL_const_def = 200,                /* const_def  */
  YYSYMBOL_type_def_part = 201,            /* type_def_part  */
  YYSYMBOL_type_def_list = 202,            /* type_def_list  */
  YYSYMBOL_type_def = 203,                 /* type_def  */
  YYSYMBOL_var_decl_part = 204,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 205,            /* var_decl_list  */
  YYSYMBOL_var_decl = 206,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 207,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 208,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 209,        /* operator_fwd_decl  */
  YYSYMBOL_property_decl = 210,            /* property_decl  */
  YYSYMBOL_property_decl_list = 211,       /* property_decl_list  */
  YYSYMBOL_prop_array = 212,               /* prop_array  */
  YYSYMBOL_prop_index = 213,               /* prop_index  */
  YYSYMBOL_prop_type_def = 214,            /* prop_type_def  */
  YYSYMBOL_prop_read = 215,                /* prop_read  */
  YYSYMBOL_prop_write = 216,               /* prop_write  */
  YYSYMBOL_prop_stored = 217,              /* prop_stored  */
  YYSYMBOL_prop_default = 218,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 219,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 220,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 221,          /* prop_param_decl  */
  YYSYMBOL_proc_def = 222,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 223,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 224,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 225,                /* qualifier  */
  YYSYMBOL_qualifiers = 226,               /* qualifiers  */
  YYSYMBOL_formal_params = 227,            /* formal_params  */
  YYSYMBOL_formal_param_list = 228,        /* formal_param_list  */
  YYSYMBOL_formal_param = 229,             /* formal_param  */
  YYSYMBOL_param_decl = 230,               /* param_decl  */
  YYSYMBOL_param_type = 231,               /* param_type  */
  YYSYMBOL_type = 232,                     /* type  */
  YYSYMBOL_const_type = 233,               /* const_type  */
  YYSYMBOL_fptr_type = 234,                /* fptr_type  */
  YYSYMBOL_string_type = 235,              /* string_type  */
  YYSYMBOL_simple_templ_type = 236,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 237,              /* simple_type  */
  YYSYMBOL_array_type = 238,               /* array_type  */
  YYSYMBOL_const_array_type = 239,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 240,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 241,                /* enum_type  */
  YYSYMBOL_range_type = 242,               /* range_type  */
  YYSYMBOL_pointer_type = 243,             /* pointer_type  */
  YYSYMBOL_set_type = 244,                 /* set_type  */
  YYSYMBOL_const_set_type = 245,           /* const_set_type  */
  YYSYMBOL_record_type = 246,              /* record_type  */
  YYSYMBOL_record_body = 247,              /* record_body  */
  YYSYMBOL_record_components = 248,        /* record_components  */
  YYSYMBOL_record_component = 249,         /* record_component  */
  YYSYMBOL_record_methods = 250,           /* record_methods  */
  YYSYMBOL_record_method_decl = 251,       /* record_method_decl  */
  YYSYMBOL_record_field_list = 252,        /* record_field_list  */
  YYSYMBOL_interface_type = 253,           /* interface_type  */
  YYSYMBOL_interface_components = 254,     /* interface_components  */
  YYSYMBOL_interface_component = 255,      /* interface_component  */
  YYSYMBOL_guid = 256,                     /* guid  */
  YYSYMBOL_class_or_object = 257,          /* class_or_object  */
  YYSYMBOL_class_type = 258,               /* class_type  */
  YYSYMBOL_object_body = 259,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 260,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 261,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 262,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 263,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 264,        /* object_components  */
  YYSYMBOL_object_component = 265,         /* object_component  */
  YYSYMBOL_field_decl_part = 266,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 267,          /* field_decl_list  */
  YYSYMBOL_object_methods = 268,           /* object_methods  */
  YYSYMBOL_object_properties = 269,        /* object_properties  */
  YYSYMBOL_method_decl_list = 270,         /* method_decl_list  */
  YYSYMBOL_method_decl = 271,              /* method_decl  */
  YYSYMBOL_file_type = 272,                /* file_type  */
  YYSYMBOL_packed = 273,                   /* packed  */
  YYSYMBOL_conformant_indices = 274,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 275,         /* conformant_index  */
  YYSYMBOL_indices = 276,                  /* indices  */
  YYSYMBOL_index_spec = 277,               /* index_spec  */
  YYSYMBOL_field_list = 278,               /* field_list  */
  YYSYMBOL_fixed_part = 279,               /* fixed_part  */
  YYSYMBOL_variant_part = 280,             /* variant_part  */
  YYSYMBOL_selector = 281,                 /* selector  */
  YYSYMBOL_variant_list = 282,             /* variant_list  */
  YYSYMBOL_variant = 283                   /* variant  */
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
#define YYLAST   1686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  783

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   388


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
      89,    90,     2,     2,    86,     2,    85,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    88,
       2,     2,     2,     2,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,    93,     2,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   394,   394,   394,   419,   419,   419,   421,   422,   425,
     425,   427,   428,   434,   436,   438,   440,   442,   445,   447,
     450,   451,   453,   453,   469,   471,   472,   476,   476,   478,
     479,   481,   483,   486,   487,   489,   489,   489,   489,   490,
     490,   490,   492,   494,   498,   499,   501,   501,   501,   501,
     502,   502,   502,   531,   532,   534,   538,   541,   543,   546,
     547,   549,   550,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   569,   571,
     572,   575,   576,   578,   579,   580,   581,   582,   583,   585,
     587,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   599,   601,   602,   605,   605,   612,   613,
     625,   625,   627,   628,   629,   631,   633,   634,   636,   637,
     661,   662,   663,   664,   665,   666,   667,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   680,   681,   682,   683,
     684,   685,   686,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   698,   699,   701,   703,   705,   707,   708,   710,
     711,   712,   713,   714,   715,   716,   719,   720,   721,   722,
     723,   724,   725,   727,   728,   729,   731,   732,   734,   734,
     736,   737,   739,   739,   742,   744,   745,   747,   798,   801,
     802,   803,   804,   806,   806,   808,   810,   811,   813,   815,
     818,   821,   822,   824,   825,   827,   829,   830,   845,   862,
     864,   876,   878,   882,   884,   896,   898,   902,   906,   909,
     910,   912,   913,   915,   916,   918,   919,   921,   922,   924,
     925,   927,   928,   930,   931,   933,   934,   937,   938,   940,
     944,   946,   948,   950,   952,   954,   956,   958,   971,   971,
     971,   971,   971,   971,   971,   971,   971,   971,   973,   973,
     973,   973,   973,   973,   973,   975,   975,   977,   978,   981,
     982,   984,   985,   987,   988,   989,   990,   993,   994,   995,
     997,   997,  1003,  1003,  1003,  1003,  1003,  1003,  1003,  1004,
    1004,  1004,  1004,  1004,  1004,  1006,  1006,  1006,  1006,  1006,
    1008,  1010,  1012,  1014,  1017,  1019,  1021,  1022,  1023,  1025,
    1027,  1030,  1033,  1035,  1038,  1040,  1043,  1045,  1047,  1057,
    1059,  1062,  1069,  1070,  1072,  1078,  1080,  1081,  1083,  1085,
    1086,  1087,  1088,  1090,  1091,  1094,  1096,  1098,  1100,  1102,
    1105,  1109,  1111,  1113,  1115,  1120,  1129,  1131,  1132,  1134,
    1135,  1139,  1139,  1141,  1143,  1145,  1147,  1149,  1153,  1162,
    1163,  1166,  1166,  1168,  1168,  1168,  1170,  1171,  1173,  1174,
    1175,  1177,  1186,  1188,  1189,  1191,  1192,  1193,  1194,  1195,
    1198,  1200,  1203,  1204,  1206,  1208,  1211,  1212,  1215,  1217,
    1219,  1221,  1225,  1227,  1227,  1229,  1230,  1232,  1235,  1236,
    1239,  1240,  1243,  1245,  1248,  1250,  1253,  1254,  1257,  1258,
    1259,  1261
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
  "ASM", "BEGIN", "CASE", "CDECL", "CLASS", "CONST", "DEFAULT", "DO",
  "DOTS", "DYNAMIC", "ELSE", "END", "EXCEPT", "EXTERNAL", "FIL", "FINAL",
  "FINALIZATION", "FINALLY", "FAR", "FOR", "FORWARD", "FUNCTION", "GOTO",
  "IDENT", "ICONST", "IF", "IMPLEMENTATION", "INDEX", "INHERITED",
  "INITIALIZATION", "INTERFACE", "LABEL", "OBJECT", "OF", "ON", "OPERATOR",
  "ORIGIN", "OTHERWISE", "OVERLOAD", "OVERRIDE", "OUT", "PACKED", "PASCAL",
  "PROCEDURE", "PROGRAM", "PROPERTY", "PRIVATE", "PROTECTED", "PUBLIC",
  "PUBLISHED", "RAISE", "RCONST", "READ", "RECORD", "REGISTER",
  "REINTRODUCE", "REPEAT", "RESOURCESTRING", "SAFECALL", "SET", "SCONST",
  "STATIC", "STDCALL", "STORED", "STRICT", "STRING", "THEN", "TO", "TRY",
  "TYPE", "UNTIL", "UNIT", "UNIT_END", "VAR", "VARARGS", "VIRTUAL",
  "WHILE", "WINAPI", "WITH", "WRITE", "'.'", "','", "':'", "';'", "'('",
  "')'", "'['", "']'", "'^'", "'@'", "SCOPE", "LET", "LETADD", "LETSUB",
  "LETDIV", "LETMUL", "LETAND", "LETOR", "LETSHL", "LETSHR", "EQ", "NE",
  "LT", "LE", "GT", "GE", "IN", "IS", "PLUS", "MINUS", "OR", "XOR",
  "BINOR", "MOD", "DIV", "DIVR", "MUL", "AND", "SHR", "SHL", "BINAND",
  "AS", "UPLUS", "UMINUS", "NOT", "ADDRESS", "BINNOT", "EQUAL", "NOTEQUAL",
  "LESSTH", "GREATERTH", "ADD", "SUBSTRACT", "MULTIPLY", "DIVIDE",
  "INTDIVIDE", "MODULUS", "IMPLICIT", "EXPLICIT", "$accept", "translation",
  "$@1", "input_file", "program", "progend", "module", "unit",
  "init_finit", "var_const_decl_part_list", "var_const_decl_part",
  "unit_def_list", "prog_param_list", "ident_ext", "ident_list", "block",
  "decl_part_list", "decl_part", "unit_spec", "unit_decl_list",
  "unit_decl", "inherited", "try_finally", "try_except", "except_many",
  "except", "statement", "compoundst", "assemblerst", "asm_kwd",
  "asm_line", "asm_text", "sequence", "case_list", "otherwise",
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

#define YYPACT_NINF (-669)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-307)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -669,    47,   441,  -669,   260,   173,  -669,   199,   852,    54,
     234,    67,  -669,    80,   119,   243,  -669,  -669,  -669,  -669,
      17,   144,   472,  -669,  -669,  -669,   148,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,   260,   154,   174,   182,   201,
     187,   143,   249,   852,   272,   210,  -669,    30,   852,  -669,
    -669,  -669,  -669,  -669,  -669,   213,   219,   165,   227,   143,
     202,   138,  -669,   172,   206,   231,  -669,  -669,   235,   244,
    -669,   247,  -669,  1239,  -669,  -669,    69,  -669,   251,  -669,
    -669,   263,   228,   268,   243,   152,   258,   269,   143,   143,
     280,   143,   143,   270,   472,  -669,  -669,    54,    54,  -669,
     243,   271,   276,   243,   277,   370,    63,    80,   370,   325,
     243,   370,   243,   790,   243,   299,   279,   281,   790,  -669,
     339,   790,  -669,  1239,  -669,  1239,   790,   790,  1084,   790,
    -669,  -669,  -669,   282,  -669,   355,   646,  -669,  -669,    63,
     790,   148,   243,   344,   288,   243,   143,   243,   243,   243,
     290,   291,   292,  -669,   370,   370,   295,   297,   298,   300,
     343,    82,  -669,  -669,  -669,   143,  1332,  1382,   304,   573,
    -669,   143,   171,  -669,    50,  -669,  -669,   143,   296,  1090,
     370,   241,   790,   790,   241,   790,   790,   858,  -669,  1582,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  1265,  -669,  -669,    74,   305,   302,  -669,  -669,
    -669,  -669,  -669,    85,  -669,  -669,   852,  -669,  -669,  -669,
    -669,  1118,   293,  -669,  -669,  1239,  1239,   938,   312,  1540,
     329,   142,   604,  1483,   394,   321,   319,   322,   335,   882,
     340,   327,  1239,  -669,   243,   790,   790,  -669,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   328,  1540,  -669,
     143,   143,   370,   143,   330,  -669,  -669,  -669,    90,  -669,
     152,   346,   350,   370,   370,  1382,  1382,   852,   342,   354,
     353,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,   357,   144,
    -669,  -669,  -669,   359,   364,  -669,   368,    36,   367,   243,
    -669,   403,   377,   185,   417,   790,   196,   232,   366,  -669,
     205,  -669,   205,  -669,   205,  -669,  -669,   790,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   790,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   790,   790,   790,
     790,   790,   790,   790,   790,   790,   790,   790,   790,    42,
    -669,   432,  -669,  -669,  -669,  -669,   286,   243,   243,  -669,
    -669,   374,  -669,  -669,   415,  -669,   450,  -669,  -669,   243,
    -669,  1468,  -669,  1468,  -669,  -669,  -669,    68,     6,   430,
    1437,   431,  -669,   380,   435,    40,   790,   790,  -669,  -669,
    1239,   790,   790,   439,  1239,  1239,   790,  1239,   790,  -669,
    -669,   451,   790,  -669,   790,  -669,  -669,  1540,   390,   399,
     395,  1540,  1540,  1540,  1540,  1540,  1540,  1540,  1540,  1540,
     790,   401,   404,   398,   405,   370,  -669,   389,  -669,  -669,
     491,  -669,  1332,  1382,   409,   412,   427,  -669,  -669,   573,
    -669,  1382,  1382,  -669,  -669,  -669,   370,  -669,   419,   418,
     139,   496,   185,  -669,  -669,   476,  1518,  -669,  1540,  1134,
    1134,  1134,  1134,  1134,  1134,  1134,  1134,   561,   561,   561,
     561,   561,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  1540,  1540,  1540,  1540,  1540,  1540,  1540,  1540,  1540,
     243,  -669,  -669,   423,  -669,  -669,  -669,   426,   243,  -669,
    -669,  -669,  -669,  -669,  -669,   370,  1078,   370,   175,  -669,
     470,   243,  -669,  -669,  -669,  -669,   506,  -669,   824,  -669,
     135,   824,  -669,   243,  -669,  -669,  -669,   517,   370,  1078,
      63,   472,  -669,   509,    88,   438,   440,   443,   916,  1442,
     516,   442,  1540,   507,   326,   448,   523,  -669,  -669,  -669,
    1540,   321,  -669,  1540,  -669,  -669,   790,  -669,  1540,   370,
     370,   573,   573,   454,   790,   456,   461,   464,   466,  1382,
    1382,   467,  -669,   518,    33,  -669,  -669,  -669,  -669,  -669,
    -669,   243,   474,  1406,  -669,  -669,   122,   973,  -669,   471,
     479,  -669,   534,  -669,  -669,  -669,  -669,  -669,  -669,  -669,
    -669,  -669,  -669,   803,  -669,  -669,   484,  -669,   190,  -669,
    -669,  -669,  1239,   790,  1239,   790,   790,   790,  1239,  -669,
     492,  1239,  -669,   439,  -669,  -669,   483,   493,   499,   500,
     573,  1540,   562,  -669,  1382,  1382,  -669,   552,  -669,   185,
     504,   502,   508,   370,   560,  -669,   581,   790,   563,  1078,
     143,    66,  -669,   566,   572,   515,    57,   596,   528,  -669,
    -669,  -669,  -669,  1540,   832,  -669,    59,   599,  -669,   573,
     573,  -669,  -669,   529,   605,   530,   535,  -669,   608,    90,
    -669,   243,  -669,   160,   569,  -669,  1540,   370,  -669,   541,
     370,   790,    63,  -669,  1239,    57,  -669,  -669,   544,  -669,
    1239,   618,  -669,   546,   548,  -669,   609,   600,   562,  -669,
    -669,  -669,   451,  -669,   614,   564,  -669,   370,  -669,   557,
    -669,   558,  -669,   631,  -669,  -669,  -669,  1239,  -669,  -669,
     567,    90,  -669,  -669,   625,   587,   570,   568,   790,    57,
    -669,   370,  -669,  -669,  -669,   632,   650,  -669,   243,  -669,
    1239,  -669,  -669,   160,   574,   577,  -669,  -669,   652,  -669,
     576,  -669,  -669
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    33,     1,     0,     0,   193,     0,    44,     0,
       0,     0,   194,   201,     0,   206,     3,     4,     5,     6,
       0,    11,    33,    41,    32,    35,   196,    36,    37,    38,
      40,    39,    91,    93,   100,    95,    98,    99,    96,    97,
      94,   101,   102,    92,   103,   104,     0,     0,     0,     0,
     269,   269,     0,    44,     0,     0,    52,     0,    44,    46,
      47,    48,    49,    51,    50,   191,   189,     0,   269,   269,
      25,     0,   200,     0,     0,     0,    27,    28,    30,     0,
     205,     0,     7,    63,    31,    34,     0,   195,     0,   105,
      90,     0,   269,     0,     0,     0,     0,     0,   269,   269,
       0,   269,   269,     0,    33,    43,    45,     0,     0,   188,
       0,     0,     0,     0,     0,   393,   393,   201,   393,     0,
       0,   393,   206,     0,     0,     0,   171,   167,     0,   172,
      53,     0,   168,    63,   169,    63,     0,     0,     0,   173,
     165,    87,    88,   106,    86,     0,    82,   159,   166,   393,
       0,   196,     0,     0,     0,     0,   269,     0,     0,     0,
     279,     0,   271,   276,   393,   393,     0,     0,     0,     0,
       0,     0,    24,   192,   190,   269,    33,     0,     0,    33,
     352,   269,   171,   167,   349,   351,   394,   269,   308,     0,
     393,     0,     0,     0,     0,     0,     0,     0,   120,   152,
     203,   293,   292,   294,   282,   283,   290,   291,   289,   287,
     284,   286,   357,   285,   288,     0,   306,     0,   299,   295,
     296,   298,   297,     0,   202,   204,    44,    29,   208,   207,
     171,     0,     0,    74,    73,    63,    63,     0,    54,    81,
       0,     0,     0,   178,     0,   171,     0,     0,   185,   176,
       0,   174,    63,    89,     0,   183,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,   197,
     269,   269,   393,   269,     0,   274,   275,   273,   393,   270,
       0,     0,     0,   393,   393,   213,   215,    44,     0,     0,
       0,   259,   252,   261,   257,   264,   248,   249,   263,   251,
     250,   258,   254,   262,   253,   256,   260,   255,     0,     0,
     265,   266,   267,     0,     0,    26,     0,     9,     0,     0,
     344,     0,     0,     0,   302,     0,   171,   172,     0,   316,
     157,   153,   152,   154,   158,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     356,     0,   361,   364,   362,   365,     0,     0,     0,   378,
     379,     0,   388,   389,   219,   385,     0,   363,   368,   373,
     359,   372,   375,   360,   376,   377,   384,   386,     0,     0,
       0,     0,   305,     0,     0,     0,   112,     0,    85,    84,
      63,   183,     0,    61,    63,    63,     0,    63,     0,   160,
     184,     0,     0,   170,   173,   107,   162,   182,     0,   180,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,   393,   308,   277,   280,   281,
       0,   272,    33,     0,     0,     0,     0,    15,    16,    33,
     240,   209,   211,     8,    10,    12,   393,   307,     0,     0,
       0,     0,   346,   347,   348,     0,     0,   314,   315,   147,
     148,   144,   145,   143,   146,   149,   150,   121,   122,   140,
     142,   141,   123,   125,   126,   124,   136,   139,   138,   137,
     151,   127,   128,   129,   130,   131,   134,   135,   132,   133,
       0,   390,   391,   221,   369,   370,   380,     0,   382,   220,
     353,   374,   371,   358,   387,   393,     0,   393,     0,   320,
       0,     0,   331,   332,   335,   336,     0,   322,   325,   329,
     333,   323,   366,   326,   404,   330,   340,   403,   393,     0,
     393,    33,    42,     0,   108,   113,     0,   116,   118,     0,
      76,     0,    80,     0,     0,    59,     0,    79,   179,    83,
     187,     0,   186,   177,   175,   161,   183,   164,   199,   393,
     393,    33,    33,     0,     0,     0,     0,     0,     0,   214,
     216,     0,   268,   300,   349,   350,   341,   345,   303,   304,
     381,     0,   225,     0,   383,   310,   171,     0,   400,     0,
     398,   392,     0,   337,   338,   339,   367,   328,   319,   324,
     334,   321,   327,   393,   402,   317,     0,   318,     0,    75,
     111,   110,    63,   112,    63,     0,     0,     0,    63,    55,
       0,    63,    57,    61,    56,   181,     0,     0,     0,     0,
      33,   278,     0,   241,   210,   212,   242,     0,   343,     0,
       0,     0,   237,   393,   223,   355,     0,     0,     0,     0,
     269,   171,   407,     0,     0,     0,    20,     0,     0,   109,
     114,   115,   117,   119,     0,    77,     0,     0,    60,    33,
      33,   246,   244,     0,     0,     0,   395,   301,     0,   393,
     222,     0,   226,     0,   227,   354,   401,   393,   399,     0,
     393,     0,   393,    13,    63,    20,    22,    23,     0,    14,
      63,     0,    58,     0,     0,   243,     0,     0,     0,   342,
     239,   238,     0,   224,     0,   229,   309,   393,   406,     0,
     405,   408,   311,    18,    21,    17,    78,    63,   245,   247,
       0,   393,   396,   228,     0,   231,     0,     0,   409,    20,
      62,   393,   312,   313,   230,     0,   233,   217,     0,   410,
      63,   397,   232,     0,     0,     0,    19,   234,   235,   411,
       0,   218,   236
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -669,  -631,
    -669,   120,  -669,   -18,   -58,  -145,    19,  -669,    21,   -26,
    -669,  -669,  -669,  -669,    27,  -669,  -224,   -14,  -669,  -669,
    -669,   627,  -130,  -669,  -669,    41,  -669,    38,  -669,   436,
      72,   -81,  -668,   252,  -669,  -131,  -391,  -669,  -669,   267,
    -669,    22,   236,  -669,    -8,   539,  -669,    28,   586,  -669,
      -7,   571,    18,     0,   137,  -669,  -669,   320,  -669,  -669,
    -669,  -669,  -669,  -669,  -669,  -669,     4,  -669,  -669,  -669,
    -669,  -397,  -160,   -29,   452,  -669,   167,     7,  -105,  -135,
    -669,   -93,    25,  -101,  -669,  -669,   -17,  -669,  -669,  -669,
    -669,  -669,   -92,  -669,  -321,  -669,   193,  -669,   195,  -669,
    -454,  -669,   146,  -669,  -669,   133,  -375,  -669,  -669,  -669,
    -141,  -669,  -669,  -208,  -297,  -304,   356,  -669,  -669,  -106,
      13,  -669,  -521,  -669,  -522,  -669,  -669,  -669,    -4,  -669
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   465,    18,    19,   677,   714,
     715,   171,   114,    78,    79,    20,   309,    22,    23,    57,
      58,   140,   141,   142,   564,   565,   143,   144,    24,    44,
      45,    46,   145,   553,   632,   554,   555,   556,   557,   197,
     198,   199,   147,   250,   251,   246,   428,   429,   148,   247,
     248,    25,    67,    26,    27,    87,    88,    28,    72,    73,
      29,    80,   381,    30,   383,   615,   384,   385,   602,   704,
     664,   735,   755,   766,   774,   781,   661,   662,    31,   310,
     311,   312,   313,    96,   161,   162,   163,   447,   200,   217,
     201,   202,   203,   204,   205,   220,   449,   206,   207,   208,
     209,   221,   210,   536,   537,   538,   539,   540,   541,   211,
     471,   472,   323,   212,   213,   386,   387,   388,   543,   389,
     390,   391,   392,   544,   394,   395,   396,   397,   214,   215,
     695,   696,   609,   610,   546,   547,   624,   673,   740,   741
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,   146,   240,   393,   241,   244,    84,    63,   617,
     223,   408,   409,   225,   267,   219,   228,   314,   597,   474,
     561,    21,    97,   218,   222,   542,   473,   100,   626,    56,
      59,   308,   106,    81,   316,   733,    61,   160,    74,   111,
     112,    85,    83,   223,   525,    60,    62,     3,   219,   658,
      60,    62,   146,    63,   146,   178,   218,   222,    63,   281,
     282,   104,   227,   154,   592,   592,   320,     6,    52,   166,
     167,   551,   168,   169,    56,    59,   156,   470,   398,    56,
      59,    61,    65,    66,   744,   329,    61,   216,    83,   403,
      54,   216,   175,   399,    52,    70,   545,   526,   288,   160,
     160,   160,    82,   630,  -306,   777,   232,   105,    71,   186,
     330,   332,   332,   334,   332,   332,    54,   552,   216,    12,
     510,   464,   425,   172,   322,   430,   314,   274,   770,   446,
     631,   328,   400,   188,   270,    15,   186,   273,   401,   321,
      81,   322,    74,   400,   528,    64,   290,    75,   708,   404,
      83,   319,   318,   710,   146,   146,   149,   289,   324,   413,
     446,    52,   157,   542,   414,    52,   542,   443,   474,   516,
      90,   146,   450,   116,   150,   473,    86,   448,   454,   455,
      76,   521,  -306,    54,    77,   645,   560,    54,   230,   183,
      64,   567,   129,   569,   470,    64,    83,   158,   317,    47,
     405,    52,    91,  -306,   379,   698,   675,   319,  -306,  -306,
      92,    52,   382,    48,  -306,   612,   132,   619,    60,    62,
     621,    49,   160,    54,   676,   134,    63,    50,  -306,    93,
     159,    51,    95,    54,   545,   371,   426,   545,   103,  -306,
     380,   441,   442,   115,   444,   116,   775,    56,    59,   732,
     522,   139,   523,   109,    61,  -306,   319,   592,   592,  -306,
     117,   456,    68,  -306,   331,   333,    69,   335,   336,   230,
     183,    76,    94,   129,   130,    77,    95,    98,   116,    60,
      62,    99,   -27,   418,   566,   568,   -27,    63,    32,    33,
     254,   113,   587,   588,   255,    84,   256,   132,   257,   107,
     101,   467,   600,    84,   102,   108,   134,   586,    56,    59,
     604,   118,   110,   153,   591,    61,    95,    95,   -28,   119,
     517,   120,   -28,   382,   275,   276,   277,   233,   234,   146,
     138,   121,   139,   146,   146,   122,   146,   514,   515,   151,
     583,   641,   642,   173,   174,   164,    34,    35,   152,    36,
      37,    38,    39,   155,    40,   474,   165,   105,   170,   176,
     226,   593,   473,    64,   177,   179,   235,   238,   236,   511,
     252,   253,   271,    41,    42,   272,    43,   278,   287,   180,
     280,   279,   283,   379,   284,   379,   285,   325,   286,   407,
     319,   382,   532,   382,   315,   393,   181,   382,   182,   183,
     534,   411,   129,   130,   412,   184,   417,   185,   418,   419,
     681,   402,   420,   424,   685,   627,   186,   445,   187,   380,
     605,   380,   611,   421,    64,   608,   132,   457,   533,   587,
     588,   468,   423,   440,   452,   134,   648,   649,   453,   458,
     188,   459,   469,   625,   223,   460,     4,   461,   608,   219,
       5,     6,   462,   463,   466,   475,   477,   218,   222,   189,
     513,   139,   518,   190,   191,   371,   520,     7,   527,   548,
     511,   549,   382,   550,   646,   647,     8,     9,   563,   571,
     575,     5,     6,   192,   193,   576,   581,   577,   579,    10,
      11,   580,   194,   582,   584,   585,   746,   589,     7,   195,
     590,   196,   679,    12,   552,   693,   512,    53,     9,   594,
     595,   687,   596,   598,   601,    13,   603,    14,   672,    15,
      10,   616,   618,   760,   623,   629,   633,   634,   613,   635,
     532,   638,   639,   532,    12,   640,   643,   535,   534,   644,
     534,   534,   650,   660,   723,   724,    13,   652,    55,   653,
      15,   146,   654,   146,   655,   656,   657,   146,   702,   231,
     146,   663,   670,   668,   237,   669,   533,   239,   608,   533,
     172,   689,   242,   243,   243,   249,   674,   742,     4,   686,
     739,   690,     5,     6,   743,   721,   268,   691,   692,   697,
     694,   699,   703,   450,   700,   379,   701,   705,   448,     7,
     713,   707,   736,   382,   711,   738,   223,   512,    53,     9,
     712,   219,   718,   719,   678,   722,   415,   725,   726,   218,
     222,    10,   727,   728,   729,   243,   734,   739,   737,   745,
     747,   380,   756,   146,   748,    12,   749,   750,   751,   146,
     776,   709,   753,   660,   757,   450,   758,    13,   754,    55,
     762,    15,   759,   764,   761,   765,   771,   768,   767,   382,
     772,   773,   778,   780,   782,   614,   146,   779,   716,   717,
     688,   628,    89,   682,   680,   535,   574,   535,   535,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   572,   146,
     269,   427,   243,   229,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   224,   519,   731,   730,   716,   717,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   254,   451,   620,   763,   255,   666,   256,   622,   257,
     659,   752,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   716,   717,   524,   769,     0,     0,     0,     0,     0,
       0,   476,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,     0,     0,   230,   183,
       0,     0,   129,   130,     0,     0,     0,     0,     0,   181,
       0,   671,   183,   528,     6,   129,   130,     0,   184,     0,
     185,     0,   558,   559,   720,     0,   132,   427,   562,   186,
      52,   187,   243,     0,   570,   134,     0,     0,   573,   132,
     249,     0,     6,     0,     0,     0,     0,     0,   134,     0,
       0,   337,    54,   188,   371,   372,   578,   374,    52,   138,
       0,   139,     0,     0,   191,     0,    12,    53,     9,     0,
       0,     0,   189,   530,   139,   422,   190,   191,    13,     0,
      54,     0,   531,   192,   193,     0,     0,     0,     0,     0,
       0,     0,   194,     0,    12,     0,   192,   193,     0,   195,
       0,   196,     0,     0,     0,   194,    13,     0,    55,   636,
      15,     0,   195,     0,   196,     0,     0,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,     0,
       0,     0,   607,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   607,   667,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   410,
       0,     0,   427,     0,     0,     0,     0,     0,     0,     0,
     651,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,     0,     0,     0,     0,   558,
       0,   558,   683,   684,     0,     0,     0,     0,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
       0,     0,     0,   706,     0,   607,   606,   183,     0,     0,
     129,   130,   245,   183,     0,     0,   129,   130,   326,   183,
       0,     0,   327,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
     132,     0,     0,   134,     0,     0,   132,   243,   446,   134,
       0,     0,     0,     0,     0,   134,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,   139,
       0,     0,   191,   138,     0,   139,     0,     0,   191,   138,
       0,   139,     0,     0,   191,     0,     0,     0,     0,     0,
       0,   192,   193,     0,   243,     0,     0,   192,   193,     0,
     194,     0,     0,   192,   193,     0,   194,   195,     0,   196,
       0,     0,   194,   195,     0,   196,     0,     0,     0,   195,
       0,   196,     0,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,    83,   123,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,     0,     0,   124,     0,     0,   125,   126,   127,   128,
       0,   129,   130,     0,   369,     6,     0,     0,     0,     0,
       0,   370,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    76,   131,   132,     0,    77,     0,     0,
     133,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,   135,    54,     0,   371,   372,   373,   374,   375,
     136,     0,   137,     0,     0,     0,     0,    12,   138,     0,
     139,     0,     0,     0,   376,   291,     0,     4,     0,    13,
     292,     5,     6,   377,     0,     0,   293,     0,     0,     0,
     294,     0,   295,     0,   378,     0,     0,   296,     7,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     9,     0,
       0,     0,     0,     0,     0,   297,   298,     0,     0,   299,
      10,     0,     0,     0,     0,   291,     0,     0,     0,     0,
     292,   300,   301,     0,    12,   302,   293,     0,   303,   304,
     294,     0,   295,     0,     0,     0,    13,   296,    55,     0,
      15,   305,   306,     0,   307,   369,     6,     0,     0,     0,
       0,     0,   665,     0,     0,   297,   298,     0,     0,   299,
       0,     0,    52,     0,    76,     0,     0,     0,    77,     0,
       0,   300,   301,     0,     0,   302,   528,     6,   303,   304,
       0,     0,     0,   529,    54,     0,   371,   372,   373,   374,
     375,   305,   306,    52,   307,    76,     0,     0,    12,    77,
       0,     0,     0,     0,     0,   376,     0,   369,     6,     0,
      13,     0,     0,     0,   377,    54,     0,   371,   372,     0,
     374,     0,     0,     0,    52,     0,     0,     0,     0,    12,
       0,     0,     0,     0,     0,     0,   530,     0,     0,     0,
       0,    13,     0,     0,   637,   531,    54,     0,   371,   372,
     373,   374,   375,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,   376,     0,     0,
       0,     0,    13,     0,     0,     0,   377,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     599,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   254,     0,     0,
       0,   255,     0,   256,     0,   257,     0,     0,   360,   361,
     362,   363,   364,   365,   366,   367,   368
};

static const yytype_int16 yycheck[] =
{
       8,     8,    83,   133,   212,   135,   137,    21,     8,   531,
     116,   235,   236,   118,   149,   116,   121,   177,   472,   323,
     411,     2,    51,   116,   116,   400,   323,    53,   549,     8,
       8,   176,    58,    15,   179,   703,     8,    95,    13,    68,
      69,    22,     6,   149,    38,    53,    53,     0,   149,    16,
      58,    58,   133,    53,   135,   113,   149,   149,    58,   164,
     165,    31,   120,    92,   461,   462,    16,    10,    26,    98,
      99,    31,   101,   102,    53,    53,    94,     9,     4,    58,
      58,    53,    28,    29,   715,   190,    58,    28,     6,     4,
      48,    28,   110,    19,    26,    28,   400,    91,    16,   157,
     158,   159,    85,    15,    38,   773,   124,    77,    28,    46,
     191,   192,   193,   194,   195,   196,    48,    77,    28,    62,
      78,    85,   252,   104,    91,   256,   286,   156,   759,    70,
      42,   189,    58,    70,   152,    78,    46,   155,    64,    89,
     122,    91,   117,    58,     9,     8,   175,    28,   669,    64,
       6,    85,   181,    87,   235,   236,    87,   171,   187,    17,
      70,    26,    10,   538,    22,    26,   541,   272,   472,   377,
      16,   252,   278,   107,   105,   472,    28,   278,   283,   284,
      28,   389,    11,    48,    32,   576,   410,    48,    28,    29,
      53,   415,    32,   417,     9,    58,     6,    45,   179,    26,
     226,    26,    28,    32,   212,   659,    16,    85,    86,    38,
      28,    26,   212,    40,    92,    40,    56,   538,   226,   226,
     541,    48,   280,    48,    34,    65,   226,    28,    57,    28,
      78,    32,    89,    48,   538,    50,   254,   541,    28,    68,
     212,   270,   271,   105,   273,   107,   768,   226,   226,    89,
     391,    91,   393,    88,   226,    84,    85,   654,   655,    88,
      88,   287,    28,    92,   192,   193,    32,   195,   196,    28,
      29,    28,    85,    32,    33,    32,    89,    28,   107,   287,
     287,    32,    86,    87,   414,   416,    90,   287,    28,    29,
      85,    89,   452,   453,    89,   309,    91,    56,    93,    86,
      28,   319,   510,   317,    32,    86,    65,   452,   287,   287,
     518,   105,    85,    85,   459,   287,    89,    89,    86,    88,
     378,    86,    90,   323,   157,   158,   159,    28,    29,   410,
      89,    87,    91,   414,   415,    88,   417,    51,    52,    88,
     445,    15,    16,   107,   108,    87,    86,    87,    85,    89,
      90,    91,    92,    85,    94,   659,    87,    77,    88,    88,
      35,   466,   659,   226,    88,    88,    87,    28,    87,   369,
      88,    16,    28,   113,   114,    87,   116,    87,    35,     9,
      88,    90,    87,   391,    87,   393,    88,    91,    88,    96,
      85,   391,   400,   393,    90,   603,    26,   397,    28,    29,
     400,    89,    32,    33,    75,    35,    12,    37,    87,    90,
     634,   109,    90,    86,   638,   550,    46,    87,    48,   391,
     525,   393,   527,    88,   287,   526,    56,    85,   400,   589,
     590,    28,    92,   105,    88,    65,   581,   582,    88,    85,
      70,    88,    65,   548,   550,    88,     5,    88,   549,   550,
       9,    10,    88,    85,    87,    38,    90,   550,   550,    89,
      28,    91,    88,    93,    94,    50,    16,    26,    38,    38,
     470,    91,   472,    38,   579,   580,    35,    36,    39,    28,
      90,     9,    10,   113,   114,    86,    88,    92,    87,    48,
      49,    87,   122,    88,   105,     4,   720,    88,    26,   129,
      88,   131,   632,    62,    77,   650,   369,    35,    36,    90,
      92,   641,    16,    37,    91,    74,    90,    76,   623,    78,
      48,    51,    16,   747,     7,    16,    88,    87,   528,    86,
     538,    15,    90,   541,    62,    28,    88,   400,   538,    16,
     540,   541,    88,   601,   689,   690,    74,    91,    76,    88,
      78,   632,    88,   634,    88,    88,    38,   638,   663,   123,
     641,    87,    28,    92,   128,    86,   538,   131,   669,   541,
     551,    88,   136,   137,   138,   139,    92,   712,     5,    87,
     711,    88,     9,    10,   714,   686,   150,    88,    88,    37,
      28,    87,    32,   699,    92,   603,    88,    16,   699,    26,
      85,    38,   707,   603,    38,   710,   712,   470,    35,    36,
      38,   712,    16,    85,   628,    16,    12,    88,    13,   712,
     712,    48,    92,    88,    16,   189,    57,   758,    87,    85,
      12,   603,   737,   714,    88,    62,    88,    28,    38,   720,
     770,   670,    28,   701,    87,   751,    88,    74,    84,    76,
     751,    78,    21,    28,    87,    68,   761,    89,    88,   659,
      28,    11,    88,    11,    88,   528,   747,    90,   676,   676,
     643,   551,    45,   635,   633,   538,   424,   540,   541,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   421,   770,
     151,   255,   256,   122,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   117,   384,   701,   699,   715,   715,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    85,   280,   540,   751,    89,   603,    91,   543,    93,
     594,   728,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   759,   759,   397,   758,    -1,    -1,    -1,    -1,    -1,
      -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,     9,    10,    32,    33,    -1,    35,    -1,
      37,    -1,   406,   407,    12,    -1,    56,   411,   412,    46,
      26,    48,   416,    -1,   418,    65,    -1,    -1,   422,    56,
     424,    -1,    10,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    13,    48,    70,    50,    51,   440,    53,    26,    89,
      -1,    91,    -1,    -1,    94,    -1,    62,    35,    36,    -1,
      -1,    -1,    89,    69,    91,    13,    93,    94,    74,    -1,
      48,    -1,    78,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    62,    -1,   113,   114,    -1,   129,
      -1,   131,    -1,    -1,    -1,   122,    74,    -1,    76,    13,
      78,    -1,   129,    -1,   131,    -1,    -1,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,    -1,   526,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   549,    13,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    71,
      -1,    -1,   576,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     584,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,   633,
      -1,   635,   636,   637,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,   667,    -1,   669,    28,    29,    -1,    -1,
      32,    33,    28,    29,    -1,    -1,    32,    33,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    65,    -1,    -1,    56,   711,    70,    65,
      -1,    -1,    -1,    -1,    -1,    65,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,
      -1,    -1,    94,    89,    -1,    91,    -1,    -1,    94,    89,
      -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,   758,    -1,    -1,   113,   114,    -1,
     122,    -1,    -1,   113,   114,    -1,   122,   129,    -1,   131,
      -1,    -1,   122,   129,    -1,   131,    -1,    -1,    -1,   129,
      -1,   131,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     6,     7,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,
      -1,    32,    33,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    55,    56,    -1,    32,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    48,    -1,    50,    51,    52,    53,    54,
      81,    -1,    83,    -1,    -1,    -1,    -1,    62,    89,    -1,
      91,    -1,    -1,    -1,    69,     3,    -1,     5,    -1,    74,
       8,     9,    10,    78,    -1,    -1,    14,    -1,    -1,    -1,
      18,    -1,    20,    -1,    89,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,    59,    60,    -1,    62,    63,    14,    -1,    66,    67,
      18,    -1,    20,    -1,    -1,    -1,    74,    25,    76,    -1,
      78,    79,    80,    -1,    82,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    59,    60,    -1,    -1,    63,     9,    10,    66,    67,
      -1,    -1,    -1,    16,    48,    -1,    50,    51,    52,    53,
      54,    79,    80,    26,    82,    28,    -1,    -1,    62,    32,
      -1,    -1,    -1,    -1,    -1,    69,    -1,     9,    10,    -1,
      74,    -1,    -1,    -1,    78,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    72,    78,    48,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    85,    -1,    -1,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   145,   146,     0,     5,     9,    10,    26,    35,    36,
      48,    49,    62,    74,    76,    78,   147,   148,   150,   151,
     159,   160,   161,   162,   172,   195,   197,   198,   201,   204,
     207,   222,    28,    29,    86,    87,    89,    90,    91,    92,
      94,   113,   114,   116,   173,   174,   175,    26,    40,    48,
      28,    32,    26,    35,    48,    76,   162,   163,   164,   195,
     198,   201,   204,   207,   208,    28,    29,   196,    28,    32,
      28,    28,   202,   203,   236,    28,    28,    32,   157,   158,
     205,   206,    85,     6,   171,   160,    28,   199,   200,   175,
      16,    28,    28,    28,    85,    89,   227,   227,    28,    32,
     163,    28,    32,    28,    31,    77,   163,    86,    86,    88,
      85,   227,   227,    89,   156,   105,   107,    88,   105,    88,
      86,    87,    88,     7,    24,    27,    28,    29,    30,    32,
      33,    55,    56,    61,    65,    73,    81,    83,    89,    91,
     165,   166,   167,   170,   171,   176,   185,   186,   192,    87,
     105,    88,    85,    85,   227,    85,   157,    10,    45,    78,
     158,   228,   229,   230,    87,    87,   227,   227,   227,   227,
      88,   155,   160,   196,   196,   157,    88,    88,   158,    88,
       9,    26,    28,    29,    35,    37,    46,    48,    70,    89,
      93,    94,   113,   114,   122,   129,   131,   183,   184,   185,
     232,   234,   235,   236,   237,   238,   241,   242,   243,   244,
     246,   253,   257,   258,   272,   273,    28,   233,   235,   237,
     239,   245,   246,   273,   202,   232,    35,   158,   232,   205,
      28,   183,   157,    28,    29,    87,    87,   183,    28,   183,
     176,   176,   183,   183,   189,    28,   189,   193,   194,   183,
     187,   188,    88,    16,    85,    89,    91,    93,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   233,   183,   199,
     157,    28,    87,   157,   227,   230,   230,   230,    87,    90,
      88,   232,   232,    87,    87,    88,    88,    35,    16,   171,
     227,     3,     8,    14,    18,    20,    25,    43,    44,    47,
      59,    60,    63,    66,    67,    79,    80,    82,   159,   160,
     223,   224,   225,   226,   226,    90,   159,   160,   227,    85,
      16,    89,    91,   256,   227,    91,    28,    32,   158,   232,
     185,   184,   185,   184,   185,   184,   184,    13,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     9,
      16,    50,    51,    52,    53,    54,    69,    78,    89,   198,
     201,   206,   207,   208,   210,   211,   259,   260,   261,   263,
     264,   265,   266,   267,   268,   269,   270,   271,     4,    19,
      58,    64,   109,     4,    64,   163,    38,    96,   170,   170,
      71,    89,    75,    17,    22,    12,    86,    12,    87,    90,
      90,    88,    13,    92,    86,   176,   157,   183,   190,   191,
     189,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     105,   227,   227,   232,   227,    87,    70,   231,   237,   240,
     273,   228,    88,    88,   232,   232,   163,    85,    85,    88,
      88,    88,    88,    85,    85,   149,    87,   157,    28,    65,
       9,   254,   255,   268,   269,    38,   183,    90,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
      78,   207,   208,    28,    51,    52,   267,   158,    88,   211,
      16,   267,   264,   264,   270,    38,    91,    38,     9,    16,
      69,    78,   198,   201,   207,   208,   247,   248,   249,   250,
     251,   252,   260,   262,   267,   269,   278,   279,    38,    91,
      38,    31,    77,   177,   179,   180,   181,   182,   183,   183,
     170,   190,   183,    39,   168,   169,   176,   170,   189,   170,
     183,    28,   193,   183,   187,    90,    86,    92,   183,    87,
      87,    88,    88,   232,   105,     4,   159,   226,   226,    88,
      88,   159,   225,   232,    90,    92,    16,   254,    37,    92,
     267,    91,   212,    90,   267,   232,    28,   183,   237,   276,
     277,   232,    40,   207,   208,   209,    51,   278,    16,   248,
     250,   248,   252,     7,   280,   232,   276,   233,   155,    16,
      15,    42,   178,    88,    87,    86,    13,    72,    15,    90,
      28,    15,    16,    88,    16,   190,   232,   232,   159,   159,
      88,   183,    91,    88,    88,    88,    88,    38,    16,   256,
     158,   220,   221,    87,   214,    16,   259,    13,    92,    86,
      28,    28,   232,   281,    92,    16,    34,   152,   171,   176,
     179,   170,   181,   183,   183,   170,    87,   176,   168,    88,
      88,    88,    88,   159,    28,   274,   275,    37,   254,    87,
      92,    88,   232,    32,   213,    16,   183,    38,   276,   227,
      87,    38,    38,    85,   153,   154,   198,   204,    16,    85,
      12,   237,    16,   159,   159,    88,    13,    92,    88,    16,
     231,   220,    89,   186,    57,   215,   232,    87,   232,   189,
     282,   283,   233,   176,   153,    85,   170,    12,    88,    88,
      28,    38,   274,    28,    84,   216,   232,    87,    88,    21,
     170,    87,   237,   240,    28,    68,   217,    88,    89,   282,
     153,   232,    28,    11,   218,   278,   176,   186,    88,    90,
      11,   219,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   144,   146,   145,   147,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   165,   165,   165,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     172,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   179,   180,   181,   181,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   184,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   186,
     186,   186,   186,   187,   187,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   193,   193,   194,   195,   196,
     196,   196,   196,   197,   197,   198,   199,   199,   200,   200,
     201,   202,   202,   203,   203,   204,   205,   205,   206,   207,
     207,   207,   207,   208,   208,   208,   208,   209,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     222,   222,   222,   222,   222,   222,   222,   222,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   229,   229,   230,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   233,   233,   233,   233,   233,
     234,   234,   234,   234,   235,   236,   237,   237,   237,   238,
     238,   239,   240,   240,   241,   242,   243,   244,   245,   246,
     246,   247,   247,   247,   248,   248,   249,   249,   249,   249,
     249,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     252,   253,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   258,   258,   258,   259,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     263,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     266,   266,   267,   267,   268,   269,   270,   270,   271,   271,
     271,   271,   272,   273,   273,   274,   274,   275,   276,   276,
     277,   277,   278,   278,   279,   280,   281,   281,   282,   282,
     282,   283
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
       3,     1,     3,     1,     1,     2,     0,     3,     3,     5,
       2,     0,     3,     3,     3,     2,     0,     3,     3,     6,
       8,     6,     8,     4,     6,     4,     6,     6,    11,     1,
       2,     0,     3,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     1,     3,     3,
       6,     8,     8,    10,     9,    11,     9,    11,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       3,     1,     3,     2,     2,     2,     1,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     6,     2,     4,     4,     4,     1,     3,     1,     7,
       4,     7,     7,     7,     3,     3,     2,     4,     4,     4,
       3,     2,     1,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     2,
       1,     4,     7,     5,     2,     2,     1,     1,     1,     0,
       3,     1,     1,     3,     6,     5,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     1,     2,     1,     1,
       2,     2,     4,     0,     1,     1,     3,     5,     1,     3,
       1,     3,     2,     1,     1,     4,     3,     1,     1,     2,
       3,     5
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

    case YYSYMBOL_85_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_86_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_87_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_88_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_94_: /* '@'  */
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
                                  {
     (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
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
                 { (yyval.n_expr) = new real_node((yyvsp[0].tok)); }
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
        { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 199: /* const_def: IDENT ':' const_type EQ expr  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 200: /* type_def_part: TYPE type_def_list  */
        { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 201: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 202: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 203: /* type_def: IDENT EQ type  */
                        { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 204: /* type_def: simple_templ_type EQ type  */
                                { (yyval.n_tdef) = new type_def_templ_node((yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 205: /* var_decl_part: VAR var_decl_list  */
                                 { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 206: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 207: /* var_decl_list: var_decl ';' var_decl_list  */
                                 { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 208: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 209: /* proc_fwd_decl: PROCEDURE IDENT formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 210: /* proc_fwd_decl: FUNCTION IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 211: /* proc_fwd_decl: PROCEDURE INDEX formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 212: /* proc_fwd_decl: FUNCTION INDEX formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 213: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 214: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 215: /* proc_spec: PROCEDURE INDEX formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 216: /* proc_spec: FUNCTION INDEX formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 217: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 218: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 220: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 221: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 222: /* prop_array: '[' prop_param_list ']'  */
       { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 223: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 224: /* prop_index: INDEX constant  */
       { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 225: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 226: /* prop_type_def: ':' type  */
       { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 227: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 228: /* prop_read: READ IDENT  */
       { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 229: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 230: /* prop_write: WRITE IDENT  */
       { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 231: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 232: /* prop_stored: STORED IDENT  */
       { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 233: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 234: /* prop_default: DEFAULT constant  */
       { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 235: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 236: /* prop_default_directive: DEFAULT ';'  */
       { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 238: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 239: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 240: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 241: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 242: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 243: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 244: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 245: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 246: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 247: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 267: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 268: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 269: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 270: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 272: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 273: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 274: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 275: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 276: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 277: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 278: /* param_decl: ident_list ':' param_type EQ expr  */
                                         { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 279: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 300: /* fptr_type: FUNCTION formal_params ':' type  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 301: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 302: /* fptr_type: PROCEDURE formal_params  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 303: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 304: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 305: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 306: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 307: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 308: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 309: /* array_type: packed ARRAY '[' indices ']' OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 310: /* array_type: packed ARRAY OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 311: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 312: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 313: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 314: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 315: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 316: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 317: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 318: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 319: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 320: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 321: /* record_body: record_field_list record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 324: /* record_components: record_component record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 327: /* record_component: record_access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 328: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 334: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 335: /* record_method_decl: proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 336: /* record_method_decl: proc_spec  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 337: /* record_method_decl: CLASS proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 338: /* record_method_decl: CLASS proc_spec  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 339: /* record_method_decl: CLASS operator_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 340: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 341: /* interface_type: INTERFACE guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 342: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 343: /* interface_type: INTERFACE '(' IDENT ')' END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 344: /* interface_type: INTERFACE END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 345: /* interface_components: interface_component interface_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 349: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 350: /* guid: '[' SCONST ']'  */
       { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 353: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 354: /* class_type: class_or_object '(' ident_list ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 355: /* class_type: class_or_object '(' ident_list ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 356: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 357: /* class_type: class_or_object  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 358: /* object_body: field_decl_list object_components  */
       { 
         // rare case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
       }
    break;

  case 360: /* object_body: field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 366: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 367: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 368: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 369: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 370: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 371: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 374: /* object_component: class_access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 380: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 381: /* field_decl_part: CLASS VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 382: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 383: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 385: /* object_properties: property_decl_list  */
       { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 387: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 388: /* method_decl: proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 389: /* method_decl: proc_spec  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 390: /* method_decl: CLASS proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 391: /* method_decl: CLASS proc_spec  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 392: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 393: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 396: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 397: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 399: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 400: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 401: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 402: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 403: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 405: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 406: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 407: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 409: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 410: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 411: /* variant: expr_list ':' '(' field_list ')'  */
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


