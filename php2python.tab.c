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
  YYSYMBOL_EXPO = 61,                      /* EXPO  */
  YYSYMBOL_PLEQ = 62,                      /* PLEQ  */
  YYSYMBOL_MNEQ = 63,                      /* MNEQ  */
  YYSYMBOL_MUEQ = 64,                      /* MUEQ  */
  YYSYMBOL_EXEQ = 65,                      /* EXEQ  */
  YYSYMBOL_DIEQ = 66,                      /* DIEQ  */
  YYSYMBOL_MOEQ = 67,                      /* MOEQ  */
  YYSYMBOL_COEQ = 68,                      /* COEQ  */
  YYSYMBOL_GTE = 69,                       /* GTE  */
  YYSYMBOL_LTE = 70,                       /* LTE  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_73_1 = 73,                      /* $@1  */
  YYSYMBOL_statements = 74,                /* statements  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_declaration = 76,               /* declaration  */
  YYSYMBOL_echo = 77,                      /* echo  */
  YYSYMBOL_conditional = 78,               /* conditional  */
  YYSYMBOL_statementsinifblock = 79,       /* statementsinifblock  */
  YYSYMBOL_statementinifblock = 80,        /* statementinifblock  */
  YYSYMBOL_statementsinelseblock = 81,     /* statementsinelseblock  */
  YYSYMBOL_statementinelseblock = 82,      /* statementinelseblock  */
  YYSYMBOL_statementsinelifblock = 83,     /* statementsinelifblock  */
  YYSYMBOL_statementinelifblock = 84,      /* statementinelifblock  */
  YYSYMBOL_while = 85,                     /* while  */
  YYSYMBOL_statementsInWhileBlock = 86,    /* statementsInWhileBlock  */
  YYSYMBOL_statementInWhileBlock = 87,     /* statementInWhileBlock  */
  YYSYMBOL_break = 88,                     /* break  */
  YYSYMBOL_continue = 89,                  /* continue  */
  YYSYMBOL_functionDefinition = 90,        /* functionDefinition  */
  YYSYMBOL_statementsInFunctionBlock = 91, /* statementsInFunctionBlock  */
  YYSYMBOL_statementInFunctionBlock = 92,  /* statementInFunctionBlock  */
  YYSYMBOL_return = 93,                    /* return  */
  YYSYMBOL_anonymousFunctionStatement = 94, /* anonymousFunctionStatement  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_functionCall = 96,              /* functionCall  */
  YYSYMBOL_parameters = 97,                /* parameters  */
  YYSYMBOL_arguments = 98,                 /* arguments  */
  YYSYMBOL_argument = 99,                  /* argument  */
  YYSYMBOL_defaultValue = 100,             /* defaultValue  */
  YYSYMBOL_foreach = 101,                  /* foreach  */
  YYSYMBOL_statementsInForeach = 102,      /* statementsInForeach  */
  YYSYMBOL_statementInForeach = 103,       /* statementInForeach  */
  YYSYMBOL_for = 104,                      /* for  */
  YYSYMBOL_statementsInFor = 105,          /* statementsInFor  */
  YYSYMBOL_statementInFor = 106            /* statementInFor  */
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
#define YYLAST   977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    45,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    72,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      90,    91,    94,    95,    96,    97,   100,   101,   104,   105,
     106,   107,   108,   111,   112,   115,   116,   117,   118,   119,
     121,   123,   124,   127,   128,   129,   130,   131,   132,   133,
     135,   136,   137,   139,   140,   143,   144,   145,   146,   148,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   197,   199,   200,   201,   204,
     205,   208,   209,   210,   211,   214,   215,   216,   218,   219,
     220,   222,   223,   226,   227,   228,   229,   232,   233,   235,
     236,   239,   240,   241,   242
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
  "CPRT", "OBRC", "CBRC", "QUES", "NOEQ", "NEEE", "EEEQ", "EXPO", "PLEQ",
  "MNEQ", "MUEQ", "EXEQ", "DIEQ", "MOEQ", "COEQ", "GTE", "LTE", "$accept",
  "program", "$@1", "statements", "statement", "declaration", "echo",
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

