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
    FINALIZATION = 275,            /* FINALIZATION  */
    FINALLY = 276,                 /* FINALLY  */
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
    INITIALIZATION = 288,          /* INITIALIZATION  */
    INTERFACE = 289,               /* INTERFACE  */
    LABEL = 290,                   /* LABEL  */
    LOOPHOLE = 291,                /* LOOPHOLE  */
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
    RETURN = 317,                  /* RETURN  */
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
    UPLUS = 370,                   /* UPLUS  */
    UMINUS = 371,                  /* UMINUS  */
    NOT = 372,                     /* NOT  */
    ADDRESS = 373,                 /* ADDRESS  */
    BINNOT = 374                   /* BINNOT  */
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
