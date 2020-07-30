
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
#line 1 "main.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	char valname[1009][1009];
	int data[1009];
	int idx=1;
	int isDeclared(char *now){
		for(int i=1;i<idx;i++){
			if(strcmp(valname[i],now)==0){
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)!=0)return 0;
		strcpy(valname[idx],now);
		data[idx]=0;
		idx++;
	}
	int getVal(char *now){
		return data[isDeclared(now)];
	}
	int setVal(char *now,int v){
		int id = isDeclared(now);
		data[id] = v;
	}


/* Line 189 of yacc.c  */
#line 104 "main.tab.c"

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
     NUMBER = 258,
     VAR = 259,
     IF = 260,
     PLUS = 261,
     MINUS = 262,
     MUL = 263,
     DIV = 264,
     MOD = 265,
     ELSE = 266,
     ELSEIF = 267,
     ARRAY = 268,
     CODESTART = 269,
     INT = 270,
     FLOAT = 271,
     CHAR = 272,
     BS = 273,
     BE = 274,
     LOOP = 275,
     WHILE = 276,
     ODDEVEN = 277,
     SHOW = 278,
     SIN = 279,
     COS = 280,
     FACTORIAL = 281,
     CASE = 282,
     DEFAULT = 283,
     SWITCH = 284,
     IFX = 285
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 32 "main.y"

	char text[1009];
	int val;



