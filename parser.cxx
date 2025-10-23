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
  YYSYMBOL_PLUS = 111,                     /* PLUS  */
  YYSYMBOL_MINUS = 112,                    /* MINUS  */
  YYSYMBOL_OR = 113,                       /* OR  */
  YYSYMBOL_XOR = 114,                      /* XOR  */
  YYSYMBOL_BINOR = 115,                    /* BINOR  */
  YYSYMBOL_MOD = 116,                      /* MOD  */
  YYSYMBOL_DIV = 117,                      /* DIV  */
  YYSYMBOL_DIVR = 118,                     /* DIVR  */
  YYSYMBOL_MUL = 119,                      /* MUL  */
  YYSYMBOL_AND = 120,                      /* AND  */
  YYSYMBOL_SHR = 121,                      /* SHR  */
  YYSYMBOL_SHL = 122,                      /* SHL  */
  YYSYMBOL_BINAND = 123,                   /* BINAND  */
  YYSYMBOL_UPLUS = 124,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 125,                   /* UMINUS  */
  YYSYMBOL_NOT = 126,                      /* NOT  */
  YYSYMBOL_ADDRESS = 127,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 128,                   /* BINNOT  */
  YYSYMBOL_YYACCEPT = 129,                 /* $accept  */
  YYSYMBOL_translation = 130,              /* translation  */
  YYSYMBOL_131_1 = 131,                    /* $@1  */
  YYSYMBOL_input_file = 132,               /* input_file  */
  YYSYMBOL_program = 133,                  /* program  */
  YYSYMBOL_progend = 134,                  /* progend  */
  YYSYMBOL_module = 135,                   /* module  */
  YYSYMBOL_unit = 136,                     /* unit  */
  YYSYMBOL_init_finit = 137,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 138, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 139,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 140,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 141,          /* prog_param_list  */
  YYSYMBOL_ident_list = 142,               /* ident_list  */
  YYSYMBOL_block = 143,                    /* block  */
  YYSYMBOL_decl_part_list = 144,           /* decl_part_list  */
  YYSYMBOL_decl_part = 145,                /* decl_part  */
  YYSYMBOL_unit_spec = 146,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 147,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 148,                /* unit_decl  */
  YYSYMBOL_inherited = 149,                /* inherited  */
  YYSYMBOL_try_finally = 150,              /* try_finally  */
  YYSYMBOL_try_except = 151,               /* try_except  */
  YYSYMBOL_except_many = 152,              /* except_many  */
  YYSYMBOL_except = 153,                   /* except  */
  YYSYMBOL_statement = 154,                /* statement  */
  YYSYMBOL_compoundst = 155,               /* compoundst  */
  YYSYMBOL_sequence = 156,                 /* sequence  */
  YYSYMBOL_actual_params = 157,            /* actual_params  */
  YYSYMBOL_write_params = 158,             /* write_params  */
  YYSYMBOL_case_list = 159,                /* case_list  */
  YYSYMBOL_otherwise = 160,                /* otherwise  */
  YYSYMBOL_case_items = 161,               /* case_items  */
  YYSYMBOL_case_item = 162,                /* case_item  */
  YYSYMBOL_case_elem_list = 163,           /* case_elem_list  */
  YYSYMBOL_case_elem = 164,                /* case_elem  */
  YYSYMBOL_expr = 165,                     /* expr  */
  YYSYMBOL_simple_expr = 166,              /* simple_expr  */
  YYSYMBOL_primary = 167,                  /* primary  */
  YYSYMBOL_constant = 168,                 /* constant  */
  YYSYMBOL_set_elem_list = 169,            /* set_elem_list  */
  YYSYMBOL_set_elem = 170,                 /* set_elem  */
  YYSYMBOL_expr_list = 171,                /* expr_list  */
  YYSYMBOL_act_param_list = 172,           /* act_param_list  */
  YYSYMBOL_act_param = 173,                /* act_param  */
  YYSYMBOL_record_constant = 174,          /* record_constant  */
  YYSYMBOL_field_init_list = 175,          /* field_init_list  */
  YYSYMBOL_field_init_item = 176,          /* field_init_item  */
  YYSYMBOL_expr_group = 177,               /* expr_group  */
  YYSYMBOL_write_list = 178,               /* write_list  */
  YYSYMBOL_write_param = 179,              /* write_param  */
  YYSYMBOL_label_decl_part = 180,          /* label_decl_part  */
  YYSYMBOL_label_list = 181,               /* label_list  */
  YYSYMBOL_const = 182,                    /* const  */
  YYSYMBOL_const_def_part = 183,           /* const_def_part  */
  YYSYMBOL_const_def_list = 184,           /* const_def_list  */
  YYSYMBOL_const_def = 185,                /* const_def  */
  YYSYMBOL_type_def_part = 186,            /* type_def_part  */
  YYSYMBOL_type_def_list = 187,            /* type_def_list  */
  YYSYMBOL_type_def = 188,                 /* type_def  */
  YYSYMBOL_var_decl_part = 189,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 190,            /* var_decl_list  */
  YYSYMBOL_var_decl = 191,                 /* var_decl  */
  YYSYMBOL_proc_decl = 192,                /* proc_decl  */
  YYSYMBOL_proc_fwd_decl = 193,            /* proc_fwd_decl  */
  YYSYMBOL_property_decl = 194,            /* property_decl  */
  YYSYMBOL_property_decl_list = 195,       /* property_decl_list  */
  YYSYMBOL_prop_array = 196,               /* prop_array  */
  YYSYMBOL_prop_index = 197,               /* prop_index  */
  YYSYMBOL_prop_type_def = 198,            /* prop_type_def  */
  YYSYMBOL_prop_read = 199,                /* prop_read  */
  YYSYMBOL_prop_write = 200,               /* prop_write  */
  YYSYMBOL_prop_stored = 201,              /* prop_stored  */
  YYSYMBOL_prop_default = 202,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 203,   /* prop_default_directive  */
  YYSYMBOL_proc_spec = 204,                /* proc_spec  */
  YYSYMBOL_proc_def = 205,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 206,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 207,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 208,                /* qualifier  */
  YYSYMBOL_qualifiers = 209,               /* qualifiers  */
  YYSYMBOL_formal_params = 210,            /* formal_params  */
  YYSYMBOL_formal_param_list = 211,        /* formal_param_list  */
  YYSYMBOL_formal_param = 212,             /* formal_param  */
  YYSYMBOL_param_decl = 213,               /* param_decl  */
  YYSYMBOL_param_type = 214,               /* param_type  */
  YYSYMBOL_type = 215,                     /* type  */
  YYSYMBOL_const_type = 216,               /* const_type  */
  YYSYMBOL_fptr_type = 217,                /* fptr_type  */
  YYSYMBOL_string_type = 218,              /* string_type  */
  YYSYMBOL_simple_type = 219,              /* simple_type  */
  YYSYMBOL_array_type = 220,               /* array_type  */
  YYSYMBOL_const_array_type = 221,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 222,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 223,                /* enum_type  */
  YYSYMBOL_range_type = 224,               /* range_type  */
  YYSYMBOL_pointer_type = 225,             /* pointer_type  */
  YYSYMBOL_set_type = 226,                 /* set_type  */
  YYSYMBOL_const_set_type = 227,           /* const_set_type  */
  YYSYMBOL_record_type = 228,              /* record_type  */
  YYSYMBOL_record_body = 229,              /* record_body  */
  YYSYMBOL_record_components = 230,        /* record_components  */
  YYSYMBOL_record_component = 231,         /* record_component  */
  YYSYMBOL_record_field_list = 232,        /* record_field_list  */
  YYSYMBOL_interface_type = 233,           /* interface_type  */
  YYSYMBOL_interface_components = 234,     /* interface_components  */
  YYSYMBOL_interface_component = 235,      /* interface_component  */
  YYSYMBOL_guid = 236,                     /* guid  */
  YYSYMBOL_class_or_object = 237,          /* class_or_object  */
  YYSYMBOL_class_type = 238,               /* class_type  */
  YYSYMBOL_object_body = 239,              /* object_body  */
  YYSYMBOL_access_spec_tok = 240,          /* access_spec_tok  */
  YYSYMBOL_access_spec_decl = 241,         /* access_spec_decl  */
  YYSYMBOL_object_components = 242,        /* object_components  */
  YYSYMBOL_object_component = 243,         /* object_component  */
  YYSYMBOL_field_decl_part = 244,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 245,          /* field_decl_list  */
  YYSYMBOL_object_methods = 246,           /* object_methods  */
  YYSYMBOL_object_properties = 247,        /* object_properties  */
  YYSYMBOL_proc_fwd_decl_list = 248,       /* proc_fwd_decl_list  */
  YYSYMBOL_file_type = 249,                /* file_type  */
  YYSYMBOL_packed = 250,                   /* packed  */
  YYSYMBOL_conformant_indices = 251,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 252,         /* conformant_index  */
  YYSYMBOL_indices = 253,                  /* indices  */
  YYSYMBOL_index_spec = 254,               /* index_spec  */
  YYSYMBOL_field_list = 255,               /* field_list  */
  YYSYMBOL_fixed_part = 256,               /* fixed_part  */
  YYSYMBOL_variant_part = 257,             /* variant_part  */
  YYSYMBOL_selector = 258,                 /* selector  */
  YYSYMBOL_variant_list = 259,             /* variant_list  */
  YYSYMBOL_variant = 260                   /* variant  */
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
#define YYLAST   1658

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  377
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  710

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   373


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
     125,   126,   127,   128
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   368,   368,   368,   393,   393,   393,   395,   396,   399,
     399,   401,   402,   408,   410,   412,   414,   416,   419,   421,
     424,   425,   427,   427,   429,   431,   432,   434,   435,   437,
     440,   441,   443,   443,   443,   443,   444,   444,   444,   446,
     448,   452,   453,   455,   455,   455,   455,   456,   456,   456,
     485,   486,   488,   492,   495,   497,   500,   501,   503,   504,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   523,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     540,   542,   542,   544,   544,   546,   547,   549,   550,   562,
     562,   564,   565,   566,   568,   570,   571,   573,   574,   598,
     599,   600,   601,   602,   603,   604,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   617,   618,   619,   620,   621,
     622,   623,   625,   626,   627,   628,   629,   630,   631,   633,
     634,   636,   638,   640,   642,   643,   645,   646,   647,   648,
     649,   650,   651,   653,   654,   655,   656,   657,   658,   660,
     661,   662,   664,   665,   667,   667,   669,   670,   672,   672,
     675,   679,   680,   682,   685,   688,   688,   690,   691,   692,
     734,   737,   738,   739,   740,   742,   742,   744,   747,   748,
     750,   751,   753,   756,   757,   759,   761,   764,   778,   780,
     786,   788,   792,   794,   798,   801,   802,   804,   805,   807,
     808,   810,   811,   813,   814,   816,   817,   819,   820,   822,
     823,   825,   826,   832,   834,   838,   840,   842,   844,   846,
     848,   850,   852,   855,   855,   855,   855,   855,   855,   855,
     855,   855,   855,   857,   857,   857,   857,   857,   857,   857,
     859,   859,   861,   862,   866,   867,   869,   870,   872,   873,
     874,   875,   876,   878,   879,   880,   882,   882,   888,   888,
     888,   888,   888,   888,   888,   889,   889,   889,   889,   889,
     891,   891,   891,   891,   891,   893,   895,   897,   899,   902,
     904,   905,   906,   908,   911,   914,   916,   919,   921,   924,
     926,   928,   937,   939,   942,   949,   950,   952,   958,   960,
     961,   963,   965,   966,   967,   969,   973,   975,   977,   979,
     984,   993,   995,   996,   998,   999,  1003,  1003,  1005,  1007,
    1009,  1011,  1017,  1026,  1027,  1030,  1030,  1030,  1030,  1032,
    1034,  1043,  1045,  1046,  1048,  1049,  1050,  1051,  1052,  1055,
    1059,  1060,  1062,  1065,  1068,  1068,  1069,  1070,  1073,  1075,
    1075,  1077,  1078,  1080,  1083,  1084,  1087,  1088,  1091,  1093,
    1096,  1098,  1101,  1102,  1105,  1106,  1107,  1109
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
  "SCONST", "STATIC", "STDCALL", "STORED", "STRING", "THEN", "TO", "TRY",
  "TYPE", "UNTIL", "UNIT", "UNIT_END", "VAR", "VARARGS", "VIRTUAL",
  "WHILE", "WINAPI", "WITH", "WRITE", "'.'", "','", "':'", "';'", "'('",
  "')'", "'['", "']'", "'^'", "'@'", "SCOPE", "LET", "LETADD", "LETSUB",
  "LETDIV", "LETMUL", "LETAND", "LETOR", "LETSHL", "LETSHR", "EQ", "NE",
  "LT", "LE", "GT", "GE", "IN", "PLUS", "MINUS", "OR", "XOR", "BINOR",
  "MOD", "DIV", "DIVR", "MUL", "AND", "SHR", "SHL", "BINAND", "UPLUS",
  "UMINUS", "NOT", "ADDRESS", "BINNOT", "$accept", "translation", "$@1",
  "input_file", "program", "progend", "module", "unit", "init_finit",
  "var_const_decl_part_list", "var_const_decl_part", "unit_def_list",
  "prog_param_list", "ident_list", "block", "decl_part_list", "decl_part",
  "unit_spec", "unit_decl_list", "unit_decl", "inherited", "try_finally",
  "try_except", "except_many", "except", "statement", "compoundst",
  "sequence", "actual_params", "write_params", "case_list", "otherwise",
  "case_items", "case_item", "case_elem_list", "case_elem", "expr",
  "simple_expr", "primary", "constant", "set_elem_list", "set_elem",
  "expr_list", "act_param_list", "act_param", "record_constant",
  "field_init_list", "field_init_item", "expr_group", "write_list",
  "write_param", "label_decl_part", "label_list", "const",
  "const_def_part", "const_def_list", "const_def", "type_def_part",
  "type_def_list", "type_def", "var_decl_part", "var_decl_list",
  "var_decl", "proc_decl", "proc_fwd_decl", "property_decl",
  "property_decl_list", "prop_array", "prop_index", "prop_type_def",
  "prop_read", "prop_write", "prop_stored", "prop_default",
  "prop_default_directive", "proc_spec", "proc_def", "fun_qualifier",
  "meth_qualifier", "qualifier", "qualifiers", "formal_params",
  "formal_param_list", "formal_param", "param_decl", "param_type", "type",
  "const_type", "fptr_type", "string_type", "simple_type", "array_type",
  "const_array_type", "conformant_array_type", "enum_type", "range_type",
  "pointer_type", "set_type", "const_set_type", "record_type",
  "record_body", "record_components", "record_component",
  "record_field_list", "interface_type", "interface_components",
  "interface_component", "guid", "class_or_object", "class_type",
  "object_body", "access_spec_tok", "access_spec_decl",
  "object_components", "object_component", "field_decl_part",
  "field_decl_list", "object_methods", "object_properties",
  "proc_fwd_decl_list", "file_type", "packed", "conformant_indices",
  "conformant_index", "indices", "index_spec", "field_list", "fixed_part",
  "variant_part", "selector", "variant_list", "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-596)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-291)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -596,    61,   206,  -596,  -596,    56,   463,   167,    64,    75,
    -596,   101,   115,   128,  -596,  -596,  -596,  -596,   -14,   157,
    1351,  -596,  -596,   142,  -596,  -596,  -596,  -596,  -596,     0,
     147,   463,   150,   153,  -596,    20,   463,  -596,  -596,  -596,
    -596,  -596,  -596,   113,   116,   118,   -12,   130,   119,  -596,
     133,   155,   160,   163,  -596,   170,  -596,  1007,  -596,  -596,
     -24,  -596,   178,   201,   440,   379,   180,   181,   194,   181,
     184,  1351,  -596,  -596,   167,   167,  -596,   245,   187,   128,
     188,   574,   101,   243,   128,   574,   128,   879,   251,   224,
     196,   198,   879,   291,   234,   879,  -596,   235,  1007,  -596,
    -596,  1007,   879,   879,   237,   883,   879,  -596,  -596,  -596,
     239,  -596,   312,   630,  -596,  -596,   109,   879,   142,   181,
     242,   244,   157,   128,   301,   128,   305,   128,   247,  -596,
     249,   257,  -596,   574,   248,   266,   326,    60,  -596,  -596,
    -596,   181,  1187,   272,  1351,  -596,   181,  1108,  -596,    43,
    -596,  -596,   181,   273,   890,   574,   430,   879,   879,   430,
     879,   879,   691,  -596,   862,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  1110,  -596,  -596,    42,
    -596,   463,  -596,  -596,  -596,  -596,   994,   267,  -596,  -596,
    1007,  1007,  1331,   277,   574,   752,   879,  -596,  -596,   292,
     143,   650,  1391,   356,   879,  -596,   283,   282,   284,   285,
     711,   287,   289,  1007,  -596,   348,   879,   879,  -596,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   296,   286,
    -596,  -596,  -596,  -596,  -596,    44,   752,  -596,   290,  1351,
    -596,  -596,   181,  -596,   181,  -596,   123,  -596,   379,   309,
     574,  1321,   463,   308,   313,   314,  -596,  -596,  -596,  -596,
    -596,   316,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,   320,  -596,  -596,  -596,   327,  -596,
     333,    30,   336,   398,  -596,   400,   363,   124,   391,   879,
     141,   343,  -596,   145,  -596,   145,  -596,   145,  -596,  -596,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   879,
    -596,   408,  -596,  -596,  -596,  -596,   128,   128,  -596,  -596,
     349,    19,   388,  -596,    19,   423,  -596,   128,  -596,   997,
    -596,   997,  -596,  -596,  -596,   350,   401,  1356,   403,    39,
     879,   879,  -596,  -596,  1007,   879,   358,   355,   879,   406,
    1007,  1007,   879,  1007,  1429,   357,   362,   879,  -596,  -596,
     425,   879,  -596,   879,  -596,  -596,   752,   365,   374,   369,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   879,
     377,   426,   574,   381,   383,  -596,  -596,   366,  -596,  -596,
     467,  -596,  1254,   386,   405,  -596,  -596,  1351,  1351,  -596,
    1321,  -596,  -596,  -596,   574,  -596,   387,   393,   462,   124,
    -596,  -596,   449,  1535,  -596,   752,  1366,  1366,  1366,  1366,
    1366,  1366,  1366,   760,   760,   760,   760,   760,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   399,  -596,   402,   128,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,   322,   574,  -596,   128,
    -596,  -596,   477,  -596,   332,   332,   128,  -596,  -596,  -596,
     488,   574,  1351,  -596,   484,    40,   416,   418,   420,   732,
    1352,   493,   419,   879,  -596,   752,   487,   241,   429,   504,
    -596,  -596,  -596,   879,  -596,   879,   752,   283,  -596,   752,
    -596,  -596,   879,  -596,   752,   322,   109,   434,  -596,   574,
     548,   433,   438,   439,   441,  1321,   442,   443,  -596,   494,
      23,  -596,  -596,  -596,  -596,  -596,   507,   445,  1343,  -596,
     782,  -596,   446,   456,  -596,  -596,  -596,  -596,  -596,  -596,
     623,  -596,  -596,    38,  -596,  -596,  -596,  1007,   879,  1007,
     879,   879,   879,  1007,  -596,  1502,   459,  1007,  -596,   406,
    -596,  1467,  -596,  -596,   465,  -596,  1351,  -596,   425,  -596,
     520,  1351,  -596,  1321,  -596,  -596,   516,  -596,   124,   445,
     574,   523,  -596,   546,   879,   527,   322,    48,  -596,   528,
     483,    69,   554,   486,  -596,  -596,  -596,  -596,   752,   670,
    -596,  -596,    68,   557,  -596,   879,   535,   490,   562,   489,
     491,   492,  -596,   566,   495,  -596,   548,   531,  -596,   752,
     574,  -596,   574,   879,  -596,   157,    69,  -596,  -596,   500,
    -596,  1007,   579,  -596,   752,   109,  -596,   565,   556,   520,
    -596,  -596,  -596,  -596,   568,   513,  -596,  -596,   511,  -596,
     517,   529,  -596,  -596,  -596,   157,  -596,   512,   123,  -596,
    -596,   573,   539,   526,   879,   598,  -596,   574,  -596,  -596,
    -596,   593,   612,   128,  -596,    69,  -596,  -596,   548,   536,
     537,   157,  -596,   614,  -596,   538,   540,  -596,  -596,  -596
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    30,     1,   185,     0,    41,     0,     0,     0,
     186,   193,     0,   197,     3,     4,     5,     6,     0,    11,
      30,    38,    32,   188,    33,    34,    35,    37,    36,   254,
       0,    41,     0,     0,    49,     0,    41,    43,    44,    45,
      46,    48,    47,   183,   181,     0,   254,    25,     0,   192,
       0,     0,    28,     0,   196,     0,     7,    60,    29,    31,
       0,   187,     0,     0,    30,     0,     0,   254,     0,   254,
       0,    30,    40,    42,     0,     0,   180,     0,     0,     0,
       0,   359,   193,     0,     0,   359,   197,     0,     0,     0,
     158,   154,     0,    50,     0,     0,   155,    93,    60,    82,
     156,    60,     0,     0,    95,     0,   159,    89,    87,    88,
      91,    86,     0,    81,   146,   153,   359,     0,   188,   254,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   262,
       0,   256,   261,   359,     0,     0,     0,     0,    24,   184,
     182,   254,    30,     0,    30,   327,   254,   158,   154,   324,
     326,   360,   254,   292,     0,   359,     0,     0,     0,     0,
       0,     0,     0,   109,   139,   195,   279,   278,   268,   269,
     276,   277,   275,   273,   270,   272,     0,   271,   274,     0,
     194,    41,    27,   199,   198,   158,     0,     0,    71,    70,
      60,    60,     0,    51,   359,    80,     0,    79,    94,     0,
       0,     0,   164,     0,     0,    78,   158,     0,     0,   171,
     162,     0,   160,    60,    90,     0,   169,     0,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   290,     0,
     284,   280,   281,   283,   282,     0,   190,   189,     0,    30,
     229,   259,   254,   260,   254,   258,   359,   255,     0,     0,
     359,   223,    41,     0,     0,     0,   244,   237,   246,   242,
     249,     0,   233,   234,   248,   236,   235,   243,   239,   247,
     238,   241,   245,   240,     0,   250,   251,   252,     0,    26,
       0,     9,     0,     0,   319,     0,     0,     0,   287,     0,
     158,     0,   299,   144,   140,   139,   141,   145,   142,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     331,     0,   335,   337,   336,   338,     0,     0,   347,   348,
       0,   354,   205,   353,   355,     0,   339,   342,   333,   341,
     344,   334,   345,   346,   352,     0,     0,     0,     0,     0,
     101,     0,    85,    84,    60,   169,     0,     0,     0,    58,
      60,    60,     0,    60,   177,     0,   175,     0,   147,   170,
       0,     0,   157,   159,    92,   149,   168,     0,   166,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
       0,     0,   359,     0,     0,   200,   292,   263,   266,   267,
       0,   257,    30,     0,     0,    15,    16,    30,    30,   225,
     202,     8,    10,    12,   359,   291,     0,     0,     0,   321,
     322,   323,     0,     0,   297,   298,   136,   137,   133,   134,
     132,   135,   138,   110,   111,   129,   131,   130,   112,   114,
     115,   113,   125,   128,   127,   126,   116,   117,   118,   119,
     120,   123,   124,   121,   122,   207,   349,     0,   350,   356,
     206,   357,   328,   343,   340,   332,     0,   359,   303,     0,
     313,   314,     0,   305,   308,   306,   309,   370,   312,   315,
     369,   359,    30,    39,     0,    97,   102,     0,   105,   107,
       0,    73,     0,     0,   174,    77,     0,     0,    56,     0,
      76,   165,    83,     0,    96,     0,   173,     0,   172,   163,
     161,   148,   169,   151,   191,     0,   359,     0,   232,   359,
       0,     0,     0,     0,     0,   224,     0,     0,   253,   285,
     324,   325,   316,   320,   288,   289,     0,   211,     0,   351,
       0,   366,     0,   364,   358,   311,   302,   307,   304,   310,
     359,   368,   300,     0,    72,   100,    99,    60,   101,    60,
       0,     0,     0,    60,    52,     0,     0,    60,    54,    58,
      53,   178,   176,   167,     0,   301,    30,   201,     0,   264,
       0,    30,   226,   203,   227,   230,     0,   318,     0,   211,
     359,   209,   330,     0,     0,     0,     0,   158,   373,     0,
       0,    20,     0,     0,    98,   103,   104,   106,   108,     0,
      74,   152,     0,     0,    57,     0,     0,     0,     0,     0,
     361,     0,   286,     0,     0,   212,     0,   213,   329,   367,
     359,   365,   359,     0,    13,     0,    20,    22,    23,     0,
      14,    60,     0,    55,   179,   359,   228,     0,     0,     0,
     231,   317,   208,   210,     0,   215,   293,   372,     0,   371,
     374,     0,    21,    17,    75,     0,   294,     0,   359,   362,
     214,     0,   217,     0,   375,    18,    59,   359,   295,   296,
     216,     0,   219,     0,   376,    20,   363,   218,     0,     0,
       0,     0,   220,   221,   377,     0,     0,   204,    19,   222
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -595,
    -596,   140,  -596,   -16,   -23,    14,  -596,     6,   -28,  -596,
    -596,  -596,  -596,    54,  -596,  -171,   -17,   -84,  -596,  -596,
    -596,  -596,    66,  -596,    65,  -596,   -13,    24,   -34,  -473,
     254,  -596,   -99,  -333,  -596,  -596,   262,  -596,  -596,   129,
    -596,     9,   185,  -596,    -6,   545,  -596,   104,   563,  -596,
      -5,   560,    26,  -596,    67,  -596,   307,  -596,  -596,    55,
    -596,  -596,  -596,  -596,  -596,    16,  -596,  -596,  -596,  -407,
    -383,    98,   407,  -596,   111,  -596,   -78,  -508,  -596,  -106,
     -95,  -596,  -596,   -31,  -596,  -596,  -596,  -596,  -596,  -105,
    -596,  -222,  -596,   183,  -596,  -402,  -596,   132,  -596,  -596,
     105,  -596,  -324,  -206,  -596,  -596,  -148,  -263,  -281,  -285,
    -596,  -107,    -3,  -596,  -489,  -596,  -474,  -596,  -596,  -596,
     -11,  -596
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    14,    15,   423,    16,    17,   612,   645,
     646,   137,    80,    53,    18,   122,    20,    21,    35,    36,
     107,   108,   109,   507,   508,   110,   111,   112,   197,   205,
     494,   567,   495,   496,   497,   498,   162,   163,   164,   114,
     211,   212,   207,   387,   388,   115,   208,   209,   198,   375,
     376,    22,    45,    23,    24,    61,    62,    25,    49,    50,
      26,    54,   340,   129,    27,   342,   343,   547,   637,   601,
     665,   682,   692,   699,   707,   344,    28,   275,   276,   277,
     278,    66,   130,   131,   132,   407,   165,   229,   166,   167,
     168,   169,   232,   409,   170,   171,   172,   173,   233,   174,
     482,   483,   484,   485,   175,   428,   429,   287,   176,   177,
     345,   346,   347,   348,   349,   350,   487,   352,   353,   354,
     178,   179,   629,   630,   552,   553,   489,   490,   561,   609,
     669,   670
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    40,    58,    68,   203,   555,   431,   183,    73,   235,
     230,   234,    34,   538,   199,    37,    19,   200,   585,   362,
     363,   231,    42,   113,   430,    38,    40,   543,   351,   534,
      38,    40,   502,   486,    59,    57,   584,    34,   597,    55,
      37,   121,    34,    57,    30,    37,   355,    42,   400,   128,
      71,   672,    42,   610,   565,   249,   469,   589,   284,   471,
     356,     3,   116,   143,   113,    57,    32,   113,   182,   492,
      56,   611,    77,    41,   186,   253,    65,   292,     4,   192,
     117,   566,   195,    29,    63,   138,  -290,    64,    65,   201,
     202,    46,   202,   210,   488,   228,    72,   367,    41,   357,
     701,   357,    47,    41,   236,    58,   358,   128,   401,   128,
      39,   128,    55,   286,   422,   493,   366,   641,   389,   274,
     254,   280,   293,   295,   295,   297,   295,   295,    48,   384,
      10,   285,   283,   286,   642,    39,   228,   406,   291,   410,
      39,   202,    51,   474,    78,   475,    13,   676,   431,    30,
     228,   408,   534,   359,   151,    52,   113,   113,   281,   369,
     486,   486,    57,   663,   370,   134,   430,   135,   151,    60,
     338,    32,   413,   331,    67,    38,    40,    69,   153,   113,
      70,   294,   296,   202,   298,   299,   538,    34,   466,   583,
      37,   374,   406,   501,    43,    44,   633,    42,    74,   473,
     510,    75,   512,   386,   202,    76,   390,   391,   392,   393,
     394,   395,   396,   397,   398,     4,   403,   238,    79,   700,
      82,   488,   488,    81,   414,   702,    84,   377,   119,   215,
     -28,     5,   128,   216,   241,   217,   243,   218,   245,   255,
       6,     7,    83,   341,   282,    84,    38,    40,    41,    85,
     288,   188,   189,     8,     9,   577,   578,    86,    34,   139,
     140,    37,   557,   558,    58,   118,   133,    10,    42,    65,
      72,   136,   141,   511,   142,   144,   433,   181,   187,    11,
     339,    12,   190,    13,   191,    39,   509,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   431,   193,    41,
     549,   467,   194,   196,   527,   204,   213,   214,   242,   239,
     113,   240,   244,   246,   250,   430,   113,   113,   247,   113,
     404,     4,   405,   338,   248,   338,   539,   499,   500,   147,
     148,   480,   386,   251,   341,   505,    39,    30,    94,   202,
     252,   279,   361,   289,   516,   365,   368,   373,   519,   377,
     210,   378,   380,   379,   383,   385,   402,    96,   382,    32,
     283,   551,   332,   333,   334,   335,   524,   100,   123,   533,
     399,   406,   415,    10,   536,   537,   412,   416,   616,   554,
     351,   417,   620,   418,   124,    11,    52,   419,   341,   479,
     105,   341,   106,   562,   420,   156,   341,   421,   341,   235,
     230,   234,   424,   125,   341,   425,   126,   426,   427,   432,
     551,   231,   434,   157,   158,   465,   468,   331,   472,   477,
     476,   491,   159,   503,   504,   506,   514,   515,   160,     4,
     161,   587,   517,   339,   521,   339,   127,   185,   148,   522,
     523,   481,   120,   550,   526,     5,    94,   525,   528,   529,
     530,   531,     4,   535,    31,     7,   540,   542,   480,   480,
     674,   493,   608,   614,   541,    96,   544,     8,    30,   546,
     575,   548,   556,   623,   560,   100,   341,    31,     7,   564,
     581,    10,   374,   568,   569,   570,   138,   573,   574,   386,
      32,   551,   550,    11,   576,    33,   579,    13,   105,   580,
     106,   586,   635,   590,    10,   591,   592,   652,   593,   594,
     595,   600,   596,   113,   599,   113,    11,   605,    33,   113,
      13,   606,   338,   113,   668,   622,   613,   628,   235,   230,
     234,   341,   341,   632,   636,   499,   626,   499,   618,   619,
     231,   638,   666,   627,   667,   640,   643,   644,   631,   649,
     650,   410,   653,   655,   657,   185,   148,   656,   659,   660,
     658,   661,   145,   688,   673,   668,   662,   664,   481,   481,
     675,   639,   677,   550,   678,   680,   681,   683,   687,   146,
     690,   147,   148,    96,   684,   647,   648,   691,   149,   696,
      94,   150,   654,   100,   693,   341,   685,   113,   695,   151,
     697,   152,   698,   703,   706,   708,   704,   709,   671,    96,
     202,   145,   563,   624,   615,   617,   588,   520,   106,   100,
     647,   648,   518,   153,   582,   180,   184,   689,   146,   470,
     607,   148,   339,   603,   634,   411,   679,   149,   686,    94,
     150,   371,   154,   237,   106,   341,   155,   156,   151,   559,
     152,   202,   598,   694,     0,     0,     0,     0,    96,     0,
       0,   651,     0,     0,   705,   157,   158,     0,   100,   647,
     648,     0,   153,     0,   159,     0,     0,     0,     0,     0,
     160,     0,   161,   300,     0,     0,     0,     0,     0,     0,
       0,   154,     0,   106,   215,   155,   156,     0,   216,     0,
     217,     0,   218,   381,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   157,   158,     0,     0,     0,     0,
       0,     0,     0,   159,   571,     0,     0,     0,     0,   160,
       0,   161,     0,     0,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   604,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   313,   314,   315,   316,
     317,   318,   319,   320,     0,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   185,   148,     0,     0,
     206,   148,     0,     0,     0,    94,     0,   290,   148,    94,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,    96,     0,
       0,     0,     0,     0,   100,    96,   215,     0,   100,     0,
     216,     0,   217,     0,   218,   100,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,     0,   105,     0,   106,
       0,   105,   156,   106,     0,     0,   156,     0,   105,     0,
     106,     0,     0,   156,     0,     0,     0,     0,     0,     0,
     157,   158,     0,     0,   157,   158,     0,     0,     0,   159,
       0,   157,   158,   159,     0,   160,     4,   161,     0,   160,
     159,   161,    57,    87,     0,     0,   160,     0,   161,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
      88,     0,   360,    89,    90,    91,    92,     0,     0,    93,
       0,     0,     0,    94,    32,     0,   331,   332,   333,   334,
     335,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,    95,    96,    97,     0,     0,     0,    98,     0,    99,
      11,     0,   100,     0,   336,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,   102,     0,   103,
     104,     0,     0,     0,     0,   105,     0,   106,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,  -290,     4,
       0,     0,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    52,     0,  -290,
       0,     0,     0,     0,     0,     0,  -290,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,   331,
     332,   333,   334,   335,  -290,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,  -290,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,   336,     0,     0,
     256,  -290,   283,  -290,   257,  -290,     4,  -290,   337,  -290,
     258,     0,     0,     0,   259,     0,   260,     0,     0,   261,
       0,   262,     5,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     7,     0,     0,     0,     0,     0,     0,   263,
     264,     0,     0,   265,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,   267,     0,    10,     0,
     268,     0,     0,   269,   270,     0,     0,   256,     0,     0,
      11,   257,    33,     4,    13,   271,   272,   258,   273,     0,
       0,   259,     0,   260,     0,     0,   532,     0,   262,     5,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     7,
       0,     0,     0,     0,     0,     0,   263,   264,     0,     0,
     265,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,   267,     0,    10,     0,   268,     0,     0,
     269,   270,     0,     0,   256,     0,     0,    11,   257,    33,
       0,    13,   271,   272,   258,   273,     0,     0,   259,     0,
     260,     0,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,   602,     0,
       4,     0,     0,   263,   264,     4,     0,   265,    30,     0,
      52,   478,     0,     0,     0,     0,     5,     0,     0,   266,
     267,    30,     0,    52,   268,    31,     7,   269,   270,     0,
      32,     0,   331,   332,   333,   334,   335,     0,     8,   271,
     272,   364,   273,    32,    10,     0,   332,   333,   334,   335,
       0,     0,    10,     0,     0,     0,    11,    10,     0,     0,
     336,     0,     0,   572,    11,     0,    33,     0,    13,    11,
       0,     0,     0,   479,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   372,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
       0,     0,     0,     0,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320
};

