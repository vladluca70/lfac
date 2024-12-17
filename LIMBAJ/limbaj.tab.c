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
#line 1 "limbaj.y"

#include <iostream>
#include <vector>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
int errorCount = 0;

#line 84 "limbaj.tab.c"

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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_NR = 6,                         /* NR  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_EMPTY_CLASS = 10,               /* EMPTY_CLASS  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_EQUAL = 15,                     /* EQUAL  */
  YYSYMBOL_LESS = 16,                      /* LESS  */
  YYSYMBOL_LESS_EQUAL = 17,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER = 18,                   /* GREATER  */
  YYSYMBOL_GREATER_EQUAL = 19,             /* GREATER_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 20,                 /* NOT_EQUAL  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_INCREMENT = 23,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 24,                 /* DECREMENT  */
  YYSYMBOL_VOID = 25,                      /* VOID  */
  YYSYMBOL__TRUE = 26,                     /* _TRUE  */
  YYSYMBOL__FALSE = 27,                    /* _FALSE  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_CLASS_ACCESS_MODIFIERS = 29,    /* CLASS_ACCESS_MODIFIERS  */
  YYSYMBOL_CONSTRUCTOR = 30,               /* CONSTRUCTOR  */
  YYSYMBOL_CLASS_CALL = 31,                /* CLASS_CALL  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* '{'  */
  YYSYMBOL_39_ = 39,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_progr = 41,                     /* progr  */
  YYSYMBOL_declarations = 42,              /* declarations  */
  YYSYMBOL_decl = 43,                      /* decl  */
  YYSYMBOL_list_param = 44,                /* list_param  */
  YYSYMBOL_param = 45,                     /* param  */
  YYSYMBOL_arrays = 46,                    /* arrays  */
  YYSYMBOL_array_dimensions = 47,          /* array_dimensions  */
  YYSYMBOL_empty_class = 48,               /* empty_class  */
  YYSYMBOL_operators = 49,                 /* operators  */
  YYSYMBOL_conditions = 50,                /* conditions  */
  YYSYMBOL__if = 51,                       /* _if  */
  YYSYMBOL__else = 52,                     /* _else  */
  YYSYMBOL__while = 53,                    /* _while  */
  YYSYMBOL_while_body = 54,                /* while_body  */
  YYSYMBOL__for = 55,                      /* _for  */
  YYSYMBOL_for_first_part = 56,            /* for_first_part  */
  YYSYMBOL_for_second_part = 57,           /* for_second_part  */
  YYSYMBOL_for_third_part = 58,            /* for_third_part  */
  YYSYMBOL_function = 59,                  /* function  */
  YYSYMBOL_function_antet = 60,            /* function_antet  */
  YYSYMBOL_possible_return_values = 61,    /* possible_return_values  */
  YYSYMBOL_classes = 62,                   /* classes  */
  YYSYMBOL_class_body = 63,                /* class_body  */
  YYSYMBOL_constructor = 64,               /* constructor  */
  YYSYMBOL_main = 65,                      /* main  */
  YYSYMBOL_list = 66,                      /* list  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_call_list = 68,                 /* call_list  */
  YYSYMBOL_function_call = 69,             /* function_call  */
  YYSYMBOL_instance_of_class = 70          /* instance_of_class  */
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      33,    34,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    45,    53,    56,    57,    60,    64,    78,    79,    85,
     101,   101,   101,   101,   101,   101,   103,   104,   105,   106,
     114,   115,   116,   119,   120,   127,   128,   131,   139,   140,
     141,   144,   145,   146,   146,   152,   153,   154,   155,   170,
     171,   174,   174,   174,   174,   181,   196,   197,   200,   201,
     207,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   229,   230,   231,
     234,   235,   238,   241
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
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "NR", "ID", "TYPE", "CLASS", "EMPTY_CLASS", "IF", "ELSE",
  "WHILE", "FOR", "EQUAL", "LESS", "LESS_EQUAL", "GREATER",
  "GREATER_EQUAL", "NOT_EQUAL", "AND", "OR", "INCREMENT", "DECREMENT",
  "VOID", "_TRUE", "_FALSE", "RETURN", "CLASS_ACCESS_MODIFIERS",
  "CONSTRUCTOR", "CLASS_CALL", "';'", "'('", "')'", "','", "'['", "']'",
  "'{'", "'}'", "$accept", "progr", "declarations", "decl", "list_param",
  "param", "arrays", "array_dimensions", "empty_class", "operators",
  "conditions", "_if", "_else", "_while", "while_body", "_for",
  "for_first_part", "for_second_part", "for_third_part", "function",
  "function_antet", "possible_return_values", "classes", "class_body",
  "constructor", "main", "list", "statement", "call_list", "function_call",
  "instance_of_class", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     431,     1,    16,    19,   -27,   -22,   -17,    23,    29,    32,
     398,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
      25,     7,    21,    18,    18,    47,    38,    44,   -51,    40,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,    -3,    80,    48,    86,    59,   447,   447,    76,    85,
      96,    82,     3,    92,     2,   117,   -51,   -51,   -51,   -51,
     -51,    68,    97,   -51,   -51,   104,   135,   109,     5,   -51,
     123,   128,   -51,   152,   431,   127,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,    43,    62,   131,   133,   167,    18,   137,
     139,   140,   100,   168,   106,    69,   -51,   -51,   -51,   -51,
     -51,   -51,   148,   -51,   -51,   -51,   176,   -51,   431,   154,
     180,   153,   156,   183,    86,   -51,   -51,   -51,   -51,   -51,
     431,     4,   188,   -51,   166,   431,   165,    79,   -51,   -51,
     197,   -51,   178,    28,   180,   -51,   -51,   408,   -51,   -51,
     431,   -51,    90,   -51,   283,   -51,   431,   174,   -51,   209,
     290,   431,   -51,   317,   187,   190,   -51,   219,    15,   421,
     214,   -51,   110,   194,   -51,   324,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   198,    15,   193,   -51,   -51,   -51,
     196,   -51,   199,   200,   431,   351,   -51,   201,   358,   -51,
     385,   -51,   214,   -51,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     6,     7,    10,    12,    14,    15,    17,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       4,     5,     8,     9,    11,    13,    16,    18,    20,     2,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    77,    75,    79,
      81,     0,     0,    83,    85,    59,     0,     0,     0,    23,
       0,     0,    26,     0,    67,     0,    29,    30,    31,    32,
      33,    34,    35,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    74,    78,    76,
      80,    82,     0,    84,    86,    71,     0,    25,     0,     0,
       0,     0,    27,     0,     0,    65,    37,    39,    38,    36,
       0,     0,     0,    52,     0,     0,     0,     0,    88,    87,
       0,    90,     0,     0,     0,    72,    60,     0,    22,    24,
       0,    28,     0,    66,     0,    45,    47,     0,    51,     0,
       0,     0,    68,     0,     0,     0,    89,     0,     0,     0,
      41,    46,     0,     0,    56,     0,    69,    93,    92,    91,
      61,    64,    62,    63,     0,     0,     0,    42,    53,    54,
      48,    58,     0,     0,     0,     0,    55,     0,     0,    49,
       0,    57,    43,    50,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,     0,    -9,   -51,   125,    -1,   124,    64,   195,
     -21,     9,    45,    17,   -51,    56,   -51,   -51,   -51,    74,
     -50,    66,   121,   129,   122,   -51,   -51,   184,   -51,   186,
     189
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    74,    11,    68,    69,    12,    43,    13,    83,
      48,    14,   177,    15,   147,    16,    51,   124,   163,    17,
      70,   174,    18,    75,    19,    39,    61,    62,   133,    63,
      64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    30,    90,    49,    65,    66,    23,    92,    20,    31,
      65,    24,     1,     2,     3,     4,    25,     5,     6,    33,
      56,   170,   171,    21,    46,    47,    22,    34,    57,     7,
      26,    67,    28,    93,     8,    94,    27,    89,    58,   109,
     110,   172,   173,   145,   132,    44,    59,    54,    55,   116,
     117,     4,    97,     5,     6,    50,   136,    40,    41,    45,
      98,    42,   156,   157,   114,    30,    35,   123,   118,   119,
      99,    52,    96,    31,    32,    54,    55,    53,   100,     4,
      72,     5,     6,    33,    36,    60,    71,     1,     2,     3,
       4,    34,     5,     6,     1,     2,     3,     4,    76,     5,
       6,    40,   134,    87,     7,    42,   128,   129,   137,     8,
      85,     7,   131,    65,    88,    73,     8,   101,   152,    86,
     144,   146,    40,   134,    95,   150,    91,   153,    30,   105,
      35,    37,    38,   178,   179,    30,    31,    30,    32,   106,
     159,    30,   107,    31,    30,    31,    33,   108,    36,    31,
      30,   165,    31,    33,    34,    33,    30,   111,    31,    33,
     113,    34,    33,    34,    31,   112,   115,    34,    33,   120,
      34,   121,   122,   126,    33,   125,    34,   130,   127,    30,
     135,    30,    34,    65,   188,   190,   138,    31,    66,    31,
     142,   140,    42,    35,   148,    37,    38,    33,   149,    33,
      35,    32,    35,   151,   154,    34,    35,    34,    32,    35,
      32,    36,   155,   161,    32,    35,   162,    32,    36,   167,
      36,    35,   168,    32,    36,   169,   176,    36,   180,    32,
     182,   184,   187,    36,   185,   139,   141,   194,   186,    36,
     191,   183,    84,   143,    35,   102,    35,   103,     0,     0,
     104,     0,    32,     0,    32,     0,     0,     0,    37,    38,
       0,     0,    36,     0,    36,    37,    38,    37,    38,     0,
       0,    37,    38,     0,    37,    38,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     1,     2,     3,     4,     0,     5,     6,     1,     2,
       3,     4,     0,     5,     6,     0,     0,     0,     7,    37,
      38,    37,    38,     8,     0,     7,     0,     0,     0,     0,
       8,     0,   160,     0,     0,     1,     2,     3,     4,   164,
       5,     6,     1,     2,     3,     4,     0,     5,     6,     0,
       0,     0,     7,     0,     0,     0,     0,     8,     0,     7,
       0,     0,     0,     0,     8,     0,   166,     0,     0,     1,
       2,     3,     4,   181,     5,     6,     1,     2,     3,     4,
       0,     5,     6,     0,     0,     0,     7,     0,     0,     0,
       0,     8,     0,     7,     0,     0,     0,     0,     8,     0,
     189,     0,     0,     1,     2,     3,     4,   192,     5,     6,
       0,    29,     0,     0,     0,     0,     1,     2,     3,     4,
       7,     5,     6,     0,     0,     8,     1,     2,     3,     4,
       0,     5,     6,     7,   193,     0,     0,     0,     8,     1,
       2,     3,     4,     7,     5,     6,   158,     0,     8,     1,
       2,     3,     4,     0,     5,     6,     7,     0,     0,   175,
       0,     8,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     8,    77,    78,    79,    80,    81,    82
};

