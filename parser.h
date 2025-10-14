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
    BEGIN = 260,                   /* BEGIN  */
    CASE = 261,                    /* CASE  */
    CDECL = 262,                   /* CDECL  */
    CLASS = 263,                   /* CLASS  */
    CONST = 264,                   /* CONST  */
    DEFAULT = 265,                 /* DEFAULT  */
    DO = 266,                      /* DO  */
    DOTS = 267,                    /* DOTS  */
    DYNAMIC = 268,                 /* DYNAMIC  */
    ELSE = 269,                    /* ELSE  */
    END = 270,                     /* END  */
    EXCEPT = 271,                  /* EXCEPT  */
    EXTERNAL = 272,                /* EXTERNAL  */
    FIL = 273,                     /* FIL  */
    FINAL = 274,                   /* FINAL  */
    FINALLY = 275,                 /* FINALLY  */
    FFALSE = 276,                  /* FFALSE  */
    FAR = 277,                     /* FAR  */
    FOR = 278,                     /* FOR  */
    FORWARD = 279,                 /* FORWARD  */
    FUNCTION = 280,                /* FUNCTION  */
    GOTO = 281,                    /* GOTO  */
    IDENT = 282,                   /* IDENT  */
    ICONST = 283,                  /* ICONST  */
    IF = 284,                      /* IF  */
    IMPLEMENTATION = 285,          /* IMPLEMENTATION  */
    INDEX = 286,                   /* INDEX  */
    INHERITED = 287,               /* INHERITED  */
    INTERFACE = 288,               /* INTERFACE  */
    LABEL = 289,                   /* LABEL  */
    LOOPHOLE = 290,                /* LOOPHOLE  */
    OBJECT = 291,                  /* OBJECT  */
    OF = 292,                      /* OF  */
    ON = 293,                      /* ON  */
    ORIGIN = 294,                  /* ORIGIN  */
    OTHERWISE = 295,               /* OTHERWISE  */
    OVERLOAD = 296,                /* OVERLOAD  */
    OVERRIDE = 297,                /* OVERRIDE  */
    PACKED = 298,                  /* PACKED  */
    PASCAL = 299,                  /* PASCAL  */
    PROCEDURE = 300,               /* PROCEDURE  */
    PROGRAM = 301,                 /* PROGRAM  */
    PROPERTY = 302,                /* PROPERTY  */
    PRIVATE = 303,                 /* PRIVATE  */
    PROTECTED = 304,               /* PROTECTED  */
    PUBLIC = 305,                  /* PUBLIC  */
    PUBLISHED = 306,               /* PUBLISHED  */
    RAISE = 307,                   /* RAISE  */
    RCONST = 308,                  /* RCONST  */
    READ = 309,                    /* READ  */
    RECORD = 310,                  /* RECORD  */
    REGISTER = 311,                /* REGISTER  */
    REINTRODUCE = 312,             /* REINTRODUCE  */
    REPEAT = 313,                  /* REPEAT  */
    RESOURCESTRING = 314,          /* RESOURCESTRING  */
    RETURN = 315,                  /* RETURN  */
    SAFECALL = 316,                /* SAFECALL  */
    SET = 317,                     /* SET  */
    SCONST = 318,                  /* SCONST  */
    STATIC = 319,                  /* STATIC  */
    STDCALL = 320,                 /* STDCALL  */
    STORED = 321,                  /* STORED  */
    STRING = 322,                  /* STRING  */
    THEN = 323,                    /* THEN  */
    TO = 324,                      /* TO  */
    TTRUE = 325,                   /* TTRUE  */
    TRY = 326,                     /* TRY  */
    TYPE = 327,                    /* TYPE  */
    UNTIL = 328,                   /* UNTIL  */
    UNIT = 329,                    /* UNIT  */
    UNIT_END = 330,                /* UNIT_END  */
    VAR = 331,                     /* VAR  */
    VARARGS = 332,                 /* VARARGS  */
    VIRTUAL = 333,                 /* VIRTUAL  */
    WHILE = 334,                   /* WHILE  */
    WINAPI = 335,                  /* WINAPI  */
    WITH = 336,                    /* WITH  */
    WRITE = 337,                   /* WRITE  */
    SCOPE = 338,                   /* SCOPE  */
    LET = 339,                     /* LET  */
    LETADD = 340,                  /* LETADD  */
    LETSUB = 341,                  /* LETSUB  */
    LETDIV = 342,                  /* LETDIV  */
    LETMUL = 343,                  /* LETMUL  */
    LETAND = 344,                  /* LETAND  */
    LETOR = 345,                   /* LETOR  */
    LETSHL = 346,                  /* LETSHL  */
    LETSHR = 347,                  /* LETSHR  */
    EQ = 348,                      /* EQ  */
    NE = 349,                      /* NE  */
    LT = 350,                      /* LT  */
    LE = 351,                      /* LE  */
    GT = 352,                      /* GT  */
    GE = 353,                      /* GE  */
    IN = 354,                      /* IN  */
    PLUS = 355,                    /* PLUS  */
    MINUS = 356,                   /* MINUS  */
    OR = 357,                      /* OR  */
    XOR = 358,                     /* XOR  */
    BINOR = 359,                   /* BINOR  */
    MOD = 360,                     /* MOD  */
    DIV = 361,                     /* DIV  */
    DIVR = 362,                    /* DIVR  */
    MUL = 363,                     /* MUL  */
    AND = 364,                     /* AND  */
    SHR = 365,                     /* SHR  */
    SHL = 366,                     /* SHL  */
    BINAND = 367,                  /* BINAND  */
    UPLUS = 368,                   /* UPLUS  */
    UMINUS = 369,                  /* UMINUS  */
    NOT = 370,                     /* NOT  */
    ADDRESS = 371,                 /* ADDRESS  */
    BINNOT = 372                   /* BINNOT  */
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
   
    import_list_node     *n_imp; 


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;


int zzparse (void);


#endif /* !YY_ZZ_PARSER_H_INCLUDED  */
