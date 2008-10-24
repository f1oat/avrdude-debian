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

#ifndef BISON_CONFIG_GRAM_H
# define BISON_CONFIG_GRAM_H

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




#ifndef YYSTYPE
typedef int yystype;
# define YYSTYPE yystype
#endif

extern YYSTYPE yylval;


#endif /* not BISON_CONFIG_GRAM_H */

