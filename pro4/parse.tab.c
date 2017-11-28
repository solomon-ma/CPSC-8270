/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */


    #include "includes/ast.h"
    #include <iostream>
    #include <string>
    #include <stack>

	int yylex (void);
	extern char *yytext;
    extern int yylineno;
	void yyerror (const char *);
    int complexity = 1;  
    int isfinally = 0;
    int trycomplexity = 0;
    int tmp = 0;

	PoolOfNodes& pool = PoolOfNodes::getInstance();

       
    struct funcInfo
    {
        int line;
        std::string funcname;
        int column;
        int complexity = 1;

    }func;

    void reverse(std::stack<struct funcInfo>);
    void yyerror (const char *s);
    
    std::stack<funcInfo> f;


#line 101 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    STRING = 334,
    TILDE = 335,
    TRY = 336,
    VBAREQUAL = 337,
    WHILE = 338,
    WITH = 339,
    YIELD = 340,
    INT = 341,
    FLOAT = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "includes/parse.y" /* yacc.c:355  */

    Node* node;
    int intNumber;
    float fltNumber;
    char *str;
    char op;


#line 238 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 269 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  478

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    78,    84,    85,    88,    89,    92,    93,
      96,    97,   100,   101,   104,   105,   108,   134,   135,   138,
     139,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   162,   163,   166,   167,   170,   171,   174,   175,   178,
     179,   182,   183,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   197,   267,   288,   289,   292,   296,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     313,   318,   321,   322,   325,   326,   329,   330,   333,   334,
     337,   340,   343,   344,   345,   346,   347,   350,   353,   356,
     357,   360,   363,   364,   367,   368,   371,   372,   375,   376,
     379,   382,   385,   386,   389,   390,   391,   394,   395,   398,
     399,   402,   403,   406,   407,   410,   411,   414,   415,   418,
     421,   422,   425,   426,   429,   430,   433,   434,   435,   436,
     436,   437,   438,   439,   440,   443,   444,   447,   448,   451,
     452,   455,   456,   459,   466,   469,   470,   473,   474,   477,
     481,   484,   487,   488,   491,   492,   495,   496,   499,   500,
     503,   504,   507,   508,   511,   512,   515,   516,   519,   520,
     523,   524,   527,   528,   531,   532,   535,   536,   539,   540,
     543,   544,   547,   548,   551,   552,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   568,   569,   572,
     573,   576,   577,   580,   585,   588,   589,   592,   598,   620,
     621,   624,   625,   661,   662,   663,   664,   667,   688,   691,
     692,   693,   696,   704,   715,   716,   719,   720,   721,   722,
     723,   729,   734,   739,   742,   743,   746,   747,   750,   751,
     754,   755,   758,   759,   762,   763,   766,   767,   770,   771,
     774,   775,   776,   779,   780,   783,   784,   787,   788,   789,
     792,   793,   796,   797,   800,   801,   804,   805,   808,   809,
     812,   813,   816,   817,   820,   821,   824,   825,   828,   829,
     832,   833,   836,   837,   840,   843,   844,   847,   848,   851,
     852,   855,   856,   857,   860,   861,   864,   865,   868,   869,
     872,   873,   876,   877,   880,   881,   884,   885,   888,   889,
     892,   893,   896,   897,   900,   901
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL",
  "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT",
  "FLOAT", "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "parameters", "varargslist", "opt_EQUAL_test",
  "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR",
  "opt_COMMA", "fpdef", "fplist", "star_fpdef_notest", "stmt",
  "simple_stmt", "star_SEMI_small_stmt", "small_stmt", "expr_stmt",
  "pick_yield_expr_testlist", "star_EQUAL", "augassign", "print_stmt",
  "star_COMMA_test", "opt_test", "plus_COMMA_test", "opt_test_2",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "raise_stmt", "opt_COMMA_test",
  "opt_test_3", "import_stmt", "import_name", "import_from",
  "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "$@1", "if_stmt",
  "star_ELIF", "while_stmt", "for_stmt", "try_stmt", "plus_except",
  "opt_ELSE", "opt_FINALLY", "with_stmt", "star_COMMA_with_item",
  "with_item", "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite",
  "plus_stmt", "testlist_safe", "plus_COMMA_old_test", "old_test",
  "old_lambdef", "test", "opt_IF_ELSE", "or_test", "and_test", "not_test",
  "comparison", "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -376

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-376)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -376,    52,  -376,   402,  -376,   782,    47,   782,  -376,    74,
    -376,    86,   107,  -376,   107,   107,  -376,    91,   782,    47,
      61,   782,   223,   782,  -376,  -376,  -376,   834,  -376,  -376,
     286,   782,   782,  -376,  -376,   782,   782,   782,  -376,  -376,
    -376,  -376,   111,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,    73,  -376,  -376,  -376,  -376,
    -376,     2,   155,  -376,   349,   158,   153,   172,    40,    58,
      18,  -376,   107,  -376,  -376,    99,  -376,    33,  -376,  -376,
     174,  -376,    27,  -376,   108,    19,   130,   158,  -376,    49,
     160,   159,    12,  -376,   184,  -376,   187,    48,   782,   195,
      13,    26,   144,  -376,   183,  -376,   146,  -376,  -376,   186,
     152,  -376,  -376,   782,  -376,  -376,   211,  -376,   213,  -376,
     224,  -376,  -376,  -376,  -376,   -11,   214,  -376,   217,   834,
     834,  -376,   834,  -376,  -376,  -376,  -376,  -376,   178,  -376,
    -376,   196,  -376,   107,   107,   107,   107,  -376,  -376,   107,
    -376,  -376,   107,  -376,  -376,  -376,  -376,   107,  -376,    84,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,   209,   223,   782,   185,   169,  -376,  -376,
     782,   625,   782,   170,   228,   229,   782,   782,   -16,   203,
     225,   233,   625,    47,   197,  -376,   782,   198,    96,  -376,
     199,  -376,   220,   782,   107,   239,  -376,  -376,  -376,   239,
    -376,  -376,   107,   239,  -376,  -376,   240,   239,   782,  -376,
     625,    34,   107,  -376,   686,   625,   782,    28,   155,  -376,
    -376,  -376,   158,   153,   172,    40,    58,    18,  -376,   206,
     107,   169,   724,  -376,   223,  -376,  -376,  -376,  -376,  -376,
     190,  -376,    20,  -376,   215,  -376,  -376,  -376,   191,  -376,
     193,   625,   107,   250,   252,   216,   264,  -376,  -376,  -376,
    -376,   218,  -376,  -376,  -376,  -376,  -376,  -376,   204,   263,
     782,   265,   183,   241,   782,  -376,  -376,   242,  -376,   782,
     266,  -376,  -376,   250,   261,   625,   782,   158,  -376,  -376,
     124,  -376,   782,  -376,  -376,   219,   272,   282,   226,  -376,
     283,  -376,   244,   782,   782,   122,  -376,   288,   564,   290,
    -376,  -376,   158,   782,  -376,   625,   234,   256,   296,  -376,
     157,   297,  -376,   291,  -376,  -376,    17,  -376,   298,  -376,
    -376,   834,   820,  -376,   782,  -376,  -376,   301,  -376,  -376,
     782,   302,   165,   305,  -376,  -376,   304,  -376,   306,   782,
    -376,  -376,  -376,   782,  -376,  -376,   251,  -376,  -376,   483,
     625,  -376,   300,  -376,  -376,   216,   782,   314,    96,   275,
     782,  -376,    80,   318,    92,   319,  -376,   274,  -376,   625,
     115,   625,   321,   309,   324,   625,  -376,   118,  -376,   329,
     330,  -376,  -376,  -376,  -376,   332,  -376,   333,   625,  -376,
    -376,   336,   820,  -376,  -376,  -376,   820,   337,   820,  -376,
    -376,  -376,   820,   338,  -376,  -376,  -376,   782,  -376,  -376,
     625,   342,  -376,   625,  -376,  -376,   782,  -376,  -376,   768,
    -376,   625,   625,  -376,   782,   110,  -376,   820,    92,  -376,
     820,  -376,  -376,  -376,   625,  -376,  -376,   782,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,   129,     1,     0,     0,     0,    87,     0,
      88,     0,     0,     3,     0,     0,   315,     0,     0,     0,
      24,   241,   237,   239,   220,   230,     4,     0,    81,   219,
      75,    93,    90,   243,   221,     0,     0,   313,   231,   232,
       6,    13,     0,   134,   132,     5,    37,    42,    43,    44,
      45,    46,    47,    82,    83,    84,    86,    85,    48,    98,
      99,    49,    50,    51,    38,     0,   126,   127,   128,   131,
      73,   177,   178,   180,   183,   184,   197,   199,   201,   203,
     207,   211,     0,   218,   225,   233,   175,    57,   133,    91,
     125,   117,     0,   310,     0,     0,     0,   269,    80,   123,
       0,     0,     0,   121,     0,   115,   100,   110,     0,     0,
       0,    73,     0,   240,    73,   236,     0,   235,   234,    73,
       0,   238,   182,     0,    70,    73,    97,    89,     0,   153,
     155,   312,    12,    15,    14,     0,     0,   130,   271,     0,
       0,   174,     0,   188,   187,   189,   191,   193,   195,   186,
     190,     0,   192,     0,     0,     0,     0,   205,   206,     0,
     210,   209,     0,   216,   215,   214,   213,     0,   217,   223,
     242,    63,    65,    69,    68,    66,    59,    62,    58,    67,
      61,    60,    64,    53,     0,     0,     0,   286,     9,   229,
       0,     0,   283,    24,     0,   267,     0,     0,     0,   314,
     102,   119,     0,     0,     0,   249,     0,     0,     0,    31,
       0,    19,    22,     0,     0,    30,   273,   278,   228,    30,
     246,   226,     0,    30,   244,   227,    79,    30,     0,    92,
       0,     0,     0,    40,     0,     0,   270,     0,   179,   181,
     196,   194,   185,   198,   200,   202,   204,   208,   212,     0,
       0,   286,   261,   224,     0,    52,    55,    54,   124,   118,
       0,    10,     0,   311,     0,   162,   281,   282,     0,    18,
       0,     0,   266,    95,     0,     0,   108,   104,   101,   114,
     106,     0,   138,   116,   109,   248,    28,    36,     0,    26,
       0,    30,   275,     0,    29,   279,   247,     0,   245,     0,
      30,    71,    74,    95,   140,     0,     0,   154,    39,    41,
       0,    72,     0,   252,   222,     0,     0,   258,     0,   256,
       0,    56,     0,     0,     0,   297,   284,    30,   129,     0,
      17,    16,   268,     0,   122,     0,     0,     0,   112,   120,
     136,    34,    32,     0,    27,    21,    23,    20,    30,   272,
     276,     0,     0,    77,    29,    78,    96,     0,   151,   152,
     157,     0,   148,     0,   176,   250,     0,   251,   254,   261,
       8,   293,   288,     0,   294,   296,   285,   291,   165,   129,
       0,    94,   142,   105,   107,   111,     0,     0,    33,     0,
      29,   277,   307,    24,   301,   167,   171,   170,    76,     0,
     161,     0,     0,   150,     0,     0,   257,   253,   260,   263,
     290,   295,   163,   164,   280,     0,   113,     0,     0,    35,
      25,     0,     0,   306,   304,   305,     0,     0,     0,   300,
     298,   299,     0,    30,   139,   158,   159,     0,   156,   144,
       0,     0,   143,     0,   146,   255,   265,   259,   262,     0,
     292,     0,     0,   135,     0,   309,   173,     0,   303,   169,
      29,   166,   160,   147,     0,   145,   264,     0,   287,   141,
     137,   274,   308,   172,   302,   168,   149,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -376,  -376,  -376,  -376,  -376,   303,   102,  -376,  -376,   316,
    -376,  -172,  -376,  -376,  -376,  -376,  -199,  -193,  -376,  -376,
    -306,    -2,  -376,   125,  -376,   106,  -376,  -376,  -376,    23,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,    59,  -376,  -376,  -376,  -376,  -376,  -376,   -24,   164,
      88,  -376,  -376,    21,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
      63,     8,  -376,  -376,  -192,  -376,  -376,  -376,  -375,  -376,
      -5,  -376,  -136,   231,    -4,  -376,  -376,    -8,   221,   227,
     236,  -376,   230,  -376,   212,  -376,   -73,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,   -31,    10,  -376,  -376,    -3,  -376,   -18,  -376,
    -376,  -376,  -376,   341,  -376,  -376,  -376,  -376,  -376,  -376,
     -69,  -376,   -74,   271,  -376,   -61,  -103,  -376,  -376,   -17,
    -376
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    40,     3,    41,   260,    42,    43,    44,
     194,   109,   291,   110,   344,   211,   295,   212,   288,   341,
      45,   265,   135,    47,    48,   255,   183,   184,    49,   138,
     124,   300,   301,    50,    51,    52,    53,    54,    55,    56,
      57,   334,   229,    58,    59,    60,   101,   278,   279,   105,
     280,   338,   106,   107,    61,   201,    62,    63,    64,    65,
      66,   340,    67,    68,   137,   362,   403,   442,    69,   231,
     129,   363,   437,   438,   266,   379,   394,   433,   395,   396,
      70,   141,    71,    72,    73,    74,   153,    75,    76,    77,
      78,   159,    79,   162,    80,   167,    81,    82,    83,   169,
      84,   115,   116,   120,   112,    85,   121,   117,    86,   253,
     318,   368,   319,   320,   447,   448,    98,   195,    87,   113,
     348,   349,   216,    88,   268,   261,   262,   410,   450,   326,
     327,   374,   429,   430,   431,   423,   424,   425,    94,    89,
     102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    46,    93,   237,    97,   118,    99,    97,   217,   168,
     282,   220,   100,   104,   127,   287,   111,   114,   119,   131,
     296,   270,   378,   122,   298,   125,   126,    92,   302,     7,
     128,   130,   -29,   199,   191,   275,   171,   207,   304,   276,
     163,   213,   139,   310,   323,   233,   172,   455,   186,   305,
     306,   456,     4,   458,   204,   312,   173,   459,   174,   154,
     214,   277,   140,   234,   208,    20,    21,    91,   209,   186,
     192,    22,    23,   413,    24,    25,   108,    27,   187,   331,
     164,   175,   473,   188,    29,   475,   176,   157,   140,   -29,
     210,   196,   347,   165,   248,   166,   177,   324,   178,    33,
      34,   355,    91,   205,   179,   249,    38,    39,   250,   180,
     158,   181,   160,   358,   214,   182,     7,   189,   226,     6,
     422,   435,   161,   200,   190,     9,   222,     7,   377,    95,
      11,   436,   428,  -261,   215,   251,   252,   219,   239,   316,
     140,    96,   223,   382,   214,   242,   103,   208,   227,   391,
     422,   209,   373,    21,   136,   360,   214,   361,    22,    23,
     142,    24,    25,    20,    21,   155,   256,   257,   154,    22,
      23,    29,    24,    25,   267,    27,   156,   314,   170,   274,
     258,   193,    29,   386,   387,   263,    33,    34,   414,   350,
     185,   273,   402,    38,    39,   419,   360,    33,    34,   202,
     198,   285,   197,   203,    38,    39,    97,   434,   292,   439,
     206,   293,   218,   444,    97,   392,   397,   214,   221,   297,
     222,   427,   375,   303,   307,   225,   453,   228,   230,   235,
     232,   311,     7,   236,   461,   240,   256,   257,   241,   254,
     259,   -11,   269,   271,  -103,   272,   186,   317,   463,   281,
     290,   465,   284,   286,   289,   294,   299,   325,   328,   469,
     470,   313,   322,   329,   332,   330,   333,   335,    20,    21,
     337,   276,   476,   339,    22,    23,   342,    24,    25,   343,
      27,   346,   354,   351,   352,   345,   397,    29,   357,   311,
     397,   365,   397,   366,   353,     7,   397,  -260,   369,   367,
     370,   130,    33,    34,   376,   380,   383,   364,    37,    38,
      39,   384,   385,   388,   390,   389,   399,   401,   371,   372,
     405,   397,   407,   -29,   397,   406,    46,   415,   381,   418,
     420,    20,    21,   426,   140,   432,   440,    22,    23,   443,
      24,    25,   441,    27,   446,   132,   449,   451,   452,   398,
      29,   454,   457,   315,   460,   400,   123,   464,   133,   309,
     321,   416,   356,   336,   408,    33,    34,   283,   411,   359,
     404,   238,    38,    39,   247,   243,   445,    46,   143,   409,
     468,   417,   244,   134,   474,   421,   144,   145,   146,   246,
     224,   147,   245,   148,   472,     0,     0,     0,   149,   150,
       0,     0,   317,     0,     0,     0,   151,   152,     0,     5,
       6,     7,     0,     8,     0,     0,     9,     0,     0,    10,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
      13,     0,   462,     0,    14,     0,    15,    16,    17,     0,
       0,   466,    18,    19,   325,     0,     0,    20,    21,   471,
       0,     0,     0,    22,    23,     0,    24,    25,    26,    27,
       0,     0,   477,    28,     0,     0,    29,     0,    30,    31,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,    35,    36,    37,    38,    39,
       5,     6,     7,     0,     8,     0,     0,     9,     0,     0,
      10,   412,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,    15,    16,    17,
       0,     0,     0,    18,    19,     0,     0,     0,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,    25,     0,
      27,     0,     0,     0,    28,     0,     0,    29,     0,    30,
      31,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,     0,    35,    36,    37,    38,
      39,     5,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
      17,     0,     0,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,    28,     0,     0,    29,     0,
      30,    31,     5,    32,     7,     0,     8,     0,     0,     0,
       0,     0,    10,    33,    34,    12,     0,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,    14,     0,     0,
      16,    17,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,     0,     0,     0,     0,    22,    23,     0,    24,
      25,   264,    27,     0,     0,     0,    28,     0,     0,    29,
       0,    30,    31,     5,    32,     7,     0,     8,     0,     0,
       0,     0,     0,    10,    33,    34,    12,     0,     0,     0,
      37,    38,    39,     0,     0,     0,     0,     0,    14,     0,
       0,    16,    17,     0,     0,     0,     0,    19,     0,     0,
       0,    20,    21,     7,     0,     0,     0,    22,    23,     0,
      24,    25,   308,    27,     0,   316,     0,    28,     0,     0,
      29,     0,    30,    31,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,     0,    20,
      21,    37,    38,    39,     0,    22,    23,     7,    24,    25,
       0,    27,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     7,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
      38,    39,     0,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,    25,     0,    27,     0,    20,    21,     7,
       0,     0,    29,    22,    23,     0,    24,    25,     0,    27,
       0,     0,     0,     7,     0,     0,    29,    33,    34,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    33,    34,     0,     0,   393,    21,     0,    38,    39,
       0,    22,    23,     0,    24,    25,     0,    27,     0,     0,
      21,     0,     0,     0,    29,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,     0,     0,     0,    29,    33,
      34,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
      38,    39
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,    12,    22,    14,    15,   111,    82,
     202,   114,    15,    18,    32,   208,    21,    22,    23,    37,
     219,   193,   328,    27,   223,    30,    31,     6,   227,     9,
      35,    36,    15,    21,    15,    51,     3,    24,   230,    55,
      22,    15,    40,   235,    24,    56,    13,   422,    21,    15,
      16,   426,     0,   428,     6,    27,    23,   432,    25,    10,
      34,    77,    60,    74,    51,    45,    46,    55,    55,    21,
      51,    51,    52,   379,    54,    55,    15,    57,    51,   271,
      62,    48,   457,    56,    64,   460,    53,    47,    60,    72,
      77,    42,   291,    75,   167,    77,    63,    77,    65,    79,
      80,   300,    55,   108,    71,    21,    86,    87,    24,    76,
      70,    78,    54,   305,    34,    82,     9,     9,   123,     8,
      40,     6,    64,   102,    16,    14,    34,     9,   327,    55,
      19,    16,    40,    15,   111,    51,    52,   114,   142,    21,
      60,    55,   119,   335,    34,   153,    55,    51,   125,   348,
      40,    55,    30,    46,    81,    31,    34,    33,    51,    52,
       5,    54,    55,    45,    46,    12,   184,   184,    10,    51,
      52,    64,    54,    55,   192,    57,     4,   250,    79,   197,
     185,    51,    64,    26,    27,   190,    79,    80,   380,   292,
      16,   196,    27,    86,    87,   388,    31,    79,    80,    15,
      41,   206,    42,    16,    86,    87,   214,   399,   213,   401,
      15,   214,    68,   405,   222,   351,   352,    34,    72,   222,
      34,   393,   325,   228,   232,    73,   418,    16,    15,    15,
       6,   236,     9,    16,   433,    57,   254,   254,    42,    30,
      55,    72,    72,    15,    41,    16,    21,   252,   440,    16,
      30,   443,    55,    55,    55,    16,    16,   262,    43,   451,
     452,    55,    72,    72,   272,    72,    16,    15,    45,    46,
       6,    55,   464,    55,    51,    52,    72,    54,    55,    16,
      57,    16,    16,    42,    42,   290,   422,    64,    27,   294,
     426,    72,   428,    21,   299,     9,   432,    15,    15,    73,
      56,   306,    79,    80,    16,    15,    72,   312,    85,    86,
      87,    55,    16,    16,    16,    24,    15,    15,   323,   324,
      15,   457,    16,    72,   460,    21,   328,    27,   333,    15,
      55,    45,    46,    15,    60,    16,    15,    51,    52,    15,
      54,    55,    33,    57,    15,    42,    16,    15,    15,   354,
      64,    15,    15,   251,    16,   360,    70,    15,    42,   234,
     254,   385,   303,   275,   369,    79,    80,   203,   373,   306,
     362,   140,    86,    87,   162,   154,   407,   379,    29,   369,
     449,   386,   155,    42,   458,   390,    37,    38,    39,   159,
     119,    42,   156,    44,   455,    -1,    -1,    -1,    49,    50,
      -1,    -1,   407,    -1,    -1,    -1,    57,    58,    -1,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,   437,    -1,    32,    -1,    34,    35,    36,    -1,
      -1,   446,    40,    41,   449,    -1,    -1,    45,    46,   454,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,   467,    61,    -1,    -1,    64,    -1,    66,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
       7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,    86,
      87,     7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,
      66,    67,     7,    69,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    79,    80,    20,    -1,    83,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    -1,    64,
      -1,    66,    67,     7,    69,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    17,    79,    80,    20,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,     9,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    56,    57,    -1,    21,    -1,    61,    -1,    -1,
      64,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    45,
      46,    85,    86,    87,    -1,    51,    52,     9,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     9,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    -1,    45,    46,     9,
      -1,    -1,    64,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,     9,    -1,    -1,    64,    79,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    45,    46,    -1,    86,    87,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,    -1,
      46,    -1,    -1,    -1,    64,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    57,    61,    64,
      66,    67,    69,    79,    80,    83,    84,    85,    86,    87,
      91,    93,    95,    96,    97,   108,   109,   111,   112,   116,
     121,   122,   123,   124,   125,   126,   127,   128,   131,   132,
     133,   142,   144,   145,   146,   147,   148,   150,   151,   156,
     168,   170,   171,   172,   173,   175,   176,   177,   178,   180,
     182,   184,   185,   186,   188,   193,   196,   206,   211,   227,
     168,    55,   141,   168,   226,    55,    55,   175,   204,   175,
     204,   134,   228,    55,   168,   137,   140,   141,    15,    99,
     101,   168,   192,   207,   168,   189,   190,   195,   227,   168,
     191,   194,   172,    70,   118,   168,   168,   206,   168,   158,
     168,   206,    93,    97,   211,   110,    81,   152,   117,    40,
      60,   169,     5,    29,    37,    38,    39,    42,    44,    49,
      50,    57,    58,   174,    10,    12,     4,    47,    70,   179,
      54,    64,   181,    22,    62,    75,    77,   183,   184,   187,
      79,     3,    13,    23,    25,    48,    53,    63,    65,    71,
      76,    78,    82,   114,   115,    16,    21,    51,    56,     9,
      16,    15,    51,    51,    98,   205,    42,    42,    41,    21,
     141,   143,    15,    16,     6,   168,    15,    24,    51,    55,
      77,   103,   105,    15,    34,   117,   210,   224,    68,   117,
     224,    72,    34,   117,   221,    73,   168,   117,    16,   130,
      15,   157,     6,    56,    74,    15,    16,   170,   171,   172,
      57,    42,   175,   176,   177,   178,   180,   182,   184,    21,
      24,    51,    52,   197,    30,   113,   206,   227,   168,    55,
      94,   213,   214,   168,    56,   109,   162,   206,   212,    72,
      99,    15,    16,   168,   206,    51,    55,    77,   135,   136,
     138,    16,   162,   137,    55,   168,    55,   105,   106,    55,
      30,   100,   168,   204,    16,   104,   104,   204,   104,    16,
     119,   120,   104,   168,   162,    15,    16,   175,    56,   111,
     162,   168,    27,    55,   184,    94,    21,   168,   198,   200,
     201,   113,    72,    24,    77,   168,   217,   218,    43,    72,
      72,   162,   175,    16,   129,    15,   138,     6,   139,    55,
     149,   107,    72,    16,   102,   168,    16,   104,   208,   209,
     224,    42,    42,   168,    16,   104,   129,    27,   162,   158,
      31,    33,   153,   159,   168,    72,    21,    73,   199,    15,
      56,   168,   168,    30,   219,   224,    16,   104,   108,   163,
      15,   168,   162,    72,    55,    16,    26,    27,    16,    24,
      16,   104,   170,    45,   164,   166,   167,   170,   168,    15,
     168,    15,    27,   154,   159,    15,    21,    16,   168,   201,
     215,   168,    18,   108,   162,    27,   136,   168,    15,   105,
      55,   168,    40,   223,   224,   225,    15,    99,    40,   220,
     221,   222,    16,   165,   162,     6,    16,   160,   161,   162,
      15,    33,   155,    15,   162,   200,    15,   202,   203,    16,
     216,    15,    15,   162,    15,   166,   166,    15,   166,   166,
      16,   104,   168,   162,    15,   162,   168,    24,   218,   162,
     162,   168,   223,   166,   220,   166,   162,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   147,
     146,   146,   146,   146,   146,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   183,   183,   184,   184,   185,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     3,     0,     3,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     1,     1,
       2,     4,     2,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     5,     2,     4,     2,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     4,     2,     1,     3,     1,     3,     2,
       1,     1,     4,     3,     2,     1,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     3,     2,     3,     4,     3,
       3,     3,     2,     3,     2,     3,     0,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     3,     0,
       3,     2,     4,     2,     5,     0,     1,     2,     1,     2,
       7,     4,     1,     0,     2,     3,     0,     3,     0,     3,
       0,     2,     4,     2,     2,     3,     1,     0,     1,     1,
       5,     4,     3,     2,     1,     1,     5,     4,     3,     2,
       1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 79 "includes/parse.y" /* yacc.c:1661  */
    {
            reverse(f);
        }
