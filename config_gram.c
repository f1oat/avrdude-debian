
/*  A Bison parser, made from ../config_gram.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	K_READ	257
#define	K_WRITE	258
#define	K_READ_LO	259
#define	K_READ_HI	260
#define	K_WRITE_LO	261
#define	K_WRITE_HI	262
#define	K_LOADPAGE_LO	263
#define	K_LOADPAGE_HI	264
#define	K_WRITEPAGE	265
#define	K_CHIP_ERASE	266
#define	K_PGM_ENABLE	267
#define	K_MEMORY	268
#define	K_PAGE_SIZE	269
#define	K_PAGED	270
#define	K_BAUDRATE	271
#define	K_BS2	272
#define	K_BUFF	273
#define	K_CHIP_ERASE_DELAY	274
#define	K_DEDICATED	275
#define	K_DEFAULT_PARALLEL	276
#define	K_DEFAULT_PROGRAMMER	277
#define	K_DEFAULT_SERIAL	278
#define	K_DESC	279
#define	K_DEVICECODE	280
#define	K_STK500_DEVCODE	281
#define	K_AVR910_DEVCODE	282
#define	K_EEPROM	283
#define	K_ERRLED	284
#define	K_FLASH	285
#define	K_ID	286
#define	K_IO	287
#define	K_JTAG_MKII	288
#define	K_LOADPAGE	289
#define	K_MAX_WRITE_DELAY	290
#define	K_MIN_WRITE_DELAY	291
#define	K_MISO	292
#define	K_MOSI	293
#define	K_NUM_PAGES	294
#define	K_PAGEL	295
#define	K_PAR	296
#define	K_PARALLEL	297
#define	K_PART	298
#define	K_PGMLED	299
#define	K_PROGRAMMER	300
#define	K_PSEUDO	301
#define	K_PWROFF_AFTER_WRITE	302
#define	K_RDYLED	303
#define	K_READBACK_P1	304
#define	K_READBACK_P2	305
#define	K_READMEM	306
#define	K_RESET	307
#define	K_RETRY_PULSE	308
#define	K_SERBB	309
#define	K_SERIAL	310
#define	K_SCK	311
#define	K_SIZE	312
#define	K_STK500	313
#define	K_STK500V2	314
#define	K_AVR910	315
#define	K_BUTTERFLY	316
#define	K_TYPE	317
#define	K_VCC	318
#define	K_VFYLED	319
#define	K_NO	320
#define	K_YES	321
#define	K_TIMEOUT	322
#define	K_STABDELAY	323
#define	K_CMDEXEDELAY	324
#define	K_SYNCHLOOPS	325
#define	K_BYTEDELAY	326
#define	K_POLLVALUE	327
#define	K_POLLINDEX	328
#define	K_PREDELAY	329
#define	K_POSTDELAY	330
#define	K_POLLMETHOD	331
#define	K_MODE	332
#define	K_DELAY	333
#define	K_BLOCKSIZE	334
#define	K_READSIZE	335
#define	K_ALLOWFULLPAGEBITSTREAM	336
#define	K_ENABLEPAGEPROGRAMMING	337
#define	K_HAS_JTAG	338
#define	K_IDR	339
#define	K_RAMPZ	340
#define	K_SPMCR	341
#define	K_EECR	342
#define	TKN_COMMA	343
#define	TKN_EQUAL	344
#define	TKN_SEMI	345
#define	TKN_TILDE	346
#define	TKN_NUMBER	347
#define	TKN_STRING	348
#define	TKN_ID	349

#line 21 "../config_gram.y"


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
 
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		268
#define	YYFLAG		-32768
#define	YYNTBASE	96

#define YYTRANSLATE(x) ((unsigned)(x) <= 349 ? yytranslate[x] : 117)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    11,    14,    19,    24,    29,
    30,    34,    35,    39,    41,    45,    47,    51,    54,    58,
    62,    66,    70,    74,    78,    82,    86,    90,    94,    98,
   102,   106,   110,   114,   118,   122,   126,   130,   134,   138,
   143,   148,   153,   158,   163,   168,   173,   178,   180,   182,
   184,   186,   188,   190,   192,   194,   196,   198,   200,   203,
   207,   209,   211,   213,   215,   217,   219,   223,   227,   231,
   235,   239,   243,   247,   251,   255,   259,   263,   267,   271,
   275,   279,   283,   287,   291,   295,   299,   303,   307,   311,
   315,   319,   323,   327,   331,   335,   336,   341,   345,   347,
   349,   352,   356,   360,   364,   368,   372,   376,   380,   384,
   388,   392,   396,   400,   404,   408,   412
};

static const short yyrhs[] = {    -1,
    97,     0,    98,     0,    97,    98,     0,    99,    91,     0,
   101,    91,     0,    23,    90,    94,    91,     0,    22,    90,
    94,    91,     0,    24,    90,    94,    91,     0,     0,    46,
   100,   105,     0,     0,    44,   102,   108,     0,    94,     0,
   103,    89,    94,     0,    93,     0,   104,    89,    93,     0,
   106,    91,     0,   105,   106,    91,     0,    32,    90,   103,
     0,    63,    90,    42,     0,    63,    90,    55,     0,    63,
    90,    59,     0,    63,    90,    60,     0,    63,    90,    61,
     0,    63,    90,    62,     0,    63,    90,    34,     0,    25,
    90,    94,     0,    64,    90,   104,     0,    19,    90,   104,
     0,    17,    90,    93,     0,    53,    90,    93,     0,    57,
    90,    93,     0,    39,    90,    93,     0,    38,    90,    93,
     0,    30,    90,    93,     0,    49,    90,    93,     0,    45,
    90,    93,     0,    65,    90,    93,     0,    53,    90,    92,
    93,     0,    57,    90,    92,    93,     0,    39,    90,    92,
    93,     0,    38,    90,    92,    93,     0,    30,    90,    92,
    93,     0,    49,    90,    92,    93,     0,    45,    90,    92,
    93,     0,    65,    90,    92,    93,     0,     3,     0,     4,
     0,     5,     0,     6,     0,     7,     0,     8,     0,     9,
     0,    10,     0,    11,     0,    12,     0,    13,     0,   112,
    91,     0,   108,   112,    91,     0,    21,     0,    33,     0,
   114,     0,    47,     0,    53,     0,    57,     0,    32,    90,
    94,     0,    25,    90,    94,     0,    26,    90,    93,     0,
    27,    90,    93,     0,    28,    90,    93,     0,    20,    90,
    93,     0,    41,    90,    93,     0,    18,    90,    93,     0,
    53,    90,   109,     0,    68,    90,    93,     0,    69,    90,
    93,     0,    70,    90,    93,     0,    71,    90,    93,     0,
    72,    90,    93,     0,    73,    90,    93,     0,    74,    90,
    93,     0,    75,    90,    93,     0,    76,    90,    93,     0,
    77,    90,    93,     0,    84,    90,   114,     0,    82,    90,
   114,     0,    83,    90,   114,     0,    85,    90,    93,     0,
    86,    90,    93,     0,    87,    90,    93,     0,    88,    90,
    93,     0,    56,    90,   114,     0,    43,    90,   110,     0,
    54,    90,   111,     0,     0,    14,    94,   113,   115,     0,
   107,    90,   103,     0,    67,     0,    66,     0,   116,    91,
     0,   115,   116,    91,     0,    16,    90,   114,     0,    58,
    90,    93,     0,    15,    90,    93,     0,    40,    90,    93,
     0,    37,    90,    93,     0,    36,    90,    93,     0,    48,
    90,   114,     0,    50,    90,    93,     0,    51,    90,    93,
     0,    78,    90,    93,     0,    79,    90,    93,     0,    80,
    90,    93,     0,    81,    90,    93,     0,    74,    90,    93,
     0,   107,    90,   103,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   173,   174,   177,   178,   183,   184,   186,   192,   198,   208,
   215,   233,   241,   295,   296,   301,   302,   307,   308,   313,
   323,   329,   335,   341,   347,   353,   359,   365,   371,   396,
   421,   427,   430,   432,   433,   434,   435,   436,   437,   438,
   441,   443,   444,   445,   446,   447,   448,   453,   454,   455,
   456,   457,   458,   459,   460,   461,   462,   463,   468,   469,
   474,   475,   478,   479,   482,   483,   486,   492,   499,   509,
   516,   523,   529,   535,   541,   551,   557,   563,   569,   575,
   581,   587,   593,   599,   605,   611,   621,   631,   641,   647,
   653,   659,   665,   675,   694,   708,   726,   729,   747,   748,
   752,   753,   758,   763,   769,   776,   782,   788,   794,   800,
   806,   812,   819,   825,   831,   837,   843
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","K_READ",
"K_WRITE","K_READ_LO","K_READ_HI","K_WRITE_LO","K_WRITE_HI","K_LOADPAGE_LO",
"K_LOADPAGE_HI","K_WRITEPAGE","K_CHIP_ERASE","K_PGM_ENABLE","K_MEMORY","K_PAGE_SIZE",
"K_PAGED","K_BAUDRATE","K_BS2","K_BUFF","K_CHIP_ERASE_DELAY","K_DEDICATED","K_DEFAULT_PARALLEL",
"K_DEFAULT_PROGRAMMER","K_DEFAULT_SERIAL","K_DESC","K_DEVICECODE","K_STK500_DEVCODE",
"K_AVR910_DEVCODE","K_EEPROM","K_ERRLED","K_FLASH","K_ID","K_IO","K_JTAG_MKII",
"K_LOADPAGE","K_MAX_WRITE_DELAY","K_MIN_WRITE_DELAY","K_MISO","K_MOSI","K_NUM_PAGES",
"K_PAGEL","K_PAR","K_PARALLEL","K_PART","K_PGMLED","K_PROGRAMMER","K_PSEUDO",
"K_PWROFF_AFTER_WRITE","K_RDYLED","K_READBACK_P1","K_READBACK_P2","K_READMEM",
"K_RESET","K_RETRY_PULSE","K_SERBB","K_SERIAL","K_SCK","K_SIZE","K_STK500","K_STK500V2",
"K_AVR910","K_BUTTERFLY","K_TYPE","K_VCC","K_VFYLED","K_NO","K_YES","K_TIMEOUT",
"K_STABDELAY","K_CMDEXEDELAY","K_SYNCHLOOPS","K_BYTEDELAY","K_POLLVALUE","K_POLLINDEX",
"K_PREDELAY","K_POSTDELAY","K_POLLMETHOD","K_MODE","K_DELAY","K_BLOCKSIZE","K_READSIZE",
"K_ALLOWFULLPAGEBITSTREAM","K_ENABLEPAGEPROGRAMMING","K_HAS_JTAG","K_IDR","K_RAMPZ",
"K_SPMCR","K_EECR","TKN_COMMA","TKN_EQUAL","TKN_SEMI","TKN_TILDE","TKN_NUMBER",
"TKN_STRING","TKN_ID","configuration","config","def","prog_def","@1","part_def",
"@2","string_list","num_list","prog_parms","prog_parm","opcode","part_parms",
"reset_disposition","parallel_modes","retry_lines","part_parm","@3","yesno",
"mem_specs","mem_spec", NULL
};
#endif

static const short yyr1[] = {     0,
    96,    96,    97,    97,    98,    98,    98,    98,    98,   100,
    99,   102,   101,   103,   103,   104,   104,   105,   105,   106,
   106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
   106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
   106,   106,   106,   106,   106,   106,   106,   107,   107,   107,
   107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
   109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   113,   112,   112,   114,   114,
   115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
   116,   116,   116,   116,   116,   116,   116
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     2,     4,     4,     4,     0,
     3,     0,     3,     1,     3,     1,     3,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
     4,     4,     4,     4,     4,     4,     4,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
     1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     0,     4,     3,     1,     1,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3
};

static const short yydefact[] = {     1,
     0,     0,     0,    12,    10,     2,     3,     0,     0,     0,
     0,     0,     0,     0,     4,     5,     6,     0,     0,     0,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     8,     7,     9,    96,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    18,     0,    74,    72,    68,    69,    70,    71,    67,
    73,    64,   100,    99,    94,    63,    61,    62,    75,    65,
    66,    95,    93,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    87,    88,    86,    89,    90,    91,    92,
    14,    98,    60,    31,    16,    30,    28,     0,    36,    20,
     0,    35,     0,    34,     0,    38,     0,    37,     0,    32,
     0,    33,    27,    21,    22,    23,    24,    25,    26,    29,
     0,    39,    19,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
     0,     0,    44,    43,    42,    46,    45,    40,    41,    47,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   101,    15,    17,   105,
   103,   108,   107,   106,   109,   110,   111,   104,   116,   112,
   113,   114,   115,   117,   102,     0,     0,     0
};

static const short yydefgoto[] = {   266,
     6,     7,     8,    14,     9,    13,   172,   176,    79,    80,
    62,    63,   149,   145,   152,    64,   133,   146,   219,   220
};

static const short yypact[] = {    -8,
   -53,   -50,   -47,-32768,-32768,    -8,-32768,   -31,   -30,   -29,
   -28,   -23,    21,   144,-32768,-32768,-32768,   -19,   -18,   -15,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   -14,   -12,   -11,    -9,    -7,    -6,    -5,    -4,    -3,
     9,    10,    11,    12,    31,    34,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    47,    48,    49,    51,
    52,    55,    21,    57,    56,    59,    60,    61,    62,    63,
    64,    66,    69,    70,    72,    74,    76,    77,   144,    79,
-32768,-32768,-32768,-32768,    75,    78,    81,    80,    84,    85,
    86,    91,   -44,   -16,   -49,   -60,    97,    98,    99,   101,
   102,   103,   105,   106,   109,   110,   -60,   -60,   -60,   111,
   112,   113,   117,   118,    88,-32768,   120,   121,   122,   -83,
   118,   -74,   -72,   -48,   -41,   -38,   -36,     8,   121,   -34,
   124,-32768,   107,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    83,-32768,-32768,-32768,   128,-32768,   125,-32768,    83,
   126,-32768,   127,-32768,   129,-32768,   130,-32768,   131,-32768,
   132,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   128,
   133,-32768,-32768,   137,   138,   139,   140,   141,   142,   143,
   145,   146,   147,   148,   149,   150,   151,   152,   107,   153,
   154,   156,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   157,   -60,   158,   159,   160,   -60,   161,   162,   163,   164,
   165,   166,   167,   168,   118,   155,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    83,-32768,    82,   200,-32768
};

static const short yypgoto[] = {-32768,
-32768,   205,-32768,-32768,-32768,-32768,  -120,    92,-32768,   183,
  -131,-32768,-32768,-32768,-32768,   171,-32768,   -96,-32768,    24
};


#define	YYLAST		262


static const short yytable[] = {   153,
   180,   218,   142,   150,   147,   143,   144,   151,   178,   179,
   164,   165,   166,     1,     2,     3,   148,   181,   182,   183,
   184,   143,   144,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,     4,    10,     5,    33,    11,
    34,   193,    12,   185,   186,    35,    36,    37,    38,   194,
   187,   188,    39,   189,   190,   191,   192,   201,   202,    16,
    17,    40,   195,    41,    18,    19,   196,   197,   198,   199,
    20,    81,    82,    42,    43,    83,    44,    85,    86,    84,
    87,   267,    88,    89,    90,    91,    92,   218,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    93,    94,
    95,    96,    55,    56,    57,    58,    59,    60,    61,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    97,   204,   205,    98,   264,    99,   100,   101,   102,   103,
   104,   105,   106,   107,   108,   251,   109,   110,   111,   255,
   112,   113,   206,   207,   114,   117,   208,   116,   118,   119,
   120,   121,   122,   123,   209,   124,   210,   211,   125,   126,
    65,   127,    66,   128,   212,   129,   130,   134,    67,   132,
   135,   221,   137,    68,   136,    69,   138,   139,   173,   140,
   213,    70,    71,   141,   214,   215,   216,   217,    72,   154,
   155,   156,    73,   157,   158,   159,    74,   160,   161,   268,
    75,   162,   163,   167,   168,   169,    76,    77,    78,   170,
    15,   171,   174,   175,   203,   177,   222,   223,   224,   225,
   200,   226,   227,   228,   229,   230,   231,   232,   233,   234,
   235,   236,   237,   115,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,     0,   265,     0,   248,   249,   250,
   252,   253,   254,   256,   257,   258,   259,   260,   261,   262,
   263,   131
};

static const short yycheck[] = {    96,
   121,   133,    47,    53,    21,    66,    67,    57,    92,    93,
   107,   108,   109,    22,    23,    24,    33,    92,    93,    92,
    93,    66,    67,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    44,    90,    46,    18,    90,
    20,    34,    90,    92,    93,    25,    26,    27,    28,    42,
    92,    93,    32,    92,    93,    92,    93,    92,    93,    91,
    91,    41,    55,    43,    94,    94,    59,    60,    61,    62,
    94,    91,    91,    53,    54,    91,    56,    90,    90,    94,
    90,     0,    90,    90,    90,    90,    90,   219,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    90,    90,
    90,    90,    82,    83,    84,    85,    86,    87,    88,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    90,    15,    16,    90,   245,    90,    90,    90,    90,    90,
    90,    90,    90,    90,    90,   232,    90,    90,    90,   236,
    90,    90,    36,    37,    90,    90,    40,    91,    90,    90,
    90,    90,    90,    90,    48,    90,    50,    51,    90,    90,
    17,    90,    19,    90,    58,    90,    90,    93,    25,    91,
    93,    89,    93,    30,    94,    32,    93,    93,    91,    94,
    74,    38,    39,    93,    78,    79,    80,    81,    45,    93,
    93,    93,    49,    93,    93,    93,    53,    93,    93,     0,
    57,    93,    93,    93,    93,    93,    63,    64,    65,    93,
     6,    94,    93,    93,    91,    94,    89,    93,    93,    93,
   129,    93,    93,    93,    93,    93,    90,    90,    90,    90,
    90,    90,    90,    63,    90,    90,    90,    90,    90,    90,
    90,    90,   219,    91,    -1,    91,    -1,    94,    93,    93,
    93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
    93,    79
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 7:
#line 188 "../config_gram.y"
{
    strncpy(default_programmer, yyvsp[-1]->value.string, MAX_STR_CONST);
    default_programmer[MAX_STR_CONST-1] = 0;
    free_token(yyvsp[-1]);
  ;
    break;}
case 8:
#line 194 "../config_gram.y"
{
    strncpy(default_parallel, yyvsp[-1]->value.string, PATH_MAX);
    default_parallel[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  ;
    break;}
case 9:
#line 200 "../config_gram.y"
{
    strncpy(default_serial, yyvsp[-1]->value.string, PATH_MAX);
    default_serial[PATH_MAX-1] = 0;
    free_token(yyvsp[-1]);
  ;
    break;}
case 10:
#line 210 "../config_gram.y"
{ current_prog = pgm_new();
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
    ;
    break;}
case 11:
#line 215 "../config_gram.y"
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
    ;
    break;}
case 12:
#line 235 "../config_gram.y"
{
      current_part = avr_new_part();
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;
    ;
    break;}
case 13:
#line 241 "../config_gram.y"
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
    ;
    break;}
case 14:
#line 296 "../config_gram.y"
{ ladd(string_list, yyvsp[0]); ;
    break;}
case 15:
#line 297 "../config_gram.y"
{ ladd(string_list, yyvsp[0]); ;
    break;}
case 16:
#line 302 "../config_gram.y"
{ ladd(number_list, yyvsp[0]); ;
    break;}
case 17:
#line 303 "../config_gram.y"
{ ladd(number_list, yyvsp[0]); ;
    break;}
case 20:
#line 314 "../config_gram.y"
{
    { 
      TOKEN * t;
      while (lsize(string_list)) {
        t = lrmv_n(string_list, 1);
        ladd(current_prog->id, dup_string(t->value.string));
        free_token(t);
      }
    }
  ;
    break;}
case 21:
#line 325 "../config_gram.y"
{
    { 
      par_initpgm(current_prog);
    }
  ;
    break;}
case 22:
#line 331 "../config_gram.y"
{
    {
      serbb_initpgm(current_prog);
    }
  ;
    break;}
case 23:
#line 337 "../config_gram.y"
{
    { 
      stk500_initpgm(current_prog);
    }
  ;
    break;}
case 24:
#line 343 "../config_gram.y"
{
    {
      stk500v2_initpgm(current_prog);
    }
  ;
    break;}
case 25:
#line 349 "../config_gram.y"
{
    { 
      avr910_initpgm(current_prog);
    }
  ;
    break;}
case 26:
#line 355 "../config_gram.y"
{
    { 
      butterfly_initpgm(current_prog);
    }
  ;
    break;}
case 27:
#line 361 "../config_gram.y"
{
    {
      jtagmkII_initpgm(current_prog);
    }
  ;
    break;}
case 28:
#line 367 "../config_gram.y"
{
    strncpy(current_prog->desc, yyvsp[0]->value.string, PGM_DESCLEN);
    current_prog->desc[PGM_DESCLEN-1] = 0;
    free_token(yyvsp[0]);
  ;
    break;}
case 29:
#line 373 "../config_gram.y"
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
  ;
    break;}
case 30:
#line 398 "../config_gram.y"
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
  ;
    break;}
case 31:
#line 423 "../config_gram.y"
{
    {
      current_prog->baudrate = yyvsp[0]->value.number;
    }
  ;
    break;}
case 32:
#line 429 "../config_gram.y"
{ free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_RESET, yyvsp[0], 0); ;
    break;}
case 33:
#line 431 "../config_gram.y"
{ free_token(yyvsp[-2]); 
                                  assign_pin(PIN_AVR_SCK, yyvsp[0], 0); ;
    break;}
case 34:
#line 433 "../config_gram.y"
{ assign_pin(PIN_AVR_MOSI, yyvsp[0], 0); ;
    break;}
case 35:
#line 434 "../config_gram.y"
{ assign_pin(PIN_AVR_MISO, yyvsp[0], 0); ;
    break;}
case 36:
#line 435 "../config_gram.y"
{ assign_pin(PIN_LED_ERR, yyvsp[0], 0); ;
    break;}
case 37:
#line 436 "../config_gram.y"
{ assign_pin(PIN_LED_RDY, yyvsp[0], 0); ;
    break;}
case 38:
#line 437 "../config_gram.y"
{ assign_pin(PIN_LED_PGM, yyvsp[0], 0); ;
    break;}
case 39:
#line 438 "../config_gram.y"
{ assign_pin(PIN_LED_VFY, yyvsp[0], 0); ;
    break;}
case 40:
#line 440 "../config_gram.y"
{ free_token(yyvsp[-3]); 
                                  assign_pin(PIN_AVR_RESET, yyvsp[0], 1); ;
    break;}
case 41:
#line 442 "../config_gram.y"
{ free_token(yyvsp[-3]); 
                                  assign_pin(PIN_AVR_SCK, yyvsp[0], 1); ;
    break;}
case 42:
#line 444 "../config_gram.y"
{ assign_pin(PIN_AVR_MOSI, yyvsp[0], 1); ;
    break;}
case 43:
#line 445 "../config_gram.y"
{ assign_pin(PIN_AVR_MISO, yyvsp[0], 1); ;
    break;}
case 44:
#line 446 "../config_gram.y"
{ assign_pin(PIN_LED_ERR, yyvsp[0], 1); ;
    break;}
case 45:
#line 447 "../config_gram.y"
{ assign_pin(PIN_LED_RDY, yyvsp[0], 1); ;
    break;}
case 46:
#line 448 "../config_gram.y"
{ assign_pin(PIN_LED_PGM, yyvsp[0], 1); ;
    break;}
case 47:
#line 449 "../config_gram.y"
{ assign_pin(PIN_LED_VFY, yyvsp[0], 1); ;
    break;}
case 67:
#line 488 "../config_gram.y"
{
      strncpy(current_part->id, yyvsp[0]->value.string, AVR_IDLEN);
      current_part->id[AVR_IDLEN-1] = 0;
      free_token(yyvsp[0]);
    ;
    break;}
case 68:
#line 495 "../config_gram.y"
{
      strncpy(current_part->desc, yyvsp[0]->value.string, AVR_DESCLEN);
      current_part->desc[AVR_DESCLEN-1] = 0;
      free_token(yyvsp[0]);
    ;
    break;}
case 69:
#line 501 "../config_gram.y"
{
    {
      fprintf(stderr, 
              "%s: error at %s:%d: devicecode is deprecated, use "
              "stk500_devcode instead\n",
              progname, infile, lineno);
      exit(1);
    }
  ;
    break;}
case 70:
#line 511 "../config_gram.y"
{
    {
      current_part->stk500_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  ;
    break;}
case 71:
#line 518 "../config_gram.y"
{
    {
      current_part->avr910_devcode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  ;
    break;}
case 72:
#line 526 "../config_gram.y"
{
      current_part->chip_erase_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 73:
#line 532 "../config_gram.y"
{
      current_part->pagel = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 74:
#line 538 "../config_gram.y"
{
      current_part->bs2 = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 75:
#line 544 "../config_gram.y"
{
      if (yyvsp[0]->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if (yyvsp[0]->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 76:
#line 554 "../config_gram.y"
{
      current_part->timeout = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 77:
#line 560 "../config_gram.y"
{
      current_part->stabdelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 78:
#line 566 "../config_gram.y"
{
      current_part->cmdexedelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 79:
#line 572 "../config_gram.y"
{
      current_part->synchloops = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 80:
#line 578 "../config_gram.y"
{
      current_part->bytedelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 81:
#line 584 "../config_gram.y"
{
      current_part->pollvalue = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 82:
#line 590 "../config_gram.y"
{
      current_part->pollindex = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 83:
#line 596 "../config_gram.y"
{
      current_part->predelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 84:
#line 602 "../config_gram.y"
{
      current_part->postdelay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 85:
#line 608 "../config_gram.y"
{
      current_part->pollmethod = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 86:
#line 614 "../config_gram.y"
{
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_HAS_JTAG;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_JTAG;

      free_token(yyvsp[0]);
    ;
    break;}
case 87:
#line 624 "../config_gram.y"
{
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_ALLOWFULLPAGEBITSTREAM;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_ALLOWFULLPAGEBITSTREAM;

      free_token(yyvsp[0]);
    ;
    break;}
case 88:
#line 634 "../config_gram.y"
{
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_ENABLEPAGEPROGRAMMING;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_ENABLEPAGEPROGRAMMING;

      free_token(yyvsp[0]);
    ;
    break;}
case 89:
#line 644 "../config_gram.y"
{
      current_part->idr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 90:
#line 650 "../config_gram.y"
{
      current_part->rampz = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 91:
#line 656 "../config_gram.y"
{
      current_part->spmcr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 92:
#line 662 "../config_gram.y"
{
      current_part->eecr = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 93:
#line 668 "../config_gram.y"
{
      if (yyvsp[0]->primary == K_YES)
        current_part->flags |= AVRPART_SERIALOK;
      else if (yyvsp[0]->primary == K_NO)
        current_part->flags &= ~AVRPART_SERIALOK;

      free_token(yyvsp[0]);
    ;
    break;}
case 94:
#line 678 "../config_gram.y"
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
    ;
    break;}
case 95:
#line 697 "../config_gram.y"
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
    ;
    break;}
case 96:
#line 720 "../config_gram.y"
{ 
      current_mem = avr_new_memtype(); 
      strcpy(current_mem->desc, strdup(yyvsp[0]->value.string)); 
      free_token(yyvsp[0]); 
    ;
    break;}
case 97:
#line 726 "../config_gram.y"
{ 
      ladd(current_part->mem, current_mem); 
      current_mem = NULL; 
    ;
    break;}
case 98:
#line 731 "../config_gram.y"
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
  ;
    break;}
case 103:
#line 760 "../config_gram.y"
{
      current_mem->paged = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    ;
    break;}
case 104:
#line 766 "../config_gram.y"
{
      current_mem->size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 105:
#line 773 "../config_gram.y"
{
      current_mem->page_size = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 106:
#line 779 "../config_gram.y"
{
      current_mem->num_pages = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 107:
#line 785 "../config_gram.y"
{
      current_mem->min_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 108:
#line 791 "../config_gram.y"
{
      current_mem->max_write_delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 109:
#line 797 "../config_gram.y"
{
      current_mem->pwroff_after_write = yyvsp[0]->primary == K_YES ? 1 : 0;
      free_token(yyvsp[0]);
    ;
    break;}
case 110:
#line 803 "../config_gram.y"
{
      current_mem->readback[0] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 111:
#line 809 "../config_gram.y"
{
      current_mem->readback[1] = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 112:
#line 816 "../config_gram.y"
{
      current_mem->mode = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 113:
#line 822 "../config_gram.y"
{
      current_mem->delay = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 114:
#line 828 "../config_gram.y"
{
      current_mem->blocksize = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 115:
#line 834 "../config_gram.y"
{
      current_mem->readsize = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 116:
#line 840 "../config_gram.y"
{
      current_mem->pollindex = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    ;
    break;}
case 117:
#line 846 "../config_gram.y"
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
  ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 862 "../config_gram.y"


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


