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
  YYSYMBOL_attr_content = 214,             /* attr_content  */
  YYSYMBOL_attr_decl = 215,                /* attr_decl  */
  YYSYMBOL_var_decl = 216,                 /* var_decl  */
  YYSYMBOL_proc_fwd_decl = 217,            /* proc_fwd_decl  */
  YYSYMBOL_proc_spec = 218,                /* proc_spec  */
  YYSYMBOL_operator_fwd_decl = 219,        /* operator_fwd_decl  */
  YYSYMBOL_proc_def = 220,                 /* proc_def  */
  YYSYMBOL_fun_qualifier = 221,            /* fun_qualifier  */
  YYSYMBOL_meth_qualifier = 222,           /* meth_qualifier  */
  YYSYMBOL_optional_semicolon = 223,       /* optional_semicolon  */
  YYSYMBOL_qualifier = 224,                /* qualifier  */
  YYSYMBOL_qualifiers = 225,               /* qualifiers  */
  YYSYMBOL_property_decl = 226,            /* property_decl  */
  YYSYMBOL_prop_array = 227,               /* prop_array  */
  YYSYMBOL_prop_index = 228,               /* prop_index  */
  YYSYMBOL_prop_type_def = 229,            /* prop_type_def  */
  YYSYMBOL_prop_read = 230,                /* prop_read  */
  YYSYMBOL_prop_write = 231,               /* prop_write  */
  YYSYMBOL_prop_stored = 232,              /* prop_stored  */
  YYSYMBOL_prop_default = 233,             /* prop_default  */
  YYSYMBOL_prop_default_directive = 234,   /* prop_default_directive  */
  YYSYMBOL_prop_param_list = 235,          /* prop_param_list  */
  YYSYMBOL_prop_param_decl = 236,          /* prop_param_decl  */
  YYSYMBOL_formal_params = 237,            /* formal_params  */
  YYSYMBOL_formal_param_list = 238,        /* formal_param_list  */
  YYSYMBOL_formal_param = 239,             /* formal_param  */
  YYSYMBOL_param_decl = 240,               /* param_decl  */
  YYSYMBOL_param_type = 241,               /* param_type  */
  YYSYMBOL_type = 242,                     /* type  */
  YYSYMBOL_const_type = 243,               /* const_type  */
  YYSYMBOL_fptr_type = 244,                /* fptr_type  */
  YYSYMBOL_string_type = 245,              /* string_type  */
  YYSYMBOL_simple_templ_type = 246,        /* simple_templ_type  */
  YYSYMBOL_simple_type = 247,              /* simple_type  */
  YYSYMBOL_array_type = 248,               /* array_type  */
  YYSYMBOL_const_array_type = 249,         /* const_array_type  */
  YYSYMBOL_conformant_array_type = 250,    /* conformant_array_type  */
  YYSYMBOL_enum_type = 251,                /* enum_type  */
  YYSYMBOL_range_type = 252,               /* range_type  */
  YYSYMBOL_pointer_type = 253,             /* pointer_type  */
  YYSYMBOL_set_type = 254,                 /* set_type  */
  YYSYMBOL_const_set_type = 255,           /* const_set_type  */
  YYSYMBOL_packed = 256,                   /* packed  */
  YYSYMBOL_record_type = 257,              /* record_type  */
  YYSYMBOL_record_body = 258,              /* record_body  */
  YYSYMBOL_record_components = 259,        /* record_components  */
  YYSYMBOL_record_component = 260,         /* record_component  */
  YYSYMBOL_record_field_list = 261,        /* record_field_list  */
  YYSYMBOL_record_methods = 262,           /* record_methods  */
  YYSYMBOL_record_method_decl = 263,       /* record_method_decl  */
  YYSYMBOL_interface_type = 264,           /* interface_type  */
  YYSYMBOL_interface_methods = 265,        /* interface_methods  */
  YYSYMBOL_interface_method_decl = 266,    /* interface_method_decl  */
  YYSYMBOL_class_or_object = 267,          /* class_or_object  */
  YYSYMBOL_class_type = 268,               /* class_type  */
  YYSYMBOL_object_body = 269,              /* object_body  */
  YYSYMBOL_record_access_spec_tok = 270,   /* record_access_spec_tok  */
  YYSYMBOL_class_access_spec_tok = 271,    /* class_access_spec_tok  */
  YYSYMBOL_record_access_spec_decl = 272,  /* record_access_spec_decl  */
  YYSYMBOL_class_access_spec_decl = 273,   /* class_access_spec_decl  */
  YYSYMBOL_object_components = 274,        /* object_components  */
  YYSYMBOL_object_component = 275,         /* object_component  */
  YYSYMBOL_field_decl_part = 276,          /* field_decl_part  */
  YYSYMBOL_field_decl_list = 277,          /* field_decl_list  */
  YYSYMBOL_object_methods = 278,           /* object_methods  */
  YYSYMBOL_method_decl_list = 279,         /* method_decl_list  */
  YYSYMBOL_method_decl = 280,              /* method_decl  */
  YYSYMBOL_field_list = 281,               /* field_list  */
  YYSYMBOL_fixed_part = 282,               /* fixed_part  */
  YYSYMBOL_variant_part = 283,             /* variant_part  */
  YYSYMBOL_selector = 284,                 /* selector  */
  YYSYMBOL_variant_list = 285,             /* variant_list  */
  YYSYMBOL_variant = 286,                  /* variant  */
  YYSYMBOL_file_type = 287,                /* file_type  */
  YYSYMBOL_indices = 288,                  /* indices  */
  YYSYMBOL_index_spec = 289                /* index_spec  */
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
#define YYLAST   2462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  473
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  927

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
       0,   411,   411,   411,   436,   436,   436,   438,   439,   442,
     442,   444,   445,   451,   453,   455,   457,   459,   462,   464,
     467,   468,   470,   470,   472,   474,   475,   479,   479,   479,
     479,   481,   482,   484,   486,   489,   490,   492,   492,   492,
     492,   493,   493,   493,   495,   497,   501,   502,   504,   504,
     504,   504,   505,   505,   505,   535,   537,   539,   543,   546,
     548,   551,   552,   554,   555,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     574,   576,   577,   580,   581,   583,   584,   585,   586,   587,
     588,   590,   592,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   604,   606,   607,   610,   610,
     617,   618,   630,   630,   632,   633,   634,   636,   638,   639,
     641,   642,   666,   667,   668,   669,   670,   671,   672,   674,
     675,   676,   677,   678,   679,   680,   682,   683,   684,   685,
     687,   688,   689,   690,   691,   692,   693,   695,   696,   698,
     700,   702,   705,   705,   707,   708,   710,   710,   712,   713,
     714,   715,   716,   717,   718,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   730,   731,   732,   733,   734,   735,
     736,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     748,   749,   751,   753,   755,   757,   758,   760,   761,   762,
     763,   764,   765,   766,   769,   770,   771,   772,   773,   774,
     775,   779,   780,   781,   783,   784,   786,   786,   788,   789,
     791,   791,   794,   796,   797,   799,   850,   853,   854,   855,
     856,   858,   858,   860,   862,   863,   865,   867,   869,   871,
     873,   875,   878,   881,   882,   885,   886,   887,   888,   890,
     894,   895,   896,   911,   912,   913,   914,   917,   920,   921,
     922,   923,   925,   926,   927,   928,   948,   950,   952,   954,
     958,   960,   962,   964,   969,   971,   975,   977,   979,   981,
     983,   985,   987,   989,  1002,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,  1004,  1004,  1004,  1004,
    1004,  1004,  1004,  1006,  1006,  1008,  1009,  1010,  1012,  1013,
    1018,  1020,  1022,  1024,  1031,  1032,  1034,  1035,  1037,  1039,
    1040,  1042,  1043,  1045,  1046,  1048,  1049,  1051,  1052,  1055,
    1056,  1058,  1061,  1062,  1063,  1065,  1066,  1068,  1069,  1070,
    1071,  1074,  1075,  1076,  1078,  1078,  1084,  1084,  1084,  1084,
    1084,  1084,  1084,  1085,  1085,  1085,  1085,  1085,  1085,  1087,
    1087,  1087,  1087,  1087,  1087,  1089,  1091,  1093,  1095,  1098,
    1100,  1102,  1103,  1104,  1105,  1110,  1112,  1115,  1122,  1124,
    1132,  1134,  1137,  1139,  1141,  1151,  1151,  1153,  1155,  1158,
    1165,  1166,  1168,  1169,  1178,  1179,  1181,  1183,  1185,  1187,
    1188,  1190,  1193,  1194,  1197,  1199,  1201,  1203,  1205,  1207,
    1216,  1218,  1224,  1226,  1246,  1247,  1250,  1252,  1254,  1256,
    1256,  1259,  1261,  1263,  1265,  1267,  1269,  1273,  1274,  1287,
    1287,  1289,  1289,  1289,  1291,  1292,  1294,  1295,  1296,  1298,
    1299,  1309,  1310,  1312,  1314,  1315,  1316,  1321,  1323,  1330,
    1332,  1337,  1338,  1341,  1343,  1345,  1347,  1349,  1353,  1355,
    1359,  1371,  1373,  1376,  1377,  1379,  1380,  1381,  1383,  1386,
    1394,  1395,  1398,  1399
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
  "var_decl_list", "attr_content", "attr_decl", "var_decl",
  "proc_fwd_decl", "proc_spec", "operator_fwd_decl", "proc_def",
  "fun_qualifier", "meth_qualifier", "optional_semicolon", "qualifier",
  "qualifiers", "property_decl", "prop_array", "prop_index",
  "prop_type_def", "prop_read", "prop_write", "prop_stored",
  "prop_default", "prop_default_directive", "prop_param_list",
  "prop_param_decl", "formal_params", "formal_param_list", "formal_param",
  "param_decl", "param_type", "type", "const_type", "fptr_type",
  "string_type", "simple_templ_type", "simple_type", "array_type",
  "const_array_type", "conformant_array_type", "enum_type", "range_type",
  "pointer_type", "set_type", "const_set_type", "packed", "record_type",
  "record_body", "record_components", "record_component",
  "record_field_list", "record_methods", "record_method_decl",
  "interface_type", "interface_methods", "interface_method_decl",
  "class_or_object", "class_type", "object_body", "record_access_spec_tok",
  "class_access_spec_tok", "record_access_spec_decl",
  "class_access_spec_decl", "object_components", "object_component",
  "field_decl_part", "field_decl_list", "object_methods",
  "method_decl_list", "method_decl", "field_list", "fixed_part",
  "variant_part", "selector", "variant_list", "variant", "file_type",
  "indices", "index_spec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-830)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-372)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -830,    72,  1716,  -830,   535,   342,  -830,   397,   460,    68,
     463,    60,  -830,    94,   109,   461,   278,  -830,  -830,  -830,
    -830,   -36,    75,  2053,  -830,  -830,  -830,   502,  -830,  -830,
    -830,   166,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  -830,  -830,  -830,   535,    96,   142,
     190,   196,   117,  -830,  -830,  -830,   186,   502,   460,   502,
     271,  -830,     0,   460,  -830,  -830,  -830,  -830,   176,  -830,
    -830,   182,   229,   255,   272,   186,   273,   244,  -830,   285,
     270,   290,  -830,   302,   310,  -830,   502,   337,   360,  -830,
    -830,   365,  -830,  1798,  -830,  -830,   160,  -830,   381,   502,
     502,  -830,  -830,   394,   261,   395,   502,   414,   398,   186,
     406,   186,   409,  2053,  -830,  -830,   502,   502,    68,    68,
    -830,   502,   411,   502,   420,   755,    45,    94,  1090,   481,
     502,  1090,   429,   461,  1430,  -830,  1430,   502,   259,   442,
     444,  1430,  -830,   508,  1430,  -830,  1798,  -830,  1798,  1430,
    1430,  1496,  1549,  -830,  -830,  -830,   451,  -830,   527,   931,
    -830,  -830,    45,  1549,   502,   186,   186,   502,   531,   466,
     502,   186,   502,   502,   502,  -830,   473,   475,   478,  -830,
    1090,   480,   490,   534,   175,  -830,   186,   186,  -830,  -830,
     186,  1722,  2127,   493,  1731,   121,   186,  1241,  -830,   384,
    -830,  -830,   186,   494,  1090,  1502,  1090,  1083,  1083,  1083,
    1083,  1083,  1276,   499,  -830,  -830,  -830,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  -830,    76,  -830,  -830,  1892,  -830,
    -830,   322,   482,  -830,  -830,  -830,  -830,  -830,    49,  -830,
    -830,   552,  -830,   460,  -830,    10,  1090,  -830,  -830,   806,
    1430,  1430,   806,  1430,  1430,  2312,  -830,   952,   506,   511,
    1591,   507,  -830,  -830,  1798,  1798,  2150,   509,  2312,   532,
     296,  1160,  2214,   595,   520,   518,   529,   540,  1562,  1316,
     542,   551,  1798,  -830,   502,  1430,  1430,  -830,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1430,  1430,   538,   842,  -830,
     553,   556,   186,   186,  1090,   186,   558,  -830,  -830,  -830,
     185,  -830,   434,   562,  1090,  2172,   460,   567,   569,   570,
     568,   572,   574,    75,  -830,  -830,   594,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  -830,  -830,  -830,   575,  -830,   580,
      23,   641,   581,   502,   642,   622,  -830,   648,   649,   107,
    -830,  -830,  -830,   662,    78,   643,  1549,  -830,   450,   352,
     588,  2255,   589,  -830,   655,  -830,  -830,  -830,  -830,  -830,
    1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,
    1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,  1549,
    1549,  1549,  1549,   -10,   645,  1841,   646,   222,  -830,  -830,
    -830,  -830,  -830,   405,   461,   502,  -830,  -830,  -830,   390,
    -830,  -830,  -830,   672,  -830,  -830,   461,  -830,  1979,  -830,
    1979,  -830,  -830,   147,  -830,   597,   652,    22,   627,  1549,
      31,   457,  -830,   457,  -830,   457,  -830,  -830,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  1430,  -830,
    1430,  1549,  1430,  -830,  -830,  1798,  1430,  1430,   658,  1798,
    1798,  1430,  1798,  1549,  -830,  -830,   655,  1549,  -830,  1549,
    -830,  -830,   608,   607,  2312,  2312,  2312,  2312,  2312,  2312,
    2312,  2312,  2312,  1549,   636,  1090,  -830,  2127,   614,   615,
     618,   621,  1090,  -830,   598,  -830,  -830,   703,  -830,  1722,
    2127,   625,   634,  -830,  -830,  1090,  2172,  1731,  -830,  -830,
    2172,  2127,  -830,  -830,  -830,  -830,  1090,  -830,   624,   689,
     629,   628,   675,   695,  -830,  -830,   691,  2290,  -830,  1549,
    -830,   520,  2333,   856,   856,   856,   856,   856,   856,   856,
     492,   492,   492,   492,   492,  -830,  -830,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  2333,   638,   650,  1090,  1508,  1090,
    1122,   179,  -830,   687,    81,  -830,  -830,  -830,  -830,  -830,
    -830,   724,  -830,  2057,  2057,  -830,   161,  -830,    81,  -830,
     735,  -830,  1090,   461,  -830,  -830,  -830,  -830,  -830,   654,
    -830,  -830,  -830,  -830,    79,  -830,  1508,    45,  2053,  -830,
    -830,  2333,   682,  1549,  1291,  1291,  1291,  1291,  1291,  1291,
    1291,  1291,   889,   889,   889,   889,   889,  -830,  -830,  -830,
    -830,  -830,  -830,  -830,  -830,  -830,  2312,  2312,  2312,  2312,
    2312,  2312,  2312,  2312,  2312,  -830,   734,    42,   663,   669,
     673,  1357,  2173,   747,   676,  2312,   742,   449,   683,   758,
    -830,  -830,  -830,  2333,  -830,  2333,  -830,  -830,  -830,   880,
    -830,   556,   686,  1090,  1090,  1731,  1731,   688,  1549,   740,
     690,   696,  2172,   698,   699,  -830,   753,  -830,   629,   502,
     708,    85,   770,   629,  -830,  -830,  -830,  -830,  1549,  -830,
     362,  1392,  -830,   705,   712,  -830,   203,  -830,   762,   775,
      81,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,   211,
    -830,  -830,  -830,  -830,  -830,  1943,   711,  -830,   242,  -830,
    2333,  -830,  -830,  -830,  1798,  1549,  1798,  1549,  1549,  1430,
    1798,  -830,   717,  1798,  -830,   658,  -830,   741,  2127,  2172,
     718,   719,   720,   725,  1731,  2333,    35,  -830,  2172,  2172,
    -830,   776,   708,   727,   723,   728,  1090,   787,  -830,   804,
     629,   708,  -830,  1549,   784,  1508,  1090,  1430,   186,  -830,
    -830,   808,   788,   744,    27,   813,   745,  -830,  -830,  -830,
    -830,  2333,  1199,  -830,    71,   817,  -830,  -830,   746,  1731,
    1731,  -830,  -830,   752,  -830,  -830,  -830,   787,   185,  -830,
     502,  -830,   826,   786,  -830,   708,   787,  2333,  1090,  -830,
    -830,   756,  -830,   759,   763,  -830,    45,  -830,  1798,    27,
    -830,  -830,   769,  -830,  1798,   845,  -830,  2172,   771,   774,
    -830,   786,  -830,  -830,  -830,   831,   779,   787,   786,  -830,
     777,  1430,  1090,  -830,   839,  -830,  -830,  -830,  1798,  -830,
    -830,   779,  -830,   838,   798,   786,   779,    81,  -830,   783,
      27,  -830,   798,  -830,   841,   864,   779,   798,   792,  1994,
    2127,  1798,   864,  -830,   826,   789,   798,   864,  -830,   790,
    -830,   797,  -830,   866,   864,   803,  2042,   866,   805,  -830,
     811,   866,  -830,  -830,   866,  -830,  -830
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    35,     1,     0,     0,   231,     0,    46,     0,
       0,     0,   232,   243,     0,     0,     0,     3,     4,     5,
       6,     0,    11,    35,    43,    34,    37,   234,    38,    39,
      40,     0,    42,    41,    93,    95,   102,    97,   100,   101,
      98,    99,    96,   103,   104,    94,   105,   106,     0,     0,
       0,     0,    27,    28,    29,    30,   332,     0,    46,     0,
       0,    54,     0,    46,    48,    49,    50,    51,     0,    53,
      52,   229,   227,     0,    27,   332,    25,     0,   242,     0,
       0,     0,    27,    32,     0,   249,     0,   250,   255,   253,
     254,     0,     7,    65,    33,    36,     0,   233,     0,     0,
       0,   107,    92,     0,   332,     0,     0,     0,     0,   332,
       0,   332,     0,    35,    45,    47,     0,     0,     0,     0,
     226,     0,   303,     0,     0,   385,   385,   243,   385,     0,
       0,   385,     0,   251,   221,   257,     0,     0,     0,   209,
     205,     0,   210,    55,     0,   206,    65,   207,    65,     0,
       0,     0,   211,   203,    89,    90,   108,    88,     0,    84,
     197,   204,   385,     0,   234,   332,   332,     0,     0,     0,
       0,   332,     0,     0,     0,   333,   343,     0,   335,   340,
     385,     0,   303,     0,     0,    24,   332,   332,   230,   228,
     332,   304,     0,     0,    35,   420,   332,   371,   205,     0,
     419,   386,   332,   373,   385,     0,   385,     0,     0,     0,
       0,     0,     0,   122,   147,   245,   357,   356,   358,   346,
     347,   354,   355,   353,   351,     0,   348,   350,     0,   349,
     352,   371,     0,   363,   359,   360,   364,   362,     0,   361,
     244,   420,   248,    46,    31,   258,   385,   252,   209,     0,
       0,     0,     0,     0,     0,   220,   158,   190,     0,   218,
       0,     0,    76,    75,    65,    65,     0,    56,    83,     0,
       0,     0,   216,     0,   209,     0,     0,   223,     0,   214,
       0,   212,    65,    91,     0,   221,     0,   201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   235,
       0,   303,   332,   332,   385,   332,     0,   338,   339,   337,
     385,   334,     0,   303,   385,   270,    46,     0,     0,     0,
     303,     0,     0,     0,   297,   288,     0,   299,   293,   302,
     284,   294,   285,   301,   287,   286,   296,   290,   300,   289,
     295,   292,   298,   291,   305,   306,   308,   303,    26,     0,
       9,     0,     0,     0,     0,     0,   411,     0,     0,     0,
     416,   417,   418,     0,   414,   367,     0,   246,   209,   210,
       0,   152,     0,   382,     0,   146,   148,   149,   150,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,     0,     0,   425,   429,
     432,   430,   433,     0,     0,     0,   445,   446,   449,     0,
     453,   454,   457,     0,   431,   436,   441,   427,   439,   443,
       0,   444,   450,   451,   370,     0,     0,     0,   260,     0,
     262,   195,   191,   190,   192,   196,   193,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     221,   114,     0,    87,    86,    65,   221,     0,    63,    65,
      65,     0,    65,     0,   198,   222,     0,     0,   208,   211,
     109,   200,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,   237,   385,   304,     0,     0,     0,
       0,     0,   385,   373,   341,   344,   345,     0,   336,   304,
       0,   303,     0,    15,    16,   385,   272,    35,   276,   307,
     266,     0,     8,    10,    12,   426,   385,   372,     0,     0,
     314,     0,     0,     0,   410,   415,     0,     0,   380,     0,
     144,     0,   381,   140,   137,   138,   136,   139,   141,   142,
     123,   124,   133,   135,   134,   125,   127,   128,   126,   129,
     132,   131,   130,   143,   156,     0,   154,   385,     0,   385,
     385,     0,   388,     0,     0,   399,   400,   461,   404,   405,
     409,     0,   390,   392,   391,   398,   402,   434,   394,   401,
     459,   460,   385,     0,   455,   456,   437,   438,   447,     0,
     421,   442,   440,   428,     0,   452,     0,   385,    35,    44,
     261,   259,   264,     0,   185,   186,   182,   183,   181,   184,
     187,   188,   159,   160,   178,   180,   179,   161,   163,   164,
     162,   174,   177,   176,   175,   189,   165,   166,   167,   168,
     169,   172,   173,   170,   171,   219,     0,   110,   115,     0,
     118,   120,     0,    78,     0,    82,     0,     0,    61,     0,
      81,   217,    85,   225,   224,   215,   213,   199,   202,   239,
     238,   303,   303,   385,   385,    35,    35,     0,     0,     0,
       0,   303,   271,   303,     0,   309,   365,   374,   314,     0,
       0,     0,     0,   314,   368,   369,   153,   145,   157,   376,
     209,     0,   472,     0,   470,   469,   209,   464,     0,     0,
       0,   406,   407,   408,   435,   396,   387,   393,   389,     0,
     403,   395,   458,   383,   448,   424,     0,   384,     0,   265,
     263,    77,   113,   112,    65,   114,    65,     0,     0,     0,
      65,    57,     0,    65,    59,    63,    58,   240,     0,   268,
       0,     0,     0,     0,    35,   342,     0,   277,   267,   273,
     278,     0,     0,     0,     0,   329,   385,   316,   413,     0,
     314,     0,   155,     0,     0,     0,   385,     0,   332,   397,
     423,     0,     0,     0,    20,     0,     0,   111,   116,   117,
     119,   121,     0,    79,     0,     0,    62,   241,   303,    35,
      35,   282,   280,     0,   379,   378,   366,   316,   385,   315,
       0,   318,     0,   319,   412,     0,   316,   473,   385,   471,
     463,     0,   462,   465,     0,   422,   385,    13,    65,    20,
      22,    23,     0,    14,    65,     0,    60,   269,     0,     0,
     279,   319,   331,   330,   317,     0,   321,   316,   319,   375,
       0,   466,   385,   377,    18,    21,    17,    80,    65,   281,
     283,   321,   320,     0,   323,   319,   321,     0,   467,   303,
      20,    64,   323,   322,     0,   325,   321,   323,     0,   304,
       0,    65,   325,   324,     0,     0,   323,   325,   468,   303,
      19,     0,   326,   327,   325,     0,   304,   327,     0,   310,
       0,   327,   311,   328,   327,   312,   313
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -830,  -813,
    -830,   251,  -830,   180,   -47,  -170,     8,  -830,    32,   -35,
    -830,  -830,  -830,  -830,   130,  -830,  -198,    20,  -830,  -830,
    -830,   852,  -128,  -830,  -830,   148,  -830,   156,  -830,   548,
     368,   356,   198,  -830,   616,   136,   -87,   -60,   418,  -830,
    -117,  -258,  -830,  -830,   423,  -830,    61,   361,  -830,    -8,
     757,  -830,    41,   795,  -830,    -7,   -11,  -830,    -1,  -830,
     152,    84,  -830,  -830,  -830,  -830,  -119,   382,  -504,  -188,
    -638,  -627,  -480,  -497,  -634,  -607,  -829,  -486,    95,  -830,
      80,   674,  -830,   235,    98,    52,  -153,  -830,  -124,     6,
     -80,  -830,  -830,  -830,  -830,  -830,  -121,  -830,  -830,  -114,
    -118,  -830,   -99,  -830,   319,   415,  -830,  -830,  -349,  -830,
    -830,  -830,   243,  -380,  -830,  -830,  -830,   -55,  -830,  -830,
    -379,  -830,   587,  -830,  -577,  -830,   412,  -830,   153,  -830,
    -830,  -610,  -830
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    17,    18,   544,    19,    20,   805,   848,
     849,   184,   124,    83,    84,    21,   323,    23,    24,    62,
      63,   153,   154,   155,   677,   678,   156,   157,    25,    46,
      47,    48,   158,   666,   754,   667,   668,   669,   670,   212,
     213,   372,   585,   586,   272,   256,   257,   160,   280,   281,
     841,   258,   259,   161,   276,   277,    26,    73,    27,    28,
      97,    98,    29,    78,    79,    30,   418,    91,    31,    87,
      32,    70,   733,    33,   344,   345,   541,   346,   347,   422,
     710,   833,   787,   866,   884,   895,   905,   919,   784,   785,
     108,   177,   178,   179,   524,   215,   232,   216,   217,   218,
     219,   220,   235,   526,   221,   222,   223,   224,   237,   225,
     226,   601,   602,   603,   604,   605,   606,   227,   363,   364,
     228,   229,   423,   424,   425,   608,   426,   427,   428,   429,
     430,   431,   432,   433,   609,   610,   611,   728,   842,   843,
     230,   723,   724
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    67,   233,   192,    85,   236,   159,    68,   239,   297,
      22,   362,   238,   692,    86,   555,   746,   735,   269,    80,
     270,   322,   438,   110,   349,   607,   701,   502,   115,    93,
     587,    95,   113,   273,   275,   618,   875,     6,   233,   132,
      61,   236,    94,   632,   239,   824,   234,   621,   238,    66,
      65,    67,    92,   435,   628,    65,    67,    68,   752,   159,
     176,   159,    68,   192,   231,   214,   483,   484,   214,    64,
     782,   214,     3,   911,   231,   791,   193,   901,   915,   114,
     403,    93,   234,   244,   588,   920,   753,   355,   590,    76,
      61,    12,   214,   201,   355,    61,   404,    71,    72,    66,
     231,   629,   788,   214,    66,    57,    57,   523,    15,   405,
      82,   543,    57,   102,    53,   436,   552,   203,   439,    64,
     214,   185,   247,    77,    64,   176,   176,   176,    59,    59,
     357,   549,    86,    80,   116,    59,   405,   357,    81,   633,
      54,   206,   406,   523,   214,   214,   214,   214,   214,   214,
     214,   214,   835,   799,   500,   122,   624,   117,   370,   553,
      69,   351,   441,   443,   443,   445,   443,   443,    55,   503,
     739,   103,    16,    16,    57,    16,   362,   159,   159,    16,
     242,    93,   517,   245,   169,   839,   214,    56,    57,   181,
      75,   182,   317,    99,   530,   159,   527,    59,   359,   357,
     861,   517,   350,   116,   318,   106,    57,    96,   437,   868,
      69,    59,  -247,   357,   231,    69,   100,   600,   214,   104,
     416,   729,   665,   607,   607,   105,   117,   419,   674,    59,
     525,   549,   313,   201,   744,    65,    67,   109,    57,   111,
     885,    16,    68,  -371,   214,   300,   301,   892,    93,    57,
     162,   306,   897,   729,   214,    16,   367,   523,   373,   803,
     730,    59,   906,   549,   818,   176,   319,   320,   163,   417,
     321,   118,    59,    16,   549,    61,   352,   804,   107,   165,
     166,   532,   365,   361,    66,   902,   171,   673,   262,   263,
     907,   353,   680,   796,   682,   354,   186,   187,   440,   914,
     112,   190,   827,   613,    64,    16,   214,    88,    65,    67,
     898,   836,   421,   126,   488,    68,    16,   261,   119,   489,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,    94,    96,    89,   120,   302,    61,   168,
     305,   360,   125,   107,   126,   867,   520,    66,    90,   700,
     121,   679,   789,   359,   881,   123,   531,   704,   619,    49,
      94,   886,   132,   622,   681,   623,   127,    64,   128,   214,
     420,   129,   518,   519,    50,   521,   442,   444,   896,   446,
     447,   130,    51,   355,   597,    69,   909,   595,   159,   552,
     131,   356,   159,   159,   419,   159,    68,   307,   308,   309,
     353,    57,   530,    86,   354,   600,   600,   116,   600,    82,
     416,   214,   416,    53,   172,    86,    52,   359,   133,   359,
      53,   922,   359,   214,    59,   925,   357,   214,   926,   214,
     117,   -28,   553,    82,   172,   -28,   596,    53,   361,    54,
     353,  -371,   134,   214,   354,   214,    54,  -371,   616,   617,
     135,   173,   214,    82,   501,   763,   764,    53,    69,   417,
       6,   417,   164,    54,   747,   214,   358,    55,    16,   188,
     189,   173,   167,   170,    55,   114,   214,    57,   180,   599,
      82,   615,    74,    54,    53,   174,    53,    58,     9,   214,
     183,    55,   191,   233,   737,   738,   236,   175,   722,   239,
      59,   194,   421,   238,   421,   174,   360,   421,   243,   246,
      54,    55,    54,   362,    12,   772,   773,   214,   214,   214,
     214,    82,   264,   547,   265,    53,    13,   267,    60,   -27,
     493,    15,   282,   -27,   283,   284,   722,   234,    55,   285,
      55,   286,   214,   287,    16,    16,   304,   598,   809,   614,
     303,    54,   813,   310,    34,    35,   214,   691,   311,   312,
     314,   316,   768,   214,   697,   375,   376,   377,   378,   379,
     420,   315,   420,   597,   768,   420,   348,   703,   366,    55,
      68,   402,   351,    86,   434,   595,   595,   597,   706,   479,
     480,   486,   359,   359,   823,   359,   482,    86,   492,   487,
     493,   494,    86,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   495,    68,    36,    37,   807,    38,    39,    40,
      41,   496,    42,   214,   214,   815,   185,   498,   214,   719,
     499,   725,   727,   515,   596,   596,   513,   516,   522,   858,
     859,    43,    44,   529,    45,   533,   877,   534,   214,   536,
     535,   539,   783,   537,   743,   538,   540,   159,   542,   159,
     545,   546,   548,   159,   549,   732,   159,   550,   551,   554,
     891,   558,   560,   556,   561,   589,   612,   599,   599,   620,
     599,   626,   627,   873,   630,   214,   825,   214,   214,   676,
     279,   687,   688,   690,   693,   694,   698,   699,   615,   695,
     359,   298,   696,   629,   527,   722,   702,   707,   708,   597,
     874,   711,   233,   709,   713,   236,   214,   712,   239,    86,
     714,   717,   238,   214,   855,   214,   214,   416,    68,   718,
     734,   736,   590,   731,   419,   770,   771,   745,   525,   749,
     255,   751,   260,   371,   755,   598,   598,   266,   598,   756,
     268,   159,   757,   760,   195,   271,   234,   159,   806,   761,
     900,   762,   864,   910,   765,   766,   614,   769,   214,   774,
     776,   777,   196,   783,   197,   198,   417,   778,   142,   779,
     780,   159,   199,   781,   200,   361,   850,   851,   786,   790,
     794,   795,   797,   201,   798,   202,   802,   814,   817,   819,
     820,   821,   214,   145,   159,   826,   822,   828,   829,   830,
     832,   834,   147,   732,   838,   845,   371,   203,   846,   421,
     852,   204,   847,   853,   856,   248,   198,   857,   831,   142,
     143,   850,   851,   860,   912,   865,   870,   205,   840,   152,
     871,   206,   207,   872,   514,   248,   198,   876,   878,   142,
     882,   890,   879,   360,   145,   880,   883,   893,   894,   887,
     903,   208,   209,   147,   899,   904,   597,   918,   844,   748,
     913,   916,   850,   851,   145,   908,    86,   210,   917,   211,
     869,   731,   767,   147,   921,   816,   923,   420,   151,   101,
     152,   255,   924,   808,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   810,   557,   716,   792,   686,   374,   684,
     152,   299,   240,   705,   889,   863,   862,   741,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   528,   631,   801,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   284,
     625,   740,   742,   285,   888,   286,     0,   287,     0,   671,
     288,   289,   290,   291,   292,   293,   294,   295,   296,     0,
     284,   683,     0,     0,   285,   685,   286,   279,   287,     0,
       0,   470,   471,   472,   473,   474,   475,   476,   477,   478,
       0,   689,     0,     0,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,   255,     0,   672,   241,
       0,     0,   255,   675,     0,     0,     0,   371,     0,     0,
       0,     0,   248,   198,     0,     0,   142,   196,     0,   197,
     198,     0,     0,   142,     0,     0,     0,   199,     0,   200,
       0,   241,     0,     0,     0,     0,   721,     0,   201,     0,
     202,   145,     0,     0,     0,     0,     0,     0,   145,   196,
     147,   726,   198,     0,     0,   142,     0,   147,     0,   199,
       0,   200,   203,     0,     0,     0,     0,     0,     0,     0,
     201,     0,   202,   490,   721,   374,     0,   152,     0,     0,
     145,   750,   205,     0,   152,     0,   206,   207,     0,   147,
       0,     0,     0,     0,   203,     0,     0,     0,     0,   208,
     209,     0,     0,     0,     0,     0,   208,   209,     0,     0,
       0,     0,   854,     0,   205,   210,   152,   211,   206,   207,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   208,   209,
       0,     0,     0,     0,     0,     0,   775,     0,     0,     0,
       0,     0,     0,     0,   210,  -209,   211,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   584,     0,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     380,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   671,     0,   671,   811,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   353,
     497,     0,     0,   354,     0,     0,     0,     0,     0,     0,
       0,   837,     0,   721,     0,     0,     0,     0,     0,     0,
    -209,   126,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,   758,     0,     0,     0,   812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   793,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     0,     0,     0,     0,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
     198,     0,     0,   142,   143,     0,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
       0,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   151,     0,   152,   274,   198,   249,     0,   142,
     143,   368,   198,     0,     0,   369,     0,   720,   198,     0,
       0,   142,     0,     0,     0,     0,   250,   251,     0,     0,
       0,     0,     0,     0,   145,   252,     0,     0,     0,     0,
     145,    54,   253,   147,   254,     0,   145,     0,     0,   147,
       0,     0,     0,     0,     0,   147,     0,     0,   248,   198,
     523,     0,   142,     0,     0,     0,     0,     0,   151,    55,
     152,   274,   198,   249,   278,   142,   152,     0,     0,   207,
     278,     0,   152,     0,     0,   207,     0,   145,     0,     0,
       0,     0,   250,   251,     0,     0,   147,     0,   208,   209,
     145,   252,     0,     0,   208,   209,     0,     0,   253,   147,
     254,   481,     0,     0,   210,     0,   211,     0,     0,     0,
     210,   278,   211,   152,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,   278,     0,   152,     0,     0,   207,
       0,     0,     0,     0,     0,   208,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   208,   209,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   210,     0,   211,     0,     0,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     4,     0,     0,     0,     5,     6,     4,   -35,     0,
       0,     5,     6,     0,     0,     0,     4,     0,     0,     0,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     8,     9,     0,     0,     0,     7,    58,
       9,     0,     0,     0,     0,     0,    10,    11,    58,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
      12,    10,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,    13,     0,    14,    12,     0,    15,    13,     0,
      60,     0,     0,    15,    93,   136,     0,    13,     0,    60,
      16,     0,    15,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,   137,     0,    16,   138,   139,   140,   141,
       0,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   590,     0,
     591,     6,     0,     0,     0,   144,   145,     0,   592,     0,
       0,   146,     0,     0,     0,   147,     0,     0,    57,     0,
      82,     0,     0,   148,    53,     0,     0,     0,     0,     0,
       0,     0,   149,     0,   150,     0,     0,     0,     0,     0,
     151,    59,   152,   357,   409,     0,   411,     0,     0,     0,
      54,   407,     6,     0,     0,    12,     0,     0,     0,   408,
       0,     0,   593,     0,     0,     0,     0,    13,     0,    57,
       0,    82,   594,     0,     0,    53,     0,     0,    55,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    59,     0,   357,   409,   410,   411,   412,     0,
       0,    54,   407,     6,     0,     0,    12,     0,     0,     0,
     800,     0,     0,   413,     0,     0,     0,     0,    13,     0,
      57,     0,    82,   414,     0,     0,    53,     0,     0,    55,
       0,     0,     0,     0,   415,     0,    16,     0,   407,     6,
       0,     0,     0,    59,     0,   357,   409,   410,   411,   412,
       0,     0,    54,  -274,  -274,     0,    57,    12,     0,     0,
       0,  -274,     0,     0,   413,     0,     0,     0,     0,    13,
       0,  -274,     0,     0,   414,     0,     0,     0,     0,    59,
      55,   357,   409,   410,   411,   412,     0,    16,     0,     0,
       0,     0,     0,    12,  -274,     0,  -274,  -274,     0,  -274,
     413,  -275,  -275,     0,     0,    13,     0,     0,  -274,  -275,
     414,     0,     5,     6,     0,  -274,   591,     6,     0,  -275,
    -274,     0,     0,    16,     0,  -274,     0,     0,     0,     0,
       7,     0,     0,     0,    57,     0,     0,     0,  -274,     0,
      58,     9,  -275,     0,  -275,  -275,     0,  -275,     0,     0,
       0,     0,     0,    10,     0,     0,  -275,    59,     0,   357,
     409,     0,   411,  -275,     0,     0,     0,    12,  -275,     0,
       0,    12,     0,  -275,     0,     0,     0,     0,   593,    13,
     324,    60,     0,    13,    15,   325,  -275,     0,   594,   326,
       0,     0,   327,     0,     0,     0,   328,    16,   329,     0,
       0,    16,     0,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
       0,     0,   332,   333,     0,  -304,   334,     0,     0,     0,
    -304,     0,     0,     0,  -304,     0,     0,  -304,   335,   336,
       0,  -304,   337,  -304,     0,   338,   339,     0,  -304,     0,
       0,     0,     0,     0,     0,     0,     0,   340,  -304,   341,
     342,     0,   343,     0,     0,     0,     0,  -304,  -304,     0,
       0,  -304,     0,   485,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -304,  -304,     0,     0,  -304,     0,     0,
    -304,  -304,     0,     0,     0,     0,     0,   759,     0,     0,
       0,     0,  -304,     0,  -304,  -304,     0,  -304,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
       0,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   491,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   559,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   715,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401
};

