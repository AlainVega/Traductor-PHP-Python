/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "php2python.y"

    #include <stdio.h>
    #include "functions.h"
    #include "symboltable.h"
    // Estos valores se utilizan como tipo para la tabla de symbolos
    #define VAR 0
    #define FUN 1
    int yylex(void);
    int yyerror(char *message);
    extern int yylineno;
    int tabcount = 0;
    // 0: No es array, 1: Es un array.
    // Sirve para marcar el contexto durante una declaracion para agregar el simbolo a la tabla.
    int is_variable_array = 0;

#line 87 "php2python.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "php2python.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_STR = 4,                        /* STR  */
  YYSYMBOL_NUM = 5,                        /* NUM  */
  YYSYMBOL_ECH = 6,                        /* ECH  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_NAME = 8,                       /* NAME  */
  YYSYMBOL_CMNT = 9,                       /* CMNT  */
  YYSYMBOL_SPHP = 10,                      /* SPHP  */
  YYSYMBOL_EPHP = 11,                      /* EPHP  */
  YYSYMBOL_FRC = 12,                       /* FRC  */
  YYSYMBOL_AS = 13,                        /* AS  */
  YYSYMBOL_ARRY = 14,                      /* ARRY  */
  YYSYMBOL_ARPO = 15,                      /* ARPO  */
  YYSYMBOL_ARPS = 16,                      /* ARPS  */
  YYSYMBOL_ASUM = 17,                      /* ASUM  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_ELIF = 20,                      /* ELIF  */
  YYSYMBOL_SWIH = 21,                      /* SWIH  */
  YYSYMBOL_CASE = 22,                      /* CASE  */
  YYSYMBOL_BRK = 23,                       /* BRK  */
  YYSYMBOL_CONT = 24,                      /* CONT  */
  YYSYMBOL_DFT = 25,                       /* DFT  */
  YYSYMBOL_FUNC = 26,                      /* FUNC  */
  YYSYMBOL_WHIL = 27,                      /* WHIL  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_RTN = 29,                       /* RTN  */
  YYSYMBOL_PRNT = 30,                      /* PRNT  */
  YYSYMBOL_EQ = 31,                        /* EQ  */
  YYSYMBOL_SC = 32,                        /* SC  */
  YYSYMBOL_CL = 33,                        /* CL  */
  YYSYMBOL_COMM = 34,                      /* COMM  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_MINS = 36,                      /* MINS  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_MULT = 38,                      /* MULT  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_CCTN = 40,                      /* CCTN  */
  YYSYMBOL_EEQ = 41,                       /* EEQ  */
  YYSYMBOL_NEQ = 42,                       /* NEQ  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_LT = 44,                        /* LT  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_OR = 46,                        /* OR  */
  YYSYMBOL_PPL = 47,                       /* PPL  */
  YYSYMBOL_MMN = 48,                       /* MMN  */
  YYSYMBOL_XOR = 49,                       /* XOR  */
  YYSYMBOL_NOT = 50,                       /* NOT  */
  YYSYMBOL_OSQB = 51,                      /* OSQB  */
  YYSYMBOL_CSQB = 52,                      /* CSQB  */
  YYSYMBOL_OPRT = 53,                      /* OPRT  */
  YYSYMBOL_CPRT = 54,                      /* CPRT  */
  YYSYMBOL_OBRC = 55,                      /* OBRC  */
  YYSYMBOL_CBRC = 56,                      /* CBRC  */
  YYSYMBOL_QUES = 57,                      /* QUES  */
  YYSYMBOL_NOEQ = 58,                      /* NOEQ  */
  YYSYMBOL_NEEE = 59,                      /* NEEE  */
  YYSYMBOL_EEEQ = 60,                      /* EEEQ  */
  YYSYMBOL_LTLT = 61,                      /* LTLT  */
  YYSYMBOL_GTGT = 62,                      /* GTGT  */
  YYSYMBOL_BAND = 63,                      /* BAND  */
  YYSYMBOL_BOR = 64,                       /* BOR  */
  YYSYMBOL_BXOR = 65,                      /* BXOR  */
  YYSYMBOL_EXPO = 66,                      /* EXPO  */
  YYSYMBOL_PLEQ = 67,                      /* PLEQ  */
  YYSYMBOL_MNEQ = 68,                      /* MNEQ  */
  YYSYMBOL_MUEQ = 69,                      /* MUEQ  */
  YYSYMBOL_EXEQ = 70,                      /* EXEQ  */
  YYSYMBOL_DIEQ = 71,                      /* DIEQ  */
  YYSYMBOL_MOEQ = 72,                      /* MOEQ  */
  YYSYMBOL_COEQ = 73,                      /* COEQ  */
  YYSYMBOL_OREQ = 74,                      /* OREQ  */
  YYSYMBOL_ADEQ = 75,                      /* ADEQ  */
  YYSYMBOL_XOEQ = 76,                      /* XOEQ  */
  YYSYMBOL_LLEQ = 77,                      /* LLEQ  */
  YYSYMBOL_GGEQ = 78,                      /* GGEQ  */
  YYSYMBOL_BNOT = 79,                      /* BNOT  */
  YYSYMBOL_ICAS = 80,                      /* ICAS  */
  YYSYMBOL_FCAS = 81,                      /* FCAS  */
  YYSYMBOL_BCAS = 82,                      /* BCAS  */
  YYSYMBOL_SCAS = 83,                      /* SCAS  */
  YYSYMBOL_ACAS = 84,                      /* ACAS  */
  YYSYMBOL_GTE = 85,                       /* GTE  */
  YYSYMBOL_LTE = 86,                       /* LTE  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_program = 88,                   /* program  */
  YYSYMBOL_89_1 = 89,                      /* $@1  */
  YYSYMBOL_statements = 90,                /* statements  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_declaration = 92,               /* declaration  */
  YYSYMBOL_echo = 93,                      /* echo  */
  YYSYMBOL_print = 94,                     /* print  */
  YYSYMBOL_conditional = 95,               /* conditional  */
  YYSYMBOL_statementsinifblock = 96,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 97,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 98,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 99,      /* statementinelseblock  */
  YYSYMBOL_statementsinelifblock = 100,    /* statementsinelifblock  */
  YYSYMBOL_statementinelifblock = 101,     /* statementinelifblock  */
  YYSYMBOL_switch = 102,                   /* switch  */
  YYSYMBOL_cases = 103,                    /* cases  */
  YYSYMBOL_case = 104,                     /* case  */
  YYSYMBOL_statementsInSwitchCase = 105,   /* statementsInSwitchCase  */
  YYSYMBOL_statementInSwitchCase = 106,    /* statementInSwitchCase  */
  YYSYMBOL_while = 107,                    /* while  */
  YYSYMBOL_statementsInWhileBlock = 108,   /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 109,    /* statementInWhileBlock  */
  YYSYMBOL_break = 110,                    /* break  */
  YYSYMBOL_continue = 111,                 /* continue  */
  YYSYMBOL_functionDefinition = 112,       /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 113, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 114, /* statementInFunctionBlock  */
  YYSYMBOL_return = 115,                   /* return  */
  YYSYMBOL_anonymousFunctionStatement = 116, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 117,                     /* expr  */
  YYSYMBOL_functionCall = 118,             /* functionCall  */
  YYSYMBOL_parameters = 119,               /* parameters  */
  YYSYMBOL_arguments = 120,                /* arguments  */
  YYSYMBOL_argument = 121,                 /* argument  */
  YYSYMBOL_defaultValue = 122,             /* defaultValue  */
  YYSYMBOL_foreach = 123,                  /* foreach  */
  YYSYMBOL_statementsInForeach = 124,      /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 125,       /* statementInForeach  */
  YYSYMBOL_for = 126,                      /* for  */
  YYSYMBOL_statementsInFor = 127,          /* statementsInFor  */
  YYSYMBOL_statementInFor = 128            /* statementInFor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  429

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    53,    55,    56,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    87,    88,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   106,   107,
     110,   111,   112,   113,   114,   117,   118,   121,   122,   123,
     124,   125,   126,   129,   130,   133,   134,   135,   136,   137,
     138,   140,   141,   142,   145,   146,   148,   149,   152,   153,
     154,   155,   156,   157,   159,   160,   163,   164,   165,   166,
     167,   168,   169,   170,   172,   173,   174,   176,   177,   180,
     181,   182,   183,   184,   186,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   253,   255,
     256,   257,   260,   261,   264,   265,   266,   267,   270,   271,
     272,   274,   275,   276,   278,   279,   282,   283,   284,   285,
     286,   289,   290,   292,   293,   296,   297,   298,   299,   300
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "STR", "NUM",
  "ECH", "BOOL", "NAME", "CMNT", "SPHP", "EPHP", "FRC", "AS", "ARRY",
  "ARPO", "ARPS", "ASUM", "IF", "ELSE", "ELIF", "SWIH", "CASE", "BRK",
  "CONT", "DFT", "FUNC", "WHIL", "FOR", "RTN", "PRNT", "EQ", "SC", "CL",
  "COMM", "PLUS", "MINS", "DIV", "MULT", "MOD", "CCTN", "EEQ", "NEQ", "GT",
  "LT", "AND", "OR", "PPL", "MMN", "XOR", "NOT", "OSQB", "CSQB", "OPRT",
  "CPRT", "OBRC", "CBRC", "QUES", "NOEQ", "NEEE", "EEEQ", "LTLT", "GTGT",
  "BAND", "BOR", "BXOR", "EXPO", "PLEQ", "MNEQ", "MUEQ", "EXEQ", "DIEQ",
  "MOEQ", "COEQ", "OREQ", "ADEQ", "XOEQ", "LLEQ", "GGEQ", "BNOT", "ICAS",
  "FCAS", "BCAS", "SCAS", "ACAS", "GTE", "LTE", "$accept", "program",
  "$@1", "statements", "statement", "declaration", "echo", "print",
  "conditional", "statementsinifblock", "statementinifblock",
  "statementsinelseblock", "statementinelseblock", "statementsinelifblock",
  "statementinelifblock", "switch", "cases", "case",
  "statementsInSwitchCase", "statementInSwitchCase", "while",
  "statementsInWhileBlock", "statementInWhileBlock", "break", "continue",
  "functionDefinition", "statementsInFunctionBlock",
  "statementInFunctionBlock", "return", "anonymousFunctionStatement",
  "expr", "functionCall", "parameters", "arguments", "argument",
  "defaultValue", "foreach", "statementsInForeach", "statementInForeach",
  "for", "statementsInFor", "statementInFor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-339)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,  -339,    39,  -339,  -339,    16,  1131,  -339,  -339,   494,
    -339,    -4,  -339,  -339,    17,    19,    23,    48,    68,    71,
      72,     0,    76,    78,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,  -339,
      28,    42,    87,  -339,  -339,  -339,  -339,    95,   624,  -339,
    -339,  -339,   545,   130,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,    86,    85,  1111,    99,
      -1,   494,   136,   138,   596,   494,   140,    91,    99,   494,
     142,  1111,  1111,  1185,  1185,  1185,  1185,  1185,  1111,   -23,
     914,  1185,  1185,  1185,  1185,  1185,  1185,  -339,  -339,  -339,
    -339,  -339,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,  -339,  -339,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,  -339,
    1111,    96,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,
    1111,  1111,  1111,  1111,   118,  -339,  -339,  -339,    97,   116,
    -339,   139,   100,    99,   -18,   113,   134,    14,   -16,   947,
     131,    99,   132,   980,  1147,   152,   494,  -339,  -339,  1185,
    1185,  1185,  1185,  1185,  1185,  1194,  1194,  1194,  1194,  1185,
    1185,  1185,   728,  1194,  1194,  1194,  1185,  1185,  1185,  1185,
    1185,  1185,  1194,  1194,  -339,    52,  -339,    99,   185,    99,
     144,  -339,  -339,   494,  -339,  -339,   893,   143,   145,   148,
     149,   494,  1111,   494,  -339,  -339,   151,   156,   193,     7,
    -339,  -339,   180,   194,   197,   -14,   198,  -339,   162,   443,
    -339,   659,  1185,   163,   210,   228,  -339,   232,  -339,  -339,
    -339,   268,   183,  -339,    -8,  -339,  -339,   201,   211,   212,
    -339,  -339,  -339,   213,   190,   694,  -339,  -339,   184,   545,
    -339,   248,   202,    74,  -339,  -339,  -339,   220,   223,   225,
    -339,  -339,   227,   494,   494,   234,  -339,  -339,   326,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,   233,
     237,   238,  -339,  -339,   244,   246,   253,   206,  1013,   528,
     226,   235,   312,   236,   191,  -339,  -339,  -339,  -339,  1046,
     762,  -339,  -339,  -339,   259,   260,   261,  -339,   269,  -339,
    -339,  -339,  -339,  -339,  -339,   245,   247,  -339,  -339,   273,
     274,   277,   279,  -339,   255,  -339,  -339,  -339,   494,  -339,
    -339,   828,  -339,   186,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,   561,   219,  1079,  -339,  -339,
     282,   285,   290,  -339,   306,   299,   117,  -339,   301,   305,
     311,  -339,   313,   579,   809,   826,  -339,  -339,   857,   278,
    -339,  -339,  -339,   861,  -339,   315,  -339,  -339,  -339,  -339,
    -339,  -339,   317,   320,   321,   322,  -339,  -339,  -339,  -339,
     338,   339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
     310,   871,   875,   407,   340,  -339,  -339,  -339,  -339,  -339,
     889,   424,   459,  -339,  -339,  -339,  -339,   510,  -339
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,   118,   117,   116,     0,
     119,     0,    17,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,    10,    11,    12,    15,     0,     0,   120,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,    32,   172,
       0,   169,     0,     0,   169,     0,     0,     0,   172,     0,
       0,   104,    33,   121,   122,   130,   132,   134,   170,     0,
       0,   135,   163,   164,   165,   166,   167,     6,     8,     9,
      16,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      18,     0,    20,    21,    22,    24,    23,    25,    26,    28,
      27,    29,    30,    31,   175,   179,   178,   180,     0,   173,
     177,     0,     0,   172,     0,     0,     0,   118,     0,     0,
       0,   172,     0,     0,     0,     0,     0,   154,   155,   123,
     124,   126,   125,   127,   129,   146,   148,   142,   143,   136,
     138,   140,     0,   149,   150,   147,   151,   152,   137,   139,
     141,   128,   144,   145,   158,     0,   168,     0,     0,   172,
       0,   153,   160,   169,   161,   162,     0,     0,     0,     0,
       0,     0,   171,     0,   176,   174,     0,     0,     0,     0,
      54,    48,     0,     0,     0,    34,     0,    72,     0,     0,
      84,     0,   156,     0,     0,     0,   159,     0,    50,    51,
      52,     0,     0,    53,     0,    97,   115,     0,     0,     0,
     109,   110,   113,     0,     0,     0,   111,   112,     0,     0,
     184,     0,     0,    35,    49,    62,    55,     0,     0,     0,
      60,    36,     0,     0,     0,     0,    71,    73,     0,   105,
     107,   108,   114,   157,   106,    93,    94,    95,    83,     0,
       0,     0,    89,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    61,     0,
       0,    76,   103,    96,     0,     0,     0,    98,     0,    86,
      87,    88,    91,    92,    90,     0,     0,   190,   181,     0,
       0,     0,     0,   185,     0,   184,    55,    37,     0,    38,
      56,     0,    76,    75,    99,   100,   101,   102,   193,   193,
     186,   187,   188,   189,   184,     0,     0,     0,    70,    63,
       0,     0,     0,    68,     0,     0,     0,    82,     0,     0,
       0,    77,     0,     0,     0,     0,   183,    39,     0,     0,
      65,    66,    67,     0,    69,     0,    78,    79,    80,    81,
     199,   191,     0,     0,     0,     0,   194,   192,   182,    63,
       0,     0,    64,    55,    40,    74,   195,   196,   197,   198,
       0,     0,     0,     0,     0,    55,    41,    55,    42,    44,
       0,     0,     0,    55,    43,    45,    46,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,  -339,  -339,    -5,     5,    21,    10,  -339,
     126,  -281,  -229,   -27,  -338,  -339,  -339,  -339,    33,  -339,
     157,  -339,  -339,  -339,  -339,   161,  -339,  -339,    66,  -339,
      53,  -339,   -70,   -69,   188,   182,   164,  -300,  -339,   168,
      32,  -339
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    39,   267,   268,   269,   270,   237,
     225,   304,   340,   379,   402,    44,   244,   277,   343,   371,
      45,   258,   293,   294,   295,    46,   278,   317,   272,   254,
      88,    49,    89,   148,   149,   150,    50,   299,   333,    51,
     373,   396
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,   154,   151,   364,   158,   241,   242,     1,    77,   162,
      41,   166,   271,   152,   274,    43,   166,   275,   166,     6,
       7,     8,     9,    10,    11,    12,    42,    13,    14,   167,
      15,    16,    17,    18,    19,   355,   201,    20,   205,     4,
     400,   166,    21,    22,    23,    24,    25,   129,   276,    69,
     153,    26,    27,    78,   375,   356,   145,   146,    48,   147,
      97,   236,    68,    28,    29,    53,    30,    31,   204,    32,
      70,    47,    71,   337,    98,   165,    72,    81,    82,    83,
      84,    85,    86,    87,   200,    90,    91,    92,    93,    94,
      95,    96,   208,   302,   303,    33,    34,    35,    36,    37,
      38,    73,   144,   145,   146,   130,   147,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    99,
     164,    74,   413,     9,    75,    76,   367,   100,   159,    79,
     217,    80,   163,   219,   421,   131,   422,    53,    78,   155,
     385,   156,   427,   160,   161,   164,    24,    25,   194,   195,
     197,   196,   198,   199,   404,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   202,   203,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   416,   418,   211,   207,   209,   164,   216,   164,
       9,   424,     9,   285,   164,   367,   218,     9,   227,   228,
     265,   222,    19,   229,   230,   233,   235,   286,   287,    19,
     234,   223,   238,    24,    25,    24,    25,   245,   260,   212,
      24,    25,   164,   261,   247,     9,   239,   224,   265,   240,
     243,   262,   222,   279,   248,   164,   273,    19,     9,   250,
     288,   220,   223,   280,   281,   282,   283,   339,    24,    25,
     249,   300,   305,   289,   297,   306,   301,   307,   224,   308,
     325,    24,    25,   290,   231,   319,   232,   311,   292,   320,
     321,   164,   226,   314,     9,   377,   322,   265,   323,   291,
     334,   164,   255,   315,     9,   324,    19,   358,   263,   338,
     335,   344,   345,   346,   329,   253,    19,    24,    25,   316,
     348,   347,   349,   226,   330,   350,   351,    24,    25,   352,
     354,   353,   298,   164,   380,   164,     9,   381,     9,   358,
     331,   265,   382,   266,   296,   383,   309,   310,    19,   164,
      19,   384,     9,   386,   401,   312,   360,   387,   368,    24,
      25,    24,    25,   388,   318,   389,   361,   405,   369,   406,
     329,   363,   407,   408,   409,    24,    25,   411,   412,   420,
     330,   368,   362,   264,   370,   332,   414,   336,   392,   392,
     329,   369,   410,   360,   360,   366,   331,   214,   393,   393,
     330,   374,   313,   361,   361,   215,   251,   370,   363,   363,
     252,   357,     0,   256,   394,   394,   331,   257,     0,   362,
     362,     0,     0,     0,     0,   360,     0,   365,     0,   372,
     164,     0,     0,     9,     0,   361,   265,     0,     0,     0,
     363,   332,     0,     0,     0,    19,     0,   164,     0,     0,
       9,   362,   372,   265,     0,     0,    24,    25,     0,   395,
     395,   332,    19,     0,   365,   365,     6,     7,     8,     9,
      10,    11,   246,    24,    25,    14,     0,    15,    16,    17,
      18,    19,   164,   419,     0,     9,     0,     0,   265,    21,
      22,    23,    24,    25,     0,     0,   365,    19,    26,    27,
     425,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      28,    29,     0,    30,    31,     0,    32,    66,     7,     8,
       0,    10,    11,     0,     0,     0,     0,     0,    15,    16,
      17,    18,     0,   164,     0,   426,     9,     0,     0,   265,
      67,     0,    33,    34,    35,    36,    37,    38,    19,    26,
      27,   164,     0,     0,     9,     0,     0,   327,     0,    24,
      25,    28,    29,     0,    30,    31,     0,    32,     6,     7,
       8,     0,    10,    11,     0,     0,     0,    24,    25,    15,
      16,    17,    18,     0,   164,     0,   428,     9,     0,     0,
     327,    67,     0,    33,    34,    35,    36,    37,    38,     0,
      26,    27,   164,     0,   328,     9,     0,     0,   390,     0,
      24,    25,    28,    29,     0,    30,    31,     0,    32,   157,
       7,     8,     0,    10,    11,     0,     0,     0,    24,    25,
      15,    16,    17,    18,     0,     0,     0,   376,     0,     0,
       0,     0,    67,     0,    33,    34,    35,    36,    37,    38,
       0,    26,    27,     0,     0,   391,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,    30,    31,     0,    32,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,    33,    34,    35,    36,    37,
      38,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   259,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   127,
     128,     0,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   284,     0,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   127,   128,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   213,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,     0,   127,
     128,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   342,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   164,   127,   128,     9,     0,     0,   390,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   164,
       0,   164,     9,     0,     9,   327,     0,   358,    24,    25,
       0,     0,     0,     0,     0,     0,    19,   127,   128,     0,
       0,     0,     0,     0,     0,    24,    25,    24,    25,     0,
     164,     0,     0,     9,   164,   397,   358,     9,     0,     0,
     265,     0,     0,     0,   164,    19,     0,     9,   164,    19,
     265,     9,   398,   359,   265,     0,    24,    25,     0,    19,
      24,    25,   164,    19,     0,     9,   164,     0,   265,     9,
      24,    25,   220,     0,    24,    25,     0,    19,     0,     0,
       0,     0,   399,     0,     0,     0,   403,     0,    24,    25,
       0,     0,    24,    25,     0,     0,   415,     0,     0,     0,
     417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,     0,     0,     0,   221,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,     0,     0,   168,     0,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,     0,   127,
     128,   206,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,     0,   127,   128,   210,     0,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,     0,     0,   127,   128,   326,     0,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,     0,   127,   128,
     341,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
       0,   127,   128,   378,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     0,    52,     0,   127,   128,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    52,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,   128,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   108,   109,   110,   111,
       0,     0,   114,   115,     0,    -1,    -1,    -1,    -1,     0,
       0,     0,     0,   118,   119,   120,     0,     0,     0,     0,
       0,   126,    -1,    -1,    -1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,     0,     0,     0,     0,     0,    -1,
      -1
};

static const yytype_int16 yycheck[] =
{
       5,    71,     3,   341,    74,    19,    20,    10,     8,    78,
       5,    34,   241,    14,    22,     5,    34,    25,    34,     3,
       4,     5,     6,     7,     8,     9,     5,    11,    12,    52,
      14,    15,    16,    17,    18,   335,    54,    21,    54,     0,
     378,    34,    26,    27,    28,    29,    30,    52,    56,    53,
      51,    35,    36,    53,   354,   336,     4,     5,     5,     7,
      32,    54,     9,    47,    48,    51,    50,    51,    54,    53,
      53,     5,    53,   302,    32,    80,    53,    24,    25,    26,
      27,    28,    29,    30,   153,    32,    33,    34,    35,    36,
      37,    38,   161,    19,    20,    79,    80,    81,    82,    83,
      84,    53,     3,     4,     5,    52,     7,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    32,
       3,    53,   403,     6,    53,    53,     9,    32,    75,    53,
     199,    53,    79,   203,   415,     5,   417,    51,    53,     3,
      23,     3,   423,     3,    53,     3,    29,    30,    52,    31,
      34,    54,    13,    53,   383,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    54,    34,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   411,   412,    32,    54,    54,     3,     3,     3,
       6,   420,     6,     9,     3,     9,    52,     6,    55,    54,
       9,   206,    18,    55,    55,    54,    13,    23,    24,    18,
      54,   206,    32,    29,    30,    29,    30,    55,    55,   166,
      29,    30,     3,    13,   229,     6,    32,   206,     9,    32,
      32,     3,   237,    32,   229,     3,    53,    18,     6,   229,
      56,     9,   237,    32,    32,    32,    56,    56,    29,    30,
     229,     3,    32,   258,   259,    32,    54,    32,   237,    32,
      54,    29,    30,   258,   211,    32,   213,    33,   258,    32,
      32,     3,   206,   278,     6,    56,    32,     9,    32,   258,
      54,     3,   229,   278,     6,    32,    18,     9,    56,    53,
      55,    32,    32,    32,   299,   229,    18,    29,    30,   278,
      55,    32,    55,   237,   299,    32,    32,    29,    30,    32,
      55,    32,   259,     3,    32,     3,     6,    32,     6,     9,
     299,     9,    32,    55,   258,    19,   273,   274,    18,     3,
      18,    32,     6,    32,    56,     9,   341,    32,   343,    29,
      30,    29,    30,    32,   278,    32,   341,    32,   343,    32,
     355,   341,    32,    32,    32,    29,    30,    19,    19,    19,
     355,   366,   341,   237,   343,   299,    56,    55,   373,   374,
     375,   366,   399,   378,   379,   342,   355,   195,   373,   374,
     375,   349,    56,   378,   379,   197,   229,   366,   378,   379,
     229,   338,    -1,   229,   373,   374,   375,   229,    -1,   378,
     379,    -1,    -1,    -1,    -1,   410,    -1,   341,    -1,   343,
       3,    -1,    -1,     6,    -1,   410,     9,    -1,    -1,    -1,
     410,   355,    -1,    -1,    -1,    18,    -1,     3,    -1,    -1,
       6,   410,   366,     9,    -1,    -1,    29,    30,    -1,   373,
     374,   375,    18,    -1,   378,   379,     3,     4,     5,     6,
       7,     8,     9,    29,    30,    12,    -1,    14,    15,    16,
      17,    18,     3,    56,    -1,     6,    -1,    -1,     9,    26,
      27,    28,    29,    30,    -1,    -1,   410,    18,    35,    36,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      47,    48,    -1,    50,    51,    -1,    53,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,     3,    -1,    56,     6,    -1,    -1,     9,
      26,    -1,    79,    80,    81,    82,    83,    84,    18,    35,
      36,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    29,
      30,    47,    48,    -1,    50,    51,    -1,    53,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    29,    30,    14,
      15,    16,    17,    -1,     3,    -1,    56,     6,    -1,    -1,
       9,    26,    -1,    79,    80,    81,    82,    83,    84,    -1,
      35,    36,     3,    -1,    56,     6,    -1,    -1,     9,    -1,
      29,    30,    47,    48,    -1,    50,    51,    -1,    53,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    29,    30,
      14,    15,    16,    17,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    26,    -1,    79,    80,    81,    82,    83,    84,
      -1,    35,    36,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    79,    80,    81,    82,    83,
      84,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    85,
      86,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    85,    86,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    85,
      86,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     3,    85,    86,     6,    -1,    -1,     9,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     3,
      -1,     3,     6,    -1,     6,     9,    -1,     9,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    29,    30,    -1,
       3,    -1,    -1,     6,     3,    56,     9,     6,    -1,    -1,
       9,    -1,    -1,    -1,     3,    18,    -1,     6,     3,    18,
       9,     6,    56,    55,     9,    -1,    29,    30,    -1,    18,
      29,    30,     3,    18,    -1,     6,     3,    -1,     9,     6,
      29,    30,     9,    -1,    29,    30,    -1,    18,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    55,    -1,    29,    30,
      -1,    -1,    29,    30,    -1,    -1,    55,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    55,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    85,
      86,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    85,    86,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    85,    86,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    85,    86,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    85,    86,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    31,    -1,    85,    86,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    41,    42,    43,    44,
      -1,    -1,    47,    48,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    66,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    88,    89,     0,    90,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    15,    16,    17,    18,
      21,    26,    27,    28,    29,    30,    35,    36,    47,    48,
      50,    51,    53,    79,    80,    81,    82,    83,    84,    91,
      92,    93,    94,    95,   102,   107,   112,   115,   117,   118,
     123,   126,    31,    51,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     3,    26,   117,    53,
      53,    53,    53,    53,    53,    53,    53,     8,    53,    53,
      53,   117,   117,   117,   117,   117,   117,   117,   117,   119,
     117,   117,   117,   117,   117,   117,   117,    32,    32,    32,
      32,    32,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    85,    86,    92,
     117,     5,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,     3,     4,     5,     7,   120,   121,
     122,     3,    14,    51,   119,     3,     3,     3,   119,   117,
       3,    53,   120,   117,     3,    92,    34,    52,    54,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,    52,    31,    54,    34,    13,    53,
     120,    54,    54,    34,    54,    54,    54,    54,   120,    54,
      54,    32,   117,    33,   122,   121,     3,   120,    52,   119,
       9,    55,    92,    93,    94,    97,   115,    55,    54,    55,
      55,   117,   117,    54,    54,    13,    54,    96,    32,    32,
      32,    19,    20,    32,   103,    55,     9,    92,    93,    94,
      95,   107,   112,   115,   116,   117,   123,   126,   108,    32,
      55,    13,     3,    56,    97,     9,    55,    92,    93,    94,
      95,    99,   115,    53,    22,    25,    56,   104,   113,    32,
      32,    32,    32,    56,    32,     9,    23,    24,    56,    92,
      93,    94,    95,   109,   110,   111,   115,    92,   117,   124,
       3,    54,    19,    20,    98,    32,    32,    32,    32,   117,
     117,    33,     9,    56,    92,    93,    94,   114,   115,    32,
      32,    32,    32,    32,    32,    54,    54,     9,    56,    92,
      93,    94,   115,   125,    54,    55,    55,    99,    53,    56,
      99,    54,    33,   105,    32,    32,    32,    32,    55,    55,
      32,    32,    32,    32,    55,   124,    98,   117,     9,    55,
      92,    93,    94,    95,   101,   115,   105,     9,    92,    93,
      94,   106,   115,   127,   127,   124,    56,    56,    54,   100,
      32,    32,    32,    19,    32,    23,    32,    32,    32,    32,
       9,    56,    92,    93,    94,   115,   128,    56,    56,    55,
     101,    56,   101,    55,    99,    32,    32,    32,    32,    32,
     100,    19,    19,    98,    56,    55,    99,    55,    99,    56,
      19,    98,    98,    55,    99,    56,    56,    98,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    89,    88,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   111,   112,   113,   113,   114,
     114,   114,   114,   114,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   119,
     119,   119,   120,   120,   121,   121,   121,   121,   122,   122,
     122,   123,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     5,     7,     7,     9,     9,    11,
      12,    14,    14,    16,    14,    16,    16,    18,     0,     2,
       2,     2,     2,     2,     1,     0,     2,     2,     2,     2,
       1,     2,     1,     0,     2,     2,     2,     2,     1,     2,
       1,     7,     0,     2,     6,     3,     0,     2,     2,     2,
       2,     2,     1,     7,     0,     2,     2,     2,     2,     1,
       2,     2,     2,     1,     1,     1,     8,     0,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     5,     7,     4,     6,
       4,     4,     4,     2,     2,     2,     2,     2,     4,     0,
       1,     3,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     9,    12,    11,     0,     2,     2,     2,     2,     2,
       1,    11,    11,     0,     2,     2,     2,     2,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 53 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1779 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 53 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1785 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 59 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1791 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 60 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1797 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 61 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1803 "php2python.tab.c"
    break;

  case 9: /* statement: print SC  */
