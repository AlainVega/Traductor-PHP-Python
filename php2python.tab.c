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
  YYSYMBOL_statementsinelifblock = 72,     /* statementsinelifblock  */
  YYSYMBOL_statementinelifblock = 73,      /* statementinelifblock  */
  YYSYMBOL_while = 74,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 75,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 76,     /* statementInWhileBlock  */
  YYSYMBOL_break = 77,                     /* break  */
  YYSYMBOL_continue = 78,                  /* continue  */
  YYSYMBOL_functionDefinition = 79,        /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 80, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 81,  /* statementInFunctionBlock  */
  YYSYMBOL_return = 82,                    /* return  */
  YYSYMBOL_anonymousFunctionStatement = 83, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 84,                      /* expr  */
  YYSYMBOL_functionCall = 85,              /* functionCall  */
  YYSYMBOL_parameters = 86,                /* parameters  */
  YYSYMBOL_arguments = 87,                 /* arguments  */
  YYSYMBOL_argument = 88,                  /* argument  */
  YYSYMBOL_defaultValue = 89,              /* defaultValue  */
  YYSYMBOL_foreach = 90,                   /* foreach  */
  YYSYMBOL_statementsInForeach = 91,       /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 92,        /* statementInForeach  */
  YYSYMBOL_for = 93,                       /* for  */
  YYSYMBOL_statementsInFor = 94,           /* statementsInFor  */
  YYSYMBOL_statementInFor = 95             /* statementInFor  */
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
#define YYLAST   727

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

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
      55,    56,    57,    58,    59,    60,    62,    63,    65,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    84,    87,    88,    89,    90,    93,
      94,    97,    98,    99,   100,   101,   104,   105,   108,   109,
     110,   111,   112,   114,   116,   117,   120,   121,   122,   123,
     124,   125,   126,   128,   129,   130,   132,   133,   136,   137,
     138,   139,   141,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   185,   187,   188,   189,   192,   193,   196,
     197,   198,   199,   202,   203,   204,   206,   207,   208,   210,
     211,   214,   215,   216,   217,   219,   220,   221,   224,   225,
     226,   227
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
  "statementinelseblock", "statementsinelifblock", "statementinelifblock",
  "while", "statementsInWhileBlock", "statementInWhileBlock", "break",
  "continue", "functionDefinition", "statementsInFunctionBlock",
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

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,  -230,    13,  -230,  -230,   356,   -15,  -230,  -230,   412,
    -230,   -12,  -230,  -230,    -9,    -2,     7,    37,    10,    24,
     412,   412,   412,   412,   412,   412,  -230,    51,    55,  -230,
    -230,  -230,    73,   435,  -230,  -230,  -230,   438,  -230,    59,
     668,    94,     4,   412,   412,    61,    94,   412,   105,   668,
     157,   157,   157,   668,   -14,   543,  -230,  -230,  -230,  -230,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,  -230,  -230,   412,   412,   412,   412,  -230,   668,
      88,  -230,  -230,  -230,    69,   101,  -230,   123,    95,    94,
     -31,   568,    94,    99,   593,   -15,   125,   412,  -230,  -230,
     157,   157,   157,   157,   157,   157,   381,   381,   381,   381,
     157,   157,   157,   518,   381,   381,    89,  -230,    94,   151,
      94,   103,  -230,   121,   107,   110,   112,   412,   668,   412,
    -230,  -230,   117,   119,   145,  -230,  -230,   127,   142,     2,
     143,   128,   384,  -230,   463,   157,   129,   167,   179,    28,
    -230,  -230,     6,   135,  -230,  -230,  -230,   159,   162,  -230,
    -230,  -230,   164,   133,   491,  -230,  -230,    30,   105,  -230,
     203,   153,    97,  -230,  -230,  -230,   176,   177,  -230,  -230,
     178,   412,   100,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,   180,   182,  -230,  -230,   185,   190,   193,   173,
     122,   174,   156,   282,   181,    82,  -230,  -230,  -230,   618,
    -230,  -230,   197,   199,  -230,   211,  -230,  -230,  -230,  -230,
    -230,   210,  -230,  -230,   240,   242,   248,  -230,   229,  -230,
    -230,  -230,   412,  -230,  -230,   290,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,   239,    86,   643,  -230,  -230,   254,
     255,  -230,   275,   265,   261,   273,  -230,  -230,   295,   104,
    -230,  -230,   303,  -230,  -230,  -230,   271,   278,   283,  -230,
    -230,  -230,   286,   288,  -230,  -230,  -230,  -230,  -230,  -230,
     163,   317,   322,   184,   299,  -230,  -230,  -230,  -230,  -230,
     324,   215,   217,  -230,  -230,  -230,  -230,   260,  -230
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,    85,    84,    83,     0,
      86,     0,    15,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     5,     0,     0,     9,
      10,    13,     0,     0,    87,    11,    12,     0,    85,     0,
      18,   117,     0,   114,     0,     0,   117,     0,     0,    72,
      94,    96,    98,   115,     0,     0,     6,     8,    14,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    97,     0,     0,     0,     0,    17,    16,
     120,   124,   123,   125,     0,   118,   122,     0,     0,   117,
       0,     0,   117,     0,     0,     0,     0,     0,   109,   110,
      88,    89,    91,    90,    92,    93,   106,   107,   102,   103,
      99,   100,   101,     0,   104,   105,     0,   113,     0,     0,
     117,     0,   108,     0,     0,     0,     0,     0,   116,     0,
     121,   119,     0,     0,     0,    38,    33,     0,     0,    19,
       0,     0,     0,    54,     0,   111,     0,     0,     0,     0,
      35,    36,     0,     0,    37,    66,    82,     0,     0,    76,
      77,    80,     0,     0,     0,    78,    79,     0,     0,   129,
       0,     0,    20,    34,    45,    39,     0,     0,    43,    21,
       0,     0,     0,    73,    75,    81,   112,    74,    62,    63,
      64,    53,     0,     0,    58,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    44,     0,
      71,    65,     0,     0,    67,     0,    56,    57,    60,    61,
      59,     0,   134,   126,     0,     0,     0,   130,     0,   129,
      39,    22,     0,    23,    40,     0,    68,    69,    70,   136,
     131,   132,   133,   129,     0,     0,     0,    52,    46,     0,
       0,    50,     0,     0,     0,     0,   128,    24,     0,     0,
      48,    49,     0,    51,   141,   135,     0,     0,     0,   137,
     127,    46,     0,     0,    47,    39,    25,   138,   139,   140,
       0,     0,     0,     0,     0,    39,    26,    39,    27,    29,
       0,     0,     0,    39,    28,    30,    31,     0,    32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,  -230,  -230,    -5,    -3,     1,  -230,   165,
    -229,  -141,    21,  -218,   192,  -230,  -230,  -230,  -230,   194,
    -230,  -230,     3,  -230,     5,  -230,   279,   -42,   220,   223,
     201,  -224,  -230,   202,  -230,  -230
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    26,   176,   177,   178,   149,   139,
     205,   234,   259,   274,    30,   167,   195,   196,   197,    31,
     182,   214,   180,   163,    53,    34,    54,    84,    85,    86,
      35,   200,   227,    36,   254,   269
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   245,    28,    97,    93,   244,    29,    87,    32,    95,
      33,   179,     9,     4,    40,   174,    37,   252,    88,   255,
      97,   152,   153,   122,    16,    49,    50,    51,    52,     1,
      55,    95,    78,    95,     9,    20,     9,   135,    98,   188,
     272,    41,    79,    96,    42,    45,   283,   121,    16,    91,
     124,    43,    94,   189,   190,    89,   291,    20,   292,    20,
      44,   175,   231,    47,   297,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    48,   133,   112,
     113,   114,   115,    56,   172,    95,   191,    57,     9,    95,
      46,   174,     9,    81,    82,   174,    83,    80,    81,    82,
      16,    83,   128,    95,    16,    58,     9,    95,    95,   210,
       9,    20,    46,   247,    92,    20,   203,   204,   137,   116,
     138,   276,    16,   117,    95,    95,   140,     9,     9,    20,
     135,   222,   144,    20,   145,   118,   119,   157,   233,   158,
     286,   288,   257,   159,   137,   162,   138,   164,   120,   294,
      20,    20,   140,   125,   132,   134,   211,   127,   148,   150,
     273,   141,   192,   199,   193,   142,    95,   143,   194,     9,
     198,   146,   247,   147,   151,   154,   136,   212,   223,   213,
     170,    16,   171,   155,   169,   215,   209,    95,   181,   186,
       9,   183,    20,   174,   184,   224,   185,   225,    66,    67,
      68,    69,    16,   226,    72,    73,   201,   202,   206,   207,
     208,   229,   216,    20,   217,    76,    77,   218,    95,   284,
      95,     9,   219,     9,   174,   220,   174,   221,   228,   236,
     249,   237,   250,    16,   232,    16,   251,   246,   253,   224,
     289,   225,    95,   238,    20,     9,    20,   226,   222,   266,
     224,   267,   225,   249,   249,   250,   250,   268,   226,   251,
     251,   253,   253,    95,    95,   239,     9,     9,    20,   174,
     264,   295,   240,   296,   241,   249,    95,   250,    16,     9,
     242,   251,   222,   253,   243,    95,   260,   261,     9,    20,
      20,   174,   280,    95,   262,   256,     9,   263,    95,   247,
      16,     9,    20,   277,   247,   281,    95,   282,    16,     9,
     278,    20,   174,    16,   173,   279,   298,   265,   290,    20,
      95,    16,    90,     9,    20,    95,   174,    95,     9,   270,
       9,   174,    20,   174,   160,    16,   161,   230,   131,   130,
      16,     0,    16,   165,   166,   248,    20,     0,     0,     0,
     271,    20,     0,    20,     0,     0,     0,     0,   275,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,   285,     0,    16,     0,     0,   287,     0,   293,
       0,     0,    17,    18,    19,    20,     0,     6,     7,     8,
       9,    10,    11,   156,     0,     0,    14,     0,    15,     0,
       0,     0,    16,    21,    22,     0,    23,    24,     0,    25,
      17,    18,    19,    20,     0,    38,     7,     8,     0,    10,
      11,     0,    -1,    -1,    -1,    -1,    15,     0,     0,     0,
       0,    21,    22,     0,    23,    24,     0,    25,    39,    -1,
      -1,     6,     7,     8,     0,    10,    11,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,    21,
      22,     0,    23,    24,    39,    25,     0,    59,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    21,    22,     0,    23,    24,
       0,    25,    75,    76,    77,   168,     0,     0,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,   187,     0,     0,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,   129,     0,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,    99,     0,     0,
      75,    76,    77,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,   123,     0,     0,    75,    76,    77,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,   126,     0,     0,
      75,    76,    77,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,   235,     0,     0,    75,    76,    77,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,   258,     0,     0,
      75,    76,    77,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       5,   230,     5,    34,    46,   229,     5,     3,     5,     3,
       5,   152,     6,     0,     9,     9,    31,   235,    14,   243,
      34,    19,    20,    54,    18,    20,    21,    22,    23,    10,
      25,     3,    37,     3,     6,    29,     6,     9,    52,     9,
     258,    53,    37,    48,    53,     8,   275,    89,    18,    44,
      92,    53,    47,    23,    24,    51,   285,    29,   287,    29,
      53,    55,   203,    53,   293,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    53,   120,    74,
      75,    76,    77,    32,    56,     3,    56,    32,     6,     3,
      53,     9,     6,     4,     5,     9,     7,     3,     4,     5,
      18,     7,    97,     3,    18,    32,     6,     3,     3,     9,
       6,    29,    53,     9,    53,    29,    19,    20,   123,    31,
     123,   262,    18,    54,     3,     3,   123,     6,     6,    29,
       9,     9,   127,    29,   129,    34,    13,   142,    56,   142,
     281,   282,    56,   142,   149,   142,   149,   142,    53,   290,
      29,    29,   149,    54,     3,    52,    56,    32,    13,    32,
      56,    54,   167,   168,   167,    55,     3,    55,   167,     6,
     167,    54,     9,    54,    32,    32,    55,   182,    56,   182,
      13,    18,     3,    55,    55,   182,   181,     3,    53,    56,
       6,    32,    29,     9,    32,   200,    32,   200,    41,    42,
      43,    44,    18,   200,    47,    48,     3,    54,    32,    32,
      32,    55,    32,    29,    32,    58,    59,    32,     3,    56,
       3,     6,    32,     6,     9,    32,     9,    54,    54,    32,
     235,    32,   235,    18,    53,    18,   235,   232,   235,   244,
      56,   244,     3,    32,    29,     6,    29,   244,     9,   254,
     255,   254,   255,   258,   259,   258,   259,   254,   255,   258,
     259,   258,   259,     3,     3,    55,     6,     6,    29,     9,
       9,    56,    32,    56,    32,   280,     3,   280,    18,     6,
      32,   280,     9,   280,    55,     3,    32,    32,     6,    29,
      29,     9,   271,     3,    19,    56,     6,    32,     3,     9,
      18,     6,    29,    32,     9,    19,     3,    19,    18,     6,
      32,    29,     9,    18,   149,    32,    56,    56,    19,    29,
       3,    18,    43,     6,    29,     3,     9,     3,     6,    56,
       6,     9,    29,     9,   142,    18,   142,    55,   118,   116,
      18,    -1,    18,   142,   142,    55,    29,    -1,    -1,    -1,
      55,    29,    -1,    29,    -1,    -1,    -1,    -1,    55,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      14,    -1,    55,    -1,    18,    -1,    -1,    55,    -1,    55,
      -1,    -1,    26,    27,    28,    29,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    47,    48,    -1,    50,    51,    -1,    53,
      26,    27,    28,    29,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    41,    42,    43,    44,    14,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    -1,    53,    26,    58,
      59,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    26,    53,    -1,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    47,    48,    -1,    50,    51,
      -1,    53,    57,    58,    59,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    61,    62,     0,    63,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    18,    26,    27,    28,
      29,    47,    48,    50,    51,    53,    64,    65,    66,    67,
      74,    79,    82,    84,    85,    90,    93,    31,     3,    26,
      84,    53,    53,    53,    53,     8,    53,    53,    53,    84,
      84,    84,    84,    84,    86,    84,    32,    32,    32,    32,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    57,    58,    59,    65,    84,
       3,     4,     5,     7,    87,    88,    89,     3,    14,    51,
      86,    84,    53,    87,    84,     3,    65,    34,    52,    54,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    31,    54,    34,    13,
      53,    87,    54,    54,    87,    54,    54,    32,    84,    33,
      89,    88,     3,    87,    52,     9,    55,    65,    66,    69,
      82,    54,    55,    55,    84,    84,    54,    54,    13,    68,
      32,    32,    19,    20,    32,    55,     9,    65,    66,    67,
      74,    79,    82,    83,    84,    90,    93,    75,    32,    55,
      13,     3,    56,    69,     9,    55,    65,    66,    67,    71,
      82,    53,    80,    32,    32,    32,    56,    32,     9,    23,
      24,    56,    65,    66,    67,    76,    77,    78,    82,    65,
      91,     3,    54,    19,    20,    70,    32,    32,    32,    84,
       9,    56,    65,    66,    81,    82,    32,    32,    32,    32,
      32,    54,     9,    56,    65,    66,    82,    92,    54,    55,
      55,    71,    53,    56,    71,    54,    32,    32,    32,    55,
      32,    32,    32,    55,    91,    70,    84,     9,    55,    65,
      66,    67,    73,    82,    94,    91,    56,    56,    54,    72,
      32,    32,    19,    32,     9,    56,    65,    66,    82,    95,
      56,    55,    73,    56,    73,    55,    71,    32,    32,    32,
      72,    19,    19,    70,    56,    55,    71,    55,    71,    56,
      19,    70,    70,    55,    71,    56,    56,    70,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    74,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    77,    78,    79,    80,    80,    81,    81,
      81,    81,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      91,    92,    92,    92,    92,    93,    94,    94,    95,    95,
      95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     2,     5,
       7,     7,     9,     9,    11,    12,    14,    14,    16,    14,
      16,    16,    18,     0,     2,     2,     2,     2,     1,     0,
       2,     2,     2,     1,     2,     1,     0,     2,     2,     2,
       1,     2,     1,     7,     0,     2,     2,     2,     1,     2,
       2,     2,     1,     1,     1,     8,     0,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     5,     7,     4,     0,     1,     3,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     9,    12,    11,     0,
       2,     2,     2,     2,     1,    11,     0,     2,     2,     2,
       2,     1
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
#line 1447 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 45 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1453 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 51 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1459 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 52 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1465 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 53 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1471 "php2python.tab.c"
    break;

  case 9: /* statement: conditional  */
