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
    DO = 265,                      /* DO  */
    DOTS = 266,                    /* DOTS  */
    DYNAMIC = 267,                 /* DYNAMIC  */
    ELSE = 268,                    /* ELSE  */
    END = 269,                     /* END  */
    EXCEPT = 270,                  /* EXCEPT  */
    EXTERNAL = 271,                /* EXTERNAL  */
    FIL = 272,                     /* FIL  */
    FINAL = 273,                   /* FINAL  */
    FINALLY = 274,                 /* FINALLY  */
    FAR = 275,                     /* FAR  */
    FOR = 276,                     /* FOR  */
    FORWARD = 277,                 /* FORWARD  */
    FUNCTION = 278,                /* FUNCTION  */
    GOTO = 279,                    /* GOTO  */
    IDENT = 280,                   /* IDENT  */
    ICONST = 281,                  /* ICONST  */
    IF = 282,                      /* IF  */
    IMPLEMENTATION = 283,          /* IMPLEMENTATION  */
    INHERITED = 284,               /* INHERITED  */
    INTERFACE = 285,               /* INTERFACE  */
    LABEL = 286,                   /* LABEL  */
    LOOPHOLE = 287,                /* LOOPHOLE  */
    OBJECT = 288,                  /* OBJECT  */
    OF = 289,                      /* OF  */
    ON = 290,                      /* ON  */
    ORIGIN = 291,                  /* ORIGIN  */
    OTHERWISE = 292,               /* OTHERWISE  */
    OVERLOAD = 293,                /* OVERLOAD  */
    OVERRIDE = 294,                /* OVERRIDE  */
    PACKED = 295,                  /* PACKED  */
    PASCAL = 296,                  /* PASCAL  */
    PROCEDURE = 297,               /* PROCEDURE  */
    PROGRAM = 298,                 /* PROGRAM  */
    PRIVATE = 299,                 /* PRIVATE  */
    PROTECTED = 300,               /* PROTECTED  */
    PUBLIC = 301,                  /* PUBLIC  */
    PUBLISHED = 302,               /* PUBLISHED  */
    RAISE = 303,                   /* RAISE  */
    RCONST = 304,                  /* RCONST  */
    READ = 305,                    /* READ  */
    RECORD = 306,                  /* RECORD  */
    REGISTER = 307,                /* REGISTER  */
    REINTRODUCE = 308,             /* REINTRODUCE  */
    REPEAT = 309,                  /* REPEAT  */
    RETURN = 310,                  /* RETURN  */
    SAFECALL = 311,                /* SAFECALL  */
    SET = 312,                     /* SET  */
    SCONST = 313,                  /* SCONST  */
    STATIC = 314,                  /* STATIC  */
    STDCALL = 315,                 /* STDCALL  */
    STRING = 316,                  /* STRING  */
    THEN = 317,                    /* THEN  */
    TO = 318,                      /* TO  */
    TRY = 319,                     /* TRY  */
    TYPE = 320,                    /* TYPE  */
    UNTIL = 321,                   /* UNTIL  */
    UNIT = 322,                    /* UNIT  */
    UNIT_END = 323,                /* UNIT_END  */
    VAR = 324,                     /* VAR  */
    VARARGS = 325,                 /* VARARGS  */
    VIRTUAL = 326,                 /* VIRTUAL  */
    WHILE = 327,                   /* WHILE  */
    WINAPI = 328,                  /* WINAPI  */
    WITH = 329,                    /* WITH  */
    WRITE = 330,                   /* WRITE  */
    SCOPE = 331,                   /* SCOPE  */
    LET = 332,                     /* LET  */
    LETADD = 333,                  /* LETADD  */
    LETSUB = 334,                  /* LETSUB  */
    LETDIV = 335,                  /* LETDIV  */
    LETMUL = 336,                  /* LETMUL  */
    LETAND = 337,                  /* LETAND  */
    LETOR = 338,                   /* LETOR  */
    LETSHL = 339,                  /* LETSHL  */
    LETSHR = 340,                  /* LETSHR  */
    EQ = 341,                      /* EQ  */
    NE = 342,                      /* NE  */
    LT = 343,                      /* LT  */
    LE = 344,                      /* LE  */
    GT = 345,                      /* GT  */
    GE = 346,                      /* GE  */
    IN = 347,                      /* IN  */
    PLUS = 348,                    /* PLUS  */
    MINUS = 349,                   /* MINUS  */
    OR = 350,                      /* OR  */
    XOR = 351,                     /* XOR  */
    BINOR = 352,                   /* BINOR  */
    MOD = 353,                     /* MOD  */
    DIV = 354,                     /* DIV  */
    DIVR = 355,                    /* DIVR  */
    MUL = 356,                     /* MUL  */
    AND = 357,                     /* AND  */
    SHR = 358,                     /* SHR  */
    SHL = 359,                     /* SHL  */
    BINAND = 360,                  /* BINAND  */
    UPLUS = 361,                   /* UPLUS  */
    UMINUS = 362,                  /* UMINUS  */
    NOT = 363,                     /* NOT  */
    ADDRESS = 364,                 /* ADDRESS  */
    BINNOT = 365                   /* BINNOT  */
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
