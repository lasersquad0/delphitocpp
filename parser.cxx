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
  YYSYMBOL_BEGIN = 5,                      /* BEGIN  */
  YYSYMBOL_CASE = 6,                       /* CASE  */
  YYSYMBOL_CDECL = 7,                      /* CDECL  */
  YYSYMBOL_CLASS = 8,                      /* CLASS  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_DEFAULT = 10,                   /* DEFAULT  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_DOTS = 12,                      /* DOTS  */
  YYSYMBOL_DYNAMIC = 13,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_END = 15,                       /* END  */
  YYSYMBOL_EXCEPT = 16,                    /* EXCEPT  */
  YYSYMBOL_EXTERNAL = 17,                  /* EXTERNAL  */
  YYSYMBOL_FIL = 18,                       /* FIL  */
  YYSYMBOL_FINAL = 19,                     /* FINAL  */
  YYSYMBOL_FINALIZATION = 20,              /* FINALIZATION  */
  YYSYMBOL_FINALLY = 21,                   /* FINALLY  */
  YYSYMBOL_FAR = 22,                       /* FAR  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_FORWARD = 24,                   /* FORWARD  */
  YYSYMBOL_FUNCTION = 25,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 26,                      /* GOTO  */
  YYSYMBOL_IDENT = 27,                     /* IDENT  */
  YYSYMBOL_ICONST = 28,                    /* ICONST  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_IMPLEMENTATION = 30,            /* IMPLEMENTATION  */
  YYSYMBOL_INDEX = 31,                     /* INDEX  */
  YYSYMBOL_INHERITED = 32,                 /* INHERITED  */
  YYSYMBOL_INITIALIZATION = 33,            /* INITIALIZATION  */
  YYSYMBOL_INTERFACE = 34,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 35,                     /* LABEL  */
  YYSYMBOL_LOOPHOLE = 36,                  /* LOOPHOLE  */
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
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
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
  YYSYMBOL_UPLUS = 125,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 126,                   /* UMINUS  */
  YYSYMBOL_NOT = 127,                      /* NOT  */
  YYSYMBOL_ADDRESS = 128,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 129,                   /* BINNOT  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_translation = 131,              /* translation  */
  YYSYMBOL_132_1 = 132,                    /* $@1  */
  YYSYMBOL_input_file = 133,               /* input_file  */
  YYSYMBOL_program = 134,                  /* program  */
  YYSYMBOL_progend = 135,                  /* progend  */
  YYSYMBOL_module = 136,                   /* module  */
  YYSYMBOL_unit = 137,                     /* unit  */
  YYSYMBOL_init_finit = 138,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 139, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 140,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 141,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 142,          /* prog_param_list  */
  YYSYMBOL_ident_list = 143,               /* ident_list  */
  YYSYMBOL_block = 144,                    /* block  */
  YYSYMBOL_decl_part_list = 145,           /* decl_part_list  */
  YYSYMBOL_decl_part = 146,                /* decl_part  */
  YYSYMBOL_unit_spec = 147,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 148,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 149,                /* unit_decl  */
  YYSYMBOL_inherited = 150,                /* inherited  */
  YYSYMBOL_try_finally = 151,              /* try_finally  */
  YYSYMBOL_try_except = 152,               /* try_except  */
  YYSYMBOL_except_many = 153,              /* except_many  */
  YYSYMBOL_except = 154,                   /* except  */
  YYSYMBOL_statement = 155,                /* statement  */
  YYSYMBOL_compoundst = 156,               /* compoundst  */
  YYSYMBOL_sequence = 157,                 /* sequence  */
  YYSYMBOL_actual_params = 158,            /* actual_params  */
  YYSYMBOL_write_params = 159,             /* write_params  */
  YYSYMBOL_case_list = 160,                /* case_list  */
  YYSYMBOL_otherwise = 161,                /* otherwise  */
  YYSYMBOL_case_items = 162,               /* case_items  */
  YYSYMBOL_case_item = 163,                /* case_item  */
  YYSYMBOL_case_elem_list = 164,           /* case_elem_list  */
  YYSYMBOL_case_elem = 165,                /* case_elem  */
  YYSYMBOL_expr = 166,                     /* expr  */
  YYSYMBOL_simple_expr = 167,              /* simple_expr  */
  YYSYMBOL_primary = 168,                  /* primary  */
  YYSYMBOL_constant = 169,                 /* constant  */
  YYSYMBOL_set_elem_list = 170,            /* set_elem_list  */
  YYSYMBOL_set_elem = 171,                 /* set_elem  */
  YYSYMBOL_expr_list = 172,                /* expr_list  */
  YYSYMBOL_act_param_list = 173,           /* act_param_list  */
  YYSYMBOL_act_param = 174,                /* act_param  */
  YYSYMBOL_record_constant = 175,          /* record_constant  */
  YYSYMBOL_field_init_list = 176,          /* field_init_list  */
  YYSYMBOL_field_init_item = 177,          /* field_init_item  */
  YYSYMBOL_expr_group = 178,               /* expr_group  */
  YYSYMBOL_write_list = 179,               /* write_list  */
  YYSYMBOL_write_param = 180,              /* write_param  */
  YYSYMBOL_label_decl_part = 181,          /* label_decl_part  */
  YYSYMBOL_label_list = 182,               /* label_list  */
  YYSYMBOL_const = 183,                    /* const  */
  YYSYMBOL_const_def_part = 184,           /* const_def_part  */
  YYSYMBOL_const_def_list = 185,           /* const_def_list  */
  YYSYMBOL_const_def = 186,                /* const_def  */
  YYSYMBOL_type_def_part = 187,            /* type_def_part  */
  YYSYMBOL_type_def_list = 188,            /* type_def_list  */
  YYSYMBOL_type_def = 189,                 /* type_def  */
  YYSYMBOL_var_decl_part = 190,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 191,            /* var_decl_list  */
  YYSYMBOL_var_decl = 192,                 /* var_decl  */
  YYSYMBOL_proc_decl = 193,                /* proc_decl  */
  YYSYMBOL_proc_fwd_decl = 194,            /* proc_fwd_decl  */
  YYSYMBOL_property_decl = 195,            /* property_decl  */
  YYSYMBOL_property_decl_list = 196,       /* property_decl_list  */
  YYSYMBOL_prop_array = 197,               /* prop_array  */
  YYSYMBOL_prop_index = 198,               /* prop_index  */
  YYSYMBOL_prop_type_def = 199,            /* prop_type_def  */
  YYSYMBOL_prop_read = 200,                /* prop_read  */
  YYSYMBOL_prop_write = 201,               /* prop_write  */
  YYSYMBOL_prop_stored = 202,              /* prop_stored  */
  YYSYMBOL_prop_default = 203,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 204,   /* prop_default_directive  */
  YYSYMBOL_proc_spec = 205,                /* proc_spec  */
  YYSYMBOL_proc_def = 206,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 207,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 208,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 209,                /* qualifier  */
  YYSYMBOL_qualifiers = 210,               /* qualifiers  */
  YYSYMBOL_formal_params = 211,            /* formal_params  */
  YYSYMBOL_formal_param_list = 212,        /* formal_param_list  */
  YYSYMBOL_formal_param = 213,             /* formal_param  */
  YYSYMBOL_param_decl = 214,               /* param_decl  */
  YYSYMBOL_param_type = 215,               /* param_type  */
  YYSYMBOL_type = 216,                     /* type  */
  YYSYMBOL_const_type = 217,               /* const_type  */
  YYSYMBOL_fptr_type = 218,                /* fptr_type  */
  YYSYMBOL_string_type = 219,              /* string_type  */
  YYSYMBOL_simple_type = 220,              /* simple_type  */
  YYSYMBOL_array_type = 221,               /* array_type  */
  YYSYMBOL_const_array_type = 222,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 223,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 224,                /* enum_type  */
  YYSYMBOL_range_type = 225,               /* range_type  */
  YYSYMBOL_pointer_type = 226,             /* pointer_type  */
  YYSYMBOL_set_type = 227,                 /* set_type  */
  YYSYMBOL_const_set_type = 228,           /* const_set_type  */
  YYSYMBOL_record_type = 229,              /* record_type  */
  YYSYMBOL_record_body = 230,              /* record_body  */
  YYSYMBOL_record_components = 231,        /* record_components  */
  YYSYMBOL_record_component = 232,         /* record_component  */
  YYSYMBOL_record_field_list = 233,        /* record_field_list  */
  YYSYMBOL_interface_type = 234,           /* interface_type  */
  YYSYMBOL_interface_components = 235,     /* interface_components  */
  YYSYMBOL_interface_component = 236,      /* interface_component  */
  YYSYMBOL_guid = 237,                     /* guid  */
  YYSYMBOL_class_or_object = 238,          /* class_or_object  */
  YYSYMBOL_class_type = 239,               /* class_type  */
  YYSYMBOL_object_body = 240,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 241,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 242,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 243,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 244,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 245,        /* object_components  */
  YYSYMBOL_object_component = 246,         /* object_component  */
  YYSYMBOL_field_decl_part = 247,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 248,          /* field_decl_list  */
  YYSYMBOL_object_methods = 249,           /* object_methods  */
  YYSYMBOL_object_properties = 250,        /* object_properties  */
  YYSYMBOL_method_decl = 251,              /* method_decl  */
  YYSYMBOL_method_decl_list = 252,         /* method_decl_list  */
  YYSYMBOL_file_type = 253,                /* file_type  */
  YYSYMBOL_packed = 254,                   /* packed  */
  YYSYMBOL_conformant_indices = 255,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 256,         /* conformant_index  */
  YYSYMBOL_indices = 257,                  /* indices  */
  YYSYMBOL_index_spec = 258,               /* index_spec  */
  YYSYMBOL_field_list = 259,               /* field_list  */
  YYSYMBOL_fixed_part = 260,               /* fixed_part  */
  YYSYMBOL_variant_part = 261,             /* variant_part  */
  YYSYMBOL_selector = 262,                 /* selector  */
  YYSYMBOL_variant_list = 263,             /* variant_list  */
  YYSYMBOL_variant = 264                   /* variant  */
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
#define YYLAST   1625

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  383
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  727

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   374


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
     125,   126,   127,   128,   129
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   371,   371,   371,   396,   396,   396,   398,   399,   402,
     402,   404,   405,   411,   413,   415,   417,   419,   422,   424,
     427,   428,   430,   430,   432,   434,   435,   437,   438,   440,
     443,   444,   446,   446,   446,   446,   447,   447,   447,   449,
     451,   455,   456,   458,   458,   458,   458,   459,   459,   459,
     488,   489,   491,   495,   498,   500,   503,   504,   506,   507,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   526,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     543,   545,   545,   547,   547,   549,   550,   552,   553,   565,
     565,   567,   568,   569,   571,   573,   574,   576,   577,   601,
     602,   603,   604,   605,   606,   607,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   620,   621,   622,   623,   624,
     625,   626,   628,   629,   630,   631,   632,   633,   634,   636,
     637,   639,   641,   643,   645,   646,   648,   649,   650,   651,
     652,   653,   654,   656,   657,   658,   659,   660,   661,   663,
     664,   665,   667,   668,   670,   670,   672,   673,   675,   675,
     678,   682,   683,   685,   688,   691,   691,   693,   694,   695,
     737,   740,   741,   742,   743,   745,   745,   747,   750,   751,
     753,   754,   756,   759,   760,   762,   764,   767,   781,   783,
     789,   791,   795,   797,   801,   804,   805,   807,   808,   810,
     811,   813,   814,   816,   817,   819,   820,   822,   823,   825,
     826,   828,   829,   833,   835,   839,   841,   843,   845,   847,
     849,   863,   863,   863,   863,   863,   863,   863,   863,   863,
     863,   865,   865,   865,   865,   865,   865,   865,   867,   867,
     869,   870,   873,   874,   876,   877,   879,   880,   881,   882,
     883,   885,   886,   887,   889,   889,   895,   895,   895,   895,
     895,   895,   895,   896,   896,   896,   896,   896,   898,   898,
     898,   898,   898,   900,   902,   904,   906,   909,   911,   912,
     913,   915,   918,   921,   923,   926,   928,   931,   933,   935,
     945,   947,   950,   957,   958,   960,   966,   968,   969,   971,
     973,   974,   975,   977,   981,   983,   985,   987,   992,  1001,
    1003,  1004,  1006,  1007,  1011,  1011,  1013,  1015,  1017,  1019,
    1025,  1034,  1035,  1038,  1038,  1040,  1040,  1040,  1042,  1043,
    1045,  1046,  1047,  1049,  1058,  1060,  1061,  1063,  1064,  1065,
    1066,  1067,  1070,  1072,  1075,  1076,  1078,  1081,  1084,  1086,
    1088,  1090,  1093,  1094,  1098,  1100,  1100,  1102,  1103,  1105,
    1108,  1109,  1112,  1113,  1116,  1118,  1121,  1123,  1126,  1127,
    1130,  1131,  1132,  1134
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
  "BEGIN", "CASE", "CDECL", "CLASS", "CONST", "DEFAULT", "DO", "DOTS",
  "DYNAMIC", "ELSE", "END", "EXCEPT", "EXTERNAL", "FIL", "FINAL",
  "FINALIZATION", "FINALLY", "FAR", "FOR", "FORWARD", "FUNCTION", "GOTO",
  "IDENT", "ICONST", "IF", "IMPLEMENTATION", "INDEX", "INHERITED",
  "INITIALIZATION", "INTERFACE", "LABEL", "LOOPHOLE", "OBJECT", "OF", "ON",
  "ORIGIN", "OTHERWISE", "OVERLOAD", "OVERRIDE", "OUT", "PACKED", "PASCAL",
  "PROCEDURE", "PROGRAM", "PROPERTY", "PRIVATE", "PROTECTED", "PUBLIC",
  "PUBLISHED", "RAISE", "RCONST", "READ", "RECORD", "REGISTER",
  "REINTRODUCE", "REPEAT", "RESOURCESTRING", "RETURN", "SAFECALL", "SET",
  "SCONST", "STATIC", "STDCALL", "STORED", "STRICT", "STRING", "THEN",
  "TO", "TRY", "TYPE", "UNTIL", "UNIT", "UNIT_END", "VAR", "VARARGS",
  "VIRTUAL", "WHILE", "WINAPI", "WITH", "WRITE", "'.'", "','", "':'",
  "';'", "'('", "')'", "'['", "']'", "'^'", "'@'", "SCOPE", "LET",
  "LETADD", "LETSUB", "LETDIV", "LETMUL", "LETAND", "LETOR", "LETSHL",
  "LETSHR", "EQ", "NE", "LT", "LE", "GT", "GE", "IN", "PLUS", "MINUS",
  "OR", "XOR", "BINOR", "MOD", "DIV", "DIVR", "MUL", "AND", "SHR", "SHL",
  "BINAND", "UPLUS", "UMINUS", "NOT", "ADDRESS", "BINNOT", "$accept",
  "translation", "$@1", "input_file", "program", "progend", "module",
  "unit", "init_finit", "var_const_decl_part_list", "var_const_decl_part",
  "unit_def_list", "prog_param_list", "ident_list", "block",
  "decl_part_list", "decl_part", "unit_spec", "unit_decl_list",
  "unit_decl", "inherited", "try_finally", "try_except", "except_many",
  "except", "statement", "compoundst", "sequence", "actual_params",
  "write_params", "case_list", "otherwise", "case_items", "case_item",
  "case_elem_list", "case_elem", "expr", "simple_expr", "primary",
  "constant", "set_elem_list", "set_elem", "expr_list", "act_param_list",
  "act_param", "record_constant", "field_init_list", "field_init_item",
  "expr_group", "write_list", "write_param", "label_decl_part",
  "label_list", "const", "const_def_part", "const_def_list", "const_def",
  "type_def_part", "type_def_list", "type_def", "var_decl_part",
  "var_decl_list", "var_decl", "proc_decl", "proc_fwd_decl",
  "property_decl", "property_decl_list", "prop_array", "prop_index",
  "prop_type_def", "prop_read", "prop_write", "prop_stored",
  "prop_default", "prop_default_directive", "proc_spec", "proc_def",
  "fun_qualifier", "meth_qualifier", "qualifier", "qualifiers",
  "formal_params", "formal_param_list", "formal_param", "param_decl",
  "param_type", "type", "const_type", "fptr_type", "string_type",
  "simple_type", "array_type", "const_array_type", "conformant_array_type",
  "enum_type", "range_type", "pointer_type", "set_type", "const_set_type",
  "record_type", "record_body", "record_components", "record_component",
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

