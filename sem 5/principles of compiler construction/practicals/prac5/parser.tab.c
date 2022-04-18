
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;


/* Line 189 of yacc.c  */
#line 81 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     int_const = 258,
     char_const = 259,
     float_const = 260,
     id = 261,
     string = 262,
     storage_const = 263,
     type_const = 264,
     qual_const = 265,
     struct_const = 266,
     enum_const = 267,
     DEFINE = 268,
     IF = 269,
     FOR = 270,
     DO = 271,
     WHILE = 272,
     BREAK = 273,
     SWITCH = 274,
     CONTINUE = 275,
     RETURN = 276,
     CASE = 277,
     DEFAULT = 278,
     GOTO = 279,
     SIZEOF = 280,
     PUNC = 281,
     or_const = 282,
     and_const = 283,
     eq_const = 284,
     shift_const = 285,
     rel_const = 286,
     inc_const = 287,
     point_const = 288,
     ELSE = 289,
     HEADER = 290,
     UMINUS = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 159 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNRULES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,     2,     2,    58,    55,     2,
      48,    49,    38,    36,    45,    37,    61,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    42,
      56,    46,    57,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,    53,    44,    59,     2,     2,     2,
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
      35,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    17,    19,    21,
      26,    30,    34,    37,    41,    44,    46,    49,    52,    54,
      57,    59,    62,    64,    66,    68,    70,    72,    74,    81,
      84,    86,    88,    91,    93,    97,    99,   103,   107,   110,
     112,   115,   117,   119,   123,   125,   129,   132,   138,   143,
     146,   148,   152,   154,   158,   161,   163,   165,   169,   174,
     178,   183,   188,   192,   195,   197,   201,   204,   206,   209,
     211,   215,   218,   221,   223,   225,   229,   231,   235,   240,
     242,   246,   249,   251,   253,   256,   258,   262,   267,   271,
     275,   278,   283,   287,   291,   294,   296,   298,   300,   302,
     304,   306,   310,   315,   319,   322,   324,   329,   333,   337,
     340,   342,   345,   351,   359,   365,   371,   379,   389,   398,
     407,   415,   424,   432,   440,   447,   451,   454,   457,   461,
     464,   466,   470,   472,   476,   478,   480,   482,   488,   490,
     494,   496,   500,   502,   506,   508,   512,   514,   518,   520,
     524,   526,   530,   534,   538,   540,   544,   546,   550,   554,
     556,   560,   564,   568,   570,   575,   577,   580,   583,   586,
     591,   593,   595,   597,   599,   601,   603,   605,   610,   615,
     619,   623,   627,   630,   632,   634,   636,   640,   642,   646,
     648,   650,   652
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    35,    63,    -1,    13,   123,    63,    -1,
      64,    -1,    65,    -1,    64,    65,    -1,    66,    -1,    67,
      -1,    69,    85,    68,   100,    -1,    85,    68,   100,    -1,
      69,    85,   100,    -1,    85,   100,    -1,    69,    76,    42,
      -1,    69,    42,    -1,    67,    -1,    68,    67,    -1,    70,
      69,    -1,    70,    -1,    71,    69,    -1,    71,    -1,    72,
      69,    -1,    72,    -1,     8,    -1,     9,    -1,    73,    -1,
      82,    -1,    10,    -1,    74,     6,    43,    75,    44,    42,
      -1,    74,     6,    -1,    11,    -1,    78,    -1,    75,    78,
      -1,    77,    -1,    76,    45,    77,    -1,    85,    -1,    85,
      46,    92,    -1,    79,    80,    42,    -1,    71,    79,    -1,
      71,    -1,    72,    79,    -1,    72,    -1,    81,    -1,    80,
      45,    81,    -1,    85,    -1,    85,    47,   108,    -1,    47,
     108,    -1,    12,     6,    43,    83,    44,    -1,    12,    43,
      83,    44,    -1,    12,     6,    -1,    84,    -1,    83,    45,
      84,    -1,     6,    -1,     6,    46,   108,    -1,    87,    86,
      -1,    86,    -1,     6,    -1,    48,    85,    49,    -1,    86,
      50,   108,    51,    -1,    86,    50,    51,    -1,    86,    48,
      89,    49,    -1,    86,    48,    91,    49,    -1,    86,    48,
      49,    -1,    38,    88,    -1,    38,    -1,    38,    88,    87,
      -1,    38,    87,    -1,    72,    -1,    88,    72,    -1,    90,
      -1,    89,    45,    90,    -1,    69,    85,    -1,    69,    95,
      -1,    69,    -1,     6,    -1,    91,    45,     6,    -1,   106,
      -1,    43,    93,    44,    -1,    43,    93,    45,    44,    -1,
      92,    -1,    93,    45,    92,    -1,    79,    95,    -1,    79,
      -1,    87,    -1,    87,    96,    -1,    96,    -1,    48,    95,
      49,    -1,    96,    50,   108,    51,    -1,    50,   108,    51,
      -1,    96,    50,    51,    -1,    50,    51,    -1,    96,    48,
      89,    49,    -1,    48,    89,    49,    -1,    96,    48,    49,
      -1,    48,    49,    -1,    98,    -1,    99,    -1,   100,    -1,
     102,    -1,   103,    -1,   104,    -1,     6,    47,    97,    -1,
      22,     3,    47,    97,    -1,    23,    47,    97,    -1,   105,
      42,    -1,    42,    -1,    43,    68,   101,    44,    -1,    43,
     101,    44,    -1,    43,    68,    44,    -1,    43,    44,    -1,
      97,    -1,   101,    97,    -1,    14,    48,   105,    49,    97,
      -1,    14,    48,   105,    49,    97,    34,    97,    -1,    19,
      48,   105,    49,    97,    -1,    17,    48,   105,    49,    97,
      -1,    16,    97,    17,    48,   105,    49,    42,    -1,    15,
      48,   105,    42,   105,    42,   105,    49,    97,    -1,    15,
      48,   105,    42,   105,    42,    49,    97,    -1,    15,    48,
     105,    42,    42,   105,    49,    97,    -1,    15,    48,   105,
      42,    42,    49,    97,    -1,    15,    48,    42,   105,    42,
     105,    49,    97,    -1,    15,    48,    42,   105,    42,    49,
      97,    -1,    15,    48,    42,    42,   105,    49,    97,    -1,
      15,    48,    42,    42,    49,    97,    -1,    24,     6,    42,
      -1,    20,    42,    -1,    18,    42,    -1,    21,   105,    42,
      -1,    21,    42,    -1,   106,    -1,   105,    45,   106,    -1,
     108,    -1,   120,   107,   106,    -1,    26,    -1,    46,    -1,
     109,    -1,   109,    52,   105,    47,   108,    -1,   110,    -1,
     109,    27,   110,    -1,   111,    -1,   110,    28,   111,    -1,
     112,    -1,   111,    53,   112,    -1,   113,    -1,   112,    54,
     113,    -1,   114,    -1,   113,    55,   114,    -1,   115,    -1,
     114,    29,   115,    -1,   116,    -1,   115,    56,   116,    -1,
     115,    57,   116,    -1,   115,    31,   116,    -1,   117,    -1,
     116,    30,   117,    -1,   118,    -1,   117,    36,   118,    -1,
     117,    37,   118,    -1,   119,    -1,   118,    38,   119,    -1,
     118,    39,   119,    -1,   118,    58,   119,    -1,   120,    -1,
      48,    94,    49,   119,    -1,   122,    -1,    32,   120,    -1,
     121,   119,    -1,    25,   120,    -1,    25,    48,    94,    49,
      -1,    55,    -1,    38,    -1,    36,    -1,    37,    -1,    59,
      -1,    60,    -1,   123,    -1,   122,    50,   105,    51,    -1,
     122,    48,   124,    49,    -1,   122,    48,    49,    -1,   122,
      61,     6,    -1,   122,    33,     6,    -1,   122,    32,    -1,
       6,    -1,   125,    -1,     7,    -1,    48,   105,    49,    -1,
     106,    -1,   124,    45,   106,    -1,     3,    -1,     4,    -1,
       5,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    19,    19,    20,    21,    23,    24,    26,    27,    29,
      30,    31,    32,    34,    35,    37,    38,    40,    41,    42,
      43,    44,    45,    47,    49,    50,    51,    53,    55,    56,
      58,    60,    61,    63,    64,    66,    67,    69,    71,    72,
      73,    74,    76,    77,    79,    80,    81,    83,    84,    85,
      87,    88,    90,    91,    93,    94,    96,    97,    98,    99,
     100,   101,   102,   104,   105,   106,   107,   109,   110,   112,
     113,   115,   116,   117,   119,   120,   122,   123,   124,   126,
     127,   129,   130,   132,   133,   134,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   146,   147,   148,   149,   150,
     151,   153,   154,   155,   157,   158,   160,   161,   162,   163,
     165,   166,   168,   169,   170,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   183,   184,   185,   186,   187,
     189,   190,   192,   193,   195,   196,   198,   199,   201,   202,
     204,   205,   207,   208,   210,   211,   213,   214,   216,   217,
     219,   220,   221,   222,   224,   225,   227,   228,   229,   231,
     232,   233,   234,   236,   237,   239,   240,   241,   242,   243,
     245,   245,   245,   245,   245,   245,   247,   248,   249,   250,
     251,   252,   253,   255,   256,   257,   258,   260,   261,   263,
     264,   265,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "int_const", "char_const", "float_const",
  "id", "string", "storage_const", "type_const", "qual_const",
  "struct_const", "enum_const", "DEFINE", "IF", "FOR", "DO", "WHILE",
  "BREAK", "SWITCH", "CONTINUE", "RETURN", "CASE", "DEFAULT", "GOTO",
  "SIZEOF", "PUNC", "or_const", "and_const", "eq_const", "shift_const",
  "rel_const", "inc_const", "point_const", "ELSE", "HEADER", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "\"then\"", "';'", "'{'", "'}'", "','", "'='",
  "':'", "'('", "')'", "'['", "']'", "'?'", "'|'", "'^'", "'&'", "'<'",
  "'>'", "'%'", "'~'", "'!'", "'.'", "$accept", "program_unit",
  "translation_unit", "external_decl", "function_definition", "decl",
  "decl_list", "decl_specs", "storage_class_spec", "type_spec",
  "type_qualifier", "struct_or_union_spec", "struct_or_union",
  "struct_decl_list", "init_declarator_list", "init_declarator",
  "struct_decl", "spec_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_spec", "enumerator_list", "enumerator",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "param_list", "param_decl", "id_list", "initializer", "initializer_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator", "stat",
  "labeled_stat", "exp_stat", "compound_stat", "stat_list",
  "selection_stat", "iteration_stat", "jump_stat", "exp", "assignment_exp",
  "assignment_operator", "conditional_exp", "logical_or_exp",
  "logical_and_exp", "inclusive_or_exp", "exclusive_or_exp", "and_exp",
  "equality_exp", "relational_exp", "shift_expression", "additive_exp",
  "mult_exp", "cast_exp", "unary_exp", "unary_operator", "postfix_exp",
  "primary_exp", "argument_exp_list", "consts", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
     291,   292,    59,   123,   125,    44,    61,    58,    40,    41,
      91,    93,    63,   124,    94,    38,    60,    62,    37,   126,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    70,    71,    71,    71,    72,    73,    73,
      74,    75,    75,    76,    76,    77,    77,    78,    79,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   118,   118,   119,   119,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     6,     2,
       1,     1,     2,     1,     3,     1,     3,     3,     2,     1,
       2,     1,     1,     3,     1,     3,     2,     5,     4,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     2,     1,     3,     2,     1,     2,     1,
       3,     2,     2,     1,     1,     3,     1,     3,     4,     1,
       3,     2,     1,     1,     2,     1,     3,     4,     3,     3,
       2,     4,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     1,     4,     3,     3,     2,
       1,     2,     5,     7,     5,     5,     7,     9,     8,     8,
       7,     8,     7,     7,     6,     3,     2,     2,     3,     2,
       1,     3,     1,     3,     1,     1,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     3,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    56,    23,    24,    27,    30,     0,     0,     0,    64,
       0,     0,     4,     5,     7,     8,     0,    18,    20,    22,
      25,     0,    26,     0,    55,     0,    49,     0,   189,   190,
     191,   183,   185,   192,     0,     0,   184,     2,    67,    66,
      63,     0,     1,     6,    14,     0,    33,    35,    17,    19,
      21,    29,     0,    15,     0,     0,    12,     0,     0,    54,
       0,    52,     0,    50,     0,     0,   172,   173,   171,     0,
     170,   174,   175,     0,   130,   132,   136,   138,   140,   142,
     144,   146,   148,   150,   154,   156,   159,   163,     0,   165,
     176,     3,    68,    65,    57,    13,     0,     0,     0,    11,
       0,   183,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   109,     0,   110,    95,    96,
      97,     0,    98,    99,   100,     0,    16,    10,    35,    74,
      62,    73,     0,    69,     0,    59,     0,   163,     0,     0,
      48,     0,     0,   168,   166,    39,    41,    82,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
     167,   182,     0,     0,     0,     0,    34,     0,    36,    76,
       9,     0,    31,     0,     0,     0,     0,     0,     0,   127,
       0,   126,   129,     0,     0,     0,     0,   108,     0,   107,
     111,   104,     0,     0,    71,    83,    72,    85,     0,    60,
       0,    61,    58,    47,    53,    51,     0,    38,    40,     0,
      83,    81,     0,   131,   139,     0,   141,   143,   145,   147,
     149,   153,   151,   152,   155,   157,   158,   160,   161,   162,
     133,   181,   179,   187,     0,     0,   180,    79,     0,     0,
      32,     0,     0,    42,    44,   101,     0,     0,     0,     0,
       0,     0,   128,     0,   103,   125,   106,    94,     0,     0,
      90,     0,    84,     0,     0,    70,    75,   169,   164,     0,
       0,   178,   177,    77,     0,    28,    46,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,    92,    86,
      88,    93,     0,    89,     0,   137,   188,    78,    80,    43,
      45,   112,     0,     0,     0,     0,     0,     0,   115,   114,
      91,    87,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   113,   123,   122,     0,   120,     0,     0,     0,   116,
     121,   119,   118,     0,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    54,    55,    17,    18,
      19,    20,    21,   181,    45,    46,   182,   147,   252,   253,
      22,    62,    63,    23,    24,    25,    40,   268,   133,   134,
     178,   248,   148,   269,   207,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    74,   169,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   244,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -188
