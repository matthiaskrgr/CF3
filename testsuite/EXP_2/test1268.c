
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

int64_t x1 = INT64_MIN;
int16_t x2 = -1;
int32_t x8 = INT32_MAX;
int32_t x11 = -27826563;
volatile int16_t x20 = INT16_MIN;
static uint8_t x26 = 16U;
int16_t x29 = INT16_MIN;
int8_t x31 = -63;
static int32_t x33 = -1;
int16_t x35 = INT16_MAX;
int8_t x36 = -1;
static int32_t t8 = -239282826;
int64_t x42 = INT64_MAX;
int8_t x47 = -26;
volatile int32_t t11 = -332;
uint16_t x49 = UINT16_MAX;
int32_t t12 = -14;
volatile int8_t x53 = INT8_MIN;
int16_t x57 = INT16_MIN;
int64_t x59 = INT64_MIN;
static int16_t x62 = -1;
int64_t x63 = INT64_MAX;
int64_t x67 = -718244466746081466LL;
int8_t x73 = INT8_MIN;
static volatile uint64_t x78 = UINT64_MAX;
static int32_t t19 = -1;
static uint16_t x81 = UINT16_MAX;
uint16_t x82 = 66U;
static int8_t x87 = 28;
volatile int32_t t22 = -9626;
volatile int32_t t25 = 5443;
uint64_t x106 = 465971643651453LLU;
int8_t x115 = INT8_MIN;
volatile uint16_t x123 = 1400U;
int16_t x126 = INT16_MIN;
volatile int8_t x127 = 25;
int32_t t31 = 992;
int16_t x131 = -1;
int16_t x133 = 0;
uint16_t x134 = UINT16_MAX;
volatile int32_t t33 = -443146670;
int64_t x138 = INT64_MIN;
int8_t x140 = -1;
uint32_t x149 = 106812278U;
uint8_t x152 = UINT8_MAX;
uint32_t x154 = UINT32_MAX;
int64_t x163 = 922701104195723775LL;
int64_t x164 = -1LL;
int64_t x168 = INT64_MAX;
volatile int32_t t46 = 94;
int16_t x190 = 1605;
static volatile int32_t t48 = -15217;
int8_t x201 = -5;
static int8_t x215 = INT8_MAX;
uint32_t x226 = 20562229U;
uint8_t x228 = 1U;
int8_t x232 = INT8_MIN;
int32_t x239 = INT32_MAX;
volatile int32_t t59 = -83650;
volatile uint8_t x243 = UINT8_MAX;
int16_t x245 = -1;
int32_t t61 = 10719620;
int8_t x260 = INT8_MIN;
int16_t x266 = -3327;
int8_t x267 = -1;
volatile int64_t x276 = 325608329297191378LL;
static int64_t x278 = 46703LL;
volatile int8_t x285 = INT8_MAX;
int64_t x300 = -1LL;
int64_t x303 = INT64_MAX;
int32_t x306 = 244;
int32_t t76 = 101811612;
int16_t x310 = INT16_MIN;
int64_t x313 = INT64_MIN;
int32_t t80 = 1;
int8_t x326 = INT8_MAX;
volatile int32_t t82 = 2385;
int32_t t83 = -29209;
int8_t x337 = -9;
volatile int8_t x340 = 1;
int16_t x341 = -1;
uint8_t x343 = 82U;
static volatile int16_t x344 = INT16_MIN;
static uint32_t x345 = 4957258U;
int32_t t86 = 175435411;
int16_t x349 = INT16_MIN;
int32_t x354 = -1;
static int32_t t89 = 6750;
volatile int32_t t91 = -156137;
volatile int64_t x371 = 244785268568532LL;
int8_t x373 = -1;
uint32_t x374 = 612U;
uint64_t x382 = UINT64_MAX;
int32_t x384 = -287850107;
uint32_t x388 = UINT32_MAX;
static int16_t x389 = -1920;
uint64_t x391 = 1109441083490987602LLU;
volatile int16_t x396 = INT16_MIN;
volatile int16_t x397 = 395;
int8_t x400 = 6;
volatile int32_t t99 = 145482;
uint64_t x402 = UINT64_MAX;
int64_t x407 = -1666702907132519LL;
uint32_t x408 = 95U;
volatile int32_t t102 = 484;
int32_t t103 = 520535825;
int16_t x417 = INT16_MIN;
int32_t x422 = INT32_MIN;
uint32_t x423 = 7180U;
volatile int16_t x425 = INT16_MIN;
int32_t x426 = INT32_MAX;
uint32_t x431 = 48644938U;
static volatile int32_t t107 = 17520;
int16_t x442 = INT16_MIN;
int32_t t110 = -3019;
static volatile int8_t x445 = INT8_MAX;
uint16_t x449 = 7U;
int64_t x456 = INT64_MIN;
volatile int32_t t114 = 3;
volatile uint8_t x462 = 0U;
volatile int16_t x466 = -1;
int32_t x467 = -209;
volatile uint32_t x471 = UINT32_MAX;
int32_t t117 = 279839;
volatile int8_t x474 = 45;
volatile int32_t x477 = INT32_MIN;
int64_t x479 = -468289086065119343LL;
int8_t x499 = INT8_MIN;
volatile uint64_t x503 = UINT64_MAX;
static volatile int32_t t125 = -64607701;
int32_t t126 = -32;
int16_t x509 = INT16_MIN;
volatile int32_t x514 = 211;
int8_t x515 = 1;
volatile int32_t t128 = -15703;
volatile uint8_t x518 = 14U;
int64_t x521 = -652683107189210LL;
int32_t x523 = INT32_MAX;
int32_t x524 = -1;
int32_t t131 = 44867;
int32_t x532 = INT32_MIN;
int32_t x539 = INT32_MAX;
static uint8_t x540 = UINT8_MAX;
uint64_t x543 = 1686200880704542LLU;
int8_t x551 = INT8_MAX;
int64_t x552 = INT64_MAX;
int32_t t137 = -238224;
int8_t x562 = 53;
int64_t x563 = INT64_MIN;
volatile int64_t x565 = INT64_MIN;
volatile int32_t t141 = -8951;
static uint32_t x569 = UINT32_MAX;
static uint8_t x571 = 101U;
volatile int32_t t142 = -49197469;
uint64_t x573 = 211426913696011LLU;
int64_t x575 = 36399165LL;
static volatile int32_t t143 = -141794449;
int16_t x589 = INT16_MAX;
int8_t x590 = 1;
int64_t x591 = INT64_MIN;
volatile uint64_t x592 = UINT64_MAX;
int32_t t147 = -1866947;
static volatile int8_t x595 = INT8_MAX;
volatile int32_t x596 = -1;
int16_t x599 = -1;
int16_t x604 = INT16_MIN;
volatile int32_t t150 = -1;
int32_t x608 = 10667818;
uint16_t x609 = UINT16_MAX;
volatile int8_t x610 = -1;
int16_t x612 = -1;
volatile uint64_t x616 = UINT64_MAX;
int8_t x618 = INT8_MIN;
uint32_t x624 = 11U;
int8_t x630 = INT8_MIN;
volatile uint8_t x631 = UINT8_MAX;
int16_t x633 = -1;
int32_t x636 = -4317789;
volatile int16_t x637 = INT16_MIN;
static uint16_t x639 = 7U;
int16_t x640 = -1;
int32_t t160 = 550274;
int16_t x653 = INT16_MAX;
int32_t x662 = -8;
uint16_t x664 = UINT16_MAX;
int8_t x671 = INT8_MAX;
uint64_t x676 = 431653893787237LLU;
int32_t t169 = -3794;
int8_t x681 = INT8_MIN;
static uint32_t x684 = UINT32_MAX;
int32_t x687 = -31538090;
int32_t x688 = 1;
int16_t x689 = 33;
volatile int32_t t172 = 118369865;
int16_t x693 = INT16_MAX;
static uint16_t x705 = UINT16_MAX;
uint16_t x707 = UINT16_MAX;
static int8_t x712 = -1;
volatile int8_t x713 = 30;
volatile int16_t x720 = INT16_MIN;
int32_t t179 = 733091;
int8_t x732 = -36;
int32_t x740 = INT32_MIN;
static volatile int32_t t185 = -938720991;
int32_t t189 = -255;
int32_t x772 = 57452;
int32_t t193 = 896406;
int64_t x778 = 0LL;
uint8_t x782 = 124U;
volatile uint64_t x783 = UINT64_MAX;
volatile uint8_t x788 = 3U;
static volatile int32_t t196 = -874940;
volatile uint32_t x797 = 742938203U;
uint16_t x800 = 12001U;