#line 62 "php2python.y"
               {printf("Se reconocio un print\n"); write_echo((yyvsp[-1].str));}
#line 1809 "php2python.tab.c"
    break;

  case 10: /* statement: conditional  */
#line 63 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1815 "php2python.tab.c"
    break;

  case 11: /* statement: switch  */
#line 64 "php2python.y"
             {printf("Se reconocio un bloque switch\n"); write_switch((yyvsp[0].str));}
#line 1821 "php2python.tab.c"
    break;

  case 12: /* statement: while  */
#line 65 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1827 "php2python.tab.c"
    break;

  case 13: /* statement: foreach  */
#line 66 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1833 "php2python.tab.c"
    break;

  case 14: /* statement: for  */
#line 67 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1839 "php2python.tab.c"
    break;

  case 15: /* statement: functionDefinition  */
#line 68 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1845 "php2python.tab.c"
    break;

  case 16: /* statement: return SC  */
#line 69 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1851 "php2python.tab.c"
    break;

  case 17: /* statement: CMNT  */
#line 70 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1857 "php2python.tab.c"
    break;

  case 18: /* declaration: ID EQ expr  */
#line 72 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str)); if (is_variable_array == 1) {put_symbol(format_variable((yyvsp[-2].str)), VAR, 0, 0, is_variable_array); is_variable_array=0;} else {put_symbol(format_variable((yyvsp[-2].str)), VAR, 0, 0, is_variable_array);};}
#line 1863 "php2python.tab.c"
    break;

  case 19: /* declaration: ID EQ declaration  */
