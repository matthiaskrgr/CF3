
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int16_t x4 = -1;
static int32_t x16 = INT32_MIN;
volatile int32_t t3 = -1;
volatile int64_t x17 = INT64_MAX;
static volatile int8_t x26 = 1;
int8_t x28 = INT8_MIN;
volatile int32_t t6 = -601851087;
int64_t x32 = INT64_MIN;
volatile int32_t t7 = -369132;
static int64_t x35 = 40334LL;
int16_t x36 = 739;
static volatile int32_t t9 = 24417516;
volatile int32_t t12 = -39550;
int8_t x56 = -1;
static int64_t x60 = INT64_MIN;
static volatile int8_t x61 = 57;
int32_t t16 = -1;
static volatile int16_t x70 = -1;
static int8_t x71 = -1;
static int64_t x79 = -2386924749550013LL;
uint64_t x92 = 8990851016097212LLU;
static int16_t x94 = INT16_MAX;
static int32_t x105 = 1;
static uint32_t x110 = UINT32_MAX;
volatile int64_t x115 = -3452LL;
int8_t x121 = 0;
static volatile uint64_t x132 = 135LLU;
volatile int32_t t33 = 114;
static uint64_t x141 = UINT64_MAX;
int64_t x145 = INT64_MAX;
volatile int32_t x147 = INT32_MIN;
uint16_t x150 = 5761U;
volatile int16_t x151 = 52;
volatile int32_t t37 = 846487;
static volatile int64_t x155 = 50457507145360LL;
int8_t x163 = -4;
static int32_t x167 = INT32_MIN;
uint64_t x168 = UINT64_MAX;
static uint32_t x170 = 1U;
int32_t x174 = -274730022;
volatile int64_t x177 = INT64_MAX;
int32_t t44 = 389308087;
uint64_t x182 = 3585237LLU;
static volatile uint8_t x183 = 5U;
static int8_t x184 = 3;
volatile int32_t t45 = -10972348;
int8_t x192 = 0;
uint8_t x207 = 1U;
uint64_t x209 = 1979784688019LLU;
uint16_t x214 = UINT16_MAX;
static uint64_t x219 = 7096LLU;
uint8_t x220 = UINT8_MAX;
uint8_t x222 = 27U;
int16_t x232 = INT16_MAX;
static uint64_t x235 = 3062166937968LLU;
uint16_t x240 = 7628U;
static uint8_t x241 = 0U;
int32_t t60 = -26314;
uint64_t x248 = 602LLU;
int8_t x252 = INT8_MIN;
uint8_t x255 = 2U;
uint8_t x256 = UINT8_MAX;
volatile uint64_t x257 = 3477222900LLU;
uint32_t x258 = UINT32_MAX;
uint16_t x262 = 644U;
volatile int8_t x263 = 1;
static int32_t x264 = INT32_MIN;
uint16_t x268 = UINT16_MAX;
uint32_t x269 = 3493041U;
int8_t x270 = INT8_MIN;
volatile int64_t x273 = -1LL;
volatile int64_t x274 = INT64_MIN;
int8_t x276 = 13;
static int16_t x280 = INT16_MIN;
int64_t x292 = INT64_MAX;
int32_t t72 = 14565;
static volatile int32_t x299 = INT32_MIN;
int32_t t74 = -2724750;
int64_t x306 = -146LL;
int32_t x308 = INT32_MIN;
volatile int32_t x311 = 181223;
volatile int32_t t78 = -89467400;
int64_t x331 = -1LL;
volatile int16_t x336 = INT16_MIN;
int16_t x338 = INT16_MAX;
static int32_t x341 = INT32_MIN;
volatile int32_t t89 = -463497;
int8_t x368 = -1;
volatile int32_t t91 = -999627774;
int32_t x369 = INT32_MIN;
int32_t x372 = INT32_MIN;
int64_t x377 = -1LL;
volatile uint64_t x382 = 53889LLU;
int32_t t95 = 6064023;
int16_t x385 = -1;
uint16_t x386 = 2011U;
int8_t x391 = -1;
uint16_t x394 = 73U;
volatile int16_t x395 = INT16_MIN;
uint64_t x396 = 464858150LLU;
volatile int8_t x398 = INT8_MIN;
volatile int16_t x405 = -1;
int32_t x407 = 0;
int64_t x414 = INT64_MIN;
uint16_t x415 = UINT16_MAX;
uint16_t x426 = 31U;
volatile int32_t x427 = INT32_MAX;
volatile int32_t x430 = -230255;
volatile int32_t t107 = 1536812;
int64_t x438 = INT64_MIN;
volatile int64_t x447 = -2597021069LL;
int32_t t111 = -314592;
int32_t x449 = INT32_MIN;
static volatile int32_t t112 = 477;
int32_t x460 = INT32_MIN;
volatile int32_t t117 = -2492672;
int64_t x474 = INT64_MIN;
int32_t x475 = INT32_MAX;
volatile uint64_t x476 = 375003841LLU;
int32_t t118 = 0;
int16_t x478 = -1;
int8_t x489 = INT8_MIN;
int16_t x490 = -32;
uint8_t x496 = UINT8_MAX;
volatile int32_t t123 = 7043035;
int32_t t124 = 3548542;
volatile uint8_t x517 = 16U;
static int32_t x519 = -1;
uint64_t x522 = UINT64_MAX;
volatile int16_t x526 = -243;
static int32_t t131 = -27;
static int64_t x536 = -1LL;
volatile int32_t t134 = -665232291;
int64_t x544 = INT64_MAX;
static volatile uint16_t x545 = 187U;
volatile int32_t t136 = 16;
uint32_t x549 = 206U;
int16_t x554 = -1;
int8_t x558 = INT8_MIN;
static int64_t x560 = -108745016LL;
int16_t x564 = INT16_MIN;
volatile int32_t t142 = 17727;
int32_t x577 = INT32_MIN;
int64_t x579 = INT64_MIN;
static volatile int8_t x580 = INT8_MAX;
int16_t x583 = INT16_MAX;
static int32_t t145 = 127;
int16_t x589 = -1;
uint32_t x590 = 1009U;
int16_t x597 = INT16_MAX;
uint64_t x608 = 13966903536LLU;
static volatile int32_t t152 = -73;
int32_t x613 = INT32_MIN;
static uint32_t x614 = 3837661U;
int16_t x615 = -30;
static uint16_t x616 = UINT16_MAX;
int32_t t153 = 148;
uint64_t x621 = UINT64_MAX;
int64_t x622 = INT64_MIN;
int32_t t155 = 160550716;
int16_t x627 = INT16_MIN;
static volatile int32_t t156 = 872;
volatile int32_t t158 = -14;
int32_t x641 = INT32_MIN;
static uint8_t x643 = UINT8_MAX;
uint32_t x648 = 769355U;
uint16_t x652 = 0U;
static int32_t t163 = 41329;
int64_t x660 = -3418419147LL;
static int32_t t164 = 63980368;
uint64_t x666 = 8940LLU;
static int64_t x667 = INT64_MIN;
int64_t x674 = 3758586171LL;
static int32_t x679 = -310614;
int64_t x684 = INT64_MIN;
volatile int32_t t170 = -6052;
int64_t x685 = INT64_MAX;
static int32_t t172 = -1955567;
uint16_t x694 = UINT16_MAX;
int8_t x695 = INT8_MIN;
volatile int32_t t173 = -12;
int16_t x697 = INT16_MIN;
int32_t x699 = -1;
static uint32_t x714 = 5100876U;
int16_t x717 = INT16_MAX;
volatile int16_t x720 = -8377;
volatile int32_t t179 = 86702;
volatile int32_t t180 = -100264;
int32_t x729 = 989821;
int8_t x732 = 30;
int16_t x737 = INT16_MIN;
int32_t t184 = -31884;
int8_t x742 = -61;
static uint32_t x747 = 1133697906U;
int8_t x753 = 2;
static uint64_t x754 = 9701444894388786LLU;
int32_t t188 = 10996252;
int64_t x758 = -674541847174689LL;
int32_t t189 = 1;
static int16_t x765 = 0;
int32_t x767 = -1;
static int64_t x768 = INT64_MAX;
int8_t x773 = INT8_MIN;
uint8_t x781 = UINT8_MAX;
uint64_t x784 = UINT64_MAX;
static uint8_t x788 = UINT8_MAX;
int64_t x789 = INT64_MIN;
int32_t t197 = -47;
int32_t x795 = -1;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	uint16_t x3 = 2001U;
	int32_t t0 = 57;

    t0 = (x1<=((x2&x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	static volatile int64_t x6 = -1LL;
	volatile uint32_t x7 = 1402097U;
	static int16_t x8 = -1;
	int32_t t1 = -1305;

    t1 = (x5<=((x6&x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	uint32_t x10 = 23U;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = 4116678LL;
	static int32_t t2 = -18625;

    t2 = (x9<=((x10&x11)&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 2U;

    t3 = (x13<=((x14&x15)&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = -1;
	static int64_t x19 = -1LL;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 225714;

    t4 = (x17<=((x18&x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1296104U;
	int16_t x22 = -237;
	int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 371531;

    t5 = (x21<=((x22&x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile int32_t x27 = INT32_MAX;

    t6 = (x25<=((x26&x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 1042320352745268LLU;
	static int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;

    t7 = (x29<=((x30&x31)&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 5U;
	int64_t x34 = -1LL;
	volatile int32_t t8 = 1925;

    t8 = (x33<=((x34&x35)&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 1U;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = 1460583LLU;
	static int16_t x40 = -1;

    t9 = (x37<=((x38&x39)&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 61U;
	uint64_t x42 = UINT64_MAX;
	int16_t x43 = INT16_MAX;
	volatile uint8_t x44 = 35U;
	int32_t t10 = 664614;

    t10 = (x41<=((x42&x43)&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -6285LL;
	static volatile int8_t x46 = -5;
	int16_t x47 = 1;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -11314710;

    t11 = (x45<=((x46&x47)&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 31U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	uint64_t x52 = 1239901376639LLU;

    t12 = (x49<=((x50&x51)&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	int16_t x54 = -1;
	volatile uint16_t x55 = 169U;
	volatile int32_t t13 = 30;

    t13 = (x53<=((x54&x55)&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = UINT16_MAX;
	volatile int64_t x58 = INT64_MIN;
	int32_t x59 = 2;
	static int32_t t14 = -549;

    t14 = (x57<=((x58&x59)&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x62 = 9U;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	static int32_t t15 = -15293372;

    t15 = (x61<=((x62&x63)&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x66 = 1000;
	static volatile int8_t x67 = -1;
	volatile uint16_t x68 = UINT16_MAX;

    t16 = (x65<=((x66&x67)&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x69 = 3U;
	int64_t x72 = INT64_MIN;
	static int32_t t17 = -21;

    t17 = (x69<=((x70&x71)&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	static volatile int8_t x75 = -8;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 0;

    t18 = (x73<=((x74&x75)&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	uint8_t x78 = 2U;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = -1;

    t19 = (x77<=((x78&x79)&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x81 = 89U;
	uint16_t x82 = 4U;
	uint32_t x83 = 741153U;
	static uint16_t x84 = 3U;
	volatile int32_t t20 = -19548;

    t20 = (x81<=((x82&x83)&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MAX;
	uint16_t x86 = UINT16_MAX;
	static int16_t x87 = INT16_MAX;
	int32_t x88 = 6741244;
	volatile int32_t t21 = 116734;

    t21 = (x85<=((x86&x87)&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t t22 = -822863;

    t22 = (x89<=((x90&x91)&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -3744;
	volatile uint8_t x95 = 0U;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -156;

    t23 = (x93<=((x94&x95)&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 20;
	static volatile int32_t x98 = INT32_MAX;
	int16_t x99 = 55;
	static int32_t x100 = 439688725;
	volatile int32_t t24 = -41862;

    t24 = (x97<=((x98&x99)&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = 3U;
	int8_t x102 = 1;
	int16_t x103 = -1;
	uint16_t x104 = 680U;
	int32_t t25 = -42553;

    t25 = (x101<=((x102&x103)&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x106 = 897222394473LLU;
	int32_t x107 = INT32_MAX;
	uint16_t x108 = 275U;
	int32_t t26 = 1134561;

    t26 = (x105<=((x106&x107)&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	int16_t x111 = INT16_MAX;
	volatile int64_t x112 = INT64_MIN;
	int32_t t27 = 545;

    t27 = (x109<=((x110&x111)&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	static int16_t x114 = 233;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = 433;

    t28 = (x113<=((x114&x115)&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = 0;
	int8_t x118 = -1;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t29 = 77765;

    t29 = (x117<=((x118&x119)&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	volatile uint16_t x124 = UINT16_MAX;
	int32_t t30 = 5193812;

    t30 = (x121<=((x122&x123)&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = -55;
	uint64_t x126 = 2046625LLU;
	volatile uint8_t x127 = 1U;
	uint16_t x128 = 1U;
	int32_t t31 = 343;

    t31 = (x125<=((x126&x127)&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	uint8_t x130 = 32U;
	int32_t x131 = INT32_MAX;
	static int32_t t32 = -14480;

    t32 = (x129<=((x130&x131)&x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	uint32_t x134 = UINT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MAX;

    t33 = (x133<=((x134&x135)&x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = -5;
	int16_t x138 = INT16_MAX;
	static int8_t x139 = -1;
	static uint32_t x140 = 57U;
	volatile int32_t t34 = -913222681;

    t34 = (x137<=((x138&x139)&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -1;
	int16_t x143 = -1;
	uint8_t x144 = 70U;
	static int32_t t35 = -64073;

    t35 = (x141<=((x142&x143)&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = UINT16_MAX;
	uint32_t x148 = 127140896U;
	static volatile int32_t t36 = -14763531;

    t36 = (x145<=((x146&x147)&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	static int64_t x152 = INT64_MIN;

    t37 = (x149<=((x150&x151)&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	static int64_t x154 = INT64_MAX;
	int64_t x156 = -83020919444LL;
	volatile int32_t t38 = -12539;

    t38 = (x153<=((x154&x155)&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 0;
	volatile int16_t x158 = INT16_MIN;
	static uint16_t x159 = 124U;
	static int32_t x160 = -5;
	int32_t t39 = 4511;

    t39 = (x157<=((x158&x159)&x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	volatile int16_t x162 = -15407;
	uint32_t x164 = 278867179U;
	int32_t t40 = -4245799;

    t40 = (x161<=((x162&x163)&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -706780843676224LL;
	int8_t x166 = -1;
	volatile int32_t t41 = 202667545;

    t41 = (x165<=((x166&x167)&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 157243U;
	uint16_t x171 = 0U;
	int8_t x172 = INT8_MIN;
	static int32_t t42 = 16394363;

    t42 = (x169<=((x170&x171)&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -157046;
	volatile int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -703056;

    t43 = (x173<=((x174&x175)&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 986627879542360871LLU;
	volatile int16_t x179 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;

    t44 = (x177<=((x178&x179)&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 416549279868LL;

    t45 = (x181<=((x182&x183)&x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	volatile uint16_t x186 = 0U;
	int64_t x187 = -653LL;
	int64_t x188 = 4462076596775429LL;
	volatile int32_t t46 = 3512;

    t46 = (x185<=((x186&x187)&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	volatile int32_t x191 = INT32_MIN;
	static int32_t t47 = -38;

    t47 = (x189<=((x190&x191)&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 0U;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = -1LL;
	uint32_t x196 = 2752770U;
	volatile int32_t t48 = 3765477;

    t48 = (x193<=((x194&x195)&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	static volatile int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	int16_t x200 = 1;
	int32_t t49 = 14960;

    t49 = (x197<=((x198&x199)&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 5730U;
	volatile uint16_t x202 = 0U;
	volatile int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -644319;

    t50 = (x201<=((x202&x203)&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	uint8_t x206 = 1U;
	volatile int64_t x208 = INT64_MAX;
	static int32_t t51 = 1326;

    t51 = (x205<=((x206&x207)&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x210 = UINT32_MAX;
	static int32_t x211 = -120174424;
	volatile int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -249;

    t52 = (x209<=((x210&x211)&x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 29U;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 117U;
	static int32_t t53 = -789005001;

    t53 = (x213<=((x214&x215)&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 44875801U;
	volatile int32_t t54 = -1452;

    t54 = (x217<=((x218&x219)&x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	int64_t x223 = 2483038971426LL;
	int16_t x224 = 86;
	int32_t t55 = -1;

    t55 = (x221<=((x222&x223)&x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = -1;
	volatile int32_t t56 = 149510309;

    t56 = (x225<=((x226&x227)&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -1LL;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = INT8_MIN;
	static volatile int32_t t57 = -113230;

    t57 = (x229<=((x230&x231)&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 2578U;
	static int16_t x234 = INT16_MIN;
	int16_t x236 = -1;
	volatile int32_t t58 = -465499984;

    t58 = (x233<=((x234&x235)&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 21858567U;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MAX;
	volatile int32_t t59 = -1;

    t59 = (x237<=((x238&x239)&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = INT64_MIN;
	static uint32_t x243 = UINT32_MAX;
	uint8_t x244 = 74U;

    t60 = (x241<=((x242&x243)&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = -1488;
	volatile int32_t t61 = -141933248;

    t61 = (x245<=((x246&x247)&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MIN;
	uint32_t x251 = 4936912U;
	volatile int32_t t62 = 18681980;

    t62 = (x249<=((x250&x251)&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 98U;
	int8_t x254 = -1;
	volatile int32_t t63 = -920301;

    t63 = (x253<=((x254&x255)&x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 6689181;

    t64 = (x257<=((x258&x259)&x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x261 = 1549124LLU;
	int32_t t65 = 805;

    t65 = (x261<=((x262&x263)&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 26459U;
	static volatile int32_t x266 = INT32_MAX;
	uint64_t x267 = 1LLU;
	int32_t t66 = 11;

    t66 = (x265<=((x266&x267)&x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x271 = 3U;
	uint32_t x272 = 331U;
	volatile int32_t t67 = -51023865;

    t67 = (x269<=((x270&x271)&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x275 = INT64_MIN;
	int32_t t68 = -216;

    t68 = (x273<=((x274&x275)&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 52;
	static int8_t x278 = 5;
	int8_t x279 = 0;
	static int32_t t69 = -368074510;

    t69 = (x277<=((x278&x279)&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -1;
	static int8_t x282 = -1;
	int64_t x283 = -1LL;
	static int16_t x284 = -1;
	int32_t t70 = 78527671;

    t70 = (x281<=((x282&x283)&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int32_t x286 = INT32_MAX;
	int32_t x287 = -22341;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 9060184;

    t71 = (x285<=((x286&x287)&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	static int64_t x290 = 776699327LL;
	int64_t x291 = INT64_MAX;

    t72 = (x289<=((x290&x291)&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 0U;
	int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MAX;
	int32_t t73 = -65377950;

    t73 = (x293<=((x294&x295)&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 2U;
	uint8_t x298 = UINT8_MAX;
	uint32_t x300 = UINT32_MAX;

    t74 = (x297<=((x298&x299)&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = -1;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	volatile int8_t x304 = 43;
	volatile int32_t t75 = 1;

    t75 = (x301<=((x302&x303)&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -12;
	uint32_t x307 = 115U;
	volatile int32_t t76 = -3;

    t76 = (x305<=((x306&x307)&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = INT32_MAX;
	int8_t x310 = -1;
	uint32_t x312 = UINT32_MAX;
	int32_t t77 = 125800;

    t77 = (x309<=((x310&x311)&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;

    t78 = (x313<=((x314&x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 1;
	volatile int64_t x318 = 194994264LL;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -1981962;

    t79 = (x317<=((x318&x319)&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MAX;
	static int16_t x322 = -1;
	volatile uint16_t x323 = 1773U;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = 379;

    t80 = (x321<=((x322&x323)&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	static int8_t x326 = 1;
	int32_t x327 = INT32_MIN;
	volatile int64_t x328 = INT64_MAX;
	int32_t t81 = -62655071;

    t81 = (x325<=((x326&x327)&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 1132U;
	uint64_t x330 = 550585685LLU;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = -141553124;

    t82 = (x329<=((x330&x331)&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 35U;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	int32_t t83 = 22317157;

    t83 = (x333<=((x334&x335)&x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MAX;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = 14U;
	volatile int32_t t84 = 452007;

    t84 = (x337<=((x338&x339)&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x342 = UINT32_MAX;
	volatile uint64_t x343 = 97880888430LLU;
	int8_t x344 = -1;
	volatile int32_t t85 = 101882;

    t85 = (x341<=((x342&x343)&x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	int32_t x346 = INT32_MAX;
	uint8_t x347 = 0U;
	int64_t x348 = INT64_MAX;
	static volatile int32_t t86 = -682610320;

    t86 = (x345<=((x346&x347)&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile int32_t x350 = -27091;
	int8_t x351 = -1;
	volatile uint16_t x352 = UINT16_MAX;
	static int32_t t87 = -145;

    t87 = (x349<=((x350&x351)&x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 14156;
	int8_t x354 = -13;
	int8_t x355 = -5;
	int16_t x356 = -1;
	volatile int32_t t88 = -221501600;

    t88 = (x353<=((x354&x355)&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	int16_t x359 = 262;
	uint32_t x360 = 802366415U;

    t89 = (x357<=((x358&x359)&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x362 = 37849477473831LL;
	uint32_t x363 = 233032312U;
	int32_t x364 = 3890809;
	static volatile int32_t t90 = -781;

    t90 = (x361<=((x362&x363)&x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 0;
	volatile uint64_t x366 = 52054656909LLU;
	int32_t x367 = INT32_MIN;

    t91 = (x365<=((x366&x367)&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = 7U;
	uint8_t x371 = 2U;
	static int32_t t92 = -7;

    t92 = (x369<=((x370&x371)&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 4737754717323246LLU;
	int8_t x374 = 19;
	int32_t x375 = -2;
	uint8_t x376 = 3U;
	int32_t t93 = -4878683;

    t93 = (x373<=((x374&x375)&x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x378 = 107U;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	int32_t t94 = 49594957;

    t94 = (x377<=((x378&x379)&x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x381 = -62013;
	uint16_t x383 = 81U;
	static volatile int32_t x384 = INT32_MIN;

    t95 = (x381<=((x382&x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x387 = -1LL;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -14;

    t96 = (x385<=((x386&x387)&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 22;
	int8_t x390 = INT8_MIN;
	int8_t x392 = -1;
	int32_t t97 = -59;

    t97 = (x389<=((x390&x391)&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = 325LL;
	int32_t t98 = 0;

    t98 = (x393<=((x394&x395)&x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 150;
	int64_t x399 = 3571117438LL;
	uint64_t x400 = 328278LLU;
	volatile int32_t t99 = 152249;

    t99 = (x397<=((x398&x399)&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	static int16_t x402 = 1;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t100 = 9838;

    t100 = (x401<=((x402&x403)&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x406 = 118053;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = -2;

    t101 = (x405<=((x406&x407)&x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	uint8_t x410 = UINT8_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	static uint32_t x412 = 9190U;
	int32_t t102 = -634;

    t102 = (x409<=((x410&x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 104;
	int16_t x416 = INT16_MAX;
	volatile int32_t t103 = -685388711;

    t103 = (x413<=((x414&x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = 64U;
	int64_t x420 = INT64_MIN;
	int32_t t104 = 24512;

    t104 = (x417<=((x418&x419)&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	int64_t x422 = -12152908221377LL;
	int8_t x423 = 10;
	int8_t x424 = -1;
	volatile int32_t t105 = 94137;

    t105 = (x421<=((x422&x423)&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = INT32_MIN;
	static uint16_t x428 = 3U;
	static volatile int32_t t106 = 866419758;

    t106 = (x425<=((x426&x427)&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = 0U;
	uint64_t x431 = 3LLU;
	int16_t x432 = -96;

    t107 = (x429<=((x430&x431)&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MAX;
	int64_t x435 = INT64_MIN;
	volatile uint64_t x436 = 69188LLU;
	int32_t t108 = -1;

    t108 = (x433<=((x434&x435)&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x439 = -1LL;
	int64_t x440 = 127681LL;
	int32_t t109 = -873;

    t109 = (x437<=((x438&x439)&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x441 = 302326U;
	uint16_t x442 = 100U;
	uint64_t x443 = 16609243LLU;
	static volatile int8_t x444 = -26;
	volatile int32_t t110 = -33;

    t110 = (x441<=((x442&x443)&x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = 98859484588LLU;
	int64_t x446 = INT64_MIN;
	uint8_t x448 = 40U;

    t111 = (x445<=((x446&x447)&x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x450 = 1U;
	int16_t x451 = INT16_MIN;
	volatile int64_t x452 = INT64_MAX;

    t112 = (x449<=((x450&x451)&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MAX;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	int32_t t113 = 5639;

    t113 = (x453<=((x454&x455)&x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = -1;
	volatile uint16_t x458 = UINT16_MAX;
	volatile int64_t x459 = INT64_MIN;
	volatile int32_t t114 = 30;

    t114 = (x457<=((x458&x459)&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 2U;
	volatile int8_t x462 = -3;
	int8_t x463 = INT8_MIN;
	uint8_t x464 = 0U;
	volatile int32_t t115 = -40620;

    t115 = (x461<=((x462&x463)&x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	int32_t x466 = -1745;
	volatile uint32_t x467 = 147U;
	uint16_t x468 = 9U;
	int32_t t116 = -5;

    t116 = (x465<=((x466&x467)&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MAX;
	uint32_t x472 = 46297925U;

    t117 = (x469<=((x470&x471)&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;

    t118 = (x473<=((x474&x475)&x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = 20LLU;
	int16_t x479 = -23;
	static int8_t x480 = -6;
	int32_t t119 = 164030;

    t119 = (x477<=((x478&x479)&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -63;
	uint16_t x482 = 27843U;
	static int64_t x483 = INT64_MIN;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -168;

    t120 = (x481<=((x482&x483)&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 1U;
	int64_t x486 = -247157422429268268LL;
	int64_t x487 = 107670953553333828LL;
	volatile int16_t x488 = -3;
	static int32_t t121 = 20910583;

    t121 = (x485<=((x486&x487)&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x491 = INT8_MIN;
	volatile uint32_t x492 = UINT32_MAX;
	static int32_t t122 = 291878157;

    t122 = (x489<=((x490&x491)&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 3293U;
	volatile int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MIN;

    t123 = (x493<=((x494&x495)&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 48U;
	static volatile int64_t x498 = -1LL;
	uint8_t x499 = 31U;
	uint64_t x500 = UINT64_MAX;

    t124 = (x497<=((x498&x499)&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	volatile int8_t x502 = 0;
	int32_t x503 = -1;
	uint32_t x504 = UINT32_MAX;
	int32_t t125 = 52;

    t125 = (x501<=((x502&x503)&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	int8_t x506 = 1;
	volatile int8_t x507 = INT8_MIN;
	int32_t x508 = 1884;
	int32_t t126 = -29532;

    t126 = (x505<=((x506&x507)&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	static int16_t x510 = -1;
	volatile uint16_t x511 = UINT16_MAX;
	static volatile int8_t x512 = INT8_MIN;
	int32_t t127 = -28122;

    t127 = (x509<=((x510&x511)&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 2117U;
	volatile int8_t x514 = INT8_MIN;
	static uint64_t x515 = UINT64_MAX;
	int8_t x516 = -23;
	volatile int32_t t128 = -6;

    t128 = (x513<=((x514&x515)&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x518 = 63U;
	uint8_t x520 = 4U;
	int32_t t129 = 117878479;

    t129 = (x517<=((x518&x519)&x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x523 = INT64_MIN;
	uint8_t x524 = 6U;
	static volatile int32_t t130 = 805654858;

    t130 = (x521<=((x522&x523)&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = INT8_MAX;
	volatile int32_t x527 = INT32_MIN;
	uint16_t x528 = UINT16_MAX;

    t131 = (x525<=((x526&x527)&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	static int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MAX;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -293140;

    t132 = (x529<=((x530&x531)&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 5921724U;
	volatile int64_t x534 = -1LL;
	volatile int64_t x535 = INT64_MIN;
	int32_t t133 = -1;

    t133 = (x533<=((x534&x535)&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	int32_t x538 = INT32_MIN;
	volatile int32_t x539 = -1;
	volatile int16_t x540 = INT16_MIN;

    t134 = (x537<=((x538&x539)&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	int8_t x542 = -8;
	volatile int32_t x543 = -316;
	volatile int32_t t135 = 7546797;

    t135 = (x541<=((x542&x543)&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x546 = UINT64_MAX;
	static int32_t x547 = INT32_MIN;
	uint32_t x548 = UINT32_MAX;

    t136 = (x545<=((x546&x547)&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x550 = 8095U;
	static int16_t x551 = INT16_MIN;
	int32_t x552 = -17528676;
	static volatile int32_t t137 = -58610617;

    t137 = (x549<=((x550&x551)&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MIN;
	uint32_t x555 = UINT32_MAX;
	int32_t x556 = -1;
	static int32_t t138 = -69579343;

    t138 = (x553<=((x554&x555)&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x557 = 68U;
	static uint16_t x559 = UINT16_MAX;
	int32_t t139 = 532116;

    t139 = (x557<=((x558&x559)&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 9923985LLU;
	volatile uint32_t x562 = UINT32_MAX;
	volatile int16_t x563 = INT16_MAX;
	int32_t t140 = 12561553;

    t140 = (x561<=((x562&x563)&x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	static volatile int8_t x566 = INT8_MIN;
	volatile uint8_t x567 = 74U;
	int32_t x568 = -1;
	volatile int32_t t141 = 61887914;

    t141 = (x565<=((x566&x567)&x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	uint16_t x570 = 770U;
	static uint8_t x571 = UINT8_MAX;
	int64_t x572 = INT64_MIN;

    t142 = (x569<=((x570&x571)&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -3484;
	int8_t x574 = 1;
	int64_t x575 = INT64_MAX;
	int16_t x576 = -323;
	int32_t t143 = 3505;

    t143 = (x573<=((x574&x575)&x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x578 = INT64_MIN;
	int32_t t144 = -10602676;

    t144 = (x577<=((x578&x579)&x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	uint8_t x582 = UINT8_MAX;
	int64_t x584 = INT64_MIN;

    t145 = (x581<=((x582&x583)&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = INT32_MIN;
	int16_t x587 = 0;
	uint16_t x588 = UINT16_MAX;
	static volatile int32_t t146 = -153;

    t146 = (x585<=((x586&x587)&x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MIN;
	int32_t t147 = -55773096;

    t147 = (x589<=((x590&x591)&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1011453260672379826LLU;
	int16_t x594 = INT16_MIN;
	int8_t x595 = INT8_MAX;
	uint8_t x596 = 42U;
	static volatile int32_t t148 = 622663079;

    t148 = (x593<=((x594&x595)&x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x598 = INT8_MIN;
	static uint8_t x599 = 7U;
	int8_t x600 = 6;
	volatile int32_t t149 = 163644452;

    t149 = (x597<=((x598&x599)&x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint64_t x602 = 7758336804294593540LLU;
	int64_t x603 = -1LL;
	volatile uint16_t x604 = 3U;
	volatile int32_t t150 = -84726613;

    t150 = (x601<=((x602&x603)&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int16_t x606 = INT16_MIN;
	static int16_t x607 = INT16_MAX;
	volatile int32_t t151 = -3;

    t151 = (x605<=((x606&x607)&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = -1;
	int8_t x610 = INT8_MIN;
	static volatile uint64_t x611 = 2263456259290671LLU;
	uint64_t x612 = 119LLU;

    t152 = (x609<=((x610&x611)&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    

    t153 = (x613<=((x614&x615)&x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 62U;
	volatile uint8_t x618 = 31U;
	uint8_t x619 = 2U;
	int64_t x620 = INT64_MIN;
	static int32_t t154 = 14199;

    t154 = (x617<=((x618&x619)&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;

    t155 = (x621<=((x622&x623)&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int64_t x626 = 25927818LL;
	int64_t x628 = -1LL;

    t156 = (x625<=((x626&x627)&x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 22428478LLU;
	int32_t x630 = -1012630589;
	int32_t x631 = -132503;
	uint8_t x632 = 0U;
	int32_t t157 = 13134104;

    t157 = (x629<=((x630&x631)&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x633 = -1;
	volatile int32_t x634 = INT32_MAX;
	volatile int8_t x635 = -1;
	int16_t x636 = INT16_MAX;

    t158 = (x633<=((x634&x635)&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	volatile uint32_t x638 = UINT32_MAX;
	static int8_t x639 = 1;
	volatile int64_t x640 = -1LL;
	volatile int32_t t159 = -8499;

    t159 = (x637<=((x638&x639)&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x642 = -1LL;
	int8_t x644 = -1;
	int32_t t160 = 183423154;

    t160 = (x641<=((x642&x643)&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	uint64_t x646 = 94LLU;
	uint32_t x647 = 1408393749U;
	static int32_t t161 = 2684;

    t161 = (x645<=((x646&x647)&x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	uint8_t x650 = 3U;
	uint8_t x651 = 75U;
	volatile int32_t t162 = 345;

    t162 = (x649<=((x650&x651)&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = -1LL;
	static uint64_t x654 = 4LLU;
	volatile int8_t x655 = -57;
	int16_t x656 = INT16_MIN;

    t163 = (x653<=((x654&x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 30;
	volatile int8_t x658 = -1;
	uint64_t x659 = 2114595642452LLU;

    t164 = (x657<=((x658&x659)&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -49;
	uint8_t x662 = 3U;
	volatile int64_t x663 = INT64_MIN;
	static uint64_t x664 = 11366041LLU;
	int32_t t165 = -5408;

    t165 = (x661<=((x662&x663)&x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	volatile int64_t x668 = INT64_MIN;
	int32_t t166 = -9;

    t166 = (x665<=((x666&x667)&x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x669 = 8U;
	static int8_t x670 = -1;
	int16_t x671 = 7166;
	int16_t x672 = -1;
	static int32_t t167 = -8498352;

    t167 = (x669<=((x670&x671)&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	int64_t x675 = -1LL;
	volatile int16_t x676 = -732;
	int32_t t168 = -3635319;

    t168 = (x673<=((x674&x675)&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static uint16_t x678 = 6026U;
	volatile int64_t x680 = -114LL;
	volatile int32_t t169 = -122;

    t169 = (x677<=((x678&x679)&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	static int8_t x682 = -1;
	int8_t x683 = INT8_MIN;

    t170 = (x681<=((x682&x683)&x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x686 = UINT32_MAX;
	volatile int8_t x687 = INT8_MAX;
	int16_t x688 = INT16_MAX;
	int32_t t171 = -8445;

    t171 = (x685<=((x686&x687)&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	int8_t x690 = -7;
	uint32_t x691 = 1913745U;
	static uint32_t x692 = 2587665U;

    t172 = (x689<=((x690&x691)&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 3891491LLU;
	static uint64_t x696 = 12790357367441065LLU;

    t173 = (x693<=((x694&x695)&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	int16_t x700 = 78;
	int32_t t174 = 208;

    t174 = (x697<=((x698&x699)&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 688017U;
	int64_t x702 = 26262114976LL;
	static int8_t x703 = INT8_MAX;
	uint16_t x704 = 0U;
	volatile int32_t t175 = -29640;

    t175 = (x701<=((x702&x703)&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -1LL;
	int16_t x706 = 1454;
	static uint8_t x707 = UINT8_MAX;
	uint64_t x708 = UINT64_MAX;
	int32_t t176 = -4;

    t176 = (x705<=((x706&x707)&x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = -1;
	int32_t x710 = -74;
	static int16_t x711 = 1670;
	uint16_t x712 = 16031U;
	volatile int32_t t177 = 4;

    t177 = (x709<=((x710&x711)&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 4LL;
	static volatile int16_t x715 = -47;
	uint8_t x716 = 3U;
	volatile int32_t t178 = -69160;

    t178 = (x713<=((x714&x715)&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x718 = 22;
	static uint8_t x719 = 7U;

    t179 = (x717<=((x718&x719)&x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int8_t x722 = -1;
	volatile int16_t x723 = INT16_MIN;
	static int64_t x724 = INT64_MIN;

    t180 = (x721<=((x722&x723)&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = 4986;
	uint32_t x726 = UINT32_MAX;
	int32_t x727 = INT32_MIN;
	int32_t x728 = INT32_MAX;
	int32_t t181 = 50345183;

    t181 = (x725<=((x726&x727)&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = INT32_MAX;
	int8_t x731 = -27;
	int32_t t182 = -14832663;

    t182 = (x729<=((x730&x731)&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -11545883912904993LL;
	int8_t x734 = -1;
	static int32_t x735 = INT32_MIN;
	int8_t x736 = INT8_MAX;
	int32_t t183 = 61;

    t183 = (x733<=((x734&x735)&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x738 = UINT16_MAX;
	int32_t x739 = INT32_MIN;
	int64_t x740 = -1LL;

    t184 = (x737<=((x738&x739)&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 7LLU;
	static volatile int8_t x743 = 2;
	int32_t x744 = -1;
	int32_t t185 = -30;

    t185 = (x741<=((x742&x743)&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 23553693U;
	int16_t x746 = INT16_MIN;
	int8_t x748 = -1;
	volatile int32_t t186 = -374940316;

    t186 = (x745<=((x746&x747)&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	volatile int64_t x750 = INT64_MIN;
	static int8_t x751 = INT8_MAX;
	static uint64_t x752 = 420088102542535084LLU;
	int32_t t187 = -389032;

    t187 = (x749<=((x750&x751)&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x755 = -1LL;
	int64_t x756 = 367LL;

    t188 = (x753<=((x754&x755)&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	volatile uint32_t x759 = 35278U;
	int8_t x760 = -1;

    t189 = (x757<=((x758&x759)&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1802545;
	volatile uint16_t x762 = UINT16_MAX;
	int8_t x763 = 0;
	uint8_t x764 = 3U;
	volatile int32_t t190 = 732375554;

    t190 = (x761<=((x762&x763)&x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = INT16_MAX;
	int32_t t191 = 15236;

    t191 = (x765<=((x766&x767)&x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int32_t x770 = -419038335;
	int8_t x771 = INT8_MIN;
	volatile int16_t x772 = INT16_MAX;
	int32_t t192 = 46768909;

    t192 = (x769<=((x770&x771)&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x774 = -2067;
	uint8_t x775 = 20U;
	int8_t x776 = INT8_MAX;
	volatile int32_t t193 = -27;

    t193 = (x773<=((x774&x775)&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = 0U;
	int8_t x778 = 9;
	int16_t x779 = INT16_MIN;
	static uint32_t x780 = 108U;
	int32_t t194 = 194699;

    t194 = (x777<=((x778&x779)&x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = -155815087;
	int32_t x783 = -1334;
	volatile int32_t t195 = 731432888;

    t195 = (x781<=((x782&x783)&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MAX;
	int8_t x786 = INT8_MAX;
	int16_t x787 = INT16_MIN;
	static volatile int32_t t196 = -870;

    t196 = (x785<=((x786&x787)&x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MIN;
	static volatile int32_t x791 = INT32_MIN;
	uint16_t x792 = UINT16_MAX;

    t197 = (x789<=((x790&x791)&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	uint16_t x794 = 0U;
	int32_t x796 = INT32_MIN;
	static int32_t t198 = -5295011;

    t198 = (x793<=((x794&x795)&x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 77U;
	uint8_t x798 = UINT8_MAX;
	int16_t x799 = 269;
	static int16_t x800 = INT16_MIN;
	volatile int32_t t199 = -27241;

    t199 = (x797<=((x798&x799)&x800));

    if (t199 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

