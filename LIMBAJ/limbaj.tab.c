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
  YYSYMBOL_PRINT = 32,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 33,                    /* TYPEOF  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MULTIPLICATION = 37,            /* MULTIPLICATION  */
  YYSYMBOL_MODULO = 38,                    /* MODULO  */
  YYSYMBOL_DESTRUCTOR = 39,                /* DESTRUCTOR  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_progr = 49,                     /* progr  */
  YYSYMBOL_declarations = 50,              /* declarations  */
  YYSYMBOL_decl = 51,                      /* decl  */
  YYSYMBOL_list_param = 52,                /* list_param  */
  YYSYMBOL_param = 53,                     /* param  */
  YYSYMBOL_arrays = 54,                    /* arrays  */
  YYSYMBOL_array_dimensions = 55,          /* array_dimensions  */
  YYSYMBOL_empty_class = 56,               /* empty_class  */
  YYSYMBOL_operators = 57,                 /* operators  */
  YYSYMBOL_conditions = 58,                /* conditions  */
  YYSYMBOL__if = 59,                       /* _if  */
  YYSYMBOL__else = 60,                     /* _else  */
  YYSYMBOL__while = 61,                    /* _while  */
  YYSYMBOL_while_body = 62,                /* while_body  */
  YYSYMBOL__for = 63,                      /* _for  */
  YYSYMBOL_for_first_part = 64,            /* for_first_part  */
  YYSYMBOL_for_second_part = 65,           /* for_second_part  */
  YYSYMBOL_for_third_part = 66,            /* for_third_part  */
  YYSYMBOL_function = 67,                  /* function  */
  YYSYMBOL_function_antet = 68,            /* function_antet  */
  YYSYMBOL_possible_return_values = 69,    /* possible_return_values  */
  YYSYMBOL_classes = 70,                   /* classes  */
  YYSYMBOL_class_body = 71,                /* class_body  */
  YYSYMBOL_constructor = 72,               /* constructor  */
  YYSYMBOL_destructor = 73,                /* destructor  */
  YYSYMBOL_main = 74,                      /* main  */
  YYSYMBOL_list = 75,                      /* list  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_call_list = 77,                 /* call_list  */
  YYSYMBOL_function_call = 78,             /* function_call  */
  YYSYMBOL_instance_of_class = 79,         /* instance_of_class  */
  YYSYMBOL_typeof = 80,                    /* typeof  */
  YYSYMBOL_print = 81,                     /* print  */
  YYSYMBOL_expr = 82,                      /* expr  */
  YYSYMBOL_arithmetic_operators = 83,      /* arithmetic_operators  */
  YYSYMBOL_assign_with_arithmetic_expressions = 84, /* assign_with_arithmetic_expressions  */
  YYSYMBOL_arithmetic_expr_rec = 85        /* arithmetic_expr_rec  */
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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      41,    42,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    24,    24,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    50,    58,    62,    63,    66,    70,    84,
      85,    91,   107,   107,   107,   107,   107,   107,   109,   110,
     111,   112,   120,   121,   122,   125,   126,   133,   134,   137,
     145,   146,   147,   150,   151,   152,   152,   158,   159,   160,
     161,   176,   177,   180,   180,   180,   180,   187,   202,   203,
     206,   207,   210,   216,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   244,   245,   246,   249,
     250,   253,   256,   258,   260,   262,   262,   262,   262,   264,
     264,   264,   264,   264,   266,   267,   268,   271,   272,   273,
     274
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
  "CONSTRUCTOR", "CLASS_CALL", "PRINT", "TYPEOF", "PLUS", "MINUS", "DIV",
  "MULTIPLICATION", "MODULO", "DESTRUCTOR", "';'", "'('", "')'", "','",
  "'['", "']'", "'{'", "'}'", "$accept", "progr", "declarations", "decl",
  "list_param", "param", "arrays", "array_dimensions", "empty_class",
  "operators", "conditions", "_if", "_else", "_while", "while_body",
  "_for", "for_first_part", "for_second_part", "for_third_part",
  "function", "function_antet", "possible_return_values", "classes",
  "class_body", "constructor", "destructor", "main", "list", "statement",
  "call_list", "function_call", "instance_of_class", "typeof", "print",
  "expr", "arithmetic_operators", "assign_with_arithmetic_expressions",
  "arithmetic_expr_rec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     530,    -2,     4,    10,   -17,   -10,    20,    29,    38,    51,
      72,   462,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,    24,    31,    41,     2,     2,    66,    57,    65,
      68,  -189,   100,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,    39,   106,    75,   469,    71,
     562,   562,    78,    81,   119,    89,    25,   105,   109,     7,
     135,   112,   127,  -189,  -189,  -189,  -189,  -189,   141,   137,
    -189,  -189,  -189,  -189,  -189,   138,   173,   144,    11,  -189,
     142,   148,  -189,   189,   530,   149,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,    93,   115,   161,   163,   205,     2,   174,
     177,   178,   185,   124,   223,   128,    -1,    76,    76,  -189,
    -189,  -189,  -189,  -189,  -189,   193,  -189,  -189,  -189,  -189,
    -189,  -189,   229,  -189,   530,   198,   235,   200,   203,   248,
     469,  -189,  -189,  -189,  -189,  -189,   530,     5,   251,  -189,
     218,   530,   213,    12,   216,  -189,  -189,   257,  -189,   225,
      96,    28,   235,   562,   562,  -189,  -189,   226,   232,  -189,
    -189,   496,  -189,  -189,   530,  -189,   126,  -189,    80,  -189,
     530,   224,  -189,   258,   231,   530,  -189,   327,   233,   236,
     237,  -189,   273,   123,   275,   243,   245,    90,   503,   277,
    -189,   147,   253,  -189,   378,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,   281,   123,  -189,  -189,  -189,
    -189,  -189,  -189,   256,    90,   247,  -189,  -189,  -189,   252,
    -189,   123,   295,   263,   264,   530,   385,    54,   511,   123,
    -189,   267,   420,  -189,   427,  -189,   299,  -189,   305,   166,
    -189,   277,  -189,   123,  -189,   527,  -189,   309,  -189,   536,
     180,  -189,  -189,   426,  -189
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     6,     7,    10,    12,    14,    15,    17,
      19,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     4,     5,     8,     9,    11,    13,    16,
      18,    20,    22,     2,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    80,    78,    82,    84,     0,     0,
      86,    88,    92,    90,    94,    61,     0,     0,     0,    25,
       0,     0,    28,     0,    69,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      77,    81,    79,    83,    85,     0,    87,    89,    93,    91,
      95,    74,     0,    27,     0,     0,     0,     0,    29,     0,
       0,    67,    39,    41,    40,    38,     0,     0,     0,    54,
       0,     0,     0,     0,     0,    97,    96,     0,    99,     0,
       0,     0,     0,   106,   105,   107,   108,     0,     0,    75,
      62,     0,    24,    26,     0,    30,     0,    68,     0,    47,
      49,     0,    53,     0,     0,     0,    70,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,    43,
      48,     0,     0,    58,     0,    71,    72,   102,   101,   100,
     110,   111,   112,   113,   109,     0,     0,   104,   103,    63,
      66,    64,    65,     0,     0,     0,    44,    55,    56,    50,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,    51,     0,   117,     0,   114,     0,     0,
      59,    45,    52,     0,   118,     0,    46,     0,   115,     0,
       0,   116,   120,     0,   119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,     0,    -5,  -189,   192,    17,   194,    92,   -50,
     -23,    18,    79,    60,  -189,   114,  -189,  -189,  -189,   129,
     -49,   116,   139,   199,   151,   188,  -189,  -189,   266,  -189,
     274,   276,   279,   282,   246,  -173,   283,  -188
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    84,    12,    78,    79,    13,    47,    14,    93,
     156,    15,   216,    16,   171,    17,    55,   140,   192,    18,
      80,   213,    19,    85,    20,    21,    43,    68,    69,   150,
      70,    71,    72,    73,   157,   227,    74,   228
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    94,    52,    53,   151,    22,    33,   100,    50,    51,
     205,    23,   103,     1,     2,     3,     4,    24,     5,     6,
       1,     2,     3,     4,    25,     5,     6,    63,    34,    36,
       7,    26,    75,   222,   183,     8,    28,     7,   104,    44,
     152,   239,     8,    46,     9,    29,    75,    76,   105,    64,
      65,     9,   169,   125,   126,   238,   149,   249,    30,   176,
     235,    27,   253,   110,    44,    45,   238,    99,    46,   184,
     247,    37,    31,   160,    54,   139,   238,    48,   130,    33,
     238,    77,   153,   154,   155,   111,   112,    49,     1,     2,
       3,     4,    66,     5,     6,   236,   209,   210,    56,   132,
     133,    34,    36,    35,    94,     7,    57,    59,    60,    58,
       8,     4,    81,     5,     6,    82,   211,   212,    86,     9,
      95,   134,   135,    96,   161,    38,    97,   189,   113,    98,
     145,   146,    61,    62,   148,    75,   168,   170,   181,   182,
      39,   174,   106,   177,    37,   109,    67,   101,    59,    60,
      40,   102,     4,   107,     5,     6,    33,   200,   201,   202,
     203,   204,    41,    33,   188,    33,    44,   152,   108,    33,
     217,   218,    33,    61,    62,   194,    35,   121,    34,    36,
     123,   122,   114,    33,   127,    34,    36,    34,    36,    33,
     124,    34,    36,   128,    34,    36,   131,   129,    38,    42,
     200,   201,   202,   203,   204,    34,    36,   136,   245,   137,
     138,    34,    36,    39,   200,   201,   202,   203,   204,   142,
     141,    37,   252,    40,   143,   232,   234,    33,    37,    33,
      37,   144,   147,   159,    37,    41,    75,    37,   162,     1,
       2,     3,     4,    76,     5,     6,   164,    46,    37,    34,
      36,    34,    36,    35,    37,   166,     7,   172,   173,   175,
      35,     8,    35,   178,   179,   191,    35,   180,   185,    35,
       9,   190,    42,   196,   186,    38,   197,   198,   193,   199,
      35,   206,    38,   207,    38,   208,    35,   221,    38,   215,
      39,    38,    37,   225,    37,   219,   223,    39,   226,    39,
      40,   229,    38,    39,   231,   243,    39,    40,    38,    40,
     230,   244,    41,    40,   240,   250,    40,    39,   163,    41,
     246,    41,   165,    39,    35,    41,    35,    40,    41,   167,
     224,     0,     0,    40,   115,     1,     2,     3,     4,    41,
       5,     6,   116,     0,   117,    41,    38,   118,    38,    42,
     119,   120,     7,     0,   158,     0,    42,     8,    42,     0,
       0,    39,    42,    39,     0,    42,     9,     0,     0,     0,
       0,    40,     0,    40,   195,     0,    42,     0,     0,     0,
       0,     0,    42,    41,     0,    41,     1,     2,     3,     4,
       0,     5,     6,     1,     2,     3,     4,     0,     5,     6,
       0,     0,     0,     7,     0,     0,     0,     0,     8,     0,
       7,     0,     0,     0,     0,     8,     0,     9,     0,     0,
      42,     0,    42,     0,     9,   220,     0,     0,     1,     2,
       3,     4,   233,     5,     6,     1,     2,     3,     4,     0,
       5,     6,     0,     0,     0,     7,     0,     0,     0,     0,
       8,     0,     7,     0,     0,     0,     0,     8,     0,     9,
     200,   201,   202,   203,   204,    32,     9,   241,   254,     0,
       1,     2,     3,     4,   242,     5,     6,     1,     2,     3,
       4,     0,     5,     6,     0,     0,     0,     7,     0,     0,
       0,     0,     8,     0,     7,     0,     0,     0,    83,     8,
       0,     9,     0,     0,     1,     2,     3,     4,     9,     5,
       6,     1,     2,     3,     4,     0,     5,     6,     0,     0,
       0,     7,     0,     0,   187,     0,     8,     0,     7,     0,
       0,   214,     0,     8,     0,     9,     0,     0,     1,     2,
       3,     4,     9,     5,     6,   200,   201,   202,   203,   204,
       0,   237,     0,     0,     0,     7,     0,     0,     0,     0,
       8,   200,   201,   202,   203,   204,     0,   248,     0,     9,
     200,   201,   202,   203,   204,     0,   251,    87,    88,    89,
      90,    91,    92
};

