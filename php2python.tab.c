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
  YYSYMBOL_GTE = 80,                       /* GTE  */
  YYSYMBOL_LTE = 81,                       /* LTE  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_84_1 = 84,                      /* $@1  */
  YYSYMBOL_statements = 85,                /* statements  */
  YYSYMBOL_statement = 86,                 /* statement  */
  YYSYMBOL_declaration = 87,               /* declaration  */
  YYSYMBOL_echo = 88,                      /* echo  */
  YYSYMBOL_print = 89,                     /* print  */
  YYSYMBOL_conditional = 90,               /* conditional  */
  YYSYMBOL_statementsinifblock = 91,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 92,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 93,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 94,      /* statementinelseblock  */
  YYSYMBOL_statementsinelifblock = 95,     /* statementsinelifblock  */
  YYSYMBOL_statementinelifblock = 96,      /* statementinelifblock  */
  YYSYMBOL_while = 97,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 98,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 99,     /* statementInWhileBlock  */
  YYSYMBOL_break = 100,                    /* break  */
  YYSYMBOL_continue = 101,                 /* continue  */
  YYSYMBOL_functionDefinition = 102,       /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 103, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 104, /* statementInFunctionBlock  */
  YYSYMBOL_return = 105,                   /* return  */
  YYSYMBOL_anonymousFunctionStatement = 106, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 107,                     /* expr  */
  YYSYMBOL_functionCall = 108,             /* functionCall  */
  YYSYMBOL_parameters = 109,               /* parameters  */
  YYSYMBOL_arguments = 110,                /* arguments  */
  YYSYMBOL_argument = 111,                 /* argument  */
  YYSYMBOL_defaultValue = 112,             /* defaultValue  */
  YYSYMBOL_foreach = 113,                  /* foreach  */
  YYSYMBOL_statementsInForeach = 114,      /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 115,       /* statementInForeach  */
  YYSYMBOL_for = 116,                      /* for  */
  YYSYMBOL_statementsInFor = 117,          /* statementsInFor  */
  YYSYMBOL_statementInFor = 118            /* statementInFor  */
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   1240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  385

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   336


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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    49,    51,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    83,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   101,   102,   105,
     106,   107,   108,   109,   112,   113,   116,   117,   118,   119,
     120,   121,   124,   125,   128,   129,   130,   131,   132,   133,
     135,   137,   138,   141,   142,   143,   144,   145,   146,   147,
     148,   150,   151,   152,   154,   155,   158,   159,   160,   161,
     162,   164,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   224,   226,
     227,   228,   231,   232,   235,   236,   237,   238,   241,   242,
     243,   245,   246,   247,   249,   250,   253,   254,   255,   256,
     257,   260,   261,   263,   264,   267,   268,   269,   270,   271
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
  "MOEQ", "COEQ", "OREQ", "ADEQ", "XOEQ", "LLEQ", "GGEQ", "BNOT", "GTE",
  "LTE", "$accept", "program", "$@1", "statements", "statement",
  "declaration", "echo", "print", "conditional", "statementsinifblock",
  "statementinifblock", "statementsinelseblock", "statementinelseblock",
  "statementsinelifblock", "statementinelifblock", "while",
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

