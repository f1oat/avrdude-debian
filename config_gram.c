/* A Bison parser, made from config_gram.y, by GNU bison 1.75.  */

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
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

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
     K_JTAG_MKI = 289,
     K_JTAG_MKII = 290,
     K_LOADPAGE = 291,
     K_MAX_WRITE_DELAY = 292,
     K_MIN_WRITE_DELAY = 293,
     K_MISO = 294,
     K_MOSI = 295,
     K_NUM_PAGES = 296,
     K_PAGEL = 297,
     K_PAR = 298,
     K_PARALLEL = 299,
     K_PART = 300,
     K_PGMLED = 301,
     K_PROGRAMMER = 302,
     K_PSEUDO = 303,
     K_PWROFF_AFTER_WRITE = 304,
     K_RDYLED = 305,
     K_READBACK_P1 = 306,
     K_READBACK_P2 = 307,
     K_READMEM = 308,
     K_RESET = 309,
     K_RETRY_PULSE = 310,
     K_SERBB = 311,
     K_SERIAL = 312,
     K_SCK = 313,
     K_SIZE = 314,
     K_STK500 = 315,
     K_STK500V2 = 316,
     K_AVR910 = 317,
     K_BUTTERFLY = 318,
     K_TYPE = 319,
     K_VCC = 320,
     K_VFYLED = 321,
     K_NO = 322,
     K_YES = 323,
     K_TIMEOUT = 324,
     K_STABDELAY = 325,
     K_CMDEXEDELAY = 326,
     K_SYNCHLOOPS = 327,
     K_BYTEDELAY = 328,
     K_POLLVALUE = 329,
     K_POLLINDEX = 330,
     K_PREDELAY = 331,
     K_POSTDELAY = 332,
     K_POLLMETHOD = 333,
     K_MODE = 334,
     K_DELAY = 335,
     K_BLOCKSIZE = 336,
     K_READSIZE = 337,
     K_ALLOWFULLPAGEBITSTREAM = 338,
     K_ENABLEPAGEPROGRAMMING = 339,
     K_HAS_JTAG = 340,
     K_IDR = 341,
     K_RAMPZ = 342,
     K_SPMCR = 343,
     K_EECR = 344,
     TKN_COMMA = 345,
     TKN_EQUAL = 346,
     TKN_SEMI = 347,
     TKN_TILDE = 348,
     TKN_NUMBER = 349,
     TKN_STRING = 350,
     TKN_ID = 351
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
#define K_JTAG_MKI 289
#define K_JTAG_MKII 290
#define K_LOADPAGE 291
#define K_MAX_WRITE_DELAY 292
#define K_MIN_WRITE_DELAY 293
#define K_MISO 294
#define K_MOSI 295
#define K_NUM_PAGES 296
#define K_PAGEL 297
#define K_PAR 298
#define K_PARALLEL 299
#define K_PART 300
#define K_PGMLED 301
#define K_PROGRAMMER 302
#define K_PSEUDO 303
#define K_PWROFF_AFTER_WRITE 304
#define K_RDYLED 305
#define K_READBACK_P1 306
#define K_READBACK_P2 307
#define K_READMEM 308
#define K_RESET 309
#define K_RETRY_PULSE 310
#define K_SERBB 311
#define K_SERIAL 312
#define K_SCK 313
#define K_SIZE 314
#define K_STK500 315
#define K_STK500V2 316
#define K_AVR910 317
#define K_BUTTERFLY 318
#define K_TYPE 319
#define K_VCC 320
#define K_VFYLED 321
#define K_NO 322
#define K_YES 323
#define K_TIMEOUT 324
#define K_STABDELAY 325
#define K_CMDEXEDELAY 326
#define K_SYNCHLOOPS 327
#define K_BYTEDELAY 328
#define K_POLLVALUE 329
#define K_POLLINDEX 330
#define K_PREDELAY 331
#define K_POSTDELAY 332
#define K_POLLMETHOD 333
#define K_MODE 334
#define K_DELAY 335
#define K_BLOCKSIZE 336
#define K_READSIZE 337
#define K_ALLOWFULLPAGEBITSTREAM 338
#define K_ENABLEPAGEPROGRAMMING 339
#define K_HAS_JTAG 340
#define K_IDR 341
#define K_RAMPZ 342
#define K_SPMCR 343
#define K_EECR 344
#define TKN_COMMA 345
#define TKN_EQUAL 346
#define TKN_SEMI 347
#define TKN_TILDE 348
#define TKN_NUMBER 349
#define TKN_STRING 350
#define TKN_ID 351