#line 1938 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 96 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1944 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 97 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1950 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 109 "includes/parse.y" /* yacc.c:1661  */
    {
            func.line = (yylsp[-4]).first_line;
            func.column = (yylsp[-4]).first_column - 1;
            func.funcname = (yyvsp[-3].str);
            if (isfinally)
            {   
                func.complexity = complexity;
            }
            else
            {   func.complexity = complexity + trycomplexity;}
            
            if (func.column == 0) 
            {    
                f.push(func);
                trycomplexity = 0;
                complexity = 1;
            }
            else
                complexity++;

            delete[] (yyvsp[-3].str);

        }
#line 1978 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 134 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1984 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 135 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1990 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 150 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 1996 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 154 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2002 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 155 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2008 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 31:
#line 162 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2014 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 198 "includes/parse.y" /* yacc.c:1661  */
    { 
			if((yyvsp[-2].node) && (yyvsp[0].node))
			{
			switch((yyvsp[-1].op))
			{
				case '0':
					{
						Node* temp = new AddBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break;
					}
				case '1':
					{
						Node* temp = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break;					
					}
				case '2':
					{
						Node* temp = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
					}
				case '3':
				{
						Node* temp = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
				}
				case '4':
				{
						Node* temp = new PctBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
				}
				case 11:
				{
					Node* temp = new DbStarBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
					(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), temp);
					pool.add((yyvsp[-2].node));
					delete temp;
					break;
				}
				case 12:
				{
					Node* temp = new DbSlashBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
					(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), temp);
					pool.add((yyvsp[-2].node));
					delete temp;
					break;		         
				}
			}
			}
		}
