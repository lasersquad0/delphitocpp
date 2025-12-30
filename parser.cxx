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
  YYSYMBOL_var_decl = 214,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 215,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 216,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 217,        /* operator_fwd_decl  */
  YYSYMBOL_property_decl = 218,            /* property_decl  */
  YYSYMBOL_property_decl_list = 219,       /* property_decl_list  */
  YYSYMBOL_prop_array = 220,               /* prop_array  */
  YYSYMBOL_prop_index = 221,               /* prop_index  */
  YYSYMBOL_prop_type_def = 222,            /* prop_type_def  */
  YYSYMBOL_prop_read = 223,                /* prop_read  */
  YYSYMBOL_prop_write = 224,               /* prop_write  */
  YYSYMBOL_prop_stored = 225,              /* prop_stored  */
  YYSYMBOL_prop_default = 226,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 227,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 228,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 229,          /* prop_param_decl  */
  YYSYMBOL_proc_def = 230,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 231,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 232,           /* meth_qualifier  */
  YYSYMBOL_qualifier = 233,                /* qualifier  */
  YYSYMBOL_qualifiers = 234,               /* qualifiers  */
  YYSYMBOL_formal_params = 235,            /* formal_params  */
  YYSYMBOL_formal_param_list = 236,        /* formal_param_list  */
  YYSYMBOL_formal_param = 237,             /* formal_param  */
  YYSYMBOL_param_decl = 238,               /* param_decl  */
  YYSYMBOL_param_type = 239,               /* param_type  */
  YYSYMBOL_type = 240,                     /* type  */
  YYSYMBOL_const_type = 241,               /* const_type  */
  YYSYMBOL_fptr_type = 242,                /* fptr_type  */
  YYSYMBOL_string_type = 243,              /* string_type  */
  YYSYMBOL_simple_templ_type = 244,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 245,              /* simple_type  */
  YYSYMBOL_array_type = 246,               /* array_type  */
  YYSYMBOL_const_array_type = 247,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 248,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 249,                /* enum_type  */
  YYSYMBOL_range_type = 250,               /* range_type  */
  YYSYMBOL_pointer_type = 251,             /* pointer_type  */
  YYSYMBOL_set_type = 252,                 /* set_type  */
  YYSYMBOL_const_set_type = 253,           /* const_set_type  */
  YYSYMBOL_record_type = 254,              /* record_type  */
  YYSYMBOL_record_body = 255,              /* record_body  */
  YYSYMBOL_record_components = 256,        /* record_components  */
  YYSYMBOL_record_component = 257,         /* record_component  */
  YYSYMBOL_record_methods = 258,           /* record_methods  */
  YYSYMBOL_record_method_decl = 259,       /* record_method_decl  */
  YYSYMBOL_record_field_list = 260,        /* record_field_list  */
  YYSYMBOL_interface_type = 261,           /* interface_type  */
  YYSYMBOL_interface_components = 262,     /* interface_components  */
  YYSYMBOL_interface_component = 263,      /* interface_component  */
  YYSYMBOL_guid = 264,                     /* guid  */
  YYSYMBOL_class_or_object = 265,          /* class_or_object  */
  YYSYMBOL_class_type = 266,               /* class_type  */
  YYSYMBOL_object_body = 267,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 268,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 269,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 270,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 271,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 272,        /* object_components  */
  YYSYMBOL_object_component = 273,         /* object_component  */
  YYSYMBOL_field_decl_part = 274,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 275,          /* field_decl_list  */
  YYSYMBOL_object_methods = 276,           /* object_methods  */
  YYSYMBOL_object_properties = 277,        /* object_properties  */
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
#define YYLAST   2062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  457
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  843

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
       0,   403,   403,   403,   428,   428,   428,   430,   431,   434,
     434,   436,   437,   443,   445,   447,   449,   451,   454,   456,
     459,   460,   462,   462,   478,   480,   481,   485,   485,   485,
     485,   487,   488,   490,   492,   495,   496,   498,   498,   498,
     498,   499,   499,   499,   501,   503,   507,   508,   510,   510,
     510,   510,   511,   511,   511,   541,   543,   545,   549,   552,
     554,   557,   558,   560,   561,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     580,   582,   583,   586,   587,   589,   590,   591,   592,   593,
     594,   595,   597,   599,   602,   602,   602,   602,   602,   602,
     602,   602,   602,   602,   602,   602,   611,   613,   614,   617,
     617,   624,   625,   637,   637,   639,   640,   641,   643,   645,
     646,   648,   649,   673,   674,   675,   676,   677,   678,   679,
     681,   682,   683,   684,   685,   686,   687,   689,   690,   691,
     692,   694,   695,   696,   697,   698,   699,   700,   702,   703,
     705,   707,   709,   712,   712,   714,   715,   717,   717,   719,
     720,   721,   722,   723,   724,   725,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   737,   738,   739,   740,   741,
     742,   743,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   755,   756,   758,   760,   762,   764,   765,   767,   768,
     769,   770,   771,   772,   775,   776,   777,   778,   779,   780,
     781,   785,   786,   787,   789,   790,   792,   792,   794,   795,
     797,   797,   800,   802,   803,   805,   856,   859,   860,   861,
     862,   864,   864,   866,   868,   869,   871,   873,   875,   877,
     879,   881,   884,   887,   888,   891,   892,   893,   894,   896,
     898,   899,   914,   915,   916,   917,   937,   939,   957,   959,
     977,   979,   982,   985,   986,   988,   989,   991,   992,   994,
     995,   997,   998,  1000,  1001,  1003,  1004,  1006,  1007,  1009,
    1010,  1013,  1014,  1016,  1020,  1022,  1024,  1026,  1028,  1030,
    1032,  1034,  1047,  1047,  1047,  1047,  1047,  1047,  1047,  1047,
    1047,  1047,  1047,  1047,  1049,  1049,  1049,  1049,  1049,  1049,
    1049,  1051,  1051,  1053,  1054,  1057,  1058,  1059,  1061,  1062,
    1064,  1065,  1066,  1067,  1070,  1071,  1072,  1074,  1074,  1080,
    1080,  1080,  1080,  1080,  1080,  1080,  1081,  1081,  1081,  1081,
    1081,  1081,  1083,  1083,  1083,  1083,  1083,  1083,  1085,  1087,
    1089,  1091,  1094,  1096,  1098,  1099,  1100,  1105,  1107,  1110,
    1117,  1127,  1129,  1132,  1134,  1136,  1146,  1148,  1151,  1158,
    1159,  1161,  1167,  1169,  1170,  1172,  1174,  1175,  1176,  1177,
    1179,  1180,  1183,  1185,  1187,  1189,  1191,  1194,  1199,  1201,
    1203,  1205,  1207,  1209,  1214,  1223,  1225,  1226,  1228,  1231,
    1231,  1233,  1235,  1237,  1239,  1241,  1245,  1249,  1258,  1259,
    1262,  1262,  1264,  1264,  1264,  1266,  1267,  1269,  1270,  1271,
    1273,  1282,  1284,  1285,  1287,  1288,  1289,  1290,  1291,  1294,
    1296,  1299,  1300,  1302,  1304,  1307,  1308,  1311,  1313,  1315,
    1317,  1321,  1323,  1323,  1331,  1332,  1335,  1336,  1339,  1341,
    1344,  1346,  1349,  1350,  1353,  1354,  1355,  1357
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
  "packed", "indices", "index_spec", "field_list", "fixed_part",
  "variant_part", "selector", "variant_list", "variant", YY_NULLPTR
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