/* Copy the first part of user declarations.  */
#line 21 "config_gram.y"


#include "ac_cfg.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "config.h"
#include "lists.h"
#include "par.h"
#include "serbb.h"
#include "pindefs.h"
#include "ppi.h"
#include "pgm.h"
#include "stk500.h"
#include "stk500v2.h"
#include "avr910.h"
#include "butterfly.h"
#include "avr.h"
#include "jtagmkI.h"
#include "jtagmkII.h"

#if defined(WIN32NATIVE)
#define strtok_r( _s, _sep, _lasts ) \
    ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif

extern char * progname;

int yylex(void);
int yyerror(char * errmsg);

static int assign_pin(int pinno, TOKEN * v, int invert);
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

#ifndef YYSTYPE
typedef int yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */


/* Line 213 of /usr/local/share/bison/yacc.c.  */
#line 324 "config_gram.c"

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
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

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
	    (To)[yyi] = (From)[yyi];	\
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
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
#define YYLAST   264

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  22
/* YYNRULES -- Number of rules. */
#define YYNRULES  119
/* YYNRULES -- Number of states. */
#define YYNSTATES  269

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    14,    17,    22,
      27,    32,    33,    37,    38,    42,    44,    48,    50,    54,
      57,    61,    65,    69,    73,    77,    81,    85,    89,    93,
      97,   101,   105,   109,   113,   117,   121,   125,   129,   133,
     137,   141,   145,   150,   155,   160,   165,   170,   175,   180,
     185,   187,   189,   191,   193,   195,   197,   199,   201,   203,
     205,   207,   210,   214,   216,   218,   220,   222,   224,   226,
     230,   234,   238,   242,   246,   250,   254,   258,   262,   266,
     270,   274,   278,   282,   286,   290,   294,   298,   302,   306,
     310,   314,   318,   322,   326,   330,   334,   338,   342,   343,
     348,   352,   354,   356,   359,   363,   367,   371,   375,   379,
     383,   387,   391,   395,   399,   403,   407,   411,   415,   419
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      98,     0,    -1,    -1,    99,    -1,   100,    -1,    99,   100,
      -1,   101,    92,    -1,   103,    92,    -1,    23,    91,    95,
      92,    -1,    22,    91,    95,    92,    -1,    24,    91,    95,
      92,    -1,    -1,    47,   102,   107,    -1,    -1,    45,   104,
     110,    -1,    95,    -1,   105,    90,    95,    -1,    94,    -1,
     106,    90,    94,    -1,   108,    92,    -1,   107,   108,    92,
      -1,    32,    91,   105,    -1,    64,    91,    43,    -1,    64,
      91,    56,    -1,    64,    91,    60,    -1,    64,    91,    61,
      -1,    64,    91,    62,    -1,    64,    91,    63,    -1,    64,
      91,    34,    -1,    64,    91,    35,    -1,    25,    91,    95,
      -1,    65,    91,   106,    -1,    19,    91,   106,    -1,    17,
      91,    94,    -1,    54,    91,    94,    -1,    58,    91,    94,
      -1,    40,    91,    94,    -1,    39,    91,    94,    -1,    30,
      91,    94,    -1,    50,    91,    94,    -1,    46,    91,    94,
      -1,    66,    91,    94,    -1,    54,    91,    93,    94,    -1,
      58,    91,    93,    94,    -1,    40,    91,    93,    94,    -1,
      39,    91,    93,    94,    -1,    30,    91,    93,    94,    -1,
      50,    91,    93,    94,    -1,    46,    91,    93,    94,    -1,
      66,    91,    93,    94,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,   114,    92,    -1,
     110,   114,    92,    -1,    21,    -1,    33,    -1,   116,    -1,
      48,    -1,    54,    -1,    58,    -1,    32,    91,    95,    -1,
      25,    91,    95,    -1,    26,    91,    94,    -1,    27,    91,
      94,    -1,    28,    91,    94,    -1,    20,    91,    94,    -1,
      42,    91,    94,    -1,    18,    91,    94,    -1,    54,    91,
     111,    -1,    69,    91,    94,    -1,    70,    91,    94,    -1,
      71,    91,    94,    -1,    72,    91,    94,    -1,    73,    91,
      94,    -1,    74,    91,    94,    -1,    75,    91,    94,    -1,
      76,    91,    94,    -1,    77,    91,    94,    -1,    78,    91,
      94,    -1,    85,    91,   116,    -1,    83,    91,   116,    -1,
      84,    91,   116,    -1,    86,    91,    94,    -1,    87,    91,
      94,    -1,    88,    91,    94,    -1,    89,    91,    94,    -1,
      57,    91,   116,    -1,    44,    91,   112,    -1,    55,    91,
     113,    -1,    -1,    14,    95,   115,   117,    -1,   109,    91,
     105,    -1,    68,    -1,    67,    -1,   118,    92,    -1,   117,
     118,    92,    -1,    16,    91,   116,    -1,    59,    91,    94,
      -1,    15,    91,    94,    -1,    41,    91,    94,    -1,    38,
      91,    94,    -1,    37,    91,    94,    -1,    49,    91,   116,
      -1,    51,    91,    94,    -1,    52,    91,    94,    -1,    79,
      91,    94,    -1,    80,    91,    94,    -1,    81,    91,    94,
      -1,    82,    91,    94,    -1,    75,    91,    94,    -1,   109,
      91,   105,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   175,   175,   176,   179,   180,   185,   186,   188,   194,
     200,   212,   210,   237,   235,   297,   298,   303,   304,   309,
     310,   315,   325,   331,   337,   343,   349,   355,   361,   367,
     373,   379,   404,   429,   435,   438,   440,   441,   442,   443,
     444,   445,   446,   449,   451,   452,   453,   454,   455,   456,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   476,   477,   482,   483,   486,   487,   490,   491,   494,
     500,   507,   517,   524,   531,   537,   543,   549,   559,   565,
     571,   577,   583,   589,   595,   601,   607,   613,   619,   629,
     639,   649,   655,   661,   667,   673,   683,   702,   728,   716,
     737,   755,   756,   760,   761,   766,   771,   777,   784,   790,
     796,   802,   808,   814,   820,   827,   833,   839,   845,   851
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
  "K_FLASH", "K_ID", "K_IO", "K_JTAG_MKI", "K_JTAG_MKII", "K_LOADPAGE", 
  "K_MAX_WRITE_DELAY", "K_MIN_WRITE_DELAY", "K_MISO", "K_MOSI", 
  "K_NUM_PAGES", "K_PAGEL", "K_PAR", "K_PARALLEL", "K_PART", "K_PGMLED", 
  "K_PROGRAMMER", "K_PSEUDO", "K_PWROFF_AFTER_WRITE", "K_RDYLED", 
  "K_READBACK_P1", "K_READBACK_P2", "K_READMEM", "K_RESET", 
  "K_RETRY_PULSE", "K_SERBB", "K_SERIAL", "K_SCK", "K_SIZE", "K_STK500", 
  "K_STK500V2", "K_AVR910", "K_BUTTERFLY", "K_TYPE", "K_VCC", "K_VFYLED", 
  "K_NO", "K_YES", "K_TIMEOUT", "K_STABDELAY", "K_CMDEXEDELAY", 
  "K_SYNCHLOOPS", "K_BYTEDELAY", "K_POLLVALUE", "K_POLLINDEX", 
  "K_PREDELAY", "K_POSTDELAY", "K_POLLMETHOD", "K_MODE", "K_DELAY", 
  "K_BLOCKSIZE", "K_READSIZE", "K_ALLOWFULLPAGEBITSTREAM", 
  "K_ENABLEPAGEPROGRAMMING", "K_HAS_JTAG", "K_IDR", "K_RAMPZ", "K_SPMCR", 
  "K_EECR", "TKN_COMMA", "TKN_EQUAL", "TKN_SEMI", "TKN_TILDE", 
  "TKN_NUMBER", "TKN_STRING", "TKN_ID", "$accept", "configuration", 
  "config", "def", "prog_def", "@1", "part_def", "@2", "string_list", 
  "num_list", "prog_parms", "prog_parm", "opcode", "part_parms", 
  "reset_disposition", "parallel_modes", "retry_lines", "part_parm", "@3", 
  "yesno", "mem_specs", "mem_spec", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    97,    98,    98,    99,    99,   100,   100,   100,   100,
     100,   102,   101,   104,   103,   105,   105,   106,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   114,
     114,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     2,     4,     4,
       4,     0,     3,     0,     3,     1,     3,     1,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     4,
       3,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     0,     0,    13,    11,     0,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     1,     5,     6,     7,
       0,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     9,     8,    10,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    76,    74,    70,    71,
      72,    73,    69,    75,    66,   102,   101,    96,    65,    63,
      64,    77,    67,    68,    97,    95,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    89,    90,    88,    91,
      92,    93,    94,    15,   100,    62,    33,    17,    32,    30,
       0,    38,    21,     0,    37,     0,    36,     0,    40,     0,
      39,     0,    34,     0,    35,    28,    29,    22,    23,    24,
      25,    26,    27,    31,     0,    41,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,    46,    45,    44,    48,
      47,    42,    43,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,    16,    18,   107,   105,   110,   109,   108,   111,   112,
     113,   106,   118,   114,   115,   116,   117,   119,   104
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     6,     7,     8,     9,    15,    10,    14,   174,   178,
      81,    82,    64,    65,   151,   147,   154,    66,   135,   148,
     222,   223
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const short yypact[] =
{
      -7,   -86,   -84,   -77,  -134,  -134,    50,    -7,  -134,   -71,
     -40,   -23,   -22,   -21,    21,   145,  -134,  -134,  -134,  -134,
     -30,   -13,   -12,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,   -18,   -10,    -9,    -8,    -6,    -5,
      -4,    -3,     9,    10,    11,    12,    31,    34,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    47,    48,
      49,    51,    52,    53,    56,    21,    58,    57,    60,    61,
      62,    63,    64,    65,    67,    70,    72,    74,    75,    77,
      78,   145,    79,  -134,  -134,  -134,  -134,    80,    82,   -11,
      84,    85,    86,    87,    92,   -45,   -15,   -50,   -58,    98,
      99,   100,   102,   103,   104,   106,   107,   110,   111,   -58,
     -58,   -58,   112,   113,   114,   118,   119,    81,  -134,   121,
     122,   123,   -74,   119,   -57,   -49,   -39,   -37,   -35,   -33,
       8,   122,   -27,    89,  -134,   108,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,   127,  -134,  -134,  -134,   129,  -134,
     126,  -134,   127,   128,  -134,   130,  -134,   131,  -134,   132,
    -134,   133,  -134,   134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,   129,   135,  -134,  -134,   139,   140,   141,
     142,   143,   144,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   108,   155,   156,   158,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,   159,   -58,   160,   161,   162,   -58,
     163,   164,   165,   166,   167,   168,   169,   170,   119,   157,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,   127,  -134
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -134,  -134,  -134,   195,  -134,  -134,  -134,  -134,  -122,    90,
    -134,    91,  -133,  -134,  -134,  -134,  -134,   171,  -134,   -98,
    -134,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     155,   182,   221,   144,   152,    11,   149,    12,   153,   145,
     146,   166,   167,   168,    13,     1,     2,     3,   150,   180,
     181,    18,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   183,   184,     4,    35,
       5,    36,   195,   196,   185,   186,    37,    38,    39,    40,
      16,   197,    19,    41,   187,   188,   189,   190,   191,   192,
     193,   194,    83,    42,   198,    43,   204,   205,   199,   200,
     201,   202,    20,    21,    22,    44,    45,    86,    46,    84,
      85,    87,    88,    89,   138,    90,    91,    92,    93,   221,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      94,    95,    96,    97,    57,    58,    59,    60,    61,    62,
      63,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    98,   207,   208,    99,   267,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   254,   110,   111,
     112,   258,   113,   114,   115,   209,   210,   116,   119,   211,
     118,   120,   121,   122,   123,   124,   125,   212,   126,   213,
     214,   127,    67,   128,    68,   129,   130,   215,   131,   132,
      69,   134,   133,   175,   136,    70,   137,    71,   139,   140,
     141,   206,   142,   216,    72,    73,   143,   217,   218,   219,
     220,    74,   156,   157,   158,    75,   159,   160,   161,    76,
     162,   163,    17,    77,   164,   165,   169,   170,   171,    78,
      79,    80,   172,     0,   173,   176,   177,   224,   179,   225,
     226,   203,   227,   249,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   117,   240,   241,   242,
     243,   244,   245,   246,   247,   248,     0,   250,     0,   268,
       0,   251,   252,   253,   255,   256,   257,   259,   260,   261,
     262,   263,   264,   265,   266
};

