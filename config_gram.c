/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     K_READ = 258,
     K_WRITE = 259,
     K_READ_LO = 260,
     K_READ_HI = 261,
     K_WRITE_LO = 262,
     K_WRITE_HI = 263,
     K_LOADPAGE_LO = 264,
     K_LOADPAGE_HI = 265,
     K_WRITEPAGE = 266,
     K_CHIP_ERASE = 267,
     K_PGM_ENABLE = 268,
     K_MEMORY = 269,
     K_PAGE_SIZE = 270,
     K_PAGED = 271,
     K_BAUDRATE = 272,
     K_BS2 = 273,
     K_BUFF = 274,
     K_CHIP_ERASE_DELAY = 275,
     K_DEDICATED = 276,
     K_DEFAULT_PARALLEL = 277,
     K_DEFAULT_PROGRAMMER = 278,
     K_DEFAULT_SERIAL = 279,
     K_DESC = 280,
     K_DEVICECODE = 281,
     K_STK500_DEVCODE = 282,
     K_AVR910_DEVCODE = 283,
     K_EEPROM = 284,
     K_ERRLED = 285,
     K_FLASH = 286,
     K_ID = 287,
     K_IO = 288,
     K_LOADPAGE = 289,
     K_MAX_WRITE_DELAY = 290,
     K_MIN_WRITE_DELAY = 291,
     K_MISO = 292,
     K_MOSI = 293,
     K_NUM_PAGES = 294,
     K_PAGEL = 295,
     K_PAR = 296,
     K_PARALLEL = 297,
     K_PART = 298,
     K_PGMLED = 299,
     K_PROGRAMMER = 300,
     K_PSEUDO = 301,
     K_PWROFF_AFTER_WRITE = 302,
     K_RDYLED = 303,
     K_READBACK_P1 = 304,
     K_READBACK_P2 = 305,
     K_READMEM = 306,
     K_RESET = 307,
     K_RETRY_PULSE = 308,
     K_SERIAL = 309,
     K_SCK = 310,
     K_SIZE = 311,
     K_STK500 = 312,
     K_AVR910 = 313,
     K_BUTTERFLY = 314,
     K_TYPE = 315,
     K_VCC = 316,
     K_VFYLED = 317,
     K_NO = 318,
     K_YES = 319,
     TKN_COMMA = 320,
     TKN_EQUAL = 321,
     TKN_SEMI = 322,
     TKN_NUMBER = 323,
     TKN_STRING = 324,
     TKN_ID = 325
   };
#endif
#define K_READ 258
#define K_WRITE 259
#define K_READ_LO 260
#define K_READ_HI 261
#define K_WRITE_LO 262
#define K_WRITE_HI 263
#define K_LOADPAGE_LO 264
#define K_LOADPAGE_HI 265
#define K_WRITEPAGE 266
#define K_CHIP_ERASE 267
#define K_PGM_ENABLE 268
#define K_MEMORY 269
#define K_PAGE_SIZE 270
#define K_PAGED 271
#define K_BAUDRATE 272
#define K_BS2 273
#define K_BUFF 274
#define K_CHIP_ERASE_DELAY 275
#define K_DEDICATED 276
#define K_DEFAULT_PARALLEL 277
#define K_DEFAULT_PROGRAMMER 278
#define K_DEFAULT_SERIAL 279
#define K_DESC 280
#define K_DEVICECODE 281
#define K_STK500_DEVCODE 282
#define K_AVR910_DEVCODE 283
#define K_EEPROM 284
#define K_ERRLED 285
#define K_FLASH 286
#define K_ID 287
#define K_IO 288
#define K_LOADPAGE 289
#define K_MAX_WRITE_DELAY 290
#define K_MIN_WRITE_DELAY 291
#define K_MISO 292
#define K_MOSI 293
#define K_NUM_PAGES 294
#define K_PAGEL 295
#define K_PAR 296
#define K_PARALLEL 297
#define K_PART 298
#define K_PGMLED 299
#define K_PROGRAMMER 300
#define K_PSEUDO 301
#define K_PWROFF_AFTER_WRITE 302
#define K_RDYLED 303
#define K_READBACK_P1 304
#define K_READBACK_P2 305
#define K_READMEM 306
#define K_RESET 307
#define K_RETRY_PULSE 308
#define K_SERIAL 309
#define K_SCK 310
#define K_SIZE 311
#define K_STK500 312
#define K_AVR910 313
#define K_BUTTERFLY 314
#define K_TYPE 315
#define K_VCC 316
#define K_VFYLED 317
#define K_NO 318
#define K_YES 319
#define TKN_COMMA 320
#define TKN_EQUAL 321
#define TKN_SEMI 322
#define TKN_NUMBER 323
#define TKN_STRING 324
#define TKN_ID 325




