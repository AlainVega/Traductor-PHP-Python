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
    BOOL = 262,                    /* BOOL  */
    NAME = 263,                    /* NAME  */
    SPHP = 264,                    /* SPHP  */
    EPHP = 265,                    /* EPHP  */
    FRC = 266,                     /* FRC  */
    AS = 267,                      /* AS  */
    ARRY = 268,                    /* ARRY  */
    APOP = 269,                    /* APOP  */
    APUS = 270,                    /* APUS  */
    ASUM = 271,                    /* ASUM  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    ELIF = 274,                    /* ELIF  */
    SWIH = 275,                    /* SWIH  */
    CASE = 276,                    /* CASE  */
    BRK = 277,                     /* BRK  */
    CONT = 278,                    /* CONT  */
    DFT = 279,                     /* DFT  */
    FUNC = 280,                    /* FUNC  */
    WHIL = 281,                    /* WHIL  */
    FOR = 282,                     /* FOR  */
    RTN = 283,                     /* RTN  */
    PRNT = 284,                    /* PRNT  */
    EQ = 285,                      /* EQ  */
    SC = 286,                      /* SC  */
    CL = 287,                      /* CL  */
    COMM = 288,                    /* COMM  */
    PLUS = 289,                    /* PLUS  */
    MINS = 290,                    /* MINS  */
    DIV = 291,                     /* DIV  */
    MULT = 292,                    /* MULT  */
    MOD = 293,                     /* MOD  */
    CCTN = 294,                    /* CCTN  */
    EEQ = 295,                     /* EEQ  */
    NEQ = 296,                     /* NEQ  */
    GT = 297,                      /* GT  */
    LT = 298,                      /* LT  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    PPL = 301,                     /* PPL  */
    MMN = 302,                     /* MMN  */
    SOR = 303,                     /* SOR  */
    NOT = 304,                     /* NOT  */
    OSQB = 305,                    /* OSQB  */
    CSQB = 306,                    /* CSQB  */
    OPRT = 307,                    /* OPRT  */
    CPRT = 308,                    /* CPRT  */
    OBRC = 309,                    /* OBRC  */
    CBRC = 310,                    /* CBRC  */
    GTE = 311,                     /* GTE  */
    LTE = 312                      /* LTE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "php2python.y"

	int intval;
	char *id;
	char *str;	

#line 127 "php2python.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PHP2PYTHON_TAB_H_INCLUDED  */