#line 54 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1477 "php2python.tab.c"
    break;

  case 10: /* statement: while  */
#line 55 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1483 "php2python.tab.c"
    break;

  case 11: /* statement: foreach  */
#line 56 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1489 "php2python.tab.c"
    break;

  case 12: /* statement: for  */
#line 57 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1495 "php2python.tab.c"
    break;

  case 13: /* statement: functionDefinition  */
#line 58 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1501 "php2python.tab.c"
    break;

  case 14: /* statement: return SC  */
#line 59 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1507 "php2python.tab.c"
    break;

  case 15: /* statement: CMNT  */
#line 60 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1513 "php2python.tab.c"
    break;

  case 16: /* declaration: ID EQ expr  */
#line 62 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), (yyvsp[0].str));}
#line 1519 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ declaration  */
#line 63 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), (yyvsp[0].str));}
#line 1525 "php2python.tab.c"
    break;

  case 18: /* echo: ECH expr  */
#line 65 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1531 "php2python.tab.c"
    break;

  case 19: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 67 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1537 "php2python.tab.c"
    break;

  case 20: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 68 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1543 "php2python.tab.c"
    break;

  case 21: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 69 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1549 "php2python.tab.c"
    break;

  case 22: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 70 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1555 "php2python.tab.c"
    break;

  case 23: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 71 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1561 "php2python.tab.c"
    break;

  case 24: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 72 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1567 "php2python.tab.c"
    break;

  case 25: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 73 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1573 "php2python.tab.c"
    break;

  case 26: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 74 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1579 "php2python.tab.c"
    break;

  case 27: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 75 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1585 "php2python.tab.c"
    break;

  case 28: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 76 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1591 "php2python.tab.c"
    break;

  case 29: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 77 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1597 "php2python.tab.c"
    break;

  case 30: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 78 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1603 "php2python.tab.c"
    break;

  case 31: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 79 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1609 "php2python.tab.c"
    break;

  case 32: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 80 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1615 "php2python.tab.c"
    break;

  case 34: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 84 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1621 "php2python.tab.c"
    break;

  case 35: /* statementinifblock: declaration SC  */
