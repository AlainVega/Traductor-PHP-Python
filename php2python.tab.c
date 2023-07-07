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
    int yylex(void);
    int yyerror(char *message);

    int tabcount = 0;

#line 80 "php2python.tab.c"

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
  YYSYMBOL_APOP = 15,                      /* APOP  */
  YYSYMBOL_APUS = 16,                      /* APUS  */
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
  YYSYMBOL_conditional = 89,               /* conditional  */
  YYSYMBOL_statementsinifblock = 90,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 91,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 92,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 93,      /* statementinelseblock  */
  YYSYMBOL_statementsinelifblock = 94,     /* statementsinelifblock  */
  YYSYMBOL_statementinelifblock = 95,      /* statementinelifblock  */
  YYSYMBOL_while = 96,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 97,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 98,     /* statementInWhileBlock  */
  YYSYMBOL_break = 99,                     /* break  */
  YYSYMBOL_continue = 100,                 /* continue  */
  YYSYMBOL_functionDefinition = 101,       /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 102, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 103, /* statementInFunctionBlock  */
  YYSYMBOL_return = 104,                   /* return  */
  YYSYMBOL_anonymousFunctionStatement = 105, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_functionCall = 107,             /* functionCall  */
  YYSYMBOL_parameters = 108,               /* parameters  */
  YYSYMBOL_arguments = 109,                /* arguments  */
  YYSYMBOL_argument = 110,                 /* argument  */
  YYSYMBOL_defaultValue = 111,             /* defaultValue  */
  YYSYMBOL_foreach = 112,                  /* foreach  */
  YYSYMBOL_statementsInForeach = 113,      /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 114,       /* statementInForeach  */
  YYSYMBOL_for = 115,                      /* for  */
  YYSYMBOL_statementsInFor = 116,          /* statementsInFor  */
  YYSYMBOL_statementInFor = 117            /* statementInFor  */
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
#define YYLAST   1115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

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
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    45,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      77,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    95,    96,    99,   100,   101,
     102,   105,   106,   109,   110,   111,   112,   113,   116,   117,
     120,   121,   122,   123,   124,   126,   128,   129,   132,   133,
     134,   135,   136,   137,   138,   140,   141,   142,   144,   145,
     148,   149,   150,   151,   153,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   209,   211,   212,
     213,   216,   217,   220,   221,   222,   223,   226,   227,   228,
     230,   231,   232,   234,   235,   238,   239,   240,   241,   244,
     245,   247,   248,   251,   252,   253,   254
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
  "APOP", "APUS", "ASUM", "IF", "ELSE", "ELIF", "SWIH", "CASE", "BRK",
  "CONT", "DFT", "FUNC", "WHIL", "FOR", "RTN", "PRNT", "EQ", "SC", "CL",
  "COMM", "PLUS", "MINS", "DIV", "MULT", "MOD", "CCTN", "EEQ", "NEQ", "GT",
  "LT", "AND", "OR", "PPL", "MMN", "XOR", "NOT", "OSQB", "CSQB", "OPRT",
  "CPRT", "OBRC", "CBRC", "QUES", "NOEQ", "NEEE", "EEEQ", "LTLT", "GTGT",
  "BAND", "BOR", "BXOR", "EXPO", "PLEQ", "MNEQ", "MUEQ", "EXEQ", "DIEQ",
  "MOEQ", "COEQ", "OREQ", "ADEQ", "XOEQ", "LLEQ", "GGEQ", "BNOT", "GTE",
  "LTE", "$accept", "program", "$@1", "statements", "statement",
  "declaration", "echo", "conditional", "statementsinifblock",
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

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -270,     7,  -270,  -270,   110,   682,  -270,  -270,   200,
    -270,   -48,  -270,  -270,   -17,   -10,    19,    26,    21,    23,
     200,   200,   200,   200,   200,   200,   200,   200,   200,  -270,
      31,    46,  -270,  -270,  -270,    50,   520,  -270,  -270,  -270,
     369,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,  -270,    42,  1008,    37,    17,   200,   200,
      43,    37,   200,   108,  1008,  1034,  1034,  1034,  1034,  1034,
    1008,   -30,   726,  1034,  -270,  -270,  -270,  -270,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
    -270,  -270,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,  -270,  1008,  1008,  1008,  1008,
    1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,    81,
    -270,  -270,  -270,    66,    96,  -270,   112,    78,    37,   -33,
     773,    37,    86,   820,   682,   115,   200,  -270,  -270,  1034,
    1034,  1034,  1034,  1034,  1034,    91,    91,    91,    91,  1034,
    1034,  1034,   663,  1008,  1008,  1008,  1034,  1034,  1034,  1034,
    1034,  1034,    91,    91,   122,  -270,    37,   139,    37,   102,
    -270,   167,    94,   100,   107,   200,  1008,   200,  -270,  -270,
     111,   113,   151,  -270,  -270,   137,   145,     4,   152,   131,
     334,  -270,   567,  1034,   132,   175,   191,     9,  -270,  -270,
     459,   144,  -270,  -270,  -270,   166,   180,  -270,  -270,  -270,
     181,   143,   614,  -270,  -270,   214,   369,  -270,   212,   165,
      61,  -270,  -270,  -270,   192,   197,  -270,  -270,   198,   200,
      10,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     199,   207,  -270,  -270,   208,   209,   213,   195,   867,   420,
     201,   202,   461,   193,   150,  -270,  -270,  -270,   914,  -270,
    -270,   222,   224,  -270,   226,  -270,  -270,  -270,  -270,  -270,
     204,   205,  -270,  -270,   230,   232,   233,  -270,   217,  -270,
    -270,  -270,   200,  -270,  -270,   463,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,   422,   172,   961,  -270,  -270,
     235,   241,  -270,   256,   244,   429,   431,   444,  -270,  -270,
     477,   260,  -270,  -270,   490,  -270,  -270,  -270,   245,   249,
     250,  -270,  -270,  -270,  -270,   266,   272,  -270,  -270,  -270,
    -270,  -270,  -270,   265,   495,   517,   350,   273,  -270,  -270,
    -270,  -270,  -270,   519,   383,   385,  -270,  -270,  -270,  -270,
     415,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,    97,    96,    95,     0,
      98,     0,    15,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,     5,
       0,     0,     9,    10,    13,     0,     0,    99,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,    30,   141,     0,   138,     0,
       0,   141,     0,     0,    84,   100,   101,   109,   111,   113,
     139,     0,     0,   114,     6,     8,    14,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    16,    18,    19,    20,
      22,    21,    23,    24,    26,    25,    27,    28,    29,   144,
     148,   147,   149,     0,   142,   146,     0,     0,   141,     0,
       0,   141,     0,     0,     0,     0,     0,   133,   134,   102,
     103,   105,   104,   106,   108,   125,   127,   121,   122,   115,
     117,   119,     0,   128,   129,   126,   130,   131,   116,   118,
     120,   107,   123,   124,     0,   137,     0,     0,   141,     0,
     132,     0,     0,     0,     0,     0,   140,     0,   145,   143,
       0,     0,     0,    50,    45,     0,     0,    31,     0,     0,
       0,    66,     0,   135,     0,     0,     0,     0,    47,    48,
       0,     0,    49,    78,    94,     0,     0,    88,    89,    92,
       0,     0,     0,    90,    91,     0,     0,   153,     0,     0,
      32,    46,    57,    51,     0,     0,    55,    33,     0,     0,
       0,    85,    87,    93,   136,    86,    74,    75,    76,    65,
       0,     0,    70,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    56,     0,    83,
      77,     0,     0,    79,     0,    68,    69,    72,    73,    71,
       0,     0,   158,   150,     0,     0,     0,   154,     0,   153,
      51,    34,     0,    35,    52,     0,    80,    81,    82,   161,
     161,   155,   156,   157,   153,     0,     0,     0,    64,    58,
       0,     0,    62,     0,     0,     0,     0,     0,   152,    36,
       0,     0,    60,    61,     0,    63,   166,   159,     0,     0,
       0,   162,   160,   151,    58,     0,     0,    59,    51,    37,
     163,   164,   165,     0,     0,     0,     0,     0,    51,    38,
      51,    39,    41,     0,     0,     0,    51,    40,    42,    43,
       0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,  -270,    -5,     3,     1,  -270,    87,
    -269,  -191,   -31,  -248,   105,  -270,  -270,  -270,  -270,   106,
    -270,  -270,    12,  -270,     5,  -270,   246,   -58,   133,   156,
     125,  -219,  -270,   134,    13,  -270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    29,   224,   225,   226,   197,   187,
     254,   284,   311,   327,    33,   215,   243,   244,   245,    34,
     230,   263,   228,   211,    70,    37,    71,   123,   124,   125,
      38,   249,   277,    39,   305,   321
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,   136,     1,   132,   136,    56,    32,     4,    31,   227,
      36,   296,   134,   134,    55,     9,     9,    35,   183,   259,
     126,   170,   137,   200,   201,    64,    65,    66,    67,    68,
      69,   127,    72,    73,    60,   105,    57,   303,    20,    20,
     119,   120,   121,    58,   122,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   135,   336,
     295,   281,   325,    74,   130,   220,   260,   133,   128,   344,
     169,   345,    59,   172,    62,   307,    63,   350,    75,    61,
     252,   253,    76,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    61,   131,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     181,   134,   164,     6,     7,     8,     9,    10,    11,    12,
     165,    13,    14,   329,    15,   167,   120,   121,    16,   122,
     166,   168,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
     173,   176,   180,   339,   341,    21,    22,   175,   189,    94,
      95,    96,   347,   134,   182,   190,     9,    23,    24,   222,
      25,    26,   191,    27,   196,   194,   185,   195,    16,   198,
     134,    -1,    -1,     9,   186,   134,   183,   199,     9,    20,
     192,   222,   193,   188,   202,   205,   203,   217,   218,    28,
      16,   207,   185,   206,   219,   212,    20,   229,   231,   234,
     186,    20,   210,    53,     7,     8,   283,    10,    11,   188,
     240,   247,   232,   233,    15,   250,   242,   134,   241,   251,
       9,   248,   184,   236,   255,   261,    54,   246,   309,   256,
     257,   265,    16,   262,   258,    21,    22,   237,   238,   266,
     267,   268,   264,    20,   274,   269,   282,    23,    24,   270,
      25,    26,   275,    27,   286,   278,   287,   279,   288,   289,
     290,   276,   291,   134,   292,   293,     9,   312,   134,   298,
     239,     9,   294,   313,   298,   314,   315,   330,    16,    28,
     300,   331,   332,    16,   221,   334,   302,   297,   301,    20,
     274,   335,   343,   333,    20,   208,   209,   304,   275,   179,
     318,   318,   274,   306,   129,   300,   300,   276,   319,   319,
     275,   302,   302,   301,   301,   213,   326,   320,   320,   276,
     178,   337,   304,   304,   214,     0,     0,     0,   300,     0,
       0,     0,     0,     0,   302,     0,   301,     6,     7,     8,
       9,    10,    11,   204,     0,   304,    14,     0,    15,     0,
       0,     0,    16,   134,     0,     0,     9,     0,     0,   222,
      17,    18,    19,    20,     0,     0,     0,     0,    16,    21,
      22,     0,     6,     7,     8,     0,    10,    11,     0,    20,
       0,    23,    24,    15,    25,    26,   134,    27,   134,     9,
       0,     9,   222,     0,   222,    54,     0,     0,     0,     0,
       0,    16,     0,    16,    21,    22,   342,     0,     0,     0,
       0,     0,    20,    28,    20,     0,    23,    24,   134,    25,
      26,     9,    27,   134,   222,   134,     9,     0,     9,   272,
       0,   272,   134,    16,   134,     9,     0,     9,   316,   348,
     316,   349,     0,     0,    20,     0,     0,   134,    28,    20,
       9,    20,     0,   272,     0,     0,     0,     0,    20,     0,
      20,     0,   134,     0,   134,     9,   134,     9,   222,     9,
     222,   351,   298,    20,     0,     0,   273,    16,   308,    16,
     134,    16,     0,     9,     0,   317,   298,   322,    20,     0,
      20,     0,    20,   134,     0,    16,     9,     0,   134,   222,
     323,     9,     0,     0,   222,     0,    20,     0,    16,     0,
       0,     0,     0,    16,   223,     0,   280,     0,   299,    20,
     134,     0,   134,     9,    20,     9,   222,     0,   222,     0,
       0,     0,   324,     0,     0,    16,     0,    16,     0,     0,
       0,     0,     0,     0,     0,   328,    20,     0,    20,     0,
     338,     0,    77,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       0,     0,   340,     0,   346,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     103,   104,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   103,   104,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   177,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    40,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,     0,     0,     0,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
     138,     0,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,   171,     0,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,   174,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   104,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,   271,     0,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,   285,     0,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,   310,     0,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    84,    85,    86,    87,     0,
       0,    90,    91,     0,     0,     0,     0,     0,   103,   104,
       0,     0,    94,    95,    96,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104
};