static const yytype_int16 yycheck[] =
{
       6,     6,    19,    31,   103,   479,   287,    85,    36,   116,
     116,   116,     6,   420,    98,     6,     2,   101,   526,   190,
     191,   116,     6,    57,   287,    31,    31,   429,   176,   412,
      36,    36,   365,   357,    20,     5,   525,    31,    15,    13,
      31,    64,    36,     5,    25,    36,     4,    31,     4,    65,
      30,   646,    36,    15,    14,   133,   341,   530,    15,   344,
      18,     0,    86,    79,    98,     5,    47,   101,    84,    30,
      84,    33,    84,     6,    87,    15,    88,   155,     9,    92,
     104,    41,    95,    27,    84,    71,    38,    87,    88,   102,
     103,    27,   105,   106,   357,    27,    76,   196,    31,    57,
     695,    57,    27,    36,   117,   122,    64,   123,    64,   125,
       6,   127,    86,    90,    84,    76,   194,   606,   217,   142,
     137,   144,   156,   157,   158,   159,   160,   161,    27,   213,
      61,    88,    84,    90,    86,    31,    27,    69,   154,   246,
      36,   154,    27,   349,    46,   351,    77,   655,   429,    25,
      27,   246,   535,   181,    45,    27,   190,   191,   144,    16,
     484,   485,     5,   636,    21,    67,   429,    69,    45,    27,
     176,    47,   250,    49,    27,   181,   181,    27,    69,   213,
      27,   157,   158,   196,   160,   161,   593,   181,   336,   522,
     181,   204,    69,   364,    27,    28,   598,   181,    85,   347,
     371,    85,   373,   216,   217,    87,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     9,   239,   119,    88,   693,
      87,   484,   485,   104,   252,   698,    85,    86,    27,    84,
      89,    25,   248,    88,   123,    90,   125,    92,   127,   141,
      34,    35,    87,   176,   146,    85,   252,   252,   181,    86,
     152,    27,    28,    47,    48,    14,    15,    87,   252,    74,
      75,   252,   484,   485,   281,    87,    86,    61,   252,    88,
      76,    87,    27,   372,    87,    87,   289,    34,    27,    73,
     176,    75,    86,    77,    86,   181,   370,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   598,    27,   252,
     468,   337,    88,    88,   402,    88,    87,    15,    27,    87,
     364,    87,    27,    86,    86,   598,   370,   371,    89,   373,
     242,     9,   244,   349,    87,   351,   424,   360,   361,    27,
      28,   357,   365,    87,   287,   368,   252,    25,    36,   372,
      34,    89,    95,    90,   377,    88,    74,    11,   381,    86,
     383,    89,    87,    89,    85,    27,    86,    55,    91,    47,
      84,   476,    50,    51,    52,    53,   399,    65,     9,   412,
     104,    69,    84,    61,   417,   418,    87,    84,   569,   477,
     548,    87,   573,    87,    25,    73,    27,    87,   341,    77,
      88,   344,    90,   491,    87,    93,   349,    84,   351,   526,
     526,   526,    86,    44,   357,    27,    47,    27,    65,    38,
     525,   526,    89,   111,   112,    27,    87,    49,    15,    38,
      90,    38,   120,    85,    89,    39,    89,    85,   126,     9,
     128,   529,    27,   349,    89,   351,    77,    27,    28,    85,
      91,   357,    22,   476,    38,    25,    36,    90,    87,    86,
     104,     4,     9,    87,    34,    35,    89,    15,   484,   485,
     651,    76,   560,   567,    91,    55,    37,    47,    25,    90,
     503,    89,    15,   577,     6,    65,   429,    34,    35,    15,
     513,    61,   515,    87,    86,    85,   492,    14,    89,   522,
      47,   606,   525,    73,    27,    75,    87,    77,    88,    15,
      90,    87,   600,    90,    61,    87,    87,   622,    87,    87,
      87,    86,    38,   567,    27,   569,    73,    91,    75,   573,
      77,    85,   548,   577,   643,    86,   563,    27,   655,   655,
     655,   484,   485,    37,    31,   568,    91,   570,   571,   572,
     655,    15,   640,   586,   642,    38,    38,    84,   591,    15,
      84,   678,    15,    38,    12,    27,    28,    87,    87,    87,
      91,    15,     8,   678,    84,   684,    91,    56,   484,   485,
      11,   604,    27,   606,    38,    27,    83,    86,    86,    25,
      27,    27,    28,    55,    87,   611,   611,    68,    34,   687,
      36,    37,   625,    65,    88,   548,    87,   651,    20,    45,
      27,    47,    10,    87,    10,    87,    89,    87,   645,    55,
     643,     8,   492,   579,   568,   570,    88,   383,    90,    65,
     646,   646,   380,    69,   515,    82,    86,   678,    25,   342,
      27,    28,   548,   548,   599,   248,   659,    34,   675,    36,
      37,    11,    88,   118,    90,   598,    92,    93,    45,   486,
      47,   684,   540,   684,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    11,    -1,    -1,   701,   111,   112,    -1,    65,   695,
     695,    -1,    69,    -1,   120,    -1,    -1,    -1,    -1,    -1,
     126,    -1,   128,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    90,    84,    92,    93,    -1,    88,    -1,
      90,    -1,    92,    12,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    12,    -1,    -1,    -1,    -1,   126,
      -1,   128,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    12,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    27,    28,    -1,    -1,
      27,    28,    -1,    -1,    -1,    36,    -1,    27,    28,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    65,    55,    84,    -1,    65,    -1,
      88,    -1,    90,    -1,    92,    65,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    88,    -1,    90,
      -1,    88,    93,    90,    -1,    -1,    93,    -1,    88,    -1,
      90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,    -1,    -1,   111,   112,    -1,    -1,    -1,   120,
      -1,   111,   112,   120,    -1,   126,     9,   128,    -1,   126,
     120,   128,     5,     6,    -1,    -1,   126,    -1,   128,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    38,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    47,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    54,    55,    56,    -1,    -1,    -1,    60,    -1,    62,
      73,    -1,    65,    -1,    77,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    -1,    -1,    -1,    88,    -1,    90,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    10,     9,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    52,    53,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
       3,    83,    84,    85,     7,    87,     9,    89,    88,    91,
      13,    -1,    -1,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,
      63,    -1,    -1,    66,    67,    -1,    -1,     3,    -1,    -1,
      73,     7,    75,     9,    77,    78,    79,    13,    81,    -1,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    61,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,     3,    -1,    -1,    73,     7,    75,
      -1,    77,    78,    79,    13,    81,    -1,    -1,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
       9,    -1,    -1,    42,    43,     9,    -1,    46,    25,    -1,
      27,    15,    -1,    -1,    -1,    -1,    25,    -1,    -1,    58,
      59,    25,    -1,    27,    63,    34,    35,    66,    67,    -1,
      47,    -1,    49,    50,    51,    52,    53,    -1,    47,    78,
      79,    70,    81,    47,    61,    -1,    50,    51,    52,    53,
      -1,    -1,    61,    -1,    -1,    -1,    73,    61,    -1,    -1,
      77,    -1,    -1,    71,    73,    -1,    75,    -1,    77,    73,
      -1,    -1,    -1,    77,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    85,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   130,   131,     0,     9,    25,    34,    35,    47,    48,
      61,    73,    75,    77,   132,   133,   135,   136,   143,   144,
     145,   146,   180,   182,   183,   186,   189,   193,   205,    27,
      25,    34,    47,    75,   146,   147,   148,   180,   183,   186,
     189,   193,   204,    27,    28,   181,    27,    27,    27,   187,
     188,    27,    27,   142,   190,   191,    84,     5,   155,   144,
      27,   184,   185,    84,    87,    88,   210,    27,   147,    27,
      27,    30,    76,   147,    85,    85,    87,    84,   210,    88,
     141,   104,    87,    87,    85,    86,    87,     6,    23,    26,
      27,    28,    29,    32,    36,    54,    55,    56,    60,    62,
      65,    72,    80,    82,    83,    88,    90,   149,   150,   151,
     154,   155,   156,   167,   168,   174,    86,   104,    87,    27,
      22,   143,   144,     9,    25,    44,    47,    77,   142,   192,
     211,   212,   213,    86,   210,   210,    87,   140,   144,   181,
     181,    27,    87,   142,    87,     8,    25,    27,    28,    34,
      37,    45,    47,    69,    88,    92,    93,   111,   112,   120,
     126,   128,   165,   166,   167,   215,   217,   218,   219,   220,
     223,   224,   225,   226,   228,   233,   237,   238,   249,   250,
     187,    34,   142,   215,   190,    27,   165,    27,    27,    28,
      86,    86,   165,    27,    88,   165,    88,   157,   177,   156,
     156,   165,   165,   171,    88,   158,    27,   171,   175,   176,
     165,   169,   170,    87,    15,    84,    88,    90,    92,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    27,   216,
     218,   219,   221,   227,   228,   250,   165,   184,   210,    87,
      87,   213,    27,   213,    27,   213,    86,    89,    87,   215,
      86,    87,    34,    15,   155,   210,     3,     7,    13,    17,
      19,    22,    24,    42,    43,    46,    58,    59,    63,    66,
      67,    78,    79,    81,   143,   206,   207,   208,   209,    89,
     143,   144,   210,    84,    15,    88,    90,   236,   210,    90,
      27,   142,   215,   167,   166,   167,   166,   167,   166,   166,
      12,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      15,    49,    50,    51,    52,    53,    77,    88,   183,   186,
     191,   193,   194,   195,   204,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     4,    18,    57,    64,   147,
      38,    95,   154,   154,    70,    88,   215,   171,    74,    16,
      21,    11,    85,    11,   165,   178,   179,    86,    89,    89,
      87,    12,    91,    85,   156,    27,   165,   172,   173,   171,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   104,
       4,    64,    86,   143,   210,   210,    69,   214,   219,   222,
     250,   211,    87,   215,   147,    84,    84,    87,    87,    87,
      87,    84,    84,   134,    86,    27,    27,    65,   234,   235,
     246,   247,    38,   165,    89,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,    27,   245,   142,    87,   248,
     195,   248,    15,   245,   242,   242,    90,    38,    15,    77,
     183,   186,   229,   230,   231,   232,   241,   245,   246,   255,
     256,    38,    30,    76,   159,   161,   162,   163,   164,   165,
     165,   154,   172,    85,    89,   165,    39,   152,   153,   156,
     154,   171,   154,    86,    89,    85,   165,    27,   175,   165,
     169,    89,    85,    91,   165,    90,    38,   215,    87,    86,
     104,     4,    22,   143,   209,    87,   143,   143,   208,   215,
      89,    91,    15,   234,    37,    91,    90,   196,    89,   245,
     165,   219,   253,   254,   215,   255,    15,   230,   230,   232,
       6,   257,   215,   140,    15,    14,    41,   160,    87,    86,
      85,    12,    71,    14,    89,   165,    27,    14,    15,    87,
      15,   165,   178,   172,   253,   216,    87,   215,    88,   168,
      90,    87,    87,    87,    87,    87,    38,    15,   236,    27,
      86,   198,    15,   239,    12,    91,    85,    27,   215,   258,
      15,    33,   137,   155,   156,   161,   154,   163,   165,   165,
     154,    89,    86,   156,   152,    86,    91,   143,    27,   251,
     252,   143,    37,   234,   198,   215,    31,   197,    15,   165,
      38,   253,    86,    38,    84,   138,   139,   183,   189,    15,
      84,    11,   219,    15,   165,    38,    87,    12,    91,    87,
      87,    15,    91,   168,    56,   199,   215,   215,   171,   259,
     260,   155,   138,    84,   154,    11,   216,    27,    38,   251,
      27,    83,   200,    86,    87,    87,   155,    86,   219,   222,
      27,    68,   201,    88,   259,    20,   215,    27,    10,   202,
     255,   138,   168,    87,    89,   155,    10,   203,    87,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   131,   130,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   149,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   162,   163,   163,   164,   164,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   168,   168,   168,   168,   168,   168,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     174,   175,   175,   176,   177,   178,   178,   179,   179,   179,
     180,   181,   181,   181,   181,   182,   182,   183,   184,   184,
     185,   185,   186,   187,   187,   188,   189,   190,   190,   191,
     192,   192,   193,   193,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   205,   205,   205,
     205,   205,   205,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   207,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   212,   212,   213,   213,   213,   214,   214,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   216,   216,   216,   217,   217,   217,   217,   218,
     219,   219,   219,   220,   221,   222,   222,   223,   224,   225,
     226,   227,   228,   228,   229,   229,   229,   230,   230,   231,
     231,   231,   231,   231,   231,   232,   233,   233,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     238,   238,   239,   239,   239,   240,   240,   240,   240,   241,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   244,
     245,   245,   246,   247,   248,   248,   248,   248,   249,   250,
     250,   251,   251,   252,   253,   253,   254,   254,   255,   255,
     256,   257,   258,   258,   259,   259,   259,   260
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
       2,     0,     2,     4,     6,     6,     8,     8,    10,     5,
       8,    10,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     3,     1,     3,     2,     2,
       2,     1,     1,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     2,     4,     4,
       1,     3,     1,     7,     7,     7,     7,     3,     3,     2,
       4,     4,     4,     3,     2,     1,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     4,     7,     5,     2,
       2,     1,     1,     1,     0,     3,     1,     1,     3,     6,
       5,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     3,     1,     1,     1,     1,     2,     2,     4,     0,
       1,     1,     3,     5,     1,     3,     1,     3,     2,     1,
       1,     4,     3,     1,     1,     2,     3,     5
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

    case YYSYMBOL_access_spec_tok: /* access_spec_tok  */
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
     { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
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
               { (yyval.n_decl) = new proc_def_node((yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 226: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 227: /* proc_def: PROCEDURE IDENT '.' IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 228: /* proc_def: FUNCTION IDENT '.' IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 229: /* proc_def: FUNCTION IDENT ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-4].tok), NULL, NULL, (yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 230: /* proc_def: PROCEDURE IDENT formal_params ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 231: /* proc_def: FUNCTION IDENT formal_params ':' type ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), NULL, NULL, (yyvsp[-8].tok), (yyvsp[-7].n_plist), (yyvsp[-6].tok), (yyvsp[-5].n_tpd), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 232: /* proc_def: FUNCTION IDENT ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-6].tok), NULL, NULL, (yyvsp[-5].tok), NULL, NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 252: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 253: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 254: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 255: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 257: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 258: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 259: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 260: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 261: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 263: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 264: /* param_decl: ident_list ':' param_type EQ constant  */
                                             { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 265: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 285: /* fptr_type: FUNCTION formal_params ':' type  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 286: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 287: /* fptr_type: PROCEDURE formal_params  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 288: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 289: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 290: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 291: /* simple_type: IDENT '.' IDENT  */
                      { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 292: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 293: /* array_type: packed ARRAY '[' indices ']' OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 294: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 295: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 296: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 297: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 298: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 299: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 300: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 301: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 302: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 303: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 304: /* record_body: record_field_list record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 307: /* record_components: record_component record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 310: /* record_component: access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 311: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 315: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 316: /* interface_type: INTERFACE guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 317: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 318: /* interface_type: INTERFACE '(' IDENT ')' END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 319: /* interface_type: INTERFACE END  */
       { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 320: /* interface_components: interface_component interface_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 324: /* guid: %empty  */
      { (yyval.n_decl) = NULL; }
    break;

  case 325: /* guid: '[' SCONST ']'  */
       { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 328: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 329: /* class_type: class_or_object '(' ident_list ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 330: /* class_type: class_or_object '(' ident_list ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 331: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 332: /* object_body: field_decl_list object_components  */
       { 
         // rare case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
       }
    break;

  case 334: /* object_body: field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 339: /* access_spec_decl: access_spec_tok  */
                                  { (yyval.n_decl) = new access_specifier_node((yyvsp[0].tok)); }
    break;

  case 340: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 343: /* object_component: access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 349: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 350: /* field_decl_list: var_decl ';'  */
                  { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 351: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 352: /* object_methods: proc_fwd_decl_list  */
       { (yyval.n_decl) = new proc_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 353: /* object_properties: property_decl_list  */
       { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 356: /* proc_fwd_decl_list: proc_fwd_decl proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 357: /* proc_fwd_decl_list: proc_spec proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 358: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 359: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 362: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 363: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 365: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 366: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 367: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 368: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 369: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 371: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 372: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 373: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 375: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 376: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 377: /* variant: expr_list ':' '(' field_list ')'  */
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


