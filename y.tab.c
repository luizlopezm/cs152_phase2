/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     BEGIN_PARAMS = 259,
     END_PARAMS = 260,
     BEGIN_LOCALS = 261,
     END_LOCALS = 262,
     BEGIN_BODY = 263,
     END_BODY = 264,
     INTEGER = 265,
     ARRAY = 266,
     OF = 267,
     IF = 268,
     THEN = 269,
     ENDIF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     BEGINLOOP = 274,
     ENDLOOP = 275,
     CONTINUE = 276,
     READ = 277,
     WRITE = 278,
     AND = 279,
     OR = 280,
     NOT = 281,
     TRUE = 282,
     FALSE = 283,
     RETURN = 284,
     SUB = 285,
     ADD = 286,
     MULT = 287,
     DIV = 288,
     MOD = 289,
     EQ = 290,
     NEQ = 291,
     LT = 292,
     GT = 293,
     LTE = 294,
     GTE = 295,
     NUMBER = 296,
     IDENT = 297,
     SEMICOLON = 298,
     COLON = 299,
     COMMA = 300,
     L_PAREN = 301,
     R_PAREN = 302,
     L_SQUARE_BRACKET = 303,
     R_SQUARE_BRACKET = 304,
     ASSIGN = 305
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGIN_PARAMS 259
#define END_PARAMS 260
#define BEGIN_LOCALS 261
#define END_LOCALS 262
#define BEGIN_BODY 263
#define END_BODY 264
#define INTEGER 265
#define ARRAY 266
#define OF 267
#define IF 268
#define THEN 269
#define ENDIF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define BEGINLOOP 274
#define ENDLOOP 275
#define CONTINUE 276
#define READ 277
#define WRITE 278
#define AND 279
#define OR 280
#define NOT 281
#define TRUE 282
#define FALSE 283
#define RETURN 284
#define SUB 285
#define ADD 286
#define MULT 287
#define DIV 288
#define MOD 289
#define EQ 290
#define NEQ 291
#define LT 292
#define GT 293
#define LTE 294
#define GTE 295
#define NUMBER 296
#define IDENT 297
#define SEMICOLON 298
#define COLON 299
#define COMMA 300
#define L_PAREN 301
#define R_PAREN 302
#define L_SQUARE_BRACKET 303
#define R_SQUARE_BRACKET 304
#define ASSIGN 305




