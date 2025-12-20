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
    DEPRECATED = 267,              /* DEPRECATED  */
    DO = 268,                      /* DO  */
    DOTS = 269,                    /* DOTS  */
    DYNAMIC = 270,                 /* DYNAMIC  */
    ELSE = 271,                    /* ELSE  */
    END = 272,                     /* END  */
    EXCEPT = 273,                  /* EXCEPT  */
    EXTERNAL = 274,                /* EXTERNAL  */
    FIL = 275,                     /* FIL  */
    FINAL = 276,                   /* FINAL  */
    FINALIZATION = 277,            /* FINALIZATION  */
    FINALLY = 278,                 /* FINALLY  */
    FAR = 279,                     /* FAR  */
    FOR = 280,                     /* FOR  */
    FORWARD = 281,                 /* FORWARD  */
    FUNCTION = 282,                /* FUNCTION  */
    GOTO = 283,                    /* GOTO  */
    IDENT = 284,                   /* IDENT  */
    ICONST = 285,                  /* ICONST  */
    IF = 286,                      /* IF  */
    IMPLEMENTATION = 287,          /* IMPLEMENTATION  */
    INDEX = 288,                   /* INDEX  */
    INHERITED = 289,               /* INHERITED  */
    INITIALIZATION = 290,          /* INITIALIZATION  */
    INTERFACE = 291,               /* INTERFACE  */
    LABEL = 292,                   /* LABEL  */
    OBJECT = 293,                  /* OBJECT  */
    OF = 294,                      /* OF  */
    ON = 295,                      /* ON  */
    OPERATOR = 296,                /* OPERATOR  */
    ORIGIN = 297,                  /* ORIGIN  */
    OTHERWISE = 298,               /* OTHERWISE  */
    OVERLOAD = 299,                /* OVERLOAD  */
    OVERRIDE = 300,                /* OVERRIDE  */
    OUT = 301,                     /* OUT  */
    PACKED = 302,                  /* PACKED  */
    PASCAL = 303,                  /* PASCAL  */
    PROCEDURE = 304,               /* PROCEDURE  */
    PROGRAM = 305,                 /* PROGRAM  */
    PROPERTY = 306,                /* PROPERTY  */
    PRIVATE = 307,                 /* PRIVATE  */
    PROTECTED = 308,               /* PROTECTED  */
    PUBLIC = 309,                  /* PUBLIC  */
    PUBLISHED = 310,               /* PUBLISHED  */
    RAISE = 311,                   /* RAISE  */
    RCONST = 312,                  /* RCONST  */
    READ = 313,                    /* READ  */
    RECORD = 314,                  /* RECORD  */
    REGISTER = 315,                /* REGISTER  */
    REINTRODUCE = 316,             /* REINTRODUCE  */
    REPEAT = 317,                  /* REPEAT  */
    RESOURCESTRING = 318,          /* RESOURCESTRING  */
    SAFECALL = 319,                /* SAFECALL  */
    SET = 320,                     /* SET  */
    SCONST = 321,                  /* SCONST  */
    STATIC = 322,                  /* STATIC  */
    STDCALL = 323,                 /* STDCALL  */
    STORED = 324,                  /* STORED  */
    STRICT = 325,                  /* STRICT  */
    STRING = 326,                  /* STRING  */
    THEN = 327,                    /* THEN  */
    TO = 328,                      /* TO  */
    TRY = 329,                     /* TRY  */
    TYPE = 330,                    /* TYPE  */
    UNTIL = 331,                   /* UNTIL  */
    UNIT = 332,                    /* UNIT  */
    UNIT_END = 333,                /* UNIT_END  */
    VAR = 334,                     /* VAR  */
    VARARGS = 335,                 /* VARARGS  */
    VIRTUAL = 336,                 /* VIRTUAL  */
    WHILE = 337,                   /* WHILE  */
    WINAPI = 338,                  /* WINAPI  */
    WITH = 339,                    /* WITH  */
    WRITE = 340,                   /* WRITE  */
    SCOPE = 341,                   /* SCOPE  */
    LET = 342,                     /* LET  */
    LETADD = 343,                  /* LETADD  */
    LETSUB = 344,                  /* LETSUB  */
    LETDIV = 345,                  /* LETDIV  */
    LETMUL = 346,                  /* LETMUL  */
    LETAND = 347,                  /* LETAND  */
    LETOR = 348,                   /* LETOR  */
    LETSHL = 349,                  /* LETSHL  */
    LETSHR = 350,                  /* LETSHR  */
    EQ = 351,                      /* EQ  */
    NE = 352,                      /* NE  */
    LT = 353,                      /* LT  */
    LE = 354,                      /* LE  */
    GT = 355,                      /* GT  */
    GE = 356,                      /* GE  */
    IN = 357,                      /* IN  */
    IS = 358,                      /* IS  */
    PLUS = 359,                    /* PLUS  */
    MINUS = 360,                   /* MINUS  */
    OR = 361,                      /* OR  */
    XOR = 362,                     /* XOR  */
    BINOR = 363,                   /* BINOR  */
    MOD = 364,                     /* MOD  */
    DIV = 365,                     /* DIV  */
    DIVR = 366,                    /* DIVR  */
    MUL = 367,                     /* MUL  */
    AND = 368,                     /* AND  */
    SHR = 369,                     /* SHR  */
    SHL = 370,                     /* SHL  */
    BINAND = 371,                  /* BINAND  */
    AS = 372,                      /* AS  */
    UPLUS = 373,                   /* UPLUS  */
    UMINUS = 374,                  /* UMINUS  */
    NOT = 375,                     /* NOT  */
    ADDRESS = 376,                 /* ADDRESS  */
    BINNOT = 377,                  /* BINNOT  */
    EQUAL = 378,                   /* EQUAL  */
    NOTEQUAL = 379,                /* NOTEQUAL  */
    LESSTH = 380,                  /* LESSTH  */
    GREATERTH = 381,               /* GREATERTH  */
    ADD = 382,                     /* ADD  */
    SUBSTRACT = 383,               /* SUBSTRACT  */
    MULTIPLY = 384,                /* MULTIPLY  */
    DIVIDE = 385,                  /* DIVIDE  */
    INTDIVIDE = 386,               /* INTDIVIDE  */
    MODULUS = 387,                 /* MODULUS  */
    IMPLICIT = 388,                /* IMPLICIT  */
    EXPLICIT = 389                 /* EXPLICIT  */
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