#define YYPACT_NINF (-301)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,  -301,    25,  -301,  -301,   377,   781,  -301,  -301,   428,
    -301,   -38,  -301,  -301,   -15,    -7,    19,    22,    24,    -4,
      35,    37,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,  -301,    71,    72,    86,  -301,  -301,  -301,    99,
     619,  -301,  -301,  -301,   479,    63,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,    83,    89,
    1124,    82,    33,   428,   142,   157,   428,   108,    82,   428,
     159,  1124,  1124,  1150,  1150,  1150,  1150,  1150,  1124,   -32,
     842,  1150,  -301,  -301,  -301,  -301,  -301,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,  -301,
    -301,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,  -301,  1124,   118,  1124,  1124,  1124,
    1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,   144,
    -301,  -301,  -301,   119,   143,  -301,   163,   125,    82,   -31,
     126,   149,   889,    82,   130,   936,   798,   155,   428,  -301,
    -301,  1150,  1150,  1150,  1150,  1150,  1150,  1159,  1159,  1159,
    1159,  1150,  1150,  1150,   762,  1159,  1159,  1159,  1150,  1150,
    1150,  1150,  1150,  1150,  1159,  1159,  -301,   115,  -301,    82,
     187,    82,   145,  -301,  -301,   428,   598,   150,   148,   153,
     428,  1124,   428,  -301,  -301,   160,   161,   185,   -17,  -301,
    -301,   167,   186,   188,    47,   189,   164,   121,  -301,   666,
    1150,   170,   214,   225,  -301,    13,  -301,  -301,  -301,   515,
     180,  -301,  -301,  -301,   202,   204,   209,  -301,  -301,  -301,
     215,   196,   713,  -301,  -301,   135,   479,  -301,   252,   211,
      60,  -301,  -301,  -301,   231,   234,   238,  -301,  -301,   245,
     428,   137,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,   247,   248,   254,  -301,  -301,   256,   257,   258,
     237,   983,   176,   240,   241,   522,   244,    15,  -301,  -301,
    -301,  -301,  1030,  -301,  -301,   260,   261,   268,  -301,   270,
    -301,  -301,  -301,  -301,  -301,  -301,   246,   249,  -301,  -301,
     271,   273,   274,   278,  -301,   262,  -301,  -301,  -301,   428,
    -301,  -301,   544,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,   253,   183,  1077,  -301,  -301,   283,
     284,   286,  -301,   301,   290,   269,   493,   507,  -301,  -301,
     551,   220,  -301,  -301,  -301,   558,  -301,  -301,  -301,   291,
     292,   295,   296,  -301,  -301,  -301,  -301,   310,   315,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,   239,   580,   587,   255,
     328,  -301,  -301,  -301,  -301,  -301,   594,   391,   442,  -301,
    -301,  -301,  -301,   482,  -301
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,   105,   104,   103,     0,
     106,     0,    16,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     5,     0,     0,     0,    10,    11,    14,     0,
       0,   107,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
      31,   152,     0,   149,     0,     0,     0,     0,   152,     0,
       0,    91,    32,   108,   109,   117,   119,   121,   150,     0,
       0,   122,     6,     8,     9,    15,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    17,     0,    19,    20,    21,
      23,    22,    24,    25,    27,    26,    28,    29,    30,   155,
     159,   158,   160,     0,   153,   157,     0,     0,   152,     0,
       0,     0,     0,   152,     0,     0,     0,     0,     0,   141,
     142,   110,   111,   113,   112,   114,   116,   133,   135,   129,
     130,   123,   125,   127,     0,   136,   137,   134,   138,   139,
     124,   126,   128,   115,   131,   132,   145,     0,   148,     0,
       0,   152,     0,   140,   147,   149,     0,     0,     0,     0,
       0,   151,     0,   156,   154,     0,     0,     0,     0,    53,
      47,     0,     0,     0,    33,     0,     0,     0,    71,     0,
     143,     0,     0,     0,   146,     0,    49,    50,    51,     0,
       0,    52,    84,   102,     0,     0,     0,    96,    97,   100,
       0,     0,     0,    98,    99,     0,     0,   164,     0,     0,
      34,    48,    61,    54,     0,     0,     0,    59,    35,     0,
       0,     0,    92,    94,    95,   101,   144,    93,    80,    81,
      82,    70,     0,     0,     0,    76,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    60,     0,    90,    83,     0,     0,     0,    85,     0,
      73,    74,    75,    78,    79,    77,     0,     0,   170,   161,
       0,     0,     0,     0,   165,     0,   164,    54,    36,     0,
      37,    55,     0,    86,    87,    88,    89,   173,   173,   166,
     167,   168,   169,   164,     0,     0,     0,    69,    62,     0,
       0,     0,    67,     0,     0,     0,     0,     0,   163,    38,
       0,     0,    64,    65,    66,     0,    68,   179,   171,     0,
       0,     0,     0,   174,   172,   162,    62,     0,     0,    63,
      54,    39,   175,   176,   177,   178,     0,     0,     0,     0,
       0,    54,    40,    54,    41,    43,     0,     0,     0,    54,
      42,    44,    45,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -301,  -301,  -301,    -5,     2,     9,     0,  -301,
     136,  -297,  -213,    -3,  -300,   147,  -301,  -301,  -301,  -301,
     151,  -301,  -301,    36,  -301,     4,  -301,   -62,   -60,   173,
     178,   152,  -242,  -301,   156,    38,  -301
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    32,   244,   245,   246,   247,   215,
     204,   277,   311,   341,   359,    37,   235,   266,   267,   268,
      38,   251,   288,   249,   231,    78,    41,    79,   133,   134,
     135,    42,   272,   304,    43,   335,   353
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   139,   148,   148,    67,    36,   248,    34,   144,    40,
     325,     1,   333,    60,    35,    61,   146,   148,   146,     9,
     149,     9,   199,   183,   242,     4,    71,    72,    73,    74,
      75,    76,    77,    18,    80,    81,   136,   214,    62,   114,
     357,    39,    22,    23,    22,    23,    63,   137,   115,    68,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   308,   369,   324,   147,   219,   220,   116,   240,
     142,   310,    64,   145,   377,    65,   378,    66,   182,   275,
     276,   337,   383,   187,   138,   129,   130,   131,    69,   132,
      70,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    82,    83,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    84,   130,
     131,   196,   132,   198,     6,     7,     8,     9,    10,    11,
     223,    85,   361,    14,    45,    15,    16,    17,   146,    18,
     146,     9,    68,     9,   258,   140,   283,    19,    20,    21,
      22,    23,   191,    18,   372,   374,    24,    25,   259,   260,
     141,   143,   146,   380,    22,    23,    22,    23,    26,    27,
     176,    28,    29,   178,    30,   177,   180,   179,   181,   146,
     184,   201,     9,   185,   188,   298,   146,   190,   202,     9,
     195,   261,   242,   284,   209,   203,   210,   197,   213,   216,
      31,    18,   224,   207,   206,    22,    23,   227,   208,   225,
     201,   232,    22,    23,   211,   212,   226,   202,   217,   222,
     218,   221,   205,   146,   203,   237,     9,   238,   239,   327,
     262,   270,   299,   250,   252,   265,   253,   263,    18,   339,
     271,   254,   146,   230,   264,     9,   285,   255,   327,    22,
      23,   205,   256,   286,   282,   273,   146,    18,   146,     9,
     287,     9,   298,   278,   242,   274,   279,   300,    22,    23,
     280,   269,   146,    18,   301,     9,   358,   281,   347,   290,
     291,   302,    22,    23,    22,    23,   292,   289,   293,   294,
     295,   296,   313,   314,   305,   370,   306,   309,    22,    23,
     315,   317,   316,   319,   318,   320,   321,   329,   303,   338,
     322,   375,   332,   326,   330,   342,   343,   323,   344,   300,
     345,   331,   346,   362,   363,   348,   301,   364,   365,   367,
     349,   349,   300,   302,   368,   329,   329,   350,   350,   301,
     332,   332,   330,   330,   351,   351,   302,   376,   334,   331,
     331,   241,   194,   366,   228,   193,   336,     0,   229,   233,
     303,   329,     0,   234,     0,     0,   332,     0,   330,     0,
       0,   352,   352,   303,     0,   331,   334,   334,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,    17,   146,    18,     0,     9,     0,     0,
     242,     0,   334,    19,    20,    21,    22,    23,     0,    18,
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      22,    23,     0,     0,    26,    27,     0,    28,    29,     0,
      30,    58,     7,     8,     0,    10,    11,     0,     0,     0,
       0,     0,    15,    16,    17,   146,     0,   381,     9,     0,
       0,   242,     0,     0,    59,     0,    31,     0,     0,     0,
      18,     0,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    22,    23,     0,     0,    26,    27,     0,    28,    29,
       0,    30,     6,     7,     8,   146,    10,    11,     9,     0,
       0,   242,     0,    15,    16,    17,   146,     0,   382,     9,
      18,     0,   347,     0,     0,    59,     0,    31,     0,     0,
     146,    22,    23,     9,    24,    25,   298,     0,   146,     0,
       0,     9,    22,    23,   242,   146,    26,    27,     9,    28,
      29,   242,    30,    18,     0,     0,    22,    23,   384,     0,
      18,     0,     0,     0,    22,    23,     0,   146,     0,   354,
       9,    22,    23,   327,   146,     0,     0,     9,    31,     0,
     327,   146,    18,   355,     9,     0,     0,   242,     0,    18,
     243,     0,     0,    22,    23,     0,    18,   307,     0,     0,
      22,    23,     0,   146,     0,     0,     9,    22,    23,   242,
     146,     0,     0,     9,     0,     0,   242,   146,    18,   328,
       9,   146,     0,   242,     9,    18,   356,   199,     0,    22,
      23,     0,    18,   360,     0,     0,    22,    23,     0,     0,
       0,     0,     0,    22,    23,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,     0,     0,   379,
       0,    86,     0,   200,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   112,
     113,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,   112,   113,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   192,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    44,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    44,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     0,     0,     0,     0,   150,     0,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,   186,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,     0,
     189,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,   297,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,   312,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,   340,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    93,    94,    95,    96,     0,     0,    99,   100,     0,
      -1,    -1,    -1,    -1,   112,   113,     0,     0,   103,   104,
     105,     0,     0,     0,     0,     0,   111,    -1,    -1,    -1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,     0,     0,     0,     0,     0,     0,     0,    -1,
      -1
};

