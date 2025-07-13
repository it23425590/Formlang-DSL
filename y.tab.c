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
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "form.h"

extern int yylex();
extern FILE *yyin;
extern FILE *yyout;
extern char *yytext;
extern int yylineno;
void yyerror(const char *s);

Form *current_form = NULL;
Section *current_section = NULL;
Field *current_field = NULL;

#line 89 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FORM = 258,                    /* FORM  */
    META = 259,                    /* META  */
    AUTHOR = 260,                  /* AUTHOR  */
    SECTION = 261,                 /* SECTION  */
    FIELD = 262,                   /* FIELD  */
    VALIDATE = 263,                /* VALIDATE  */
    IF = 264,                      /* IF  */
    REQUIRED = 265,                /* REQUIRED  */
    PATTERN = 266,                 /* PATTERN  */
    DEFAULT = 267,                 /* DEFAULT  */
    MIN = 268,                     /* MIN  */
    MAX = 269,                     /* MAX  */
    ROWS = 270,                    /* ROWS  */
    COLS = 271,                    /* COLS  */
    ACCEPT = 272,                  /* ACCEPT  */
    OPTIONS = 273,                 /* OPTIONS  */
    EQUALS = 274,                  /* EQUALS  */
    COLON = 275,                   /* COLON  */
    SEMICOLON = 276,               /* SEMICOLON  */
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    LBRACKET = 279,                /* LBRACKET  */
    RBRACKET = 280,                /* RBRACKET  */
    COMMA = 281,                   /* COMMA  */
    LT = 282,                      /* LT  */
    GT = 283,                      /* GT  */
    EQ = 284,                      /* EQ  */
    NEQ = 285,                     /* NEQ  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    BOOLEAN = 290,                 /* BOOLEAN  */
    NUM = 291,                     /* NUM  */
    STRING = 292,                  /* STRING  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    TYPE = 294                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FORM 258
#define META 259
#define AUTHOR 260
#define SECTION 261
#define FIELD 262
#define VALIDATE 263
#define IF 264
#define REQUIRED 265
#define PATTERN 266
#define DEFAULT 267
#define MIN 268
#define MAX 269
#define ROWS 270
#define COLS 271
#define ACCEPT 272
#define OPTIONS 273
#define EQUALS 274
#define COLON 275
#define SEMICOLON 276
#define LBRACE 277
#define RBRACE 278
#define LBRACKET 279
#define RBRACKET 280
#define COMMA 281
#define LT 282
#define GT 283
#define EQ 284
#define NEQ 285
#define LE 286
#define GE 287
#define AND 288
#define OR 289
#define BOOLEAN 290
#define NUM 291
#define STRING 292
#define IDENTIFIER 293
#define TYPE 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "yacc.y"

    char *string;
    int number;
    int boolean;
    FieldType field_type;
    Form *form;
    Section *section;
    Field *field;
    Option *option;

#line 231 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FORM = 3,                       /* FORM  */
  YYSYMBOL_META = 4,                       /* META  */
  YYSYMBOL_AUTHOR = 5,                     /* AUTHOR  */
  YYSYMBOL_SECTION = 6,                    /* SECTION  */
  YYSYMBOL_FIELD = 7,                      /* FIELD  */
  YYSYMBOL_VALIDATE = 8,                   /* VALIDATE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_REQUIRED = 10,                  /* REQUIRED  */
  YYSYMBOL_PATTERN = 11,                   /* PATTERN  */
  YYSYMBOL_DEFAULT = 12,                   /* DEFAULT  */
  YYSYMBOL_MIN = 13,                       /* MIN  */
  YYSYMBOL_MAX = 14,                       /* MAX  */
  YYSYMBOL_ROWS = 15,                      /* ROWS  */
  YYSYMBOL_COLS = 16,                      /* COLS  */
  YYSYMBOL_ACCEPT = 17,                    /* ACCEPT  */
  YYSYMBOL_OPTIONS = 18,                   /* OPTIONS  */
  YYSYMBOL_EQUALS = 19,                    /* EQUALS  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 21,                 /* SEMICOLON  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 24,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 25,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_BOOLEAN = 35,                   /* BOOLEAN  */
  YYSYMBOL_NUM = 36,                       /* NUM  */
  YYSYMBOL_STRING = 37,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_start = 41,                     /* start  */
  YYSYMBOL_form = 42,                      /* form  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_meta = 44,                      /* meta  */
  YYSYMBOL_sections = 45,                  /* sections  */
  YYSYMBOL_section = 46,                   /* section  */
  YYSYMBOL_47_2 = 47,                      /* $@2  */
  YYSYMBOL_fields = 48,                    /* fields  */
  YYSYMBOL_field = 49,                     /* field  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_attributes = 51,                /* attributes  */
  YYSYMBOL_attribute = 52,                 /* attribute  */
  YYSYMBOL_option_list = 53,               /* option_list  */
  YYSYMBOL_option = 54                     /* option  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   59

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  29
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  65

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    52,    52,    63,    64,    71,    72,    82,
      82,    93,    94,   104,   104,   123,   124,   127,   132,   138,
     144,   150,   156,   162,   168,   174,   180,   188,   191,   201
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
  "\"end of file\"", "error", "\"invalid token\"", "FORM", "META",
  "AUTHOR", "SECTION", "FIELD", "VALIDATE", "IF", "REQUIRED", "PATTERN",
  "DEFAULT", "MIN", "MAX", "ROWS", "COLS", "ACCEPT", "OPTIONS", "EQUALS",
  "COLON", "SEMICOLON", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET",
  "COMMA", "LT", "GT", "EQ", "NEQ", "LE", "GE", "AND", "OR", "BOOLEAN",
  "NUM", "STRING", "IDENTIFIER", "TYPE", "$accept", "start", "form", "$@1",
  "meta", "sections", "section", "$@2", "fields", "field", "$@3",
  "attributes", "attribute", "option_list", "option", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       6,   -26,    11,   -28,   -28,   -28,    -9,    12,    10,    13,
      -2,   -19,    -3,    13,   -16,   -28,   -28,   -28,     1,     2,
     -28,    16,   -13,     3,    16,     7,   -28,   -28,   -11,   -28,
     -10,   -28,    14,    15,    17,    18,    19,    20,    21,    -8,
       9,   -10,    -6,   -27,    -4,    -1,     5,     8,    22,   -28,
      23,    24,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,    -8,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     1,     0,     5,     0,     7,
       0,     0,     0,     7,     0,     9,     4,     8,     0,     0,
       6,    11,     0,     0,    11,     0,    10,    12,     0,    13,
      15,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    27,    14,    16,    18,    20,    19,    21,    22,    23,
      24,    25,    26,     0,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,   -28,   -28,   -28,    29,   -28,   -28,    25,   -28,
     -28,     4,   -28,   -20,   -28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     6,     9,    12,    13,    19,    23,    24,
      30,    40,    41,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      31,    32,    33,    34,    35,    36,    37,    38,    55,     1,
      56,     5,     4,     7,    39,    10,     8,    14,    15,    11,
      16,    18,    20,    22,    21,    25,    26,    28,    29,    49,
      52,    54,    57,    42,    43,    58,    44,    45,    46,    47,
      48,    59,    17,    64,    60,    53,     0,     0,    62,    27,
      63,     0,     0,     0,     0,     0,     0,     0,     0,    61
};

static const yytype_int8 yycheck[] =
{
      10,    11,    12,    13,    14,    15,    16,    17,    35,     3,
      37,     0,    38,    22,    24,     5,     4,    19,    37,     6,
      23,    37,    21,     7,    22,    38,    23,    20,    39,    37,
      21,    37,    36,    19,    19,    36,    19,    19,    19,    19,
      19,    36,    13,    63,    36,    41,    -1,    -1,    25,    24,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    41,    42,    38,     0,    43,    22,     4,    44,
       5,     6,    45,    46,    19,    37,    23,    45,    37,    47,
      21,    22,     7,    48,    49,    38,    23,    48,    20,    39,
      50,    10,    11,    12,    13,    14,    15,    16,    17,    24,
      51,    52,    19,    19,    19,    19,    19,    19,    19,    37,
      53,    54,    21,    51,    37,    35,    37,    36,    36,    36,
      36,    37,    25,    26,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    43,    42,    44,    44,    45,    45,    47,
      46,    48,    48,    50,    49,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    53,    53,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     7,     0,     5,     0,     2,     0,
       6,     0,     2,     0,     7,     0,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1
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
  case 2: /* start: form  */
