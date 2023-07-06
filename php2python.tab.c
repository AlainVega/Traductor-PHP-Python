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
  YYSYMBOL_GTE = 58,                       /* GTE  */
  YYSYMBOL_LTE = 59,                       /* LTE  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_statements = 63,                /* statements  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_echo = 66,                      /* echo  */
  YYSYMBOL_conditional = 67,               /* conditional  */
  YYSYMBOL_statementsinifblock = 68,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 69,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 70,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 71,      /* statementinelseblock  */
  YYSYMBOL_while = 72,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 73,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 74,     /* statementInWhileBlock  */
  YYSYMBOL_break = 75,                     /* break  */
  YYSYMBOL_continue = 76,                  /* continue  */
  YYSYMBOL_functionDefinition = 77,        /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 78, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 79,  /* statementInFunctionBlock  */
  YYSYMBOL_return = 80,                    /* return  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_functionCall = 82,              /* functionCall  */
  YYSYMBOL_parameters = 83,                /* parameters  */
  YYSYMBOL_arguments = 84,                 /* arguments  */
  YYSYMBOL_argument = 85,                  /* argument  */
  YYSYMBOL_defaultValue = 86,              /* defaultValue  */
  YYSYMBOL_foreach = 87,                   /* foreach  */
  YYSYMBOL_statementsInForeach = 88,       /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 89         /* statementInForeach  */
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
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    45,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    60,    61,    63,    64,    65,    68,
      69,    73,    74,    75,    76,    79,    80,    84,    85,    86,
      87,    88,    91,    93,    94,    97,    98,    99,   100,   101,
     102,   103,   105,   106,   107,   109,   110,   113,   114,   115,
     116,   118,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   146,   148,   149,
     150,   153,   154,   157,   158,   159,   160,   163,   164,   165,
     167,   168,   169,   171,   172,   175,   176,   177,   178
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
  "CPRT", "OBRC", "CBRC", "QUES", "GTE", "LTE", "$accept", "program",
  "$@1", "statements", "statement", "declaration", "echo", "conditional",
  "statementsinifblock", "statementinifblock", "statementsinelseblock",
  "statementinelseblock", "while", "statementsInWhileBlock",
  "statementInWhileBlock", "break", "continue", "functionDefinition",
  "statementsInFunctionBlock", "statementInFunctionBlock", "return",
  "expr", "functionCall", "parameters", "arguments", "argument",
  "defaultValue", "foreach", "statementsInForeach", "statementInForeach", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -167,    18,  -167,  -167,   178,   -21,    99,  -167,  -167,
     -20,   -18,    34,   -10,    99,  -167,    13,    14,  -167,  -167,
    -167,    41,  -167,    99,  -167,  -167,  -167,  -167,    21,    23,
      99,    99,    99,   248,  -167,    26,    99,    28,    99,   248,
    -167,  -167,  -167,   248,   112,    99,   127,   248,   -30,   173,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    70,    35,   112,   198,
     112,   223,    65,  -167,  -167,  -167,    39,    67,  -167,   -31,
      99,  -167,  -167,   127,   127,   127,   127,   127,   127,   257,
     257,   257,   257,   127,   127,   127,   118,   257,   257,    97,
     112,    57,    83,    60,    56,    20,  -167,   112,  -167,   248,
      99,    72,    73,   107,  -167,  -167,    89,   101,  -167,   108,
      84,  -167,  -167,  -167,   127,    86,   129,   128,    10,  -167,
    -167,  -167,  -167,     8,  -167,   140,    90,   126,  -167,    38,
    -167,  -167,  -167,  -167,   114,   115,  -167,  -167,   116,   133,
     134,    66,   119,   117,   136,  -167,  -167,   142,   150,  -167,
     151,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   156,   160,
     161,  -167,   139,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,  -167,    76,    62,    81,  -167,  -167,  -167,   163,   165,
    -167,  -167,   166,  -167,  -167,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,     0,     0,    13,     3,
       0,     0,     0,     0,     0,     5,     0,     0,     8,     9,
      11,     0,    10,     0,    54,    53,    52,    55,     0,     0,
       0,    78,     0,    15,    56,     0,     0,     0,     0,    51,
       6,     7,    12,    14,    81,    78,    63,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      81,     0,    84,    88,    87,    89,     0,    82,    86,     0,
       0,    74,    75,    57,    58,    60,    59,    61,    62,    71,
      72,    67,    68,    64,    65,    66,     0,    69,    70,     0,
      81,     0,     0,     0,     0,     0,    77,     0,    73,    80,
       0,     0,     0,     0,    24,    19,     0,     0,    16,     0,
       0,    33,    85,    83,    76,     0,     0,     0,     0,    21,
      22,    23,    45,     0,    93,     0,     0,    17,    20,     0,
      41,    42,    43,    32,     0,     0,    37,    34,     0,     0,
       0,     0,     0,     0,     0,    50,    44,     0,     0,    46,
       0,    35,    36,    39,    40,    38,    98,    90,     0,     0,
       0,    94,     0,    93,    25,    47,    48,    49,    95,    96,
      97,    93,     0,     0,     0,    92,    31,    18,     0,     0,
      29,    26,     0,    91,    27,    28,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,  -167,    -5,    -4,  -113,  -167,    71,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
      -3,    -2,  -167,   155,   -62,    94,    98,  -167,  -166,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,    15,   168,   169,    18,   128,   118,
     183,   191,    19,   133,   147,   148,   149,    20,   139,   159,
     170,    47,    34,    48,    76,    77,    78,    22,   151,   171
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    17,    21,    80,    80,    33,   101,   182,   103,     1,
      23,     6,    39,     6,     7,   184,     7,   140,     4,   114,
     146,    43,    81,   108,    73,    74,    11,    75,    46,    66,
      49,   141,   142,    35,    69,    36,    71,    14,   112,    14,
      67,     6,    37,    38,     7,    40,    41,   155,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   143,     6,   137,    14,     7,     6,
     190,   186,     7,    42,    44,   166,    45,    68,   109,     6,
      11,    70,     7,    99,     6,   166,     6,     7,   100,     7,
     166,    14,   114,   106,   156,    14,   105,   116,   117,   119,
     111,   107,    24,    25,    26,    14,    27,    28,   124,   113,
      14,   121,    14,    29,   120,    72,    73,    74,   187,    75,
     127,   129,   167,   116,   117,   119,   125,   126,   144,   145,
     150,   136,   185,   130,   157,   158,   160,   193,   115,   132,
     131,   134,   135,   152,   153,   154,   161,   162,   163,    30,
      31,   110,    32,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   164,   165,    62,    56,    57,
      58,    59,   173,   172,   175,    63,    64,    65,   188,   189,
     192,     6,   176,   177,     7,    64,    65,     8,   178,     9,
      10,   174,   179,   180,   181,   194,    11,   195,   196,   138,
      79,   123,     0,   122,    12,    13,     0,    14,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,    62,     0,     0,     0,     0,    82,     0,     0,
      63,    64,    65,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,    62,     0,     0,
       0,     0,   102,     0,     0,    63,    64,    65,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,    62,     0,     0,     0,     0,   104,     0,     0,
      63,    64,    65,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,    62,    -1,    -1,
      -1,    -1,     0,     0,     0,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
       5,     5,     5,    34,    34,     7,    68,   173,    70,    10,
      31,     3,    14,     3,     6,   181,     6,     9,     0,     9,
     133,    23,    52,    54,     4,     5,    18,     7,    30,     3,
      32,    23,    24,    53,    36,    53,    38,    29,   100,    29,
      14,     3,     8,    53,     6,    32,    32,     9,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    56,     3,    56,    29,     6,     3,
     183,     9,     6,    32,    53,     9,    53,    51,    80,     3,
      18,    53,     6,    13,     3,     9,     3,     6,    53,     6,
       9,    29,     9,    54,    56,    29,    31,   102,   102,   102,
       3,    34,     3,     4,     5,    29,     7,     8,   110,    52,
      29,    55,    29,    14,    54,     3,     4,     5,    56,     7,
      13,    32,    56,   128,   128,   128,    54,    54,   133,   133,
     133,     3,    56,    32,   139,   139,   139,    56,    55,    55,
      32,    55,    13,     3,    54,    19,    32,    32,    32,    50,
      51,    33,    53,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    32,    32,    49,    41,    42,
      43,    44,    55,    54,    32,    57,    58,    59,   183,   183,
     183,     3,    32,    32,     6,    58,    59,     9,    32,    11,
      12,    55,    32,    32,    55,    32,    18,    32,    32,   128,
      45,   107,    -1,   105,    26,    27,    -1,    29,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    41,    42,
      43,    44,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    61,    62,     0,    63,     3,     6,     9,    11,
      12,    18,    26,    27,    29,    64,    65,    66,    67,    72,
      77,    80,    87,    31,     3,     4,     5,     7,     8,    14,
      50,    51,    53,    81,    82,    53,    53,     8,    53,    81,
      32,    32,    32,    81,    53,    53,    81,    81,    83,    81,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    49,    57,    58,    59,     3,    14,    51,    81,
      53,    81,     3,     4,     5,     7,    84,    85,    86,    83,
      34,    52,    54,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    13,
      53,    84,    54,    84,    54,    31,    54,    34,    54,    81,
      33,     3,    84,    52,     9,    55,    65,    66,    69,    80,
      54,    55,    86,    85,    81,    54,    54,    13,    68,    32,
      32,    32,    55,    73,    55,    13,     3,    56,    69,    78,
       9,    23,    24,    56,    65,    66,    67,    74,    75,    76,
      80,    88,     3,    54,    19,     9,    56,    65,    66,    79,
      80,    32,    32,    32,    32,    32,     9,    56,    65,    66,
      80,    89,    54,    55,    55,    32,    32,    32,    32,    32,
      32,    55,    88,    70,    88,    56,     9,    56,    65,    66,
      67,    71,    80,    56,    32,    32,    32
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    67,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    75,    76,    77,    78,    78,    79,    79,    79,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    83,    83,
      83,    84,    84,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    89,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     3,     2,     5,     7,    11,     0,
       2,     2,     2,     2,     1,     0,     2,     2,     2,     1,
       2,     1,     7,     0,     2,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     8,     0,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     5,     4,     0,     1,
       3,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       9,    12,    11,     0,     2,     2,     2,     2,     1
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
#line 1310 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 45 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1316 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 51 "php2python.y"
                   {printf("Se encontro una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1322 "php2python.tab.c"
    break;

  case 7: /* statement: echo SC  */
#line 52 "php2python.y"
              {printf("Se encontro un echo\n"); write_echo((yyvsp[-1].str));}
#line 1328 "php2python.tab.c"
    break;

  case 8: /* statement: conditional  */
#line 53 "php2python.y"
                  {printf("Se encontro una condicional\n"); write_if((yyvsp[0].str));}
#line 1334 "php2python.tab.c"
    break;

  case 9: /* statement: while  */
#line 54 "php2python.y"
            {printf("Se encontro un bucle while\n"); write_while((yyvsp[0].str));}
#line 1340 "php2python.tab.c"
    break;

  case 10: /* statement: foreach  */
#line 55 "php2python.y"
              {printf("Se encontro un bucle foreach\n"); write_while((yyvsp[0].str));}
#line 1346 "php2python.tab.c"
    break;

  case 11: /* statement: functionDefinition  */
#line 56 "php2python.y"
                         {printf("Se encontro la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1352 "php2python.tab.c"
    break;

  case 12: /* statement: return SC  */
#line 57 "php2python.y"
                {printf("Se encontro un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1358 "php2python.tab.c"
    break;

  case 13: /* statement: CMNT  */
#line 58 "php2python.y"
           {printf("Se encontro un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1364 "php2python.tab.c"
    break;

  case 14: /* declaration: ID EQ expr  */
#line 60 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), (yyvsp[0].str));}
#line 1370 "php2python.tab.c"
    break;

  case 15: /* echo: ECH expr  */
#line 61 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1376 "php2python.tab.c"
    break;

  case 16: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 63 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1382 "php2python.tab.c"
    break;

  case 17: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 64 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1388 "php2python.tab.c"
    break;

  case 18: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 65 "php2python.y"
                                                                                           {printf("Se encontro un if else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1394 "php2python.tab.c"
    break;

  case 20: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 69 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1400 "php2python.tab.c"
    break;

  case 21: /* statementinifblock: declaration SC  */
#line 73 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1406 "php2python.tab.c"
    break;

  case 22: /* statementinifblock: echo SC  */
#line 74 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1412 "php2python.tab.c"
    break;

  case 23: /* statementinifblock: return SC  */
#line 75 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1418 "php2python.tab.c"
    break;

  case 24: /* statementinifblock: CMNT  */
#line 76 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1424 "php2python.tab.c"
    break;

  case 26: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 80 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1430 "php2python.tab.c"
    break;

  case 27: /* statementinelseblock: declaration SC  */
#line 84 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1436 "php2python.tab.c"
    break;

  case 28: /* statementinelseblock: echo SC  */
#line 85 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1442 "php2python.tab.c"
    break;

  case 29: /* statementinelseblock: conditional  */
#line 86 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1448 "php2python.tab.c"
    break;

  case 30: /* statementinelseblock: return SC  */
#line 87 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1454 "php2python.tab.c"
    break;

  case 31: /* statementinelseblock: CMNT  */
#line 88 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1460 "php2python.tab.c"
    break;

  case 32: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 91 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1466 "php2python.tab.c"
    break;

  case 34: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 94 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 1472 "php2python.tab.c"
    break;

  case 35: /* statementInWhileBlock: declaration SC  */
#line 97 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1478 "php2python.tab.c"
    break;

  case 36: /* statementInWhileBlock: echo SC  */
#line 98 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1484 "php2python.tab.c"
    break;

  case 37: /* statementInWhileBlock: conditional  */
#line 99 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 1490 "php2python.tab.c"
    break;

  case 38: /* statementInWhileBlock: return SC  */
#line 100 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1496 "php2python.tab.c"
    break;

  case 39: /* statementInWhileBlock: break SC  */
#line 101 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1502 "php2python.tab.c"
    break;

  case 40: /* statementInWhileBlock: continue SC  */
#line 102 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1508 "php2python.tab.c"
    break;

  case 41: /* statementInWhileBlock: CMNT  */
#line 103 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1514 "php2python.tab.c"
    break;

  case 42: /* break: BRK  */
#line 105 "php2python.y"
           {(yyval.str)="break";}
#line 1520 "php2python.tab.c"
    break;

  case 43: /* continue: CONT  */
#line 106 "php2python.y"
               {(yyval.str)="continue";}
#line 1526 "php2python.tab.c"
    break;

  case 44: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 107 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 1532 "php2python.tab.c"
    break;

  case 46: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 110 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 1538 "php2python.tab.c"
    break;

  case 47: /* statementInFunctionBlock: declaration SC  */
#line 113 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1544 "php2python.tab.c"
    break;

  case 48: /* statementInFunctionBlock: echo SC  */
#line 114 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1550 "php2python.tab.c"
    break;

  case 49: /* statementInFunctionBlock: return SC  */
#line 115 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 1556 "php2python.tab.c"
    break;

  case 50: /* statementInFunctionBlock: CMNT  */
#line 116 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1562 "php2python.tab.c"
    break;

  case 51: /* return: RTN expr  */
#line 118 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 1568 "php2python.tab.c"
    break;

  case 52: /* expr: NUM  */
#line 120 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1574 "php2python.tab.c"
    break;

  case 53: /* expr: STR  */
#line 121 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 1580 "php2python.tab.c"
    break;

  case 54: /* expr: ID  */
#line 122 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 1586 "php2python.tab.c"
    break;

  case 55: /* expr: BOOL  */
#line 123 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 1592 "php2python.tab.c"
    break;

  case 56: /* expr: functionCall  */
#line 124 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 1598 "php2python.tab.c"
    break;

  case 57: /* expr: expr PLUS expr  */
#line 125 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1604 "php2python.tab.c"
    break;

  case 58: /* expr: expr MINS expr  */
#line 126 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 1610 "php2python.tab.c"
    break;

  case 59: /* expr: expr MULT expr  */
#line 127 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 1616 "php2python.tab.c"
    break;

  case 60: /* expr: expr DIV expr  */
#line 128 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 1622 "php2python.tab.c"
    break;

  case 61: /* expr: expr MOD expr  */
#line 129 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 1628 "php2python.tab.c"
    break;

  case 62: /* expr: expr CCTN expr  */
#line 130 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1634 "php2python.tab.c"
    break;

  case 63: /* expr: NOT expr  */
#line 131 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", " not ", (yyvsp[0].str));}
#line 1640 "php2python.tab.c"
    break;

  case 64: /* expr: expr AND expr  */
#line 132 "php2python.y"
                    {printf("Se encontro una conjuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 1646 "php2python.tab.c"
    break;

  case 65: /* expr: expr OR expr  */
#line 133 "php2python.y"
                   {printf("Se encontro una disyuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 1652 "php2python.tab.c"
    break;

  case 66: /* expr: expr XOR expr  */
#line 134 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 1658 "php2python.tab.c"
    break;

  case 67: /* expr: expr GT expr  */
#line 135 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 1664 "php2python.tab.c"
    break;

  case 68: /* expr: expr LT expr  */
#line 136 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 1670 "php2python.tab.c"
    break;

  case 69: /* expr: expr GTE expr  */
#line 137 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 1676 "php2python.tab.c"
    break;

  case 70: /* expr: expr LTE expr  */
#line 138 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 1682 "php2python.tab.c"
    break;

  case 71: /* expr: expr EEQ expr  */
#line 139 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 1688 "php2python.tab.c"
    break;

  case 72: /* expr: expr NEQ expr  */
#line 140 "php2python.y"
                    {printf("Se encontro un diferente que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 1694 "php2python.tab.c"
    break;

  case 73: /* expr: ARRY OPRT parameters CPRT  */
#line 141 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 1700 "php2python.tab.c"
    break;

  case 74: /* expr: OSQB parameters CSQB  */
#line 142 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 1706 "php2python.tab.c"
    break;

  case 75: /* expr: OPRT expr CPRT  */
#line 143 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 1712 "php2python.tab.c"
    break;

  case 76: /* expr: expr QUES expr CL expr  */
#line 144 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n",(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 1718 "php2python.tab.c"
    break;

  case 77: /* functionCall: NAME OPRT arguments CPRT  */
#line 146 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 1724 "php2python.tab.c"
    break;

  case 78: /* parameters: %empty  */
#line 148 "php2python.y"
           {(yyval.str)=NULL;}
#line 1730 "php2python.tab.c"
    break;

  case 79: /* parameters: expr  */
#line 149 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 1736 "php2python.tab.c"
    break;

  case 80: /* parameters: parameters COMM expr  */
#line 150 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 1742 "php2python.tab.c"
    break;

  case 81: /* arguments: %empty  */
#line 153 "php2python.y"
           {(yyval.str)="";}
#line 1748 "php2python.tab.c"
    break;

  case 83: /* argument: argument COMM argument  */
#line 157 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 1754 "php2python.tab.c"
    break;

  case 84: /* argument: ID  */
#line 158 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 1760 "php2python.tab.c"
    break;

  case 85: /* argument: ID EQ defaultValue  */
#line 159 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 1766 "php2python.tab.c"
    break;

  case 87: /* defaultValue: NUM  */
#line 163 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1772 "php2python.tab.c"
    break;

  case 88: /* defaultValue: STR  */
#line 164 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 1778 "php2python.tab.c"
    break;

  case 89: /* defaultValue: BOOL  */
#line 165 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 1784 "php2python.tab.c"
    break;

  case 90: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 167 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 1790 "php2python.tab.c"
    break;

  case 91: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 168 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 1796 "php2python.tab.c"
    break;

  case 92: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 169 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 1802 "php2python.tab.c"
    break;

  case 94: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 172 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1808 "php2python.tab.c"
    break;

  case 95: /* statementInForeach: declaration SC  */
#line 175 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1814 "php2python.tab.c"
    break;

  case 96: /* statementInForeach: echo SC  */
#line 176 "php2python.y"
              {printf("Se encontro un echo dentro de una foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1820 "php2python.tab.c"
    break;

  case 97: /* statementInForeach: return SC  */
#line 177 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 1826 "php2python.tab.c"
    break;

  case 98: /* statementInForeach: CMNT  */
#line 178 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1832 "php2python.tab.c"
    break;


#line 1836 "php2python.tab.c"

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

#line 180 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
