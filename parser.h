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
    INLINE = 291,                  /* INLINE  */
    INTERFACE = 292,               /* INTERFACE  */
    LABEL = 293,                   /* LABEL  */
    OBJECT = 294,                  /* OBJECT  */
    OF = 295,                      /* OF  */
    ON = 296,                      /* ON  */
    OPERATOR = 297,                /* OPERATOR  */
    ORIGIN = 298,                  /* ORIGIN  */
    OTHERWISE = 299,               /* OTHERWISE  */
    OVERLOAD = 300,                /* OVERLOAD  */
    OVERRIDE = 301,                /* OVERRIDE  */
    OUT = 302,                     /* OUT  */
    PACKED = 303,                  /* PACKED  */
    PASCAL = 304,                  /* PASCAL  */
    PROCEDURE = 305,               /* PROCEDURE  */
    PROGRAM = 306,                 /* PROGRAM  */
    PROPERTY = 307,                /* PROPERTY  */
    PRIVATE = 308,                 /* PRIVATE  */
    PROTECTED = 309,               /* PROTECTED  */
    PUBLIC = 310,                  /* PUBLIC  */
    PUBLISHED = 311,               /* PUBLISHED  */
    RAISE = 312,                   /* RAISE  */
    RCONST = 313,                  /* RCONST  */
    READ = 314,                    /* READ  */
    RECORD = 315,                  /* RECORD  */
    REGISTER = 316,                /* REGISTER  */
    REINTRODUCE = 317,             /* REINTRODUCE  */
    REPEAT = 318,                  /* REPEAT  */
    RESOURCESTRING = 319,          /* RESOURCESTRING  */
    SAFECALL = 320,                /* SAFECALL  */
    SET = 321,                     /* SET  */
    SCONST = 322,                  /* SCONST  */
    STATIC = 323,                  /* STATIC  */
    STDCALL = 324,                 /* STDCALL  */
    STORED = 325,                  /* STORED  */
    STRICT = 326,                  /* STRICT  */
    STRING = 327,                  /* STRING  */
    THEN = 328,                    /* THEN  */
    TO = 329,                      /* TO  */
    TRY = 330,                     /* TRY  */
    TYPE = 331,                    /* TYPE  */
    UNTIL = 332,                   /* UNTIL  */
    UNIT = 333,                    /* UNIT  */
    UNIT_END = 334,                /* UNIT_END  */
    UNSAFE = 335,                  /* UNSAFE  */
    VAR = 336,                     /* VAR  */
    VARARGS = 337,                 /* VARARGS  */
    VIRTUAL = 338,                 /* VIRTUAL  */
    WHILE = 339,                   /* WHILE  */
    WINAPI = 340,                  /* WINAPI  */
    WITH = 341,                    /* WITH  */
    WRITE = 342,                   /* WRITE  */
    SCOPE = 343,                   /* SCOPE  */
    LET = 344,                     /* LET  */
    LETADD = 345,                  /* LETADD  */
    LETSUB = 346,                  /* LETSUB  */
    LETDIV = 347,                  /* LETDIV  */
    LETMUL = 348,                  /* LETMUL  */
    LETAND = 349,                  /* LETAND  */
    LETOR = 350,                   /* LETOR  */
    LETSHL = 351,                  /* LETSHL  */
    LETSHR = 352,                  /* LETSHR  */
    EQ = 353,                      /* EQ  */
    NE = 354,                      /* NE  */
    LT = 355,                      /* LT  */
    LE = 356,                      /* LE  */
    GT = 357,                      /* GT  */
    GE = 358,                      /* GE  */
    IN = 359,                      /* IN  */
    IS = 360,                      /* IS  */
    PLUS = 361,                    /* PLUS  */
    MINUS = 362,                   /* MINUS  */
    OR = 363,                      /* OR  */
    XOR = 364,                     /* XOR  */
    BINOR = 365,                   /* BINOR  */
    MOD = 366,                     /* MOD  */
    DIV = 367,                     /* DIV  */
    DIVR = 368,                    /* DIVR  */
    MUL = 369,                     /* MUL  */
    AND = 370,                     /* AND  */
    SHR = 371,                     /* SHR  */
    SHL = 372,                     /* SHL  */
    BINAND = 373,                  /* BINAND  */
    AS = 374,                      /* AS  */
    UPLUS = 375,                   /* UPLUS  */
    UMINUS = 376,                  /* UMINUS  */
    NOT = 377,                     /* NOT  */
    ADDRESS = 378,                 /* ADDRESS  */
    BINNOT = 379,                  /* BINNOT  */
    EQUAL = 380,                   /* EQUAL  */
    NOTEQUAL = 381,                /* NOTEQUAL  */
    LESSTH = 382,                  /* LESSTH  */
    GREATERTH = 383,               /* GREATERTH  */
    ADD = 384,                     /* ADD  */
    SUBSTRACT = 385,               /* SUBSTRACT  */
    MULTIPLY = 386,                /* MULTIPLY  */
    DIVIDE = 387,                  /* DIVIDE  */
    INTDIVIDE = 388,               /* INTDIVIDE  */
    MODULUS = 389,                 /* MODULUS  */
    IMPLICIT = 390,                /* IMPLICIT  */
    EXPLICIT = 391                 /* EXPLICIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

    token                *tok;
    two_tokens           *tok2;
    token_list           *toks; 

    node                 *n_node;
    tpd_node             *n_tpd;
    block_node           *n_block; 
    stmt_node            *n_stmt; 
    decl_node            *n_decl; 
    expr_node            *n_expr; 
    expr_group_node      *n_grp; 

    //write_param_node     *n_wrtp; 
    //write_list_node      *n_wrls; 
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
    
    attrib_node          *n_attr;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;


int zzparse (void);


#endif /* !YY_ZZ_PARSER_H_INCLUDED  */
