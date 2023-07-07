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
#define YYLAST   1170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

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
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   229,   231,   232,   233,   236,   237,   240,
     241,   242,   243,   246,   247,   248,   250,   251,   252,   254,
     255,   258,   259,   260,   261,   262,   265,   266,   268,   269,
     272,   273,   274,   275,   276
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
       1,  -313,    13,  -313,  -313,   387,  1030,  -313,  -313,   497,
    -313,   -37,  -313,  -313,   -27,   -14,   -11,    12,    16,    39,
      20,    28,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,  -313,    56,    59,
      75,  -313,  -313,  -313,    90,   576,  -313,  -313,  -313,   548,
     119,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,    74,    79,  1010,   296,    31,   497,   124,
     132,   497,    87,   296,   497,   138,  1010,  1010,  1084,  1084,
    1084,  1084,  1084,  1010,    41,   813,  1084,  1084,  1084,  1084,
    1084,  1084,  -313,  -313,  -313,  -313,  -313,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,  -313,
    -313,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,  -313,  1010,    93,  1010,  1010,  1010,
    1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,   111,
    -313,  -313,  -313,    97,   113,  -313,   141,   103,   296,    32,
     109,   133,   846,   296,   110,   879,  1046,   139,   497,  -313,
    -313,  1084,  1084,  1084,  1084,  1084,  1084,   165,   165,   165,
     165,  1084,  1084,  1084,   680,   165,   165,   165,  1084,  1084,
    1084,  1084,  1084,  1084,   165,   165,  -313,    72,  -313,   296,
     167,   296,   121,  -313,  -313,   497,   163,   125,   127,   140,
     497,  1010,   497,  -313,  -313,   126,   129,   161,    33,  -313,
    -313,   153,   155,   162,    -2,   164,   145,   446,  -313,   611,
    1084,   148,   191,   207,  -313,     6,  -313,  -313,  -313,   513,
     158,  -313,  -313,  -313,   181,   184,   189,  -313,  -313,  -313,
     190,   173,   646,  -313,  -313,   120,   548,  -313,   227,   177,
      65,  -313,  -313,  -313,   203,   205,   206,  -313,  -313,   210,
     497,    34,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,   212,   214,   226,  -313,  -313,   233,   235,   241,
     208,   912,   263,   224,   225,   744,   234,   128,  -313,  -313,
    -313,  -313,   945,  -313,  -313,   256,   257,   258,  -313,   264,
    -313,  -313,  -313,  -313,  -313,  -313,   243,   249,  -313,  -313,
     275,   277,   278,   280,  -313,   260,  -313,  -313,  -313,   497,
    -313,  -313,   746,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   276,   130,   978,  -313,  -313,   281,
     288,   293,  -313,   307,   295,   401,   480,   511,  -313,  -313,
     751,   159,  -313,  -313,  -313,   779,  -313,  -313,  -313,   298,
     301,   306,   312,  -313,  -313,  -313,  -313,   309,   318,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,   172,   784,   786,   230,
     320,  -313,  -313,  -313,  -313,  -313,   814,   246,   265,  -313,
    -313,  -313,  -313,   305,  -313
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,   105,   104,   103,     0,
     106,     0,    16,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,    10,    11,    14,     0,     0,   107,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,    31,   157,     0,   154,     0,
       0,     0,     0,   157,     0,     0,    91,    32,   108,   109,
     117,   119,   121,   155,     0,     0,   122,   148,   149,   150,
     151,   152,     6,     8,     9,    15,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    17,     0,    19,    20,    21,
      23,    22,    24,    25,    27,    26,    28,    29,    30,   160,
     164,   163,   165,     0,   158,   162,     0,     0,   157,     0,
       0,     0,     0,   157,     0,     0,     0,     0,     0,   141,
     142,   110,   111,   113,   112,   114,   116,   133,   135,   129,
     130,   123,   125,   127,     0,   136,   137,   134,   138,   139,
     124,   126,   128,   115,   131,   132,   145,     0,   153,     0,
       0,   157,     0,   140,   147,   154,     0,     0,     0,     0,
       0,   156,     0,   161,   159,     0,     0,     0,     0,    53,
      47,     0,     0,     0,    33,     0,     0,     0,    71,     0,
     143,     0,     0,     0,   146,     0,    49,    50,    51,     0,
       0,    52,    84,   102,     0,     0,     0,    96,    97,   100,
       0,     0,     0,    98,    99,     0,     0,   169,     0,     0,
      34,    48,    61,    54,     0,     0,     0,    59,    35,     0,
       0,     0,    92,    94,    95,   101,   144,    93,    80,    81,
      82,    70,     0,     0,     0,    76,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    60,     0,    90,    83,     0,     0,     0,    85,     0,
      73,    74,    75,    78,    79,    77,     0,     0,   175,   166,
       0,     0,     0,     0,   170,     0,   169,    54,    36,     0,
      37,    55,     0,    86,    87,    88,    89,   178,   178,   171,
     172,   173,   174,   169,     0,     0,     0,    69,    62,     0,
       0,     0,    67,     0,     0,     0,     0,     0,   168,    38,
       0,     0,    64,    65,    66,     0,    68,   184,   176,     0,
       0,     0,     0,   179,   177,   167,    62,     0,     0,    63,
      54,    39,   180,   181,   182,   183,     0,     0,     0,     0,
       0,    54,    40,    54,    41,    43,     0,     0,     0,    54,
      42,    44,    45,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,  -313,    -5,     2,     9,     0,  -313,
     137,  -309,  -225,    -9,  -312,   146,  -313,  -313,  -313,  -313,
     147,  -313,  -313,    36,  -313,    -3,  -313,   -67,   -70,   176,
     179,   150,  -227,  -313,   151,    44,  -313
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    37,   254,   255,   256,   257,   225,
     214,   287,   321,   351,   369,    42,   245,   276,   277,   278,
      43,   261,   298,   259,   241,    83,    46,    84,   143,   144,
     145,    47,   282,   314,    48,   345,   363
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,   149,    45,   154,   258,    41,    65,    39,   335,   156,
     343,     1,     9,     4,    40,   209,    66,   229,   230,    76,
      77,    78,    79,    80,    81,    82,    67,    85,    86,    87,
      88,    89,    90,    91,   146,    22,    23,   156,   367,    68,
       9,    44,    69,   293,   124,   147,   125,    72,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     318,   379,   250,    22,    23,    70,   158,   158,   152,    71,
     157,   155,   387,    74,   388,   158,   140,   141,   192,   142,
     393,    75,   148,   197,   285,   286,   193,   224,    92,   334,
     294,    93,    73,   159,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   347,    94,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   206,    95,   156,   126,    50,     9,   150,   208,   268,
     371,   156,    73,   156,     9,   151,     9,   252,    18,   252,
     153,   156,   187,   269,   270,   186,    18,   189,    18,    22,
      23,   188,   382,   384,   190,   201,   191,    22,    23,    22,
      23,   390,   156,   194,   198,     9,   156,   195,   337,     9,
     205,   200,   209,   207,   223,   156,   271,    18,     9,   216,
     221,   337,   217,   222,   320,   226,   349,   227,    22,    23,
      18,   211,    22,    23,   228,   218,   231,   219,   212,   220,
     232,    22,    23,   247,   248,   213,    -1,    -1,    -1,    -1,
     249,   260,   234,   262,   242,   368,   263,   237,   210,   235,
     211,   264,   265,    -1,    -1,    -1,   236,   212,   380,   266,
     283,   284,   215,   156,   213,   288,     9,   289,   290,   252,
     272,   280,   291,   281,   300,   275,   301,   273,    18,   156,
      -1,    -1,     9,   240,   274,   252,   295,   292,   302,    22,
      23,   215,   306,   296,    18,   303,   156,   304,   156,     9,
     297,     9,   308,   305,   252,    22,    23,   310,   315,   156,
     316,   279,     9,    18,   311,   308,   385,   319,   323,   324,
     325,   312,    22,    23,    22,    23,   326,   299,   327,   139,
     140,   141,   391,   142,   328,    22,    23,   329,   156,   330,
     331,     9,   332,   352,   252,   333,   336,   339,   313,   309,
     353,   392,   342,    18,   340,   354,   355,   356,   377,   310,
     372,   341,   348,   373,    22,    23,   311,   378,   374,   386,
     359,   359,   310,   312,   375,   339,   339,   360,   360,   311,
     342,   342,   340,   340,   361,   361,   312,   376,   344,   341,
     341,   394,   251,   238,   239,   204,   203,   243,   244,     0,
     313,   339,   346,     0,     0,     0,   342,     0,   340,     0,
       0,   362,   362,   313,     0,   341,   344,   344,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,    17,   156,    18,     0,     9,     0,     0,
     357,     0,   344,    19,    20,    21,    22,    23,     0,     0,
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      22,    23,     0,     0,    26,    27,     0,    28,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,   233,     0,   358,    14,     0,
      15,    16,    17,     0,    18,     0,    31,    32,    33,    34,
      35,    36,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,    25,   156,     0,     0,     9,     0,     0,   357,
       0,     0,     0,    26,    27,     0,    28,    29,     0,    30,
      63,     7,     8,     0,    10,    11,     0,     0,     0,    22,
      23,    15,    16,    17,   156,     0,   156,     9,     0,     9,
     308,     0,   252,    64,     0,    31,    32,    33,    34,    35,
      36,    18,    24,    25,     0,     0,   364,     0,     0,     0,
      22,    23,    22,    23,    26,    27,     0,    28,    29,     0,
      30,     6,     7,     8,     0,    10,    11,     0,     0,     0,
       0,     0,    15,    16,    17,     0,     0,   365,   253,     0,
       0,     0,     0,     0,    64,     0,    31,    32,    33,    34,
      35,    36,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,     0,    28,    29,
       0,    30,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,    31,    32,    33,
      34,    35,    36,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   246,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   122,   123,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   267,     0,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   122,   123,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   202,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,   122,   123,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   156,     0,   156,
       9,     0,     9,   252,   156,   337,     0,     9,     0,     0,
     337,     0,    18,     0,    18,   122,   123,     0,     0,    18,
       0,     0,     0,    22,    23,    22,    23,     0,     0,     0,
      22,    23,   156,     0,     0,     9,     0,   156,   252,   156,
       9,     0,     9,   252,     0,   252,     0,    18,     0,   317,
       0,   338,    18,     0,    18,     0,   366,     0,    22,    23,
       0,     0,     0,    22,    23,    22,    23,   156,     0,     0,
       9,     0,     0,   252,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,   370,     0,     0,     0,     0,   381,
       0,   383,     0,    22,    23,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,   160,     0,   389,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,   122,   123,
     196,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,   122,   123,   199,     0,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,   122,   123,   307,     0,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,   122,   123,   322,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
     122,   123,   350,     0,     0,   112,   113,   114,   115,   116,
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
       5,    68,     5,    73,   229,     5,     9,     5,   317,     3,
     322,    10,     6,     0,     5,     9,    53,    19,    20,    22,
      23,    24,    25,    26,    27,    28,    53,    30,    31,    32,
      33,    34,    35,    36,     3,    29,    30,     3,   350,    53,
       6,     5,    53,     9,    49,    14,    49,     8,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     285,   370,    56,    29,    30,    53,    34,    34,    71,    53,
      75,    74,   381,    53,   383,    34,     4,     5,   148,     7,
     389,    53,    51,   153,    19,    20,    54,    54,    32,   316,
      56,    32,    53,    52,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   333,    32,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   191,    32,     3,     5,    51,     6,     3,   195,     9,
     355,     3,    53,     3,     6,     3,     6,     9,    18,     9,
      53,     3,    31,    23,    24,    52,    18,    34,    18,    29,
      30,    54,   377,   378,    13,   158,    53,    29,    30,    29,
      30,   386,     3,    54,    54,     6,     3,    34,     9,     6,
       3,    32,     9,    52,    13,     3,    56,    18,     6,    54,
      54,     9,    55,    54,    56,    32,    56,    32,    29,    30,
      18,   196,    29,    30,    32,    55,    32,   200,   196,   202,
      55,    29,    30,    55,    13,   196,    41,    42,    43,    44,
       3,    53,   217,    32,   217,    56,    32,   217,    55,   217,
     225,    32,    32,    58,    59,    60,   217,   225,    56,    56,
       3,    54,   196,     3,   225,    32,     6,    32,    32,     9,
     245,   246,    32,   246,    32,   245,    32,   245,    18,     3,
      85,    86,     6,   217,   245,     9,   261,   260,    32,    29,
      30,   225,    54,   261,    18,    32,     3,    32,     3,     6,
     261,     6,     9,    32,     9,    29,    30,   282,    54,     3,
      55,   245,     6,    18,   282,     9,    56,    53,    32,    32,
      32,   282,    29,    30,    29,    30,    32,   261,    55,     3,
       4,     5,    56,     7,    55,    29,    30,    32,     3,    32,
      32,     6,    32,    32,     9,    55,   319,   322,   282,    56,
      32,    56,   322,    18,   322,    32,    19,    32,    19,   334,
      32,   322,    56,    32,    29,    30,   334,    19,    32,    19,
     345,   346,   347,   334,    32,   350,   351,   345,   346,   347,
     350,   351,   350,   351,   345,   346,   347,   366,   322,   350,
     351,    56,   225,   217,   217,   189,   187,   217,   217,    -1,
     334,   376,   328,    -1,    -1,    -1,   376,    -1,   376,    -1,
      -1,   345,   346,   347,    -1,   376,   350,   351,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    14,    15,    16,     3,    18,    -1,     6,    -1,    -1,
       9,    -1,   376,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    47,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    56,    12,    -1,
      14,    15,    16,    -1,    18,    -1,    79,    80,    81,    82,
      83,    84,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    -1,    53,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    29,
      30,    14,    15,    16,     3,    -1,     3,     6,    -1,     6,
       9,    -1,     9,    26,    -1,    79,    80,    81,    82,    83,
      84,    18,    35,    36,    -1,    -1,    56,    -1,    -1,    -1,
      29,    30,    29,    30,    47,    48,    -1,    50,    51,    -1,
      53,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    -1,    -1,    56,    55,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    79,    80,    81,    82,
      83,    84,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    79,    80,    81,
      82,    83,    84,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    85,    86,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    85,    86,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    85,    86,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     3,    -1,     3,
       6,    -1,     6,     9,     3,     9,    -1,     6,    -1,    -1,
       9,    -1,    18,    -1,    18,    85,    86,    -1,    -1,    18,
      -1,    -1,    -1,    29,    30,    29,    30,    -1,    -1,    -1,
      29,    30,     3,    -1,    -1,     6,    -1,     3,     9,     3,
       6,    -1,     6,     9,    -1,     9,    -1,    18,    -1,    55,
      -1,    55,    18,    -1,    18,    -1,    55,    -1,    29,    30,
      -1,    -1,    -1,    29,    30,    29,    30,     3,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    55,    -1,    -1,    -1,    -1,    55,
      -1,    55,    -1,    29,    30,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    55,
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
       7,     8,     9,    11,    12,    14,    15,    16,    18,    26,
      27,    28,    29,    30,    35,    36,    47,    48,    50,    51,
      53,    79,    80,    81,    82,    83,    84,    91,    92,    93,
      94,    95,   102,   107,   110,   112,   113,   118,   121,    31,
      51,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     3,    26,   112,    53,    53,    53,    53,
      53,    53,     8,    53,    53,    53,   112,   112,   112,   112,
     112,   112,   112,   112,   114,   112,   112,   112,   112,   112,
     112,   112,    32,    32,    32,    32,    32,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    85,    86,    92,   112,     5,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,     3,
       4,     5,     7,   115,   116,   117,     3,    14,    51,   114,
       3,     3,   112,    53,   115,   112,     3,    92,    34,    52,
      54,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,    52,    31,    54,    34,
      13,    53,   115,    54,    54,    34,    54,   115,    54,    54,
      32,   112,    33,   117,   116,     3,   115,    52,   114,     9,
      55,    92,    93,    94,    97,   110,    54,    55,    55,   112,
     112,    54,    54,    13,    54,    96,    32,    32,    32,    19,
      20,    32,    55,     9,    92,    93,    94,    95,   102,   107,
     110,   111,   112,   118,   121,   103,    32,    55,    13,     3,
      56,    97,     9,    55,    92,    93,    94,    95,    99,   110,
      53,   108,    32,    32,    32,    32,    56,    32,     9,    23,
      24,    56,    92,    93,    94,    95,   104,   105,   106,   110,
      92,   112,   119,     3,    54,    19,    20,    98,    32,    32,
      32,    32,   112,     9,    56,    92,    93,    94,   109,   110,
      32,    32,    32,    32,    32,    32,    54,    54,     9,    56,
      92,    93,    94,   110,   120,    54,    55,    55,    99,    53,
      56,    99,    54,    32,    32,    32,    32,    55,    55,    32,
      32,    32,    32,    55,   119,    98,   112,     9,    55,    92,
      93,    94,    95,   101,   110,   122,   122,   119,    56,    56,
      54,   100,    32,    32,    32,    19,    32,     9,    56,    92,
      93,    94,   110,   123,    56,    56,    55,   101,    56,   101,
      55,    99,    32,    32,    32,    32,   100,    19,    19,    98,
      56,    55,    99,    55,    99,    56,    19,    98,    98,    55,
      99,    56,    56,    98,    56
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
       4,     3,     3,     5,     7,     4,     6,     4,     2,     2,
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
#line 1618 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 49 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1624 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 55 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1630 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 56 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1636 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 57 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1642 "php2python.tab.c"
    break;

  case 9: /* statement: print SC  */