#line 87 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1627 "php2python.tab.c"
    break;

  case 36: /* statementinifblock: echo SC  */
#line 88 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1633 "php2python.tab.c"
    break;

  case 37: /* statementinifblock: return SC  */
#line 89 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1639 "php2python.tab.c"
    break;

  case 38: /* statementinifblock: CMNT  */
#line 90 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1645 "php2python.tab.c"
    break;

  case 40: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 94 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1651 "php2python.tab.c"
    break;

  case 41: /* statementinelseblock: declaration SC  */
#line 97 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1657 "php2python.tab.c"
    break;

  case 42: /* statementinelseblock: echo SC  */
#line 98 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1663 "php2python.tab.c"
    break;

  case 43: /* statementinelseblock: conditional  */
#line 99 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1669 "php2python.tab.c"
    break;

  case 44: /* statementinelseblock: return SC  */
#line 100 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1675 "php2python.tab.c"
    break;

  case 45: /* statementinelseblock: CMNT  */
#line 101 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1681 "php2python.tab.c"
    break;

  case 47: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 105 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1687 "php2python.tab.c"
    break;

  case 48: /* statementinelifblock: declaration SC  */
#line 108 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1693 "php2python.tab.c"
    break;

  case 49: /* statementinelifblock: echo SC  */
