/*************************************************************************/
/*                                                                       */
/*                   Carnegie Mellon University and                      */
/*                Centre for Speech Technology Research                  */
/*                     University of Edinburgh, UK                       */
/*                       Copyright (c) 1998-2001                         */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  THE UNIVERSITY OF EDINBURGH, CARNEGIE MELLON UNIVERSITY AND THE      */
/*  CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES WITH REGARD TO     */
/*  THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY   */
/*  AND FITNESS, IN NO EVENT SHALL THE UNIVERSITY OF EDINBURGH, CARNEGIE */
/*  MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE FOR ANY SPECIAL,    */
/*  INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER          */
/*  RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN  AN ACTION   */
/*  OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF     */
/*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.       */
/*                                                                       */
/*******************************************************/
/**  Autogenerated phoneset trees for us    */
/*******************************************************/

#include "cst_string.h"
#include "cst_phoneset.h"

extern const cst_phoneset us_phoneset;

static const char * const us_featnames[] = {
 "vc",
 "vlng",
 "vheight",
 "vfront",
 "vrnd",
 "ctype",
 "cplace",
 "cvox",
 NULL };

static const char * const us_phonenames[] = {
 "aa",
 "ae",
 "ah",
 "ao",
 "aw",
 "ax",
 "axr",
 "ay",
 "b",
 "ch",
 "d",
 "dh",
 "dx",
 "eh",
 "el",
 "em",
 "en",
 "er",
 "ey",
 "f",
 "g",
 "hh",
 "hv",
 "ih",
 "iy",
 "jh",
 "k",
 "l",
 "m",
 "n",
 "nx",
 "ng",
 "ow",
 "oy",
 "p",
 "r",
 "s",
 "sh",
 "t",
 "th",
 "uh",
 "uw",
 "v",
 "w",
 "y",
 "z",
 "zh",
 "pau",
 "h#",
 "brth",
 NULL };

static const int us_fv_000[] = { 0, 1, 2, 2, 3, 4, 4, 4,   -1 };
static const int us_fv_001[] = { 0, 5, 2, 6, 3, 4, 4, 4,   -1 };
static const int us_fv_002[] = { 0, 5, 7, 7, 3, 4, 4, 4,   -1 };
static const int us_fv_003[] = { 0, 1, 2, 2, 0, 4, 4, 4,   -1 };
static const int us_fv_004[] = { 0, 8, 2, 7, 3, 4, 4, 4,   -1 };
static const int us_fv_005[] = { 0, 9, 7, 7, 3, 4, 4, 4,   -1 };
static const int us_fv_006[] = { 0, 9, 7, 7, 3, 10, 9, 0,   -1 };
static const int us_fv_007[] = { 0, 8, 2, 7, 3, 4, 4, 4,   -1 };
static const int us_fv_008[] = { 3, 4, 4, 4, 4, 5, 1, 0,   -1 };
static const int us_fv_009[] = { 3, 4, 4, 4, 4, 9, 11, 3,   -1 };
static const int us_fv_010[] = { 3, 4, 4, 4, 4, 5, 9, 0,   -1 };
static const int us_fv_011[] = { 3, 4, 4, 4, 4, 12, 8, 0,   -1 };
static const int us_fv_012[] = { 3, 9, 4, 4, 4, 5, 9, 0,   -1 };
static const int us_fv_013[] = { 0, 5, 7, 6, 3, 4, 4, 4,   -1 };
static const int us_fv_014[] = { 0, 5, 4, 4, 4, 1, 9, 0,   -1 };
static const int us_fv_015[] = { 0, 5, 4, 4, 4, 13, 1, 0,   -1 };
static const int us_fv_016[] = { 0, 5, 4, 4, 4, 13, 9, 0,   -1 };
static const int us_fv_017[] = { 0, 9, 7, 7, 3, 10, 4, 4,   -1 };
static const int us_fv_018[] = { 0, 8, 7, 6, 3, 4, 4, 4,   -1 };
static const int us_fv_019[] = { 3, 4, 4, 4, 4, 12, 14, 3,   -1 };
static const int us_fv_020[] = { 3, 4, 4, 4, 4, 5, 15, 0,   -1 };
static const int us_fv_021[] = { 3, 4, 4, 4, 4, 12, 16, 3,   -1 };
static const int us_fv_022[] = { 3, 4, 4, 4, 4, 12, 16, 0,   -1 };
static const int us_fv_023[] = { 0, 5, 6, 6, 3, 4, 4, 4,   -1 };
static const int us_fv_024[] = { 0, 1, 6, 6, 3, 4, 4, 4,   -1 };
static const int us_fv_025[] = { 3, 4, 4, 4, 4, 9, 11, 0,   -1 };
static const int us_fv_026[] = { 3, 4, 4, 4, 4, 5, 15, 3,   -1 };
static const int us_fv_027[] = { 3, 4, 4, 4, 4, 1, 9, 0,   -1 };
static const int us_fv_028[] = { 3, 4, 4, 4, 4, 13, 1, 0,   -1 };
static const int us_fv_029[] = { 3, 4, 4, 4, 4, 13, 9, 0,   -1 };
static const int us_fv_030[] = { 3, 4, 4, 4, 4, 13, 8, 0,   -1 };
static const int us_fv_031[] = { 3, 4, 4, 4, 4, 13, 15, 0,   -1 };
static const int us_fv_032[] = { 0, 8, 7, 2, 0, 4, 4, 4,   -1 };
static const int us_fv_033[] = { 0, 8, 7, 2, 0, 4, 4, 4,   -1 };
static const int us_fv_034[] = { 3, 4, 4, 4, 4, 5, 1, 3,   -1 };
static const int us_fv_035[] = { 3, 4, 4, 4, 4, 10, 9, 0,   -1 };
static const int us_fv_036[] = { 3, 4, 4, 4, 4, 12, 9, 3,   -1 };
static const int us_fv_037[] = { 3, 4, 4, 4, 4, 12, 11, 3,   -1 };
static const int us_fv_038[] = { 3, 4, 4, 4, 4, 5, 9, 3,   -1 };
static const int us_fv_039[] = { 3, 4, 4, 4, 4, 12, 8, 3,   -1 };
static const int us_fv_040[] = { 0, 5, 6, 2, 0, 4, 4, 4,   -1 };
static const int us_fv_041[] = { 0, 1, 6, 2, 0, 4, 4, 4,   -1 };
static const int us_fv_042[] = { 3, 4, 4, 4, 4, 12, 14, 0,   -1 };
static const int us_fv_043[] = { 3, 4, 4, 4, 4, 10, 1, 0,   -1 };
static const int us_fv_044[] = { 3, 4, 4, 4, 4, 10, 11, 0,   -1 };
static const int us_fv_045[] = { 3, 4, 4, 4, 4, 12, 9, 0,   -1 };
static const int us_fv_046[] = { 3, 4, 4, 4, 4, 12, 11, 0,   -1 };
static const int us_fv_047[] = { 3, 4, 4, 4, 4, 4, 4, 3,   -1 };
static const int us_fv_048[] = { 3, 4, 4, 4, 4, 4, 4, 3,   -1 };
static const int us_fv_049[] = { 3, 4, 4, 4, 4, 4, 4, 3,   -1 };
static const int us_fv_050[] = { 0 };