#line 58 "php2python.y"
               {printf("Se reconocio un print\n"); write_echo((yyvsp[-1].str));}
#line 1648 "php2python.tab.c"
    break;

  case 10: /* statement: conditional  */
#line 59 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1654 "php2python.tab.c"
    break;

  case 11: /* statement: while  */
#line 60 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1660 "php2python.tab.c"
    break;

  case 12: /* statement: foreach  */
#line 61 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1666 "php2python.tab.c"
    break;

  case 13: /* statement: for  */
#line 62 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1672 "php2python.tab.c"
    break;

  case 14: /* statement: functionDefinition  */
#line 63 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1678 "php2python.tab.c"
    break;

  case 15: /* statement: return SC  */
#line 64 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1684 "php2python.tab.c"
    break;

  case 16: /* statement: CMNT  */
#line 65 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1690 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ expr  */
#line 67 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str)); put_symbol(format_variable((yyvsp[-2].str)), VAR);}
#line 1696 "php2python.tab.c"
    break;

  case 18: /* declaration: ID EQ declaration  */
#line 68 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1702 "php2python.tab.c"
    break;

  case 19: /* declaration: ID PLEQ expr  */
#line 69 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1708 "php2python.tab.c"
    break;

  case 20: /* declaration: ID MNEQ expr  */