#define YYPACT_NINF (-608)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-289)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -608,    65,  1295,  -608,    19,  -608,    50,   409,   156,    55,
     115,  -608,   117,   120,   126,  -608,  -608,  -608,  -608,    18,
     107,  1303,  -608,  -608,   132,  -608,  -608,  -608,  -608,  -608,
     137,   153,   -14,   162,   409,   175,   177,  -608,     8,   409,
    -608,  -608,  -608,  -608,  -608,  -608,    80,   143,   164,    90,
     142,   149,  -608,   170,   179,   187,   178,  -608,   186,  -608,
     934,  -608,  -608,    71,  -608,   190,   197,   202,   248,   116,
     203,   200,   246,   200,   240,  1303,  -608,  -608,   156,   156,
    -608,   304,   249,   126,   250,   633,   117,   302,   126,   633,
     126,   658,   312,   198,   253,   254,   658,   316,   255,   658,
    -608,   257,   934,  -608,  -608,   934,   658,   658,   258,   959,
     658,  -608,  -608,  -608,   263,  -608,   339,   710,  -608,  -608,
     129,   658,   132,   331,   338,   200,   126,   341,   126,   342,
     126,   279,  -608,   280,   283,  -608,   633,   287,   292,   347,
      58,  -608,  -608,  -608,   200,  1159,   285,  1303,  -608,   200,
     379,  -608,    49,  -608,  -608,   200,   291,  1024,   633,   154,
     658,   658,   154,   658,   658,   770,  -608,   852,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  1108,
    -608,  -608,    82,  -608,   409,  -608,  -608,  -608,  -608,   988,
     288,  -608,  -608,   934,   934,  1277,   301,   633,  1501,   658,
    -608,  -608,   317,    46,   730,  1337,   380,   658,  -608,   306,
     314,   315,   320,   790,   319,   326,   934,  -608,   387,   658,
     658,  -608,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   335,   311,  -608,  -608,  -608,  -608,  -608,   104,  1501,
    -608,   200,   200,   340,  -608,   200,  -608,   200,  -608,   193,
    -608,   116,   334,   633,  1227,   409,   343,   344,   345,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   349,   107,  -608,  -608,
    -608,   351,  -608,   355,    21,   354,   418,  -608,   421,   384,
     236,   412,   658,    83,   361,  -608,   139,  -608,   139,  -608,
     139,  -608,  -608,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,    45,  -608,   426,  -608,  -608,  -608,  -608,
     184,   126,   126,  -608,  -608,   371,  -608,   417,  -608,  -608,
     453,  -608,  -608,   126,  -608,  1138,  -608,  1138,  -608,  -608,
      85,  -608,   381,   435,   588,   436,    24,   658,   658,  -608,
    -608,   934,   658,   391,   385,   658,   439,   934,   934,   658,
     934,  1375,   390,   393,   658,  -608,  -608,   454,   658,  -608,
     658,  -608,  -608,  1501,   392,   398,   394,  1501,  1501,  1501,
    1501,  1501,  1501,  1501,  1501,  1501,   658,   397,   456,   408,
     410,   633,   413,  -608,  -608,   396,  -608,  -608,   492,  -608,
    1159,   411,   420,  -608,  -608,  1303,  -608,  1227,  -608,  -608,
    -608,   633,  -608,   414,   416,    77,   487,   236,  -608,  -608,
     472,  1481,  -608,  1501,   859,   859,   859,   859,   859,   859,
     859,   278,   278,   278,   278,   278,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  1501,  1501,  1501,  1501,  1501,  1501,
    1501,  1501,  1501,   126,  -608,  -608,   419,  -608,  -608,  -608,
     422,   126,  -608,  -608,  -608,  -608,  -608,  -608,   294,   633,
    -608,   461,   126,  -608,  -608,   498,  -608,   643,   643,  -608,
     126,  -608,  -608,  -608,   510,   633,  1303,  -608,   503,    17,
     437,   441,   440,   810,  1298,   509,   445,   658,  -608,  1501,
     504,   227,   442,   521,  -608,  -608,  -608,   658,  -608,   658,
    1501,   306,  -608,  1501,  -608,  -608,   658,  -608,  1501,   294,
     129,   633,  1303,   452,   633,   195,   450,   457,   460,  1227,
     462,  -608,   511,    30,  -608,  -608,  -608,  -608,  -608,  -608,
     515,   464,  1249,  -608,   923,  -608,   466,   467,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,   703,  -608,  -608,    63,  -608,
    -608,  -608,   934,   658,   934,   658,   658,   658,   934,  -608,
    1448,   465,   934,  -608,   439,  -608,  1413,  -608,  -608,   469,
    -608,   476,   477,  1303,  -608,   454,  -608,   527,  -608,  1227,
    -608,   529,  -608,   236,   464,   633,   536,  -608,   553,   658,
     531,   294,     4,  -608,   538,   493,    72,   562,   494,  -608,
    -608,  -608,  -608,  1501,   750,  -608,  -608,    10,   567,  -608,
     658,   545,  1303,  -608,   497,   574,   495,   500,  -608,   575,
     499,  -608,   195,   533,  -608,  1501,   633,  -608,   633,   658,
    -608,   107,    72,  -608,  -608,   507,  -608,   934,   582,  -608,
    1501,   129,   512,  -608,   571,   561,   527,  -608,  -608,  -608,
     577,   518,  -608,  -608,   519,  -608,   517,   520,  -608,  -608,
    -608,   107,  -608,  -608,   523,   193,  -608,  -608,   584,   544,
     525,   658,   596,  -608,   633,  -608,  -608,  -608,   590,   611,
     126,  -608,    72,  -608,  -608,   195,   535,   534,   107,  -608,
     615,  -608,   539,   541,  -608,  -608,  -608
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    30,     1,     0,   185,     0,    41,     0,     0,
       0,   186,   193,     0,   197,     3,     4,     5,     6,     0,
      11,    30,    38,    32,   188,    33,    34,    35,    37,    36,
       0,     0,   252,     0,    41,     0,     0,    49,     0,    41,
      43,    44,    45,    46,    48,    47,   183,   181,     0,   252,
      25,     0,   192,     0,     0,    28,     0,   196,     0,     7,
      60,    29,    31,     0,   187,     0,     0,     0,     0,     0,
       0,   252,     0,   252,     0,    30,    40,    42,     0,     0,
     180,     0,     0,     0,     0,   365,   193,     0,     0,   365,
     197,     0,     0,     0,   158,   154,     0,    50,     0,     0,
     155,    93,    60,    82,   156,    60,     0,     0,    95,     0,
     159,    89,    87,    88,    91,    86,     0,    81,   146,   153,
     365,     0,   188,     0,     0,   252,     0,     0,     0,     0,
       0,   263,   260,     0,   254,   259,   365,     0,     0,     0,
       0,    24,   184,   182,   252,    30,     0,    30,   325,   252,
     158,   154,   322,   324,   366,   252,   290,     0,   365,     0,
       0,     0,     0,     0,     0,     0,   109,   139,   195,   277,
     276,   266,   267,   274,   275,   273,   271,   268,   270,     0,
     269,   272,     0,   194,    41,    27,   199,   198,   158,     0,
       0,    71,    70,    60,    60,     0,    51,   365,    80,     0,
      79,    94,     0,     0,     0,   164,     0,     0,    78,   158,
       0,     0,   171,   162,     0,   160,    60,    90,     0,   169,
       0,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,   282,   278,   279,   281,   280,     0,   190,
     189,   252,   252,     0,   257,   252,   258,   252,   256,   365,
     253,     0,     0,   365,   223,    41,     0,     0,     0,   242,
     235,   244,   240,   247,   231,   232,   246,   234,   233,   241,
     237,   245,   236,   239,   243,   238,     0,     0,   248,   249,
     250,     0,    26,     0,     9,     0,     0,   317,     0,     0,
       0,   285,     0,   158,     0,   297,   144,   140,   139,   141,
     145,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   329,     0,   333,   336,   334,   337,
       0,     0,     0,   350,   351,     0,   358,   205,   357,   359,
       0,   335,   340,   345,   331,   344,   347,   332,   348,   349,
     362,   356,     0,     0,     0,     0,     0,   101,     0,    85,
      84,    60,   169,     0,     0,     0,    58,    60,    60,     0,
      60,   177,     0,   175,     0,   147,   170,     0,     0,   157,
     159,    92,   149,   168,     0,   166,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,   365,     0,   200,   290,   261,   264,   265,     0,   255,
      30,     0,     0,    15,    16,    30,   225,   202,     8,    10,
      12,   365,   289,     0,     0,     0,     0,   319,   320,   321,
       0,     0,   295,   296,   136,   137,   133,   134,   132,   135,
     138,   110,   111,   129,   131,   130,   112,   114,   115,   113,
     125,   128,   127,   126,   116,   117,   118,   119,   120,   123,
     124,   121,   122,     0,   360,   361,   207,   341,   342,   352,
       0,   354,   206,   326,   346,   343,   330,   363,     0,   365,
     301,     0,     0,   311,   312,     0,   303,   306,   304,   338,
     307,   376,   310,   313,   375,   365,    30,    39,     0,    97,
     102,     0,   105,   107,     0,    73,     0,     0,   174,    77,
       0,     0,    56,     0,    76,   165,    83,     0,    96,     0,
     173,     0,   172,   163,   161,   148,   169,   151,   191,     0,
     365,   365,    30,     0,   365,     0,     0,     0,     0,   224,
       0,   251,   283,   322,   323,   314,   318,   286,   287,   353,
       0,   211,     0,   355,     0,   372,     0,   370,   364,   339,
     309,   300,   305,   302,   308,   365,   374,   298,     0,    72,
     100,    99,    60,   101,    60,     0,     0,     0,    60,    52,
       0,     0,    60,    54,    58,    53,   178,   176,   167,     0,
     299,     0,     0,    30,   201,     0,   262,     0,   226,   203,
     227,     0,   316,     0,   211,   365,   209,   328,     0,     0,
       0,     0,   158,   379,     0,     0,    20,     0,     0,    98,
     103,   104,   106,   108,     0,    74,   152,     0,     0,    57,
       0,     0,    30,   229,     0,     0,     0,   367,   284,     0,
       0,   212,     0,   213,   327,   373,   365,   371,   365,     0,
      13,     0,    20,    22,    23,     0,    14,    60,     0,    55,
     179,   365,     0,   228,     0,     0,     0,   315,   208,   210,
       0,   215,   291,   378,     0,   377,   380,     0,    21,    17,
      75,     0,   292,   230,     0,   365,   368,   214,     0,   217,
       0,   381,    18,    59,   365,   293,   294,   216,     0,   219,
       0,   382,    20,   369,   218,     0,     0,     0,     0,   220,
     221,   383,     0,     0,   204,    19,   222
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -607,
    -608,   131,  -608,     0,   -96,    15,  -608,     7,     9,  -608,
    -608,  -608,  -608,    32,  -608,  -175,   -18,   -89,  -608,  -608,
    -608,  -608,    56,  -608,    47,  -608,   -12,    76,   -45,  -515,
     243,  -608,  -100,  -348,  -608,  -608,   259,  -608,  -608,   113,
    -608,    13,   191,  -608,    -7,   522,  -608,    22,   559,  -608,
      -6,   558,    39,  -608,    97,  -608,   303,  -608,  -608,    40,
    -608,  -608,  -608,  -608,  -608,     1,  -608,  -608,  -608,  -417,
    -397,   389,   402,  -608,   127,  -608,   -86,  -506,  -608,  -109,
    -115,  -608,  -608,   -32,  -608,  -608,  -608,  -608,  -608,  -108,
    -608,  -226,  -608,   165,  -608,  -415,  -608,   111,  -608,  -608,
     109,  -343,  -608,  -608,  -608,  -281,  -608,  -608,  -120,  -251,
    -286,  -608,   321,  -608,  -114,    -4,  -608,  -514,  -608,  -483,
    -608,  -608,  -608,   -27,  -608
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    15,    16,   430,    17,    18,   627,   661,
     662,   140,    84,    56,    19,   277,    21,    22,    38,    39,
     111,   112,   113,   521,   522,   114,   115,   116,   200,   208,
     508,   582,   509,   510,   511,   512,   165,   166,   167,   118,
     214,   215,   210,   394,   395,   119,   211,   212,   201,   382,
     383,    23,    48,    24,    25,    64,    65,    26,    52,    53,
      27,    57,   345,   132,    28,   347,   348,   561,   653,   616,
     681,   699,   709,   716,   724,   349,    29,   278,   279,   280,
     281,    70,   133,   134,   135,   415,   168,   232,   169,   170,
     171,   172,   235,   417,   173,   174,   175,   176,   236,   177,
     495,   496,   497,   498,   178,   436,   437,   290,   179,   180,
     350,   351,   352,   500,   353,   354,   355,   356,   501,   358,
     359,   360,   361,   181,   182,   646,   647,   566,   567,   503,
     504,   576,   624,   685,   686
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    43,    61,   186,   439,   234,   238,   206,    45,   570,
     551,   233,   237,   202,    37,   117,   203,    20,   369,   370,
      40,   499,   556,   548,   516,   599,    60,    41,    43,    42,
     606,   580,    41,    43,   600,    45,    62,   231,    75,   438,
      45,    37,  -288,    72,    30,   612,    37,    40,    77,   276,
     252,   283,    40,    58,   506,   688,    42,   117,   581,   357,
     117,    42,   376,    60,   287,     3,    31,   377,    60,   131,
      33,    68,   295,   256,   485,    69,   486,    32,   625,   189,
     414,     5,    49,   146,   195,    76,   362,   198,   185,   286,
     141,   658,    35,   435,   204,   205,   626,   205,   213,   374,
     363,   507,    33,    59,    44,   718,   429,   657,   407,   239,
      33,   373,    60,   502,   296,   298,   298,   300,   298,   298,
     396,   289,   257,   473,    35,   126,   131,   391,   131,    58,
     131,    44,    35,    11,   416,   418,    44,   679,   288,   364,
     289,   127,    50,    55,    51,   205,   365,    54,   117,   117,
      14,   439,   548,    55,   499,   499,   231,   294,   120,    63,
     128,   364,   284,   129,    66,   692,    78,   421,   408,    88,
     384,   117,   343,   -28,   154,    81,   121,    41,    43,    69,
      67,   188,   151,    46,    47,    45,   438,   205,   598,    71,
      98,    37,   551,   366,   130,   381,   515,    40,   649,   156,
     719,   344,    73,   524,    74,   526,    42,   393,   205,   100,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   104,
     231,   479,   188,   151,   218,   191,   192,   717,   219,    79,
     220,    83,   221,   484,   477,   478,   297,   299,   154,   301,
     302,   592,   593,   109,   435,   110,   502,   502,    41,    43,
     100,   131,    80,   244,    85,   246,    45,   248,    86,    61,
     104,    33,    37,   414,   422,    89,    61,    87,    40,   142,
     143,   572,   573,    88,    90,   125,   346,    42,   122,   525,
     441,    44,   123,    35,   605,   335,   110,   124,   523,    69,
     136,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   150,   151,    76,   547,   543,   117,   439,   139,   550,
      98,   144,   117,   117,   475,   117,   184,   145,   147,   190,
     193,   194,   480,   196,   197,   552,   199,   207,   343,   100,
     343,   216,    44,   559,   217,   513,   514,   493,   241,   104,
     393,   563,   438,   519,   414,   242,   249,   205,   245,   247,
     250,   251,   530,   565,   253,   282,   533,   344,   213,   344,
     254,   255,   292,   109,   368,   110,   494,   346,   159,  -288,
     372,   380,   375,   384,   538,   316,   317,   318,   319,   320,
     321,   322,   323,   568,   385,   386,   160,   161,   387,   631,
    -288,   389,   390,   635,   392,   162,   406,  -288,     5,   577,
     286,   163,   420,   164,   565,   234,   238,   411,   423,   424,
     474,   233,   237,   425,    33,  -288,   475,   426,    82,   427,
     428,   431,   357,    34,     8,   432,   602,  -288,   433,   434,
     440,   442,   346,   476,   346,   601,    35,   346,   604,   481,
     137,   346,   138,  -288,   286,  -288,   335,  -288,   483,  -288,
      11,  -288,   488,   489,   505,   518,   564,   517,   520,   529,
     528,   531,   535,    12,   536,    36,   537,    14,   539,   623,
     493,   493,   690,   629,   540,   541,   546,   507,   542,   549,
     544,   545,   555,   638,   553,   590,   565,   644,   554,   557,
     560,   569,   562,   571,   243,   596,   575,   381,   579,   494,
     494,   141,   668,   588,   393,   583,   585,   564,   584,   651,
     594,   591,   474,   258,   346,   589,   595,   117,   285,   117,
     603,   607,   614,   117,   291,   608,   672,   117,   609,   611,
     610,   615,   637,   621,   645,   343,   234,   238,   620,   684,
     628,   641,   233,   237,   642,   643,   648,   652,   654,   656,
     682,   513,   683,   513,   633,   634,   659,   665,   660,   666,
     705,   418,   669,   671,   344,   673,   674,   675,   676,   680,
     677,   678,   689,   691,   346,   346,   435,     5,   694,   695,
     693,   684,   698,   490,   697,   701,   700,   655,   702,   564,
     704,   707,   708,    33,   710,    55,   712,   714,   713,   663,
     664,   715,   117,   720,   721,   723,   639,   725,   670,   726,
     409,   410,   632,   534,   412,    35,   413,   578,   336,   630,
     338,   148,   597,   687,   240,   183,   532,   205,   187,    11,
     482,   435,     5,   419,   650,   663,   664,   491,   149,   346,
     150,   151,    12,   706,   613,   574,   492,   152,    33,    98,
     153,   618,   696,   703,   711,     0,     0,     0,   154,     0,
     155,   487,     0,     0,     0,   188,   151,     0,   100,   205,
      35,     0,     0,   336,    98,   338,     0,     0,   104,     0,
     722,     0,     0,   156,    11,   663,   664,     0,     0,     0,
     346,   148,   491,   100,     0,     0,     0,    12,     0,     0,
       0,   492,   157,   104,   110,     0,   158,   159,   149,     0,
     622,   151,     0,     0,     0,     0,     0,   152,     0,    98,
     153,   378,     0,     0,     0,   160,   161,   109,   154,   110,
     155,     0,   159,     0,   162,     0,     0,     0,   100,     0,
     163,   667,   164,     0,     0,     0,     0,     0,   104,     0,
     160,   161,     0,   156,     0,     0,     0,     0,     0,   162,
       0,     0,   303,     0,     0,   163,     0,   164,     0,     0,
       0,     0,   157,     0,   110,   218,   158,   159,     0,   219,
       0,   220,   388,   221,     0,     0,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   160,   161,     0,     0,     0,
       0,     0,   586,     0,   162,     0,     0,     0,     0,     0,
     163,     0,   164,     0,     0,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   619,     0,   218,     0,    60,
      91,   219,     0,   220,     0,   221,     0,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    92,     0,     0,
      93,    94,    95,    96,     0,     0,    97,     0,     0,     0,
      98,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,   209,   151,    99,   100,
     101,     0,     0,     0,   102,    98,   103,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,   100,   106,     0,   107,   108,     0,
       0,     0,     0,   109,   104,   110,   367,     0,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   109,     0,
     110,   293,   151,   159,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,   161,     0,     0,     0,     0,     0,     0,   100,
     162,     0,     0,     0,     0,     0,   163,     0,   164,   104,
       0,     0,     0,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   109,     0,   110,   333,     5,   159,     0,
       0,     0,     0,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,    55,   160,   161,     0,     0,
       0,     0,     0,     0,     0,   162,   333,     5,     0,     0,
       0,   163,     0,   164,     0,    35,     0,   335,   336,   337,
     338,   339,   259,    33,     0,     0,   260,     4,     5,    11,
       0,     0,   261,     0,     0,     0,   262,   340,   263,     0,
       0,     0,    12,   264,     6,    35,   341,   335,   336,   337,
     338,   339,     0,    34,     8,     0,     0,   342,     0,    11,
       0,   265,   266,     0,     0,   267,     9,   340,     0,     0,
       0,     0,    12,     0,     0,     0,   341,   268,   269,     0,
      11,     0,   270,     0,     0,   271,   272,     0,     0,     0,
     259,     0,     0,    12,   260,    36,     0,    14,   273,   274,
     261,   275,     0,     0,   262,     0,   263,     0,     0,     0,
       0,   264,     0,     0,     0,     0,     0,   333,     5,     0,
       0,     0,     0,     0,   617,     0,     0,     0,     0,   265,
     266,     0,     0,   267,    33,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   269,     0,     0,     0,
     270,     0,     0,   271,   272,     0,    35,     0,   335,   336,
     337,   338,   339,     4,     5,     0,   273,   274,     0,   275,
      11,     4,     5,     0,     0,     0,     0,     0,   340,     0,
       6,     0,     0,    12,     0,     0,     0,   341,     6,     7,
       8,     0,     0,     0,     0,     0,     0,    34,     8,     0,
       0,     0,     9,    10,     0,     0,     0,     0,   371,     0,
       9,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,    12,
     587,    13,     0,    14,     0,     0,     0,    12,     0,    36,
       0,    14,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   379,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   527,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     640,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   636,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323
};