static const yytype_int16 yycheck[] =
{
       0,    10,    52,    24,     7,     8,    33,     5,     7,    10,
       7,    33,     8,     9,    10,    11,    33,    13,    14,    10,
      29,     6,     7,     7,     6,     7,     7,    10,    29,    25,
       7,    34,     0,    31,    30,    33,     7,    34,    29,    34,
      35,    26,    27,    39,    94,    38,    29,     7,     8,     6,
       7,    11,    61,    13,    14,     8,   106,    32,    33,    38,
      61,    36,    34,    35,    73,    74,    10,    88,     6,     7,
      61,    33,     4,    74,    10,     7,     8,    33,    61,    11,
      32,    13,    14,    74,    10,    29,     6,     8,     9,    10,
      11,    74,    13,    14,     8,     9,    10,    11,    39,    13,
      14,    32,    33,     7,    25,    36,     6,     7,   108,    30,
      34,    25,     6,     7,    32,    29,    30,    61,    39,    34,
     120,   121,    32,    33,     7,   125,    34,   127,   137,    32,
      74,    10,    10,    23,    24,   144,   137,   146,    74,    35,
     140,   150,     7,   144,   153,   146,   137,    38,    74,   150,
     159,   151,   153,   144,   137,   146,   165,    34,   159,   150,
       8,   144,   153,   146,   165,    37,    39,   150,   159,    38,
     153,    38,     5,    34,   165,    38,   159,     9,    38,   188,
      32,   190,   165,     7,   184,   185,    32,   188,     8,   190,
       7,    38,    36,   137,     6,    74,    74,   188,    32,   190,
     144,   137,   146,    38,     7,   188,   150,   190,   144,   153,
     146,   137,    34,    39,   150,   159,     7,   153,   144,    32,
     146,   165,    32,   159,   150,     6,    12,   153,    34,   165,
      32,    38,    32,   159,    38,   110,   112,   192,    39,   165,
      39,   175,    47,   114,   188,    61,   190,    61,    -1,    -1,
      61,    -1,   188,    -1,   190,    -1,    -1,    -1,   137,   137,
      -1,    -1,   188,    -1,   190,   144,   144,   146,   146,    -1,
      -1,   150,   150,    -1,   153,   153,    -1,    -1,    -1,    -1,
     159,   159,    -1,    -1,    -1,    -1,   165,   165,    -1,    -1,
      -1,     8,     9,    10,    11,    -1,    13,    14,     8,     9,
      10,    11,    -1,    13,    14,    -1,    -1,    -1,    25,   188,
     188,   190,   190,    30,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    39,    -1,    -1,     8,     9,    10,    11,    39,
      13,    14,     8,     9,    10,    11,    -1,    13,    14,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    39,    -1,    -1,     8,
       9,    10,    11,    39,    13,    14,     8,     9,    10,    11,
      -1,    13,    14,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      39,    -1,    -1,     8,     9,    10,    11,    39,    13,    14,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      25,    13,    14,    -1,    -1,    30,     8,     9,    10,    11,
      -1,    13,    14,    25,    39,    -1,    -1,    -1,    30,     8,
       9,    10,    11,    25,    13,    14,    28,    -1,    30,     8,
       9,    10,    11,    -1,    13,    14,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    15,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    10,    11,    13,    14,    25,    30,    41,
      42,    43,    46,    48,    51,    53,    55,    59,    62,    64,
       7,     7,     7,    33,    33,    33,     7,     7,     0,     3,
      43,    46,    48,    51,    53,    55,    59,    62,    64,    65,
      32,    33,    36,    47,    38,    38,     6,     7,    50,    50,
       8,    56,    33,    33,     7,     8,    43,    46,    51,    53,
      55,    66,    67,    69,    70,     7,     8,    34,    44,    45,
      60,     6,    32,    29,    42,    63,    39,    15,    16,    17,
      18,    19,    20,    49,    49,    34,    34,     7,    32,    34,
      60,    34,     5,    31,    33,     7,     4,    43,    46,    51,
      53,    55,    67,    69,    70,    32,    35,     7,    38,    34,
      35,    34,    37,     8,    43,    39,     6,     7,     6,     7,
      38,    38,     5,    50,    57,    38,    34,    38,     6,     7,
       9,     6,    60,    68,    33,    32,    60,    42,    32,    45,
      38,    47,     7,    63,    42,    39,    42,    54,     6,    32,
      42,    38,    39,    42,     7,    34,    34,    35,    28,    42,
      39,    39,     7,    58,    39,    42,    39,    32,    32,     6,
       6,     7,    26,    27,    61,    28,    12,    52,    23,    24,
      34,    39,    32,    61,    38,    38,    39,    32,    42,    39,
      42,    39,    39,    39,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    43,    43,    44,    44,    45,    46,    47,    47,    48,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      51,    51,    51,    52,    52,    53,    53,    54,    55,    55,
      55,    56,    57,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    62,    63,    63,    64,    64,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      68,    68,    69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     3,     6,     1,     3,     2,     4,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       4,     7,     8,     4,     5,     6,     7,     1,     8,    10,
      11,     4,     1,     2,     2,    10,     7,    11,     8,     1,
       3,     1,     1,     1,     1,     5,     3,     1,     6,     7,
       3,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     3,     3,     4,
       1,     3,     5,     5
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
  case 2: /* progr: declarations main  */
#line 21 "limbaj.y"
                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1323 "limbaj.tab.c"
    break;

  case 21: /* decl: TYPE ID ';'  */
#line 45 "limbaj.y"
                          { 
                              if(!current->existsId((yyvsp[-1].string))) {
                                    current->addVar((yyvsp[-2].string),(yyvsp[-1].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1336 "limbaj.tab.c"
    break;

  case 26: /* arrays: TYPE ID array_dimensions ';'  */
#line 65 "limbaj.y"
               { 
                    if(!current->existsId((yyvsp[-2].string))) 
                    {
                         current->addVar((yyvsp[-3].string),(yyvsp[-2].string));
                    } 
                    else 
                    {
                         errorCount++; 
                         yyerror("Variable already defined");
                    }
               }
#line 1352 "limbaj.tab.c"
    break;

  case 29: /* empty_class: EMPTY_CLASS ID '{' '}'  */
#line 86 "limbaj.y"
               { 
                    if(!current->existsId((yyvsp[-2].string))) 
                    {
                         current->addVar((yyvsp[-3].string),(yyvsp[-2].string));
                    } 
                    else 
                    {
                         errorCount++; 
                         yyerror("Variable already defined");
                    }
               }
#line 1368 "limbaj.tab.c"
    break;

  case 58: /* function: VOID ID '(' function_antet ')' '{' declarations '}'  */
#line 156 "limbaj.y"
          { 
               if(!current->existsId((yyvsp[-6].string))) 
               {
                    current->addVar((yyvsp[-7].string),(yyvsp[-6].string));
                         
               } 
               else 
               {
                    errorCount++; 
                    yyerror("Variable already defined");
               }
          }
#line 1385 "limbaj.tab.c"
    break;

  case 65: /* classes: CLASS ID '{' class_body '}'  */
#line 182 "limbaj.y"
          { 
               if(!current->existsId((yyvsp[-3].string))) 
               {
                    current->addVar((yyvsp[-4].string),(yyvsp[-3].string));
                         
               } 
               else 
               {
                    errorCount++; 
                    yyerror("Variable already defined");
               }
          }
#line 1402 "limbaj.tab.c"
    break;


#line 1406 "limbaj.tab.c"

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

#line 244 "limbaj.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     yyparse();
     cout << "Variables:" <<endl;
     current->printVars();
     delete current;
} 