#line 109 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1699 "php2python.tab.c"
    break;

  case 50: /* statementinelifblock: conditional  */
#line 110 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1705 "php2python.tab.c"
    break;

  case 51: /* statementinelifblock: return SC  */
#line 111 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1711 "php2python.tab.c"
    break;

  case 52: /* statementinelifblock: CMNT  */
#line 112 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1717 "php2python.tab.c"
    break;

  case 53: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 114 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1723 "php2python.tab.c"
    break;

  case 55: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 117 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 1729 "php2python.tab.c"
    break;

  case 56: /* statementInWhileBlock: declaration SC  */
#line 120 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1735 "php2python.tab.c"
    break;

  case 57: /* statementInWhileBlock: echo SC  */
#line 121 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1741 "php2python.tab.c"
    break;

  case 58: /* statementInWhileBlock: conditional  */
#line 122 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 1747 "php2python.tab.c"
    break;

  case 59: /* statementInWhileBlock: return SC  */
#line 123 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1753 "php2python.tab.c"
    break;

  case 60: /* statementInWhileBlock: break SC  */
#line 124 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1759 "php2python.tab.c"
    break;

  case 61: /* statementInWhileBlock: continue SC  */
#line 125 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1765 "php2python.tab.c"
    break;

  case 62: /* statementInWhileBlock: CMNT  */
