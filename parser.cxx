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
  YYSYMBOL_FINALLY = 20,                   /* FINALLY  */
  YYSYMBOL_FFALSE = 21,                    /* FFALSE  */
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
  YYSYMBOL_INTERFACE = 33,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 34,                     /* LABEL  */
  YYSYMBOL_LOOPHOLE = 35,                  /* LOOPHOLE  */
  YYSYMBOL_OBJECT = 36,                    /* OBJECT  */
  YYSYMBOL_OF = 37,                        /* OF  */
  YYSYMBOL_ON = 38,                        /* ON  */
  YYSYMBOL_ORIGIN = 39,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 40,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 41,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 42,                  /* OVERRIDE  */
  YYSYMBOL_PACKED = 43,                    /* PACKED  */
  YYSYMBOL_PASCAL = 44,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 45,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 46,                   /* PROGRAM  */
  YYSYMBOL_PROPERTY = 47,                  /* PROPERTY  */
  YYSYMBOL_PRIVATE = 48,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 49,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 50,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 51,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 52,                     /* RAISE  */
  YYSYMBOL_RCONST = 53,                    /* RCONST  */
  YYSYMBOL_READ = 54,                      /* READ  */
  YYSYMBOL_RECORD = 55,                    /* RECORD  */
  YYSYMBOL_REGISTER = 56,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 57,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 58,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 59,            /* RESOURCESTRING  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_SAFECALL = 61,                  /* SAFECALL  */
  YYSYMBOL_SET = 62,                       /* SET  */
  YYSYMBOL_SCONST = 63,                    /* SCONST  */
  YYSYMBOL_STATIC = 64,                    /* STATIC  */
  YYSYMBOL_STDCALL = 65,                   /* STDCALL  */
  YYSYMBOL_STORED = 66,                    /* STORED  */
  YYSYMBOL_STRING = 67,                    /* STRING  */
  YYSYMBOL_THEN = 68,                      /* THEN  */
  YYSYMBOL_TO = 69,                        /* TO  */
  YYSYMBOL_TTRUE = 70,                     /* TTRUE  */
  YYSYMBOL_TRY = 71,                       /* TRY  */
  YYSYMBOL_TYPE = 72,                      /* TYPE  */
  YYSYMBOL_UNTIL = 73,                     /* UNTIL  */
  YYSYMBOL_UNIT = 74,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 75,                  /* UNIT_END  */
  YYSYMBOL_VAR = 76,                       /* VAR  */
  YYSYMBOL_VARARGS = 77,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 78,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 79,                     /* WHILE  */
  YYSYMBOL_WINAPI = 80,                    /* WINAPI  */
  YYSYMBOL_WITH = 81,                      /* WITH  */
  YYSYMBOL_WRITE = 82,                     /* WRITE  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* ','  */
  YYSYMBOL_85_ = 85,                       /* ':'  */
  YYSYMBOL_86_ = 86,                       /* ';'  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* ')'  */
  YYSYMBOL_89_ = 89,                       /* '['  */
  YYSYMBOL_90_ = 90,                       /* ']'  */
  YYSYMBOL_91_ = 91,                       /* '^'  */
  YYSYMBOL_92_ = 92,                       /* '@'  */
  YYSYMBOL_SCOPE = 93,                     /* SCOPE  */
  YYSYMBOL_LET = 94,                       /* LET  */
  YYSYMBOL_LETADD = 95,                    /* LETADD  */
  YYSYMBOL_LETSUB = 96,                    /* LETSUB  */
  YYSYMBOL_LETDIV = 97,                    /* LETDIV  */
  YYSYMBOL_LETMUL = 98,                    /* LETMUL  */
  YYSYMBOL_LETAND = 99,                    /* LETAND  */
  YYSYMBOL_LETOR = 100,                    /* LETOR  */
  YYSYMBOL_LETSHL = 101,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 102,                   /* LETSHR  */
  YYSYMBOL_EQ = 103,                       /* EQ  */
  YYSYMBOL_NE = 104,                       /* NE  */
  YYSYMBOL_LT = 105,                       /* LT  */
  YYSYMBOL_LE = 106,                       /* LE  */
  YYSYMBOL_GT = 107,                       /* GT  */
  YYSYMBOL_GE = 108,                       /* GE  */
  YYSYMBOL_IN = 109,                       /* IN  */
  YYSYMBOL_PLUS = 110,                     /* PLUS  */
  YYSYMBOL_MINUS = 111,                    /* MINUS  */
  YYSYMBOL_OR = 112,                       /* OR  */
  YYSYMBOL_XOR = 113,                      /* XOR  */
  YYSYMBOL_BINOR = 114,                    /* BINOR  */
  YYSYMBOL_MOD = 115,                      /* MOD  */
  YYSYMBOL_DIV = 116,                      /* DIV  */
  YYSYMBOL_DIVR = 117,                     /* DIVR  */
  YYSYMBOL_MUL = 118,                      /* MUL  */
  YYSYMBOL_AND = 119,                      /* AND  */
  YYSYMBOL_SHR = 120,                      /* SHR  */
  YYSYMBOL_SHL = 121,                      /* SHL  */
  YYSYMBOL_BINAND = 122,                   /* BINAND  */
  YYSYMBOL_UPLUS = 123,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 124,                   /* UMINUS  */
  YYSYMBOL_NOT = 125,                      /* NOT  */
  YYSYMBOL_ADDRESS = 126,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 127,                   /* BINNOT  */
  YYSYMBOL_YYACCEPT = 128,                 /* $accept  */
  YYSYMBOL_translation = 129,              /* translation  */
  YYSYMBOL_130_1 = 130,                    /* $@1  */
  YYSYMBOL_input_file = 131,               /* input_file  */
  YYSYMBOL_program = 132,                  /* program  */
  YYSYMBOL_progend = 133,                  /* progend  */
  YYSYMBOL_module = 134,                   /* module  */
  YYSYMBOL_unit = 135,                     /* unit  */
  YYSYMBOL_unit_def_list = 136,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 137,          /* prog_param_list  */
  YYSYMBOL_ident_list = 138,               /* ident_list  */
  YYSYMBOL_block = 139,                    /* block  */
  YYSYMBOL_decl_part_list = 140,           /* decl_part_list  */
  YYSYMBOL_decl_part = 141,                /* decl_part  */
  YYSYMBOL_unit_spec = 142,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 143,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 144,                /* unit_decl  */
  YYSYMBOL_inherited = 145,                /* inherited  */
  YYSYMBOL_try_finally = 146,              /* try_finally  */
  YYSYMBOL_try_except = 147,               /* try_except  */
  YYSYMBOL_except_many = 148,              /* except_many  */
  YYSYMBOL_except = 149,                   /* except  */
  YYSYMBOL_statement = 150,                /* statement  */
  YYSYMBOL_compoundst = 151,               /* compoundst  */
  YYSYMBOL_sequence = 152,                 /* sequence  */
  YYSYMBOL_actual_params = 153,            /* actual_params  */
  YYSYMBOL_write_params = 154,             /* write_params  */
  YYSYMBOL_case_list = 155,                /* case_list  */
  YYSYMBOL_otherwise = 156,                /* otherwise  */
  YYSYMBOL_case_items = 157,               /* case_items  */
  YYSYMBOL_case_item = 158,                /* case_item  */
  YYSYMBOL_case_elem_list = 159,           /* case_elem_list  */
  YYSYMBOL_case_elem = 160,                /* case_elem  */
  YYSYMBOL_expr = 161,                     /* expr  */
  YYSYMBOL_simple_expr = 162,              /* simple_expr  */
  YYSYMBOL_primary = 163,                  /* primary  */
  YYSYMBOL_constant = 164,                 /* constant  */
  YYSYMBOL_set_elem_list = 165,            /* set_elem_list  */
  YYSYMBOL_set_elem = 166,                 /* set_elem  */
  YYSYMBOL_expr_list = 167,                /* expr_list  */
  YYSYMBOL_act_param_list = 168,           /* act_param_list  */
  YYSYMBOL_act_param = 169,                /* act_param  */
  YYSYMBOL_record_constant = 170,          /* record_constant  */
  YYSYMBOL_field_init_list = 171,          /* field_init_list  */
  YYSYMBOL_field_init_item = 172,          /* field_init_item  */
  YYSYMBOL_expr_group = 173,               /* expr_group  */
  YYSYMBOL_write_list = 174,               /* write_list  */
  YYSYMBOL_write_param = 175,              /* write_param  */
  YYSYMBOL_label_decl_part = 176,          /* label_decl_part  */
  YYSYMBOL_label_list = 177,               /* label_list  */
  YYSYMBOL_const = 178,                    /* const  */
  YYSYMBOL_const_def_part = 179,           /* const_def_part  */
  YYSYMBOL_const_def_list = 180,           /* const_def_list  */
  YYSYMBOL_const_def = 181,                /* const_def  */
  YYSYMBOL_type_def_part = 182,            /* type_def_part  */
  YYSYMBOL_type_def_list = 183,            /* type_def_list  */
  YYSYMBOL_type_def = 184,                 /* type_def  */
  YYSYMBOL_var_decl_part = 185,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 186,            /* var_decl_list  */
  YYSYMBOL_var_decl = 187,                 /* var_decl  */
  YYSYMBOL_proc_decl = 188,                /* proc_decl  */
  YYSYMBOL_proc_fwd_decl = 189,            /* proc_fwd_decl  */
  YYSYMBOL_property_decl = 190,            /* property_decl  */
  YYSYMBOL_property_decl_list = 191,       /* property_decl_list  */
  YYSYMBOL_prop_array = 192,               /* prop_array  */
  YYSYMBOL_prop_index = 193,               /* prop_index  */
  YYSYMBOL_prop_type_def = 194,            /* prop_type_def  */
  YYSYMBOL_prop_read = 195,                /* prop_read  */
  YYSYMBOL_prop_write = 196,               /* prop_write  */
  YYSYMBOL_prop_stored = 197,              /* prop_stored  */
  YYSYMBOL_prop_default = 198,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 199,   /* prop_default_directive  */
  YYSYMBOL_boolean = 200,                  /* boolean  */
  YYSYMBOL_proc_spec = 201,                /* proc_spec  */
  YYSYMBOL_proc_def = 202,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 203,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 204,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 205,                /* qualifier  */
  YYSYMBOL_qualifiers = 206,               /* qualifiers  */
  YYSYMBOL_formal_params = 207,            /* formal_params  */
  YYSYMBOL_formal_param_list = 208,        /* formal_param_list  */
  YYSYMBOL_formal_param = 209,             /* formal_param  */
  YYSYMBOL_param_decl = 210,               /* param_decl  */
  YYSYMBOL_param_type = 211,               /* param_type  */
  YYSYMBOL_type = 212,                     /* type  */
  YYSYMBOL_const_type = 213,               /* const_type  */
  YYSYMBOL_fptr_type = 214,                /* fptr_type  */
  YYSYMBOL_string_type = 215,              /* string_type  */
  YYSYMBOL_simple_type = 216,              /* simple_type  */
  YYSYMBOL_array_type = 217,               /* array_type  */
  YYSYMBOL_const_array_type = 218,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 219,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 220,                /* enum_type  */
  YYSYMBOL_range_type = 221,               /* range_type  */
  YYSYMBOL_pointer_type = 222,             /* pointer_type  */
  YYSYMBOL_set_type = 223,                 /* set_type  */
  YYSYMBOL_const_set_type = 224,           /* const_set_type  */
  YYSYMBOL_record_type = 225,              /* record_type  */
  YYSYMBOL_record_body = 226,              /* record_body  */
  YYSYMBOL_record_components = 227,        /* record_components  */
  YYSYMBOL_record_component = 228,         /* record_component  */
  YYSYMBOL_record_field_list = 229,        /* record_field_list  */
  YYSYMBOL_class_or_object = 230,          /* class_or_object  */
  YYSYMBOL_class_type = 231,               /* class_type  */
  YYSYMBOL_object_body = 232,              /* object_body  */
  YYSYMBOL_access_spec_tok = 233,          /* access_spec_tok  */
  YYSYMBOL_access_spec_decl = 234,         /* access_spec_decl  */
  YYSYMBOL_object_components = 235,        /* object_components  */
  YYSYMBOL_object_component = 236,         /* object_component  */
  YYSYMBOL_field_decl_part = 237,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 238,          /* field_decl_list  */
  YYSYMBOL_object_methods = 239,           /* object_methods  */
  YYSYMBOL_object_properties = 240,        /* object_properties  */
  YYSYMBOL_proc_fwd_decl_list = 241,       /* proc_fwd_decl_list  */
  YYSYMBOL_file_type = 242,                /* file_type  */
  YYSYMBOL_packed = 243,                   /* packed  */
  YYSYMBOL_conformant_indices = 244,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 245,         /* conformant_index  */
  YYSYMBOL_indices = 246,                  /* indices  */
  YYSYMBOL_index_spec = 247,               /* index_spec  */
  YYSYMBOL_field_list = 248,               /* field_list  */
  YYSYMBOL_fixed_part = 249,               /* fixed_part  */
  YYSYMBOL_variant_part = 250,             /* variant_part  */
  YYSYMBOL_selector = 251,                 /* selector  */
  YYSYMBOL_variant_list = 252,             /* variant_list  */
  YYSYMBOL_variant = 253                   /* variant  */
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
#define YYLAST   1639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  359
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  673

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   372


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      87,    88,     2,     2,    84,     2,    83,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    86,
       2,     2,     2,     2,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,    91,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   359,   359,   359,   384,   384,   384,   386,   387,   390,
     390,   392,   393,   399,   401,   403,   405,   408,   411,   412,
     414,   415,   417,   420,   421,   423,   423,   423,   423,   424,
     424,   424,   426,   428,   432,   433,   435,   435,   435,   435,
     436,   436,   436,   465,   466,   468,   472,   475,   477,   480,
     481,   483,   484,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   503,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   520,   522,   522,   524,   524,   526,   527,
     529,   530,   542,   542,   544,   545,   546,   548,   550,   551,
     553,   554,   578,   579,   580,   581,   582,   583,   584,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   597,   598,
     599,   600,   601,   602,   603,   605,   606,   607,   608,   609,
     610,   611,   613,   614,   616,   618,   620,   622,   623,   625,
     626,   627,   628,   629,   630,   631,   633,   634,   635,   636,
     637,   638,   640,   641,   642,   644,   645,   647,   647,   649,
     650,   652,   652,   655,   659,   660,   662,   665,   668,   668,
     670,   671,   672,   714,   717,   718,   719,   720,   722,   722,
     724,   727,   728,   730,   731,   733,   736,   737,   739,   741,
     744,   758,   760,   766,   768,   773,   775,   778,   782,   783,
     785,   786,   788,   789,   791,   792,   794,   795,   797,   798,
     800,   801,   803,   804,   806,   807,   810,   810,   813,   815,
     819,   821,   823,   825,   827,   829,   831,   833,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   838,   838,
     838,   838,   838,   838,   838,   840,   840,   842,   843,   847,
     848,   850,   851,   853,   854,   855,   856,   858,   859,   860,
     862,   862,   868,   868,   868,   868,   868,   868,   869,   869,
     869,   869,   869,   871,   871,   871,   871,   871,   873,   875,
     877,   879,   882,   884,   885,   887,   890,   893,   895,   898,
     900,   903,   905,   907,   916,   918,   921,   928,   929,   931,
     937,   939,   940,   942,   944,   945,   946,   948,   951,   951,
     953,   955,   957,   959,   964,   971,   972,   975,   975,   975,
     975,   977,   979,   986,   988,   989,   991,   992,   993,   994,
     995,   998,  1002,  1003,  1005,  1008,  1011,  1011,  1012,  1013,
    1016,  1018,  1018,  1020,  1021,  1023,  1026,  1027,  1030,  1031,
    1034,  1036,  1039,  1041,  1044,  1045,  1048,  1049,  1050,  1052
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
  "FINALLY", "FFALSE", "FAR", "FOR", "FORWARD", "FUNCTION", "GOTO",
  "IDENT", "ICONST", "IF", "IMPLEMENTATION", "INDEX", "INHERITED",
  "INTERFACE", "LABEL", "LOOPHOLE", "OBJECT", "OF", "ON", "ORIGIN",
  "OTHERWISE", "OVERLOAD", "OVERRIDE", "PACKED", "PASCAL", "PROCEDURE",
  "PROGRAM", "PROPERTY", "PRIVATE", "PROTECTED", "PUBLIC", "PUBLISHED",
  "RAISE", "RCONST", "READ", "RECORD", "REGISTER", "REINTRODUCE", "REPEAT",
  "RESOURCESTRING", "RETURN", "SAFECALL", "SET", "SCONST", "STATIC",
  "STDCALL", "STORED", "STRING", "THEN", "TO", "TTRUE", "TRY", "TYPE",
  "UNTIL", "UNIT", "UNIT_END", "VAR", "VARARGS", "VIRTUAL", "WHILE",
  "WINAPI", "WITH", "WRITE", "'.'", "','", "':'", "';'", "'('", "')'",
  "'['", "']'", "'^'", "'@'", "SCOPE", "LET", "LETADD", "LETSUB", "LETDIV",
  "LETMUL", "LETAND", "LETOR", "LETSHL", "LETSHR", "EQ", "NE", "LT", "LE",
  "GT", "GE", "IN", "PLUS", "MINUS", "OR", "XOR", "BINOR", "MOD", "DIV",
  "DIVR", "MUL", "AND", "SHR", "SHL", "BINAND", "UPLUS", "UMINUS", "NOT",
  "ADDRESS", "BINNOT", "$accept", "translation", "$@1", "input_file",
  "program", "progend", "module", "unit", "unit_def_list",
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
  "prop_default_directive", "boolean", "proc_spec", "proc_def",
  "fun_qualifier", "meth_qualifier", "qualifier", "qualifiers",
  "formal_params", "formal_param_list", "formal_param", "param_decl",
  "param_type", "type", "const_type", "fptr_type", "string_type",
  "simple_type", "array_type", "const_array_type", "conformant_array_type",
  "enum_type", "range_type", "pointer_type", "set_type", "const_set_type",
  "record_type", "record_body", "record_components", "record_component",
  "record_field_list", "class_or_object", "class_type", "object_body",
  "access_spec_tok", "access_spec_decl", "object_components",
  "object_component", "field_decl_part", "field_decl_list",
  "object_methods", "object_properties", "proc_fwd_decl_list", "file_type",
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