#define YYTABLE_NINF (-355)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -665,    69,  1760,  -665,   441,   200,  -665,    57,  1650,    51,
      77,    92,  -665,   139,   149,   176,  -665,  -665,  -665,  -665,
       0,   188,   734,  -665,  -665,  -665,   176,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,   441,   165,   174,   177,   189,
       6,  -665,  -665,  -665,   141,   176,  1650,   176,   218,  -665,
      60,  1650,  -665,  -665,  -665,  -665,  -665,  -665,   163,   167,
     195,   192,   141,   173,   120,  -665,   234,   197,   246,  -665,
     225,   250,  -665,   253,  -665,  1496,  -665,  -665,    -5,  -665,
     259,  -665,  -665,   264,     8,   267,   176,   306,   283,   141,
     301,   141,   266,   734,  -665,  -665,    51,    51,  -665,   176,
     291,   176,   295,   845,    26,   139,   937,   354,   176,   937,
     176,   905,   176,   260,   310,   312,   905,  -665,   367,   905,
    -665,  1496,  -665,  1496,   905,   905,   926,  1088,  -665,  -665,
    -665,   313,  -665,   380,  1269,  -665,  -665,    26,  1088,   176,
     176,   374,   317,   176,   141,   176,   176,   176,  -665,   320,
     319,   323,  -665,   937,   326,   328,   384,    76,  -665,  -665,
    -665,   141,  1586,   324,  1766,    20,   141,   318,  -665,    49,
    -665,  -665,   141,   329,   937,    79,   937,   229,   229,   229,
     229,   229,   600,   330,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  1522,  -665,  -665,
     194,   336,   315,  -665,  -665,  -665,  -665,  -665,  -665,    63,
    -665,   389,  -665,  1650,  -665,    50,  -665,  -665,   445,   905,
     905,   445,   905,   905,  1306,  -665,  1955,   331,  -665,  -665,
    1496,  1496,  1274,   339,  1892,   381,    84,  1171,  1794,   447,
     371,   369,   370,   376,  1453,  1215,   373,   388,  1496,  -665,
     176,   905,   905,  -665,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   357,  1128,  -665,   141,   141,   937,   141,
     379,  -665,  -665,  -665,   140,  -665,   495,   382,   937,  1637,
    1650,   395,   396,   394,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,   398,   188,  -665,  -665,  -665,   408,  -665,
     412,    52,   457,   414,   176,  -665,   478,   442,    78,   468,
    1088,  -665,   217,    81,   418,  1835,   432,  -665,   497,  -665,
    -665,  -665,  -665,  -665,  1088,  1088,  1088,  1088,  1088,  1088,
    1088,  1088,  1088,  1088,  1088,  1088,  1088,  1088,  1088,  1088,
    1088,  1088,  1088,  1088,  1088,  1088,  1088,   190,  -665,   498,
    -665,  -665,  -665,  -665,   274,   176,   176,  -665,  -665,   438,
    -665,  -665,   480,  -665,   523,  -665,  -665,   176,  -665,   747,
    -665,   747,  -665,  -665,  -665,   293,    37,   501,  1731,   503,
    -665,   451,   506,    86,   482,  1088,   223,  -665,   223,  -665,
     223,  -665,  -665,  1088,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   905,  -665,  -665,  1496,   905,
     905,   512,  1496,  1496,   905,  1496,  1088,  -665,  -665,   497,
    1088,  -665,  1088,  -665,  -665,  1892,   454,   473,   474,  1892,
    1892,  1892,  1892,  1892,  1892,  1892,  1892,  1892,  1088,   496,
     481,   483,   477,   479,   937,  -665,   471,  -665,  -665,   576,
    -665,  1586,   490,   508,  -665,  -665,  1766,  -665,  1637,  -665,
    -665,  -665,  -665,   937,  -665,   499,   493,   129,  -665,   573,
     214,  -665,  -665,   556,  1870,  -665,  1088,  -665,   371,  1913,
    1371,  1371,  1371,  1371,  1371,  1371,  1371,   393,   393,   393,
     393,   393,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  1913,   507,   510,   176,  -665,  -665,   509,  -665,  -665,
    -665,   513,   176,  -665,  -665,  -665,  -665,  -665,  -665,   937,
     526,   937,   314,  -665,   552,   176,  -665,  -665,  -665,  -665,
     590,  -665,  1779,  -665,   309,  1779,  -665,   176,  -665,  -665,
    -665,   601,   937,   526,    26,   734,  -665,  -665,  1913,   592,
      83,   519,   521,   524,  1331,  1768,  1768,  1768,  1768,  1768,
    1768,  1768,  1768,   641,   641,   641,   641,   641,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  1892,  1892,  1892,
    1892,  1892,  1892,  1892,  1892,  1892,  1753,   599,   529,  1892,
     587,   362,   535,   610,  -665,  -665,  -665,  1913,  -665,  1913,
    -665,  -665,   905,  -665,  1149,  -665,   937,   937,  1766,  1766,
     538,  1088,   591,   539,   542,  1637,   545,  -665,   598,    59,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  1088,  -665,   176,
     549,  1680,  -665,  -665,   280,  1352,  -665,   546,   551,  -665,
     615,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  1102,  -665,  -665,   550,  -665,   226,  -665,  -665,  -665,
    1496,  1088,  1496,  1088,  1088,   905,  1496,  -665,   560,  1496,
    -665,   512,  -665,  -665,   579,   561,   562,   564,   568,  1766,
    1913,    95,  -665,  1637,  -665,   622,  -665,   282,  -665,   572,
     570,   575,   937,   634,  -665,   651,  1088,   635,   526,   141,
      25,  -665,   636,   638,   602,    53,   663,   603,  -665,  -665,
    -665,  -665,  1913,  1194,  -665,    95,   671,  -665,  -665,  1766,
    1766,  -665,  -665,   604,  -665,  -665,  -665,   672,   140,  -665,
     176,  -665,  1095,   633,  -665,  1913,   937,  -665,   606,   937,
     905,    26,  -665,  1496,    53,  -665,  -665,   613,  -665,  1496,
     681,  -665,   607,   614,  -665,  -665,  -665,  -665,  -665,   675,
     619,  -665,   937,  -665,   642,  -665,   645,  -665,   711,  -665,
    -665,  -665,  1496,  -665,  -665,  -665,   713,   670,   654,   655,
     905,    53,  -665,  -665,   717,   738,  1637,   176,  -665,  1496,
    -665,  1095,   660,   661,   657,  -665,  -665,   742,  1637,  -665,
     667,  -665,  -665
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    35,     1,     0,     0,   231,     0,    46,     0,
       0,     0,   232,   243,     0,   250,     3,     4,     5,     6,
       0,    11,    35,    43,    34,    37,   234,    38,    39,    40,
      42,    41,    94,    96,   103,    98,   101,   102,    99,   100,
      97,   104,   105,    95,   106,   107,     0,     0,     0,     0,
      27,    28,    29,    30,   315,     0,    46,     0,     0,    54,
       0,    46,    48,    49,    50,    51,    53,    52,   229,   227,
       0,    27,   315,    25,     0,   242,     0,     0,     0,    27,
      32,     0,   249,     0,     7,    65,    33,    36,     0,   233,
       0,   108,    93,     0,   315,     0,     0,     0,     0,   315,
       0,   315,     0,    35,    45,    47,     0,     0,   226,     0,
       0,     0,     0,   442,   442,   243,   442,     0,     0,   442,
     250,     0,     0,     0,   209,   205,     0,   210,    55,     0,
     206,    65,   207,    65,     0,     0,     0,   211,    91,    89,
      90,   109,    88,     0,    84,   198,   204,   442,     0,   234,
       0,     0,     0,     0,   315,     0,     0,     0,   316,   326,
       0,   318,   323,   442,     0,     0,     0,     0,    24,   230,
     228,   315,    35,     0,    35,   400,   315,   209,   205,     0,
     399,   443,   315,   356,   442,     0,   442,     0,     0,     0,
       0,     0,     0,   123,   148,   245,   340,   339,   341,   329,
     330,   337,   338,   336,   334,   331,   333,     0,   332,   335,
       0,   354,     0,   346,   342,   343,   347,   345,   344,     0,
     244,   400,   248,    46,    31,   252,   251,   209,     0,     0,
       0,     0,     0,     0,     0,   159,   191,     0,    76,    75,
      65,    65,     0,    56,    83,     0,     0,     0,   216,     0,
     209,     0,     0,   223,     0,   214,     0,   212,    65,    92,
       0,   221,     0,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   235,   315,   315,   442,   315,
       0,   321,   322,   320,   442,   317,     0,     0,   442,   258,
      46,     0,     0,     0,   305,   296,   307,   301,   310,   292,
     302,   293,   309,   295,   294,   304,   298,   308,   297,   303,
     300,   306,   299,     0,     0,   311,   312,   313,     0,    26,
       0,     9,     0,     0,     0,   393,     0,     0,     0,   350,
       0,   246,   209,   210,     0,   153,     0,   363,     0,   147,
     149,   150,   151,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,   405,     0,
     410,   413,   411,   414,     0,     0,     0,   427,   428,     0,
     437,   438,   263,   434,     0,   412,   417,   422,   408,   421,
     424,   409,   425,   426,   433,   435,     0,     0,     0,     0,
     353,     0,     0,     0,   254,     0,   196,   192,   191,   193,
     197,   194,   195,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    86,    65,   221,
       0,    63,    65,    65,     0,    65,     0,   199,   222,     0,
       0,   208,   211,   110,   201,   220,     0,   218,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,   237,
       0,     0,     0,     0,   442,   356,   324,   327,   328,     0,
     319,    35,     0,     0,    15,    16,    35,   284,   256,     8,
      10,    12,   406,   442,   355,     0,     0,     0,   389,     0,
     395,   396,   397,     0,     0,   361,     0,   145,     0,   362,
     141,   138,   139,   137,   140,   142,   143,   124,   125,   134,
     136,   135,   126,   128,   129,   127,   130,   133,   132,   131,
     144,   157,     0,   155,     0,   439,   440,   265,   418,   419,
     429,     0,   431,   264,   401,   423,   420,   407,   436,   442,
       0,   442,     0,   367,     0,     0,   378,   379,   382,   383,
       0,   369,   372,   376,   380,   370,   415,   373,   450,   377,
     387,   449,   442,     0,   442,    35,    44,   255,   253,     0,
     111,   116,     0,   119,   121,   186,   187,   183,   184,   182,
     185,   188,   189,   160,   161,   179,   181,   180,   162,   164,
     165,   163,   175,   178,   177,   176,   190,   166,   167,   168,
     169,   170,   173,   174,   171,   172,     0,    78,     0,    82,
       0,     0,    61,     0,    81,   217,    85,   225,   224,   215,
     213,   200,   221,   203,   239,   238,   442,   442,    35,    35,
       0,     0,     0,     0,     0,   259,     0,   314,   348,     0,
     398,   388,   394,   351,   352,   154,   146,   158,   430,     0,
     269,   404,   432,   358,   209,     0,   446,     0,   444,   441,
       0,   384,   385,   386,   416,   375,   366,   371,   381,   368,
     374,   442,   448,   364,     0,   365,     0,    77,   114,   113,
      65,   115,    65,     0,     0,     0,    65,    57,     0,    65,
      59,    63,    58,   219,   240,     0,     0,     0,     0,    35,
     325,     0,   285,   257,   286,     0,   392,     0,   156,     0,
       0,   281,   442,   267,   403,     0,     0,     0,     0,   315,
     209,   453,     0,     0,     0,    20,     0,     0,   112,   117,
     118,   120,   122,     0,    79,     0,     0,    62,   241,    35,
      35,   290,   288,     0,   360,   349,   391,     0,   442,   266,
       0,   270,     0,   271,   402,   447,   442,   445,     0,   442,
       0,   442,    13,    65,    20,    22,    23,     0,    14,    65,
       0,    60,     0,     0,   287,   390,   283,   282,   268,     0,
     273,   357,   442,   452,     0,   451,   454,   359,    18,    21,
      17,    80,    65,   289,   291,   272,     0,   275,     0,     0,
     455,    20,    64,   274,     0,   277,   260,     0,   456,    65,
     276,     0,     0,     0,     0,    19,   278,   279,   261,   457,
       0,   262,   280
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -664,
    -665,   169,  -665,   135,   -84,  -158,     1,  -665,    14,   -23,
    -665,  -665,  -665,  -665,    62,  -665,  -200,   -13,  -665,  -665,
    -665,   714,  -126,  -665,  -665,    74,  -665,    75,  -665,   487,
     307,   244,   114,  -665,   659,    65,   -81,    88,   321,  -665,
    -107,  -403,  -665,  -665,   327,  -665,    23,   278,  -665,    -8,
     646,  -665,    22,   679,  -665,    -7,   662,    42,     3,   125,
    -665,  -665,   405,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,    34,  -665,  -665,  -665,  -665,  -489,  -466,   -57,   504,
    -665,   113,    28,   -95,  -127,  -665,  -108,    48,  -104,  -665,
    -665,  -665,  -665,  -665,  -102,  -665,  -665,   -96,  -665,  -388,
    -665,   231,  -665,   230,  -665,  -478,  -665,   147,  -665,  -665,
     137,  -351,  -665,  -665,  -665,   -67,  -665,  -665,  -190,  -302,
    -272,   421,  -665,  -665,  -112,  -547,  -665,  -546,  -665,  -665,
    -665,   -11,  -665
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    16,    17,   501,    18,    19,   746,   783,
     784,   167,   112,    80,    81,    20,   314,    22,    23,    60,
      61,   138,   139,   140,   631,   632,   141,   142,    24,    44,
      45,    46,   143,   589,   700,   590,   591,   592,   593,   192,
     193,   336,   542,   543,   248,   235,   236,   145,   256,   257,
     804,   466,   467,   146,   252,   253,    25,    70,    26,    27,
      89,    90,    28,    75,    76,    29,    82,   379,    30,   381,
     683,   382,   383,   670,   773,   733,   800,   817,   825,   832,
     841,   730,   731,    31,   315,   316,   317,   318,    98,   160,
     161,   162,   486,   195,   212,   196,   197,   198,   199,   200,
     215,   488,   201,   202,   203,   204,   217,   205,   570,   571,
     572,   573,   574,   575,   206,   509,   510,   328,   207,   208,
     384,   385,   386,   577,   387,   388,   389,   390,   578,   392,
     393,   394,   395,   209,   210,   677,   678,   580,   581,   692,
     742,   805,   806
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    65,   219,    21,   144,   245,   213,   246,    86,   657,
     214,    66,   216,   159,   313,   110,   320,   391,   218,   685,
     273,   222,    59,    87,   225,   654,   511,   173,   249,   251,
      64,    62,   662,   100,   224,   219,   694,   152,   105,   213,
     446,   447,   164,   214,   165,   216,   628,   576,    63,    65,
     144,   218,   144,    63,    65,   211,   512,    83,    85,    66,
     322,    77,   404,     6,    66,  -354,   325,   401,   287,     3,
      59,   159,   159,   159,   181,    59,   726,   559,    64,    62,
      68,    69,    85,    64,    62,   147,    50,   507,    84,   331,
      51,   337,   103,   291,    96,   508,   151,   280,   183,   698,
      97,   334,   451,   148,   168,    55,    71,   452,   332,   178,
      51,  -247,   333,   324,   293,   779,    52,    12,   585,   323,
     809,    73,   186,   398,   211,   329,   579,   699,    57,   402,
     369,   560,   463,    67,    15,   114,    52,   130,    52,   104,
     500,   326,    54,   327,    53,    72,   132,   406,   408,   408,
     410,   408,   408,   327,   292,   468,    55,   829,   405,   144,
     144,    88,    83,    77,    53,   586,    53,   485,    74,   211,
     -28,   254,   489,   137,   -28,   321,   187,   144,    78,    57,
     487,    67,    92,   482,   687,   550,    67,   689,   181,   654,
      99,   777,   101,   492,    85,   188,   189,   555,   396,   377,
     403,   194,   159,    93,   194,    79,    94,   194,   511,    51,
     380,   190,   485,   191,   397,    63,    65,    55,    95,   480,
     481,   576,   483,   507,   576,   194,    66,    47,   113,   378,
     114,   154,    85,    97,   657,    52,   194,    59,   512,   713,
      57,    55,    48,   744,   171,    64,    62,   102,   627,   767,
      49,   194,   106,   634,   398,   636,   107,   237,   227,   178,
     399,   745,   127,    53,    57,   111,   369,   493,   281,   282,
     283,   544,   194,   194,   194,   194,   194,   194,   194,   194,
     109,   834,    63,    65,    88,   276,   108,   130,   279,   238,
     239,   507,   551,    66,   407,   409,   132,   411,   412,   766,
     579,    86,   507,   579,    59,   116,   -27,   456,    86,    55,
     -27,   260,    64,    62,   118,   261,   155,   262,   562,   263,
      55,   338,   556,   137,   557,   115,   633,   548,   549,  -354,
    -354,   380,    57,   653,   369,    79,    55,   117,   656,    51,
     119,    55,   194,    57,   120,   188,   189,   635,    67,   657,
     149,  -354,   150,   156,   668,   153,   680,   166,  -354,    57,
     833,   190,   672,   191,    57,    52,   194,   144,   324,  -354,
     545,   144,   144,   163,   144,  -354,   194,  -354,   709,   710,
     104,   377,   172,   377,   169,   170,   174,   157,  -354,   650,
     566,   223,   380,    53,   380,   464,   243,   259,   380,   158,
     240,   568,   241,   277,   258,  -354,   324,   278,   658,  -354,
     284,   378,   285,   378,   286,    67,   288,   319,   194,   289,
     567,   290,   366,   330,   324,   511,  -354,   400,   114,   322,
     445,   449,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   512,   676,   695,   450,   504,
     455,   456,   457,   458,   673,   478,   679,   459,   461,   484,
      32,    33,   219,   491,   227,   178,   213,   462,   127,   676,
     214,   391,   216,   494,   495,   496,   502,   693,   218,   497,
     717,   718,   546,   194,   339,   340,   341,   342,   343,   498,
     499,   194,   750,   130,   503,   155,   754,   505,   513,   506,
     545,   515,   132,   380,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   569,    79,   517,   518,   547,    51,   552,
      34,    35,   369,    36,    37,    38,    39,   136,    40,   137,
     554,   561,   156,   582,   194,   583,   584,   641,   194,   587,
     194,   715,   716,   630,    52,   674,   178,    41,    42,   127,
      43,   763,   642,   645,   566,   681,   194,   566,   648,   643,
     649,   646,   194,   647,   748,   568,   157,   568,   568,   651,
     652,   655,    53,   756,   130,   729,   168,   586,   660,   811,
     661,   194,   659,   132,   567,   663,   741,   567,   485,   667,
     666,   792,   793,   669,   194,   684,   671,   686,   691,   697,
     701,   702,   822,   703,   344,   706,   708,   764,   254,   144,
     137,   144,   707,   187,   255,   144,   711,   712,   144,   719,
     722,   721,   546,   723,   676,   274,   724,   771,   725,   732,
     738,   737,   188,   189,   739,   743,   758,   194,   194,   194,
     755,   790,   759,   760,   807,   761,   489,   808,   190,   762,
     191,   765,   768,   377,   487,   769,   770,   772,   774,   219,
     194,   194,   335,   213,   380,   776,   780,   214,   781,   216,
     787,   801,   778,   747,   803,   218,   729,   682,   791,   795,
     782,   788,   799,   378,   812,   794,   802,   569,   813,   569,
     569,   810,   144,   835,   815,   814,   816,   818,   144,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     380,   144,   819,   821,   194,   194,   820,   785,   786,   194,
     824,   335,   823,     5,     6,   826,   830,   827,   144,   831,
     839,   837,   838,   840,   696,   194,   367,     6,   842,    91,
     665,     7,   427,   428,   429,   430,   431,   432,   433,   434,
     435,    56,     9,   757,    55,   749,   785,   786,   751,   194,
     234,   728,   226,   640,    10,   242,   638,   553,   244,   194,
     490,   194,   194,   247,   220,   275,   796,    57,    12,   369,
     370,   371,   372,   373,   797,   688,   727,   690,   735,   828,
      13,    12,    58,   785,   786,    15,   558,   514,   374,     0,
     194,     0,     0,    13,   194,     0,   194,     0,   375,     0,
       0,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   175,     0,     0,     0,     0,     0,
     798,     0,     0,     0,   194,     0,     0,   194,     0,     0,
       0,     0,   176,     0,   177,   178,     0,     0,   127,     0,
       0,     0,   179,     0,   180,     0,     0,     0,     0,     0,
     194,     0,   588,   181,     0,   182,     0,     0,     0,     0,
     594,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,   183,     0,   836,
     465,   184,     0,   469,   470,   471,   472,   473,   474,   475,
     476,   477,     0,     0,   227,   178,     0,   185,   127,   137,
       0,   186,   187,   637,     0,     0,   221,   639,     0,   255,
       0,     0,     0,     0,     0,   250,   178,     0,     0,   127,
       0,   188,   189,   130,   176,   644,   177,   178,     0,     0,
     127,     0,   132,     0,   179,     0,   180,   190,     0,   191,
       0,     0,     0,     0,   130,   181,     0,   182,     0,     0,
       0,     0,     0,   132,     0,   130,     0,   136,     0,   137,
       0,     0,   228,   335,   132,     0,     0,     0,     0,   183,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     137,   229,   230,   228,     0,     0,     0,     0,     0,   185,
     231,   137,     0,   186,   187,     0,     0,   232,     0,   233,
       0,     0,   229,   230,     0,     0,     0,   675,     0,     0,
       0,   231,     0,   188,   189,     0,     0,     0,   232,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,   190,
     675,   191,     0,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,     0,     0,     0,   465,   629,
       0,   221,     0,     0,     0,     0,     0,   227,   178,     0,
       0,   127,     0,     0,   227,   178,     0,     0,   127,   176,
       0,   740,   178,     0,     0,   127,     0,     0,   720,   179,
     479,   180,     0,     0,     0,     0,   130,     0,     0,     0,
     181,     0,   182,   130,   541,   132,     0,     0,     0,     0,
     130,   714,   132,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,   183,     0,     0,     0,     0,     0,
     254,     0,   137,     0,   453,   187,     0,   338,   594,   137,
     594,   752,     0,     0,   185,     0,   137,     0,   186,   187,
       0,     0,     0,     0,   188,   189,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   188,   189,
     190,     0,   191,   775,     0,   675,     0,     0,     0,   460,
       0,     0,     0,     0,   190,     0,   191,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   465,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   704,   413,   448,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,   261,     0,   262,   753,   263,   736,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,     0,     0,
       0,     0,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,     0,     0,     0,     0,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   250,   178,     0,     0,   127,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,    85,   121,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   122,     0,     0,   123,   124,   125,   126,     0,   127,
     128,   367,     6,     0,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,   254,     0,   137,     0,    55,
     187,    79,     0,   129,   130,    51,     0,     0,     0,   131,
       0,     0,     0,   132,     0,     0,     0,     0,     0,   188,
     189,   133,    57,     0,   369,   370,   371,   372,   373,     0,
     134,    52,   135,     0,     0,   190,    12,   191,   136,   294,
     137,     4,     0,   374,   295,     5,     6,     0,    13,     0,
       0,   296,     0,   375,     0,   297,     0,   298,     0,    53,
       0,     0,   299,     7,   376,     0,     0,     0,     0,     0,
       0,     0,   300,    56,     9,     0,     0,     0,     0,     0,
       0,   301,   302,     0,     0,   303,    10,     0,     0,     0,
     294,     0,     0,     0,     0,   295,     0,   304,   305,     0,
      12,   306,   296,     0,   307,   308,   297,     0,   298,     0,
       6,     0,    13,   299,    58,     0,   309,    15,   310,   311,
       0,   312,     0,   300,     0,     0,     0,    55,     0,     0,
       0,     0,   301,   302,     0,     0,   303,    56,     9,   367,
       6,     0,     0,     0,     0,     0,     0,   734,   304,   305,
      57,     0,   306,     0,     0,   307,   308,    55,     0,    79,
       0,     0,     0,    51,    12,     0,     0,   309,     0,   310,
     311,     0,   312,     0,     0,     0,    13,     0,    58,     0,
      57,    15,   369,   370,   371,   372,   373,     0,     0,    52,
     562,     6,     0,     0,    12,     0,     0,     0,   563,     0,
       0,   374,     0,     0,     0,     0,    13,     0,    55,     0,
      79,   375,     0,     0,    51,     4,     0,    53,     0,     5,
       6,     4,     0,     0,     0,     5,     6,     0,     0,     0,
       0,    57,     0,   369,   370,     0,   372,     7,   562,     6,
      52,     0,     0,     7,     0,    12,     0,     8,     9,     0,
       0,     0,   564,    56,     9,     0,    55,    13,     0,     0,
      10,    11,   565,     0,     0,     0,    10,     0,    53,     0,
       0,     0,     0,     0,    12,     0,     0,   705,     0,    57,
      12,   369,   370,     0,   372,     0,    13,     0,    14,     0,
       0,    15,    13,    12,    58,     0,     0,    15,     0,     0,
     564,     0,     0,     0,     0,    13,     0,     0,     0,     0,
     565,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   454,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,     0,     0,
       0,     0,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   260,     0,     0,     0,   261,     0,   262,
       0,   263,     0,     0,   436,   437,   438,   439,   440,   441,
     442,   443,   444
};

