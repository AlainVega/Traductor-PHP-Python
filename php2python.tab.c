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

#line 84 "php2python.tab.c"

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
  YYSYMBOL_while = 102,                    /* while  */
  YYSYMBOL_statementsInWhileBlock = 103,   /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 104,    /* statementInWhileBlock  */
  YYSYMBOL_break = 105,                    /* break  */
  YYSYMBOL_continue = 106,                 /* continue  */
  YYSYMBOL_functionDefinition = 107,       /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 108, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 109, /* statementInFunctionBlock  */
  YYSYMBOL_return = 110,                   /* return  */
  YYSYMBOL_anonymousFunctionStatement = 111, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 112,                     /* expr  */
  YYSYMBOL_functionCall = 113,             /* functionCall  */
  YYSYMBOL_parameters = 114,               /* parameters  */
  YYSYMBOL_arguments = 115,                /* arguments  */
  YYSYMBOL_argument = 116,                 /* argument  */
  YYSYMBOL_defaultValue = 117,             /* defaultValue  */
  YYSYMBOL_foreach = 118,                  /* foreach  */
  YYSYMBOL_statementsInForeach = 119,      /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 120,       /* statementInForeach  */
  YYSYMBOL_for = 121,                      /* for  */
  YYSYMBOL_statementsInFor = 122,          /* statementsInFor  */
  YYSYMBOL_statementInFor = 123            /* statementInFor  */
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
#define YYLAST   1220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  397

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
       0,    50,    50,    50,    52,    53,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    83,    84,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   102,   103,   106,
     107,   108,   109,   110,   113,   114,   117,   118,   119,   120,
     121,   122,   125,   126,   129,   130,   131,   132,   133,   134,
     136,   138,   139,   142,   143,   144,   145,   146,   147,   148,
     149,   151,   152,   153,   155,   156,   159,   160,   161,   162,
     163,   165,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   230,   232,   233,   234,   237,   238,   241,
     242,   243,   244,   247,   248,   249,   251,   252,   253,   255,
     256,   259,   260,   261,   262,   263,   266,   267,   269,   270,
     273,   274,   275,   276,   277
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
  "statementinelifblock", "while", "statementsInWhileBlock",
  "statementInWhileBlock", "break", "continue", "functionDefinition",
  "statementsInFunctionBlock", "statementInFunctionBlock", "return",
  "anonymousFunctionStatement", "expr", "functionCall", "parameters",
  "arguments", "argument", "defaultValue", "foreach",
  "statementsInForeach", "statementInForeach", "for", "statementsInFor",
  "statementInFor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-313)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,  -313,    17,  -313,  -313,   389,  1080,  -313,  -313,   499,
    -313,   -14,  -313,  -313,    21,    25,    35,    39,    40,    53,
      11,    54,    70,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,  -313,    38,    44,
      48,  -313,  -313,  -313,    92,   578,  -313,  -313,  -313,   550,
     121,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,    76,    78,  1060,    82,    31,   499,   126,
     130,   499,   499,    81,    82,   499,   136,  1060,  1060,  1134,
    1134,  1134,  1134,  1134,  1060,    27,   863,  1134,  1134,  1134,
    1134,  1134,  -313,  -313,  -313,  -313,  -313,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,  -313,
    -313,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,  -313,  1060,    88,  1060,  1060,  1060,
    1060,  1060,  1060,  1060,  1060,  1060,  1060,  1060,  1060,   110,
    -313,  -313,  -313,    90,   111,  -313,   133,    97,    82,   -19,
     101,   135,   -16,   896,    82,   106,   929,  1096,   131,   499,
    -313,  -313,  1134,  1134,  1134,  1134,  1134,  1134,   833,   833,
     833,   833,  1134,  1134,  1134,   682,   833,   833,   833,  1134,
    1134,  1134,  1134,  1134,  1134,   833,   833,  -313,    61,  -313,
      82,   168,    82,   120,  -313,  -313,   499,  -313,   842,   122,
     118,   125,   499,  1060,   499,  -313,  -313,   127,   128,   170,
      -7,  -313,  -313,   142,   152,   154,    23,   155,   137,   448,
    -313,   613,  1134,   139,   182,   193,  -313,     7,  -313,  -313,
    -313,   748,   144,  -313,  -313,  -313,   166,   171,   173,  -313,
    -313,  -313,   174,   146,   648,  -313,  -313,   119,   550,  -313,
     205,   156,    71,  -313,  -313,  -313,   177,   179,   180,  -313,
    -313,   181,   499,   159,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   186,   188,   191,  -313,  -313,   194,
     199,   200,   183,   962,   265,   184,   178,   777,   172,   129,
    -313,  -313,  -313,  -313,   995,  -313,  -313,   203,   208,   209,
    -313,   212,  -313,  -313,  -313,  -313,  -313,  -313,   197,   198,
    -313,  -313,   214,   216,   230,   234,  -313,   215,  -313,  -313,
    -313,   499,  -313,  -313,   781,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,   488,   148,  1028,  -313,
    -313,   241,   243,   246,  -313,   263,   252,   533,   729,   746,
    -313,  -313,   791,   161,  -313,  -313,  -313,   795,  -313,  -313,
    -313,   253,   257,   259,   260,  -313,  -313,  -313,  -313,   271,
     277,  -313,  -313,  -313,  -313,  -313,  -313,  -313,   221,   809,
     813,   251,   278,  -313,  -313,  -313,  -313,  -313,   831,   258,
     307,  -313,  -313,  -313,  -313,   429,  -313
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,   105,   104,   103,     0,
     106,     0,    16,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     154,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,    10,    11,    14,     0,     0,   107,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,    31,   157,     0,   154,     0,
       0,   154,     0,     0,   157,     0,     0,    91,    32,   108,
     109,   117,   119,   121,   155,     0,     0,   122,   149,   150,
     151,   152,     6,     8,     9,    15,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    17,     0,    19,    20,    21,
      23,    22,    24,    25,    27,    26,    28,    29,    30,   160,
     164,   163,   165,     0,   158,   162,     0,     0,   157,     0,
       0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     141,   142,   110,   111,   113,   112,   114,   116,   133,   135,
     129,   130,   123,   125,   127,     0,   136,   137,   134,   138,
     139,   124,   126,   128,   115,   131,   132,   145,     0,   153,
       0,     0,   157,     0,   140,   147,   154,   148,     0,     0,
       0,     0,     0,   156,     0,   161,   159,     0,     0,     0,
       0,    53,    47,     0,     0,     0,    33,     0,     0,     0,
      71,     0,   143,     0,     0,     0,   146,     0,    49,    50,
      51,     0,     0,    52,    84,   102,     0,     0,     0,    96,
      97,   100,     0,     0,     0,    98,    99,     0,     0,   169,
       0,     0,    34,    48,    61,    54,     0,     0,     0,    59,
      35,     0,     0,     0,    92,    94,    95,   101,   144,    93,
      80,    81,    82,    70,     0,     0,     0,    76,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    60,     0,    90,    83,     0,     0,     0,
      85,     0,    73,    74,    75,    78,    79,    77,     0,     0,
     175,   166,     0,     0,     0,     0,   170,     0,   169,    54,
      36,     0,    37,    55,     0,    86,    87,    88,    89,   178,
     178,   171,   172,   173,   174,   169,     0,     0,     0,    69,
      62,     0,     0,     0,    67,     0,     0,     0,     0,     0,
     168,    38,     0,     0,    64,    65,    66,     0,    68,   184,
     176,     0,     0,     0,     0,   179,   177,   167,    62,     0,
       0,    63,    54,    39,   180,   181,   182,   183,     0,     0,
       0,     0,     0,    54,    40,    54,    41,    43,     0,     0,
       0,    54,    42,    44,    45,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,  -313,    -5,     2,     9,     0,  -313,
      73,  -310,  -227,   -70,  -312,    83,  -313,  -313,  -313,  -313,
      84,  -313,  -313,    36,  -313,    -3,  -313,   -60,   -71,   114,
     113,    86,  -251,  -313,    87,   -22,  -313
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    37,   256,   257,   258,   259,   227,
     216,   289,   323,   353,   371,    42,   247,   278,   279,   280,
      43,   263,   300,   261,   243,    84,    46,    85,   143,   144,
     145,    47,   284,   316,    48,   347,   365
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,     1,    45,   155,   260,    41,    65,    39,   149,   337,
     157,   152,   345,     9,    40,   159,   211,     4,   159,    73,
      77,    78,    79,    80,    81,    82,    83,   159,    86,    87,
      88,    89,    90,    91,   146,   194,    23,    24,   197,    66,
     369,    44,   231,   232,   124,   147,   125,   226,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     320,   159,   381,   252,    74,   140,   141,   336,   142,   153,
      92,   158,   156,   389,    67,   390,    93,   193,    68,   160,
      94,   395,   148,   199,   349,   139,   140,   141,    69,   142,
     287,   288,    70,    71,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,    72,    75,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   208,   157,    76,    95,     9,   126,    50,   270,   150,
     373,    74,   157,   151,   154,     9,   210,    19,   254,   157,
     187,   188,   271,   272,   189,   190,   191,    19,    23,    24,
     192,   157,   384,   386,     9,   195,   203,   254,    23,    24,
     200,   392,   157,   202,   157,     9,    19,     9,   295,   196,
     339,   207,   209,   219,   228,   273,   218,    23,    24,    19,
     220,   223,   224,   225,   229,   322,   230,   233,    23,    24,
      23,    24,   234,   213,   249,   250,   251,   262,   264,   221,
     214,   222,   268,   265,   351,   266,   267,   215,   285,   290,
     286,   291,   292,   293,   236,   296,   244,   370,   302,   239,
     303,   237,   213,   304,   157,   321,   305,     9,   238,   214,
     339,   306,   307,   318,   217,   325,   215,   308,   317,    19,
     326,   327,   274,   282,   328,   283,   331,   277,   332,   275,
      23,    24,   329,   330,   157,   242,   276,     9,   297,   294,
     254,   157,   333,   217,     9,   298,   334,   254,   157,    19,
     335,     9,   299,   354,   310,   355,    19,   382,   356,   312,
      23,    24,   357,   281,   358,   374,   313,    23,    24,   375,
     379,   376,   377,   314,    23,    24,   380,   388,   378,   301,
     253,   205,   240,   241,   206,   245,   246,   387,   348,     0,
     157,     0,     0,     9,   393,     0,   254,     0,   338,   341,
     315,   311,     0,     0,   344,    19,   342,     0,     0,     0,
       0,   312,     0,   343,     0,     0,    23,    24,   313,     0,
       0,     0,   361,   361,   312,   314,     0,   341,   341,   362,
     362,   313,   344,   344,   342,   342,   363,   363,   314,     0,
     346,   343,   343,   394,     0,     0,     0,     0,     0,     0,
       0,     0,   315,   341,     0,     0,     0,     0,   344,     0,
     342,     0,     0,   364,   364,   315,     0,   343,   346,   346,
       0,     0,     6,     7,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,   346,    20,    21,    22,    23,    24,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     9,    27,    28,   254,    29,
      30,     0,    31,     0,     0,     0,     0,    19,     0,     0,
       0,     6,     7,     8,     9,    10,    11,   235,    23,    24,
      14,     0,    15,    16,    17,    18,    19,     0,    32,     0,
      33,    34,    35,    36,    20,    21,    22,    23,    24,     0,
       0,     0,     0,    25,    26,   396,     0,     0,     0,     0,
       0,   157,     0,     0,     9,    27,    28,   310,    29,    30,
       0,    31,    63,     7,     8,     0,    10,    11,     0,     0,
       0,     0,     0,    15,    16,    17,    18,    23,    24,     0,
       0,     0,     0,     0,     0,    64,     0,    32,     0,    33,
      34,    35,    36,     0,    25,    26,   157,     0,     0,     9,
       0,     0,   359,     0,   350,     0,    27,    28,     0,    29,
      30,     0,    31,     6,     7,     8,     0,    10,    11,     0,
       0,     0,    23,    24,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,    32,     0,
      33,    34,    35,    36,     0,    25,    26,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
      29,    30,     0,    31,     0,     0,     0,     0,     0,     0,
      96,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,    32,
       0,    33,    34,    35,    36,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   248,     0,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   122,   123,     0,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     269,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   122,   123,
       0,     0,     0,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   204,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   157,   122,   123,     9,     0,     0,   359,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   157,
       0,   157,     9,     0,     9,   310,     0,   254,    23,    24,
       0,     0,     0,     0,     0,     0,    19,   122,   123,     0,
       0,     0,     0,     0,     0,    23,    24,    23,    24,     0,
     157,     0,     0,     9,   157,   366,   254,     9,     0,     0,
     339,     0,     0,     0,   157,    19,     0,     9,   157,    19,
     339,     9,   367,   255,   254,     0,    23,    24,     0,    19,
      23,    24,   157,    19,     0,     9,   157,     0,   254,     9,
      23,    24,   254,     0,    23,    24,     0,    19,     0,     0,
       0,    19,   319,     0,   157,     0,   340,     9,    23,    24,
     254,     0,    23,    24,     0,   157,   368,     0,     9,    19,
     372,   211,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,     0,     0,   383,     0,     0,     0,   385,     0,
       0,    23,    24,     0,    -1,    -1,    -1,    -1,     0,     0,
       0,     0,     0,     0,     0,     0,   391,     0,     0,     0,
       0,    -1,    -1,    -1,     0,     0,     0,   212,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,   161,    -1,    -1,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,   122,   123,
     198,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,   122,   123,   201,     0,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,   122,   123,   309,     0,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,   122,   123,   324,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
     122,   123,   352,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,    49,     0,   122,   123,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    49,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   103,   104,   105,   106,     0,
       0,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,   115,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123
};

