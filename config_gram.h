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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



