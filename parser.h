/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_ZZ_PARSER_H_INCLUDED
# define YY_ZZ_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int zzdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABSTRACT = 258,                /* ABSTRACT  */
    ARRAY = 259,                   /* ARRAY  */
    ASM = 260,                     /* ASM  */
    BEGIN = 261,                   /* BEGIN  */
    CASE = 262,                    /* CASE  */
    CDECL = 263,                   /* CDECL  */
    CLASS = 264,                   /* CLASS  */
    CONST = 265,                   /* CONST  */
    DEFAULT = 266,                 /* DEFAULT  */
    DO = 267,                      /* DO  */
    DOTS = 268,                    /* DOTS  */
    DYNAMIC = 269,                 /* DYNAMIC  */
    ELSE = 270,                    /* ELSE  */
    END = 271,                     /* END  */
    EXCEPT = 272,                  /* EXCEPT  */
    EXTERNAL = 273,                /* EXTERNAL  */
    FIL = 274,                     /* FIL  */
    FINAL = 275,                   /* FINAL  */
    FINALIZATION = 276,            /* FINALIZATION  */
    FINALLY = 277,                 /* FINALLY  */
    FAR = 278,                     /* FAR  */
    FOR = 279,                     /* FOR  */
    FORWARD = 280,                 /* FORWARD  */
    FUNCTION = 281,                /* FUNCTION  */
    GOTO = 282,                    /* GOTO  */
    IDENT = 283,                   /* IDENT  */
    ICONST = 284,                  /* ICONST  */
    IF = 285,                      /* IF  */
    IMPLEMENTATION = 286,          /* IMPLEMENTATION  */
    INDEX = 287,                   /* INDEX  */
    INHERITED = 288,               /* INHERITED  */
    INITIALIZATION = 289,          /* INITIALIZATION  */
    INTERFACE = 290,               /* INTERFACE  */
    LABEL = 291,                   /* LABEL  */
    OBJECT = 292,                  /* OBJECT  */
    OF = 293,                      /* OF  */
    ON = 294,                      /* ON  */
    ORIGIN = 295,                  /* ORIGIN  */
    OTHERWISE = 296,               /* OTHERWISE  */
    OVERLOAD = 297,                /* OVERLOAD  */
    OVERRIDE = 298,                /* OVERRIDE  */
    OUT = 299,                     /* OUT  */
    PACKED = 300,                  /* PACKED  */
    PASCAL = 301,                  /* PASCAL  */
    PROCEDURE = 302,               /* PROCEDURE  */
    PROGRAM = 303,                 /* PROGRAM  */
    PROPERTY = 304,                /* PROPERTY  */
    PRIVATE = 305,                 /* PRIVATE  */
    PROTECTED = 306,               /* PROTECTED  */
    PUBLIC = 307,                  /* PUBLIC  */
    PUBLISHED = 308,               /* PUBLISHED  */
    RAISE = 309,                   /* RAISE  */
    RCONST = 310,                  /* RCONST  */
    READ = 311,                    /* READ  */
    RECORD = 312,                  /* RECORD  */
    REGISTER = 313,                /* REGISTER  */
    REINTRODUCE = 314,             /* REINTRODUCE  */
    REPEAT = 315,                  /* REPEAT  */
    RESOURCESTRING = 316,          /* RESOURCESTRING  */
    SAFECALL = 317,                /* SAFECALL  */
    SET = 318,                     /* SET  */
    SCONST = 319,                  /* SCONST  */
    STATIC = 320,                  /* STATIC  */
    STDCALL = 321,                 /* STDCALL  */
    STORED = 322,                  /* STORED  */
    STRICT = 323,                  /* STRICT  */
    STRING = 324,                  /* STRING  */
    THEN = 325,                    /* THEN  */
    TO = 326,                      /* TO  */
    TRY = 327,                     /* TRY  */
    TYPE = 328,                    /* TYPE  */
    UNTIL = 329,                   /* UNTIL  */
    UNIT = 330,                    /* UNIT  */
    UNIT_END = 331,                /* UNIT_END  */
    VAR = 332,                     /* VAR  */
    VARARGS = 333,                 /* VARARGS  */
    VIRTUAL = 334,                 /* VIRTUAL  */
    WHILE = 335,                   /* WHILE  */
    WINAPI = 336,                  /* WINAPI  */
    WITH = 337,                    /* WITH  */
    WRITE = 338,                   /* WRITE  */
    SCOPE = 339,                   /* SCOPE  */
    LET = 340,                     /* LET  */
    LETADD = 341,                  /* LETADD  */
    LETSUB = 342,                  /* LETSUB  */
    LETDIV = 343,                  /* LETDIV  */
    LETMUL = 344,                  /* LETMUL  */
    LETAND = 345,                  /* LETAND  */
    LETOR = 346,                   /* LETOR  */
    LETSHL = 347,                  /* LETSHL  */
    LETSHR = 348,                  /* LETSHR  */
    EQ = 349,                      /* EQ  */
    NE = 350,                      /* NE  */
    LT = 351,                      /* LT  */
    LE = 352,                      /* LE  */
    GT = 353,                      /* GT  */
    GE = 354,                      /* GE  */
    IN = 355,                      /* IN  */
    IS = 356,                      /* IS  */
    PLUS = 357,                    /* PLUS  */
    MINUS = 358,                   /* MINUS  */
    OR = 359,                      /* OR  */
    XOR = 360,                     /* XOR  */
    BINOR = 361,                   /* BINOR  */
    MOD = 362,                     /* MOD  */
    DIV = 363,                     /* DIV  */
    DIVR = 364,                    /* DIVR  */
    MUL = 365,                     /* MUL  */
    AND = 366,                     /* AND  */
    SHR = 367,                     /* SHR  */
    SHL = 368,                     /* SHL  */
    BINAND = 369,                  /* BINAND  */
    AS = 370,                      /* AS  */
    UPLUS = 371,                   /* UPLUS  */
    UMINUS = 372,                  /* UMINUS  */
    NOT = 373,                     /* NOT  */
    ADDRESS = 374,                 /* ADDRESS  */
    BINNOT = 375                   /* BINNOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

    token                *tok;

    token_list           *toks; 

    node                 *n_node;
    tpd_node             *n_tpd;
    block_node           *n_block; 
    stmt_node            *n_stmt; 
    decl_node            *n_decl; 
    expr_node            *n_expr; 
    expr_group_node      *n_grp; 

    write_param_node     *n_wrtp; 
    write_list_node      *n_wrls; 
    case_node            *n_case; 
    set_item_node        *n_item; 

    const_def_node       *n_cdef; 
    type_def_node        *n_tdef; 
    var_decl_node        *n_vdcl; 

    field_init_node      *n_field;
    
    param_list_node      *n_plist; 
    idx_node             *n_idx; 

    field_list_node      *n_fldls;
    variant_part_node    *n_varp;
    selector_node        *n_sel; 
    variant_node         *n_vari;
    compound_node        *n_comp;

    asm_line_node        *n_asm;       
    asm_block_node       *n_basm;       
    import_list_node     *n_imp; 


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;


int zzparse (void);


#endif /* !YY_ZZ_PARSER_H_INCLUDED  */