static const yytype_int16 yycheck[] =
{
       5,    34,    10,    61,    34,    53,     5,     0,     5,   200,
       5,   280,     3,     3,     9,     6,     6,     5,     9,     9,
       3,    54,    52,    19,    20,    20,    21,    22,    23,    24,
      25,    14,    27,    28,     8,    40,    53,   285,    29,    29,
       3,     4,     5,    53,     7,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    63,   328,
     279,   252,   310,    32,    59,    56,    56,    62,    51,   338,
     128,   340,    53,   131,    53,   294,    53,   346,    32,    53,
      19,    20,    32,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    53,    53,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     168,     3,    31,     3,     4,     5,     6,     7,     8,     9,
      54,    11,    12,   314,    14,    13,     4,     5,    18,     7,
      34,    53,    41,    42,    43,    44,    26,    27,    28,    29,
      54,   136,     3,   334,   335,    35,    36,    32,    54,    58,
      59,    60,   343,     3,    52,    55,     6,    47,    48,     9,
      50,    51,    55,    53,    13,    54,   171,    54,    18,    32,
       3,    80,    81,     6,   171,     3,     9,    32,     6,    29,
     175,     9,   177,   171,    32,   190,    55,    55,    13,    79,
      18,   190,   197,   190,     3,   190,    29,    53,    32,    56,
     197,    29,   190,     3,     4,     5,    56,     7,     8,   197,
     215,   216,    32,    32,    14,     3,   215,     3,   215,    54,
       6,   216,    55,     9,    32,   230,    26,   215,    56,    32,
      32,    32,    18,   230,   229,    35,    36,    23,    24,    32,
      32,    32,   230,    29,   249,    32,    53,    47,    48,    54,
      50,    51,   249,    53,    32,    54,    32,    55,    32,    55,
      55,   249,    32,     3,    32,    32,     6,    32,     3,     9,
      56,     6,    55,    32,     9,    19,    32,    32,    18,    79,
     285,    32,    32,    18,   197,    19,   285,   282,   285,    29,
     295,    19,    19,   324,    29,   190,   190,   285,   295,   166,
     305,   306,   307,   290,    58,   310,   311,   295,   305,   306,
     307,   310,   311,   310,   311,   190,    56,   305,   306,   307,
     164,    56,   310,   311,   190,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,   333,    -1,   333,     3,     4,     5,
       6,     7,     8,     9,    -1,   333,    12,    -1,    14,    -1,
      -1,    -1,    18,     3,    -1,    -1,     6,    -1,    -1,     9,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    18,    35,
      36,    -1,     3,     4,     5,    -1,     7,     8,    -1,    29,
      -1,    47,    48,    14,    50,    51,     3,    53,     3,     6,
      -1,     6,     9,    -1,     9,    26,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    18,    35,    36,    56,    -1,    -1,    -1,
      -1,    -1,    29,    79,    29,    -1,    47,    48,     3,    50,
      51,     6,    53,     3,     9,     3,     6,    -1,     6,     9,
      -1,     9,     3,    18,     3,     6,    -1,     6,     9,    56,
       9,    56,    -1,    -1,    29,    -1,    -1,     3,    79,    29,
       6,    29,    -1,     9,    -1,    -1,    -1,    -1,    29,    -1,
      29,    -1,     3,    -1,     3,     6,     3,     6,     9,     6,
       9,    56,     9,    29,    -1,    -1,    56,    18,    56,    18,
       3,    18,    -1,     6,    -1,    56,     9,    56,    29,    -1,
      29,    -1,    29,     3,    -1,    18,     6,    -1,     3,     9,
      56,     6,    -1,    -1,     9,    -1,    29,    -1,    18,    -1,
      -1,    -1,    -1,    18,    55,    -1,    55,    -1,    55,    29,
       3,    -1,     3,     6,    29,     6,     9,    -1,     9,    -1,
      -1,    -1,    55,    -1,    -1,    18,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    29,    -1,    29,    -1,
      55,    -1,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    55,    -1,    55,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      80,    81,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    80,    81,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    35,    36,    37,    38,    39,    40,    41,    42,    43,
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
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    41,    42,    43,    44,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    83,    84,     0,    85,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    18,    26,    27,    28,
      29,    35,    36,    47,    48,    50,    51,    53,    79,    86,
      87,    88,    89,    96,   101,   104,   106,   107,   112,   115,
      31,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     3,    26,   106,    53,    53,    53,    53,
       8,    53,    53,    53,   106,   106,   106,   106,   106,   106,
     106,   108,   106,   106,    32,    32,    32,    32,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    80,    81,    87,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,     3,
       4,     5,     7,   109,   110,   111,     3,    14,    51,   108,
     106,    53,   109,   106,     3,    87,    34,    52,    54,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,    31,    54,    34,    13,    53,   109,
      54,    54,   109,    54,    54,    32,   106,    33,   111,   110,
       3,   109,    52,     9,    55,    87,    88,    91,   104,    54,
      55,    55,   106,   106,    54,    54,    13,    90,    32,    32,
      19,    20,    32,    55,     9,    87,    88,    89,    96,   101,
     104,   105,   106,   112,   115,    97,    32,    55,    13,     3,
      56,    91,     9,    55,    87,    88,    89,    93,   104,    53,
     102,    32,    32,    32,    56,    32,     9,    23,    24,    56,
      87,    88,    89,    98,    99,   100,   104,    87,   106,   113,
       3,    54,    19,    20,    92,    32,    32,    32,   106,     9,
      56,    87,    88,   103,   104,    32,    32,    32,    32,    32,
      54,    54,     9,    56,    87,    88,   104,   114,    54,    55,
      55,    93,    53,    56,    93,    54,    32,    32,    32,    55,
      55,    32,    32,    32,    55,   113,    92,   106,     9,    55,
      87,    88,    89,    95,   104,   116,   116,   113,    56,    56,
      54,    94,    32,    32,    19,    32,     9,    56,    87,    88,
     104,   117,    56,    56,    55,    95,    56,    95,    55,    93,
      32,    32,    32,    94,    19,    19,    92,    56,    55,    93,
      55,    93,    56,    19,    92,    92,    55,    93,    56,    56,
      92,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    84,    83,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    99,   100,   101,   102,   102,
     103,   103,   103,   103,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   108,   108,
     108,   109,   109,   110,   110,   110,   110,   111,   111,   111,
     112,   112,   112,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   117,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     5,     7,     7,     9,     9,    11,    12,    14,    14,
      16,    14,    16,    16,    18,     0,     2,     2,     2,     2,
       1,     0,     2,     2,     2,     1,     2,     1,     0,     2,
       2,     2,     1,     2,     1,     7,     0,     2,     2,     2,
       1,     2,     2,     2,     1,     1,     1,     8,     0,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     5,     7,     4,     0,     1,
       3,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       9,    12,    11,     0,     2,     2,     2,     2,     1,    11,
      11,     0,     2,     2,     2,     2,     1
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
#line 45 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1576 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 45 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1582 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 51 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1588 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 52 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1594 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 53 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1600 "php2python.tab.c"
    break;

  case 9: /* statement: conditional  */
#line 54 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1606 "php2python.tab.c"
    break;

  case 10: /* statement: while  */
#line 55 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1612 "php2python.tab.c"
    break;

  case 11: /* statement: foreach  */
#line 56 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1618 "php2python.tab.c"
    break;

  case 12: /* statement: for  */
#line 57 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1624 "php2python.tab.c"
    break;

  case 13: /* statement: functionDefinition  */
#line 58 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1630 "php2python.tab.c"
    break;

  case 14: /* statement: return SC  */
#line 59 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1636 "php2python.tab.c"
    break;

  case 15: /* statement: CMNT  */
#line 60 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1642 "php2python.tab.c"
    break;

  case 16: /* declaration: ID EQ expr  */
#line 62 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1648 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ declaration  */
#line 63 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1654 "php2python.tab.c"
    break;

  case 18: /* declaration: ID PLEQ expr  */
#line 64 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1660 "php2python.tab.c"
    break;

  case 19: /* declaration: ID MNEQ expr  */
#line 65 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1666 "php2python.tab.c"
    break;

  case 20: /* declaration: ID MUEQ expr  */
#line 66 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1672 "php2python.tab.c"
    break;

  case 21: /* declaration: ID DIEQ expr  */
#line 67 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1678 "php2python.tab.c"
    break;

  case 22: /* declaration: ID EXEQ expr  */
#line 68 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1684 "php2python.tab.c"
    break;

  case 23: /* declaration: ID MOEQ expr  */
#line 69 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1690 "php2python.tab.c"
    break;

  case 24: /* declaration: ID COEQ expr  */
#line 70 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1696 "php2python.tab.c"
    break;

  case 25: /* declaration: ID ADEQ expr  */
#line 71 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " &= ", (yyvsp[0].str));}
#line 1702 "php2python.tab.c"
    break;

  case 26: /* declaration: ID OREQ expr  */
#line 72 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " |= ", (yyvsp[0].str));}
#line 1708 "php2python.tab.c"
    break;

  case 27: /* declaration: ID XOEQ expr  */
#line 73 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " ^= ", (yyvsp[0].str));}
#line 1714 "php2python.tab.c"
    break;

  case 28: /* declaration: ID LLEQ expr  */
#line 74 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 1720 "php2python.tab.c"
    break;

  case 29: /* declaration: ID GGEQ expr  */
#line 75 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 1726 "php2python.tab.c"
    break;

  case 30: /* echo: ECH expr  */
#line 77 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1732 "php2python.tab.c"
    break;

  case 31: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 79 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1738 "php2python.tab.c"
    break;

  case 32: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 80 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1744 "php2python.tab.c"
    break;

  case 33: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 81 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1750 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 82 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1756 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 83 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1762 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 84 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1768 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 85 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1774 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 86 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1780 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 87 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1786 "php2python.tab.c"
    break;

  case 40: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 88 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1792 "php2python.tab.c"
    break;

  case 41: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 89 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1798 "php2python.tab.c"
    break;

  case 42: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 90 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1804 "php2python.tab.c"
    break;

  case 43: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 91 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1810 "php2python.tab.c"
    break;

  case 44: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 92 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1816 "php2python.tab.c"
    break;

  case 46: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 96 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1822 "php2python.tab.c"
    break;

  case 47: /* statementinifblock: declaration SC  */
#line 99 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1828 "php2python.tab.c"
    break;

  case 48: /* statementinifblock: echo SC  */
#line 100 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1834 "php2python.tab.c"
    break;

  case 49: /* statementinifblock: return SC  */
#line 101 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1840 "php2python.tab.c"
    break;

  case 50: /* statementinifblock: CMNT  */
#line 102 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1846 "php2python.tab.c"
    break;

  case 52: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 106 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1852 "php2python.tab.c"
    break;

  case 53: /* statementinelseblock: declaration SC  */
#line 109 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1858 "php2python.tab.c"
    break;

  case 54: /* statementinelseblock: echo SC  */
#line 110 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1864 "php2python.tab.c"
    break;

  case 55: /* statementinelseblock: conditional  */
#line 111 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1870 "php2python.tab.c"
    break;

  case 56: /* statementinelseblock: return SC  */
#line 112 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1876 "php2python.tab.c"
    break;

  case 57: /* statementinelseblock: CMNT  */
#line 113 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1882 "php2python.tab.c"
    break;

  case 59: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 117 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1888 "php2python.tab.c"
    break;

  case 60: /* statementinelifblock: declaration SC  */
#line 120 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1894 "php2python.tab.c"
    break;

  case 61: /* statementinelifblock: echo SC  */
#line 121 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1900 "php2python.tab.c"
    break;

  case 62: /* statementinelifblock: conditional  */
#line 122 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1906 "php2python.tab.c"
    break;

  case 63: /* statementinelifblock: return SC  */
#line 123 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1912 "php2python.tab.c"
    break;

  case 64: /* statementinelifblock: CMNT  */
#line 124 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1918 "php2python.tab.c"
    break;

  case 65: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 126 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1924 "php2python.tab.c"
    break;

  case 67: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 129 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 1930 "php2python.tab.c"
    break;

  case 68: /* statementInWhileBlock: declaration SC  */
#line 132 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1936 "php2python.tab.c"
    break;

  case 69: /* statementInWhileBlock: echo SC  */
#line 133 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1942 "php2python.tab.c"
    break;

  case 70: /* statementInWhileBlock: conditional  */
#line 134 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 1948 "php2python.tab.c"
    break;

  case 71: /* statementInWhileBlock: return SC  */
#line 135 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1954 "php2python.tab.c"
    break;

  case 72: /* statementInWhileBlock: break SC  */
#line 136 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1960 "php2python.tab.c"
    break;

  case 73: /* statementInWhileBlock: continue SC  */
#line 137 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1966 "php2python.tab.c"
    break;

  case 74: /* statementInWhileBlock: CMNT  */
#line 138 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1972 "php2python.tab.c"
    break;

  case 75: /* break: BRK  */
#line 140 "php2python.y"
           {(yyval.str)="break";}
#line 1978 "php2python.tab.c"
    break;

  case 76: /* continue: CONT  */
#line 141 "php2python.y"
               {(yyval.str)="continue";}
#line 1984 "php2python.tab.c"
    break;

  case 77: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 142 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 1990 "php2python.tab.c"
    break;

  case 79: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 145 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 1996 "php2python.tab.c"
    break;

  case 80: /* statementInFunctionBlock: declaration SC  */
#line 148 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2002 "php2python.tab.c"
    break;

  case 81: /* statementInFunctionBlock: echo SC  */
#line 149 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2008 "php2python.tab.c"
    break;

  case 82: /* statementInFunctionBlock: return SC  */
#line 150 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2014 "php2python.tab.c"
    break;

  case 83: /* statementInFunctionBlock: CMNT  */
#line 151 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2020 "php2python.tab.c"
    break;

  case 84: /* return: RTN expr  */
#line 153 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 2026 "php2python.tab.c"
    break;

  case 85: /* anonymousFunctionStatement: declaration SC  */
#line 155 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 2032 "php2python.tab.c"
    break;

  case 86: /* anonymousFunctionStatement: expr SC  */
#line 156 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 2038 "php2python.tab.c"
    break;

  case 87: /* anonymousFunctionStatement: echo SC  */
#line 157 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 2044 "php2python.tab.c"
    break;

  case 88: /* anonymousFunctionStatement: conditional  */
#line 158 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 2050 "php2python.tab.c"
    break;

  case 89: /* anonymousFunctionStatement: while  */
#line 159 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 2056 "php2python.tab.c"
    break;

  case 90: /* anonymousFunctionStatement: foreach  */
#line 160 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 2062 "php2python.tab.c"
    break;

  case 91: /* anonymousFunctionStatement: for  */
#line 161 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 2068 "php2python.tab.c"
    break;

  case 92: /* anonymousFunctionStatement: functionDefinition  */
#line 162 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 2074 "php2python.tab.c"
    break;

  case 93: /* anonymousFunctionStatement: return SC  */
#line 163 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 2080 "php2python.tab.c"
    break;

  case 94: /* anonymousFunctionStatement: CMNT  */
#line 164 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 2086 "php2python.tab.c"
    break;

  case 95: /* expr: NUM  */
#line 166 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2092 "php2python.tab.c"
    break;

  case 96: /* expr: STR  */
#line 167 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2098 "php2python.tab.c"
    break;

  case 97: /* expr: ID  */
#line 168 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2104 "php2python.tab.c"
    break;

  case 98: /* expr: BOOL  */
#line 169 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2110 "php2python.tab.c"
    break;

  case 99: /* expr: functionCall  */
#line 170 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2116 "php2python.tab.c"
    break;

  case 100: /* expr: PLUS expr  */
#line 171 "php2python.y"
                {printf("Se encontro una expresion positiva\n"); (yyval.str)=format_operation("", "+", (yyvsp[0].str));}
#line 2122 "php2python.tab.c"
    break;

  case 101: /* expr: MINS expr  */
#line 172 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", "-", (yyvsp[0].str));}
#line 2128 "php2python.tab.c"
    break;

  case 102: /* expr: expr PLUS expr  */
#line 173 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2134 "php2python.tab.c"
    break;

  case 103: /* expr: expr MINS expr  */
#line 174 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2140 "php2python.tab.c"
    break;

  case 104: /* expr: expr MULT expr  */
#line 175 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2146 "php2python.tab.c"
    break;

  case 105: /* expr: expr DIV expr  */
#line 176 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2152 "php2python.tab.c"
    break;

  case 106: /* expr: expr MOD expr  */
#line 177 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2158 "php2python.tab.c"
    break;

  case 107: /* expr: expr EXPO expr  */
#line 178 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2164 "php2python.tab.c"
    break;

  case 108: /* expr: expr CCTN expr  */
#line 179 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2170 "php2python.tab.c"
    break;

  case 109: /* expr: PPL expr  */
#line 180 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2176 "php2python.tab.c"
    break;

  case 110: /* expr: expr PPL  */
#line 181 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2182 "php2python.tab.c"
    break;

  case 111: /* expr: MMN expr  */
#line 182 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2188 "php2python.tab.c"
    break;

  case 112: /* expr: expr MMN  */
#line 183 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2194 "php2python.tab.c"
    break;

  case 113: /* expr: NOT expr  */
#line 184 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", "not ", (yyvsp[0].str));}
#line 2200 "php2python.tab.c"
    break;

  case 114: /* expr: BNOT expr  */
#line 185 "php2python.y"
                {printf("Se encontro una negacion bit a bit\n"); (yyval.str)=format_operation("", "~", (yyvsp[0].str));}
#line 2206 "php2python.tab.c"
    break;

  case 115: /* expr: expr AND expr  */
#line 186 "php2python.y"
                    {printf("Se encontro una conjuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2212 "php2python.tab.c"
    break;

  case 116: /* expr: expr BAND expr  */
#line 187 "php2python.y"
                     {printf("Se encontro una conjuncion bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " & ", (yyvsp[0].str));}
#line 2218 "php2python.tab.c"
    break;

  case 117: /* expr: expr OR expr  */
#line 188 "php2python.y"
                   {printf("Se encontro una disyuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2224 "php2python.tab.c"
    break;

  case 118: /* expr: expr BOR expr  */
#line 189 "php2python.y"
                    {printf("Se encontro una disyuncion bit a bit"); (yyval.str)=format_operation((yyvsp[-2].str), " | ", (yyvsp[0].str));}
#line 2230 "php2python.tab.c"
    break;

  case 119: /* expr: expr XOR expr  */
#line 190 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2236 "php2python.tab.c"
    break;

  case 120: /* expr: expr BXOR expr  */
#line 191 "php2python.y"
                     {printf("Se encontro una disyuncion exclusiva bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2242 "php2python.tab.c"
    break;

  case 121: /* expr: expr GT expr  */
#line 192 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2248 "php2python.tab.c"
    break;

  case 122: /* expr: expr LT expr  */
#line 193 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2254 "php2python.tab.c"
    break;

  case 123: /* expr: expr GTE expr  */
#line 194 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2260 "php2python.tab.c"
    break;

  case 124: /* expr: expr LTE expr  */
#line 195 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2266 "php2python.tab.c"
    break;

  case 125: /* expr: expr EEQ expr  */
#line 196 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2272 "php2python.tab.c"
    break;

  case 126: /* expr: expr EEEQ expr  */
#line 197 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2278 "php2python.tab.c"
    break;

  case 127: /* expr: expr NEQ expr  */
#line 198 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2284 "php2python.tab.c"
    break;

  case 128: /* expr: expr NOEQ expr  */
#line 199 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2290 "php2python.tab.c"
    break;

  case 129: /* expr: expr NEEE expr  */
#line 200 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2296 "php2python.tab.c"
    break;

  case 130: /* expr: expr LTLT expr  */
#line 201 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la izquierda \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 2302 "php2python.tab.c"
    break;

  case 131: /* expr: expr GTGT expr  */
#line 202 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la derecha \n "); (yyval.str)=format_operation((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 2308 "php2python.tab.c"
    break;

  case 132: /* expr: ARRY OPRT parameters CPRT  */
#line 203 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2314 "php2python.tab.c"
    break;

  case 133: /* expr: OSQB parameters CSQB  */
#line 204 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2320 "php2python.tab.c"
    break;

  case 134: /* expr: OPRT expr CPRT  */
#line 205 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2326 "php2python.tab.c"
    break;

  case 135: /* expr: expr QUES expr CL expr  */
#line 206 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2332 "php2python.tab.c"
    break;

  case 136: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 207 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2338 "php2python.tab.c"
    break;

  case 137: /* functionCall: NAME OPRT arguments CPRT  */
#line 209 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2344 "php2python.tab.c"
    break;

  case 138: /* parameters: %empty  */
#line 211 "php2python.y"
           {(yyval.str)=NULL;}
#line 2350 "php2python.tab.c"
    break;

  case 139: /* parameters: expr  */
#line 212 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2356 "php2python.tab.c"
    break;

  case 140: /* parameters: parameters COMM expr  */
#line 213 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2362 "php2python.tab.c"
    break;

  case 141: /* arguments: %empty  */
#line 216 "php2python.y"
           {(yyval.str)="";}
#line 2368 "php2python.tab.c"
    break;

  case 143: /* argument: argument COMM argument  */
#line 220 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2374 "php2python.tab.c"
    break;

  case 144: /* argument: ID  */
#line 221 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2380 "php2python.tab.c"
    break;

  case 145: /* argument: ID EQ defaultValue  */
#line 222 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2386 "php2python.tab.c"
    break;

  case 147: /* defaultValue: NUM  */
#line 226 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2392 "php2python.tab.c"
    break;

  case 148: /* defaultValue: STR  */
#line 227 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2398 "php2python.tab.c"
    break;

  case 149: /* defaultValue: BOOL  */
#line 228 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2404 "php2python.tab.c"
    break;

  case 150: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 230 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2410 "php2python.tab.c"
    break;

  case 151: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 231 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2416 "php2python.tab.c"
    break;

  case 152: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 232 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2422 "php2python.tab.c"
    break;

  case 154: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 235 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2428 "php2python.tab.c"
    break;

  case 155: /* statementInForeach: declaration SC  */
#line 238 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2434 "php2python.tab.c"
    break;

  case 156: /* statementInForeach: echo SC  */
#line 239 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2440 "php2python.tab.c"
    break;

  case 157: /* statementInForeach: return SC  */
#line 240 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2446 "php2python.tab.c"
    break;

  case 158: /* statementInForeach: CMNT  */
#line 241 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2452 "php2python.tab.c"
    break;

  case 159: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 244 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2458 "php2python.tab.c"
    break;

  case 160: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 245 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2464 "php2python.tab.c"
    break;

  case 162: /* statementsInFor: statementsInFor statementInFor  */
#line 248 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2470 "php2python.tab.c"
    break;

  case 163: /* statementInFor: declaration SC  */
#line 251 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2476 "php2python.tab.c"
    break;

  case 164: /* statementInFor: echo SC  */
#line 252 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2482 "php2python.tab.c"
    break;

  case 165: /* statementInFor: return SC  */
#line 253 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2488 "php2python.tab.c"
    break;

  case 166: /* statementInFor: CMNT  */
#line 254 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2494 "php2python.tab.c"
    break;


#line 2498 "php2python.tab.c"

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

#line 256 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