#define YYPACT_NINF (-257)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -257,     4,  -257,  -257,   407,   450,  -257,  -257,   442,
    -257,   -35,  -257,  -257,   -21,   -19,   -11,    15,    -1,    11,
     442,   442,   442,   442,   442,   442,   442,  -257,    26,    31,
    -257,  -257,  -257,    40,   513,  -257,  -257,  -257,   493,   442,
     442,   442,   442,   442,   442,   442,  -257,    14,   875,    66,
       8,   442,   442,    34,    66,   442,    98,   875,   899,   899,
     899,   899,   875,   -31,   659,  -257,  -257,  -257,  -257,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,  -257,  -257,   442,   442,   442,   442,   442,   442,   442,
     442,  -257,   875,   875,   875,   875,   875,   875,   875,   875,
      77,  -257,  -257,  -257,    55,    78,  -257,   103,    58,    66,
     -14,   695,    66,    63,   731,   450,    86,   442,  -257,  -257,
     899,   899,   899,   899,   899,   899,   907,   907,   907,   907,
     899,   899,   899,   623,   875,   875,   875,   899,   907,   907,
     133,  -257,    66,   120,    66,    80,  -257,   118,    75,    84,
      90,   442,   875,   442,  -257,  -257,    76,    87,   135,  -257,
    -257,   114,   117,    17,   119,   100,   458,  -257,   549,   899,
     102,   149,   160,    10,  -257,  -257,     6,   111,  -257,  -257,
    -257,   134,   138,  -257,  -257,  -257,   140,   109,   585,  -257,
    -257,    96,   493,  -257,   172,   128,    35,  -257,  -257,  -257,
     147,   151,  -257,  -257,   152,   442,    97,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,   156,   159,  -257,  -257,
     163,   166,   167,   148,   767,   104,   150,   157,   329,   153,
     125,  -257,  -257,  -257,   803,  -257,  -257,   175,   181,  -257,
     183,  -257,  -257,  -257,  -257,  -257,   162,   164,  -257,  -257,
     189,   190,   192,  -257,   170,  -257,  -257,  -257,   442,  -257,
    -257,   339,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,   299,   171,   839,  -257,  -257,   198,   199,  -257,   214,
     203,   308,   310,   321,  -257,  -257,   343,   187,  -257,  -257,
     353,  -257,  -257,  -257,   204,   206,   208,  -257,  -257,  -257,
    -257,   227,   229,  -257,  -257,  -257,  -257,  -257,  -257,   205,
     367,   372,   223,   230,  -257,  -257,  -257,  -257,  -257,   377,
     236,   241,  -257,  -257,  -257,  -257,   297,  -257
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     4,     1,     0,    92,    91,    90,     0,
      93,     0,    15,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     5,     0,     0,
       9,    10,    13,     0,     0,    94,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    25,   129,
       0,   126,     0,     0,   129,     0,     0,    79,    95,   103,
     105,   107,   127,     0,     0,     6,     8,    14,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    16,    18,    19,    20,    22,    21,    23,    24,
     132,   136,   135,   137,     0,   130,   134,     0,     0,   129,
       0,     0,   129,     0,     0,     0,     0,     0,   121,   122,
      96,    97,    99,    98,   100,   102,   115,   117,   111,   112,
     108,   109,   110,     0,   118,   119,   116,   101,   113,   114,
       0,   125,     0,     0,   129,     0,   120,     0,     0,     0,
       0,     0,   128,     0,   133,   131,     0,     0,     0,    45,
      40,     0,     0,    26,     0,     0,     0,    61,     0,   123,
       0,     0,     0,     0,    42,    43,     0,     0,    44,    73,
      89,     0,     0,    83,    84,    87,     0,     0,     0,    85,
      86,     0,     0,   141,     0,     0,    27,    41,    52,    46,
       0,     0,    50,    28,     0,     0,     0,    80,    82,    88,
     124,    81,    69,    70,    71,    60,     0,     0,    65,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    51,     0,    78,    72,     0,     0,    74,
       0,    63,    64,    67,    68,    66,     0,     0,   146,   138,
       0,     0,     0,   142,     0,   141,    46,    29,     0,    30,
      47,     0,    75,    76,    77,   149,   149,   143,   144,   145,
     141,     0,     0,     0,    59,    53,     0,     0,    57,     0,
       0,     0,     0,     0,   140,    31,     0,     0,    55,    56,
       0,    58,   154,   147,     0,     0,     0,   150,   148,   139,
      53,     0,     0,    54,    46,    32,   151,   152,   153,     0,
       0,     0,     0,     0,    46,    33,    46,    34,    36,     0,
       0,     0,    46,    35,    37,    38,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -257,  -257,    -5,     3,     1,  -257,    82,
    -218,  -175,   -49,  -256,    91,  -257,  -257,  -257,  -257,    92,
    -257,  -257,    12,  -257,     5,  -257,   202,   -47,   126,   127,
      94,  -214,  -257,   105,     9,  -257
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    27,   200,   201,   202,   173,   163,
     230,   260,   287,   303,    31,   191,   219,   220,   221,    32,
     206,   239,   204,   187,    62,    35,    63,   104,   105,   106,
      36,   225,   253,    37,   281,   297
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   203,     1,   117,     4,   279,    30,   113,    29,   115,
      34,   107,     9,   115,    48,   198,     9,    33,    49,   159,
     117,   118,   108,    53,    16,    57,    58,    59,    60,    61,
     301,    64,    50,    91,    51,    20,   176,   177,   272,    20,
     146,   271,    52,    92,    93,    94,    95,    96,    97,    98,
      99,   116,    55,   257,   228,   229,   283,   111,    65,   109,
     114,   199,   145,    66,    56,   148,   196,    54,    54,   100,
     101,   102,    67,   103,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   312,   112,   132,   133,
     134,   135,   136,   137,   138,   139,   320,   157,   321,   115,
     115,   115,     9,     9,   326,   212,   235,   115,   140,   141,
       9,   144,   142,   248,    16,   305,   143,   149,   151,   213,
     214,   115,   152,   156,     9,    20,    20,   159,   115,   165,
     170,     9,   158,    20,   198,   315,   317,   101,   102,   166,
     103,   171,   161,    16,   323,   167,   174,    20,   172,   175,
     162,   178,   215,   236,    20,   179,   168,   193,   169,   164,
     249,   181,   194,   195,   205,   210,   207,   183,   161,   182,
     208,   188,   209,   160,   115,   226,   162,     9,   186,   231,
     198,   259,   227,   232,   233,   164,   216,   223,   241,    16,
     115,   242,   218,     9,   217,   243,   274,   224,   244,   245,
      20,   237,   246,   222,   254,    16,   258,   262,   115,   238,
     234,     9,   255,   263,   274,   264,    20,   265,   240,   266,
     250,   267,   268,    16,   269,   270,   115,   285,   251,     9,
     288,   289,   198,   290,    20,   291,   306,   252,   307,   115,
     308,    16,     9,   302,   115,   198,   310,     9,   311,   319,
     198,   309,    20,   110,    16,   197,   276,   184,   185,    16,
     189,   313,   278,   273,   277,    20,   250,   154,   155,     0,
      20,   190,     0,   280,   251,   282,   294,   294,   250,   318,
       0,   276,   276,   252,   295,   295,   251,   278,   278,   277,
     277,     0,   324,   296,   296,   252,     0,   325,   280,   280,
     115,     0,   115,     9,   276,     9,   198,     0,   248,     0,
     278,   115,   277,   115,     9,    16,     9,   292,     0,   292,
       0,   280,     0,     0,   115,     0,    20,     9,    20,     0,
     248,     0,   115,     0,     0,     9,     0,    20,   198,    20,
       0,     0,   115,     0,     0,     9,   115,    16,   274,     9,
      20,     0,   274,   327,     0,   284,   115,    16,    20,     9,
       0,    16,   198,     0,   293,     0,   298,     0,    20,     0,
     115,    16,    20,     9,     0,   115,   198,   299,     9,     0,
     115,   198,    20,     9,   256,    16,   198,     0,     0,     0,
      16,     0,     0,     0,   275,    16,    20,     0,   300,     0,
       0,    20,     0,     0,     0,     0,    20,     0,   304,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,   314,     0,     0,    16,     0,   316,     0,     0,
       0,     0,   322,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,    21,     0,    46,     7,     8,     0,    10,
      11,     0,     0,     0,    22,    23,    15,    24,    25,     0,
      26,     6,     7,     8,     9,    10,    11,   180,    47,     0,
      14,     0,    15,     0,     0,     0,    16,     0,    21,     0,
       0,    38,     0,     0,    17,    18,    19,    20,     0,    22,
      23,     0,    24,    25,    21,    26,     6,     7,     8,     0,
      10,    11,     0,     0,     0,    22,    23,    15,    24,    25,
       0,    26,    39,    40,    41,    42,    43,    44,    45,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,     0,    24,    25,    68,    26,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,   192,    89,    90,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,   211,    89,    90,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,    89,    90,   153,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,   119,     0,     0,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,   147,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,   150,     0,     0,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,   247,     0,     0,    84,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,   261,     0,     0,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,   286,     0,     0,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
      75,    76,    77,    78,    89,    90,    81,    82,    -1,    -1,
      -1,    -1,     0,     0,     0,     0,     0,    85,    86,    87,
      88,     0,     0,     0,     0,    85,    86,    87,    89,    90,
       0,     0,     0,     0,     0,     0,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
       5,   176,    10,    34,     0,   261,     5,    54,     5,     3,
       5,     3,     6,     3,     9,     9,     6,     5,    53,     9,
      34,    52,    14,     8,    18,    20,    21,    22,    23,    24,
     286,    26,    53,    38,    53,    29,    19,    20,   256,    29,
      54,   255,    53,    38,    39,    40,    41,    42,    43,    44,
      45,    56,    53,   228,    19,    20,   270,    52,    32,    51,
      55,    55,   109,    32,    53,   112,    56,    53,    53,     3,
       4,     5,    32,     7,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   304,    53,    83,    84,
      85,    86,    87,    88,    89,    90,   314,   144,   316,     3,
       3,     3,     6,     6,   322,     9,     9,     3,    31,    54,
       6,    53,    34,     9,    18,   290,    13,    54,    32,    23,
      24,     3,   117,     3,     6,    29,    29,     9,     3,    54,
      54,     6,    52,    29,     9,   310,   311,     4,     5,    55,
       7,    54,   147,    18,   319,    55,    32,    29,    13,    32,
     147,    32,    56,    56,    29,    55,   151,    55,   153,   147,
      56,   166,    13,     3,    53,    56,    32,   166,   173,   166,
      32,   166,    32,    55,     3,     3,   173,     6,   166,    32,
       9,    56,    54,    32,    32,   173,   191,   192,    32,    18,
       3,    32,   191,     6,   191,    32,     9,   192,    32,    32,
      29,   206,    54,   191,    54,    18,    53,    32,     3,   206,
     205,     6,    55,    32,     9,    32,    29,    55,   206,    55,
     225,    32,    32,    18,    32,    55,     3,    56,   225,     6,
      32,    32,     9,    19,    29,    32,    32,   225,    32,     3,
      32,    18,     6,    56,     3,     9,    19,     6,    19,    19,
       9,   300,    29,    51,    18,   173,   261,   166,   166,    18,
     166,    56,   261,   258,   261,    29,   271,   140,   142,    -1,
      29,   166,    -1,   261,   271,   266,   281,   282,   283,    56,
      -1,   286,   287,   271,   281,   282,   283,   286,   287,   286,
     287,    -1,    56,   281,   282,   283,    -1,    56,   286,   287,
       3,    -1,     3,     6,   309,     6,     9,    -1,     9,    -1,
     309,     3,   309,     3,     6,    18,     6,     9,    -1,     9,
      -1,   309,    -1,    -1,     3,    -1,    29,     6,    29,    -1,
       9,    -1,     3,    -1,    -1,     6,    -1,    29,     9,    29,
      -1,    -1,     3,    -1,    -1,     6,     3,    18,     9,     6,
      29,    -1,     9,    56,    -1,    56,     3,    18,    29,     6,
      -1,    18,     9,    -1,    56,    -1,    56,    -1,    29,    -1,
       3,    18,    29,     6,    -1,     3,     9,    56,     6,    -1,
       3,     9,    29,     6,    55,    18,     9,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    55,    18,    29,    -1,    55,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    29,    -1,    55,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    14,    55,    -1,    -1,    18,    -1,    55,    -1,    -1,
      -1,    -1,    55,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    47,    48,    14,    50,    51,    -1,
      53,     3,     4,     5,     6,     7,     8,     9,    26,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    36,    -1,
      -1,    31,    -1,    -1,    26,    27,    28,    29,    -1,    47,
      48,    -1,    50,    51,    36,    53,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    47,    48,    14,    50,    51,
      -1,    53,    62,    63,    64,    65,    66,    67,    68,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    51,    32,    53,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    69,    70,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    32,    69,    70,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      41,    42,    43,    44,    69,    70,    47,    48,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    58,    59,    60,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    72,    73,     0,    74,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    14,    18,    26,    27,    28,
      29,    36,    47,    48,    50,    51,    53,    75,    76,    77,
      78,    85,    90,    93,    95,    96,   101,   104,    31,    62,
      63,    64,    65,    66,    67,    68,     3,    26,    95,    53,
      53,    53,    53,     8,    53,    53,    53,    95,    95,    95,
      95,    95,    95,    97,    95,    32,    32,    32,    32,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    57,    58,    59,    60,    61,    69,
      70,    76,    95,    95,    95,    95,    95,    95,    95,    95,
       3,     4,     5,     7,    98,    99,   100,     3,    14,    51,
      97,    95,    53,    98,    95,     3,    76,    34,    52,    54,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      31,    54,    34,    13,    53,    98,    54,    54,    98,    54,
      54,    32,    95,    33,   100,    99,     3,    98,    52,     9,
      55,    76,    77,    80,    93,    54,    55,    55,    95,    95,
      54,    54,    13,    79,    32,    32,    19,    20,    32,    55,
       9,    76,    77,    78,    85,    90,    93,    94,    95,   101,
     104,    86,    32,    55,    13,     3,    56,    80,     9,    55,
      76,    77,    78,    82,    93,    53,    91,    32,    32,    32,
      56,    32,     9,    23,    24,    56,    76,    77,    78,    87,
      88,    89,    93,    76,    95,   102,     3,    54,    19,    20,
      81,    32,    32,    32,    95,     9,    56,    76,    77,    92,
      93,    32,    32,    32,    32,    32,    54,    54,     9,    56,
      76,    77,    93,   103,    54,    55,    55,    82,    53,    56,
      82,    54,    32,    32,    32,    55,    55,    32,    32,    32,
      55,   102,    81,    95,     9,    55,    76,    77,    78,    84,
      93,   105,   105,   102,    56,    56,    54,    83,    32,    32,
      19,    32,     9,    56,    76,    77,    93,   106,    56,    56,
      55,    84,    56,    84,    55,    82,    32,    32,    32,    83,
      19,    19,    81,    56,    55,    82,    55,    82,    56,    19,
      81,    81,    55,    82,    56,    56,    81,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    73,    72,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      88,    89,    90,    91,    91,    92,    92,    92,    92,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    97,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     5,     7,     7,     9,
       9,    11,    12,    14,    14,    16,    14,    16,    16,    18,
       0,     2,     2,     2,     2,     1,     0,     2,     2,     2,
       1,     2,     1,     0,     2,     2,     2,     1,     2,     1,
       7,     0,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     8,     0,     2,     2,     2,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     5,     7,     4,     0,     1,     3,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     9,    12,
      11,     0,     2,     2,     2,     2,     1,    11,    11,     0,
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
#line 45 "php2python.y"
              {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();}