#line 2088 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 268 "includes/parse.y" /* yacc.c:1661  */
    {
			//std::cout<<"AsgBinaryNode "<<$1<<","<<$2<<std::endl;

			if((yyvsp[0].node))
				{
					(yyval.node) = new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
					pool.add((yyval.node));
					//($$)->eval()->print();
				}
			else 
			{
				(yyval.node) = (yyvsp[-1].node);
				if ((yyvsp[-1].node))
					((yyval.node))->eval()->print();
			}
			
			//pool.add($$);
		}
#line 2111 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 288 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2117 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 289 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2123 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 293 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[0].node);
		}
#line 2131 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 296 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2137 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 299 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '0';}
#line 2143 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 300 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2149 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 301 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '2';}
#line 2155 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 302 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '3';}
#line 2161 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 303 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '4';}
#line 2167 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 304 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2173 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 305 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2179 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 306 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2185 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 307 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2191 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 308 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2197 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 309 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 11;}
#line 2203 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 310 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 12;}
#line 2209 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 314 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[0].node);
			(yyvsp[0].node)->eval()->print();
		}
#line 2218 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 318 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2224 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 321 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2230 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 322 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2236 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 325 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2242 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 326 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2248 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 107:
#line 394 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-2].str); delete[] (yyvsp[0].str);}
#line 2254 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 108:
#line 395 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2260 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 109:
#line 398 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2266 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 117:
#line 414 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2272 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 118:
#line 415 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2278 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 119:
#line 418 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2284 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 120:
#line 421 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2290 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 127:
#line 434 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2296 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 128:
#line 435 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2302 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 129:
#line 436 "includes/parse.y" /* yacc.c:1661  */
    {tmp = complexity; }
