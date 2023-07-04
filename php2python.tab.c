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
  YYSYMBOL_SPHP = 9,                       /* SPHP  */
  YYSYMBOL_EPHP = 10,                      /* EPHP  */
  YYSYMBOL_FRC = 11,                       /* FRC  */
  YYSYMBOL_AS = 12,                        /* AS  */
  YYSYMBOL_ARRY = 13,                      /* ARRY  */
  YYSYMBOL_APOP = 14,                      /* APOP  */
  YYSYMBOL_APUS = 15,                      /* APUS  */
  YYSYMBOL_ASUM = 16,                      /* ASUM  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_ELIF = 19,                      /* ELIF  */
  YYSYMBOL_SWIH = 20,                      /* SWIH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_BRK = 22,                       /* BRK  */
  YYSYMBOL_DFT = 23,                       /* DFT  */
  YYSYMBOL_FUNC = 24,                      /* FUNC  */
  YYSYMBOL_WHIL = 25,                      /* WHIL  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_RTN = 27,                       /* RTN  */
  YYSYMBOL_PRNT = 28,                      /* PRNT  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_SC = 30,                        /* SC  */
  YYSYMBOL_CL = 31,                        /* CL  */
  YYSYMBOL_COMM = 32,                      /* COMM  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_MINS = 34,                      /* MINS  */
  YYSYMBOL_DIV = 35,                       /* DIV  */
  YYSYMBOL_MULT = 36,                      /* MULT  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_CCTN = 38,                      /* CCTN  */
  YYSYMBOL_EEQ = 39,                       /* EEQ  */
  YYSYMBOL_NEQ = 40,                       /* NEQ  */
  YYSYMBOL_GT = 41,                        /* GT  */
  YYSYMBOL_LT = 42,                        /* LT  */
  YYSYMBOL_GE = 43,                        /* GE  */
  YYSYMBOL_LE = 44,                        /* LE  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_OR = 46,                        /* OR  */
  YYSYMBOL_PPL = 47,                       /* PPL  */
  YYSYMBOL_MMN = 48,                       /* MMN  */
  YYSYMBOL_SOR = 49,                       /* SOR  */
  YYSYMBOL_NOT = 50,                       /* NOT  */
  YYSYMBOL_OSQB = 51,                      /* OSQB  */
  YYSYMBOL_CSQB = 52,                      /* CSQB  */
  YYSYMBOL_OPRT = 53,                      /* OPRT  */
  YYSYMBOL_CPRT = 54,                      /* CPRT  */
  YYSYMBOL_OBRC = 55,                      /* OBRC  */
  YYSYMBOL_CBRC = 56,                      /* CBRC  */
  YYSYMBOL_GTE = 57,                       /* GTE  */
  YYSYMBOL_LTE = 58,                       /* LTE  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_statements = 62,                /* statements  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_echo = 65,                      /* echo  */
  YYSYMBOL_conditional = 66,               /* conditional  */
  YYSYMBOL_statementsinifblock = 67,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 68,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 69,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 70,      /* statementinelseblock  */
  YYSYMBOL_block = 71,                     /* block  */
  YYSYMBOL_while = 72,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 73,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 74,     /* statementInWhileBlock  */
  YYSYMBOL_for = 75,                       /* for  */
  YYSYMBOL_functionDefinition = 76,        /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 77, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 78,  /* statementInFunctionBlock  */
  YYSYMBOL_expr = 79,                      /* expr  */
  YYSYMBOL_functionCall = 80,              /* functionCall  */
  YYSYMBOL_parameters = 81,                /* parameters  */
  YYSYMBOL_arguments = 82,                 /* arguments  */
  YYSYMBOL_argument = 83,                  /* argument  */
  YYSYMBOL_defaultValue = 84               /* defaultValue  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    44,    46,    47,    50,    51,    52,    53,
      54,    55,    57,    58,    60,    61,    62,    65,    66,    70,
      71,    74,    75,    79,    80,    81,    83,    84,    86,    87,
      90,    91,    92,    94,    95,    97,    98,   101,   102,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   126,
     128,   129,   130,   133,   134,   137,   138,   139,   140,   143,
     144,   145
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
  "ECH", "BOOL", "NAME", "SPHP", "EPHP", "FRC", "AS", "ARRY", "APOP",
  "APUS", "ASUM", "IF", "ELSE", "ELIF", "SWIH", "CASE", "BRK", "DFT",
  "FUNC", "WHIL", "FOR", "RTN", "PRNT", "EQ", "SC", "CL", "COMM", "PLUS",
  "MINS", "DIV", "MULT", "MOD", "CCTN", "EEQ", "NEQ", "GT", "LT", "GE",
  "LE", "AND", "OR", "PPL", "MMN", "SOR", "NOT", "OSQB", "CSQB", "OPRT",
  "CPRT", "OBRC", "CBRC", "GTE", "LTE", "$accept", "program", "$@1",
  "statements", "statement", "declaration", "echo", "conditional",
  "statementsinifblock", "statementinifblock", "statementsinelseblock",
  "statementinelseblock", "block", "while", "statementsInWhileBlock",
  "statementInWhileBlock", "for", "functionDefinition",
  "statementsInFunctionBlock", "statementInFunctionBlock", "expr",
  "functionCall", "parameters", "arguments", "argument", "defaultValue", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,   -95,    24,   -95,   -95,   210,     2,    44,   -95,    14,
      56,    16,    17,   -95,    43,    55,   -95,   -95,   -95,   -95,
      44,   -95,   -95,   -95,   -95,    21,    38,    44,   166,   -95,
      44,    39,    44,    44,   -95,   -95,   166,    15,    44,   166,
     -20,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    88,    15,   114,    48,    69,   -95,
     -95,   -95,    46,    70,   -95,    26,    44,   -95,   189,   189,
     189,   189,   189,   198,   198,   198,   198,   189,   189,   198,
     198,    11,    47,    62,    44,    58,   -95,    15,   -95,   166,
     -95,    73,    81,   -95,    63,   -95,    74,   -95,    70,     0,
     -95,   -95,   -95,    -2,    44,   107,   -95,     5,   -95,   105,
     106,   -95,   -95,   140,    82,   -95,   108,   109,   -95,   -95,
     -95,    85,   -95,   -95,   -95,   -95,   -95,    -1,     4,   -95,
     111,   113,   -95,   -95,   -95,   -95,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,     0,     0,     3,     0,
       0,     0,     0,     5,     0,     0,     8,     9,    10,    11,
       0,    41,    40,    39,    42,     0,     0,    60,    13,    43,
       0,     0,     0,     0,     6,     7,    12,    63,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,    66,    70,
      69,    71,     0,    64,    68,     0,     0,    58,    44,    45,
      47,    46,    48,    55,    56,    51,    52,    49,    50,    53,
      54,     0,     0,     0,     0,     0,    59,     0,    57,    62,
      17,     0,     0,    14,     0,    28,     0,    67,    65,     0,
      19,    20,    35,     0,     0,    15,    18,     0,    27,     0,
       0,    32,    29,     0,     0,    34,     0,     0,    36,    30,
      31,     0,    21,    37,    38,     4,    33,     0,     0,    16,
       0,     0,    25,    22,    26,    23,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,   -95,    19,   -95,   -31,   -28,   -94,   -95,    52,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
      -7,   -95,   119,   103,    75,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,    13,    14,    15,    16,    99,    93,
     127,   133,   126,    17,   103,   112,    18,    19,   107,   118,
      39,    29,    40,    62,    63,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,     6,     6,     6,     7,     7,     7,     6,     6,   111,
       7,     7,    66,    36,     6,     9,     9,     7,    58,    59,
      60,     9,    61,    54,     4,    56,    57,     1,    10,    11,
      12,    20,    67,   132,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    21,    22,    23,
      91,    24,    25,    92,   108,   129,   105,    26,    66,    89,
     134,   115,    59,    60,    31,    61,    90,    30,    91,    32,
      33,    92,   109,    34,    37,   110,   116,    96,    84,   117,
      88,    41,    42,    43,    44,    35,    45,    46,    47,    48,
      49,    38,    55,    50,    51,    27,   130,   113,    85,   131,
      86,    94,    87,   100,   104,    52,    53,    41,    42,    43,
      44,   101,    45,    46,    47,    48,    49,    95,   102,    50,
      51,    41,    42,    43,    44,   114,    45,    46,    47,    48,
      49,    52,    53,    50,    51,   119,   120,   122,   123,   124,
     125,   135,    81,   136,   128,    52,    53,    41,    42,    43,
      44,   106,    45,    46,    47,    48,    49,    65,    82,    50,
      51,    97,    98,     0,     0,     0,     0,     0,    83,     0,
       0,    52,    53,    41,    42,    43,    44,     0,    45,    46,
      47,    48,    49,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,    52,    53,    41,
      42,    43,    44,     0,    45,    46,    47,    48,    49,     0,
       0,    50,    51,     6,     0,     0,     7,     0,     0,     0,
       8,     0,     0,    52,    53,     0,     0,     9,    46,    47,
      48,    49,     0,     0,    10,    11,    12,    -1,    -1,    -1,
      -1,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    -1,    -1
};

static const yytype_int8 yycheck[] =
{
       7,     3,     3,     3,     6,     6,     6,     3,     3,   103,
       6,     6,    32,    20,     3,    17,    17,     6,     3,     4,
       5,    17,     7,    30,     0,    32,    33,     9,    24,    25,
      26,    29,    52,   127,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     3,     4,     5,
      81,     7,     8,    81,    56,    56,    56,    13,    32,    66,
      56,    56,     4,     5,     8,     7,    55,    53,    99,    53,
      53,    99,   103,    30,    53,   103,   107,    84,    30,   107,
      54,    33,    34,    35,    36,    30,    38,    39,    40,    41,
      42,    53,    53,    45,    46,    51,   127,   104,    29,   127,
      54,    54,    32,    30,    30,    57,    58,    33,    34,    35,
      36,    30,    38,    39,    40,    41,    42,    55,    55,    45,
      46,    33,    34,    35,    36,    18,    38,    39,    40,    41,
      42,    57,    58,    45,    46,    30,    30,    55,    30,    30,
      55,    30,    54,    30,   125,    57,    58,    33,    34,    35,
      36,    99,    38,    39,    40,    41,    42,    38,    55,    45,
      46,    85,    87,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    45,    46,     3,    -1,    -1,     6,    -1,    -1,    -1,
      10,    -1,    -1,    57,    58,    -1,    -1,    17,    39,    40,
      41,    42,    -1,    -1,    24,    25,    26,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    60,    61,     0,    62,     3,     6,    10,    17,
      24,    25,    26,    63,    64,    65,    66,    72,    75,    76,
      29,     3,     4,     5,     7,     8,    13,    51,    79,    80,
      53,     8,    53,    53,    30,    30,    79,    53,    53,    79,
      81,    33,    34,    35,    36,    38,    39,    40,    41,    42,
      45,    46,    57,    58,    79,    53,    79,    79,     3,     4,
       5,     7,    82,    83,    84,    81,    32,    52,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    54,    82,    54,    30,    29,    54,    32,    54,    79,
      55,    64,    65,    68,    54,    55,    79,    84,    83,    67,
      30,    30,    55,    73,    30,    56,    68,    77,    56,    64,
      65,    66,    74,    79,    18,    56,    64,    65,    78,    30,
      30,    54,    55,    30,    30,    55,    71,    69,    62,    56,
      64,    65,    66,    70,    56,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    60,    62,    62,    63,    63,    63,    63,
      63,    63,    64,    65,    66,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    70,    71,    72,    73,    73,
      74,    74,    74,    75,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      81,    81,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     1,     1,
       1,     1,     3,     2,     5,     7,    11,     0,     2,     2,
       2,     0,     2,     2,     2,     1,     3,     7,     0,     2,
       2,     2,     1,     9,     8,     0,     2,     2,     2,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       0,     1,     3,     0,     1,     3,     1,     3,     1,     1,
       1,     1
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
#line 44 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1268 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 44 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1274 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 50 "php2python.y"
                   {printf("Se encontro una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1280 "php2python.tab.c"
    break;

  case 7: /* statement: echo SC  */