static const yytype_int16 yypact[] =
{
     811,  -188,  -188,  -188,  -188,  -188,     9,    57,   811,    20,
      72,    56,   802,  -188,  -188,  -188,    33,   329,   329,   329,
    -188,    26,  -188,   468,    97,    22,     8,   100,  -188,  -188,
    -188,  -188,  -188,  -188,  1099,   811,  -188,  -188,  -188,  -188,
      20,   111,  -188,  -188,  -188,    32,  -188,   253,  -188,  -188,
    -188,   146,   311,  -188,   468,    33,  -188,   122,   615,    97,
     100,   136,    51,  -188,  1136,  1173,  -188,  -188,  -188,   601,
    -188,  -188,  -188,    37,  -188,  -188,    65,   167,   155,   163,
     189,   227,    41,   246,    76,   103,  -188,    54,  1099,   221,
    -188,  -188,  -188,  -188,  -188,  -188,    72,   673,   468,  -188,
     282,   250,     9,   276,   303,   543,   304,   314,   309,   325,
     687,   365,   335,   389,  -188,  -188,   369,  -188,  -188,  -188,
    -188,   427,  -188,  -188,  -188,   139,  -188,  -188,   350,  -188,
    -188,    17,   110,  -188,   128,  -188,   346,  -188,   121,  1099,
    -188,   100,   601,  -188,  -188,   282,   282,   140,   351,  1099,
    -188,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,
    1099,  1099,  1099,  1099,  1099,  1099,  1099,  -188,  -188,  1099,
    -188,  -188,   393,   733,  1099,   397,  -188,   673,  -188,  -188,
    -188,   114,  -188,   115,   543,  1099,   747,   387,  1099,  -188,
    1099,  -188,  -188,   180,   361,   543,   367,  -188,   485,  -188,
    -188,  -188,   240,   793,  -188,    18,  -188,   235,   329,  -188,
     404,  -188,  -188,  -188,  -188,  -188,   366,  -188,  -188,   445,
     294,  -188,  1099,  -188,   167,   313,   155,   163,   189,   227,
      41,   246,   246,   246,    76,   103,   103,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,   134,    34,  -188,  -188,   222,   372,
    -188,  1099,   185,  -188,   371,  -188,   152,   830,   200,   368,
     157,   158,  -188,   543,  -188,  -188,  -188,  -188,   164,   370,
    -188,   374,   235,   353,   870,  -188,  -188,  -188,  -188,  1099,
    1099,  -188,  -188,  -188,   132,  -188,  -188,  -188,   115,  1099,
     543,   907,   213,   945,  1099,   543,   543,  -188,  -188,  -188,
    -188,  -188,   187,  -188,   376,  -188,  -188,  -188,  -188,  -188,
    -188,   386,   543,   188,   985,  1023,   242,   194,  -188,  -188,
    -188,  -188,   543,  -188,   543,   543,   223,   543,   225,  1061,
     380,  -188,  -188,  -188,   543,  -188,   543,   543,   228,  -188,
    -188,  -188,  -188,   543,  -188
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,    14,  -188,   411,  -188,    -7,   -18,     2,  -188,   -52,
       4,  -188,  -188,  -188,  -188,   339,   256,   -92,  -188,   150,
    -188,   398,   299,    -9,   -19,    -4,  -188,   -53,   252,  -188,
    -165,  -188,   319,  -120,  -187,   -96,  -188,  -188,     3,   352,
    -188,  -188,  -188,   -34,   -66,  -188,   -55,  -188,   315,   320,
     308,   312,   316,   317,  -117,   323,   183,   -50,   147,  -188,
    -188,   474,  -188,  -188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      73,    41,    16,   136,   132,    39,    59,    47,   183,   187,
      16,   206,   247,    38,    16,    26,    53,   145,   272,    48,
      49,    50,    37,     1,     1,   200,    56,   221,     1,    98,
       4,   179,    51,   272,   116,    73,    93,    16,   170,     1,
      53,   231,   232,   233,    92,    53,   128,   126,   145,    91,
      99,    60,    27,   217,   218,     9,    42,   127,     9,   131,
      28,    29,    30,    31,    32,   202,   202,   203,   203,    33,
      10,     9,   158,   146,    95,    44,   193,    96,     1,   149,
     167,    10,   149,   223,   214,   282,   150,   128,   255,   183,
     145,   126,   151,   145,   145,   140,   141,   159,   160,   264,
     168,   180,   200,   240,   146,    34,    61,   243,    73,   126,
       9,   179,   162,   163,   237,   238,   239,   152,   225,   308,
      10,     1,   204,     3,     4,     5,     6,   205,   129,   145,
       2,     3,     4,     5,     6,    28,    29,    30,    31,    32,
     245,   164,   165,   220,    33,    57,   146,    58,   271,   146,
     146,   256,   258,     9,   260,   208,   261,    64,   249,   209,
      94,   166,   251,    10,    65,   213,   141,   297,    66,    67,
      68,   130,   278,   210,   254,   177,   307,   211,     9,   280,
      69,   201,   139,   281,   149,   146,    59,    70,   219,   100,
     203,    71,    72,    41,   311,   153,   286,   149,   205,   318,
     319,   290,   149,   149,   131,   137,   295,   296,   154,   208,
     131,   143,   144,   298,   306,   220,   323,   155,   179,   304,
     302,   131,   262,   292,   305,   149,   331,   287,   332,   333,
     288,   335,   208,   149,   310,   137,   320,   324,   340,   149,
     341,   342,   293,   330,   156,   149,     1,   344,     2,     3,
       4,     5,     6,   171,   172,   314,   157,   313,   149,   316,
     317,     2,     3,     4,     5,     6,   283,   284,   149,   173,
     149,   174,   334,   149,   336,   131,   161,   343,     9,   254,
     326,   328,   175,   273,   329,   274,   137,   149,   202,   267,
     203,     3,     4,     5,     6,   338,    52,   184,   137,    97,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,    28,    29,    30,   101,    32,     2,
       3,     4,     5,   102,   185,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    64,     2,     3,     4,
       5,     6,   219,    65,   203,   235,   236,    66,    67,    68,
     137,   186,   188,   114,    52,   115,   189,   190,   149,    69,
     279,     2,     3,     4,     5,     6,    70,   191,   194,   137,
      71,    72,    28,    29,    30,   101,    32,     2,     3,     4,
       5,   102,   195,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    64,   196,    97,   212,   137,   241,
     222,    65,   301,   246,   259,    66,    67,    68,   263,   265,
     276,   114,    52,   197,   285,   277,   294,    69,   289,   299,
     322,   137,   339,    43,    70,   300,   137,   321,    71,    72,
      28,    29,    30,   101,    32,   176,   137,   250,   309,    33,
     215,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    64,     2,     3,     4,     5,     6,   138,    65,
     275,   216,   227,    66,    67,    68,   224,   228,   198,   114,
      52,   199,   229,   226,   230,    69,     2,     3,     4,     5,
       6,    35,    70,     9,   234,     0,    71,    72,    28,    29,
      30,   101,    32,   219,   267,   203,     0,    33,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      64,    52,     0,     0,     0,     0,     0,    65,     0,     0,
       0,    66,    67,    68,     0,     0,     0,   114,    52,   266,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,    71,    72,    28,    29,    30,   101,
      32,     0,     0,     0,     0,    33,     0,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    64,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
      67,    68,     0,     0,     0,   114,    52,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,    71,    72,    28,    29,    30,    31,    32,     0,
       3,     4,     5,   102,     0,     0,     0,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    64,    33,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    66,    67,    68,
      64,     0,     0,     0,     0,     0,     0,    65,     0,    69,
       0,    66,    67,    68,     0,     0,    70,     0,     0,     0,
      71,    72,     0,    69,     0,     0,   135,     0,     0,     0,
      70,     0,     0,     0,    71,    72,    28,    29,    30,    31,
      32,     0,     0,     0,     0,    33,     0,     0,     0,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    64,    33,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
      67,    68,    64,     0,     0,     0,   177,     0,     0,    65,
       0,    69,     0,    66,    67,    68,     0,     0,    70,   192,
       0,     0,    71,    72,     0,    69,    28,    29,    30,    31,
      32,     0,    70,     0,     0,    33,    71,    72,     0,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    64,    33,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
      67,    68,    64,     0,     0,     0,     0,     0,     0,    65,
       0,    69,   242,    66,    67,    68,     0,     0,    70,   257,
       0,     0,    71,    72,     0,    69,    28,    29,    30,    31,
      32,     0,    70,     0,     0,    33,    71,    72,     1,     0,
       2,     3,     4,     5,     6,     0,     0,     1,    64,     2,
       3,     4,     5,     6,     7,    65,     0,     0,     0,    66,
      67,    68,     0,    28,    29,    30,    31,    32,     0,     0,
       9,    69,    33,     0,   270,     0,     8,     0,    70,     9,
      10,     0,    71,    72,     0,    64,     0,     0,     0,    10,
       0,     0,    65,     0,     0,     0,    66,    67,    68,     0,
       0,     0,   291,    28,    29,    30,    31,    32,    69,     0,
       0,     0,    33,     0,     0,    70,     0,     0,     0,    71,
      72,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,    66,    67,    68,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    69,    33,
       0,   303,     0,     0,     0,    70,     0,     0,     0,    71,
      72,     0,    64,     0,     0,     0,     0,     0,     0,    65,
       0,     0,     0,    66,    67,    68,     0,     0,    28,    29,
      30,    31,    32,     0,     0,    69,   312,    33,     0,     0,
       0,     0,    70,     0,     0,     0,    71,    72,     0,     0,
      64,     0,     0,     0,     0,     0,     0,    65,     0,     0,
       0,    66,    67,    68,     0,     0,     0,   315,    28,    29,
      30,    31,    32,    69,     0,     0,     0,    33,     0,     0,
      70,     0,     0,     0,    71,    72,     0,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,    65,     0,     0,
       0,    66,    67,    68,     0,     0,    28,    29,    30,    31,
      32,     0,     0,    69,   325,    33,     0,     0,     0,     0,
      70,     0,     0,     0,    71,    72,     0,     0,    64,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
      67,    68,     0,     0,    28,    29,    30,    31,    32,     0,
       0,    69,   327,    33,     0,     0,     0,     0,    70,     0,
       0,     0,    71,    72,     0,     0,    64,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    66,    67,    68,
       0,     0,    28,    29,    30,    31,    32,     0,     0,    69,
     337,    33,     0,     0,     0,     0,    70,     0,     0,     0,
      71,    72,     0,     0,    64,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,    66,    67,    68,     0,    28,
      29,    30,    31,    32,     0,     0,     0,    69,    33,     0,
       0,     0,     0,     0,    70,     0,     0,     0,    71,    72,
       0,    64,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,    66,    67,    68,     0,    28,    29,    30,    31,
      32,     0,     0,     0,   142,    33,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    71,    72,     0,    64,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,    71,    72
};