#line 70 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1714 "php2python.tab.c"
    break;

  case 21: /* declaration: ID MUEQ expr  */
#line 71 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1720 "php2python.tab.c"
    break;

  case 22: /* declaration: ID DIEQ expr  */
#line 72 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1726 "php2python.tab.c"
    break;

  case 23: /* declaration: ID EXEQ expr  */
#line 73 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1732 "php2python.tab.c"
    break;

  case 24: /* declaration: ID MOEQ expr  */
#line 74 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1738 "php2python.tab.c"
    break;

  case 25: /* declaration: ID COEQ expr  */
#line 75 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1744 "php2python.tab.c"
    break;

  case 26: /* declaration: ID ADEQ expr  */
#line 76 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " &= ", (yyvsp[0].str));}
#line 1750 "php2python.tab.c"
    break;

  case 27: /* declaration: ID OREQ expr  */
#line 77 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " |= ", (yyvsp[0].str));}
#line 1756 "php2python.tab.c"
    break;

  case 28: /* declaration: ID XOEQ expr  */
#line 78 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " ^= ", (yyvsp[0].str));}
#line 1762 "php2python.tab.c"
    break;

  case 29: /* declaration: ID LLEQ expr  */
#line 79 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 1768 "php2python.tab.c"
    break;

  case 30: /* declaration: ID GGEQ expr  */
