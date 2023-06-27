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

#ifndef YY_YY_PHP2PYTHON_TAB_H_INCLUDED
# define YY_YY_PHP2PYTHON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    SPHP = 258,                    /* SPHP  */
    EPHP = 259,                    /* EPHP  */
    NUM = 260,                     /* NUM  */
    ID = 261,                      /* ID  */
    BOOL = 262,                    /* BOOL  */
    STR = 263,                     /* STR  */
    NAME = 264,                    /* NAME  */
    FRC = 265,                     /* FRC  */
    AS = 266,                      /* AS  */
    ARR = 267,                     /* ARR  */
    APOP = 268,                    /* APOP  */
    APUS = 269,                    /* APUS  */
    ASUM = 270,                    /* ASUM  */
    ECH = 271,                     /* ECH  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    ELIF = 274,                    /* ELIF  */
    SWIH = 275,                    /* SWIH  */
    CASE = 276,                    /* CASE  */
    BRK = 277,                     /* BRK  */
    DFT = 278,                     /* DFT  */
    FUNC = 279,                    /* FUNC  */
    WHIL = 280,                    /* WHIL  */
    RTN = 281,                     /* RTN  */
    PRNT = 282,                    /* PRNT  */
    EQ = 283,                      /* EQ  */
    SC = 284,                      /* SC  */
    CL = 285,                      /* CL  */
    CM = 286,                      /* CM  */
    PLUS = 287,                    /* PLUS  */
    MINS = 288,                    /* MINS  */
    DIV = 289,                     /* DIV  */
    MULT = 290,                    /* MULT  */
    MD = 291,                      /* MD  */
    CCTN = 292,                    /* CCTN  */
    EEQ = 293,                     /* EEQ  */
    NEQ = 294,                     /* NEQ  */
    GT = 295,                      /* GT  */
    LT = 296,                      /* LT  */
    GE = 297,                      /* GE  */
    LE = 298,                      /* LE  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    PPL = 301,                     /* PPL  */
    MMN = 302,                     /* MMN  */
    SOR = 303,                     /* SOR  */
    NOT = 304,                     /* NOT  */
    SQ1 = 305,                     /* SQ1  */
    SQ2 = 306,                     /* SQ2  */
    RD1 = 307,                     /* RD1  */
    RD2 = 308,                     /* RD2  */
    CR1 = 309,                     /* CR1  */
    CR2 = 310                      /* CR2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PHP2PYTHON_TAB_H_INCLUDED  */