#line 2308 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 135:
#line 443 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2314 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 136:
#line 444 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2320 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 137:
#line 447 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2326 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 143:
#line 460 "includes/parse.y" /* yacc.c:1661  */
    {
		if(isfinally == 0) 
			complexity++;  
		else 
			complexity = tmp;  
	}
#line 2337 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 144:
#line 466 "includes/parse.y" /* yacc.c:1661  */
    {trycomplexity++;}
#line 2343 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 149:
#line 478 "includes/parse.y" /* yacc.c:1661  */
    {	
		isfinally = 1;
	}
#line 2351 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 156:
#line 495 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2357 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 157:
#line 496 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2363 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 174:
#line 531 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2369 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 175:
#line 532 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2375 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 176:
#line 535 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2381 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 177:
#line 536 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2387 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 178:
#line 539 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2393 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 179:
#line 540 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2399 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 180:
#line 543 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2405 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 181:
#line 544 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2411 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 182:
#line 547 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2417 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 183:
#line 548 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2423 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 184:
#line 551 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2429 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 185:
#line 552 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2435 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 197:
#line 568 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2441 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 198:
#line 569 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2447 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 199:
#line 572 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2453 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 200:
#line 573 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2459 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 201:
#line 576 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2465 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 202:
#line 577 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2471 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 203:
#line 581 "includes/parse.y" /* yacc.c:1661  */
    {
		(yyval.node) = (yyvsp[0].node);
		//$1->eval()->print();
	}
