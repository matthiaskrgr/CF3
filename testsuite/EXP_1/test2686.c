
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

volatile uint16_t x10 = 3U;
volatile int32_t x12 = INT32_MIN;
int16_t x17 = -2;
static uint64_t x18 = UINT64_MAX;
int8_t x19 = INT8_MIN;
volatile uint64_t x36 = 2187226371299597LLU;
uint64_t t8 = 71849932243600734LLU;
int16_t x38 = -1;
volatile int64_t t9 = 62432443520LL;
int64_t x42 = INT64_MAX;
static int64_t x43 = -1LL;
static int32_t x44 = INT32_MAX;
volatile int32_t t10 = 6;
int16_t x48 = -1;
volatile int8_t x52 = 0;
volatile uint64_t x54 = 2573410847LLU;
uint32_t x57 = 241939U;
static int64_t t14 = 26LL;
int16_t x65 = 5023;
int64_t x69 = -1843415LL;
int16_t x72 = -9813;
static int32_t t17 = 286731;
uint64_t x76 = 52978892027246LLU;
int64_t x78 = -1LL;
uint16_t x83 = UINT16_MAX;
volatile int32_t t21 = -2;
uint64_t x92 = UINT64_MAX;
int32_t t24 = -10185;
int8_t x102 = INT8_MIN;
int32_t x103 = INT32_MIN;
int64_t x108 = 30902331231681182LL;
static int32_t t27 = -1214795;
volatile int32_t x114 = 750;
int8_t x119 = 22;
volatile int32_t t29 = 0;
volatile int32_t t30 = -1858;
int16_t x125 = -50;
int8_t x131 = INT8_MIN;
volatile int64_t t32 = -112LL;
volatile uint16_t x135 = 2327U;
uint32_t x136 = UINT32_MAX;
uint32_t t33 = 5U;
volatile uint64_t x137 = UINT64_MAX;
int32_t t34 = -3237;
uint16_t x141 = 21U;
int64_t x142 = INT64_MIN;
static volatile int64_t x144 = -1LL;
volatile int64_t x148 = INT64_MAX;
volatile int64_t t36 = 2426954970144LL;
volatile uint8_t x156 = 0U;
static volatile int32_t t38 = 14361851;
volatile int16_t x157 = -4;
int64_t x159 = INT64_MAX;
uint64_t x160 = 2527827392060LLU;
uint8_t x164 = 1U;
int16_t x170 = 62;
int32_t t42 = 12901;
int16_t x179 = -10;
uint32_t t44 = 592037U;
static uint32_t x182 = 5616812U;
uint16_t x183 = 11U;
int32_t x188 = INT32_MAX;
int16_t x193 = INT16_MIN;
int64_t x195 = INT64_MIN;
static int16_t x203 = INT16_MIN;
int64_t x206 = INT64_MIN;
uint64_t x209 = 2826951660550LLU;
uint32_t x215 = UINT32_MAX;
volatile int16_t x218 = 55;
int8_t x223 = -1;
volatile int32_t t55 = -3;
int64_t x234 = 327LL;
int8_t x244 = -10;
int32_t t60 = -45384524;
uint8_t x248 = 117U;
static uint16_t x255 = 418U;
int32_t t64 = -58781;
uint32_t x263 = UINT32_MAX;
int32_t x264 = INT32_MIN;
uint64_t x265 = 27901292133934LLU;
int16_t x267 = INT16_MAX;
int8_t x270 = -21;
int64_t x274 = INT64_MIN;
uint16_t x276 = 2U;
int64_t x285 = INT64_MAX;
volatile uint16_t x291 = 13U;
volatile int64_t t72 = -33766LL;
volatile uint16_t x293 = 1812U;
int64_t x296 = INT64_MAX;
volatile int64_t t73 = 702404390LL;
volatile int8_t x300 = INT8_MIN;
int32_t t74 = 2917681;
int64_t x301 = -33731691099618LL;
volatile uint64_t x309 = 26134335456707LLU;
static int16_t x312 = 64;
uint64_t x314 = 12275542862LLU;
int8_t x315 = INT8_MAX;
int16_t x322 = INT16_MIN;
uint64_t x324 = UINT64_MAX;
volatile int64_t t81 = 13304LL;
volatile int32_t t82 = -209939873;
int8_t x333 = INT8_MIN;
static int8_t x336 = INT8_MIN;
int16_t x337 = -1;
int64_t x348 = -1LL;
volatile int64_t t86 = -3611393963275LL;
static uint16_t x350 = 29U;
int64_t x351 = -179452813720LL;
int8_t x352 = -1;
int32_t t88 = 1;
int32_t x357 = INT32_MAX;
uint8_t x360 = UINT8_MAX;
uint32_t x361 = UINT32_MAX;
int64_t x368 = INT64_MIN;
volatile int64_t x370 = 99065924818940LL;
int16_t x377 = -1;
uint64_t x378 = 295346564LLU;
volatile int8_t x380 = -1;
volatile int64_t x385 = 110038863LL;
int8_t x394 = 44;
volatile int64_t t100 = 89769023215609LL;
static volatile int64_t t102 = -22093964LL;
int64_t x414 = INT64_MIN;
int64_t x419 = INT64_MIN;
static int16_t x420 = -1;
static int8_t x431 = INT8_MIN;
static uint64_t x435 = 20966530LLU;
uint32_t x438 = UINT32_MAX;
volatile uint64_t t109 = 699526929LLU;
static volatile uint64_t x442 = UINT64_MAX;
int64_t x456 = -1LL;
uint64_t x458 = UINT64_MAX;
int8_t x459 = INT8_MIN;
uint16_t x461 = 665U;
uint32_t x463 = UINT32_MAX;
int64_t x466 = 1LL;
int64_t x468 = -1LL;
static uint8_t x469 = 10U;
volatile int32_t x471 = -656697;
static volatile int64_t x472 = INT64_MAX;
volatile uint64_t x475 = 356871557693863LLU;
int32_t t118 = 3;
volatile int16_t x482 = -2;
int64_t x487 = 1299826132LL;
uint64_t x489 = UINT64_MAX;
int16_t x495 = 10088;
uint16_t x508 = 196U;
int16_t x515 = INT16_MAX;
int64_t x521 = 1LL;
volatile int8_t x524 = INT8_MIN;
static int32_t t130 = 3747;
int64_t t131 = 784LL;
int32_t x530 = INT32_MIN;
volatile int8_t x531 = -1;
int16_t x533 = -1072;
uint64_t x534 = 99839473949LLU;
int16_t x538 = 29;
uint64_t x548 = 1548882534517903114LLU;
volatile int64_t x552 = INT64_MIN;
int64_t t137 = -1293631493LL;
uint32_t x553 = UINT32_MAX;
volatile int64_t t140 = -54431LL;
static int32_t x568 = INT32_MIN;
volatile int32_t t141 = 5002;
int16_t x571 = -1;
static int16_t x575 = INT16_MIN;
int64_t t143 = -3154450429LL;
static int64_t x577 = INT64_MIN;
int8_t x579 = -3;
int16_t x583 = -1;
uint64_t x584 = UINT64_MAX;
static uint32_t t146 = 3U;
volatile uint64_t x592 = UINT64_MAX;
int8_t x593 = 3;
int8_t x598 = 0;
uint8_t x604 = 6U;
volatile uint64_t x607 = 236751LLU;
static int16_t x608 = -7712;
volatile int32_t t152 = -1674;
uint8_t x613 = UINT8_MAX;
int16_t x614 = -1;
static volatile uint16_t x617 = UINT16_MAX;
int64_t x620 = -945762635LL;
int32_t x624 = -37029;
int8_t x629 = 2;
volatile uint32_t x635 = 234U;
int64_t x641 = -1LL;
int32_t x652 = INT32_MAX;
static int16_t x653 = -1;
int8_t x654 = -14;
volatile int8_t x667 = INT8_MAX;
int32_t x671 = 0;
int8_t x675 = INT8_MIN;
uint8_t x677 = 24U;
volatile uint64_t t169 = 1258LLU;
volatile int64_t x690 = 65413313877LL;
int64_t x693 = 11872LL;
uint32_t x695 = 214519630U;
volatile int8_t x696 = -1;
volatile int32_t t173 = -29;
int8_t x701 = 0;
static int16_t x702 = 13026;
int8_t x703 = INT8_MIN;
volatile int64_t x704 = INT64_MAX;
volatile uint64_t t176 = 241929297077680782LLU;
static int8_t x711 = -1;
static uint32_t x718 = 1896767886U;
int16_t x720 = INT16_MIN;
volatile int64_t t180 = 240672417534597LL;
int32_t x733 = INT32_MIN;
int32_t x746 = INT32_MIN;
static int32_t x748 = INT32_MAX;
int16_t x757 = 277;
uint64_t x763 = 489010212LLU;
uint64_t x764 = 55516646237LLU;
int32_t x770 = INT32_MIN;
static uint32_t x774 = 62222832U;
static int64_t x779 = -1LL;
int64_t x788 = INT64_MIN;
uint64_t x793 = 44142519LLU;