#line 73 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1869 "php2python.tab.c"
    break;

  case 20: /* declaration: ID PLEQ expr  */
#line 74 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1875 "php2python.tab.c"
    break;

  case 21: /* declaration: ID MNEQ expr  */
#line 75 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1881 "php2python.tab.c"
    break;

  case 22: /* declaration: ID MUEQ expr  */
#line 76 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1887 "php2python.tab.c"
    break;

  case 23: /* declaration: ID DIEQ expr  */
#line 77 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1893 "php2python.tab.c"
    break;

  case 24: /* declaration: ID EXEQ expr  */
#line 78 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1899 "php2python.tab.c"
    break;

  case 25: /* declaration: ID MOEQ expr  */
#line 79 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1905 "php2python.tab.c"
    break;

  case 26: /* declaration: ID COEQ expr  */
#line 80 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1911 "php2python.tab.c"
    break;

  case 27: /* declaration: ID ADEQ expr  */
#line 81 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " &= ", (yyvsp[0].str));}
#line 1917 "php2python.tab.c"
    break;

  case 28: /* declaration: ID OREQ expr  */
#line 82 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " |= ", (yyvsp[0].str));}
#line 1923 "php2python.tab.c"
    break;

  case 29: /* declaration: ID XOEQ expr  */
#line 83 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " ^= ", (yyvsp[0].str));}
#line 1929 "php2python.tab.c"
    break;

  case 30: /* declaration: ID LLEQ expr  */
