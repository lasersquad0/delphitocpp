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
  YYSYMBOL_INLINE = 36,                    /* INLINE  */
  YYSYMBOL_INTERFACE = 37,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 38,                     /* LABEL  */
  YYSYMBOL_OBJECT = 39,                    /* OBJECT  */
  YYSYMBOL_OF = 40,                        /* OF  */
  YYSYMBOL_ON = 41,                        /* ON  */
  YYSYMBOL_OPERATOR = 42,                  /* OPERATOR  */
  YYSYMBOL_ORIGIN = 43,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 44,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 45,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 46,                  /* OVERRIDE  */
  YYSYMBOL_OUT = 47,                       /* OUT  */
  YYSYMBOL_PACKED = 48,                    /* PACKED  */
  YYSYMBOL_PASCAL = 49,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 50,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 52,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 53,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 54,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 55,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 56,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 57,                     /* RAISE  */
  YYSYMBOL_RCONST = 58,                    /* RCONST  */
  YYSYMBOL_READ = 59,                      /* READ  */
  YYSYMBOL_RECORD = 60,                    /* RECORD  */
  YYSYMBOL_REGISTER = 61,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 62,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 63,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 64,            /* RESOURCESTRING  */
  YYSYMBOL_SAFECALL = 65,                  /* SAFECALL  */
  YYSYMBOL_SET = 66,                       /* SET  */
  YYSYMBOL_SCONST = 67,                    /* SCONST  */
  YYSYMBOL_STATIC = 68,                    /* STATIC  */
  YYSYMBOL_STDCALL = 69,                   /* STDCALL  */
  YYSYMBOL_STORED = 70,                    /* STORED  */
  YYSYMBOL_STRICT = 71,                    /* STRICT  */
  YYSYMBOL_STRING = 72,                    /* STRING  */
  YYSYMBOL_THEN = 73,                      /* THEN  */
  YYSYMBOL_TO = 74,                        /* TO  */
  YYSYMBOL_TRY = 75,                       /* TRY  */
  YYSYMBOL_TYPE = 76,                      /* TYPE  */
  YYSYMBOL_UNTIL = 77,                     /* UNTIL  */
  YYSYMBOL_UNIT = 78,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 79,                  /* UNIT_END  */
  YYSYMBOL_VAR = 80,                       /* VAR  */
  YYSYMBOL_VARARGS = 81,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 82,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 83,                     /* WHILE  */
  YYSYMBOL_WINAPI = 84,                    /* WINAPI  */
  YYSYMBOL_WITH = 85,                      /* WITH  */
  YYSYMBOL_WRITE = 86,                     /* WRITE  */
  YYSYMBOL_87_ = 87,                       /* '.'  */
  YYSYMBOL_88_ = 88,                       /* ','  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* ';'  */
  YYSYMBOL_91_ = 91,                       /* '('  */
  YYSYMBOL_92_ = 92,                       /* ')'  */
  YYSYMBOL_93_ = 93,                       /* '['  */
  YYSYMBOL_94_ = 94,                       /* ']'  */
  YYSYMBOL_95_ = 95,                       /* '^'  */
  YYSYMBOL_96_ = 96,                       /* '@'  */
  YYSYMBOL_SCOPE = 97,                     /* SCOPE  */
  YYSYMBOL_LET = 98,                       /* LET  */
  YYSYMBOL_LETADD = 99,                    /* LETADD  */
  YYSYMBOL_LETSUB = 100,                   /* LETSUB  */
  YYSYMBOL_LETDIV = 101,                   /* LETDIV  */
  YYSYMBOL_LETMUL = 102,                   /* LETMUL  */
  YYSYMBOL_LETAND = 103,                   /* LETAND  */
  YYSYMBOL_LETOR = 104,                    /* LETOR  */
  YYSYMBOL_LETSHL = 105,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 106,                   /* LETSHR  */
  YYSYMBOL_EQ = 107,                       /* EQ  */
  YYSYMBOL_NE = 108,                       /* NE  */
  YYSYMBOL_LT = 109,                       /* LT  */
  YYSYMBOL_LE = 110,                       /* LE  */
  YYSYMBOL_GT = 111,                       /* GT  */
  YYSYMBOL_GE = 112,                       /* GE  */
  YYSYMBOL_IN = 113,                       /* IN  */
  YYSYMBOL_IS = 114,                       /* IS  */
  YYSYMBOL_PLUS = 115,                     /* PLUS  */
  YYSYMBOL_MINUS = 116,                    /* MINUS  */
  YYSYMBOL_OR = 117,                       /* OR  */
  YYSYMBOL_XOR = 118,                      /* XOR  */
  YYSYMBOL_BINOR = 119,                    /* BINOR  */
  YYSYMBOL_MOD = 120,                      /* MOD  */
  YYSYMBOL_DIV = 121,                      /* DIV  */
  YYSYMBOL_DIVR = 122,                     /* DIVR  */
  YYSYMBOL_MUL = 123,                      /* MUL  */
  YYSYMBOL_AND = 124,                      /* AND  */
  YYSYMBOL_SHR = 125,                      /* SHR  */
  YYSYMBOL_SHL = 126,                      /* SHL  */
  YYSYMBOL_BINAND = 127,                   /* BINAND  */
  YYSYMBOL_AS = 128,                       /* AS  */
  YYSYMBOL_UPLUS = 129,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 130,                   /* UMINUS  */
  YYSYMBOL_NOT = 131,                      /* NOT  */
  YYSYMBOL_ADDRESS = 132,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 133,                   /* BINNOT  */
  YYSYMBOL_EQUAL = 134,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 135,                 /* NOTEQUAL  */
  YYSYMBOL_LESSTH = 136,                   /* LESSTH  */
  YYSYMBOL_GREATERTH = 137,                /* GREATERTH  */
  YYSYMBOL_ADD = 138,                      /* ADD  */
  YYSYMBOL_SUBSTRACT = 139,                /* SUBSTRACT  */
  YYSYMBOL_MULTIPLY = 140,                 /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 141,                   /* DIVIDE  */
  YYSYMBOL_INTDIVIDE = 142,                /* INTDIVIDE  */
  YYSYMBOL_MODULUS = 143,                  /* MODULUS  */
  YYSYMBOL_IMPLICIT = 144,                 /* IMPLICIT  */
  YYSYMBOL_EXPLICIT = 145,                 /* EXPLICIT  */
  YYSYMBOL_YYACCEPT = 146,                 /* $accept  */
  YYSYMBOL_translation = 147,              /* translation  */
  YYSYMBOL_148_1 = 148,                    /* $@1  */
  YYSYMBOL_input_file = 149,               /* input_file  */
  YYSYMBOL_program = 150,                  /* program  */
  YYSYMBOL_progend = 151,                  /* progend  */
  YYSYMBOL_module = 152,                   /* module  */
  YYSYMBOL_unit = 153,                     /* unit  */
  YYSYMBOL_init_finit = 154,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 155, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 156,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 157,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 158,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 159,                /* ident_ext  */
  YYSYMBOL_ident_list = 160,               /* ident_list  */
  YYSYMBOL_block = 161,                    /* block  */
  YYSYMBOL_decl_part_list = 162,           /* decl_part_list  */
  YYSYMBOL_decl_part = 163,                /* decl_part  */
  YYSYMBOL_unit_spec = 164,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 165,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 166,                /* unit_decl  */
  YYSYMBOL_inherited = 167,                /* inherited  */
  YYSYMBOL_try_finally = 168,              /* try_finally  */
  YYSYMBOL_try_except = 169,               /* try_except  */
  YYSYMBOL_except_many = 170,              /* except_many  */
  YYSYMBOL_except = 171,                   /* except  */
  YYSYMBOL_statement = 172,                /* statement  */
  YYSYMBOL_compoundst = 173,               /* compoundst  */
  YYSYMBOL_assemblerst = 174,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 175,                  /* asm_kwd  */
  YYSYMBOL_asm_line = 176,                 /* asm_line  */
  YYSYMBOL_asm_text = 177,                 /* asm_text  */
  YYSYMBOL_sequence = 178,                 /* sequence  */
  YYSYMBOL_case_list = 179,                /* case_list  */
  YYSYMBOL_otherwise = 180,                /* otherwise  */
  YYSYMBOL_case_items = 181,               /* case_items  */
  YYSYMBOL_case_item = 182,                /* case_item  */
  YYSYMBOL_case_elem_list = 183,           /* case_elem_list  */
  YYSYMBOL_case_elem = 184,                /* case_elem  */
  YYSYMBOL_expr = 185,                     /* expr  */
  YYSYMBOL_simple_expr = 186,              /* simple_expr  */
  YYSYMBOL_primary = 187,                  /* primary  */
  YYSYMBOL_constant = 188,                 /* constant  */
  YYSYMBOL_set_elem_list = 189,            /* set_elem_list  */
  YYSYMBOL_set_elem = 190,                 /* set_elem  */
  YYSYMBOL_expr_list = 191,                /* expr_list  */
  YYSYMBOL_act_param_list = 192,           /* act_param_list  */
  YYSYMBOL_act_param = 193,                /* act_param  */
  YYSYMBOL_record_constant = 194,          /* record_constant  */
  YYSYMBOL_field_init_list = 195,          /* field_init_list  */
  YYSYMBOL_field_init_item = 196,          /* field_init_item  */
  YYSYMBOL_label_decl_part = 197,          /* label_decl_part  */
  YYSYMBOL_label_list = 198,               /* label_list  */
  YYSYMBOL_const = 199,                    /* const  */
  YYSYMBOL_const_def_part = 200,           /* const_def_part  */
  YYSYMBOL_const_def_list = 201,           /* const_def_list  */
  YYSYMBOL_const_def = 202,                /* const_def  */
  YYSYMBOL_type_def_part = 203,            /* type_def_part  */
  YYSYMBOL_type_def_list = 204,            /* type_def_list  */
  YYSYMBOL_type_def = 205,                 /* type_def  */
  YYSYMBOL_var_decl_part = 206,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 207,            /* var_decl_list  */
  YYSYMBOL_var_decl = 208,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 209,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 210,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 211,        /* operator_fwd_decl  */
  YYSYMBOL_property_decl = 212,            /* property_decl  */
  YYSYMBOL_property_decl_list = 213,       /* property_decl_list  */
  YYSYMBOL_prop_array = 214,               /* prop_array  */
  YYSYMBOL_prop_index = 215,               /* prop_index  */
  YYSYMBOL_prop_type_def = 216,            /* prop_type_def  */
  YYSYMBOL_prop_read = 217,                /* prop_read  */
  YYSYMBOL_prop_write = 218,               /* prop_write  */
  YYSYMBOL_prop_stored = 219,              /* prop_stored  */
  YYSYMBOL_prop_default = 220,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 221,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 222,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 223,          /* prop_param_decl  */
  YYSYMBOL_proc_def = 224,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 225,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 226,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 227,                /* qualifier  */
  YYSYMBOL_qualifiers = 228,               /* qualifiers  */
  YYSYMBOL_formal_params = 229,            /* formal_params  */
  YYSYMBOL_formal_param_list = 230,        /* formal_param_list  */
  YYSYMBOL_formal_param = 231,             /* formal_param  */
  YYSYMBOL_param_decl = 232,               /* param_decl  */
  YYSYMBOL_param_type = 233,               /* param_type  */
  YYSYMBOL_type = 234,                     /* type  */
  YYSYMBOL_const_type = 235,               /* const_type  */
  YYSYMBOL_fptr_type = 236,                /* fptr_type  */
  YYSYMBOL_string_type = 237,              /* string_type  */
  YYSYMBOL_simple_templ_type = 238,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 239,              /* simple_type  */
  YYSYMBOL_array_type = 240,               /* array_type  */
  YYSYMBOL_const_array_type = 241,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 242,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 243,                /* enum_type  */
  YYSYMBOL_range_type = 244,               /* range_type  */
  YYSYMBOL_pointer_type = 245,             /* pointer_type  */
  YYSYMBOL_set_type = 246,                 /* set_type  */
  YYSYMBOL_const_set_type = 247,           /* const_set_type  */
  YYSYMBOL_record_type = 248,              /* record_type  */
  YYSYMBOL_record_body = 249,              /* record_body  */
  YYSYMBOL_record_components = 250,        /* record_components  */
  YYSYMBOL_record_component = 251,         /* record_component  */
  YYSYMBOL_record_methods = 252,           /* record_methods  */
  YYSYMBOL_record_method_decl = 253,       /* record_method_decl  */
  YYSYMBOL_record_field_list = 254,        /* record_field_list  */
  YYSYMBOL_interface_type = 255,           /* interface_type  */
  YYSYMBOL_interface_components = 256,     /* interface_components  */
  YYSYMBOL_interface_component = 257,      /* interface_component  */
  YYSYMBOL_guid = 258,                     /* guid  */
  YYSYMBOL_class_or_object = 259,          /* class_or_object  */
  YYSYMBOL_class_type = 260,               /* class_type  */
  YYSYMBOL_object_body = 261,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 262,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 263,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 264,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 265,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 266,        /* object_components  */
  YYSYMBOL_object_component = 267,         /* object_component  */
  YYSYMBOL_field_decl_part = 268,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 269,          /* field_decl_list  */
  YYSYMBOL_object_methods = 270,           /* object_methods  */
  YYSYMBOL_object_properties = 271,        /* object_properties  */
  YYSYMBOL_method_decl_list = 272,         /* method_decl_list  */
  YYSYMBOL_method_decl = 273,              /* method_decl  */
  YYSYMBOL_file_type = 274,                /* file_type  */
  YYSYMBOL_packed = 275,                   /* packed  */
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
#define YYLAST   1773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  146
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  421
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  787

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   390


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
      91,    92,     2,     2,    88,     2,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    90,
       2,     2,     2,     2,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,    95,     2,     2,     2,     2,     2,
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
      85,    86,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   396,   396,   396,   421,   421,   421,   423,   424,   427,
     427,   429,   430,   436,   438,   440,   442,   444,   447,   449,
     452,   453,   455,   455,   471,   473,   474,   478,   478,   480,
     481,   483,   485,   488,   489,   491,   491,   491,   491,   492,
     492,   492,   494,   496,   500,   501,   503,   503,   503,   503,
     504,   504,   504,   533,   534,   536,   540,   543,   545,   548,
     549,   551,   552,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   571,   573,
     574,   577,   578,   580,   581,   582,   583,   584,   585,   587,
     589,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   601,   603,   604,   607,   607,   614,   615,
     627,   627,   629,   630,   631,   633,   635,   636,   638,   639,
     663,   664,   665,   666,   667,   668,   669,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   681,   682,   683,   684,
     685,   686,   687,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   699,   700,   702,   704,   706,   708,   709,   711,
     712,   713,   714,   715,   716,   717,   720,   721,   722,   723,
     724,   725,   726,   728,   729,   730,   732,   733,   735,   735,
     737,   738,   740,   740,   743,   745,   746,   748,   799,   802,
     803,   804,   805,   807,   807,   809,   811,   812,   814,   816,
     818,   820,   822,   824,   827,   830,   831,   833,   834,   835,
     837,   839,   840,   855,   857,   858,   878,   880,   892,   894,
     898,   900,   912,   914,   918,   920,   923,   926,   927,   929,
     930,   932,   933,   935,   936,   938,   939,   941,   942,   944,
     945,   947,   948,   950,   951,   954,   955,   957,   961,   963,
     965,   967,   969,   971,   973,   975,   988,   988,   988,   988,
     988,   988,   988,   988,   988,   988,   988,   990,   990,   990,
     990,   990,   990,   990,   992,   992,   994,   995,   998,   999,
    1000,  1002,  1003,  1005,  1006,  1007,  1008,  1011,  1012,  1013,
    1015,  1015,  1021,  1021,  1021,  1021,  1021,  1021,  1021,  1022,
    1022,  1022,  1022,  1022,  1022,  1024,  1024,  1024,  1024,  1024,
    1026,  1028,  1030,  1032,  1035,  1037,  1039,  1040,  1041,  1043,
    1045,  1048,  1054,  1061,  1063,  1066,  1068,  1070,  1080,  1082,
    1085,  1092,  1093,  1095,  1101,  1103,  1104,  1106,  1108,  1109,
    1110,  1111,  1113,  1114,  1117,  1119,  1121,  1123,  1125,  1128,
    1133,  1135,  1137,  1139,  1141,  1143,  1148,  1157,  1159,  1160,
    1162,  1163,  1167,  1167,  1169,  1171,  1173,  1175,  1177,  1179,
    1181,  1185,  1194,  1195,  1198,  1198,  1200,  1200,  1200,  1202,
    1203,  1205,  1206,  1207,  1209,  1218,  1220,  1221,  1223,  1224,
    1225,  1226,  1227,  1230,  1232,  1235,  1236,  1238,  1240,  1243,
    1244,  1247,  1249,  1251,  1253,  1257,  1259,  1259,  1267,  1268,
    1271,  1272,  1275,  1277,  1280,  1282,  1285,  1286,  1289,  1290,
    1291,  1293
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
  "INDEX", "INHERITED", "INITIALIZATION", "INLINE", "INTERFACE", "LABEL",
  "OBJECT", "OF", "ON", "OPERATOR", "ORIGIN", "OTHERWISE", "OVERLOAD",
  "OVERRIDE", "OUT", "PACKED", "PASCAL", "PROCEDURE", "PROGRAM",
  "PROPERTY", "PRIVATE", "PROTECTED", "PUBLIC", "PUBLISHED", "RAISE",
  "RCONST", "READ", "RECORD", "REGISTER", "REINTRODUCE", "REPEAT",
  "RESOURCESTRING", "SAFECALL", "SET", "SCONST", "STATIC", "STDCALL",
  "STORED", "STRICT", "STRING", "THEN", "TO", "TRY", "TYPE", "UNTIL",
  "UNIT", "UNIT_END", "VAR", "VARARGS", "VIRTUAL", "WHILE", "WINAPI",
  "WITH", "WRITE", "'.'", "','", "':'", "';'", "'('", "')'", "'['", "']'",
  "'^'", "'@'", "SCOPE", "LET", "LETADD", "LETSUB", "LETDIV", "LETMUL",
  "LETAND", "LETOR", "LETSHL", "LETSHR", "EQ", "NE", "LT", "LE", "GT",
  "GE", "IN", "IS", "PLUS", "MINUS", "OR", "XOR", "BINOR", "MOD", "DIV",
  "DIVR", "MUL", "AND", "SHR", "SHL", "BINAND", "AS", "UPLUS", "UMINUS",
  "NOT", "ADDRESS", "BINNOT", "EQUAL", "NOTEQUAL", "LESSTH", "GREATERTH",
  "ADD", "SUBSTRACT", "MULTIPLY", "DIVIDE", "INTDIVIDE", "MODULUS",
  "IMPLICIT", "EXPLICIT", "$accept", "translation", "$@1", "input_file",
  "program", "progend", "module", "unit", "init_finit",
  "var_const_decl_part_list", "var_const_decl_part", "unit_def_list",
  "prog_param_list", "ident_ext", "ident_list", "block", "decl_part_list",
  "decl_part", "unit_spec", "unit_decl_list", "unit_decl", "inherited",
  "try_finally", "try_except", "except_many", "except", "statement",
  "compoundst", "assemblerst", "asm_kwd", "asm_line", "asm_text",
  "sequence", "case_list", "otherwise", "case_items", "case_item",
  "case_elem_list", "case_elem", "expr", "simple_expr", "primary",
  "constant", "set_elem_list", "set_elem", "expr_list", "act_param_list",
  "act_param", "record_constant", "field_init_list", "field_init_item",
  "label_decl_part", "label_list", "const", "const_def_part",
  "const_def_list", "const_def", "type_def_part", "type_def_list",
  "type_def", "var_decl_part", "var_decl_list", "var_decl",
  "proc_fwd_decl", "proc_spec", "operator_fwd_decl", "property_decl",
  "property_decl_list", "prop_array", "prop_index", "prop_type_def",
  "prop_read", "prop_write", "prop_stored", "prop_default",
  "prop_default_directive", "prop_param_list", "prop_param_decl",
  "proc_def", "fun_qualifier", "meth_qualifier", "qualifier", "qualifiers",
  "formal_params", "formal_param_list", "formal_param", "param_decl",
  "param_type", "type", "const_type", "fptr_type", "string_type",
  "simple_templ_type", "simple_type", "array_type", "const_array_type",
  "conformant_array_type", "enum_type", "range_type", "pointer_type",
  "set_type", "const_set_type", "record_type", "record_body",
  "record_components", "record_component", "record_methods",
  "record_method_decl", "record_field_list", "interface_type",
  "interface_components", "interface_component", "guid", "class_or_object",
  "class_type", "object_body", "record_access_spec_tok",
  "class_access_spec_tok", "record_access_spec_decl",
  "class_access_spec_decl", "object_components", "object_component",
  "field_decl_part", "field_decl_list", "object_methods",
  "object_properties", "method_decl_list", "method_decl", "file_type",
  "packed", "indices", "index_spec", "field_list", "fixed_part",
  "variant_part", "selector", "variant_list", "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-675)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-317)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -675,    38,   258,  -675,   288,   149,  -675,   152,  1573,    64,
     174,    35,  -675,    45,   108,   245,  -675,  -675,  -675,  -675,
      83,   181,   584,  -675,  -675,  -675,   184,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,   288,   177,   215,   230,   243,
     193,   127,   272,  1573,   283,   278,  -675,    29,  1573,  -675,
    -675,  -675,  -675,  -675,  -675,   147,   161,   185,   233,   127,
     223,   256,  -675,   229,   225,   251,  -675,  -675,   271,   273,
    -675,   254,  -675,  1299,  -675,  -675,   -45,  -675,   274,  -675,
    -675,   279,   246,   286,   245,    50,   289,   294,   127,   127,
     296,   127,   127,   295,   584,  -675,  -675,    64,    64,  -675,
     245,   297,   299,   245,   301,   675,   105,    45,   746,   349,
     245,   746,   245,  1177,   245,   121,   303,   304,  1177,  -675,
     365,  1177,  -675,  1299,  -675,  1299,  1177,  1177,  1183,  1177,
    -675,  -675,  -675,   305,  -675,   382,   956,  -675,  -675,   105,
    1177,   184,   245,   371,   312,   245,   127,   245,   245,   245,
    -675,   318,   316,   319,  -675,   746,   746,   322,   323,   325,
     326,   376,    78,  -675,  -675,  -675,   127,  1394,  1445,   327,
     822,   381,   127,   496,  -675,    11,  -675,  -675,   127,   329,
     746,  1222,   746,   568,  1177,  1177,   568,  1177,  1177,   912,
    -675,   977,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  1325,  -675,  -675,   106,   336,   314,
    -675,  -675,  -675,  -675,  -675,    94,  -675,  -675,  1573,  -675,
     414,  -675,  -675,  1002,   364,  -675,  -675,  1299,  1299,   979,
     372,  1645,   387,   186,   868,  1588,   455,   380,   383,   384,
     389,  1027,   379,   386,  1299,  -675,   245,  1177,  1177,  -675,
    1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,   370,
     824,  -675,   127,   127,   746,   127,   391,  -675,  -675,  -675,
     116,  -675,   142,   401,   407,   746,   746,  1445,  1445,  1573,
     411,   415,   413,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,   419,   181,  -675,  -675,  -675,   425,   427,  -675,   417,
      31,   490,   431,   245,  -675,   492,   456,   165,   485,  1177,
    -675,   169,   255,   435,  -675,   178,  -675,   178,  -675,   178,
    -675,  -675,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,
    1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,
    1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,  1177,
    1177,  1177,  1177,  1177,    49,  -675,   499,  -675,  -675,  -675,
    -675,   240,   245,   245,  -675,  -675,   440,  -675,  -675,   479,
    -675,   515,  -675,  -675,   245,  -675,  1551,  -675,  1551,  -675,
    -675,  -675,   113,    27,   498,  1522,   500,  -675,   448,   503,
      56,   477,  1177,  1177,  -675,  -675,  1299,  1177,  1177,   505,
    1299,  1299,  1177,  1299,  1177,  -675,  -675,   519,  1177,  -675,
    1177,  -675,  -675,  1645,   459,   465,   462,  1645,  1645,  1645,
    1645,  1645,  1645,  1645,  1645,  1645,  1177,   491,   471,   472,
     480,   483,   746,  -675,   460,  -675,  -675,   570,  -675,  1394,
    1445,   486,   488,   501,  -675,  -675,   822,  -675,  1445,  1445,
    -675,  -675,  -675,  -675,   746,  -675,   489,   493,   111,  -675,
     567,   203,  -675,  -675,   546,  1623,  -675,  1645,  1562,  1562,
    1562,  1562,  1562,  1562,  1562,  1562,   362,   362,   362,   362,
     362,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,   245,
    -675,  -675,   497,  -675,  -675,  -675,   507,   245,  -675,  -675,
    -675,  -675,  -675,  -675,   746,  1171,   746,   206,  -675,   538,
     245,  -675,  -675,  -675,  -675,   578,  -675,   646,  -675,   220,
     646,  -675,   245,  -675,  -675,  -675,   593,   746,  1171,   105,
     584,  -675,  -675,   590,   125,   520,   523,   525,  1049,  1547,
     599,   524,  1645,   591,   353,   529,   607,  -675,  -675,  -675,
    1645,   380,  -675,  1645,  -675,  -675,  1177,  -675,   846,  -675,
     746,   746,   822,   822,   539,  1177,   588,   547,   548,   549,
    1445,  1445,   550,  -675,   602,    26,  -675,  -675,  -675,  -675,
    -675,  -675,   245,   555,  1488,  -675,  -675,   189,  1071,  -675,
     553,   562,  -675,   624,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   796,  -675,  -675,   560,  -675,    90,
    -675,  -675,  -675,  1299,  1177,  1299,  1177,  1177,  1177,  1299,
    -675,   569,  1299,  -675,   505,  -675,  -675,   596,   575,   576,
     577,   579,   822,  1645,    34,  -675,  1445,  1445,  -675,   618,
    -675,   214,   581,   574,   582,   746,   643,  -675,   661,  1177,
     639,  1171,   127,     2,  -675,   642,   645,   601,    23,   669,
     604,  -675,  -675,  -675,  -675,  1645,   890,  -675,    34,   678,
    -675,  -675,   822,   822,  -675,  -675,   610,  -675,  -675,  -675,
     680,   116,  -675,   245,  -675,   466,   644,  -675,  1645,   746,
    -675,   617,   746,  1177,   105,  -675,  1299,    23,  -675,  -675,
     620,  -675,  1299,   700,  -675,   625,   626,  -675,  -675,  -675,
    -675,   519,  -675,   689,   635,  -675,   746,  -675,   638,  -675,
     634,  -675,   707,  -675,  -675,  -675,  1299,  -675,  -675,  -675,
     701,   668,   641,   648,  1177,    23,  -675,  -675,   714,   733,
    1445,   245,  -675,  1299,  -675,   466,   655,   656,   657,  -675,
    -675,   737,  1445,  -675,   660,  -675,  -675
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
     278,   278,     0,    44,     0,     0,    52,     0,    44,    46,
      47,    48,    49,    51,    50,   191,   189,     0,   278,   278,
      25,     0,   204,     0,     0,     0,    27,    28,    30,     0,
     210,     0,     7,    63,    31,    34,     0,   195,     0,   105,
      90,     0,   278,     0,     0,     0,     0,     0,   278,   278,
       0,   278,   278,     0,    33,    43,    45,     0,     0,   188,
       0,     0,     0,     0,     0,   406,   406,   205,   406,     0,
       0,   406,   211,     0,     0,     0,   171,   167,     0,   172,
      53,     0,   168,    63,   169,    63,     0,     0,     0,   173,
     165,    87,    88,   106,    86,     0,    82,   159,   166,   406,
       0,   196,     0,     0,     0,     0,   278,     0,     0,     0,
     279,   289,     0,   281,   286,   406,   406,     0,     0,     0,
       0,     0,     0,    24,   192,   190,   278,    33,     0,     0,
      33,   363,   278,   171,   167,   360,   362,   407,   278,   318,
     406,     0,   406,     0,     0,     0,     0,     0,     0,     0,
     120,   152,   207,   303,   302,   304,   292,   293,   300,   301,
     299,   297,   294,   296,   369,   295,   298,     0,   316,     0,
     309,   305,   306,   308,   307,     0,   206,   209,    44,    29,
     213,   212,   171,     0,     0,    74,    73,    63,    63,     0,
      54,    81,     0,     0,     0,   178,     0,   171,     0,     0,
     185,   176,     0,   174,    63,    89,     0,   183,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     198,   197,   278,   278,   406,   278,     0,   284,   285,   283,
     406,   280,     0,     0,     0,   406,   406,   220,   222,    44,
       0,     0,     0,   268,   260,   270,   265,   273,   256,   266,
     257,   272,   259,   258,   267,   262,   271,   261,   264,   269,
     263,     0,     0,   274,   275,   276,     0,     0,    26,     0,
       9,     0,     0,     0,   355,     0,     0,     0,   312,     0,
     208,   171,   172,     0,   325,   157,   153,   152,   154,   158,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,   374,   377,   375,
     378,     0,     0,     0,   391,   392,     0,   401,   402,   227,
     398,     0,   376,   381,   386,   372,   385,   388,   373,   389,
     390,   397,   399,     0,     0,     0,     0,   315,     0,     0,
       0,   214,   112,     0,    85,    84,    63,   183,     0,    61,
      63,    63,     0,    63,     0,   160,   184,     0,     0,   170,
     173,   107,   162,   182,     0,   180,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,   199,     0,     0,
       0,     0,   406,   318,   287,   290,   291,     0,   282,    33,
       0,     0,     0,     0,    15,    16,    33,   248,   216,   218,
       8,    10,    12,   370,   406,   317,     0,     0,     0,   351,
       0,   357,   358,   359,     0,     0,   323,   324,   147,   148,
     144,   145,   143,   146,   149,   150,   121,   122,   140,   142,
     141,   123,   125,   126,   124,   136,   139,   138,   137,   151,
     127,   128,   129,   130,   131,   134,   135,   132,   133,     0,
     403,   404,   229,   382,   383,   393,     0,   395,   228,   364,
     387,   384,   371,   400,   406,     0,   406,     0,   329,     0,
       0,   340,   341,   344,   345,     0,   331,   334,   338,   342,
     332,   379,   335,   414,   339,   349,   413,   406,     0,   406,
      33,    42,   215,     0,   108,   113,     0,   116,   118,     0,
      76,     0,    80,     0,     0,    59,     0,    79,   179,    83,
     187,     0,   186,   177,   175,   161,   183,   164,   201,   200,
     406,   406,    33,    33,     0,     0,     0,     0,     0,     0,
     221,   223,     0,   277,   310,   360,   361,   350,   356,   313,
     314,   394,     0,   233,   367,   396,   320,   171,     0,   410,
       0,   408,   405,     0,   346,   347,   348,   380,   337,   328,
     333,   343,   330,   336,   406,   412,   326,     0,   327,     0,
      75,   111,   110,    63,   112,    63,     0,     0,     0,    63,
      55,     0,    63,    57,    61,    56,   181,   202,     0,     0,
       0,     0,    33,   288,     0,   249,   217,   219,   250,     0,
     354,     0,     0,     0,   245,   406,   231,   366,     0,     0,
       0,     0,   278,   171,   417,     0,     0,     0,    20,     0,
       0,   109,   114,   115,   117,   119,     0,    77,     0,     0,
      60,   203,    33,    33,   254,   252,     0,   322,   311,   353,
       0,   406,   230,     0,   234,     0,   235,   365,   411,   406,
     409,     0,   406,     0,   406,    13,    63,    20,    22,    23,
       0,    14,    63,     0,    58,     0,     0,   251,   352,   247,
     246,     0,   232,     0,   237,   319,   406,   416,     0,   415,
     418,   321,    18,    21,    17,    78,    63,   253,   255,   236,
       0,   239,     0,     0,   419,    20,    62,   238,     0,   241,
     224,     0,   420,    63,   240,     0,     0,     0,     0,    19,
     242,   243,   225,   421,     0,   226,   244
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -618,
    -675,   192,  -675,   -24,   -86,   -99,    17,  -675,    24,   -27,
    -675,  -675,  -675,  -675,    99,  -675,  -221,   -14,  -675,  -675,
    -675,   711,  -130,  -675,  -675,   115,  -675,   114,  -675,    88,
     131,   -81,  -674,   331,  -675,  -131,  -406,  -675,  -675,   335,
    -675,    32,   264,  -675,    -8,   612,  -675,    22,   664,  -675,
      -7,   650,    10,     0,   140,  -675,  -675,   385,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,    52,  -675,  -675,  -675,
    -675,  -421,  -129,   -33,   495,  -675,   129,    67,    18,  -145,
    -675,   -93,    16,    30,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,   -92,  -675,  -296,  -675,   235,  -675,   234,  -675,
    -466,  -675,   182,  -675,  -675,   168,  -385,  -675,  -675,  -675,
     -96,  -675,  -675,  -204,  -314,  -313,   390,  -675,  -675,   -94,
    -537,  -675,  -528,  -675,  -675,  -675,    25,  -675
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   472,    18,    19,   689,   726,
     727,   172,   114,    78,    79,    20,   312,    22,    23,    57,
      58,   140,   141,   142,   574,   575,   143,   144,    24,    44,
      45,    46,   145,   563,   643,   564,   565,   566,   567,   199,
     200,   201,   147,   252,   253,   248,   434,   435,   148,   249,
     250,    25,    67,    26,    27,    87,    88,    28,    72,    73,
      29,    80,   386,    30,   388,   626,   389,   390,   613,   716,
     676,   744,   761,   769,   776,   785,   673,   674,    31,   313,
     314,   315,   316,    96,   162,   163,   164,   454,   202,   219,
     203,   204,   205,   206,   207,   222,   456,   208,   209,   210,
     211,   223,   212,   545,   546,   547,   548,   549,   550,   213,
     480,   481,   327,   214,   215,   391,   392,   393,   552,   394,
     395,   396,   397,   553,   399,   400,   401,   402,   216,   217,
     620,   621,   555,   556,   635,   685,   749,   750
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,   146,   242,   269,   243,   246,    84,    63,   161,
     398,   571,   628,   482,   483,   608,   414,   415,    97,    21,
     551,   637,   225,   220,   224,    81,   100,   179,   324,    74,
      61,   106,    56,     6,   229,   111,   112,    83,     3,    85,
      59,   742,  -316,   670,   149,    60,    62,   603,   603,   317,
      60,    62,   146,    63,   146,   225,   220,   224,    63,   154,
     157,   104,   150,   218,    70,   167,   168,   534,   169,   170,
     156,   161,   161,   161,    71,    61,    52,    56,   311,    76,
      61,   319,    56,    77,    83,    59,   176,    12,   560,   323,
      59,   722,   554,    65,    66,   290,    83,   158,   408,    54,
     234,   780,   325,    15,   326,   333,   453,   687,   105,   753,
     403,   116,   335,   337,   337,   339,   337,   337,   471,   326,
     535,   173,   478,   276,   431,   688,   404,   436,   272,   519,
     159,   275,    81,    74,   218,   561,   227,    75,    52,   230,
      52,   641,   160,   292,   720,   218,   221,   773,    64,   322,
     235,   236,   157,   187,   405,   328,   146,   146,   291,   317,
     409,    54,   551,    54,   187,   551,   405,   482,   483,   642,
      82,    76,   406,   146,   478,    77,    47,   189,   525,   221,
     656,    50,   479,   283,   284,    51,   457,    83,   453,   158,
     530,    48,    52,    64,    90,   570,   161,   320,    64,    49,
     577,   410,   579,    68,   419,   710,   384,    69,   330,   420,
     334,   233,   478,    86,   387,    54,   239,   376,    95,   241,
      60,    62,   159,   478,   244,   245,   245,   251,    63,   537,
      52,   709,   432,    52,   554,   107,   385,   554,   270,   448,
     449,    52,   451,   778,    91,   603,   603,    52,   623,   108,
      61,   630,    56,    54,   632,   376,    54,   -27,   424,    92,
      59,   -27,   463,     4,    54,   256,   376,     5,     6,   257,
      54,   258,    93,   259,    76,   109,   323,  -316,    77,   245,
      94,    60,    62,  -316,    95,     7,   277,   278,   279,    63,
     576,   578,   450,   523,   524,     8,     9,   526,    84,   475,
     531,    98,   532,   461,   462,    99,    84,   103,    10,    11,
     455,    61,   101,    56,   113,   611,   102,    32,    33,   117,
     110,    59,    12,   615,    95,   336,   338,   387,   340,   341,
     598,   599,   118,   153,    13,   146,    14,    95,    15,   146,
     146,   119,   146,   -28,   122,   433,   245,   -28,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   482,   483,   120,
     597,   603,   121,   115,   151,   116,   152,   602,    64,   652,
     653,   174,   175,   155,   520,   105,    34,    35,   165,    36,
      37,    38,    39,   166,    40,   171,   228,   177,   384,   178,
     384,   180,   237,   238,   240,   254,   387,   541,   387,   255,
     273,   274,   387,    41,    42,   543,    43,   280,   281,   282,
     398,   285,   286,   289,   638,   287,   288,   485,   385,   318,
     385,   321,   329,   323,   693,   407,   411,   542,   697,    64,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   413,   417,   418,   225,   220,   224,   423,   424,
     594,   598,   599,   429,   430,   425,   426,   446,   520,   427,
     452,   387,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   459,   604,   660,   661,   232,   184,   460,   464,   129,
     568,   569,   465,   466,   470,   433,   572,  -316,  -316,   467,
     245,   755,   580,   691,   521,   468,   583,   469,   251,   473,
     474,   476,   699,   477,   132,   484,   672,   486,   522,  -316,
     527,   376,   529,   134,   588,   766,  -316,   624,   536,   541,
     557,   558,   541,   559,   562,   544,   573,   543,   581,   543,
     543,   585,   616,   586,   622,  -316,   587,   741,   589,   139,
     590,   591,   146,   706,   146,   619,  -316,   595,   146,   542,
     592,   146,   542,   593,   596,   636,   600,   173,   601,   751,
     561,   605,  -316,   323,   607,   609,  -316,   606,   619,   221,
     612,   627,   748,     5,     6,   629,   752,   232,   184,   614,
     634,   129,   130,   735,   736,   116,   384,   640,   658,   659,
     644,     7,   645,   646,   387,   649,   650,   457,   521,   654,
     651,    53,     9,   618,   655,   690,   132,   672,   664,   662,
     225,   220,   224,   748,    10,   134,   385,   665,   666,   667,
     668,   777,   669,   779,   675,   146,   618,   680,    12,   721,
     681,   146,   684,   682,   686,   537,     6,   708,   698,   138,
      13,   139,    55,   701,    15,   702,   703,   704,   712,   705,
     711,   387,   713,    52,   433,   146,   715,   625,   717,   719,
     728,   729,   723,   663,   181,   724,   730,   544,   725,   544,
     544,   731,   146,   714,   707,   734,    54,   738,   376,   377,
     737,   379,   182,   743,   183,   184,   746,   754,   129,   130,
      12,   619,   185,   756,   186,   757,   758,   539,   759,   728,
     729,   760,    13,   187,   764,   188,   540,   763,   733,   765,
     767,   770,   568,   132,   568,   695,   696,   745,   768,   771,
     747,   455,   134,   774,   775,   781,   782,   189,   784,   783,
     786,   190,   639,   700,   221,   181,    89,   728,   729,   692,
     694,   584,   582,   271,   762,   740,   191,   718,   139,   618,
     192,   193,   231,   182,   528,   183,   184,   458,   739,   129,
     130,   226,   678,   185,   631,   186,   633,   671,     0,   772,
     194,   195,   533,     0,   187,     0,   188,     0,     0,   196,
       0,     0,     0,     0,   132,   181,   197,     0,   198,     0,
       0,   245,     0,   134,     0,     0,     0,     0,   189,     0,
       0,     0,     0,   182,     0,   683,   184,     4,     0,   129,
     130,     5,     6,   185,     0,   186,   447,   191,     0,   139,
       0,   192,   193,     0,   187,     0,   188,     0,     0,     7,
       0,     0,   245,     0,   132,     0,     0,     0,   657,    53,
       9,   194,   195,   134,     0,     0,     0,     0,   189,     0,
     196,     0,    10,     0,     0,     0,     0,   197,     0,   198,
       0,   421,     0,     0,     0,     0,    12,   191,     0,   139,
       0,   192,   193,     0,     0,     0,     0,     0,    13,     0,
      55,     0,    15,   732,     0,     0,     0,     0,     0,     0,
       0,   194,   195,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   342,   197,     0,   198,
       0,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   428,   412,   256,     0,     0,     0,   257,     0,   258,
       0,   259,   416,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   647,   256,     0,     0,     0,   257,     0,
     258,     0,   259,     0,     0,   365,   366,   367,   368,   369,
     370,   371,   372,   373,     0,   679,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,     0,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,     0,     0,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     617,   184,     0,     0,   129,   130,   232,   184,     0,     0,
     129,   130,   247,   184,     0,     0,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,   132,     0,     0,   134,     0,
       0,   132,     0,   453,   134,     0,     0,     0,     0,     0,
     134,   331,   184,     0,     0,   332,   130,     0,     0,     0,
       0,     0,   138,     0,   139,     0,     0,   193,   138,     0,
     139,     0,     0,   193,   138,     0,   139,     0,     0,   193,
     132,     0,     0,     0,     0,     0,   194,   195,     0,   134,
       0,     0,   194,   195,     0,   196,     0,     0,   194,   195,
       0,   196,   197,     0,   198,    83,   123,   196,   197,     0,
     198,     0,     0,   138,   197,   139,   198,     0,   193,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,     0,   129,   130,   374,     6,     0,   194,   195,     0,
       0,     0,   375,     0,     0,     0,   196,     0,     0,     0,
       0,     0,    52,   197,    76,   198,   131,   132,    77,     0,
       0,     0,   133,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,   135,    54,     0,   376,   377,   378,
     379,   380,   136,     0,   137,     0,     0,     0,     0,    12,
     138,     0,   139,     0,     0,     0,   381,   293,     0,     4,
       0,    13,   294,     5,     6,   382,     0,     0,     0,   295,
       0,     0,     0,   296,     0,   297,   383,     0,     0,     0,
     298,     7,     0,     0,     0,     0,     0,     0,     0,     0,
     299,    53,     9,     0,     0,     0,     0,     0,     0,   300,
     301,     0,     0,   302,    10,     0,     0,     0,   293,     0,
       0,     0,     0,   294,     0,   303,   304,     0,    12,   305,
     295,     0,   306,   307,   296,     0,   297,     0,     0,     0,
      13,   298,    55,     0,    15,   308,   309,     0,   310,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
     300,   301,     0,     0,   302,     0,     0,   374,     6,     0,
       0,     0,     0,     0,     0,   677,   303,   304,     0,     0,
     305,     0,     0,   306,   307,    52,     0,    76,     0,     0,
       0,    77,     0,     0,     0,     0,   308,   309,     0,   310,
       0,   537,     6,     0,     0,     0,     0,     0,    54,   538,
     376,   377,   378,   379,   380,     0,     0,     0,     0,    52,
       0,    76,    12,     0,     0,    77,     0,     0,     0,   381,
     374,     6,     0,     0,    13,     0,     0,     0,   382,     0,
       0,     0,    54,     0,   376,   377,     0,   379,    52,     0,
       0,     0,     0,     6,     0,     0,    12,     0,     0,     0,
       0,     0,     0,   539,     0,     0,     0,     0,    13,     0,
      52,    54,   540,   376,   377,   378,   379,   380,     0,     0,
      53,     9,     0,     0,     0,    12,     0,     0,     0,     0,
       0,   648,   381,    54,     0,     0,     0,    13,     0,     0,
       0,   382,     0,     0,     0,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    55,     0,    15,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   422,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,     0,     0,     0,     0,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   610,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364
};