#line 51 "php2python.y"
              {printf("Se encontro un echo\n"); write_echo((yyvsp[-1].str));}
#line 1286 "php2python.tab.c"
    break;

  case 8: /* statement: conditional  */
#line 52 "php2python.y"
                  {printf("Se encontro una condicional\n"); write_if((yyvsp[0].str));}
#line 1292 "php2python.tab.c"
    break;

  case 9: /* statement: while  */
#line 53 "php2python.y"
            {printf("Se encontro un bucle while\n"); write_while((yyvsp[0].str));}
#line 1298 "php2python.tab.c"
    break;

  case 10: /* statement: for  */
#line 54 "php2python.y"
          {printf("Se encontro un bucle for\n"); write_for((yyvsp[0].str));}
#line 1304 "php2python.tab.c"
    break;

  case 11: /* statement: functionDefinition  */
#line 55 "php2python.y"
                         {printf("Se encontro la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1310 "php2python.tab.c"
    break;

  case 12: /* declaration: ID EQ expr  */
#line 57 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), (yyvsp[0].str));}
#line 1316 "php2python.tab.c"
    break;

  case 13: /* echo: ECH expr  */
#line 58 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1322 "php2python.tab.c"
    break;

  case 14: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 60 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1328 "php2python.tab.c"
    break;

  case 15: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 61 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1334 "php2python.tab.c"
    break;

  case 16: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 62 "php2python.y"
                                                                                           {printf("Se encontro un if else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1340 "php2python.tab.c"
    break;

  case 18: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 66 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1346 "php2python.tab.c"
    break;

  case 19: /* statementinifblock: declaration SC  */
#line 70 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1352 "php2python.tab.c"
    break;

  case 20: /* statementinifblock: echo SC  */
#line 71 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1358 "php2python.tab.c"
    break;

  case 22: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 75 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1364 "php2python.tab.c"
    break;

  case 23: /* statementinelseblock: declaration SC  */
#line 79 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1370 "php2python.tab.c"
    break;

  case 24: /* statementinelseblock: echo SC  */
#line 80 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1376 "php2python.tab.c"
    break;

  case 25: /* statementinelseblock: conditional  */
#line 81 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1382 "php2python.tab.c"
    break;

  case 26: /* block: OBRC statements CBRC  */
#line 83 "php2python.y"
                            {printf("Se encontro un bloque\n");}
#line 1388 "php2python.tab.c"
    break;

  case 27: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 84 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1394 "php2python.tab.c"
    break;

  case 30: /* statementInWhileBlock: declaration SC  */
#line 90 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1400 "php2python.tab.c"
    break;

  case 31: /* statementInWhileBlock: echo SC  */
#line 91 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1406 "php2python.tab.c"
    break;

  case 32: /* statementInWhileBlock: conditional  */
#line 92 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 1412 "php2python.tab.c"
    break;

  case 33: /* for: FOR OPRT expr SC expr SC expr CPRT block  */
#line 94 "php2python.y"
                                              {printf("Se encontro un bucle for\n");}
#line 1418 "php2python.tab.c"
    break;

  case 34: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 95 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 1424 "php2python.tab.c"
    break;

  case 36: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 98 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 1430 "php2python.tab.c"
    break;

  case 37: /* statementInFunctionBlock: declaration SC  */
#line 101 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1436 "php2python.tab.c"
    break;

  case 38: /* statementInFunctionBlock: echo SC  */
#line 102 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1442 "php2python.tab.c"
    break;

  case 39: /* expr: NUM  */
#line 105 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1448 "php2python.tab.c"
    break;

  case 40: /* expr: STR  */
#line 106 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 1454 "php2python.tab.c"
    break;

  case 41: /* expr: ID  */
#line 107 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 1460 "php2python.tab.c"
    break;

  case 42: /* expr: BOOL  */
#line 108 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 1466 "php2python.tab.c"
    break;

  case 43: /* expr: functionCall  */
#line 109 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 1472 "php2python.tab.c"
    break;

  case 44: /* expr: expr PLUS expr  */
#line 110 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1478 "php2python.tab.c"
    break;

  case 45: /* expr: expr MINS expr  */
#line 111 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 1484 "php2python.tab.c"
    break;

  case 46: /* expr: expr MULT expr  */
#line 112 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 1490 "php2python.tab.c"
    break;

  case 47: /* expr: expr DIV expr  */
#line 113 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 1496 "php2python.tab.c"
    break;

  case 48: /* expr: expr CCTN expr  */
#line 114 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1502 "php2python.tab.c"
    break;

  case 49: /* expr: expr AND expr  */
#line 115 "php2python.y"
                    {printf("Se encontro una conjuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 1508 "php2python.tab.c"
    break;

  case 50: /* expr: expr OR expr  */
#line 116 "php2python.y"
                   {printf("Se encontro una disyuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 1514 "php2python.tab.c"
    break;

  case 51: /* expr: expr GT expr  */
#line 117 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 1520 "php2python.tab.c"
    break;

  case 52: /* expr: expr LT expr  */
#line 118 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 1526 "php2python.tab.c"
    break;

  case 53: /* expr: expr GTE expr  */
#line 119 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 1532 "php2python.tab.c"
    break;

  case 54: /* expr: expr LTE expr  */
#line 120 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 1538 "php2python.tab.c"
    break;

  case 55: /* expr: expr EEQ expr  */
#line 121 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 1544 "php2python.tab.c"
    break;

  case 56: /* expr: expr NEQ expr  */
#line 122 "php2python.y"
                    {printf("Se encontro un diferente que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 1550 "php2python.tab.c"
    break;

  case 57: /* expr: ARRY OPRT parameters CPRT  */
#line 123 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 1556 "php2python.tab.c"
    break;

  case 58: /* expr: OSQB parameters CSQB  */
#line 124 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 1562 "php2python.tab.c"
    break;

  case 59: /* functionCall: NAME OPRT arguments CPRT  */
#line 126 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 1568 "php2python.tab.c"
    break;

  case 60: /* parameters: %empty  */
#line 128 "php2python.y"
           {(yyval.str)=NULL;}
#line 1574 "php2python.tab.c"
    break;

  case 61: /* parameters: expr  */
#line 129 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 1580 "php2python.tab.c"
    break;

  case 62: /* parameters: parameters COMM expr  */
#line 130 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 1586 "php2python.tab.c"
    break;

  case 63: /* arguments: %empty  */
#line 133 "php2python.y"
           {(yyval.str)="";}
#line 1592 "php2python.tab.c"
    break;

  case 65: /* argument: argument COMM argument  */
#line 137 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 1598 "php2python.tab.c"
    break;

  case 66: /* argument: ID  */
#line 138 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 1604 "php2python.tab.c"
    break;

  case 67: /* argument: ID EQ defaultValue  */
#line 139 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 1610 "php2python.tab.c"
    break;

  case 69: /* defaultValue: NUM  */
#line 143 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1616 "php2python.tab.c"
    break;

  case 70: /* defaultValue: STR  */
#line 144 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 1622 "php2python.tab.c"
    break;

  case 71: /* defaultValue: BOOL  */
#line 145 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 1628 "php2python.tab.c"
    break;


#line 1632 "php2python.tab.c"

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

#line 148 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