static const short yycheck[] =
{
      98,   123,   135,    48,    54,    91,    21,    91,    58,    67,
      68,   109,   110,   111,    91,    22,    23,    24,    33,    93,
      94,    92,    67,    68,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    93,    94,    45,    18,
      47,    20,    34,    35,    93,    94,    25,    26,    27,    28,
       0,    43,    92,    32,    93,    94,    93,    94,    93,    94,
      93,    94,    92,    42,    56,    44,    93,    94,    60,    61,
      62,    63,    95,    95,    95,    54,    55,    95,    57,    92,
      92,    91,    91,    91,    95,    91,    91,    91,    91,   222,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      91,    91,    91,    91,    83,    84,    85,    86,    87,    88,
      89,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    91,    15,    16,    91,   248,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,   235,    91,    91,
      91,   239,    91,    91,    91,    37,    38,    91,    91,    41,
      92,    91,    91,    91,    91,    91,    91,    49,    91,    51,
      52,    91,    17,    91,    19,    91,    91,    59,    91,    91,
      25,    92,    81,    92,    94,    30,    94,    32,    94,    94,
      94,    92,    95,    75,    39,    40,    94,    79,    80,    81,
      82,    46,    94,    94,    94,    50,    94,    94,    94,    54,
      94,    94,     7,    58,    94,    94,    94,    94,    94,    64,
      65,    66,    94,    -1,    95,    94,    94,    90,    95,    90,
      94,   131,    94,   222,    94,    94,    94,    94,    94,    94,
      91,    91,    91,    91,    91,    91,    65,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    -1,    92,    -1,    92,
      -1,    95,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    22,    23,    24,    45,    47,    98,    99,   100,   101,
     103,    91,    91,    91,   104,   102,     0,   100,    92,    92,
      95,    95,    95,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    18,    20,    25,    26,    27,
      28,    32,    42,    44,    54,    55,    57,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    83,    84,    85,
      86,    87,    88,    89,   109,   110,   114,    17,    19,    25,
      30,    32,    39,    40,    46,    50,    54,    58,    64,    65,
      66,   107,   108,    92,    92,    92,    95,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,   114,    92,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,   108,    92,   115,    94,    94,    95,    94,
      94,    94,    95,    94,    48,    67,    68,   112,   116,    21,
      33,   111,    54,    58,   113,   116,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,   116,   116,   116,    94,
      94,    94,    94,    95,   105,    92,    94,    94,   106,    95,
      93,    94,   105,    93,    94,    93,    94,    93,    94,    93,
      94,    93,    94,    93,    94,    34,    35,    43,    56,    60,
      61,    62,    63,   106,    93,    94,    92,    15,    16,    37,
      38,    41,    49,    51,    52,    59,    75,    79,    80,    81,
      82,   109,   117,   118,    90,    90,    94,    94,    94,    94,
      94,    94,    94,    94,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,   118,
      92,    95,    94,    94,   116,    94,    94,    94,   116,    94,
      94,    94,    94,    94,    94,    94,    94,   105,    92
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
#define YYEMPTY		-2
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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

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
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
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
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

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

  if (yyssp >= yyss + yystacksize - 1)
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
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
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

      if (yyssp >= yyss + yystacksize - 1)
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

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

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



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 8:
#line 190 "config_gram.y"
    {
    strncpy(default_programmer, yyvsp[-1]->value.string, MAX_STR_CONST);
    default_programmer[MAX_STR_CONST-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 9:
#line 196 "config_gram.y"
    {
    strncpy(default_parallel, yyvsp[-1]->value.string, PATH_MAX);
    default_parallel[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 10:
#line 202 "config_gram.y"
    {
    strncpy(default_serial, yyvsp[-1]->value.string, PATH_MAX);
    default_serial[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  }
    break;

  case 11:
#line 212 "config_gram.y"
    { current_prog = pgm_new();
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
    }
    break;

  case 12:
#line 217 "config_gram.y"
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
#line 237 "config_gram.y"
    {
      current_part = avr_new_part();
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;
    }
    break;

  case 14:
#line 243 "config_gram.y"
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
#line 298 "config_gram.y"
    { ladd(string_list, yyvsp[0]); }
    break;

  case 16:
#line 299 "config_gram.y"
    { ladd(string_list, yyvsp[0]); }
    break;

  case 17:
#line 304 "config_gram.y"
    { ladd(number_list, yyvsp[0]); }
    break;

  case 18:
#line 305 "config_gram.y"
    { ladd(number_list, yyvsp[0]); }
    break;

  case 21:
#line 316 "config_gram.y"
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
#line 327 "config_gram.y"
    {
    { 
      par_initpgm(current_prog);
    }
  }
    break;

  case 23:
#line 333 "config_gram.y"
    {
    {
      serbb_initpgm(current_prog);
    }
  }
    break;

  case 24:
#line 339 "config_gram.y"
    {
    { 
      stk500_initpgm(current_prog);
    }
  }
    break;

  case 25:
#line 345 "config_gram.y"
    {
    {
      stk500v2_initpgm(current_prog);
    }
  }
    break;

  case 26:
#line 351 "config_gram.y"
    {
    { 
      avr910_initpgm(current_prog);
    }
  }
    break;

  case 27:
#line 357 "config_gram.y"
    {
    { 
      butterfly_initpgm(current_prog);
    }
  }
    break;

  case 28:
#line 363 "config_gram.y"
    {
    {
      jtagmkI_initpgm(current_prog);
    }
  }
    break;

  case 29:
#line 369 "config_gram.y"
    {
    {
      jtagmkII_initpgm(current_prog);
    }
  }
    break;

  case 30:
#line 375 "config_gram.y"
    {
    strncpy(current_prog->desc, yyvsp[0]->value.string, PGM_DESCLEN);
    current_prog->desc[PGM_DESCLEN-1] = 0;
    free_token(yyvsp[0]);
  }
    break;

  case 31:
#line 381 "config_gram.y"
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

  case 32:
#line 406 "config_gram.y"
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

  case 33:
#line 431 "config_gram.y"
    {
    {
      current_prog->baudrate = yyvsp[0]->value.number;
    }
  }
    break;

  case 34:
#line 437 "config_gram.y"
    { free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_RESET, yyvsp[0], 0); }
    break;

  case 35:
#line 439 "config_gram.y"
    { free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_SCK, yyvsp[0], 0); }
    break;

  case 36:
#line 441 "config_gram.y"
    { assign_pin(PIN_AVR_MOSI, yyvsp[0], 0); }
    break;

  case 37:
#line 442 "config_gram.y"
    { assign_pin(PIN_AVR_MISO, yyvsp[0], 0); }
    break;

  case 38:
#line 443 "config_gram.y"
    { assign_pin(PIN_LED_ERR, yyvsp[0], 0); }
    break;

  case 39:
#line 444 "config_gram.y"
    { assign_pin(PIN_LED_RDY, yyvsp[0], 0); }
    break;

  case 40:
#line 445 "config_gram.y"
    { assign_pin(PIN_LED_PGM, yyvsp[0], 0); }
    break;

  case 41:
#line 446 "config_gram.y"
    { assign_pin(PIN_LED_VFY, yyvsp[0], 0); }
    break;

  case 42:
#line 448 "config_gram.y"
    { free_token(yyvsp[-3]); 
                                  assign_pin(PIN_AVR_RESET, yyvsp[0], 1); }
    break;

  case 43:
#line 450 "config_gram.y"
    { free_token(yyvsp[-3]); 
                                  assign_pin(PIN_AVR_SCK, yyvsp[0], 1); }
    break;

  case 44:
#line 452 "config_gram.y"
    { assign_pin(PIN_AVR_MOSI, yyvsp[0], 1); }
    break;

  case 45:
#line 453 "config_gram.y"
    { assign_pin(PIN_AVR_MISO, yyvsp[0], 1); }
    break;

  case 46:
#line 454 "config_gram.y"
    { assign_pin(PIN_LED_ERR, yyvsp[0], 1); }
    break;

  case 47:
#line 455 "config_gram.y"
    { assign_pin(PIN_LED_RDY, yyvsp[0], 1); }
    break;

  case 48:
#line 456 "config_gram.y"
    { assign_pin(PIN_LED_PGM, yyvsp[0], 1); }
    break;

  case 49:
#line 457 "config_gram.y"
    { assign_pin(PIN_LED_VFY, yyvsp[0], 1); }
    break;

  case 69:
#line 496 "config_gram.y"
    {
      strncpy(current_part->id, yyvsp[0]->value.string, AVR_IDLEN);
      current_part->id[AVR_IDLEN-1] = 0;
      free_token(yyvsp[0]);
    }
    break;

  case 70:
#line 503 "config_gram.y"
    {
      strncpy(current_part->desc, yyvsp[0]->value.string, AVR_DESCLEN);
      current_part->desc[AVR_DESCLEN-1] = 0;
      free_token(yyvsp[0]);
    }
    break;

  case 71:
#line 509 "config_gram.y"
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

  case 72:
#line 519 "config_gram.y"
    {
    {
      current_part->stk500_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  }
    break;

  case 73:
#line 526 "config_gram.y"
    {
    {
      current_part->avr910_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  }
    break;

  case 74:
#line 534 "config_gram.y"
    {
      current_part->chip_erase_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 75:
#line 540 "config_gram.y"
    {
      current_part->pagel = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 76:
#line 546 "config_gram.y"
    {
      current_part->bs2 = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 77:
#line 552 "config_gram.y"
    {
      if (yyvsp[0]->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if (yyvsp[0]->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, yyvsp[-2], yyvsp[0]);
    }
    break;

  case 78:
#line 562 "config_gram.y"
    {
      current_part->timeout = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 79:
#line 568 "config_gram.y"
    {
      current_part->stabdelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 80:
#line 574 "config_gram.y"
    {
      current_part->cmdexedelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 81:
#line 580 "config_gram.y"
    {
      current_part->synchloops = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 82:
#line 586 "config_gram.y"
    {
      current_part->bytedelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 83:
#line 592 "config_gram.y"
    {
      current_part->pollvalue = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 84:
#line 598 "config_gram.y"
    {
      current_part->pollindex = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 85:
#line 604 "config_gram.y"
    {
      current_part->predelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 86:
#line 610 "config_gram.y"
    {
      current_part->postdelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 87:
#line 616 "config_gram.y"
    {
      current_part->pollmethod = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 88:
#line 622 "config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_HAS_JTAG;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_JTAG;

      free_token(yyvsp[0]);
    }
    break;

  case 89:
#line 632 "config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_ALLOWFULLPAGEBITSTREAM;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_ALLOWFULLPAGEBITSTREAM;

      free_token(yyvsp[0]);
    }
    break;

  case 90:
#line 642 "config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_ENABLEPAGEPROGRAMMING;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_ENABLEPAGEPROGRAMMING;

      free_token(yyvsp[0]);
    }
    break;

  case 91:
#line 652 "config_gram.y"
    {
      current_part->idr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 92:
#line 658 "config_gram.y"
    {
      current_part->rampz = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 93:
#line 664 "config_gram.y"
    {
      current_part->spmcr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 94:
#line 670 "config_gram.y"
    {
      current_part->eecr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 95:
#line 676 "config_gram.y"
    {
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_SERIALOK;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_SERIALOK;

      free_token(yyvsp[0]);
    }
    break;

  case 96:
#line 686 "config_gram.y"
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

  case 97:
#line 705 "config_gram.y"
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

  case 98:
#line 728 "config_gram.y"
    { 
      current_mem = avr_new_memtype(); 
      strcpy(current_mem->desc, strdup(yyvsp[0]->value.string)); 
      free_token(yyvsp[0]); 
    }
    break;

  case 99:
#line 734 "config_gram.y"
    { 
      ladd(current_part->mem, current_mem); 
      current_mem = NULL; 
    }
    break;

  case 100:
#line 739 "config_gram.y"
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

  case 105:
#line 768 "config_gram.y"
    {
      current_mem->paged = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    }
    break;

  case 106:
#line 774 "config_gram.y"
    {
      current_mem->size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 107:
#line 781 "config_gram.y"
    {
      current_mem->page_size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 108:
#line 787 "config_gram.y"
    {
      current_mem->num_pages = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 109:
#line 793 "config_gram.y"
    {
      current_mem->min_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 110:
#line 799 "config_gram.y"
    {
      current_mem->max_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 111:
#line 805 "config_gram.y"
    {
      current_mem->pwroff_after_write = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    }
    break;

  case 112:
#line 811 "config_gram.y"
    {
      current_mem->readback[0] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 113:
#line 817 "config_gram.y"
    {
      current_mem->readback[1] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 114:
#line 824 "config_gram.y"
    {
      current_mem->mode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 115:
#line 830 "config_gram.y"
    {
      current_mem->delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 116:
#line 836 "config_gram.y"
    {
      current_mem->blocksize = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 117:
#line 842 "config_gram.y"
    {
      current_mem->readsize = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 118:
#line 848 "config_gram.y"
    {
      current_mem->pollindex = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
    break;

  case 119:
#line 854 "config_gram.y"
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

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 2215 "config_gram.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

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
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
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
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
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
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

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

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
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


#line 870 "config_gram.y"


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


static int assign_pin(int pinno, TOKEN * v, int invert)
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
  if (invert)
    value |= PIN_INVERSE;

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