#line 46 "yacc.y"
            {
    generate_html((yyvsp[0].form), yyout);
    free_form((yyvsp[0].form));
}
#line 1299 "y.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 52 "yacc.y"
                      {
    current_form = (Form *)malloc(sizeof(Form));
    current_form->name = (yyvsp[0].string);
    current_form->author = NULL;
    current_form->sections = NULL;
}
#line 1310 "y.tab.c"
    break;

  case 4: /* form: FORM IDENTIFIER $@1 LBRACE meta sections RBRACE  */
#line 57 "yacc.y"
                              {
    current_form->sections = (yyvsp[-1].section);
    (yyval.form) = current_form;
}
#line 1319 "y.tab.c"
    break;

  case 6: /* meta: META AUTHOR EQUALS STRING SEMICOLON  */
#line 64 "yacc.y"
                                          {
        if (current_form) {
            current_form->author = (yyvsp[-1].string);
        }
    }
#line 1329 "y.tab.c"
    break;

  case 7: /* sections: %empty  */
#line 71 "yacc.y"
                      { (yyval.section) = NULL; }
#line 1335 "y.tab.c"
    break;

  case 8: /* sections: section sections  */
#line 72 "yacc.y"
                       {
        if ((yyvsp[-1].section)) {
            (yyvsp[-1].section)->next = (yyvsp[0].section);
            (yyval.section) = (yyvsp[-1].section);
        } else {
            (yyval.section) = (yyvsp[0].section);
        }
    }