#line 84 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 1935 "php2python.tab.c"
    break;

  case 31: /* declaration: ID GGEQ expr  */
#line 85 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 1941 "php2python.tab.c"
    break;

  case 32: /* echo: ECH expr  */
#line 87 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1947 "php2python.tab.c"
    break;

  case 33: /* print: PRNT expr  */
#line 88 "php2python.y"
                 {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1953 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 90 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1959 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 91 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1965 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 92 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1971 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 93 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1977 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 94 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1983 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 95 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1989 "php2python.tab.c"
    break;

  case 40: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 96 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1995 "php2python.tab.c"
    break;

  case 41: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 97 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 2001 "php2python.tab.c"
    break;

  case 42: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 98 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 2007 "php2python.tab.c"
    break;

  case 43: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 99 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 2013 "php2python.tab.c"
    break;

  case 44: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 100 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 2019 "php2python.tab.c"
    break;

  case 45: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 101 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 2025 "php2python.tab.c"
    break;

  case 46: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 102 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 2031 "php2python.tab.c"
    break;

  case 47: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 103 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 2037 "php2python.tab.c"
    break;

  case 49: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 107 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2043 "php2python.tab.c"
    break;

  case 50: /* statementinifblock: declaration SC  */
#line 110 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2049 "php2python.tab.c"
    break;

  case 51: /* statementinifblock: echo SC  */
#line 111 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2055 "php2python.tab.c"
    break;

  case 52: /* statementinifblock: print SC  */
#line 112 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2061 "php2python.tab.c"
    break;

  case 53: /* statementinifblock: return SC  */
#line 113 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2067 "php2python.tab.c"
    break;

  case 54: /* statementinifblock: CMNT  */
#line 114 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2073 "php2python.tab.c"
    break;

  case 56: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 118 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 2079 "php2python.tab.c"
    break;

  case 57: /* statementinelseblock: declaration SC  */
#line 121 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 2085 "php2python.tab.c"
    break;

  case 58: /* statementinelseblock: echo SC  */
#line 122 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2091 "php2python.tab.c"
    break;

  case 59: /* statementinelseblock: print SC  */
#line 123 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2097 "php2python.tab.c"
    break;

  case 60: /* statementinelseblock: conditional  */
#line 124 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 2103 "php2python.tab.c"
    break;

  case 61: /* statementinelseblock: return SC  */
#line 125 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2109 "php2python.tab.c"
    break;

  case 62: /* statementinelseblock: CMNT  */
#line 126 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2115 "php2python.tab.c"
    break;

  case 64: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 130 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 2121 "php2python.tab.c"
    break;

  case 65: /* statementinelifblock: declaration SC  */
#line 133 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 2127 "php2python.tab.c"
    break;

  case 66: /* statementinelifblock: echo SC  */
#line 134 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2133 "php2python.tab.c"
    break;

  case 67: /* statementinelifblock: print SC  */
#line 135 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2139 "php2python.tab.c"
    break;

  case 68: /* statementinelifblock: conditional  */
#line 136 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 2145 "php2python.tab.c"
    break;

  case 69: /* statementinelifblock: return SC  */
#line 137 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2151 "php2python.tab.c"
    break;

  case 70: /* statementinelifblock: CMNT  */
#line 138 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2157 "php2python.tab.c"
    break;

  case 71: /* switch: SWIH OPRT ID CPRT OBRC cases CBRC  */
#line 140 "php2python.y"
                                          {(yyval.str)=format_switch(format_variable((yyvsp[-4].str)), (yyvsp[-1].str));}
#line 2163 "php2python.tab.c"
    break;

  case 72: /* cases: %empty  */
#line 141 "php2python.y"
              {(yyval.str)="";}
#line 2169 "php2python.tab.c"
    break;

  case 73: /* cases: cases case  */
#line 142 "php2python.y"
                 {(yyval.str)=add_case_to_cases((yyvsp[-1].str), (yyvsp[0].str));}
#line 2175 "php2python.tab.c"
    break;

  case 74: /* case: CASE expr CL statementsInSwitchCase BRK SC  */
#line 145 "php2python.y"
                                                 {(yyval.str)=format_case((yyvsp[-4].str));}
#line 2181 "php2python.tab.c"
    break;

  case 75: /* case: DFT CL statementsInSwitchCase  */
#line 146 "php2python.y"
                                    {(yyval.str)=format_case_default();}
#line 2187 "php2python.tab.c"
    break;

  case 78: /* statementInSwitchCase: declaration SC  */
#line 152 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un switch\n"); write_declaration((yyvsp[-1].str));}
#line 2193 "php2python.tab.c"
    break;

  case 79: /* statementInSwitchCase: echo SC  */
#line 153 "php2python.y"
              {printf("Se encontro un echo dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2199 "php2python.tab.c"
    break;

  case 80: /* statementInSwitchCase: print SC  */
#line 154 "php2python.y"
               {printf("Se encontro un echo dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2205 "php2python.tab.c"
    break;

  case 81: /* statementInSwitchCase: return SC  */
#line 155 "php2python.y"
                {printf("Se encontro un retorno dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2211 "php2python.tab.c"
    break;

  case 82: /* statementInSwitchCase: CMNT  */
#line 156 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un switch\n", (yyvsp[0].str)); add_statement_to_switch_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2217 "php2python.tab.c"
    break;

  case 83: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 157 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 2223 "php2python.tab.c"
    break;

  case 85: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 160 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 2229 "php2python.tab.c"
    break;

  case 86: /* statementInWhileBlock: declaration SC  */
#line 163 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2235 "php2python.tab.c"
    break;

  case 87: /* statementInWhileBlock: echo SC  */
#line 164 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2241 "php2python.tab.c"
    break;

  case 88: /* statementInWhileBlock: print SC  */
#line 165 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2247 "php2python.tab.c"
    break;

  case 89: /* statementInWhileBlock: conditional  */
#line 166 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 2253 "php2python.tab.c"
    break;

  case 90: /* statementInWhileBlock: return SC  */
#line 167 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2259 "php2python.tab.c"
    break;

  case 91: /* statementInWhileBlock: break SC  */
#line 168 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2265 "php2python.tab.c"
    break;

  case 92: /* statementInWhileBlock: continue SC  */
#line 169 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2271 "php2python.tab.c"
    break;

  case 93: /* statementInWhileBlock: CMNT  */
#line 170 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2277 "php2python.tab.c"
    break;

  case 94: /* break: BRK  */
#line 172 "php2python.y"
           {(yyval.str)="break";}
#line 2283 "php2python.tab.c"
    break;

  case 95: /* continue: CONT  */
#line 173 "php2python.y"
               {(yyval.str)="continue";}
#line 2289 "php2python.tab.c"
    break;

  case 96: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 174 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str)); put_symbol((yyvsp[-6].str), FUN, reset_obligatory_argument_counter(), reset_optional_argument_counter(), 0);}
#line 2295 "php2python.tab.c"
    break;

  case 98: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 177 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 2301 "php2python.tab.c"
    break;

  case 99: /* statementInFunctionBlock: declaration SC  */
#line 180 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2307 "php2python.tab.c"
    break;

  case 100: /* statementInFunctionBlock: echo SC  */
#line 181 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2313 "php2python.tab.c"
    break;

  case 101: /* statementInFunctionBlock: print SC  */
#line 182 "php2python.y"
               {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2319 "php2python.tab.c"
    break;

  case 102: /* statementInFunctionBlock: return SC  */
#line 183 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2325 "php2python.tab.c"
    break;

  case 103: /* statementInFunctionBlock: CMNT  */
#line 184 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2331 "php2python.tab.c"
    break;

  case 104: /* return: RTN expr  */
#line 186 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 2337 "php2python.tab.c"
    break;

  case 105: /* anonymousFunctionStatement: declaration SC  */
#line 188 "php2python.y"
                   {printf("Se reconocio una declaracion\n");}
#line 2343 "php2python.tab.c"
    break;

  case 106: /* anonymousFunctionStatement: expr SC  */
#line 189 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str));}
#line 2349 "php2python.tab.c"
    break;

  case 107: /* anonymousFunctionStatement: echo SC  */
#line 190 "php2python.y"
              {printf("Se reconocio un echo\n");}
#line 2355 "php2python.tab.c"
    break;

  case 108: /* anonymousFunctionStatement: print SC  */
#line 191 "php2python.y"
               {printf("Se reconocio un print\n");}
#line 2361 "php2python.tab.c"
    break;

  case 109: /* anonymousFunctionStatement: conditional  */
#line 192 "php2python.y"
                  {printf("Se reconocio una condicional\n");}
#line 2367 "php2python.tab.c"
    break;

  case 110: /* anonymousFunctionStatement: while  */
#line 193 "php2python.y"
            {printf("Se reconocio un bucle while\n");}
#line 2373 "php2python.tab.c"
    break;

  case 111: /* anonymousFunctionStatement: foreach  */
#line 194 "php2python.y"
              {printf("Se reconocio un bucle foreach\n");}
#line 2379 "php2python.tab.c"
    break;

  case 112: /* anonymousFunctionStatement: for  */
#line 195 "php2python.y"
          {printf("Se reconocio un bucle foreach\n");}
#line 2385 "php2python.tab.c"
    break;

  case 113: /* anonymousFunctionStatement: functionDefinition  */
#line 196 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 2391 "php2python.tab.c"
    break;

  case 114: /* anonymousFunctionStatement: return SC  */
#line 197 "php2python.y"
                {printf("Se reconocio un retorno global\n");}
#line 2397 "php2python.tab.c"
    break;

  case 115: /* anonymousFunctionStatement: CMNT  */
#line 198 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str));}
#line 2403 "php2python.tab.c"
    break;

  case 116: /* expr: NUM  */
#line 200 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2409 "php2python.tab.c"
    break;

  case 117: /* expr: STR  */
#line 201 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2415 "php2python.tab.c"
    break;

  case 118: /* expr: ID  */
#line 202 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2421 "php2python.tab.c"
    break;

  case 119: /* expr: BOOL  */
#line 203 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2427 "php2python.tab.c"
    break;

  case 120: /* expr: functionCall  */
#line 204 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2433 "php2python.tab.c"
    break;

  case 121: /* expr: PLUS expr  */
#line 205 "php2python.y"
                {printf("Se encontro una expresion positiva\n"); (yyval.str)=format_operation("", "+", (yyvsp[0].str));}
#line 2439 "php2python.tab.c"
    break;

  case 122: /* expr: MINS expr  */
#line 206 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", "-", (yyvsp[0].str));}
#line 2445 "php2python.tab.c"
    break;

  case 123: /* expr: expr PLUS expr  */
#line 207 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2451 "php2python.tab.c"
    break;

  case 124: /* expr: expr MINS expr  */
#line 208 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2457 "php2python.tab.c"
    break;

  case 125: /* expr: expr MULT expr  */
#line 209 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2463 "php2python.tab.c"
    break;

  case 126: /* expr: expr DIV expr  */
#line 210 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2469 "php2python.tab.c"
    break;

  case 127: /* expr: expr MOD expr  */
#line 211 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2475 "php2python.tab.c"
    break;

  case 128: /* expr: expr EXPO expr  */
#line 212 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2481 "php2python.tab.c"
    break;

  case 129: /* expr: expr CCTN expr  */
#line 213 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2487 "php2python.tab.c"
    break;

  case 130: /* expr: PPL expr  */
#line 214 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2493 "php2python.tab.c"
    break;

  case 131: /* expr: expr PPL  */
#line 215 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2499 "php2python.tab.c"
    break;

  case 132: /* expr: MMN expr  */
#line 216 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2505 "php2python.tab.c"
    break;

  case 133: /* expr: expr MMN  */
#line 217 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2511 "php2python.tab.c"
    break;

  case 134: /* expr: NOT expr  */
#line 218 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", "not ", (yyvsp[0].str));}
#line 2517 "php2python.tab.c"
    break;

  case 135: /* expr: BNOT expr  */
#line 219 "php2python.y"
                {printf("Se encontro una negacion bit a bit\n"); (yyval.str)=format_operation("", "~", (yyvsp[0].str));}
#line 2523 "php2python.tab.c"
    break;

  case 136: /* expr: expr AND expr  */
#line 220 "php2python.y"
                    {printf("Se encontro una conjuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2529 "php2python.tab.c"
    break;

  case 137: /* expr: expr BAND expr  */
#line 221 "php2python.y"
                     {printf("Se encontro una conjuncion bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " & ", (yyvsp[0].str));}
#line 2535 "php2python.tab.c"
    break;

  case 138: /* expr: expr OR expr  */
#line 222 "php2python.y"
                   {printf("Se encontro una disyuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2541 "php2python.tab.c"
    break;

  case 139: /* expr: expr BOR expr  */
#line 223 "php2python.y"
                    {printf("Se encontro una disyuncion bit a bit"); (yyval.str)=format_operation((yyvsp[-2].str), " | ", (yyvsp[0].str));}
#line 2547 "php2python.tab.c"
    break;

  case 140: /* expr: expr XOR expr  */
#line 224 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2553 "php2python.tab.c"
    break;

  case 141: /* expr: expr BXOR expr  */
#line 225 "php2python.y"
                     {printf("Se encontro una disyuncion exclusiva bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2559 "php2python.tab.c"
    break;

  case 142: /* expr: expr GT expr  */
#line 226 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2565 "php2python.tab.c"
    break;

  case 143: /* expr: expr LT expr  */
#line 227 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2571 "php2python.tab.c"
    break;

  case 144: /* expr: expr GTE expr  */
#line 228 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2577 "php2python.tab.c"
    break;

  case 145: /* expr: expr LTE expr  */
#line 229 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2583 "php2python.tab.c"
    break;

  case 146: /* expr: expr EEQ expr  */
#line 230 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2589 "php2python.tab.c"
    break;

  case 147: /* expr: expr EEEQ expr  */
#line 231 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2595 "php2python.tab.c"
    break;

  case 148: /* expr: expr NEQ expr  */
#line 232 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2601 "php2python.tab.c"
    break;

  case 149: /* expr: expr NOEQ expr  */
#line 233 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2607 "php2python.tab.c"
    break;

  case 150: /* expr: expr NEEE expr  */
#line 234 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2613 "php2python.tab.c"
    break;

  case 151: /* expr: expr LTLT expr  */
#line 235 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la izquierda \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 2619 "php2python.tab.c"
    break;

  case 152: /* expr: expr GTGT expr  */
#line 236 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la derecha \n "); (yyval.str)=format_operation((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 2625 "php2python.tab.c"
    break;

  case 153: /* expr: ARRY OPRT parameters CPRT  */
#line 237 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); is_variable_array=1; (yyval.str)=format_array();}
#line 2631 "php2python.tab.c"
    break;

  case 154: /* expr: OSQB parameters CSQB  */
#line 238 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); is_variable_array=1; (yyval.str)=format_array();}
#line 2637 "php2python.tab.c"
    break;

  case 155: /* expr: OPRT expr CPRT  */
#line 239 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2643 "php2python.tab.c"
    break;

  case 156: /* expr: expr QUES expr CL expr  */
#line 240 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2649 "php2python.tab.c"
    break;

  case 157: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 241 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2655 "php2python.tab.c"
    break;

  case 158: /* expr: ID OSQB NUM CSQB  */
#line 242 "php2python.y"
                       {printf("Se encontro un acceso a un elemento de un array\n"); if (is_array_variable(format_variable((yyvsp[-3].str))) == 0) {yyerror("La variable no es un array"); YYERROR;}; (yyval.str)=format_array_access((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2661 "php2python.tab.c"
    break;

  case 159: /* expr: ARPS OPRT ID COMM parameters CPRT  */
#line 243 "php2python.y"
                                        {printf("Se encontro una llamada a array_push\n"); is_variable_array=0; (yyval.str)=format_array_push((yyvsp[-3].str));}
#line 2667 "php2python.tab.c"
    break;

  case 160: /* expr: ARPO OPRT ID CPRT  */
#line 244 "php2python.y"
                        {printf("Se encontro una llamada a array_pop\n"); (yyval.str)=format_array_pop((yyvsp[-1].str));}
#line 2673 "php2python.tab.c"
    break;

  case 161: /* expr: ASUM OPRT ID CPRT  */
#line 245 "php2python.y"
                        {printf("Se encontro una llamada a array_sum\n"); (yyval.str)=format_array_sum((yyvsp[-1].str));}
#line 2679 "php2python.tab.c"
    break;

  case 162: /* expr: ASUM OPRT parameters CPRT  */
#line 246 "php2python.y"
                                {printf("Se encontro una llamada a array_sum\n"); is_variable_array=0; (yyval.str)=format_array_sum((yyvsp[-1].str));}
#line 2685 "php2python.tab.c"
    break;

  case 163: /* expr: ICAS expr  */
#line 247 "php2python.y"
                {printf("Se encontro una conversion a tipo entero\n"); (yyval.str)=format_int_cast((yyvsp[0].str));}
#line 2691 "php2python.tab.c"
    break;

  case 164: /* expr: FCAS expr  */
#line 248 "php2python.y"
                {printf("Se encontro una conversion a tipo flotante\n"); (yyval.str)=format_float_cast((yyvsp[0].str));}
#line 2697 "php2python.tab.c"
    break;

  case 165: /* expr: BCAS expr  */
#line 249 "php2python.y"
                {printf("Se encontro una conversion a tipo booleano\n"); (yyval.str)=format_bool_cast((yyvsp[0].str));}
#line 2703 "php2python.tab.c"
    break;

  case 166: /* expr: SCAS expr  */
#line 250 "php2python.y"
                {printf("Se encontro una conversion a tipo cadena\n"); (yyval.str)=format_string_cast((yyvsp[0].str));}
#line 2709 "php2python.tab.c"
    break;

  case 167: /* expr: ACAS expr  */
#line 251 "php2python.y"
                {printf("Se encontro una conversion a tipo arreglo\n"); (yyval.str)=format_array_cast((yyvsp[0].str));}
#line 2715 "php2python.tab.c"
    break;

  case 168: /* functionCall: NAME OPRT arguments CPRT  */
#line 253 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); if (is_argument_count_correct((yyvsp[-3].str), (yyvsp[-1].str)) == 0) {yyerror("Cantidad de argumentos incorrectos para la llamada de una funcion"); YYERROR;} else {(yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));};}
#line 2721 "php2python.tab.c"
    break;

  case 169: /* parameters: %empty  */
#line 255 "php2python.y"
           {(yyval.str)=NULL;}
#line 2727 "php2python.tab.c"
    break;

  case 170: /* parameters: expr  */
#line 256 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2733 "php2python.tab.c"
    break;

  case 171: /* parameters: parameters COMM expr  */
#line 257 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2739 "php2python.tab.c"
    break;

  case 172: /* arguments: %empty  */
#line 260 "php2python.y"
           {(yyval.str)="";}
#line 2745 "php2python.tab.c"
    break;

  case 174: /* argument: argument COMM argument  */
#line 264 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2751 "php2python.tab.c"
    break;

  case 175: /* argument: ID  */
#line 265 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str)); add_to_obligatory_argument_counter();}
#line 2757 "php2python.tab.c"
    break;

  case 176: /* argument: ID EQ defaultValue  */
#line 266 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str)); add_to_optinal_argument_counter();}
#line 2763 "php2python.tab.c"
    break;

  case 178: /* defaultValue: NUM  */
#line 270 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2769 "php2python.tab.c"
    break;

  case 179: /* defaultValue: STR  */
#line 271 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2775 "php2python.tab.c"
    break;

  case 180: /* defaultValue: BOOL  */
#line 272 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2781 "php2python.tab.c"
    break;

  case 181: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 274 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2787 "php2python.tab.c"
    break;

  case 182: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 275 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2793 "php2python.tab.c"
    break;

  case 183: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 276 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2799 "php2python.tab.c"
    break;

  case 185: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 279 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2805 "php2python.tab.c"
    break;

  case 186: /* statementInForeach: declaration SC  */
#line 282 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2811 "php2python.tab.c"
    break;

  case 187: /* statementInForeach: echo SC  */
#line 283 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2817 "php2python.tab.c"
    break;

  case 188: /* statementInForeach: print SC  */
#line 284 "php2python.y"
               {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2823 "php2python.tab.c"
    break;

  case 189: /* statementInForeach: return SC  */
#line 285 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2829 "php2python.tab.c"
    break;

  case 190: /* statementInForeach: CMNT  */
#line 286 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2835 "php2python.tab.c"
    break;

  case 191: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 289 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2841 "php2python.tab.c"
    break;

  case 192: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 290 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2847 "php2python.tab.c"
    break;

  case 194: /* statementsInFor: statementsInFor statementInFor  */
#line 293 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2853 "php2python.tab.c"
    break;

  case 195: /* statementInFor: declaration SC  */
#line 296 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2859 "php2python.tab.c"
    break;

  case 196: /* statementInFor: echo SC  */
#line 297 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2865 "php2python.tab.c"
    break;

  case 197: /* statementInFor: print SC  */
#line 298 "php2python.y"
               {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2871 "php2python.tab.c"
    break;

  case 198: /* statementInFor: return SC  */
#line 299 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2877 "php2python.tab.c"
    break;

  case 199: /* statementInFor: CMNT  */
#line 300 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2883 "php2python.tab.c"
    break;


#line 2887 "php2python.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 302 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la linea %d\n", message, yylineno);
    return -1;
}
