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
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOTS = 11,                      /* DOTS  */
  YYSYMBOL_DYNAMIC = 12,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_EXCEPT = 15,                    /* EXCEPT  */
  YYSYMBOL_EXTERNAL = 16,                  /* EXTERNAL  */
  YYSYMBOL_FIL = 17,                       /* FIL  */
  YYSYMBOL_FINAL = 18,                     /* FINAL  */
  YYSYMBOL_FINALLY = 19,                   /* FINALLY  */
  YYSYMBOL_FAR = 20,                       /* FAR  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_FORWARD = 22,                   /* FORWARD  */
  YYSYMBOL_FUNCTION = 23,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 24,                      /* GOTO  */
  YYSYMBOL_IDENT = 25,                     /* IDENT  */
  YYSYMBOL_ICONST = 26,                    /* ICONST  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_IMPLEMENTATION = 28,            /* IMPLEMENTATION  */
  YYSYMBOL_INHERITED = 29,                 /* INHERITED  */
  YYSYMBOL_INTERFACE = 30,                 /* INTERFACE  */
  YYSYMBOL_LABEL = 31,                     /* LABEL  */
  YYSYMBOL_LOOPHOLE = 32,                  /* LOOPHOLE  */
  YYSYMBOL_OBJECT = 33,                    /* OBJECT  */
  YYSYMBOL_OF = 34,                        /* OF  */
  YYSYMBOL_ON = 35,                        /* ON  */
  YYSYMBOL_ORIGIN = 36,                    /* ORIGIN  */
  YYSYMBOL_OTHERWISE = 37,                 /* OTHERWISE  */
  YYSYMBOL_OVERLOAD = 38,                  /* OVERLOAD  */
  YYSYMBOL_OVERRIDE = 39,                  /* OVERRIDE  */
  YYSYMBOL_PACKED = 40,                    /* PACKED  */
  YYSYMBOL_PASCAL = 41,                    /* PASCAL  */
  YYSYMBOL_PROCEDURE = 42,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 43,                   /* PROGRAM  */
  YYSYMBOL_PRIVATE = 44,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 45,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 46,                    /* PUBLIC  */
  YYSYMBOL_PUBLISHED = 47,                 /* PUBLISHED  */
  YYSYMBOL_RAISE = 48,                     /* RAISE  */
  YYSYMBOL_RCONST = 49,                    /* RCONST  */
  YYSYMBOL_READ = 50,                      /* READ  */
  YYSYMBOL_RECORD = 51,                    /* RECORD  */
  YYSYMBOL_REGISTER = 52,                  /* REGISTER  */
  YYSYMBOL_REINTRODUCE = 53,               /* REINTRODUCE  */
  YYSYMBOL_REPEAT = 54,                    /* REPEAT  */
  YYSYMBOL_RESOURCESTRING = 55,            /* RESOURCESTRING  */
  YYSYMBOL_RETURN = 56,                    /* RETURN  */
  YYSYMBOL_SAFECALL = 57,                  /* SAFECALL  */
  YYSYMBOL_SET = 58,                       /* SET  */
  YYSYMBOL_SCONST = 59,                    /* SCONST  */
  YYSYMBOL_STATIC = 60,                    /* STATIC  */
  YYSYMBOL_STDCALL = 61,                   /* STDCALL  */
  YYSYMBOL_STRING = 62,                    /* STRING  */
  YYSYMBOL_THEN = 63,                      /* THEN  */
  YYSYMBOL_TO = 64,                        /* TO  */
  YYSYMBOL_TRY = 65,                       /* TRY  */
  YYSYMBOL_TYPE = 66,                      /* TYPE  */
  YYSYMBOL_UNTIL = 67,                     /* UNTIL  */
  YYSYMBOL_UNIT = 68,                      /* UNIT  */
  YYSYMBOL_UNIT_END = 69,                  /* UNIT_END  */
  YYSYMBOL_VAR = 70,                       /* VAR  */
  YYSYMBOL_VARARGS = 71,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 72,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 73,                     /* WHILE  */
  YYSYMBOL_WINAPI = 74,                    /* WINAPI  */
  YYSYMBOL_WITH = 75,                      /* WITH  */
  YYSYMBOL_WRITE = 76,                     /* WRITE  */
  YYSYMBOL_77_ = 77,                       /* '.'  */
  YYSYMBOL_78_ = 78,                       /* ','  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* ';'  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* ')'  */
  YYSYMBOL_83_ = 83,                       /* '['  */
  YYSYMBOL_84_ = 84,                       /* ']'  */
  YYSYMBOL_85_ = 85,                       /* '^'  */
  YYSYMBOL_86_ = 86,                       /* '@'  */
  YYSYMBOL_SCOPE = 87,                     /* SCOPE  */
  YYSYMBOL_LET = 88,                       /* LET  */
  YYSYMBOL_LETADD = 89,                    /* LETADD  */
  YYSYMBOL_LETSUB = 90,                    /* LETSUB  */
  YYSYMBOL_LETDIV = 91,                    /* LETDIV  */
  YYSYMBOL_LETMUL = 92,                    /* LETMUL  */
  YYSYMBOL_LETAND = 93,                    /* LETAND  */
  YYSYMBOL_LETOR = 94,                     /* LETOR  */
  YYSYMBOL_LETSHL = 95,                    /* LETSHL  */
  YYSYMBOL_LETSHR = 96,                    /* LETSHR  */
  YYSYMBOL_EQ = 97,                        /* EQ  */
  YYSYMBOL_NE = 98,                        /* NE  */
  YYSYMBOL_LT = 99,                        /* LT  */
  YYSYMBOL_LE = 100,                       /* LE  */
  YYSYMBOL_GT = 101,                       /* GT  */
  YYSYMBOL_GE = 102,                       /* GE  */
  YYSYMBOL_IN = 103,                       /* IN  */
  YYSYMBOL_PLUS = 104,                     /* PLUS  */
  YYSYMBOL_MINUS = 105,                    /* MINUS  */
  YYSYMBOL_OR = 106,                       /* OR  */
  YYSYMBOL_XOR = 107,                      /* XOR  */
  YYSYMBOL_BINOR = 108,                    /* BINOR  */
  YYSYMBOL_MOD = 109,                      /* MOD  */
  YYSYMBOL_DIV = 110,                      /* DIV  */
  YYSYMBOL_DIVR = 111,                     /* DIVR  */
  YYSYMBOL_MUL = 112,                      /* MUL  */
  YYSYMBOL_AND = 113,                      /* AND  */
  YYSYMBOL_SHR = 114,                      /* SHR  */
  YYSYMBOL_SHL = 115,                      /* SHL  */
  YYSYMBOL_BINAND = 116,                   /* BINAND  */
  YYSYMBOL_UPLUS = 117,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 118,                   /* UMINUS  */
  YYSYMBOL_NOT = 119,                      /* NOT  */
  YYSYMBOL_ADDRESS = 120,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 121,                   /* BINNOT  */
  YYSYMBOL_YYACCEPT = 122,                 /* $accept  */
  YYSYMBOL_translation = 123,              /* translation  */
  YYSYMBOL_124_1 = 124,                    /* $@1  */
  YYSYMBOL_input_file = 125,               /* input_file  */
  YYSYMBOL_program = 126,                  /* program  */
  YYSYMBOL_progend = 127,                  /* progend  */
  YYSYMBOL_module = 128,                   /* module  */
  YYSYMBOL_unit = 129,                     /* unit  */
  YYSYMBOL_unit_def_list = 130,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 131,          /* prog_param_list  */
  YYSYMBOL_ident_list = 132,               /* ident_list  */
  YYSYMBOL_block = 133,                    /* block  */
  YYSYMBOL_decl_part_list = 134,           /* decl_part_list  */
  YYSYMBOL_decl_part = 135,                /* decl_part  */
  YYSYMBOL_unit_spec = 136,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 137,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 138,                /* unit_decl  */
  YYSYMBOL_inherited = 139,                /* inherited  */
  YYSYMBOL_try_finally = 140,              /* try_finally  */
  YYSYMBOL_try_except = 141,               /* try_except  */
  YYSYMBOL_except_many = 142,              /* except_many  */
  YYSYMBOL_except = 143,                   /* except  */
  YYSYMBOL_statement = 144,                /* statement  */
  YYSYMBOL_compoundst = 145,               /* compoundst  */
  YYSYMBOL_sequence = 146,                 /* sequence  */
  YYSYMBOL_actual_params = 147,            /* actual_params  */
  YYSYMBOL_write_params = 148,             /* write_params  */
  YYSYMBOL_case_list = 149,                /* case_list  */
  YYSYMBOL_otherwise = 150,                /* otherwise  */
  YYSYMBOL_case_items = 151,               /* case_items  */
  YYSYMBOL_case_item = 152,                /* case_item  */
  YYSYMBOL_case_elem_list = 153,           /* case_elem_list  */
  YYSYMBOL_case_elem = 154,                /* case_elem  */
  YYSYMBOL_expr = 155,                     /* expr  */
  YYSYMBOL_simple_expr = 156,              /* simple_expr  */
  YYSYMBOL_primary = 157,                  /* primary  */
  YYSYMBOL_constant = 158,                 /* constant  */
  YYSYMBOL_set_elem_list = 159,            /* set_elem_list  */
  YYSYMBOL_set_elem = 160,                 /* set_elem  */
  YYSYMBOL_expr_list = 161,                /* expr_list  */
  YYSYMBOL_act_param_list = 162,           /* act_param_list  */
  YYSYMBOL_act_param = 163,                /* act_param  */
  YYSYMBOL_record_constant = 164,          /* record_constant  */
  YYSYMBOL_field_init_list = 165,          /* field_init_list  */
  YYSYMBOL_field_init_item = 166,          /* field_init_item  */
  YYSYMBOL_expr_group = 167,               /* expr_group  */
  YYSYMBOL_write_list = 168,               /* write_list  */
  YYSYMBOL_write_param = 169,              /* write_param  */
  YYSYMBOL_label_decl_part = 170,          /* label_decl_part  */
  YYSYMBOL_label_list = 171,               /* label_list  */
  YYSYMBOL_const = 172,                    /* const  */
  YYSYMBOL_const_def_part = 173,           /* const_def_part  */
  YYSYMBOL_const_def_list = 174,           /* const_def_list  */
  YYSYMBOL_const_def = 175,                /* const_def  */
  YYSYMBOL_type_def_part = 176,            /* type_def_part  */
  YYSYMBOL_type_def_list = 177,            /* type_def_list  */
  YYSYMBOL_type_def = 178,                 /* type_def  */
  YYSYMBOL_var_decl_part = 179,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 180,            /* var_decl_list  */
  YYSYMBOL_var_decl = 181,                 /* var_decl  */
  YYSYMBOL_proc_decl = 182,                /* proc_decl  */
  YYSYMBOL_proc_fwd_decl = 183,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 184,                /* proc_spec  */
  YYSYMBOL_proc_def = 185,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 186,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 187,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 188,                /* qualifier  */
  YYSYMBOL_qualifiers = 189,               /* qualifiers  */
  YYSYMBOL_formal_params = 190,            /* formal_params  */
  YYSYMBOL_formal_param_list = 191,        /* formal_param_list  */
  YYSYMBOL_formal_param = 192,             /* formal_param  */
  YYSYMBOL_param_decl = 193,               /* param_decl  */
  YYSYMBOL_param_type = 194,               /* param_type  */
  YYSYMBOL_type = 195,                     /* type  */
  YYSYMBOL_const_type = 196,               /* const_type  */
  YYSYMBOL_fptr_type = 197,                /* fptr_type  */
  YYSYMBOL_string_type = 198,              /* string_type  */
  YYSYMBOL_simple_type = 199,              /* simple_type  */
  YYSYMBOL_array_type = 200,               /* array_type  */
  YYSYMBOL_const_array_type = 201,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 202,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 203,                /* enum_type  */
  YYSYMBOL_range_type = 204,               /* range_type  */
  YYSYMBOL_pointer_type = 205,             /* pointer_type  */
  YYSYMBOL_set_type = 206,                 /* set_type  */
  YYSYMBOL_const_set_type = 207,           /* const_set_type  */
  YYSYMBOL_record_type = 208,              /* record_type  */
  YYSYMBOL_record_body = 209,              /* record_body  */
  YYSYMBOL_record_components = 210,        /* record_components  */
  YYSYMBOL_record_component = 211,         /* record_component  */
  YYSYMBOL_record_field_list = 212,        /* record_field_list  */
  YYSYMBOL_class_or_object = 213,          /* class_or_object  */
  YYSYMBOL_class_type = 214,               /* class_type  */
  YYSYMBOL_object_body = 215,              /* object_body  */
  YYSYMBOL_access_spec_tok = 216,          /* access_spec_tok  */
  YYSYMBOL_access_spec_decl = 217,         /* access_spec_decl  */
  YYSYMBOL_object_components = 218,        /* object_components  */
  YYSYMBOL_object_component = 219,         /* object_component  */
  YYSYMBOL_field_decl_part = 220,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 221,          /* field_decl_list  */
  YYSYMBOL_object_methods = 222,           /* object_methods  */
  YYSYMBOL_proc_fwd_decl_list = 223,       /* proc_fwd_decl_list  */
  YYSYMBOL_file_type = 224,                /* file_type  */
  YYSYMBOL_packed = 225,                   /* packed  */
  YYSYMBOL_conformant_indices = 226,       /* conformant_indices  */
  YYSYMBOL_conformant_index = 227,         /* conformant_index  */
  YYSYMBOL_indices = 228,                  /* indices  */
  YYSYMBOL_index_spec = 229,               /* index_spec  */
  YYSYMBOL_field_list = 230,               /* field_list  */
  YYSYMBOL_fixed_part = 231,               /* fixed_part  */
  YYSYMBOL_variant_part = 232,             /* variant_part  */
  YYSYMBOL_selector = 233,                 /* selector  */
  YYSYMBOL_variant_list = 234,             /* variant_list  */
  YYSYMBOL_variant = 235                   /* variant  */
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
#define YYLAST   1499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  634

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   366


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
      81,    82,     2,     2,    78,     2,    77,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    80,
       2,     2,     2,     2,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    85,     2,     2,     2,     2,     2,
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
      75,    76,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   331,   331,   331,   356,   356,   356,   358,   359,   364,
     364,   366,   367,   375,   377,   379,   381,   384,   387,   388,
     390,   391,   393,   398,   399,   401,   401,   401,   401,   402,
     402,   402,   404,   406,   410,   411,   413,   413,   413,   413,
     414,   414,   414,   443,   444,   446,   450,   453,   455,   458,
     459,   461,   462,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   481,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   498,   500,   500,   502,   502,   504,   505,
     507,   508,   520,   520,   522,   523,   524,   526,   528,   529,
     531,   532,   556,   557,   558,   559,   560,   561,   562,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   575,   576,
     577,   578,   579,   580,   581,   583,   584,   585,   586,   587,
     588,   589,   591,   592,   594,   596,   598,   600,   601,   603,
     604,   605,   606,   607,   608,   609,   611,   612,   613,   614,
     615,   616,   618,   619,   620,   622,   623,   625,   625,   627,
     628,   630,   630,   633,   637,   638,   640,   643,   646,   646,
     648,   649,   650,   692,   695,   696,   697,   698,   700,   700,
     702,   705,   706,   708,   709,   711,   714,   715,   717,   719,
     722,   736,   738,   744,   746,   751,   753,   757,   759,   763,
     765,   767,   769,   771,   773,   775,   777,   780,   780,   780,
     780,   780,   780,   780,   780,   780,   780,   782,   782,   782,
     782,   782,   782,   782,   784,   784,   786,   787,   791,   792,
     794,   795,   797,   798,   799,   800,   802,   803,   804,   806,
     806,   812,   812,   812,   812,   812,   812,   813,   813,   813,
     813,   813,   815,   815,   815,   815,   815,   817,   819,   821,
     823,   824,   826,   829,   832,   834,   837,   839,   842,   844,
     846,   861,   863,   866,   868,   869,   871,   873,   875,   876,
     878,   880,   881,   882,   884,   887,   887,   889,   891,   893,
     895,   900,   903,   904,   907,   907,   907,   907,   909,   911,
     913,   915,   916,   918,   919,   920,   921,   928,   932,   933,
     935,   938,   938,   939,   940,   943,   945,   945,   947,   948,
     950,   953,   953,   956,   957,   960,   962,   965,   967,   970,
     971,   974,   975,   976,   978
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
  "BEGIN", "CASE", "CDECL", "CLASS", "CONST", "DO", "DOTS", "DYNAMIC",
  "ELSE", "END", "EXCEPT", "EXTERNAL", "FIL", "FINAL", "FINALLY", "FAR",
  "FOR", "FORWARD", "FUNCTION", "GOTO", "IDENT", "ICONST", "IF",
  "IMPLEMENTATION", "INHERITED", "INTERFACE", "LABEL", "LOOPHOLE",
  "OBJECT", "OF", "ON", "ORIGIN", "OTHERWISE", "OVERLOAD", "OVERRIDE",
  "PACKED", "PASCAL", "PROCEDURE", "PROGRAM", "PRIVATE", "PROTECTED",
  "PUBLIC", "PUBLISHED", "RAISE", "RCONST", "READ", "RECORD", "REGISTER",
  "REINTRODUCE", "REPEAT", "RESOURCESTRING", "RETURN", "SAFECALL", "SET",
  "SCONST", "STATIC", "STDCALL", "STRING", "THEN", "TO", "TRY", "TYPE",
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
  "var_decl", "proc_decl", "proc_fwd_decl", "proc_spec", "proc_def",
  "fun_qualifier", "meth_qualifier", "qualifier", "qualifiers",
  "formal_params", "formal_param_list", "formal_param", "param_decl",
  "param_type", "type", "const_type", "fptr_type", "string_type",
  "simple_type", "array_type", "const_array_type", "conformant_array_type",
  "enum_type", "range_type", "pointer_type", "set_type", "const_set_type",
  "record_type", "record_body", "record_components", "record_component",
  "record_field_list", "class_or_object", "class_type", "object_body",
  "access_spec_tok", "access_spec_decl", "object_components",
  "object_component", "field_decl_part", "field_decl_list",
  "object_methods", "proc_fwd_decl_list", "file_type", "packed",
  "conformant_indices", "conformant_index", "indices", "index_spec",
  "field_list", "fixed_part", "variant_part", "selector", "variant_list",
  "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-487)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-261)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -487,    47,   295,  -487,  -487,    39,  1118,   100,    44,    57,
    -487,    72,    75,   103,  -487,  -487,  -487,  -487,    78,   158,
    1145,  -487,  -487,   143,  -487,  -487,  -487,  -487,  -487,    90,
     147,  1118,   160,   163,  -487,    -3,  1118,  -487,  -487,  -487,
    -487,  -487,  -487,   105,   117,   118,    84,   124,   171,  -487,
     134,   136,   177,   178,  -487,   191,  -487,   911,  -487,  -487,
     -20,  -487,   197,   258,   378,   244,   214,   217,   230,   217,
     220,  1145,  -487,  -487,   100,   100,  -487,   277,   223,   103,
     225,   515,    72,   276,   103,   515,   103,   535,   286,   128,
     236,   237,   535,   288,   239,   535,  -487,   241,   911,  -487,
    -487,   911,   535,   535,   242,   769,   535,  -487,  -487,  -487,
     247,  -487,   303,  1383,  -487,  -487,    21,   535,   143,   217,
     248,   249,   158,   103,   299,   305,   103,   253,  -487,   251,
     254,  -487,   515,   262,   263,   314,    85,  -487,  -487,  -487,
     217,   959,   264,  1145,  -487,   217,    98,  -487,  -487,  -487,
     217,   265,   773,   515,   238,   535,   535,   238,   535,   535,
     612,  -487,  1403,  -487,  -487,  -487,  -487,  -487,  -487,  -487,
    -487,  -487,  -487,   794,  -487,  -487,    71,  -487,  1118,  -487,
    -487,  -487,  -487,   799,   261,  -487,  -487,   911,   911,  1120,
     273,   515,  1343,   535,  -487,  -487,   293,    70,   571,  1179,
     354,   535,  -487,   287,   285,   291,   290,   632,   284,   297,
     911,  -487,   355,   535,   535,  -487,   535,   535,   535,   535,
     535,   535,   535,   535,   535,  -487,   289,  -487,  -487,  -487,
    -487,  -487,    83,  1343,  -487,   302,  1145,  -487,  -487,   217,
     217,  -487,    61,  -487,   244,   304,   515,  1072,  1118,   306,
     308,   312,  -487,  -487,  -487,  -487,  -487,   319,  -487,  -487,
    -487,  -487,  -487,  -487,  -487,  -487,  -487,  -487,  -487,  -487,
     320,  -487,  -487,  -487,   322,  -487,   317,    17,   324,  -487,
     535,   122,   323,  -487,   130,  -487,   130,  -487,   130,  -487,
    -487,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,  -487,  -487,  -487,  -487,  -487,   103,   379,  -487,  -487,
     327,    79,    79,   396,  -487,   103,  -487,   567,  -487,   567,
    -487,  -487,   328,   383,   821,   385,    29,   535,   535,  -487,
    -487,   911,   535,   334,   331,   535,   386,   911,   911,   535,
     911,  1217,   340,   346,   535,  -487,  -487,   402,   535,  -487,
     535,  -487,  -487,  1343,   348,   356,   351,  1343,  1343,  1343,
    1343,  1343,  1343,  1343,  1343,  1343,   535,   349,   403,   515,
     358,   357,  -487,  -487,   345,  -487,  -487,   439,  -487,  1025,
     367,   380,  -487,  -487,  1145,  1145,  -487,  1072,  -487,  -487,
    -487,   515,  1323,  -487,  1343,   814,   814,   814,   814,   814,
     814,   814,   700,   700,   700,   700,   700,  -487,  -487,  -487,
    -487,  -487,  -487,  -487,  -487,  1343,  1343,  1343,  1343,  1343,
    1343,  1343,  1343,  1343,  -487,   369,   103,  -487,  -487,  -487,
    -487,  -487,  -487,   310,   515,  -487,   103,  -487,  -487,   438,
    -487,  1119,  1119,   103,  -487,  -487,  -487,   447,   515,  1145,
    -487,   440,    59,   376,   381,   387,   652,  1140,   444,   377,
     535,  -487,  1343,   433,   234,   391,   449,  -487,  -487,  -487,
     535,  -487,   535,  1343,   287,  -487,  1343,  -487,  -487,   535,
    -487,  1343,   310,    21,   392,  -487,   515,   436,   390,   394,
     397,   398,  1072,   401,   404,  -487,  -487,  -487,  1092,  -487,
     677,  -487,   399,   408,  -487,  -487,  -487,  -487,  -487,  -487,
     546,  -487,  -487,   119,  -487,  -487,  -487,   911,   535,   911,
     535,   535,   535,   911,  -487,  1290,   409,   911,  -487,   386,
    -487,  1255,  -487,  -487,   406,  -487,  1145,  -487,   402,  -487,
     466,  1145,  -487,  1072,  -487,  -487,  -487,   487,   535,   468,
     310,     1,  -487,   469,   427,   428,  -487,  -487,  -487,  -487,
    1343,   592,  -487,  -487,     9,   492,  -487,   535,   474,   429,
     499,   443,   431,   432,  -487,  1343,   515,  -487,   515,   535,
    -487,  -487,   911,   510,  -487,  1343,    21,  -487,   497,   495,
     466,  -487,  -487,  -487,   451,  -487,   454,  -487,   158,  -487,
     452,    61,  -487,   456,   535,  -487,   515,  -487,  -487,   103,
    -487,  -487,   453,  -487
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    23,     1,   178,     0,    34,     0,     0,     0,
     179,   186,     0,   190,     3,     4,     5,     6,     0,    11,
      23,    31,    25,   181,    26,    27,    28,    30,    29,   228,
       0,    34,     0,     0,    42,     0,    34,    36,    37,    38,
      39,    41,    40,   176,   174,     0,   228,    18,     0,   185,
       0,     0,    21,     0,   189,     0,     7,    53,    22,    24,
       0,   180,     0,     0,    23,     0,     0,   228,     0,   228,
       0,    23,    33,    35,     0,     0,   173,     0,     0,     0,
       0,   316,   186,     0,     0,   316,   190,     0,     0,     0,
     151,   147,     0,    43,     0,     0,   148,    86,    53,    75,
     149,    53,     0,     0,    88,     0,   152,    82,    80,    81,
      84,    79,     0,    74,   139,   146,   316,     0,   181,   228,
       0,     0,     0,     0,     0,     0,     0,   238,   235,     0,
     230,   234,   316,     0,     0,     0,     0,    17,   177,   175,
     228,    23,     0,    23,   286,   228,   151,   147,   285,   317,
     228,   261,     0,   316,     0,     0,     0,     0,     0,     0,
       0,   102,   132,   188,   251,   250,   241,   242,   248,   249,
     247,   245,   243,     0,   244,   246,     0,   187,    34,    20,
     192,   191,   151,     0,     0,    64,    63,    53,    53,     0,
      44,   316,    73,     0,    72,    87,     0,     0,     0,   157,
       0,     0,    71,   151,     0,     0,   164,   155,     0,   153,
      53,    83,     0,   162,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,     0,   256,   252,   253,
     255,   254,     0,   183,   182,     0,    23,   203,   233,   228,
     228,   232,   316,   229,     0,     0,   316,   197,    34,     0,
       0,     0,   218,   211,   220,   216,   223,     0,   207,   208,
     222,   210,   209,   217,   213,   221,   212,   215,   219,   214,
       0,   224,   225,   226,     0,    19,     0,     9,     0,   258,
       0,   151,     0,   268,   137,   133,   132,   134,   138,   135,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   290,   294,   296,   295,   297,     0,     0,   305,   306,
       0,   311,   312,     0,   298,   301,   292,   300,   303,   293,
     304,   310,     0,     0,     0,     0,     0,    94,     0,    78,
      77,    53,   162,     0,     0,     0,    51,    53,    53,     0,
      53,   170,     0,   168,     0,   140,   163,     0,     0,   150,
     152,    85,   142,   161,     0,   159,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,   316,
       0,     0,   193,   261,   236,   239,   240,     0,   231,    23,
       0,     0,    15,    16,    23,    23,   199,   195,     8,    10,
      12,   316,     0,   266,   267,   129,   130,   126,   127,   125,
     128,   131,   103,   104,   122,   124,   123,   105,   107,   108,
     106,   118,   121,   120,   119,   109,   110,   111,   112,   113,
     116,   117,   114,   115,   307,     0,   308,   313,   314,   287,
     302,   299,   291,     0,   316,   272,     0,   282,   283,     0,
     274,   277,   275,   278,   327,   281,   284,   326,   316,    23,
      32,     0,    90,    95,     0,    98,   100,     0,    66,     0,
       0,   167,    70,     0,     0,    49,     0,    69,   158,    76,
       0,    89,     0,   166,     0,   165,   156,   154,   141,   162,
     144,   184,     0,   316,     0,   206,   316,     0,     0,     0,
       0,     0,   198,     0,     0,   227,   257,   259,     0,   309,
       0,   323,     0,   321,   315,   280,   271,   276,   273,   279,
     316,   325,   269,     0,    65,    93,    92,    53,    94,    53,
       0,     0,     0,    53,    45,     0,     0,    53,    47,    51,
      46,   171,   169,   160,     0,   270,    23,   194,     0,   237,
       0,    23,   200,   196,   201,   204,   289,     0,     0,     0,
       0,   151,   330,     0,     0,     0,    91,    96,    97,    99,
     101,     0,    67,   145,     0,     0,    50,     0,     0,     0,
       0,     0,   318,     0,   288,   324,   316,   322,   316,     0,
      13,    14,    53,     0,    48,   172,   316,   202,     0,     0,
       0,   205,   262,   329,     0,   328,   331,    68,     0,   263,
       0,   316,   319,     0,   332,    52,   316,   264,   265,     0,
     333,   320,     0,   334
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -487,  -487,  -487,  -487,  -487,  -487,  -487,  -487,    73,  -487,
      51,   -28,    13,  -487,     6,    31,  -487,  -487,  -487,  -487,
     -10,  -487,  -161,   -19,   -92,  -487,  -487,  -487,  -487,     7,
    -487,     4,  -487,   -74,   133,   -50,    42,   181,  -487,  -100,
    -348,  -487,  -487,   186,  -487,  -487,    64,  -487,    24,   175,
    -487,    14,   441,  -487,    18,   480,  -487,    32,   477,   -12,
    -487,     8,    34,  -487,  -487,  -487,  -388,  -343,    12,   321,
    -487,   -31,  -487,   -80,  -486,  -487,  -114,   -63,  -487,  -487,
     -55,  -487,  -487,  -487,  -487,  -487,  -108,  -487,  -201,  -487,
     107,  -487,  -487,    50,  -487,  -303,  -227,  -487,  -487,  -162,
    -268,   -56,  -487,  -106,   -37,  -487,  -479,  -487,  -440,  -487,
    -487,  -487,   -49,  -487
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    14,    15,   410,    16,    17,   136,    80,
      53,    18,   122,    20,    21,    35,    36,   107,   108,   109,
     484,   485,   110,   111,   112,   194,   202,   471,   537,   472,
     473,   474,   475,   160,   161,   162,   114,   208,   209,   204,
     374,   375,   115,   205,   206,   195,   362,   363,    22,    45,
      23,    24,    61,    62,    25,    49,    50,    26,    54,   330,
     128,    27,   332,    28,   271,   272,   273,   274,    66,   129,
     130,   131,   394,   163,   226,   164,   165,   166,   167,   229,
     396,   168,   169,   170,   171,   230,   172,   459,   460,   461,
     462,   173,   174,   333,   334,   335,   336,   337,   338,   464,
     340,   341,   175,   176,   591,   592,   522,   523,   466,   467,
     531,   573,   615,   616
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    55,   227,   200,   479,   180,   196,   113,   231,   197,
     232,   339,    34,   183,    41,    19,   525,   555,   189,   515,
      38,   192,    57,   554,    39,    71,   349,   350,   198,   199,
      37,   199,   207,    59,   225,  -260,   121,    34,    40,    41,
      42,   463,    34,   233,    41,    38,   225,     3,   113,    39,
      38,   113,   245,   228,    39,    37,   511,   469,    78,   116,
      37,   149,    68,    40,    29,    42,    72,    73,    40,    46,
      42,   393,   535,   283,    55,   342,   465,   117,   199,   133,
     598,   134,    47,   151,   137,   356,   225,   387,   343,   357,
      57,   597,   238,   354,   409,   241,   536,    48,   470,   249,
      51,   149,    30,    58,   284,   286,   286,   288,   286,   286,
     451,   353,   452,   270,   376,   276,   127,   250,   371,   199,
     619,    32,   344,   393,    57,    43,    44,   361,    52,   345,
     142,   235,  -260,   574,   344,   179,   397,   113,   113,   373,
     199,   388,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   553,   251,   185,   186,    56,   277,   278,   463,   463,
     113,    77,   279,    57,   444,    65,   400,    63,    60,   511,
      64,    65,    67,   450,   127,   515,  -260,   127,  -260,   395,
    -260,   331,  -260,    74,    34,    69,    41,   328,    70,   632,
     478,   329,    38,   465,   465,    75,    39,   487,    76,   489,
      84,   364,    37,   282,   -21,    79,   412,   212,   390,   346,
      40,   213,    42,   214,    82,   215,    83,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   547,   548,   138,
     139,   391,   392,   123,    34,    84,    41,    85,    58,   488,
     527,   528,    38,   182,   147,   486,    39,   124,    81,    52,
      94,    86,    37,   476,   477,   447,   448,   118,   373,   401,
      40,   482,    42,   119,   519,   199,   125,    96,   285,   287,
     493,   289,   290,   132,   496,   127,   207,   100,    65,    72,
     135,   113,   140,   141,     4,   143,   178,   113,   113,   504,
     113,   184,   501,   190,   126,   187,   188,   211,     5,   105,
     191,   106,   193,   201,   239,     6,     7,   210,   236,   237,
     240,   516,   242,   243,   244,   146,   147,     8,     9,   331,
     331,   246,    94,   247,   248,   331,   275,   331,   280,   348,
      10,   328,   331,   328,   352,   329,   339,   329,   457,    96,
     355,    11,   458,    12,   360,    13,   364,   365,   369,   100,
     367,   510,   393,   366,   524,   370,   513,   514,   578,   520,
     372,   389,   582,   402,   399,   403,   386,     4,   532,   227,
     521,   105,   404,   106,   408,   231,   154,   232,   120,   405,
     406,     5,   407,   411,   445,   413,   545,   446,    31,     7,
     449,   453,   480,   481,   155,   156,   551,   454,   361,   468,
       8,   483,   491,   157,   492,   373,   557,   494,   520,   158,
     498,   159,   502,    10,   499,   500,   506,   503,   505,   521,
     228,   617,   507,   508,    11,   576,    33,   512,    13,   470,
     572,   518,   526,   530,   534,   585,   538,   543,   546,   544,
     539,   182,   147,   550,   476,   540,   476,   580,   581,   331,
     331,   549,   556,   560,   561,   457,   457,   562,   563,   458,
     458,   564,   137,   569,   565,    96,   570,   113,   584,   113,
     588,   590,   227,   113,   595,   100,   520,   113,   231,   614,
     232,   594,   596,   599,   600,   601,   604,   521,   606,   607,
     608,   610,   611,   605,   575,   397,   612,   558,   613,   106,
     618,   603,   620,   144,   614,   199,   331,   609,   589,   621,
     623,   626,   328,   593,   624,   633,   329,   629,   145,   586,
     146,   147,   533,   228,   579,   577,   631,    94,   148,   559,
     199,   497,   113,   495,   144,   149,   552,   150,   627,   234,
     182,   147,   177,   181,    96,   398,   628,    94,   567,   145,
     529,   571,   147,   622,   100,   630,     4,   151,    94,   148,
       0,   358,     0,     0,    96,     0,   149,     0,   150,     0,
      30,     0,     0,     0,   100,    96,   152,     0,   106,   625,
     153,   154,   602,     0,     0,   100,     0,     0,   151,    32,
       0,   322,   323,   324,   325,     0,   105,     0,   106,   155,
     156,   154,    10,   291,     0,     0,     0,   152,   157,   106,
       0,   153,   154,    11,   158,     0,   159,   326,     0,   155,
     156,     0,     0,   368,     0,     0,     0,     0,   157,     0,
     155,   156,     0,     0,   158,     0,   159,     0,     0,   157,
       0,     0,     0,   541,     0,   158,     0,   159,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   568,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   203,   147,     0,     0,   281,   147,
       0,    94,     0,     4,     0,    94,     0,     0,   321,   304,
     305,   306,   307,   308,   309,   310,   311,    30,    96,    52,
       0,     0,    96,     0,     0,     0,     0,     0,   100,     0,
       4,     0,   100,   347,     0,   455,    32,     0,   322,   323,
     324,   325,     0,     0,    30,     0,    52,     0,     0,    10,
     105,     0,   106,     0,   105,   154,   106,     0,     0,   154,
      11,     0,     0,    32,   326,   322,   323,   324,   325,     0,
       0,     0,     0,   155,   156,   327,    10,   155,   156,     0,
       0,     0,   157,     0,     0,     0,   157,    11,   158,     0,
     159,   456,   158,     0,   159,     0,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,    57,    87,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,    88,     0,     0,    89,    90,    91,    92,     0,
      93,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,    97,   252,     0,     0,    98,   253,    99,     4,     0,
     100,   254,     0,     0,     0,   255,   101,   256,     0,   257,
       0,   258,     5,     0,   102,     0,   103,   104,     0,    31,
       7,     0,   105,     0,   106,     0,     0,   259,   260,     0,
     261,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,     0,    10,     0,   264,     0,     0,   265,
     266,     0,     0,     0,     0,    11,     0,    33,   252,    13,
     267,   268,   253,   269,     4,     0,     0,   254,     0,     0,
       0,   255,     0,   256,     0,   509,     0,   258,     5,     0,
       0,     0,     0,     0,     0,    31,     7,     0,     0,     0,
       0,     0,     0,   259,   260,     0,   261,     8,     0,     0,
       0,     0,     0,     0,     0,   252,     0,   262,   263,   253,
      10,     0,   264,     0,   254,   265,   266,     0,   255,     0,
     256,    11,     0,    33,   258,    13,   267,   268,     0,   269,
       0,     4,     0,     0,     0,     0,   566,     0,     0,     0,
     259,   260,     0,   261,     0,    30,     0,    52,     0,     0,
       0,     0,     0,     0,   262,   263,     0,     4,     4,   264,
       0,     0,   265,   266,    32,     0,   322,   323,   324,   325,
       0,    30,    30,   267,   268,     0,   269,    10,    31,     7,
       0,     0,     0,     0,     4,     0,     0,     0,    11,     0,
      32,    32,   326,   322,   323,   324,   325,     0,     5,     0,
       0,     0,     0,    10,    10,    31,     7,     0,     0,     0,
       0,     0,     0,   351,    11,    11,    33,     8,    13,   456,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,   542,     0,     0,     0,     0,     0,
       0,    11,     0,    33,     0,    13,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   490,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   583,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   517,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     212,     0,     0,     0,   213,     0,   214,     0,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     212,     0,     0,     0,   213,     0,   214,     0,   215,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320
};

