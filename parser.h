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
    VAR = 335,                     /* VAR  */
    VARARGS = 336,                 /* VARARGS  */
    VIRTUAL = 337,                 /* VIRTUAL  */
    WHILE = 338,                   /* WHILE  */
    WINAPI = 339,                  /* WINAPI  */
    WITH = 340,                    /* WITH  */
    WRITE = 341,                   /* WRITE  */
    SCOPE = 342,                   /* SCOPE  */
    LET = 343,                     /* LET  */
    LETADD = 344,                  /* LETADD  */
    LETSUB = 345,                  /* LETSUB  */
    LETDIV = 346,                  /* LETDIV  */
    LETMUL = 347,                  /* LETMUL  */
    LETAND = 348,                  /* LETAND  */
    LETOR = 349,                   /* LETOR  */
    LETSHL = 350,                  /* LETSHL  */
    LETSHR = 351,                  /* LETSHR  */
    EQ = 352,                      /* EQ  */
    NE = 353,                      /* NE  */
    LT = 354,                      /* LT  */
    LE = 355,                      /* LE  */
    GT = 356,                      /* GT  */
    GE = 357,                      /* GE  */
    IN = 358,                      /* IN  */
    IS = 359,                      /* IS  */
    PLUS = 360,                    /* PLUS  */
    MINUS = 361,                   /* MINUS  */
    OR = 362,                      /* OR  */
    XOR = 363,                     /* XOR  */
    BINOR = 364,                   /* BINOR  */
    MOD = 365,                     /* MOD  */
    DIV = 366,                     /* DIV  */
    DIVR = 367,                    /* DIVR  */
    MUL = 368,                     /* MUL  */
    AND = 369,                     /* AND  */
    SHR = 370,                     /* SHR  */
    SHL = 371,                     /* SHL  */
    BINAND = 372,                  /* BINAND  */
    AS = 373,                      /* AS  */
    UPLUS = 374,                   /* UPLUS  */
    UMINUS = 375,                  /* UMINUS  */
    NOT = 376,                     /* NOT  */
    ADDRESS = 377,                 /* ADDRESS  */
    BINNOT = 378,                  /* BINNOT  */
    EQUAL = 379,                   /* EQUAL  */
    NOTEQUAL = 380,                /* NOTEQUAL  */
    LESSTH = 381,                  /* LESSTH  */
    GREATERTH = 382,               /* GREATERTH  */
    ADD = 383,                     /* ADD  */
    SUBSTRACT = 384,               /* SUBSTRACT  */
    MULTIPLY = 385,                /* MULTIPLY  */
    DIVIDE = 386,                  /* DIVIDE  */
    INTDIVIDE = 387,               /* INTDIVIDE  */
    MODULUS = 388,                 /* MODULUS  */
    IMPLICIT = 389,                /* IMPLICIT  */
    EXPLICIT = 390                 /* EXPLICIT  */
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