/* Line 214 of yacc.c  */
#line 177 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 189 "main.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,    37,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    34,
      31,    35,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    39,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      34,    46,    65,    75,    87,    93,    99,   105,   113,   121,
     124,   126,   128,   130,   134,   136,   138,   141,   142,   145,
     151,   156,   158,   160,   164,   168,   172,   176,   180,   184,
     188,   192,   196,   199
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    14,    33,    18,    42,    19,    -1,    -1,
      42,    43,    -1,    34,    -1,    44,    34,    -1,    51,    34,
      -1,     4,    35,    51,    34,    -1,     5,    36,    51,    37,
      18,    43,    19,    -1,     5,    36,    51,    37,    18,    43,
      19,    11,    18,    43,    19,    -1,     5,    36,    51,    37,
      18,    43,    19,    12,    36,    51,    37,    18,    43,    19,
      11,    18,    43,    19,    -1,    21,    36,     3,    31,     3,
      37,    18,    43,    19,    -1,    20,    36,     3,    38,     3,
      38,     3,    37,    18,    43,    19,    -1,    23,    36,    51,
      37,    34,    -1,    26,    36,     3,    37,    34,    -1,    22,
      36,     3,    37,    34,    -1,    13,    45,     4,    36,     3,
      37,    34,    -1,    29,    36,     3,    37,    18,    47,    19,
      -1,    45,    46,    -1,    15,    -1,    16,    -1,    17,    -1,
      46,    38,     4,    -1,     4,    -1,    48,    -1,    48,    50,
      -1,    -1,    48,    49,    -1,    27,     3,    33,    51,    34,
      -1,    28,    33,    51,    34,    -1,     3,    -1,     4,    -1,
      51,     6,    51,    -1,    51,     7,    51,    -1,    51,     8,
      51,    -1,    51,     9,    51,    -1,    51,    10,    51,    -1,
      51,    39,    51,    -1,    51,    31,    51,    -1,    51,    32,
      51,    -1,    36,    51,    37,    -1,    24,    51,    -1,    25,
      51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    55,    57,    60,    61,    63,    67,    75,
      85,    94,   105,   114,   124,   127,   140,   152,   158,   166,
     171,   172,   173,   178,   185,   194,   195,   198,   199,   202,
     204,   210,   212,   214,   216,   218,   220,   230,   240,   241,
     243,   245,   246,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VAR", "IF", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "ELSE", "ELSEIF", "ARRAY", "CODESTART", "INT",
  "FLOAT", "CHAR", "BS", "BE", "LOOP", "WHILE", "ODDEVEN", "SHOW", "SIN",
  "COS", "FACTORIAL", "CASE", "DEFAULT", "SWITCH", "IFX", "'<'", "'>'",
  "':'", "';'", "'='", "'('", "')'", "','", "'^'", "$accept", "program",
  "line", "statement", "declaration", "TYPE", "ID1", "SWITCHCASE",
  "casegrammer", "casenumber", "defaultgrammer", "expression", 0
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
     285,    60,    62,    58,    59,    61,    40,    41,    44,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    44,
      45,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      50,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,     7,
      11,    18,     9,    11,     5,     5,     5,     7,     7,     2,
       1,     1,     1,     3,     1,     1,     2,     0,     2,     5,
       4,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    31,    32,     0,
       0,    20,    21,    22,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    42,    43,     0,
       0,     0,     6,    24,    19,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,     0,    33,    34,    35,    36,    37,
      39,    40,    38,     8,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    16,    14,    15,
      27,     0,     0,     0,     0,     0,    25,     9,    17,     0,
       0,    18,     0,     0,    28,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    30,    10,     0,    13,    29,     0,     0,     0,
       0,     0,     0,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,    25,    26,    27,    44,    95,    96,   104,
     105,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
      -8,   -24,     8,    -6,   -80,   -80,    34,   -80,   -16,   -14,
      -2,   -80,   -80,   -80,   -80,   -13,   -12,   -11,     4,   210,
     210,    10,    25,   -80,   210,   -80,    28,    16,    93,   210,
     210,    60,    66,    68,    69,   210,   -80,   199,   199,    70,
      73,    98,   -80,   -80,    42,   210,   210,   210,   210,   210,
     210,   210,   -80,   210,   107,   112,    45,    51,    59,    56,
     146,    58,    75,   -80,   119,   101,   101,    -3,    -3,   199,
      35,    35,   199,   -80,   108,   125,   128,   130,   100,   102,
     111,   124,   -80,    62,   110,   120,   113,   -80,   -80,   -80,
     -80,   129,   123,   156,   142,   152,   -25,     6,   -80,   135,
      62,   -80,   170,   141,   -80,   -80,   157,   140,   161,   162,
     147,   210,    62,   210,    62,   -80,   210,   155,   163,   160,
     165,   194,   -80,   -80,   172,   -80,   -80,    62,   169,   182,
     177,    62,   179,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -79,   -80,   186,   -80,   -80,   -80,   -80,
     -80,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      37,    38,   102,   103,    91,    41,     1,    49,     4,     3,
      54,    55,     5,    11,    12,    13,    60,   106,   107,    29,
      43,   109,    30,    32,    33,    34,    65,    66,    67,    68,
      69,    70,    71,   118,    72,   120,    53,     7,     8,     9,
      35,    45,    46,    47,    48,    49,    39,    10,   128,    11,
      12,    13,   132,    14,    15,    16,    17,    18,    19,    20,
      21,    40,    42,    22,    56,     7,     8,     9,    23,    57,
      24,    58,    59,    61,    53,    10,    62,    11,    12,    13,
      64,    75,    15,    16,    17,    18,    19,    20,    21,    76,
      77,    22,   117,    78,   119,    80,    23,   121,    24,    45,
      46,    47,    48,    49,    45,    46,    47,    48,    49,    47,
      48,    49,    81,    45,    46,    47,    48,    49,    45,    46,
      47,    48,    49,    82,    50,    51,    83,    52,    84,    50,
      51,    85,    53,    86,    87,    63,    88,    53,    50,    51,
      53,    73,    90,    50,    51,    89,    53,    92,    97,    74,
      94,    53,    45,    46,    47,    48,    49,    98,    93,    99,
     100,    45,    46,    47,    48,    49,    45,    46,    47,    48,
      49,   101,   108,   110,   111,   112,   113,    50,    51,   114,
     116,   115,   123,    79,   125,    53,    50,    51,   129,   122,
     127,    50,    51,   130,    53,   131,    31,   124,   133,    53,
      45,    46,    47,    48,    49,    45,    46,    47,    48,    49,
       0,     0,     0,     7,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,   126,     0,
      50,    51,     0,    53,    19,    20,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
      19,    20,    27,    28,    83,    24,    14,    10,     0,    33,
      29,    30,    18,    15,    16,    17,    35,    11,    12,    35,
       4,   100,    36,    36,    36,    36,    45,    46,    47,    48,
      49,    50,    51,   112,    53,   114,    39,     3,     4,     5,
      36,     6,     7,     8,     9,    10,    36,    13,   127,    15,
      16,    17,   131,    19,    20,    21,    22,    23,    24,    25,
      26,    36,    34,    29,     4,     3,     4,     5,    34,     3,
      36,     3,     3,     3,    39,    13,     3,    15,    16,    17,
      38,    36,    20,    21,    22,    23,    24,    25,    26,    38,
      31,    29,   111,    37,   113,    37,    34,   116,    36,     6,
       7,     8,     9,    10,     6,     7,     8,     9,    10,     8,
       9,    10,    37,     6,     7,     8,     9,    10,     6,     7,
       8,     9,    10,     4,    31,    32,    18,    34,     3,    31,
      32,     3,    39,     3,    34,    37,    34,    39,    31,    32,
      39,    34,    18,    31,    32,    34,    39,    37,    19,    37,
      37,    39,     6,     7,     8,     9,    10,    34,    38,     3,
      18,     6,     7,     8,     9,    10,     6,     7,     8,     9,
      10,    19,    37,     3,    33,    18,    36,    31,    32,    18,
      33,    19,    19,    37,    19,    39,    31,    32,    19,    34,
      18,    31,    32,    11,    39,    18,    10,    37,    19,    39,
       6,     7,     8,     9,    10,     6,     7,     8,     9,    10,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      31,    32,    -1,    39,    24,    25,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    41,    33,     0,    18,    42,     3,     4,     5,
      13,    15,    16,    17,    19,    20,    21,    22,    23,    24,
      25,    26,    29,    34,    36,    43,    44,    45,    51,    35,
      36,    45,    36,    36,    36,    36,     4,    51,    51,    36,
      36,    51,    34,     4,    46,     6,     7,     8,     9,    10,
      31,    32,    34,    39,    51,    51,     4,     3,     3,     3,
      51,     3,     3,    37,    38,    51,    51,    51,    51,    51,
      51,    51,    51,    34,    37,    36,    38,    31,    37,    37,
      37,    37,     4,    18,     3,     3,     3,    34,    34,    34,
      18,    43,    37,    38,    37,    47,    48,    19,    34,     3,
      18,    19,    27,    28,    49,    50,    11,    12,    37,    43,
       3,    33,    18,    36,    18,    19,    33,    51,    43,    51,
      43,    51,    34,    19,    37,    19,    34,    18,    43,    19,
      11,    18,    43,    19
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
        case 2:

