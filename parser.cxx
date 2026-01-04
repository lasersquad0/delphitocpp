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
  YYSYMBOL_UNSAFE = 80,                    /* UNSAFE  */
  YYSYMBOL_VAR = 81,                       /* VAR  */
  YYSYMBOL_VARARGS = 82,                   /* VARARGS  */
  YYSYMBOL_VIRTUAL = 83,                   /* VIRTUAL  */
  YYSYMBOL_WHILE = 84,                     /* WHILE  */
  YYSYMBOL_WINAPI = 85,                    /* WINAPI  */
  YYSYMBOL_WITH = 86,                      /* WITH  */
  YYSYMBOL_WRITE = 87,                     /* WRITE  */
  YYSYMBOL_88_ = 88,                       /* '.'  */
  YYSYMBOL_89_ = 89,                       /* ','  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_91_ = 91,                       /* ';'  */
  YYSYMBOL_92_ = 92,                       /* '('  */
  YYSYMBOL_93_ = 93,                       /* ')'  */
  YYSYMBOL_94_ = 94,                       /* '['  */
  YYSYMBOL_95_ = 95,                       /* ']'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '@'  */
  YYSYMBOL_SCOPE = 98,                     /* SCOPE  */
  YYSYMBOL_LET = 99,                       /* LET  */
  YYSYMBOL_LETADD = 100,                   /* LETADD  */
  YYSYMBOL_LETSUB = 101,                   /* LETSUB  */
  YYSYMBOL_LETDIV = 102,                   /* LETDIV  */
  YYSYMBOL_LETMUL = 103,                   /* LETMUL  */
  YYSYMBOL_LETAND = 104,                   /* LETAND  */
  YYSYMBOL_LETOR = 105,                    /* LETOR  */
  YYSYMBOL_LETSHL = 106,                   /* LETSHL  */
  YYSYMBOL_LETSHR = 107,                   /* LETSHR  */
  YYSYMBOL_EQ = 108,                       /* EQ  */
  YYSYMBOL_NE = 109,                       /* NE  */
  YYSYMBOL_LT = 110,                       /* LT  */
  YYSYMBOL_LE = 111,                       /* LE  */
  YYSYMBOL_GT = 112,                       /* GT  */
  YYSYMBOL_GE = 113,                       /* GE  */
  YYSYMBOL_IN = 114,                       /* IN  */
  YYSYMBOL_IS = 115,                       /* IS  */
  YYSYMBOL_PLUS = 116,                     /* PLUS  */
  YYSYMBOL_MINUS = 117,                    /* MINUS  */
  YYSYMBOL_OR = 118,                       /* OR  */
  YYSYMBOL_XOR = 119,                      /* XOR  */
  YYSYMBOL_BINOR = 120,                    /* BINOR  */
  YYSYMBOL_MOD = 121,                      /* MOD  */
  YYSYMBOL_DIV = 122,                      /* DIV  */
  YYSYMBOL_DIVR = 123,                     /* DIVR  */
  YYSYMBOL_MUL = 124,                      /* MUL  */
  YYSYMBOL_AND = 125,                      /* AND  */
  YYSYMBOL_SHR = 126,                      /* SHR  */
  YYSYMBOL_SHL = 127,                      /* SHL  */
  YYSYMBOL_BINAND = 128,                   /* BINAND  */
  YYSYMBOL_AS = 129,                       /* AS  */
  YYSYMBOL_UPLUS = 130,                    /* UPLUS  */
  YYSYMBOL_UMINUS = 131,                   /* UMINUS  */
  YYSYMBOL_NOT = 132,                      /* NOT  */
  YYSYMBOL_ADDRESS = 133,                  /* ADDRESS  */
  YYSYMBOL_BINNOT = 134,                   /* BINNOT  */
  YYSYMBOL_EQUAL = 135,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 136,                 /* NOTEQUAL  */
  YYSYMBOL_LESSTH = 137,                   /* LESSTH  */
  YYSYMBOL_GREATERTH = 138,                /* GREATERTH  */
  YYSYMBOL_ADD = 139,                      /* ADD  */
  YYSYMBOL_SUBSTRACT = 140,                /* SUBSTRACT  */
  YYSYMBOL_MULTIPLY = 141,                 /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 142,                   /* DIVIDE  */
  YYSYMBOL_INTDIVIDE = 143,                /* INTDIVIDE  */
  YYSYMBOL_MODULUS = 144,                  /* MODULUS  */
  YYSYMBOL_IMPLICIT = 145,                 /* IMPLICIT  */
  YYSYMBOL_EXPLICIT = 146,                 /* EXPLICIT  */
  YYSYMBOL_YYACCEPT = 147,                 /* $accept  */
  YYSYMBOL_translation = 148,              /* translation  */
  YYSYMBOL_149_1 = 149,                    /* $@1  */
  YYSYMBOL_input_file = 150,               /* input_file  */
  YYSYMBOL_program = 151,                  /* program  */
  YYSYMBOL_progend = 152,                  /* progend  */
  YYSYMBOL_module = 153,                   /* module  */
  YYSYMBOL_unit = 154,                     /* unit  */
  YYSYMBOL_init_finit = 155,               /* init_finit  */
  YYSYMBOL_var_const_decl_part_list = 156, /* var_const_decl_part_list  */
  YYSYMBOL_var_const_decl_part = 157,      /* var_const_decl_part  */
  YYSYMBOL_unit_def_list = 158,            /* unit_def_list  */
  YYSYMBOL_prog_param_list = 159,          /* prog_param_list  */
  YYSYMBOL_ident_ext = 160,                /* ident_ext  */
  YYSYMBOL_ident_list = 161,               /* ident_list  */
  YYSYMBOL_block = 162,                    /* block  */
  YYSYMBOL_decl_part_list = 163,           /* decl_part_list  */
  YYSYMBOL_decl_part = 164,                /* decl_part  */
  YYSYMBOL_unit_spec = 165,                /* unit_spec  */
  YYSYMBOL_unit_decl_list = 166,           /* unit_decl_list  */
  YYSYMBOL_unit_decl = 167,                /* unit_decl  */
  YYSYMBOL_inherited = 168,                /* inherited  */
  YYSYMBOL_try_finally = 169,              /* try_finally  */
  YYSYMBOL_try_except = 170,               /* try_except  */
  YYSYMBOL_except_many = 171,              /* except_many  */
  YYSYMBOL_except = 172,                   /* except  */
  YYSYMBOL_statement = 173,                /* statement  */
  YYSYMBOL_compoundst = 174,               /* compoundst  */
  YYSYMBOL_assemblerst = 175,              /* assemblerst  */
  YYSYMBOL_asm_kwd = 176,                  /* asm_kwd  */
  YYSYMBOL_asm_line = 177,                 /* asm_line  */
  YYSYMBOL_asm_text = 178,                 /* asm_text  */
  YYSYMBOL_sequence = 179,                 /* sequence  */
  YYSYMBOL_case_list = 180,                /* case_list  */
  YYSYMBOL_otherwise = 181,                /* otherwise  */
  YYSYMBOL_case_items = 182,               /* case_items  */
  YYSYMBOL_case_item = 183,                /* case_item  */
  YYSYMBOL_case_elem_list = 184,           /* case_elem_list  */
  YYSYMBOL_case_elem = 185,                /* case_elem  */
  YYSYMBOL_const_expr = 186,               /* const_expr  */
  YYSYMBOL_const_simple_expr = 187,        /* const_simple_expr  */
  YYSYMBOL_const_expr_list = 188,          /* const_expr_list  */
  YYSYMBOL_const_act_param_list = 189,     /* const_act_param_list  */
  YYSYMBOL_const_act_param = 190,          /* const_act_param  */
  YYSYMBOL_expr = 191,                     /* expr  */
  YYSYMBOL_simple_expr = 192,              /* simple_expr  */
  YYSYMBOL_primary = 193,                  /* primary  */
  YYSYMBOL_constant = 194,                 /* constant  */
  YYSYMBOL_set_elem_list = 195,            /* set_elem_list  */
  YYSYMBOL_set_elem = 196,                 /* set_elem  */
  YYSYMBOL_expr_list = 197,                /* expr_list  */
  YYSYMBOL_act_param_list = 198,           /* act_param_list  */
  YYSYMBOL_act_param = 199,                /* act_param  */
  YYSYMBOL_record_constant = 200,          /* record_constant  */
  YYSYMBOL_field_init_list = 201,          /* field_init_list  */
  YYSYMBOL_field_init_item = 202,          /* field_init_item  */
  YYSYMBOL_label_decl_part = 203,          /* label_decl_part  */
  YYSYMBOL_label_list = 204,               /* label_list  */
  YYSYMBOL_const = 205,                    /* const  */
  YYSYMBOL_const_def_part = 206,           /* const_def_part  */
  YYSYMBOL_const_def_list = 207,           /* const_def_list  */
  YYSYMBOL_const_def = 208,                /* const_def  */
  YYSYMBOL_type_def_part = 209,            /* type_def_part  */
  YYSYMBOL_type_def_list = 210,            /* type_def_list  */
  YYSYMBOL_type_def = 211,                 /* type_def  */
  YYSYMBOL_var_decl_part = 212,            /* var_decl_part  */
  YYSYMBOL_var_decl_list = 213,            /* var_decl_list  */
  YYSYMBOL_attr_decl = 214,                /* attr_decl  */
  YYSYMBOL_var_decl = 215,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 216,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 217,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 218,        /* operator_fwd_decl  */
  YYSYMBOL_proc_def = 219,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 220,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 221,           /* meth_qualifier  */
  YYSYMBOL_optional_semicolon = 222,       /* optional_semicolon  */
  YYSYMBOL_qualifier = 223,                /* qualifier  */
  YYSYMBOL_qualifiers = 224,               /* qualifiers  */
  YYSYMBOL_property_decl = 225,            /* property_decl  */
  YYSYMBOL_prop_array = 226,               /* prop_array  */
  YYSYMBOL_prop_index = 227,               /* prop_index  */
  YYSYMBOL_prop_type_def = 228,            /* prop_type_def  */
  YYSYMBOL_prop_read = 229,                /* prop_read  */
  YYSYMBOL_prop_write = 230,               /* prop_write  */
  YYSYMBOL_prop_stored = 231,              /* prop_stored  */
  YYSYMBOL_prop_default = 232,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 233,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 234,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 235,          /* prop_param_decl  */
  YYSYMBOL_formal_params = 236,            /* formal_params  */
  YYSYMBOL_formal_param_list = 237,        /* formal_param_list  */
  YYSYMBOL_formal_param = 238,             /* formal_param  */
  YYSYMBOL_param_decl = 239,               /* param_decl  */
  YYSYMBOL_param_type = 240,               /* param_type  */
  YYSYMBOL_type = 241,                     /* type  */
  YYSYMBOL_const_type = 242,               /* const_type  */
  YYSYMBOL_fptr_type = 243,                /* fptr_type  */
  YYSYMBOL_string_type = 244,              /* string_type  */
  YYSYMBOL_simple_templ_type = 245,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 246,              /* simple_type  */
  YYSYMBOL_array_type = 247,               /* array_type  */
  YYSYMBOL_const_array_type = 248,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 249,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 250,                /* enum_type  */
  YYSYMBOL_range_type = 251,               /* range_type  */
  YYSYMBOL_pointer_type = 252,             /* pointer_type  */
  YYSYMBOL_set_type = 253,                 /* set_type  */
  YYSYMBOL_const_set_type = 254,           /* const_set_type  */
  YYSYMBOL_record_type = 255,              /* record_type  */
  YYSYMBOL_record_body = 256,              /* record_body  */
  YYSYMBOL_record_components = 257,        /* record_components  */
  YYSYMBOL_record_component = 258,         /* record_component  */
  YYSYMBOL_record_methods = 259,           /* record_methods  */
  YYSYMBOL_record_method_decl = 260,       /* record_method_decl  */
  YYSYMBOL_record_field_list = 261,        /* record_field_list  */
  YYSYMBOL_interface_type = 262,           /* interface_type  */
  YYSYMBOL_interface_components = 263,     /* interface_components  */
  YYSYMBOL_interface_component = 264,      /* interface_component  */
  YYSYMBOL_guid = 265,                     /* guid  */
  YYSYMBOL_class_or_object = 266,          /* class_or_object  */
  YYSYMBOL_class_type = 267,               /* class_type  */
  YYSYMBOL_object_body = 268,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 269,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 270,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 271,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 272,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 273,        /* object_components  */
  YYSYMBOL_object_component = 274,         /* object_component  */
  YYSYMBOL_field_decl_part = 275,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 276,          /* field_decl_list  */
  YYSYMBOL_object_methods = 277,           /* object_methods  */
  YYSYMBOL_method_decl_list = 278,         /* method_decl_list  */
  YYSYMBOL_method_decl = 279,              /* method_decl  */
  YYSYMBOL_file_type = 280,                /* file_type  */
  YYSYMBOL_packed = 281,                   /* packed  */
  YYSYMBOL_indices = 282,                  /* indices  */
  YYSYMBOL_index_spec = 283,               /* index_spec  */
  YYSYMBOL_field_list = 284,               /* field_list  */
  YYSYMBOL_fixed_part = 285,               /* fixed_part  */
  YYSYMBOL_variant_part = 286,             /* variant_part  */
  YYSYMBOL_selector = 287,                 /* selector  */
  YYSYMBOL_variant_list = 288,             /* variant_list  */
  YYSYMBOL_variant = 289                   /* variant  */
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
#define YYLAST   2242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  464
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  875

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   391


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
      92,    93,     2,     2,    89,     2,    88,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    91,
       2,     2,     2,     2,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    96,     2,     2,     2,     2,     2,
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
      85,    86,    87,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   408,   408,   408,   433,   433,   433,   435,   436,   439,
     439,   441,   442,   448,   450,   452,   454,   456,   459,   461,
     464,   465,   467,   467,   483,   485,   486,   490,   490,   490,
     490,   492,   493,   495,   497,   500,   501,   503,   503,   503,
     503,   504,   504,   504,   506,   508,   512,   513,   515,   515,
     515,   515,   516,   516,   516,   546,   548,   550,   554,   557,
     559,   562,   563,   565,   566,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     585,   587,   588,   591,   592,   594,   595,   596,   597,   598,
     599,   601,   603,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   615,   617,   618,   621,   621,
     628,   629,   641,   641,   643,   644,   645,   647,   649,   650,
     652,   653,   677,   678,   679,   680,   681,   682,   683,   685,
     686,   687,   688,   689,   690,   691,   693,   694,   695,   696,
     698,   699,   700,   701,   702,   703,   704,   706,   707,   709,
     711,   713,   716,   716,   718,   719,   721,   721,   723,   724,
     725,   726,   727,   728,   729,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   741,   742,   743,   744,   745,   746,
     747,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     759,   760,   762,   764,   766,   768,   769,   771,   772,   773,
     774,   775,   776,   777,   780,   781,   782,   783,   784,   785,
     786,   790,   791,   792,   794,   795,   797,   797,   799,   800,
     802,   802,   805,   807,   808,   810,   861,   864,   865,   866,
     867,   869,   869,   871,   873,   874,   876,   878,   880,   882,
     884,   886,   889,   892,   893,   896,   897,   898,   899,   901,
     903,   904,   919,   922,   923,   924,   925,   927,   928,   929,
     930,   950,   952,   956,   958,   962,   964,   968,   970,   972,
     974,   976,   978,   980,   982,   995,   995,   995,   995,   995,
     995,   995,   995,   995,   995,   995,   995,   997,   997,   997,
     997,   997,   997,   997,   999,   999,  1001,  1002,  1003,  1005,
    1006,  1011,  1013,  1020,  1021,  1023,  1024,  1026,  1028,  1029,
    1031,  1032,  1034,  1035,  1037,  1038,  1040,  1041,  1044,  1045,
    1047,  1050,  1051,  1052,  1054,  1055,  1057,  1058,  1059,  1060,
    1063,  1064,  1065,  1067,  1067,  1073,  1073,  1073,  1073,  1073,
    1073,  1073,  1074,  1074,  1074,  1074,  1074,  1074,  1076,  1076,
    1076,  1076,  1076,  1076,  1078,  1080,  1082,  1084,  1087,  1089,
    1091,  1092,  1093,  1098,  1100,  1103,  1110,  1112,  1120,  1122,
    1125,  1127,  1129,  1139,  1141,  1144,  1151,  1152,  1154,  1160,
    1162,  1163,  1165,  1167,  1169,  1171,  1172,  1174,  1175,  1178,
    1180,  1182,  1184,  1186,  1188,  1190,  1195,  1197,  1199,  1201,
    1203,  1205,  1207,  1209,  1214,  1223,  1225,  1228,  1231,  1231,
    1234,  1236,  1238,  1240,  1242,  1246,  1250,  1251,  1264,  1264,
    1266,  1266,  1266,  1268,  1269,  1271,  1272,  1273,  1275,  1276,
    1286,  1287,  1289,  1291,  1292,  1293,  1297,  1299,  1302,  1303,
    1305,  1310,  1311,  1314,  1316,  1318,  1320,  1322,  1325,  1327,
    1327,  1335,  1336,  1339,  1340,  1343,  1345,  1348,  1350,  1353,
    1354,  1357,  1358,  1359,  1361
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
  "UNIT", "UNIT_END", "UNSAFE", "VAR", "VARARGS", "VIRTUAL", "WHILE",
  "WINAPI", "WITH", "WRITE", "'.'", "','", "':'", "';'", "'('", "')'",
  "'['", "']'", "'^'", "'@'", "SCOPE", "LET", "LETADD", "LETSUB", "LETDIV",
  "LETMUL", "LETAND", "LETOR", "LETSHL", "LETSHR", "EQ", "NE", "LT", "LE",
  "GT", "GE", "IN", "IS", "PLUS", "MINUS", "OR", "XOR", "BINOR", "MOD",
  "DIV", "DIVR", "MUL", "AND", "SHR", "SHL", "BINAND", "AS", "UPLUS",
  "UMINUS", "NOT", "ADDRESS", "BINNOT", "EQUAL", "NOTEQUAL", "LESSTH",
  "GREATERTH", "ADD", "SUBSTRACT", "MULTIPLY", "DIVIDE", "INTDIVIDE",
  "MODULUS", "IMPLICIT", "EXPLICIT", "$accept", "translation", "$@1",
  "input_file", "program", "progend", "module", "unit", "init_finit",
  "var_const_decl_part_list", "var_const_decl_part", "unit_def_list",
  "prog_param_list", "ident_ext", "ident_list", "block", "decl_part_list",
  "decl_part", "unit_spec", "unit_decl_list", "unit_decl", "inherited",
  "try_finally", "try_except", "except_many", "except", "statement",
  "compoundst", "assemblerst", "asm_kwd", "asm_line", "asm_text",
  "sequence", "case_list", "otherwise", "case_items", "case_item",
  "case_elem_list", "case_elem", "const_expr", "const_simple_expr",
  "const_expr_list", "const_act_param_list", "const_act_param", "expr",
  "simple_expr", "primary", "constant", "set_elem_list", "set_elem",
  "expr_list", "act_param_list", "act_param", "record_constant",
  "field_init_list", "field_init_item", "label_decl_part", "label_list",
  "const", "const_def_part", "const_def_list", "const_def",
  "type_def_part", "type_def_list", "type_def", "var_decl_part",
  "var_decl_list", "attr_decl", "var_decl", "proc_fwd_decl", "proc_spec",
  "operator_fwd_decl", "proc_def", "fun_qualifier", "meth_qualifier",
  "optional_semicolon", "qualifier", "qualifiers", "property_decl",
  "prop_array", "prop_index", "prop_type_def", "prop_read", "prop_write",
  "prop_stored", "prop_default", "prop_default_directive",
  "prop_param_list", "prop_param_decl", "formal_params",
  "formal_param_list", "formal_param", "param_decl", "param_type", "type",
  "const_type", "fptr_type", "string_type", "simple_templ_type",
  "simple_type", "array_type", "const_array_type", "conformant_array_type",
  "enum_type", "range_type", "pointer_type", "set_type", "const_set_type",
  "record_type", "record_body", "record_components", "record_component",
  "record_methods", "record_method_decl", "record_field_list",
  "interface_type", "interface_components", "interface_component", "guid",
  "class_or_object", "class_type", "object_body", "record_access_spec_tok",
  "class_access_spec_tok", "record_access_spec_decl",
  "class_access_spec_decl", "object_components", "object_component",
  "field_decl_part", "field_decl_list", "object_methods",
  "method_decl_list", "method_decl", "file_type", "packed", "indices",
  "index_spec", "field_list", "fixed_part", "variant_part", "selector",
  "variant_list", "variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-639)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-361)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -639,   136,   914,  -639,   531,   255,  -639,   247,   703,    16,
     258,    37,  -639,    46,   128,   369,  -639,  -639,  -639,  -639,
      81,   168,  1763,  -639,  -639,  -639,   267,  -639,  -639,  -639,
    -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,
    -639,  -639,  -639,  -639,  -639,   531,   172,   164,   170,   198,
     150,  -639,  -639,  -639,   187,   267,   703,   267,   259,  -639,
      93,   703,  -639,  -639,  -639,  -639,  -639,  -639,   195,   209,
     217,   227,   187,   241,   220,  -639,   245,   232,   273,  -639,
     267,   271,   278,  -639,   267,   291,  -639,  1616,  -639,  -639,
     191,  -639,   296,  -639,  -639,   260,   -20,   281,   267,   391,
     303,   187,   324,   187,   318,  1763,  -639,  -639,    16,    16,
    -639,   267,   319,   267,   320,   877,   138,    46,   909,   379,
     322,   267,   909,   329,   369,   337,   267,   219,   333,   335,
     337,  -639,   397,   337,  -639,  1616,  -639,  1616,   337,   337,
    1060,   735,  -639,  -639,  -639,   339,  -639,   415,   742,  -639,
    -639,   138,   735,   267,   267,   404,   352,   267,   187,   267,
     267,   267,  -639,   354,   355,   356,  -639,   909,   368,   374,
     429,   216,  -639,  -639,  -639,   187,  1110,  1749,   383,  1849,
      19,   187,  1185,  -639,   363,  -639,  -639,   187,   385,   909,
    1444,   909,  1463,  1463,  1463,  1463,  1463,  1260,   388,  -639,
    -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,
    -639,  -639,  1642,  -639,  -639,   171,   405,   382,  -639,  -639,
    -639,  -639,  -639,  -639,    40,  -639,   455,  -639,   703,  -639,
    -639,    23,   909,  -639,  -639,   521,   337,   337,   521,   337,
     337,  1492,  -639,   776,   398,  -639,  -639,  1616,  1616,  1931,
     412,  2092,   434,   141,  1121,  1994,   500,   453,   452,   454,
     465,  1456,  1301,   451,   474,  1616,  -639,   267,   337,   337,
    -639,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     456,   410,  -639,   187,   187,   909,   187,   475,  -639,  -639,
    -639,    47,  -639,   148,   476,   909,  1864,   703,   478,   480,
     481,   482,   168,  -639,  -639,   502,  -639,  -639,  -639,  -639,
    -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,
    -639,  -639,  -639,  -639,  -639,  -639,   485,  -639,   493,    57,
     557,   506,   267,   178,  -639,   568,   569,   536,  -639,  -639,
    -639,   585,   532,   490,  -639,  -639,   532,   565,   735,  -639,
     295,   130,   513,  2035,   518,  -639,   583,  -639,  -639,  -639,
    -639,  -639,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   735,   277,  -639,  -639,  -639,  -639,
    -639,   289,   369,   267,  -639,  -639,   523,   600,  -639,  -639,
     369,  -639,  1924,  -639,  1924,  -639,    52,   579,  1710,   587,
    -639,   537,   589,   100,   563,   735,    31,   349,  -639,   349,
    -639,   349,  -639,  -639,   735,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,  -639,  -639,  1616,
     337,   337,   593,  1616,  1616,   337,  1616,   735,  -639,  -639,
     583,   735,  -639,   735,  -639,  -639,  2092,   544,   549,   546,
    2092,  2092,  2092,  2092,  2092,  2092,  2092,  2092,  2092,   735,
     576,   559,   562,   564,   570,   909,  -639,   548,  -639,  -639,
     653,  -639,  1110,  1749,   571,   581,  -639,  -639,  1849,  -639,
    -639,  1800,  1749,  -639,  -639,  -639,  -639,   909,  -639,   644,
    -639,  -639,   580,   590,   591,  -639,  -639,  -639,   659,  -639,
     643,  2070,  -639,   735,  -639,   453,  2113,  1200,  1200,  1200,
    1200,  1200,  1200,  1200,   543,   543,   543,   543,   543,  -639,
    -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  2113,   592,
     595,   369,  -639,  -639,  -639,   597,   369,  -639,  -639,  -639,
    -639,   909,  1450,   909,    63,  -639,   639,   369,  -639,  -639,
    -639,  -639,  -639,   676,  -639,  1957,  -639,   566,  1957,  -639,
     369,  -639,  -639,   692,   909,  1450,   138,  1763,  -639,  -639,
    2113,   634,   735,   687,    26,   615,   618,   625,  1322,  1274,
    1274,  1274,  1274,  1274,  1274,  1274,  1274,   894,   894,   894,
     894,   894,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,
    -639,  2092,  2092,  2092,  2092,  2092,  2092,  2092,  2092,  2092,
    1953,   700,   627,  2092,   688,   257,   630,   706,  -639,  -639,
    -639,  2113,  -639,  2113,  -639,  -639,   337,  -639,  1099,  -639,
     909,   909,  1849,  1849,   635,   735,   691,   636,   641,  1894,
     642,  -639,   694,   580,   267,   645,   151,  -639,  -639,  -639,
    -639,  -639,  -639,   735,  -639,  1695,  -639,  -639,   236,  1343,
    -639,   647,   649,  -639,   707,   369,  -639,  -639,  -639,  -639,
    -639,  -639,  -639,   425,  -639,  -639,  -639,  1073,  -639,  -639,
     648,  -639,   207,  -639,  2113,  -639,  -639,  -639,  1616,   735,
    1616,   735,   735,   337,  1616,  -639,   654,  1616,  -639,   593,
    -639,  -639,   678,   655,   656,   660,   664,  1849,  2113,    75,
    -639,  1800,  -639,   711,   645,   670,   666,   672,   909,   733,
    -639,   753,   535,  -639,  -639,   754,   735,   734,  1450,   187,
    -639,     1,  -639,   736,   737,   685,    84,   758,   690,  -639,
    -639,  -639,  -639,  2113,  1143,  -639,   104,   763,  -639,  -639,
    1849,  1849,  -639,  -639,   696,  -639,  -639,  -639,   733,    47,
    -639,   267,  -639,   406,   723,  -639,  -639,   766,  -639,  2113,
     909,  -639,   695,   909,   337,   138,  -639,  1616,    84,  -639,
    -639,   701,  -639,  1616,   775,  -639,   705,   708,  -639,   723,
    -639,  -639,  -639,   762,   710,  -639,  -639,   909,  -639,   702,
    -639,   712,  -639,   772,  -639,  -639,  -639,  1616,  -639,  -639,
     710,  -639,   769,   761,   744,   741,   337,    84,  -639,   761,
    -639,   799,   826,   268,  1749,   369,  -639,  1616,   826,  -639,
     406,   759,   764,   760,  -639,   765,  -639,   843,  1944,  -639,
     843,   767,  -639,  -639,  -639
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    35,     1,     0,     0,   231,     0,    46,     0,
       0,     0,   232,   243,     0,   250,     3,     4,     5,     6,
       0,    11,    35,    43,    34,    37,   234,    38,    39,    40,
      42,    41,    93,    95,   102,    97,   100,   101,    98,    99,
      96,   103,   104,    94,   105,   106,     0,     0,     0,     0,
      27,    28,    29,    30,   321,     0,    46,     0,     0,    54,
       0,    46,    48,    49,    50,    51,    53,    52,   229,   227,
       0,    27,   321,    25,     0,   242,     0,     0,     0,    27,
       0,    32,     0,   249,     0,     0,     7,    65,    33,    36,
       0,   233,     0,   107,    92,     0,   321,     0,     0,     0,
       0,   321,     0,   321,     0,    35,    45,    47,     0,     0,
     226,     0,   294,     0,     0,   449,   449,   243,   449,     0,
       0,     0,   449,     0,   250,     0,     0,     0,   209,   205,
       0,   210,    55,     0,   206,    65,   207,    65,     0,     0,
       0,   211,   203,    89,    90,   108,    88,     0,    84,   197,
     204,   449,     0,   234,     0,     0,     0,     0,   321,     0,
       0,     0,   322,   332,     0,   324,   329,   449,     0,   294,
       0,     0,    24,   230,   228,   321,   295,     0,     0,    35,
     409,   321,   360,   205,     0,   408,   450,   321,   362,   449,
       0,   449,     0,     0,     0,     0,     0,     0,   122,   147,
     245,   346,   345,   347,   335,   336,   343,   344,   342,   340,
     337,   339,     0,   338,   341,     0,   360,     0,   352,   348,
     349,   353,   351,   350,     0,   244,   409,   248,    46,   252,
      31,   253,   449,   251,   209,     0,     0,     0,     0,     0,
       0,     0,   158,   190,     0,    76,    75,    65,    65,     0,
      56,    83,     0,     0,     0,   216,     0,   209,     0,     0,
     223,     0,   214,     0,   212,    65,    91,     0,   221,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   235,   321,   321,   449,   321,     0,   327,   328,
     326,   449,   323,     0,   294,   449,   295,    46,     0,     0,
       0,     0,     0,   288,   279,     0,   290,   284,   293,   275,
     285,   276,   292,   278,   277,   287,   281,   291,   280,   286,
     283,   289,   282,   296,   297,   299,   294,    26,     0,     9,
       0,     0,     0,     0,   399,     0,     0,     0,   443,   444,
     447,     0,   405,     0,   406,   440,   441,   356,     0,   246,
     209,   210,     0,   152,     0,   370,     0,   146,   148,   149,
     150,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,   414,   418,   421,   419,
     422,     0,     0,     0,   434,   435,     0,     0,   420,   425,
     430,   416,   428,   432,     0,   433,     0,     0,     0,     0,
     359,     0,     0,     0,   255,     0,   257,   195,   191,   190,
     192,   196,   193,   194,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    86,    65,
     221,     0,    63,    65,    65,     0,    65,     0,   198,   222,
       0,     0,   208,   211,   109,   200,   220,     0,   218,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     0,
     237,     0,     0,     0,     0,   449,   362,   330,   333,   334,
       0,   325,   295,     0,   294,     0,    15,    16,    35,   267,
     298,   261,     0,     8,    10,    12,   415,   449,   361,     0,
     445,   446,   303,     0,     0,   398,   404,   397,     0,   442,
       0,     0,   368,     0,   144,     0,   369,   140,   137,   138,
     136,   139,   141,   142,   123,   124,   133,   135,   134,   125,
     127,   128,   126,   129,   132,   131,   130,   143,   156,     0,
     154,     0,   426,   427,   436,     0,   438,   410,   431,   429,
     417,   449,     0,   449,     0,   374,     0,     0,   385,   386,
     389,   390,   394,     0,   376,   379,   384,   387,   377,   423,
     380,   457,   395,   456,   449,     0,   449,    35,    44,   256,
     254,   259,     0,     0,   110,   115,     0,   118,   120,   185,
     186,   182,   183,   181,   184,   187,   188,   159,   160,   178,
     180,   179,   161,   163,   164,   162,   174,   177,   176,   175,
     189,   165,   166,   167,   168,   169,   172,   173,   170,   171,
       0,    78,     0,    82,     0,     0,    61,     0,    81,   217,
      85,   225,   224,   215,   213,   199,   221,   202,   239,   238,
     449,   449,    35,    35,     0,     0,     0,     0,   294,   295,
       0,   300,   354,   303,     0,     0,     0,   407,   396,   357,
     358,   153,   145,   157,   437,   413,   439,   364,   209,     0,
     453,     0,   451,   448,     0,     0,   391,   392,   393,   424,
     382,   373,   378,     0,   388,   375,   381,   449,   455,   371,
       0,   372,     0,   260,   258,    77,   113,   112,    65,   114,
      65,     0,     0,     0,    65,    57,     0,    65,    59,    63,
      58,   219,   240,     0,     0,     0,     0,    35,   331,     0,
     268,   262,   269,     0,     0,     0,     0,   318,   449,   305,
     403,     0,     0,   155,   412,     0,     0,     0,     0,   321,
     383,   209,   460,     0,     0,     0,    20,     0,     0,   111,
     116,   117,   119,   121,     0,    79,     0,     0,    62,   241,
      35,    35,   273,   271,     0,   367,   366,   355,   305,   449,
     304,     0,   307,     0,   308,   402,   401,     0,   411,   454,
     449,   452,     0,   449,     0,   449,    13,    65,    20,    22,
      23,     0,    14,    65,     0,    60,     0,     0,   270,   308,
     320,   319,   306,     0,   310,   400,   363,   449,   459,     0,
     458,   461,   365,    18,    21,    17,    80,    65,   272,   274,
     310,   309,     0,   312,   294,     0,   462,    20,    64,   312,
     311,     0,   314,   295,     0,     0,   463,    65,   314,   313,
       0,     0,   294,     0,    19,     0,   315,   316,   295,   464,
     316,     0,   301,   302,   317
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -639,  -638,
    -639,   262,  -639,    86,   -52,   -62,    11,  -639,    65,   -22,
    -639,  -639,  -639,  -639,   131,  -639,  -150,   -10,  -639,  -639,
    -639,   816,  -128,  -639,  -639,   143,  -639,   142,  -639,   442,
     293,   332,   188,  -639,   624,   269,   -85,  -112,   400,  -639,
    -113,  -430,  -639,  -639,   414,  -639,    79,   248,  -639,    -8,
     721,  -639,   110,   768,  -639,    -7,   770,  -639,    10,     4,
      66,  -639,  -639,  -639,  -639,  -107,   375,  -489,  -341,   215,
     101,   146,    72,    53,    56,    50,    41,   121,  -639,    27,
     628,  -639,   -58,   133,  -103,  -147,  -639,  -100,     7,   -80,
    -639,  -639,  -639,  -639,  -639,   -94,  -639,  -639,   -93,  -639,
    -302,  -639,   330,  -639,   336,  -639,  -325,  -639,   244,  -639,
    -639,   243,  -370,  -639,  -639,  -639,   -29,  -639,  -639,  -175,
    -204,   584,  -639,  -639,   -95,  -564,  -639,  -553,  -639,  -639,
    -639,    83,  -639
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   515,    18,    19,   767,   807,
     808,   171,   114,    81,    82,    20,   302,    22,    23,    60,
      61,   142,   143,   144,   645,   646,   145,   146,    24,    44,
      45,    46,   147,   603,   718,   604,   605,   606,   607,   197,
     198,   354,   559,   560,   255,   242,   243,   149,   263,   264,
     829,   477,   478,   150,   259,   260,    25,    70,    26,    27,
      91,    92,    28,    75,    76,    29,    83,    84,   396,    30,
     339,   698,    31,   323,   324,   512,   325,   326,   340,   675,
     794,   749,   824,   843,   852,   861,   872,   746,   747,   100,
     164,   165,   166,   497,   200,   217,   201,   202,   203,   204,
     205,   220,   499,   206,   207,   208,   209,   222,   210,   583,
     584,   585,   586,   587,   588,   211,   341,   342,   343,   212,
     213,   397,   398,   399,   590,   400,   401,   402,   403,   591,
     344,   345,   346,   214,   215,   691,   692,   592,   593,   708,
     763,   830,   831
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    65,   148,   199,   280,   177,   199,   252,   405,   253,
     199,    88,    66,    21,   668,   227,   218,   526,   528,   231,
      77,   224,   221,   223,   700,    85,   256,   258,   120,   199,
     642,   710,   123,    89,   102,   414,   219,   404,   589,   107,
     199,  -360,   716,   601,   411,    68,    69,   163,    63,    65,
     148,   218,   148,    63,    65,   199,   224,   221,   223,   330,
      66,   178,   177,    87,   294,    66,    73,   582,   155,   230,
     717,   219,    99,    59,    67,    74,   216,   199,   199,   199,
     199,   199,   199,   199,   199,   785,   349,    62,   355,   332,
      55,   803,   571,    54,     6,   186,    72,   457,   458,   112,
     408,   288,   289,   290,   216,   694,   412,   163,   163,   163,
    -247,   116,    90,    57,   301,   519,   172,   328,    64,   496,
     199,    59,    67,   156,    77,   105,    59,    67,   168,   416,
     169,   415,   597,   216,    85,    62,     3,   474,   352,   602,
      62,   101,   760,   103,   695,   514,   572,   496,    12,   199,
     417,   419,   419,   421,   419,   419,   479,    78,   159,   462,
     333,   299,   148,   148,   463,    15,    64,   216,   750,    86,
     834,    64,   106,   199,    87,   406,   496,    79,    55,   598,
     148,    51,   493,   199,   158,   287,   186,   503,   338,    94,
     329,   407,   504,    95,   801,   160,   500,   175,   405,    96,
     405,    57,   300,   335,   394,    55,   413,    52,   331,   857,
     188,   498,   244,    87,   347,   589,   338,   564,   589,   -28,
      63,    65,    87,   -28,   765,   568,   731,    97,    57,   161,
     519,   408,    66,   298,   191,    53,   199,   409,    98,    90,
     283,   163,   766,   286,   582,   337,   582,   582,   245,   246,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   727,   728,   505,    50,  -265,  -265,    99,
      51,   151,    47,   702,   108,  -265,   705,    71,   104,    63,
      65,    51,    88,    59,    67,  -265,    79,    48,   109,   152,
      51,    66,   863,   199,    55,    49,    52,    62,   110,   641,
     491,   492,   199,   494,   648,   111,   650,    52,  -265,    88,
    -265,  -265,   395,  -265,   332,  -360,    52,    57,   115,   519,
     116,  -360,  -265,   113,    53,   647,   117,   520,    64,  -265,
     118,   565,   562,   563,  -265,    53,   338,   338,   154,  -265,
     338,   751,   649,   475,    53,   199,   173,   174,   561,   199,
     121,   199,    59,    67,   119,   862,   234,   183,   122,   157,
     131,   132,   333,   569,   148,   570,    62,   199,   148,   148,
     334,   148,   124,   199,   -27,   467,   684,   153,   -27,   520,
      55,   686,   664,   167,   394,   134,   394,   503,    79,   521,
     578,   159,    51,   106,   136,   199,   338,    64,   338,   170,
     176,   179,   580,    57,   672,   335,   228,   229,   518,   232,
      79,   199,   490,   247,    51,   248,   250,   797,    52,   140,
     265,   141,   266,   284,   235,   234,   183,   267,   160,   131,
     667,   268,   285,   269,   291,   270,   670,   293,   292,   711,
      52,   521,    55,   236,   237,   336,    53,   337,   295,   199,
     199,   199,   238,    80,   134,   296,   297,   694,   687,   239,
     693,   240,   161,   136,   581,    57,   327,   519,    53,   348,
     384,   405,   199,   199,   162,   357,   358,   359,   360,   361,
     199,   709,   690,   332,   410,   330,   218,   456,   356,   333,
     141,   224,   221,   223,   460,   418,   420,   527,   422,   423,
     404,   461,   395,   466,   395,   690,   219,    55,   579,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      57,   333,   335,   467,   333,   468,   472,   469,   199,   199,
     234,   183,   796,   199,   131,   132,   470,   733,   734,    55,
      32,    33,    55,   473,   489,   495,   506,   502,   507,   510,
     771,   199,   508,   509,   775,   703,   511,   578,   696,   134,
     578,   513,    57,   262,   335,    57,   516,   335,   136,   580,
     769,   580,   580,    55,   281,   199,   517,   522,   523,   777,
     735,   736,   525,   524,   762,   530,   532,   199,   172,   199,
     199,   534,   535,   140,   566,   141,    57,   567,   335,   573,
      34,    35,   745,    36,    37,    38,    39,   594,    40,   596,
     599,   595,   353,   148,   644,   148,   199,   655,   656,   148,
     697,   657,   148,   659,   199,   792,   199,    41,    42,   660,
      43,   581,   661,   581,   581,   662,   665,   666,   832,   786,
     598,   663,   669,   836,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   673,   674,   784,   678,   394,   690,   833,
     338,   822,   679,   676,   683,   682,   677,   848,   199,   338,
     685,   199,   699,   701,   500,   579,   814,   826,   579,   707,
     828,   713,   768,   353,   715,   218,   719,   696,   720,   498,
     224,   221,   223,     6,   721,   199,   724,   726,   816,   817,
     725,   729,   148,   730,   844,   219,   737,   740,   148,   864,
      55,   739,   741,   742,   743,   748,   759,   854,   758,   745,
      56,     9,   757,   764,   776,   779,   780,   781,   866,   241,
     787,   782,   148,    57,   249,   783,   338,   251,   809,   810,
     789,   790,   254,   791,   234,   183,   793,    12,   131,   697,
     795,   798,   148,   806,   800,   811,   804,   805,   812,    13,
     815,    58,   823,   825,    15,   827,   802,   818,   837,   835,
     531,   841,   845,   134,   847,   395,   838,   842,   850,   839,
     809,   810,   136,   846,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   261,   859,   141,
     267,   851,   192,   855,   268,   853,   269,   860,   270,   809,
     810,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     867,   193,   194,   869,   871,   868,   870,   600,   874,   712,
     778,    93,   770,   772,   267,   681,   608,   195,   268,   196,
     269,   753,   270,   654,   282,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   652,   225,   180,   671,   744,   819,
     788,   840,   476,   849,   233,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   181,   858,   182,   183,   865,   651,
     131,   873,   821,   653,   184,   262,   185,   704,   226,     4,
     752,   501,   820,     5,     6,   186,   706,   187,   755,   856,
     529,   658,     0,     0,     0,   134,   181,     0,   182,   183,
       0,     7,   131,     0,   136,     0,   184,     0,   185,   188,
       0,     8,     9,   189,     0,     0,     0,   186,     0,   187,
       0,     0,     0,     0,    10,    11,     0,   134,     0,   190,
       0,   141,     0,   191,   192,   353,   136,     0,    12,     0,
       0,   188,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    14,   193,   194,    15,     0,     0,     0,     0,
       0,   190,     0,   141,     0,   191,   192,     0,     0,   195,
       0,   196,     0,     0,   689,   438,   439,   440,   441,   442,
     443,   444,   445,   446,     0,   193,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   689,     0,     0,
       0,   195,     0,   196,   714,     0,     0,     0,     0,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,     0,   226,     0,   476,   643,     0,     0,     0,   257,
     183,     0,     0,   131,   132,     0,     0,     0,     0,     0,
     181,     0,   761,   183,     0,     0,   131,   738,     0,     0,
     184,   732,   185,     0,     0,     4,   -35,     0,   134,     5,
       6,   186,     0,   187,     0,   558,     0,   136,     0,     0,
       0,   134,     0,     0,   464,     0,     0,     7,     0,     0,
     136,     0,     0,     0,     0,   188,     0,    56,     9,     0,
       0,     0,   140,     0,   141,     0,   813,   235,     0,     0,
      10,   608,     0,   608,   773,   190,     0,   141,     0,   191,
     192,     0,     0,     0,    12,     0,   236,   237,     0,     0,
       0,     0,     0,     0,     0,   238,    13,     0,    58,   193,
     194,    15,   239,     0,   240,     0,     0,     0,   799,  -209,
     689,     0,     0,     0,     0,   195,     0,   196,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   332,   362,     0,     0,  -209,     0,     0,
     476,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -209,   116,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   471,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       0,     0,     0,     0,     0,     0,   722,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   774,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,     0,     0,     0,     0,     0,     0,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   350,   183,     0,     0,   351,     0,   688,
     183,     0,     0,   131,     0,   257,   183,     0,     0,   131,
       0,     0,   234,   183,     0,     0,   131,     0,     0,     0,
       0,     0,   134,    52,     0,     0,     0,     0,   134,     0,
       0,   136,     0,     0,   134,     0,     0,   136,     0,     0,
       0,   134,   496,   136,     0,     0,     0,     0,     0,     0,
     136,    53,   424,     0,     0,     0,   261,     0,   141,     0,
       0,   192,   261,     0,   141,     0,     0,   192,   261,     0,
     141,     0,     0,   192,     0,   356,     0,   141,     0,     0,
     193,   194,     0,     0,     0,     0,   193,   194,     0,     0,
       0,     0,   193,   194,     0,     0,   195,     0,   196,   193,
     194,     0,   195,     0,   196,     0,     0,     0,   195,     0,
     196,     0,     0,     0,     0,   195,     0,   196,     0,     0,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,    87,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,   127,   128,   129,   130,     0,   131,
     132,   385,     6,     0,     0,     0,     0,     0,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    79,     0,   133,   134,    51,     0,     0,     0,   135,
       0,     0,     0,   136,     0,     0,     0,     0,     0,     0,
       0,   137,    57,     0,   335,   387,   388,   389,   390,     0,
     138,    52,   139,     0,   385,     6,    12,     0,   140,     0,
     141,     0,   754,   391,     0,     0,     0,     0,    13,   574,
       6,     0,    55,   392,    79,     0,     0,   575,    51,    53,
       0,     0,     0,     0,   393,     0,    80,    55,     0,    79,
       0,     0,     0,    51,     0,    57,     0,   335,   387,   388,
     389,   390,   303,     0,    52,     0,     0,   304,     0,    12,
      57,   305,   335,   387,   306,   389,   391,     0,   307,    52,
     308,    13,     5,     6,    12,   309,   392,     0,     0,     0,
       0,   576,    53,     0,     0,   310,    13,     0,     0,    80,
       7,   577,     0,     0,   311,   312,     0,    53,   313,     0,
      56,     9,     0,  -295,    80,     0,     0,     0,  -295,     0,
     314,   315,  -295,    10,   316,  -295,     0,   317,   318,  -295,
       0,  -295,     0,     0,     0,     0,  -295,    12,     0,   319,
       0,   320,   321,     0,   322,     0,  -295,     0,     0,    13,
       0,    58,     0,     0,    15,  -295,  -295,     0,     0,  -295,
       0,     0,     0,     0,     4,     0,     0,     0,     5,     6,
       0,  -295,  -295,     0,     0,  -295,     0,     0,  -295,  -295,
       0,     0,     0,  -263,  -263,     0,     7,     0,     0,     0,
    -295,  -263,  -295,  -295,     0,  -295,    56,     9,     0,     0,
       0,  -263,     0,     0,     0,     0,  -263,     0,     0,    10,
       0,  -263,  -263,  -264,  -264,     0,     0,     0,     0,     0,
       0,  -264,     0,    12,  -263,     0,  -263,  -263,  -263,  -263,
    -263,  -264,     0,     0,     0,    13,  -264,    58,  -263,     0,
      15,  -264,  -264,   385,     6,  -263,     0,     0,     0,     0,
    -263,     0,  -263,  -263,  -264,  -263,  -264,  -264,  -264,  -264,
    -264,    55,     0,  -266,  -266,     0,     0,     0,  -264,     0,
       0,  -266,     0,     0,     0,  -264,   574,     6,     0,     0,
    -264,  -266,  -264,  -264,    57,  -264,   335,   387,   388,   389,
     390,     0,     0,     0,    55,     0,     0,     0,    12,     0,
       0,     0,     0,     0,  -266,   391,  -266,  -266,     0,  -266,
      13,     0,     0,     0,   459,   392,     0,    57,  -266,   335,
     387,     0,   389,     0,     0,  -266,     0,     0,     0,     0,
    -266,    12,     0,     0,     0,  -266,     0,   723,   576,     0,
       0,     0,     0,    13,     0,     0,     0,     0,   577,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   533,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   680,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383
};