static const yytype_int16 yycheck[] =
{
       8,     8,   126,   122,    15,   126,    93,     8,   126,   162,
       2,   199,   126,   517,    15,   364,   626,   594,   146,    13,
     148,   191,    12,    58,   194,   405,   530,   285,    63,     6,
      40,    23,    32,   150,   151,   414,   849,    10,   162,    86,
       8,   162,    22,    12,   162,    10,   126,   426,   162,     8,
      58,    58,    88,     4,    32,    63,    63,    58,    16,   146,
     107,   148,    63,   182,    29,   125,   264,   265,   128,     8,
     708,   131,     0,   902,    29,   713,   123,   890,   907,    79,
       4,     6,   162,   130,    94,   914,    44,     9,     7,    29,
      58,    64,   152,    48,     9,    63,    20,    29,    30,    58,
      29,    79,    17,   163,    63,    27,    27,    72,    81,    60,
      29,    88,    27,    17,    33,    66,     9,    72,   108,    58,
     180,   113,   133,    29,    63,   172,   173,   174,    50,    50,
      52,    52,   133,   127,    27,    50,    60,    52,    29,   108,
      59,    96,    66,    72,   204,   205,   206,   207,   208,   209,
     210,   211,   790,   730,   282,    75,     9,    50,   205,    52,
       8,    40,   249,   250,   251,   252,   253,   254,    87,   286,
       9,    29,    94,    94,    27,    94,   364,   264,   265,    94,
     128,     6,   301,   131,   104,   795,   246,     7,    27,   109,
      10,   111,    17,    27,   313,   282,   310,    50,   199,    52,
     827,   320,   194,    27,   184,    88,    27,    27,   243,   836,
      58,    50,    91,    52,    29,    63,    50,   405,   278,    29,
     228,    42,   480,   603,   604,    29,    50,   228,   486,    50,
     310,    52,   180,    48,   613,   243,   243,    57,    27,    59,
     867,    94,   243,    40,   304,   165,   166,   881,     6,    27,
      90,   171,   886,    42,   314,    94,   204,    72,   206,    17,
      81,    50,   896,    52,   768,   312,   186,   187,   108,   228,
     190,    89,    50,    94,    52,   243,   196,    35,    92,    99,
     100,   316,   202,   199,   243,   892,   106,   485,    29,    30,
     897,    88,   490,    90,   492,    92,   116,   117,   246,   906,
      29,   121,   782,    81,   243,    94,   366,    29,   316,   316,
     887,   791,   228,   110,    18,   316,    94,   137,    89,    23,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   323,   164,    67,    91,   167,   316,    88,
     170,   199,   108,    92,   110,   835,   304,   316,    80,   529,
      88,   489,   711,   364,   861,    92,   314,   537,   415,    27,
     350,   868,   419,   428,   491,   430,    91,   316,   108,   439,
     228,    91,   302,   303,    42,   305,   250,   251,   885,   253,
     254,    89,    50,     9,   405,   243,   900,   405,   485,     9,
      90,    17,   489,   490,   405,   492,   407,   172,   173,   174,
      88,    27,   531,   414,    92,   603,   604,    27,   606,    29,
     428,   481,   430,    33,    10,   426,    29,   428,    91,   430,
      33,   917,   433,   493,    50,   921,    52,   497,   924,   499,
      50,    89,    52,    29,    10,    93,   405,    33,   364,    59,
      88,    89,    92,   513,    92,   515,    59,    95,    53,    54,
      95,    47,   522,    29,   284,    16,    17,    33,   316,   428,
      10,   430,    91,    59,   627,   535,    92,    87,    94,   118,
     119,    47,    88,    88,    87,    79,   546,    27,    90,   405,
      29,   407,    29,    59,    33,    81,    33,    37,    38,   559,
      91,    87,    91,   627,   603,   604,   627,    93,   588,   627,
      50,    91,   428,   627,   430,    81,   364,   433,    37,    90,
      59,    87,    59,   711,    64,   695,   696,   587,   588,   589,
     590,    29,    90,   353,    90,    33,    76,    29,    78,    89,
      90,    81,    91,    93,    17,    88,   626,   627,    87,    92,
      87,    94,   612,    96,    94,    94,    90,   405,   756,   407,
      29,    59,   760,    90,    29,    30,   626,   515,    93,    91,
      90,    37,   691,   633,   522,   207,   208,   209,   210,   211,
     428,    91,   430,   594,   703,   433,    93,   535,    94,    87,
     591,    92,    40,   594,   112,   603,   604,   608,   546,    93,
      89,    92,   603,   604,   774,   606,    99,   608,    13,    77,
      90,    93,   613,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    93,   624,    89,    90,   754,    92,    93,    94,
      95,    91,    97,   693,   694,   763,   628,    95,   698,   587,
      89,   589,   590,    90,   603,   604,   108,    91,    90,   819,
     820,   116,   117,    91,   119,    88,   854,    88,   718,    91,
      90,    67,   709,    91,   612,    91,    91,   754,    88,   756,
      29,    90,    30,   760,    52,   591,   763,    29,    29,    17,
     878,    93,    93,    40,    29,    40,    40,   603,   604,    17,
     606,    94,    40,   846,    67,   755,   776,   757,   758,    41,
     152,    93,    95,    67,    90,    90,   108,     4,   624,    91,
     711,   163,    91,    79,   828,   795,    91,    93,    29,   730,
     848,    93,   846,    94,    29,   846,   786,    52,   846,   730,
      39,    93,   846,   793,   814,   795,   796,   745,   739,    89,
      53,    17,     7,   591,   745,   693,   694,    93,   828,    67,
     134,    17,   136,   205,    91,   603,   604,   141,   606,    90,
     144,   848,    89,    16,     9,   149,   846,   854,   748,    93,
     889,    29,   832,   901,    91,    17,   624,    91,   838,    91,
      40,    91,    27,   830,    29,    30,   745,    91,    33,    91,
      91,   878,    37,    40,    39,   711,   804,   804,    90,    29,
      95,    89,    40,    48,    29,    50,    95,    90,    67,    91,
      91,    91,   872,    58,   901,    39,    91,    90,    95,    91,
      33,    17,    67,   739,    40,    17,   278,    72,    40,   745,
      17,    76,    88,    88,    17,    29,    30,    91,   786,    33,
      34,   849,   849,    91,   904,    59,    90,    92,   796,    94,
      91,    96,    97,    90,    12,    29,    30,    88,    13,    33,
      29,    22,    91,   711,    58,    91,    87,    29,    70,    92,
      29,   116,   117,    67,    91,    11,   887,    11,   798,   628,
      91,    91,   890,   890,    58,    93,   887,   132,    91,   134,
     838,   739,    12,    67,    91,   765,    91,   745,    92,    47,
      94,   285,    91,   755,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   757,   366,   559,   718,   499,    92,   496,
      94,   164,   127,   541,   872,   830,   828,   608,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   312,   439,   745,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    88,
     433,   606,   610,    92,   871,    94,    -1,    96,    -1,   481,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      88,   493,    -1,    -1,    92,   497,    94,   499,    96,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,   513,    -1,    -1,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,    -1,   480,    -1,   482,     9,
      -1,    -1,   486,   487,    -1,    -1,    -1,   559,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    27,    -1,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    39,
      -1,     9,    -1,    -1,    -1,    -1,   588,    -1,    48,    -1,
      50,    58,    -1,    -1,    -1,    -1,    -1,    -1,    58,    27,
      67,    29,    30,    -1,    -1,    33,    -1,    67,    -1,    37,
      -1,    39,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    13,   626,    92,    -1,    94,    -1,    -1,
      58,   633,    92,    -1,    94,    -1,    96,    97,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    13,    -1,    92,   132,    94,   134,    96,    97,
      -1,    -1,   132,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,   698,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    14,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   718,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   755,    -1,   757,   758,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    88,
      14,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   793,    -1,   795,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    14,    -1,    -1,    -1,   759,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    14,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    92,    -1,    94,    29,    30,    97,    -1,    33,
      34,    29,    30,    -1,    -1,    33,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    58,   125,    -1,    -1,    -1,    -1,
      58,    59,   132,    67,   134,    -1,    58,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    29,    30,
      72,    -1,    33,    -1,    -1,    -1,    -1,    -1,    92,    87,
      94,    29,    30,    97,    92,    33,    94,    -1,    -1,    97,
      92,    -1,    94,    -1,    -1,    97,    -1,    58,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    67,    -1,   116,   117,
      58,   125,    -1,    -1,   116,   117,    -1,    -1,   132,    67,
     134,    40,    -1,    -1,   132,    -1,   134,    -1,    -1,    -1,
     132,    92,   134,    94,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,   132,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,   134,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,     5,    -1,    -1,    -1,     9,    10,     5,     6,    -1,
      -1,     9,    10,    -1,    -1,    -1,     5,    -1,    -1,    -1,
       9,    10,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    27,    37,
      38,    -1,    -1,    -1,    -1,    -1,    50,    51,    37,    38,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    50,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    64,    -1,    81,    76,    -1,
      78,    -1,    -1,    81,     6,     7,    -1,    76,    -1,    78,
      94,    -1,    81,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    94,    28,    29,    30,    31,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    57,    58,    -1,    17,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    27,    -1,
      29,    -1,    -1,    75,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    50,    94,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,     9,    10,    -1,    -1,    64,    -1,    -1,    -1,    17,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    27,
      -1,    29,    81,    -1,    -1,    33,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    59,     9,    10,    -1,    -1,    64,    -1,    -1,    -1,
      17,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      27,    -1,    29,    81,    -1,    -1,    33,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    -1,    94,    -1,     9,    10,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,     9,    10,    -1,    27,    64,    -1,    -1,
      -1,    17,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    27,    -1,    -1,    81,    -1,    -1,    -1,    -1,    50,
      87,    52,    53,    54,    55,    56,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    64,    50,    -1,    52,    53,    -1,    55,
      71,     9,    10,    -1,    -1,    76,    -1,    -1,    64,    17,
      81,    -1,     9,    10,    -1,    71,     9,    10,    -1,    27,
      76,    -1,    -1,    94,    -1,    81,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    27,    -1,    -1,    -1,    94,    -1,
      37,    38,    50,    -1,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    64,    50,    -1,    52,
      53,    -1,    55,    71,    -1,    -1,    -1,    64,    76,    -1,
      -1,    64,    -1,    81,    -1,    -1,    -1,    -1,    71,    76,
       3,    78,    -1,    76,    81,     8,    94,    -1,    81,    12,
      -1,    -1,    15,    -1,    -1,    -1,    19,    94,    21,    -1,
      -1,    94,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,     3,    49,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    12,    -1,    -1,    15,    61,    62,
      -1,    19,    65,    21,    -1,    68,    69,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    36,    82,
      83,    -1,    85,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    49,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
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
      50,    51,    64,    76,    78,    81,    94,   150,   151,   153,
     154,   162,   163,   164,   165,   175,   203,   205,   206,   209,
     212,   215,   217,   220,    29,    30,    89,    90,    92,    93,
      94,    95,    97,   116,   117,   119,   176,   177,   178,    27,
      42,    50,    29,    33,    59,    87,   160,    27,    37,    50,
      78,   165,   166,   167,   203,   206,   209,   212,   215,   217,
     218,    29,    30,   204,    29,   160,    29,    29,   210,   211,
     246,    29,    29,   160,   161,   213,   215,   216,    29,    67,
      80,   214,    88,     6,   174,   163,   160,   207,   208,    27,
      50,   178,    17,    29,    29,    29,    88,    92,   237,   160,
     166,   160,    29,    32,    79,   166,    27,    50,    89,    89,
      91,    88,   237,    92,   159,   108,   110,    91,   108,    91,
      89,    90,   161,    91,    92,    95,     7,    25,    28,    29,
      30,    31,    33,    34,    57,    58,    63,    67,    75,    84,
      86,    92,    94,   168,   169,   170,   173,   174,   179,   193,
     194,   200,    90,   108,    91,   160,   160,    88,    88,   237,
      88,   160,    10,    47,    81,    93,   161,   238,   239,   240,
      90,   237,   237,    91,   158,   163,   160,   160,   204,   204,
     160,    91,   223,   161,    91,     9,    27,    29,    30,    37,
      39,    48,    50,    72,    76,    92,    96,    97,   116,   117,
     132,   134,   186,   187,   194,   242,   244,   245,   246,   247,
     248,   251,   252,   253,   254,   256,   257,   264,   267,   268,
     287,    29,   243,   245,   247,   249,   253,   255,   256,   257,
     210,     9,   242,    37,   161,   242,    90,   213,    29,    97,
     116,   117,   125,   132,   134,   191,   192,   193,   198,   199,
     191,   160,    29,    30,    90,    90,   191,    29,   191,   179,
     179,   191,   191,   197,    29,   197,   201,   202,    92,   186,
     195,   196,    91,    17,    88,    92,    94,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   243,   186,   207,
     237,   237,   160,    29,    90,   160,   237,   240,   240,   240,
      90,    93,    91,   242,    90,    91,    37,    17,   174,   237,
     237,   237,   162,   163,     3,     8,    12,    15,    19,    21,
      26,    36,    45,    46,    49,    61,    62,    65,    68,    69,
      80,    82,    83,    85,   221,   222,   224,   225,    93,   162,
     163,    40,   237,    88,    92,     9,    17,    52,    92,   215,
     217,   218,   226,   265,   266,   237,    94,   242,    29,    33,
     161,   186,   188,   242,    92,   187,   187,   187,   187,   187,
      14,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    92,     4,    20,    60,    66,     9,    17,    53,
      54,    55,    56,    71,    81,    92,   206,   209,   213,   215,
     217,   218,   226,   269,   270,   271,   273,   274,   275,   276,
     277,   278,   279,   280,   112,     4,    66,   166,    12,   108,
     242,   193,   192,   193,   192,   193,   192,   192,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    93,
      89,    40,    99,   173,   173,    73,    92,    77,    18,    23,
      13,    89,    13,    90,    93,    93,    91,    14,    95,    89,
     179,   160,   198,   197,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   108,    12,    90,    91,   223,   237,   237,
     242,   237,    90,    72,   241,   247,   250,   256,   238,    91,
     223,   242,   166,    88,    88,    90,    91,    91,    91,    67,
      91,   223,    88,    88,   152,    29,    90,   160,    30,    52,
      29,    29,     9,    52,    17,   265,    40,   186,    93,    89,
      93,    29,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   189,   190,    40,    94,    40,
       7,     9,    17,    71,    81,   206,   209,   213,   217,   218,
     226,   258,   259,   260,   261,   262,   263,   270,   272,   281,
     282,   283,    40,    81,   217,   218,    53,    54,   277,   161,
      17,   277,   274,   274,     9,   279,    94,    40,    32,    79,
      67,   186,    12,   108,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   198,   180,   182,   183,   184,
     185,   186,   191,   173,   198,   191,    41,   171,   172,   179,
     173,   197,   173,   186,   201,   186,   195,    93,    95,   186,
      67,   242,   225,    90,    90,    91,    91,   242,   108,     4,
     162,   225,    91,   242,   162,   224,   242,    93,    29,    94,
     227,    93,    52,    29,    39,    95,   188,    93,    89,   242,
      29,   186,   247,   288,   289,   242,    29,   242,   284,    42,
      81,   217,   218,   219,    53,   281,    17,   259,   259,     9,
     262,   261,   283,   242,   277,    93,   288,   243,   158,    67,
     186,    17,    16,    44,   181,    91,    90,    89,    14,    74,
      16,    93,    29,    16,    17,    91,    17,    12,   223,    91,
     242,   242,   162,   162,    91,   186,    40,    91,    91,    91,
      91,    40,   227,   161,   235,   236,    90,   229,    17,   265,
      29,   227,   189,    14,    95,    89,    90,    40,    29,   281,
      17,   269,    95,    17,    35,   155,   174,   179,   182,   173,
     184,   186,   191,   173,    90,   179,   171,    67,   225,    91,
      91,    91,    91,   162,    10,   247,    39,   229,    90,    95,
      91,   242,    33,   228,    17,   227,   229,   186,    40,   288,
     242,   197,   285,   286,   237,    17,    40,    88,   156,   157,
     206,   212,    17,    88,    13,   247,    17,    91,   162,   162,
      91,   228,   241,   235,   194,    59,   230,   229,   228,   242,
      90,    91,    90,   243,   179,   156,    88,   173,    13,    91,
      91,   230,    29,    87,   231,   228,   230,    92,   285,   242,
      22,   173,   231,    29,    70,   232,   230,   231,   281,    91,
     223,   156,   232,    29,    11,   233,   231,   232,    93,   225,
     179,   233,   194,    91,   232,   233,    91,    91,    11,   234,
     233,    91,   234,    91,    91,   234,   234
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
     213,   213,   213,   214,   214,   214,   214,   215,   216,   216,
     216,   216,   216,   216,   216,   216,   217,   217,   217,   217,
     218,   218,   218,   218,   219,   219,   220,   220,   220,   220,
     220,   220,   220,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   222,   222,   222,   222,
     222,   222,   222,   223,   223,   224,   224,   224,   225,   225,
     226,   226,   226,   226,   227,   227,   228,   228,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   237,   237,   237,   238,   238,   239,   239,   239,
     239,   240,   240,   240,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   243,
     243,   243,   243,   243,   243,   244,   244,   244,   244,   245,
     246,   247,   247,   247,   247,   248,   248,   249,   250,   250,
     251,   252,   253,   254,   255,   256,   256,   257,   257,   258,
     258,   258,   259,   259,   260,   260,   260,   260,   260,   260,
     260,   261,   262,   262,   263,   263,   263,   263,   263,   263,
     264,   264,   264,   264,   265,   265,   266,   266,   266,   267,
     267,   268,   268,   268,   268,   268,   268,   269,   269,   270,
     270,   271,   271,   271,   272,   272,   273,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   276,   276,   277,
     278,   279,   279,   280,   280,   280,   280,   280,   281,   281,
     281,   282,   283,   284,   284,   285,   285,   285,   286,   287,
     288,   288,   289,   289
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
       1,     2,     3,     1,     1,     1,     4,     3,     3,     5,
       4,     5,     4,     6,     5,     6,     6,     8,     7,     9,
       4,     6,     5,     7,     6,     8,     6,     8,     8,    10,
       9,    11,     9,    11,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     2,     1,     3,
      11,    12,    12,    13,     0,     3,     0,     2,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     1,
       3,     3,     0,     2,     3,     1,     3,     2,     2,     2,
       1,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     2,     4,     4,
       4,     1,     3,     1,     4,     7,     4,     7,     4,     4,
       3,     3,     2,     4,     4,     0,     1,     4,     3,     2,
       1,     1,     1,     2,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     2,     2,     1,
       3,     2,     6,     5,     1,     2,     1,     1,     1,     1,
       1,     3,     6,     5,     4,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     2,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     4,     3,     1,     1,     2,     3,     5,     4,
       1,     3,     1,     3
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

    case YYSYMBOL_attr_content: /* attr_content  */
         { if(((*yyvaluep).n_stmt)) ((*yyvaluep).n_stmt)->print_debug(); }
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

    case YYSYMBOL_packed: /* packed  */
         { if(((*yyvaluep).tok)) ((*yyvaluep).tok)->print_debug(); }
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

  case 251: /* var_decl_list: var_decl ';'  */
                    { (yyval.n_vdcl) = (yyvsp[-1].n_vdcl); }
    break;

  case 252: /* var_decl_list: var_decl ';' var_decl_list  */
                                  { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 253: /* attr_content: SCONST  */
                     { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 254: /* attr_content: UNSAFE  */
             { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 255: /* attr_content: IDENT  */
            { (yyval.n_stmt) = new attrib_content((yyvsp[0].tok), NULL, NULL, NULL); }
    break;

  case 256: /* attr_content: IDENT '(' act_param_list ')'  */
                                   { (yyval.n_stmt) = new attrib_content((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 257: /* attr_decl: '[' attr_content ']'  */
                          { (yyval.n_attr) = new attrib_node((yyvsp[-2].tok), (yyvsp[-1].n_stmt), (yyvsp[0].tok)); }
    break;

  case 258: /* var_decl: ident_list ':' type  */
                          { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 259: /* var_decl: ident_list ':' type EQ const_expr  */
                                        { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 260: /* var_decl: ident_list ':' type DEPRECATED  */
                                     { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 261: /* var_decl: ident_list ':' type DEPRECATED SCONST  */
                                            { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 262: /* var_decl: attr_decl ident_list ':' type  */
                                    { (yyval.n_vdcl) = new var_decl_node((yyvsp[-3].n_attr), (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 263: /* var_decl: attr_decl ident_list ':' type EQ const_expr  */
                                                  { (yyval.n_vdcl) = new var_decl_node((yyvsp[-5].n_attr), (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 264: /* var_decl: attr_decl ident_list ':' type DEPRECATED  */
                                               { (yyval.n_vdcl) = new var_decl_node((yyvsp[-4].n_attr), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), NULL, NULL, (yyvsp[0].tok), NULL); }
    break;

  case 265: /* var_decl: attr_decl ident_list ':' type DEPRECATED SCONST  */
                                                      { (yyval.n_vdcl) = new var_decl_node((yyvsp[-5].n_attr), (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 266: /* proc_fwd_decl: PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 267: /* proc_fwd_decl: FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 268: /* proc_fwd_decl: attr_decl PROCEDURE ident_ext formal_params optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-6].n_attr), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 269: /* proc_fwd_decl: attr_decl FUNCTION ident_ext formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-8].n_attr), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 270: /* proc_spec: PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok), NULL, NULL); }
    break;

  case 271: /* proc_spec: FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node(NULL, (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 272: /* proc_spec: attr_decl PROCEDURE ident_ext formal_params ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-4].n_attr), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_plist), NULL, NULL, (yyvsp[0].tok), NULL, NULL); }
    break;

  case 273: /* proc_spec: attr_decl FUNCTION ident_ext formal_params ':' type ';'  */
        { (yyval.n_decl) = new proc_fwd_decl_node((yyvsp[-6].n_attr), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 274: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 275: /* operator_fwd_decl: OPERATOR IDENT formal_params ':' type optional_semicolon qualifiers ';'  */
        { (yyval.n_decl) = new operator_fwd_decl_node((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 276: /* proc_def: PROCEDURE ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-5].tok), NULL, NULL, (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 277: /* proc_def: FUNCTION ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), NULL, NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 278: /* proc_def: PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 279: /* proc_def: FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node(NULL, (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 280: /* proc_def: CLASS PROCEDURE IDENT '.' ident_ext formal_params ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_plist), NULL, NULL, (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 281: /* proc_def: CLASS FUNCTION IDENT '.' ident_ext formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 282: /* proc_def: CLASS OPERATOR IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-8].tok), (yyvsp[-7].tok), NULL,NULL, (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 283: /* proc_def: CLASS OPERATOR IDENT '.' IDENT formal_params ':' type ';' block ';'  */
          { (yyval.n_decl) = new proc_def_node((yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].n_plist), (yyvsp[-4].tok), (yyvsp[-3].n_tpd), (yyvsp[-2].tok), (yyvsp[-1].n_block), (yyvsp[0].tok)); }
    break;

  case 303: /* optional_semicolon: %empty  */
                    { (yyval.tok) = NULL; }
    break;

  case 307: /* qualifier: DEPRECATED SCONST  */
                        { (yyval.tok) = new two_tokens((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 308: /* qualifiers: qualifier  */
                      { (yyval.toks) = new token_list((yyvsp[0].tok)); }
    break;

  case 309: /* qualifiers: qualifiers optional_semicolon qualifier  */
         { (yyval.toks) = new token_list((yyvsp[0].tok), (yyvsp[-2].toks)); }
    break;

  case 310: /* property_decl: PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node(NULL, NULL, (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 311: /* property_decl: CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node(NULL, (yyvsp[-11].tok), (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 312: /* property_decl: attr_decl PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-11].n_attr), NULL, (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 313: /* property_decl: attr_decl CLASS PROPERTY IDENT prop_array prop_type_def prop_index prop_read prop_write prop_stored prop_default ';' prop_default_directive  */
        { (yyval.n_decl) = new property_node((yyvsp[-12].n_attr), (yyvsp[-11].tok), (yyvsp[-10].tok), (yyvsp[-9].tok), (yyvsp[-8].n_decl), (yyvsp[-7].n_decl), (yyvsp[-6].n_decl), (yyvsp[-5].n_decl), (yyvsp[-4].n_decl), (yyvsp[-3].n_decl), (yyvsp[-2].n_decl), (yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 314: /* prop_array: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 315: /* prop_array: '[' prop_param_list ']'  */
        { (yyval.n_decl) = new prop_array_node((yyvsp[-2].tok), (yyvsp[-1].n_vdcl), (yyvsp[0].tok)); }
    break;

  case 316: /* prop_index: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 317: /* prop_index: INDEX constant  */
        { (yyval.n_decl) = new prop_index_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 318: /* prop_type_def: ':' type  */
        { (yyval.n_decl) = new prop_type_def_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 319: /* prop_read: %empty  */
           { (yyval.n_decl) = NULL; }
    break;

  case 320: /* prop_read: READ IDENT  */
        { (yyval.n_decl) = new prop_read_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 321: /* prop_write: %empty  */
            { (yyval.n_decl) = NULL; }
    break;

  case 322: /* prop_write: WRITE IDENT  */
        { (yyval.n_decl) = new prop_write_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 323: /* prop_stored: %empty  */
             { (yyval.n_decl) = NULL; }
    break;

  case 324: /* prop_stored: STORED IDENT  */
        { (yyval.n_decl) = new prop_stored_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 325: /* prop_default: %empty  */
               { (yyval.n_decl) = NULL; }
    break;

  case 326: /* prop_default: DEFAULT constant  */
        { (yyval.n_decl) = new prop_default_node((yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 327: /* prop_default_directive: %empty  */
                         { (yyval.n_decl) = NULL; }
    break;

  case 328: /* prop_default_directive: DEFAULT ';'  */
        { (yyval.n_decl) = new prop_default_directive_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 330: /* prop_param_list: prop_param_decl ';' prop_param_list  */
                                          { (yyvsp[-2].n_vdcl)->next = (yyvsp[0].n_vdcl); (yyval.n_vdcl) = (yyvsp[-2].n_vdcl); }
    break;

  case 331: /* prop_param_decl: ident_list ':' param_type  */
                                           { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 332: /* formal_params: %empty  */
               { (yyval.n_plist) = NULL; }
    break;

  case 333: /* formal_params: '(' ')'  */
              { (yyval.n_plist) = new param_list_node((yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 334: /* formal_params: '(' formal_param_list ')'  */
                                { (yyval.n_plist) = new param_list_node((yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 336: /* formal_param_list: formal_param ';' formal_param_list  */
                                         { (yyvsp[-2].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-2].n_decl); }
    break;

  case 337: /* formal_param: VAR param_decl  */
                             { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 338: /* formal_param: CONST param_decl  */
                       { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 339: /* formal_param: OUT param_decl  */
                     { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 340: /* formal_param: param_decl  */
                 { (yyval.n_decl) = (yyvsp[0].n_vdcl); }
    break;

  case 341: /* param_decl: ident_list ':' param_type  */
                                      { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-2].toks), (yyvsp[-1].tok), (yyvsp[0].n_tpd), NULL, NULL, NULL, NULL); }
    break;

  case 342: /* param_decl: ident_list ':' param_type EQ const_expr  */
                                              { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[-4].toks), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].n_expr), NULL, NULL); }
    break;

  case 343: /* param_decl: ident_list  */
                 { (yyval.n_vdcl) = new var_decl_node(NULL, (yyvsp[0].toks), NULL, NULL, NULL, NULL, NULL, NULL); }
    break;

  case 365: /* fptr_type: FUNCTION formal_params ':' type  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 366: /* fptr_type: FUNCTION formal_params ':' type OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-5].tok), (yyvsp[-4].n_plist), (yyvsp[-3].tok), (yyvsp[-2].n_tpd), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 367: /* fptr_type: PROCEDURE formal_params  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_plist)); }
    break;

  case 368: /* fptr_type: PROCEDURE formal_params OF OBJECT  */
        { (yyval.n_tpd) = new fptr_tpd_node((yyvsp[-3].tok), (yyvsp[-2].n_plist), NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 369: /* string_type: STRING '[' const_expr ']'  */
                                       { (yyval.n_tpd) = new varying_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_expr), (yyvsp[0].tok)); }
    break;

  case 370: /* simple_templ_type: IDENT LT const_type GT  */
                                          { (yyval.n_tpd) = new simple_templ_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_tpd), (yyvsp[0].tok)); }
    break;

  case 371: /* simple_type: IDENT  */
                   { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 372: /* simple_type: IDENT '.' ident_ext  */
                          { (yyval.n_tpd) = new simple_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 373: /* simple_type: STRING  */
             { (yyval.n_tpd) = new string_tpd_node((yyvsp[0].tok)); }
    break;

  case 374: /* simple_type: IDENT '(' ICONST ')'  */
                           { (yyval.n_tpd) = new simple_tpd_node(NULL, NULL, (yyvsp[-3].tok)); }
    break;

  case 375: /* array_type: packed ARRAY '[' indices ']' OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 376: /* array_type: packed ARRAY OF type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 377: /* const_array_type: packed ARRAY '[' indices ']' OF const_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-6].tok), (yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].n_idx), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 378: /* conformant_array_type: packed ARRAY OF simple_type  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 379: /* conformant_array_type: packed ARRAY OF CONST  */
        { (yyval.n_tpd) = new array_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].tok), NULL); }
    break;

  case 380: /* enum_type: '(' ident_list ')'  */
                              { (yyval.n_tpd) = new enum_tpd_node((yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok)); }
    break;

  case 381: /* range_type: const_expr DOTS const_expr  */
        { (yyval.n_tpd) = new range_tpd_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
    break;

  case 382: /* pointer_type: '^' type  */
                       { (yyval.n_tpd) = new ptr_tpd_node((yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 383: /* set_type: packed SET OF type  */
                             { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 384: /* const_set_type: packed SET OF const_type  */
                                         { (yyval.n_tpd) = new set_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 385: /* packed: %empty  */
        { (yyval.tok) = NULL; }
    break;

  case 387: /* record_type: packed RECORD record_body END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 388: /* record_type: packed RECORD END  */
        { (yyval.n_tpd) = new record_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 389: /* record_body: record_field_list record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 393: /* record_components: record_component record_components  */
        { 
          decl_node** cpp;   
          for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	  *cpp = (yyvsp[0].n_decl);
          (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 395: /* record_component: record_access_spec_decl record_field_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 396: /* record_component: VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 397: /* record_component: CLASS VAR field_list  */
        { (yyval.n_decl) = new record_field_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_fldls)); }
    break;

  case 401: /* record_field_list: field_list  */
        { (yyval.n_decl) = new record_field_part_node(NULL, NULL, (yyvsp[0].n_fldls)); }
    break;

  case 403: /* record_methods: record_method_decl record_methods  */
                                        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 404: /* record_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 405: /* record_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 406: /* record_method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 407: /* record_method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 408: /* record_method_decl: CLASS operator_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 410: /* interface_type: INTERFACE interface_methods END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 411: /* interface_type: INTERFACE END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 412: /* interface_type: INTERFACE '(' IDENT ')' interface_methods END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 413: /* interface_type: INTERFACE '(' IDENT ')' END  */
        { (yyval.n_tpd) = new interface_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 415: /* interface_methods: interface_method_decl interface_methods  */
                                              { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 416: /* interface_method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 417: /* interface_method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 421: /* class_type: class_or_object object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-2].tok), NULL, NULL, NULL, (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 422: /* class_type: class_or_object '(' ident_list ')' object_body END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-5].tok), (yyvsp[-4].tok), (yyvsp[-3].toks), (yyvsp[-2].tok), (yyvsp[-1].n_decl), (yyvsp[0].tok)); }
    break;

  case 423: /* class_type: class_or_object '(' ident_list ')' END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-4].tok), (yyvsp[-3].tok), (yyvsp[-2].toks), (yyvsp[-1].tok), NULL, (yyvsp[0].tok)); }
    break;

  case 424: /* class_type: class_or_object '(' ident_list ')'  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].toks), (yyvsp[0].tok), NULL, NULL); }
    break;

  case 425: /* class_type: class_or_object END  */
        { (yyval.n_tpd) = new object_tpd_node((yyvsp[-1].tok), NULL, NULL, NULL, NULL, (yyvsp[0].tok)); }
    break;

  case 426: /* class_type: CLASS OF IDENT  */
        { (yyval.n_tpd) = new metaclass_tpd_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 428: /* object_body: field_decl_list object_components  */
        { 
           // rare case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_vdcl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	   *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_vdcl); 
        }
    break;

  case 434: /* record_access_spec_decl: record_access_spec_tok  */
                                                { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 435: /* record_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 436: /* class_access_spec_decl: class_access_spec_tok  */
                                              { (yyval.n_decl) = new access_specifier_node(NULL, (yyvsp[0].tok)); }
    break;

  case 437: /* class_access_spec_decl: STRICT PRIVATE  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 438: /* class_access_spec_decl: STRICT PROTECTED  */
                       { (yyval.n_decl) = new access_specifier_node((yyvsp[-1].tok), (yyvsp[0].tok)); }
    break;

  case 440: /* object_components: object_component object_components  */
        { 
           // special case when two lists under one roof. 
           // we need to do the following - look for last element in list#1 and connect it with first element of list#2.
           decl_node** cpp;   
           for(cpp = &(yyvsp[-1].n_decl)->next; *cpp != NULL; cpp = &(*cpp)->next);
	      *cpp = (yyvsp[0].n_decl);
           (yyval.n_decl) = (yyvsp[-1].n_decl); 
        }
    break;

  case 442: /* object_component: class_access_spec_decl field_decl_list  */
        { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_vdcl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 447: /* field_decl_part: VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node(NULL, (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 448: /* field_decl_part: CLASS VAR field_decl_list  */
        { (yyval.n_decl) = new var_decl_part_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_vdcl)); }
    break;

  case 452: /* method_decl_list: method_decl method_decl_list  */
                                   { (yyvsp[-1].n_decl)->next = (yyvsp[0].n_decl); (yyval.n_decl) = (yyvsp[-1].n_decl); }
    break;

  case 453: /* method_decl: proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 454: /* method_decl: proc_spec  */
        { (yyval.n_decl) = new method_decl_node(NULL, (yyvsp[0].n_decl)); }
    break;

  case 455: /* method_decl: CLASS proc_fwd_decl  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 456: /* method_decl: CLASS proc_spec  */
        { (yyval.n_decl) = new method_decl_node((yyvsp[-1].tok), (yyvsp[0].n_decl)); }
    break;

  case 458: /* field_list: fixed_part variant_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[-1].n_vdcl), (yyvsp[0].n_varp)); }
    break;

  case 459: /* field_list: fixed_part  */
        { (yyval.n_fldls) = new field_list_node((yyvsp[0].n_vdcl)); }
    break;

  case 460: /* field_list: variant_part  */
        { (yyval.n_fldls) = new field_list_node(NULL, (yyvsp[0].n_varp)); }
    break;

  case 462: /* variant_part: CASE selector OF variant_list  */
        { (yyval.n_varp) = new variant_part_node((yyvsp[-3].tok), (yyvsp[-2].n_sel), (yyvsp[-1].tok), (yyvsp[0].n_vari)); }
    break;

  case 463: /* selector: IDENT ':' type  */
                         { (yyval.n_sel) = new selector_node((yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 464: /* selector: type  */
           { (yyval.n_sel) = new selector_node(NULL, NULL, (yyvsp[0].n_tpd)); }
    break;

  case 466: /* variant_list: variant ';'  */
                  { (yyval.n_vari) = (yyvsp[-1].n_vari); }
    break;

  case 467: /* variant_list: variant ';' variant_list  */
                               { (yyvsp[-2].n_vari)->next = (yyvsp[0].n_vari); (yyval.n_vari) = (yyvsp[-2].n_vari); }
    break;

  case 468: /* variant: expr_list ':' '(' field_list ')'  */
        { (yyval.n_vari) = new variant_node((yyvsp[-4].n_expr), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].n_fldls), (yyvsp[0].tok)); }
    break;

  case 469: /* file_type: packed FIL OF type  */
                              { (yyval.n_tpd) = new file_tpd_node((yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tok), (yyvsp[0].n_tpd)); }
    break;

  case 471: /* indices: index_spec ',' indices  */
        { (yyvsp[-2].n_idx)->next = (yyvsp[0].n_idx); (yyval.n_idx) = (yyvsp[-2].n_idx); }
    break;

  case 472: /* index_spec: simple_type  */
                        { (yyval.n_idx) = new type_index_node((yyvsp[0].n_tpd)); }
    break;

  case 473: /* index_spec: const_expr DOTS const_expr  */
                                 { (yyval.n_idx) = new range_index_node((yyvsp[-2].n_expr), (yyvsp[-1].tok), (yyvsp[0].n_expr)); }
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