void f0(void) {
    	int8_t x3 = 1;
	uint16_t x4 = 5U;
	int32_t t0 = -1;

    t0 = ((x1!=(x2!=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -3373;
	volatile int32_t t1 = -5;

    t1 = ((x5!=(x6!=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 13;

    t2 = ((x9!=(x10!=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	static int32_t x15 = 24;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 122;

    t3 = ((x13!=(x14!=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 3424U;
	static int32_t x18 = INT32_MIN;
	int32_t x19 = 0;
	int32_t t4 = 803074441;

    t4 = ((x17!=(x18!=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 27;
	uint32_t x22 = 415U;
	volatile uint32_t x23 = 124140U;
	static uint64_t x24 = UINT64_MAX;
	int32_t t5 = 3513;

    t5 = ((x21!=(x22!=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -1780932590914487485LL;
	volatile int32_t x27 = INT32_MAX;
	uint32_t x28 = 31U;
	int32_t t6 = 556;

    t6 = ((x25!=(x26!=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = INT8_MIN;
	static int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = -66029808;

    t7 = ((x29!=(x30!=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = -1;

    t8 = ((x33!=(x34!=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 65429688413LLU;
	static uint64_t x38 = 667779443LLU;
	int64_t x39 = 361LL;
	int64_t x40 = INT64_MAX;
	int32_t t9 = -767794;

    t9 = ((x37!=(x38!=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	static volatile int64_t x43 = 1065903720634689952LL;
	int32_t x44 = 639055631;
	int32_t t10 = -56369;

    t10 = ((x41!=(x42!=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MAX;
	uint8_t x46 = 41U;
	static int64_t x48 = 548038LL;

    t11 = ((x45!=(x46!=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = 351;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -266302662189793LL;

    t12 = ((x49!=(x50!=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 1;

    t13 = ((x53!=(x54!=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = UINT32_MAX;
	int64_t x60 = 51458783378776LL;
	static volatile int32_t t14 = 3190859;

    t14 = ((x57!=(x58!=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 5113U;
	uint32_t x64 = 974274178U;
	int32_t t15 = -224835;

    t15 = ((x61!=(x62!=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x68 = -1;
	int32_t t16 = -277;

    t16 = ((x65!=(x66!=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	static int64_t x70 = -1LL;
	int32_t x71 = INT32_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 39659;

    t17 = ((x69!=(x70!=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 5362674893212LLU;
	uint32_t x76 = 5U;
	static volatile int32_t t18 = 33;

    t18 = ((x73!=(x74!=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -30;
	int64_t x79 = 59492288LL;
	int8_t x80 = INT8_MAX;

    t19 = ((x77!=(x78!=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x83 = 106493LLU;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -3037862;

    t20 = ((x81!=(x82!=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	volatile uint64_t x86 = 197012266579088253LLU;
	static int8_t x88 = 0;
	static volatile int32_t t21 = -3;

    t21 = ((x85!=(x86!=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -9;
	volatile int16_t x90 = -27;
	int8_t x91 = -1;
	uint16_t x92 = UINT16_MAX;

    t22 = ((x89!=(x90!=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	static volatile uint32_t x94 = 24468734U;
	volatile uint16_t x95 = 3545U;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = 24760;

    t23 = ((x93!=(x94!=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = -1;
	int64_t x98 = INT64_MIN;
	int8_t x99 = 20;
	uint8_t x100 = 47U;
	int32_t t24 = 113688;

    t24 = ((x97!=(x98!=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	uint64_t x102 = 354114062548143LLU;
	int64_t x103 = -8418221573117LL;
	int16_t x104 = 34;

    t25 = ((x101!=(x102!=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = -139976405;

    t26 = ((x105!=(x106!=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = -49;
	volatile int32_t x112 = -277;
	int32_t t27 = -226202;

    t27 = ((x109!=(x110!=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	uint64_t x114 = 9509809059LLU;
	uint32_t x116 = 102U;
	volatile int32_t t28 = 8;

    t28 = ((x113!=(x114!=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = INT64_MIN;
	volatile int16_t x118 = INT16_MAX;
	static int32_t x119 = INT32_MAX;
	int8_t x120 = -1;
	int32_t t29 = -60;

    t29 = ((x117!=(x118!=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -114LL;
	int64_t x122 = 173630555LL;
	static volatile uint8_t x124 = 127U;
	int32_t t30 = 324073621;

    t30 = ((x121!=(x122!=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -19;
	volatile uint16_t x128 = UINT16_MAX;

    t31 = ((x125!=(x126!=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	volatile uint8_t x130 = 31U;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -44521444;

    t32 = ((x129!=(x130!=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x135 = UINT8_MAX;
	static int16_t x136 = 26;

    t33 = ((x133!=(x134!=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 362155206U;
	uint32_t x139 = 174U;
	int32_t t34 = 476828255;

    t34 = ((x137!=(x138!=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	static int32_t x142 = 0;
	volatile int64_t x143 = -35503133859164098LL;
	int8_t x144 = 1;
	volatile int32_t t35 = -245;

    t35 = ((x141!=(x142!=x143))==x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	static uint8_t x146 = 0U;
	static int64_t x147 = -91006551LL;
	uint16_t x148 = UINT16_MAX;
	static int32_t t36 = 810;

    t36 = ((x145!=(x146!=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t t37 = 39046;

    t37 = ((x149!=(x150!=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint16_t x155 = 30142U;
	volatile int64_t x156 = 8766482327430LL;
	volatile int32_t t38 = 554705;

    t38 = ((x153!=(x154!=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 10U;
	uint8_t x158 = 28U;
	volatile uint32_t x159 = UINT32_MAX;
	int64_t x160 = 1160050081670666LL;
	static int32_t t39 = -3;

    t39 = ((x157!=(x158!=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	volatile int16_t x162 = 0;
	volatile int32_t t40 = -578611;

    t40 = ((x161!=(x162!=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	uint64_t x166 = 31374559758LLU;
	int64_t x167 = INT64_MAX;
	int32_t t41 = -8176003;

    t41 = ((x165!=(x166!=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 1742U;
	volatile int32_t t42 = -876;

    t42 = ((x169!=(x170!=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	uint32_t x175 = 4770539U;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 7329;

    t43 = ((x173!=(x174!=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 13U;
	uint8_t x178 = 1U;
	volatile int64_t x179 = -370139938775918877LL;
	uint8_t x180 = 12U;
	volatile int32_t t44 = 0;

    t44 = ((x177!=(x178!=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -13;
	static volatile int64_t x182 = INT64_MIN;
	volatile int8_t x183 = INT8_MAX;
	uint16_t x184 = 5U;
	static volatile int32_t t45 = 172;

    t45 = ((x181!=(x182!=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x187 = 16;
	int32_t x188 = INT32_MIN;

    t46 = ((x185!=(x186!=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = -1;
	static volatile uint8_t x191 = 0U;
	uint32_t x192 = 27U;
	volatile int32_t t47 = 441466;

    t47 = ((x189!=(x190!=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static volatile int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	int64_t x196 = -1LL;

    t48 = ((x193!=(x194!=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -299LL;
	static uint8_t x198 = UINT8_MAX;
	uint8_t x199 = 2U;
	volatile int64_t x200 = INT64_MAX;
	int32_t t49 = -6258633;

    t49 = ((x197!=(x198!=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 1727060399U;
	volatile int16_t x203 = -1;
	int32_t x204 = -42;
	volatile int32_t t50 = -7;

    t50 = ((x201!=(x202!=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MAX;
	volatile int32_t x207 = -213448;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = -8;

    t51 = ((x205!=(x206!=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 12U;
	volatile uint32_t x210 = UINT32_MAX;
	static uint64_t x211 = 5669925106561LLU;
	uint64_t x212 = UINT64_MAX;
	static int32_t t52 = -1020;

    t52 = ((x209!=(x210!=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	volatile int64_t x216 = INT64_MAX;
	volatile int32_t t53 = -193639;

    t53 = ((x213!=(x214!=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 13;
	static int16_t x218 = -3340;
	uint8_t x219 = 3U;
	static volatile int64_t x220 = -1LL;
	volatile int32_t t54 = -4870;

    t54 = ((x217!=(x218!=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 2750U;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 91U;
	static volatile int16_t x224 = INT16_MIN;
	int32_t t55 = 2310856;

    t55 = ((x221!=(x222!=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	int8_t x227 = -48;
	int32_t t56 = 207;

    t56 = ((x225!=(x226!=x227))==x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = -1;
	volatile uint32_t x230 = 10122958U;
	int16_t x231 = 8855;
	static int32_t t57 = -36093;

    t57 = ((x229!=(x230!=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MAX;
	int32_t x234 = 2505643;
	int64_t x235 = INT64_MAX;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = 8110565;

    t58 = ((x233!=(x234!=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -1;
	int8_t x238 = INT8_MAX;
	int64_t x240 = INT64_MIN;

    t59 = ((x237!=(x238!=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -8683LL;
	int64_t x242 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 858677278;

    t60 = ((x241!=(x242!=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = 4255490476879671LL;
	uint8_t x247 = 0U;
	volatile int32_t x248 = -32175697;

    t61 = ((x245!=(x246!=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	volatile uint32_t x250 = UINT32_MAX;
	uint64_t x251 = 43539LLU;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = -92662;

    t62 = ((x249!=(x250!=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -160927845152LL;
	uint64_t x254 = 336LLU;
	int16_t x255 = INT16_MIN;
	static int64_t x256 = -178512LL;
	static volatile int32_t t63 = -3888;

    t63 = ((x253!=(x254!=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -111252186918691015LL;
	int16_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t t64 = -251400591;

    t64 = ((x257!=(x258!=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 256779;
	int8_t x262 = INT8_MIN;
	int16_t x263 = -1;
	uint8_t x264 = 6U;
	int32_t t65 = 5;

    t65 = ((x261!=(x262!=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -1383;

    t66 = ((x265!=(x266!=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -1LL;
	volatile uint8_t x270 = UINT8_MAX;
	uint16_t x271 = 15U;
	static volatile int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 2;

    t67 = ((x269!=(x270!=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 3U;
	volatile int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MAX;
	volatile int32_t t68 = -307619;

    t68 = ((x273!=(x274!=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x277 = 3797931623406870427LLU;
	int16_t x279 = INT16_MAX;
	int32_t x280 = -1;
	volatile int32_t t69 = -83562304;

    t69 = ((x277!=(x278!=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 13006LL;
	int32_t x282 = INT32_MAX;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 375356490;

    t70 = ((x281!=(x282!=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x286 = 2U;
	int8_t x287 = INT8_MIN;
	int16_t x288 = -1;
	int32_t t71 = -315646749;

    t71 = ((x285!=(x286!=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	uint16_t x290 = UINT16_MAX;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = 107;

    t72 = ((x289!=(x290!=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 100U;
	static volatile uint64_t x294 = 212589874796574781LLU;
	int32_t x295 = -1;
	static volatile int64_t x296 = INT64_MIN;
	int32_t t73 = 103439;

    t73 = ((x293!=(x294!=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 9U;
	uint64_t x298 = 85191385LLU;
	uint32_t x299 = 91199U;
	volatile int32_t t74 = 407613341;

    t74 = ((x297!=(x298!=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int32_t x302 = 461347529;
	uint16_t x304 = 3U;
	int32_t t75 = 1802837;

    t75 = ((x301!=(x302!=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = 4;
	static uint64_t x307 = 133831234121052LLU;
	uint8_t x308 = UINT8_MAX;

    t76 = ((x305!=(x306!=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -422821347981374LL;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -219;
	int32_t t77 = -5498366;

    t77 = ((x309!=(x310!=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x314 = UINT32_MAX;
	uint64_t x315 = 2745038LLU;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -5204956;

    t78 = ((x313!=(x314!=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MAX;
	uint32_t x318 = 121U;
	int64_t x319 = INT64_MIN;
	static int32_t x320 = -1;
	volatile int32_t t79 = 1;

    t79 = ((x317!=(x318!=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = 122709032337187LLU;
	static int32_t x322 = -913170;
	static volatile uint32_t x323 = 3927282U;
	uint16_t x324 = 1U;

    t80 = ((x321!=(x322!=x323))==x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -2;
	int16_t x327 = -5078;
	uint16_t x328 = 19U;
	int32_t t81 = -8441146;

    t81 = ((x325!=(x326!=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 31391344LLU;
	static uint16_t x330 = 25456U;
	uint16_t x331 = 150U;
	int8_t x332 = 1;

    t82 = ((x329!=(x330!=x331))==x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MIN;
	uint64_t x334 = 2892191661405LLU;
	static int32_t x335 = INT32_MIN;
	int32_t x336 = -1;

    t83 = ((x333!=(x334!=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x338 = 59U;
	volatile int64_t x339 = 901986315887182LL;
	int32_t t84 = -10114578;

    t84 = ((x337!=(x338!=x339))==x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 11;
	int32_t t85 = -3000;

    t85 = ((x341!=(x342!=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = -1;
	static volatile int8_t x347 = INT8_MIN;
	int8_t x348 = -1;

    t86 = ((x345!=(x346!=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t87 = -5318251;

    t87 = ((x349!=(x350!=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x355 = -1;
	int32_t x356 = -1;
	volatile int32_t t88 = -174;

    t88 = ((x353!=(x354!=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -313065;
	int64_t x358 = 2314LL;
	int32_t x359 = -872;
	int64_t x360 = -5184034159912LL;

    t89 = ((x357!=(x358!=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 2077810578224350LLU;
	volatile int32_t x362 = -5465;
	uint32_t x363 = 107U;
	uint64_t x364 = 26870529243727810LLU;
	int32_t t90 = -2354;

    t90 = ((x361!=(x362!=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = 15;
	uint64_t x366 = 740797278LLU;
	uint64_t x367 = 13188LLU;
	volatile uint32_t x368 = 1715U;

    t91 = ((x365!=(x366!=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 96943U;
	uint64_t x370 = UINT64_MAX;
	static int64_t x372 = 2009616LL;
	volatile int32_t t92 = -294235;

    t92 = ((x369!=(x370!=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x375 = INT64_MIN;
	uint64_t x376 = 528LLU;
	volatile int32_t t93 = -1314943;

    t93 = ((x373!=(x374!=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = 420U;
	volatile uint8_t x378 = UINT8_MAX;
	int16_t x379 = -1;
	int64_t x380 = -1LL;
	static volatile int32_t t94 = -54583833;

    t94 = ((x377!=(x378!=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 1U;
	int8_t x383 = INT8_MIN;
	volatile int32_t t95 = 74;

    t95 = ((x381!=(x382!=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	uint16_t x386 = 3781U;
	int64_t x387 = INT64_MIN;
	static int32_t t96 = 12231325;

    t96 = ((x385!=(x386!=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = UINT64_MAX;
	volatile int64_t x392 = INT64_MIN;
	int32_t t97 = 851793711;

    t97 = ((x389!=(x390!=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int32_t t98 = 82877;

    t98 = ((x393!=(x394!=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x398 = INT32_MIN;
	volatile int32_t x399 = INT32_MIN;

    t99 = ((x397!=(x398!=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	static uint16_t x403 = 12380U;
	int8_t x404 = INT8_MAX;
	volatile int32_t t100 = -718215;

    t100 = ((x401!=(x402!=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x405 = INT8_MIN;
	static int8_t x406 = INT8_MAX;
	volatile int32_t t101 = 1;

    t101 = ((x405!=(x406!=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1217766508628LL;
	static int8_t x410 = -29;
	int64_t x411 = -1LL;
	volatile uint16_t x412 = 0U;

    t102 = ((x409!=(x410!=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 95458U;
	static int8_t x414 = -1;
	uint16_t x415 = 1402U;
	uint16_t x416 = UINT16_MAX;

    t103 = ((x413!=(x414!=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x418 = 360;
	uint16_t x419 = 5047U;
	uint16_t x420 = 4U;
	int32_t t104 = 58233915;

    t104 = ((x417!=(x418!=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	int64_t x424 = 555090LL;
	int32_t t105 = 0;

    t105 = ((x421!=(x422!=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x427 = INT64_MIN;
	int32_t x428 = INT32_MAX;
	static volatile int32_t t106 = 82173213;

    t106 = ((x425!=(x426!=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	volatile uint64_t x430 = 1411LLU;
	volatile int64_t x432 = 55105569318LL;

    t107 = ((x429!=(x430!=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 94;
	static int32_t x434 = INT32_MAX;
	volatile int8_t x435 = 60;
	uint32_t x436 = 17805904U;
	int32_t t108 = 412841112;

    t108 = ((x433!=(x434!=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile int64_t x438 = -84111790LL;
	volatile uint32_t x439 = 6610750U;
	int32_t x440 = INT32_MIN;
	int32_t t109 = 231454;

    t109 = ((x437!=(x438!=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 0;
	int8_t x443 = INT8_MIN;
	static uint32_t x444 = UINT32_MAX;

    t110 = ((x441!=(x442!=x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x446 = 9U;
	int8_t x447 = INT8_MAX;
	uint8_t x448 = UINT8_MAX;
	int32_t t111 = 4727818;

    t111 = ((x445!=(x446!=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x450 = INT16_MAX;
	static int32_t x451 = -76843;
	int16_t x452 = INT16_MIN;
	static volatile int32_t t112 = 3;

    t112 = ((x449!=(x450!=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int32_t x454 = INT32_MAX;
	volatile uint64_t x455 = 3560879204251629445LLU;
	int32_t t113 = -22258910;

    t113 = ((x453!=(x454!=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	static int16_t x458 = -1;
	uint16_t x459 = UINT16_MAX;
	int16_t x460 = INT16_MIN;

    t114 = ((x457!=(x458!=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x461 = INT64_MIN;
	uint8_t x463 = 31U;
	int32_t x464 = -2;
	volatile int32_t t115 = -20;

    t115 = ((x461!=(x462!=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int16_t x468 = -28;
	int32_t t116 = 10980986;

    t116 = ((x465!=(x466!=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	int16_t x472 = -1;

    t117 = ((x469!=(x470!=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	volatile int64_t x475 = INT64_MIN;
	uint64_t x476 = 134948LLU;
	volatile int32_t t118 = -342360;

    t118 = ((x473!=(x474!=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x478 = INT8_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t119 = -184597;

    t119 = ((x477!=(x478!=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 31U;
	volatile uint32_t x482 = 134U;
	int8_t x483 = INT8_MIN;
	volatile int64_t x484 = INT64_MAX;
	static volatile int32_t t120 = -1;

    t120 = ((x481!=(x482!=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 2;
	int16_t x486 = INT16_MAX;
	static uint64_t x487 = UINT64_MAX;
	static int32_t x488 = -9371;
	volatile int32_t t121 = -91680;

    t121 = ((x485!=(x486!=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	volatile uint8_t x490 = 6U;
	int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = -13;

    t122 = ((x489!=(x490!=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	static int16_t x494 = -121;
	volatile int8_t x495 = 6;
	int16_t x496 = 0;
	int32_t t123 = -1;

    t123 = ((x493!=(x494!=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	int16_t x498 = -1;
	static int16_t x500 = -2382;
	volatile int32_t t124 = -9936784;

    t124 = ((x497!=(x498!=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int32_t x502 = -22;
	static int8_t x504 = 7;

    t125 = ((x501!=(x502!=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MAX;
	volatile int64_t x506 = 62962203620602LL;
	uint64_t x507 = 69605LLU;
	uint64_t x508 = UINT64_MAX;

    t126 = ((x505!=(x506!=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x510 = 322LLU;
	volatile uint32_t x511 = UINT32_MAX;
	volatile int8_t x512 = 2;
	int32_t t127 = -18968807;

    t127 = ((x509!=(x510!=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x516 = INT64_MIN;

    t128 = ((x513!=(x514!=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = 360211627487LL;
	int32_t x519 = INT32_MIN;
	volatile int16_t x520 = INT16_MIN;
	volatile int32_t t129 = 336231;

    t129 = ((x517!=(x518!=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x522 = 6466039U;
	int32_t t130 = 331657961;

    t130 = ((x521!=(x522!=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	int8_t x526 = 0;
	int64_t x527 = 10190656289133LL;
	uint16_t x528 = UINT16_MAX;

    t131 = ((x525!=(x526!=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 1045986137470LLU;
	int32_t x530 = 3586;
	int64_t x531 = -69261389207297LL;
	static int32_t t132 = -85179707;

    t132 = ((x529!=(x530!=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 1797573000046492LLU;
	int64_t x534 = INT64_MAX;
	volatile int64_t x535 = INT64_MIN;
	int16_t x536 = -1;
	int32_t t133 = 53128464;

    t133 = ((x533!=(x534!=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 743;
	static uint8_t x538 = UINT8_MAX;
	int32_t t134 = 22072;

    t134 = ((x537!=(x538!=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	uint64_t x542 = UINT64_MAX;
	static volatile int8_t x544 = 1;
	static volatile int32_t t135 = -3;

    t135 = ((x541!=(x542!=x543))==x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	uint32_t x546 = 10343U;
	int16_t x547 = INT16_MIN;
	static uint16_t x548 = 22348U;
	volatile int32_t t136 = -901758952;

    t136 = ((x545!=(x546!=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 2LLU;
	volatile uint32_t x550 = 9124U;

    t137 = ((x549!=(x550!=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = INT8_MAX;
	volatile int64_t x554 = -1LL;
	int16_t x555 = INT16_MIN;
	uint8_t x556 = 28U;
	int32_t t138 = 226;

    t138 = ((x553!=(x554!=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MAX;
	int16_t x559 = INT16_MIN;
	uint32_t x560 = 23767540U;
	static int32_t t139 = 23408;

    t139 = ((x557!=(x558!=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 110067147489630370LLU;
	int16_t x564 = INT16_MAX;
	volatile int32_t t140 = -143;

    t140 = ((x561!=(x562!=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	static uint32_t x567 = 0U;
	static int16_t x568 = 29;

    t141 = ((x565!=(x566!=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x570 = INT32_MIN;
	volatile int8_t x572 = 7;

    t142 = ((x569!=(x570!=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = 335828411;
	int8_t x576 = INT8_MIN;

    t143 = ((x573!=(x574!=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x577 = 12U;
	static uint8_t x578 = 50U;
	int32_t x579 = INT32_MIN;
	int64_t x580 = -1LL;
	volatile int32_t t144 = 16;

    t144 = ((x577!=(x578!=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 3U;
	int16_t x582 = INT16_MAX;
	volatile int32_t x583 = 244073535;
	int64_t x584 = INT64_MIN;
	volatile int32_t t145 = 15678935;

    t145 = ((x581!=(x582!=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	uint64_t x586 = 2512259LLU;
	uint16_t x587 = UINT16_MAX;
	int8_t x588 = -1;
	int32_t t146 = 0;

    t146 = ((x585!=(x586!=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    

    t147 = ((x589!=(x590!=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int32_t x594 = INT32_MAX;
	static int32_t t148 = 863;

    t148 = ((x593!=(x594!=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 2352U;
	static uint8_t x598 = UINT8_MAX;
	int8_t x600 = -1;
	int32_t t149 = 1;

    t149 = ((x597!=(x598!=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 5U;
	uint16_t x602 = 13U;
	volatile int32_t x603 = 3;

    t150 = ((x601!=(x602!=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 5615U;
	static volatile uint8_t x606 = UINT8_MAX;
	static int64_t x607 = INT64_MIN;
	volatile int32_t t151 = -1;

    t151 = ((x605!=(x606!=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x611 = 23U;
	int32_t t152 = 98371979;

    t152 = ((x609!=(x610!=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MAX;
	int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;
	volatile int32_t t153 = 1316713;

    t153 = ((x613!=(x614!=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MAX;
	static volatile int32_t t154 = 12047;

    t154 = ((x617!=(x618!=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	static uint8_t x622 = UINT8_MAX;
	static volatile int16_t x623 = -157;
	static volatile int32_t t155 = 482;

    t155 = ((x621!=(x622!=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	static int64_t x626 = INT64_MIN;
	uint32_t x627 = 415006187U;
	static int8_t x628 = INT8_MIN;
	int32_t t156 = -17;

    t156 = ((x625!=(x626!=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MIN;
	volatile int32_t x632 = -23950;
	volatile int32_t t157 = -5;

    t157 = ((x629!=(x630!=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x634 = UINT8_MAX;
	int64_t x635 = -1LL;
	volatile int32_t t158 = -12;

    t158 = ((x633!=(x634!=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x638 = 1U;
	static int32_t t159 = -256139691;

    t159 = ((x637!=(x638!=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MAX;
	uint32_t x643 = 797999U;
	int32_t x644 = INT32_MAX;

    t160 = ((x641!=(x642!=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 37215965096429546LLU;
	int16_t x646 = 710;
	int8_t x647 = -10;
	static uint8_t x648 = 60U;
	int32_t t161 = -375991494;

    t161 = ((x645!=(x646!=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = 465;
	uint32_t x650 = 235U;
	volatile uint8_t x651 = UINT8_MAX;
	static volatile int16_t x652 = 10027;
	static int32_t t162 = 91;

    t162 = ((x649!=(x650!=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x654 = -1;
	static volatile uint64_t x655 = 1564955938948115LLU;
	uint64_t x656 = 404776LLU;
	int32_t t163 = -1967;

    t163 = ((x653!=(x654!=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x657 = -739013291379924271LL;
	static int8_t x658 = -34;
	int32_t x659 = INT32_MIN;
	volatile uint8_t x660 = UINT8_MAX;
	static volatile int32_t t164 = 175052798;

    t164 = ((x657!=(x658!=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	int32_t x663 = 1953;
	volatile int32_t t165 = -30;

    t165 = ((x661!=(x662!=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MIN;
	uint32_t x666 = UINT32_MAX;
	uint64_t x667 = 633419990LLU;
	volatile int16_t x668 = -1;
	volatile int32_t t166 = -288831995;

    t166 = ((x665!=(x666!=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -415935;
	static uint64_t x670 = 1LLU;
	volatile uint32_t x672 = 1U;
	volatile int32_t t167 = 5327;

    t167 = ((x669!=(x670!=x671))==x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	int8_t x674 = INT8_MIN;
	static int16_t x675 = INT16_MIN;
	int32_t t168 = -14;

    t168 = ((x673!=(x674!=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MAX;
	uint8_t x678 = 3U;
	uint64_t x679 = 1939748176438LLU;
	static uint16_t x680 = UINT16_MAX;

    t169 = ((x677!=(x678!=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x682 = 0U;
	uint32_t x683 = 61529U;
	static int32_t t170 = -7;

    t170 = ((x681!=(x682!=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	uint16_t x686 = UINT16_MAX;
	static volatile int32_t t171 = 65500;

    t171 = ((x685!=(x686!=x687))==x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x690 = INT64_MAX;
	int8_t x691 = INT8_MIN;
	volatile int32_t x692 = -1;

    t172 = ((x689!=(x690!=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x694 = INT64_MIN;
	int32_t x695 = -1;
	int16_t x696 = 1;
	static int32_t t173 = 179407578;

    t173 = ((x693!=(x694!=x695))==x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	static volatile int8_t x698 = -1;
	int64_t x699 = INT64_MIN;
	int32_t x700 = INT32_MIN;
	static int32_t t174 = 12;

    t174 = ((x697!=(x698!=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	int64_t x702 = -11028847LL;
	int32_t x703 = INT32_MAX;
	static int8_t x704 = -1;
	int32_t t175 = 1;

    t175 = ((x701!=(x702!=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x706 = INT32_MAX;
	int16_t x708 = -1;
	volatile int32_t t176 = -23505167;

    t176 = ((x705!=(x706!=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x709 = 425;
	volatile int8_t x710 = INT8_MAX;
	uint8_t x711 = UINT8_MAX;
	int32_t t177 = -28339884;

    t177 = ((x709!=(x710!=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 19U;
	uint16_t x716 = UINT16_MAX;
	int32_t t178 = 259217;

    t178 = ((x713!=(x714!=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x717 = 5761152U;
	int64_t x718 = INT64_MIN;
	uint16_t x719 = 58U;

    t179 = ((x717!=(x718!=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MIN;
	uint8_t x723 = 1U;
	int64_t x724 = INT64_MIN;
	volatile int32_t t180 = 15146102;

    t180 = ((x721!=(x722!=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	volatile int8_t x726 = INT8_MAX;
	volatile int64_t x727 = -163784LL;
	int32_t x728 = -1;
	int32_t t181 = -2;

    t181 = ((x725!=(x726!=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 234LLU;
	volatile uint8_t x730 = UINT8_MAX;
	int32_t x731 = 267628;
	static int32_t t182 = 626242093;

    t182 = ((x729!=(x730!=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	static int16_t x734 = INT16_MAX;
	int32_t x735 = INT32_MIN;
	int64_t x736 = INT64_MIN;
	volatile int32_t t183 = 3833;

    t183 = ((x733!=(x734!=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	int16_t x738 = INT16_MIN;
	static volatile int64_t x739 = INT64_MAX;
	int32_t t184 = 5110804;

    t184 = ((x737!=(x738!=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int64_t x742 = -41269246LL;
	uint8_t x743 = 0U;
	uint8_t x744 = UINT8_MAX;

    t185 = ((x741!=(x742!=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = UINT32_MAX;
	int16_t x746 = -100;
	int8_t x747 = -7;
	static int64_t x748 = INT64_MIN;
	static int32_t t186 = 6224;

    t186 = ((x745!=(x746!=x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 2828U;
	int32_t x750 = -1;
	int16_t x751 = -4411;
	int64_t x752 = INT64_MIN;
	volatile int32_t t187 = 119409;

    t187 = ((x749!=(x750!=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int8_t x754 = INT8_MAX;
	uint64_t x755 = UINT64_MAX;
	static int64_t x756 = -1LL;
	int32_t t188 = -177;

    t188 = ((x753!=(x754!=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	int8_t x758 = INT8_MIN;
	volatile uint8_t x759 = 111U;
	int8_t x760 = INT8_MIN;

    t189 = ((x757!=(x758!=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	int64_t x762 = INT64_MIN;
	int64_t x763 = -244584LL;
	volatile int64_t x764 = INT64_MIN;
	volatile int32_t t190 = 15427440;

    t190 = ((x761!=(x762!=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x765 = 1378U;
	int32_t x766 = -1;
	volatile int8_t x767 = INT8_MIN;
	static int64_t x768 = INT64_MAX;
	int32_t t191 = 0;

    t191 = ((x765!=(x766!=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	int8_t x770 = -1;
	uint32_t x771 = 208U;
	volatile int32_t t192 = 14;

    t192 = ((x769!=(x770!=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint64_t x774 = 2577LLU;
	uint8_t x775 = 19U;
	volatile int64_t x776 = -1LL;

    t193 = ((x773!=(x774!=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MAX;
	volatile int16_t x779 = INT16_MAX;
	uint64_t x780 = 5561827373227267LLU;
	int32_t t194 = 0;

    t194 = ((x777!=(x778!=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = INT64_MAX;
	static volatile int64_t x784 = INT64_MIN;
	int32_t t195 = -1;

    t195 = ((x781!=(x782!=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint8_t x786 = 90U;
	uint64_t x787 = 72524599631LLU;

    t196 = ((x785!=(x786!=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MAX;
	uint32_t x790 = 7710854U;
	int8_t x791 = -1;
	int32_t x792 = -1;
	int32_t t197 = 14770652;

    t197 = ((x789!=(x790!=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 0U;
	static int8_t x794 = 7;
	static int16_t x795 = INT16_MIN;
	uint8_t x796 = 2U;
	volatile int32_t t198 = -27909581;

    t198 = ((x793!=(x794!=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x798 = INT16_MIN;
	int32_t x799 = INT32_MAX;
	volatile int32_t t199 = 117919615;

    t199 = ((x797!=(x798!=x799))==x800);

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