/* Copy the first part of user declarations.  */
#line 21 "../config_gram.y"


#include "ac_cfg.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "config.h"
#include "lists.h"
#include "par.h"
#include "pindefs.h"
#include "ppi.h"
#include "pgm.h"
#include "stk500.h"
#include "avr910.h"
#include "butterfly.h"
#include "avr.h"

#if defined(WIN32NATIVE)
#define strtok_r( _s, _sep, _lasts ) \
    ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif

extern char * progname;

int yylex(void);
int yyerror(char * errmsg);

static int assign_pin(int pinno, TOKEN * v);
static int which_opcode(TOKEN * opcode);
static int parse_cmdbits(OPCODE * op);
 


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 261 "config_gram.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  22
/* YYNRULES -- Number of rules. */
#define YYNRULES  85
/* YYNRULES -- Number of states. */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    14,    17,    22,
      27,    32,    33,    37,    38,    42,    44,    48,    50,    54,
      57,    61,    65,    69,    73,    77,    81,    85,    89,    93,
      97,   101,   105,   109,   113,   117,   121,   125,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     154,   158,   160,   162,   164,   166,   168,   170,   174,   178,
     182,   186,   190,   194,   198,   202,   206,   210,   214,   218,
     219,   224,   228,   230,   232,   235,   239,   243,   247,   251,
     255,   259,   263,   267,   271,   275
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      72,     0,    -1,    -1,    73,    -1,    74,    -1,    73,    74,
      -1,    75,    67,    -1,    77,    67,    -1,    23,    66,    69,
      67,    -1,    22,    66,    69,    67,    -1,    24,    66,    69,
      67,    -1,    -1,    45,    76,    81,    -1,    -1,    43,    78,
      84,    -1,    69,    -1,    79,    65,    69,    -1,    68,    -1,
      80,    65,    68,    -1,    82,    67,    -1,    81,    82,    67,
      -1,    32,    66,    79,    -1,    60,    66,    41,    -1,    60,
      66,    57,    -1,    60,    66,    58,    -1,    60,    66,    59,
      -1,    25,    66,    69,    -1,    61,    66,    80,    -1,    19,
      66,    80,    -1,    17,    66,    68,    -1,    52,    66,    68,
      -1,    55,    66,    68,    -1,    38,    66,    68,    -1,    37,
      66,    68,    -1,    30,    66,    68,    -1,    48,    66,    68,
      -1,    44,    66,    68,    -1,    62,    66,    68,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    88,    67,    -1,    84,    88,    67,    -1,    21,    -1,
      33,    -1,    90,    -1,    46,    -1,    52,    -1,    55,    -1,
      32,    66,    69,    -1,    25,    66,    69,    -1,    26,    66,
      68,    -1,    27,    66,    68,    -1,    28,    66,    68,    -1,
      20,    66,    68,    -1,    40,    66,    68,    -1,    18,    66,
      68,    -1,    52,    66,    85,    -1,    54,    66,    90,    -1,
      42,    66,    86,    -1,    53,    66,    87,    -1,    -1,    14,
      69,    89,    91,    -1,    83,    66,    79,    -1,    64,    -1,
      63,    -1,    92,    67,    -1,    91,    92,    67,    -1,    16,
      66,    90,    -1,    56,    66,    68,    -1,    15,    66,    68,
      -1,    39,    66,    68,    -1,    36,    66,    68,    -1,    35,
      66,    68,    -1,    47,    66,    90,    -1,    49,    66,    68,
      -1,    50,    66,    68,    -1,    83,    66,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   135,   135,   136,   140,   141,   146,   148,   150,   156,
     162,   172,   171,   197,   196,   258,   259,   264,   265,   270,
     271,   276,   287,   293,   299,   305,   311,   317,   342,   367,
     373,   375,   377,   378,   379,   380,   381,   382,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   402,
     403,   408,   408,   412,   412,   416,   416,   420,   427,   434,
     444,   451,   458,   464,   470,   476,   486,   496,   515,   539,
     538,   550,   567,   567,   572,   573,   578,   584,   591,   597,
     603,   609,   615,   621,   627,   633
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_READ", "K_WRITE", "K_READ_LO", 
  "K_READ_HI", "K_WRITE_LO", "K_WRITE_HI", "K_LOADPAGE_LO", 
  "K_LOADPAGE_HI", "K_WRITEPAGE", "K_CHIP_ERASE", "K_PGM_ENABLE", 
  "K_MEMORY", "K_PAGE_SIZE", "K_PAGED", "K_BAUDRATE", "K_BS2", "K_BUFF", 
  "K_CHIP_ERASE_DELAY", "K_DEDICATED", "K_DEFAULT_PARALLEL", 
  "K_DEFAULT_PROGRAMMER", "K_DEFAULT_SERIAL", "K_DESC", "K_DEVICECODE", 
  "K_STK500_DEVCODE", "K_AVR910_DEVCODE", "K_EEPROM", "K_ERRLED", 
  "K_FLASH", "K_ID", "K_IO", "K_LOADPAGE", "K_MAX_WRITE_DELAY", 
  "K_MIN_WRITE_DELAY", "K_MISO", "K_MOSI", "K_NUM_PAGES", "K_PAGEL", 
  "K_PAR", "K_PARALLEL", "K_PART", "K_PGMLED", "K_PROGRAMMER", "K_PSEUDO", 
  "K_PWROFF_AFTER_WRITE", "K_RDYLED", "K_READBACK_P1", "K_READBACK_P2", 
  "K_READMEM", "K_RESET", "K_RETRY_PULSE", "K_SERIAL", "K_SCK", "K_SIZE", 
  "K_STK500", "K_AVR910", "K_BUTTERFLY", "K_TYPE", "K_VCC", "K_VFYLED", 
  "K_NO", "K_YES", "TKN_COMMA", "TKN_EQUAL", "TKN_SEMI", "TKN_NUMBER", 
  "TKN_STRING", "TKN_ID", "$accept", "configuration", "config", "def", 
  "prog_def", "@1", "part_def", "@2", "string_list", "num_list", 
  "prog_parms", "prog_parm", "opcode", "part_parms", "reset_disposition", 
  "parallel_modes", "retry_lines", "part_parm", "@3", "yesno", 
  "mem_specs", "mem_spec", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    76,    75,    78,    77,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      88,    88,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     2,     4,     4,
       4,     0,     3,     0,     3,     1,     3,     1,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       4,     3,     1,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     0,     0,    13,    11,     0,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     1,     5,     6,     7,
       0,     0,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     9,     8,    10,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,    64,    62,    58,    59,    60,    61,    57,    63,
      54,    73,    72,    67,    53,    51,    52,    65,    55,    56,
      68,    66,    15,    71,    50,    29,    17,    28,    26,    34,
      21,    33,    32,    36,    35,    30,    31,    22,    23,    24,
      25,    27,    37,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      16,    18,    78,    76,    81,    80,    79,    82,    83,    84,
      77,    85,    75
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     6,     7,     8,     9,    15,    10,    14,   123,   127,
      64,    65,    47,    48,   117,   113,   120,    49,   101,   114,
     154,   155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yysigned_char yypact[] =
{
      -4,   -49,   -44,   -42,   -89,   -89,    32,    -4,   -89,   -31,
     -30,   -25,   -24,   -22,    80,    98,   -89,   -89,   -89,   -89,
     -27,   -17,   -16,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -15,   -14,   -13,   -10,    -9,    -8,
      -7,    -6,    -5,    -3,    -2,     1,     2,     4,    80,     5,
       7,     8,     9,    10,    11,    14,    15,    29,    30,    31,
      33,    35,    36,    37,    98,    42,   -89,   -89,   -89,   -89,
       3,    43,    41,    45,    46,    48,    49,    51,   -21,     0,
     -29,   -36,    52,    57,   -89,    58,    59,    56,    61,    52,
      63,    69,    70,    71,    72,    73,   -28,    59,    75,    77,
     -89,    -1,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,    39,   -89,   -89,   -89,    82,   -89,   -89,
      39,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    82,   -89,   -89,    79,    83,    85,    86,    88,    89,
      90,    91,    95,    96,    -1,    81,    94,    97,    99,   -36,
     100,   101,   102,   -36,   103,   104,   105,    52,   107,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    39,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -89,   -89,   -89,    55,   -89,   -89,   -89,   -89,   -88,   -32,
     -89,   111,   -85,   -89,   -89,   -89,   -89,    18,   -89,   -81,
     -89,    12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
     121,   130,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,   137,   144,   145,   153,    11,     1,     2,
       3,   115,    12,   118,    13,   110,   119,   111,   112,   138,
     139,   140,    16,   116,   146,   147,    18,    19,   148,     4,
      66,     5,   111,   112,    20,    21,   149,    22,   150,   151,
      67,    68,    70,    71,    69,   152,    72,    73,    74,    75,
      76,    77,    17,    78,    79,   141,    83,    80,    81,   153,
      82,   102,    84,    85,    86,    87,    88,    89,   173,   181,
      90,    91,   177,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    92,    93,    94,    35,    95,
      36,    96,    97,    98,   156,    37,    38,    39,    40,   100,
     104,   103,    41,   105,   106,    50,   107,    51,   108,   109,
      42,   122,    43,    52,   124,   128,   125,   126,    53,   129,
      54,   131,    44,    45,    46,    55,    56,   132,   133,   134,
     135,   136,    57,   142,   143,   158,    58,   157,   169,   159,
      59,   160,   161,    60,   162,   163,   164,   165,    61,    62,
      63,   166,   167,   170,     0,   171,   168,   172,   174,   175,
     176,   178,   179,   180,   182,    99
};