#line 1348 "y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 82 "yacc.y"
                        {
    current_section = (Section *)malloc(sizeof(Section));
    current_section->name = (yyvsp[0].string);
    current_section->fields = NULL;
    current_section->next = NULL;
}
#line 1359 "y.tab.c"
    break;

  case 10: /* section: SECTION STRING $@2 LBRACE fields RBRACE  */
#line 87 "yacc.y"
                       {
    current_section->fields = (yyvsp[-1].field);
    (yyval.section) = current_section;
}
#line 1368 "y.tab.c"
    break;

  case 11: /* fields: %empty  */
#line 93 "yacc.y"
                    { (yyval.field) = NULL; }
#line 1374 "y.tab.c"
    break;

  case 12: /* fields: field fields  */
#line 94 "yacc.y"
                   {
        if ((yyvsp[-1].field)) {
            (yyvsp[-1].field)->next = (yyvsp[0].field);
            (yyval.field) = (yyvsp[-1].field);
        } else {
            (yyval.field) = (yyvsp[0].field);
        }
    }
#line 1387 "y.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 104 "yacc.y"
                                   {
    current_field = (Field *)malloc(sizeof(Field));
    current_field->name = (yyvsp[-2].string);
    current_field->type = (yyvsp[0].field_type);
    current_field->attributes = 0;
    current_field->pattern = NULL;
    current_field->default_value = NULL;
    current_field->min_value = 0;
    current_field->max_value = 0;
    current_field->rows = 0;
    current_field->cols = 0;
    current_field->accept = NULL;
    current_field->options = NULL;
    current_field->next = NULL;
}
#line 1407 "y.tab.c"
    break;

  case 14: /* field: FIELD IDENTIFIER COLON TYPE $@3 attributes SEMICOLON  */
#line 118 "yacc.y"
                       {
    (yyval.field) = current_field;
}
#line 1415 "y.tab.c"
    break;

  case 17: /* attribute: REQUIRED  */
#line 127 "yacc.y"
                    {
    if (current_field) {
        current_field->attributes |= ATTR_REQUIRED;
    }
}
#line 1425 "y.tab.c"
    break;

  case 18: /* attribute: PATTERN EQUALS STRING  */