static const yytype_int16 yycheck[] =
{
       5,    63,    34,    34,     8,     5,   219,     5,    68,     5,
     307,    10,   312,     9,     5,    53,     3,    34,     3,     6,
      52,     6,     9,    54,     9,     0,    22,    23,    24,    25,
      26,    27,    28,    18,    30,    31,     3,    54,    53,    44,
     340,     5,    29,    30,    29,    30,    53,    14,    44,    53,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   275,   360,   306,    70,    19,    20,     5,    56,
      66,    56,    53,    69,   371,    53,   373,    53,   138,    19,
      20,   323,   379,   143,    51,     3,     4,     5,    53,     7,
      53,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    32,    32,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    32,     4,
       5,   181,     7,   185,     3,     4,     5,     6,     7,     8,
       9,    32,   345,    12,    51,    14,    15,    16,     3,    18,
       3,     6,    53,     6,     9,     3,     9,    26,    27,    28,
      29,    30,   148,    18,   367,   368,    35,    36,    23,    24,
       3,    53,     3,   376,    29,    30,    29,    30,    47,    48,
      52,    50,    51,    54,    53,    31,    13,    34,    53,     3,
      54,   186,     6,    34,    54,     9,     3,    32,   186,     6,
       3,    56,     9,    56,   190,   186,   192,    52,    13,    32,
      79,    18,   207,    55,    54,    29,    30,   207,    55,   207,
     215,   207,    29,    30,    54,    54,   207,   215,    32,    55,
      32,    32,   186,     3,   215,    55,     6,    13,     3,     9,
     235,   236,    56,    53,    32,   235,    32,   235,    18,    56,
     236,    32,     3,   207,   235,     6,   251,    32,     9,    29,
      30,   215,    56,   251,   250,     3,     3,    18,     3,     6,
     251,     6,     9,    32,     9,    54,    32,   272,    29,    30,
      32,   235,     3,    18,   272,     6,    56,    32,     9,    32,
      32,   272,    29,    30,    29,    30,    32,   251,    32,    32,
      32,    54,    32,    32,    54,    56,    55,    53,    29,    30,
      32,    55,    32,    32,    55,    32,    32,   312,   272,    56,
      32,    56,   312,   309,   312,    32,    32,    55,    32,   324,
      19,   312,    32,    32,    32,    56,   324,    32,    32,    19,
     335,   336,   337,   324,    19,   340,   341,   335,   336,   337,
     340,   341,   340,   341,   335,   336,   337,    19,   312,   340,
     341,   215,   179,   356,   207,   177,   318,    -1,   207,   207,
     324,   366,    -1,   207,    -1,    -1,   366,    -1,   366,    -1,
      -1,   335,   336,   337,    -1,   366,   340,   341,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    14,    15,    16,     3,    18,    -1,     6,    -1,    -1,
       9,    -1,   366,    26,    27,    28,    29,    30,    -1,    18,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    47,    48,    -1,    50,    51,    -1,
      53,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,     3,    -1,    56,     6,    -1,
      -1,     9,    -1,    -1,    26,    -1,    79,    -1,    -1,    -1,
      18,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    47,    48,    -1,    50,    51,
      -1,    53,     3,     4,     5,     3,     7,     8,     6,    -1,
      -1,     9,    -1,    14,    15,    16,     3,    -1,    56,     6,
      18,    -1,     9,    -1,    -1,    26,    -1,    79,    -1,    -1,
       3,    29,    30,     6,    35,    36,     9,    -1,     3,    -1,
      -1,     6,    29,    30,     9,     3,    47,    48,     6,    50,
      51,     9,    53,    18,    -1,    -1,    29,    30,    56,    -1,
      18,    -1,    -1,    -1,    29,    30,    -1,     3,    -1,    56,
       6,    29,    30,     9,     3,    -1,    -1,     6,    79,    -1,
       9,     3,    18,    56,     6,    -1,    -1,     9,    -1,    18,
      55,    -1,    -1,    29,    30,    -1,    18,    55,    -1,    -1,
      29,    30,    -1,     3,    -1,    -1,     6,    29,    30,     9,
       3,    -1,    -1,     6,    -1,    -1,     9,     3,    18,    55,
       6,     3,    -1,     9,     6,    18,    55,     9,    -1,    29,
      30,    -1,    18,    55,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    32,    -1,    55,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    80,
      81,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    80,    81,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    31,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    31,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    41,    42,    43,    44,    -1,    -1,    47,    48,    -1,
      41,    42,    43,    44,    80,    81,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    66,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    83,    84,     0,    85,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    15,    16,    18,    26,
      27,    28,    29,    30,    35,    36,    47,    48,    50,    51,
      53,    79,    86,    87,    88,    89,    90,    97,   102,   105,
     107,   108,   113,   116,    31,    51,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     3,    26,
     107,    53,    53,    53,    53,    53,    53,     8,    53,    53,
      53,   107,   107,   107,   107,   107,   107,   107,   107,   109,
     107,   107,    32,    32,    32,    32,    32,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    80,    81,    87,   107,     5,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,     3,
       4,     5,     7,   110,   111,   112,     3,    14,    51,   109,
       3,     3,   107,    53,   110,   107,     3,    87,    34,    52,
      54,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,    52,    31,    54,    34,
      13,    53,   110,    54,    54,    34,    54,   110,    54,    54,
      32,   107,    33,   112,   111,     3,   110,    52,   109,     9,
      55,    87,    88,    89,    92,   105,    54,    55,    55,   107,
     107,    54,    54,    13,    54,    91,    32,    32,    32,    19,
      20,    32,    55,     9,    87,    88,    89,    90,    97,   102,
     105,   106,   107,   113,   116,    98,    32,    55,    13,     3,
      56,    92,     9,    55,    87,    88,    89,    90,    94,   105,
      53,   103,    32,    32,    32,    32,    56,    32,     9,    23,
      24,    56,    87,    88,    89,    90,    99,   100,   101,   105,
      87,   107,   114,     3,    54,    19,    20,    93,    32,    32,
      32,    32,   107,     9,    56,    87,    88,    89,   104,   105,
      32,    32,    32,    32,    32,    32,    54,    54,     9,    56,
      87,    88,    89,   105,   115,    54,    55,    55,    94,    53,
      56,    94,    54,    32,    32,    32,    32,    55,    55,    32,
      32,    32,    32,    55,   114,    93,   107,     9,    55,    87,
      88,    89,    90,    96,   105,   117,   117,   114,    56,    56,
      54,    95,    32,    32,    32,    19,    32,     9,    56,    87,
      88,    89,   105,   118,    56,    56,    55,    96,    56,    96,
      55,    94,    32,    32,    32,    32,    95,    19,    19,    93,
      56,    55,    94,    55,    94,    56,    19,    93,    93,    55,
      94,    56,    56,    93,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    84,    83,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   101,   102,   103,   103,   104,   104,   104,   104,
     104,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   109,
     109,   109,   110,   110,   111,   111,   111,   111,   112,   112,
     112,   113,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118
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
       4,     3,     3,     5,     7,     4,     6,     4,     4,     0,
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 49 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1619 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 49 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1625 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 55 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1631 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 56 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1637 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 57 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1643 "php2python.tab.c"
    break;

  case 9: /* statement: print SC  */
#line 58 "php2python.y"
               {printf("Se reconocio un print\n"); write_echo((yyvsp[-1].str));}
#line 1649 "php2python.tab.c"
    break;

  case 10: /* statement: conditional  */
#line 59 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1655 "php2python.tab.c"
    break;

  case 11: /* statement: while  */
#line 60 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1661 "php2python.tab.c"
    break;

  case 12: /* statement: foreach  */
#line 61 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1667 "php2python.tab.c"
    break;

  case 13: /* statement: for  */
#line 62 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1673 "php2python.tab.c"
    break;

  case 14: /* statement: functionDefinition  */
#line 63 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1679 "php2python.tab.c"
    break;

  case 15: /* statement: return SC  */
#line 64 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1685 "php2python.tab.c"
    break;

  case 16: /* statement: CMNT  */
#line 65 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1691 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ expr  */
#line 67 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str)); put_symbol(format_variable((yyvsp[-2].str)), VAR);}
#line 1697 "php2python.tab.c"
    break;

  case 18: /* declaration: ID EQ declaration  */
#line 68 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1703 "php2python.tab.c"
    break;

  case 19: /* declaration: ID PLEQ expr  */
#line 69 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1709 "php2python.tab.c"
    break;

  case 20: /* declaration: ID MNEQ expr  */
#line 70 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1715 "php2python.tab.c"
    break;

  case 21: /* declaration: ID MUEQ expr  */
#line 71 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1721 "php2python.tab.c"
    break;

  case 22: /* declaration: ID DIEQ expr  */
#line 72 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1727 "php2python.tab.c"
    break;

  case 23: /* declaration: ID EXEQ expr  */
#line 73 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1733 "php2python.tab.c"
    break;

  case 24: /* declaration: ID MOEQ expr  */
#line 74 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1739 "php2python.tab.c"
    break;

  case 25: /* declaration: ID COEQ expr  */
#line 75 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1745 "php2python.tab.c"
    break;

  case 26: /* declaration: ID ADEQ expr  */
#line 76 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " &= ", (yyvsp[0].str));}
#line 1751 "php2python.tab.c"
    break;

  case 27: /* declaration: ID OREQ expr  */
#line 77 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " |= ", (yyvsp[0].str));}
#line 1757 "php2python.tab.c"
    break;

  case 28: /* declaration: ID XOEQ expr  */
#line 78 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " ^= ", (yyvsp[0].str));}
#line 1763 "php2python.tab.c"
    break;

  case 29: /* declaration: ID LLEQ expr  */
#line 79 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 1769 "php2python.tab.c"
    break;

  case 30: /* declaration: ID GGEQ expr  */
#line 80 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 1775 "php2python.tab.c"
    break;

  case 31: /* echo: ECH expr  */
#line 82 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1781 "php2python.tab.c"
    break;

  case 32: /* print: PRNT expr  */
#line 83 "php2python.y"
                 {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1787 "php2python.tab.c"
    break;

  case 33: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 85 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1793 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 86 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1799 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 87 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1805 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 88 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1811 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 89 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1817 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 90 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1823 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 91 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1829 "php2python.tab.c"
    break;

  case 40: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 92 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1835 "php2python.tab.c"
    break;

  case 41: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 93 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1841 "php2python.tab.c"
    break;

  case 42: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 94 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1847 "php2python.tab.c"
    break;

  case 43: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 95 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1853 "php2python.tab.c"
    break;

  case 44: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 96 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1859 "php2python.tab.c"
    break;

  case 45: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 97 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1865 "php2python.tab.c"
    break;

  case 46: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 98 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1871 "php2python.tab.c"
    break;

  case 48: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 102 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1877 "php2python.tab.c"
    break;

  case 49: /* statementinifblock: declaration SC  */
#line 105 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1883 "php2python.tab.c"
    break;

  case 50: /* statementinifblock: echo SC  */
#line 106 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1889 "php2python.tab.c"
    break;

  case 51: /* statementinifblock: print SC  */
#line 107 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1895 "php2python.tab.c"
    break;

  case 52: /* statementinifblock: return SC  */
#line 108 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1901 "php2python.tab.c"
    break;

  case 53: /* statementinifblock: CMNT  */
#line 109 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1907 "php2python.tab.c"
    break;

  case 55: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 113 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1913 "php2python.tab.c"
    break;

  case 56: /* statementinelseblock: declaration SC  */
#line 116 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1919 "php2python.tab.c"
    break;

  case 57: /* statementinelseblock: echo SC  */
#line 117 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1925 "php2python.tab.c"
    break;

  case 58: /* statementinelseblock: print SC  */
#line 118 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1931 "php2python.tab.c"
    break;

  case 59: /* statementinelseblock: conditional  */
#line 119 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1937 "php2python.tab.c"
    break;

  case 60: /* statementinelseblock: return SC  */
#line 120 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1943 "php2python.tab.c"
    break;

  case 61: /* statementinelseblock: CMNT  */
#line 121 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1949 "php2python.tab.c"
    break;

  case 63: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 125 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1955 "php2python.tab.c"
    break;

  case 64: /* statementinelifblock: declaration SC  */
#line 128 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1961 "php2python.tab.c"
    break;

  case 65: /* statementinelifblock: echo SC  */
#line 129 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1967 "php2python.tab.c"
    break;

  case 66: /* statementinelifblock: print SC  */
#line 130 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1973 "php2python.tab.c"
    break;

  case 67: /* statementinelifblock: conditional  */
#line 131 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1979 "php2python.tab.c"
    break;

  case 68: /* statementinelifblock: return SC  */
#line 132 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1985 "php2python.tab.c"
    break;

  case 69: /* statementinelifblock: CMNT  */
#line 133 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1991 "php2python.tab.c"
    break;

  case 70: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 135 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1997 "php2python.tab.c"
    break;

  case 72: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 138 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 2003 "php2python.tab.c"
    break;

  case 73: /* statementInWhileBlock: declaration SC  */
#line 141 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2009 "php2python.tab.c"
    break;

  case 74: /* statementInWhileBlock: echo SC  */
#line 142 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2015 "php2python.tab.c"
    break;

  case 75: /* statementInWhileBlock: print SC  */
#line 143 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2021 "php2python.tab.c"
    break;

  case 76: /* statementInWhileBlock: conditional  */
#line 144 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 2027 "php2python.tab.c"
    break;

  case 77: /* statementInWhileBlock: return SC  */
#line 145 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2033 "php2python.tab.c"
    break;

  case 78: /* statementInWhileBlock: break SC  */
#line 146 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2039 "php2python.tab.c"
    break;

  case 79: /* statementInWhileBlock: continue SC  */
#line 147 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2045 "php2python.tab.c"
    break;

  case 80: /* statementInWhileBlock: CMNT  */
#line 148 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2051 "php2python.tab.c"
    break;

  case 81: /* break: BRK  */
#line 150 "php2python.y"
           {(yyval.str)="break";}
#line 2057 "php2python.tab.c"
    break;

  case 82: /* continue: CONT  */
#line 151 "php2python.y"
               {(yyval.str)="continue";}
#line 2063 "php2python.tab.c"
    break;

  case 83: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 152 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str)); put_symbol((yyvsp[-6].str), FUN);}