#line 126 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1771 "php2python.tab.c"
    break;

  case 63: /* break: BRK  */
#line 128 "php2python.y"
           {(yyval.str)="break";}
#line 1777 "php2python.tab.c"
    break;

  case 64: /* continue: CONT  */
#line 129 "php2python.y"
               {(yyval.str)="continue";}
#line 1783 "php2python.tab.c"
    break;

  case 65: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 130 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 1789 "php2python.tab.c"
    break;

  case 67: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 133 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 1795 "php2python.tab.c"
    break;

  case 68: /* statementInFunctionBlock: declaration SC  */
#line 136 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1801 "php2python.tab.c"
    break;

  case 69: /* statementInFunctionBlock: echo SC  */
#line 137 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1807 "php2python.tab.c"
    break;

  case 70: /* statementInFunctionBlock: return SC  */
#line 138 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 1813 "php2python.tab.c"
    break;

  case 71: /* statementInFunctionBlock: CMNT  */
#line 139 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1819 "php2python.tab.c"
    break;

  case 72: /* return: RTN expr  */
#line 141 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 1825 "php2python.tab.c"
    break;

  case 73: /* anonymousFunctionStatement: declaration SC  */
#line 143 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 1831 "php2python.tab.c"
    break;

  case 74: /* anonymousFunctionStatement: expr SC  */