#line 132 "yacc.y"
                            {
    if (current_field) {
        current_field->attributes |= ATTR_PATTERN;
        current_field->pattern = (yyvsp[0].string);
    }
}
#line 1436 "y.tab.c"
    break;

  case 19: /* attribute: DEFAULT EQUALS STRING  */
#line 138 "yacc.y"
                            {
    if (current_field) {
        current_field->attributes |= ATTR_DEFAULT;
        current_field->default_value = (yyvsp[0].string);
    }
}
#line 1447 "y.tab.c"
    break;

  case 20: /* attribute: DEFAULT EQUALS BOOLEAN  */
#line 144 "yacc.y"
                             {
    if (current_field) {
        current_field->attributes |= ATTR_DEFAULT;
        current_field->default_value = (yyvsp[0].boolean) ? strdup("true") : strdup("false");
    }
}
#line 1458 "y.tab.c"
    break;

  case 21: /* attribute: MIN EQUALS NUM  */
#line 150 "yacc.y"
                     {
    if (current_field) {
        current_field->attributes |= ATTR_MIN;
        current_field->min_value = (yyvsp[0].number);
    }
}
#line 1469 "y.tab.c"
    break;

  case 22: /* attribute: MAX EQUALS NUM  */
#line 156 "yacc.y"
                     {
    if (current_field) {
        current_field->attributes |= ATTR_MAX;
        current_field->max_value = (yyvsp[0].number);
    }
}
#line 1480 "y.tab.c"
    break;

  case 23: /* attribute: ROWS EQUALS NUM  */
#line 162 "yacc.y"
                      {
    if (current_field) {
        current_field->attributes |= ATTR_ROWS;
        current_field->rows = (yyvsp[0].number);
    }
}
#line 1491 "y.tab.c"
    break;

  case 24: /* attribute: COLS EQUALS NUM  */
#line 168 "yacc.y"
                      {
    if (current_field) {
        current_field->attributes |= ATTR_COLS;
        current_field->cols = (yyvsp[0].number);
    }
}
#line 1502 "y.tab.c"
    break;

  case 25: /* attribute: ACCEPT EQUALS STRING  */
#line 174 "yacc.y"
                           {
    if (current_field) {
        current_field->attributes |= ATTR_ACCEPT;
        current_field->accept = (yyvsp[0].string);
    }
}
#line 1513 "y.tab.c"
    break;

  case 26: /* attribute: LBRACKET option_list RBRACKET  */
#line 180 "yacc.y"
                                    {
    if (current_field) {
        current_field->attributes |= ATTR_OPTIONS;
        current_field->options = (yyvsp[-1].option);
    }
}
#line 1524 "y.tab.c"
    break;

  case 27: /* option_list: option  */
#line 188 "yacc.y"
                    {
    (yyval.option) = (yyvsp[0].option);
}
#line 1532 "y.tab.c"
    break;

  case 28: /* option_list: option COMMA option_list  */
#line 191 "yacc.y"
                               {
    if ((yyvsp[-2].option)) {
        (yyvsp[-2].option)->next = (yyvsp[0].option);
        (yyval.option) = (yyvsp[-2].option);
    } else {
        (yyval.option) = (yyvsp[0].option);
    }
}
#line 1545 "y.tab.c"
    break;

  case 29: /* option: STRING  */
#line 201 "yacc.y"
               {
    Option *opt = (Option *)malloc(sizeof(Option));
    opt->value = (yyvsp[0].string);
    opt->next = NULL;
    (yyval.option) = opt;
}
#line 1556 "y.tab.c"
    break;


#line 1560 "y.tab.c"

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

#line 209 "yacc.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s near '%s'\n", yylineno, s, yytext);
}