static const yytype_int16 yycheck[] =
{
       0,    51,    25,    26,     5,     7,    11,    56,     6,     7,
     183,     7,     5,     8,     9,    10,    11,     7,    13,    14,
       8,     9,    10,    11,    41,    13,    14,    32,    11,    11,
      25,    41,     7,   206,     6,    30,     7,    25,    31,    40,
      41,   229,    30,    44,    39,     7,     7,     8,    41,    32,
      32,    39,    47,    42,    43,   228,   105,   245,     7,    47,
       6,    41,   250,    68,    40,    41,   239,    42,    44,    41,
     243,    11,     0,   122,     8,    98,   249,    46,    83,    84,
     253,    42,     6,     7,     8,    68,    68,    46,     8,     9,
      10,    11,    32,    13,    14,    41,     6,     7,    41,     6,
       7,    84,    84,    11,   154,    25,    41,     7,     8,    41,
      30,    11,     6,    13,    14,    40,    26,    27,    47,    39,
      42,     6,     7,    42,   124,    11,     7,    47,    68,    40,
       6,     7,    32,    33,     6,     7,   136,   137,    42,    43,
      11,   141,     7,   143,    84,     4,    32,    42,     7,     8,
      11,    42,    11,    41,    13,    14,   161,    34,    35,    36,
      37,    38,    11,   168,   164,   170,    40,    41,    41,   174,
      23,    24,   177,    32,    33,   175,    84,    40,   161,   161,
       7,    43,    68,   188,    42,   168,   168,   170,   170,   194,
      46,   174,   174,    45,   177,   177,    47,     8,    84,    11,
      34,    35,    36,    37,    38,   188,   188,    46,    42,    46,
       5,   194,   194,    84,    34,    35,    36,    37,    38,    42,
      46,   161,    42,    84,    46,   225,   226,   232,   168,   234,
     170,    46,     9,    40,   174,    84,     7,   177,    40,     8,
       9,    10,    11,     8,    13,    14,    46,    44,   188,   232,
     232,   234,   234,   161,   194,     7,    25,     6,    40,    46,
     168,    30,   170,    47,     7,     7,   174,    42,    42,   177,
      39,    47,    84,    40,    42,   161,    40,    40,    47,     6,
     188,     6,   168,    40,   170,    40,   194,     6,   174,    12,
     161,   177,   232,    46,   234,    42,    40,   168,    46,   170,
     161,     6,   188,   174,    40,     6,   177,   168,   194,   170,
      47,     6,   161,   174,    47,     6,   177,   188,   126,   168,
     241,   170,   128,   194,   232,   174,   234,   188,   177,   130,
     214,    -1,    -1,   194,    68,     8,     9,    10,    11,   188,
      13,    14,    68,    -1,    68,   194,   232,    68,   234,   161,
      68,    68,    25,    -1,   108,    -1,   168,    30,   170,    -1,
      -1,   232,   174,   234,    -1,   177,    39,    -1,    -1,    -1,
      -1,   232,    -1,   234,    47,    -1,   188,    -1,    -1,    -1,
      -1,    -1,   194,   232,    -1,   234,     8,     9,    10,    11,
      -1,    13,    14,     8,     9,    10,    11,    -1,    13,    14,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    39,    -1,    -1,
     232,    -1,   234,    -1,    39,    47,    -1,    -1,     8,     9,
      10,    11,    47,    13,    14,     8,     9,    10,    11,    -1,
      13,    14,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    39,
      34,    35,    36,    37,    38,     3,    39,    47,    42,    -1,
       8,     9,    10,    11,    47,    13,    14,     8,     9,    10,
      11,    -1,    13,    14,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    25,    -1,    -1,    -1,    29,    30,
      -1,    39,    -1,    -1,     8,     9,    10,    11,    39,    13,
      14,     8,     9,    10,    11,    -1,    13,    14,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    -1,    25,    -1,
      -1,    28,    -1,    30,    -1,    39,    -1,    -1,     8,     9,
      10,    11,    39,    13,    14,    34,    35,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    34,    35,    36,    37,    38,    -1,    40,    -1,    39,
      34,    35,    36,    37,    38,    -1,    40,    15,    16,    17,
      18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    10,    11,    13,    14,    25,    30,    39,
      49,    50,    51,    54,    56,    59,    61,    63,    67,    70,
      72,    73,     7,     7,     7,    41,    41,    41,     7,     7,
       7,     0,     3,    51,    54,    56,    59,    61,    63,    67,
      70,    72,    73,    74,    40,    41,    44,    55,    46,    46,
       6,     7,    58,    58,     8,    64,    41,    41,    41,     7,
       8,    32,    33,    51,    54,    59,    61,    63,    75,    76,
      78,    79,    80,    81,    84,     7,     8,    42,    52,    53,
      68,     6,    40,    29,    50,    71,    47,    15,    16,    17,
      18,    19,    20,    57,    57,    42,    42,     7,    40,    42,
      68,    42,    42,     5,    31,    41,     7,    41,    41,     4,
      51,    54,    59,    61,    63,    76,    78,    79,    80,    81,
      84,    40,    43,     7,    46,    42,    43,    42,    45,     8,
      51,    47,     6,     7,     6,     7,    46,    46,     5,    58,
      65,    46,    42,    46,    46,     6,     7,     9,     6,    68,
      77,     5,    41,     6,     7,     8,    58,    82,    82,    40,
      68,    50,    40,    53,    46,    55,     7,    71,    50,    47,
      50,    62,     6,    40,    50,    46,    47,    50,    47,     7,
      42,    42,    43,     6,    41,    42,    42,    28,    50,    47,
      47,     7,    66,    47,    50,    47,    40,    40,    40,     6,
      34,    35,    36,    37,    38,    83,     6,    40,    40,     6,
       7,    26,    27,    69,    28,    12,    60,    23,    24,    42,
      47,     6,    83,    40,    69,    46,    46,    83,    85,     6,
      47,    40,    50,    47,    50,     6,    41,    40,    83,    85,
      47,    47,    47,     6,     6,    42,    60,    83,    40,    85,
       6,    40,    42,    85,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    52,    52,    53,    54,    55,
      55,    56,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    62,
      63,    63,    63,    64,    65,    66,    66,    67,    67,    67,
      67,    68,    68,    69,    69,    69,    69,    70,    71,    71,
      72,    72,    73,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    78,    79,    80,    81,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    84,    84,    84,    85,    85,    85,
      85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     3,     6,     1,     3,     2,     4,     3,
       4,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     4,     7,     8,     4,     5,     6,     7,     1,
       8,    10,    11,     4,     1,     2,     2,    10,     7,    11,
       8,     1,     3,     1,     1,     1,     1,     5,     3,     1,
       6,     7,     7,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     3,     3,     4,     1,
       3,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     8,    10,    11,     2,     3,     7,
       6
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
#line 24 "limbaj.y"
                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1393 "limbaj.tab.c"
    break;

  case 23: /* decl: TYPE ID ';'  */
#line 50 "limbaj.y"
                          { 
                              if(!current->existsId((yyvsp[-1].string))) {
                                    current->addVar((yyvsp[-2].string),(yyvsp[-1].string));
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
#line 1406 "limbaj.tab.c"
    break;

  case 28: /* arrays: TYPE ID array_dimensions ';'  */
#line 71 "limbaj.y"
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
#line 1422 "limbaj.tab.c"
    break;

  case 31: /* empty_class: EMPTY_CLASS ID '{' '}'  */
#line 92 "limbaj.y"
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
#line 1438 "limbaj.tab.c"
    break;

  case 60: /* function: VOID ID '(' function_antet ')' '{' declarations '}'  */
#line 162 "limbaj.y"
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
#line 1455 "limbaj.tab.c"
    break;

  case 67: /* classes: CLASS ID '{' class_body '}'  */
#line 188 "limbaj.y"
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
#line 1472 "limbaj.tab.c"
    break;


#line 1476 "limbaj.tab.c"

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

#line 278 "limbaj.y"

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