#line 144 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 1837 "php2python.tab.c"
    break;

  case 75: /* anonymousFunctionStatement: echo SC  */
#line 145 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 1843 "php2python.tab.c"
    break;

  case 76: /* anonymousFunctionStatement: conditional  */
#line 146 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 1849 "php2python.tab.c"
    break;

  case 77: /* anonymousFunctionStatement: while  */
#line 147 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 1855 "php2python.tab.c"
    break;

  case 78: /* anonymousFunctionStatement: foreach  */
#line 148 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 1861 "php2python.tab.c"
    break;

  case 79: /* anonymousFunctionStatement: for  */
#line 149 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 1867 "php2python.tab.c"
    break;

  case 80: /* anonymousFunctionStatement: functionDefinition  */
#line 150 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 1873 "php2python.tab.c"
    break;

  case 81: /* anonymousFunctionStatement: return SC  */
#line 151 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 1879 "php2python.tab.c"
    break;

  case 82: /* anonymousFunctionStatement: CMNT  */
#line 152 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 1885 "php2python.tab.c"
    break;

  case 83: /* expr: NUM  */
#line 154 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 1891 "php2python.tab.c"
    break;

  case 84: /* expr: STR  */
#line 155 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 1897 "php2python.tab.c"
    break;

  case 85: /* expr: ID  */
#line 156 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 1903 "php2python.tab.c"
    break;

  case 86: /* expr: BOOL  */
#line 157 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 1909 "php2python.tab.c"
    break;

  case 87: /* expr: functionCall  */
#line 158 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 1915 "php2python.tab.c"
    break;

  case 88: /* expr: expr PLUS expr  */
#line 159 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1921 "php2python.tab.c"
    break;

  case 89: /* expr: expr MINS expr  */
#line 160 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 1927 "php2python.tab.c"
    break;

  case 90: /* expr: expr MULT expr  */
#line 161 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 1933 "php2python.tab.c"
    break;

  case 91: /* expr: expr DIV expr  */
#line 162 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 1939 "php2python.tab.c"
    break;

  case 92: /* expr: expr MOD expr  */
#line 163 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 1945 "php2python.tab.c"
    break;

  case 93: /* expr: expr CCTN expr  */
#line 164 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 1951 "php2python.tab.c"
    break;

  case 94: /* expr: PPL expr  */
#line 165 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 1957 "php2python.tab.c"
    break;

  case 95: /* expr: expr PPL  */
#line 166 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 1963 "php2python.tab.c"
    break;

  case 96: /* expr: MMN expr  */
#line 167 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 1969 "php2python.tab.c"
    break;

  case 97: /* expr: expr MMN  */
#line 168 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 1975 "php2python.tab.c"
    break;

  case 98: /* expr: NOT expr  */
#line 169 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", " not ", (yyvsp[0].str));}
#line 1981 "php2python.tab.c"
    break;

  case 99: /* expr: expr AND expr  */