static const yytype_int16 yycheck[] =
{
       5,    10,     5,    74,   231,     5,     9,     5,    68,   319,
       3,    71,   324,     6,     5,    34,     9,     0,    34,     8,
      23,    24,    25,    26,    27,    28,    29,    34,    31,    32,
      33,    34,    35,    36,     3,    54,    29,    30,    54,    53,
     352,     5,    19,    20,    49,    14,    49,    54,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     287,    34,   372,    56,    53,     4,     5,   318,     7,    72,
      32,    76,    75,   383,    53,   385,    32,   148,    53,    52,
      32,   391,    51,   154,   335,     3,     4,     5,    53,     7,
      19,    20,    53,    53,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    53,    53,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   192,     3,    53,    32,     6,     5,    51,     9,     3,
     357,    53,     3,     3,    53,     6,   196,    18,     9,     3,
      52,    31,    23,    24,    54,    34,    13,    18,    29,    30,
      53,     3,   379,   380,     6,    54,   159,     9,    29,    30,
      54,   388,     3,    32,     3,     6,    18,     6,     9,    34,
       9,     3,    52,    55,    32,    56,    54,    29,    30,    18,
      55,    54,    54,    13,    32,    56,    32,    32,    29,    30,
      29,    30,    55,   198,    55,    13,     3,    53,    32,   202,
     198,   204,    56,    32,    56,    32,    32,   198,     3,    32,
      54,    32,    32,    32,   219,    56,   219,    56,    32,   219,
      32,   219,   227,    32,     3,    53,    32,     6,   219,   227,
       9,    32,    32,    55,   198,    32,   227,    54,    54,    18,
      32,    32,   247,   248,    32,   248,    32,   247,    32,   247,
      29,    30,    55,    55,     3,   219,   247,     6,   263,   262,
       9,     3,    32,   227,     6,   263,    32,     9,     3,    18,
      55,     6,   263,    32,     9,    32,    18,    56,    32,   284,
      29,    30,    19,   247,    32,    32,   284,    29,    30,    32,
      19,    32,    32,   284,    29,    30,    19,    19,   368,   263,
     227,   188,   219,   219,   190,   219,   219,    56,   330,    -1,
       3,    -1,    -1,     6,    56,    -1,     9,    -1,   321,   324,
     284,    56,    -1,    -1,   324,    18,   324,    -1,    -1,    -1,
      -1,   336,    -1,   324,    -1,    -1,    29,    30,   336,    -1,
      -1,    -1,   347,   348,   349,   336,    -1,   352,   353,   347,
     348,   349,   352,   353,   352,   353,   347,   348,   349,    -1,
     324,   352,   353,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,   378,    -1,    -1,    -1,    -1,   378,    -1,
     378,    -1,    -1,   347,   348,   349,    -1,   378,   352,   353,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,    47,    48,     9,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    29,    30,
      12,    -1,    14,    15,    16,    17,    18,    -1,    79,    -1,
      81,    82,    83,    84,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    56,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,    47,    48,     9,    50,    51,
      -1,    53,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    35,    36,     3,    -1,    -1,     6,
      -1,    -1,     9,    -1,    56,    -1,    47,    48,    -1,    50,
      51,    -1,    53,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    29,    30,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    35,    36,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    79,
      -1,    81,    82,    83,    84,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    85,    86,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    85,    86,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
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
      -1,    18,    55,    -1,     3,    -1,    55,     6,    29,    30,
       9,    -1,    29,    30,    -1,     3,    55,    -1,     6,    18,
      55,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    55,    -1,    -1,    -1,    55,    -1,
      -1,    29,    30,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    55,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    85,    86,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    85,    86,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    85,    86,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    85,    86,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    85,    86,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      85,    86,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    31,    -1,    85,    86,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    31,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    41,    42,    43,    44,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    88,    89,     0,    90,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    15,    16,    17,    18,
      26,    27,    28,    29,    30,    35,    36,    47,    48,    50,
      51,    53,    79,    81,    82,    83,    84,    91,    92,    93,
      94,    95,   102,   107,   110,   112,   113,   118,   121,    31,
      51,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     3,    26,   112,    53,    53,    53,    53,
      53,    53,    53,     8,    53,    53,    53,   112,   112,   112,
     112,   112,   112,   112,   112,   114,   112,   112,   112,   112,
     112,   112,    32,    32,    32,    32,    32,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    85,    86,    92,   112,     5,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,     3,
       4,     5,     7,   115,   116,   117,     3,    14,    51,   114,
       3,     3,   114,   112,    53,   115,   112,     3,    92,    34,
      52,    54,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,    52,    31,    54,
      34,    13,    53,   115,    54,    54,    34,    54,    54,   115,
      54,    54,    32,   112,    33,   117,   116,     3,   115,    52,
     114,     9,    55,    92,    93,    94,    97,   110,    54,    55,
      55,   112,   112,    54,    54,    13,    54,    96,    32,    32,
      32,    19,    20,    32,    55,     9,    92,    93,    94,    95,
     102,   107,   110,   111,   112,   118,   121,   103,    32,    55,
      13,     3,    56,    97,     9,    55,    92,    93,    94,    95,
      99,   110,    53,   108,    32,    32,    32,    32,    56,    32,
       9,    23,    24,    56,    92,    93,    94,    95,   104,   105,
     106,   110,    92,   112,   119,     3,    54,    19,    20,    98,
      32,    32,    32,    32,   112,     9,    56,    92,    93,    94,
     109,   110,    32,    32,    32,    32,    32,    32,    54,    54,
       9,    56,    92,    93,    94,   110,   120,    54,    55,    55,
      99,    53,    56,    99,    54,    32,    32,    32,    32,    55,
      55,    32,    32,    32,    32,    55,   119,    98,   112,     9,
      55,    92,    93,    94,    95,   101,   110,   122,   122,   119,
      56,    56,    54,   100,    32,    32,    32,    19,    32,     9,
      56,    92,    93,    94,   110,   123,    56,    56,    55,   101,
      56,   101,    55,    99,    32,    32,    32,    32,   100,    19,
      19,    98,    56,    55,    99,    55,    99,    56,    19,    98,
      98,    55,    99,    56,    56,    98,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    87,    89,    88,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   106,   107,   108,   108,   109,   109,   109,   109,
     109,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   114,   114,   114,   115,   115,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     5,     7,     7,     9,     9,    11,    12,
      14,    14,    16,    14,    16,    16,    18,     0,     2,     2,
       2,     2,     2,     1,     0,     2,     2,     2,     2,     1,
       2,     1,     0,     2,     2,     2,     2,     1,     2,     1,
       7,     0,     2,     2,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     8,     0,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     5,     7,     4,     6,     4,     4,     2,
       2,     2,     2,     4,     0,     1,     3,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     9,    12,    11,     0,
       2,     2,     2,     2,     2,     1,    11,    11,     0,     2,
       2,     2,     2,     2,     1
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
#line 50 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1744 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 50 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1750 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 56 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1756 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 57 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1762 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 58 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1768 "php2python.tab.c"
    break;

  case 9: /* statement: print SC  */
#line 59 "php2python.y"
               {printf("Se reconocio un print\n"); write_echo((yyvsp[-1].str));}
#line 1774 "php2python.tab.c"
    break;

  case 10: /* statement: conditional  */
#line 60 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1780 "php2python.tab.c"
    break;

  case 11: /* statement: while  */
#line 61 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1786 "php2python.tab.c"
    break;

  case 12: /* statement: foreach  */
#line 62 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1792 "php2python.tab.c"
    break;

  case 13: /* statement: for  */
#line 63 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1798 "php2python.tab.c"
    break;

  case 14: /* statement: functionDefinition  */
#line 64 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1804 "php2python.tab.c"
    break;

  case 15: /* statement: return SC  */
#line 65 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1810 "php2python.tab.c"
    break;

  case 16: /* statement: CMNT  */
#line 66 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1816 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ expr  */
#line 68 "php2python.y"
<<<<<<< HEAD
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str)); put_symbol(format_variable((yyvsp[-2].str)), VAR);}
#line 1822 "php2python.tab.c"
=======
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str)); put_symbol(format_variable((yyvsp[-2].str)), VAR, 0, 0);}
#line 1824 "php2python.tab.c"
>>>>>>> af716421615ebb5f9f255a7cf4ac39d4be57cfb6
    break;

  case 18: /* declaration: ID EQ declaration  */