static const short yycheck[] =
{
      81,    89,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    41,    15,    16,   101,    66,    22,    23,
      24,    21,    66,    52,    66,    46,    55,    63,    64,    57,
      58,    59,     0,    33,    35,    36,    67,    67,    39,    43,
      67,    45,    63,    64,    69,    69,    47,    69,    49,    50,
      67,    67,    66,    66,    69,    56,    66,    66,    66,    66,
      66,    66,     7,    66,    66,    97,    48,    66,    66,   154,
      66,    68,    67,    66,    66,    66,    66,    66,   159,   167,
      66,    66,   163,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    66,    66,    66,    18,    66,
      20,    66,    66,    66,    65,    25,    26,    27,    28,    67,
      69,    68,    32,    68,    68,    17,    68,    19,    69,    68,
      40,    69,    42,    25,    67,    69,    68,    68,    30,    68,
      32,    68,    52,    53,    54,    37,    38,    68,    68,    68,
      68,    68,    44,    68,    67,    66,    48,    65,    67,    66,
      52,    66,    66,    55,    66,    66,    66,    66,    60,    61,
      62,    66,    66,    69,    -1,    68,   154,    68,    68,    68,
      68,    68,    68,    68,    67,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    22,    23,    24,    43,    45,    72,    73,    74,    75,
      77,    66,    66,    66,    78,    76,     0,    74,    67,    67,
      69,    69,    69,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    18,    20,    25,    26,    27,
      28,    32,    40,    42,    52,    53,    54,    83,    84,    88,
      17,    19,    25,    30,    32,    37,    38,    44,    48,    52,
      55,    60,    61,    62,    81,    82,    67,    67,    67,    69,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    88,    67,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    82,
      67,    89,    68,    68,    69,    68,    68,    68,    69,    68,
      46,    63,    64,    86,    90,    21,    33,    85,    52,    55,
      87,    90,    69,    79,    67,    68,    68,    80,    69,    68,
      79,    68,    68,    68,    68,    68,    68,    41,    57,    58,
      59,    80,    68,    67,    15,    16,    35,    36,    39,    47,
      49,    50,    56,    83,    91,    92,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    92,    67,
      69,    68,    68,    90,    68,    68,    68,    90,    68,    68,
      68,    79,    67
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 8:
#line 150 "../config_gram.y"
    {
    strncpy(default_programmer, yyvsp[-1]->value.string, MAX_STR_CONST);
    default_programmer[MAX_STR_CONST-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 9:
#line 156 "../config_gram.y"
    {
    strncpy(default_parallel, yyvsp[-1]->value.string, PATH_MAX);
    default_parallel[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 10:
#line 162 "../config_gram.y"
    {
    strncpy(default_serial, yyvsp[-1]->value.string, PATH_MAX);
    default_serial[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 11:
#line 172 "../config_gram.y"
    { current_prog = pgm_new();
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
    }
    break;

  case 12:
#line 177 "../config_gram.y"
    { 
      if (lsize(current_prog->id) == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      if (current_prog->type[0] == 0) {
        fprintf(stderr, "%s: error at %s:%d: programmer type not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      PUSH(programmers, current_prog); 
      current_prog = NULL; 
    }
    break;

  case 13:
#line 197 "../config_gram.y"
    {
      current_part = avr_new_part();
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;
    }
    break;

  case 14:
#line 203 "../config_gram.y"
    { 
      LNODEID ln;
      AVRMEM * m;

      if (current_part->id[0] == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }

      /*
       * perform some sanity checking, and compute the number of bits
       * to shift a page for constructing the page address for
       * page-addressed memories.
       */
      for (ln=lfirst(current_part->mem); ln; ln=lnext(ln)) {
        m = ldata(ln);
        if (m->paged) {
          if (m->page_size == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify page_size for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->num_pages == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify num_pages for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->size != m->page_size * m->num_pages) {
            fprintf(stderr, 
                    "%s: error at %s:%d: page size (%u) * num_pages (%u) = "
                    "%u does not match memory size (%u)\n",
                    progname, infile, lineno,
                    m->page_size, 
                    m->num_pages, 
                    m->page_size * m->num_pages,
                    m->size);
            exit(1);
          }

        }
      }

      PUSH(part_list, current_part); 
      current_part = NULL; 
    }
    break;

  case 15:
#line 258 "../config_gram.y"
    { ladd(string_list, yyvsp[0]); }
    break;

  case 16:
#line 259 "../config_gram.y"
    { ladd(string_list, yyvsp[0]); }
    break;

  case 17:
#line 264 "../config_gram.y"
    { ladd(number_list, yyvsp[0]); }
    break;

  case 18:
#line 265 "../config_gram.y"
    { ladd(number_list, yyvsp[0]); }
    break;

  case 21:
#line 276 "../config_gram.y"
    {
    { 
      TOKEN * t;
      while (lsize(string_list)) {
        t = lrmv_n(string_list, 1);
        ladd(current_prog->id, dup_string(t->value.string));
        free_token(t);
      }
    }
  }
    break;

  case 22:
#line 287 "../config_gram.y"
    {
    { 
      par_initpgm(current_prog);
    }
  }
    break;

  case 23:
#line 293 "../config_gram.y"
    {
    { 
      stk500_initpgm(current_prog);
    }
  }
    break;

  case 24:
#line 299 "../config_gram.y"
    {
    { 
      avr910_initpgm(current_prog);
    }
  }
    break;

  case 25:
#line 305 "../config_gram.y"
    {
    { 
      butterfly_initpgm(current_prog);
    }
  }
    break;

  case 26:
#line 311 "../config_gram.y"
    {
    strncpy(current_prog->desc, yyvsp[0]->value.string, PGM_DESCLEN);
    current_prog->desc[PGM_DESCLEN-1] = 0;
    free_token(yyvsp[0]);
  }
    break;

  case 27:
#line 317 "../config_gram.y"
    {
    { 
      TOKEN * t;
      int pin;

      current_prog->pinno[PPI_AVR_VCC] = 0;

      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
        pin = t->value.number;
        if ((pin < 2) || (pin > 9)) {
          fprintf(stderr, 
                  "%s: error at line %d of %s: VCC must be one or more "
                  "pins from the range 2-9\n",
                  progname, lineno, infile);
          exit(1);
        }

        current_prog->pinno[PPI_AVR_VCC] |= (1 << (pin-2));

        free_token(t);
      }
    }
  }
    break;

  case 28:
#line 342 "../config_gram.y"
    {
    { 
      TOKEN * t;
      int pin;

      current_prog->pinno[PPI_AVR_BUFF] = 0;

      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
        pin = t->value.number;
        if ((pin < 2) || (pin > 9)) {
          fprintf(stderr, 
                  "%s: error at line %d of %s: BUFF must be one or more "
                  "pins from the range 2-9\n",
                  progname, lineno, infile);
          exit(1);
        }

        current_prog->pinno[PPI_AVR_BUFF] |= (1 << (pin-2));

        free_token(t);
      }
    }
  }
    break;

  case 29:
#line 367 "../config_gram.y"
    {
    {
      current_prog->baudrate = yyvsp[0]->value.number;
    }
  }
    break;

  case 30:
#line 373 "../config_gram.y"
    { free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_RESET, yyvsp[0]); }
    break;

  case 31:
#line 375 "../config_gram.y"
    { free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_SCK, yyvsp[0]); }
    break;

  case 32:
#line 377 "../config_gram.y"
    { assign_pin(PIN_AVR_MOSI, yyvsp[0]); }
    break;

  case 33:
#line 378 "../config_gram.y"
    { assign_pin(PIN_AVR_MISO, yyvsp[0]); }
    break;

  case 34:
#line 379 "../config_gram.y"
    { assign_pin(PIN_LED_ERR, yyvsp[0]); }
    break;

  case 35:
#line 380 "../config_gram.y"
    { assign_pin(PIN_LED_RDY, yyvsp[0]); }
    break;

  case 36:
#line 381 "../config_gram.y"
    { assign_pin(PIN_LED_PGM, yyvsp[0]); }
    break;

  case 37:
#line 382 "../config_gram.y"
    { assign_pin(PIN_LED_VFY, yyvsp[0]); }
    break;

  case 57:
#line 421 "../config_gram.y"
    {
      strncpy(current_part->id, yyvsp[0]->value.string, AVR_IDLEN);
      current_part->id[AVR_IDLEN-1] = 0;
      free_token(yyvsp[0]);
    }
    break;

  case 58:
#line 428 "../config_gram.y"
    {
      strncpy(current_part->desc, yyvsp[0]->value.string, AVR_DESCLEN);
      current_part->desc[AVR_DESCLEN-1] = 0;
      free_token(yyvsp[0]);
    }
    break;

  case 59:
#line 434 "../config_gram.y"
    {
    {
      fprintf(stderr, 
              "%s: error at %s:%d: devicecode is deprecated, use "
              "stk500_devcode instead\n",
              progname, infile, lineno);
      exit(1);
    }
  }
    break;

  case 60:
#line 444 "../config_gram.y"
    {
    {
      current_part->stk500_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  }
    break;

  case 61:
#line 451 "../config_gram.y"
    {
    {
      current_part->avr910_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  }
    break;

  case 62:
#line 459 "../config_gram.y"
    {
      current_part->chip_erase_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 63:
#line 465 "../config_gram.y"
    {
      current_part->pagel = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 64:
#line 471 "../config_gram.y"
    {
      current_part->bs2 = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 65:
#line 477 "../config_gram.y"
    {
      if (yyvsp[0]->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if (yyvsp[0]->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, yyvsp[-2], yyvsp[0]);
    }
    break;

  case 66:
#line 487 "../config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_SERIALOK;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_SERIALOK;

      free_token(yyvsp[0]);
    }
    break;

  case 67:
#line 497 "../config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if (yyvsp[0]->primary == K_NO) {
        current_part->flags &= ~AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if (yyvsp[0]->primary == K_PSEUDO) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags |= AVRPART_PSEUDOPARALLEL;
      }


      free_token(yyvsp[0]);
    }
    break;

  case 68:
#line 516 "../config_gram.y"
    {
      switch (yyvsp[0]->primary) {
        case K_RESET :
          current_part->retry_pulse = PIN_AVR_RESET;
          break;
        case K_SCK :
          current_part->retry_pulse = PIN_AVR_SCK;
          break;
      }

      free_token(yyvsp[-2]);
    }
    break;

  case 69:
#line 539 "../config_gram.y"
    { 
      current_mem = avr_new_memtype(); 
      strcpy(current_mem->desc, strdup(yyvsp[0]->value.string)); 
      free_token(yyvsp[0]); 
    }
    break;

  case 70:
#line 545 "../config_gram.y"
    { 
      ladd(current_part->mem, current_mem); 
      current_mem = NULL; 
    }
    break;

  case 71:
#line 550 "../config_gram.y"
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode(yyvsp[-2]);
      op = avr_new_opcode();
      parse_cmdbits(op);
      current_part->op[opnum] = op;

      free_token(yyvsp[-2]);
    }
  }
    break;

  case 76:
#line 579 "../config_gram.y"
    {
      current_mem->paged = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    }
    break;

  case 77:
#line 585 "../config_gram.y"
    {
      current_mem->size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 78:
#line 592 "../config_gram.y"
    {
      current_mem->page_size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 79:
#line 598 "../config_gram.y"
    {
      current_mem->num_pages = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 80:
#line 604 "../config_gram.y"
    {
      current_mem->min_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 81:
#line 610 "../config_gram.y"
    {
      current_mem->max_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 82:
#line 616 "../config_gram.y"
    {
      current_mem->pwroff_after_write = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    }
    break;

  case 83:
#line 622 "../config_gram.y"
    {
      current_mem->readback[0] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 84:
#line 628 "../config_gram.y"
    {
      current_mem->readback[1] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 85:
#line 633 "../config_gram.y"
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode(yyvsp[-2]);
      op = avr_new_opcode();
      parse_cmdbits(op);
      current_mem->op[opnum] = op;

      free_token(yyvsp[-2]);
    }
  }
    break;


    }

/* Line 999 of yacc.c.  */
#line 1867 "config_gram.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 649 "../config_gram.y"


#if 0
static char * vtypestr(int type)
{
  switch (type) {
    case V_NUM : return "NUMERIC";
    case V_STR : return "STRING";
    default:
      return "<UNKNOWN>";
  }
}
#endif


static int assign_pin(int pinno, TOKEN * v)
{
  int value;

  value = v->value.number;

  if ((value <= 0) || (value >= 18)) {
    fprintf(stderr, 
            "%s: error at line %d of %s: pin must be in the "
            "range 1-17\n",
            progname, lineno, infile);
    exit(1);
  }

  current_prog->pinno[pinno] = value;

  return 0;
}


static int which_opcode(TOKEN * opcode)
{
  switch (opcode->primary) {
    case K_READ        : return AVR_OP_READ; break;
    case K_WRITE       : return AVR_OP_WRITE; break;
    case K_READ_LO     : return AVR_OP_READ_LO; break;
    case K_READ_HI     : return AVR_OP_READ_HI; break;
    case K_WRITE_LO    : return AVR_OP_WRITE_LO; break;
    case K_WRITE_HI    : return AVR_OP_WRITE_HI; break;
    case K_LOADPAGE_LO : return AVR_OP_LOADPAGE_LO; break;
    case K_LOADPAGE_HI : return AVR_OP_LOADPAGE_HI; break;
    case K_WRITEPAGE   : return AVR_OP_WRITEPAGE; break;
    case K_CHIP_ERASE  : return AVR_OP_CHIP_ERASE; break;
    case K_PGM_ENABLE  : return AVR_OP_PGM_ENABLE; break;
    default :
      fprintf(stderr, 
              "%s: error at %s:%d: invalid opcode\n",
              progname, infile, lineno);
      exit(1);
      break;
  }
}


static int parse_cmdbits(OPCODE * op)
{
  TOKEN * t;
  int bitno;
  char ch;
  char * e;
  char * q;
  int len;
  char * s, *brkt;

  bitno = 32;
  while (lsize(string_list)) {

    t = lrmv_n(string_list, 1);

    s = strtok_r(t->value.string, " ", &brkt);
    while (s != NULL) {

      bitno--;
      if (bitno < 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: too many opcode bits for instruction\n",
                progname, infile, lineno);
        exit(1);
      }

      len = strlen(s);

      if (len == 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: invalid bit specifier \"\"\n",
                progname, infile, lineno);
        exit(1);
      }

      ch = s[0];

      if (len == 1) {
        switch (ch) {
          case '1':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 1;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case '0':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'x':
            op->bit[bitno].type  = AVR_CMDBIT_IGNORE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'a':
            op->bit[bitno].type  = AVR_CMDBIT_ADDRESS;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = 8*(bitno/8) + bitno % 8;
            break;
          case 'i':
            op->bit[bitno].type  = AVR_CMDBIT_INPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'o':
            op->bit[bitno].type  = AVR_CMDBIT_OUTPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          default :
            fprintf(stderr, 
                    "%s: error at %s:%d: invalid bit specifier '%c'\n",
                    progname, infile, lineno, ch);
            exit(1);
            break;
        }
      }
      else {
        if (ch == 'a') {
          q = &s[1];
          op->bit[bitno].bitno = strtol(q, &e, 0);
          if ((e == q)||(*e != 0)) {
            fprintf(stderr, 
                    "%s: error at %s:%d: can't parse bit number from \"%s\"\n",
                    progname, infile, lineno, q);
            exit(1);
          }
          op->bit[bitno].type = AVR_CMDBIT_ADDRESS;
          op->bit[bitno].value = 0;
        }
        else {
          fprintf(stderr, 
                  "%s: error at %s:%d: invalid bit specifier \"%s\"\n",
                  progname, infile, lineno, s);
          exit(1);
        }
      }

      s = strtok_r(NULL, " ", &brkt);
    }

    free_token(t);

  }  /* while */

  return 0;
}