static const yytype_int16 yycheck[] =
{
       8,     8,    87,   115,   151,   112,   118,   135,   212,   137,
     122,    21,     8,     2,   503,   118,   116,   342,   343,   122,
      13,   116,   116,   116,   577,    15,   139,   140,    80,   141,
     460,   595,    84,    22,    56,    12,   116,   212,   408,    61,
     152,    40,    16,    12,     4,    29,    30,    99,    56,    56,
     135,   151,   137,    61,    61,   167,   151,   151,   151,    40,
      56,   113,   169,     6,   167,    61,    29,   408,    88,   121,
      44,   151,    92,     8,     8,    29,    29,   189,   190,   191,
     192,   193,   194,   195,   196,    10,   189,     8,   191,    88,
      27,    90,    40,     7,    10,    48,    10,   247,   248,    72,
      60,   159,   160,   161,    29,    42,    66,   159,   160,   161,
      91,   110,    26,    50,   176,    52,   105,   179,     8,    72,
     232,    56,    56,    96,   117,    32,    61,    61,   101,   232,
     103,   108,    32,    29,   124,    56,     0,   265,   190,   108,
      61,    55,   695,    57,    81,    88,    94,    72,    64,   261,
     235,   236,   237,   238,   239,   240,   269,    29,    10,    18,
       9,   171,   247,   248,    23,    81,    56,    29,    17,    88,
     808,    61,    79,   285,     6,     4,    72,    29,    27,    79,
     265,    33,   285,   295,    98,   158,    48,   294,   184,    17,
     179,    20,   295,    29,   758,    47,   291,   111,   402,    29,
     404,    50,   175,    52,   212,    27,   228,    59,   181,   847,
      72,   291,   126,     6,   187,   585,   212,   392,   588,    89,
     228,   228,     6,    93,    17,   400,   656,    29,    50,    81,
      52,    60,   228,    17,    96,    87,   348,    66,    88,   153,
     154,   293,    35,   157,   585,    94,   587,   588,    29,    30,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    16,    17,   297,    29,     9,    10,    92,
      33,    90,    27,   585,    89,    17,   588,    29,    29,   297,
     297,    33,   302,   228,   228,    27,    29,    42,    89,   108,
      33,   297,   855,   415,    27,    50,    59,   228,    91,   459,
     283,   284,   424,   286,   464,    88,   466,    59,    50,   329,
      52,    53,   212,    55,    88,    89,    59,    50,   108,    52,
     110,    95,    64,    92,    87,   463,    91,   333,   228,    71,
     108,   393,    53,    54,    76,    87,   342,   343,    88,    81,
     346,   676,   465,   267,    87,   467,   108,   109,    81,   471,
      89,   473,   297,   297,    91,   854,    29,    30,    90,    88,
      33,    34,     9,   402,   459,   404,   297,   489,   463,   464,
      17,   466,    91,   495,    89,    90,   561,    91,    93,   385,
      27,   566,   495,    90,   402,    58,   404,   504,    29,   333,
     408,    10,    33,    79,    67,   517,   402,   297,   404,    91,
      91,    91,   408,    50,   517,    52,    37,    95,   332,    90,
      29,   533,    12,    90,    33,    90,    29,   752,    59,    92,
      91,    94,    17,    29,    97,    29,    30,    88,    47,    33,
     502,    92,    90,    94,    90,    96,   508,    91,    93,   596,
      59,   385,    27,   116,   117,    92,    87,    94,    90,   571,
     572,   573,   125,    94,    58,    91,    37,    42,   571,   132,
     573,   134,    81,    67,   408,    50,    93,    52,    87,    94,
      92,   685,   594,   595,    93,   192,   193,   194,   195,   196,
     602,   594,   572,    88,   112,    40,   596,    99,    92,     9,
      94,   596,   596,   596,    92,   236,   237,    17,   239,   240,
     685,    77,   402,    13,   404,   595,   596,    27,   408,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      50,     9,    52,    90,     9,    93,    95,    93,   660,   661,
      29,    30,    17,   665,    33,    34,    91,   660,   661,    27,
      29,    30,    27,    89,   108,    90,    88,    91,    88,    67,
     720,   683,    91,    91,   724,     9,    91,   585,   574,    58,
     588,    88,    50,   141,    52,    50,    29,    52,    67,   585,
     718,   587,   588,    27,   152,   707,    90,    29,    29,   727,
     662,   663,    17,    67,   707,    40,    93,   719,   597,   721,
     722,    93,    29,    92,    91,    94,    50,    17,    52,    40,
      89,    90,   674,    92,    93,    94,    95,    40,    97,    40,
      67,    94,   190,   718,    41,   720,   748,    93,    89,   724,
     574,    95,   727,    67,   756,   748,   758,   116,   117,    90,
     119,   585,    90,   587,   588,    91,   108,     4,   805,   739,
      79,    91,    91,   813,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    29,    94,   737,    17,   685,   758,   807,
     676,   793,    39,    93,    89,    93,    95,   837,   800,   685,
      93,   803,    53,    17,   789,   585,   776,   800,   588,     7,
     803,    67,   712,   261,    17,   805,    91,   703,    90,   789,
     805,   805,   805,    10,    89,   827,    16,    29,   780,   781,
      93,    91,   807,    17,   827,   805,    91,    91,   813,   857,
      27,    40,    91,    91,    40,    90,    29,   844,    89,   791,
      37,    38,    95,    95,    90,    67,    91,    91,   860,   125,
      39,    91,   837,    50,   130,    91,   752,   133,   766,   766,
      90,    95,   138,    91,    29,    30,    33,    64,    33,   703,
      17,    17,   857,    88,    40,    17,    40,    40,    88,    76,
      17,    78,    59,    17,    81,    90,   759,    91,    13,    88,
     348,    29,    90,    58,    22,   685,    91,    87,    29,    91,
     808,   808,    67,    91,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    92,    29,    94,
      88,    70,    97,    92,    92,    91,    94,    11,    96,   847,
     847,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      91,   116,   117,    93,    11,    91,    91,   415,    91,   597,
     729,    45,   719,   721,    88,   533,   424,   132,    92,   134,
      94,   683,    96,   473,   153,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   470,   117,     9,   512,   673,   788,
     744,   819,   268,   840,   124,   271,   272,   273,   274,   275,
     276,   277,   278,   279,    27,   849,    29,    30,   858,   467,
      33,   870,   791,   471,    37,   473,    39,   587,     9,     5,
     676,   293,   789,     9,    10,    48,   590,    50,   685,   846,
     346,   489,    -1,    -1,    -1,    58,    27,    -1,    29,    30,
      -1,    27,    33,    -1,    67,    -1,    37,    -1,    39,    72,
      -1,    37,    38,    76,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    50,    51,    -1,    58,    -1,    92,
      -1,    94,    -1,    96,    97,   533,    67,    -1,    64,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,   116,   117,    81,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    94,    -1,    96,    97,    -1,    -1,   132,
      -1,   134,    -1,    -1,   572,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   595,    -1,    -1,
      -1,   132,    -1,   134,   602,    -1,    -1,    -1,    -1,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,    -1,     9,    -1,   460,   461,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    -1,    -1,    33,   665,    -1,    -1,
      37,    12,    39,    -1,    -1,     5,     6,    -1,    58,     9,
      10,    48,    -1,    50,    -1,   683,    -1,    67,    -1,    -1,
      -1,    58,    -1,    -1,    13,    -1,    -1,    27,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    37,    38,    -1,
      -1,    -1,    92,    -1,    94,    -1,    13,    97,    -1,    -1,
      50,   719,    -1,   721,   722,    92,    -1,    94,    -1,    96,
      97,    -1,    -1,    -1,    64,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    76,    -1,    78,   116,
     117,    81,   132,    -1,   134,    -1,    -1,    -1,   756,    14,
     758,    -1,    -1,    -1,    -1,   132,    -1,   134,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    88,    14,    -1,    -1,    92,    -1,    -1,
     656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    14,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   723,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    29,    30,    -1,    -1,    33,    -1,    29,
      30,    -1,    -1,    33,    -1,    29,    30,    -1,    -1,    33,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    67,    -1,    -1,    58,    -1,    -1,    67,    -1,    -1,
      -1,    58,    72,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    87,    40,    -1,    -1,    -1,    92,    -1,    94,    -1,
      -1,    97,    92,    -1,    94,    -1,    -1,    97,    92,    -1,
      94,    -1,    -1,    97,    -1,    92,    -1,    94,    -1,    -1,
     116,   117,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   132,    -1,   134,   116,
     117,    -1,   132,    -1,   134,    -1,    -1,    -1,   132,    -1,
     134,    -1,    -1,    -1,    -1,   132,    -1,   134,    -1,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    57,    58,    33,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    50,    -1,    52,    53,    54,    55,    56,    -1,
      84,    59,    86,    -1,     9,    10,    64,    -1,    92,    -1,
      94,    -1,    17,    71,    -1,    -1,    -1,    -1,    76,     9,
      10,    -1,    27,    81,    29,    -1,    -1,    17,    33,    87,
      -1,    -1,    -1,    -1,    92,    -1,    94,    27,    -1,    29,
      -1,    -1,    -1,    33,    -1,    50,    -1,    52,    53,    54,
      55,    56,     3,    -1,    59,    -1,    -1,     8,    -1,    64,
      50,    12,    52,    53,    15,    55,    71,    -1,    19,    59,
      21,    76,     9,    10,    64,    26,    81,    -1,    -1,    -1,
      -1,    71,    87,    -1,    -1,    36,    76,    -1,    -1,    94,
      27,    81,    -1,    -1,    45,    46,    -1,    87,    49,    -1,
      37,    38,    -1,     3,    94,    -1,    -1,    -1,     8,    -1,
      61,    62,    12,    50,    65,    15,    -1,    68,    69,    19,
      -1,    21,    -1,    -1,    -1,    -1,    26,    64,    -1,    80,
      -1,    82,    83,    -1,    85,    -1,    36,    -1,    -1,    76,
      -1,    78,    -1,    -1,    81,    45,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,     9,    10,
      -1,    61,    62,    -1,    -1,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,     9,    10,    -1,    27,    -1,    -1,    -1,
      80,    17,    82,    83,    -1,    85,    37,    38,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    50,
      -1,    37,    38,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    64,    50,    -1,    52,    53,    54,    55,
      56,    27,    -1,    -1,    -1,    76,    32,    78,    64,    -1,
      81,    37,    38,     9,    10,    71,    -1,    -1,    -1,    -1,
      76,    -1,    78,    79,    50,    81,    52,    53,    54,    55,
      56,    27,    -1,     9,    10,    -1,    -1,    -1,    64,    -1,
      -1,    17,    -1,    -1,    -1,    71,     9,    10,    -1,    -1,
      76,    27,    78,    79,    50,    81,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    27,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    50,    71,    52,    53,    -1,    55,
      76,    -1,    -1,    -1,    73,    81,    -1,    50,    64,    52,
      53,    -1,    55,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      76,    64,    -1,    -1,    -1,    81,    -1,    74,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   148,   149,     0,     5,     9,    10,    27,    37,    38,
      50,    51,    64,    76,    78,    81,   150,   151,   153,   154,
     162,   163,   164,   165,   175,   203,   205,   206,   209,   212,
     216,   219,    29,    30,    89,    90,    92,    93,    94,    95,
      97,   116,   117,   119,   176,   177,   178,    27,    42,    50,
      29,    33,    59,    87,   160,    27,    37,    50,    78,   165,
     166,   167,   203,   206,   209,   212,   216,   217,    29,    30,
     204,    29,   160,    29,    29,   210,   211,   245,    29,    29,
      94,   160,   161,   213,   214,   215,    88,     6,   174,   163,
     160,   207,   208,   178,    17,    29,    29,    29,    88,    92,
     236,   160,   166,   160,    29,    32,    79,   166,    89,    89,
      91,    88,   236,    92,   159,   108,   110,    91,   108,    91,
     161,    89,    90,   161,    91,     7,    25,    28,    29,    30,
      31,    33,    34,    57,    58,    63,    67,    75,    84,    86,
      92,    94,   168,   169,   170,   173,   174,   179,   193,   194,
     200,    90,   108,    91,    88,    88,   236,    88,   160,    10,
      47,    81,    93,   161,   237,   238,   239,    90,   236,   236,
      91,   158,   163,   204,   204,   160,    91,   222,   161,    91,
       9,    27,    29,    30,    37,    39,    48,    50,    72,    76,
      92,    96,    97,   116,   117,   132,   134,   186,   187,   194,
     241,   243,   244,   245,   246,   247,   250,   251,   252,   253,
     255,   262,   266,   267,   280,   281,    29,   242,   244,   246,
     248,   252,   254,   255,   281,   210,     9,   241,    37,    95,
     161,   241,    90,   213,    29,    97,   116,   117,   125,   132,
     134,   191,   192,   193,   160,    29,    30,    90,    90,   191,
      29,   191,   179,   179,   191,   191,   197,    29,   197,   201,
     202,    92,   186,   195,   196,    91,    17,    88,    92,    94,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     242,   186,   207,   160,    29,    90,   160,   236,   239,   239,
     239,    90,    93,    91,   241,    90,    91,    37,    17,   174,
     236,   162,   163,     3,     8,    12,    15,    19,    21,    26,
      36,    45,    46,    49,    61,    62,    65,    68,    69,    80,
      82,    83,    85,   220,   221,   223,   224,    93,   162,   163,
      40,   236,    88,     9,    17,    52,    92,    94,   216,   217,
     225,   263,   264,   265,   277,   278,   279,   236,    94,   241,
      29,    33,   161,   186,   188,   241,    92,   187,   187,   187,
     187,   187,    14,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    92,     9,    17,    53,    54,    55,
      56,    71,    81,    92,   206,   209,   215,   268,   269,   270,
     272,   273,   274,   275,   276,   277,     4,    20,    60,    66,
     112,     4,    66,   166,    12,   108,   241,   193,   192,   193,
     192,   193,   192,   192,    40,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    99,   173,   173,    73,
      92,    77,    18,    23,    13,    89,    13,    90,    93,    93,
      91,    14,    95,    89,   179,   160,   191,   198,   199,   197,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   108,
      12,   236,   236,   241,   236,    90,    72,   240,   246,   249,
     281,   237,    91,   222,   241,   166,    88,    88,    91,    91,
      67,    91,   222,    88,    88,   152,    29,    90,   160,    52,
     216,   217,    29,    29,    67,    17,   263,    17,   263,   278,
      40,   186,    93,    89,    93,    29,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   189,
     190,    81,    53,    54,   276,   161,    91,    17,   276,   273,
     273,    40,    94,    40,     9,    17,    71,    81,   206,   209,
     216,   217,   225,   256,   257,   258,   259,   260,   261,   269,
     271,   276,   284,   285,    40,    94,    40,    32,    79,    67,
     186,    12,   108,   180,   182,   183,   184,   185,   186,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   173,   198,   191,    41,   171,   172,   179,   173,   197,
     173,   186,   201,   186,   195,    93,    89,    95,   186,    67,
      90,    90,    91,    91,   241,   108,     4,   162,   224,    91,
     162,   223,   241,    29,    94,   226,    93,    95,    17,    39,
      95,   188,    93,    89,   276,    93,   276,   241,    29,   186,
     246,   282,   283,   241,    42,    81,   216,   217,   218,    53,
     284,    17,   257,     9,   259,   257,   261,     7,   286,   241,
     282,   242,   158,    67,   186,    17,    16,    44,   181,    91,
      90,    89,    14,    74,    16,    93,    29,    16,    17,    91,
      17,   198,    12,   241,   241,   162,   162,    91,   186,    40,
      91,    91,    91,    40,   226,   161,   234,   235,    90,   228,
      17,   263,   265,   189,    17,   268,    14,    95,    89,    29,
     284,    29,   241,   287,    95,    17,    35,   155,   174,   179,
     182,   173,   184,   186,   191,   173,    90,   179,   171,    67,
      91,    91,    91,    91,   162,    10,   246,    39,   228,    90,
      95,    91,   241,    33,   227,    17,    17,   263,    17,   186,
      40,   282,   236,    90,    40,    40,    88,   156,   157,   206,
     212,    17,    88,    13,   246,    17,   162,   162,    91,   227,
     240,   234,   194,    59,   229,    17,   241,    90,   241,   197,
     288,   289,   242,   179,   156,    88,   173,    13,    91,    91,
     229,    29,    87,   230,   241,    90,    91,    22,   173,   230,
      29,    70,   231,    91,   222,    92,   288,   156,   231,    29,
      11,   232,   224,   284,   179,   232,   194,    91,    91,    93,
      91,    11,   233,   233,    91
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   147,   149,   148,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   160,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   165,   165,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   183,   184,   184,
     185,   185,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   187,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   201,   201,   202,   203,   204,   204,   204,
     204,   205,   205,   206,   207,   207,   208,   208,   208,   208,
     208,   208,   209,   210,   210,   211,   211,   211,   211,   212,
     213,   213,   214,   215,   215,   215,   215,   215,   215,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   221,   221,   221,
     221,   221,   221,   221,   222,   222,   223,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   229,   229,
     230,   230,   231,   231,   232,   232,   233,   233,   234,   234,
     235,   236,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   239,   239,   240,   240,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   243,   243,   243,   244,   245,
     246,   246,   246,   247,   247,   248,   249,   249,   250,   251,
     252,   253,   254,   255,   255,   256,   256,   256,   257,   257,
     258,   258,   258,   258,   258,   258,   258,   259,   259,   260,
     260,   260,   260,   260,   260,   261,   262,   262,   262,   262,
     262,   262,   262,   262,   263,   263,   264,   265,   266,   266,
     267,   267,   267,   267,   267,   267,   268,   268,   269,   269,
     270,   270,   270,   271,   271,   272,   272,   272,   273,   273,
     274,   274,   274,   274,   274,   274,   275,   275,   276,   276,
     277,   278,   278,   279,   279,   279,   279,   279,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   285,   286,   287,
     287,   288,   288,   288,   289
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
       8,     4,     4,     2,     1,     4,     3,     3,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     3,     1,     1,     0,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     2,     1,     2,     2,
       2,     2,     1,     3,     1,     3,     1,     0,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     1,     3,     4,
       3,     2,     4,     1,     1,     1,     1,     1,     3,     1,
       1,     0,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     0,     3,     1,     3,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     0,     3,     3,     4,     5,     5,
       6,     7,     2,     0,     3,     3,     4,     3,     3,     2,
       0,     3,     3,     3,     5,     4,     5,     4,     6,     5,
       6,     6,     8,     4,     6,     6,     8,     6,     8,     8,
      10,     9,    11,     9,    11,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     2,     1,
       3,    11,    12,     0,     3,     0,     2,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     1,     3,
       3,     0,     2,     3,     1,     3,     2,     2,     2,     1,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     2,     4,     4,     4,
       1,     3,     1,     7,     4,     7,     4,     4,     3,     3,
       2,     4,     4,     4,     3,     2,     1,     1,     2,     1,
       1,     2,     2,     3,     1,     1,     1,     1,     2,     1,
       1,     2,     2,     2,     1,     1,     4,     3,     3,     2,
       7,     6,     6,     5,     2,     1,     1,     3,     1,     1,
       3,     6,     5,     4,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     3,     2,     3,
       1,     1,     2,     1,     1,     2,     2,     1,     4,     0,
       1,     1,     3,     1,     3,     2,     1,     1,     4,     3,
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

    case YYSYMBOL_88_: /* '.'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_89_: /* ','  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_90_: /* ':'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_91_: /* ';'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_92_: /* '('  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_93_: /* ')'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_94_: /* '['  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_95_: /* ']'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_96_: /* '^'  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
        break;

    case YYSYMBOL_97_: /* '@'  */
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

  case 83: /* statement: RAISE expr  */
                 { (yyval.n_stmt) = new raise_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 84: /* statement: primary  */
              { (yyval.n_stmt) = new pcall_node((yyvsp[0].n_expr)); }
    break;

  case 85: /* statement: WITH expr_list DO statement  */
                                  { (yyval.n_stmt) = new with_node((yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 86: /* statement: ICONST ':' statement  */
                           { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 87: /* statement: IDENT ':' statement  */
                          { (yyval.n_stmt) = new label_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 88: /* statement: compoundst  */
                 { (yyval.n_stmt) = (yyvsp[0].n_comp); }
    break;

  case 91: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 92: /* assemblerst: ASM asm_text END  */
                              { (yyval.n_basm) = new asm_block_node((yyvsp[-2].tok), (yyvsp[-1].n_asm), (yyvsp[0].tok)); }
    break;

  case 105: /* asm_line: asm_kwd  */
                  { (yyval.n_asm) = new asm_line_node((yyvsp[0].tok), NULL); }
    break;

  case 109: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 111: /* case_list: case_items otherwise sequence  */
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

  case 114: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 116: /* case_items: case_item ';' case_items  */
                               { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 117: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 119: /* case_elem_list: case_elem ',' case_elem_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 120: /* case_elem: const_expr  */
                      { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 121: /* case_elem: const_expr DOTS const_expr  */
                                 { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 123: /* const_expr: const_expr PLUS const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 124: /* const_expr: const_expr MINUS const_expr  */
                                  { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 125: /* const_expr: const_expr MOD const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 126: /* const_expr: const_expr MUL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 127: /* const_expr: const_expr DIV const_expr  */
                                { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 128: /* const_expr: const_expr DIVR const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* const_expr: const_expr AND const_expr  */
                                { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 130: /* const_expr: const_expr BINAND const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* const_expr: const_expr SHL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 132: /* const_expr: const_expr SHR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* const_expr: const_expr OR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* const_expr: const_expr BINOR const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* const_expr: const_expr XOR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* const_expr: const_expr GT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* const_expr: const_expr LT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* const_expr: const_expr LE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 139: /* const_expr: const_expr GE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* const_expr: const_expr NE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* const_expr: const_expr IN const_expr  */
                               { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* const_expr: const_expr IS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* const_expr: const_expr AS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* const_expr: '(' const_expr_list ')'  */
                              { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 145: /* const_expr: const_simple_expr '(' const_act_param_list ')'  */
                                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 146: /* const_expr: '@' const_simple_expr  */
                            { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 148: /* const_simple_expr: PLUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 149: /* const_simple_expr: MINUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 150: /* const_simple_expr: NOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 151: /* const_simple_expr: BINNOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 153: /* const_expr_list: const_expr ',' const_expr_list  */
                                                             { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 155: /* const_act_param_list: const_act_param ',' const_act_param_list  */
                                               { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 157: /* const_act_param: %empty  */
                              { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 159: /* expr: expr PLUS expr  */
                     { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 160: /* expr: expr MINUS expr  */
                      { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 161: /* expr: expr MOD expr  */
                    { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 162: /* expr: expr MUL expr  */
                    { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 163: /* expr: expr DIV expr  */
                    { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 164: /* expr: expr DIVR expr  */
                     { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 165: /* expr: primary LET expr  */
                       { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 166: /* expr: primary LETADD expr  */
                          { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 167: /* expr: primary LETSUB expr  */
                          { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 168: /* expr: primary LETDIV expr  */
                          { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 169: /* expr: primary LETMUL expr  */
                          { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 170: /* expr: primary LETSHL expr  */
                          { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 171: /* expr: primary LETSHR expr  */
                          { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 172: /* expr: primary LETAND expr  */
                          { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 173: /* expr: primary LETOR expr  */
                          { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 174: /* expr: expr AND expr  */
                    { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 175: /* expr: expr BINAND expr  */
                       { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 176: /* expr: expr SHL expr  */
                    { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 177: /* expr: expr SHR expr  */
                    { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 178: /* expr: expr OR expr  */
                    { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 179: /* expr: expr BINOR expr  */
                       { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 180: /* expr: expr XOR expr  */
                    { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 181: /* expr: expr GT expr  */
                   { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 182: /* expr: expr LT expr  */
                   { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 183: /* expr: expr LE expr  */
                   { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 184: /* expr: expr GE expr  */
                   { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 185: /* expr: expr EQ expr  */
                   { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 186: /* expr: expr NE expr  */
                   { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 187: /* expr: expr IN expr  */
                   { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 188: /* expr: expr IS expr  */
                   { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 189: /* expr: expr AS expr  */
                   { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 191: /* simple_expr: PLUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 192: /* simple_expr: MINUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 193: /* simple_expr: NOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 194: /* simple_expr: BINNOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 195: /* simple_expr: '@' primary  */
                  { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 196: /* simple_expr: AND primary  */
                                { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 198: /* primary: '(' expr_list ')'  */
                        { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 199: /* primary: primary '(' act_param_list ')'  */
                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 200: /* primary: primary '.' ident_ext  */
                            { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 201: /* primary: primary '^'  */
                  { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 202: /* primary: primary '[' expr_list ']'  */
                                { (yyval.n_expr) = new idx_expr_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 205: /* constant: ICONST  */
             { (yyval.n_expr) = new integer_node((yyvsp[0].tok)); }
    break;

  case 206: /* constant: RCONST  */
             { (yyval.n_expr) = new double_node((yyvsp[0].tok)); }
    break;

  case 207: /* constant: SCONST  */
             { (yyval.n_expr) = new string_node((yyvsp[0].tok)); }
    break;

  case 208: /* constant: '[' set_elem_list ']'  */
                            { (yyval.n_expr) = new set_node((yyvsp[-2].tok), (yyvsp[-1].n_item), (yyvsp[0].tok)); }
    break;

  case 209: /* constant: IDENT  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 210: /* constant: INDEX  */
            { (yyval.n_expr) = new atom_expr_node((yyvsp[0].tok)); }
    break;

  case 211: /* set_elem_list: %empty  */
               { (yyval.n_item) = NULL; }
    break;

  case 213: /* set_elem_list: set_elem ',' set_elem_list  */
                                 { (yyvsp[-2].n_item)->next = (yyvsp[0].n_item); (yyval.n_item) = (yyvsp[-2].n_item); }
    break;

  case 214: /* set_elem: const_expr  */
                     { (yyval.n_item) = new set_elem_node((yyvsp[0].n_expr)); }
    break;

  case 215: /* set_elem: const_expr DOTS const_expr  */
                                 { (yyval.n_item) = new set_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 217: /* expr_list: expr ',' expr_list  */
                                     { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 219: /* act_param_list: act_param ',' act_param_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 221: /* act_param: %empty  */
                  { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 222: /* record_constant: '(' field_init_list ')'  */
                                         { (yyval.n_expr) = new record_constant_node((yyvsp[-2].tok), (yyvsp[-1].n_field), (yyvsp[0].tok)); }
    break;

  case 223: /* field_init_list: field_init_item  */
                                 { (yyval.n_field) = (yyvsp[0].n_field); }
    break;

  case 224: /* field_init_list: field_init_item ';' field_init_list  */
                                          { (yyvsp[-2].n_field)->next = (yyvsp[0].n_field); (yyval.n_field) = (yyvsp[-2].n_field); }
    break;

  case 225: /* field_init_item: IDENT ':' const_expr  */
                                      { (yyval.n_field) = new field_init_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 226: /* label_decl_part: LABEL label_list ';'  */
        { (yyval.n_decl) = new label_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 227: /* label_list: ICONST  */
                   { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 228: /* label_list: ICONST ',' label_list  */
                            { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 229: /* label_list: IDENT  */
            { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 230: /* label_list: IDENT ',' label_list  */
                           { (yyval.toks) = new token_list((yyvsp[-2].tok), (yyvsp[0].toks)); }
    break;

  case 233: /* const_def_part: const const_def_list  */
                                     { (yyval.n_decl) = new const_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_cdef)); }
    break;

  case 234: /* const_def_list: %empty  */
                { (yyval.n_cdef) = NULL; }
    break;

  case 235: /* const_def_list: const_def ';' const_def_list  */
                                   { (yyvsp[-2].n_cdef)->next = (yyvsp[0].n_cdef); (yyval.n_cdef) = (yyvsp[-2].n_cdef); }
    break;

  case 236: /* const_def: ident_ext EQ const_expr  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 237: /* const_def: ident_ext EQ const_expr DEPRECATED  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok), NULL); }
    break;

  case 238: /* const_def: ident_ext EQ const_expr DEPRECATED SCONST  */
        { (yyval.n_cdef) = new const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 239: /* const_def: ident_ext ':' const_type EQ const_expr  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 240: /* const_def: ident_ext ':' const_type EQ const_expr DEPRECATED  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok), NULL); }
    break;

  case 241: /* const_def: ident_ext ':' const_type EQ const_expr DEPRECATED SCONST  */
        { (yyval.n_cdef) = new typed_const_def_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].n_tpd), (yyvsp[-3].tok), (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 242: /* type_def_part: TYPE type_def_list  */
        { (yyval.n_decl) = new type_def_part_node((yyvsp[-1].tok), (yyvsp[0].n_tdef)); }
    break;

  case 243: /* type_def_list: %empty  */
               { (yyval.n_tdef) = NULL; }
    break;

  case 244: /* type_def_list: type_def ';' type_def_list  */
                                 { (yyvsp[-2].n_tdef)->next = (yyvsp[0].n_tdef); (yyval.n_tdef) = (yyvsp[-2].n_tdef); }
    break;

  case 245: /* type_def: IDENT EQ type  */
                    { (yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 246: /* type_def: IDENT EQ TYPE type  */
                         { (yyval.n_tdef) = new type_def_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[0].n_tpd)); }
    break;

  case 247: /* type_def: IDENT EQ CLASS  */
                     {(yyval.n_tdef) = new type_def_node((yyvsp[-2].tok), (yyvsp[-1].tok), new object_tpd_node((yyvsp[0].tok), NULL, NULL, NULL, NULL, NULL)); }
    break;

  case 248: /* type_def: simple_templ_type EQ type  */
                                { (yyval.n_tdef) = new type_def_templ_node((yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 249: /* var_decl_part: VAR var_decl_list  */
                                 { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 250: /* var_decl_list: %empty  */
               { (yyval.n_vdcl) = NULL; }
    break;

  case 251: /* var_decl_list: var_decl ';' var_decl_list  */
                                 { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 252: /* attr_decl: '[' ident_list ']'  */
                              { (yyval.n_attr) = new attrib_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 253: /* var_decl: ident_list ':' type  */
                          { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 254: /* var_decl: ident_list ':' type EQ const_expr  */
                                        { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 255: /* var_decl: ident_list ':' type DEPRECATED  */
                                     { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 256: /* var_decl: ident_list ':' type DEPRECATED SCONST  */
                                            { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 257: /* var_decl: attr_decl ident_list ':' type  */
                                    { (yyval.n_vdcl) = new var_decl_node((yyvsp[-3].n_attr), (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 258: /* var_decl: attr_decl ident_list ':' type EQ const_expr  */
                                                  { (yyval.n_vdcl) = new var_decl_node((yyvsp[-5].n_attr), (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 259: /* var_decl: attr_decl ident_list ':' type DEPRECATED  */
                                               { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].n_attr), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 260: /* var_decl: attr_decl ident_list ':' type DEPRECATED SCONST  */
                                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-5].n_attr), (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 261: /* proc_fwd_decl: PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 262: /* proc_fwd_decl: FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 263: /* proc_spec: PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok), NULL, NULL); }
    break;

  case 264: /* proc_spec: FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 265: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 266: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 267: /* proc_def: PROCEDURE ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 268: /* proc_def: FUNCTION ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 269: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 270: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 271: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 272: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 273: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 274: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 294: /* optional_semicolon: %empty  */
                    { (yyval.tok) = NULL; }
    break;

  case 298: /* qualifier: DEPRECATED SCONST  */
                        { (yyval.tok) = new two_tokens((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 299: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 300: /* qualifiers: qualifiers optional_semicolon qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 301: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node(NULL, (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 302: /* property_decl: CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-11].tok), (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 303: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 304: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 305: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 306: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 307: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 308: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 309: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 310: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 311: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 312: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 313: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 314: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 315: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 316: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 317: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 319: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 320: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 321: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 322: /* formal_params: '(' ')'  */
              { (yyval.n_plist) = new param_list_node((yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 323: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 325: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 326: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 327: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 328: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 329: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 330: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 331: /* param_decl: ident_list ':' param_type EQ const_expr  */
                                              { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 332: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 354: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 355: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 356: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 357: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 358: /* string_type: STRING '[' const_expr ']'  */
                                       { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 359: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 360: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 361: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 362: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 363: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 364: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 365: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 366: /* conformant_array_type: packed ARRAY OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 367: /* conformant_array_type: packed ARRAY OF CONST  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), NULL); }
    break;

  case 368: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 369: /* range_type: const_expr DOTS const_expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 370: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 371: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 372: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 373: /* record_type: packed RECORD record_body END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 374: /* record_type: packed RECORD END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 375: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 378: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 381: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 382: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 383: /* record_component: CLASS VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 388: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 389: /* record_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 390: /* record_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 391: /* record_method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 392: /* record_method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 393: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 395: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, NULL, (yyvsp[0].n_fldls)); }
    break;

  case 396: /* interface_type: INTERFACE guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 397: /* interface_type: INTERFACE guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 398: /* interface_type: INTERFACE interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 399: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 400: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 401: /* interface_type: INTERFACE '(' IDENT ')' guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 402: /* interface_type: INTERFACE '(' IDENT ')' interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 403: /* interface_type: INTERFACE '(' IDENT ')' END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 404: /* interface_components: interface_component interface_components  */
        { 
          // special case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
     	  *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 407: /* guid: '[' SCONST ']'  */
                     { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 410: /* class_type: class_or_object object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 411: /* class_type: class_or_object '(' ident_list ')' object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 412: /* class_type: class_or_object '(' ident_list ')' END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 413: /* class_type: class_or_object '(' ident_list ')'  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 414: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 415: /* class_type: CLASS OF IDENT  */
        { (yyval.n_tpd) = new metaclass_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 417: /* object_body: field_decl_list object_components  */
        { 
           // rare case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	      *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 423: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 424: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 425: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 426: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 427: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 429: /* object_components: object_component object_components  */
        { 
           // special case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	      *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 431: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 436: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 437: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 438: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 439: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 442: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 443: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 444: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 445: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 446: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 448: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 449: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 452: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 453: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 454: /* index_spec: const_expr DOTS const_expr  */
                                 { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 455: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 456: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 458: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 459: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 460: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 462: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 463: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 464: /* variant: expr_list ':' '(' field_list ')'  */
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