#line 69 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1828 "php2python.tab.c"
    break;

  case 19: /* declaration: ID PLEQ expr  */
#line 70 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1834 "php2python.tab.c"
    break;

  case 20: /* declaration: ID MNEQ expr  */
#line 71 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1840 "php2python.tab.c"
    break;

  case 21: /* declaration: ID MUEQ expr  */
#line 72 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1846 "php2python.tab.c"
    break;

  case 22: /* declaration: ID DIEQ expr  */
#line 73 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1852 "php2python.tab.c"
    break;

  case 23: /* declaration: ID EXEQ expr  */
#line 74 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1858 "php2python.tab.c"
    break;

  case 24: /* declaration: ID MOEQ expr  */
#line 75 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1864 "php2python.tab.c"
    break;

  case 25: /* declaration: ID COEQ expr  */
#line 76 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1870 "php2python.tab.c"
    break;

  case 26: /* declaration: ID ADEQ expr  */
#line 77 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " &= ", (yyvsp[0].str));}
#line 1876 "php2python.tab.c"
    break;

  case 27: /* declaration: ID OREQ expr  */
#line 78 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " |= ", (yyvsp[0].str));}
#line 1882 "php2python.tab.c"
    break;

  case 28: /* declaration: ID XOEQ expr  */
#line 79 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " ^= ", (yyvsp[0].str));}
#line 1888 "php2python.tab.c"
    break;

  case 29: /* declaration: ID LLEQ expr  */