static const yytype_int16 yycheck[] =
{
      34,    10,     0,    58,    57,     9,    25,    16,   100,   105,
       8,   131,   177,     9,    12,     6,    23,    69,   205,    17,
      18,    19,     8,     6,     6,   121,    23,   147,     6,    47,
      10,    97,     6,   220,    52,    69,    40,    35,    88,     6,
      47,   158,   159,   160,    40,    52,    55,    54,   100,    35,
      47,    43,    43,   145,   146,    38,     0,    54,    38,    57,
       3,     4,     5,     6,     7,    48,    48,    50,    50,    12,
      48,    38,    31,    69,    42,    42,   110,    45,     6,    45,
      26,    48,    45,   149,   139,    51,    49,    96,   184,   181,
     142,    98,    27,   145,   146,    44,    45,    56,    57,   195,
      46,    98,   198,   169,   100,    48,     6,   173,   142,   116,
      38,   177,    36,    37,   164,   165,   166,    52,   152,   284,
      48,     6,   131,     9,    10,    11,    12,   131,     6,   181,
       8,     9,    10,    11,    12,     3,     4,     5,     6,     7,
     174,    38,    39,   147,    12,    48,   142,    50,   203,   145,
     146,   185,   186,    38,   188,    45,   190,    25,    44,    49,
      49,    58,    47,    48,    32,    44,    45,   263,    36,    37,
      38,    49,   222,    45,   183,    43,    44,    49,    38,    45,
      48,    42,    46,    49,    45,   181,   205,    55,    48,    43,
      50,    59,    60,   202,   290,    28,   251,    45,   202,   295,
     296,    49,    45,    45,   202,    58,    49,    49,    53,    45,
     208,    64,    65,    49,   280,   219,   312,    54,   284,   274,
     273,   219,    42,   257,   279,    45,   322,    42,   324,   325,
      45,   327,    45,    45,   289,    88,    49,    49,   334,    45,
     336,   337,    42,    49,    55,    45,     6,   343,     8,     9,
      10,    11,    12,    32,    33,    42,    29,   291,    45,   293,
     294,     8,     9,    10,    11,    12,    44,    45,    45,    48,
      45,    50,    49,    45,    49,   273,    30,    49,    38,   288,
     314,   315,    61,    48,    42,    50,   139,    45,    48,    49,
      50,     9,    10,    11,    12,   329,    43,    47,   151,    46,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    48,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     8,     9,    10,
      11,    12,    48,    32,    50,   162,   163,    36,    37,    38,
     203,    48,    48,    42,    43,    44,    42,    48,    45,    48,
      47,     8,     9,    10,    11,    12,    55,    42,     3,   222,
      59,    60,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    47,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     6,    46,    51,   251,     6,
      49,    32,    49,     6,    17,    36,    37,    38,    47,    42,
       6,    42,    43,    44,    42,    49,    48,    48,    47,    49,
      34,   274,    42,    12,    55,    51,   279,    51,    59,    60,
       3,     4,     5,     6,     7,    96,   289,   181,   288,    12,
     141,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     8,     9,    10,    11,    12,    60,    32,
     208,   142,   154,    36,    37,    38,   151,   155,   116,    42,
      43,    44,   156,   153,   157,    48,     8,     9,    10,    11,
      12,     7,    55,    38,   161,    -1,    59,    60,     3,     4,
       5,     6,     7,    48,    49,    50,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    43,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    25,    12,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    48,
      -1,    36,    37,    38,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    12,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    25,    -1,    -1,    -1,    43,    -1,    -1,    32,
      -1,    48,    -1,    36,    37,    38,    -1,    -1,    55,    42,
      -1,    -1,    59,    60,    -1,    48,     3,     4,     5,     6,
       7,    -1,    55,    -1,    -1,    12,    59,    60,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    12,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    48,    49,    36,    37,    38,    -1,    -1,    55,    42,
      -1,    -1,    59,    60,    -1,    48,     3,     4,     5,     6,
       7,    -1,    55,    -1,    -1,    12,    59,    60,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,     6,    25,     8,
       9,    10,    11,    12,    13,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      38,    48,    12,    -1,    51,    -1,    35,    -1,    55,    38,
      48,    -1,    59,    60,    -1,    25,    -1,    -1,    -1,    48,
      -1,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
      -1,    -1,    42,     3,     4,     5,     6,     7,    48,    -1,
      -1,    -1,    12,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    48,    12,
      -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    48,    49,    12,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    -1,    -1,    -1,    42,     3,     4,
       5,     6,     7,    48,    -1,    -1,    -1,    12,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    48,    49,    12,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    48,    49,    12,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    48,
      49,    12,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    48,    12,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    48,    12,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     8,     9,    10,    11,    12,    13,    35,    38,
      48,    63,    64,    65,    66,    67,    69,    70,    71,    72,
      73,    74,    82,    85,    86,    87,     6,    43,     3,     4,
       5,     6,     7,    12,    48,   123,   125,    63,    72,    87,
      88,    85,     0,    65,    42,    76,    77,    85,    69,    69,
      69,     6,    43,    67,    68,    69,   100,    48,    50,    86,
      43,     6,    83,    84,    25,    32,    36,    37,    38,    48,
      55,    59,    60,   105,   106,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    63,    72,    87,    49,    42,    45,    46,    68,   100,
      43,     6,    12,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    42,    44,    68,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    67,   100,    85,     6,
      49,    69,    89,    90,    91,    51,   108,   120,    83,    46,
      44,    45,    48,   120,   120,    71,    72,    79,    94,    45,
      49,    27,    52,    28,    53,    54,    55,    29,    31,    56,
      57,    30,    36,    37,    38,    39,    58,    26,    46,   107,
     119,    32,    33,    48,    50,    61,    77,    43,    92,   106,
     100,    75,    78,    79,    47,    48,    48,    97,    48,    42,
      48,    42,    42,   105,     3,    47,     6,    44,   101,    44,
      97,    42,    48,    50,    85,    87,    95,    96,    45,    49,
      45,    49,    51,    44,   108,    84,    94,    79,    79,    48,
      87,    95,    49,   106,   110,   105,   111,   112,   113,   114,
     115,   116,   116,   116,   117,   118,   118,   119,   119,   119,
     106,     6,    49,   106,   124,   105,     6,    92,    93,    44,
      78,    47,    80,    81,    85,    97,   105,    42,   105,    17,
     105,   105,    42,    47,    97,    42,    44,    49,    89,    95,
      51,   108,    96,    48,    50,    90,     6,    49,   119,    47,
      45,    49,    51,    44,    45,    42,   108,    42,    45,    47,
      49,    42,   105,    42,    48,    49,    49,    97,    49,    49,
      51,    49,    89,    51,   108,   108,   106,    44,    92,    81,
     108,    97,    49,   105,    42,    42,   105,   105,    97,    97,
      49,    51,    34,    97,    49,    49,   105,    49,   105,    42,
      49,    97,    97,    97,    49,    97,    49,    49,   105,    42,
      97,    97,    97,    49,    97
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1870 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 268 "parser.y"


int main()
{
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
