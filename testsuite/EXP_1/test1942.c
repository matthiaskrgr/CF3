
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

static int64_t x2 = 17389937070018064LL;
uint32_t x8 = 4U;
uint16_t x11 = UINT16_MAX;
uint16_t x12 = 27U;
static int32_t x14 = INT32_MIN;
int32_t t4 = -1200370;
int32_t t8 = 1695963;
static uint32_t x39 = 20248U;
uint64_t x46 = 7414848560LLU;
volatile int32_t x47 = -23167;
int16_t x48 = -270;
uint16_t x52 = 15641U;
volatile int8_t x53 = INT8_MIN;
volatile uint64_t x54 = 1630951276958505482LLU;
int16_t x55 = INT16_MIN;
static int64_t x57 = -26617920999225395LL;
int16_t x58 = 234;
static int8_t x59 = INT8_MIN;
int32_t t15 = -2987;
volatile int32_t x74 = -1;
uint64_t x75 = 6392521644376LLU;
int16_t x76 = 1517;
uint32_t x77 = 2U;
static uint16_t x80 = UINT16_MAX;
volatile uint32_t x84 = 15772047U;
int32_t t20 = -30800599;
volatile int8_t x85 = INT8_MAX;
int16_t x88 = -18;
int64_t x89 = -1LL;
static uint64_t x92 = UINT64_MAX;
uint16_t x94 = UINT16_MAX;
int8_t x103 = -1;
int8_t x113 = INT8_MIN;
volatile int8_t x115 = INT8_MAX;
static int16_t x116 = INT16_MAX;
uint64_t x118 = 2285LLU;
int32_t x120 = INT32_MIN;
static uint64_t x122 = UINT64_MAX;
int32_t x131 = INT32_MAX;
int16_t x149 = 2641;
uint64_t x151 = UINT64_MAX;
int8_t x152 = INT8_MIN;
volatile int32_t t38 = 6;
static uint8_t x158 = 0U;
uint64_t x159 = UINT64_MAX;
int32_t t41 = 1993136;
uint64_t x180 = 23831LLU;
volatile int8_t x182 = INT8_MIN;
uint16_t x184 = UINT16_MAX;
int8_t x192 = INT8_MIN;
volatile uint8_t x197 = UINT8_MAX;
int64_t x207 = INT64_MIN;
volatile int32_t t51 = 120843;
volatile int32_t x209 = 1366386;
int8_t x213 = 53;
int16_t x215 = -1;
static int32_t x221 = INT32_MIN;
static int32_t x228 = -67410;
int8_t x229 = 2;
static uint32_t x230 = UINT32_MAX;
static int8_t x238 = INT8_MAX;
static volatile int32_t t59 = -542591989;
volatile int32_t x245 = -1;
static int8_t x249 = INT8_MAX;
int8_t x260 = INT8_MIN;
volatile int32_t t65 = -5;
int8_t x271 = INT8_MAX;
uint64_t x276 = 68472301LLU;
static volatile int32_t t70 = -1;
int64_t x286 = -1LL;
int32_t x290 = -1;
static volatile int32_t t72 = -1;
uint32_t x297 = 0U;
uint32_t x298 = 387925U;
static volatile int32_t t75 = 50272240;
int8_t x305 = INT8_MAX;
int32_t t77 = -1;
int32_t t78 = -338655;
uint16_t x318 = 2818U;
static uint64_t x319 = UINT64_MAX;
volatile int16_t x321 = -1356;
uint64_t x323 = UINT64_MAX;
static uint32_t x334 = 0U;
int32_t x340 = INT32_MIN;
static int32_t t85 = 59346477;
static int32_t x348 = INT32_MAX;
int32_t t87 = 46790268;
static uint32_t x354 = UINT32_MAX;
static int16_t x355 = 1;
static volatile int16_t x364 = INT16_MIN;
uint64_t x368 = 1296524603323584LLU;
volatile int32_t t91 = 52;
static volatile int8_t x370 = INT8_MIN;
int16_t x382 = 602;
int8_t x384 = INT8_MIN;
volatile int32_t t95 = -898;
int32_t x392 = INT32_MIN;
int32_t t97 = -1562483;
int32_t t100 = 57780357;
uint8_t x405 = 2U;
static int32_t t101 = 0;
static volatile int64_t x412 = INT64_MIN;
volatile uint8_t x414 = UINT8_MAX;
static volatile uint64_t x432 = 484598823LLU;
static int32_t t108 = -86449974;
int16_t x443 = INT16_MIN;
int16_t x449 = INT16_MIN;
int32_t x459 = INT32_MIN;
uint16_t x468 = 5559U;
static uint64_t x475 = UINT64_MAX;
int8_t x477 = INT8_MAX;
int32_t t119 = 1;
static volatile int16_t x482 = INT16_MAX;
volatile int16_t x488 = 6;
static volatile int32_t t121 = 8;
int8_t x495 = INT8_MAX;
uint32_t x497 = 13968U;
int16_t x498 = INT16_MIN;
int32_t x507 = 95873;
static int32_t t126 = 797556;
volatile int32_t x513 = -1;
static volatile int32_t t130 = 6001609;
static uint64_t x525 = UINT64_MAX;
int32_t t131 = 102871213;
volatile int32_t x532 = INT32_MIN;
static int16_t x538 = INT16_MIN;
static int32_t x545 = -23;
static uint64_t x547 = 39683787529155724LLU;
static int16_t x548 = INT16_MIN;
static volatile int16_t x550 = -9;
uint8_t x568 = 9U;
int32_t x572 = INT32_MIN;
static volatile uint32_t x578 = 395813U;
volatile int16_t x586 = INT16_MIN;
int16_t x590 = 10;
int32_t x598 = INT32_MIN;
volatile int32_t t149 = 3002878;
volatile int32_t x603 = -471;
int64_t x605 = -62078LL;
int32_t t152 = 74878;
int16_t x618 = -62;
volatile int32_t t154 = -64153335;
uint64_t x622 = UINT64_MAX;
volatile int32_t t158 = 3498;
int64_t x639 = 25494129972272313LL;
static volatile int32_t t159 = 20;
int32_t t160 = 28;
uint64_t x648 = UINT64_MAX;
int32_t x649 = INT32_MIN;
int8_t x650 = INT8_MIN;
volatile int32_t t162 = 203704;
int32_t x653 = INT32_MIN;
int64_t x656 = INT64_MIN;
int32_t x675 = INT32_MAX;
volatile uint8_t x679 = UINT8_MAX;
static int32_t t169 = -1;
int16_t x681 = -14410;
int8_t x683 = -1;
static uint8_t x687 = UINT8_MAX;
int8_t x693 = INT8_MIN;
uint64_t x700 = 732911589925LLU;
volatile int32_t t174 = 357809;
uint64_t x702 = 97189336710514LLU;
int32_t t178 = 5227;
int64_t x721 = -1LL;
static uint8_t x723 = 37U;
uint64_t x729 = 147003456886LLU;
static volatile int64_t x734 = 3042206LL;
volatile int32_t x735 = INT32_MIN;
static int64_t x743 = INT64_MIN;
static volatile int64_t x747 = 10497301281976307LL;
static int8_t x748 = 42;
volatile int32_t t187 = -25709681;
int8_t x755 = INT8_MAX;
static int32_t t188 = -7376868;
static volatile int8_t x757 = INT8_MIN;
static int8_t x768 = -53;
volatile uint64_t x780 = 13126684290LLU;
int32_t t196 = 10;
int64_t x791 = INT64_MIN;
int8_t x793 = INT8_MIN;
int64_t x797 = -1LL;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x3 = INT64_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = -506;

    t0 = (((x1<=x2)|x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int8_t x6 = 0;
	int16_t x7 = INT16_MAX;
	int32_t t1 = -4048622;

    t1 = (((x5<=x6)|x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x10 = -6;
	int32_t t2 = 2;

    t2 = (((x9<=x10)|x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int8_t x16 = 0;
	volatile int32_t t3 = 5995;

    t3 = (((x13<=x14)|x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -86599883;
	static uint16_t x18 = 3U;
	volatile int16_t x19 = INT16_MIN;
	static uint64_t x20 = UINT64_MAX;

    t4 = (((x17<=x18)|x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 3U;
	int8_t x22 = 61;
	uint16_t x23 = 1U;
	uint32_t x24 = 1345U;
	volatile int32_t t5 = -14;

    t5 = (((x21<=x22)|x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 2649;
	int32_t x26 = 116;
	volatile uint16_t x27 = UINT16_MAX;
	int32_t x28 = 1;
	volatile int32_t t6 = -70832;

    t6 = (((x25<=x26)|x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	static int8_t x30 = 0;
	static int8_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -1906083;

    t7 = (((x29<=x30)|x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 300U;
	static volatile uint8_t x35 = 4U;
	uint32_t x36 = UINT32_MAX;

    t8 = (((x33<=x34)|x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	static uint8_t x38 = 4U;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -31;

    t9 = (((x37<=x38)|x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	static int16_t x42 = INT16_MIN;
	static int8_t x43 = INT8_MIN;
	uint32_t x44 = 1524U;
	int32_t t10 = 5;

    t10 = (((x41<=x42)|x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 1;
	volatile int32_t t11 = 456;

    t11 = (((x45<=x46)|x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 2U;
	uint8_t x50 = UINT8_MAX;
	static volatile int64_t x51 = -1LL;
	int32_t t12 = 26635690;

    t12 = (((x49<=x50)|x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x56 = 73688435U;
	static int32_t t13 = 40;

    t13 = (((x53<=x54)|x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x60 = UINT64_MAX;
	static volatile int32_t t14 = 433;

    t14 = (((x57<=x58)|x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int32_t x62 = -13727900;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MAX;

    t15 = (((x61<=x62)|x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 0U;
	static int8_t x66 = INT8_MIN;
	uint64_t x67 = 6193588LLU;
	volatile int8_t x68 = 3;
	static volatile int32_t t16 = 5183176;

    t16 = (((x65<=x66)|x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 12960U;
	uint32_t x70 = 101U;
	int16_t x71 = 2;
	int8_t x72 = -60;
	static volatile int32_t t17 = 238714;

    t17 = (((x69<=x70)|x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	static int32_t t18 = -261274983;

    t18 = (((x73<=x74)|x75)<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	static int8_t x79 = INT8_MAX;
	static volatile int32_t t19 = 65387052;

    t19 = (((x77<=x78)|x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int64_t x82 = INT64_MIN;
	volatile int8_t x83 = -12;

    t20 = (((x81<=x82)|x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MAX;
	int8_t x87 = -1;
	int32_t t21 = -30919;

    t21 = (((x85<=x86)|x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	static uint8_t x91 = 46U;
	static int32_t t22 = 6;

    t22 = (((x89<=x90)|x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	static uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t23 = -287;

    t23 = (((x93<=x94)|x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = -18;
	int64_t x98 = -64913304980LL;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	static volatile int32_t t24 = 64521746;

    t24 = (((x97<=x98)|x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	uint16_t x104 = 201U;
	int32_t t25 = 1;

    t25 = (((x101<=x102)|x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 3;
	volatile uint64_t x106 = UINT64_MAX;
	static int8_t x107 = -1;
	uint16_t x108 = 3052U;
	volatile int32_t t26 = 73730;

    t26 = (((x105<=x106)|x107)<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	uint64_t x110 = 1400892386195LLU;
	volatile int16_t x111 = -1;
	int8_t x112 = -3;
	volatile int32_t t27 = 10;

    t27 = (((x109<=x110)|x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -1;
	int32_t t28 = 43;

    t28 = (((x113<=x114)|x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t29 = -24;

    t29 = (((x117<=x118)|x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	int8_t x123 = -4;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -117;

    t30 = (((x121<=x122)|x123)<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1270U;
	int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -118643898;

    t31 = (((x125<=x126)|x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	static int32_t x130 = INT32_MIN;
	uint64_t x132 = 0LLU;
	int32_t t32 = 2271;

    t32 = (((x129<=x130)|x131)<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = 7261000408047LL;
	int64_t x136 = -1LL;
	volatile int32_t t33 = 934776;

    t33 = (((x133<=x134)|x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	uint32_t x138 = 579U;
	int32_t x139 = INT32_MAX;
	static int64_t x140 = INT64_MAX;
	static volatile int32_t t34 = 154964230;

    t34 = (((x137<=x138)|x139)<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	volatile int8_t x143 = -5;
	int64_t x144 = INT64_MIN;
	static int32_t t35 = 1;

    t35 = (((x141<=x142)|x143)<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MAX;
	volatile int16_t x147 = INT16_MAX;
	uint32_t x148 = 251346U;
	volatile int32_t t36 = -351972;

    t36 = (((x145<=x146)|x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = INT16_MAX;
	volatile int32_t t37 = 2269;

    t37 = (((x149<=x150)|x151)<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 10;
	volatile int64_t x154 = 225959258LL;
	static int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;

    t38 = (((x153<=x154)|x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	static int32_t x160 = -10;
	int32_t t39 = 3;

    t39 = (((x157<=x158)|x159)<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = UINT32_MAX;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 24237;

    t40 = (((x161<=x162)|x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = 1U;
	static volatile uint32_t x166 = 375015411U;
	uint8_t x167 = 30U;
	static int64_t x168 = 436411741118LL;

    t41 = (((x165<=x166)|x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	uint64_t x170 = 812847016019175667LLU;
	int16_t x171 = INT16_MAX;
	int16_t x172 = -3285;
	int32_t t42 = -415969;

    t42 = (((x169<=x170)|x171)<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -1LL;
	static volatile int64_t x175 = -438864361293LL;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 3281626;

    t43 = (((x173<=x174)|x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MAX;
	int16_t x179 = -1;
	int32_t t44 = -7;

    t44 = (((x177<=x178)|x179)<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	uint32_t x183 = 579U;
	int32_t t45 = 1287551;

    t45 = (((x181<=x182)|x183)<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static int32_t x186 = -2270094;
	static int64_t x187 = 81011099987855LL;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 1471732;

    t46 = (((x185<=x186)|x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	uint64_t x190 = 375998193226589LLU;
	int16_t x191 = 52;
	volatile int32_t t47 = 12923088;

    t47 = (((x189<=x190)|x191)<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = 1323;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	static uint16_t x196 = UINT16_MAX;
	static int32_t t48 = -1219084;

    t48 = (((x193<=x194)|x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	uint8_t x199 = 69U;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 17063;

    t49 = (((x197<=x198)|x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int16_t x202 = 61;
	volatile int32_t x203 = -2970353;
	int16_t x204 = -1;
	volatile int32_t t50 = 3043931;

    t50 = (((x201<=x202)|x203)<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static volatile int32_t x206 = INT32_MIN;
	int32_t x208 = -743659;

    t51 = (((x205<=x206)|x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = INT16_MAX;
	int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -4362992;

    t52 = (((x209<=x210)|x211)<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x214 = -1;
	volatile int64_t x216 = 9138312505LL;
	volatile int32_t t53 = -3113;

    t53 = (((x213<=x214)|x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MAX;
	static uint64_t x218 = 2413061794964353491LLU;
	int32_t x219 = INT32_MIN;
	static uint32_t x220 = 585U;
	volatile int32_t t54 = -80792468;

    t54 = (((x217<=x218)|x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int8_t x224 = -3;
	volatile int32_t t55 = 4616583;

    t55 = (((x221<=x222)|x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -7LL;
	volatile int16_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	int32_t t56 = -16;

    t56 = (((x225<=x226)|x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x231 = 1;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -24366;

    t57 = (((x229<=x230)|x231)<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MAX;
	uint8_t x235 = UINT8_MAX;
	static uint8_t x236 = 9U;
	volatile int32_t t58 = 1;

    t58 = (((x233<=x234)|x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 13U;
	static uint8_t x239 = 2U;
	static volatile int8_t x240 = 3;

    t59 = (((x237<=x238)|x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = 0;
	static int16_t x242 = INT16_MIN;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = -1;
	volatile int32_t t60 = 3151;

    t60 = (((x241<=x242)|x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	volatile int8_t x247 = 0;
	uint64_t x248 = 4LLU;
	static int32_t t61 = 7;

    t61 = (((x245<=x246)|x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 1U;
	volatile uint8_t x252 = 1U;
	int32_t t62 = 531;

    t62 = (((x249<=x250)|x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = -1;
	int64_t x254 = INT64_MAX;
	volatile int32_t x255 = 4176;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = -282453632;

    t63 = (((x253<=x254)|x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -1496763913865LL;
	volatile int64_t x258 = INT64_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	int32_t t64 = 10128703;

    t64 = (((x257<=x258)|x259)<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = 893846998236541855LL;
	int8_t x262 = -1;
	uint64_t x263 = 2688535229583720LLU;
	static uint32_t x264 = 141U;

    t65 = (((x261<=x262)|x263)<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 7U;
	uint16_t x266 = 53U;
	int16_t x267 = INT16_MAX;
	volatile int32_t x268 = -197762429;
	volatile int32_t t66 = 3394108;

    t66 = (((x265<=x266)|x267)<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static uint8_t x270 = 3U;
	int64_t x272 = -1LL;
	int32_t t67 = 219519;

    t67 = (((x269<=x270)|x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	int16_t x274 = -62;
	volatile int16_t x275 = INT16_MAX;
	volatile int32_t t68 = 364712;

    t68 = (((x273<=x274)|x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = 37U;
	uint32_t x278 = 20U;
	uint16_t x279 = 27671U;
	volatile int32_t x280 = -111;
	static volatile int32_t t69 = -54;

    t69 = (((x277<=x278)|x279)<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	uint64_t x282 = 400LLU;
	uint8_t x283 = UINT8_MAX;
	static uint8_t x284 = 0U;

    t70 = (((x281<=x282)|x283)<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 73U;
	volatile int64_t x287 = -485626715065LL;
	int64_t x288 = 1690753835766715LL;
	int32_t t71 = 15855;

    t71 = (((x285<=x286)|x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 50U;
	static int8_t x291 = 1;
	int16_t x292 = -50;

    t72 = (((x289<=x290)|x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint64_t x294 = 16355LLU;
	uint16_t x295 = 4U;
	uint32_t x296 = 1807U;
	int32_t t73 = -54683417;

    t73 = (((x293<=x294)|x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;
	int32_t t74 = -7;

    t74 = (((x297<=x298)|x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	uint32_t x303 = 24215U;
	volatile uint16_t x304 = 1944U;

    t75 = (((x301<=x302)|x303)<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = 4;
	uint16_t x307 = 7U;
	uint16_t x308 = 1U;
	volatile int32_t t76 = 1;

    t76 = (((x305<=x306)|x307)<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	uint32_t x310 = 12591112U;
	int64_t x311 = 8961935711520544LL;
	static int64_t x312 = -1LL;

    t77 = (((x309<=x310)|x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int32_t x314 = INT32_MAX;
	volatile int64_t x315 = -1LL;
	volatile uint32_t x316 = 708487368U;

    t78 = (((x313<=x314)|x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 128226039171226119LLU;
	int32_t x320 = -29911585;
	volatile int32_t t79 = -29;

    t79 = (((x317<=x318)|x319)<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x322 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = -6;

    t80 = (((x321<=x322)|x323)<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = 1437350421U;
	volatile uint16_t x326 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t81 = 12377;

    t81 = (((x325<=x326)|x327)<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 314U;
	uint32_t x330 = 1831091305U;
	int16_t x331 = -5;
	int16_t x332 = -1;
	volatile int32_t t82 = -241;

    t82 = (((x329<=x330)|x331)<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	static uint8_t x335 = 7U;
	int32_t x336 = INT32_MIN;
	static int32_t t83 = -4443312;

    t83 = (((x333<=x334)|x335)<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	int32_t x339 = 19831;
	static int32_t t84 = -33245;

    t84 = (((x337<=x338)|x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	int8_t x342 = -2;
	uint8_t x343 = 6U;
	int16_t x344 = INT16_MAX;

    t85 = (((x341<=x342)|x343)<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	static volatile int16_t x346 = -1;
	uint16_t x347 = 328U;
	int32_t t86 = 640;

    t86 = (((x345<=x346)|x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	int32_t x350 = 7104165;
	int16_t x351 = 298;
	uint16_t x352 = 1U;

    t87 = (((x349<=x350)|x351)<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = 77U;
	int16_t x356 = -12;
	volatile int32_t t88 = -19668314;

    t88 = (((x353<=x354)|x355)<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 161U;
	static int64_t x358 = INT64_MIN;
	int8_t x359 = -7;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -96;

    t89 = (((x357<=x358)|x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int64_t x362 = -1856254912764119333LL;
	int64_t x363 = INT64_MIN;
	volatile int32_t t90 = -35;

    t90 = (((x361<=x362)|x363)<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -73208920;
	volatile uint16_t x366 = 109U;
	uint8_t x367 = 10U;

    t91 = (((x365<=x366)|x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -502464;
	static int16_t x371 = 11892;
	volatile int32_t x372 = INT32_MIN;
	static volatile int32_t t92 = -1840796;

    t92 = (((x369<=x370)|x371)<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	uint16_t x376 = 29U;
	int32_t t93 = -1141479;

    t93 = (((x373<=x374)|x375)<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t94 = 758420176;

    t94 = (((x377<=x378)|x379)<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	static int32_t x383 = -2055262;

    t95 = (((x381<=x382)|x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	static int64_t x387 = INT64_MAX;
	int16_t x388 = -3794;
	int32_t t96 = -125;

    t96 = (((x385<=x386)|x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 1934478U;
	int64_t x390 = -19LL;
	volatile int64_t x391 = -223585LL;

    t97 = (((x389<=x390)|x391)<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x393 = 239U;
	int64_t x394 = -2288313136LL;
	uint16_t x395 = 39U;
	volatile uint32_t x396 = 8017441U;
	volatile int32_t t98 = 64002;

    t98 = (((x393<=x394)|x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int32_t x398 = 56;
	int16_t x399 = 1;
	static uint64_t x400 = 154989120936LLU;
	static volatile int32_t t99 = 7117787;

    t99 = (((x397<=x398)|x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	volatile uint16_t x404 = 1U;

    t100 = (((x401<=x402)|x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = INT64_MIN;
	volatile int32_t x407 = -1;
	volatile int64_t x408 = -1LL;

    t101 = (((x405<=x406)|x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 89U;
	int8_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	volatile int32_t t102 = 672967;

    t102 = (((x409<=x410)|x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 487490;
	uint8_t x415 = 3U;
	static uint64_t x416 = UINT64_MAX;
	int32_t t103 = 2861053;

    t103 = (((x413<=x414)|x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MIN;
	int16_t x418 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	int16_t x420 = -1;
	int32_t t104 = 970535273;

    t104 = (((x417<=x418)|x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	uint32_t x422 = UINT32_MAX;
	volatile int64_t x423 = -63294562048161562LL;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t105 = 172736;

    t105 = (((x421<=x422)|x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MAX;
	volatile int32_t x426 = 17;
	int64_t x427 = -1LL;
	int8_t x428 = INT8_MAX;
	int32_t t106 = -69356497;

    t106 = (((x425<=x426)|x427)<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile int64_t x430 = INT64_MIN;
	volatile uint64_t x431 = 783747239LLU;
	int32_t t107 = 31574;

    t107 = (((x429<=x430)|x431)<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -15183546LL;
	uint8_t x434 = 3U;
	uint16_t x435 = 430U;
	int64_t x436 = -1LL;

    t108 = (((x433<=x434)|x435)<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x437 = 7U;
	static int64_t x438 = INT64_MAX;
	volatile int8_t x439 = INT8_MAX;
	uint8_t x440 = UINT8_MAX;
	int32_t t109 = 33;

    t109 = (((x437<=x438)|x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	static uint16_t x442 = 73U;
	uint32_t x444 = 77166879U;
	int32_t t110 = -37;

    t110 = (((x441<=x442)|x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 0U;
	uint32_t x446 = 7U;
	int8_t x447 = -1;
	static int16_t x448 = 28;
	volatile int32_t t111 = 0;

    t111 = (((x445<=x446)|x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x450 = INT8_MIN;
	static uint32_t x451 = 3352U;
	int16_t x452 = INT16_MIN;
	static volatile int32_t t112 = 3135962;

    t112 = (((x449<=x450)|x451)<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 307728;
	static int8_t x454 = 1;
	volatile int64_t x455 = INT64_MAX;
	uint32_t x456 = 27U;
	volatile int32_t t113 = -894;

    t113 = (((x453<=x454)|x455)<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 21650714;
	volatile int16_t x458 = -393;
	int16_t x460 = INT16_MIN;
	int32_t t114 = 452;

    t114 = (((x457<=x458)|x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = -11126;
	static uint8_t x462 = UINT8_MAX;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t115 = -1;

    t115 = (((x461<=x462)|x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	int64_t x466 = INT64_MIN;
	int32_t x467 = 57038;
	static int32_t t116 = -480;

    t116 = (((x465<=x466)|x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MAX;
	uint32_t x471 = 23017U;
	int32_t x472 = 113;
	volatile int32_t t117 = 0;

    t117 = (((x469<=x470)|x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = -345347393678562596LL;
	int32_t x474 = INT32_MIN;
	uint16_t x476 = 7U;
	volatile int32_t t118 = -12304075;

    t118 = (((x473<=x474)|x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	uint64_t x479 = 70LLU;
	int8_t x480 = INT8_MIN;

    t119 = (((x477<=x478)|x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 37U;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = -1752;
	int32_t t120 = -1;

    t120 = (((x481<=x482)|x483)<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = INT16_MAX;
	uint8_t x486 = 1U;
	uint8_t x487 = 63U;

    t121 = (((x485<=x486)|x487)<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 1U;
	uint32_t x490 = 3U;
	int16_t x491 = -378;
	int32_t x492 = -482;
	volatile int32_t t122 = -121299326;

    t122 = (((x489<=x490)|x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	uint16_t x494 = 5760U;
	int16_t x496 = INT16_MIN;
	static volatile int32_t t123 = 2681;

    t123 = (((x493<=x494)|x495)<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x499 = 18536U;
	static int8_t x500 = INT8_MAX;
	int32_t t124 = 30;

    t124 = (((x497<=x498)|x499)<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	static int8_t x502 = INT8_MAX;
	uint64_t x503 = 176674438501404LLU;
	volatile int8_t x504 = INT8_MIN;
	int32_t t125 = -300246521;

    t125 = (((x501<=x502)|x503)<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 136U;
	static int32_t x506 = INT32_MIN;
	volatile uint32_t x508 = 214891U;

    t126 = (((x505<=x506)|x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MAX;
	int16_t x511 = -1;
	volatile int16_t x512 = -1;
	volatile int32_t t127 = 3284316;

    t127 = (((x509<=x510)|x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x514 = 452U;
	volatile int8_t x515 = INT8_MAX;
	volatile uint32_t x516 = 104042096U;
	volatile int32_t t128 = -64563;

    t128 = (((x513<=x514)|x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	volatile int64_t x518 = INT64_MIN;
	volatile uint8_t x519 = 75U;
	volatile int64_t x520 = -1LL;
	int32_t t129 = 155368;

    t129 = (((x517<=x518)|x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 0U;
	static int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = 1;

    t130 = (((x521<=x522)|x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = 1;
	int64_t x527 = INT64_MIN;
	volatile int8_t x528 = -1;

    t131 = (((x525<=x526)|x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -19LL;
	uint64_t x530 = 39376LLU;
	uint64_t x531 = 221019926472094326LLU;
	int32_t t132 = -55077152;

    t132 = (((x529<=x530)|x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = -1;
	volatile int32_t x534 = -1;
	uint16_t x535 = 11U;
	volatile uint64_t x536 = 416811217LLU;
	int32_t t133 = -102751;

    t133 = (((x533<=x534)|x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	uint32_t x539 = 15U;
	int8_t x540 = -1;
	int32_t t134 = -11954;

    t134 = (((x537<=x538)|x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	int8_t x542 = 40;
	volatile uint16_t x543 = 5U;
	static int32_t x544 = INT32_MIN;
	volatile int32_t t135 = -1237;

    t135 = (((x541<=x542)|x543)<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = 329U;
	int32_t t136 = 399;

    t136 = (((x545<=x546)|x547)<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	int64_t x552 = 76914454346006972LL;
	volatile int32_t t137 = 160571;

    t137 = (((x549<=x550)|x551)<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -32536926627377LL;
	uint32_t x554 = 226U;
	uint16_t x555 = 13U;
	int64_t x556 = INT64_MAX;
	int32_t t138 = 1259894;

    t138 = (((x553<=x554)|x555)<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int8_t x558 = -1;
	int64_t x559 = INT64_MAX;
	int8_t x560 = 25;
	volatile int32_t t139 = 914828823;

    t139 = (((x557<=x558)|x559)<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	uint8_t x562 = 2U;
	int64_t x563 = INT64_MAX;
	uint32_t x564 = 2130U;
	volatile int32_t t140 = 44456913;

    t140 = (((x561<=x562)|x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = -1LL;
	uint8_t x567 = 104U;
	volatile int32_t t141 = -1018;

    t141 = (((x565<=x566)|x567)<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	volatile int8_t x570 = INT8_MIN;
	uint64_t x571 = UINT64_MAX;
	int32_t t142 = 1;

    t142 = (((x569<=x570)|x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	volatile int32_t x574 = INT32_MIN;
	uint64_t x575 = UINT64_MAX;
	static uint32_t x576 = UINT32_MAX;
	volatile int32_t t143 = 325330;

    t143 = (((x573<=x574)|x575)<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 3U;
	int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t144 = 1359219;

    t144 = (((x577<=x578)|x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = 15198730953LLU;
	int32_t x582 = -1;
	int64_t x583 = INT64_MIN;
	volatile uint32_t x584 = 475U;
	int32_t t145 = -4;

    t145 = (((x581<=x582)|x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = 50930565190569822LL;
	uint32_t x587 = 5U;
	static int16_t x588 = -1;
	int32_t t146 = -36535901;

    t146 = (((x585<=x586)|x587)<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 349U;
	uint64_t x591 = UINT64_MAX;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = -19;

    t147 = (((x589<=x590)|x591)<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1556869;
	static int16_t x594 = -1;
	uint32_t x595 = 2810U;
	volatile int16_t x596 = INT16_MAX;
	volatile int32_t t148 = -399298;

    t148 = (((x593<=x594)|x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = -1;
	uint64_t x599 = UINT64_MAX;
	static int64_t x600 = -7435139345LL;

    t149 = (((x597<=x598)|x599)<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static uint8_t x602 = UINT8_MAX;
	volatile uint8_t x604 = UINT8_MAX;
	int32_t t150 = 52665178;

    t150 = (((x601<=x602)|x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x606 = -25745LL;
	uint16_t x607 = UINT16_MAX;
	volatile int16_t x608 = -1;
	volatile int32_t t151 = -13331;

    t151 = (((x605<=x606)|x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	static volatile uint64_t x610 = 1018081378360251076LLU;
	int8_t x611 = -1;
	volatile uint8_t x612 = 68U;

    t152 = (((x609<=x610)|x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 2U;
	int16_t x614 = INT16_MIN;
	volatile uint32_t x615 = 15U;
	static volatile uint8_t x616 = UINT8_MAX;
	int32_t t153 = -6561;

    t153 = (((x613<=x614)|x615)<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 7;
	volatile int64_t x619 = -1LL;
	volatile int64_t x620 = -164533112948255336LL;

    t154 = (((x617<=x618)|x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = 0U;
	int16_t x623 = INT16_MAX;
	uint64_t x624 = 273138415820895LLU;
	volatile int32_t t155 = -9;

    t155 = (((x621<=x622)|x623)<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -31795;
	int32_t x626 = INT32_MIN;
	static uint8_t x627 = 21U;
	int8_t x628 = INT8_MIN;
	static int32_t t156 = 63607;

    t156 = (((x625<=x626)|x627)<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int64_t x630 = -1LL;
	static int16_t x631 = -4885;
	uint8_t x632 = UINT8_MAX;
	int32_t t157 = 38774;

    t157 = (((x629<=x630)|x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = 1627;
	static int8_t x634 = -14;
	static volatile uint16_t x635 = 32U;
	int64_t x636 = -9350LL;

    t158 = (((x633<=x634)|x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x638 = INT32_MIN;
	int8_t x640 = INT8_MAX;

    t159 = (((x637<=x638)|x639)<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	static int8_t x642 = INT8_MIN;
	static volatile uint32_t x643 = 505U;
	uint64_t x644 = 11196LLU;

    t160 = (((x641<=x642)|x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	volatile uint32_t x646 = UINT32_MAX;
	int8_t x647 = -2;
	int32_t t161 = -102457436;

    t161 = (((x645<=x646)|x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x651 = INT64_MIN;
	int64_t x652 = -1LL;

    t162 = (((x649<=x650)|x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = INT16_MIN;
	static int8_t x655 = INT8_MIN;
	volatile int32_t t163 = -1812;

    t163 = (((x653<=x654)|x655)<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int8_t x658 = 12;
	int16_t x659 = INT16_MAX;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = -8285122;

    t164 = (((x657<=x658)|x659)<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = -27471041;
	static int16_t x663 = INT16_MIN;
	uint64_t x664 = UINT64_MAX;
	static int32_t t165 = 0;

    t165 = (((x661<=x662)|x663)<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 4;
	int32_t x666 = -2480571;
	volatile int64_t x667 = 2710061179722LL;
	int8_t x668 = INT8_MIN;
	int32_t t166 = -2410;

    t166 = (((x665<=x666)|x667)<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -3;
	uint8_t x670 = UINT8_MAX;
	int32_t x671 = INT32_MIN;
	volatile int16_t x672 = -1;
	int32_t t167 = 20937;

    t167 = (((x669<=x670)|x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	uint32_t x674 = UINT32_MAX;
	int16_t x676 = INT16_MIN;
	volatile int32_t t168 = -31702723;

    t168 = (((x673<=x674)|x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	static uint16_t x678 = 141U;
	int16_t x680 = INT16_MAX;

    t169 = (((x677<=x678)|x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x682 = INT32_MIN;
	volatile int8_t x684 = INT8_MIN;
	int32_t t170 = -27;

    t170 = (((x681<=x682)|x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint64_t x686 = 915452LLU;
	static int8_t x688 = 55;
	volatile int32_t t171 = -1;

    t171 = (((x685<=x686)|x687)<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 218331;
	volatile uint16_t x690 = 1282U;
	int32_t x691 = -4372;
	int16_t x692 = -1;
	volatile int32_t t172 = 39;

    t172 = (((x689<=x690)|x691)<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x694 = INT8_MIN;
	static uint8_t x695 = 11U;
	int8_t x696 = -1;
	volatile int32_t t173 = 1;

    t173 = (((x693<=x694)|x695)<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int16_t x698 = 16;
	uint16_t x699 = 222U;

    t174 = (((x697<=x698)|x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -1;
	static volatile uint8_t x703 = 21U;
	int8_t x704 = -1;
	int32_t t175 = 106894;

    t175 = (((x701<=x702)|x703)<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = -1;
	int32_t x707 = INT32_MIN;
	int64_t x708 = -1LL;
	int32_t t176 = 36470369;

    t176 = (((x705<=x706)|x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = -8453LL;
	int32_t x710 = 903740935;
	volatile int32_t x711 = -763;
	int32_t x712 = 54643;
	int32_t t177 = 476793;

    t177 = (((x709<=x710)|x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 100U;
	uint32_t x714 = UINT32_MAX;
	int8_t x715 = INT8_MIN;
	int8_t x716 = 22;

    t178 = (((x713<=x714)|x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 331U;
	int8_t x718 = INT8_MAX;
	static volatile int32_t x719 = INT32_MIN;
	int32_t x720 = INT32_MIN;
	volatile int32_t t179 = 14856;

    t179 = (((x717<=x718)|x719)<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = INT32_MIN;
	int16_t x724 = 0;
	static volatile int32_t t180 = 204;

    t180 = (((x721<=x722)|x723)<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	static uint64_t x726 = 2LLU;
	uint32_t x727 = 155197938U;
	uint16_t x728 = 452U;
	int32_t t181 = -3012;

    t181 = (((x725<=x726)|x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = 26369559U;
	int16_t x731 = INT16_MIN;
	static int8_t x732 = -1;
	volatile int32_t t182 = -250776;

    t182 = (((x729<=x730)|x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = -1;
	volatile int64_t x736 = 217211LL;
	int32_t t183 = 5;

    t183 = (((x733<=x734)|x735)<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -29;
	uint8_t x738 = 56U;
	int16_t x739 = INT16_MIN;
	static uint16_t x740 = 10U;
	volatile int32_t t184 = -6845769;

    t184 = (((x737<=x738)|x739)<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -288;
	volatile int64_t x742 = INT64_MIN;
	int8_t x744 = 0;
	volatile int32_t t185 = -566;

    t185 = (((x741<=x742)|x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	int64_t x746 = -95170762090LL;
	int32_t t186 = -3500;

    t186 = (((x745<=x746)|x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 15U;
	int64_t x750 = -3403347843LL;
	uint8_t x751 = 29U;
	int32_t x752 = INT32_MIN;

    t187 = (((x749<=x750)|x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = 718U;
	int8_t x754 = INT8_MAX;
	uint32_t x756 = 209U;

    t188 = (((x753<=x754)|x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x758 = -1019052579LL;
	int8_t x759 = INT8_MIN;
	volatile uint16_t x760 = UINT16_MAX;
	int32_t t189 = -1;

    t189 = (((x757<=x758)|x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	int64_t x762 = INT64_MIN;
	int16_t x763 = -1;
	volatile int8_t x764 = 5;
	static volatile int32_t t190 = 131589729;

    t190 = (((x761<=x762)|x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	int32_t x766 = -40866032;
	volatile int16_t x767 = 1;
	volatile int32_t t191 = 20;

    t191 = (((x765<=x766)|x767)<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -157368;
	int64_t x770 = INT64_MAX;
	static uint8_t x771 = 28U;
	int16_t x772 = INT16_MIN;
	volatile int32_t t192 = -380625479;

    t192 = (((x769<=x770)|x771)<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = INT8_MAX;
	volatile int16_t x774 = INT16_MAX;
	int32_t x775 = -1;
	static uint64_t x776 = UINT64_MAX;
	static int32_t t193 = 95096394;

    t193 = (((x773<=x774)|x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	int32_t x778 = 4563;
	int16_t x779 = -1;
	volatile int32_t t194 = -234519;

    t194 = (((x777<=x778)|x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = -3;
	volatile int8_t x782 = INT8_MAX;
	int32_t x783 = 0;
	static uint8_t x784 = UINT8_MAX;
	int32_t t195 = 218920;

    t195 = (((x781<=x782)|x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int16_t x786 = 5589;
	volatile uint8_t x787 = UINT8_MAX;
	int8_t x788 = INT8_MAX;

    t196 = (((x785<=x786)|x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 670615U;
	static uint8_t x790 = 15U;
	uint16_t x792 = UINT16_MAX;
	int32_t t197 = -31243;

    t197 = (((x789<=x790)|x791)<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 0;
	static volatile int8_t x795 = 0;
	int64_t x796 = 664927725555549LL;
	volatile int32_t t198 = 7;

    t198 = (((x793<=x794)|x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x798 = -1;
	uint8_t x799 = 2U;
	volatile uint16_t x800 = 5U;
	volatile int32_t t199 = 61102;

    t199 = (((x797<=x798)|x799)<=x800);

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