#define YYPACT_NINF (-501)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-284)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -501,    79,   253,  -501,  -501,    91,   532,   140,   106,   136,
    -501,   150,   153,   157,  -501,  -501,  -501,  -501,    65,   187,
    1300,  -501,  -501,   173,  -501,  -501,  -501,  -501,  -501,    58,
     180,   532,   182,   184,  -501,    31,   532,  -501,  -501,  -501,
    -501,  -501,  -501,    74,   130,   168,     3,   176,   114,  -501,
     169,   178,   186,   188,  -501,   181,  -501,  1006,  -501,  -501,
      -4,  -501,   185,   241,  1263,    95,   189,   190,   204,   190,
     194,  1300,  -501,  -501,   140,   140,  -501,   255,   205,   157,
     207,   518,   150,   257,   157,   518,   157,   832,   267,   142,
     210,   215,   832,   275,   216,   832,  -501,   217,  1006,  -501,
    -501,  1006,   832,   832,   219,   852,   832,  -501,  -501,  -501,
     222,  -501,   296,   953,  -501,  -501,    41,   832,   173,   190,
     227,   228,   187,   157,   288,   291,   157,   235,  -501,   233,
     236,  -501,   518,   239,   240,   295,    78,  -501,  -501,  -501,
     190,  1102,   242,  1300,  -501,   190,   377,  -501,  -501,  -501,
     190,   243,   863,   518,   567,   832,   832,   567,   832,   832,
     655,  -501,  1537,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    -501,  -501,  -501,  1053,  -501,  -501,    69,  -501,   532,  -501,
    -501,  -501,  -501,   888,   244,  -501,  -501,  1006,  1006,  1274,
     247,   518,  1497,   832,  -501,  -501,   262,   116,   614,  1333,
     325,   832,  -501,   252,   251,   258,   254,   675,   260,   259,
    1006,  -501,   318,   832,   832,  -501,   832,   832,   832,   832,
     832,   832,   832,   832,   832,  -501,   249,  -501,  -501,  -501,
    -501,  -501,    39,  1497,  -501,   268,  1300,  -501,  -501,   190,
     190,  -501,    62,  -501,    95,   261,   518,  1234,   532,   272,
     273,   276,  -501,  -501,  -501,  -501,  -501,   281,  -501,  -501,
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
     285,  -501,  -501,  -501,   286,  -501,   302,    36,   289,   349,
     832,   131,   300,  -501,   121,  -501,   121,  -501,   121,  -501,
    -501,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,  -501,   367,  -501,  -501,  -501,  -501,   157,   368,  -501,
    -501,   313,    37,   353,  -501,    37,   387,  -501,   157,  -501,
     333,  -501,   333,  -501,  -501,  -501,   315,   369,   633,   370,
      48,   832,   832,  -501,  -501,  1006,   832,   326,   323,   832,
     374,  1006,  1006,   832,  1006,  1371,   328,   329,   832,  -501,
    -501,   390,   832,  -501,   832,  -501,  -501,  1497,   330,   335,
     331,  1497,  1497,  1497,  1497,  1497,  1497,  1497,  1497,  1497,
     832,   334,   385,   518,   338,   341,  -501,  -501,   324,  -501,
    -501,   424,  -501,  1168,   347,   359,  -501,  -501,  1300,  1300,
    -501,  1234,  -501,  -501,  -501,   518,   399,  1477,  -501,  1497,
     903,   903,   903,   903,   903,   903,   903,   704,   704,   704,
     704,   704,  -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
    1497,  1497,  1497,  1497,  1497,  1497,  1497,  1497,  1497,   348,
    -501,   350,   157,  -501,  -501,  -501,  -501,  -501,  -501,  -501,
     821,   518,  -501,   157,  -501,  -501,   421,  -501,  1268,  1268,
     157,  -501,  -501,  -501,   434,   518,  1300,  -501,   426,    52,
     358,   360,   364,   696,  1294,   432,   372,   832,  -501,  1497,
     423,   183,   371,   440,  -501,  -501,  -501,   832,  -501,   832,
    1497,   252,  -501,  1497,  -501,  -501,   832,  -501,  1497,   821,
      41,   378,  -501,   518,   362,   379,   380,   383,   384,  1234,
     388,   389,  -501,   436,  -501,  -501,   431,   386,  1256,  -501,
     725,  -501,   392,   395,  -501,  -501,  -501,  -501,  -501,  -501,
     588,  -501,  -501,   122,  -501,  -501,  -501,  1006,   832,  1006,
     832,   832,   832,  1006,  -501,  1444,   391,  1006,  -501,   374,
    -501,  1409,  -501,  -501,   397,  -501,  1300,  -501,   390,  -501,
     453,  1300,  -501,  1234,  -501,  -501,   452,   386,   518,   460,
    -501,   477,   832,   458,   821,   -11,  -501,   461,   416,   417,
    -501,  -501,  -501,  -501,  1497,   635,  -501,  -501,     5,   486,
    -501,   832,   466,   419,   494,   420,   428,   433,  -501,   435,
    -501,   362,   455,  -501,  1497,   518,  -501,   518,   832,  -501,
    -501,  1006,   496,  -501,  1497,    41,  -501,   495,   484,   453,
    -501,  -501,  -501,   500,   447,  -501,  -501,   450,  -501,   454,
    -501,   187,  -501,   451,    62,  -501,  -501,   511,   473,   457,
     832,  -501,   518,  -501,  -501,  -501,    10,   537,   157,  -501,
    -501,  -501,  -501,  -501,   362,   456,   462,  -501,   538,  -501,
     469,  -501,  -501
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    23,     1,   178,     0,    34,     0,     0,     0,
     179,   186,     0,   190,     3,     4,     5,     6,     0,    11,
      23,    31,    25,   181,    26,    27,    28,    30,    29,   249,
       0,    34,     0,     0,    42,     0,    34,    36,    37,    38,
      39,    41,    40,   176,   174,     0,   249,    18,     0,   185,
       0,     0,    21,     0,   189,     0,     7,    53,    22,    24,
       0,   180,     0,     0,    23,     0,     0,   249,     0,   249,
       0,    23,    33,    35,     0,     0,   173,     0,     0,     0,
       0,   341,   186,     0,     0,   341,   190,     0,     0,     0,
     151,   147,     0,    43,     0,     0,   148,    86,    53,    75,
     149,    53,     0,     0,    88,     0,   152,    82,    80,    81,
      84,    79,     0,    74,   139,   146,   341,     0,   181,   249,
       0,     0,     0,     0,     0,     0,     0,   259,   256,     0,
     251,   255,   341,     0,     0,     0,     0,    17,   177,   175,
     249,    23,     0,    23,   309,   249,   151,   147,   308,   342,
     249,   284,     0,   341,     0,     0,     0,     0,     0,     0,
       0,   102,   132,   188,   272,   271,   262,   263,   269,   270,
     268,   266,   264,     0,   265,   267,     0,   187,    34,    20,
     192,   191,   151,     0,     0,    64,    63,    53,    53,     0,
      44,   341,    73,     0,    72,    87,     0,     0,     0,   157,
       0,     0,    71,   151,     0,     0,   164,   155,     0,   153,
      53,    83,     0,   162,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,   277,   273,   274,
     276,   275,     0,   183,   182,     0,    23,   224,   254,   249,
     249,   253,   341,   250,     0,     0,   341,   218,    34,     0,
       0,     0,   239,   232,   241,   237,   244,     0,   228,   229,
     243,   231,   230,   238,   234,   242,   233,   236,   240,   235,
       0,   245,   246,   247,     0,    19,     0,     9,     0,   280,
       0,   151,     0,   291,   137,   133,   132,   134,   138,   135,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   313,     0,   317,   319,   318,   320,     0,     0,   329,
     330,     0,   336,   198,   335,   337,     0,   321,   324,   315,
     323,   326,   316,   327,   328,   334,     0,     0,     0,     0,
       0,    94,     0,    78,    77,    53,   162,     0,     0,     0,
      51,    53,    53,     0,    53,   170,     0,   168,     0,   140,
     163,     0,     0,   150,   152,    85,   142,   161,     0,   159,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,   341,     0,     0,   193,   284,   257,   260,
     261,     0,   252,    23,     0,     0,    15,    16,    23,    23,
     220,   195,     8,    10,    12,   341,     0,     0,   289,   290,
     129,   130,   126,   127,   125,   128,   131,   103,   104,   122,
     124,   123,   105,   107,   108,   106,   118,   121,   120,   119,
     109,   110,   111,   112,   113,   116,   117,   114,   115,   200,
     331,     0,   332,   338,   199,   339,   310,   325,   322,   314,
       0,   341,   295,     0,   305,   306,     0,   297,   300,   298,
     301,   352,   304,   307,   351,   341,    23,    32,     0,    90,
      95,     0,    98,   100,     0,    66,     0,     0,   167,    70,
       0,     0,    49,     0,    69,   158,    76,     0,    89,     0,
     166,     0,   165,   156,   154,   141,   162,   144,   184,     0,
     341,     0,   227,   341,     0,     0,     0,     0,     0,   219,
       0,     0,   248,   278,   281,   282,     0,   204,     0,   333,
       0,   348,     0,   346,   340,   303,   294,   299,   296,   302,
     341,   350,   292,     0,    65,    93,    92,    53,    94,    53,
       0,     0,     0,    53,    45,     0,     0,    53,    47,    51,
      46,   171,   169,   160,     0,   293,    23,   194,     0,   258,
       0,    23,   221,   196,   222,   225,     0,   204,   341,   202,
     312,     0,     0,     0,     0,   151,   355,     0,     0,     0,
      91,    96,    97,    99,   101,     0,    67,   145,     0,     0,
      50,     0,     0,     0,     0,     0,   343,     0,   279,     0,
     205,     0,   206,   311,   349,   341,   347,   341,     0,    13,
      14,    53,     0,    48,   172,   341,   223,     0,     0,     0,
     226,   201,   203,     0,   208,   285,   354,     0,   353,   356,
      68,     0,   286,     0,   341,   344,   207,     0,   210,     0,
     357,    52,   341,   287,   288,   209,     0,   212,     0,   358,
     345,   217,   216,   211,     0,     0,     0,   213,   214,   359,
       0,   197,   215
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -501,  -501,  -501,  -501,  -501,  -501,  -501,  -501,    82,  -501,
      12,   -43,    17,  -501,    11,    13,  -501,  -501,  -501,  -501,
       0,  -501,  -174,   -19,   -95,  -501,  -501,  -501,  -501,    14,
    -501,    19,  -501,   -67,    20,   -45,  -490,   193,  -501,   -98,
    -340,  -501,  -501,   199,  -501,  -501,    61,  -501,    24,   146,
    -501,    21,   446,  -501,    28,   490,  -501,    27,   487,    16,
    -501,     9,  -501,   245,  -501,  -501,    -3,  -501,  -501,  -501,
    -501,  -501,  -501,    40,  -501,  -501,  -501,  -400,  -380,   214,
     336,  -501,   -72,  -501,   -84,  -500,  -501,  -109,  -112,  -501,
    -501,   -69,  -501,  -501,  -501,  -501,  -501,  -107,  -501,  -246,
    -501,   109,  -501,  -501,    54,  -501,  -283,  -181,  -501,  -501,
    -155,  -273,  -501,  -265,  -501,  -114,   -42,  -501,  -487,  -501,
    -455,  -501,  -501,  -501,   -66,  -501
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    14,    15,   414,    16,    17,   136,    80,
      53,    18,   122,    20,    21,    35,    36,   107,   108,   109,
     491,   492,   110,   111,   112,   194,   202,   478,   547,   479,
     480,   481,   482,   160,   161,   162,   114,   208,   209,   204,
     378,   379,   115,   205,   206,   195,   366,   367,    22,    45,
      23,    24,    61,    62,    25,    49,    50,    26,    54,   331,
     128,    27,   333,   334,   527,   612,   579,   634,   648,   657,
     665,   671,   663,   335,    28,   271,   272,   273,   274,    66,
     129,   130,   131,   398,   163,   226,   164,   165,   166,   167,
     229,   400,   168,   169,   170,   171,   230,   172,   466,   467,
     468,   469,   173,   174,   336,   337,   338,   339,   340,   341,
     471,   343,   344,   345,   175,   176,   605,   606,   532,   533,
     473,   474,   541,   587,   638,   639
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,   180,   232,   196,   228,   200,   197,   227,   535,   231,
     565,   522,   113,   353,   354,    41,   486,    34,   342,    19,
     183,   121,   564,   518,   569,   189,  -283,    38,   192,    55,
      37,   661,   225,    40,    39,   198,   199,    59,   199,   207,
      41,    57,    34,   391,    68,    41,    42,    34,   245,    73,
     233,   238,    38,   113,   241,    37,   113,    38,    40,    39,
      37,    71,    30,    40,    39,   470,   545,   453,   225,   283,
     455,    42,   397,   346,   617,   472,    42,   127,   476,     3,
     662,   116,    32,    57,   149,   199,    77,   347,   137,   225,
      65,   142,   546,   249,   348,   358,   179,   616,   270,   117,
     276,   392,    55,    58,   123,   149,    72,   357,   151,   284,
     286,   286,   288,   286,   286,   375,   380,   250,    29,   413,
     124,   632,    52,   477,   348,   642,   199,    57,   401,   397,
     399,   349,   360,    46,   365,   127,   361,   588,   127,   518,
     125,    63,   113,   113,    64,    65,   377,   199,    56,   381,
     382,   383,   384,   385,   386,   387,   388,   389,    74,   458,
     277,   459,   404,    47,   282,   113,   563,    43,    44,   185,
     186,   126,   450,   522,   667,   285,   287,    48,   289,   290,
      51,   485,   332,   457,    52,   470,   470,    41,   494,    34,
     496,   350,    57,   394,   329,   472,   472,   557,   558,    38,
      60,   330,    37,   666,   212,    40,    39,    67,   213,    69,
     214,    70,   215,   417,    75,    84,   368,    81,    42,   -21,
     138,   139,   537,   538,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,    76,    82,   127,    41,    58,    34,
      78,   405,     4,    79,    83,   495,   493,    86,   119,    38,
      84,   118,    37,    85,   132,    40,    39,    65,     5,    72,
     135,   133,   140,   134,   483,   484,     6,     7,    42,   377,
     178,   141,   489,   143,   184,   187,   199,   529,     8,     9,
     188,   500,   190,   191,   193,   503,   201,   207,   210,   511,
     113,   211,    10,   236,   237,   239,   113,   113,   240,   113,
     242,   243,   244,   508,   246,    11,   247,    12,   248,    13,
     275,   523,   280,   235,   356,   359,   364,   368,   352,   369,
     371,   332,     4,   374,   332,   376,   370,   403,   531,   332,
     373,   332,   390,   393,   251,   406,   407,   332,    30,   278,
     517,   329,   408,   329,   279,   520,   521,   409,   330,   464,
     330,   410,   411,   342,   415,   592,   465,   534,    32,   596,
     322,   323,   324,   325,   326,   412,   416,  -283,   418,   182,
     147,   542,    10,   530,   449,   451,   232,   531,   228,   452,
     322,   227,   456,   231,   460,    11,   461,   475,  -283,   327,
     487,   488,   490,   499,  -283,    96,   498,   501,   505,   506,
     555,   507,   510,   509,   512,   100,   513,   514,   515,   567,
     561,  -283,   365,   519,   477,   524,   536,   526,   528,   377,
     540,   544,   530,  -283,   548,   549,   553,   640,   550,   568,
     556,   106,   590,   395,   396,   560,   586,   559,   577,  -283,
     554,  -283,   599,  -283,   566,  -283,   571,  -283,   570,   572,
     573,   578,   531,   576,   574,   575,   598,   332,   332,   584,
     604,   483,   583,   483,   594,   595,   622,   602,   608,   464,
     464,   611,   613,   137,   610,   615,   465,   465,   618,   619,
     620,   623,   113,   625,   113,   626,   627,   641,   113,   633,
     628,   232,   113,   228,   629,   614,   227,   530,   231,   630,
     637,   644,   643,   603,   589,   631,   144,   646,   607,   647,
     401,   635,   653,   636,   624,   649,   652,   332,   655,   656,
     650,     4,   668,   145,   658,   146,   147,   664,   670,   329,
     669,   199,   637,    94,   148,   672,   330,    30,   543,   600,
     562,   149,   591,   150,   234,    31,     7,   504,   660,   593,
     502,    96,   177,   181,   609,   654,   113,    32,   454,   539,
     402,   100,   581,   199,   659,   151,     0,   645,     0,     0,
       0,    10,     0,     0,   182,   147,   144,     0,     0,     0,
       0,     0,    94,     0,    11,   152,    33,   106,    13,   153,
     154,     0,     0,   145,     0,   585,   147,     0,     0,     0,
      96,     0,   651,    94,   148,   362,     0,     0,   155,   156,
     100,   149,     0,   150,     0,     0,     0,   157,     0,     0,
       0,    96,     4,   158,     0,   159,   621,     0,   462,     0,
       0,   100,     0,     0,   105,   151,   106,     0,    30,     0,
      52,     0,     0,     0,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,   152,     0,   106,    32,   153,
     154,   323,   324,   325,   326,     0,     0,   372,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,   155,   156,
       0,     0,     0,     0,     0,    11,     0,   157,   551,   463,
       0,     0,     0,   158,     0,   159,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   582,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   304,
     305,   306,   307,   308,   309,   310,   311,     0,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   146,   147,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   182,
     147,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,     0,   203,
     147,     0,     0,     0,   100,    96,     0,    94,   397,     0,
     281,   147,     0,     0,     0,   100,     0,     0,    94,     0,
       0,     0,     0,     0,     0,    96,     0,     0,   105,     0,
     106,     0,     0,   154,     0,   100,    96,     0,     0,   105,
       0,   106,     0,     0,   154,   351,   100,     0,     0,     0,
       0,   155,   156,     0,     0,     0,     0,     0,     0,   105,
     157,   106,   155,   156,   154,     0,   158,     0,   159,     0,
     105,   157,   106,     0,     0,   154,     0,   158,     0,   159,
       0,     0,   155,   156,     0,     0,     0,     0,     0,     0,
       0,   157,     0,   155,   156,     0,     0,   158,     0,   159,
       0,     0,   157,     0,     0,     0,     0,     0,   158,     0,
     159,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    57,    87,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,    88,
       0,     0,    89,    90,    91,    92,   212,     0,    93,     0,
     213,    94,   214,     0,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,    95,    96,
      97,     0,     4,     0,    98,     0,    99,     0,   321,   100,
       0,     0,     0,     0,     0,     0,     0,   101,    30,     0,
      52,     0,     0,     0,     0,   102,     0,   103,   104,     0,
       0,     0,     0,   105,     0,   106,     0,     0,    32,     0,
     322,   323,   324,   325,   326,   252,     0,     0,     0,   253,
       0,     4,    10,     0,     0,   254,     0,     0,     0,   255,
       0,   256,     0,     0,   257,    11,   258,     5,     0,   327,
       0,     0,     0,     0,     0,    31,     7,     0,     0,     0,
     328,     0,     0,   259,   260,     0,   261,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   263,
       0,    10,     0,   264,     0,     0,   265,   266,     0,     0,
       0,   252,     0,     0,    11,   253,    33,     4,    13,   267,
     268,   254,   269,     0,     0,   255,     0,   256,     0,     0,
     516,     0,   258,     5,     0,     0,     0,     0,     0,     0,
       0,    31,     7,     0,     0,     0,     0,     0,     0,   259,
     260,     0,   261,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   262,   263,     0,    10,     0,   264,
       0,     0,   265,   266,     0,     0,     0,   252,     0,     0,
      11,   253,    33,     0,    13,   267,   268,   254,   269,     0,
       0,   255,     0,   256,     0,     0,     0,     0,   258,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,   580,     4,     0,     0,   259,   260,     4,   261,     0,
       0,    30,     0,    52,     0,   120,     0,     0,     5,     0,
     262,   263,     0,    30,     0,   264,    31,     7,   265,   266,
       0,    32,     0,   322,   323,   324,   325,   326,     8,     4,
       0,   267,   268,    32,   269,    10,   323,   324,   325,   326,
       0,     0,    10,     0,     0,     5,     0,    10,    11,     0,
       0,     0,   327,    31,     7,    11,     0,    33,     0,    13,
      11,     0,   355,     0,   463,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,   552,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,    33,     0,    13,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   601,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   597,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   525,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     212,     0,     0,     0,   213,     0,   214,     0,   215,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320
};

