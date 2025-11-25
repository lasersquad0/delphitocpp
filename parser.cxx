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
  YYSYMBOL_ORIGIN = 40,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 41,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 42,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 43,                  /* OVERRIDE  */
  YYSYMBOL_OUT = 44,                       /* OUT  */
  YYSYMBOL_PACKED = 45,                    /* PACKED  */
  YYSYMBOL_PASCAL = 46,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 47,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 48,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 49,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 50,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 51,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 52,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 53,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 54,                     /* RAISE  */
  YYSYMBOL_RCONST = 55,                    /* RCONST  */
  YYSYMBOL_READ = 56,                      /* READ  */
  YYSYMBOL_RECORD = 57,                    /* RECORD  */
  YYSYMBOL_REGISTER = 58,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 59,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 60,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 61,            /* RESOURCESTRING  */
  YYSYMBOL_SAFECALL = 62,                  /* SAFECALL  */
  YYSYMBOL_SET = 63,                       /* SET  */
  YYSYMBOL_SCONST = 64,                    /* SCONST  */
  YYSYMBOL_STATIC = 65,                    /* STATIC  */
  YYSYMBOL_STDCALL = 66,                   /* STDCALL  */
  YYSYMBOL_STORED = 67,                    /* STORED  */
  YYSYMBOL_STRICT = 68,                    /* STRICT  */
  YYSYMBOL_STRING = 69,                    /* STRING  */
  YYSYMBOL_THEN = 70,                      /* THEN  */
  YYSYMBOL_TO = 71,                        /* TO  */
  YYSYMBOL_TRY = 72,                       /* TRY  */
  YYSYMBOL_TYPE = 73,                      /* TYPE  */
  YYSYMBOL_UNTIL = 74,                     /* UNTIL  */
  YYSYMBOL_UNIT = 75,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 76,                  /* UNIT_END  */
  YYSYMBOL_VAR = 77,                       /* VAR  */
  YYSYMBOL_VARARGS = 78,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 79,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 80,                     /* WHILE  */
  YYSYMBOL_WINAPI = 81,                    /* WINAPI  */
  YYSYMBOL_WITH = 82,                      /* WITH  */
  YYSYMBOL_WRITE = 83,                     /* WRITE  */
  YYSYMBOL_84_ = 84,                       /* '.'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* ':'  */
  YYSYMBOL_87_ = 87,                       /* ';'  */
  YYSYMBOL_88_ = 88,                       /* '('  */
  YYSYMBOL_89_ = 89,                       /* ')'  */
  YYSYMBOL_90_ = 90,                       /* '['  */
  YYSYMBOL_91_ = 91,                       /* ']'  */
  YYSYMBOL_92_ = 92,                       /* '^'  */
  YYSYMBOL_93_ = 93,                       /* '@'  */
  YYSYMBOL_SCOPE = 94,                     /* SCOPE  */
  YYSYMBOL_LET = 95,                       /* LET  */
  YYSYMBOL_LETADD = 96,                    /* LETADD  */
  YYSYMBOL_LETSUB = 97,                    /* LETSUB  */
  YYSYMBOL_LETDIV = 98,                    /* LETDIV  */
  YYSYMBOL_LETMUL = 99,                    /* LETMUL  */
  YYSYMBOL_LETAND = 100,                   /* LETAND  */
  YYSYMBOL_LETOR = 101,                    /* LETOR  */
  YYSYMBOL_LETSHL = 102,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 103,                   /* LETSHR  */
  YYSYMBOL_EQ = 104,                       /* EQ  */
  YYSYMBOL_NE = 105,                       /* NE  */
  YYSYMBOL_LT = 106,                       /* LT  */
  YYSYMBOL_LE = 107,                       /* LE  */
  YYSYMBOL_GT = 108,                       /* GT  */
  YYSYMBOL_GE = 109,                       /* GE  */
  YYSYMBOL_IN = 110,                       /* IN  */
  YYSYMBOL_IS = 111,                       /* IS  */
  YYSYMBOL_PLUS = 112,                     /* PLUS  */
  YYSYMBOL_MINUS = 113,                    /* MINUS  */
  YYSYMBOL_OR = 114,                       /* OR  */
  YYSYMBOL_XOR = 115,                      /* XOR  */
  YYSYMBOL_BINOR = 116,                    /* BINOR  */
  YYSYMBOL_MOD = 117,                      /* MOD  */
  YYSYMBOL_DIV = 118,                      /* DIV  */
  YYSYMBOL_DIVR = 119,                     /* DIVR  */
  YYSYMBOL_MUL = 120,                      /* MUL  */
  YYSYMBOL_AND = 121,                      /* AND  */
  YYSYMBOL_SHR = 122,                      /* SHR  */
  YYSYMBOL_SHL = 123,                      /* SHL  */
  YYSYMBOL_BINAND = 124,                   /* BINAND  */
  YYSYMBOL_AS = 125,                       /* AS  */
  YYSYMBOL_UPLUS = 126,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 127,                   /* UMINUS  */
  YYSYMBOL_NOT = 128,                      /* NOT  */
  YYSYMBOL_ADDRESS = 129,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 130,                   /* BINNOT  */
  YYSYMBOL_YYACCEPT = 131,                 /* $accept  */
  YYSYMBOL_translation = 132,              /* translation  */
  YYSYMBOL_133_1 = 133,                    /* $@1  */
  YYSYMBOL_input_file = 134,               /* input_file  */
  YYSYMBOL_program = 135,                  /* program  */
  YYSYMBOL_progend = 136,                  /* progend  */
  YYSYMBOL_module = 137,                   /* module  */
  YYSYMBOL_unit = 138,                     /* unit  */
  YYSYMBOL_init_finit = 139,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 140, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 141,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 142,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 143,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 144,                /* ident_ext  */
  YYSYMBOL_ident_list = 145,               /* ident_list  */
  YYSYMBOL_block = 146,                    /* block  */
  YYSYMBOL_decl_part_list = 147,           /* decl_part_list  */
  YYSYMBOL_decl_part = 148,                /* decl_part  */
  YYSYMBOL_unit_spec = 149,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 150,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 151,                /* unit_decl  */
  YYSYMBOL_inherited = 152,                /* inherited  */
  YYSYMBOL_try_finally = 153,              /* try_finally  */
  YYSYMBOL_try_except = 154,               /* try_except  */
  YYSYMBOL_except_many = 155,              /* except_many  */
  YYSYMBOL_except = 156,                   /* except  */
  YYSYMBOL_statement = 157,                /* statement  */
  YYSYMBOL_compoundst = 158,               /* compoundst  */
  YYSYMBOL_assemblerst = 159,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 160,                  /* asm_kwd  */
  YYSYMBOL_asm_ident_list = 161,           /* asm_ident_list  */
  YYSYMBOL_asm_line = 162,                 /* asm_line  */
  YYSYMBOL_asm_text = 163,                 /* asm_text  */
  YYSYMBOL_sequence = 164,                 /* sequence  */
  YYSYMBOL_actual_params = 165,            /* actual_params  */
  YYSYMBOL_write_params = 166,             /* write_params  */
  YYSYMBOL_case_list = 167,                /* case_list  */
  YYSYMBOL_otherwise = 168,                /* otherwise  */
  YYSYMBOL_case_items = 169,               /* case_items  */
  YYSYMBOL_case_item = 170,                /* case_item  */
  YYSYMBOL_case_elem_list = 171,           /* case_elem_list  */
  YYSYMBOL_case_elem = 172,                /* case_elem  */
  YYSYMBOL_expr = 173,                     /* expr  */
  YYSYMBOL_simple_expr = 174,              /* simple_expr  */
  YYSYMBOL_primary = 175,                  /* primary  */
  YYSYMBOL_constant = 176,                 /* constant  */
  YYSYMBOL_set_elem_list = 177,            /* set_elem_list  */
  YYSYMBOL_set_elem = 178,                 /* set_elem  */
  YYSYMBOL_expr_list = 179,                /* expr_list  */
  YYSYMBOL_act_param_list = 180,           /* act_param_list  */
  YYSYMBOL_act_param = 181,                /* act_param  */
  YYSYMBOL_record_constant = 182,          /* record_constant  */
  YYSYMBOL_field_init_list = 183,          /* field_init_list  */
  YYSYMBOL_field_init_item = 184,          /* field_init_item  */
  YYSYMBOL_expr_group = 185,               /* expr_group  */
  YYSYMBOL_write_list = 186,               /* write_list  */
  YYSYMBOL_write_param = 187,              /* write_param  */
  YYSYMBOL_label_decl_part = 188,          /* label_decl_part  */
  YYSYMBOL_label_list = 189,               /* label_list  */
  YYSYMBOL_const = 190,                    /* const  */
  YYSYMBOL_const_def_part = 191,           /* const_def_part  */
  YYSYMBOL_const_def_list = 192,           /* const_def_list  */
  YYSYMBOL_const_def = 193,                /* const_def  */
  YYSYMBOL_type_def_part = 194,            /* type_def_part  */
  YYSYMBOL_type_def_list = 195,            /* type_def_list  */
  YYSYMBOL_type_def = 196,                 /* type_def  */
  YYSYMBOL_var_decl_part = 197,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 198,            /* var_decl_list  */
  YYSYMBOL_var_decl = 199,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 200,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 201,                /* proc_spec  */
  YYSYMBOL_property_decl = 202,            /* property_decl  */
  YYSYMBOL_property_decl_list = 203,       /* property_decl_list  */
  YYSYMBOL_prop_array = 204,               /* prop_array  */
  YYSYMBOL_prop_index = 205,               /* prop_index  */
  YYSYMBOL_prop_type_def = 206,            /* prop_type_def  */
  YYSYMBOL_prop_read = 207,                /* prop_read  */
  YYSYMBOL_prop_write = 208,               /* prop_write  */
  YYSYMBOL_prop_stored = 209,              /* prop_stored  */
  YYSYMBOL_prop_default = 210,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 211,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 212,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 213,          /* prop_param_decl  */
  YYSYMBOL_proc_def = 214,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 215,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 216,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 217,                /* qualifier  */
  YYSYMBOL_qualifiers = 218,               /* qualifiers  */
  YYSYMBOL_formal_params = 219,            /* formal_params  */
  YYSYMBOL_formal_param_list = 220,        /* formal_param_list  */
  YYSYMBOL_formal_param = 221,             /* formal_param  */
  YYSYMBOL_param_decl = 222,               /* param_decl  */
  YYSYMBOL_param_type = 223,               /* param_type  */
  YYSYMBOL_type = 224,                     /* type  */
  YYSYMBOL_const_type = 225,               /* const_type  */
  YYSYMBOL_fptr_type = 226,                /* fptr_type  */
  YYSYMBOL_string_type = 227,              /* string_type  */
  YYSYMBOL_simple_type = 228,              /* simple_type  */
  YYSYMBOL_array_type = 229,               /* array_type  */
  YYSYMBOL_const_array_type = 230,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 231,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 232,                /* enum_type  */
  YYSYMBOL_range_type = 233,               /* range_type  */
  YYSYMBOL_pointer_type = 234,             /* pointer_type  */
  YYSYMBOL_set_type = 235,                 /* set_type  */
  YYSYMBOL_const_set_type = 236,           /* const_set_type  */
  YYSYMBOL_record_type = 237,              /* record_type  */
  YYSYMBOL_record_body = 238,              /* record_body  */
  YYSYMBOL_record_components = 239,        /* record_components  */
  YYSYMBOL_record_component = 240,         /* record_component  */
  YYSYMBOL_record_field_list = 241,        /* record_field_list  */
  YYSYMBOL_interface_type = 242,           /* interface_type  */
  YYSYMBOL_interface_components = 243,     /* interface_components  */
  YYSYMBOL_interface_component = 244,      /* interface_component  */
  YYSYMBOL_guid = 245,                     /* guid  */
  YYSYMBOL_class_or_object = 246,          /* class_or_object  */
  YYSYMBOL_class_type = 247,               /* class_type  */
  YYSYMBOL_object_body = 248,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 249,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 250,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 251,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 252,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 253,        /* object_components  */
  YYSYMBOL_object_component = 254,         /* object_component  */
  YYSYMBOL_field_decl_part = 255,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 256,          /* field_decl_list  */
  YYSYMBOL_object_methods = 257,           /* object_methods  */
  YYSYMBOL_object_properties = 258,        /* object_properties  */
  YYSYMBOL_method_decl = 259,              /* method_decl  */
  YYSYMBOL_method_decl_list = 260,         /* method_decl_list  */
  YYSYMBOL_file_type = 261,                /* file_type  */
  YYSYMBOL_packed = 262,                   /* packed  */
  YYSYMBOL_conformant_indices = 263,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 264,         /* conformant_index  */
  YYSYMBOL_indices = 265,                  /* indices  */
  YYSYMBOL_index_spec = 266,               /* index_spec  */
  YYSYMBOL_field_list = 267,               /* field_list  */
  YYSYMBOL_fixed_part = 268,               /* fixed_part  */
  YYSYMBOL_variant_part = 269,             /* variant_part  */
  YYSYMBOL_selector = 270,                 /* selector  */
  YYSYMBOL_variant_list = 271,             /* variant_list  */
  YYSYMBOL_variant = 272                   /* variant  */
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
#define YYLAST   1762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  131
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  416
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  785

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   375


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
      88,    89,     2,     2,    85,     2,    84,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    87,
       2,     2,     2,     2,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,    92,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   386,   386,   386,   411,   411,   411,   413,   414,   417,
     417,   419,   420,   426,   428,   430,   432,   434,   437,   439,
     442,   443,   445,   445,   461,   463,   464,   468,   468,   468,
     468,   470,   471,   473,   475,   478,   479,   481,   481,   481,
     481,   482,   482,   482,   484,   486,   490,   491,   493,   493,
     493,   493,   494,   494,   494,   523,   524,   526,   530,   533,
     535,   538,   539,   541,   542,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     561,   563,   564,   565,   566,   567,   568,   570,   571,   572,
     573,   574,   575,   577,   579,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   584,   585,   587,   588,
     591,   592,   594,   594,   596,   596,   598,   599,   601,   602,
     614,   614,   616,   617,   618,   620,   622,   623,   625,   626,
     650,   651,   652,   653,   654,   655,   656,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   669,   670,   671,   672,
     673,   674,   675,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   687,   688,   690,   692,   694,   696,   697,   699,
     700,   701,   702,   703,   704,   705,   708,   709,   710,   711,
     712,   713,   714,   716,   717,   718,   720,   721,   723,   723,
     725,   726,   728,   728,   731,   733,   734,   736,   739,   742,
     742,   744,   745,   746,   788,   791,   792,   793,   794,   796,
     796,   798,   801,   802,   804,   805,   807,   810,   811,   813,
     815,   818,   832,   834,   849,   851,   853,   855,   857,   859,
     863,   865,   867,   869,   871,   873,   877,   880,   881,   883,
     884,   886,   887,   889,   890,   892,   893,   895,   896,   898,
     899,   901,   902,   904,   905,   908,   909,   911,   915,   917,
     919,   921,   923,   925,   938,   938,   938,   938,   938,   938,
     938,   938,   938,   938,   940,   940,   940,   940,   940,   940,
     940,   942,   942,   944,   945,   948,   949,   951,   952,   954,
     955,   956,   957,   960,   961,   962,   964,   964,   970,   970,
     970,   970,   970,   970,   970,   971,   971,   971,   971,   971,
     973,   973,   973,   973,   973,   975,   977,   979,   981,   984,
     986,   987,   988,   990,   993,   996,   998,  1001,  1003,  1006,
    1008,  1010,  1020,  1022,  1025,  1032,  1033,  1035,  1041,  1043,
    1044,  1046,  1048,  1049,  1050,  1052,  1056,  1058,  1060,  1062,
    1067,  1076,  1078,  1079,  1081,  1082,  1086,  1086,  1088,  1090,
    1092,  1094,  1096,  1100,  1109,  1110,  1113,  1113,  1115,  1115,
    1115,  1117,  1118,  1120,  1121,  1122,  1124,  1133,  1135,  1136,
    1138,  1139,  1140,  1141,  1142,  1145,  1147,  1150,  1151,  1153,
    1156,  1159,  1161,  1163,  1165,  1168,  1169,  1173,  1175,  1175,
    1177,  1178,  1180,  1183,  1184,  1187,  1188,  1191,  1193,  1196,
    1198,  1201,  1202,  1205,  1206,  1207,  1209
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
  "INITIALIZATION", "INTERFACE", "LABEL", "OBJECT", "OF", "ON", "ORIGIN",
  "OTHERWISE", "OVERLOAD", "OVERRIDE", "OUT", "PACKED", "PASCAL",
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
  "AS", "UPLUS", "UMINUS", "NOT", "ADDRESS", "BINNOT", "$accept",
  "translation", "$@1", "input_file", "program", "progend", "module",
  "unit", "init_finit", "var_const_decl_part_list", "var_const_decl_part",
  "unit_def_list", "prog_param_list", "ident_ext", "ident_list", "block",
  "decl_part_list", "decl_part", "unit_spec", "unit_decl_list",
  "unit_decl", "inherited", "try_finally", "try_except", "except_many",
  "except", "statement", "compoundst", "assemblerst", "asm_kwd",
  "asm_ident_list", "asm_line", "asm_text", "sequence", "actual_params",
  "write_params", "case_list", "otherwise", "case_items", "case_item",
  "case_elem_list", "case_elem", "expr", "simple_expr", "primary",
  "constant", "set_elem_list", "set_elem", "expr_list", "act_param_list",
  "act_param", "record_constant", "field_init_list", "field_init_item",
  "expr_group", "write_list", "write_param", "label_decl_part",
  "label_list", "const", "const_def_part", "const_def_list", "const_def",
  "type_def_part", "type_def_list", "type_def", "var_decl_part",
  "var_decl_list", "var_decl", "proc_fwd_decl", "proc_spec",
  "property_decl", "property_decl_list", "prop_array", "prop_index",
  "prop_type_def", "prop_read", "prop_write", "prop_stored",
  "prop_default", "prop_default_directive", "prop_param_list",
  "prop_param_decl", "proc_def", "fun_qualifier", "meth_qualifier",
  "qualifier", "qualifiers", "formal_params", "formal_param_list",
  "formal_param", "param_decl", "param_type", "type", "const_type",
  "fptr_type", "string_type", "simple_type", "array_type",
  "const_array_type", "conformant_array_type", "enum_type", "range_type",
  "pointer_type", "set_type", "const_set_type", "record_type",
  "record_body", "record_components", "record_component",
  "record_field_list", "interface_type", "interface_components",
  "interface_component", "guid", "class_or_object", "class_type",
  "object_body", "record_access_spec_tok", "class_access_spec_tok",
  "record_access_spec_decl", "class_access_spec_decl", "object_components",
  "object_component", "field_decl_part", "field_decl_list",
  "object_methods", "object_properties", "method_decl", "method_decl_list",
  "file_type", "packed", "conformant_indices", "conformant_index",
  "indices", "index_spec", "field_list", "fixed_part", "variant_part",
  "selector", "variant_list", "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-665)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-321)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -665,    52,  1397,  -665,   441,    68,  -665,   252,  1443,   118,
     253,    43,  -665,    99,   107,   150,  -665,  -665,  -665,  -665,
       3,   143,   355,  -665,  -665,  -665,   127,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,   441,    16,  -665,   364,   173,   191,   106,
      91,    91,   254,  1443,   255,   197,  -665,    36,  1443,  -665,
    -665,  -665,  -665,  -665,  -665,    18,   124,   141,   108,    91,
      91,   142,   136,  -665,   212,   215,  -665,  -665,  -665,  -665,
     158,   221,  -665,   231,  -665,  1140,  -665,  -665,    46,  -665,
     235,  -665,  -665,  -665,  -665,   249,   251,   150,    97,   262,
     264,   267,    91,    91,    91,   263,    91,    91,    91,   274,
     355,  -665,  -665,   118,   118,  -665,   150,   276,   281,   283,
     150,   286,   674,    99,   303,   150,   674,   150,   987,   150,
     175,   268,   290,   987,  -665,   350,   987,  -665,   296,  1140,
    -665,  1140,   987,   987,   299,   993,   987,  -665,  -665,  -665,
     302,  -665,   378,  1087,  -665,  -665,    65,   987,   127,   150,
     150,    91,   150,   150,   150,   309,   308,   313,  -665,   674,
     674,   674,   317,   320,   321,   325,   328,   330,   384,   138,
    -665,  -665,  -665,    91,  1243,  1292,  1292,   332,  1400,  -665,
      91,   762,  -665,    23,  -665,  -665,    91,   337,   981,   674,
     637,   987,   987,   637,   987,   987,   815,  -665,  1659,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    1182,  -665,  -665,    85,  -665,  1443,  -665,  -665,  -665,  -665,
    1020,   336,  -665,  -665,  1140,  1140,  1417,   345,  1617,   987,
    -665,  -665,   360,    62,   770,  1480,   424,   987,  -665,   351,
     349,   353,   352,   837,   354,   358,  1140,  -665,   150,   987,
     987,  -665,   987,   987,   987,   987,   987,   987,   987,   987,
     987,   362,   340,  -665,  -665,  -665,  -665,  -665,    29,  1617,
    -665,    91,    91,   370,  -665,  -665,  -665,   165,  -665,    97,
     361,   371,   372,   674,   674,   674,  1292,  1292,  1292,  1443,
     376,   377,   375,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
     379,   143,  -665,  -665,  -665,   381,   385,   386,  -665,   383,
      15,   388,   150,  -665,   435,   407,   188,   437,   987,   238,
     156,   392,  -665,   334,  -665,   334,  -665,   334,  -665,  -665,
     987,   987,   987,   987,   987,   987,   987,   987,   987,   987,
     987,   987,   987,   987,   987,   987,   987,   987,   987,   987,
     987,   987,   987,   987,   987,   987,   987,   987,   987,   987,
     987,   987,    59,  -665,   455,  -665,  -665,  -665,  -665,   196,
     150,   150,  -665,  -665,   398,  -665,  -665,   439,  -665,   475,
    -665,  -665,   150,  -665,  1415,  -665,  1415,  -665,  -665,   174,
    -665,   402,   469,  1366,   471,    38,   987,   987,  -665,  -665,
    1140,   987,   421,   987,   473,  1140,  1140,   987,  1140,  1520,
     425,   428,   987,  -665,  -665,   488,   987,  -665,   987,  -665,
    -665,  1617,   429,   432,   430,  1617,  1617,  1617,  1617,  1617,
    1617,  1617,  1617,  1617,   987,   434,   481,   436,   433,   674,
    -665,   431,  -665,  -665,   521,  -665,  1243,  1292,  1292,   446,
     451,   458,   452,  -665,  -665,  1400,  -665,  1292,  1292,  1292,
    -665,  -665,  -665,   674,  -665,   453,   457,   151,   533,   188,
    -665,  -665,   513,  1595,  -665,  1617,  1036,  1036,  1036,  1036,
    1036,  1036,  1036,  1036,   380,   380,   380,   380,   380,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  1617,  1617,
    1617,  1617,  1617,  1617,  1617,  1617,  1617,   150,  -665,  -665,
     470,  -665,  -665,  -665,   478,   150,  -665,  -665,  -665,  -665,
    -665,  -665,   603,   674,  -665,   512,   150,  -665,  -665,   552,
    -665,   294,   294,  -665,   150,  -665,  -665,  -665,   563,   674,
     355,  -665,   553,    39,   484,   486,   489,   859,  1439,   558,
     487,  -665,  1617,   555,   273,   498,   571,  -665,  -665,  -665,
     987,  -665,   987,  1617,   351,  -665,  1617,  -665,  -665,   987,
    -665,  1617,   603,    65,   674,  1400,   502,   562,   506,   505,
     510,   511,   514,  1292,  1292,  1292,   516,  -665,   561,    50,
    -665,  -665,  -665,  -665,  -665,  -665,   150,   518,  1316,  -665,
     883,  -665,   509,   520,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,   743,  -665,  -665,   210,  -665,  -665,  -665,  1140,   987,
    1140,   987,   987,   987,  1140,  -665,   522,  1140,  -665,   473,
    -665,  1560,  -665,  -665,   515,  -665,   525,   527,  1400,   488,
    -665,   587,  -665,  1292,  1292,  1292,  -665,   581,  -665,   188,
     534,   530,   535,   674,   591,  -665,   617,   987,   596,   603,
      11,  -665,   600,   557,    95,   623,   560,  -665,  -665,  -665,
    -665,  1617,   793,  -665,    40,   626,  -665,   987,   607,  1400,
    -665,   564,   636,   566,   567,  -665,   639,   165,  -665,   150,
    -665,   562,   597,  -665,  1617,   674,  -665,   674,   987,  -665,
    1140,    95,  -665,  -665,   576,  -665,  1140,   649,  -665,  1617,
      65,   575,  -665,   635,   633,   587,  -665,  -665,  -665,  -665,
     645,   592,  -665,  -665,   588,  -665,   601,   657,  -665,  -665,
    -665,  1140,  -665,  -665,   593,   165,  -665,  -665,   659,   627,
     602,   987,    95,  -665,   674,  -665,  -665,  -665,   667,   686,
     150,  -665,  1140,  -665,  -665,   562,   611,   610,  -665,  -665,
     693,  -665,   618,  -665,  -665
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    35,     1,     0,     0,   209,     0,    46,     0,
       0,     0,   210,   217,     0,   221,     3,     4,     5,     6,
       0,    11,    35,    43,    34,    37,   212,    38,    39,    40,
      42,    41,    95,    97,    99,   102,   103,   100,   101,    98,
     104,   105,    96,   106,   108,   110,     0,     0,     0,   285,
     285,   285,     0,    46,     0,     0,    54,     0,    46,    48,
      49,    50,    51,    53,    52,   207,   205,     0,   285,   285,
     285,    25,     0,   216,     0,     0,    27,    30,    28,    29,
      32,     0,   220,     0,     7,    65,    33,    36,     0,   211,
       0,   107,   109,    94,   111,     0,     0,     0,     0,     0,
       0,     0,   285,   285,   285,     0,   285,   285,   285,     0,
      35,    45,    47,     0,     0,   204,     0,     0,     0,     0,
       0,     0,   398,   217,     0,     0,   398,   221,     0,     0,
       0,   181,   177,     0,   182,    55,     0,   178,   114,    65,
     179,    65,     0,     0,   116,     0,   183,   175,    91,    92,
     112,    90,     0,    86,   169,   176,   398,     0,   212,     0,
       0,   285,     0,     0,     0,   295,     0,   287,   292,   398,
     398,   398,     0,     0,     0,     0,     0,     0,     0,     0,
      24,   208,   206,   285,    35,     0,     0,     0,    35,   357,
     285,   181,   177,   354,   356,   399,   285,   322,     0,   398,
       0,     0,     0,     0,     0,     0,     0,   130,   162,   219,
     309,   308,   298,   299,   306,   307,   305,   303,   300,   302,
     362,   301,   304,     0,   218,    46,    31,   223,   222,   181,
       0,     0,    76,    75,    65,    65,     0,    56,    85,     0,
      84,   115,     0,     0,     0,   188,     0,     0,    83,   181,
       0,     0,   195,   186,     0,   184,    65,    93,     0,   193,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   320,     0,   314,   310,   311,   313,   312,     0,   214,
     213,   285,   285,     0,   290,   291,   289,   398,   286,     0,
       0,     0,     0,   398,   398,   398,   230,   234,   232,    46,
       0,     0,     0,   275,   268,   277,   273,   280,   264,   265,
     279,   267,   266,   274,   270,   278,   269,   272,   276,   271,
       0,     0,   281,   282,   283,     0,     0,     0,    26,     0,
       9,     0,     0,   349,     0,     0,     0,   317,     0,   181,
     182,     0,   329,   167,   163,   162,   164,   168,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   361,     0,   366,   369,   367,   370,     0,
       0,     0,   383,   384,     0,   391,   392,   237,   390,     0,
     368,   373,   378,   364,   377,   380,   365,   381,   382,   395,
     389,     0,     0,     0,     0,     0,   122,     0,    89,    88,
      65,   193,     0,     0,    63,    65,    65,     0,    65,   201,
       0,   199,     0,   170,   194,     0,     0,   180,   183,   113,
     172,   192,     0,   190,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,     0,     0,     0,     0,   398,
     322,   293,   296,   297,     0,   288,    35,     0,     0,     0,
       0,     0,     0,    15,    16,    35,   258,   224,   228,   226,
       8,    10,    12,   398,   321,     0,     0,     0,     0,   351,
     352,   353,     0,     0,   327,   328,   157,   158,   154,   155,
     153,   156,   159,   160,   131,   132,   150,   152,   151,   133,
     135,   136,   134,   146,   149,   148,   147,   161,   137,   138,
     139,   140,   141,   144,   145,   142,   143,     0,   393,   394,
     239,   374,   375,   385,     0,   387,   238,   358,   379,   376,
     363,   396,     0,   398,   333,     0,     0,   343,   344,     0,
     335,   338,   336,   371,   339,   409,   342,   345,   408,   398,
      35,    44,     0,   118,   123,     0,   126,   128,     0,    78,
       0,   198,    82,     0,     0,    61,     0,    81,   189,    87,
       0,   117,     0,   197,     0,   196,   187,   185,   171,   193,
     174,   215,     0,   398,   398,    35,     0,     0,     0,     0,
       0,     0,     0,   231,   235,   233,     0,   284,   315,   354,
     355,   346,   350,   318,   319,   386,     0,   243,     0,   388,
       0,   405,     0,   403,   397,   372,   341,   332,   337,   334,
     340,   398,   407,   330,     0,    77,   121,   120,    65,   122,
      65,     0,     0,     0,    65,    57,     0,    65,    59,    63,
      58,   202,   200,   191,     0,   331,     0,     0,    35,     0,
     294,     0,   259,   225,   229,   227,   260,     0,   348,     0,
       0,     0,   255,   398,   241,   360,     0,     0,     0,     0,
     181,   412,     0,     0,    20,     0,     0,   119,   124,   125,
     127,   129,     0,    79,     0,     0,    62,     0,     0,    35,
     262,     0,     0,     0,   400,   316,     0,   398,   240,     0,
     244,     0,   245,   359,   406,   398,   404,   398,     0,    13,
      65,    20,    22,    23,     0,    14,    65,     0,    60,   203,
     398,     0,   261,     0,     0,     0,   347,   257,   256,   242,
       0,   247,   323,   411,     0,   410,   413,    18,    21,    17,
      80,    65,   324,   263,     0,   398,   401,   246,     0,   249,
       0,   414,    20,    64,   398,   325,   326,   248,     0,   251,
       0,   415,    65,   402,   250,     0,     0,     0,    19,   252,
     253,   416,     0,   236,   254
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -664,
    -665,   148,  -665,   250,   -90,  -106,    20,  -665,    73,    17,
    -665,  -665,  -665,  -665,    61,  -665,  -215,    -4,  -665,  -665,
     669,   671,  -665,  -132,  -665,  -665,  -665,  -665,    79,  -665,
      81,  -665,  -102,   181,   -83,  -573,   282,  -665,  -137,  -408,
    -665,  -665,   288,  -665,  -665,   144,  -665,    75,   199,  -665,
      -8,   570,  -665,     7,   609,  -665,    -7,   608,    12,    -5,
       6,  -665,   333,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,    25,  -665,  -665,  -665,  -665,  -441,  -109,   578,   447,
    -665,   133,    30,  -108,  -546,  -665,  -152,  -128,  -665,  -665,
     -15,  -665,  -665,  -665,  -665,  -665,  -146,  -665,  -223,  -665,
     187,  -665,  -478,  -665,   135,  -665,  -665,   128,  -381,  -665,
    -665,  -665,  -316,  -665,  -665,  -195,  -313,  -320,  -665,   338,
    -665,  -144,    10,  -665,  -563,  -665,  -541,  -665,  -665,  -665,
     -19,  -665
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   482,    18,    19,   685,   720,
     721,   179,   121,    80,    81,    20,   321,    22,    23,    57,
      58,   147,   148,   149,   574,   575,   150,   151,    24,    43,
      44,    45,    46,   152,   240,   248,   562,   638,   563,   564,
     565,   566,   206,   207,   208,   154,   254,   255,   250,   442,
     443,   155,   251,   252,   241,   430,   431,    25,    67,    26,
      27,    89,    90,    28,    73,    74,    29,    82,   394,    30,
     396,   397,   398,   617,   712,   674,   741,   759,   769,   776,
     783,   671,   672,    31,   322,   323,   324,   325,    99,   166,
     167,   168,   461,   209,   272,   210,   211,   212,   213,   275,
     463,   214,   215,   216,   217,   276,   218,   549,   550,   551,
     552,   219,   488,   489,   336,   220,   221,   399,   400,   401,
     554,   402,   403,   404,   405,   555,   407,   408,   409,   410,
     222,   223,   703,   704,   622,   623,   557,   558,   632,   682,
     745,   746
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,   153,    63,   273,   626,   246,   242,   165,   243,
     277,   612,   278,   570,    64,    61,   491,    86,   227,   418,
     419,    85,    21,   490,   660,   406,   230,    83,   274,   654,
     187,   236,   553,   455,   238,   226,   607,   607,   607,   333,
     244,   245,    87,   245,   253,    60,    62,   655,    63,  -320,
      60,    62,     3,    63,   636,   279,   153,   748,   153,    64,
      61,   290,   291,   292,    64,    61,   668,   110,   271,   560,
     105,    71,   165,   165,   165,   112,   326,   327,   320,   424,
     637,    56,   329,    59,   425,    52,   413,    84,   539,   411,
     540,   342,   456,   271,    47,   332,   245,   717,   772,   481,
     556,    92,   422,   113,   412,     6,    54,   162,   341,   460,
     195,   334,   111,   335,   561,    48,   716,   343,   345,   345,
     347,   345,   345,   444,   439,    76,    56,    72,    59,    77,
     180,    56,   156,    59,   197,    75,   527,   245,   739,    83,
     335,   163,   413,   464,    85,   429,    65,    66,   414,    85,
     157,   153,   153,    78,   300,    88,    12,   441,   245,   462,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   491,
     553,   553,    15,   153,   164,   301,   490,    52,    76,    98,
      79,   653,    77,   487,   752,   469,   470,   471,   326,   327,
      97,   706,   116,   271,    98,   533,    98,   487,    54,   165,
      52,    95,   779,   232,   233,   569,    78,   538,   330,   114,
     195,   577,   392,   579,    52,   395,    85,    60,    62,    96,
      63,    54,   607,   607,   607,   109,   683,   393,   115,   777,
     120,    64,    61,    79,   460,    54,   493,   384,   556,   556,
     122,   -30,   415,   125,   684,   -30,   531,   532,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
      49,    68,   102,   106,    50,    69,   103,   107,   647,   648,
     578,    60,    62,   576,    63,   284,   285,   286,    56,   123,
      59,   534,   124,   487,     6,    64,    61,   126,    51,    70,
     104,   108,   181,   182,   567,   568,   472,    86,   127,   441,
      52,   572,   158,   -27,   432,   245,    86,   -27,   628,   629,
     583,   395,   615,   159,   586,   160,   253,   153,   225,   111,
     619,    54,   153,   153,   385,   153,   387,   161,   169,   491,
     170,   596,   591,   171,   234,    12,   490,   600,   601,   602,
     599,   178,   545,   184,     5,     6,   183,    13,   185,   606,
     186,   546,    56,   188,    59,   608,   235,   528,   237,   231,
      93,     7,   344,   346,   239,   348,   349,   247,   529,   256,
      53,     9,    32,    33,   257,   287,   392,   288,   392,   395,
     289,   395,    10,   293,   395,   547,   294,   295,   395,   281,
     282,   393,   296,   393,   621,   297,    12,   298,   258,   299,
     548,   328,   259,   406,   260,   689,   261,   338,    13,   693,
      55,   417,    15,   421,   423,   624,   428,   432,   433,   435,
     620,   273,   434,   438,   454,   437,   332,   277,   466,   278,
      34,   633,    35,    36,    37,    38,   459,    39,   467,   468,
     473,   474,   475,   485,   621,   274,   476,   480,   477,    32,
      33,   486,   478,   479,   483,   492,    40,    41,   651,    42,
     429,   494,   528,   530,   395,   535,   656,   441,   384,   657,
     620,   537,   542,   529,   600,   601,   602,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   687,   543,   440,   559,
     571,   750,   573,   582,   581,   695,   584,   589,   588,   593,
     595,   590,   594,   681,   592,   598,   670,    34,   561,    35,
      36,    37,    38,   603,    39,   597,   763,   567,   604,   567,
     691,   692,   609,   547,   547,   605,   395,   395,   610,   611,
     613,   621,   701,    40,    41,   153,    42,   153,   548,   548,
     616,   153,   625,   464,   153,   710,   727,   618,   627,   635,
     631,   639,   640,   644,   641,   714,   645,   620,   273,   462,
     180,   744,   484,   646,   277,   649,   278,   650,   747,   658,
     229,   192,   662,   731,   134,   729,   661,   663,   664,   667,
     678,   665,   274,   666,   673,   679,   698,   742,   694,   743,
     392,   464,   699,   395,   700,   702,   245,   137,   705,   670,
     707,   708,   709,   711,   744,   393,   140,   765,   100,   101,
     686,   191,   192,   713,   715,   134,   135,   153,   718,   724,
     778,   719,   728,   153,   725,   730,   117,   118,   119,   733,
     659,   732,   146,   740,   735,   736,   773,   734,   137,   245,
     749,   751,   753,   754,   395,   229,   192,   140,   153,   134,
     135,   755,   460,   757,   760,   758,   722,   723,   762,   764,
     172,   173,   174,   189,   175,   176,   177,   767,   761,   153,
     770,   145,   137,   146,   768,   774,   200,   775,   780,   781,
     190,   140,   191,   192,   782,   784,   134,   135,   634,   193,
     696,   194,    91,   722,   723,   201,   202,    94,   688,   195,
     587,   196,   690,   585,   203,   145,   652,   146,   280,   137,
     536,   204,   224,   205,   738,   228,   465,   737,   140,   283,
     766,   630,   771,   197,   669,   756,   676,   541,     0,     0,
       0,     0,   189,     0,   722,   723,     0,     0,     0,     0,
       0,   302,   198,     0,   146,     0,   199,   200,   331,   190,
       0,   680,   192,  -320,   337,   134,   135,     0,   193,     0,
     194,     0,   426,     0,     0,     0,   201,   202,   195,     0,
     196,     0,     0,     0,  -320,   203,     0,     0,   137,     0,
    -320,     0,   204,     0,   205,   726,     0,   140,     0,     0,
       0,     0,   197,     0,     0,     0,     0,     0,  -320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,  -320,
       0,   198,     0,   146,     0,   199,   200,     0,     0,     0,
       0,     0,     0,     0,     0,  -320,   332,  -320,     0,  -320,
     436,     0,     0,  -320,     0,   201,   202,     0,     0,   457,
     458,     0,     0,     0,   203,     0,     0,     0,     0,     0,
       0,   204,   642,   205,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   677,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,     0,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   339,
     192,     0,     0,   340,   135,   229,   192,     0,     0,   134,
     135,   249,   192,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,    78,     0,     0,
       0,     0,   137,     0,     0,   140,     0,     0,   137,     0,
       0,   140,     0,     0,     0,     0,     0,   140,   416,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,   145,
       0,   146,     0,     0,   200,   145,     0,   146,     0,     0,
     200,   145,     0,   146,     0,     0,   200,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,   201,
     202,     0,   203,     0,     0,   201,   202,     0,   203,   204,
       0,   205,     0,     0,   203,   204,     0,   205,     0,     0,
       0,   204,     0,   205,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,    85,   128,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,     0,     0,   129,     0,     0,   130,   131,   132,
     133,   258,   134,   135,     0,   259,     0,   260,     0,   261,
       0,     0,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   382,     6,     0,   136,   137,   138,     0,   383,     0,
     139,     0,     0,     0,   140,     0,     0,     0,    52,     0,
      76,     0,   141,     0,    77,     0,     0,     0,     0,     0,
     142,     0,   143,   144,     0,     0,     0,     0,   145,    54,
     146,   384,   385,   386,   387,   388,     0,     0,    78,     0,
       0,     0,     0,    12,     0,     0,   303,     0,     4,     0,
     389,   304,     5,     6,     0,    13,     0,   305,     0,   390,
       0,   306,     0,   307,     0,    79,     0,     0,   308,     7,
     391,     0,     0,     0,     0,     0,     0,     0,    53,     9,
       0,     0,     0,     0,     0,   309,   310,     0,     0,   311,
      10,     0,     0,     0,     0,   303,     0,     0,     0,     0,
     304,   312,   313,     0,    12,   314,   305,     0,   315,   316,
     306,     0,   307,     0,     0,     0,    13,   308,    55,     0,
      15,   317,   318,     0,   319,   382,     6,     0,     0,     0,
       0,     0,   675,     0,   309,   310,     0,     0,   311,     0,
       0,     0,    52,     0,    76,     0,     0,     0,    77,     0,
     312,   313,     0,     0,   314,     0,     0,   315,   316,     0,
       0,     0,     0,    54,     0,   384,   385,   386,   387,   388,
     317,   318,    78,   319,     0,   487,     6,    12,     0,     0,
       0,     0,   544,     0,   389,     0,     0,     0,     0,    13,
       0,     0,    52,   390,    76,     0,     0,     0,    77,    79,
       0,     0,     4,     0,     0,     4,     5,     6,     0,     5,
       6,     0,     0,    54,     0,     0,   385,     0,   387,     0,
       0,     0,    78,     7,   382,     6,     7,    12,     0,     0,
       0,     0,     8,     9,   545,    53,     9,     0,     0,    13,
       0,    52,     0,   546,    10,    11,     0,    10,     0,    79,
       0,     0,     0,     6,     0,     0,     0,     0,    12,     0,
       0,    12,    54,     0,   384,   385,   386,   387,   388,    52,
      13,     0,    14,    13,    15,    55,    12,    15,    53,     9,
       0,     0,     0,   389,     0,     0,     0,   420,    13,     0,
      54,     0,   390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
     643,     0,     0,     0,     0,     0,    13,     0,    55,     0,
      15,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   580,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   697,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   614,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   258,     0,     0,     0,   259,     0,   260,
       0,   261,     0,     0,   373,   374,   375,   376,   377,   378,
     379,   380,   381
};