static const yytype_int16 yycheck[] =
{
       8,     8,   114,     2,    85,   131,   114,   133,    21,   498,
     114,     8,   114,    97,   172,    72,   174,   207,   114,   565,
     147,   116,     8,    22,   119,   491,   328,   111,   135,   136,
       8,     8,   510,    56,   118,   147,   583,    94,    61,   147,
     240,   241,    99,   147,   101,   147,   449,   398,    56,    56,
     131,   147,   133,    61,    61,    29,   328,    15,     6,    56,
      40,    13,    12,    10,    61,    40,    17,     4,   163,     0,
      56,   155,   156,   157,    48,    61,    17,    40,    56,    56,
      29,    30,     6,    61,    61,    90,    29,     9,    88,   184,
      33,   186,    32,    17,    88,    17,    88,   154,    72,    16,
      92,   185,    18,   108,   103,    27,    29,    23,    29,    30,
      33,    91,    33,    88,   171,    90,    59,    64,    32,   176,
     784,    29,    96,    60,    29,   182,   398,    44,    50,    66,
      52,    94,   258,     8,    81,   110,    59,    58,    59,    79,
      88,    92,     7,    94,    87,    10,    67,   228,   229,   230,
     231,   232,   233,    94,   167,   262,    27,   821,   108,   240,
     241,    26,   120,   115,    87,    79,    87,    72,    29,    29,
      89,    92,   284,    94,    93,   174,    97,   258,    29,    50,
     284,    56,    17,   278,   572,   375,    61,   575,    48,   655,
      55,   738,    57,   288,     6,   116,   117,   387,     4,   207,
     223,   113,   286,    29,   116,    29,    29,   119,   510,    33,
     207,   132,    72,   134,    20,   223,   223,    27,    29,   276,
     277,   572,   279,     9,   575,   137,   223,    27,   108,   207,
     110,    96,     6,    92,   723,    59,   148,   223,   510,   642,
      50,    27,    42,    17,   109,   223,   223,    29,   448,   727,
      50,   163,    89,   453,    60,   455,    89,   122,    29,    30,
      66,    35,    33,    87,    50,    92,    52,   290,   155,   156,
     157,    81,   184,   185,   186,   187,   188,   189,   190,   191,
      88,   827,   290,   290,   149,   150,    91,    58,   153,    29,
      30,     9,   376,   290,   229,   230,    67,   232,   233,    17,
     572,   314,     9,   575,   290,   108,    89,    90,   321,    27,
      93,    88,   290,   290,    89,    92,    10,    94,     9,    96,
      27,    92,   389,    94,   391,    91,   452,    53,    54,    11,
      12,   328,    50,   491,    52,    29,    27,    91,   496,    33,
      90,    27,   254,    50,    91,   116,   117,   454,   223,   838,
      91,    33,    88,    47,   544,    88,    42,    91,    40,    50,
     826,   132,   552,   134,    50,    59,   278,   448,    88,    89,
     367,   452,   453,    90,   455,    95,   288,    59,    16,    17,
      79,   389,    91,   391,   106,   107,    91,    81,    70,   484,
     398,    37,   389,    87,   391,   260,    29,    17,   395,    93,
      90,   398,    90,    29,    91,    87,    88,    90,   503,    91,
      90,   389,    93,   391,    91,   290,    90,    93,   330,    91,
     398,    37,    92,    94,    88,   727,   108,   112,   110,    40,
      99,    92,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   727,   560,   584,    77,   324,
      13,    90,    93,    93,   559,   108,   561,    91,    95,    90,
      29,    30,   584,    91,    29,    30,   584,    89,    33,   583,
     584,   671,   584,    88,    88,    91,    29,   582,   584,    91,
     648,   649,   367,   405,   187,   188,   189,   190,   191,    91,
      88,   413,   702,    58,    90,    10,   706,    29,    40,    67,
     507,    93,    67,   510,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   398,    29,    93,    29,    29,    33,    91,
      89,    90,    52,    92,    93,    94,    95,    92,    97,    94,
      17,    40,    47,    40,   456,    94,    40,    93,   460,    67,
     462,   646,   647,    41,    59,    29,    30,   116,   117,    33,
     119,   719,    89,    67,   572,   562,   478,   575,    91,    95,
      91,    90,   484,    90,   700,   572,    81,   574,   575,   108,
       4,    91,    87,   709,    58,   669,   585,    79,    95,   789,
      17,   503,    93,    67,   572,    39,   691,   575,    72,    89,
      93,   759,   760,    94,   516,    53,    93,    17,     7,    17,
      91,    90,   812,    89,    14,    16,    29,   721,    92,   700,
      94,   702,    93,    97,   137,   706,    91,    17,   709,    91,
      91,    40,   507,    91,   738,   148,    91,   732,    40,    90,
      89,    95,   116,   117,    29,    95,    67,   559,   560,   561,
      90,   755,    91,    91,   781,    91,   768,   783,   132,    91,
     134,    39,    90,   671,   768,    95,    91,    33,    17,   781,
     582,   583,   185,   781,   671,    40,    40,   781,    40,   781,
      17,   776,   739,   696,   779,   781,   770,   562,    17,    17,
      88,    88,    59,   671,    13,    91,    90,   572,    91,   574,
     575,    88,   783,   829,    29,    91,    87,   802,   789,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     727,   812,    90,    22,   646,   647,    91,   745,   745,   651,
      70,   254,    29,     9,    10,    91,    29,    92,   829,    11,
      93,    91,    91,    11,   585,   667,     9,    10,    91,    45,
     516,    27,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    37,    38,   711,    27,   701,   784,   784,   703,   691,
     121,   667,   120,   462,    50,   126,   459,   382,   129,   701,
     286,   703,   704,   134,   115,   149,   768,    50,    64,    52,
      53,    54,    55,    56,   770,   574,   659,   577,   671,   820,
      76,    64,    78,   821,   821,    81,   395,   330,    71,    -1,
     732,    -1,    -1,    76,   736,    -1,   738,    -1,    81,    -1,
      -1,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,     9,    -1,    -1,    -1,    -1,    -1,
     772,    -1,    -1,    -1,   776,    -1,    -1,   779,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
     802,    -1,   405,    48,    -1,    50,    -1,    -1,    -1,    -1,
     413,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,   831,
     261,    76,    -1,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    29,    30,    -1,    92,    33,    94,
      -1,    96,    97,   456,    -1,    -1,     9,   460,    -1,   462,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
      -1,   116,   117,    58,    27,   478,    29,    30,    -1,    -1,
      33,    -1,    67,    -1,    37,    -1,    39,   132,    -1,   134,
      -1,    -1,    -1,    -1,    58,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    58,    -1,    92,    -1,    94,
      -1,    -1,    97,   516,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      94,   116,   117,    97,    -1,    -1,    -1,    -1,    -1,    92,
     125,    94,    -1,    96,    97,    -1,    -1,   132,    -1,   134,
      -1,    -1,   116,   117,    -1,    -1,    -1,   560,    -1,    -1,
      -1,   125,    -1,   116,   117,    -1,    -1,    -1,   132,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     583,   134,    -1,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,    -1,    -1,   449,   450,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    29,    30,    -1,    -1,    33,    27,
      -1,    29,    30,    -1,    -1,    33,    -1,    -1,   651,    37,
      12,    39,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      48,    -1,    50,    58,   667,    67,    -1,    -1,    -1,    -1,
      58,    12,    67,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    94,    -1,    13,    97,    -1,    92,   701,    94,
     703,   704,    -1,    -1,    92,    -1,    94,    -1,    96,    97,
      -1,    -1,    -1,    -1,   116,   117,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     132,    -1,   134,   736,    -1,   738,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,   132,    -1,   134,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   642,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    14,    40,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    92,    -1,    94,   705,    96,    14,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    29,    30,    -1,    -1,    33,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    -1,    27,
      97,    29,    -1,    57,    58,    33,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   116,
     117,    75,    50,    -1,    52,    53,    54,    55,    56,    -1,
      84,    59,    86,    -1,    -1,   132,    64,   134,    92,     3,
      94,     5,    -1,    71,     8,     9,    10,    -1,    76,    -1,
      -1,    15,    -1,    81,    -1,    19,    -1,    21,    -1,    87,
      -1,    -1,    26,    27,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    49,    50,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,     8,    -1,    61,    62,    -1,
      64,    65,    15,    -1,    68,    69,    19,    -1,    21,    -1,
      10,    -1,    76,    26,    78,    -1,    80,    81,    82,    83,
      -1,    85,    -1,    36,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    49,    37,    38,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    61,    62,
      50,    -1,    65,    -1,    -1,    68,    69,    27,    -1,    29,
      -1,    -1,    -1,    33,    64,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    -1,    -1,    -1,    76,    -1,    78,    -1,
      50,    81,    52,    53,    54,    55,    56,    -1,    -1,    59,
       9,    10,    -1,    -1,    64,    -1,    -1,    -1,    17,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    27,    -1,
      29,    81,    -1,    -1,    33,     5,    -1,    87,    -1,     9,
      10,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    -1,    55,    27,     9,    10,
      59,    -1,    -1,    27,    -1,    64,    -1,    37,    38,    -1,
      -1,    -1,    71,    37,    38,    -1,    27,    76,    -1,    -1,
      50,    51,    81,    -1,    -1,    -1,    50,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    74,    -1,    50,
      64,    52,    53,    -1,    55,    -1,    76,    -1,    78,    -1,
      -1,    81,    76,    64,    78,    -1,    -1,    81,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    89,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
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
     127,   128,   129,    88,    -1,    -1,    -1,    92,    -1,    94,
      -1,    96,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   148,   149,     0,     5,     9,    10,    27,    37,    38,
      50,    51,    64,    76,    78,    81,   150,   151,   153,   154,
     162,   163,   164,   165,   175,   203,   205,   206,   209,   212,
     215,   230,    29,    30,    89,    90,    92,    93,    94,    95,
      97,   116,   117,   119,   176,   177,   178,    27,    42,    50,
      29,    33,    59,    87,   160,    27,    37,    50,    78,   165,
     166,   167,   203,   206,   209,   212,   215,   216,    29,    30,
     204,    29,   160,    29,    29,   210,   211,   244,    29,    29,
     160,   161,   213,   214,    88,     6,   174,   163,   160,   207,
     208,   178,    17,    29,    29,    29,    88,    92,   235,   160,
     166,   160,    29,    32,    79,   166,    89,    89,    91,    88,
     235,    92,   159,   108,   110,    91,   108,    91,    89,    90,
      91,     7,    25,    28,    29,    30,    31,    33,    34,    57,
      58,    63,    67,    75,    84,    86,    92,    94,   168,   169,
     170,   173,   174,   179,   193,   194,   200,    90,   108,    91,
      88,    88,   235,    88,   160,    10,    47,    81,    93,   161,
     236,   237,   238,    90,   235,   235,    91,   158,   163,   204,
     204,   160,    91,   161,    91,     9,    27,    29,    30,    37,
      39,    48,    50,    72,    76,    92,    96,    97,   116,   117,
     132,   134,   186,   187,   194,   240,   242,   243,   244,   245,
     246,   249,   250,   251,   252,   254,   261,   265,   266,   280,
     281,    29,   241,   243,   245,   247,   251,   253,   254,   281,
     210,     9,   240,    37,   161,   240,   213,    29,    97,   116,
     117,   125,   132,   134,   191,   192,   193,   160,    29,    30,
      90,    90,   191,    29,   191,   179,   179,   191,   191,   197,
      29,   197,   201,   202,    92,   186,   195,   196,    91,    17,
      88,    92,    94,    96,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   241,   186,   207,   160,    29,    90,   160,
     235,   238,   238,   238,    90,    93,    91,   240,    90,    91,
      37,    17,   174,   235,     3,     8,    15,    19,    21,    26,
      36,    45,    46,    49,    61,    62,    65,    68,    69,    80,
      82,    83,    85,   162,   163,   231,   232,   233,   234,    93,
     162,   163,    40,   235,    88,    17,    92,    94,   264,   235,
      94,   240,    29,    33,   161,   186,   188,   240,    92,   187,
     187,   187,   187,   187,    14,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    92,     9,    17,    52,
      53,    54,    55,    56,    71,    81,    92,   206,   209,   214,
     215,   216,   218,   219,   267,   268,   269,   271,   272,   273,
     274,   275,   276,   277,   278,   279,     4,    20,    60,    66,
     112,     4,    66,   166,    12,   108,   193,   192,   193,   192,
     193,   192,   192,    40,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    99,   173,   173,    73,    92,
      77,    18,    23,    13,    89,    13,    90,    93,    93,    91,
      14,    95,    89,   179,   160,   191,   198,   199,   197,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   108,    12,
     235,   235,   240,   235,    90,    72,   239,   245,   248,   281,
     236,    91,   240,   166,    88,    88,    91,    91,    91,    88,
      88,   152,    29,    90,   160,    29,    67,     9,    17,   262,
     263,   276,   277,    40,   186,    93,    89,    93,    29,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   189,   190,    81,   215,   216,    29,    53,    54,
     275,   161,    91,   219,    17,   275,   272,   272,   278,    40,
      94,    40,     9,    17,    71,    81,   206,   209,   215,   216,
     255,   256,   257,   258,   259,   260,   268,   270,   275,   277,
     284,   285,    40,    94,    40,    32,    79,    67,   186,   180,
     182,   183,   184,   185,   186,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   173,   198,   191,
      41,   171,   172,   179,   173,   197,   173,   186,   201,   186,
     195,    93,    89,    95,   186,    67,    90,    90,    91,    91,
     240,   108,     4,   162,   234,    91,   162,   233,   240,    93,
      95,    17,   262,    39,    95,   188,    93,    89,   275,    94,
     220,    93,   275,   240,    29,   186,   245,   282,   283,   240,
      42,   215,   216,   217,    53,   284,    17,   256,   258,   256,
     260,     7,   286,   240,   282,   241,   158,    17,    16,    44,
     181,    91,    90,    89,    14,    74,    16,    93,    29,    16,
      17,    91,    17,   198,    12,   240,   240,   162,   162,    91,
     186,    40,    91,    91,    91,    40,    17,   264,   189,   161,
     228,   229,    90,   222,    17,   267,    14,    95,    89,    29,
      29,   240,   287,    95,    17,    35,   155,   174,   179,   182,
     173,   184,   186,   191,   173,    90,   179,   171,    67,    91,
      91,    91,    91,   162,   245,    39,    17,   262,    90,    95,
      91,   240,    33,   221,    17,   186,    40,   282,   235,    90,
      40,    40,    88,   156,   157,   206,   212,    17,    88,    13,
     245,    17,   162,   162,    91,    17,   239,   228,   194,    59,
     223,   240,    90,   240,   197,   288,   289,   241,   179,   156,
      88,   173,    13,    91,    91,    29,    87,   224,   240,    90,
      91,    22,   173,    29,    70,   225,    91,    92,   288,   156,
      29,    11,   226,   234,   284,   179,   194,    91,    91,    93,
      11,   227,    91
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
     173,   173,   174,   175,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   178,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   182,   183,   184,
     184,   185,   185,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   192,   192,   192,   192,   192,   193,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   201,   201,   202,   203,   204,   204,   204,
     204,   205,   205,   206,   207,   207,   208,   208,   208,   208,
     208,   208,   209,   210,   210,   211,   211,   211,   211,   212,
     213,   213,   214,   214,   214,   214,   215,   215,   216,   216,
     217,   217,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   230,   230,   230,   230,   230,   230,
     230,   230,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   234,   234,   235,   235,   235,   236,   236,
     237,   237,   237,   237,   238,   238,   238,   239,   239,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   241,   241,   241,   241,   241,   241,   242,   242,
     242,   242,   243,   244,   245,   245,   245,   246,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   254,   255,   255,
     255,   256,   256,   257,   257,   257,   257,   257,   257,   257,
     258,   258,   259,   259,   259,   259,   259,   260,   261,   261,
     261,   261,   261,   261,   262,   262,   263,   263,   264,   265,
     265,   266,   266,   266,   266,   266,   266,   267,   267,   267,
     268,   268,   269,   269,   269,   270,   270,   271,   271,   271,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   274,
     274,   275,   275,   276,   277,   278,   278,   279,   279,   279,
     279,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     285,   286,   287,   287,   288,   288,   288,   289
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
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     3,     1,     1,     0,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     2,     1,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       4,     3,     2,     4,     1,     1,     1,     1,     3,     1,
       1,     0,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     0,     3,     1,     3,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     0,     3,     3,     4,     5,     5,
       6,     7,     2,     0,     3,     3,     4,     3,     3,     2,
       0,     3,     3,     5,     4,     5,     6,     8,     4,     6,
       6,     8,    11,     1,     2,     0,     3,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     1,     3,     3,     6,     8,     8,    10,     9,    11,
       9,    11,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     2,     3,     1,     3,
       2,     2,     2,     1,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       2,     4,     4,     4,     1,     3,     1,     7,     4,     7,
       4,     3,     3,     2,     4,     4,     4,     3,     2,     1,
       1,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     2,     1,     4,     3,
       7,     6,     5,     2,     2,     1,     1,     1,     3,     1,
       1,     3,     6,     5,     4,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       3,     2,     3,     1,     1,     1,     2,     1,     1,     2,
       2,     4,     0,     1,     1,     3,     1,     3,     2,     1,
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
        { (yyval.n_stmt) = new inherited_node((yyvsp[0].tok), NULL, NULL, NULL, NULL); }
    break;

  case 56: /* inherited: INHERITED IDENT  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-1].tok), (yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 57: /* inherited: INHERITED IDENT '(' act_param_list ')'  */
        { (yyval.n_stmt) = new inherited_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
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

  case 92: /* compoundst: BEGIN sequence END  */
                               { (yyval.n_comp) = new compound_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 93: /* assemblerst: ASM asm_text END  */
                              { (yyval.n_basm) = new asm_block_node((yyvsp[-2].tok), (yyvsp[-1].n_asm), (yyvsp[0].tok)); }
    break;

  case 106: /* asm_line: asm_kwd  */
                  { (yyval.n_asm) = new asm_line_node((yyvsp[0].tok), NULL); }
    break;

  case 110: /* sequence: statement ';' sequence  */
                                             { (yyvsp[-2].n_stmt)->next = (yyvsp[0].n_stmt); (yyval.n_stmt) = (yyvsp[-2].n_stmt); }
    break;

  case 112: /* case_list: case_items otherwise sequence  */
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

  case 115: /* case_items: %empty  */
            { (yyval.n_case) = NULL; }
    break;

  case 117: /* case_items: case_item ';' case_items  */
                               { (yyvsp[-2].n_case)->next = (yyvsp[0].n_case); (yyval.n_case) = (yyvsp[-2].n_case); }
    break;

  case 118: /* case_item: case_elem_list ':' statement  */
                                        { (yyval.n_case) = new case_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_stmt)); }
    break;

  case 120: /* case_elem_list: case_elem ',' case_elem_list  */
                                   { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 121: /* case_elem: const_expr  */
                      { (yyval.n_expr) = (yyvsp[0].n_expr); }
    break;

  case 122: /* case_elem: const_expr DOTS const_expr  */
                                 { (yyval.n_expr) = new case_range_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 124: /* const_expr: const_expr PLUS const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 125: /* const_expr: const_expr MINUS const_expr  */
                                  { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 126: /* const_expr: const_expr MOD const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 127: /* const_expr: const_expr MUL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 128: /* const_expr: const_expr DIV const_expr  */
                                { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 129: /* const_expr: const_expr DIVR const_expr  */
                                 { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 130: /* const_expr: const_expr AND const_expr  */
                                { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 131: /* const_expr: const_expr BINAND const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 132: /* const_expr: const_expr SHL const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 133: /* const_expr: const_expr SHR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 134: /* const_expr: const_expr OR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 135: /* const_expr: const_expr BINOR const_expr  */
                                   { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 136: /* const_expr: const_expr XOR const_expr  */
                                { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 137: /* const_expr: const_expr GT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 138: /* const_expr: const_expr LT const_expr  */
                               { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 139: /* const_expr: const_expr LE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 140: /* const_expr: const_expr GE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 141: /* const_expr: const_expr NE const_expr  */
                               { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 142: /* const_expr: const_expr IN const_expr  */
                               { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 143: /* const_expr: const_expr IS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 144: /* const_expr: const_expr AS const_expr  */
                               { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 145: /* const_expr: '(' const_expr_list ')'  */
                              { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 146: /* const_expr: const_simple_expr '(' const_act_param_list ')'  */
                                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 147: /* const_expr: '@' const_simple_expr  */
                            { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 149: /* const_simple_expr: PLUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 150: /* const_simple_expr: MINUS const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 151: /* const_simple_expr: NOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 152: /* const_simple_expr: BINNOT const_simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 154: /* const_expr_list: const_expr ',' const_expr_list  */
                                                             { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 156: /* const_act_param_list: const_act_param ',' const_act_param_list  */
                                               { (yyvsp[-2].n_expr)->next = (yyvsp[0].n_expr); (yyval.n_expr) = (yyvsp[-2].n_expr); }
    break;

  case 158: /* const_act_param: %empty  */
                              { (yyval.n_expr) = new skipped_node(curr_token->prev_relevant()); }
    break;

  case 160: /* expr: expr PLUS expr  */
                     { (yyval.n_expr) = new op_node(tn_add, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 161: /* expr: expr MINUS expr  */
                      { (yyval.n_expr) = new op_node(tn_sub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 162: /* expr: expr MOD expr  */
                    { (yyval.n_expr) = new op_node(tn_mod, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 163: /* expr: expr MUL expr  */
                    { (yyval.n_expr) = new op_node(tn_mul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 164: /* expr: expr DIV expr  */
                    { (yyval.n_expr) = new op_node(tn_div, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 165: /* expr: expr DIVR expr  */
                     { (yyval.n_expr) = new op_node(tn_divr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 166: /* expr: primary LET expr  */
                       { (yyval.n_expr) = new op_node(tn_let, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 167: /* expr: primary LETADD expr  */
                          { (yyval.n_expr) = new op_node(tn_letadd, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 168: /* expr: primary LETSUB expr  */
                          { (yyval.n_expr) = new op_node(tn_letsub, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 169: /* expr: primary LETDIV expr  */
                          { (yyval.n_expr) = new op_node(tn_letdiv, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 170: /* expr: primary LETMUL expr  */
                          { (yyval.n_expr) = new op_node(tn_letmul, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 171: /* expr: primary LETSHL expr  */
                          { (yyval.n_expr) = new op_node(tn_letshl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 172: /* expr: primary LETSHR expr  */
                          { (yyval.n_expr) = new op_node(tn_letshr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 173: /* expr: primary LETAND expr  */
                          { (yyval.n_expr) = new op_node(tn_letand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 174: /* expr: primary LETOR expr  */
                          { (yyval.n_expr) = new op_node(tn_letor,  (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 175: /* expr: expr AND expr  */
                    { (yyval.n_expr) = new op_node(tn_and, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 176: /* expr: expr BINAND expr  */
                       { (yyval.n_expr) = new op_node(tn_binand, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 177: /* expr: expr SHL expr  */
                    { (yyval.n_expr) = new op_node(tn_shl, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 178: /* expr: expr SHR expr  */
                    { (yyval.n_expr) = new op_node(tn_shr, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 179: /* expr: expr OR expr  */
                    { (yyval.n_expr) = new op_node(tn_or, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 180: /* expr: expr BINOR expr  */
                       { (yyval.n_expr) = new op_node(tn_binor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 181: /* expr: expr XOR expr  */
                    { (yyval.n_expr) = new op_node(tn_xor, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 182: /* expr: expr GT expr  */
                   { (yyval.n_expr) = new op_node(tn_gt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 183: /* expr: expr LT expr  */
                   { (yyval.n_expr) = new op_node(tn_lt, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 184: /* expr: expr LE expr  */
                   { (yyval.n_expr) = new op_node(tn_le, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 185: /* expr: expr GE expr  */
                   { (yyval.n_expr) = new op_node(tn_ge, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 186: /* expr: expr EQ expr  */
                   { (yyval.n_expr) = new op_node(tn_eq, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 187: /* expr: expr NE expr  */
                   { (yyval.n_expr) = new op_node(tn_ne, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 188: /* expr: expr IN expr  */
                   { (yyval.n_expr) = new op_node(tn_in, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 189: /* expr: expr IS expr  */
                   { (yyval.n_expr) = new op_node(tn_is, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 190: /* expr: expr AS expr  */
                   { (yyval.n_expr) = new op_node(tn_as, (yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 192: /* simple_expr: PLUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_plus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 193: /* simple_expr: MINUS simple_expr  */
        { (yyval.n_expr) = new op_node(tn_minus, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 194: /* simple_expr: NOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_not, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 195: /* simple_expr: BINNOT simple_expr  */
        { (yyval.n_expr) = new op_node(tn_binnot, NULL, (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 196: /* simple_expr: '@' primary  */
                  { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 197: /* simple_expr: AND primary  */
                                { (yyval.n_expr) = new address_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 199: /* primary: '(' expr_list ')'  */
                        { (yyval.n_expr) = new expr_group_node((yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 200: /* primary: primary '(' act_param_list ')'  */
                                     { (yyval.n_expr) = new fcall_node((yyvsp[-3].n_expr), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 201: /* primary: primary '.' ident_ext  */
                            { (yyval.n_expr) = new access_expr_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 202: /* primary: primary '^'  */
                  { (yyval.n_expr) = new deref_expr_node((yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 203: /* primary: primary '[' expr_list ']'  */
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

  case 252: /* var_decl: ident_list ':' type  */
                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 253: /* var_decl: ident_list ':' type EQ const_expr  */
                                        { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 254: /* var_decl: ident_list ':' type DEPRECATED  */
                                     { (yyval.n_vdcl) = new var_decl_node((yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 255: /* var_decl: ident_list ':' type DEPRECATED SCONST  */
                                            { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 256: /* proc_fwd_decl: PROCEDURE ident_ext formal_params ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 257: /* proc_fwd_decl: FUNCTION ident_ext formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 258: /* proc_spec: PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 259: /* proc_spec: FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 260: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 261: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';' qualifiers ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 262: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 264: /* property_decl_list: property_decl property_decl_list  */
                                       { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 265: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 266: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 267: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 268: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 269: /* prop_type_def: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 270: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 271: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 272: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 273: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 274: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 275: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 276: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 277: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 278: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 279: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 280: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 282: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 283: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
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

  case 313: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 314: /* qualifiers: qualifiers ';' qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 315: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 316: /* formal_params: '(' ')'  */
              { (yyval.n_plist) = new param_list_node((yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 317: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 319: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 320: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 321: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 322: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 323: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 324: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 325: /* param_decl: ident_list ':' param_type EQ const_expr  */
                                              { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 326: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node((yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 348: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 349: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 350: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 351: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 352: /* string_type: STRING '[' const_expr ']'  */
                                       { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 353: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 354: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 355: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 356: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 357: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 358: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 359: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 360: /* conformant_array_type: packed ARRAY OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 361: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 362: /* range_type: const_expr DOTS const_expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 363: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 364: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 365: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 366: /* record_type: packed RECORD record_body END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 367: /* record_type: packed RECORD END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 368: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 371: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 374: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 375: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 381: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 382: /* record_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 383: /* record_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 384: /* record_method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 385: /* record_method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 386: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 387: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[0].n_fldls)); }
    break;

  case 388: /* interface_type: INTERFACE guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-3].tok), NULL, NULL, NULL, (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 389: /* interface_type: INTERFACE guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 390: /* interface_type: INTERFACE '(' IDENT ')' guid interface_components END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].n_decl), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 391: /* interface_type: INTERFACE '(' IDENT ')' guid END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), NULL, (yyvsp[0].tok)); }
    break;

  case 392: /* interface_type: INTERFACE '(' IDENT ')' END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 393: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 394: /* interface_components: interface_component interface_components  */
        { 
          // special case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
     	  *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 398: /* guid: '[' SCONST ']'  */
                     { (yyval.n_decl) = new guid_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 401: /* class_type: class_or_object object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 402: /* class_type: class_or_object '(' ident_list ')' object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 403: /* class_type: class_or_object '(' ident_list ')' END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 404: /* class_type: class_or_object '(' ident_list ')'  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 405: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 406: /* class_type: CLASS OF IDENT  */
        { (yyval.n_tpd) = new metaclass_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 407: /* object_body: field_decl_list object_components  */
        { 
          // rare case when two lists under one roof. 
          // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 409: /* object_body: field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, NULL, (yyvsp[0].n_vdcl)); }
    break;

  case 415: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 416: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 417: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 418: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 419: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 420: /* object_components: object_component object_components  */
       { 
         // special case when two lists under one roof. 
         // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
         decl_node** cpp;   
         for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	 *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
       }
    break;

  case 423: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 429: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 430: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 431: /* field_decl_list: var_decl ';'  */
                              { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 432: /* field_decl_list: var_decl ';' field_decl_list  */
                                   { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 434: /* object_properties: property_decl_list  */
        { (yyval.n_decl) = new property_decl_part_node((yyvsp[0].n_decl)); }
    break;

  case 436: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 437: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 438: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 439: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 440: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 441: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 442: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 445: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 446: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 447: /* index_spec: const_expr DOTS const_expr  */
                                 { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 448: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 449: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 451: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 452: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 453: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 455: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 456: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 457: /* variant: expr_list ':' '(' field_list ')'  */
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