static const yytype_int16 yycheck[] =
{
       8,     8,    83,   133,   149,   135,   137,    21,     8,    95,
     214,   417,   540,   327,   327,   481,   237,   238,    51,     2,
     405,   558,   116,   116,   116,    15,    53,   113,    17,    13,
       8,    58,     8,    10,   120,    68,    69,     6,     0,    22,
       8,   715,    40,    17,    89,    53,    53,   468,   469,   178,
      58,    58,   133,    53,   135,   149,   149,   149,    58,    92,
      10,    32,   107,    29,    29,    98,    99,    40,   101,   102,
      94,   157,   158,   159,    29,    53,    27,    53,   177,    29,
      58,   180,    58,    33,     6,    53,   110,    64,    32,    87,
      58,    89,   405,    29,    30,    17,     6,    47,     4,    50,
     124,   775,    91,    80,    93,   191,    72,    17,    79,   727,
       4,   109,   193,   194,   195,   196,   197,   198,    87,    93,
      93,   104,     9,   156,   254,    35,    20,   258,   152,    80,
      80,   155,   122,   117,    29,    79,   118,    29,    27,   121,
      27,    16,    92,   176,   681,    29,   116,   765,     8,   182,
      29,    30,    10,    48,    60,   188,   237,   238,   172,   288,
      66,    50,   547,    50,    48,   550,    60,   481,   481,    44,
      87,    29,    66,   254,     9,    33,    27,    72,   382,   149,
     586,    29,    17,   165,   166,    33,   280,     6,    72,    47,
     394,    42,    27,    53,    17,   416,   282,   180,    58,    50,
     421,   228,   423,    29,    18,   671,   214,    33,   190,    23,
     192,   123,     9,    29,   214,    50,   128,    52,    91,   131,
     228,   228,    80,     9,   136,   137,   138,   139,   228,     9,
      27,    17,   256,    27,   547,    88,   214,   550,   150,   272,
     273,    27,   275,   771,    29,   666,   667,    27,    42,    88,
     228,   547,   228,    50,   550,    52,    50,    88,    89,    29,
     228,    92,   289,     5,    50,    87,    52,     9,    10,    91,
      50,    93,    29,    95,    29,    90,    87,    88,    33,   191,
      87,   289,   289,    94,    91,    27,   157,   158,   159,   289,
     420,   422,   274,    53,    54,    37,    38,   383,   312,   323,
     396,    29,   398,   285,   286,    33,   320,    29,    50,    51,
     280,   289,    29,   289,    91,   519,    33,    29,    30,    90,
      87,   289,    64,   527,    91,   194,   195,   327,   197,   198,
     459,   460,   107,    87,    76,   416,    78,    91,    80,   420,
     421,    90,   423,    88,    90,   257,   258,    92,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   671,   671,    88,
     459,   782,    89,   107,    90,   109,    87,   466,   228,    16,
      17,   107,   108,    87,   374,    79,    88,    89,    89,    91,
      92,    93,    94,    89,    96,    90,    37,    90,   396,    90,
     398,    90,    89,    89,    29,    90,   396,   405,   398,    17,
      29,    89,   402,   115,   116,   405,   118,    89,    92,    90,
     614,    89,    89,    37,   559,    90,    90,   329,   396,    92,
     398,    40,    93,    87,   645,   111,    12,   405,   649,   289,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    98,    91,    77,   559,   559,   559,    13,    89,
     452,   600,   601,    94,    88,    92,    92,   107,   478,    90,
      89,   481,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    90,   474,   592,   593,    29,    30,    90,    87,    33,
     412,   413,    87,    90,    87,   417,   418,    11,    12,    90,
     422,   732,   424,   643,   374,    90,   428,    90,   430,    29,
      89,    29,   652,    67,    58,    40,   612,    92,    29,    33,
      90,    52,    17,    67,   446,   756,    40,   537,    40,   547,
      40,    93,   550,    40,    67,   405,    41,   547,    29,   549,
     550,    92,   534,    88,   536,    59,    94,    91,    67,    93,
      89,    89,   643,   662,   645,   535,    70,   107,   649,   547,
      90,   652,   550,    90,     4,   557,    90,   560,    90,   724,
      79,    92,    86,    87,    17,    39,    90,    94,   558,   559,
      93,    53,   723,     9,    10,    17,   726,    29,    30,    92,
       7,    33,    34,   702,   703,   109,   614,    17,   590,   591,
      90,    27,    89,    88,   614,    16,    92,   711,   478,    90,
      29,    37,    38,   535,    17,   639,    58,   713,    40,    90,
     724,   724,   724,   764,    50,    67,   614,    90,    90,    90,
      90,   770,    40,   773,    89,   726,   558,    94,    64,   682,
      88,   732,   634,    29,    94,     9,    10,    39,    89,    91,
      76,    93,    78,    67,    80,    90,    90,    90,    94,    90,
      89,   671,    90,    27,   586,   756,    33,   537,    17,    40,
     688,   688,    40,   595,     9,    40,    17,   547,    87,   549,
     550,    87,   773,   675,   664,    17,    50,    17,    52,    53,
      90,    55,    27,    59,    29,    30,    89,    87,    33,    34,
      64,   681,    37,    13,    39,    90,    90,    71,    29,   727,
     727,    86,    76,    48,    90,    50,    80,    89,   698,    22,
      29,    90,   644,    58,   646,   647,   648,   719,    70,    91,
     722,   711,    67,    29,    11,    90,    90,    72,    11,    92,
      90,    76,   560,   654,   724,     9,    45,   765,   765,   644,
     646,   430,   427,   151,   746,   713,    91,   679,    93,   681,
      95,    96,   122,    27,   389,    29,    30,   282,   711,    33,
      34,   117,   614,    37,   549,    39,   552,   605,    -1,   764,
     115,   116,   402,    -1,    48,    -1,    50,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    58,     9,   131,    -1,   133,    -1,
      -1,   723,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,     5,    -1,    33,
      34,     9,    10,    37,    -1,    39,    12,    91,    -1,    93,
      -1,    95,    96,    -1,    48,    -1,    50,    -1,    -1,    27,
      -1,    -1,   764,    -1,    58,    -1,    -1,    -1,    12,    37,
      38,   115,   116,    67,    -1,    -1,    -1,    -1,    72,    -1,
     124,    -1,    50,    -1,    -1,    -1,    -1,   131,    -1,   133,
      -1,    13,    -1,    -1,    -1,    -1,    64,    91,    -1,    93,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    14,   131,    -1,   133,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    14,    40,    87,    -1,    -1,    -1,    91,    -1,    93,
      -1,    95,    73,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    14,    87,    -1,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    14,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      29,    30,    -1,    -1,    33,    34,    29,    30,    -1,    -1,
      33,    34,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    67,    -1,
      -1,    58,    -1,    72,    67,    -1,    -1,    -1,    -1,    -1,
      67,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    91,    -1,
      93,    -1,    -1,    96,    91,    -1,    93,    -1,    -1,    96,
      58,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    67,
      -1,    -1,   115,   116,    -1,   124,    -1,    -1,   115,   116,
      -1,   124,   131,    -1,   133,     6,     7,   124,   131,    -1,
     133,    -1,    -1,    91,   131,    93,   133,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,    30,
      31,    -1,    33,    34,     9,    10,    -1,   115,   116,    -1,
      -1,    -1,    17,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    27,   131,    29,   133,    57,    58,    33,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    50,    -1,    52,    53,    54,
      55,    56,    83,    -1,    85,    -1,    -1,    -1,    -1,    64,
      91,    -1,    93,    -1,    -1,    -1,    71,     3,    -1,     5,
      -1,    76,     8,     9,    10,    80,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    21,    91,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    49,    50,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    -1,    61,    62,    -1,    64,    65,
      15,    -1,    68,    69,    19,    -1,    21,    -1,    -1,    -1,
      76,    26,    78,    -1,    80,    81,    82,    -1,    84,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    49,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    61,    62,    -1,    -1,
      65,    -1,    -1,    68,    69,    27,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    81,    82,    -1,    84,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    50,    17,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    27,
      -1,    29,    64,    -1,    -1,    33,    -1,    -1,    -1,    71,
       9,    10,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    50,    -1,    52,    53,    -1,    55,    27,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      27,    50,    80,    52,    53,    54,    55,    56,    -1,    -1,
      37,    38,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    74,    71,    50,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    88,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   147,   148,     0,     5,     9,    10,    27,    37,    38,
      50,    51,    64,    76,    78,    80,   149,   150,   152,   153,
     161,   162,   163,   164,   174,   197,   199,   200,   203,   206,
     209,   224,    29,    30,    88,    89,    91,    92,    93,    94,
      96,   115,   116,   118,   175,   176,   177,    27,    42,    50,
      29,    33,    27,    37,    50,    78,   164,   165,   166,   197,
     200,   203,   206,   209,   210,    29,    30,   198,    29,    33,
      29,    29,   204,   205,   238,    29,    29,    33,   159,   160,
     207,   208,    87,     6,   173,   162,    29,   201,   202,   177,
      17,    29,    29,    29,    87,    91,   229,   229,    29,    33,
     165,    29,    33,    29,    32,    79,   165,    88,    88,    90,
      87,   229,   229,    91,   158,   107,   109,    90,   107,    90,
      88,    89,    90,     7,    25,    28,    29,    30,    31,    33,
      34,    57,    58,    63,    67,    75,    83,    85,    91,    93,
     167,   168,   169,   172,   173,   178,   187,   188,   194,    89,
     107,    90,    87,    87,   229,    87,   159,    10,    47,    80,
      92,   160,   230,   231,   232,    89,    89,   229,   229,   229,
     229,    90,   157,   162,   198,   198,   159,    90,    90,   160,
      90,     9,    27,    29,    30,    37,    39,    48,    50,    72,
      76,    91,    95,    96,   115,   116,   124,   131,   133,   185,
     186,   187,   234,   236,   237,   238,   239,   240,   243,   244,
     245,   246,   248,   255,   259,   260,   274,   275,    29,   235,
     237,   239,   241,   247,   248,   275,   204,   234,    37,   160,
     234,   207,    29,   185,   159,    29,    30,    89,    89,   185,
      29,   185,   178,   178,   185,   185,   191,    29,   191,   195,
     196,   185,   189,   190,    90,    17,    87,    91,    93,    95,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   235,
     185,   201,   159,    29,    89,   159,   229,   232,   232,   232,
      89,    92,    90,   234,   234,    89,    89,    90,    90,    37,
      17,   173,   229,     3,     8,    15,    19,    21,    26,    36,
      45,    46,    49,    61,    62,    65,    68,    69,    81,    82,
      84,   161,   162,   225,   226,   227,   228,   228,    92,   161,
     162,    40,   229,    87,    17,    91,    93,   258,   229,    93,
     234,    29,    33,   160,   234,   187,   186,   187,   186,   187,
     186,   186,    14,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    98,    99,   100,   101,   102,
     103,   104,   105,   106,     9,    17,    52,    53,    54,    55,
      56,    71,    80,    91,   200,   203,   208,   209,   210,   212,
     213,   261,   262,   263,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     4,    20,    60,    66,   111,     4,    66,
     165,    12,    40,    98,   172,   172,    73,    91,    77,    18,
      23,    13,    88,    13,    89,    92,    92,    90,    14,    94,
      88,   178,   159,   185,   192,   193,   191,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   107,    12,   229,   229,
     234,   229,    89,    72,   233,   239,   242,   275,   230,    90,
      90,   234,   234,   165,    87,    87,    90,    90,    90,    90,
      87,    87,   151,    29,    89,   159,    29,    67,     9,    17,
     256,   257,   270,   271,    40,   185,    92,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,    80,
     209,   210,    29,    53,    54,   269,   160,    90,   213,    17,
     269,   266,   266,   272,    40,    93,    40,     9,    17,    71,
      80,   200,   203,   209,   210,   249,   250,   251,   252,   253,
     254,   262,   264,   269,   271,   278,   279,    40,    93,    40,
      32,    79,    67,   179,   181,   182,   183,   184,   185,   185,
     172,   192,   185,    41,   170,   171,   178,   172,   191,   172,
     185,    29,   195,   185,   189,    92,    88,    94,   185,    67,
      89,    89,    90,    90,   234,   107,     4,   161,   228,   228,
      90,    90,   161,   227,   234,    92,    94,    17,   256,    39,
      94,   269,    93,   214,    92,   269,   234,    29,   185,   239,
     276,   277,   234,    42,   209,   210,   211,    53,   278,    17,
     250,   252,   250,   254,     7,   280,   234,   276,   235,   157,
      17,    16,    44,   180,    90,    89,    88,    14,    74,    16,
      92,    29,    16,    17,    90,    17,   192,    12,   234,   234,
     161,   161,    90,   185,    40,    90,    90,    90,    90,    40,
      17,   258,   160,   222,   223,    89,   216,    17,   261,    14,
      94,    88,    29,    29,   234,   281,    94,    17,    35,   154,
     173,   178,   181,   172,   183,   185,   185,   172,    89,   178,
     170,    67,    90,    90,    90,    90,   161,   239,    39,    17,
     256,    89,    94,    90,   234,    33,   215,    17,   185,    40,
     276,   229,    89,    40,    40,    87,   155,   156,   200,   206,
      17,    87,    13,   239,    17,   161,   161,    90,    17,   233,
     222,    91,   188,    59,   217,   234,    89,   234,   191,   282,
     283,   235,   178,   155,    87,   172,    13,    90,    90,    29,
      86,   218,   234,    89,    90,    22,   172,    29,    70,   219,
      90,    91,   282,   155,    29,    11,   220,   228,   278,   178,
     188,    90,    90,    92,    11,   221,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   146,   148,   147,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   165,   165,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   173,
     174,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   181,   182,   183,   183,   184,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   195,   195,   196,   197,   198,
     198,   198,   198,   199,   199,   200,   201,   201,   202,   202,
     202,   202,   202,   202,   203,   204,   204,   205,   205,   205,
     206,   207,   207,   208,   208,   208,   209,   209,   209,   209,
     210,   210,   210,   210,   211,   211,   212,   213,   213,   214,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   228,   228,   229,   229,
     229,   230,   230,   231,   231,   231,   231,   232,   232,   232,
     233,   233,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   235,   235,   235,   235,   235,
     236,   236,   236,   236,   237,   238,   239,   239,   239,   240,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   248,
     249,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   251,   252,   252,   253,   253,   253,   253,   253,   254,
     255,   255,   255,   255,   255,   255,   256,   256,   257,   257,
     258,   258,   259,   259,   260,   260,   260,   260,   260,   260,
     260,   261,   261,   261,   262,   262,   263,   263,   263,   264,
     264,   265,   265,   265,   266,   266,   267,   267,   267,   267,
     267,   267,   267,   268,   268,   269,   269,   270,   271,   272,
     272,   273,   273,   273,   273,   274,   275,   275,   276,   276,
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
       3,     1,     3,     1,     1,     2,     0,     3,     3,     4,
       5,     5,     6,     7,     2,     0,     3,     3,     4,     3,
       2,     0,     3,     3,     4,     5,     6,     8,     6,     8,
       4,     6,     4,     6,     6,     8,    11,     1,     2,     0,
       3,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     1,     3,     3,     6,     8,
       8,    10,     9,    11,     9,    11,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       3,     1,     3,     2,     2,     2,     1,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     6,     2,     4,     4,     4,     1,     3,     1,     7,
       4,     7,     4,     3,     3,     2,     4,     4,     4,     3,
       2,     1,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     2,     2,     1,
       4,     3,     7,     6,     5,     2,     2,     1,     1,     1,
       0,     3,     1,     1,     3,     6,     5,     4,     2,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     3,     2,     3,     1,     1,     1,
       2,     1,     1,     2,     2,     4,     0,     1,     1,     3,
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

    case YYSYMBOL_87_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_88_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_94_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_95_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_96_: /* '@'  */
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
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 225: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 226: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 228: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 229: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 230: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 231: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 232: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 233: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 234: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 235: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 236: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 237: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 238: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 239: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 240: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 241: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 242: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 243: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 244: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 246: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 247: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 248: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 249: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 250: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 251: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 252: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 253: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 254: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 255: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 276: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 277: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 278: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 279: /* formal_params: '(' ')'  */
              { (yyval.n_plist) = new param_list_node((yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 280: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 282: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 283: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 284: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 285: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 286: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 287: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 288: /* param_decl: ident_list ':' param_type EQ expr  */
                                        { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 289: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 310: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 311: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 312: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 313: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 314: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 315: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 316: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 317: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 318: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 319: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 320: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 321: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 322: /* conformant_array_type: packed ARRAY OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 323: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 324: /* range_type: expr DOTS expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 325: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 326: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 327: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 328: /* record_type: packed RECORD record_body END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 329: /* record_type: packed RECORD END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 330: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 333: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 336: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 337: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 343: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 344: /* record_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 345: /* record_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 346: /* record_method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 347: /* record_method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 348: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 349: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 350: /* interface_type: INTERFACE guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 351: /* interface_type: INTERFACE guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 352: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 353: /* interface_type: INTERFACE '(' IDENT ')' guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 354: /* interface_type: INTERFACE '(' IDENT ')' END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 355: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 356: /* interface_components: interface_component interface_components  */
        { 
          // special case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
     	  *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 360: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 361: /* guid: '[' SCONST ']'  */
        { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 364: /* class_type: class_or_object object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 365: /* class_type: class_or_object '(' ident_list ')' object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 366: /* class_type: class_or_object '(' ident_list ')' END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 367: /* class_type: class_or_object '(' ident_list ')'  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 368: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 369: /* class_type: class_or_object  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 370: /* class_type: CLASS OF IDENT  */
        { (yyval.n_tpd) = new metaclass_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 371: /* object_body: field_decl_list object_components  */
        { 
          // rare case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 373: /* object_body: field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 379: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 380: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 381: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 382: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 383: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 384: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 387: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 393: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 394: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 395: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 396: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 398: /* object_properties: property_decl_list  */
        { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 400: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 401: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 402: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 403: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 404: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 405: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 406: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 409: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 410: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 411: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 412: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 413: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 415: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 416: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 417: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 419: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 420: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 421: /* variant: expr_list ':' '(' field_list ')'  */
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