void generate_html(Form *form, FILE *output) {
    if (!form || !output) return;
    
    // HTML header
    fprintf(output, "<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n");
    fprintf(output, "  <meta charset=\"UTF-8\" />\n");
    fprintf(output, "  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>\n");
    
    if (form->author) {
        fprintf(output, "  <meta name=\"author\" content=\"%s\" />\n", form->author);
    }
    
    fprintf(output, "  <title>%s Form</title>\n", form->name);
    
    // Google Fonts
    fprintf(output, "  <link href=\"https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700&display=swap\" rel=\"stylesheet\">\n");
    
    // Optimized CSS
    fprintf(output, "  <style>\n");
    fprintf(output, "    :root {\n");
    fprintf(output, "      --primary: #2e86c1; --primary-hover: #2574a9; --secondary: #2e86c1;\n");
    fprintf(output, "      --success: #38b000; --error: #d90429; --text: #333; --text-light: #666;\n");
    fprintf(output, "      --border: #ddd; --bg: #f8f9fa; --card: #fff; --section: #f8faff;\n");
    fprintf(output, "      --shadow: 0 10px 30px rgba(0,0,0,0.08); --radius: 8px; --transition: all 0.3s ease;\n");
    fprintf(output, "    }\n");
    
    fprintf(output, "    body { font-family: 'Inter', sans-serif; background: var(--bg); color: var(--text); line-height: 1.6; margin: 0; padding: 40px 20px; }\n");
    fprintf(output, "    form { background: var(--card); max-width: 800px; margin: 0 auto 60px; padding: 40px; border-radius: var(--radius); box-shadow: var(--shadow); position: relative; overflow: hidden; }\n");
    fprintf(output, "    form::before { content: \"\"; position: absolute; top: 0; left: 0; width: 100%%; height: 6px; background: linear-gradient(90deg, var(--primary), var(--secondary)); }\n");
    
    fprintf(output, "    h1 { color: var(--primary); margin: 0 0 30px; font-weight: 700; font-size: 32px; text-align: center; position: relative; padding-bottom: 15px; }\n");
    fprintf(output, "    h1::after { content: \"\"; position: absolute; bottom: 0; left: 50%%; transform: translateX(-50%%); width: 80px; height: 4px; background: var(--primary); border-radius: 2px; }\n");
    
    fprintf(output, "    .section { margin-bottom: 35px; padding: 25px; border-radius: var(--radius); background: var(--section); border: 1px solid var(--border); transition: var(--transition); animation: fadeIn 0.5s ease forwards; }\n");
    fprintf(output, "    .section:hover { box-shadow: 0 5px 15px rgba(0,0,0,0.05); }\n");
    fprintf(output, "    .section:nth-child(2) { animation-delay: 0.1s; }\n");
    fprintf(output, "    .section:nth-child(3) { animation-delay: 0.2s; }\n");
    
    fprintf(output, "    h2 { color: var(--secondary); margin: 0 0 20px; font-size: 22px; font-weight: 600; border-bottom: 2px solid var(--border); padding-bottom: 10px; }\n");
    
    fprintf(output, "    .field { margin-bottom: 24px; }\n");
    fprintf(output, "    .field:last-child { margin-bottom: 0; }\n");
    
    fprintf(output, "    label { display: block; margin-bottom: 8px; font-weight: 500; color: var(--text); font-size: 15px; }\n");
    
    fprintf(output, "    input[type=\"text\"], input[type=\"email\"], input[type=\"number\"], input[type=\"password\"], input[type=\"date\"],\n");
    fprintf(output, "    select, textarea { width: 100%%; padding: 12px 16px; border: 1px solid var(--border); border-radius: var(--radius);\n");
    fprintf(output, "      font-size: 15px; color: var(--text); background: #fff; transition: var(--transition); box-sizing: border-box; }\n");
    
    fprintf(output, "    input:focus, select:focus, textarea:focus { outline: none; border-color: var(--primary); box-shadow: 0 0 0 3px rgba(67,97,238,0.15); }\n");
    fprintf(output, "    input::placeholder, textarea::placeholder { color: #aaa; }\n");
    
    fprintf(output, "    input[type=\"file\"] { padding: 10px; background: #f5f7ff; border: 1px dashed var(--primary); border-radius: var(--radius); cursor: pointer; }\n");
    fprintf(output, "    input[type=\"file\"]:hover { background: #eef1ff; }\n");
    
    fprintf(output, "    .radio-group, .checkbox-group { display: flex; gap: 24px; flex-wrap: wrap; margin-top: 8px; }\n");
    fprintf(output, "    .radio-option { display: flex; align-items: center; cursor: pointer; }\n");
    
    fprintf(output, "    input[type=\"radio\"], input[type=\"checkbox\"] { accent-color: var(--primary); width: 18px; height: 18px; margin-right: 8px; cursor: pointer; }\n");
    
    fprintf(output, "    button { background: linear-gradient(to right, #0062cc, #0097b2); color: white; padding: 14px 28px; border: none;\n");
    fprintf(output, "      border-radius: var(--radius); cursor: pointer; font-size: 16px; font-weight: 600; letter-spacing: 0.5px;\n");
    fprintf(output, "      transition: var(--transition); display: block; margin: 40px auto 0; box-shadow: 0 4px 12px rgba(0,98,204,0.3); }\n");
    fprintf(output, "    button:hover { transform: translateY(-2px); box-shadow: 0 6px 16px rgba(0,98,204,0.4); }\n");
    fprintf(output, "    button:active { transform: translateY(0); }\n");
    
    fprintf(output, "    /* Required field indicator */\n");
    fprintf(output, "    label[for=\"fullName\"]::after, label[for=\"email\"]::after, label[for=\"username\"]::after,\n");
    fprintf(output, "    label[for=\"password\"]::after, label[for=\"birthdate\"]::after { content: \" *\"; color: var(--error); }\n");
    
    fprintf(output, "    /* Validation styling */\n");
    fprintf(output, "    input:invalid:not(:placeholder-shown) { border-color: var(--error); }\n");
    fprintf(output, "    input:valid:not(:placeholder-shown) { border-color: var(--success); }\n");
    
    fprintf(output, "    /* Responsive adjustments */\n");
    fprintf(output, "    @media (max-width: 768px) {\n");
    fprintf(output, "      form { padding: 30px 20px; }\n");
    fprintf(output, "      .section { padding: 20px 15px; }\n");
    fprintf(output, "      .radio-group { flex-direction: column; gap: 12px; }\n");
    fprintf(output, "    }\n");
    
    fprintf(output, "    /* Custom checkbox styling */\n");
    fprintf(output, "    .checkbox-field { display: flex; align-items: center; }\n");
    fprintf(output, "    .checkbox-field label { margin-bottom: 0; cursor: pointer; }\n");
    
    fprintf(output, "    /* Animations */\n");
    fprintf(output, "    @keyframes fadeIn { from { opacity: 0; transform: translateY(20px); } to { opacity: 1; transform: translateY(0); } }\n");
    
    fprintf(output, "    /* Additional professional touches */\n");
    fprintf(output, "    textarea { resize: vertical; min-height: 100px; }\n");
    fprintf(output, "    select { appearance: none; background-image: url(\"data:image/svg+xml;charset=UTF-8,%%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' fill='none' stroke='%%23333' stroke-width='2' stroke-linecap='round' stroke-linejoin='round'%%3e%%3cpolyline points='6 9 12 15 18 9'%%3e%%3c/polyline%%3e%%3c/svg%%3e\");\n");
    fprintf(output, "      background-repeat: no-repeat; background-position: right 12px center; background-size: 16px; padding-right: 40px; }\n");
    
    fprintf(output, "    /* Focus visible for accessibility */\n");
    fprintf(output, "    :focus-visible { outline: 3px solid rgba(67,97,238,0.5); outline-offset: 2px; }\n");
    
    fprintf(output, "    /* Dark mode support */\n");
    fprintf(output, "    @media (prefers-color-scheme: dark) {\n");
    fprintf(output, "      :root {\n");
    fprintf(output, "        --primary: #4361ee; --primary-hover: #5a72f0; --secondary: #9d4edd; --text: #e1e1e1;\n");
    fprintf(output, "        --text-light: #b0b0b0; --border: #444; --bg: #121212; --card: #1e1e1e; --section: #252525;\n");
    fprintf(output, "      }\n");
    fprintf(output, "      input[type=\"text\"], input[type=\"email\"], input[type=\"number\"], input[type=\"password\"],\n");
    fprintf(output, "      select, textarea { background: #2a2a2a; color: var(--text); }\n");
    fprintf(output, "      input[type=\"file\"] { background: #2a2a2a; }\n");
    fprintf(output, "      input::placeholder, textarea::placeholder { color: #777; }\n");
    fprintf(output, "      select { background-image: url(\"data:image/svg+xml;charset=UTF-8,%%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' fill='none' stroke='%%23e1e1e1' stroke-width='2' stroke-linecap='round' stroke-linejoin='round'%%3e%%3cpolyline points='6 9 12 15 18 9'%%3e%%3c/polyline%%3e%%3c/svg%%3e\"); }\n");
    fprintf(output, "    }\n");
    fprintf(output, "  </style>\n");
    fprintf(output, "</head>\n<body>\n");
    
    // Form start
    fprintf(output, "  <form id=\"%sForm\" method=\"POST\" enctype=\"multipart/form-data\" aria-label=\"User Registration Form\">\n", form->name);
    fprintf(output, "    <h1>%s Form</h1>\n", form->name);
    
    // Sections and fields
    int section_count = 0;
    Section *section = form->sections;
    while (section) {
        section_count++;
        char section_id[100];
        sprintf(section_id, "%s-section-%d", form->name, section_count);
        
        fprintf(output, "\n    <section class=\"section\" aria-labelledby=\"%s\">\n", section_id);
        fprintf(output, "      <h2 id=\"%s\">%s</h2>\n\n", section_id, section->name);
        
        Field *field = section->fields;
        while (field) {
            // Generate HTML based on field type
            switch (field->type) {
                case FIELD_TEXT:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"text\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    
                    if (field->attributes & ATTR_PATTERN) {
                        fprintf(output, " pattern=\"%s\"", field->pattern);
                        
                        if (strcmp(field->name, "phone") == 0) {
                            fprintf(output, " title=\"Please enter a 10-digit phone number like 1234567890\"");
                            fprintf(output, " placeholder=\"10-digit phone number (e.g., 1234567890)\"");
                        } else if (strcmp(field->name, "username") == 0) {
                            fprintf(output, " title=\"Username must be 5-20 characters long and can only contain letters, numbers, and underscores\"");
                            fprintf(output, " placeholder=\"5-20 characters: letters, numbers, underscores only\"");
                        } else {
                            fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                        }
                    } else {
                        fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    }
                    
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_TEXTAREA:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <textarea id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_ROWS) fprintf(output, " rows=\"%d\"", field->rows);
                    if (field->attributes & ATTR_COLS) fprintf(output, " cols=\"%d\"", field->cols);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, ">");
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, "%s", field->default_value);
                    fprintf(output, "</textarea>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_NUMBER:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"number\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_MIN) fprintf(output, " min=\"%d\"", field->min_value);
                    if (field->attributes & ATTR_MAX) fprintf(output, " max=\"%d\"", field->max_value);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    
                    if ((field->attributes & ATTR_MIN) && (field->attributes & ATTR_MAX)) {
                        fprintf(output, " placeholder=\"Your %s (%d-%d)\"", field->name, field->min_value, field->max_value);
                    } else {
                        fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    }
                    
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_EMAIL:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"email\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_PATTERN) fprintf(output, " pattern=\"%s\"", field->pattern);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    fprintf(output, " placeholder=\"your.email@gmail.com\"");
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_DATE:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"date\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_MIN) fprintf(output, " min=\"%d\"", field->min_value);
                    if (field->attributes & ATTR_MAX) fprintf(output, " max=\"%d\"", field->max_value);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_CHECKBOX:
                    fprintf(output, "      <div class=\"field checkbox-field\">\n");
                    fprintf(output, "        <input type=\"checkbox\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_DEFAULT && strcmp(field->default_value, "true") == 0) {
                        fprintf(output, " checked");
                    }
                    fprintf(output, " />\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_DROPDOWN:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <select id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    fprintf(output, ">\n");
                    
                    fprintf(output, "          <option value=\"\" disabled selected>Select your %s</option>\n", field->name);
                    
                    if (field->attributes & ATTR_OPTIONS) {
                        Option *option = field->options;
                        while (option) {
                            fprintf(output, "          <option value=\"%s\"", option->value);
                            if (field->attributes & ATTR_DEFAULT && field->default_value && strcmp(field->default_value, option->value) == 0) {
                                fprintf(output, " selected");
                            }
                            fprintf(output, ">%s</option>\n", option->value);
                            option = option->next;
                        }
                    }
                    
                    fprintf(output, "        </select>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_RADIO:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label>%s</label>\n", field->name);
                    fprintf(output, "        <div class=\"radio-group\">\n");
                    
                    if (field->attributes & ATTR_OPTIONS) {
                        Option *radio_option = field->options;
                        int option_index = 0;
                        while (radio_option) {
                            fprintf(output, "          <label class=\"radio-option\">");
                            fprintf(output, "<input type=\"radio\" name=\"%s\" value=\"%s\"", 
                                    field->name, radio_option->value);
                            
                            if (field->attributes & ATTR_DEFAULT && field->default_value && strcmp(field->default_value, radio_option->value) == 0) {
                                fprintf(output, " checked");
                            }
                            
                            if (field->attributes & ATTR_REQUIRED && option_index == 0) {
                                fprintf(output, " required");
                            }
                            
                            fprintf(output, " /> %s</label>\n", radio_option->value);
                            
                            radio_option = radio_option->next;
                            option_index++;
                        }
                    }
                    
                    fprintf(output, "        </div>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_PASSWORD:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"password\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_PATTERN) fprintf(output, " pattern=\"%s\"", field->pattern);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_FILE:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"file\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_ACCEPT) fprintf(output, " accept=\"%s\"", field->accept);
                    else fprintf(output, " accept=\"image/*\"");
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                default:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"text\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
            }
            
            field = field->next;
        }
        
        fprintf(output, "    </section>\n");
        section = section->next;
    }
    
    // Submit button
    fprintf(output, "\n    <button type=\"submit\">Create Account</button>\n");
    
    // Form end
    fprintf(output, "  </form>\n\n");
    
    // Add JavaScript for form validation
    fprintf(output, "  <script>\n");
    fprintf(output, "    document.getElementById('%sForm').addEventListener('submit', function(event) {\n", form->name);
    fprintf(output, "      const password = document.getElementById('password');\n");
    fprintf(output, "      const confirmPassword = document.getElementById('confirmPassword');\n");
    fprintf(output, "      if (password && confirmPassword && password.value !== confirmPassword.value) {\n");
    fprintf(output, "        event.preventDefault();\n");
    fprintf(output, "        alert('Passwords do not match!');\n");
    fprintf(output, "      } else if (this.checkValidity()) {\n");
    fprintf(output, "        alert('Form submitted successfully!');\n");
    fprintf(output, "      }\n");
    fprintf(output, "    });\n");
    fprintf(output, "  </script>\n");
    
    fprintf(output, "</body>\n</html>\n");
}