#line 80 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 1894 "php2python.tab.c"
    break;

  case 30: /* declaration: ID GGEQ expr  */
#line 81 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 1900 "php2python.tab.c"
    break;

  case 31: /* echo: ECH expr  */
#line 83 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1906 "php2python.tab.c"
    break;

  case 32: /* print: PRNT expr  */
#line 84 "php2python.y"
                 {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1912 "php2python.tab.c"
    break;

  case 33: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 86 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1918 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 87 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1924 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 88 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1930 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 89 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1936 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 90 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1942 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 91 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1948 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 92 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1954 "php2python.tab.c"
    break;

  case 40: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 93 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1960 "php2python.tab.c"
    break;

  case 41: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 94 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1966 "php2python.tab.c"
    break;

  case 42: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 95 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1972 "php2python.tab.c"
    break;

  case 43: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 96 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1978 "php2python.tab.c"
    break;

  case 44: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 97 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1984 "php2python.tab.c"
    break;

  case 45: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 98 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1990 "php2python.tab.c"
    break;

  case 46: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 99 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1996 "php2python.tab.c"
    break;

  case 48: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 103 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2002 "php2python.tab.c"
    break;

  case 49: /* statementinifblock: declaration SC  */
#line 106 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2008 "php2python.tab.c"
    break;

  case 50: /* statementinifblock: echo SC  */
#line 107 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2014 "php2python.tab.c"
    break;

  case 51: /* statementinifblock: print SC  */
#line 108 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2020 "php2python.tab.c"
    break;

  case 52: /* statementinifblock: return SC  */
#line 109 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2026 "php2python.tab.c"
    break;

  case 53: /* statementinifblock: CMNT  */
#line 110 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2032 "php2python.tab.c"
    break;

  case 55: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 114 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 2038 "php2python.tab.c"
    break;

  case 56: /* statementinelseblock: declaration SC  */
#line 117 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 2044 "php2python.tab.c"
    break;

  case 57: /* statementinelseblock: echo SC  */
#line 118 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2050 "php2python.tab.c"
    break;

  case 58: /* statementinelseblock: print SC  */
#line 119 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2056 "php2python.tab.c"
    break;

  case 59: /* statementinelseblock: conditional  */
#line 120 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 2062 "php2python.tab.c"
    break;

  case 60: /* statementinelseblock: return SC  */
#line 121 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2068 "php2python.tab.c"
    break;

  case 61: /* statementinelseblock: CMNT  */
#line 122 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2074 "php2python.tab.c"
    break;

  case 63: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 126 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 2080 "php2python.tab.c"
    break;

  case 64: /* statementinelifblock: declaration SC  */
#line 129 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 2086 "php2python.tab.c"
    break;

  case 65: /* statementinelifblock: echo SC  */
#line 130 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2092 "php2python.tab.c"
    break;

  case 66: /* statementinelifblock: print SC  */
#line 131 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2098 "php2python.tab.c"
    break;

  case 67: /* statementinelifblock: conditional  */
#line 132 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 2104 "php2python.tab.c"
    break;

  case 68: /* statementinelifblock: return SC  */
#line 133 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2110 "php2python.tab.c"
    break;

  case 69: /* statementinelifblock: CMNT  */
#line 134 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2116 "php2python.tab.c"
    break;

  case 70: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 136 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 2122 "php2python.tab.c"
    break;

  case 72: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 139 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 2128 "php2python.tab.c"
    break;

  case 73: /* statementInWhileBlock: declaration SC  */
#line 142 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2134 "php2python.tab.c"
    break;

  case 74: /* statementInWhileBlock: echo SC  */
#line 143 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2140 "php2python.tab.c"
    break;

  case 75: /* statementInWhileBlock: print SC  */
#line 144 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2146 "php2python.tab.c"
    break;

  case 76: /* statementInWhileBlock: conditional  */
#line 145 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 2152 "php2python.tab.c"
    break;

  case 77: /* statementInWhileBlock: return SC  */
#line 146 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2158 "php2python.tab.c"
    break;

  case 78: /* statementInWhileBlock: break SC  */
#line 147 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2164 "php2python.tab.c"
    break;

  case 79: /* statementInWhileBlock: continue SC  */
#line 148 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2170 "php2python.tab.c"
    break;

  case 80: /* statementInWhileBlock: CMNT  */
#line 149 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2176 "php2python.tab.c"
    break;

  case 81: /* break: BRK  */
#line 151 "php2python.y"
           {(yyval.str)="break";}
#line 2182 "php2python.tab.c"
    break;

  case 82: /* continue: CONT  */
#line 152 "php2python.y"
               {(yyval.str)="continue";}
#line 2188 "php2python.tab.c"
    break;

  case 83: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 153 "php2python.y"
<<<<<<< HEAD
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str)); put_symbol((yyvsp[-6].str), FUN);}
#line 2194 "php2python.tab.c"
=======
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str)); put_symbol((yyvsp[-6].str), FUN, reset_obligatory_argument_counter(), reset_optional_argument_counter());}
#line 2196 "php2python.tab.c"
>>>>>>> af716421615ebb5f9f255a7cf4ac39d4be57cfb6
    break;

  case 85: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 156 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 2200 "php2python.tab.c"
    break;

  case 86: /* statementInFunctionBlock: declaration SC  */