/* Copy the first part of user declarations.  */
#line 10 "861060042.y"

 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 int yylex();
 extern int Line;
 extern int Pos;
 FILE * yyin;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "861060042.y"
{
  double  nval;
  char  *idval;
}
/* Line 193 of yacc.c.  */
#line 211 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 224 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    21,    23,    24,    28,    31,
      35,    38,    42,    51,    55,    57,    59,    62,    66,    69,
      71,    74,    78,    81,    83,    86,    90,    92,    94,    98,
     100,   103,   107,   111,   114,   117,   119,   122,   126,   130,
     134,   137,   140,   143,   146,   148,   150,   152,   154,   158,
     162,   167,   169,   173,   177,   179,   182,   185,   188,   195,
     201,   207,   209,   213,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    52,    53,    -1,    53,    -1,    78,    91,
      93,   110,    54,   111,   112,    54,   113,   114,    56,   115,
      -1,    55,    -1,    -1,    55,    57,    93,    -1,    57,    93,
      -1,    56,    73,    93,    -1,    73,    93,    -1,    58,    95,
     116,    -1,    58,    95,   119,   117,    92,   118,    96,   116,
      -1,    58,    91,   109,    -1,    91,    -1,    61,    -1,    61,
      60,    -1,    60,    97,    61,    -1,    97,    61,    -1,    63,
      -1,    63,    62,    -1,    62,    98,    63,    -1,    98,    63,
      -1,    64,    -1,   104,    64,    -1,    65,    76,    65,    -1,
     105,    -1,   106,    -1,   107,    59,   108,    -1,    67,    -1,
      67,    66,    -1,    66,    99,    67,    -1,    66,   100,    67,
      -1,    99,    67,    -1,   100,    67,    -1,    69,    -1,    69,
      68,    -1,    68,   101,    69,    -1,    68,   102,    69,    -1,
      68,   103,    69,    -1,   101,    69,    -1,   102,    69,    -1,
     103,    69,    -1,   100,    70,    -1,    70,    -1,    71,    -1,
      77,    -1,    92,    -1,   107,    65,   108,    -1,    91,   107,
     108,    -1,    91,   107,    72,   108,    -1,    65,    -1,    65,
     109,    72,    -1,    77,    94,    65,    -1,    79,    -1,    80,
      65,    -1,    81,    75,    -1,    90,    75,    -1,    83,    88,
      56,    89,    82,    59,    -1,    82,    59,    88,    56,    59,
      -1,    84,    59,    85,    56,    74,    -1,    87,    -1,    86,
      56,    87,    -1,    77,   109,    75,    -1,    77,    -1,   120,
      -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,   125,
      -1,    91,    -1,    91,   117,    65,   118,    -1,     3,    -1,
      21,    -1,    29,    -1,    22,    -1,    17,    -1,    18,    -1,
      13,    -1,    14,    -1,    16,    -1,    15,    -1,    19,    -1,
      20,    -1,    23,    -1,    42,    -1,    41,    -1,    43,    -1,
      50,    -1,    44,    -1,    12,    -1,    25,    -1,    24,    -1,
      31,    -1,    30,    -1,    32,    -1,    33,    -1,    34,    -1,
      26,    -1,    27,    -1,    28,    -1,    46,    -1,    47,    -1,
      45,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    48,    -1,    49,    -1,
      11,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    58,    61,    62,    64,    65,    69,
      70,    76,    77,    80,    81,    86,    87,    90,    91,    94,
      95,    98,    99,   102,   103,   106,   107,   108,   109,   114,
     115,   118,   119,   120,   121,   124,   125,   127,   128,   129,
     130,   131,   132,   135,   136,   137,   140,   141,   142,   145,
     146,   149,   150,   157,   158,   159,   160,   161,   162,   163,
     164,   169,   170,   173,   174,   178,   179,   180,   181,   182,
     183,   187,   188,   193,   196,   199,   202,   205,   208,   211,
     214,   217,   220,   223,   226,   229,   232,   235,   238,   241,
     244,   247,   250,   253,   256,   259,   262,   265,   268,   271,
     274,   277,   280,   283,   286,   289,   292,   295,   298,   301,
     304,   307,   310,   313,   316,   319,   322,   325,   328,   331,
     334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "NUMBER", "IDENT", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "$accept", "prog_start", "func_start", "dt_loop", "d_loop", "s_loop",
  "declaration", "id_loop", "bool_expr", "b_loop", "relation_and_expr",
  "r_loop", "relation_expr", "r_block", "expression", "e_loop",
  "mutiplicative_expr", "m_loop", "term", "term_b1", "term_b2", "t_loop",
  "statement", "if_loop", "var_loop", "comp", "var", "function",
  "continue", "return", "read", "while", "do", "if", "then", "else",
  "endif", "beginloop", "endloop", "write", "identifier", "number",
  "semicolon", "assign", "colon", "of", "or", "and", "add", "sub", "mult",
  "div", "mod", "not", "true", "false", "l_paren", "r_paren", "comma",
  "beginparams", "endparams", "beginlocals", "endlocals", "beginbody",
  "endbody", "integer", "l_bracket", "r_bracket", "array", "eq", "neq",
  "lt", "gt", "lte", "gte", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,    12,     1,     0,     3,     2,     3,
       2,     3,     8,     3,     1,     1,     2,     3,     2,     1,
       2,     3,     2,     1,     2,     3,     1,     1,     3,     1,
       2,     3,     3,     2,     2,     1,     2,     3,     3,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     3,     3,
       4,     1,     3,     3,     1,     2,     2,     2,     6,     5,
       5,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    73,     0,     3,     0,     1,     2,    86,     0,    88,
       0,   105,     6,     0,     5,     0,     0,    14,   106,     0,
       0,     8,    90,     0,     0,   107,     6,     7,   104,    13,
     111,   114,    11,     0,     0,   112,     0,   108,     0,    87,
       0,   109,     0,   113,     0,    79,    77,    78,    74,    76,
      85,    75,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,    71,    91,     0,   110,     0,     4,    10,    89,
       0,    95,   102,    55,    29,    35,    44,    45,    46,    71,
      47,     0,     0,    56,    64,    99,   100,   101,     0,    15,
      19,    23,     0,     0,    26,    27,     0,    83,     0,     0,
      57,     0,    12,     9,    53,    94,    30,     0,     0,    96,
      97,    98,    36,     0,     0,     0,     0,    43,     0,     0,
       0,    92,    16,     0,    93,    20,     0,   115,   116,   117,
     118,   119,   120,     0,    65,    66,    67,    68,    69,    70,
      24,     0,     0,     0,    80,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    40,    41,    42,   103,    51,     0,
      49,    48,    63,     0,     0,    18,     0,    22,    25,    28,
      84,     0,     0,    72,    31,    32,    37,    38,    39,     0,
      50,    59,    46,    17,    21,     0,    82,    81,    60,     0,
      61,    52,    58,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    14,    52,    15,    16,    88,   122,
      89,   125,    90,    91,    92,   106,    74,   112,    75,    76,
      77,   159,    53,   188,    83,   133,    78,     4,    55,    56,
      57,    58,    59,    60,   145,   189,   190,    98,   171,    61,
      79,    80,    10,    70,    24,    64,   123,   126,   107,    81,
     113,   114,   115,    93,    94,    95,    82,   161,    29,    12,
      19,    26,    38,    42,    67,    32,   101,    44,    33,   134,
     135,   136,   137,   138,   139
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -112
static const yytype_int16 yypact[] =
{
      14,  -112,    31,  -112,   -21,  -112,  -112,  -112,   -10,  -112,
      23,  -112,   -21,    47,   -21,   -10,     0,  -112,  -112,    50,
     -10,  -112,  -112,    13,    51,  -112,   -21,  -112,  -112,  -112,
    -112,  -112,  -112,    24,    64,  -112,    33,  -112,    67,  -112,
      29,  -112,   101,  -112,    68,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,   153,   -10,    36,  -112,   184,   -21,   137,    65,
     137,   -21,    24,  -112,    77,  -112,   -10,  -112,  -112,  -112,
     184,  -112,  -112,  -112,    34,     3,  -112,  -112,  -112,    -1,
    -112,    62,   184,  -112,    13,  -112,  -112,  -112,    65,    63,
      76,  -112,   221,   209,  -112,  -112,   137,  -112,   101,    75,
    -112,   184,  -112,  -112,  -112,  -112,    34,   184,   184,  -112,
    -112,  -112,     3,   184,   184,   184,    49,  -112,    54,   -21,
     101,  -112,    63,   137,  -112,    76,   137,  -112,  -112,  -112,
    -112,  -112,  -112,   184,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,    54,   205,   189,  -112,   101,    29,   184,   184,  -112,
    -112,   184,   184,   184,  -112,  -112,  -112,  -112,    13,    54,
    -112,  -112,  -112,   131,   137,  -112,   137,  -112,  -112,  -112,
    -112,    85,   175,  -112,  -112,  -112,  -112,  -112,  -112,   184,
    -112,  -112,    36,  -112,  -112,   137,  -112,  -112,  -112,   101,
    -112,  -112,  -112,   206,  -112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,   107,    91,  -112,   -96,   106,  -112,   -57,  -112,
    -110,  -112,  -111,    38,   -50,  -112,   -79,  -112,   -16,    45,
    -112,   -46,   -51,  -112,   -52,  -112,   -38,  -112,  -112,  -112,
    -112,   -44,  -112,  -112,  -112,  -112,   -55,    52,  -112,  -112,
      -4,   109,    10,  -112,  -112,  -112,    25,    21,    44,   -56,
      57,    69,    72,  -112,  -112,  -112,   -53,  -100,   -73,  -112,
    -112,  -112,  -112,  -112,  -112,    92,   147,    40,  -112,  -112,
    -112,  -112,  -112,  -112,  -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       8,    66,   143,    99,    54,    96,    73,    96,    17,   100,
      17,   119,    23,   165,    54,   167,   160,     1,   108,    84,
     104,     7,    17,    84,   163,    21,   116,    11,   149,   150,
      27,     5,   118,     9,     1,   109,   110,   111,    62,   141,
      96,   169,     7,    96,    22,    72,   142,    35,    62,   172,
     148,   146,    18,    62,   183,   184,    25,    62,    28,   180,
      54,    30,    31,    68,    71,   105,   158,   162,   174,   175,
      96,    37,    35,    96,    39,    41,   103,    62,    43,    71,
      63,    84,    54,   168,    97,   179,    69,    30,   121,   144,
      39,     7,    66,   193,    62,    72,   157,   154,   155,   156,
     124,   157,    46,    39,     7,    54,   181,    54,    72,     6,
      96,    96,    66,    96,    45,    62,    62,    34,    46,    47,
      20,    66,    48,    49,    50,   182,   117,   185,   192,   158,
      51,   140,    96,   191,    54,   176,   177,   178,   194,    62,
     120,    62,    66,     7,    45,    40,   166,   164,    46,    47,
     147,    54,    48,    49,    50,    54,   102,    85,    86,    87,
      51,    71,    65,    85,    86,    87,    45,    71,    62,   151,
      46,    47,    39,     7,    48,    49,    50,    72,    39,     7,
      36,   152,    51,    72,   153,    62,   173,     0,    45,    62,
     186,   187,    46,    47,     0,     7,    48,    49,    50,     0,
       0,     0,    45,     0,    51,     0,    46,    47,     0,   170,
      48,    49,    50,     0,    71,     0,     0,     7,    51,    45,
       0,   186,     0,    46,    47,    39,     7,    48,    49,    50,
      72,     7,     0,     0,     0,    51,    86,    87,     0,    71,
     127,   128,   129,   130,   131,   132,     0,     0,     7,     0,
      39,     7,   157,     0,     0,    72,   127,   128,   129,   130,
     131,   132
};

