
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

static int64_t x3 = INT64_MIN;
int32_t t0 = 63904;
uint16_t x10 = 3U;
static int16_t x16 = INT16_MIN;
int16_t x17 = INT16_MIN;
uint16_t x24 = 3U;
volatile int8_t x29 = INT8_MIN;
volatile int8_t x36 = 1;
uint16_t x37 = 2U;
static int16_t x46 = 41;
static uint64_t x60 = 31025435728584114LLU;
static int64_t x62 = 1447708555924846LL;
static int64_t t16 = 31LL;
volatile int64_t t18 = -3582LL;
static int8_t x87 = INT8_MIN;
uint16_t x90 = UINT16_MAX;
uint64_t x91 = UINT64_MAX;
static int64_t x94 = INT64_MAX;
volatile uint16_t x101 = 1873U;
static int64_t x110 = INT64_MAX;
int64_t x112 = INT64_MIN;
volatile int32_t t27 = -91064;
static volatile int16_t x120 = INT16_MIN;
static uint16_t x129 = 45U;
int8_t x130 = INT8_MIN;
int8_t x136 = -7;
int8_t x142 = INT8_MIN;
volatile uint64_t x144 = 17846125841705688LLU;
uint64_t t34 = 148064146959440412LLU;
uint8_t x149 = UINT8_MAX;
static int8_t x150 = INT8_MIN;
static volatile uint64_t x152 = 376294516368LLU;
uint64_t t36 = 1970064616728771LLU;
volatile int64_t x156 = INT64_MAX;
int32_t x157 = INT32_MAX;
static volatile int8_t x161 = -1;
volatile uint32_t x171 = 2U;
volatile int64_t t41 = -1701012093LL;
int16_t x179 = INT16_MAX;
int16_t x185 = -160;
uint32_t x193 = 185U;
int8_t x197 = INT8_MAX;
static int32_t t48 = -29422;
int64_t t51 = -17921470116LL;
uint64_t x223 = 166951598382488438LLU;
volatile int32_t t55 = -31;
volatile int8_t x229 = 6;
uint32_t x231 = 882680566U;
int16_t x238 = INT16_MAX;
volatile int32_t t59 = 114;
volatile int32_t t61 = 7;
static uint64_t x256 = 60LLU;
static uint64_t t62 = 20468417340LLU;
int32_t x270 = INT32_MIN;
int32_t t67 = 767642;
uint32_t x282 = UINT32_MAX;
volatile int16_t x284 = 1;
int32_t x288 = INT32_MAX;
uint32_t x293 = UINT32_MAX;
uint32_t x300 = 293305831U;
volatile int32_t t73 = -1087216;
int8_t x310 = INT8_MAX;
volatile int16_t x318 = 3965;
int8_t x322 = INT8_MAX;
int32_t x325 = -1;
uint16_t x327 = 121U;
int8_t x333 = -29;
uint64_t x336 = 1LLU;
volatile uint64_t t79 = 179159606304975LLU;
uint32_t x338 = 35969U;
int32_t x340 = INT32_MIN;
static int32_t t80 = 60503;
uint32_t x347 = 7019686U;
uint8_t x359 = UINT8_MAX;
uint64_t x362 = 72695859LLU;
static int64_t x364 = INT64_MIN;
int32_t x365 = -1;
uint16_t x367 = 346U;
uint8_t x368 = UINT8_MAX;
uint8_t x370 = 19U;
volatile int32_t x371 = INT32_MAX;
volatile int8_t x376 = -1;
uint64_t x378 = 4146661100631183015LLU;
uint8_t x391 = 2U;
int32_t x397 = -148;
uint32_t x398 = 23939776U;
volatile int16_t x402 = -1;
int8_t x403 = INT8_MIN;
int64_t t95 = 1336819676206386LL;
int16_t x414 = -1;
static uint16_t x416 = 79U;
int8_t x420 = -2;
volatile int32_t t99 = 24669;
volatile int64_t t100 = 4528046100LL;
uint64_t x426 = 1LLU;
int32_t t101 = 707714525;
volatile int16_t x430 = INT16_MIN;
int64_t x435 = 4770012608959LL;
static volatile int32_t t103 = 1;
uint8_t x439 = 19U;
uint32_t x447 = UINT32_MAX;
static int16_t x460 = INT16_MIN;
volatile int32_t t109 = 0;
uint16_t x461 = 153U;
int64_t x469 = INT64_MAX;
int16_t x470 = INT16_MIN;
static int16_t x482 = INT16_MIN;
uint32_t x489 = 2U;
volatile int8_t x490 = INT8_MIN;
uint64_t x497 = UINT64_MAX;
volatile int64_t t119 = 484411051478067642LL;
uint64_t x503 = 147223658647LLU;
volatile int32_t t120 = -57;
int16_t x506 = INT16_MIN;
uint16_t x510 = 495U;
uint16_t x518 = 74U;
static int64_t t124 = -3790768530777925070LL;
uint64_t x521 = 7005161351LLU;
int8_t x523 = INT8_MAX;
int64_t t125 = -40LL;
uint64_t x527 = 9007LLU;
static uint8_t x533 = UINT8_MAX;
int64_t x538 = INT64_MIN;
volatile int32_t x541 = INT32_MAX;
int64_t x551 = INT64_MIN;
int32_t t132 = -54;
static volatile int64_t x559 = 12505711590355LL;
volatile int64_t x564 = -1LL;
int64_t x567 = INT64_MIN;
volatile uint32_t x571 = UINT32_MAX;
uint64_t t137 = 5974554951957749LLU;
uint8_t x577 = 1U;
static uint64_t x585 = UINT64_MAX;
int16_t x588 = INT16_MAX;
int8_t x599 = -3;
uint8_t x603 = UINT8_MAX;
uint64_t x605 = 1716986022LLU;
int8_t x607 = INT8_MIN;
int64_t t145 = -25LL;
static int64_t x609 = INT64_MIN;
uint64_t x610 = UINT64_MAX;
static int32_t x611 = -1;
volatile uint32_t x617 = 56043U;
int32_t t149 = 0;
volatile int64_t t150 = -19835824123390204LL;
int32_t x630 = INT32_MIN;
int32_t t152 = 1057555205;
volatile int32_t t153 = -6637527;
volatile uint64_t x646 = UINT64_MAX;
volatile uint64_t x648 = UINT64_MAX;
uint32_t x653 = 227372U;
int64_t x657 = -1LL;
static uint16_t x664 = UINT16_MAX;
int32_t t159 = -10210511;
int32_t x666 = -1;
int64_t x670 = INT64_MIN;
static uint32_t x671 = 287040840U;
volatile int64_t t162 = 1334253077LL;
uint32_t x679 = UINT32_MAX;
uint16_t x688 = 195U;
volatile int64_t t167 = 26543263327322078LL;
static int32_t x697 = -1;
int16_t x701 = 1583;
int8_t x704 = INT8_MAX;
static int32_t x706 = INT32_MIN;
int16_t x716 = INT16_MIN;
int32_t x722 = INT32_MAX;
int64_t x731 = -52847804LL;
static uint32_t x735 = 9346U;
int32_t t177 = 58;
static int64_t x737 = -1LL;
volatile int32_t t179 = -14450;
int16_t x748 = INT16_MIN;
static uint32_t x751 = 989149U;
int32_t t181 = 6;
int16_t x756 = INT16_MIN;
volatile uint64_t x757 = UINT64_MAX;
int32_t x763 = INT32_MIN;
static int64_t x778 = INT64_MIN;
volatile uint32_t x782 = 59U;
volatile uint16_t x787 = 10U;
static volatile int64_t x788 = -1LL;
uint8_t x794 = 42U;
int64_t x796 = INT64_MAX;
static int16_t x799 = INT16_MAX;
int32_t x808 = INT32_MAX;
int64_t x809 = -1LL;
uint64_t x821 = 8430079827387291LLU;
uint8_t x828 = UINT8_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static volatile uint8_t x2 = UINT8_MAX;
	uint16_t x4 = 1U;

    t0 = (((x1/x2)!=x3)&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 10LLU;
	static volatile int64_t x6 = -29343LL;
	int32_t x7 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -505263243;

    t1 = (((x5/x6)!=x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = 90903LL;

    t2 = (((x9/x10)!=x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 12;
	int16_t x14 = INT16_MIN;
	uint32_t x15 = 37251683U;
	static volatile int32_t t3 = 381867;

    t3 = (((x13/x14)!=x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = -1;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 5000431U;
	uint32_t t4 = 0U;

    t4 = (((x17/x18)!=x19)&x20);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t t5 = 73415;

    t5 = (((x21/x22)!=x23)&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	volatile int8_t x26 = 1;
	int32_t x27 = -894;
	static uint8_t x28 = 8U;
	int32_t t6 = -11;

    t6 = (((x25/x26)!=x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 1270395596816446643LLU;
	int16_t x31 = -27;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 48179827;

    t7 = (((x29/x30)!=x31)&x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 607U;
	static uint8_t x34 = 86U;
	uint16_t x35 = 14179U;
	int32_t t8 = -213;

    t8 = (((x33/x34)!=x35)&x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -1LL;
	volatile int8_t x39 = 0;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -6250860497190457LL;

    t9 = (((x37/x38)!=x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 475U;
	int8_t x42 = INT8_MIN;
	static uint8_t x43 = UINT8_MAX;
	int64_t x44 = 507646202218LL;
	volatile int64_t t10 = 200711424154497492LL;

    t10 = (((x41/x42)!=x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 6997U;
	volatile int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 194579;

    t11 = (((x45/x46)!=x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = INT64_MAX;
	uint8_t x54 = 119U;
	uint32_t x55 = 717033U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 1LLU;

    t12 = (((x53/x54)!=x55)&x56);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 1;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = 0;
	static uint64_t t13 = 33821474LLU;

    t13 = (((x57/x58)!=x59)&x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = -227791138;
	uint64_t x63 = 5995LLU;
	uint64_t x64 = 9262LLU;
	uint64_t t14 = 743LLU;

    t14 = (((x61/x62)!=x63)&x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -2;
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 17;

    t15 = (((x65/x66)!=x67)&x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	int64_t x70 = 3990622631LL;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;

    t16 = (((x69/x70)!=x71)&x72);

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MAX;
	uint32_t x74 = 31U;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = -90576;

    t17 = (((x73/x74)!=x75)&x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x77 = -309LL;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 1LLU;
	int64_t x80 = INT64_MIN;

    t18 = (((x77/x78)!=x79)&x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	uint64_t x82 = 45LLU;
	int64_t x83 = 567646531111LL;
	int64_t x84 = 2174066774163938005LL;
	volatile int64_t t19 = 327LL;

    t19 = (((x81/x82)!=x83)&x84);

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 478U;
	uint16_t x86 = UINT16_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t20 = 33460409912LLU;

    t20 = (((x85/x86)!=x87)&x88);

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	int32_t x92 = INT32_MIN;
	int32_t t21 = 38118;

    t21 = (((x89/x90)!=x91)&x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = 3;
	static uint16_t x95 = 3U;
	volatile uint16_t x96 = 1U;
	volatile int32_t t22 = -1;

    t22 = (((x93/x94)!=x95)&x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = 143;
	static int32_t x98 = -1;
	int8_t x99 = -1;
	int64_t x100 = -1641911798523902LL;
	int64_t t23 = -490228970LL;

    t23 = (((x97/x98)!=x99)&x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x102 = UINT64_MAX;
	static volatile uint64_t x103 = 107362459935718LLU;
	volatile int32_t x104 = INT32_MIN;
	volatile int32_t t24 = -9628716;

    t24 = (((x101/x102)!=x103)&x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x105 = INT32_MAX;
	static int8_t x106 = -15;
	uint16_t x107 = 1U;
	uint8_t x108 = 127U;
	volatile int32_t t25 = -448;

    t25 = (((x105/x106)!=x107)&x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x109 = INT8_MIN;
	int16_t x111 = 12661;
	int64_t t26 = -29931692535869499LL;

    t26 = (((x109/x110)!=x111)&x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x113 = INT64_MIN;
	uint16_t x114 = UINT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static int8_t x116 = 3;

    t27 = (((x113/x114)!=x115)&x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = 1;
	volatile int32_t t28 = -6207037;

    t28 = (((x117/x118)!=x119)&x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x121 = 2U;
	uint32_t x122 = 41550U;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = INT16_MIN;
	static volatile int32_t t29 = -2782;

    t29 = (((x121/x122)!=x123)&x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 111U;
	uint64_t x126 = 191582216LLU;
	int64_t x127 = INT64_MIN;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 732499262LLU;

    t30 = (((x125/x126)!=x127)&x128);

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x131 = 1;
	int64_t x132 = INT64_MIN;
	volatile int64_t t31 = -389226547654LL;

    t31 = (((x129/x130)!=x131)&x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -1;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = INT32_MIN;
	volatile int32_t t32 = -6;

    t32 = (((x133/x134)!=x135)&x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x137 = -1LL;
	volatile int32_t x138 = -14734;
	volatile int32_t x139 = INT32_MAX;
	uint16_t x140 = 231U;
	volatile int32_t t33 = -100312348;

    t33 = (((x137/x138)!=x139)&x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -15900899;
	volatile int8_t x143 = INT8_MIN;

    t34 = (((x141/x142)!=x143)&x144);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile int32_t x146 = -46;
	static uint64_t x147 = UINT64_MAX;
	uint8_t x148 = 9U;
	int32_t t35 = 0;

    t35 = (((x145/x146)!=x147)&x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x151 = INT64_MIN;

    t36 = (((x149/x150)!=x151)&x152);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MIN;
	volatile int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	volatile int64_t t37 = 1LL;

    t37 = (((x153/x154)!=x155)&x156);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x158 = UINT8_MAX;
	volatile uint16_t x159 = 11U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -7253LL;

    t38 = (((x157/x158)!=x159)&x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x162 = -1;
	int8_t x163 = 4;
	volatile int32_t x164 = INT32_MAX;
	int32_t t39 = 19781261;

    t39 = (((x161/x162)!=x163)&x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MAX;
	volatile int8_t x166 = INT8_MIN;
	uint64_t x167 = UINT64_MAX;
	volatile int64_t x168 = INT64_MIN;
	static int64_t t40 = 3LL;

    t40 = (((x165/x166)!=x167)&x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 20576U;
	uint64_t x170 = UINT64_MAX;
	int64_t x172 = -1LL;

    t41 = (((x169/x170)!=x171)&x172);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = 121LL;
	int32_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile int64_t t42 = 1748LL;

    t42 = (((x173/x174)!=x175)&x176);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = 11U;
	volatile int64_t x178 = INT64_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t43 = 498011325;

    t43 = (((x177/x178)!=x179)&x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x181 = -2574LL;
	static volatile uint8_t x182 = 2U;
	uint32_t x183 = 0U;
	volatile int64_t x184 = -1LL;
	int64_t t44 = -194594979748739LL;

    t44 = (((x181/x182)!=x183)&x184);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x186 = 16755717948770346LL;
	volatile int8_t x187 = -5;
	uint32_t x188 = 70466317U;
	volatile uint32_t t45 = 816U;

    t45 = (((x185/x186)!=x187)&x188);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = INT64_MAX;
	static uint64_t x190 = UINT64_MAX;
	int64_t x191 = INT64_MAX;
	int32_t x192 = -1;
	int32_t t46 = -241;

    t46 = (((x189/x190)!=x191)&x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x194 = -16;
	volatile int16_t x195 = INT16_MIN;
	static uint8_t x196 = 6U;
	int32_t t47 = 81179166;

    t47 = (((x193/x194)!=x195)&x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x198 = INT16_MIN;
	uint16_t x199 = 1U;
	static int8_t x200 = INT8_MIN;

    t48 = (((x197/x198)!=x199)&x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = INT8_MAX;
	uint64_t x202 = 21916112LLU;
	int8_t x203 = INT8_MIN;
	volatile int32_t x204 = -83569;
	int32_t t49 = -1934;

    t49 = (((x201/x202)!=x203)&x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int32_t x206 = 460626422;
	static int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t50 = -1197889321LL;

    t50 = (((x205/x206)!=x207)&x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x209 = 449;
	int8_t x210 = -1;
	volatile int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MAX;

    t51 = (((x209/x210)!=x211)&x212);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 0U;
	int32_t x214 = 8719;
	uint8_t x215 = 2U;
	int8_t x216 = INT8_MIN;
	static int32_t t52 = 6551147;

    t52 = (((x213/x214)!=x215)&x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x217 = UINT16_MAX;
	static int16_t x218 = INT16_MIN;
	int32_t x219 = 16;
	static int32_t x220 = -264480;
	int32_t t53 = -23;

    t53 = (((x217/x218)!=x219)&x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 15282U;
	static volatile uint64_t x222 = UINT64_MAX;
	int16_t x224 = -1;
	static volatile int32_t t54 = -916;

    t54 = (((x221/x222)!=x223)&x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	static volatile int64_t x227 = INT64_MAX;
	int8_t x228 = 7;

    t55 = (((x225/x226)!=x227)&x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x230 = 222U;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t56 = -1;

    t56 = (((x229/x230)!=x231)&x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = 2966LLU;
	int16_t x234 = -1;
	static int16_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t57 = -105624;

    t57 = (((x233/x234)!=x235)&x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = -1;
	int64_t x239 = 42867631187LL;
	int64_t x240 = 93708728280LL;
	static int64_t t58 = 8337112693LL;

    t58 = (((x237/x238)!=x239)&x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x241 = INT32_MAX;
	int16_t x242 = -1;
	int8_t x243 = -1;
	static int32_t x244 = 1013566057;

    t59 = (((x241/x242)!=x243)&x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x245 = 1467108535381LL;
	static volatile int16_t x246 = INT16_MIN;
	volatile int64_t x247 = INT64_MAX;
	static int32_t x248 = 72024317;
	int32_t t60 = -3622892;

    t60 = (((x245/x246)!=x247)&x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x249 = INT32_MIN;
	int32_t x250 = -2183;
	volatile int8_t x251 = INT8_MIN;
	volatile int8_t x252 = 1;

    t61 = (((x249/x250)!=x251)&x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;

    t62 = (((x253/x254)!=x255)&x256);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x257 = UINT8_MAX;
	int32_t x258 = -3216268;
	uint64_t x259 = 133915930LLU;
	int64_t x260 = INT64_MIN;
	int64_t t63 = 8762755504044LL;

    t63 = (((x257/x258)!=x259)&x260);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = UINT16_MAX;
	static uint8_t x262 = 24U;
	static int64_t x263 = -1LL;
	static uint16_t x264 = 187U;
	int32_t t64 = 78;

    t64 = (((x261/x262)!=x263)&x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 14U;
	int16_t x266 = -1;
	int32_t x267 = 46;
	uint32_t x268 = 339585U;
	uint32_t t65 = 1U;

    t65 = (((x265/x266)!=x267)&x268);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x269 = -1;
	volatile int16_t x271 = 1;
	volatile int32_t x272 = 3;
	int32_t t66 = 823762;

    t66 = (((x269/x270)!=x271)&x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x273 = 7089178LL;
	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = -95744858;

    t67 = (((x273/x274)!=x275)&x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = 5;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t68 = 62180724;

    t68 = (((x277/x278)!=x279)&x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x281 = INT16_MIN;
	volatile int8_t x283 = INT8_MIN;
	static int32_t t69 = -12936641;

    t69 = (((x281/x282)!=x283)&x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = -1802323;
	int16_t x286 = INT16_MAX;
	uint8_t x287 = 4U;
	int32_t t70 = 52;

    t70 = (((x285/x286)!=x287)&x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x294 = -28;
	uint64_t x295 = 49868111491LLU;
	int32_t x296 = INT32_MAX;
	volatile int32_t t71 = 161413175;

    t71 = (((x293/x294)!=x295)&x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 1680U;
	int16_t x298 = -561;
	volatile int8_t x299 = 62;
	static uint32_t t72 = 1119695557U;

    t72 = (((x297/x298)!=x299)&x300);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MAX;
	uint32_t x302 = 22870U;
	static int16_t x303 = -1;
	int32_t x304 = INT32_MIN;

    t73 = (((x301/x302)!=x303)&x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x309 = INT8_MIN;
	int8_t x311 = -2;
	static int16_t x312 = INT16_MIN;
	int32_t t74 = -2;

    t74 = (((x309/x310)!=x311)&x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x313 = 8U;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = INT64_MAX;
	volatile int64_t x316 = 1254178388636222LL;
	int64_t t75 = -802949924620946729LL;

    t75 = (((x313/x314)!=x315)&x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x317 = 2079792LLU;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t76 = 275834757074LLU;

    t76 = (((x317/x318)!=x319)&x320);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x323 = -1;
	static uint16_t x324 = 0U;
	int32_t t77 = -1881;

    t77 = (((x321/x322)!=x323)&x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x326 = 3506U;
	int16_t x328 = INT16_MIN;
	static int32_t t78 = -63;

    t78 = (((x325/x326)!=x327)&x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x334 = 33U;
	static volatile int16_t x335 = 1932;

    t79 = (((x333/x334)!=x335)&x336);

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x337 = 9U;
	int64_t x339 = 166508743644LL;

    t80 = (((x337/x338)!=x339)&x340);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x345 = 15190213U;
	volatile uint16_t x346 = 1224U;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t81 = -221497LL;

    t81 = (((x345/x346)!=x347)&x348);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x349 = INT64_MAX;
	uint8_t x350 = 13U;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;
	static int32_t t82 = 45;

    t82 = (((x349/x350)!=x351)&x352);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x353 = 23;
	int16_t x354 = -1;
	uint16_t x355 = 774U;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t83 = -1;

    t83 = (((x353/x354)!=x355)&x356);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x357 = 19039986U;
	uint32_t x358 = UINT32_MAX;
	int16_t x360 = -1047;
	volatile int32_t t84 = -193495;

    t84 = (((x357/x358)!=x359)&x360);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x361 = INT64_MIN;
	int32_t x363 = -180802299;
	volatile int64_t t85 = -179007321208LL;

    t85 = (((x361/x362)!=x363)&x364);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x366 = 688;
	int32_t t86 = 10743162;

    t86 = (((x365/x366)!=x367)&x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x369 = UINT16_MAX;
	static int16_t x372 = 167;
	volatile int32_t t87 = -829411;

    t87 = (((x369/x370)!=x371)&x372);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = -17;
	int64_t x374 = INT64_MIN;
	int64_t x375 = 5LL;
	int32_t t88 = 381705825;

    t88 = (((x373/x374)!=x375)&x376);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x377 = 6;
	volatile int32_t x379 = -1;
	uint32_t x380 = 23533U;
	static volatile uint32_t t89 = 18U;

    t89 = (((x377/x378)!=x379)&x380);

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x381 = -1;
	volatile int32_t x382 = 90526;
	uint32_t x383 = 1222436U;
	static int32_t x384 = -1;
	int32_t t90 = -369719;

    t90 = (((x381/x382)!=x383)&x384);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x385 = -62;
	volatile int16_t x386 = 242;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = INT32_MIN;
	volatile int32_t t91 = 0;

    t91 = (((x385/x386)!=x387)&x388);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x389 = UINT64_MAX;
	int8_t x390 = 15;
	volatile uint16_t x392 = 186U;
	static volatile int32_t t92 = 857677;

    t92 = (((x389/x390)!=x391)&x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x393 = 8377747U;
	static uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	int64_t x396 = 10854153LL;
	int64_t t93 = -13LL;

    t93 = (((x393/x394)!=x395)&x396);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x399 = -1;
	int8_t x400 = -1;
	int32_t t94 = -346282;

    t94 = (((x397/x398)!=x399)&x400);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x401 = 1203U;
	volatile int64_t x404 = -425368248316LL;

    t95 = (((x401/x402)!=x403)&x404);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = -1LL;
	static volatile int32_t x406 = -12;
	uint32_t x407 = 3186541U;
	static volatile int16_t x408 = -21;
	int32_t t96 = 115776;

    t96 = (((x405/x406)!=x407)&x408);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = INT8_MIN;
	static volatile int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t97 = 348110LL;

    t97 = (((x409/x410)!=x411)&x412);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = 822284040156LL;
	static volatile int64_t x415 = 8492468724154576LL;
	int32_t t98 = -4;

    t98 = (((x413/x414)!=x415)&x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 1;
	int64_t x418 = -650690639809195039LL;
	int32_t x419 = INT32_MIN;

    t99 = (((x417/x418)!=x419)&x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x421 = 538U;
	static volatile int64_t x422 = 7LL;
	int8_t x423 = INT8_MIN;
	int64_t x424 = INT64_MAX;

    t100 = (((x421/x422)!=x423)&x424);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x425 = 183U;
	uint32_t x427 = 29565477U;
	int8_t x428 = -1;

    t101 = (((x425/x426)!=x427)&x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x429 = INT32_MIN;
	int16_t x431 = 685;
	int16_t x432 = -383;
	volatile int32_t t102 = 8;

    t102 = (((x429/x430)!=x431)&x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = 11923153;
	int64_t x434 = INT64_MIN;
	int16_t x436 = 56;

    t103 = (((x433/x434)!=x435)&x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	uint32_t x438 = UINT32_MAX;
	int32_t x440 = -1;
	int32_t t104 = -46587;

    t104 = (((x437/x438)!=x439)&x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x441 = 2U;
	int32_t x442 = INT32_MAX;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MIN;
	int32_t t105 = -6;

    t105 = (((x441/x442)!=x443)&x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = INT32_MAX;
	uint64_t x446 = 362044944LLU;
	int32_t x448 = INT32_MIN;
	int32_t t106 = -84023339;

    t106 = (((x445/x446)!=x447)&x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x449 = UINT64_MAX;
	volatile int8_t x450 = INT8_MAX;
	int64_t x451 = INT64_MIN;
	int8_t x452 = -20;
	int32_t t107 = -714450222;

    t107 = (((x449/x450)!=x451)&x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = -1;
	uint64_t x454 = 1441300563LLU;
	static uint32_t x455 = 4727168U;
	int32_t x456 = INT32_MIN;
	volatile int32_t t108 = 196355066;

    t108 = (((x453/x454)!=x455)&x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x457 = INT16_MIN;
	uint64_t x458 = 963745746458396LLU;
	int16_t x459 = INT16_MIN;

    t109 = (((x457/x458)!=x459)&x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x462 = 3LLU;
	uint8_t x463 = UINT8_MAX;
	uint16_t x464 = UINT16_MAX;
	int32_t t110 = -3;

    t110 = (((x461/x462)!=x463)&x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x465 = -1;
	volatile int8_t x466 = INT8_MAX;
	volatile int16_t x467 = INT16_MIN;
	volatile uint16_t x468 = 9U;
	volatile int32_t t111 = 79201;

    t111 = (((x465/x466)!=x467)&x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x471 = INT64_MAX;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t112 = 13583LLU;

    t112 = (((x469/x470)!=x471)&x472);

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x473 = -1LL;
	uint8_t x474 = 7U;
	volatile int16_t x475 = -1;
	volatile int32_t x476 = INT32_MIN;
	static int32_t t113 = -1;

    t113 = (((x473/x474)!=x475)&x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x477 = INT64_MIN;
	int16_t x478 = INT16_MAX;
	int16_t x479 = -4;
	uint64_t x480 = 37092327154850479LLU;
	static uint64_t t114 = 1801226099548LLU;

    t114 = (((x477/x478)!=x479)&x480);

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = -1;
	volatile int16_t x483 = INT16_MIN;
	static volatile int64_t x484 = INT64_MIN;
	volatile int64_t t115 = 17908750LL;

    t115 = (((x481/x482)!=x483)&x484);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x485 = INT32_MAX;
	uint8_t x486 = 73U;
	static volatile int64_t x487 = INT64_MIN;
	uint16_t x488 = 0U;
	volatile int32_t t116 = -15304376;

    t116 = (((x485/x486)!=x487)&x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x491 = INT16_MIN;
	static volatile int16_t x492 = -2420;
	volatile int32_t t117 = 515049550;

    t117 = (((x489/x490)!=x491)&x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x493 = INT32_MIN;
	uint64_t x494 = 84LLU;
	uint32_t x495 = 763U;
	int16_t x496 = -1;
	int32_t t118 = 20;

    t118 = (((x493/x494)!=x495)&x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x498 = 48111767217LLU;
	static volatile int16_t x499 = -3;
	volatile int64_t x500 = 7774835192LL;

    t119 = (((x497/x498)!=x499)&x500);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x501 = 2397474884674LLU;
	int64_t x502 = -441LL;
	volatile int32_t x504 = -1;

    t120 = (((x501/x502)!=x503)&x504);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x505 = -1LL;
	int16_t x507 = INT16_MIN;
	int32_t x508 = 1561091;
	volatile int32_t t121 = 180;

    t121 = (((x505/x506)!=x507)&x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x509 = INT32_MIN;
	int16_t x511 = INT16_MIN;
	static volatile uint16_t x512 = 2U;
	static int32_t t122 = -9066;

    t122 = (((x509/x510)!=x511)&x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = 278484786U;
	uint16_t x514 = UINT16_MAX;
	volatile int64_t x515 = INT64_MIN;
	int8_t x516 = -1;
	static int32_t t123 = -7;

    t123 = (((x513/x514)!=x515)&x516);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = 5;
	int8_t x519 = 53;
	int64_t x520 = INT64_MIN;

    t124 = (((x517/x518)!=x519)&x520);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x522 = 765705830553052LLU;
	int64_t x524 = -933223750300LL;

    t125 = (((x521/x522)!=x523)&x524);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x525 = INT8_MIN;
	int32_t x526 = -30;
	volatile int8_t x528 = -1;
	int32_t t126 = 42491304;

    t126 = (((x525/x526)!=x527)&x528);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x529 = 288U;
	int16_t x530 = 318;
	uint64_t x531 = 14931368LLU;
	static int32_t x532 = 2;
	volatile int32_t t127 = -74717728;

    t127 = (((x529/x530)!=x531)&x532);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x534 = INT64_MAX;
	uint16_t x535 = 3839U;
	static uint64_t x536 = 118028LLU;
	volatile uint64_t t128 = 13362994272860477LLU;

    t128 = (((x533/x534)!=x535)&x536);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = INT8_MAX;
	volatile int32_t x539 = INT32_MAX;
	int16_t x540 = 1;
	int32_t t129 = 6612413;

    t129 = (((x537/x538)!=x539)&x540);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x542 = 5712LLU;
	int64_t x543 = -103430542LL;
	int32_t x544 = INT32_MIN;
	volatile int32_t t130 = -1036;

    t130 = (((x541/x542)!=x543)&x544);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x545 = INT8_MIN;
	int64_t x546 = INT64_MIN;
	int16_t x547 = INT16_MAX;
	uint16_t x548 = 28U;
	int32_t t131 = 327;

    t131 = (((x545/x546)!=x547)&x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x549 = 466U;
	uint16_t x550 = 2U;
	int32_t x552 = INT32_MAX;

    t132 = (((x549/x550)!=x551)&x552);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = 1;
	int16_t x554 = INT16_MAX;
	uint16_t x555 = 5U;
	volatile int16_t x556 = INT16_MAX;
	int32_t t133 = 11619448;

    t133 = (((x553/x554)!=x555)&x556);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x557 = 395313;
	int16_t x558 = INT16_MAX;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t134 = 539658813564062283LLU;

    t134 = (((x557/x558)!=x559)&x560);

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x561 = INT32_MIN;
	int32_t x562 = INT32_MAX;
	uint16_t x563 = 2U;
	int64_t t135 = 4371784258152115LL;

    t135 = (((x561/x562)!=x563)&x564);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x565 = 15U;
	volatile uint8_t x566 = UINT8_MAX;
	volatile uint32_t x568 = 1889381357U;
	volatile uint32_t t136 = 168U;

    t136 = (((x565/x566)!=x567)&x568);

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MIN;
	volatile int32_t x570 = 21;
	uint64_t x572 = UINT64_MAX;

    t137 = (((x569/x570)!=x571)&x572);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	uint64_t x576 = 34936384299135LLU;
	uint64_t t138 = 33169842LLU;

    t138 = (((x573/x574)!=x575)&x576);

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x578 = INT64_MAX;
	static uint64_t x579 = 2393373943LLU;
	uint16_t x580 = 5537U;
	int32_t t139 = -20764727;

    t139 = (((x577/x578)!=x579)&x580);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = -14301;
	volatile int16_t x582 = INT16_MIN;
	volatile int16_t x583 = 0;
	uint16_t x584 = 0U;
	int32_t t140 = 7936122;

    t140 = (((x581/x582)!=x583)&x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x586 = 12849535524LLU;
	int16_t x587 = INT16_MAX;
	volatile int32_t t141 = -514327;

    t141 = (((x585/x586)!=x587)&x588);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x589 = 1789808654556952LLU;
	uint16_t x590 = 8U;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = -21244554;
	int32_t t142 = -5140;

    t142 = (((x589/x590)!=x591)&x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x597 = INT16_MIN;
	int16_t x598 = -1;
	int64_t x600 = -2321063LL;
	static volatile int64_t t143 = 379510833228LL;

    t143 = (((x597/x598)!=x599)&x600);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x601 = -1;
	volatile int64_t x602 = -210320375LL;
	static int64_t x604 = -39436846098980500LL;
	volatile int64_t t144 = 1470825999030657LL;

    t144 = (((x601/x602)!=x603)&x604);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x606 = INT64_MIN;
	int64_t x608 = INT64_MIN;

    t145 = (((x605/x606)!=x607)&x608);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x612 = 1U;
	volatile int32_t t146 = -162241;

    t146 = (((x609/x610)!=x611)&x612);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x613 = 3U;
	volatile uint8_t x614 = UINT8_MAX;
	int32_t x615 = INT32_MIN;
	int32_t x616 = INT32_MAX;
	volatile int32_t t147 = 625;

    t147 = (((x613/x614)!=x615)&x616);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x618 = INT64_MAX;
	volatile int8_t x619 = INT8_MIN;
	int8_t x620 = -1;
	volatile int32_t t148 = 1070019;

    t148 = (((x617/x618)!=x619)&x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x621 = INT32_MIN;
	uint32_t x622 = UINT32_MAX;
	volatile int16_t x623 = -9;
	volatile uint16_t x624 = UINT16_MAX;

    t149 = (((x621/x622)!=x623)&x624);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x625 = -1168588;
	volatile int8_t x626 = -1;
	uint8_t x627 = 2U;
	volatile int64_t x628 = INT64_MIN;

    t150 = (((x625/x626)!=x627)&x628);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x629 = 21805764516676872LLU;
	int8_t x631 = -1;
	int8_t x632 = 0;
	volatile int32_t t151 = 14363;

    t151 = (((x629/x630)!=x631)&x632);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x633 = INT8_MAX;
	uint64_t x634 = 9247826LLU;
	volatile int64_t x635 = INT64_MIN;
	volatile uint8_t x636 = 24U;

    t152 = (((x633/x634)!=x635)&x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x637 = -1;
	int64_t x638 = -352096LL;
	int64_t x639 = 6608LL;
	volatile int8_t x640 = INT8_MAX;

    t153 = (((x637/x638)!=x639)&x640);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x641 = UINT64_MAX;
	int64_t x642 = -1LL;
	static int16_t x643 = -6;
	int32_t x644 = INT32_MIN;
	static volatile int32_t t154 = 0;

    t154 = (((x641/x642)!=x643)&x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x645 = -1LL;
	int32_t x647 = INT32_MAX;
	uint64_t t155 = 2LLU;

    t155 = (((x645/x646)!=x647)&x648);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = INT8_MAX;
	int64_t x650 = -430417190027127LL;
	int32_t x651 = 88527;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t156 = 352LLU;

    t156 = (((x649/x650)!=x651)&x652);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x654 = -1LL;
	int8_t x655 = 1;
	uint64_t x656 = UINT64_MAX;
	volatile uint64_t t157 = 231079143163482030LLU;

    t157 = (((x653/x654)!=x655)&x656);

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x658 = 25817LLU;
	int64_t x659 = INT64_MIN;
	volatile int32_t x660 = 4259480;
	int32_t t158 = 1034;

    t158 = (((x657/x658)!=x659)&x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x661 = 743U;
	int32_t x662 = -1;
	int16_t x663 = INT16_MAX;

    t159 = (((x661/x662)!=x663)&x664);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x665 = 216327987305LLU;
	volatile uint8_t x667 = UINT8_MAX;
	uint64_t x668 = 33LLU;
	static uint64_t t160 = 26427339528452690LLU;

    t160 = (((x665/x666)!=x667)&x668);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x669 = INT16_MIN;
	static int64_t x672 = INT64_MIN;
	volatile int64_t t161 = 176527845271LL;

    t161 = (((x669/x670)!=x671)&x672);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = -4968021LL;
	int8_t x674 = INT8_MAX;
	int32_t x675 = 488960;
	int64_t x676 = -1LL;

    t162 = (((x673/x674)!=x675)&x676);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = -861599484831931193LL;
	int64_t x678 = -6898LL;
	int16_t x680 = INT16_MIN;
	volatile int32_t t163 = -3;

    t163 = (((x677/x678)!=x679)&x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x681 = INT16_MAX;
	volatile uint8_t x682 = UINT8_MAX;
	uint64_t x683 = UINT64_MAX;
	int64_t x684 = 388LL;
	static int64_t t164 = 248LL;

    t164 = (((x681/x682)!=x683)&x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = INT8_MAX;
	static int16_t x686 = INT16_MIN;
	int32_t x687 = -1;
	int32_t t165 = 0;

    t165 = (((x685/x686)!=x687)&x688);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = INT32_MIN;
	uint8_t x690 = UINT8_MAX;
	int64_t x691 = INT64_MAX;
	int32_t x692 = INT32_MIN;
	volatile int32_t t166 = -13597032;

    t166 = (((x689/x690)!=x691)&x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x693 = INT64_MIN;
	uint16_t x694 = 18294U;
	int8_t x695 = -2;
	volatile int64_t x696 = -3663991421LL;

    t167 = (((x693/x694)!=x695)&x696);

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x698 = -1;
	uint16_t x699 = 411U;
	uint8_t x700 = 1U;
	static volatile int32_t t168 = 33;

    t168 = (((x697/x698)!=x699)&x700);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x702 = -198;
	int64_t x703 = INT64_MIN;
	int32_t t169 = 49093;

    t169 = (((x701/x702)!=x703)&x704);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x705 = -3266;
	volatile int16_t x707 = INT16_MAX;
	static volatile uint8_t x708 = UINT8_MAX;
	int32_t t170 = 1;

    t170 = (((x705/x706)!=x707)&x708);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = INT16_MIN;
	static int32_t x710 = -1;
	int64_t x711 = -1LL;
	volatile int16_t x712 = 1443;
	volatile int32_t t171 = -205;

    t171 = (((x709/x710)!=x711)&x712);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x713 = INT8_MAX;
	static uint64_t x714 = UINT64_MAX;
	int16_t x715 = INT16_MAX;
	volatile int32_t t172 = -5139;

    t172 = (((x713/x714)!=x715)&x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x717 = UINT32_MAX;
	volatile uint8_t x718 = UINT8_MAX;
	int8_t x719 = -15;
	uint64_t x720 = 1731774103468LLU;
	static volatile uint64_t t173 = 6571497468949377454LLU;

    t173 = (((x717/x718)!=x719)&x720);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x721 = UINT8_MAX;
	int64_t x723 = -53111LL;
	static int16_t x724 = INT16_MIN;
	static int32_t t174 = -3;

    t174 = (((x721/x722)!=x723)&x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x725 = INT16_MIN;
	uint16_t x726 = 55U;
	uint64_t x727 = 55038912LLU;
	int8_t x728 = -26;
	static int32_t t175 = 1082359;

    t175 = (((x725/x726)!=x727)&x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x729 = 13U;
	uint8_t x730 = UINT8_MAX;
	int8_t x732 = -6;
	static volatile int32_t t176 = 3154;

    t176 = (((x729/x730)!=x731)&x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x733 = 76U;
	int16_t x734 = 50;
	int8_t x736 = -2;

    t177 = (((x733/x734)!=x735)&x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x738 = -242LL;
	int64_t x739 = -1LL;
	volatile int16_t x740 = -1;
	static volatile int32_t t178 = -2;

    t178 = (((x737/x738)!=x739)&x740);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x741 = 1894171U;
	uint32_t x742 = 20077283U;
	uint16_t x743 = 5697U;
	int8_t x744 = -11;

    t179 = (((x741/x742)!=x743)&x744);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x745 = 39U;
	int8_t x746 = -23;
	int16_t x747 = -1;
	volatile int32_t t180 = -2697;

    t180 = (((x745/x746)!=x747)&x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x749 = 1U;
	uint16_t x750 = UINT16_MAX;
	uint8_t x752 = UINT8_MAX;

    t181 = (((x749/x750)!=x751)&x752);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x753 = 1U;
	uint8_t x754 = UINT8_MAX;
	volatile int32_t x755 = 1675991;
	int32_t t182 = 1190893;

    t182 = (((x753/x754)!=x755)&x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x758 = -1;
	int8_t x759 = -1;
	int16_t x760 = -1;
	int32_t t183 = -3;

    t183 = (((x757/x758)!=x759)&x760);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = -38101742;
	int32_t x762 = -1;
	int8_t x764 = 8;
	static volatile int32_t t184 = -49594;

    t184 = (((x761/x762)!=x763)&x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x765 = 12U;
	static uint16_t x766 = 6U;
	static int16_t x767 = 2265;
	int8_t x768 = -34;
	volatile int32_t t185 = 4;

    t185 = (((x765/x766)!=x767)&x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x769 = UINT16_MAX;
	int64_t x770 = INT64_MIN;
	static int64_t x771 = INT64_MAX;
	int64_t x772 = -1LL;
	static volatile int64_t t186 = 3026282435834921644LL;

    t186 = (((x769/x770)!=x771)&x772);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x773 = 15LLU;
	volatile int8_t x774 = INT8_MIN;
	int32_t x775 = INT32_MIN;
	int16_t x776 = INT16_MAX;
	int32_t t187 = -1;

    t187 = (((x773/x774)!=x775)&x776);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x777 = INT16_MIN;
	int64_t x779 = INT64_MAX;
	int32_t x780 = INT32_MIN;
	static volatile int32_t t188 = -1;

    t188 = (((x777/x778)!=x779)&x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = -636973472882556LL;
	int8_t x783 = INT8_MIN;
	static int32_t x784 = 105372;
	volatile int32_t t189 = -1;

    t189 = (((x781/x782)!=x783)&x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = -52051137872LL;
	int64_t x786 = 116623LL;
	int64_t t190 = -203298462313931LL;

    t190 = (((x785/x786)!=x787)&x788);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x789 = 2U;
	uint16_t x790 = 2645U;
	uint32_t x791 = 3022U;
	static volatile int8_t x792 = INT8_MAX;
	static volatile int32_t t191 = -755;

    t191 = (((x789/x790)!=x791)&x792);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = -1;
	int32_t x795 = 856154;
	static int64_t t192 = 1853949709311LL;

    t192 = (((x793/x794)!=x795)&x796);

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = 10;
	int16_t x798 = INT16_MIN;
	static int64_t x800 = 5LL;
	static volatile int64_t t193 = -112836130LL;

    t193 = (((x797/x798)!=x799)&x800);

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x805 = INT16_MAX;
	int64_t x806 = -17669057314095LL;
	volatile int64_t x807 = INT64_MIN;
	int32_t t194 = 3114;

    t194 = (((x805/x806)!=x807)&x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x810 = 15862U;
	int32_t x811 = INT32_MIN;
	int32_t x812 = INT32_MAX;
	volatile int32_t t195 = 16085;

    t195 = (((x809/x810)!=x811)&x812);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = 8;
	volatile uint64_t x814 = 1179LLU;
	int32_t x815 = INT32_MIN;
	int32_t x816 = INT32_MIN;
	int32_t t196 = -154236;

    t196 = (((x813/x814)!=x815)&x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x817 = INT64_MIN;
	static uint16_t x818 = 3501U;
	int16_t x819 = -1;
	volatile int32_t x820 = INT32_MIN;
	volatile int32_t t197 = -1952936;

    t197 = (((x817/x818)!=x819)&x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x822 = INT32_MIN;
	uint32_t x823 = UINT32_MAX;
	volatile int64_t x824 = -31869641430599710LL;
	volatile int64_t t198 = -411985623895088LL;

    t198 = (((x821/x822)!=x823)&x824);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = -1LL;
	volatile uint8_t x826 = 6U;
	int64_t x827 = INT64_MAX;
	static volatile int32_t t199 = -218412783;

    t199 = (((x825/x826)!=x827)&x828);

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