#line 159 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2206 "php2python.tab.c"
    break;

  case 87: /* statementInFunctionBlock: echo SC  */
#line 160 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2212 "php2python.tab.c"
    break;

  case 88: /* statementInFunctionBlock: print SC  */
#line 161 "php2python.y"
               {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2218 "php2python.tab.c"
    break;

  case 89: /* statementInFunctionBlock: return SC  */
#line 162 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2224 "php2python.tab.c"
    break;

  case 90: /* statementInFunctionBlock: CMNT  */
#line 163 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2230 "php2python.tab.c"
    break;

  case 91: /* return: RTN expr  */
#line 165 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 2236 "php2python.tab.c"
    break;

  case 92: /* anonymousFunctionStatement: declaration SC  */
#line 167 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 2242 "php2python.tab.c"
    break;

  case 93: /* anonymousFunctionStatement: expr SC  */
#line 168 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 2248 "php2python.tab.c"
    break;

  case 94: /* anonymousFunctionStatement: echo SC  */
#line 169 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 2254 "php2python.tab.c"
    break;

  case 95: /* anonymousFunctionStatement: print SC  */
#line 170 "php2python.y"
               {printf("Se reconocio un print\n"); }
#line 2260 "php2python.tab.c"
    break;

  case 96: /* anonymousFunctionStatement: conditional  */
#line 171 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 2266 "php2python.tab.c"
    break;

  case 97: /* anonymousFunctionStatement: while  */
#line 172 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 2272 "php2python.tab.c"
    break;

  case 98: /* anonymousFunctionStatement: foreach  */
#line 173 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 2278 "php2python.tab.c"
    break;

  case 99: /* anonymousFunctionStatement: for  */
#line 174 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 2284 "php2python.tab.c"
    break;

  case 100: /* anonymousFunctionStatement: functionDefinition  */
#line 175 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 2290 "php2python.tab.c"
    break;

  case 101: /* anonymousFunctionStatement: return SC  */
#line 176 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 2296 "php2python.tab.c"
    break;

  case 102: /* anonymousFunctionStatement: CMNT  */
#line 177 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 2302 "php2python.tab.c"
    break;

  case 103: /* expr: NUM  */
#line 179 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2308 "php2python.tab.c"
    break;

  case 104: /* expr: STR  */
#line 180 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2314 "php2python.tab.c"
    break;

  case 105: /* expr: ID  */
#line 181 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2320 "php2python.tab.c"
    break;

  case 106: /* expr: BOOL  */
#line 182 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2326 "php2python.tab.c"
    break;

  case 107: /* expr: functionCall  */
#line 183 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2332 "php2python.tab.c"
    break;

  case 108: /* expr: PLUS expr  */
#line 184 "php2python.y"
                {printf("Se encontro una expresion positiva\n"); (yyval.str)=format_operation("", "+", (yyvsp[0].str));}
#line 2338 "php2python.tab.c"
    break;

  case 109: /* expr: MINS expr  */
#line 185 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", "-", (yyvsp[0].str));}
#line 2344 "php2python.tab.c"
    break;

  case 110: /* expr: expr PLUS expr  */
#line 186 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2350 "php2python.tab.c"
    break;

  case 111: /* expr: expr MINS expr  */
#line 187 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2356 "php2python.tab.c"
    break;

  case 112: /* expr: expr MULT expr  */
#line 188 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2362 "php2python.tab.c"
    break;

  case 113: /* expr: expr DIV expr  */
#line 189 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2368 "php2python.tab.c"
    break;

  case 114: /* expr: expr MOD expr  */
#line 190 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2374 "php2python.tab.c"
    break;

  case 115: /* expr: expr EXPO expr  */
#line 191 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2380 "php2python.tab.c"
    break;

  case 116: /* expr: expr CCTN expr  */
#line 192 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2386 "php2python.tab.c"
    break;

  case 117: /* expr: PPL expr  */
#line 193 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2392 "php2python.tab.c"
    break;

  case 118: /* expr: expr PPL  */
#line 194 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2398 "php2python.tab.c"
    break;

  case 119: /* expr: MMN expr  */
#line 195 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2404 "php2python.tab.c"
    break;

  case 120: /* expr: expr MMN  */
#line 196 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2410 "php2python.tab.c"
    break;

  case 121: /* expr: NOT expr  */
#line 197 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", "not ", (yyvsp[0].str));}
#line 2416 "php2python.tab.c"
    break;

  case 122: /* expr: BNOT expr  */
#line 198 "php2python.y"
                {printf("Se encontro una negacion bit a bit\n"); (yyval.str)=format_operation("", "~", (yyvsp[0].str));}
#line 2422 "php2python.tab.c"
    break;

  case 123: /* expr: expr AND expr  */
#line 199 "php2python.y"
                    {printf("Se encontro una conjuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2428 "php2python.tab.c"
    break;

  case 124: /* expr: expr BAND expr  */
#line 200 "php2python.y"
                     {printf("Se encontro una conjuncion bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " & ", (yyvsp[0].str));}
#line 2434 "php2python.tab.c"
    break;

  case 125: /* expr: expr OR expr  */
#line 201 "php2python.y"
                   {printf("Se encontro una disyuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2440 "php2python.tab.c"
    break;

  case 126: /* expr: expr BOR expr  */
#line 202 "php2python.y"
                    {printf("Se encontro una disyuncion bit a bit"); (yyval.str)=format_operation((yyvsp[-2].str), " | ", (yyvsp[0].str));}
#line 2446 "php2python.tab.c"
    break;

  case 127: /* expr: expr XOR expr  */
#line 203 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2452 "php2python.tab.c"
    break;

  case 128: /* expr: expr BXOR expr  */
#line 204 "php2python.y"
                     {printf("Se encontro una disyuncion exclusiva bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2458 "php2python.tab.c"
    break;

  case 129: /* expr: expr GT expr  */
#line 205 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2464 "php2python.tab.c"
    break;

  case 130: /* expr: expr LT expr  */
#line 206 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2470 "php2python.tab.c"
    break;

  case 131: /* expr: expr GTE expr  */
#line 207 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2476 "php2python.tab.c"
    break;

  case 132: /* expr: expr LTE expr  */
#line 208 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2482 "php2python.tab.c"
    break;

  case 133: /* expr: expr EEQ expr  */
#line 209 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2488 "php2python.tab.c"
    break;

  case 134: /* expr: expr EEEQ expr  */
#line 210 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2494 "php2python.tab.c"
    break;

  case 135: /* expr: expr NEQ expr  */
#line 211 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2500 "php2python.tab.c"
    break;

  case 136: /* expr: expr NOEQ expr  */
#line 212 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2506 "php2python.tab.c"
    break;

  case 137: /* expr: expr NEEE expr  */
#line 213 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2512 "php2python.tab.c"
    break;

  case 138: /* expr: expr LTLT expr  */
#line 214 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la izquierda \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 2518 "php2python.tab.c"
    break;

  case 139: /* expr: expr GTGT expr  */
#line 215 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la derecha \n "); (yyval.str)=format_operation((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 2524 "php2python.tab.c"
    break;

  case 140: /* expr: ARRY OPRT parameters CPRT  */
#line 216 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2530 "php2python.tab.c"
    break;

  case 141: /* expr: OSQB parameters CSQB  */
#line 217 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2536 "php2python.tab.c"
    break;

  case 142: /* expr: OPRT expr CPRT  */
#line 218 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2542 "php2python.tab.c"
    break;

  case 143: /* expr: expr QUES expr CL expr  */
#line 219 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2548 "php2python.tab.c"
    break;

  case 144: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 220 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2554 "php2python.tab.c"
    break;

  case 145: /* expr: ID OSQB NUM CSQB  */
#line 221 "php2python.y"
                       {printf("Se encontro un acceso a un elemento de un array\n"); (yyval.str)=format_array_access((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2560 "php2python.tab.c"
    break;

  case 146: /* expr: ARPS OPRT ID COMM parameters CPRT  */
#line 222 "php2python.y"
                                        {printf("Se encontro una llamada a array_push\n"); (yyval.str)=format_array_push((yyvsp[-3].str));}
#line 2566 "php2python.tab.c"
    break;

  case 147: /* expr: ARPO OPRT ID CPRT  */
#line 223 "php2python.y"
                        {printf("Se encontro una llamada a array_pop\n"); (yyval.str)=format_array_pop((yyvsp[-1].str));}
#line 2572 "php2python.tab.c"
    break;

  case 148: /* expr: ASUM OPRT parameters CPRT  */
#line 224 "php2python.y"
                                {printf("Se encontro una llamada a array_sum\n"); (yyval.str)=format_array_sum();}
#line 2578 "php2python.tab.c"
    break;

  case 149: /* expr: FCAS expr  */
#line 225 "php2python.y"
                {printf("Se encontro una conversion a tipo flotante\n"); (yyval.str)=format_float_cast((yyvsp[0].str));}
#line 2584 "php2python.tab.c"
    break;

  case 150: /* expr: BCAS expr  */
#line 226 "php2python.y"
                {printf("Se encontro una conversion a tipo booleano\n"); (yyval.str)=format_bool_cast((yyvsp[0].str));}
#line 2590 "php2python.tab.c"
    break;

  case 151: /* expr: SCAS expr  */
#line 227 "php2python.y"
                {printf("Se encontro una conversion a tipo cadena\n"); (yyval.str)=format_string_cast((yyvsp[0].str));}
#line 2596 "php2python.tab.c"
    break;

  case 152: /* expr: ACAS expr  */
#line 228 "php2python.y"
                {printf("Se encontro una conversion a tipo arreglo\n"); (yyval.str)=format_array_cast((yyvsp[0].str));}
#line 2602 "php2python.tab.c"
    break;

<<<<<<< HEAD
  case 153: /* functionCall: NAME OPRT arguments CPRT  */
#line 230 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2608 "php2python.tab.c"
=======
  case 154: /* functionCall: NAME OPRT arguments CPRT  */
#line 231 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); if (is_argument_count_correct((yyvsp[-3].str), (yyvsp[-1].str)) == 0) {yyerror("Cantidad de argumentos incorrectos para la llamada de una funcion"); YYERROR;} else {(yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));};}
#line 2616 "php2python.tab.c"
>>>>>>> af716421615ebb5f9f255a7cf4ac39d4be57cfb6
    break;

  case 154: /* parameters: %empty  */
#line 232 "php2python.y"
           {(yyval.str)=NULL;}
#line 2614 "php2python.tab.c"
    break;

<<<<<<< HEAD
  case 155: /* parameters: expr  */
#line 233 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2620 "php2python.tab.c"
=======
  case 156: /* parameters: expr  */
#line 234 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2628 "php2python.tab.c"
>>>>>>> af716421615ebb5f9f255a7cf4ac39d4be57cfb6
    break;

  case 156: /* parameters: parameters COMM expr  */
#line 234 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2626 "php2python.tab.c"
    break;

  case 157: /* arguments: %empty  */
#line 237 "php2python.y"
           {(yyval.str)="";}
#line 2632 "php2python.tab.c"
    break;

  case 159: /* argument: argument COMM argument  */
#line 241 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2638 "php2python.tab.c"
    break;

<<<<<<< HEAD
  case 160: /* argument: ID  */
#line 242 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2644 "php2python.tab.c"
    break;

  case 161: /* argument: ID EQ defaultValue  */
#line 243 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2650 "php2python.tab.c"
=======
  case 161: /* argument: ID  */
#line 243 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str)); add_to_obligatory_argument_counter();}
#line 2652 "php2python.tab.c"
    break;

  case 162: /* argument: ID EQ defaultValue  */
#line 244 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str)); add_to_optinal_argument_counter();}
#line 2658 "php2python.tab.c"
>>>>>>> af716421615ebb5f9f255a7cf4ac39d4be57cfb6
    break;

  case 163: /* defaultValue: NUM  */
#line 247 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2656 "php2python.tab.c"
    break;

  case 164: /* defaultValue: STR  */
#line 248 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2662 "php2python.tab.c"
    break;

  case 165: /* defaultValue: BOOL  */
#line 249 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2668 "php2python.tab.c"
    break;

  case 166: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 251 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2674 "php2python.tab.c"
    break;

  case 167: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 252 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2680 "php2python.tab.c"
    break;

  case 168: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 253 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2686 "php2python.tab.c"
    break;

  case 170: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 256 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2692 "php2python.tab.c"
    break;

  case 171: /* statementInForeach: declaration SC  */
#line 259 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2698 "php2python.tab.c"
    break;

  case 172: /* statementInForeach: echo SC  */
#line 260 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2704 "php2python.tab.c"
    break;

  case 173: /* statementInForeach: print SC  */
#line 261 "php2python.y"
               {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2710 "php2python.tab.c"
    break;

  case 174: /* statementInForeach: return SC  */
#line 262 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2716 "php2python.tab.c"
    break;

  case 175: /* statementInForeach: CMNT  */
#line 263 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2722 "php2python.tab.c"
    break;

  case 176: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 266 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2728 "php2python.tab.c"
    break;

  case 177: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 267 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2734 "php2python.tab.c"
    break;

  case 179: /* statementsInFor: statementsInFor statementInFor  */
#line 270 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2740 "php2python.tab.c"
    break;

  case 180: /* statementInFor: declaration SC  */
#line 273 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2746 "php2python.tab.c"
    break;

  case 181: /* statementInFor: echo SC  */
#line 274 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2752 "php2python.tab.c"
    break;

  case 182: /* statementInFor: print SC  */
#line 275 "php2python.y"
               {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2758 "php2python.tab.c"
    break;

  case 183: /* statementInFor: return SC  */
#line 276 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2764 "php2python.tab.c"
    break;

  case 184: /* statementInFor: CMNT  */
#line 277 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2770 "php2python.tab.c"
    break;


#line 2774 "php2python.tab.c"

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

#line 279 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s at line %d\n", message, yylineno);
    return -1;
}