// Memory management functions
void free_options(Option *option) {
    while (option) {
        Option *next = option->next;
        free(option->value);
        free(option);
        option = next;
    }
}

void free_fields(Field *field) {
    while (field) {
        Field *next = field->next;
        free(field->name);
        if (field->pattern) free(field->pattern);
        if (field->default_value) free(field->default_value);
        if (field->accept) free(field->accept);
        free_options(field->options);
        free(field);
        field = next;
    }
}

void free_sections(Section *section) {
    while (section) {
        Section *next = section->next;
        free(section->name);
        free_fields(section->fields);
        free(section);
        section = next;
    }
}

void free_form(Form *form) {
    if (!form) return;
    free(form->name);
    if (form->author) free(form->author);
    free_sections(form->sections);
    free(form);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Cannot open input file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }
    
    if (argc > 2) {
        yyout = fopen(argv[2], "w");
        if (!yyout) {
            fprintf(stderr, "Error: Cannot open output file %s\n", argv[2]);
            return 1;
        }
    } else {
        yyout = stdout;
    }
    
    fprintf(stderr, "Starting to parse file...\n");
    int result = yyparse();
    fprintf(stderr, "Parse result: %d\n", result);
    
    if (yyin != stdin) fclose(yyin);
    if (yyout != stdout) fclose(yyout);
    
    return result;
}
