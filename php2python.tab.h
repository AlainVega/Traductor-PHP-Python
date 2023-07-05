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
    CMNT = 264,                    /* CMNT  */
    SPHP = 265,                    /* SPHP  */
    EPHP = 266,                    /* EPHP  */
    FRC = 267,                     /* FRC  */
    AS = 268,                      /* AS  */
    ARRY = 269,                    /* ARRY  */
    APOP = 270,                    /* APOP  */
    APUS = 271,                    /* APUS  */
    ASUM = 272,                    /* ASUM  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    ELIF = 275,                    /* ELIF  */
    SWIH = 276,                    /* SWIH  */
    CASE = 277,                    /* CASE  */
    BRK = 278,                     /* BRK  */
    CONT = 279,                    /* CONT  */
    DFT = 280,                     /* DFT  */
    FUNC = 281,                    /* FUNC  */
    WHIL = 282,                    /* WHIL  */
    FOR = 283,                     /* FOR  */
    RTN = 284,                     /* RTN  */
    PRNT = 285,                    /* PRNT  */
    EQ = 286,                      /* EQ  */
    SC = 287,                      /* SC  */
    CL = 288,                      /* CL  */
    COMM = 289,                    /* COMM  */
    PLUS = 290,                    /* PLUS  */
    MINS = 291,                    /* MINS  */
    DIV = 292,                     /* DIV  */
    MULT = 293,                    /* MULT  */
    MOD = 294,                     /* MOD  */
    CCTN = 295,                    /* CCTN  */
    EEQ = 296,                     /* EEQ  */
    NEQ = 297,                     /* NEQ  */
    GT = 298,                      /* GT  */
    LT = 299,                      /* LT  */
    AND = 300,                     /* AND  */
    OR = 301,                      /* OR  */
    PPL = 302,                     /* PPL  */
    MMN = 303,                     /* MMN  */
    SOR = 304,                     /* SOR  */
    NOT = 305,                     /* NOT  */
    OSQB = 306,                    /* OSQB  */
    CSQB = 307,                    /* CSQB  */
    OPRT = 308,                    /* OPRT  */
    CPRT = 309,                    /* CPRT  */
    OBRC = 310,                    /* OBRC  */
    CBRC = 311,                    /* CBRC  */
    GTE = 312,                     /* GTE  */
    LTE = 313                      /* LTE  */
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

#line 128 "php2python.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PHP2PYTHON_TAB_H_INCLUDED  */