#line 170 "php2python.y"
                    {printf("Se encontro una conjuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 1987 "php2python.tab.c"
    break;

  case 100: /* expr: expr OR expr  */
#line 171 "php2python.y"
                   {printf("Se encontro una disyuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 1993 "php2python.tab.c"
    break;

  case 101: /* expr: expr XOR expr  */
#line 172 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 1999 "php2python.tab.c"
    break;

  case 102: /* expr: expr GT expr  */
#line 173 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2005 "php2python.tab.c"
    break;

  case 103: /* expr: expr LT expr  */
#line 174 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2011 "php2python.tab.c"
    break;

  case 104: /* expr: expr GTE expr  */
#line 175 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2017 "php2python.tab.c"
    break;

  case 105: /* expr: expr LTE expr  */
#line 176 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2023 "php2python.tab.c"
    break;

  case 106: /* expr: expr EEQ expr  */
#line 177 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2029 "php2python.tab.c"
    break;

  case 107: /* expr: expr NEQ expr  */
#line 178 "php2python.y"
                    {printf("Se encontro un diferente que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2035 "php2python.tab.c"
    break;

  case 108: /* expr: ARRY OPRT parameters CPRT  */
#line 179 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2041 "php2python.tab.c"
    break;

  case 109: /* expr: OSQB parameters CSQB  */
#line 180 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2047 "php2python.tab.c"
    break;

  case 110: /* expr: OPRT expr CPRT  */
#line 181 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2053 "php2python.tab.c"
    break;

  case 111: /* expr: expr QUES expr CL expr  */
#line 182 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2059 "php2python.tab.c"
    break;

  case 112: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 183 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2065 "php2python.tab.c"
    break;

  case 113: /* functionCall: NAME OPRT arguments CPRT  */
#line 185 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2071 "php2python.tab.c"
    break;

  case 114: /* parameters: %empty  */
#line 187 "php2python.y"
           {(yyval.str)=NULL;}
#line 2077 "php2python.tab.c"
    break;

  case 115: /* parameters: expr  */
#line 188 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2083 "php2python.tab.c"
    break;

  case 116: /* parameters: parameters COMM expr  */
#line 189 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2089 "php2python.tab.c"
    break;

  case 117: /* arguments: %empty  */
#line 192 "php2python.y"
           {(yyval.str)="";}
#line 2095 "php2python.tab.c"
    break;

  case 119: /* argument: argument COMM argument  */
#line 196 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2101 "php2python.tab.c"
    break;

  case 120: /* argument: ID  */
#line 197 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2107 "php2python.tab.c"
    break;

  case 121: /* argument: ID EQ defaultValue  */
#line 198 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2113 "php2python.tab.c"
    break;

  case 123: /* defaultValue: NUM  */
#line 202 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2119 "php2python.tab.c"
    break;

  case 124: /* defaultValue: STR  */
#line 203 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2125 "php2python.tab.c"
    break;

  case 125: /* defaultValue: BOOL  */
#line 204 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2131 "php2python.tab.c"
    break;

  case 126: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 206 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2137 "php2python.tab.c"
    break;

  case 127: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 207 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2143 "php2python.tab.c"
    break;

  case 128: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 208 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2149 "php2python.tab.c"
    break;

  case 130: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 211 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2155 "php2python.tab.c"
    break;

  case 131: /* statementInForeach: declaration SC  */
#line 214 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2161 "php2python.tab.c"
    break;

  case 132: /* statementInForeach: echo SC  */
#line 215 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2167 "php2python.tab.c"
    break;

  case 133: /* statementInForeach: return SC  */
#line 216 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2173 "php2python.tab.c"
    break;

  case 134: /* statementInForeach: CMNT  */
#line 217 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2179 "php2python.tab.c"
    break;

  case 135: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 219 "php2python.y"
                                                                                {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2185 "php2python.tab.c"
    break;

  case 137: /* statementsInFor: statementsInFor statementInFor  */
#line 221 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2191 "php2python.tab.c"
    break;

  case 138: /* statementInFor: declaration SC  */
#line 224 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2197 "php2python.tab.c"
    break;

  case 139: /* statementInFor: echo SC  */
#line 225 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2203 "php2python.tab.c"
    break;

  case 140: /* statementInFor: return SC  */
#line 226 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2209 "php2python.tab.c"
    break;

  case 141: /* statementInFor: CMNT  */
#line 227 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2215 "php2python.tab.c"
    break;


#line 2219 "php2python.tab.c"

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

#line 229 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