#line 1523 "php2python.tab.c"
    break;

  case 3: /* program: SPHP $@1 statements EPHP  */
#line 45 "php2python.y"
                                                                                                       {printf("Se encontro el final del tag de PHP\n");}
#line 1529 "php2python.tab.c"
    break;

  case 6: /* statement: declaration SC  */
#line 51 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); write_declaration((yyvsp[-1].str));}
#line 1535 "php2python.tab.c"
    break;

  case 7: /* statement: expr SC  */
#line 52 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); write_expression((yyvsp[-1].str));}
#line 1541 "php2python.tab.c"
    break;

  case 8: /* statement: echo SC  */
#line 53 "php2python.y"
              {printf("Se reconocio un echo\n"); write_echo((yyvsp[-1].str));}
#line 1547 "php2python.tab.c"
    break;

  case 9: /* statement: conditional  */
#line 54 "php2python.y"
                  {printf("Se reconocio una condicional\n"); write_if((yyvsp[0].str));}
#line 1553 "php2python.tab.c"
    break;

  case 10: /* statement: while  */
#line 55 "php2python.y"
            {printf("Se reconocio un bucle while\n"); write_while((yyvsp[0].str));}
#line 1559 "php2python.tab.c"
    break;

  case 11: /* statement: foreach  */