void f0(void) {
    	int64_t x1 = 532LL;
	int16_t x2 = INT16_MIN;
	volatile int16_t x3 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 24LLU;

    t0 = (((x1^x2)<=x3)&x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 8324712LLU;
	int32_t x6 = INT32_MAX;
	int32_t x7 = -266924173;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -13971529;

    t1 = (((x5^x6)<=x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = 67U;
	volatile int64_t x11 = 75623962477621LL;
	int32_t t2 = -155;

    t2 = (((x9^x10)<=x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 108U;
	uint16_t x14 = 45U;
	volatile uint16_t x15 = 30U;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -2613734;

    t3 = (((x13^x14)<=x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x20 = INT32_MIN;
	int32_t t4 = 0;

    t4 = (((x17^x18)<=x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -199177561649639054LL;
	volatile int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 270993;
	int32_t t5 = -3;

    t5 = (((x21^x22)<=x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MAX;
	int32_t x28 = -25849108;
	int32_t t6 = -566484;

    t6 = (((x25^x26)<=x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	static int8_t x30 = INT8_MIN;
	uint8_t x31 = 91U;
	uint32_t x32 = 597U;
	volatile uint32_t t7 = 1185593U;

    t7 = (((x29^x30)<=x31)&x32);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -28;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = -128848LL;

    t8 = (((x33^x34)<=x35)&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -9;
	uint8_t x39 = UINT8_MAX;
	static int64_t x40 = INT64_MIN;

    t9 = (((x37^x38)<=x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -199033250;

    t10 = (((x41^x42)<=x43)&x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = 13U;
	int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = 3;

    t11 = (((x45^x46)<=x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 2U;
	int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = 5123;

    t12 = (((x49^x50)<=x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 938140U;
	uint32_t x55 = 5749U;
	int32_t x56 = -420434;
	volatile int32_t t13 = 8;

    t13 = (((x53^x54)<=x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 13U;
	uint8_t x59 = 8U;
	static int64_t x60 = INT64_MIN;

    t14 = (((x57^x58)<=x59)&x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 14U;
	volatile int16_t x62 = INT16_MIN;
	static int64_t x63 = -26503LL;
	int32_t x64 = -155;
	static volatile int32_t t15 = -1;

    t15 = (((x61^x62)<=x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = 761U;
	static int32_t x67 = INT32_MAX;
	static int32_t x68 = 25539;
	int32_t t16 = -476793432;

    t16 = (((x65^x66)<=x67)&x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -749;
	volatile int16_t x71 = INT16_MIN;

    t17 = (((x69^x70)<=x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -3;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	uint64_t t18 = 6334508680345438324LLU;

    t18 = (((x73^x74)<=x75)&x76);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static int16_t x79 = INT16_MAX;
	int8_t x80 = -1;
	volatile int32_t t19 = -11928347;

    t19 = (((x77^x78)<=x79)&x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 1306825;
	int64_t x82 = INT64_MIN;
	int64_t x84 = -96LL;
	int64_t t20 = -988103LL;

    t20 = (((x81^x82)<=x83)&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	static volatile int64_t x87 = INT64_MIN;
	static volatile int32_t x88 = INT32_MIN;

    t21 = (((x85^x86)<=x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 7301U;
	uint32_t x90 = UINT32_MAX;
	static int16_t x91 = -1;
	uint64_t t22 = 3048526696LLU;

    t22 = (((x89^x90)<=x91)&x92);

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 29050061469610LL;
	int32_t x94 = INT32_MAX;
	static uint32_t x95 = 4428421U;
	int64_t x96 = 4057386LL;
	volatile int64_t t23 = -27109898765LL;

    t23 = (((x93^x94)<=x95)&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	volatile int16_t x98 = -141;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MIN;

    t24 = (((x97^x98)<=x99)&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = -273;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 246;

    t25 = (((x101^x102)<=x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 5639397;
	int16_t x106 = -1;
	uint16_t x107 = 33U;
	int64_t t26 = -426645LL;

    t26 = (((x105^x106)<=x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -33;
	uint64_t x110 = 4161LLU;
	static int8_t x111 = INT8_MAX;
	uint16_t x112 = 9832U;

    t27 = (((x109^x110)<=x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -4972;
	static int32_t x115 = INT32_MIN;
	volatile int32_t x116 = -11398963;
	volatile int32_t t28 = -56020;

    t28 = (((x113^x114)<=x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 10213830U;
	int64_t x118 = -3966540229100272LL;
	int16_t x120 = INT16_MIN;

    t29 = (((x117^x118)<=x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	uint8_t x122 = UINT8_MAX;
	uint32_t x123 = UINT32_MAX;
	static volatile uint8_t x124 = UINT8_MAX;

    t30 = (((x121^x122)<=x123)&x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x126 = INT16_MAX;
	static uint8_t x127 = 4U;
	int64_t x128 = INT64_MAX;
	int64_t t31 = -929649LL;

    t31 = (((x125^x126)<=x127)&x128);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	static int16_t x130 = -8484;
	static int64_t x132 = 19919LL;

    t32 = (((x129^x130)<=x131)&x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	int16_t x134 = -3;

    t33 = (((x133^x134)<=x135)&x136);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x138 = -60;
	volatile int32_t x139 = INT32_MIN;
	static int16_t x140 = INT16_MIN;

    t34 = (((x137^x138)<=x139)&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x143 = 35LLU;
	volatile int64_t t35 = 1302893522837498LL;

    t35 = (((x141^x142)<=x143)&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 4361;
	static volatile int8_t x146 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;

    t36 = (((x145^x146)<=x147)&x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 1;
	static volatile int8_t x150 = INT8_MAX;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -7860LL;
	int64_t t37 = 25410395790LL;

    t37 = (((x149^x150)<=x151)&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = UINT32_MAX;
	static volatile int32_t x154 = -6;
	uint64_t x155 = UINT64_MAX;

    t38 = (((x153^x154)<=x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = 1;
	uint64_t t39 = 67321809145577LLU;

    t39 = (((x157^x158)<=x159)&x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1;
	int64_t x163 = INT64_MAX;
	int32_t t40 = 2;

    t40 = (((x161^x162)<=x163)&x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -53687954090LL;
	static int16_t x166 = INT16_MIN;
	volatile int32_t x167 = INT32_MIN;
	static volatile int16_t x168 = INT16_MIN;
	int32_t t41 = 1;

    t41 = (((x165^x166)<=x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 24;
	int32_t x171 = INT32_MIN;
	static int16_t x172 = INT16_MIN;

    t42 = (((x169^x170)<=x171)&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	static uint8_t x174 = UINT8_MAX;
	int32_t x175 = -2067240;
	int16_t x176 = 1601;
	int32_t t43 = -2321605;

    t43 = (((x173^x174)<=x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = 46;
	int8_t x178 = INT8_MIN;
	uint32_t x180 = 47841990U;

    t44 = (((x177^x178)<=x179)&x180);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	uint64_t x184 = UINT64_MAX;
	uint64_t t45 = 5846556872LLU;

    t45 = (((x181^x182)<=x183)&x184);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -1423859420405107052LL;
	int16_t x186 = INT16_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile int32_t t46 = -30;

    t46 = (((x185^x186)<=x187)&x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 6841;
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 557U;
	int32_t t47 = -6;

    t47 = (((x189^x190)<=x191)&x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = 3;
	static int64_t x196 = 4389320894300LL;
	static volatile int64_t t48 = 735536969485654467LL;

    t48 = (((x193^x194)<=x195)&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 30;
	uint8_t x198 = UINT8_MAX;
	uint32_t x199 = 1280U;
	volatile int64_t x200 = -1LL;
	volatile int64_t t49 = 41157LL;

    t49 = (((x197^x198)<=x199)&x200);

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 13U;
	int16_t x202 = INT16_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 953573840;

    t50 = (((x201^x202)<=x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	int16_t x207 = -1;
	int8_t x208 = INT8_MAX;
	int32_t t51 = -11;

    t51 = (((x205^x206)<=x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = 1;
	int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MIN;
	static int32_t t52 = 78570118;

    t52 = (((x209^x210)<=x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 41U;
	volatile int8_t x214 = 0;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -867548;

    t53 = (((x213^x214)<=x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	uint32_t x219 = 424U;
	int8_t x220 = -1;
	static volatile int32_t t54 = 414738;

    t54 = (((x217^x218)<=x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 14U;
	static int8_t x222 = 0;
	int8_t x224 = 3;

    t55 = (((x221^x222)<=x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 0U;
	static int32_t x226 = -1;
	int16_t x227 = INT16_MAX;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -16018717;

    t56 = (((x225^x226)<=x227)&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 32445U;
	uint64_t x230 = 39018761LLU;
	int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 249;

    t57 = (((x229^x230)<=x231)&x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 31U;
	volatile int32_t t58 = 1044764;

    t58 = (((x233^x234)<=x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int16_t x238 = -1;
	int32_t x239 = 999;
	int32_t x240 = -1;
	static int32_t t59 = 237260220;

    t59 = (((x237^x238)<=x239)&x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 29433540918324LLU;
	int8_t x242 = -1;
	static uint32_t x243 = 84193U;

    t60 = (((x241^x242)<=x243)&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MAX;
	uint64_t x247 = 33298370LLU;
	int32_t t61 = -7869;

    t61 = (((x245^x246)<=x247)&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	volatile int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 0;

    t62 = (((x249^x250)<=x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	int64_t x254 = -60101LL;
	uint16_t x256 = 490U;
	volatile int32_t t63 = 59;

    t63 = (((x253^x254)<=x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = 100U;
	volatile uint16_t x258 = 135U;
	static volatile uint32_t x259 = 833364087U;
	static volatile int16_t x260 = INT16_MIN;

    t64 = (((x257^x258)<=x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	static uint64_t x262 = 81020406222914LLU;
	volatile int32_t t65 = -38691;

    t65 = (((x261^x262)<=x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x266 = UINT16_MAX;
	int8_t x268 = -1;
	volatile int32_t t66 = 782;

    t66 = (((x265^x266)<=x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	int32_t x271 = 22;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 2031107;

    t67 = (((x269^x270)<=x271)&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int32_t t68 = -6533847;

    t68 = (((x273^x274)<=x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int64_t x278 = 383670555402LL;
	volatile int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	int64_t t69 = -373LL;

    t69 = (((x277^x278)<=x279)&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = 32602;
	int8_t x282 = INT8_MAX;
	volatile int16_t x283 = 7;
	int16_t x284 = -1;
	volatile int32_t t70 = -1469215;

    t70 = (((x281^x282)<=x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = 634U;
	volatile uint8_t x287 = UINT8_MAX;
	static volatile int64_t x288 = INT64_MAX;
	int64_t t71 = -369739LL;

    t71 = (((x285^x286)<=x287)&x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -256623;
	int16_t x290 = INT16_MIN;
	int64_t x292 = INT64_MAX;

    t72 = (((x289^x290)<=x291)&x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = -1;
	int32_t x295 = INT32_MAX;

    t73 = (((x293^x294)<=x295)&x296);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -2;
	uint64_t x298 = 241153769514540854LLU;
	int32_t x299 = 7116;

    t74 = (((x297^x298)<=x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	volatile int8_t x304 = -1;
	int32_t t75 = 21;

    t75 = (((x301^x302)<=x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 797U;
	uint16_t x306 = 72U;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = -1LL;
	volatile int64_t t76 = -14222218LL;

    t76 = (((x305^x306)<=x307)&x308);

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = -1LL;
	int16_t x311 = INT16_MIN;
	volatile int32_t t77 = 3898791;

    t77 = (((x309^x310)<=x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 27U;
	uint64_t x316 = 33948LLU;
	uint64_t t78 = 647LLU;

    t78 = (((x313^x314)<=x315)&x316);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x318 = UINT16_MAX;
	static int64_t x319 = -1LL;
	int8_t x320 = 0;
	int32_t t79 = 106152;

    t79 = (((x317^x318)<=x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MAX;
	int64_t x323 = 2340831012375147LL;
	uint64_t t80 = 2014027LLU;

    t80 = (((x321^x322)<=x323)&x324);

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	uint32_t x326 = 1868U;
	volatile int64_t x327 = -29LL;
	int64_t x328 = -1LL;

    t81 = (((x325^x326)<=x327)&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MIN;
	static volatile int8_t x330 = INT8_MIN;
	volatile int32_t x331 = -1;
	int8_t x332 = 0;

    t82 = (((x329^x330)<=x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x334 = 183LLU;
	volatile int8_t x335 = INT8_MIN;
	int32_t t83 = 220494576;

    t83 = (((x333^x334)<=x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	int32_t x340 = -1;
	static volatile int32_t t84 = -487;

    t84 = (((x337^x338)<=x339)&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	static int8_t x343 = INT8_MIN;
	static uint32_t x344 = 1043U;
	volatile uint32_t t85 = 157U;

    t85 = (((x341^x342)<=x343)&x344);

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;

    t86 = (((x345^x346)<=x347)&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = 48U;
	static int32_t t87 = -215258133;

    t87 = (((x349^x350)<=x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	uint32_t x354 = 5593915U;
	volatile uint8_t x355 = 94U;
	static volatile int8_t x356 = INT8_MAX;

    t88 = (((x353^x354)<=x355)&x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = 130U;
	int16_t x359 = INT16_MIN;
	volatile int32_t t89 = 1;

    t89 = (((x357^x358)<=x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = INT32_MIN;
	int16_t x363 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 747;

    t90 = (((x361^x362)<=x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = 25;
	int64_t x366 = 15166459452062LL;
	int16_t x367 = INT16_MIN;
	static int64_t t91 = 25LL;

    t91 = (((x365^x366)<=x367)&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 1U;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t92 = 77;

    t92 = (((x369^x370)<=x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -134158438292LL;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -908438;

    t93 = (((x373^x374)<=x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x379 = UINT8_MAX;
	volatile int32_t t94 = 28;

    t94 = (((x377^x378)<=x379)&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	int32_t x384 = 820370317;
	volatile int32_t t95 = 347850;

    t95 = (((x381^x382)<=x383)&x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -1;
	int16_t x387 = INT16_MIN;
	static int64_t x388 = INT64_MIN;
	static volatile int64_t t96 = 13348497162551LL;

    t96 = (((x385^x386)<=x387)&x388);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MAX;
	int16_t x390 = -6796;
	static int32_t x391 = -52;
	volatile int32_t x392 = 403763117;
	volatile int32_t t97 = 246033061;

    t97 = (((x389^x390)<=x391)&x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	static int32_t t98 = -117;

    t98 = (((x393^x394)<=x395)&x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 950U;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t99 = -832969LL;

    t99 = (((x397^x398)<=x399)&x400);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int32_t x402 = -5;
	static volatile int32_t x403 = INT32_MIN;
	static int64_t x404 = INT64_MIN;

    t100 = (((x401^x402)<=x403)&x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MAX;
	static uint8_t x406 = 14U;
	static uint8_t x407 = UINT8_MAX;
	volatile uint8_t x408 = 12U;
	volatile int32_t t101 = 19;

    t101 = (((x405^x406)<=x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 0U;
	int8_t x410 = 1;
	int64_t x411 = INT64_MAX;
	int64_t x412 = INT64_MIN;

    t102 = (((x409^x410)<=x411)&x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = INT32_MAX;
	int32_t x415 = -1;
	volatile uint8_t x416 = 5U;
	volatile int32_t t103 = 2;

    t103 = (((x413^x414)<=x415)&x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -439297LL;
	int64_t x418 = 12LL;
	volatile int32_t t104 = 1;

    t104 = (((x417^x418)<=x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	volatile uint32_t x423 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;
	static volatile int32_t t105 = 3775;

    t105 = (((x421^x422)<=x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	int64_t x426 = INT64_MIN;
	static int8_t x427 = 2;
	volatile int8_t x428 = -2;
	int32_t t106 = -137032498;

    t106 = (((x425^x426)<=x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MIN;
	int32_t x432 = -1;
	static volatile int32_t t107 = -687771619;

    t107 = (((x429^x430)<=x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 19;
	static uint8_t x434 = 46U;
	static int16_t x436 = -1;
	volatile int32_t t108 = 293655088;

    t108 = (((x433^x434)<=x435)&x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -97915;
	int64_t x439 = INT64_MIN;
	uint64_t x440 = 8005117733387734LLU;

    t109 = (((x437^x438)<=x439)&x440);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = 1U;
	int32_t x443 = -636;
	int64_t x444 = 18880216723859828LL;
	volatile int64_t t110 = 15323LL;

    t110 = (((x441^x442)<=x443)&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = 20586877;
	uint16_t x446 = 843U;
	volatile int16_t x447 = INT16_MIN;
	uint16_t x448 = 3451U;
	static int32_t t111 = -3889;

    t111 = (((x445^x446)<=x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 58LLU;
	static int8_t x450 = INT8_MAX;
	int16_t x451 = INT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t112 = 93887;

    t112 = (((x449^x450)<=x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = -16;
	int8_t x454 = INT8_MAX;
	int8_t x455 = -1;
	volatile int64_t t113 = -23137LL;

    t113 = (((x453^x454)<=x455)&x456);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 1U;
	uint32_t x460 = UINT32_MAX;
	static uint32_t t114 = 299U;

    t114 = (((x457^x458)<=x459)&x460);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = -4677;
	int32_t x464 = -24;
	volatile int32_t t115 = 216433682;

    t115 = (((x461^x462)<=x463)&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	uint32_t x467 = 73982U;
	volatile int64_t t116 = -3807868933149595490LL;

    t116 = (((x465^x466)<=x467)&x468);

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MIN;
	int64_t t117 = 6349143LL;

    t117 = (((x469^x470)<=x471)&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 78063501297LL;
	int8_t x474 = INT8_MIN;
	volatile int16_t x476 = INT16_MIN;

    t118 = (((x473^x474)<=x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 32U;
	int32_t x478 = 40370125;
	static volatile int64_t x479 = INT64_MIN;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t119 = 201;

    t119 = (((x477^x478)<=x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -39;
	int32_t x483 = INT32_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = -29893;

    t120 = (((x481^x482)<=x483)&x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -96085506;
	static int32_t x486 = -24;
	int32_t x488 = INT32_MIN;
	volatile int32_t t121 = 1;

    t121 = (((x485^x486)<=x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = UINT16_MAX;
	volatile int8_t x491 = 1;
	int8_t x492 = INT8_MIN;
	static volatile int32_t t122 = 234;

    t122 = (((x489^x490)<=x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x493 = UINT32_MAX;
	static int16_t x494 = -1;
	int16_t x496 = INT16_MIN;
	int32_t t123 = 6486;

    t123 = (((x493^x494)<=x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = INT32_MIN;
	int32_t x499 = -13810;
	uint16_t x500 = 0U;
	int32_t t124 = -1;

    t124 = (((x497^x498)<=x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 34165900U;
	static volatile int64_t x502 = -1LL;
	uint16_t x503 = 2U;
	static uint32_t x504 = UINT32_MAX;
	uint32_t t125 = 7455117U;

    t125 = (((x501^x502)<=x503)&x504);

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = -534930812;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = UINT64_MAX;
	volatile int32_t t126 = 25605554;

    t126 = (((x505^x506)<=x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -35;
	static int8_t x510 = 0;
	volatile int8_t x511 = 33;
	int32_t x512 = -1;
	static int32_t t127 = -155;

    t127 = (((x509^x510)<=x511)&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	uint16_t x514 = 0U;
	int8_t x516 = 0;
	volatile int32_t t128 = 237216480;

    t128 = (((x513^x514)<=x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = INT16_MIN;
	volatile int64_t x518 = -1LL;
	uint8_t x519 = 96U;
	int32_t x520 = -500;
	volatile int32_t t129 = 1;

    t129 = (((x517^x518)<=x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	uint8_t x523 = 102U;

    t130 = (((x521^x522)<=x523)&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 2132066738U;
	uint16_t x526 = UINT16_MAX;
	int8_t x527 = INT8_MAX;
	int64_t x528 = INT64_MIN;

    t131 = (((x525^x526)<=x527)&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -54;
	static uint32_t x532 = 8279768U;
	volatile uint32_t t132 = 2096221915U;

    t132 = (((x529^x530)<=x531)&x532);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x535 = 3U;
	int64_t x536 = INT64_MIN;
	volatile int64_t t133 = -18496835807551LL;

    t133 = (((x533^x534)<=x535)&x536);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x537 = -1;
	uint16_t x539 = 15U;
	uint8_t x540 = 0U;
	volatile int32_t t134 = -60;

    t134 = (((x537^x538)<=x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = 26114LL;
	uint32_t x542 = 64U;
	uint8_t x543 = 36U;
	static volatile uint8_t x544 = 7U;
	volatile int32_t t135 = 93488639;

    t135 = (((x541^x542)<=x543)&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 0;
	uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = -1;
	volatile uint64_t t136 = 103253LLU;

    t136 = (((x545^x546)<=x547)&x548);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 3217LLU;
	static int8_t x551 = INT8_MIN;

    t137 = (((x549^x550)<=x551)&x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x554 = INT16_MIN;
	static uint32_t x555 = UINT32_MAX;
	uint16_t x556 = 3U;
	volatile int32_t t138 = -10;

    t138 = (((x553^x554)<=x555)&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	volatile int64_t x558 = INT64_MAX;
	static uint8_t x559 = UINT8_MAX;
	volatile uint8_t x560 = 50U;
	volatile int32_t t139 = 3797;

    t139 = (((x557^x558)<=x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x561 = INT64_MAX;
	static uint16_t x562 = 14490U;
	static uint16_t x563 = UINT16_MAX;
	static int64_t x564 = 633LL;

    t140 = (((x561^x562)<=x563)&x564);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x565 = 0U;
	volatile int64_t x566 = INT64_MAX;
	volatile int32_t x567 = -1;

    t141 = (((x565^x566)<=x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MAX;
	static int8_t x572 = -1;
	volatile int32_t t142 = -151469;

    t142 = (((x569^x570)<=x571)&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 1U;
	int8_t x574 = INT8_MAX;
	int64_t x576 = 23265976LL;

    t143 = (((x573^x574)<=x575)&x576);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = 1204929353U;
	uint32_t x580 = 123U;
	static uint32_t t144 = 1U;

    t144 = (((x577^x578)<=x579)&x580);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	int64_t x582 = -1LL;
	uint64_t t145 = 25157LLU;

    t145 = (((x581^x582)<=x583)&x584);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = 0;
	int64_t x586 = INT64_MIN;
	int64_t x587 = -342325779LL;
	uint32_t x588 = UINT32_MAX;

    t146 = (((x585^x586)<=x587)&x588);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = -1;
	static int64_t x590 = INT64_MAX;
	volatile int8_t x591 = 2;
	uint64_t t147 = 4804964200LLU;

    t147 = (((x589^x590)<=x591)&x592);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x594 = 6U;
	volatile int8_t x595 = INT8_MIN;
	int8_t x596 = INT8_MAX;
	volatile int32_t t148 = -593543091;

    t148 = (((x593^x594)<=x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 3U;
	volatile int8_t x599 = -45;
	int32_t x600 = INT32_MIN;
	volatile int32_t t149 = -1137545;

    t149 = (((x597^x598)<=x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -324791698144239212LL;
	uint16_t x602 = 1544U;
	int16_t x603 = INT16_MIN;
	int32_t t150 = 275507296;

    t150 = (((x601^x602)<=x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 857;
	static int32_t x606 = INT32_MAX;
	int32_t t151 = 681180515;

    t151 = (((x605^x606)<=x607)&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 8141584;
	int8_t x610 = 22;
	uint8_t x611 = 50U;
	int32_t x612 = INT32_MAX;

    t152 = (((x609^x610)<=x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x615 = 18720658;
	volatile int64_t x616 = INT64_MIN;
	int64_t t153 = -444945LL;

    t153 = (((x613^x614)<=x615)&x616);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = -1;
	uint8_t x619 = 19U;
	volatile int64_t t154 = 1LL;

    t154 = (((x617^x618)<=x619)&x620);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	volatile uint16_t x622 = 18U;
	int32_t x623 = INT32_MIN;
	int32_t t155 = -1757104;

    t155 = (((x621^x622)<=x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	volatile int16_t x626 = INT16_MAX;
	int8_t x627 = INT8_MIN;
	int32_t x628 = INT32_MAX;
	static int32_t t156 = -240555;

    t156 = (((x625^x626)<=x627)&x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x630 = UINT64_MAX;
	int64_t x631 = INT64_MIN;
	uint8_t x632 = 29U;
	volatile int32_t t157 = 8244;

    t157 = (((x629^x630)<=x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	int32_t x634 = INT32_MAX;
	volatile int64_t x636 = INT64_MIN;
	volatile int64_t t158 = 4216026490602511883LL;

    t158 = (((x633^x634)<=x635)&x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MIN;
	static int16_t x638 = INT16_MIN;
	int32_t x639 = -1;
	int8_t x640 = INT8_MIN;
	static int32_t t159 = -70;

    t159 = (((x637^x638)<=x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 154U;
	volatile uint16_t x643 = 34U;
	int64_t x644 = INT64_MAX;
	volatile int64_t t160 = 797339291784LL;

    t160 = (((x641^x642)<=x643)&x644);

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	uint32_t x646 = 150525U;
	int32_t x647 = INT32_MIN;
	volatile int16_t x648 = INT16_MAX;
	static int32_t t161 = 94512948;

    t161 = (((x645^x646)<=x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 5U;
	uint64_t x650 = UINT64_MAX;
	static int8_t x651 = INT8_MAX;
	volatile int32_t t162 = -223;

    t162 = (((x649^x650)<=x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x655 = -1;
	uint64_t x656 = UINT64_MAX;
	volatile uint64_t t163 = 5621636500983256LLU;

    t163 = (((x653^x654)<=x655)&x656);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 5;
	static int32_t x658 = INT32_MIN;
	static int32_t x659 = INT32_MIN;
	int64_t x660 = INT64_MAX;
	volatile int64_t t164 = -7814LL;

    t164 = (((x657^x658)<=x659)&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int16_t x662 = -1;
	int32_t x663 = INT32_MAX;
	volatile int64_t x664 = 1426720452LL;
	volatile int64_t t165 = -2661LL;

    t165 = (((x661^x662)<=x663)&x664);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int8_t x666 = -1;
	int16_t x668 = INT16_MIN;
	int32_t t166 = -472;

    t166 = (((x665^x666)<=x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	volatile int16_t x672 = INT16_MIN;
	static int32_t t167 = -515441;

    t167 = (((x669^x670)<=x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 2846055475LLU;
	volatile int64_t x674 = INT64_MIN;
	uint8_t x676 = 0U;
	int32_t t168 = -1;

    t168 = (((x673^x674)<=x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x678 = -10537355;
	uint32_t x679 = UINT32_MAX;
	uint64_t x680 = UINT64_MAX;

    t169 = (((x677^x678)<=x679)&x680);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 3543;
	uint8_t x682 = UINT8_MAX;
	int64_t x683 = -1307032479204422LL;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 4473;

    t170 = (((x681^x682)<=x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 17U;
	int64_t x686 = -1LL;
	static int64_t x687 = 798927790411742LL;
	int8_t x688 = INT8_MAX;
	int32_t t171 = -652;

    t171 = (((x685^x686)<=x687)&x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	int8_t x691 = -1;
	static uint32_t x692 = UINT32_MAX;
	uint32_t t172 = 76345843U;

    t172 = (((x689^x690)<=x691)&x692);

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x694 = 21U;

    t173 = (((x693^x694)<=x695)&x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	volatile int64_t x698 = 2619547629272460LL;
	int64_t x699 = -2LL;
	int8_t x700 = -1;
	static int32_t t174 = -72;

    t174 = (((x697^x698)<=x699)&x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t t175 = 4681189351933LL;

    t175 = (((x701^x702)<=x703)&x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 1;
	volatile int8_t x706 = INT8_MIN;
	static uint8_t x707 = 59U;
	uint64_t x708 = 62LLU;

    t176 = (((x705^x706)<=x707)&x708);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	static int64_t x710 = INT64_MIN;
	static int64_t x712 = INT64_MIN;
	int64_t t177 = -85259947427359LL;

    t177 = (((x709^x710)<=x711)&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 2U;
	volatile uint16_t x714 = UINT16_MAX;
	int64_t x715 = INT64_MIN;
	volatile uint8_t x716 = 1U;
	int32_t t178 = -227;

    t178 = (((x713^x714)<=x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = 359478873LL;
	int16_t x719 = INT16_MIN;
	int32_t t179 = -67;

    t179 = (((x717^x718)<=x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	static int16_t x722 = -1;
	uint64_t x723 = 392LLU;
	volatile int64_t x724 = INT64_MIN;

    t180 = (((x721^x722)<=x723)&x724);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	static int16_t x726 = -2341;
	static volatile uint64_t x727 = 11086721471000LLU;
	uint32_t x728 = 322775U;
	uint32_t t181 = 149926U;

    t181 = (((x725^x726)<=x727)&x728);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 45;
	int8_t x730 = INT8_MIN;
	int64_t x731 = 26971LL;
	int16_t x732 = INT16_MIN;
	int32_t t182 = 242140;

    t182 = (((x729^x730)<=x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 114U;
	int64_t x735 = 661590360573LL;
	uint32_t x736 = 90537U;
	volatile uint32_t t183 = 6U;

    t183 = (((x733^x734)<=x735)&x736);

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -21668235508869124LL;
	int64_t x738 = INT64_MAX;
	int32_t x739 = 715;
	static int64_t x740 = -93545830986LL;
	int64_t t184 = 502257937075436LL;

    t184 = (((x737^x738)<=x739)&x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = 15357;
	static volatile int16_t x742 = INT16_MIN;
	static int32_t x743 = INT32_MIN;
	volatile uint16_t x744 = UINT16_MAX;
	int32_t t185 = -4009;

    t185 = (((x741^x742)<=x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 1;
	uint32_t x747 = 8165383U;
	volatile int32_t t186 = 1174;

    t186 = (((x745^x746)<=x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 1U;
	static int16_t x750 = 77;
	int8_t x751 = 10;
	volatile int64_t x752 = -1489445646LL;
	int64_t t187 = -16327434884262602LL;

    t187 = (((x749^x750)<=x751)&x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = 4270278U;
	volatile uint64_t x754 = 79451239LLU;
	volatile int8_t x755 = -6;
	int16_t x756 = INT16_MAX;
	volatile int32_t t188 = 7803688;

    t188 = (((x753^x754)<=x755)&x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -1;
	volatile int8_t x759 = INT8_MAX;
	int64_t x760 = INT64_MAX;
	static volatile int64_t t189 = -900019LL;

    t189 = (((x757^x758)<=x759)&x760);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MIN;
	int16_t x762 = INT16_MIN;
	volatile uint64_t t190 = 2LLU;

    t190 = (((x761^x762)<=x763)&x764);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	volatile int64_t x766 = INT64_MIN;
	static uint8_t x767 = 27U;
	int32_t x768 = INT32_MIN;
	volatile int32_t t191 = 3168606;

    t191 = (((x765^x766)<=x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MAX;
	int64_t x771 = -25408312591414585LL;
	int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 32831719;

    t192 = (((x769^x770)<=x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = INT32_MIN;
	volatile int32_t x775 = -12;
	uint64_t x776 = UINT64_MAX;
	uint64_t t193 = 13172594LLU;

    t193 = (((x773^x774)<=x775)&x776);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile uint32_t x778 = UINT32_MAX;
	int16_t x780 = INT16_MIN;
	static int32_t t194 = 76;

    t194 = (((x777^x778)<=x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 0U;
	static int32_t x782 = -645;
	volatile uint16_t x783 = 504U;
	int32_t x784 = -1;
	int32_t t195 = -867145437;

    t195 = (((x781^x782)<=x783)&x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -48715819;
	int64_t x786 = -1LL;
	int64_t x787 = INT64_MIN;
	int64_t t196 = -8612512LL;

    t196 = (((x785^x786)<=x787)&x788);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 1151U;
	static int64_t x790 = -1LL;
	int16_t x791 = INT16_MIN;
	int64_t x792 = INT64_MAX;
	int64_t t197 = -54583698810LL;

    t197 = (((x789^x790)<=x791)&x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x794 = 3U;
	int64_t x795 = INT64_MIN;
	int32_t x796 = -1;
	static int32_t t198 = 249649;

    t198 = (((x793^x794)<=x795)&x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	static uint64_t x798 = UINT64_MAX;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = -1;
	int32_t t199 = 12789;

    t199 = (((x797^x798)<=x799)&x800);

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