static const yytype_int16 yycheck[] =
{
      19,    13,   116,   103,   352,    85,    98,    57,   116,   101,
     116,   173,     6,    87,     6,     2,   456,   503,    92,   407,
       6,    95,     5,   502,     6,    28,   187,   188,   102,   103,
       6,   105,   106,    20,    25,    34,    64,    31,     6,    31,
       6,   344,    36,   117,    36,    31,    25,     0,    98,    31,
      36,   101,   132,   116,    36,    31,   399,    28,    46,    79,
      36,    40,    31,    31,    25,    31,    69,    36,    36,    25,
      36,    62,    13,   153,    86,     4,   344,    97,   152,    67,
      79,    69,    25,    62,    71,    15,    25,     4,    17,    19,
       5,   570,   123,   193,    77,   126,    37,    25,    69,    14,
      25,    40,    23,   122,   154,   155,   156,   157,   158,   159,
     337,   191,   339,   141,   214,   143,    65,   136,   210,   193,
     606,    42,    51,    62,     5,    25,    26,   201,    25,    58,
      79,   119,    34,    14,    51,    84,   242,   187,   188,   213,
     214,    58,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   499,   140,    25,    26,    77,   143,   145,   461,   462,
     210,    77,   150,     5,   326,    81,   246,    77,    25,   512,
      80,    81,    25,   335,   123,   563,    78,   126,    80,   242,
      82,   173,    84,    78,   178,    25,   178,   173,    25,   629,
     351,   173,   178,   461,   462,    78,   178,   358,    80,   360,
      78,    79,   178,   152,    82,    81,   280,    77,   236,   178,
     178,    81,   178,    83,    80,    85,    80,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,    13,    14,    74,
      75,   239,   240,     9,   248,    78,   248,    79,   277,   359,
     461,   462,   248,    25,    26,   357,   248,    23,    97,    25,
      32,    80,   248,   347,   348,   331,   332,    80,   352,   248,
     248,   355,   248,    25,   446,   359,    42,    49,   155,   156,
     364,   158,   159,    79,   368,   244,   370,    59,    81,    69,
      80,   351,    25,    80,     9,    80,    30,   357,   358,   389,
     360,    25,   386,    25,    70,    79,    79,    14,    23,    81,
      81,    83,    81,    81,    25,    30,    31,    80,    80,    80,
      25,   411,    79,    82,    80,    25,    26,    42,    43,   331,
     332,    79,    32,    80,    30,   337,    82,   339,    83,    88,
      55,   337,   344,   339,    81,   337,   518,   339,   344,    49,
      67,    66,   344,    68,    10,    70,    79,    82,    84,    59,
      80,   399,    62,    82,   454,    78,   404,   405,   539,   453,
      25,    79,   543,    77,    80,    77,    97,     9,   468,   503,
     453,    81,    80,    83,    77,   503,    86,   503,    20,    80,
      80,    23,    80,    79,    25,    82,   480,    80,    30,    31,
      14,    83,    78,    82,   104,   105,   490,    34,   492,    34,
      42,    35,    82,   113,    78,   499,   506,    25,   502,   119,
      82,   121,    83,    55,    78,    84,    79,    34,    80,   502,
     503,   602,    97,     4,    66,   537,    68,    80,    70,    69,
     530,    82,    14,     6,    14,   547,    80,    13,    25,    82,
      79,    25,    26,    14,   538,    78,   540,   541,   542,   461,
     462,    80,    80,    83,    80,   461,   462,    80,    80,   461,
     462,    80,   469,    84,    80,    49,    78,   537,    79,   539,
      84,    25,   606,   543,   568,    59,   570,   547,   606,   599,
     606,    14,    34,    34,    77,    77,    14,   570,    34,    80,
      11,    80,    80,   587,   533,   621,   596,    81,   598,    83,
      10,   584,    25,     8,   624,   599,   518,    84,   556,    34,
      79,    79,   518,   561,    80,    82,   518,    81,    23,   549,
      25,    26,   469,   606,   540,   538,   626,    32,    33,   507,
     624,   370,   602,   367,     8,    40,   492,    42,   621,   118,
      25,    26,    82,    86,    49,   244,   621,    32,   518,    23,
     463,    25,    26,   610,    59,   624,     9,    62,    32,    33,
      -1,    10,    -1,    -1,    49,    -1,    40,    -1,    42,    -1,
      23,    -1,    -1,    -1,    59,    49,    81,    -1,    83,   618,
      85,    86,    10,    -1,    -1,    59,    -1,    -1,    62,    42,
      -1,    44,    45,    46,    47,    -1,    81,    -1,    83,   104,
     105,    86,    55,    11,    -1,    -1,    -1,    81,   113,    83,
      -1,    85,    86,    66,   119,    -1,   121,    70,    -1,   104,
     105,    -1,    -1,    11,    -1,    -1,    -1,    -1,   113,    -1,
     104,   105,    -1,    -1,   119,    -1,   121,    -1,    -1,   113,
      -1,    -1,    -1,    11,    -1,   119,    -1,   121,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    11,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    25,    26,    -1,    -1,    25,    26,
      -1,    32,    -1,     9,    -1,    32,    -1,    -1,    14,   109,
     110,   111,   112,   113,   114,   115,   116,    23,    49,    25,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    59,    -1,
       9,    -1,    59,    34,    -1,    14,    42,    -1,    44,    45,
      46,    47,    -1,    -1,    23,    -1,    25,    -1,    -1,    55,
      81,    -1,    83,    -1,    81,    86,    83,    -1,    -1,    86,
      66,    -1,    -1,    42,    70,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,   104,   105,    81,    55,   104,   105,    -1,
      -1,    -1,   113,    -1,    -1,    -1,   113,    66,   119,    -1,
     121,    70,   119,    -1,   121,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     5,     6,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,     3,    -1,    -1,    54,     7,    56,     9,    -1,
      59,    12,    -1,    -1,    -1,    16,    65,    18,    -1,    20,
      -1,    22,    23,    -1,    73,    -1,    75,    76,    -1,    30,
      31,    -1,    81,    -1,    83,    -1,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    57,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,    -1,    68,     3,    70,
      71,    72,     7,    74,     9,    -1,    -1,    12,    -1,    -1,
      -1,    16,    -1,    18,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    52,    53,     7,
      55,    -1,    57,    -1,    12,    60,    61,    -1,    16,    -1,
      18,    66,    -1,    68,    22,    70,    71,    72,    -1,    74,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      38,    39,    -1,    41,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     9,     9,    57,
      -1,    -1,    60,    61,    42,    -1,    44,    45,    46,    47,
      -1,    23,    23,    71,    72,    -1,    74,    55,    30,    31,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    66,    -1,
      42,    42,    70,    44,    45,    46,    47,    -1,    23,    -1,
      -1,    -1,    -1,    55,    55,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    66,    66,    68,    42,    70,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    -1,    70,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      77,    -1,    -1,    -1,    81,    -1,    83,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      77,    -1,    -1,    -1,    81,    -1,    83,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   123,   124,     0,     9,    23,    30,    31,    42,    43,
      55,    66,    68,    70,   125,   126,   128,   129,   133,   134,
     135,   136,   170,   172,   173,   176,   179,   183,   185,    25,
      23,    30,    42,    68,   136,   137,   138,   170,   173,   176,
     179,   183,   184,    25,    26,   171,    25,    25,    25,   177,
     178,    25,    25,   132,   180,   181,    77,     5,   145,   134,
      25,   174,   175,    77,    80,    81,   190,    25,   137,    25,
      25,    28,    69,   137,    78,    78,    80,    77,   190,    81,
     131,    97,    80,    80,    78,    79,    80,     6,    21,    24,
      25,    26,    27,    29,    32,    48,    49,    50,    54,    56,
      59,    65,    73,    75,    76,    81,    83,   139,   140,   141,
     144,   145,   146,   157,   158,   164,    79,    97,    80,    25,
      20,   133,   134,     9,    23,    42,    70,   132,   182,   191,
     192,   193,    79,   190,   190,    80,   130,   134,   171,   171,
      25,    80,   132,    80,     8,    23,    25,    26,    33,    40,
      42,    62,    81,    85,    86,   104,   105,   113,   119,   121,
     155,   156,   157,   195,   197,   198,   199,   200,   203,   204,
     205,   206,   208,   213,   214,   224,   225,   177,    30,   132,
     195,   180,    25,   155,    25,    25,    26,    79,    79,   155,
      25,    81,   155,    81,   147,   167,   146,   146,   155,   155,
     161,    81,   148,    25,   161,   165,   166,   155,   159,   160,
      80,    14,    77,    81,    83,    85,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    25,   196,   198,   199,   201,
     207,   208,   225,   155,   174,   190,    80,    80,   193,    25,
      25,   193,    79,    82,    80,   195,    79,    80,    30,    14,
     145,   190,     3,     7,    12,    16,    18,    20,    22,    38,
      39,    41,    52,    53,    57,    60,    61,    71,    72,    74,
     133,   186,   187,   188,   189,    82,   133,   134,   190,   190,
      83,    25,   132,   195,   157,   156,   157,   156,   157,   156,
     156,    11,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    14,    44,    45,    46,    47,    70,    81,   173,   176,
     181,   183,   184,   215,   216,   217,   218,   219,   220,   221,
     222,   223,     4,    17,    51,    58,   137,    34,    88,   144,
     144,    63,    81,   195,   161,    67,    15,    19,    10,    78,
      10,   155,   168,   169,    79,    82,    82,    80,    11,    84,
      78,   146,    25,   155,   162,   163,   161,   155,   155,   155,
     155,   155,   155,   155,   155,   155,    97,     4,    58,    79,
     133,   190,   190,    62,   194,   199,   202,   225,   191,    80,
     195,   137,    77,    77,    80,    80,    80,    80,    77,    77,
     127,    79,   155,    82,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   221,    25,    80,   223,   223,    14,
     221,   218,   218,    83,    34,    14,    70,   173,   176,   209,
     210,   211,   212,   217,   221,   222,   230,   231,    34,    28,
      69,   149,   151,   152,   153,   154,   155,   155,   144,   162,
      78,    82,   155,    35,   142,   143,   146,   144,   161,   144,
      79,    82,    78,   155,    25,   165,   155,   159,    82,    78,
      84,   155,    83,    34,   195,    80,    79,    97,     4,    20,
     133,   189,    80,   133,   133,   188,   195,    84,    82,   221,
     155,   199,   228,   229,   195,   230,    14,   210,   210,   212,
       6,   232,   195,   130,    14,    13,    37,   150,    80,    79,
      78,    11,    64,    13,    82,   155,    25,    13,    14,    80,
      14,   155,   168,   162,   228,   196,    80,   195,    81,   158,
      83,    80,    80,    80,    80,    80,    14,   215,    11,    84,
      78,    25,   195,   233,    14,   145,   146,   151,   144,   153,
     155,   155,   144,    82,    79,   146,   142,    79,    84,   133,
      25,   226,   227,   133,    14,   155,    34,   228,    79,    34,
      77,    77,    10,   199,    14,   155,    34,    80,    11,    84,
      80,    80,   195,   195,   161,   234,   235,   144,    10,   196,
      25,    34,   226,    79,    80,   145,    79,   199,   202,    81,
     234,   195,   230,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   124,   123,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   130,   131,   131,
     132,   132,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   136,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   139,   139,   139,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   152,   153,   153,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     158,   158,   159,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   165,   165,   166,   167,   168,   168,
     169,   169,   169,   170,   171,   171,   171,   171,   172,   172,
     173,   174,   174,   175,   175,   176,   177,   177,   178,   179,
     180,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   192,   192,   193,   193,   193,   194,
     194,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   196,   196,   196,   197,   197,   198,
     199,   199,   200,   201,   202,   202,   203,   204,   205,   206,
     207,   208,   208,   209,   209,   209,   210,   210,   211,   211,
     211,   211,   211,   211,   212,   213,   213,   214,   214,   214,
     214,   215,   215,   215,   216,   216,   216,   216,   217,   218,
     218,   219,   219,   219,   219,   219,   219,   220,   221,   221,
     222,   223,   223,   223,   223,   224,   225,   225,   226,   226,
     227,   228,   228,   229,   229,   230,   230,   231,   232,   233,
     233,   234,   234,   234,   235
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
       0,     3,     3,     3,     5,     6,     8,     4,     6,     6,
       8,     8,    10,     5,     8,    10,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     3,
       1,     3,     2,     2,     1,     1,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     4,
       1,     1,     7,     7,     7,     7,     3,     3,     2,     4,
       4,     4,     3,     2,     1,     1,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     1,     2,     2,     4,     0,     1,     1,     3,
       5,     1,     3,     1,     3,     2,     1,     1,     4,     3,
       1,     1,     2,     3,     5
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

    case YYSYMBOL_77_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_78_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_79_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_80_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_81_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_82_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_83_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_84_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_85_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_86_: /* '@'  */
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
{ 
    (yyval.n_node) = new program_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_imp), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok));
}
    break;

  case 9: /* progend: %empty  */
         { (yyval.tok) = NULL; }
    break;

  case 11: /* module: decl_part_list  */
                       { (yyval.n_node) = new module_node(NULL, NULL, NULL, NULL, (yyvsp[0].n_decl), NULL); }
    break;

  case 12: /* module: PROGRAM IDENT prog_param_list ';' decl_part_list progend  */
{ 
    (yyval.n_node) = new module_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_imp), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok));
}
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
{
    (yyval.n_block) = new block_node((yyvsp[-1].n_decl), (yyvsp[0].n_comp));
}
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

  case 197: /* proc_spec: PROCEDURE IDENT formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 198: /* proc_spec: FUNCTION IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 199: /* proc_def: PROCEDURE IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 200: /* proc_def: FUNCTION IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 201: /* proc_def: PROCEDURE IDENT '.' IDENT formal_params ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 202: /* proc_def: FUNCTION IDENT '.' IDENT formal_params ':' type ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 203: /* proc_def: FUNCTION IDENT ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-4].tok), NULL, NULL, (yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].tok), NULL, NULL, (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 204: /* proc_def: PROCEDURE IDENT formal_params ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 205: /* proc_def: FUNCTION IDENT formal_params ':' type ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-9].tok), NULL, NULL, (yyvsp[-8].tok), (yyvsp[-7].n_plist), (yyvsp[-6].tok), (yyvsp[-5].n_tpd), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 206: /* proc_def: FUNCTION IDENT ';' FAR ';' block ';'  */
               { (yyval.n_decl) = new proc_def_node((yyvsp[-6].tok), NULL, NULL, (yyvsp[-5].tok), NULL, NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 226: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 227: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 228: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 229: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 231: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 232: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 233: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 234: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 236: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 237: /* param_decl: ident_list ':' param_type EQ constant  */
                                             { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 238: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL); }
    break;

  case 257: /* fptr_type: FUNCTION formal_params ':' type  */
    { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 258: /* fptr_type: PROCEDURE formal_params  */
                              { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 259: /* string_type: STRING '[' expr ']'  */
                                 { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 260: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node((yyvsp[0].tok)); }
    break;

  case 261: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 262: /* array_type: packed ARRAY '[' indices ']' OF type  */
    { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 263: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
    { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 264: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF simple_type  */
         { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 265: /* conformant_array_type: packed ARRAY '[' conformant_indices ']' OF conformant_array_type  */
         { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 266: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 267: /* range_type: expr DOTS expr  */
    { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 268: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 269: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 270: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 271: /* record_type: packed RECORD record_body END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 272: /* record_type: packed RECORD END  */
       { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 273: /* record_body: record_field_list record_components  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 276: /* record_components: record_component record_components  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 279: /* record_component: access_spec_decl record_field_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 280: /* record_component: VAR field_list  */
       { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 284: /* record_field_list: field_list  */
       { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 287: /* class_type: class_or_object object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 288: /* class_type: class_or_object '(' IDENT ')' object_body END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 289: /* class_type: class_or_object '(' IDENT ')' END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 290: /* class_type: class_or_object END  */
       { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 291: /* object_body: field_decl_list object_components  */
         { (yyvsp[-1].n_vdcl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_vdcl); }
    break;

  case 293: /* object_body: field_decl_list  */
         { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 298: /* access_spec_decl: access_spec_tok  */
                                  { (yyval.n_decl) = new access_specifier_node((yyvsp[0].tok)); }
    break;

  case 299: /* object_components: object_component object_components  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 302: /* object_component: access_spec_decl field_decl_list  */
       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 307: /* field_decl_part: VAR field_decl_list  */
       { (yyval.n_decl) = new var_decl_part_node((yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 308: /* field_decl_list: var_decl ';'  */
                  { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 309: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 310: /* object_methods: proc_fwd_decl_list  */
       { (yyval.n_decl) = new proc_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 313: /* proc_fwd_decl_list: proc_fwd_decl proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 314: /* proc_fwd_decl_list: proc_spec proc_fwd_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 315: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 316: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 319: /* conformant_indices: conformant_index ';' conformant_indices  */
                                              { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 320: /* conformant_index: IDENT DOTS IDENT ':' type  */
        { (yyval.n_idx) = new conformant_index_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 322: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 323: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 324: /* index_spec: expr DOTS expr  */
                     { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 325: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 326: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 328: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 329: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 330: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 332: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 333: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 334: /* variant: expr_list ':' '(' field_list ')'  */
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