#line 56 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); write_foreach((yyvsp[0].str));}
#line 1565 "php2python.tab.c"
    break;

  case 12: /* statement: for  */
#line 57 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); write_for((yyvsp[0].str));}
#line 1571 "php2python.tab.c"
    break;

  case 13: /* statement: functionDefinition  */
#line 58 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n"); write_function((yyvsp[0].str));}
#line 1577 "php2python.tab.c"
    break;

  case 14: /* statement: return SC  */
#line 59 "php2python.y"
                {printf("Se reconocio un retorno global\n"); write_return(translate_return((yyvsp[-1].str)));}
#line 1583 "php2python.tab.c"
    break;

  case 15: /* statement: CMNT  */
#line 60 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); write_one_line_comment(format_one_line_comment((yyvsp[0].str)));}
#line 1589 "php2python.tab.c"
    break;

  case 16: /* declaration: ID EQ expr  */
#line 62 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1595 "php2python.tab.c"
    break;

  case 17: /* declaration: ID EQ declaration  */
#line 63 "php2python.y"
                        {(yyval.str)=format_declaration((yyvsp[-2].str), " = ", (yyvsp[0].str));}
#line 1601 "php2python.tab.c"
    break;

  case 18: /* declaration: ID PLEQ expr  */
#line 64 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1607 "php2python.tab.c"
    break;

  case 19: /* declaration: ID MNEQ expr  */
#line 65 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " -= ", (yyvsp[0].str));}
#line 1613 "php2python.tab.c"
    break;

  case 20: /* declaration: ID MUEQ expr  */
#line 66 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " *= ", (yyvsp[0].str));}
#line 1619 "php2python.tab.c"
    break;

  case 21: /* declaration: ID DIEQ expr  */
#line 67 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " /= ", (yyvsp[0].str));}
#line 1625 "php2python.tab.c"
    break;

  case 22: /* declaration: ID EXEQ expr  */
#line 68 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " **= ", (yyvsp[0].str));}
#line 1631 "php2python.tab.c"
    break;

  case 23: /* declaration: ID MOEQ expr  */
#line 69 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " %= ", (yyvsp[0].str));}
#line 1637 "php2python.tab.c"
    break;

  case 24: /* declaration: ID COEQ expr  */
#line 70 "php2python.y"
                   {(yyval.str)=format_declaration((yyvsp[-2].str), " += ", (yyvsp[0].str));}
#line 1643 "php2python.tab.c"
    break;

  case 25: /* echo: ECH expr  */
#line 72 "php2python.y"
               {(yyval.str)=format_echo((yyvsp[0].str), tabcount);}
#line 1649 "php2python.tab.c"
    break;

  case 26: /* conditional: IF OPRT expr CPRT statementinifblock  */