static const yytype_int16 yycheck[] =
{
      19,    85,   116,    98,   116,   103,   101,   116,   463,   116,
     510,   411,    57,   187,   188,     6,   356,     6,   173,     2,
      87,    64,   509,   403,   514,    92,    37,     6,    95,    13,
       6,    21,    27,     6,     6,   102,   103,    20,   105,   106,
      31,     5,    31,     4,    31,    36,     6,    36,   132,    36,
     117,   123,    31,    98,   126,    31,   101,    36,    31,    31,
      36,    30,    25,    36,    36,   348,    14,   332,    27,   153,
     335,    31,    67,     4,    85,   348,    36,    65,    30,     0,
      70,    85,    45,     5,    43,   152,    83,    18,    71,    27,
      87,    79,    40,    15,    55,   193,    84,   584,   141,   103,
     143,    62,    86,   122,     9,    43,    75,   191,    67,   154,
     155,   156,   157,   158,   159,   210,   214,   136,    27,    83,
      25,   611,    27,    75,    55,   625,   193,     5,   242,    67,
     242,    62,    16,    27,   201,   123,    20,    15,   126,   519,
      45,    83,   187,   188,    86,    87,   213,   214,    83,   216,
     217,   218,   219,   220,   221,   222,   223,   224,    84,   340,
     143,   342,   246,    27,   152,   210,   506,    27,    28,    27,
      28,    76,   327,   573,   664,   155,   156,    27,   158,   159,
      27,   355,   173,   338,    27,   468,   469,   178,   362,   178,
     364,   178,     5,   236,   173,   468,   469,    14,    15,   178,
      27,   173,   178,   658,    83,   178,   178,    27,    87,    27,
      89,    27,    91,   280,    84,    84,    85,   103,   178,    88,
      74,    75,   468,   469,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,    86,    86,   244,   248,   277,   248,
      46,   248,     9,    87,    86,   363,   361,    86,    27,   248,
      84,    86,   248,    85,    85,   248,   248,    87,    25,    75,
      86,    67,    27,    69,   351,   352,    33,    34,   248,   356,
      33,    86,   359,    86,    27,    85,   363,   452,    45,    46,
      85,   368,    27,    87,    87,   372,    87,   374,    86,   393,
     355,    15,    59,    86,    86,    27,   361,   362,    27,   364,
      85,    88,    86,   390,    85,    72,    86,    74,    33,    76,
      88,   415,    89,   119,    87,    73,    11,    85,    94,    88,
      86,   332,     9,    84,   335,    27,    88,    86,   460,   340,
      90,   342,   103,    85,   140,    83,    83,   348,    25,   145,
     403,   340,    86,   342,   150,   408,   409,    86,   340,   348,
     342,    86,    86,   528,    85,   549,   348,   461,    45,   553,
      47,    48,    49,    50,    51,    83,    37,    10,    88,    27,
      28,   475,    59,   460,    27,    27,   510,   509,   510,    86,
      47,   510,    15,   510,    89,    72,    37,    37,    31,    76,
      84,    88,    38,    84,    37,    53,    88,    27,    88,    84,
     487,    90,    37,    89,    86,    63,    85,   103,     4,   513,
     497,    54,   499,    86,    75,    36,    15,    89,    88,   506,
       6,    15,   509,    66,    86,    85,    14,   621,    84,    87,
      27,    89,   547,   239,   240,    15,   540,    86,    27,    82,
      88,    84,   557,    86,    86,    88,    86,    90,    89,    86,
      86,    85,   584,    37,    86,    86,    85,   468,   469,    84,
      27,   548,    90,   550,   551,   552,   598,    90,    36,   468,
     469,    31,    15,   476,   578,    37,   468,   469,    37,    83,
      83,    15,   547,    37,   549,    86,    12,    11,   553,    54,
      90,   625,   557,   625,    86,   582,   625,   584,   625,    86,
     618,    37,    27,   566,   543,    90,     8,    27,   571,    82,
     644,   615,   644,   617,   601,    85,    85,   528,    27,    66,
      86,     9,    86,    25,    87,    27,    28,    10,    10,   528,
      88,   618,   650,    35,    36,    86,   528,    25,   476,   559,
     499,    43,   548,    45,   118,    33,    34,   374,   652,   550,
     371,    53,    82,    86,   577,   644,   621,    45,   333,   470,
     244,    63,   528,   650,   650,    67,    -1,   629,    -1,    -1,
      -1,    59,    -1,    -1,    27,    28,     8,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    72,    87,    74,    89,    76,    91,
      92,    -1,    -1,    25,    -1,    27,    28,    -1,    -1,    -1,
      53,    -1,   641,    35,    36,    11,    -1,    -1,   110,   111,
      63,    43,    -1,    45,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    53,     9,   125,    -1,   127,    11,    -1,    15,    -1,
      -1,    63,    -1,    -1,    87,    67,    89,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    89,    45,    91,
      92,    48,    49,    50,    51,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,   110,   111,
      -1,    -1,    -1,    -1,    -1,    72,    -1,   119,    12,    76,
      -1,    -1,    -1,   125,    -1,   127,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    12,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    63,    53,    -1,    35,    67,    -1,
      27,    28,    -1,    -1,    -1,    63,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    87,    -1,
      89,    -1,    -1,    92,    -1,    63,    53,    -1,    -1,    87,
      -1,    89,    -1,    -1,    92,    37,    63,    -1,    -1,    -1,
      -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    87,
     119,    89,   110,   111,    92,    -1,   125,    -1,   127,    -1,
      87,   119,    89,    -1,    -1,    92,    -1,   125,    -1,   127,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   110,   111,    -1,    -1,   125,    -1,   127,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,     5,     6,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    28,    29,    83,    -1,    32,    -1,
      87,    35,    89,    -1,    91,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    52,    53,
      54,    -1,     9,    -1,    58,    -1,    60,    -1,    15,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    25,    -1,
      27,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    -1,
      -1,    -1,    -1,    87,    -1,    89,    -1,    -1,    45,    -1,
      47,    48,    49,    50,    51,     3,    -1,    -1,    -1,     7,
      -1,     9,    59,    -1,    -1,    13,    -1,    -1,    -1,    17,
      -1,    19,    -1,    -1,    22,    72,    24,    25,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      87,    -1,    -1,    41,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    59,    -1,    61,    -1,    -1,    64,    65,    -1,    -1,
      -1,     3,    -1,    -1,    72,     7,    74,     9,    76,    77,
      78,    13,    80,    -1,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    61,
      -1,    -1,    64,    65,    -1,    -1,    -1,     3,    -1,    -1,
      72,     7,    74,    -1,    76,    77,    78,    13,    80,    -1,
      -1,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,     9,    -1,    -1,    41,    42,     9,    44,    -1,
      -1,    25,    -1,    27,    -1,    22,    -1,    -1,    25,    -1,
      56,    57,    -1,    25,    -1,    61,    33,    34,    64,    65,
      -1,    45,    -1,    47,    48,    49,    50,    51,    45,     9,
      -1,    77,    78,    45,    80,    59,    48,    49,    50,    51,
      -1,    -1,    59,    -1,    -1,    25,    -1,    59,    72,    -1,
      -1,    -1,    76,    33,    34,    72,    -1,    74,    -1,    76,
      72,    -1,    68,    -1,    76,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      83,    -1,    -1,    -1,    87,    -1,    89,    -1,    91,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   129,   130,     0,     9,    25,    33,    34,    45,    46,
      59,    72,    74,    76,   131,   132,   134,   135,   139,   140,
     141,   142,   176,   178,   179,   182,   185,   189,   202,    27,
      25,    33,    45,    74,   142,   143,   144,   176,   179,   182,
     185,   189,   201,    27,    28,   177,    27,    27,    27,   183,
     184,    27,    27,   138,   186,   187,    83,     5,   151,   140,
      27,   180,   181,    83,    86,    87,   207,    27,   143,    27,
      27,    30,    75,   143,    84,    84,    86,    83,   207,    87,
     137,   103,    86,    86,    84,    85,    86,     6,    23,    26,
      27,    28,    29,    32,    35,    52,    53,    54,    58,    60,
      63,    71,    79,    81,    82,    87,    89,   145,   146,   147,
     150,   151,   152,   163,   164,   170,    85,   103,    86,    27,
      22,   139,   140,     9,    25,    45,    76,   138,   188,   208,
     209,   210,    85,   207,   207,    86,   136,   140,   177,   177,
      27,    86,   138,    86,     8,    25,    27,    28,    36,    43,
      45,    67,    87,    91,    92,   110,   111,   119,   125,   127,
     161,   162,   163,   212,   214,   215,   216,   217,   220,   221,
     222,   223,   225,   230,   231,   242,   243,   183,    33,   138,
     212,   186,    27,   161,    27,    27,    28,    85,    85,   161,
      27,    87,   161,    87,   153,   173,   152,   152,   161,   161,
     167,    87,   154,    27,   167,   171,   172,   161,   165,   166,
      86,    15,    83,    87,    89,    91,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    27,   213,   215,   216,   218,
     224,   225,   243,   161,   180,   207,    86,    86,   210,    27,
      27,   210,    85,    88,    86,   212,    85,    86,    33,    15,
     151,   207,     3,     7,    13,    17,    19,    22,    24,    41,
      42,    44,    56,    57,    61,    64,    65,    77,    78,    80,
     139,   203,   204,   205,   206,    88,   139,   140,   207,   207,
      89,    27,   138,   212,   163,   162,   163,   162,   163,   162,
     162,    12,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    15,    47,    48,    49,    50,    51,    76,    87,   179,
     182,   187,   189,   190,   191,   201,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     4,    18,    55,    62,
     143,    37,    94,   150,   150,    68,    87,   212,   167,    73,
      16,    20,    11,    84,    11,   161,   174,   175,    85,    88,
      88,    86,    12,    90,    84,   152,    27,   161,   168,   169,
     167,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     103,     4,    62,    85,   139,   207,   207,    67,   211,   216,
     219,   243,   208,    86,   212,   143,    83,    83,    86,    86,
      86,    86,    83,    83,   133,    85,    37,   161,    88,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,    27,
     238,    27,    86,   241,   191,   241,    15,   238,   235,   235,
      89,    37,    15,    76,   179,   182,   226,   227,   228,   229,
     234,   238,   239,   248,   249,    37,    30,    75,   155,   157,
     158,   159,   160,   161,   161,   150,   168,    84,    88,   161,
      38,   148,   149,   152,   150,   167,   150,    85,    88,    84,
     161,    27,   171,   161,   165,    88,    84,    90,   161,    89,
      37,   212,    86,    85,   103,     4,    22,   139,   206,    86,
     139,   139,   205,   212,    36,    90,    89,   192,    88,   238,
     161,   216,   246,   247,   212,   248,    15,   227,   227,   229,
       6,   250,   212,   136,    15,    14,    40,   156,    86,    85,
      84,    12,    69,    14,    88,   161,    27,    14,    15,    86,
      15,   161,   174,   168,   246,   213,    86,   212,    87,   164,
      89,    86,    86,    86,    86,    86,    37,    27,    85,   194,
      15,   232,    12,    90,    84,    27,   212,   251,    15,   151,
     152,   157,   150,   159,   161,   161,   150,    88,    85,   152,
     148,    85,    90,   139,    27,   244,   245,   139,    36,   194,
     212,    31,   193,    15,   161,    37,   246,    85,    37,    83,
      83,    11,   216,    15,   161,    37,    86,    12,    90,    86,
      86,    90,   164,    54,   195,   212,   212,   167,   252,   253,
     150,    11,   213,    27,    37,   244,    27,    82,   196,    85,
      86,   151,    85,   216,   219,    27,    66,   197,    87,   252,
     212,    21,    70,   200,    10,   198,   248,   164,    86,    88,
      10,   199,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   130,   129,   131,   131,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   157,   158,   159,   159,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   162,   162,   162,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   171,   171,   172,   173,   174,   174,
     175,   175,   175,   176,   177,   177,   177,   177,   178,   178,
     179,   180,   180,   181,   181,   182,   183,   183,   184,   185,
     186,   186,   187,   188,   188,   189,   189,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   210,   210,   210,
     211,   211,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   213,   213,   213,   213,   213,   214,   214,
     214,   214,   215,   216,   216,   217,   218,   219,   219,   220,
     221,   222,   223,   224,   225,   225,   226,   226,   226,   227,
     227,   228,   228,   228,   228,   228,   228,   229,   230,   230,
     231,   231,   231,   231,   232,   232,   232,   233,   233,   233,
     233,   234,   235,   235,   236,   236,   236,   236,   236,   236,
     236,   237,   238,   238,   239,   240,   241,   241,   241,   241,
     242,   243,   243,   244,   244,   245,   246,   246,   247,   247,
     248,   248,   249,   250,   251,   251,   252,   252,   252,   253
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     6,     0,
       1,     1,     6,     9,     9,     6,     6,     1,     0,     3,
       3,     1,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     6,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     5,     7,     1,
       3,     0,     6,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     5,     4,     6,     8,     4,
       4,     2,     2,     2,     1,     1,     4,     3,     3,     1,
       1,     1,     1,     3,     1,     3,     0,     1,     0,     3,
       1,     3,     1,     1,     0,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     4,     3,     2,     4,     6,     1,     1,     1,     1,
       3,     1,     0,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     0,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     5,     3,     1,     3,     1,     3,     1,     1,
       2,     0,     3,     3,     5,     2,     0,     3,     3,     2,
       0,     3,     3,     3,     5,     6,     8,    11,     1,     2,
       0,     4,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     4,     6,
       6,     8,     8,    10,     5,     8,    10,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       3,     1,     3,     2,     2,     1,     1,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       2,     4,     4,     1,     1,     7,     7,     7,     7,     3,
       3,     2,     4,     4,     4,     3,     2,     1,     1,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       3,     6,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     3,     1,     1,     1,     1,     2,     2,
       4,     0,     1,     1,     3,     5,     1,     3,     1,     3,
       2,     1,     1,     4,     3,     1,     1,     2,     3,     5
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

    case YYSYMBOL_FINALLY: /* FINALLY  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_FFALSE: /* FFALSE  */
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

    case YYSYMBOL_TTRUE: /* TTRUE  */
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

    case YYSYMBOL_83_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_84_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_85_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_86_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_87_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_88_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* '@'  */
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

    case YYSYMBOL_boolean: /* boolean  */
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
        { (yyval.n_node) = new unit_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 14: /* unit: UNIT IDENT ';' INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'  */
        { (yyval.n_node) = new unit_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), NULL, (yyvsp[0].tok)); }
    break;

  case 15: /* unit: INTERFACE unit_decl_list IMPLEMENTATION unit_def_list END '.'  */
        { (yyval.n_node) = new unit_node(NULL, NULL, NULL, (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 16: /* unit: INTERFACE unit_decl_list IMPLEMENTATION unit_def_list compoundst '.'  */
        { (yyval.n_node) = new unit_node(NULL, NULL, NULL, (yyvsp[-5].tok), (yyvsp[-4].n_decl), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_comp), NULL, (yyvsp[0].tok)); }
    break;

  case 18: /* prog_param_list: %empty  */
                 { (yyval.n_imp) = NULL; }
    break;

  case 19: /* prog_param_list: '(' ident_list ')'  */
                         { (yyval.n_imp) = new import_list_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 20: /* ident_list: IDENT ',' ident_list  */
                                 { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 21: /* ident_list: IDENT  */
            { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 22: /* block: decl_part_list compoundst  */
        { (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp)); }
    break;

  case 23: /* decl_part_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 24: /* decl_part_list: decl_part decl_part_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 32: /* unit_spec: UNIT IDENT ';' INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 33: /* unit_spec: INTERFACE unit_decl_list UNIT_END  */
        {  (yyval.n_decl) = new unit_spec_node(NULL, NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_decl)); }
    break;

  case 34: /* unit_decl_list: %empty  */
                { (yyval.n_decl) = NULL; }
    break;

  case 35: /* unit_decl_list: unit_decl unit_decl_list  */
                               { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 43: /* inherited: INHERITED  */
                     { (yyval.n_stmt) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 44: /* inherited: INHERITED IDENT  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 45: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 46: /* try_finally: TRY sequence FINALLY sequence END  */
        { (yyval.n_stmt) = new try_finally_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 47: /* try_except: TRY sequence EXCEPT except_many END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 48: /* try_except: TRY sequence EXCEPT except_many ELSE sequence END  */
        { (yyval.n_stmt) = new try_except_node((yyvsp[-6].tok), (yyvsp[-5].n_stmt), (yyvsp[-4].tok), (yyvsp[-3].n_stmt), (yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 50: /* except_many: except ';' except_many  */
                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 51: /* except: %empty  */
        { (yyval.n_stmt) = NULL; }
    break;

  case 52: /* except: ON IDENT ':' simple_type DO compoundst  */
        { (yyval.n_stmt) = new on_except_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_comp)); }
    break;

  case 53: /* statement: %empty  */
           { (yyval.n_stmt) = new empty_node(curr_token->prev_relevant()); }
    break;

  case 54: /* statement: primary LET expr  */
                       { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 55: /* statement: primary LETADD expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 56: /* statement: primary LETSUB expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 57: /* statement: primary LETDIV expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 58: /* statement: primary LETMUL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 59: /* statement: primary LETAND expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 60: /* statement: primary LETOR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 61: /* statement: primary LETSHL expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 62: /* statement: primary LETSHR expr  */
                          { (yyval.n_stmt) = new assign_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 63: /* statement: GOTO ICONST  */
                  { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 64: /* statement: GOTO IDENT  */
                 { (yyval.n_stmt) = new goto_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 65: /* statement: CASE expr OF case_list END  */
                                 { (yyval.n_stmt) = new switch_node((yyvsp[-4].tok), (yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_case), (yyvsp[0].tok)); }
    break;

  case 66: /* statement: IF expr THEN statement  */
                             { (yyval.n_stmt) = new if_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 67: /* statement: IF expr THEN statement ELSE statement  */
        { (yyval.n_stmt) = new if_node((yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 68: /* statement: FOR IDENT LET expr TO expr DO statement  */
        { (yyval.n_stmt) = new for_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 69: /* statement: WHILE expr DO statement  */
                              { (yyval.n_stmt) = new while_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 70: /* statement: REPEAT sequence UNTIL expr  */
                                 { (yyval.n_stmt) = new repeat_node((yyvsp[-3].tok), (yyvsp[-2].n_stmt), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 71: /* statement: WRITE write_params  */
                         { (yyval.n_stmt) = new write_node((yyvsp[-1].tok), (yyvsp[0].n_wrls)); }
    break;

  case 72: /* statement: READ actual_params  */
                         { (yyval.n_stmt) = new read_node((yyvsp[-1].tok), (yyvsp[0].n_grp)); }
    break;

  case 73: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 74: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 75: /* statement: RETURN  */
             { (yyval.n_stmt) = new return_node((yyvsp[0].tok)); }
    break;

  case 76: /* statement: WITH expr_list DO statement  */
                                  { (yyval.n_stmt) = new with_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 77: /* statement: ICONST ':' statement  */
                           { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 78: /* statement: IDENT ':' statement  */
                          { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 79: /* statement: compoundst  */
                 { (yyval.n_stmt) = (yyvsp[0].n_comp); }
    break;

  case 83: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 85: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 86: /* actual_params: %empty  */
               { (yyval.n_grp) = NULL; }
    break;

  case 87: /* actual_params: expr_group  */
                                           { (yyval.n_grp) = (yyvsp[0].n_grp); }
    break;

  case 88: /* write_params: %empty  */
               { (yyval.n_wrls) = NULL; }
    break;

  case 89: /* write_params: '(' write_list ')'  */
                         { (yyval.n_wrls) = new write_list_node((yyvsp[-2].tok), (yyvsp[-1].n_wrtp), (yyvsp[0].tok)); }
    break;

  case 91: /* case_list: case_items otherwise sequence  */
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

  case 94: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 96: /* case_items: case_item ';' case_items  */
                                    { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 97: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 99: /* case_elem_list: case_elem ',' case_elem_list  */
                                       { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 100: /* case_elem: expr  */
                { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 101: /* case_elem: expr DOTS expr  */
                         { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 103: /* expr: expr PLUS expr  */
                    { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 104: /* expr: expr MINUS expr  */
                     { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 105: /* expr: expr MOD expr  */
                   { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 106: /* expr: expr MUL expr  */
                   { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 107: /* expr: expr DIV expr  */
                   { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 108: /* expr: expr DIVR expr  */
                    { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 109: /* expr: primary LET expr  */
                      { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 110: /* expr: primary LETADD expr  */
                         { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 111: /* expr: primary LETSUB expr  */
                         { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 112: /* expr: primary LETDIV expr  */
                         { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 113: /* expr: primary LETMUL expr  */
                         { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 114: /* expr: primary LETSHL expr  */
                         { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 115: /* expr: primary LETSHR expr  */
                         { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 116: /* expr: primary LETAND expr  */
                         { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 117: /* expr: primary LETOR expr  */
                         { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 118: /* expr: expr AND expr  */
                   { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 119: /* expr: expr BINAND expr  */
                      { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 120: /* expr: expr SHL expr  */
                   { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 121: /* expr: expr SHR expr  */
                   { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 122: /* expr: expr OR expr  */
                   { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 123: /* expr: expr BINOR expr  */
                      { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 124: /* expr: expr XOR expr  */
                   { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 125: /* expr: expr GT expr  */
                  { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 126: /* expr: expr LT expr  */
                  { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 127: /* expr: expr LE expr  */
                  { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 128: /* expr: expr GE expr  */
                  { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* expr: expr EQ expr  */
                  { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 130: /* expr: expr NE expr  */
                  { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* expr: expr IN expr  */
                  { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* simple_expr: PLUS simple_expr  */
                                  {
     (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* simple_expr: MINUS simple_expr  */
     { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* simple_expr: NOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* simple_expr: BINNOT simple_expr  */
     { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* simple_expr: '@' primary  */
                 { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* simple_expr: AND primary  */
                               { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* primary: '(' expr_list ')'  */
                       { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 141: /* primary: primary '(' act_param_list ')'  */
                                    { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 142: /* primary: primary '.' IDENT  */
                       { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 143: /* primary: primary '^'  */
                 { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 144: /* primary: primary '[' expr_list ']'  */
                               { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 145: /* primary: LOOPHOLE '(' type ',' expr ')'  */
                                    { (yyval.n_expr) = new loophole_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 147: /* constant: ICONST  */
                 { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 148: /* constant: RCONST  */
                 { (yyval.n_expr) = new real_node((yyvsp[0].tok)); }
    break;

  case 149: /* constant: SCONST  */
                 { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 150: /* constant: '[' set_elem_list ']'  */
                                { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 151: /* constant: IDENT  */
                { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 152: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 154: /* set_elem_list: set_elem ',' set_elem_list  */
                                          { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 155: /* set_elem: expr  */
               { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 156: /* set_elem: expr DOTS expr  */
                         { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 158: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 160: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 162: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 163: /* record_constant: '(' field_init_list ')'  */
                                         { 
    (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); 
}
    break;

  case 164: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 165: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 166: /* field_init_item: IDENT ':' expr  */
                                { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 167: /* expr_group: '(' expr_list ')'  */
                              { (yyval.n_grp) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 169: /* write_list: write_param ',' write_list  */
                                                     { (yyvsp[-2].n_wrtp)->next = (yyvsp[0].n_wrtp); (yyval.n_wrtp) = (yyvsp[-2].n_wrtp); }
    break;

  case 170: /* write_param: expr  */
                   { (yyval.n_wrtp) = new write_param_node((yyvsp[0].n_expr)); }
    break;

  case 171: /* write_param: expr ':' expr  */
                    { (yyval.n_wrtp) = new write_param_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 172: /* write_param: expr ':' expr ':' expr  */
                             { (yyval.n_wrtp) = new write_param_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 173: /* label_decl_part: LABEL label_list ';'  */
    { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 174: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 175: /* label_list: ICONST ',' label_list  */
                                  { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 176: /* label_list: IDENT  */
                  { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 177: /* label_list: IDENT ',' label_list  */
                                 { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 180: /* const_def_part: const const_def_list  */
    { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 181: /* const_def_list: %empty  */
                { (yyval.n_cdef) = NULL; }
    break;

  case 182: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 183: /* const_def: IDENT EQ expr  */
                         { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 184: /* const_def: IDENT ':' const_type EQ expr  */
                               { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 185: /* type_def_part: TYPE type_def_list  */
    { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 186: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 187: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 188: /* type_def: IDENT EQ type  */
                        { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 189: /* var_decl_part: VAR var_decl_list  */
     { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 190: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 191: /* var_decl_list: var_decl ';' var_decl_list  */
                                  { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 192: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 193: /* proc_decl: PROCEDURE IDENT formal_params  */
               { (yyval.n_decl) = new proc_decl_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 194: /* proc_decl: FUNCTION IDENT formal_params ':' type  */
               { (yyval.n_decl) = new proc_decl_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 195: /* proc_fwd_decl: PROCEDURE IDENT formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 196: /* proc_fwd_decl: FUNCTION IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 197: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 199: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 200: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 201: /* prop_array: '[' IDENT prop_type_def ']'  */
       { (yyval.n_decl) = new prop_array_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 202: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 203: /* prop_index: INDEX constant  */
       { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 204: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 205: /* prop_type_def: ':' type  */
       { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 206: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 207: /* prop_read: READ IDENT  */
       { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 208: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 209: /* prop_write: WRITE IDENT  */
       { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 210: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 211: /* prop_stored: STORED boolean  */
       { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 212: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 213: /* prop_default: DEFAULT constant  */
       { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 214: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 215: /* prop_default_directive: DEFAULT ';'  */
       { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 218: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 219: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 220: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 221: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 222: /* proc_def: PROCEDURE IDENT '.' IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 223: /* proc_def: FUNCTION IDENT '.' IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 224: /* proc_def: FUNCTION IDENT ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-4].tok), NULL, NULL, (yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 225: /* proc_def: PROCEDURE IDENT formal_params ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 226: /* proc_def: FUNCTION IDENT formal_params ':' type ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), NULL, NULL, (yyvsp[-8].tok), (yyvsp[-7].n_plist), (yyvsp[-6].tok), (yyvsp[-5].n_tpd), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 227: /* proc_def: FUNCTION IDENT ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-6].tok), NULL, NULL, (yyvsp[-5].tok), NULL, NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 247: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 248: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 249: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 250: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 252: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 253: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 254: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 255: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 257: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 258: /* param_decl: ident_list ':' param_type EQ constant  */
                                             { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 259: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 278: /* fptr_type: FUNCTION formal_params ':' type  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 279: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 280: /* fptr_type: PROCEDURE formal_params  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 281: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
       { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 282: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 283: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node((yyvsp[0].tok)); }
    break;

  case 284: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 285: /* array_type: packed ARRAY '[' indices ']' OF type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 286: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
       { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 287: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 288: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 289: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 290: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 291: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 292: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 293: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 294: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 295: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 296: /* record_body: record_field_list record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 299: /* record_components: record_component record_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 302: /* record_component: access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 303: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 307: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 310: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 311: /* class_type: class_or_object '(' IDENT ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 312: /* class_type: class_or_object '(' IDENT ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 313: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 314: /* object_body: field_decl_list object_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
         (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
       }
    break;

  case 316: /* object_body: field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 321: /* access_spec_decl: access_spec_tok  */
                                  { (yyval.n_decl) = new access_specifier_node((yyvsp[0].tok)); }
    break;

  case 322: /* object_components: object_component object_components  */
       { 
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
	}
    break;

  case 325: /* object_component: access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 331: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 332: /* field_decl_list: var_decl ';'  */
                  { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 333: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 334: /* object_methods: proc_fwd_decl_list  */
       { (yyval.n_decl) = new proc_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 335: /* object_properties: property_decl_list  */
       { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 338: /* proc_fwd_decl_list: proc_fwd_decl proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 339: /* proc_fwd_decl_list: proc_spec proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 340: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 341: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 344: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 345: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 347: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 348: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 349: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 350: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 351: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 353: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 354: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 355: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 357: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 358: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 359: /* variant: expr_list ':' '(' field_list ')'  */
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