static const yytype_int16 yycheck[] =
{
       4,    52,    98,    60,    42,    58,    56,    60,    12,    61,
      14,    84,    16,   123,    52,   126,   116,     3,    74,    57,
      70,    42,    26,    61,   120,    15,    79,     4,   107,   108,
      20,     0,    82,    43,     3,    32,    33,    34,    42,    96,
      93,   141,    42,    96,    44,    46,    96,    48,    52,   145,
     106,   101,     5,    57,   164,   166,     6,    61,    45,   159,
      98,    10,    11,    53,    30,    31,   116,   119,   147,   148,
     123,     7,    48,   126,    41,     8,    66,    81,    49,    30,
      12,   119,   120,   133,    19,   158,    50,    10,    25,    14,
      41,    42,   143,   189,    98,    46,    47,   113,   114,   115,
      24,    47,    17,    41,    42,   143,   163,   145,    46,     2,
     163,   164,   163,   166,    13,   119,   120,    26,    17,    18,
      14,   172,    21,    22,    23,   163,    81,   171,   185,   179,
      29,    93,   185,   179,   172,   151,   152,   153,   193,   143,
      88,   145,   193,    42,    13,    36,   125,   122,    17,    18,
     106,   189,    21,    22,    23,   193,    64,    26,    27,    28,
      29,    30,     9,    26,    27,    28,    13,    30,   172,   112,
      17,    18,    41,    42,    21,    22,    23,    46,    41,    42,
      33,   112,    29,    46,   112,   189,   146,    -1,    13,   193,
      15,    16,    17,    18,    -1,    42,    21,    22,    23,    -1,
      -1,    -1,    13,    -1,    29,    -1,    17,    18,    -1,    20,
      21,    22,    23,    -1,    30,    -1,    -1,    42,    29,    13,
      -1,    15,    -1,    17,    18,    41,    42,    21,    22,    23,
      46,    42,    -1,    -1,    -1,    29,    27,    28,    -1,    30,
      35,    36,    37,    38,    39,    40,    -1,    -1,    42,    -1,
      41,    42,    47,    -1,    -1,    46,    35,    36,    37,    38,
      39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    53,    78,     0,    53,    42,    91,    43,
      93,     4,   110,    54,    55,    57,    58,    91,     5,   111,
      57,    93,    44,    91,    95,     6,   112,    93,    45,   109,
      10,    11,   116,   119,    54,    48,   117,     7,   113,    41,
      92,     8,   114,    49,   118,    13,    17,    18,    21,    22,
      23,    29,    56,    73,    77,    79,    80,    81,    82,    83,
      84,    90,    91,    12,    96,     9,    73,   115,    93,    50,
      94,    30,    46,    65,    67,    69,    70,    71,    77,    91,
      92,   100,   107,    75,    77,    26,    27,    28,    59,    61,
      63,    64,    65,   104,   105,   106,   107,    19,    88,    59,
      75,   117,   116,    93,    65,    31,    66,    99,   100,    32,
      33,    34,    68,   101,   102,   103,   107,    70,    65,   109,
      88,    25,    60,    97,    24,    62,    98,    35,    36,    37,
      38,    39,    40,    76,   120,   121,   122,   123,   124,   125,
      64,    59,    65,    56,    14,    85,    65,    99,   100,    67,
      67,   101,   102,   103,    69,    69,    69,    47,    65,    72,
     108,   108,    75,    56,    97,    61,    98,    63,    65,   108,
      20,    89,    56,   118,    67,    67,    69,    69,    69,   109,
     108,    59,    77,    61,    63,    82,    15,    16,    74,    86,
      87,    72,    59,    56,    87
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 54 "861060042.y"
    { printf( "prog_start ->  prog_start func_start\n"); ;}
    break;

  case 3:
#line 55 "861060042.y"
    { printf( "prog_start -> func_start\n"); ;}
    break;

  case 4:
#line 58 "861060042.y"
    { printf( "prog_start -> function indentifier semicolon beginparams dt_loop endparams beginlocals dt_loop endlocals beginbody s_loop endbody\n"); ;}
    break;

  case 5:
#line 61 "861060042.y"
    {printf( "dt_loop -> d_loop\n"); ;}
    break;

  case 6:
#line 62 "861060042.y"
    { printf( "dt_loop -> epsilon\n"); ;}
    break;

  case 7:
#line 64 "861060042.y"
    {printf( "d_loop -> d_loop declaration semicolon\n"); ;}
    break;

  case 8:
#line 65 "861060042.y"
    {printf( "d_loop -> declaration semicolon\n"); ;}
    break;

  case 9:
#line 69 "861060042.y"
    {printf( "s_loop -> s_loop statement semicolon\n"); ;}
    break;

  case 10:
#line 70 "861060042.y"
    {printf( "s_loop -> statement semicolon\n"); ;}
    break;

  case 11:
#line 76 "861060042.y"
    {printf( "declaration -> id_loop colon integer\n"); ;}
    break;

  case 12:
#line 77 "861060042.y"
    {printf( "declaration -> id_loop colon array l_bracket number r_bracket of integer\n"); ;}
    break;

  case 13:
#line 80 "861060042.y"
    {printf( "id_loop -> id_loop identifier comma\n"); ;}
    break;

  case 14:
#line 81 "861060042.y"
    {printf( "id_loop -> identifier\n"); ;}
    break;

  case 15:
#line 86 "861060042.y"
    {printf( "bool_expr -> relation_and_expr\n"); ;}
    break;

  case 16:
#line 87 "861060042.y"
    {printf( "bool_expr -> relation_and_expr b_loop\n"); ;}
    break;

  case 17:
#line 90 "861060042.y"
    {printf( "b_loop -> b_loop or relation_and_expr\n"); ;}
    break;

  case 18:
#line 91 "861060042.y"
    {printf( "b_loop -> or relation_and_expr\n"); ;}
    break;

  case 19:
#line 94 "861060042.y"
    {printf( "relation_and_expr -> relation_expr\n"); ;}
    break;

  case 20:
#line 95 "861060042.y"
    {printf( "relation_and_expr -> relation_expr r_loop\n"); ;}
    break;

  case 21:
#line 98 "861060042.y"
    {printf( "r_loop -> r_loop and relation_expr\n"); ;}
    break;

  case 22:
#line 99 "861060042.y"
    {printf( "r_loop -> and relation_expr\n"); ;}
    break;

  case 23:
#line 102 "861060042.y"
    {printf( "relation_expr -> r_block\n"); ;}
    break;

  case 24:
#line 103 "861060042.y"
    {printf( "relation_expr -> not r_block\n"); ;}
    break;

  case 25:
#line 106 "861060042.y"
    {printf( "r_block -> expression comp expression\n"); ;}
    break;

  case 26:
#line 107 "861060042.y"
    {printf( "r_block -> true\n"); ;}
    break;

  case 27:
#line 108 "861060042.y"
    {printf( "r_block -> false\n"); ;}
    break;

  case 28:
#line 109 "861060042.y"
    {printf( "l_paren bool_expr r_paren\n"); ;}
    break;

  case 29:
#line 114 "861060042.y"
    {printf( "expression -> mutiplicative_expr\n"); ;}
    break;

  case 30:
#line 115 "861060042.y"
    {printf( "expression -> mutiplicative_expr b_loop\n"); ;}
    break;

  case 31:
#line 118 "861060042.y"
    {printf( "e_loop -> e_loop add mutiplicative_expr\n"); ;}
    break;

  case 32:
#line 119 "861060042.y"
    {printf( "e_loop -> e_loop sub mutiplicative_expr\n"); ;}
    break;

  case 33:
#line 120 "861060042.y"
    {printf( "s_loop -> add mutiplicative_expr\n"); ;}
    break;

  case 34:
#line 121 "861060042.y"
    {printf( "s_loop -> add mutiplicative_expr\n"); ;}
    break;

  case 35:
#line 124 "861060042.y"
    {printf( "mutiplicative_expr -> term\n"); ;}
    break;

  case 36:
#line 125 "861060042.y"
    {printf( "mutiplicative_expr -> term m_loop\n"); ;}
    break;

  case 37:
#line 127 "861060042.y"
    {printf( "m_loop -> m_loop mult term\n"); ;}
    break;

  case 38:
#line 128 "861060042.y"
    {printf( "m_loop -> m_loop div term\n"); ;}
    break;

  case 39:
#line 129 "861060042.y"
    {printf( "m_loop -> m_loop mod term\n"); ;}
    break;

  case 40:
#line 130 "861060042.y"
    {printf( "m_loop -> mult term\n"); ;}
    break;

  case 41:
#line 131 "861060042.y"
    {printf( "m_loop -> div term\n"); ;}
    break;

  case 42:
#line 132 "861060042.y"
    {printf( "m_loop -> mod term\n"); ;}
    break;

  case 43:
#line 135 "861060042.y"
    {printf( "term -> sub term_b1\n"); ;}
    break;

  case 44:
#line 136 "861060042.y"
    {printf( "term -> term_b1\n"); ;}
    break;

  case 45:
#line 137 "861060042.y"
    {printf( "term -> term_b2\n"); ;}
    break;

  case 46:
#line 140 "861060042.y"
    {printf( "term_b1 -> var\n"); ;}
    break;

  case 47:
#line 141 "861060042.y"
    {printf( "term_b1 -> number\n"); ;}
    break;

  case 48:
#line 142 "861060042.y"
    {printf( "term_b1 -> l_paren expression r_paren\n"); ;}
    break;

  case 49:
#line 145 "861060042.y"
    {printf( "term_b2 -> identifier l_paren r_paren\n"); ;}
    break;

  case 50:
#line 146 "861060042.y"
    {printf( "term_b2 -> identifier l_paren t_loop r_paren\n"); ;}
    break;

  case 51:
#line 149 "861060042.y"
    {printf( "t_loop -> expression\n"); ;}
    break;

  case 52:
#line 150 "861060042.y"
    {printf( "t_loop -> expression comma t_loop\n"); ;}
    break;

  case 53:
#line 157 "861060042.y"
    {printf( "statement -> var assign expression\n"); ;}
    break;

  case 54:
#line 158 "861060042.y"
    {printf( "statement -> continue\n"); ;}
    break;

  case 55:
#line 159 "861060042.y"
    {printf( "statement -> return expression\n"); ;}
    break;

  case 56:
#line 160 "861060042.y"
    {printf( "statement -> read var_loop\n"); ;}
    break;

  case 57:
#line 161 "861060042.y"
    {printf( "statement -> write var_loop\n"); ;}
    break;

  case 58:
#line 162 "861060042.y"
    {printf( "statement -> do beginloop s_loop endloop while bool_expr\n"); ;}
    break;

  case 59:
#line 163 "861060042.y"
    {printf( "statement -> while bool_expr beginloop s_loop bool_expr\n"); ;}
    break;

  case 60:
#line 164 "861060042.y"
    {printf( "statement -> if bool_expr then s_loop if_loop\n"); ;}
    break;

  case 61:
#line 169 "861060042.y"
    {printf( "if_loop -> endif\n"); ;}
    break;

  case 62:
#line 170 "861060042.y"
    {printf( "if_loop -> else s_loop endif\n"); ;}
    break;

  case 63:
#line 173 "861060042.y"
    {printf( "var_loop -> var comma var_loop\n"); ;}
    break;

  case 64:
#line 174 "861060042.y"
    {printf( "var_loop -> var\n"); ;}
    break;

  case 65:
#line 178 "861060042.y"
    {printf( "comp -> eq\n"); ;}
    break;

  case 66:
#line 179 "861060042.y"
    {printf( "comp -> neq\n"); ;}
    break;

  case 67:
#line 180 "861060042.y"
    {printf( "comp -> lt\n"); ;}
    break;

  case 68:
#line 181 "861060042.y"
    {printf( "comp -> gt\n"); ;}
    break;

  case 69:
#line 182 "861060042.y"
    {printf( "comp -> lte\n"); ;}
    break;

  case 70:
#line 183 "861060042.y"
    {printf( "comp -> gte\n"); ;}
    break;

  case 71:
#line 187 "861060042.y"
    {printf( "var -> identifier\n"); ;}
    break;

  case 72:
#line 188 "861060042.y"
    {printf( "var -> identifier l_bracket expression r_bracket\n"); ;}
    break;

  case 73:
#line 193 "861060042.y"
    {printf( "function -> FUNCTION\n"); ;}
    break;

  case 74:
#line 196 "861060042.y"
    {printf( "continue -> CONTINUE\n"); ;}
    break;

  case 75:
#line 199 "861060042.y"
    {printf( "return -> RETURN\n"); ;}
    break;

  case 76:
#line 202 "861060042.y"
    {printf( "read -> READ\n"); ;}
    break;

  case 77:
#line 205 "861060042.y"
    {printf( "while -> WHILE\n"); ;}
    break;

  case 78:
#line 208 "861060042.y"
    {printf( "do -> DO\n"); ;}
    break;

  case 79:
#line 211 "861060042.y"
    {printf( "if -> IF\n"); ;}
    break;

  case 80:
#line 214 "861060042.y"
    {printf( "then -> THEN\n"); ;}
    break;

  case 81:
#line 217 "861060042.y"
    {printf( "else -> ELSE\n"); ;}
    break;

  case 82:
#line 220 "861060042.y"
    {printf( "endif -> ENDIF\n"); ;}
    break;

  case 83:
#line 223 "861060042.y"
    {printf( "beginloop -> BEGINLOOP\n"); ;}
    break;

  case 84:
#line 226 "861060042.y"
    {printf( "endloop -> ENDLOOP\n"); ;}
    break;

  case 85:
#line 229 "861060042.y"
    {printf( "write -> WRITE\n"); ;}
    break;

  case 86:
#line 232 "861060042.y"
    { printf( "identifier -> IDENT (%s)\n", (yyvsp[(1) - (1)].idval)); ;}
    break;

  case 87:
#line 235 "861060042.y"
    { printf( "number -> NUMBER (%f)\n", (yyvsp[(1) - (1)].nval)); ;}
    break;

  case 88:
#line 238 "861060042.y"
    {printf( "semicolon -> SEMICOLON\n"); ;}
    break;

  case 89:
#line 241 "861060042.y"
    {printf( "assign -> ASSIGN\n"); ;}
    break;

  case 90:
#line 244 "861060042.y"
    {printf( "colon -> COLON\n"); ;}
    break;

  case 91:
#line 247 "861060042.y"
    {printf( "of -> OF\n"); ;}
    break;

  case 92:
#line 250 "861060042.y"
    {printf( "or -> OR\n"); ;}
    break;

  case 93:
#line 253 "861060042.y"
    {printf( "and -> AND\n"); ;}
    break;

  case 94:
#line 256 "861060042.y"
    {printf( "add -> ADD\n"); ;}
    break;

  case 95:
#line 259 "861060042.y"
    {printf( "sub -> SUB\n"); ;}
    break;

  case 96:
#line 262 "861060042.y"
    {printf( "mult -> MULT\n"); ;}
    break;

  case 97:
#line 265 "861060042.y"
    {printf( "div -> DIV\n"); ;}
    break;

  case 98:
#line 268 "861060042.y"
    {printf( "mod -> MOD\n"); ;}
    break;

  case 99:
#line 271 "861060042.y"
    {printf( "not -> NOT\n"); ;}
    break;

  case 100:
#line 274 "861060042.y"
    {printf( "true -> TRUE\n"); ;}
    break;

  case 101:
#line 277 "861060042.y"
    {printf( "false -> FALSE\n"); ;}
    break;

  case 102:
#line 280 "861060042.y"
    {printf( "l_paren -> L_PAREN\n"); ;}
    break;

  case 103:
#line 283 "861060042.y"
    {printf( "l_paren -> R_PAREN\n"); ;}
    break;

  case 104:
#line 286 "861060042.y"
    {printf( "comma -> COMMA\n"); ;}
    break;

  case 105:
#line 289 "861060042.y"
    {printf( "beginparams -> BEGIN_PARAMS\n"); ;}
    break;

  case 106:
#line 292 "861060042.y"
    {printf( "endparams -> END_PARAMS\n"); ;}
    break;

  case 107:
#line 295 "861060042.y"
    {printf( "beginlocals -> BEGIN_LOCALS\n"); ;}
    break;

  case 108:
#line 298 "861060042.y"
    {printf( "endlocals -> END_LOCALS\n"); ;}
    break;

  case 109:
#line 301 "861060042.y"
    {printf( "beginbody -> BEGIN_BODY\n"); ;}
    break;

  case 110:
#line 304 "861060042.y"
    {printf( "endbody -> END_BODY\n"); ;}
    break;

  case 111:
#line 307 "861060042.y"
    { printf( "integer -> INTEGER\n"); ;}
    break;

  case 112:
#line 310 "861060042.y"
    {printf( "l_bracket -> L_SQUARE_BRACKET\n"); ;}
    break;

  case 113:
#line 313 "861060042.y"
    {printf( "r_bracket -> R_SQUARE_BRACKET\n"); ;}
    break;

  case 114:
#line 316 "861060042.y"
    { printf( "array -> ARRAY\n"); ;}
    break;

  case 115:
#line 319 "861060042.y"
    { printf( "eq -> EQ\n"); ;}
    break;

  case 116:
#line 322 "861060042.y"
    { printf( "neq -> NEQ\n"); ;}
    break;

  case 117:
#line 325 "861060042.y"
    { printf( "lt -> LT\n"); ;}
    break;

  case 118:
#line 328 "861060042.y"
    { printf( "gt -> GT\n"); ;}
    break;

  case 119:
#line 331 "861060042.y"
    { printf( "lte -> LTE\n"); ;}
    break;

  case 120:
#line 334 "861060042.y"
    { printf( "gte -> GTE\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2229 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 336 "861060042.y"


int main(int argc, char ** argv)
{
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin == NULL)
      {
         yyin = stdin;
      }
   }
   else
   {
      yyin = stdin;
   }
   yyparse();

   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", Line, Pos, msg);
}