static const int * const us_fvtable[] = {
  us_fv_000, 
  us_fv_001, 
  us_fv_002, 
  us_fv_003, 
  us_fv_004, 
  us_fv_005, 
  us_fv_006, 
  us_fv_007, 
  us_fv_008, 
  us_fv_009, 
  us_fv_010, 
  us_fv_011, 
  us_fv_012, 
  us_fv_013, 
  us_fv_014, 
  us_fv_015, 
  us_fv_016, 
  us_fv_017, 
  us_fv_018, 
  us_fv_019, 
  us_fv_020, 
  us_fv_021, 
  us_fv_022, 
  us_fv_023, 
  us_fv_024, 
  us_fv_025, 
  us_fv_026, 
  us_fv_027, 
  us_fv_028, 
  us_fv_029, 
  us_fv_030, 
  us_fv_031, 
  us_fv_032, 
  us_fv_033, 
  us_fv_034, 
  us_fv_035, 
  us_fv_036, 
  us_fv_037, 
  us_fv_038, 
  us_fv_039, 
  us_fv_040, 
  us_fv_041, 
  us_fv_042, 
  us_fv_043, 
  us_fv_044, 
  us_fv_045, 
  us_fv_046, 
  us_fv_047, 
  us_fv_048, 
  us_fv_049, 
 us_fv_050 };

DEF_STATIC_CONST_VAL_STRING(featval_0,"+");
DEF_STATIC_CONST_VAL_STRING(featval_1,"l");
DEF_STATIC_CONST_VAL_STRING(featval_2,"3");
DEF_STATIC_CONST_VAL_STRING(featval_3,"-");
DEF_STATIC_CONST_VAL_STRING(featval_4,"0");
DEF_STATIC_CONST_VAL_STRING(featval_5,"s");
DEF_STATIC_CONST_VAL_STRING(featval_6,"1");
DEF_STATIC_CONST_VAL_STRING(featval_7,"2");
DEF_STATIC_CONST_VAL_STRING(featval_8,"d");
DEF_STATIC_CONST_VAL_STRING(featval_9,"a");
DEF_STATIC_CONST_VAL_STRING(featval_10,"r");
DEF_STATIC_CONST_VAL_STRING(featval_11,"p");
DEF_STATIC_CONST_VAL_STRING(featval_12,"f");
DEF_STATIC_CONST_VAL_STRING(featval_13,"n");
DEF_STATIC_CONST_VAL_STRING(featval_14,"b");
DEF_STATIC_CONST_VAL_STRING(featval_15,"v");
DEF_STATIC_CONST_VAL_STRING(featval_16,"g");

static const cst_val * const us_featvals[] = {
 (cst_val *)&featval_0,
 (cst_val *)&featval_1,
 (cst_val *)&featval_2,
 (cst_val *)&featval_3,
 (cst_val *)&featval_4,
 (cst_val *)&featval_5,
 (cst_val *)&featval_6,
 (cst_val *)&featval_7,
 (cst_val *)&featval_8,
 (cst_val *)&featval_9,
 (cst_val *)&featval_10,
 (cst_val *)&featval_11,
 (cst_val *)&featval_12,
 (cst_val *)&featval_13,
 (cst_val *)&featval_14,
 (cst_val *)&featval_15,
 (cst_val *)&featval_16,
 NULL };

const cst_phoneset us_phoneset = {
  "us",
  us_featnames,
  us_featvals,
  us_phonenames,
  "pau",
  50,
  us_fvtable,
  0  /* not freeable */
};