static const yytype_int16 yycheck[] =
{
       8,     8,    85,     8,   156,   546,   143,   139,    98,   141,
     156,   489,   156,   421,     8,     8,   336,    21,   126,   234,
     235,     6,     2,   336,   597,   220,   128,    15,   156,   592,
     120,   133,   413,     4,   136,   125,   477,   478,   479,    16,
     142,   143,    22,   145,   146,    53,    53,   593,    53,    38,
      58,    58,     0,    58,    15,   157,   139,   721,   141,    53,
      53,   169,   170,   171,    58,    58,    16,    31,    28,    31,
      53,    28,   162,   163,   164,    58,   185,   186,   184,    17,
      41,     8,   188,     8,    22,    26,    57,    84,   404,     4,
     406,   199,    63,    28,    26,    84,   198,    86,   762,    84,
     413,    85,   239,    85,    19,    10,    47,    10,   198,    69,
      45,    88,    76,    90,    76,    47,   679,   200,   201,   202,
     203,   204,   205,   260,   256,    28,    53,    28,    53,    32,
     110,    58,    86,    58,    69,    28,    77,   239,   711,   127,
      90,    44,    57,   287,     6,   247,    28,    29,    63,     6,
     104,   234,   235,    56,    16,    28,    61,   259,   260,   287,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   489,
     551,   552,    77,   256,    77,   179,   489,    26,    28,    88,
      83,   589,    32,     9,   730,   293,   294,   295,   297,   298,
      84,   669,    84,    28,    88,   390,    88,     9,    47,   289,
      26,    28,   775,    28,    29,   420,    56,   402,   188,    85,
      45,   426,   220,   428,    26,   220,     6,   225,   225,    28,
     225,    47,   663,   664,   665,    28,    16,   220,    87,   770,
      88,   225,   225,    83,    69,    47,   338,    49,   551,   552,
     104,    85,   225,    85,    34,    89,    50,    51,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
      28,    28,    28,    28,    32,    32,    32,    32,    15,    16,
     427,   299,   299,   425,   299,   162,   163,   164,   225,    87,
     225,   391,    87,     9,    10,   299,   299,    86,    56,    56,
      56,    56,   113,   114,   416,   417,   299,   321,    87,   421,
      26,   423,    87,    85,    86,   427,   330,    89,   551,   552,
     432,   336,   527,    84,   436,    84,   438,   420,    35,    76,
     535,    47,   425,   426,    50,   428,    52,    97,    86,   669,
      86,   459,   454,    86,    86,    61,   669,   466,   467,   468,
     466,    87,    68,    87,     9,    10,   116,    73,    87,   475,
      87,    77,   299,    87,   299,   483,    86,   382,    28,   129,
      16,    26,   201,   202,    88,   204,   205,    88,   382,    87,
      35,    36,    28,    29,    16,    86,   404,    89,   406,   404,
      87,   406,    47,    86,   409,   413,    86,    86,   413,   159,
     160,   404,    87,   406,   542,    87,    61,    87,    84,    35,
     413,    89,    88,   618,    90,   640,    92,    90,    73,   644,
      75,    95,    77,    88,    74,   543,    12,    86,    89,    87,
     542,   593,    89,    85,   104,    91,    84,   593,    87,   593,
      86,   559,    88,    89,    90,    91,    86,    93,    87,    87,
      84,    84,    87,    28,   592,   593,    87,    84,    87,    28,
      29,    64,    87,    87,    86,    38,   112,   113,   580,   115,
     582,    89,   487,    28,   489,    87,   594,   589,    49,   595,
     592,    16,    90,   487,   603,   604,   605,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   638,    38,   258,    38,
      89,   726,    39,    85,    89,   647,    28,    85,    89,    38,
      87,    91,    86,   631,    90,     4,   616,    86,    76,    88,
      89,    90,    91,    87,    93,   104,   751,   639,    87,   641,
     642,   643,    89,   551,   552,    87,   551,   552,    91,    16,
      37,   679,   658,   112,   113,   638,   115,   640,   551,   552,
      90,   644,    50,   707,   647,   673,   694,    89,    16,    16,
       7,    87,    86,    15,    85,   677,    89,   679,   730,   707,
     560,   718,   332,    28,   730,    87,   730,    16,   720,    87,
      28,    29,    87,   699,    32,   697,    90,    87,    87,    38,
      91,    87,   730,    87,    86,    85,    91,   715,    86,   717,
     618,   755,    87,   618,    87,    28,   718,    55,    37,   709,
      86,    91,    87,    32,   761,   618,    64,   755,    50,    51,
     634,    28,    29,    16,    38,    32,    33,   720,    38,    16,
     772,    84,    16,   726,    84,    38,    68,    69,    70,    13,
      88,    87,    90,    56,    87,    16,   764,    91,    55,   761,
      84,    12,    87,    28,   669,    28,    29,    64,   751,    32,
      33,    38,    69,    28,    86,    83,   684,   684,    21,    86,
     102,   103,   104,     9,   106,   107,   108,    28,    87,   772,
      88,    88,    55,    90,    67,    28,    93,    11,    87,    89,
      26,    64,    28,    29,    11,    87,    32,    33,   560,    35,
     649,    37,    43,   721,   721,   112,   113,    46,   639,    45,
     438,    47,   641,   435,   121,    88,   582,    90,   158,    55,
     397,   128,   123,   130,   709,   127,   289,   707,    64,   161,
     755,   554,   761,    69,   609,   735,   618,   409,    -1,    -1,
      -1,    -1,     9,    -1,   762,   762,    -1,    -1,    -1,    -1,
      -1,   183,    88,    -1,    90,    -1,    92,    93,   190,    26,
      -1,    28,    29,    11,   196,    32,    33,    -1,    35,    -1,
      37,    -1,    12,    -1,    -1,    -1,   112,   113,    45,    -1,
      47,    -1,    -1,    -1,    32,   121,    -1,    -1,    55,    -1,
      38,    -1,   128,    -1,   130,    12,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    67,
      -1,    88,    -1,    90,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    87,
      13,    -1,    -1,    91,    -1,   112,   113,    -1,    -1,   281,
     282,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    13,   130,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    13,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    28,
      29,    -1,    -1,    32,    33,    28,    29,    -1,    -1,    32,
      33,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    64,    -1,    -1,    55,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    64,    38,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,
      -1,    90,    -1,    -1,    93,    88,    -1,    90,    -1,    -1,
      93,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   112,
     113,    -1,   121,    -1,    -1,   112,   113,    -1,   121,   128,
      -1,   130,    -1,    -1,   121,   128,    -1,   130,    -1,    -1,
      -1,   128,    -1,   130,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     6,     7,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      30,    84,    32,    33,    -1,    88,    -1,    90,    -1,    92,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     9,    10,    -1,    54,    55,    56,    -1,    16,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    26,    -1,
      28,    -1,    72,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    47,
      90,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,     3,    -1,     5,    -1,
      68,     8,     9,    10,    -1,    73,    -1,    14,    -1,    77,
      -1,    18,    -1,    20,    -1,    83,    -1,    -1,    25,    26,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,    58,    59,    -1,    61,    62,    14,    -1,    65,    66,
      18,    -1,    20,    -1,    -1,    -1,    73,    25,    75,    -1,
      77,    78,    79,    -1,    81,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    32,    -1,
      58,    59,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      78,    79,    56,    81,    -1,     9,    10,    61,    -1,    -1,
      -1,    -1,    16,    -1,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    26,    77,    28,    -1,    -1,    -1,    32,    83,
      -1,    -1,     5,    -1,    -1,     5,     9,    10,    -1,     9,
      10,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,    -1,
      -1,    -1,    56,    26,     9,    10,    26,    61,    -1,    -1,
      -1,    -1,    35,    36,    68,    35,    36,    -1,    -1,    73,
      -1,    26,    -1,    77,    47,    48,    -1,    47,    -1,    83,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    61,    47,    -1,    49,    50,    51,    52,    53,    26,
      73,    -1,    75,    73,    77,    75,    61,    77,    35,    36,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    70,    73,    -1,
      47,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      77,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    84,    -1,    -1,    -1,    88,    -1,    90,
      -1,    92,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   132,   133,     0,     5,     9,    10,    26,    35,    36,
      47,    48,    61,    73,    75,    77,   134,   135,   137,   138,
     146,   147,   148,   149,   159,   188,   190,   191,   194,   197,
     200,   214,    28,    29,    86,    88,    89,    90,    91,    93,
     112,   113,   115,   160,   161,   162,   163,    26,    47,    28,
      32,    56,    26,    35,    47,    75,   149,   150,   151,   188,
     191,   194,   197,   200,   201,    28,    29,   189,    28,    32,
      56,    28,    28,   195,   196,    28,    28,    32,    56,    83,
     144,   145,   198,   199,    84,     6,   158,   147,    28,   192,
     193,   161,    85,    16,   162,    28,    28,    84,    88,   219,
     219,   219,    28,    32,    56,   150,    28,    32,    56,    28,
      31,    76,   150,    85,    85,    87,    84,   219,   219,   219,
      88,   143,   104,    87,    87,    85,    86,    87,     7,    24,
      27,    28,    29,    30,    32,    33,    54,    55,    56,    60,
      64,    72,    80,    82,    83,    88,    90,   152,   153,   154,
     157,   158,   164,   175,   176,   182,    86,   104,    87,    84,
      84,   144,    10,    44,    77,   145,   220,   221,   222,    86,
      86,    86,   219,   219,   219,   219,   219,   219,    87,   142,
     147,   189,   189,   144,    87,    87,    87,   145,    87,     9,
      26,    28,    29,    35,    37,    45,    47,    69,    88,    92,
      93,   112,   113,   121,   128,   130,   173,   174,   175,   224,
     226,   227,   228,   229,   232,   233,   234,   235,   237,   242,
     246,   247,   261,   262,   195,    35,   145,   224,   198,    28,
     173,   144,    28,    29,    86,    86,   173,    28,   173,    88,
     165,   185,   164,   164,   173,   173,   179,    88,   166,    28,
     179,   183,   184,   173,   177,   178,    87,    16,    84,    88,
      90,    92,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    28,   225,   227,   228,   230,   236,   237,   262,   173,
     192,   144,   144,   219,   222,   222,   222,    86,    89,    87,
     224,   224,   224,    86,    86,    86,    87,    87,    87,    35,
      16,   158,   219,     3,     8,    14,    18,    20,    25,    42,
      43,    46,    58,    59,    62,    65,    66,    78,    79,    81,
     146,   147,   215,   216,   217,   218,   218,   218,    89,   146,
     147,   219,    84,    16,    88,    90,   245,   219,    90,    28,
      32,   145,   224,   175,   174,   175,   174,   175,   174,   174,
      13,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     9,    16,    49,    50,    51,    52,    53,    68,
      77,    88,   191,   194,   199,   200,   201,   202,   203,   248,
     249,   250,   252,   253,   254,   255,   256,   257,   258,   259,
     260,     4,    19,    57,    63,   150,    38,    95,   157,   157,
      70,    88,   179,    74,    17,    22,    12,    85,    12,   173,
     186,   187,    86,    89,    89,    87,    13,    91,    85,   164,
     144,   173,   180,   181,   179,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   104,     4,    63,   219,   219,    86,
      69,   223,   228,   231,   262,   220,    87,    87,    87,   224,
     224,   224,   150,    84,    84,    87,    87,    87,    87,    87,
      84,    84,   136,    86,   144,    28,    64,     9,   243,   244,
     257,   258,    38,   173,    89,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,    77,   200,   201,
      28,    50,    51,   256,   145,    87,   203,    16,   256,   253,
     253,   260,    90,    38,    16,    68,    77,   191,   194,   238,
     239,   240,   241,   249,   251,   256,   257,   267,   268,    38,
      31,    76,   167,   169,   170,   171,   172,   173,   173,   157,
     180,    89,   173,    39,   155,   156,   164,   157,   179,   157,
      86,    89,    85,   173,    28,   183,   173,   177,    89,    85,
      91,   173,    90,    38,    86,    87,   224,   104,     4,   146,
     218,   218,   218,    87,    87,    87,   146,   217,   224,    89,
      91,    16,   243,    37,    91,   256,    90,   204,    89,   256,
     173,   228,   265,   266,   224,    50,   267,    16,   239,   239,
     241,     7,   269,   224,   142,    16,    15,    41,   168,    87,
      86,    85,    13,    71,    15,    89,    28,    15,    16,    87,
      16,   173,   186,   180,   265,   225,   224,   146,    87,    88,
     176,    90,    87,    87,    87,    87,    87,    38,    16,   245,
     145,   212,   213,    86,   206,    16,   248,    13,    91,    85,
      28,   224,   270,    16,    34,   139,   158,   164,   169,   157,
     171,   173,   173,   157,    86,   164,   155,    86,    91,    87,
      87,   146,    28,   263,   264,    37,   243,    86,    91,    87,
     224,    32,   205,    16,   173,    38,   265,    86,    38,    84,
     140,   141,   191,   197,    16,    84,    12,   228,    16,   173,
      38,   146,    87,    13,    91,    87,    16,   223,   212,   176,
      56,   207,   224,   224,   179,   271,   272,   164,   140,    84,
     157,    12,   225,    87,    28,    38,   263,    28,    83,   208,
      86,    87,    21,   157,    86,   228,   231,    28,    67,   209,
      88,   271,   140,   224,    28,    11,   210,   267,   164,   176,
      87,    89,    11,   211,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   131,   133,   132,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   158,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   169,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   176,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   183,   183,   184,   185,   186,
     186,   187,   187,   187,   188,   189,   189,   189,   189,   190,
     190,   191,   192,   192,   193,   193,   194,   195,   195,   196,
     197,   198,   198,   199,   200,   200,   200,   200,   200,   200,
     201,   201,   201,   201,   201,   201,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   214,   214,
     214,   214,   214,   214,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   216,   216,   216,   216,   216,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   221,   221,   222,   222,   222,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     225,   225,   225,   225,   225,   226,   226,   226,   226,   227,
     228,   228,   228,   229,   230,   231,   231,   232,   233,   234,
     235,   236,   237,   237,   238,   238,   238,   239,   239,   240,
     240,   240,   240,   240,   240,   241,   242,   242,   242,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   247,   247,
     247,   247,   247,   248,   248,   248,   249,   249,   250,   250,
     250,   251,   251,   252,   252,   252,   253,   253,   254,   254,
     254,   254,   254,   254,   254,   255,   255,   256,   256,   257,
     258,   259,   259,   259,   259,   260,   260,   261,   262,   262,
     263,   263,   264,   265,   265,   266,   266,   267,   267,   268,
     269,   270,   270,   271,   271,   271,   272
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     6,     0,
       1,     1,     6,     9,     9,     6,     6,    10,     3,     6,
       0,     2,     1,     1,     1,     0,     3,     1,     1,     1,
       1,     3,     1,     2,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     6,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       7,     1,     3,     0,     6,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     5,     4,     6,
       8,     4,     4,     2,     2,     2,     1,     4,     3,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     0,     3,     1,     3,
       1,     1,     0,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     4,     3,     2,     4,     1,     1,     1,     1,     1,
       3,     1,     1,     0,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     0,     3,     1,     3,     3,     3,     1,
       3,     1,     3,     5,     3,     1,     3,     1,     3,     1,
       1,     2,     0,     3,     3,     5,     2,     0,     3,     3,
       2,     0,     3,     3,     6,     8,     6,     8,     6,     8,
       4,     6,     4,     6,     4,     6,    11,     1,     2,     0,
       3,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     1,     3,     3,     6,     8,
       8,    10,     9,    11,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     3,     1,     3,     2,
       2,     2,     1,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     2,     4,     4,
       1,     3,     1,     7,     7,     7,     7,     3,     3,     2,
       4,     4,     4,     3,     2,     1,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     4,     7,     5,     2,
       2,     1,     1,     1,     0,     3,     1,     1,     3,     6,
       5,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     3,     2,     3,     1,
       1,     1,     1,     2,     2,     1,     2,     4,     0,     1,
       1,     3,     5,     1,     3,     1,     3,     2,     1,     1,
       4,     3,     1,     1,     2,     3,     5
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

    case YYSYMBOL_84_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_85_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_86_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_87_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_88_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* '@'  */
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

    case YYSYMBOL_asm_ident_list: /* asm_ident_list  */
         { ((*yyvaluep).toks)->print_debug(); }
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

  case 31: /* ident_list: ident_ext ',' ident_list  */
                                     { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 32: /* ident_list: ident_ext  */
                { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 33: /* block: decl_part_list compoundst  */
        { (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp)); }
    break;

  case 34: /* block: assemblerst  */
        { (yyval.n_block) = new block_node((yyvsp[0].n_basm)); }
    break;

  case 35: /* decl_part_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 36: /* decl_part_list: decl_part decl_part_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 44: /* unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 45: /* unit_spec: INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node(NULL, NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 46: /* unit_decl_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 47: /* unit_decl_list: unit_decl unit_decl_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 55: /* inherited: INHERITED  */
                     { (yyval.n_expr) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 56: /* inherited: INHERITED IDENT  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 57: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_expr) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 58: /* try_finally: TRY sequence FINALLY sequence END  */
        { (yyval.n_stmt) = new try_finally_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 59: /* try_except: TRY sequence EXCEPT except_many END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 60: /* try_except: TRY sequence EXCEPT except_many ELSE sequence END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-6].tok), (yyvsp[-5].n_stmt), (yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 62: /* except_many: except ';' except_many  */
                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 63: /* except: %empty  */
        { (yyval.n_stmt) = NULL; }
    break;

  case 64: /* except: ON IDENT ':' simple_type DO statement  */
        { (yyval.n_stmt) = new on_except_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 65: /* statement: %empty  */
           { (yyval.n_stmt) = new empty_node(curr_token->prev_relevant()); }
    break;

  case 66: /* statement: primary LET expr  */
                       { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 67: /* statement: primary LETADD expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 68: /* statement: primary LETSUB expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 69: /* statement: primary LETDIV expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 70: /* statement: primary LETMUL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 71: /* statement: primary LETAND expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 72: /* statement: primary LETOR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 73: /* statement: primary LETSHL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 74: /* statement: primary LETSHR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 75: /* statement: GOTO ICONST  */
                  { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 76: /* statement: GOTO IDENT  */
                 { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 77: /* statement: CASE expr OF case_list END  */
                                 { (yyval.n_stmt) = new switch_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_case), (yyvsp[0].tok)); }
    break;

  case 78: /* statement: IF expr THEN statement  */
                             { (yyval.n_stmt) = new if_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 79: /* statement: IF expr THEN statement ELSE statement  */
        { (yyval.n_stmt) = new if_node((yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 80: /* statement: FOR ident_ext LET expr TO expr DO statement  */
        { (yyval.n_stmt) = new for_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 81: /* statement: WHILE expr DO statement  */
                              { (yyval.n_stmt) = new while_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 82: /* statement: REPEAT sequence UNTIL expr  */
                                 { (yyval.n_stmt) = new repeat_node((yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 83: /* statement: WRITE write_params  */
                         { (yyval.n_stmt) = new write_node((yyvsp[-1].tok), (yyvsp[0].n_wrls)); }
    break;

  case 84: /* statement: READ actual_params  */
                         { (yyval.n_stmt) = new read_node((yyvsp[-1].tok), (yyvsp[0].n_grp)); }
    break;

  case 85: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 86: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 87: /* statement: WITH expr_list DO statement  */
                                  { (yyval.n_stmt) = new with_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 88: /* statement: ICONST ':' statement  */
                           { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 89: /* statement: IDENT ':' statement  */
                          { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 90: /* statement: compoundst  */
                 { (yyval.n_stmt) = (yyvsp[0].n_comp); }
    break;

  case 93: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 94: /* assemblerst: ASM asm_text END  */
                              { (yyval.n_basm) = new asm_block_node((yyvsp[-2].tok), (yyvsp[-1].n_asm), (yyvsp[0].tok)); }
    break;

  case 106: /* asm_ident_list: asm_kwd  */
                        { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 107: /* asm_ident_list: asm_kwd asm_ident_list  */
                             { (yyval.toks) = new token_list((yyvsp[-1].tok), (yyvsp[0].toks)); }
    break;

  case 108: /* asm_line: asm_ident_list  */
                           { (yyval.n_asm) = new asm_line_node((yyvsp[0].toks), NULL); }
    break;

  case 109: /* asm_line: asm_ident_list ','  */
                         { (yyval.n_asm) = new asm_line_node((yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 113: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 114: /* actual_params: %empty  */
               { (yyval.n_grp) = NULL; }
    break;

  case 115: /* actual_params: expr_group  */
                                           { (yyval.n_grp) = (yyvsp[0].n_grp); }
    break;

  case 116: /* write_params: %empty  */
               { (yyval.n_wrls) = NULL; }
    break;

  case 117: /* write_params: '(' write_list ')'  */
                         { (yyval.n_wrls) = new write_list_node((yyvsp[-2].tok), (yyvsp[-1].n_wrtp), (yyvsp[0].tok)); }
    break;

  case 119: /* case_list: case_items otherwise sequence  */
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

  case 122: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 124: /* case_items: case_item ';' case_items  */
                                    { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 125: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 127: /* case_elem_list: case_elem ',' case_elem_list  */
                                       { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 128: /* case_elem: expr  */
                { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 129: /* case_elem: expr DOTS expr  */
                         { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* expr: expr PLUS expr  */
                    { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 132: /* expr: expr MINUS expr  */
                     { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* expr: expr MOD expr  */
                   { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* expr: expr MUL expr  */
                   { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* expr: expr DIV expr  */
                   { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* expr: expr DIVR expr  */
                    { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* expr: primary LET expr  */
                      { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* expr: primary LETADD expr  */
                         { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 139: /* expr: primary LETSUB expr  */
                         { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* expr: primary LETDIV expr  */
                         { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* expr: primary LETMUL expr  */
                         { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* expr: primary LETSHL expr  */
                         { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* expr: primary LETSHR expr  */
                         { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* expr: primary LETAND expr  */
                         { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 145: /* expr: primary LETOR expr  */
                         { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 146: /* expr: expr AND expr  */
                   { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 147: /* expr: expr BINAND expr  */
                      { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 148: /* expr: expr SHL expr  */
                   { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 149: /* expr: expr SHR expr  */
                   { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 150: /* expr: expr OR expr  */
                   { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 151: /* expr: expr BINOR expr  */
                      { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 152: /* expr: expr XOR expr  */
                   { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 153: /* expr: expr GT expr  */
                  { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 154: /* expr: expr LT expr  */
                  { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 155: /* expr: expr LE expr  */
                  { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 156: /* expr: expr GE expr  */
                  { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 157: /* expr: expr EQ expr  */
                  { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 158: /* expr: expr NE expr  */
                  { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 159: /* expr: expr IN expr  */
                  { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 160: /* expr: expr IS expr  */
                  { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 161: /* expr: expr AS expr  */
                  { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 163: /* simple_expr: PLUS simple_expr  */
                                  {
     (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 164: /* simple_expr: MINUS simple_expr  */
     { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 165: /* simple_expr: NOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 166: /* simple_expr: BINNOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 167: /* simple_expr: '@' primary  */
                 { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 168: /* simple_expr: AND primary  */
                               { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 170: /* primary: '(' expr_list ')'  */
                       { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 171: /* primary: primary '(' act_param_list ')'  */
                                    { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 172: /* primary: primary '.' ident_ext  */
                           { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 173: /* primary: primary '^'  */
                 { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 174: /* primary: primary '[' expr_list ']'  */
                               { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 177: /* constant: ICONST  */
                 { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 178: /* constant: RCONST  */
                 { (yyval.n_expr) = new real_node((yyvsp[0].tok)); }
    break;

  case 179: /* constant: SCONST  */
                 { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 180: /* constant: '[' set_elem_list ']'  */
                                { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 181: /* constant: IDENT  */
                { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 182: /* constant: INDEX  */
                { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 183: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 185: /* set_elem_list: set_elem ',' set_elem_list  */
                                          { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 186: /* set_elem: expr  */
               { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 187: /* set_elem: expr DOTS expr  */
                         { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 189: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 191: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 193: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 194: /* record_constant: '(' field_init_list ')'  */
                                         { (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); }
    break;

  case 195: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 196: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 197: /* field_init_item: IDENT ':' expr  */
                                { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 198: /* expr_group: '(' expr_list ')'  */
                              { (yyval.n_grp) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 200: /* write_list: write_param ',' write_list  */
                                                     { (yyvsp[-2].n_wrtp)->next = (yyvsp[0].n_wrtp); (yyval.n_wrtp) = (yyvsp[-2].n_wrtp); }
    break;

  case 201: /* write_param: expr  */
                   { (yyval.n_wrtp) = new write_param_node((yyvsp[0].n_expr)); }
    break;

  case 202: /* write_param: expr ':' expr  */
                    { (yyval.n_wrtp) = new write_param_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 203: /* write_param: expr ':' expr ':' expr  */
                             { (yyval.n_wrtp) = new write_param_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 204: /* label_decl_part: LABEL label_list ';'  */
    { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 205: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 206: /* label_list: ICONST ',' label_list  */
                                  { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 207: /* label_list: IDENT  */
                  { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 208: /* label_list: IDENT ',' label_list  */
                                 { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 211: /* const_def_part: const const_def_list  */
    { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 212: /* const_def_list: %empty  */
                { (yyval.n_cdef) = NULL; }
    break;

  case 213: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 214: /* const_def: IDENT EQ expr  */
                         { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 215: /* const_def: IDENT ':' const_type EQ expr  */
                               { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 216: /* type_def_part: TYPE type_def_list  */
    { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 217: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 218: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 219: /* type_def: IDENT EQ type  */
                        { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 220: /* var_decl_part: VAR var_decl_list  */
     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 221: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 222: /* var_decl_list: var_decl ';' var_decl_list  */
                                  { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 223: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 224: /* proc_fwd_decl: PROCEDURE IDENT formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 225: /* proc_fwd_decl: FUNCTION IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 226: /* proc_fwd_decl: PROCEDURE READ formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 227: /* proc_fwd_decl: FUNCTION READ formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 228: /* proc_fwd_decl: PROCEDURE INDEX formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 229: /* proc_fwd_decl: FUNCTION INDEX formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 230: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 231: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 232: /* proc_spec: PROCEDURE READ formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 233: /* proc_spec: FUNCTION READ formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 234: /* proc_spec: PROCEDURE INDEX formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 235: /* proc_spec: FUNCTION INDEX formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 236: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 238: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 239: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 240: /* prop_array: '[' prop_param_list ']'  */
       { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 241: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 242: /* prop_index: INDEX constant  */
       { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 243: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 244: /* prop_type_def: ':' type  */
       { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 245: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 246: /* prop_read: READ IDENT  */
       { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 247: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 248: /* prop_write: WRITE IDENT  */
       { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 249: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 250: /* prop_stored: STORED IDENT  */
       { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 251: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 252: /* prop_default: DEFAULT constant  */
       { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 253: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 254: /* prop_default_directive: DEFAULT ';'  */
       { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 256: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 257: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 258: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 259: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 260: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 261: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 262: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 263: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 283: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 284: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 285: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 286: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 288: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 289: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 290: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 291: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 292: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 293: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 294: /* param_decl: ident_list ':' param_type EQ constant  */
                                             { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 295: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 315: /* fptr_type: FUNCTION formal_params ':' type  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 316: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 317: /* fptr_type: PROCEDURE formal_params  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 318: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 319: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 320: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 321: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 322: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 323: /* array_type: packed ARRAY '[' indices ']' OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 324: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 325: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 326: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 327: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 328: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 329: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 330: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 331: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 332: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 333: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 334: /* record_body: record_field_list record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 337: /* record_components: record_component record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 340: /* record_component: record_access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 341: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 345: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 346: /* interface_type: INTERFACE guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 347: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 348: /* interface_type: INTERFACE '(' IDENT ')' END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 349: /* interface_type: INTERFACE END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 350: /* interface_components: interface_component interface_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 354: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 355: /* guid: '[' SCONST ']'  */
       { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 358: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 359: /* class_type: class_or_object '(' ident_list ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 360: /* class_type: class_or_object '(' ident_list ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 361: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 362: /* class_type: class_or_object  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL); }
    break;

  case 363: /* object_body: field_decl_list object_components  */
       { 
         // rare case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
       }
    break;

  case 365: /* object_body: field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 371: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 372: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 373: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 374: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 375: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 376: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 379: /* object_component: class_access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 385: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 386: /* field_decl_part: CLASS VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 387: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 388: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 390: /* object_properties: property_decl_list  */
       { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 391: /* method_decl: proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 392: /* method_decl: proc_spec  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 393: /* method_decl: CLASS proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 394: /* method_decl: CLASS proc_spec  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 396: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 397: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 398: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 401: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 402: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 404: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 405: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 406: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 407: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 408: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 410: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 411: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 412: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 414: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 415: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 416: /* variant: expr_list ':' '(' field_list ')'  */
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