#line 80 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 1774 "php2python.tab.c"
    break;

  case 31: /* echo: ECH expr  */
#line 82 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1780 "php2python.tab.c"
    break;

  case 32: /* print: PRNT expr  */
#line 83 "php2python.y"
                 {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1786 "php2python.tab.c"
    break;

  case 33: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 85 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1792 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 86 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1798 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 87 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1804 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 88 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1810 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 89 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1816 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 90 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1822 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 91 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1828 "php2python.tab.c"
    break;

  case 40: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 92 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1834 "php2python.tab.c"
    break;

  case 41: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 93 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1840 "php2python.tab.c"
    break;

  case 42: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 94 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1846 "php2python.tab.c"
    break;

  case 43: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 95 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1852 "php2python.tab.c"
    break;

  case 44: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 96 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1858 "php2python.tab.c"
    break;

  case 45: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 97 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1864 "php2python.tab.c"
    break;

  case 46: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 98 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1870 "php2python.tab.c"
    break;

  case 48: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 102 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1876 "php2python.tab.c"
    break;

  case 49: /* statementinifblock: declaration SC  */
#line 105 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1882 "php2python.tab.c"
    break;

  case 50: /* statementinifblock: echo SC  */
#line 106 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1888 "php2python.tab.c"
    break;

  case 51: /* statementinifblock: print SC  */
#line 107 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1894 "php2python.tab.c"
    break;

  case 52: /* statementinifblock: return SC  */
#line 108 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1900 "php2python.tab.c"
    break;

  case 53: /* statementinifblock: CMNT  */
#line 109 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1906 "php2python.tab.c"
    break;

  case 55: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 113 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1912 "php2python.tab.c"
    break;

  case 56: /* statementinelseblock: declaration SC  */
#line 116 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1918 "php2python.tab.c"
    break;

  case 57: /* statementinelseblock: echo SC  */
#line 117 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1924 "php2python.tab.c"
    break;

  case 58: /* statementinelseblock: print SC  */
#line 118 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1930 "php2python.tab.c"
    break;

  case 59: /* statementinelseblock: conditional  */
#line 119 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1936 "php2python.tab.c"
    break;

  case 60: /* statementinelseblock: return SC  */
#line 120 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1942 "php2python.tab.c"
    break;

  case 61: /* statementinelseblock: CMNT  */
#line 121 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1948 "php2python.tab.c"
    break;

  case 63: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 125 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1954 "php2python.tab.c"
    break;

  case 64: /* statementinelifblock: declaration SC  */
#line 128 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1960 "php2python.tab.c"
    break;

  case 65: /* statementinelifblock: echo SC  */
#line 129 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1966 "php2python.tab.c"
    break;

  case 66: /* statementinelifblock: print SC  */
#line 130 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1972 "php2python.tab.c"
    break;

  case 67: /* statementinelifblock: conditional  */
#line 131 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1978 "php2python.tab.c"
    break;

  case 68: /* statementinelifblock: return SC  */
#line 132 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1984 "php2python.tab.c"
    break;

  case 69: /* statementinelifblock: CMNT  */
#line 133 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1990 "php2python.tab.c"
    break;

  case 70: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 135 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1996 "php2python.tab.c"
    break;

  case 72: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 138 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 2002 "php2python.tab.c"
    break;

  case 73: /* statementInWhileBlock: declaration SC  */
#line 141 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2008 "php2python.tab.c"
    break;

  case 74: /* statementInWhileBlock: echo SC  */
#line 142 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2014 "php2python.tab.c"
    break;

  case 75: /* statementInWhileBlock: print SC  */
#line 143 "php2python.y"
               {printf("Se encontro un echo dentro de un if\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2020 "php2python.tab.c"
    break;

  case 76: /* statementInWhileBlock: conditional  */
#line 144 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 2026 "php2python.tab.c"
    break;

  case 77: /* statementInWhileBlock: return SC  */
#line 145 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 2032 "php2python.tab.c"
    break;

  case 78: /* statementInWhileBlock: break SC  */
#line 146 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2038 "php2python.tab.c"
    break;

  case 79: /* statementInWhileBlock: continue SC  */
#line 147 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2044 "php2python.tab.c"
    break;

  case 80: /* statementInWhileBlock: CMNT  */
#line 148 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2050 "php2python.tab.c"
    break;

  case 81: /* break: BRK  */
#line 150 "php2python.y"
           {(yyval.str)="break";}
#line 2056 "php2python.tab.c"
    break;

  case 82: /* continue: CONT  */
#line 151 "php2python.y"
               {(yyval.str)="continue";}
#line 2062 "php2python.tab.c"
    break;

  case 83: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 152 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 2068 "php2python.tab.c"
    break;

  case 85: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 155 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 2074 "php2python.tab.c"
    break;

  case 86: /* statementInFunctionBlock: declaration SC  */
#line 158 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2080 "php2python.tab.c"
    break;

  case 87: /* statementInFunctionBlock: echo SC  */
#line 159 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2086 "php2python.tab.c"
    break;

  case 88: /* statementInFunctionBlock: print SC  */
#line 160 "php2python.y"
               {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2092 "php2python.tab.c"
    break;

  case 89: /* statementInFunctionBlock: return SC  */
#line 161 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2098 "php2python.tab.c"
    break;

  case 90: /* statementInFunctionBlock: CMNT  */
#line 162 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2104 "php2python.tab.c"
    break;

  case 91: /* return: RTN expr  */
#line 164 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 2110 "php2python.tab.c"
    break;

  case 92: /* anonymousFunctionStatement: declaration SC  */
#line 166 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 2116 "php2python.tab.c"
    break;

  case 93: /* anonymousFunctionStatement: expr SC  */
#line 167 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 2122 "php2python.tab.c"
    break;

  case 94: /* anonymousFunctionStatement: echo SC  */
#line 168 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 2128 "php2python.tab.c"
    break;

  case 95: /* anonymousFunctionStatement: print SC  */
#line 169 "php2python.y"
               {printf("Se reconocio un print\n"); }
#line 2134 "php2python.tab.c"
    break;

  case 96: /* anonymousFunctionStatement: conditional  */
#line 170 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 2140 "php2python.tab.c"
    break;

  case 97: /* anonymousFunctionStatement: while  */
#line 171 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 2146 "php2python.tab.c"
    break;

  case 98: /* anonymousFunctionStatement: foreach  */
#line 172 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 2152 "php2python.tab.c"
    break;

  case 99: /* anonymousFunctionStatement: for  */
#line 173 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 2158 "php2python.tab.c"
    break;

  case 100: /* anonymousFunctionStatement: functionDefinition  */
#line 174 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 2164 "php2python.tab.c"
    break;

  case 101: /* anonymousFunctionStatement: return SC  */
#line 175 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 2170 "php2python.tab.c"
    break;

  case 102: /* anonymousFunctionStatement: CMNT  */
#line 176 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 2176 "php2python.tab.c"
    break;

  case 103: /* expr: NUM  */
#line 178 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2182 "php2python.tab.c"
    break;

  case 104: /* expr: STR  */
#line 179 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2188 "php2python.tab.c"
    break;

  case 105: /* expr: ID  */
#line 180 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2194 "php2python.tab.c"
    break;

  case 106: /* expr: BOOL  */
#line 181 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2200 "php2python.tab.c"
    break;

  case 107: /* expr: functionCall  */
#line 182 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2206 "php2python.tab.c"
    break;

  case 108: /* expr: PLUS expr  */
#line 183 "php2python.y"
                {printf("Se encontro una expresion positiva\n"); (yyval.str)=format_operation("", "+", (yyvsp[0].str));}
#line 2212 "php2python.tab.c"
    break;

  case 109: /* expr: MINS expr  */
#line 184 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", "-", (yyvsp[0].str));}
#line 2218 "php2python.tab.c"
    break;

  case 110: /* expr: expr PLUS expr  */
#line 185 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2224 "php2python.tab.c"
    break;

  case 111: /* expr: expr MINS expr  */
#line 186 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2230 "php2python.tab.c"
    break;

  case 112: /* expr: expr MULT expr  */
#line 187 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2236 "php2python.tab.c"
    break;

  case 113: /* expr: expr DIV expr  */
#line 188 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2242 "php2python.tab.c"
    break;

  case 114: /* expr: expr MOD expr  */
#line 189 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2248 "php2python.tab.c"
    break;

  case 115: /* expr: expr EXPO expr  */
#line 190 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2254 "php2python.tab.c"
    break;

  case 116: /* expr: expr CCTN expr  */
#line 191 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2260 "php2python.tab.c"
    break;

  case 117: /* expr: PPL expr  */
#line 192 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2266 "php2python.tab.c"
    break;

  case 118: /* expr: expr PPL  */
#line 193 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2272 "php2python.tab.c"
    break;

  case 119: /* expr: MMN expr  */
#line 194 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2278 "php2python.tab.c"
    break;

  case 120: /* expr: expr MMN  */
#line 195 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2284 "php2python.tab.c"
    break;

  case 121: /* expr: NOT expr  */
#line 196 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", "not ", (yyvsp[0].str));}
#line 2290 "php2python.tab.c"
    break;

  case 122: /* expr: BNOT expr  */
#line 197 "php2python.y"
                {printf("Se encontro una negacion bit a bit\n"); (yyval.str)=format_operation("", "~", (yyvsp[0].str));}
#line 2296 "php2python.tab.c"
    break;

  case 123: /* expr: expr AND expr  */
#line 198 "php2python.y"
                    {printf("Se encontro una conjuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2302 "php2python.tab.c"
    break;

  case 124: /* expr: expr BAND expr  */
#line 199 "php2python.y"
                     {printf("Se encontro una conjuncion bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " & ", (yyvsp[0].str));}
#line 2308 "php2python.tab.c"
    break;

  case 125: /* expr: expr OR expr  */
#line 200 "php2python.y"
                   {printf("Se encontro una disyuncion logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2314 "php2python.tab.c"
    break;

  case 126: /* expr: expr BOR expr  */
#line 201 "php2python.y"
                    {printf("Se encontro una disyuncion bit a bit"); (yyval.str)=format_operation((yyvsp[-2].str), " | ", (yyvsp[0].str));}
#line 2320 "php2python.tab.c"
    break;

  case 127: /* expr: expr XOR expr  */
#line 202 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva logica\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2326 "php2python.tab.c"
    break;

  case 128: /* expr: expr BXOR expr  */
#line 203 "php2python.y"
                     {printf("Se encontro una disyuncion exclusiva bit a bit\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2332 "php2python.tab.c"
    break;

  case 129: /* expr: expr GT expr  */
#line 204 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2338 "php2python.tab.c"
    break;

  case 130: /* expr: expr LT expr  */
#line 205 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2344 "php2python.tab.c"
    break;

  case 131: /* expr: expr GTE expr  */
#line 206 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2350 "php2python.tab.c"
    break;

  case 132: /* expr: expr LTE expr  */
#line 207 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2356 "php2python.tab.c"
    break;

  case 133: /* expr: expr EEQ expr  */
#line 208 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2362 "php2python.tab.c"
    break;

  case 134: /* expr: expr EEEQ expr  */
#line 209 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2368 "php2python.tab.c"
    break;

  case 135: /* expr: expr NEQ expr  */
#line 210 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2374 "php2python.tab.c"
    break;

  case 136: /* expr: expr NOEQ expr  */
#line 211 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2380 "php2python.tab.c"
    break;

  case 137: /* expr: expr NEEE expr  */
#line 212 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2386 "php2python.tab.c"
    break;

  case 138: /* expr: expr LTLT expr  */
#line 213 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la izquierda \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <<= ", (yyvsp[0].str));}
#line 2392 "php2python.tab.c"
    break;

  case 139: /* expr: expr GTGT expr  */
#line 214 "php2python.y"
                     {printf("Se encontro un desplazamiento de bits a la derecha \n "); (yyval.str)=format_operation((yyvsp[-2].str), " >>= ", (yyvsp[0].str));}
#line 2398 "php2python.tab.c"
    break;

  case 140: /* expr: ARRY OPRT parameters CPRT  */
#line 215 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2404 "php2python.tab.c"
    break;

  case 141: /* expr: OSQB parameters CSQB  */
#line 216 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2410 "php2python.tab.c"
    break;

  case 142: /* expr: OPRT expr CPRT  */
#line 217 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2416 "php2python.tab.c"
    break;

  case 143: /* expr: expr QUES expr CL expr  */
#line 218 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2422 "php2python.tab.c"
    break;

  case 144: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 219 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2428 "php2python.tab.c"
    break;

  case 145: /* expr: ID OSQB NUM CSQB  */
#line 220 "php2python.y"
                       {printf("Se encontro un acceso a un elemento de un array\n"); (yyval.str)=format_array_access((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2434 "php2python.tab.c"
    break;

  case 146: /* expr: ARPS OPRT ID COMM parameters CPRT  */
#line 221 "php2python.y"
                                        {printf("Se encontro una llamada a array_push\n"); (yyval.str)=format_array_push((yyvsp[-3].str));}
#line 2440 "php2python.tab.c"
    break;

  case 147: /* expr: ARPO OPRT ID CPRT  */
#line 222 "php2python.y"
                        {printf("Se encontro una llamada a array_pop\n"); (yyval.str)=format_array_pop((yyvsp[-1].str));}
#line 2446 "php2python.tab.c"
    break;

  case 148: /* expr: ICAS expr  */
#line 223 "php2python.y"
                {printf("Se encontro una conversion a tipo entero\n"); (yyval.str)=format_int_cast((yyvsp[0].str));}
#line 2452 "php2python.tab.c"
    break;

  case 149: /* expr: FCAS expr  */
#line 224 "php2python.y"
                {printf("Se encontro una conversion a tipo flotante\n"); (yyval.str)=format_float_cast((yyvsp[0].str));}
#line 2458 "php2python.tab.c"
    break;

  case 150: /* expr: BCAS expr  */
#line 225 "php2python.y"
                {printf("Se encontro una conversion a tipo booleano\n"); (yyval.str)=format_bool_cast((yyvsp[0].str));}
#line 2464 "php2python.tab.c"
    break;

  case 151: /* expr: SCAS expr  */
#line 226 "php2python.y"
                {printf("Se encontro una conversion a tipo cadena\n"); (yyval.str)=format_string_cast((yyvsp[0].str));}
#line 2470 "php2python.tab.c"
    break;

  case 152: /* expr: ACAS expr  */
#line 227 "php2python.y"
                {printf("Se encontro una conversion a tipo arreglo\n"); (yyval.str)=format_array_cast((yyvsp[0].str));}
#line 2476 "php2python.tab.c"
    break;

  case 153: /* functionCall: NAME OPRT arguments CPRT  */
#line 229 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2482 "php2python.tab.c"
    break;

  case 154: /* parameters: %empty  */
#line 231 "php2python.y"
           {(yyval.str)=NULL;}
#line 2488 "php2python.tab.c"
    break;

  case 155: /* parameters: expr  */
#line 232 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2494 "php2python.tab.c"
    break;

  case 156: /* parameters: parameters COMM expr  */
#line 233 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2500 "php2python.tab.c"
    break;

  case 157: /* arguments: %empty  */
#line 236 "php2python.y"
           {(yyval.str)="";}
#line 2506 "php2python.tab.c"
    break;

  case 159: /* argument: argument COMM argument  */
#line 240 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2512 "php2python.tab.c"
    break;

  case 160: /* argument: ID  */
#line 241 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2518 "php2python.tab.c"
    break;

  case 161: /* argument: ID EQ defaultValue  */
#line 242 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2524 "php2python.tab.c"
    break;

  case 163: /* defaultValue: NUM  */
#line 246 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2530 "php2python.tab.c"
    break;

  case 164: /* defaultValue: STR  */
#line 247 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2536 "php2python.tab.c"
    break;

  case 165: /* defaultValue: BOOL  */
#line 248 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2542 "php2python.tab.c"
    break;

  case 166: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 250 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2548 "php2python.tab.c"
    break;

  case 167: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 251 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2554 "php2python.tab.c"
    break;

  case 168: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 252 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2560 "php2python.tab.c"
    break;

  case 170: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 255 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2566 "php2python.tab.c"
    break;

  case 171: /* statementInForeach: declaration SC  */
#line 258 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2572 "php2python.tab.c"
    break;

  case 172: /* statementInForeach: echo SC  */
#line 259 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2578 "php2python.tab.c"
    break;

  case 173: /* statementInForeach: print SC  */
#line 260 "php2python.y"
               {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2584 "php2python.tab.c"
    break;

  case 174: /* statementInForeach: return SC  */
#line 261 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2590 "php2python.tab.c"
    break;

  case 175: /* statementInForeach: CMNT  */
#line 262 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2596 "php2python.tab.c"
    break;

  case 176: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 265 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2602 "php2python.tab.c"
    break;

  case 177: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 266 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2608 "php2python.tab.c"
    break;

  case 179: /* statementsInFor: statementsInFor statementInFor  */
#line 269 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2614 "php2python.tab.c"
    break;

  case 180: /* statementInFor: declaration SC  */
#line 272 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2620 "php2python.tab.c"
    break;

  case 181: /* statementInFor: echo SC  */
#line 273 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2626 "php2python.tab.c"
    break;

  case 182: /* statementInFor: print SC  */
#line 274 "php2python.y"
               {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2632 "php2python.tab.c"
    break;

  case 183: /* statementInFor: return SC  */
#line 275 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2638 "php2python.tab.c"
    break;

  case 184: /* statementInFor: CMNT  */
#line 276 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2644 "php2python.tab.c"
    break;


#line 2648 "php2python.tab.c"

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

#line 278 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