#line 2069 "php2python.tab.c"
    break;

  case 85: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 155 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 2075 "php2python.tab.c"
    break;

  case 86: /* statementInFunctionBlock: declaration SC  */
#line 158 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2081 "php2python.tab.c"
    break;

  case 87: /* statementInFunctionBlock: echo SC  */
#line 159 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2087 "php2python.tab.c"
    break;

  case 88: /* statementInFunctionBlock: print SC  */
#line 160 "php2python.y"
               {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2093 "php2python.tab.c"
    break;

  case 89: /* statementInFunctionBlock: return SC  */
#line 161 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2099 "php2python.tab.c"
    break;

  case 90: /* statementInFunctionBlock: CMNT  */
#line 162 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2105 "php2python.tab.c"
    break;

  case 91: /* return: RTN expr  */
#line 164 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 2111 "php2python.tab.c"
    break;

  case 92: /* anonymousFunctionStatement: declaration SC  */
#line 166 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 2117 "php2python.tab.c"
    break;

  case 93: /* anonymousFunctionStatement: expr SC  */
#line 167 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 2123 "php2python.tab.c"
    break;

  case 94: /* anonymousFunctionStatement: echo SC  */
#line 168 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 2129 "php2python.tab.c"
    break;

  case 95: /* anonymousFunctionStatement: print SC  */
#line 169 "php2python.y"
               {printf("Se reconocio un print\n"); }
#line 2135 "php2python.tab.c"
    break;

  case 96: /* anonymousFunctionStatement: conditional  */
#line 170 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 2141 "php2python.tab.c"
    break;

  case 97: /* anonymousFunctionStatement: while  */
#line 171 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 2147 "php2python.tab.c"
    break;

  case 98: /* anonymousFunctionStatement: foreach  */
#line 172 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 2153 "php2python.tab.c"
    break;

  case 99: /* anonymousFunctionStatement: for  */
#line 173 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 2159 "php2python.tab.c"
    break;

  case 100: /* anonymousFunctionStatement: functionDefinition  */
#line 174 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 2165 "php2python.tab.c"
    break;

  case 101: /* anonymousFunctionStatement: return SC  */
#line 175 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 2171 "php2python.tab.c"
    break;

  case 102: /* anonymousFunctionStatement: CMNT  */
#line 176 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 2177 "php2python.tab.c"
    break;

  case 103: /* expr: NUM  */
#line 178 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2183 "php2python.tab.c"
    break;

  case 104: /* expr: STR  */
#line 179 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2189 "php2python.tab.c"
    break;

  case 105: /* expr: ID  */
#line 180 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2195 "php2python.tab.c"
    break;

  case 106: /* expr: BOOL  */
#line 181 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2201 "php2python.tab.c"
    break;

  case 107: /* expr: functionCall  */
#line 182 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2207 "php2python.tab.c"
    break;

  case 108: /* expr: PLUS expr  */
#line 183 "php2python.y"
                {printf("Se encontro una expresion positiva\n"); (yyval.str)=format_operation("", "+", (yyvsp[0].str));}
#line 2213 "php2python.tab.c"
    break;

  case 109: /* expr: MINS expr  */
#line 184 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", "-", (yyvsp[0].str));}
#line 2219 "php2python.tab.c"
    break;

  case 110: /* expr: expr PLUS expr  */
#line 185 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2225 "php2python.tab.c"
    break;

  case 111: /* expr: expr MINS expr  */
#line 186 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2231 "php2python.tab.c"
    break;

  case 112: /* expr: expr MULT expr  */
#line 187 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2237 "php2python.tab.c"
    break;

  case 113: /* expr: expr DIV expr  */
#line 188 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2243 "php2python.tab.c"
    break;

  case 114: /* expr: expr MOD expr  */
#line 189 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2249 "php2python.tab.c"
    break;

  case 115: /* expr: expr EXPO expr  */
#line 190 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2255 "php2python.tab.c"
    break;

  case 116: /* expr: expr CCTN expr  */
#line 191 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2261 "php2python.tab.c"
    break;

  case 117: /* expr: PPL expr  */
#line 192 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2267 "php2python.tab.c"
    break;

  case 118: /* expr: expr PPL  */
#line 193 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2273 "php2python.tab.c"
    break;

  case 119: /* expr: MMN expr  */
#line 194 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2279 "php2python.tab.c"
    break;

  case 120: /* expr: expr MMN  */
#line 195 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2285 "php2python.tab.c"
    break;

  case 121: /* expr: NOT expr  */
#line 196 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", "not ", (yyvsp[0].str));}
#line 2291 "php2python.tab.c"
    break;

  case 122: /* expr: BNOT expr  */
#line 197 "php2python.y"
                {printf("Se encontro una negacion bit a bit\n"); (yyval.str)=format_operation("", "~", (yyvsp[0].str));}
#line 2297 "php2python.tab.c"
    break;

  case 123: /* expr: expr AND expr  */
#line 198 "php2python.y"
                    {printf("Se encontro una conjuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2303 "php2python.tab.c"
    break;

  case 124: /* expr: expr BAND expr  */
#line 199 "php2python.y"
                     {printf("Se encontro una conjuncion bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " & ", (yyvsp[0].str));}
#line 2309 "php2python.tab.c"
    break;

  case 125: /* expr: expr OR expr  */
#line 200 "php2python.y"
                   {printf("Se encontro una disyuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2315 "php2python.tab.c"
    break;

  case 126: /* expr: expr BOR expr  */
#line 201 "php2python.y"
                    {printf("Se encontro una disyuncion bit a bit"); (yyval.str)=format_operation((yyvsp[-2].str), " | ", (yyvsp[0].str));}
#line 2321 "php2python.tab.c"
    break;

  case 127: /* expr: expr XOR expr  */
#line 202 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2327 "php2python.tab.c"
    break;

  case 128: /* expr: expr BXOR expr  */
#line 203 "php2python.y"
                     {printf("Se encontro una disyuncion exclusiva bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2333 "php2python.tab.c"
    break;

  case 129: /* expr: expr GT expr  */
#line 204 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2339 "php2python.tab.c"
    break;

  case 130: /* expr: expr LT expr  */
#line 205 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2345 "php2python.tab.c"
    break;

  case 131: /* expr: expr GTE expr  */
#line 206 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2351 "php2python.tab.c"
    break;

  case 132: /* expr: expr LTE expr  */
#line 207 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2357 "php2python.tab.c"
    break;

  case 133: /* expr: expr EEQ expr  */
#line 208 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2363 "php2python.tab.c"
    break;

  case 134: /* expr: expr EEEQ expr  */
#line 209 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2369 "php2python.tab.c"
    break;

  case 135: /* expr: expr NEQ expr  */
#line 210 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2375 "php2python.tab.c"
    break;

  case 136: /* expr: expr NOEQ expr  */
#line 211 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2381 "php2python.tab.c"
    break;

  case 137: /* expr: expr NEEE expr  */
#line 212 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2387 "php2python.tab.c"
    break;

  case 138: /* expr: expr LTLT expr  */
#line 213 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la izquierda \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 2393 "php2python.tab.c"
    break;

  case 139: /* expr: expr GTGT expr  */
#line 214 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la derecha \n "); (yyval.str)=format_operation((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 2399 "php2python.tab.c"
    break;

  case 140: /* expr: ARRY OPRT parameters CPRT  */
#line 215 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2405 "php2python.tab.c"
    break;

  case 141: /* expr: OSQB parameters CSQB  */
#line 216 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2411 "php2python.tab.c"
    break;

  case 142: /* expr: OPRT expr CPRT  */
#line 217 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2417 "php2python.tab.c"
    break;

  case 143: /* expr: expr QUES expr CL expr  */
#line 218 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2423 "php2python.tab.c"
    break;

  case 144: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 219 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2429 "php2python.tab.c"
    break;

  case 145: /* expr: ID OSQB NUM CSQB  */
#line 220 "php2python.y"
                       {printf("Se encontro un acceso a un elemento de un array\n"); (yyval.str)=format_array_access((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2435 "php2python.tab.c"
    break;

  case 146: /* expr: ARPS OPRT ID COMM parameters CPRT  */
#line 221 "php2python.y"
                                        {printf("Se encontro una llamada a array_push\n"); (yyval.str)=format_array_push((yyvsp[-3].str));}
#line 2441 "php2python.tab.c"
    break;

  case 147: /* expr: ARPO OPRT ID CPRT  */
#line 222 "php2python.y"
                        {printf("Se encontro una llamada a array_pop\n"); (yyval.str)=format_array_pop((yyvsp[-1].str));}
#line 2447 "php2python.tab.c"
    break;

  case 148: /* functionCall: NAME OPRT arguments CPRT  */
#line 224 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2453 "php2python.tab.c"
    break;

  case 149: /* parameters: %empty  */
#line 226 "php2python.y"
           {(yyval.str)=NULL;}
#line 2459 "php2python.tab.c"
    break;

  case 150: /* parameters: expr  */
#line 227 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2465 "php2python.tab.c"
    break;

  case 151: /* parameters: parameters COMM expr  */
#line 228 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2471 "php2python.tab.c"
    break;

  case 152: /* arguments: %empty  */
#line 231 "php2python.y"
           {(yyval.str)="";}
#line 2477 "php2python.tab.c"
    break;

  case 154: /* argument: argument COMM argument  */
#line 235 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2483 "php2python.tab.c"
    break;

  case 155: /* argument: ID  */
#line 236 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2489 "php2python.tab.c"
    break;

  case 156: /* argument: ID EQ defaultValue  */
#line 237 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2495 "php2python.tab.c"
    break;

  case 158: /* defaultValue: NUM  */
#line 241 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2501 "php2python.tab.c"
    break;

  case 159: /* defaultValue: STR  */
#line 242 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2507 "php2python.tab.c"
    break;

  case 160: /* defaultValue: BOOL  */
#line 243 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2513 "php2python.tab.c"
    break;

  case 161: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 245 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2519 "php2python.tab.c"
    break;

  case 162: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 246 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2525 "php2python.tab.c"
    break;

  case 163: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 247 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2531 "php2python.tab.c"
    break;

  case 165: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 250 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2537 "php2python.tab.c"
    break;

  case 166: /* statementInForeach: declaration SC  */
#line 253 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2543 "php2python.tab.c"
    break;

  case 167: /* statementInForeach: echo SC  */
#line 254 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2549 "php2python.tab.c"
    break;

  case 168: /* statementInForeach: print SC  */
#line 255 "php2python.y"
               {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2555 "php2python.tab.c"
    break;

  case 169: /* statementInForeach: return SC  */
#line 256 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2561 "php2python.tab.c"
    break;

  case 170: /* statementInForeach: CMNT  */
#line 257 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2567 "php2python.tab.c"
    break;

  case 171: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 260 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2573 "php2python.tab.c"
    break;

  case 172: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 261 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2579 "php2python.tab.c"
    break;

  case 174: /* statementsInFor: statementsInFor statementInFor  */
#line 264 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2585 "php2python.tab.c"
    break;

  case 175: /* statementInFor: declaration SC  */
#line 267 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2591 "php2python.tab.c"
    break;

  case 176: /* statementInFor: echo SC  */
#line 268 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2597 "php2python.tab.c"
    break;

  case 177: /* statementInFor: print SC  */
#line 269 "php2python.y"
               {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2603 "php2python.tab.c"
    break;

  case 178: /* statementInFor: return SC  */
#line 270 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2609 "php2python.tab.c"
    break;

  case 179: /* statementInFor: CMNT  */
#line 271 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2615 "php2python.tab.c"
    break;


#line 2619 "php2python.tab.c"

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 273 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
