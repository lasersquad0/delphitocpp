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
    OBJECT = 291,                  /* OBJECT  */
    OF = 292,                      /* OF  */
    ON = 293,                      /* ON  */
    ORIGIN = 294,                  /* ORIGIN  */
    OTHERWISE = 295,               /* OTHERWISE  */
    OVERLOAD = 296,                /* OVERLOAD  */
    OVERRIDE = 297,                /* OVERRIDE  */
    OUT = 298,                     /* OUT  */
    PACKED = 299,                  /* PACKED  */
    PASCAL = 300,                  /* PASCAL  */
    PROCEDURE = 301,               /* PROCEDURE  */
    PROGRAM = 302,                 /* PROGRAM  */
    PROPERTY = 303,                /* PROPERTY  */
    PRIVATE = 304,                 /* PRIVATE  */
    PROTECTED = 305,               /* PROTECTED  */
    PUBLIC = 306,                  /* PUBLIC  */
    PUBLISHED = 307,               /* PUBLISHED  */
    RAISE = 308,                   /* RAISE  */
    RCONST = 309,                  /* RCONST  */
    READ = 310,                    /* READ  */
    RECORD = 311,                  /* RECORD  */
    REGISTER = 312,                /* REGISTER  */
    REINTRODUCE = 313,             /* REINTRODUCE  */
    REPEAT = 314,                  /* REPEAT  */
    RESOURCESTRING = 315,          /* RESOURCESTRING  */
    RETURN = 316,                  /* RETURN  */
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
    PLUS = 356,                    /* PLUS  */
    MINUS = 357,                   /* MINUS  */
    OR = 358,                      /* OR  */
    XOR = 359,                     /* XOR  */
    BINOR = 360,                   /* BINOR  */
    MOD = 361,                     /* MOD  */
    DIV = 362,                     /* DIV  */
    DIVR = 363,                    /* DIVR  */
    MUL = 364,                     /* MUL  */
    AND = 365,                     /* AND  */
    SHR = 366,                     /* SHR  */
    SHL = 367,                     /* SHL  */
    BINAND = 368,                  /* BINAND  */
    UPLUS = 369,                   /* UPLUS  */
    UMINUS = 370,                  /* UMINUS  */
    NOT = 371,                     /* NOT  */
    ADDRESS = 372,                 /* ADDRESS  */
    BINNOT = 373                   /* BINNOT  */
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
