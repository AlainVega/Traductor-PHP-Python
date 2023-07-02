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
    ID = 258,                      /* ID  */
    STR = 259,                     /* STR  */
    NUM = 260,                     /* NUM  */
    ECH = 261,                     /* ECH  */
    SPHP = 262,                    /* SPHP  */
    EPHP = 263,                    /* EPHP  */
    BOOL = 264,                    /* BOOL  */
    NAME = 265,                    /* NAME  */
    FRC = 266,                     /* FRC  */
    AS = 267,                      /* AS  */
    ARR = 268,                     /* ARR  */
    APOP = 269,                    /* APOP  */
    APUS = 270,                    /* APUS  */
    ASUM = 271,                    /* ASUM  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    ELIF = 274,                    /* ELIF  */
    SWIH = 275,                    /* SWIH  */
    CASE = 276,                    /* CASE  */
    BRK = 277,                     /* BRK  */
    DFT = 278,                     /* DFT  */
    FUNC = 279,                    /* FUNC  */
    WHIL = 280,                    /* WHIL  */
    FOR = 281,                     /* FOR  */
    RTN = 282,                     /* RTN  */
    PRNT = 283,                    /* PRNT  */
    EQ = 284,                      /* EQ  */
    SC = 285,                      /* SC  */
    CL = 286,                      /* CL  */
    CM = 287,                      /* CM  */
    PLUS = 288,                    /* PLUS  */
    MINS = 289,                    /* MINS  */
    DIV = 290,                     /* DIV  */
    MULT = 291,                    /* MULT  */
    MOD = 292,                     /* MOD  */
    CCTN = 293,                    /* CCTN  */
    EEQ = 294,                     /* EEQ  */
    NEQ = 295,                     /* NEQ  */
    GT = 296,                      /* GT  */
    LT = 297,                      /* LT  */
    GE = 298,                      /* GE  */
    LE = 299,                      /* LE  */
    AND = 300,                     /* AND  */
    OR = 301,                      /* OR  */
    PPL = 302,                     /* PPL  */
    MMN = 303,                     /* MMN  */
    SOR = 304,                     /* SOR  */
    NOT = 305,                     /* NOT  */
    SQ1 = 306,                     /* SQ1  */
    SQ2 = 307,                     /* SQ2  */
    OPRT = 308,                    /* OPRT  */
    CPRT = 309,                    /* CPRT  */
    OBRC = 310,                    /* OBRC  */
    CBRC = 311                     /* CBRC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "php2python.y"

	int intval;
	char *id;
	char *str;	

#line 126 "php2python.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PHP2PYTHON_TAB_H_INCLUDED  */