/* Line 1455 of yacc.c  */
#line 52 "main.y"
    {printf("Main function END\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 "main.y"
    {  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 63 "main.y"
    {   printf("value of expression: %d\n", (yyvsp[(1) - (2)].val)); (yyval.val)=(yyvsp[(1) - (2)].val);
		printf("\n\n\n\n");
		;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 67 "main.y"
    { 
							printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)].val));
							setVal((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].val));
							//data[$1]=$3;
							(yyval.val)=(yyvsp[(3) - (4)].val);
							printf("\n\n\n\n");
						;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 75 "main.y"
    {
								if((yyvsp[(3) - (7)].val)){
									printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (7)].val));
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n\n\n");
							;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 85 "main.y"
    {
								if((yyvsp[(3) - (11)].val)){
									printf("value of expression in IF: %d\n",(yyvsp[(6) - (11)].val));
								}
								else{
									printf("value of expression in ELSE: %d\n",(yyvsp[(10) - (11)].val));
								}
								printf("\n\n\n\n");
							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 94 "main.y"
    {
									if((yyvsp[(3) - (18)].val)){
									printf("value of expression in IF: %d\n",(yyvsp[(6) - (18)].val));
								}
								else{
									printf("value of expression in ELSE: %d\n",(yyvsp[(17) - (18)].val));
								}
								printf("\n\n\n\n");
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 105 "main.y"
    {
	                                int i;
	                                printf("WHILE Loop execution");
	                                for(i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\niteration loop: %d  :  \n", i);}
	                                printf("\n\n\n\n");
	                                								
				               ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 114 "main.y"
    {
	                                int i;
	                                printf("Loop execution");
	                                for(i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i=i+(yyvsp[(7) - (11)].val) ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,(yyvsp[(10) - (11)].val));}
	                                printf("\n\n\n\n");

				               ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 124 "main.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].val));
		printf("\n\n\n\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 127 "main.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (5)].val);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (5)].val),f);
		printf("\n\n\n\n");

		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 140 "main.y"
    {
		printf("Odd Even Number detection \n");

		if((yyvsp[(3) - (5)].val) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].val));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[(3) - (5)].val));
		}
		printf("\n\n\n\n");
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 152 "main.y"
    {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY is : %d\n",(yyvsp[(5) - (7)].val));
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 158 "main.y"
    {
		printf("\nSWITCH CASE Declaration\n");
        printf("\n\n\n\n");
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 166 "main.y"
    {printf("\nvariable Dection\n");
		printf("\n\n\n\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 171 "main.y"
    {printf("interger declaration\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 172 "main.y"
    {printf("float declaration\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 173 "main.y"
    {printf("char declaration\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 178 "main.y"
    {
	int res = addNewVal((yyvsp[(3) - (3)].text));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 185 "main.y"
    {
		int res = addNewVal((yyvsp[(1) - (1)].text));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 202 "main.y"
    {printf("Case No : %d & expression value :%d \n",(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 204 "main.y"
    {
 				printf("\nDefault case & expression value : %d",(yyvsp[(3) - (4)].val));
 			;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 210 "main.y"
    {  (yyval.val) = (yyvsp[(1) - (1)].val);  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 212 "main.y"
    { (yyval.val) = getVal((yyvsp[(1) - (1)].text)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 214 "main.y"
    {printf("\nAddition :%d+%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val) );  (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 216 "main.y"
    {printf("\nSubtraction :%d-%d=%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 218 "main.y"
    {printf("\nMultiplication :%d*%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 220 "main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nDivision :%d/%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\ndivision by zero\n\t");
				  					} 	
				    			;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 230 "main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nMod :%d % %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 240 "main.y"
    {printf("\nPower  :%d ^ %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) ^ (yyvsp[(3) - (3)].val));  (yyval.val) = pow((yyvsp[(1) - (3)].val) , (yyvsp[(3) - (3)].val));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 241 "main.y"
    {printf("\nLess Than :%d < %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 243 "main.y"
    {printf("\nGreater than :%d > %d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 245 "main.y"
    {	 (yyval.val) = (yyvsp[(2) - (3)].val); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 246 "main.y"
    {printf("\nValue of Sin(%d) is : %lf\n",(yyvsp[(2) - (2)].val),sin((yyvsp[(2) - (2)].val)*3.1416/180)); (yyval.val)=sin((yyvsp[(2) - (2)].val)*3.1416/180);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 248 "main.y"
    {printf("\nValue of Cos(%d) is : %lf\n",(yyvsp[(2) - (2)].val),cos((yyvsp[(2) - (2)].val)*3.1416/180)); (yyval.val)=cos((yyvsp[(2) - (2)].val)*3.1416/180);;}
    break;



/* Line 1455 of yacc.c  */
#line 1854 "main.tab.c"
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
#line 251 "main.y"



int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}