#line 2480 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 204:
#line 585 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2486 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 207:
#line 593 "includes/parse.y" /* yacc.c:1661  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			//pool.add($$); 
			//($$)->eval()->print();
		}
#line 2496 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 208:
#line 599 "includes/parse.y" /* yacc.c:1661  */
    {
			switch((yyvsp[-1].op))
			{
				case '+':
					{
						(yyval.node) = new AddBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
				case '-':
					{
						(yyval.node) = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
			}
		}
#line 2520 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 209:
#line 620 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2526 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 210:
#line 621 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2532 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 211:
#line 624 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2538 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 212:
#line 626 "includes/parse.y" /* yacc.c:1661  */
    {
			switch ((yyvsp[-1].op))
			{
				case '*' : 
					{
						(yyval.node) = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '/' : 
					{
						(yyval.node) = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '%' :
					{
						(yyval.node) = new PctBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '1' :
					{
						(yyval.node) = new DbSlashBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						break;
					}
			}

		}
#line 2576 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 213:
#line 661 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '*';}
#line 2582 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 214:
#line 662 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '/';}
#line 2588 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 215:
#line 663 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.op) = '%';}
#line 2594 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 216:
#line 664 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2600 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 217:
#line 668 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].node))
		{
			switch((yyvsp[-1].op))
			{
				case '+': 
					{
						(yyval.node) = (yyvsp[0].node);
						break;
					}
				case '-':
					{
						(yyval.node) = new UnaryNode((yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
			}
		}		
	}
#line 2625 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 218:
#line 688 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2631 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 219:
#line 691 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2637 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 220:
#line 692 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2643 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 221:
#line 693 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '~';}
#line 2649 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 222:
#line 697 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-3].node) && (yyvsp[0].node))
		{
			(yyval.node) = new DbStarBinaryNode((yyvsp[-3].node),(yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2661 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 223:
#line 705 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].node)) 
		{

		}
		else 
			(yyval.node) = (yyvsp[-1].node);
	}
#line 2674 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 225:
#line 716 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2680 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 226:
#line 719 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2686 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 227:
#line 720 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2692 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 228:
#line 721 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2698 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 229:
#line 722 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2704 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 230:
#line 724 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IdentNode((yyvsp[0].str));
				delete[] (yyvsp[0].str);
				pool.add((yyval.node));
			}
#line 2714 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 231:
#line 730 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
				pool.add((yyval.node));
			}
#line 2723 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 232:
#line 735 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
				pool.add((yyval.node));
			}
#line 2732 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 233:
#line 739 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2738 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 234:
#line 742 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2744 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 235:
#line 743 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2750 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 236:
#line 746 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2756 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 237:
#line 747 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2762 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 246:
#line 766 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2768 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 247:
#line 767 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2774 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 250:
#line 774 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2780 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 251:
#line 775 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = 0;}
#line 2786 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 252:
#line 776 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = 0; delete[] (yyvsp[0].str);}
#line 2792 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 280:
#line 832 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-5].str);}
#line 2798 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 281:
#line 833 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-2].str);}
#line 2804 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 284:
#line 840 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2810 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 291:
#line 855 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2816 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 292:
#line 856 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2822 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 293:
#line 857 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2828 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 294:
#line 860 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2834 "parse.tab.c" /* yacc.c:1661  */
    break;


#line 2838 "parse.tab.c" /* yacc.c:1661  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 904 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>

void reverse(std::stack<struct funcInfo> f)
{
    while(!f.empty())
    {
        std::cout << "(\"" << f.top().line << ":" << f.top().column << ": "
                      <<  "'" << f.top().funcname << "'\", "  
                      << f.top().complexity << ")" << std::endl;

        f.pop();
    }

}
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
