
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

static int16_t x3 = 2;
static uint64_t x12 = 15982108182LLU;
int64_t x13 = INT64_MIN;
int8_t x23 = INT8_MAX;
static int8_t x27 = -13;
volatile uint32_t x29 = UINT32_MAX;
int16_t x38 = INT16_MAX;
uint16_t x40 = UINT16_MAX;
uint32_t x47 = 1U;
volatile int16_t x48 = INT16_MAX;
uint64_t x51 = 299432LLU;
static uint16_t x59 = UINT16_MAX;
int8_t x60 = -1;
uint16_t x61 = 250U;
int8_t x63 = INT8_MIN;
volatile int32_t t14 = 3477;
uint32_t x69 = 8072U;
uint16_t x76 = 7219U;
static uint32_t x83 = 61U;
int64_t x88 = -1246364976LL;
int32_t x92 = INT32_MIN;
volatile int32_t t19 = -3;
int8_t x103 = INT8_MAX;
int8_t x104 = -1;
static int64_t x111 = -1LL;
static int64_t x112 = INT64_MIN;
int8_t x116 = INT8_MAX;
volatile uint32_t x119 = 213070U;
uint64_t x131 = UINT64_MAX;
int8_t x133 = INT8_MAX;
int32_t x140 = 12;
volatile int32_t t28 = 3709281;
volatile int32_t t29 = 88762;
int32_t t30 = -27902;
volatile int32_t t31 = -20253825;
static volatile uint16_t x157 = 55U;
static int64_t x164 = INT64_MAX;
int8_t x167 = -1;
volatile int32_t t35 = 618922;
volatile int32_t t36 = -14;
uint64_t x188 = 420LLU;
uint64_t x195 = UINT64_MAX;
int32_t x197 = -1;
int32_t x199 = 1;
int32_t x207 = INT32_MAX;
uint32_t x214 = 1863U;
uint32_t x215 = 13030720U;
int32_t x218 = 113824;
int8_t x220 = INT8_MIN;
uint64_t x224 = 21319352661LLU;
uint8_t x255 = 3U;
static int8_t x261 = INT8_MIN;
volatile int32_t t53 = 1;
uint64_t x269 = 5242777799968LLU;
uint16_t x294 = 3741U;
uint16_t x316 = UINT16_MAX;
uint8_t x320 = 6U;
int32_t t59 = -704;
uint8_t x321 = UINT8_MAX;
uint16_t x323 = 4727U;
volatile uint64_t x328 = 259745664LLU;
int32_t x333 = 23;
volatile int32_t x337 = 1;
static uint16_t x339 = 1U;
uint32_t x340 = UINT32_MAX;
int32_t t64 = -17;
static uint32_t x341 = 21258U;
uint8_t x345 = 1U;
int32_t x355 = INT32_MIN;
uint8_t x359 = UINT8_MAX;
uint8_t x369 = UINT8_MAX;
uint8_t x371 = 70U;
int64_t x374 = -1LL;
int64_t x377 = 0LL;
volatile int64_t x388 = 1786294494451549LL;
int32_t t74 = -14659;
uint64_t x407 = UINT64_MAX;
int32_t x408 = INT32_MIN;
uint16_t x411 = UINT16_MAX;
int8_t x421 = 22;
int64_t x431 = 13131LL;
int16_t x433 = INT16_MIN;
uint16_t x436 = 3U;
volatile int32_t t82 = -60;
uint32_t x438 = UINT32_MAX;
volatile int32_t x440 = -212;
volatile int8_t x444 = -3;
int64_t x449 = -1LL;
static uint8_t x451 = 4U;
int16_t x452 = -281;
static int32_t x460 = INT32_MIN;
int32_t t86 = -104282787;
int32_t x465 = -239916;
uint32_t x470 = UINT32_MAX;
static volatile uint8_t x473 = 0U;
int64_t x481 = -412922637LL;
uint32_t x483 = UINT32_MAX;
int16_t x485 = INT16_MIN;
volatile int16_t x487 = -37;
uint64_t x489 = UINT64_MAX;
volatile int32_t x490 = INT32_MIN;
volatile int16_t x491 = INT16_MAX;
int8_t x509 = -6;
int32_t t97 = -1138672;
static volatile uint16_t x521 = 1U;
int64_t x522 = 1951909038101LL;
volatile int32_t t98 = 22199118;
int16_t x525 = INT16_MIN;
int32_t t99 = 337;
uint8_t x534 = 24U;
volatile int8_t x542 = -14;
int64_t x545 = -1LL;
int64_t x550 = -381719388818066LL;
uint16_t x558 = UINT16_MAX;
int16_t x562 = INT16_MAX;
uint16_t x575 = 3652U;
static uint32_t x585 = 293435U;
static volatile int16_t x588 = INT16_MAX;
int32_t x603 = -1;
int8_t x604 = -1;
uint16_t x627 = 36U;
volatile int32_t t118 = -10451;
int64_t x640 = INT64_MIN;
int32_t x641 = 12874958;
static volatile int32_t t120 = 3756;
uint8_t x645 = 2U;
uint32_t x648 = UINT32_MAX;
int32_t t121 = 46805;
int16_t x656 = -56;
int32_t t124 = -1145;
uint64_t x661 = UINT64_MAX;
static int8_t x670 = -1;
static int64_t x672 = INT64_MIN;
static int32_t t127 = 16730189;
int32_t x683 = INT32_MAX;
static uint32_t x685 = UINT32_MAX;
uint32_t x687 = UINT32_MAX;
int8_t x698 = -3;
uint64_t x702 = UINT64_MAX;
static int8_t x707 = 4;
volatile int64_t x710 = 65664LL;
int32_t t135 = 171351319;
int32_t x717 = -1;
uint64_t x734 = 4159917132896261669LLU;
int32_t t139 = -198125524;
int32_t x738 = -1;
int64_t x757 = -835677995LL;
static uint16_t x761 = 41U;
int32_t x764 = INT32_MIN;
uint32_t x775 = 473U;
uint32_t x777 = 5427989U;
int64_t x781 = -1LL;
int16_t x785 = INT16_MAX;
volatile int16_t x787 = 146;
int32_t x790 = 0;
volatile int32_t t149 = -221623071;
uint8_t x794 = UINT8_MAX;
static volatile int32_t t152 = -230;
volatile uint64_t x807 = UINT64_MAX;
static int16_t x823 = INT16_MIN;
int8_t x835 = INT8_MIN;
int16_t x855 = -1;
uint16_t x867 = 7U;
static volatile int32_t t164 = -152640;
volatile uint8_t x873 = 22U;
uint64_t x883 = UINT64_MAX;
volatile int64_t x888 = -56009617885669LL;
volatile uint32_t x890 = UINT32_MAX;
uint32_t x892 = 96973760U;
int16_t x896 = -1;
static int32_t t170 = -99788808;
uint16_t x903 = 9U;
int16_t x904 = INT16_MAX;
int8_t x907 = -11;
static uint32_t x915 = 395608U;
int16_t x922 = INT16_MAX;
int8_t x929 = -1;
static int16_t x934 = 0;
int64_t x945 = -1388285520075LL;
uint16_t x963 = UINT16_MAX;
int64_t x972 = 16587894356821102LL;
uint32_t x973 = UINT32_MAX;
uint8_t x980 = UINT8_MAX;
int8_t x982 = INT8_MIN;
int32_t t184 = 21;
volatile int8_t x986 = 15;
int8_t x992 = 1;
volatile uint8_t x993 = 10U;
volatile int8_t x994 = 0;
static int64_t x997 = -7972933LL;
uint8_t x1010 = 0U;
volatile uint8_t x1015 = UINT8_MAX;
volatile int32_t t191 = 272;
volatile int32_t t192 = 0;
uint16_t x1029 = 1U;
volatile int32_t x1039 = -1;
int8_t x1044 = INT8_MIN;
volatile int32_t t196 = 3;
uint8_t x1054 = 7U;
int32_t t198 = -6595751;
uint32_t x1060 = UINT32_MAX;


