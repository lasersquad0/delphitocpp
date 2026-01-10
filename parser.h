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
    CELSE = 264,                   /* CELSE  */
    CENDIF = 265,                  /* CENDIF  */
    CIF = 266,                     /* CIF  */
    CIFDEF = 267,                  /* CIFDEF  */
    CIFNDEF = 268,                 /* CIFNDEF  */
    CLASS = 269,                   /* CLASS  */
    CONST = 270,                   /* CONST  */
    DEFAULT = 271,                 /* DEFAULT  */
    DEPRECATED = 272,              /* DEPRECATED  */
    DO = 273,                      /* DO  */
    DOTS = 274,                    /* DOTS  */
    DYNAMIC = 275,                 /* DYNAMIC  */
    ELSE = 276,                    /* ELSE  */
    END = 277,                     /* END  */
    EXCEPT = 278,                  /* EXCEPT  */
    EXTERNAL = 279,                /* EXTERNAL  */
    FIL = 280,                     /* FIL  */
    FINAL = 281,                   /* FINAL  */
    FINALIZATION = 282,            /* FINALIZATION  */
    FINALLY = 283,                 /* FINALLY  */
    FAR = 284,                     /* FAR  */
    FOR = 285,                     /* FOR  */
    FORWARD = 286,                 /* FORWARD  */
    FUNCTION = 287,                /* FUNCTION  */
    GOTO = 288,                    /* GOTO  */
    IDENT = 289,                   /* IDENT  */
    ICONST = 290,                  /* ICONST  */
    IF = 291,                      /* IF  */
    IMPLEMENTATION = 292,          /* IMPLEMENTATION  */
    INDEX = 293,                   /* INDEX  */
    INHERITED = 294,               /* INHERITED  */
    INITIALIZATION = 295,          /* INITIALIZATION  */
    INLINE = 296,                  /* INLINE  */
    INTERFACE = 297,               /* INTERFACE  */
    LABEL = 298,                   /* LABEL  */
    OBJECT = 299,                  /* OBJECT  */
    OF = 300,                      /* OF  */
    ON = 301,                      /* ON  */
    OPERATOR = 302,                /* OPERATOR  */
    ORIGIN = 303,                  /* ORIGIN  */
    OTHERWISE = 304,               /* OTHERWISE  */
    OVERLOAD = 305,                /* OVERLOAD  */
    OVERRIDE = 306,                /* OVERRIDE  */
    OUT = 307,                     /* OUT  */
    PACKED = 308,                  /* PACKED  */
    PASCAL = 309,                  /* PASCAL  */
    PROCEDURE = 310,               /* PROCEDURE  */
    PROGRAM = 311,                 /* PROGRAM  */
    PROPERTY = 312,                /* PROPERTY  */
    PRIVATE = 313,                 /* PRIVATE  */
    PROTECTED = 314,               /* PROTECTED  */
    PUBLIC = 315,                  /* PUBLIC  */
    PUBLISHED = 316,               /* PUBLISHED  */
    RAISE = 317,                   /* RAISE  */
    RCONST = 318,                  /* RCONST  */
    READ = 319,                    /* READ  */
    RECORD = 320,                  /* RECORD  */
    REGISTER = 321,                /* REGISTER  */
    REINTRODUCE = 322,             /* REINTRODUCE  */
    REPEAT = 323,                  /* REPEAT  */
    RESOURCESTRING = 324,          /* RESOURCESTRING  */
    SAFECALL = 325,                /* SAFECALL  */
    SET = 326,                     /* SET  */
    SCONST = 327,                  /* SCONST  */
    STATIC = 328,                  /* STATIC  */
    STDCALL = 329,                 /* STDCALL  */
    STORED = 330,                  /* STORED  */
    STRICT = 331,                  /* STRICT  */
    STRING = 332,                  /* STRING  */
    THEN = 333,                    /* THEN  */
    TO = 334,                      /* TO  */
    TRY = 335,                     /* TRY  */
    TYPE = 336,                    /* TYPE  */
    UNTIL = 337,                   /* UNTIL  */
    UNIT = 338,                    /* UNIT  */
    UNIT_END = 339,                /* UNIT_END  */
    UNSAFE = 340,                  /* UNSAFE  */
    VAR = 341,                     /* VAR  */
    VARARGS = 342,                 /* VARARGS  */
    VIRTUAL = 343,                 /* VIRTUAL  */
    WHILE = 344,                   /* WHILE  */
    WINAPI = 345,                  /* WINAPI  */
    WITH = 346,                    /* WITH  */
    WRITE = 347,                   /* WRITE  */
    SCOPE = 348,                   /* SCOPE  */
    LET = 349,                     /* LET  */
    LETADD = 350,                  /* LETADD  */
    LETSUB = 351,                  /* LETSUB  */
    LETDIV = 352,                  /* LETDIV  */
    LETMUL = 353,                  /* LETMUL  */
    LETAND = 354,                  /* LETAND  */
    LETOR = 355,                   /* LETOR  */
    LETSHL = 356,                  /* LETSHL  */
    LETSHR = 357,                  /* LETSHR  */
    EQ = 358,                      /* EQ  */
    NE = 359,                      /* NE  */
    LT = 360,                      /* LT  */
    LE = 361,                      /* LE  */
    GT = 362,                      /* GT  */
    GE = 363,                      /* GE  */
    IN = 364,                      /* IN  */
    IS = 365,                      /* IS  */
    PLUS = 366,                    /* PLUS  */
    MINUS = 367,                   /* MINUS  */
    OR = 368,                      /* OR  */
    XOR = 369,                     /* XOR  */
    BINOR = 370,                   /* BINOR  */
    MOD = 371,                     /* MOD  */
    DIV = 372,                     /* DIV  */
    DIVR = 373,                    /* DIVR  */
    MUL = 374,                     /* MUL  */
    AND = 375,                     /* AND  */
    SHR = 376,                     /* SHR  */
    SHL = 377,                     /* SHL  */
    BINAND = 378,                  /* BINAND  */
    AS = 379,                      /* AS  */
    UPLUS = 380,                   /* UPLUS  */
    UMINUS = 381,                  /* UMINUS  */
    NOT = 382,                     /* NOT  */
    ADDRESS = 383,                 /* ADDRESS  */
    BINNOT = 384,                  /* BINNOT  */
    EQUAL = 385,                   /* EQUAL  */
    NOTEQUAL = 386,                /* NOTEQUAL  */
    LESSTH = 387,                  /* LESSTH  */
    GREATERTH = 388,               /* GREATERTH  */
    ADD = 389,                     /* ADD  */
    SUBSTRACT = 390,               /* SUBSTRACT  */
    MULTIPLY = 391,                /* MULTIPLY  */
    DIVIDE = 392,                  /* DIVIDE  */
    INTDIVIDE = 393,               /* INTDIVIDE  */
    MODULUS = 394,                 /* MODULUS  */
    IMPLICIT = 395,                /* IMPLICIT  */
    EXPLICIT = 396                 /* EXPLICIT  */
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