static const yytype_int16 yycheck[] =
{
       7,     7,    20,    89,   290,   120,   120,   107,     7,   492,
     427,   120,   120,   102,     7,    60,   105,     2,   193,   194,
       7,   364,   437,   420,   372,   539,     5,    34,    34,     7,
     545,    14,    39,    39,   540,    34,    21,    27,    30,   290,
      39,    34,    38,    34,    25,    15,    39,    34,    39,   145,
     136,   147,    39,    14,    30,   662,    34,   102,    41,   179,
     105,    39,    16,     5,    15,     0,    47,    21,     5,    69,
      25,    85,   158,    15,   355,    89,   357,    27,    15,    91,
      70,     9,    27,    83,    96,    77,     4,    99,    88,    85,
      75,    87,    47,     8,   106,   107,    33,   109,   110,   199,
      18,    77,    25,    85,     7,   712,    85,   621,     4,   121,
      25,   197,     5,   364,   159,   160,   161,   162,   163,   164,
     220,    91,   140,    78,    47,     9,   126,   216,   128,    90,
     130,    34,    47,    61,   249,   249,    39,   652,    89,    57,
      91,    25,    27,    27,    27,   157,    64,    27,   193,   194,
      78,   437,   549,    27,   497,   498,    27,   157,    87,    27,
      44,    57,   147,    47,    27,   671,    86,   253,    64,    86,
      87,   216,   179,    90,    45,    85,   105,   184,   184,    89,
      27,    27,    28,    27,    28,   184,   437,   199,   536,    27,
      36,   184,   609,   184,    78,   207,   371,   184,   613,    70,
     715,   179,    27,   378,    27,   380,   184,   219,   220,    55,
     222,   223,   224,   225,   226,   227,   228,   229,   230,    65,
      27,   341,    27,    28,    85,    27,    28,   710,    89,    86,
      91,    89,    93,   353,    50,    51,   160,   161,    45,   163,
     164,    14,    15,    89,     8,    91,   497,   498,   255,   255,
      55,   251,    88,   126,   105,   128,   255,   130,    88,   277,
      65,    25,   255,    70,   255,    87,   284,    88,   255,    78,
      79,   497,   498,    86,    88,    27,   179,   255,    88,   379,
     292,   184,    85,    47,    89,    49,    91,    85,   377,    89,
      87,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    27,    28,    77,   420,   411,   371,   613,    88,   425,
      36,    27,   377,   378,   333,   380,    34,    88,    88,    27,
      87,    87,   342,    27,    89,   431,    89,    89,   355,    55,
     357,    88,   255,   473,    15,   367,   368,   364,    27,    65,
     372,   481,   613,   375,    70,    27,    87,   379,    27,    27,
      90,    88,   384,   488,    87,    90,   388,   355,   390,   357,
      88,    34,    91,    89,    96,    91,   364,   290,    94,    10,
      89,    11,    75,    87,   406,   117,   118,   119,   120,   121,
     122,   123,   124,   489,    90,    90,   112,   113,    88,   584,
      31,    92,    86,   588,    27,   121,   105,    38,     9,   505,
      85,   127,    88,   129,   539,   540,   540,    87,    85,    85,
     333,   540,   540,    88,    25,    56,   435,    88,    49,    88,
      85,    87,   562,    34,    35,    27,   542,    68,    27,    65,
      38,    90,   355,    27,   357,   541,    47,   360,   544,    88,
      71,   364,    73,    84,    85,    86,    49,    88,    15,    90,
      61,    92,    91,    38,    38,    90,   488,    86,    39,    86,
      90,    27,    90,    74,    86,    76,    92,    78,    91,   575,
     497,   498,   667,   582,    38,    87,     4,    77,    88,    88,
      87,   105,    15,   592,    90,   517,   621,   603,    92,    37,
      91,    50,    90,    15,   125,   527,     6,   529,    15,   497,
     498,   506,   637,    14,   536,    88,    86,   539,    87,   615,
      88,    27,   435,   144,   437,    90,    15,   582,   149,   584,
      88,    91,    27,   588,   155,    88,   642,   592,    88,    38,
      88,    87,    87,    86,    27,   562,   671,   671,    92,   659,
     578,    92,   671,   671,    88,    88,    37,    31,    15,    38,
     656,   583,   658,   585,   586,   587,    38,    15,    85,    85,
     695,   695,    15,    38,   562,    88,    12,    92,    88,    56,
      15,    92,    85,    11,   497,   498,     8,     9,    27,    38,
      88,   701,    84,    15,    27,    88,    87,   619,    88,   621,
      87,    27,    68,    25,    89,    27,    20,    27,   704,   626,
     626,    10,   667,    88,    90,    10,   594,    88,   640,    88,
     241,   242,   585,   390,   245,    47,   247,   506,    50,   583,
      52,     8,   529,   661,   122,    86,   387,   659,    90,    61,
     347,     8,     9,   251,   614,   662,   662,    69,    25,   562,
      27,    28,    74,   695,   553,   500,    78,    34,    25,    36,
      37,   562,   676,   691,   701,    -1,    -1,    -1,    45,    -1,
      47,   360,    -1,    -1,    -1,    27,    28,    -1,    55,   701,
      47,    -1,    -1,    50,    36,    52,    -1,    -1,    65,    -1,
     718,    -1,    -1,    70,    61,   712,   712,    -1,    -1,    -1,
     613,     8,    69,    55,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    89,    65,    91,    -1,    93,    94,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    11,    -1,    -1,    -1,   112,   113,    89,    45,    91,
      47,    -1,    94,    -1,   121,    -1,    -1,    -1,    55,    -1,
     127,    11,   129,    -1,    -1,    -1,    -1,    -1,    65,    -1,
     112,   113,    -1,    70,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    12,    -1,    -1,   127,    -1,   129,    -1,    -1,
      -1,    -1,    89,    -1,    91,    85,    93,    94,    -1,    89,
      -1,    91,    12,    93,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   112,   113,    -1,    -1,    -1,
      -1,    -1,    12,    -1,   121,    -1,    -1,    -1,    -1,    -1,
     127,    -1,   129,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    12,    -1,    85,    -1,     5,
       6,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    23,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    27,    28,    54,    55,
      56,    -1,    -1,    -1,    60,    36,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    81,    -1,    83,    84,    -1,
      -1,    -1,    -1,    89,    65,    91,    38,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    89,    -1,
      91,    27,    28,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    55,
     121,    -1,    -1,    -1,    -1,    -1,   127,    -1,   129,    65,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    89,    -1,    91,     8,     9,    94,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,     8,     9,    -1,    -1,
      -1,   127,    -1,   129,    -1,    47,    -1,    49,    50,    51,
      52,    53,     3,    25,    -1,    -1,     7,     8,     9,    61,
      -1,    -1,    13,    -1,    -1,    -1,    17,    69,    19,    -1,
      -1,    -1,    74,    24,    25,    47,    78,    49,    50,    51,
      52,    53,    -1,    34,    35,    -1,    -1,    89,    -1,    61,
      -1,    42,    43,    -1,    -1,    46,    47,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    58,    59,    -1,
      61,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,
       3,    -1,    -1,    74,     7,    76,    -1,    78,    79,    80,
      13,    82,    -1,    -1,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    47,    -1,    49,    50,
      51,    52,    53,     8,     9,    -1,    79,    80,    -1,    82,
      61,     8,     9,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      25,    -1,    -1,    74,    -1,    -1,    -1,    78,    25,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    71,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    74,
      72,    76,    -1,    78,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   131,   132,     0,     8,     9,    25,    34,    35,    47,
      48,    61,    74,    76,    78,   133,   134,   136,   137,   144,
     145,   146,   147,   181,   183,   184,   187,   190,   194,   206,
      25,    47,    27,    25,    34,    47,    76,   147,   148,   149,
     181,   184,   187,   190,   194,   205,    27,    28,   182,    27,
      27,    27,   188,   189,    27,    27,   143,   191,   192,    85,
       5,   156,   145,    27,   185,   186,    27,    27,    85,    89,
     211,    27,   148,    27,    27,    30,    77,   148,    86,    86,
      88,    85,   211,    89,   142,   105,    88,    88,    86,    87,
      88,     6,    23,    26,    27,    28,    29,    32,    36,    54,
      55,    56,    60,    62,    65,    73,    81,    83,    84,    89,
      91,   150,   151,   152,   155,   156,   157,   168,   169,   175,
      87,   105,    88,    85,    85,    27,     9,    25,    44,    47,
      78,   143,   193,   212,   213,   214,    87,   211,   211,    88,
     141,   145,   182,   182,    27,    88,   143,    88,     8,    25,
      27,    28,    34,    37,    45,    47,    70,    89,    93,    94,
     112,   113,   121,   127,   129,   166,   167,   168,   216,   218,
     219,   220,   221,   224,   225,   226,   227,   229,   234,   238,
     239,   253,   254,   188,    34,   143,   216,   191,    27,   166,
      27,    27,    28,    87,    87,   166,    27,    89,   166,    89,
     158,   178,   157,   157,   166,   166,   172,    89,   159,    27,
     172,   176,   177,   166,   170,   171,    88,    15,    85,    89,
      91,    93,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    27,   217,   219,   220,   222,   228,   229,   254,   166,
     185,    27,    27,   211,   214,    27,   214,    27,   214,    87,
      90,    88,   216,    87,    88,    34,    15,   156,   211,     3,
       7,    13,    17,    19,    24,    42,    43,    46,    58,    59,
      63,    66,    67,    79,    80,    82,   144,   145,   207,   208,
     209,   210,    90,   144,   145,   211,    85,    15,    89,    91,
     237,   211,    91,    27,   143,   216,   168,   167,   168,   167,
     168,   167,   167,    12,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     8,    15,    49,    50,    51,    52,    53,
      69,    78,    89,   184,   187,   192,   194,   195,   196,   205,
     240,   241,   242,   244,   245,   246,   247,   248,   249,   250,
     251,   252,     4,    18,    57,    64,   148,    38,    96,   155,
     155,    71,    89,   216,   172,    75,    16,    21,    11,    86,
      11,   166,   179,   180,    87,    90,    90,    88,    12,    92,
      86,   157,    27,   166,   173,   174,   172,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   105,     4,    64,   211,
     211,    87,   211,   211,    70,   215,   220,   223,   254,   212,
      88,   216,   148,    85,    85,    88,    88,    88,    85,    85,
     135,    87,    27,    27,    65,     8,   235,   236,   249,   250,
      38,   166,    90,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,    78,   194,   205,    27,    50,    51,   248,
     143,    88,   196,    15,   248,   245,   245,   252,    91,    38,
      15,    69,    78,   184,   187,   230,   231,   232,   233,   241,
     243,   248,   249,   259,   260,    38,    30,    77,   160,   162,
     163,   164,   165,   166,   166,   155,   173,    86,    90,   166,
      39,   153,   154,   157,   155,   172,   155,    87,    90,    86,
     166,    27,   176,   166,   170,    90,    86,    92,   166,    91,
      38,    87,    88,   216,    87,   105,     4,   144,   210,    88,
     144,   209,   216,    90,    92,    15,   235,    37,    92,   248,
      91,   197,    90,   248,   166,   220,   257,   258,   216,    50,
     259,    15,   231,   231,   233,     6,   261,   216,   141,    15,
      14,    41,   161,    88,    87,    86,    12,    72,    14,    90,
     166,    27,    14,    15,    88,    15,   166,   179,   173,   257,
     217,   216,   144,    88,   216,    89,   169,    91,    88,    88,
      88,    38,    15,   237,    27,    87,   199,    15,   240,    12,
      92,    86,    27,   216,   262,    15,    33,   138,   156,   157,
     162,   155,   164,   166,   166,   155,    90,    87,   157,   153,
      87,    92,    88,    88,   144,    27,   255,   256,    37,   235,
     199,   216,    31,   198,    15,   166,    38,   257,    87,    38,
      85,   139,   140,   184,   190,    15,    85,    11,   220,    15,
     166,    38,   144,    88,    12,    92,    88,    15,    92,   169,
      56,   200,   216,   216,   172,   263,   264,   156,   139,    85,
     155,    11,   217,    88,    27,    38,   255,    27,    84,   201,
      87,    88,    88,   156,    87,   220,   223,    27,    68,   202,
      89,   263,    20,   216,    27,    10,   203,   259,   139,   169,
      88,    90,   156,    10,   204,    88,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   130,   132,   131,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     150,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   162,   163,   164,   164,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   179,   179,   180,   180,   180,
     181,   182,   182,   182,   182,   183,   183,   184,   185,   185,
     186,   186,   187,   188,   188,   189,   190,   191,   191,   192,
     193,   193,   194,   194,   195,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   213,   213,   213,
     213,   214,   214,   214,   215,   215,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     217,   217,   217,   218,   218,   218,   218,   219,   220,   220,
     220,   221,   222,   223,   223,   224,   225,   226,   227,   228,
     229,   229,   230,   230,   230,   231,   231,   232,   232,   232,
     232,   232,   232,   233,   234,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   239,   239,
     240,   240,   240,   241,   241,   242,   242,   242,   243,   243,
     244,   244,   244,   245,   245,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   248,   248,   249,   250,   251,   251,
     251,   251,   252,   252,   253,   254,   254,   255,   255,   256,
     257,   257,   258,   258,   259,   259,   260,   261,   262,   262,
     263,   263,   263,   264
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     6,     0,
       1,     1,     6,     9,     9,     6,     6,    10,     4,     8,
       0,     2,     1,     1,     1,     0,     3,     3,     1,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     6,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     5,     7,     1,     3,     0,     6,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     5,     4,     6,     8,     4,     4,     2,     2,
       2,     1,     1,     4,     3,     3,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     0,     3,     1,     3,     1,
       1,     0,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     3,
       2,     4,     6,     1,     1,     1,     1,     3,     1,     0,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     0,
       3,     1,     3,     3,     3,     1,     3,     1,     3,     5,
       3,     1,     3,     1,     3,     1,     1,     2,     0,     3,
       3,     5,     2,     0,     3,     3,     2,     0,     3,     3,
       3,     5,     6,     8,    11,     1,     2,     0,     4,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     4,     6,     6,     8,     8,    10,     9,
      11,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     3,     1,     3,     2,     2,     2,     1,
       1,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     2,     4,     4,     1,     3,
       1,     7,     7,     7,     7,     3,     3,     2,     4,     4,
       4,     3,     2,     1,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     4,     7,     5,     2,     2,     1,
       1,     1,     0,     3,     1,     1,     3,     6,     5,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     3,     2,     3,     1,     1,     1,     1,
       2,     2,     1,     2,     4,     0,     1,     1,     3,     5,
       1,     3,     1,     3,     2,     1,     1,     4,     3,     1,
       1,     2,     3,     5
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

    case YYSYMBOL_LOOPHOLE: /* LOOPHOLE  */
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

    case YYSYMBOL_RETURN: /* RETURN  */
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

    case YYSYMBOL_ident_list: /* ident_list  */
         { ((*yyvaluep).toks)->print_debug(); }
        break;

    case YYSYMBOL_inherited: /* inherited  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
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
         { auto obj = (object_tpd_node*)((*yyvaluep).n_tpd); fprintf (yyo, "%s", obj->t_object->in_text); }
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

  case 18: /* init_finit: INITIALIZATION var_const_decl_part_list compoundst ';'  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), (yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 19: /* init_finit: INITIALIZATION var_const_decl_part_list compoundst ';' FINALIZATION var_const_decl_part_list compoundst ';'  */
        { (yyval.n_decl) = new init_finit_node((yyvsp[-7].tok), (yyvsp[-6].n_decl), (yyvsp[-5].n_comp), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), (yyvsp[0].tok)); }
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

  case 27: /* ident_list: IDENT ',' ident_list  */
                                 { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 28: /* ident_list: IDENT  */
            { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 29: /* block: decl_part_list compoundst  */
        { (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp)); }
    break;

  case 30: /* decl_part_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 31: /* decl_part_list: decl_part decl_part_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 39: /* unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 40: /* unit_spec: INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node(NULL, NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 41: /* unit_decl_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 42: /* unit_decl_list: unit_decl unit_decl_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 50: /* inherited: INHERITED  */
                     { (yyval.n_stmt) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 51: /* inherited: INHERITED IDENT  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 52: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 53: /* try_finally: TRY sequence FINALLY sequence END  */
        { (yyval.n_stmt) = new try_finally_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 54: /* try_except: TRY sequence EXCEPT except_many END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 55: /* try_except: TRY sequence EXCEPT except_many ELSE sequence END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-6].tok), (yyvsp[-5].n_stmt), (yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 57: /* except_many: except ';' except_many  */
                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 58: /* except: %empty  */
        { (yyval.n_stmt) = NULL; }
    break;

  case 59: /* except: ON IDENT ':' simple_type DO compoundst  */
        { (yyval.n_stmt) = new on_except_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_comp)); }
    break;

  case 60: /* statement: %empty  */
           { (yyval.n_stmt) = new empty_node(curr_token->prev_relevant()); }
    break;

  case 61: /* statement: primary LET expr  */
                       { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 62: /* statement: primary LETADD expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 63: /* statement: primary LETSUB expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 64: /* statement: primary LETDIV expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 65: /* statement: primary LETMUL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 66: /* statement: primary LETAND expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 67: /* statement: primary LETOR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 68: /* statement: primary LETSHL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 69: /* statement: primary LETSHR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 70: /* statement: GOTO ICONST  */
                  { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 71: /* statement: GOTO IDENT  */
                 { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 72: /* statement: CASE expr OF case_list END  */
                                 { (yyval.n_stmt) = new switch_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_case), (yyvsp[0].tok)); }
    break;

  case 73: /* statement: IF expr THEN statement  */
                             { (yyval.n_stmt) = new if_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 74: /* statement: IF expr THEN statement ELSE statement  */
        { (yyval.n_stmt) = new if_node((yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 75: /* statement: FOR IDENT LET expr TO expr DO statement  */
        { (yyval.n_stmt) = new for_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 76: /* statement: WHILE expr DO statement  */
                              { (yyval.n_stmt) = new while_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 77: /* statement: REPEAT sequence UNTIL expr  */
                                 { (yyval.n_stmt) = new repeat_node((yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 78: /* statement: WRITE write_params  */
                         { (yyval.n_stmt) = new write_node((yyvsp[-1].tok), (yyvsp[0].n_wrls)); }
    break;

  case 79: /* statement: READ actual_params  */
                         { (yyval.n_stmt) = new read_node((yyvsp[-1].tok), (yyvsp[0].n_grp)); }
    break;

  case 80: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 81: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 82: /* statement: RETURN  */
             { (yyval.n_stmt) = new return_node((yyvsp[0].tok)); }
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

  case 90: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 92: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 93: /* actual_params: %empty  */
               { (yyval.n_grp) = NULL; }
    break;

  case 94: /* actual_params: expr_group  */
                                           { (yyval.n_grp) = (yyvsp[0].n_grp); }
    break;

  case 95: /* write_params: %empty  */
               { (yyval.n_wrls) = NULL; }
    break;

  case 96: /* write_params: '(' write_list ')'  */
                         { (yyval.n_wrls) = new write_list_node((yyvsp[-2].tok), (yyvsp[-1].n_wrtp), (yyvsp[0].tok)); }
    break;

  case 98: /* case_list: case_items otherwise sequence  */
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

  case 101: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 103: /* case_items: case_item ';' case_items  */
                                    { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 104: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 106: /* case_elem_list: case_elem ',' case_elem_list  */
                                       { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 107: /* case_elem: expr  */
                { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 108: /* case_elem: expr DOTS expr  */
                         { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 110: /* expr: expr PLUS expr  */
                    { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 111: /* expr: expr MINUS expr  */
                     { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 112: /* expr: expr MOD expr  */
                   { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 113: /* expr: expr MUL expr  */
                   { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 114: /* expr: expr DIV expr  */
                   { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 115: /* expr: expr DIVR expr  */
                    { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 116: /* expr: primary LET expr  */
                      { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 117: /* expr: primary LETADD expr  */
                         { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 118: /* expr: primary LETSUB expr  */
                         { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 119: /* expr: primary LETDIV expr  */
                         { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 120: /* expr: primary LETMUL expr  */
                         { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 121: /* expr: primary LETSHL expr  */
                         { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 122: /* expr: primary LETSHR expr  */
                         { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 123: /* expr: primary LETAND expr  */
                         { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 124: /* expr: primary LETOR expr  */
                         { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 125: /* expr: expr AND expr  */
                   { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 126: /* expr: expr BINAND expr  */
                      { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 127: /* expr: expr SHL expr  */
                   { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 128: /* expr: expr SHR expr  */
                   { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* expr: expr OR expr  */
                   { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 130: /* expr: expr BINOR expr  */
                      { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* expr: expr XOR expr  */
                   { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 132: /* expr: expr GT expr  */
                  { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* expr: expr LT expr  */
                  { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* expr: expr LE expr  */
                  { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* expr: expr GE expr  */
                  { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* expr: expr EQ expr  */
                  { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* expr: expr NE expr  */
                  { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* expr: expr IN expr  */
                  { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* simple_expr: PLUS simple_expr  */
                                  {
     (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* simple_expr: MINUS simple_expr  */
     { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* simple_expr: NOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* simple_expr: BINNOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* simple_expr: '@' primary  */
                 { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 145: /* simple_expr: AND primary  */
                               { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 147: /* primary: '(' expr_list ')'  */
                       { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 148: /* primary: primary '(' act_param_list ')'  */
                                    { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 149: /* primary: primary '.' IDENT  */
                       { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 150: /* primary: primary '^'  */
                 { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 151: /* primary: primary '[' expr_list ']'  */
                               { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 152: /* primary: LOOPHOLE '(' type ',' expr ')'  */
                                    { (yyval.n_expr) = new loophole_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 154: /* constant: ICONST  */
                 { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 155: /* constant: RCONST  */
                 { (yyval.n_expr) = new real_node((yyvsp[0].tok)); }
    break;

  case 156: /* constant: SCONST  */
                 { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 157: /* constant: '[' set_elem_list ']'  */
                                { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 158: /* constant: IDENT  */
                { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 159: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 161: /* set_elem_list: set_elem ',' set_elem_list  */
                                          { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 162: /* set_elem: expr  */
               { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 163: /* set_elem: expr DOTS expr  */
                         { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 165: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 167: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 169: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 170: /* record_constant: '(' field_init_list ')'  */
                                         { 
    (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); 
}
    break;

  case 171: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 172: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 173: /* field_init_item: IDENT ':' expr  */
                                { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 174: /* expr_group: '(' expr_list ')'  */
                              { (yyval.n_grp) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 176: /* write_list: write_param ',' write_list  */
                                                     { (yyvsp[-2].n_wrtp)->next = (yyvsp[0].n_wrtp); (yyval.n_wrtp) = (yyvsp[-2].n_wrtp); }
    break;

  case 177: /* write_param: expr  */
                   { (yyval.n_wrtp) = new write_param_node((yyvsp[0].n_expr)); }
    break;

  case 178: /* write_param: expr ':' expr  */
                    { (yyval.n_wrtp) = new write_param_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 179: /* write_param: expr ':' expr ':' expr  */
                             { (yyval.n_wrtp) = new write_param_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 180: /* label_decl_part: LABEL label_list ';'  */
    { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 181: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 182: /* label_list: ICONST ',' label_list  */
                                  { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 183: /* label_list: IDENT  */
                  { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 184: /* label_list: IDENT ',' label_list  */
                                 { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 187: /* const_def_part: const const_def_list  */
    { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 188: /* const_def_list: %empty  */
                { (yyval.n_cdef) = NULL; }
    break;

  case 189: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 190: /* const_def: IDENT EQ expr  */
                         { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 191: /* const_def: IDENT ':' const_type EQ expr  */
                               { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 192: /* type_def_part: TYPE type_def_list  */
    { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 193: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 194: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 195: /* type_def: IDENT EQ type  */
                        { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 196: /* var_decl_part: VAR var_decl_list  */
     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 197: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 198: /* var_decl_list: var_decl ';' var_decl_list  */
                                  { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 199: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 200: /* proc_decl: PROCEDURE IDENT formal_params  */
               { (yyval.n_decl) = new proc_decl_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 201: /* proc_decl: FUNCTION IDENT formal_params ':' type  */
               { (yyval.n_decl) = new proc_decl_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 202: /* proc_fwd_decl: PROCEDURE IDENT formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 203: /* proc_fwd_decl: FUNCTION IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 204: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 206: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 207: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 208: /* prop_array: '[' IDENT prop_type_def ']'  */
       { (yyval.n_decl) = new prop_array_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 209: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 210: /* prop_index: INDEX constant  */
       { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 211: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 212: /* prop_type_def: ':' type  */
       { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 213: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 214: /* prop_read: READ IDENT  */
       { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 215: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 216: /* prop_write: WRITE IDENT  */
       { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 217: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 218: /* prop_stored: STORED IDENT  */
       { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 219: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 220: /* prop_default: DEFAULT constant  */
       { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 221: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 222: /* prop_default_directive: DEFAULT ';'  */
       { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 223: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 224: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 225: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 226: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 227: /* proc_def: PROCEDURE IDENT '.' IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 228: /* proc_def: FUNCTION IDENT '.' IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 229: /* proc_def: CLASS PROCEDURE IDENT '.' IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 230: /* proc_def: CLASS FUNCTION IDENT '.' IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 250: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 251: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 252: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 253: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 255: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 256: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 257: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 258: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 259: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 261: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 262: /* param_decl: ident_list ':' param_type EQ constant  */
                                             { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 263: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 283: /* fptr_type: FUNCTION formal_params ':' type  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 284: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 285: /* fptr_type: PROCEDURE formal_params  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 286: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 287: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 288: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 289: /* simple_type: IDENT '.' IDENT  */
                      { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 290: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 291: /* array_type: packed ARRAY '[' indices ']' OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 292: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 293: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 294: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 295: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 296: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 297: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 298: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 299: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 300: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 301: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 302: /* record_body: record_field_list record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 305: /* record_components: record_component record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 308: /* record_component: record_access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 309: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 313: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 314: /* interface_type: INTERFACE guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 315: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 316: /* interface_type: INTERFACE '(' IDENT ')' END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 317: /* interface_type: INTERFACE END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 318: /* interface_components: interface_component interface_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 322: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 323: /* guid: '[' SCONST ']'  */
       { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 326: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 327: /* class_type: class_or_object '(' ident_list ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 328: /* class_type: class_or_object '(' ident_list ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 329: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 330: /* object_body: field_decl_list object_components  */
       { 
         // rare case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
       }
    break;

  case 332: /* object_body: field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 338: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 339: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 340: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 341: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 342: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 343: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 346: /* object_component: class_access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 352: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 353: /* field_decl_part: CLASS VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 354: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 355: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 357: /* object_properties: property_decl_list  */
       { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 358: /* method_decl: proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 359: /* method_decl: proc_spec  */
       { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 360: /* method_decl: CLASS proc_fwd_decl  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 361: /* method_decl: CLASS proc_spec  */
       { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 363: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 364: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 365: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 368: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 369: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 371: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 372: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 373: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 374: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 375: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 377: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 378: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 379: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 381: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 382: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 383: /* variant: expr_list ':' '(' field_list ')'  */
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
    curr_token = curr_token ? curr_token->next_relevant() 
	                    : token::first_relevant(); 
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


