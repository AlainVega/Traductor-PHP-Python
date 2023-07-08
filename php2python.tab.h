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
    ARPO = 270,                    /* ARPO  */
    ARPS = 271,                    /* ARPS  */
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
    XOR = 304,                     /* XOR  */
    NOT = 305,                     /* NOT  */
    OSQB = 306,                    /* OSQB  */
    CSQB = 307,                    /* CSQB  */
    OPRT = 308,                    /* OPRT  */
    CPRT = 309,                    /* CPRT  */
    OBRC = 310,                    /* OBRC  */
    CBRC = 311,                    /* CBRC  */
    QUES = 312,                    /* QUES  */
    NOEQ = 313,                    /* NOEQ  */
    NEEE = 314,                    /* NEEE  */
    EEEQ = 315,                    /* EEEQ  */
    LTLT = 316,                    /* LTLT  */
    GTGT = 317,                    /* GTGT  */
    BAND = 318,                    /* BAND  */
    BOR = 319,                     /* BOR  */
    BXOR = 320,                    /* BXOR  */
    EXPO = 321,                    /* EXPO  */
    PLEQ = 322,                    /* PLEQ  */
    MNEQ = 323,                    /* MNEQ  */
    MUEQ = 324,                    /* MUEQ  */
    EXEQ = 325,                    /* EXEQ  */
    DIEQ = 326,                    /* DIEQ  */
    MOEQ = 327,                    /* MOEQ  */
    COEQ = 328,                    /* COEQ  */
    OREQ = 329,                    /* OREQ  */
    ADEQ = 330,                    /* ADEQ  */
    XOEQ = 331,                    /* XOEQ  */
    LLEQ = 332,                    /* LLEQ  */
    GGEQ = 333,                    /* GGEQ  */
    BNOT = 334,                    /* BNOT  */
    ICAS = 335,                    /* ICAS  */
    FCAS = 336,                    /* FCAS  */
    BCAS = 337,                    /* BCAS  */
    SCAS = 338,                    /* SCAS  */
    ACAS = 339,                    /* ACAS  */
    GTE = 340,                     /* GTE  */
    LTE = 341                      /* LTE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "php2python.y"

	int intval;
	char *id;
	char *str;	

#line 156 "php2python.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PHP2PYTHON_TAB_H_INCLUDED  */