#line 74 "php2python.y"
                                         {printf("Se encontro un if\n"); tabcount++; (yyval.str)=format_if((yyvsp[-2].str));}
#line 1655 "php2python.tab.c"
    break;

  case 27: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC  */
#line 75 "php2python.y"
                                                      {printf("Se encontro un if con bloque\n"); tabcount++; (yyval.str)=format_if((yyvsp[-4].str));}
#line 1661 "php2python.tab.c"
    break;

  case 28: /* conditional: IF OPRT expr CPRT statementinifblock ELSE statementinelseblock  */
#line 76 "php2python.y"
                                                                     {printf("Se encontro un if else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-4].str));}
#line 1667 "php2python.tab.c"
    break;

  case 29: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock  */
#line 77 "php2python.y"
                                                                                {printf("Se encontro un if con bloque y else\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1673 "php2python.tab.c"
    break;

  case 30: /* conditional: IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC  */
#line 78 "php2python.y"
                                                                                {printf("Se encontro un if y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-6].str));}
#line 1679 "php2python.tab.c"
    break;

  case 31: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 79 "php2python.y"
                                                                                           {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; (yyval.str)=format_if_else((yyvsp[-8].str));}
#line 1685 "php2python.tab.c"
    break;

  case 32: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 80 "php2python.y"
                                                                                                              {printf("Se encontro un if elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-9].str), (yyvsp[-4].str));}
#line 1691 "php2python.tab.c"
    break;

  case 33: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock  */
#line 81 "php2python.y"
                                                                                                                         {printf("Se encontro un if con bloque elseif else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-4].str));}
#line 1697 "php2python.tab.c"
    break;

  case 34: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 82 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1703 "php2python.tab.c"
    break;

  case 35: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock  */
#line 83 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif con bloque else\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1709 "php2python.tab.c"
    break;

  case 36: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 84 "php2python.y"
                                                                                                                         {printf("Se encontro un if elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-11].str), (yyvsp[-6].str));}
#line 1715 "php2python.tab.c"
    break;

  case 37: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC  */
#line 85 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-6].str));}
#line 1721 "php2python.tab.c"
    break;

  case 38: /* conditional: IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 86 "php2python.y"
                                                                                                                                    {printf("Se encontro un if con bloque elseif else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-13].str), (yyvsp[-8].str));}
#line 1727 "php2python.tab.c"
    break;

  case 39: /* conditional: IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC  */
#line 87 "php2python.y"
                                                                                                                                               {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); (yyval.str)=format_if_elseif_else((yyvsp[-15].str), (yyvsp[-8].str));}
#line 1733 "php2python.tab.c"
    break;

  case 41: /* statementsinifblock: statementsinifblock statementinifblock  */
#line 91 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 1739 "php2python.tab.c"
    break;

  case 42: /* statementinifblock: declaration SC  */
#line 94 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1745 "php2python.tab.c"
    break;

  case 43: /* statementinifblock: echo SC  */
#line 95 "php2python.y"
              {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1751 "php2python.tab.c"
    break;

  case 44: /* statementinifblock: return SC  */
#line 96 "php2python.y"
                {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1757 "php2python.tab.c"
    break;

  case 45: /* statementinifblock: CMNT  */
#line 97 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un if\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1763 "php2python.tab.c"
    break;

  case 47: /* statementsinelseblock: statementsinelseblock statementinelseblock  */
#line 101 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1769 "php2python.tab.c"
    break;

  case 48: /* statementinelseblock: declaration SC  */
#line 104 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1775 "php2python.tab.c"
    break;

  case 49: /* statementinelseblock: echo SC  */
#line 105 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1781 "php2python.tab.c"
    break;

  case 50: /* statementinelseblock: conditional  */
#line 106 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1787 "php2python.tab.c"
    break;

  case 51: /* statementinelseblock: return SC  */
#line 107 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1793 "php2python.tab.c"
    break;

  case 52: /* statementinelseblock: CMNT  */
#line 108 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1799 "php2python.tab.c"
    break;

  case 54: /* statementsinelifblock: statementsinelifblock statementinelifblock  */
#line 112 "php2python.y"
                                                 {printf("Se redujo el scope\n"); tabcount--;}
#line 1805 "php2python.tab.c"
    break;

  case 55: /* statementinelifblock: declaration SC  */
#line 115 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un else\n"); write_declaration((yyvsp[-1].str));}
#line 1811 "php2python.tab.c"
    break;

  case 56: /* statementinelifblock: echo SC  */
#line 116 "php2python.y"
              {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1817 "php2python.tab.c"
    break;

  case 57: /* statementinelifblock: conditional  */
#line 117 "php2python.y"
                  {printf("Se encontro una condicional dentro de un else\n"); write_if((yyvsp[0].str));}
#line 1823 "php2python.tab.c"
    break;

  case 58: /* statementinelifblock: return SC  */
#line 118 "php2python.y"
                {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1829 "php2python.tab.c"
    break;

  case 59: /* statementinelifblock: CMNT  */
#line 119 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un else\n", (yyvsp[0].str)); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1835 "php2python.tab.c"
    break;

  case 60: /* while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC  */
#line 121 "php2python.y"
                                                            {printf("Se encontro un while con bloque\n"); tabcount++; (yyval.str)=format_while((yyvsp[-4].str));}
#line 1841 "php2python.tab.c"
    break;

  case 62: /* statementsInWhileBlock: statementsInWhileBlock statementInWhileBlock  */
#line 124 "php2python.y"
                                                   {printf("Se redujo el scope\n"); tabcount--;}
#line 1847 "php2python.tab.c"
    break;

  case 63: /* statementInWhileBlock: declaration SC  */
#line 127 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1853 "php2python.tab.c"
    break;

  case 64: /* statementInWhileBlock: echo SC  */
#line 128 "php2python.y"
              {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1859 "php2python.tab.c"
    break;

  case 65: /* statementInWhileBlock: conditional  */
#line 129 "php2python.y"
                  {printf("Se encontro una condicional dentro de un while\n");}
#line 1865 "php2python.tab.c"
    break;

  case 66: /* statementInWhileBlock: return SC  */
#line 130 "php2python.y"
                {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return((yyvsp[-1].str)));}
#line 1871 "php2python.tab.c"
    break;

  case 67: /* statementInWhileBlock: break SC  */
#line 131 "php2python.y"
               {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1877 "php2python.tab.c"
    break;

  case 68: /* statementInWhileBlock: continue SC  */
#line 132 "php2python.y"
                  {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1883 "php2python.tab.c"
    break;

  case 69: /* statementInWhileBlock: CMNT  */
#line 133 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un while\n", (yyvsp[0].str)); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1889 "php2python.tab.c"
    break;

  case 70: /* break: BRK  */
#line 135 "php2python.y"
           {(yyval.str)="break";}
#line 1895 "php2python.tab.c"
    break;

  case 71: /* continue: CONT  */
#line 136 "php2python.y"
               {(yyval.str)="continue";}
#line 1901 "php2python.tab.c"
    break;

  case 72: /* functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC  */
#line 137 "php2python.y"
                                                                                      {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", (yyvsp[-6].str), (yyvsp[-4].str)); tabcount++; (yyval.str)=format_function((yyvsp[-4].str), (yyvsp[-6].str));}
#line 1907 "php2python.tab.c"
    break;

  case 74: /* statementsInFunctionBlock: statementsInFunctionBlock statementInFunctionBlock  */
#line 140 "php2python.y"
                                                         {printf("Se redujo el scope\n"); tabcount--;}
#line 1913 "php2python.tab.c"
    break;

  case 75: /* statementInFunctionBlock: declaration SC  */
#line 143 "php2python.y"
                   {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1919 "php2python.tab.c"
    break;

  case 76: /* statementInFunctionBlock: echo SC  */
#line 144 "php2python.y"
              {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 1925 "php2python.tab.c"
    break;

  case 77: /* statementInFunctionBlock: return SC  */
#line 145 "php2python.y"
                {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 1931 "php2python.tab.c"
    break;

  case 78: /* statementInFunctionBlock: CMNT  */
#line 146 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", (yyvsp[0].str)); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 1937 "php2python.tab.c"
    break;

  case 79: /* return: RTN expr  */
#line 148 "php2python.y"
                 {printf("Se encontro un retorno de: %s\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 1943 "php2python.tab.c"
    break;

  case 80: /* anonymousFunctionStatement: declaration SC  */
#line 150 "php2python.y"
                   {printf("Se reconocio una declaracion\n"); }
#line 1949 "php2python.tab.c"
    break;

  case 81: /* anonymousFunctionStatement: expr SC  */
#line 151 "php2python.y"
              {printf("Se reconocio la expresion: %s\n", (yyvsp[-1].str)); }
#line 1955 "php2python.tab.c"
    break;

  case 82: /* anonymousFunctionStatement: echo SC  */
#line 152 "php2python.y"
              {printf("Se reconocio un echo\n"); }
#line 1961 "php2python.tab.c"
    break;

  case 83: /* anonymousFunctionStatement: conditional  */
#line 153 "php2python.y"
                  {printf("Se reconocio una condicional\n"); }
#line 1967 "php2python.tab.c"
    break;

  case 84: /* anonymousFunctionStatement: while  */
#line 154 "php2python.y"
            {printf("Se reconocio un bucle while\n"); }
#line 1973 "php2python.tab.c"
    break;

  case 85: /* anonymousFunctionStatement: foreach  */
#line 155 "php2python.y"
              {printf("Se reconocio un bucle foreach\n"); }
#line 1979 "php2python.tab.c"
    break;

  case 86: /* anonymousFunctionStatement: for  */
#line 156 "php2python.y"
          {printf("Se reconocio un bucle foreach\n"); }
#line 1985 "php2python.tab.c"
    break;

  case 87: /* anonymousFunctionStatement: functionDefinition  */
#line 157 "php2python.y"
                         {printf("Se reconocio la definicion de una funcion\n");}
#line 1991 "php2python.tab.c"
    break;

  case 88: /* anonymousFunctionStatement: return SC  */
#line 158 "php2python.y"
                {printf("Se reconocio un retorno global\n"); }
#line 1997 "php2python.tab.c"
    break;

  case 89: /* anonymousFunctionStatement: CMNT  */
#line 159 "php2python.y"
           {printf("Se reconocio un comentario de linea: %s\n", (yyvsp[0].str)); }
#line 2003 "php2python.tab.c"
    break;

  case 90: /* expr: NUM  */
#line 161 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2009 "php2python.tab.c"
    break;

  case 91: /* expr: STR  */
#line 162 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2015 "php2python.tab.c"
    break;

  case 92: /* expr: ID  */
#line 163 "php2python.y"
         {printf("Se encontro una variable en una expresion\n"); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2021 "php2python.tab.c"
    break;

  case 93: /* expr: BOOL  */
#line 164 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2027 "php2python.tab.c"
    break;

  case 94: /* expr: functionCall  */
#line 165 "php2python.y"
                   {printf("Se encontro una llamada a funcion\n");}
#line 2033 "php2python.tab.c"
    break;

  case 95: /* expr: MINS expr  */
#line 166 "php2python.y"
                {printf("Se encontro una expresion negativa\n"); (yyval.str)=format_operation("", " - ", (yyvsp[0].str));}
#line 2039 "php2python.tab.c"
    break;

  case 96: /* expr: expr PLUS expr  */
#line 167 "php2python.y"
                     {printf("Se encontro una suma\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2045 "php2python.tab.c"
    break;

  case 97: /* expr: expr MINS expr  */
#line 168 "php2python.y"
                     {printf("Se encontro una resta\n"); (yyval.str)=format_operation((yyvsp[-2].str), " - ", (yyvsp[0].str));}
#line 2051 "php2python.tab.c"
    break;

  case 98: /* expr: expr MULT expr  */
#line 169 "php2python.y"
                     {printf("Se encontro una multiplicacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " * ", (yyvsp[0].str));}
#line 2057 "php2python.tab.c"
    break;

  case 99: /* expr: expr DIV expr  */
#line 170 "php2python.y"
                    {printf("Se encontro una division\n"); (yyval.str)=format_operation((yyvsp[-2].str), " / ", (yyvsp[0].str));}
#line 2063 "php2python.tab.c"
    break;

  case 100: /* expr: expr MOD expr  */
#line 171 "php2python.y"
                    {printf("Se encontro una operacion modulo\n"); (yyval.str)=format_operation((yyvsp[-2].str), " % ", (yyvsp[0].str));}
#line 2069 "php2python.tab.c"
    break;

  case 101: /* expr: expr EXPO expr  */
#line 172 "php2python.y"
                     {printf("Se encontro una exponenciacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ** ", (yyvsp[0].str));}
#line 2075 "php2python.tab.c"
    break;

  case 102: /* expr: expr CCTN expr  */
#line 173 "php2python.y"
                     {printf("Se encontro una concatenacion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " + ", (yyvsp[0].str));}
#line 2081 "php2python.tab.c"
    break;

  case 103: /* expr: PPL expr  */
#line 174 "php2python.y"
               {printf("Se encontro un pre-incremento\n"); (yyval.str)=format_pre_increment((yyvsp[0].str));}
#line 2087 "php2python.tab.c"
    break;

  case 104: /* expr: expr PPL  */
#line 175 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_increment((yyvsp[-1].str));}
#line 2093 "php2python.tab.c"
    break;

  case 105: /* expr: MMN expr  */
#line 176 "php2python.y"
               {printf("Se encontro un pre-decremento\n"); (yyval.str)=format_pre_decrement((yyvsp[0].str));}
#line 2099 "php2python.tab.c"
    break;

  case 106: /* expr: expr MMN  */
#line 177 "php2python.y"
               {printf("Se encontro un pos-incremento\n"); (yyval.str)=format_post_decrement((yyvsp[-1].str));}
#line 2105 "php2python.tab.c"
    break;

  case 107: /* expr: NOT expr  */
#line 178 "php2python.y"
               {printf("Se encontro una negacion logica\n"); (yyval.str)=format_operation("", " not ", (yyvsp[0].str));}
#line 2111 "php2python.tab.c"
    break;

  case 108: /* expr: expr AND expr  */
#line 179 "php2python.y"
                    {printf("Se encontro una conjuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " and ", (yyvsp[0].str));}
#line 2117 "php2python.tab.c"
    break;

  case 109: /* expr: expr OR expr  */
#line 180 "php2python.y"
                   {printf("Se encontro una disyuncion\n"); (yyval.str)=format_operation((yyvsp[-2].str), " or ", (yyvsp[0].str));}
#line 2123 "php2python.tab.c"
    break;

  case 110: /* expr: expr XOR expr  */
#line 181 "php2python.y"
                    {printf("Se encontro una disyuncion exclusiva\n"); (yyval.str)=format_operation((yyvsp[-2].str), " ^ ", (yyvsp[0].str));}
#line 2129 "php2python.tab.c"
    break;

  case 111: /* expr: expr GT expr  */
#line 182 "php2python.y"
                   {printf("Se encontro un mayor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " > ", (yyvsp[0].str));}
#line 2135 "php2python.tab.c"
    break;

  case 112: /* expr: expr LT expr  */
#line 183 "php2python.y"
                   {printf("Se encontro un menor que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " < ", (yyvsp[0].str));}
#line 2141 "php2python.tab.c"
    break;

  case 113: /* expr: expr GTE expr  */
#line 184 "php2python.y"
                    {printf("Se encontro un mayor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " >= ", (yyvsp[0].str));}
#line 2147 "php2python.tab.c"
    break;

  case 114: /* expr: expr LTE expr  */
#line 185 "php2python.y"
                    {printf("Se encontro un menor o igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " <= ", (yyvsp[0].str));}
#line 2153 "php2python.tab.c"
    break;

  case 115: /* expr: expr EEQ expr  */
#line 186 "php2python.y"
                    {printf("Se encontro un igual que \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2159 "php2python.tab.c"
    break;

  case 116: /* expr: expr EEEQ expr  */
#line 187 "php2python.y"
                     {printf("Se encontro un identico que === \n"); (yyval.str)=format_operation((yyvsp[-2].str), " == ", (yyvsp[0].str));}
#line 2165 "php2python.tab.c"
    break;

  case 117: /* expr: expr NEQ expr  */
#line 188 "php2python.y"
                    {printf("Se encontro un diferente que != \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2171 "php2python.tab.c"
    break;

  case 118: /* expr: expr NOEQ expr  */
#line 189 "php2python.y"
                     {printf("Se encontro un diferente que <> \n"); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2177 "php2python.tab.c"
    break;

  case 119: /* expr: expr NEEE expr  */
#line 190 "php2python.y"
                     {printf("Se encontro un no identico que !== "); (yyval.str)=format_operation((yyvsp[-2].str), " != ", (yyvsp[0].str));}
#line 2183 "php2python.tab.c"
    break;

  case 120: /* expr: ARRY OPRT parameters CPRT  */
#line 191 "php2python.y"
                                {printf("Se encontro la definicion de un array con array()\n"); (yyval.str)=format_array();}
#line 2189 "php2python.tab.c"
    break;

  case 121: /* expr: OSQB parameters CSQB  */
#line 192 "php2python.y"
                           {printf("Se encontro la definicion de un array con []\n"); (yyval.str)=format_array();}
#line 2195 "php2python.tab.c"
    break;

  case 122: /* expr: OPRT expr CPRT  */
#line 193 "php2python.y"
                     {printf("Se encontro una expresion encerrada entre parentesis\n"); (yyval.str)=format_operation("(", (yyvsp[-1].str), ")");}
#line 2201 "php2python.tab.c"
    break;

  case 123: /* expr: expr QUES expr CL expr  */
#line 194 "php2python.y"
                             {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)), (yyval.str)=format_ternary_operator((yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str));}
#line 2207 "php2python.tab.c"
    break;

  case 124: /* expr: FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC  */
#line 195 "php2python.y"
                                                                    {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", (yyvsp[-4].str), (yyvsp[-1].str)); (yyval.str)=format_anonymous_function((yyvsp[-4].str), (yyvsp[-1].str));}
#line 2213 "php2python.tab.c"
    break;

  case 125: /* functionCall: NAME OPRT arguments CPRT  */
#line 197 "php2python.y"
                                       {printf("Se encontro una llamada a la funcion %s\n", (yyvsp[-3].str)); (yyval.str)=format_function_call((yyvsp[-3].str), (yyvsp[-1].str));}
#line 2219 "php2python.tab.c"
    break;

  case 126: /* parameters: %empty  */
#line 199 "php2python.y"
           {(yyval.str)=NULL;}
#line 2225 "php2python.tab.c"
    break;

  case 127: /* parameters: expr  */
#line 200 "php2python.y"
           {printf("Se encontro la expresion %s como un parametro\n", (yyvsp[0].str)); (yyval.str) = (yyvsp[0].str); add_param_to_queue((yyvsp[0].str));}
#line 2231 "php2python.tab.c"
    break;

  case 128: /* parameters: parameters COMM expr  */
#line 201 "php2python.y"
                           {printf("Se encontro una expresion (%s) separada por comas como parametros\n", (yyvsp[0].str)); add_param_to_queue((yyvsp[0].str));}
#line 2237 "php2python.tab.c"
    break;

  case 129: /* arguments: %empty  */
#line 204 "php2python.y"
           {(yyval.str)="";}
#line 2243 "php2python.tab.c"
    break;

  case 131: /* argument: argument COMM argument  */
#line 208 "php2python.y"
                           {(yyval.str)=load_all_arguments((yyvsp[-2].str), (yyvsp[0].str));}
#line 2249 "php2python.tab.c"
    break;

  case 132: /* argument: ID  */
#line 209 "php2python.y"
         {printf("Se encontro la variable %s como un argumento\n", (yyvsp[0].str)); (yyval.str)=format_variable((yyvsp[0].str));}
#line 2255 "php2python.tab.c"
    break;

  case 133: /* argument: ID EQ defaultValue  */
#line 210 "php2python.y"
                         {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str)=format_default_argument(format_variable((yyvsp[-2].str)), (yyvsp[0].str));}
#line 2261 "php2python.tab.c"
    break;

  case 135: /* defaultValue: NUM  */
#line 214 "php2python.y"
        {(yyval.str)=(yyvsp[0].str);}
#line 2267 "php2python.tab.c"
    break;

  case 136: /* defaultValue: STR  */
#line 215 "php2python.y"
          {(yyval.str)=(yyvsp[0].str);}
#line 2273 "php2python.tab.c"
    break;

  case 137: /* defaultValue: BOOL  */
#line 216 "php2python.y"
           {printf("Se encontro un booleano\n"); (yyval.str)=format_boolean((yyvsp[0].str));}
#line 2279 "php2python.tab.c"
    break;

  case 138: /* foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC  */
#line 218 "php2python.y"
                                                              {printf("Se encontro un foreach con variable\n"); tabcount++; (yyval.str)=format_foreach1(format_variable((yyvsp[-6].str)), format_variable((yyvsp[-4].str)));}
#line 2285 "php2python.tab.c"
    break;

  case 139: /* foreach: FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC  */
#line 219 "php2python.y"
                                                                                 {printf("Se encontro un foreach con constructor y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2291 "php2python.tab.c"
    break;

  case 140: /* foreach: FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC  */
#line 220 "php2python.y"
                                                                            {printf("Se encontro un foreach con [] y parametros: %s\n", (yyvsp[-7].str)); tabcount++; (yyval.str)=format_foreach2((yyvsp[-7].str), format_variable((yyvsp[-4].str)));}
#line 2297 "php2python.tab.c"
    break;

  case 142: /* statementsInForeach: statementsInForeach statementInForeach  */
#line 223 "php2python.y"
                                             {printf("Se redujo el scope\n"); tabcount--;}
#line 2303 "php2python.tab.c"
    break;

  case 143: /* statementInForeach: declaration SC  */
#line 226 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2309 "php2python.tab.c"
    break;

  case 144: /* statementInForeach: echo SC  */
#line 227 "php2python.y"
              {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2315 "php2python.tab.c"
    break;

  case 145: /* statementInForeach: return SC  */
#line 228 "php2python.y"
                {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2321 "php2python.tab.c"
    break;

  case 146: /* statementInForeach: CMNT  */
#line 229 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", (yyvsp[0].str)); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2327 "php2python.tab.c"
    break;

  case 147: /* for: FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC  */
#line 232 "php2python.y"
                                                                               {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2333 "php2python.tab.c"
    break;

  case 148: /* for: FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC  */
#line 233 "php2python.y"
                                                                          {printf("Se encontro un for\n"); tabcount++; (yyval.str)=format_for((yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 2339 "php2python.tab.c"
    break;

  case 150: /* statementsInFor: statementsInFor statementInFor  */
#line 236 "php2python.y"
                                     {printf("Se redujo el scope\n"); tabcount--;}
#line 2345 "php2python.tab.c"
    break;

  case 151: /* statementInFor: declaration SC  */
#line 239 "php2python.y"
                   {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2351 "php2python.tab.c"
    break;

  case 152: /* statementInFor: echo SC  */
#line 240 "php2python.y"
              {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array((yyvsp[-1].str));}
#line 2357 "php2python.tab.c"
    break;

  case 153: /* statementInFor: return SC  */
#line 241 "php2python.y"
                {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return((yyvsp[-1].str)));}
#line 2363 "php2python.tab.c"
    break;

  case 154: /* statementInFor: CMNT  */
#line 242 "php2python.y"
           {printf("Se encontro un comentario de linea: %s, dentro de un for\n", (yyvsp[0].str)); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment((yyvsp[0].str)));}
#line 2369 "php2python.tab.c"
    break;


#line 2373 "php2python.tab.c"

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

#line 244 "php2python.y"


int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}