void f0(void) {
    	static volatile uint16_t x1 = 4926U;
	uint32_t x2 = 54U;
	static int32_t x4 = 1400;
	int32_t t0 = 21;

    t0 = ((x1*x2)!=(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = 2U;
	int32_t x8 = -10268;
	int32_t t1 = 1292;

    t1 = ((x5*x6)!=(x7|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 20504;
	uint32_t x10 = UINT32_MAX;
	static uint8_t x11 = 18U;
	volatile int32_t t2 = -889296;

    t2 = ((x9*x10)!=(x11|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x14 = 56109LLU;
	uint64_t x15 = UINT64_MAX;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -29654;

    t3 = ((x13*x14)!=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 543921009676LL;
	uint16_t x18 = UINT16_MAX;
	volatile int16_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	static volatile int32_t t4 = 816;

    t4 = ((x17*x18)!=(x19|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 3;

    t5 = ((x21*x22)!=(x23|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -67555575023LL;
	int16_t x26 = INT16_MAX;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -25;

    t6 = ((x25*x26)!=(x27|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 47U;
	static int32_t t7 = 2961;

    t7 = ((x29*x30)!=(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = 1;
	static volatile uint16_t x39 = 1027U;
	static int32_t t8 = -1;

    t8 = ((x37*x38)!=(x39|x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 16U;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = -1;
	volatile int8_t x44 = -1;
	int32_t t9 = 4049200;

    t9 = ((x41*x42)!=(x43|x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x45 = 0U;
	int16_t x46 = -1;
	volatile int32_t t10 = -146623981;

    t10 = ((x45*x46)!=(x47|x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -1;
	volatile uint8_t x50 = 0U;
	volatile uint8_t x52 = 5U;
	int32_t t11 = -23407;

    t11 = ((x49*x50)!=(x51|x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MIN;
	volatile int16_t x58 = INT16_MAX;
	static int32_t t12 = -1;

    t12 = ((x57*x58)!=(x59|x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x62 = INT16_MIN;
	uint8_t x64 = 0U;
	int32_t t13 = -1435;

    t13 = ((x61*x62)!=(x63|x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x65 = 1906;
	uint32_t x66 = UINT32_MAX;
	volatile int32_t x67 = -1;
	int16_t x68 = INT16_MIN;

    t14 = ((x65*x66)!=(x67|x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x70 = 3U;
	int32_t x71 = INT32_MAX;
	static int32_t x72 = -1;
	volatile int32_t t15 = 987965;

    t15 = ((x69*x70)!=(x71|x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = 0U;
	static volatile int32_t x74 = INT32_MIN;
	uint64_t x75 = 7308LLU;
	int32_t t16 = -138;

    t16 = ((x73*x74)!=(x75|x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile uint64_t x84 = 426LLU;
	int32_t t17 = -111556;

    t17 = ((x81*x82)!=(x83|x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x85 = -10;
	uint8_t x86 = 4U;
	volatile int16_t x87 = INT16_MAX;
	int32_t t18 = 86896;

    t18 = ((x85*x86)!=(x87|x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = 3;
	uint8_t x91 = UINT8_MAX;

    t19 = ((x89*x90)!=(x91|x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = 199075192;
	int64_t x102 = -1339896081LL;
	int32_t t20 = -104717;

    t20 = ((x101*x102)!=(x103|x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = -1;
	volatile int8_t x107 = -3;
	int32_t x108 = -5;
	int32_t t21 = 680367;

    t21 = ((x105*x106)!=(x107|x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = 304229LLU;
	int8_t x110 = INT8_MAX;
	volatile int32_t t22 = 7;

    t22 = ((x109*x110)!=(x111|x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 20U;
	volatile uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	int32_t t23 = -202629317;

    t23 = ((x113*x114)!=(x115|x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	int16_t x120 = -10;
	int32_t t24 = -1;

    t24 = ((x117*x118)!=(x119|x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = 1;
	uint32_t x127 = 680149U;
	volatile uint16_t x128 = 27U;
	static volatile int32_t t25 = 127;

    t25 = ((x125*x126)!=(x127|x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = 1;
	volatile int64_t x130 = -1LL;
	uint8_t x132 = UINT8_MAX;
	int32_t t26 = 42463;

    t26 = ((x129*x130)!=(x131|x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x134 = -46456439349458136LL;
	int32_t x135 = INT32_MAX;
	static int32_t x136 = INT32_MIN;
	int32_t t27 = 973;

    t27 = ((x133*x134)!=(x135|x136));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = -32LL;
	static volatile int64_t x138 = -1LL;
	int32_t x139 = INT32_MIN;

    t28 = ((x137*x138)!=(x139|x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x141 = 65U;
	volatile int8_t x142 = INT8_MAX;
	int32_t x143 = INT32_MAX;
	int16_t x144 = -8619;

    t29 = ((x141*x142)!=(x143|x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x145 = 11U;
	uint32_t x146 = 1000333U;
	int64_t x147 = 266700LL;
	uint16_t x148 = 1U;

    t30 = ((x145*x146)!=(x147|x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = INT32_MAX;
	uint16_t x150 = 0U;
	static int64_t x151 = INT64_MAX;
	volatile int8_t x152 = 3;

    t31 = ((x149*x150)!=(x151|x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x153 = INT32_MAX;
	int8_t x154 = -1;
	int64_t x155 = INT64_MAX;
	int32_t x156 = 371;
	volatile int32_t t32 = 330819686;

    t32 = ((x153*x154)!=(x155|x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = 4;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t33 = 380921;

    t33 = ((x157*x158)!=(x159|x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x161 = 18812682U;
	int32_t x162 = 2839986;
	static uint16_t x163 = 1749U;
	volatile int32_t t34 = -86;

    t34 = ((x161*x162)!=(x163|x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x165 = -1;
	int8_t x166 = -1;
	uint16_t x168 = 656U;

    t35 = ((x165*x166)!=(x167|x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x177 = 8U;
	static uint32_t x178 = 1113U;
	uint32_t x179 = 0U;
	uint8_t x180 = UINT8_MAX;

    t36 = ((x177*x178)!=(x179|x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = INT8_MIN;
	uint64_t x182 = 27284982463828LLU;
	volatile int16_t x183 = 72;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t37 = -105813;

    t37 = ((x181*x182)!=(x183|x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 8523LLU;
	static int64_t x187 = INT64_MIN;
	int32_t t38 = 0;

    t38 = ((x185*x186)!=(x187|x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int16_t x192 = INT16_MIN;
	int32_t t39 = -33;

    t39 = ((x189*x190)!=(x191|x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x193 = 0U;
	int32_t x194 = 60;
	uint32_t x196 = 3943U;
	volatile int32_t t40 = -23;

    t40 = ((x193*x194)!=(x195|x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x198 = INT16_MIN;
	int32_t x200 = 12;
	int32_t t41 = 92;

    t41 = ((x197*x198)!=(x199|x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = -1;
	int32_t x202 = INT32_MAX;
	int64_t x203 = -260604825LL;
	int32_t x204 = INT32_MIN;
	static int32_t t42 = 114518295;

    t42 = ((x201*x202)!=(x203|x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x205 = INT16_MIN;
	static int64_t x206 = 13092455470LL;
	int8_t x208 = INT8_MIN;
	int32_t t43 = -796528;

    t43 = ((x205*x206)!=(x207|x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MIN;
	int8_t x212 = 0;
	volatile int32_t t44 = -260116685;

    t44 = ((x209*x210)!=(x211|x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MAX;
	static int32_t x216 = INT32_MIN;
	int32_t t45 = -257576627;

    t45 = ((x213*x214)!=(x215|x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint64_t x219 = 15180126267LLU;
	int32_t t46 = 120887;

    t46 = ((x217*x218)!=(x219|x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x221 = -6;
	volatile uint64_t x222 = 34272705539223752LLU;
	static int16_t x223 = INT16_MIN;
	volatile int32_t t47 = -23168770;

    t47 = ((x221*x222)!=(x223|x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x225 = -1LL;
	static int16_t x226 = -1;
	int32_t x227 = INT32_MIN;
	int64_t x228 = -1LL;
	static int32_t t48 = 94777173;

    t48 = ((x225*x226)!=(x227|x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = 14727;
	static volatile uint64_t x234 = 29592327317881990LLU;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 4U;
	volatile int32_t t49 = -34506478;

    t49 = ((x233*x234)!=(x235|x236));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x241 = INT8_MIN;
	uint32_t x242 = 1U;
	static int64_t x243 = INT64_MIN;
	static volatile int64_t x244 = INT64_MIN;
	int32_t t50 = 1;

    t50 = ((x241*x242)!=(x243|x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t51 = 381715059;

    t51 = ((x245*x246)!=(x247|x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x253 = INT8_MAX;
	uint64_t x254 = 60510828LLU;
	int16_t x256 = 1;
	int32_t t52 = -1524701;

    t52 = ((x253*x254)!=(x255|x256));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x262 = 1272062508LL;
	volatile uint32_t x263 = UINT32_MAX;
	uint8_t x264 = UINT8_MAX;

    t53 = ((x261*x262)!=(x263|x264));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x270 = INT64_MAX;
	volatile uint8_t x271 = 0U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t54 = -623526;

    t54 = ((x269*x270)!=(x271|x272));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x281 = INT8_MAX;
	int8_t x282 = 0;
	uint16_t x283 = 24717U;
	int8_t x284 = -1;
	volatile int32_t t55 = -207;

    t55 = ((x281*x282)!=(x283|x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x289 = INT32_MAX;
	static int16_t x290 = -1;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -1;
	volatile int32_t t56 = -690918;

    t56 = ((x289*x290)!=(x291|x292));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x293 = 12U;
	uint32_t x295 = 1033868U;
	uint64_t x296 = 0LLU;
	volatile int32_t t57 = -12230767;

    t57 = ((x293*x294)!=(x295|x296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = 1;
	uint64_t x315 = 975020965699508LLU;
	volatile int32_t t58 = -1;

    t58 = ((x313*x314)!=(x315|x316));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x317 = INT8_MAX;
	static int8_t x318 = -1;
	volatile uint32_t x319 = 0U;

    t59 = ((x317*x318)!=(x319|x320));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x322 = 20;
	volatile int16_t x324 = INT16_MAX;
	int32_t t60 = 52466;

    t60 = ((x321*x322)!=(x323|x324));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x325 = 1U;
	int64_t x326 = -126528635867943LL;
	static volatile int32_t x327 = INT32_MAX;
	volatile int32_t t61 = 24839596;

    t61 = ((x325*x326)!=(x327|x328));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile int64_t x330 = -3991928059LL;
	int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t62 = -208244;

    t62 = ((x329*x330)!=(x331|x332));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x334 = 15981;
	static int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	volatile int32_t t63 = 9269;

    t63 = ((x333*x334)!=(x335|x336));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x338 = INT64_MIN;

    t64 = ((x337*x338)!=(x339|x340));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x342 = 12183342LLU;
	uint64_t x343 = 32390LLU;
	int32_t x344 = INT32_MIN;
	volatile int32_t t65 = -74518;

    t65 = ((x341*x342)!=(x343|x344));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	uint64_t x348 = 427718LLU;
	int32_t t66 = 27129;

    t66 = ((x345*x346)!=(x347|x348));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x353 = -474666177LL;
	int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	int32_t t67 = 0;

    t67 = ((x353*x354)!=(x355|x356));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x357 = UINT64_MAX;
	static volatile int16_t x358 = INT16_MIN;
	int8_t x360 = INT8_MIN;
	static int32_t t68 = 1344948;

    t68 = ((x357*x358)!=(x359|x360));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 1255617U;
	int32_t x363 = 190423;
	uint64_t x364 = 2672LLU;
	volatile int32_t t69 = -25943;

    t69 = ((x361*x362)!=(x363|x364));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x370 = INT8_MAX;
	volatile int32_t x372 = INT32_MIN;
	int32_t t70 = 234953111;

    t70 = ((x369*x370)!=(x371|x372));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x373 = UINT16_MAX;
	static int64_t x375 = INT64_MIN;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t71 = -32;

    t71 = ((x373*x374)!=(x375|x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x378 = 7U;
	int8_t x379 = INT8_MIN;
	int16_t x380 = 6;
	volatile int32_t t72 = -2;

    t72 = ((x377*x378)!=(x379|x380));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x381 = INT16_MIN;
	static uint32_t x382 = 487964U;
	uint8_t x383 = 5U;
	static int64_t x384 = 15924616967LL;
	int32_t t73 = 0;

    t73 = ((x381*x382)!=(x383|x384));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x385 = INT32_MAX;
	uint64_t x386 = 3850101627834LLU;
	int16_t x387 = INT16_MIN;

    t74 = ((x385*x386)!=(x387|x388));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x389 = -1LL;
	static volatile int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	static int64_t x392 = INT64_MIN;
	int32_t t75 = 144;

    t75 = ((x389*x390)!=(x391|x392));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t76 = 77795;

    t76 = ((x393*x394)!=(x395|x396));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x405 = 953U;
	volatile uint32_t x406 = UINT32_MAX;
	int32_t t77 = 128234;

    t77 = ((x405*x406)!=(x407|x408));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	int32_t x410 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t78 = 31;

    t78 = ((x409*x410)!=(x411|x412));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x422 = -222954824422544LL;
	int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MIN;
	volatile int32_t t79 = 6828963;

    t79 = ((x421*x422)!=(x423|x424));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x425 = -1;
	int16_t x426 = 663;
	uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 4U;
	int32_t t80 = -183489093;

    t80 = ((x425*x426)!=(x427|x428));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x429 = 12710LLU;
	int8_t x430 = 3;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t81 = 337;

    t81 = ((x429*x430)!=(x431|x432));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x434 = -7;
	int64_t x435 = 58970329158276526LL;

    t82 = ((x433*x434)!=(x435|x436));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x437 = INT32_MIN;
	uint8_t x439 = 12U;
	volatile int32_t t83 = 16;

    t83 = ((x437*x438)!=(x439|x440));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x441 = 91255U;
	int32_t x442 = INT32_MIN;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t t84 = -51;

    t84 = ((x441*x442)!=(x443|x444));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x450 = -1;
	volatile int32_t t85 = -6;

    t85 = ((x449*x450)!=(x451|x452));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x457 = UINT32_MAX;
	static int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = UINT64_MAX;

    t86 = ((x457*x458)!=(x459|x460));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x461 = 0LLU;
	int8_t x462 = INT8_MIN;
	int32_t x463 = INT32_MIN;
	int8_t x464 = 34;
	int32_t t87 = -25166168;

    t87 = ((x461*x462)!=(x463|x464));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x466 = 163583LLU;
	int32_t x467 = 91745598;
	int64_t x468 = INT64_MIN;
	int32_t t88 = -29;

    t88 = ((x465*x466)!=(x467|x468));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x469 = 128864788192618LLU;
	int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	int32_t t89 = -1916;

    t89 = ((x469*x470)!=(x471|x472));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x474 = 4U;
	int32_t x475 = INT32_MIN;
	uint8_t x476 = UINT8_MAX;
	static int32_t t90 = 779123;

    t90 = ((x473*x474)!=(x475|x476));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x477 = INT8_MIN;
	uint64_t x478 = 82LLU;
	static uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	volatile int32_t t91 = -604221452;

    t91 = ((x477*x478)!=(x479|x480));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x482 = -1;
	uint32_t x484 = UINT32_MAX;
	static int32_t t92 = 0;

    t92 = ((x481*x482)!=(x483|x484));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x486 = INT8_MAX;
	volatile int32_t x488 = -1;
	volatile int32_t t93 = -5301;

    t93 = ((x485*x486)!=(x487|x488));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x492 = 89762;
	volatile int32_t t94 = 7127878;

    t94 = ((x489*x490)!=(x491|x492));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x493 = -456591722926602LL;
	static int16_t x494 = -19;
	static int64_t x495 = INT64_MIN;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t95 = 0;

    t95 = ((x493*x494)!=(x495|x496));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x501 = -1;
	uint64_t x502 = UINT64_MAX;
	uint8_t x503 = 16U;
	int64_t x504 = 0LL;
	volatile int32_t t96 = 2111;

    t96 = ((x501*x502)!=(x503|x504));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x510 = -1;
	int32_t x511 = INT32_MIN;
	int8_t x512 = -3;

    t97 = ((x509*x510)!=(x511|x512));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x523 = -1LL;
	uint32_t x524 = 388U;

    t98 = ((x521*x522)!=(x523|x524));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x526 = UINT8_MAX;
	volatile int8_t x527 = INT8_MIN;
	uint16_t x528 = 8189U;

    t99 = ((x525*x526)!=(x527|x528));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x529 = -1;
	static int8_t x530 = INT8_MIN;
	int16_t x531 = -7;
	uint16_t x532 = UINT16_MAX;
	int32_t t100 = 1;

    t100 = ((x529*x530)!=(x531|x532));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x533 = 13479U;
	static int32_t x535 = INT32_MIN;
	int8_t x536 = -1;
	volatile int32_t t101 = -109939453;

    t101 = ((x533*x534)!=(x535|x536));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x543 = INT64_MAX;
	volatile int16_t x544 = INT16_MAX;
	volatile int32_t t102 = -40;

    t102 = ((x541*x542)!=(x543|x544));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x546 = 35;
	volatile uint8_t x547 = 0U;
	int16_t x548 = INT16_MAX;
	int32_t t103 = 441885;

    t103 = ((x545*x546)!=(x547|x548));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x549 = -1;
	int32_t x551 = INT32_MIN;
	volatile int16_t x552 = -1;
	volatile int32_t t104 = 437511;

    t104 = ((x549*x550)!=(x551|x552));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x553 = 4931;
	static int16_t x554 = -705;
	volatile uint16_t x555 = UINT16_MAX;
	volatile uint8_t x556 = UINT8_MAX;
	static volatile int32_t t105 = 1638;

    t105 = ((x553*x554)!=(x555|x556));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x557 = 6502114U;
	int8_t x559 = -1;
	volatile uint32_t x560 = 5104U;
	volatile int32_t t106 = -152;

    t106 = ((x557*x558)!=(x559|x560));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x561 = 24748145006395LLU;
	uint8_t x563 = 0U;
	int64_t x564 = 599LL;
	volatile int32_t t107 = -1819144;

    t107 = ((x561*x562)!=(x563|x564));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x573 = 209U;
	volatile uint64_t x574 = 11LLU;
	int8_t x576 = INT8_MAX;
	int32_t t108 = 440;

    t108 = ((x573*x574)!=(x575|x576));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x586 = INT32_MIN;
	int64_t x587 = 3130150747223920LL;
	volatile int32_t t109 = -210;

    t109 = ((x585*x586)!=(x587|x588));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x589 = 23275U;
	uint8_t x590 = UINT8_MAX;
	static int64_t x591 = -2955841LL;
	static uint16_t x592 = 25U;
	int32_t t110 = -1;

    t110 = ((x589*x590)!=(x591|x592));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x593 = 59123112992743390LLU;
	volatile int64_t x594 = -634008910616LL;
	uint8_t x595 = 10U;
	static int8_t x596 = -1;
	int32_t t111 = -1;

    t111 = ((x593*x594)!=(x595|x596));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x597 = UINT32_MAX;
	int8_t x598 = INT8_MIN;
	static int32_t x599 = INT32_MIN;
	int64_t x600 = -1421342815698481200LL;
	int32_t t112 = -20986145;

    t112 = ((x597*x598)!=(x599|x600));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x601 = 1U;
	static volatile uint32_t x602 = 7326U;
	volatile int32_t t113 = 114;

    t113 = ((x601*x602)!=(x603|x604));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x609 = 14U;
	uint32_t x610 = UINT32_MAX;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t114 = 951795;

    t114 = ((x609*x610)!=(x611|x612));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x613 = 1;
	static uint32_t x614 = UINT32_MAX;
	int64_t x615 = INT64_MAX;
	int16_t x616 = 15;
	volatile int32_t t115 = 500031;

    t115 = ((x613*x614)!=(x615|x616));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x621 = 62;
	volatile int64_t x622 = 324471LL;
	int64_t x623 = INT64_MIN;
	int64_t x624 = INT64_MIN;
	static volatile int32_t t116 = 61;

    t116 = ((x621*x622)!=(x623|x624));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x625 = UINT8_MAX;
	static uint64_t x626 = 116461758992977055LLU;
	int64_t x628 = 1684455017686955LL;
	int32_t t117 = 474373399;

    t117 = ((x625*x626)!=(x627|x628));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x633 = INT16_MAX;
	static int16_t x634 = -1;
	int8_t x635 = 28;
	int16_t x636 = INT16_MIN;

    t118 = ((x633*x634)!=(x635|x636));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x637 = 1744967918U;
	static volatile int8_t x638 = -1;
	static int16_t x639 = -3273;
	volatile int32_t t119 = 5;

    t119 = ((x637*x638)!=(x639|x640));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x642 = 13;
	int32_t x643 = -1186887;
	volatile int32_t x644 = -1;

    t120 = ((x641*x642)!=(x643|x644));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x646 = 2330U;
	uint16_t x647 = 0U;

    t121 = ((x645*x646)!=(x647|x648));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x649 = -151545749668LL;
	static uint64_t x650 = 4307561216532LLU;
	int8_t x651 = -1;
	uint8_t x652 = 61U;
	volatile int32_t t122 = 18151;

    t122 = ((x649*x650)!=(x651|x652));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x653 = -1;
	int32_t x654 = 3;
	int32_t x655 = INT32_MIN;
	int32_t t123 = 126;

    t123 = ((x653*x654)!=(x655|x656));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x657 = INT16_MIN;
	volatile uint32_t x658 = 9551590U;
	int64_t x659 = 167991787722056090LL;
	uint64_t x660 = 13515922208663LLU;

    t124 = ((x657*x658)!=(x659|x660));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x662 = UINT8_MAX;
	static int8_t x663 = INT8_MIN;
	int64_t x664 = INT64_MAX;
	volatile int32_t t125 = -366825;

    t125 = ((x661*x662)!=(x663|x664));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = -153402859998LL;
	static uint8_t x667 = 117U;
	int8_t x668 = 3;
	int32_t t126 = 5607422;

    t126 = ((x665*x666)!=(x667|x668));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x669 = UINT32_MAX;
	uint8_t x671 = 94U;

    t127 = ((x669*x670)!=(x671|x672));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = INT8_MIN;
	int32_t x675 = INT32_MIN;
	volatile int16_t x676 = -1;
	volatile int32_t t128 = 218;

    t128 = ((x673*x674)!=(x675|x676));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x681 = -1LL;
	static int8_t x682 = -1;
	uint8_t x684 = 3U;
	int32_t t129 = 0;

    t129 = ((x681*x682)!=(x683|x684));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x686 = UINT8_MAX;
	static volatile uint64_t x688 = 22564LLU;
	volatile int32_t t130 = 63443649;

    t130 = ((x685*x686)!=(x687|x688));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x693 = -6;
	uint8_t x694 = 31U;
	uint64_t x695 = 23343203014450LLU;
	int8_t x696 = 3;
	int32_t t131 = -113105642;

    t131 = ((x693*x694)!=(x695|x696));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x697 = INT16_MIN;
	int32_t x699 = INT32_MIN;
	volatile int32_t x700 = -279;
	int32_t t132 = -3;

    t132 = ((x697*x698)!=(x699|x700));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x701 = INT8_MIN;
	static uint8_t x703 = 26U;
	int8_t x704 = 0;
	int32_t t133 = 398778957;

    t133 = ((x701*x702)!=(x703|x704));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x705 = INT32_MAX;
	uint64_t x706 = 667477203402LLU;
	static uint64_t x708 = UINT64_MAX;
	volatile int32_t t134 = -14144;

    t134 = ((x705*x706)!=(x707|x708));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x709 = UINT8_MAX;
	uint32_t x711 = 38464143U;
	volatile int8_t x712 = INT8_MIN;

    t135 = ((x709*x710)!=(x711|x712));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x713 = -4;
	uint32_t x714 = 418U;
	static volatile int16_t x715 = -1;
	int8_t x716 = -1;
	static volatile int32_t t136 = -944533388;

    t136 = ((x713*x714)!=(x715|x716));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x718 = 13229;
	uint8_t x719 = 21U;
	int16_t x720 = -1;
	volatile int32_t t137 = 12238;

    t137 = ((x717*x718)!=(x719|x720));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x725 = INT16_MIN;
	static uint8_t x726 = 34U;
	static volatile uint32_t x727 = 31301U;
	uint64_t x728 = 1006LLU;
	volatile int32_t t138 = -116643389;

    t138 = ((x725*x726)!=(x727|x728));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x733 = UINT32_MAX;
	int16_t x735 = INT16_MIN;
	int64_t x736 = -1LL;

    t139 = ((x733*x734)!=(x735|x736));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x737 = 940153510LLU;
	static uint32_t x739 = UINT32_MAX;
	uint8_t x740 = 1U;
	volatile int32_t t140 = -244;

    t140 = ((x737*x738)!=(x739|x740));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x758 = 1926U;
	int64_t x759 = 206441087043LL;
	uint32_t x760 = 995565834U;
	static volatile int32_t t141 = -53615570;

    t141 = ((x757*x758)!=(x759|x760));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x762 = -24;
	int8_t x763 = INT8_MAX;
	volatile int32_t t142 = -3;

    t142 = ((x761*x762)!=(x763|x764));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x765 = 1;
	uint64_t x766 = 936886950296952847LLU;
	uint32_t x767 = 2782U;
	volatile int8_t x768 = -1;
	int32_t t143 = -268420;

    t143 = ((x765*x766)!=(x767|x768));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x769 = 1;
	static uint16_t x770 = 1874U;
	volatile int64_t x771 = -1LL;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t144 = 323364;

    t144 = ((x769*x770)!=(x771|x772));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x773 = INT64_MAX;
	uint16_t x774 = 0U;
	static int16_t x776 = -3;
	int32_t t145 = -381350;

    t145 = ((x773*x774)!=(x775|x776));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x778 = 1455167141LLU;
	int64_t x779 = INT64_MAX;
	volatile uint64_t x780 = 30217092952LLU;
	volatile int32_t t146 = 0;

    t146 = ((x777*x778)!=(x779|x780));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x782 = -1;
	int64_t x783 = -1LL;
	int8_t x784 = -5;
	static volatile int32_t t147 = -2005909;

    t147 = ((x781*x782)!=(x783|x784));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x786 = INT16_MIN;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t148 = -8360516;

    t148 = ((x785*x786)!=(x787|x788));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x789 = -1LL;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = INT32_MIN;

    t149 = ((x789*x790)!=(x791|x792));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x793 = 24U;
	volatile int8_t x795 = -1;
	static int32_t x796 = -101;
	static int32_t t150 = 116543;

    t150 = ((x793*x794)!=(x795|x796));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x797 = UINT64_MAX;
	uint8_t x798 = 16U;
	uint32_t x799 = 4U;
	volatile uint8_t x800 = UINT8_MAX;
	volatile int32_t t151 = 29795465;

    t151 = ((x797*x798)!=(x799|x800));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x801 = INT32_MIN;
	uint64_t x802 = 282164400873103247LLU;
	static int64_t x803 = INT64_MIN;
	static uint64_t x804 = 783760836310756LLU;

    t152 = ((x801*x802)!=(x803|x804));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x805 = INT32_MIN;
	static uint64_t x806 = 3402328478374445LLU;
	static int32_t x808 = -1;
	volatile int32_t t153 = -172;

    t153 = ((x805*x806)!=(x807|x808));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x813 = 48544421LLU;
	volatile int16_t x814 = INT16_MIN;
	int32_t x815 = INT32_MIN;
	int8_t x816 = -3;
	volatile int32_t t154 = 2;

    t154 = ((x813*x814)!=(x815|x816));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x817 = UINT32_MAX;
	int32_t x818 = INT32_MIN;
	int16_t x819 = -2159;
	int32_t x820 = -59083;
	int32_t t155 = 95;

    t155 = ((x817*x818)!=(x819|x820));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x821 = INT32_MIN;
	uint16_t x822 = 1U;
	static int16_t x824 = INT16_MIN;
	volatile int32_t t156 = -433228;

    t156 = ((x821*x822)!=(x823|x824));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x825 = -1;
	uint8_t x826 = UINT8_MAX;
	int16_t x827 = -1;
	int8_t x828 = -35;
	volatile int32_t t157 = -280;

    t157 = ((x825*x826)!=(x827|x828));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x829 = 48U;
	uint8_t x830 = 44U;
	volatile uint16_t x831 = UINT16_MAX;
	static int16_t x832 = 664;
	int32_t t158 = 38177238;

    t158 = ((x829*x830)!=(x831|x832));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x833 = 30U;
	uint32_t x834 = 25870U;
	int64_t x836 = INT64_MIN;
	int32_t t159 = -2036247;

    t159 = ((x833*x834)!=(x835|x836));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x841 = 1163U;
	int16_t x842 = -1;
	uint64_t x843 = 686194LLU;
	static int8_t x844 = 1;
	volatile int32_t t160 = -583789698;

    t160 = ((x841*x842)!=(x843|x844));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x845 = INT8_MIN;
	uint32_t x846 = UINT32_MAX;
	uint64_t x847 = 4421699463263512LLU;
	uint64_t x848 = 434384LLU;
	int32_t t161 = -2251;

    t161 = ((x845*x846)!=(x847|x848));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x849 = UINT32_MAX;
	volatile uint16_t x850 = 3225U;
	volatile int16_t x851 = INT16_MIN;
	uint64_t x852 = UINT64_MAX;
	int32_t t162 = 31179;

    t162 = ((x849*x850)!=(x851|x852));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x853 = INT32_MIN;
	uint64_t x854 = 13787LLU;
	static int32_t x856 = INT32_MAX;
	int32_t t163 = 1599436;

    t163 = ((x853*x854)!=(x855|x856));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x865 = UINT64_MAX;
	uint8_t x866 = UINT8_MAX;
	uint8_t x868 = 14U;

    t164 = ((x865*x866)!=(x867|x868));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x874 = UINT8_MAX;
	int8_t x875 = INT8_MIN;
	int8_t x876 = 10;
	static int32_t t165 = 14517922;

    t165 = ((x873*x874)!=(x875|x876));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x877 = UINT8_MAX;
	uint8_t x878 = 2U;
	int16_t x879 = 236;
	static int16_t x880 = -1;
	int32_t t166 = -488577085;

    t166 = ((x877*x878)!=(x879|x880));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x881 = 19;
	int8_t x882 = 7;
	volatile int64_t x884 = -1LL;
	int32_t t167 = -16;

    t167 = ((x881*x882)!=(x883|x884));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x885 = 1U;
	static uint16_t x886 = 6U;
	uint8_t x887 = UINT8_MAX;
	static int32_t t168 = -5;

    t168 = ((x885*x886)!=(x887|x888));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x889 = 345913837313558691LLU;
	uint16_t x891 = 1315U;
	int32_t t169 = 326173;

    t169 = ((x889*x890)!=(x891|x892));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x893 = INT8_MAX;
	uint32_t x894 = 12722U;
	uint16_t x895 = 194U;

    t170 = ((x893*x894)!=(x895|x896));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x901 = 31214U;
	int32_t x902 = -100;
	volatile int32_t t171 = 375441;

    t171 = ((x901*x902)!=(x903|x904));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x905 = 36597592LL;
	uint32_t x906 = UINT32_MAX;
	static int64_t x908 = -1LL;
	volatile int32_t t172 = 46;

    t172 = ((x905*x906)!=(x907|x908));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x913 = -1;
	uint16_t x914 = 337U;
	volatile int8_t x916 = INT8_MIN;
	int32_t t173 = -22;

    t173 = ((x913*x914)!=(x915|x916));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x921 = 11159U;
	uint32_t x923 = UINT32_MAX;
	volatile int16_t x924 = INT16_MAX;
	int32_t t174 = -970;

    t174 = ((x921*x922)!=(x923|x924));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x925 = 202634478U;
	uint32_t x926 = 126801700U;
	volatile uint32_t x927 = UINT32_MAX;
	int64_t x928 = -60173870703LL;
	volatile int32_t t175 = -44;

    t175 = ((x925*x926)!=(x927|x928));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x930 = 12;
	int64_t x931 = 331273LL;
	volatile uint8_t x932 = 17U;
	int32_t t176 = 184781969;

    t176 = ((x929*x930)!=(x931|x932));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x933 = -1;
	int32_t x935 = -1;
	volatile int8_t x936 = INT8_MAX;
	volatile int32_t t177 = 9;

    t177 = ((x933*x934)!=(x935|x936));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x941 = INT32_MAX;
	static int64_t x942 = -1LL;
	uint16_t x943 = UINT16_MAX;
	int64_t x944 = INT64_MIN;
	int32_t t178 = -27;

    t178 = ((x941*x942)!=(x943|x944));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x946 = -28;
	uint32_t x947 = UINT32_MAX;
	volatile int32_t x948 = -1;
	int32_t t179 = 4536;

    t179 = ((x945*x946)!=(x947|x948));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x961 = 65350747766849LLU;
	volatile uint16_t x962 = UINT16_MAX;
	int16_t x964 = INT16_MAX;
	int32_t t180 = -836523881;

    t180 = ((x961*x962)!=(x963|x964));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x969 = 2947958602623LLU;
	int32_t x970 = -537251;
	static int8_t x971 = INT8_MIN;
	int32_t t181 = 548303;

    t181 = ((x969*x970)!=(x971|x972));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x974 = INT16_MIN;
	int8_t x975 = -1;
	int16_t x976 = INT16_MIN;
	int32_t t182 = -792;

    t182 = ((x973*x974)!=(x975|x976));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x977 = INT16_MIN;
	uint8_t x978 = 87U;
	volatile int64_t x979 = -1114424453LL;
	static volatile int32_t t183 = 81;

    t183 = ((x977*x978)!=(x979|x980));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x981 = 0U;
	static uint32_t x983 = 67U;
	static int8_t x984 = INT8_MAX;

    t184 = ((x981*x982)!=(x983|x984));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x985 = 27443LLU;
	volatile uint64_t x987 = 234204472134LLU;
	int64_t x988 = INT64_MIN;
	int32_t t185 = 183;

    t185 = ((x985*x986)!=(x987|x988));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x989 = INT16_MAX;
	uint16_t x990 = 4955U;
	int64_t x991 = -566479998846LL;
	int32_t t186 = 0;

    t186 = ((x989*x990)!=(x991|x992));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x995 = UINT8_MAX;
	uint64_t x996 = 358538136614767LLU;
	int32_t t187 = 1;

    t187 = ((x993*x994)!=(x995|x996));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x998 = -1;
	int64_t x999 = INT64_MIN;
	int16_t x1000 = INT16_MAX;
	int32_t t188 = -85;

    t188 = ((x997*x998)!=(x999|x1000));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1009 = -56922260;
	uint8_t x1011 = 7U;
	uint16_t x1012 = 780U;
	volatile int32_t t189 = -1365;

    t189 = ((x1009*x1010)!=(x1011|x1012));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1013 = -1;
	volatile uint32_t x1014 = 16073468U;
	int32_t x1016 = 38401;
	static volatile int32_t t190 = 78067;

    t190 = ((x1013*x1014)!=(x1015|x1016));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1017 = -1;
	int16_t x1018 = INT16_MAX;
	static int64_t x1019 = -1LL;
	volatile uint64_t x1020 = 259LLU;

    t191 = ((x1017*x1018)!=(x1019|x1020));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1021 = INT32_MIN;
	uint64_t x1022 = 3419979LLU;
	volatile int32_t x1023 = -4914;
	int8_t x1024 = INT8_MIN;

    t192 = ((x1021*x1022)!=(x1023|x1024));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1025 = 1000;
	uint32_t x1026 = UINT32_MAX;
	int64_t x1027 = INT64_MAX;
	volatile int8_t x1028 = INT8_MIN;
	volatile int32_t t193 = -25299;

    t193 = ((x1025*x1026)!=(x1027|x1028));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1030 = 1;
	uint8_t x1031 = 0U;
	static int8_t x1032 = -1;
	int32_t t194 = 6241;

    t194 = ((x1029*x1030)!=(x1031|x1032));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1037 = 3777582967024635LLU;
	int32_t x1038 = INT32_MAX;
	int64_t x1040 = INT64_MAX;
	int32_t t195 = 28;

    t195 = ((x1037*x1038)!=(x1039|x1040));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1041 = INT8_MIN;
	int16_t x1042 = -6;
	int16_t x1043 = -1;

    t196 = ((x1041*x1042)!=(x1043|x1044));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1049 = 50U;
	uint32_t x1050 = 0U;
	uint64_t x1051 = 3224257044LLU;
	int32_t x1052 = -1;
	volatile int32_t t197 = -2;

    t197 = ((x1049*x1050)!=(x1051|x1052));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1053 = UINT64_MAX;
	volatile int32_t x1055 = INT32_MIN;
	uint16_t x1056 = UINT16_MAX;

    t198 = ((x1053*x1054)!=(x1055|x1056));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1057 = UINT32_MAX;
	int32_t x1058 = -3315329;
	int16_t x1059 = INT16_MAX;
	static volatile int32_t t199 = 63860950;

    t199 = ((x1057*x1058)!=(x1059|x1060));

    if (t199 != 1) { NG(); } else { ; }
	
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

