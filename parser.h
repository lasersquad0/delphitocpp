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
    OPERATOR = 295,                /* OPERATOR  */
    ORIGIN = 296,                  /* ORIGIN  */
    OTHERWISE = 297,               /* OTHERWISE  */
    OVERLOAD = 298,                /* OVERLOAD  */
    OVERRIDE = 299,                /* OVERRIDE  */
    OUT = 300,                     /* OUT  */
    PACKED = 301,                  /* PACKED  */
    PASCAL = 302,                  /* PASCAL  */
    PROCEDURE = 303,               /* PROCEDURE  */
    PROGRAM = 304,                 /* PROGRAM  */
    PROPERTY = 305,                /* PROPERTY  */
    PRIVATE = 306,                 /* PRIVATE  */
    PROTECTED = 307,               /* PROTECTED  */
    PUBLIC = 308,                  /* PUBLIC  */
    PUBLISHED = 309,               /* PUBLISHED  */
    RAISE = 310,                   /* RAISE  */
    RCONST = 311,                  /* RCONST  */
    READ = 312,                    /* READ  */
    RECORD = 313,                  /* RECORD  */
    REGISTER = 314,                /* REGISTER  */
    REINTRODUCE = 315,             /* REINTRODUCE  */
    REPEAT = 316,                  /* REPEAT  */
    RESOURCESTRING = 317,          /* RESOURCESTRING  */
    SAFECALL = 318,                /* SAFECALL  */
    SET = 319,                     /* SET  */
    SCONST = 320,                  /* SCONST  */
    STATIC = 321,                  /* STATIC  */
    STDCALL = 322,                 /* STDCALL  */
    STORED = 323,                  /* STORED  */
    STRICT = 324,                  /* STRICT  */
    STRING = 325,                  /* STRING  */
    THEN = 326,                    /* THEN  */
    TO = 327,                      /* TO  */
    TRY = 328,                     /* TRY  */
    TYPE = 329,                    /* TYPE  */
    UNTIL = 330,                   /* UNTIL  */
    UNIT = 331,                    /* UNIT  */
    UNIT_END = 332,                /* UNIT_END  */
    VAR = 333,                     /* VAR  */
    VARARGS = 334,                 /* VARARGS  */
    VIRTUAL = 335,                 /* VIRTUAL  */
    WHILE = 336,                   /* WHILE  */
    WINAPI = 337,                  /* WINAPI  */
    WITH = 338,                    /* WITH  */
    WRITE = 339,                   /* WRITE  */
    SCOPE = 340,                   /* SCOPE  */
    LET = 341,                     /* LET  */
    LETADD = 342,                  /* LETADD  */
    LETSUB = 343,                  /* LETSUB  */
    LETDIV = 344,                  /* LETDIV  */
    LETMUL = 345,                  /* LETMUL  */
    LETAND = 346,                  /* LETAND  */
    LETOR = 347,                   /* LETOR  */
    LETSHL = 348,                  /* LETSHL  */
    LETSHR = 349,                  /* LETSHR  */
    EQ = 350,                      /* EQ  */
    NE = 351,                      /* NE  */
    LT = 352,                      /* LT  */
    LE = 353,                      /* LE  */
    GT = 354,                      /* GT  */
    GE = 355,                      /* GE  */
    IN = 356,                      /* IN  */
    IS = 357,                      /* IS  */
    PLUS = 358,                    /* PLUS  */
    MINUS = 359,                   /* MINUS  */
    OR = 360,                      /* OR  */
    XOR = 361,                     /* XOR  */
    BINOR = 362,                   /* BINOR  */
    MOD = 363,                     /* MOD  */
    DIV = 364,                     /* DIV  */
    DIVR = 365,                    /* DIVR  */
    MUL = 366,                     /* MUL  */
    AND = 367,                     /* AND  */
    SHR = 368,                     /* SHR  */
    SHL = 369,                     /* SHL  */
    BINAND = 370,                  /* BINAND  */
    AS = 371,                      /* AS  */
    UPLUS = 372,                   /* UPLUS  */
    UMINUS = 373,                  /* UMINUS  */
    NOT = 374,                     /* NOT  */
    ADDRESS = 375,                 /* ADDRESS  */
    BINNOT = 376,                  /* BINNOT  */
    EQUAL = 377,                   /* EQUAL  */
    NOTEQUAL = 378,                /* NOTEQUAL  */
    LESSTH = 379,                  /* LESSTH  */
    GREATERTH = 380,               /* GREATERTH  */
    ADD = 381,                     /* ADD  */
    SUBSTRACT = 382,               /* SUBSTRACT  */
    MULTIPLY = 383,                /* MULTIPLY  */
    DIVIDE = 384,                  /* DIVIDE  */
    INTDIVIDE = 385,               /* INTDIVIDE  */
    MODULUS = 386,                 /* MODULUS  */
    IMPLICIT = 387,                /* IMPLICIT  */
    EXPLICIT = 388                 /* EXPLICIT  */
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
