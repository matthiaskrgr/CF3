
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

static int16_t x13 = 5;
int16_t x15 = INT16_MAX;
int32_t x18 = INT32_MIN;
int32_t t4 = 2;
int16_t x22 = INT16_MIN;
uint8_t x29 = UINT8_MAX;
static volatile int32_t x30 = INT32_MIN;
volatile int32_t x32 = INT32_MAX;
uint16_t x34 = 100U;
static volatile int32_t t8 = -1;
volatile int16_t x40 = -1;
uint8_t x41 = 38U;
volatile int32_t t10 = -3862035;
static uint32_t x59 = 53206214U;
int64_t x61 = -115LL;
uint16_t x67 = UINT16_MAX;
volatile uint16_t x70 = 3993U;
volatile int64_t x71 = INT64_MAX;
int16_t x74 = INT16_MIN;
int16_t x75 = -1;
int64_t x76 = INT64_MIN;
static uint8_t x77 = UINT8_MAX;
int32_t x79 = INT32_MAX;
static int16_t x89 = INT16_MIN;
static uint64_t x98 = UINT64_MAX;
volatile int16_t x101 = INT16_MIN;
int16_t x109 = -1;
volatile int64_t x110 = INT64_MAX;
volatile int32_t x111 = INT32_MIN;
uint16_t x112 = 137U;
int16_t x115 = INT16_MIN;
int32_t t28 = 190967584;
int16_t x120 = INT16_MIN;
int8_t x125 = INT8_MAX;
int8_t x129 = 12;
int8_t x137 = -1;
uint8_t x140 = 7U;
uint32_t x144 = UINT32_MAX;
int64_t x147 = 15862864412630011LL;
int8_t x157 = -1;
static uint16_t x161 = 71U;
int8_t x162 = INT8_MAX;
int64_t x166 = -101028081927LL;
int8_t x167 = INT8_MIN;
int32_t t41 = -382;
int8_t x170 = INT8_MAX;
int64_t x184 = INT64_MIN;
static int8_t x186 = -1;
static uint32_t x192 = UINT32_MAX;
int32_t x197 = 967022643;
volatile int32_t t49 = -17;
static volatile uint8_t x201 = 1U;
uint64_t x217 = UINT64_MAX;
static int16_t x230 = INT16_MAX;
uint32_t x232 = UINT32_MAX;
uint16_t x234 = 2177U;
int32_t x238 = 20542360;
volatile int64_t x241 = INT64_MAX;
int16_t x243 = INT16_MAX;
static uint16_t x251 = UINT16_MAX;
int64_t x256 = INT64_MIN;
uint64_t x265 = 1033LLU;
volatile uint16_t x267 = UINT16_MAX;
int32_t x269 = INT32_MAX;
int16_t x272 = -3;
int64_t x273 = 901361453549LL;
int8_t x279 = 3;
int8_t x284 = 1;
int8_t x288 = 62;
uint16_t x289 = UINT16_MAX;
volatile int32_t t72 = -112;
uint64_t t73 = 133040699LLU;
static int8_t x303 = INT8_MIN;
volatile int64_t x308 = -1LL;
uint32_t x312 = UINT32_MAX;
int8_t x326 = -1;
static volatile int32_t x328 = -1;
int32_t t81 = 603139;
volatile int16_t x338 = 0;
volatile uint16_t x340 = 1247U;
uint16_t x350 = 5378U;
uint64_t x351 = UINT64_MAX;
static uint64_t x352 = 29451265LLU;
int32_t x356 = INT32_MIN;
uint16_t x357 = UINT16_MAX;
int8_t x365 = -19;
int16_t x366 = INT16_MAX;
static uint64_t x373 = 4917692300847709LLU;
int16_t x374 = INT16_MAX;
uint32_t x376 = 501953876U;
int64_t x378 = INT64_MIN;
int8_t x388 = 10;
uint8_t x394 = 10U;
uint64_t x398 = UINT64_MAX;
static int8_t x400 = INT8_MIN;
volatile uint64_t t99 = 231243944897808058LLU;
int16_t x408 = INT16_MIN;
static volatile int32_t t101 = 151833240;
static int8_t x412 = INT8_MIN;
volatile int64_t t103 = -15871713LL;
int8_t x435 = -1;
uint16_t x442 = 0U;
uint8_t x444 = UINT8_MAX;
volatile uint64_t x452 = 279792755484135LLU;
int8_t x453 = INT8_MIN;
static uint64_t t113 = 44982LLU;
static int16_t x457 = INT16_MAX;
static uint32_t x460 = 97U;
volatile uint32_t t114 = 8U;
int32_t x461 = INT32_MIN;
uint8_t x462 = 31U;
int64_t t115 = -1LL;
int16_t x471 = INT16_MIN;
static int64_t t118 = -2858032082949648773LL;
static volatile int64_t x486 = INT64_MIN;
int64_t x487 = -1LL;
uint64_t x494 = 18594756LLU;
int64_t x496 = INT64_MIN;
uint8_t x499 = 12U;
static uint16_t x500 = 0U;
volatile int32_t x503 = INT32_MAX;
static volatile uint32_t t125 = 171455400U;
int64_t x508 = INT64_MIN;
static int32_t x509 = -1;
uint32_t t128 = 3682U;
uint32_t x517 = 5U;
uint64_t x523 = UINT64_MAX;
uint64_t t130 = 55556891426LLU;
int64_t t131 = -2218783382916206545LL;
static int8_t x530 = INT8_MIN;
int32_t x534 = -1;
volatile uint8_t x543 = 113U;
int32_t x545 = 50259011;
int32_t x546 = INT32_MIN;
uint64_t x548 = UINT64_MAX;
int16_t x553 = INT16_MAX;
volatile int32_t t138 = 4;
int16_t x557 = 106;
int16_t x558 = 2;
uint32_t x564 = UINT32_MAX;
int64_t x568 = INT64_MIN;
volatile int32_t x569 = INT32_MIN;
uint32_t t145 = 352700U;
int16_t x596 = INT16_MAX;
uint64_t t149 = 12LLU;
static int32_t x602 = -1;
volatile uint64_t t150 = 84578837617LLU;
int8_t x605 = -1;
int64_t t151 = 3356092239632371620LL;
int64_t x617 = INT64_MAX;
volatile int8_t x620 = 5;
int32_t t154 = -172;
int16_t x633 = -590;
int64_t x635 = INT64_MAX;
int64_t x639 = INT64_MAX;
volatile int32_t x640 = -514;
int64_t x642 = INT64_MIN;
int64_t x647 = INT64_MIN;
int64_t x648 = -1LL;
int8_t x650 = -1;
static int32_t t162 = -8087595;
int64_t x656 = INT64_MIN;
int64_t t163 = INT64_MAX;
volatile uint32_t t165 = 245U;
volatile int32_t x666 = 9749;
int16_t x667 = INT16_MAX;
int32_t x669 = INT32_MAX;
uint16_t x674 = 907U;
volatile int16_t x680 = 55;
uint32_t x684 = 1643576U;
int8_t x685 = -1;
int64_t x686 = INT64_MIN;
volatile uint16_t x688 = UINT16_MAX;
static volatile int32_t t171 = -1448247;
int32_t x698 = 348;
uint16_t x699 = 3574U;
int32_t t174 = 1789705;
int16_t x702 = INT16_MIN;
static int16_t x703 = INT16_MAX;
int16_t x705 = INT16_MIN;
int16_t x707 = INT16_MIN;
static int32_t t176 = -69019881;
static uint8_t x710 = 122U;
uint32_t t179 = 58832U;
int64_t t183 = 63920266842613LL;
uint64_t t186 = 4127214485131240LLU;
static uint8_t x755 = 0U;
static uint8_t x771 = UINT8_MAX;
volatile uint16_t x778 = 425U;
static volatile uint32_t x779 = 231U;
uint64_t x786 = 77814018LLU;
uint64_t x788 = UINT64_MAX;


void f0(void) {
    	volatile uint16_t x1 = 71U;
	static uint64_t x2 = 82873LLU;
	static int16_t x3 = 10;
	static volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -2425709;

    t0 = ((x1>x2)^(x3^x4));

    if (t0 != 65525) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 107;
	int8_t x6 = -1;
	volatile uint16_t x7 = 69U;
	volatile int32_t x8 = 424497293;
	volatile int32_t t1 = 2045;

    t1 = ((x5>x6)^(x7^x8));

    if (t1 != 424497353) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -738148182562LL;
	static int64_t t2 = 151112078238LL;

    t2 = ((x9>x10)^(x11^x12));

    if (t2 != 738148160991LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -40320474;

    t3 = ((x13>x14)^(x15^x16));

    if (t3 != -2147450882) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -317080561;
	int16_t x19 = INT16_MIN;
	int16_t x20 = -13309;

    t4 = ((x17>x18)^(x19^x20));

    if (t4 != 19458) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	uint32_t x24 = UINT32_MAX;
	int64_t t5 = -170619644LL;

    t5 = ((x21>x22)^(x23^x24));

    if (t5 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 3;
	int32_t x27 = -5144;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = 15;

    t6 = ((x25>x26)^(x27^x28));

    if (t6 != 5143) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x31 = INT64_MAX;
	int64_t t7 = 17239987226504LL;

    t7 = ((x29>x30)^(x31^x32));

    if (t7 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	static int32_t x36 = INT32_MIN;

    t8 = ((x33>x34)^(x35^x36));

    if (t8 != -2147418113) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = 1756590;
	volatile int8_t x38 = -1;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 216291;

    t9 = ((x37>x38)^(x39^x40));

    if (t9 != 32766) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MAX;
	int16_t x44 = -231;

    t10 = ((x41>x42)^(x43^x44));

    if (t10 != -2147483418) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int8_t x46 = INT8_MIN;
	int32_t x47 = -225314;
	volatile uint32_t x48 = 238U;
	uint32_t t11 = 46421876U;

    t11 = ((x45>x46)^(x47^x48));

    if (t11 != 4294741808U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static int8_t x50 = INT8_MAX;
	static int8_t x51 = 3;
	int32_t x52 = -1;
	volatile int32_t t12 = 64360970;

    t12 = ((x49>x50)^(x51^x52));

    if (t12 != -4) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = UINT16_MAX;
	volatile uint64_t x55 = 10281LLU;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t13 = 5022261211LLU;

    t13 = ((x53>x54)^(x55^x56));

    if (t13 != 18446744073709529129LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MAX;
	int64_t x58 = INT64_MIN;
	int8_t x60 = -1;
	uint32_t t14 = 81961628U;

    t14 = ((x57>x58)^(x59^x60));

    if (t14 != 4241761080U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = 13;
	static int64_t x63 = -23902558469689LL;
	int64_t x64 = INT64_MAX;
	int64_t t15 = -5470642204264LL;

    t15 = ((x61>x62)^(x63^x64));

    if (t15 != -9223348134296306120LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	static volatile int32_t x68 = INT32_MAX;
	int32_t t16 = 2962;

    t16 = ((x65>x66)^(x67^x68));

    if (t16 != 2147418112) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int16_t x72 = -1;
	static volatile int64_t t17 = -3006246LL;

    t17 = ((x69>x70)^(x71^x72));

    if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 10;
	static int64_t t18 = 560479967169LL;

    t18 = ((x73>x74)^(x75^x76));

    if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -1;
	volatile int8_t x80 = INT8_MIN;
	static int32_t t19 = -205262811;

    t19 = ((x77>x78)^(x79^x80));

    if (t19 != -2147483522) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -2;
	static uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = 2;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -391;

    t20 = ((x81>x82)^(x83^x84));

    if (t20 != -2147483646) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int16_t x86 = 12806;
	uint16_t x87 = 5566U;
	static uint32_t x88 = 218073U;
	volatile uint32_t t21 = 403759U;

    t21 = ((x85>x86)^(x87^x88));

    if (t21 != 214631U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	uint32_t x92 = 1013306U;
	uint32_t t22 = 604319054U;

    t22 = ((x89>x90)^(x91^x92));

    if (t22 != 4293953988U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = 130U;
	int16_t x94 = INT16_MAX;
	uint32_t x95 = 59739424U;
	static volatile int8_t x96 = -2;
	volatile uint32_t t23 = 0U;

    t23 = ((x93>x94)^(x95^x96));

    if (t23 != 4235227870U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	int64_t x99 = INT64_MIN;
	volatile int32_t x100 = -101584;
	static int64_t t24 = -7295201029825LL;

    t24 = ((x97>x98)^(x99^x100));

    if (t24 != 9223372036854674224LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x102 = UINT8_MAX;
	uint16_t x103 = UINT16_MAX;
	static int16_t x104 = INT16_MIN;
	int32_t t25 = 92368015;

    t25 = ((x101>x102)^(x103^x104));

    if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	int32_t x107 = -21;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 4058LLU;

    t26 = ((x105>x106)^(x107^x108));

    if (t26 != 21LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t t27 = -752767058;

    t27 = ((x109>x110)^(x111^x112));

    if (t27 != -2147483511) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 12869LLU;
	int16_t x114 = 3736;
	uint16_t x116 = UINT16_MAX;

    t28 = ((x113>x114)^(x115^x116));

    if (t28 != -32770) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 12U;
	int16_t x118 = -1;
	int32_t x119 = 1;
	volatile int32_t t29 = -13163065;

    t29 = ((x117>x118)^(x119^x120));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	static int16_t x122 = -1;
	static volatile int8_t x123 = INT8_MIN;
	int16_t x124 = -56;
	volatile int32_t t30 = -5;

    t30 = ((x121>x122)^(x123^x124));

    if (t30 != 72) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -1;
	uint64_t x127 = 602980554786LLU;
	int64_t x128 = INT64_MIN;
	static uint64_t t31 = 65594799546131258LLU;

    t31 = ((x125>x126)^(x127^x128));

    if (t31 != 9223372639835330595LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = 2041LLU;
	static int64_t x131 = -3603LL;
	uint32_t x132 = 100U;
	int64_t t32 = 7279610726LL;

    t32 = ((x129>x130)^(x131^x132));

    if (t32 != -3703LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = -682;
	uint64_t x136 = 4073007076457002LLU;
	uint64_t t33 = 15423967043LLU;

    t33 = ((x133>x134)^(x135^x136));

    if (t33 != 18442671066633095036LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = 5843LLU;
	int64_t x139 = 11776253751269609LL;
	volatile int64_t t34 = -76701311743LL;

    t34 = ((x137>x138)^(x139^x140));

    if (t34 != 11776253751269615LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile uint32_t t35 = 55U;

    t35 = ((x141>x142)^(x143^x144));

    if (t35 != 32767U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = -359507;
	int8_t x148 = -3;
	int64_t t36 = -1304622879879983623LL;

    t36 = ((x145>x146)^(x147^x148));

    if (t36 != -15862864412630009LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = -1LL;
	uint32_t x150 = 180955424U;
	int8_t x151 = -1;
	uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t37 = 22780084146LLU;

    t37 = ((x149>x150)^(x151^x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	volatile int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 7U;
	volatile int32_t t38 = 2;

    t38 = ((x153>x154)^(x155^x156));

    if (t38 != 65528) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = -1;
	volatile int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MAX;
	static volatile int64_t t39 = -656244159746950LL;

    t39 = ((x157>x158)^(x159^x160));

    if (t39 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x163 = 34;
	static volatile uint8_t x164 = UINT8_MAX;
	int32_t t40 = -2;

    t40 = ((x161>x162)^(x163^x164));

    if (t40 != 221) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -358868339434183LL;
	int8_t x168 = INT8_MIN;

    t41 = ((x165>x166)^(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	volatile int64_t x171 = -1LL;
	int16_t x172 = 0;
	static int64_t t42 = 1679LL;

    t42 = ((x169>x170)^(x171^x172));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -11715;
	volatile int64_t x174 = -1LL;
	static int32_t x175 = INT32_MIN;
	int16_t x176 = 768;
	volatile int32_t t43 = -2;

    t43 = ((x173>x174)^(x175^x176));

    if (t43 != -2147482880) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 1836041956507774LL;
	volatile int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	int16_t x180 = 287;
	static volatile int64_t t44 = -42661771380892019LL;

    t44 = ((x177>x178)^(x179^x180));

    if (t44 != -9223372036854775522LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	static int64_t t45 = 2314LL;

    t45 = ((x181>x182)^(x183^x184));

    if (t45 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	static uint16_t x187 = 17U;
	int8_t x188 = -1;
	volatile int32_t t46 = 215;

    t46 = ((x185>x186)^(x187^x188));

    if (t46 != -17) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -537;
	volatile uint32_t t47 = 64066U;

    t47 = ((x189>x190)^(x191^x192));

    if (t47 != 536U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	int16_t x194 = 245;
	uint64_t x195 = 41581753736077LLU;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t48 = 16622587LLU;

    t48 = ((x193>x194)^(x195^x196));

    if (t48 != 18446702491955815539LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = 22454791492013LL;
	static int32_t x199 = 26440532;
	uint8_t x200 = 2U;

    t49 = ((x197>x198)^(x199^x200));

    if (t49 != 26440534) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -59;
	volatile uint16_t x203 = 2U;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = 9978;

    t50 = ((x201>x202)^(x203^x204));

    if (t50 != -2147483645) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = -1;
	int32_t x206 = -1;
	int8_t x207 = 0;
	uint16_t x208 = 0U;
	volatile int32_t t51 = -1926848;

    t51 = ((x205>x206)^(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	static volatile int8_t x210 = 51;
	static uint16_t x211 = 123U;
	static int8_t x212 = -2;
	int32_t t52 = 0;

    t52 = ((x209>x210)^(x211^x212));

    if (t52 != -123) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = UINT8_MAX;
	int32_t t53 = 330066;

    t53 = ((x213>x214)^(x215^x216));

    if (t53 != 65281) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = 264230706;
	int16_t x219 = -5402;
	static int32_t x220 = INT32_MIN;
	int32_t t54 = 95;

    t54 = ((x217>x218)^(x219^x220));

    if (t54 != 2147478247) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 3009235769LLU;
	volatile int16_t x222 = INT16_MIN;
	static int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t55 = 268459595LL;

    t55 = ((x221>x222)^(x223^x224));

    if (t55 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 476;
	int16_t x226 = 1;
	uint16_t x227 = UINT16_MAX;
	volatile int16_t x228 = -1;
	int32_t t56 = 1;

    t56 = ((x225>x226)^(x227^x228));

    if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	static uint64_t x231 = 4690LLU;
	uint64_t t57 = 1LLU;

    t57 = ((x229>x230)^(x231^x232));

    if (t57 != 4294962605LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x235 = INT32_MAX;
	static int32_t x236 = 627;
	int32_t t58 = 128966;

    t58 = ((x233>x234)^(x235^x236));

    if (t58 != 2147483020) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	int8_t x239 = 7;
	int32_t x240 = 75811598;
	int32_t t59 = 427229;

    t59 = ((x237>x238)^(x239^x240));

    if (t59 != 75811593) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = -9140;
	static int8_t x244 = 62;
	volatile int32_t t60 = -137346429;

    t60 = ((x241>x242)^(x243^x244));

    if (t60 != 32704) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MAX;
	static int16_t x246 = -1;
	int64_t x247 = 80219733698595LL;
	static uint16_t x248 = UINT16_MAX;
	int64_t t61 = -11483074LL;

    t61 = ((x245>x246)^(x247^x248));

    if (t61 != 80219733743581LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	int32_t x250 = 61981;
	int8_t x252 = 10;
	int32_t t62 = -2002247;

    t62 = ((x249>x250)^(x251^x252));

    if (t62 != 65525) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = UINT32_MAX;
	volatile int64_t t63 = 7482125LL;

    t63 = ((x253>x254)^(x255^x256));

    if (t63 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = 211618064U;
	static volatile uint64_t x258 = 14327LLU;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -1LL;
	static int64_t t64 = 67420901LL;

    t64 = ((x257>x258)^(x259^x260));

    if (t64 != 2147483646LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MAX;
	static int16_t x262 = 3289;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 5U;
	uint32_t t65 = 2846U;

    t65 = ((x261>x262)^(x263^x264));

    if (t65 != 4294967291U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x266 = 220;
	int8_t x268 = -1;
	int32_t t66 = -927;

    t66 = ((x265>x266)^(x267^x268));

    if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = 43U;
	uint16_t x271 = UINT16_MAX;
	int32_t t67 = -218;

    t67 = ((x269>x270)^(x271^x272));

    if (t67 != -65533) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = -1LL;
	uint8_t x275 = 0U;
	int64_t x276 = -1LL;
	int64_t t68 = 21074336LL;

    t68 = ((x273>x274)^(x275^x276));

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 5573LLU;
	int32_t x278 = 259;
	static volatile int64_t x280 = INT64_MIN;
	int64_t t69 = -701628426260756399LL;

    t69 = ((x277>x278)^(x279^x280));

    if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	static uint16_t x283 = UINT16_MAX;
	volatile int32_t t70 = -18;

    t70 = ((x281>x282)^(x283^x284));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1002776973U;
	int8_t x286 = -6;
	int64_t x287 = 32268589785LL;
	volatile int64_t t71 = -649165247LL;

    t71 = ((x285>x286)^(x287^x288));

    if (t71 != 32268589799LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;

    t72 = ((x289>x290)^(x291^x292));

    if (t72 != -130) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	static uint64_t x295 = 645610675718818841LLU;
	volatile int16_t x296 = INT16_MAX;

    t73 = ((x293>x294)^(x295^x296));

    if (t73 != 645610675718845415LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 0U;
	static volatile int16_t x298 = -1;
	volatile uint64_t x299 = 16083LLU;
	volatile int32_t x300 = 14070;
	uint64_t t74 = 1014440302370704LLU;

    t74 = ((x297>x298)^(x299^x300));

    if (t74 != 2084LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -14622932023675LL;
	volatile int32_t x302 = -1;
	volatile int32_t x304 = -1;
	int32_t t75 = -12190157;

    t75 = ((x301>x302)^(x303^x304));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int16_t x306 = 111;
	int16_t x307 = -1;
	int64_t t76 = 141LL;

    t76 = ((x305>x306)^(x307^x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	volatile uint32_t t77 = 5220U;

    t77 = ((x309>x310)^(x311^x312));

    if (t77 != 32766U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int32_t x314 = 230330;
	static uint16_t x315 = 0U;
	uint32_t x316 = 19U;
	volatile uint32_t t78 = 40853601U;

    t78 = ((x313>x314)^(x315^x316));

    if (t78 != 19U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	volatile uint16_t x318 = UINT16_MAX;
	uint64_t x319 = 111633325959655LLU;
	static volatile int32_t x320 = INT32_MIN;
	uint64_t t79 = 29881LLU;

    t79 = ((x317>x318)^(x319^x320));

    if (t79 != 18446632439603079654LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x321 = UINT64_MAX;
	static uint64_t x322 = 3977015LLU;
	int16_t x323 = 2281;
	static volatile int64_t x324 = INT64_MIN;
	static volatile int64_t t80 = -2212597999417LL;

    t80 = ((x321>x322)^(x323^x324));

    if (t80 != -9223372036854773528LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	int32_t x327 = -639051;

    t81 = ((x325>x326)^(x327^x328));

    if (t81 != 639050) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MIN;
	static volatile uint64_t x330 = 110LLU;
	volatile int64_t x331 = -1LL;
	int64_t x332 = INT64_MIN;
	int64_t t82 = -46687984543347835LL;

    t82 = ((x329>x330)^(x331^x332));

    if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	uint16_t x334 = 28002U;
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;
	volatile int32_t t83 = -8;

    t83 = ((x333>x334)^(x335^x336));

    if (t83 != -256) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile uint16_t x339 = UINT16_MAX;
	static volatile int32_t t84 = -28754;

    t84 = ((x337>x338)^(x339^x340));

    if (t84 != 64288) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -956;
	uint16_t x342 = UINT16_MAX;
	volatile uint64_t x343 = 11LLU;
	uint64_t x344 = 9749LLU;
	uint64_t t85 = 777LLU;

    t85 = ((x341>x342)^(x343^x344));

    if (t85 != 9758LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x346 = -1LL;
	volatile int64_t x347 = 23868941970187027LL;
	static int8_t x348 = INT8_MIN;
	static volatile int64_t t86 = 252569346LL;

    t86 = ((x345>x346)^(x347^x348));

    if (t86 != -23868941970187117LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	volatile uint64_t t87 = 79198242211LLU;

    t87 = ((x349>x350)^(x351^x352));

    if (t87 != 18446744073680100350LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 139774999066LLU;
	int16_t x354 = -1;
	int64_t x355 = INT64_MAX;
	static volatile int64_t t88 = -396782839LL;

    t88 = ((x353>x354)^(x355^x356));

    if (t88 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MAX;
	int32_t x359 = -1;
	static int64_t x360 = INT64_MIN;
	static volatile int64_t t89 = INT64_MAX;

    t89 = ((x357>x358)^(x359^x360));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1LL;
	uint64_t x362 = 554053LLU;
	uint8_t x363 = 1U;
	uint32_t x364 = 1749U;
	volatile uint32_t t90 = 57431068U;

    t90 = ((x361>x362)^(x363^x364));

    if (t90 != 1749U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x367 = 1035549393392717867LLU;
	volatile uint8_t x368 = 12U;
	volatile uint64_t t91 = 204593251036942883LLU;

    t91 = ((x365>x366)^(x367^x368));

    if (t91 != 1035549393392717863LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x369 = 2068U;
	uint64_t x370 = 132LLU;
	volatile int64_t x371 = INT64_MIN;
	int32_t x372 = -1;
	int64_t t92 = 949875143227752302LL;

    t92 = ((x369>x370)^(x371^x372));

    if (t92 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x375 = -13150632;
	uint32_t t93 = 1U;

    t93 = ((x373>x374)^(x375^x376));

    if (t93 != 3806094093U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -1LL;
	int32_t x379 = INT32_MIN;
	volatile int16_t x380 = -2;
	static int32_t t94 = INT32_MAX;

    t94 = ((x377>x378)^(x379^x380));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = -1;
	uint64_t x382 = 111004674LLU;
	int16_t x383 = -1;
	volatile int32_t x384 = -94001932;
	int32_t t95 = -248306;

    t95 = ((x381>x382)^(x383^x384));

    if (t95 != 94001930) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 5348851401817452LL;
	uint16_t x386 = 3U;
	volatile int32_t x387 = -1;
	volatile int32_t t96 = -200112;

    t96 = ((x385>x386)^(x387^x388));

    if (t96 != -12) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	int32_t x390 = -1;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	volatile int32_t t97 = -7;

    t97 = ((x389>x390)^(x391^x392));

    if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = 0;
	int32_t x395 = 31;
	uint64_t x396 = 917128102082LLU;
	uint64_t t98 = 335135285LLU;

    t98 = ((x393>x394)^(x395^x396));

    if (t98 != 917128102109LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 75;
	static uint64_t x399 = UINT64_MAX;

    t99 = ((x397>x398)^(x399^x400));

    if (t99 != 127LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 1LLU;
	int32_t x402 = -1;
	int8_t x403 = -1;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t100 = -578033607;

    t100 = ((x401>x402)^(x403^x404));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	uint8_t x407 = 0U;

    t101 = ((x405>x406)^(x407^x408));

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = UINT8_MAX;
	uint16_t x410 = UINT16_MAX;
	uint64_t x411 = UINT64_MAX;
	uint64_t t102 = 62590118LLU;

    t102 = ((x409>x410)^(x411^x412));

    if (t102 != 127LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	int32_t x414 = -1;
	int64_t x415 = INT64_MIN;
	int8_t x416 = -37;

    t103 = ((x413>x414)^(x415^x416));

    if (t103 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	int32_t x418 = 1092449;
	int32_t x419 = INT32_MIN;
	uint32_t x420 = 113358U;
	uint32_t t104 = 27199U;

    t104 = ((x417>x418)^(x419^x420));

    if (t104 != 2147597006U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 16U;
	int16_t x422 = INT16_MIN;
	int8_t x423 = -2;
	uint16_t x424 = 3720U;
	int32_t t105 = 0;

    t105 = ((x421>x422)^(x423^x424));

    if (t105 != -3721) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -281;
	uint64_t x426 = 2042470237738274LLU;
	static int16_t x427 = -1;
	int8_t x428 = INT8_MIN;
	int32_t t106 = -287887;

    t106 = ((x425>x426)^(x427^x428));

    if (t106 != 126) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = 222900016614LLU;
	volatile int64_t x432 = INT64_MAX;
	uint64_t t107 = 28LLU;

    t107 = ((x429>x430)^(x431^x432));

    if (t107 != 9223371813954759193LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint32_t x434 = 127078U;
	static int8_t x436 = 0;
	int32_t t108 = 1;

    t108 = ((x433>x434)^(x435^x436));

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	int8_t x438 = -1;
	volatile int64_t x439 = -73677720994LL;
	static int8_t x440 = 11;
	volatile int64_t t109 = -67650590696LL;

    t109 = ((x437>x438)^(x439^x440));

    if (t109 != -73677721004LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x441 = 8210LLU;
	int8_t x443 = -1;
	static volatile int32_t t110 = -1;

    t110 = ((x441>x442)^(x443^x444));

    if (t110 != -255) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = 1;
	static int64_t x446 = INT64_MIN;
	volatile int16_t x447 = 4;
	int64_t x448 = INT64_MAX;
	int64_t t111 = -249671LL;

    t111 = ((x445>x446)^(x447^x448));

    if (t111 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x449 = INT8_MAX;
	int8_t x450 = INT8_MAX;
	int32_t x451 = INT32_MIN;
	uint64_t t112 = 191196LLU;

    t112 = ((x449>x450)^(x451^x452));

    if (t112 != 18446464281618490855LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = -8;
	static uint64_t x455 = 80067004904LLU;
	volatile uint8_t x456 = 0U;

    t113 = ((x453>x454)^(x455^x456));

    if (t113 != 80067004904LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = 849019246797LL;
	int8_t x459 = INT8_MIN;

    t114 = ((x457>x458)^(x459^x460));

    if (t114 != 4294967265U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x463 = -9735086;
	static int64_t x464 = -3137779387074801LL;

    t115 = ((x461>x462)^(x463^x464));

    if (t115 != 3137779380028253LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 930U;
	uint64_t x466 = 3622LLU;
	int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;
	static int32_t t116 = -2785092;

    t116 = ((x465>x466)^(x467^x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	int64_t x470 = -1LL;
	static int32_t x472 = 4599;
	static int32_t t117 = 1;

    t117 = ((x469>x470)^(x471^x472));

    if (t117 != -28169) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;

    t118 = ((x473>x474)^(x475^x476));

    if (t118 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = -1;
	int8_t x480 = INT8_MIN;
	volatile int32_t t119 = 1290;

    t119 = ((x477>x478)^(x479^x480));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	static int32_t x482 = INT32_MIN;
	uint8_t x483 = 1U;
	static uint64_t x484 = 2104949983831LLU;
	static uint64_t t120 = 1167134994875061LLU;

    t120 = ((x481>x482)^(x483^x484));

    if (t120 != 2104949983830LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static uint8_t x488 = 0U;
	volatile int64_t t121 = -13108292420825LL;

    t121 = ((x485>x486)^(x487^x488));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 2;
	volatile int64_t x490 = -8615926272588LL;
	static uint16_t x491 = UINT16_MAX;
	static int8_t x492 = -1;
	int32_t t122 = 357;

    t122 = ((x489>x490)^(x491^x492));

    if (t122 != -65535) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 3792;
	volatile int16_t x495 = INT16_MIN;
	static volatile int64_t t123 = -1LL;

    t123 = ((x493>x494)^(x495^x496));

    if (t123 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = 0;
	uint8_t x498 = 1U;
	static volatile int32_t t124 = -501159593;

    t124 = ((x497>x498)^(x499^x500));

    if (t124 != 12) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = 1325474;
	volatile int8_t x502 = 8;
	volatile uint32_t x504 = 350U;

    t125 = ((x501>x502)^(x503^x504));

    if (t125 != 2147483296U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 10408688LLU;
	int32_t x506 = 7;
	int16_t x507 = -1;
	volatile int64_t t126 = 159994377525LL;

    t126 = ((x505>x506)^(x507^x508));

    if (t126 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = INT16_MIN;
	int8_t x511 = -1;
	uint8_t x512 = 7U;
	volatile int32_t t127 = 24262;

    t127 = ((x509>x510)^(x511^x512));

    if (t127 != -7) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	static uint64_t x514 = 296LLU;
	int16_t x515 = INT16_MAX;
	uint32_t x516 = 2599408U;

    t128 = ((x513>x514)^(x515^x516));

    if (t128 != 2610703U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = -1LL;
	static int8_t x519 = INT8_MAX;
	uint64_t x520 = UINT64_MAX;
	uint64_t t129 = 187626LLU;

    t129 = ((x517>x518)^(x519^x520));

    if (t129 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 165U;
	uint64_t x522 = 18152LLU;
	uint32_t x524 = 210423U;

    t130 = ((x521>x522)^(x523^x524));

    if (t130 != 18446744073709341192LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	static int32_t x528 = INT32_MAX;

    t131 = ((x525>x526)^(x527^x528));

    if (t131 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x531 = INT16_MAX;
	int64_t x532 = -8702LL;
	volatile int64_t t132 = 5459437LL;

    t132 = ((x529>x530)^(x531^x532));

    if (t132 != -24068LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = UINT8_MAX;
	uint16_t x535 = 167U;
	uint64_t x536 = 517064578634LLU;
	volatile uint64_t t133 = 1459871LLU;

    t133 = ((x533>x534)^(x535^x536));

    if (t133 != 517064578796LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	uint8_t x538 = 2U;
	int64_t x539 = 2LL;
	static uint16_t x540 = 8U;
	volatile int64_t t134 = 90LL;

    t134 = ((x537>x538)^(x539^x540));

    if (t134 != 11LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 39U;
	static int16_t x542 = -1;
	static volatile int64_t x544 = -138655LL;
	int64_t t135 = -4229793LL;

    t135 = ((x541>x542)^(x543^x544));

    if (t135 != -138735LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x547 = -1;
	uint64_t t136 = 4240437875705884444LLU;

    t136 = ((x545>x546)^(x547^x548));

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int8_t x550 = -34;
	uint32_t x551 = 4U;
	volatile int32_t x552 = INT32_MIN;
	uint32_t t137 = 7U;

    t137 = ((x549>x550)^(x551^x552));

    if (t137 != 2147483653U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MIN;

    t138 = ((x553>x554)^(x555^x556));

    if (t138 != 2147450881) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x559 = 0U;
	int64_t x560 = INT64_MIN;
	volatile int64_t t139 = -2796LL;

    t139 = ((x557>x558)^(x559^x560));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 1730697120237665LLU;
	int32_t x562 = -5;
	uint8_t x563 = 2U;
	uint32_t t140 = 8602U;

    t140 = ((x561>x562)^(x563^x564));

    if (t140 != 4294967293U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 0;
	uint64_t x566 = UINT64_MAX;
	static int64_t x567 = INT64_MIN;
	int64_t t141 = -163137LL;

    t141 = ((x565>x566)^(x567^x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = -57;
	int32_t x571 = INT32_MAX;
	int8_t x572 = INT8_MIN;
	volatile int32_t t142 = -55533;

    t142 = ((x569>x570)^(x571^x572));

    if (t142 != -2147483521) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = -1;
	static volatile int8_t x574 = INT8_MIN;
	volatile int32_t x575 = 1;
	volatile int8_t x576 = -1;
	int32_t t143 = 11670358;

    t143 = ((x573>x574)^(x575^x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	int64_t x578 = INT64_MAX;
	int32_t x579 = 3;
	uint16_t x580 = 140U;
	volatile int32_t t144 = 0;

    t144 = ((x577>x578)^(x579^x580));

    if (t144 != 143) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = -1LL;
	int16_t x582 = -1;
	uint32_t x583 = UINT32_MAX;
	uint16_t x584 = 4U;

    t145 = ((x581>x582)^(x583^x584));

    if (t145 != 4294967291U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 4919177;
	int64_t x586 = INT64_MIN;
	volatile uint32_t x587 = 67U;
	static volatile int8_t x588 = -1;
	uint32_t t146 = 119U;

    t146 = ((x585>x586)^(x587^x588));

    if (t146 != 4294967229U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x590 = 3;
	static volatile int64_t x591 = 811417268797736383LL;
	int8_t x592 = INT8_MIN;
	volatile int64_t t147 = -2803256210660161LL;

    t147 = ((x589>x590)^(x591^x592));

    if (t147 != -811417268797736386LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 5U;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = 2;
	int32_t t148 = 404;

    t148 = ((x593>x594)^(x595^x596));

    if (t148 != 32765) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x598 = 364;
	int64_t x599 = -55193400237LL;
	static uint64_t x600 = UINT64_MAX;

    t149 = ((x597>x598)^(x599^x600));

    if (t149 != 55193400236LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = 154504U;
	uint64_t x603 = 0LLU;
	int8_t x604 = INT8_MIN;

    t150 = ((x601>x602)^(x603^x604));

    if (t150 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 8407U;
	int64_t x607 = -1LL;
	int32_t x608 = INT32_MAX;

    t151 = ((x605>x606)^(x607^x608));

    if (t151 != -2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	volatile int16_t x610 = INT16_MIN;
	int8_t x611 = -2;
	uint64_t x612 = 9558162256168182LLU;
	volatile uint64_t t152 = 187LLU;

    t152 = ((x609>x610)^(x611^x612));

    if (t152 != 18437185911453383432LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	int32_t x614 = -10698350;
	static int8_t x615 = -4;
	static int16_t x616 = -482;
	volatile int32_t t153 = 10086;

    t153 = ((x613>x614)^(x615^x616));

    if (t153 != 483) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x618 = -1LL;
	int8_t x619 = 0;

    t154 = ((x617>x618)^(x619^x620));

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x621 = UINT32_MAX;
	uint16_t x622 = 0U;
	static uint16_t x623 = UINT16_MAX;
	volatile uint64_t x624 = 11256855571569667LLU;
	uint64_t t155 = 300924LLU;

    t155 = ((x621>x622)^(x623^x624));

    if (t155 != 11256855571555325LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int8_t x626 = -17;
	static int8_t x627 = -3;
	int16_t x628 = -1;
	int32_t t156 = 101604354;

    t156 = ((x625>x626)^(x627^x628));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = 1;
	static uint8_t x630 = 14U;
	static uint8_t x631 = 0U;
	static uint32_t x632 = 4341962U;
	volatile uint32_t t157 = 744574627U;

    t157 = ((x629>x630)^(x631^x632));

    if (t157 != 4341962U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MIN;
	int8_t x636 = 1;
	int64_t t158 = INT64_MAX;

    t158 = ((x633>x634)^(x635^x636));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	static int32_t x638 = INT32_MIN;
	int64_t t159 = -1LL;

    t159 = ((x637>x638)^(x639^x640));

    if (t159 != -9223372036854775296LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -1;
	int32_t x643 = INT32_MIN;
	int16_t x644 = INT16_MIN;
	int32_t t160 = 1;

    t160 = ((x641>x642)^(x643^x644));

    if (t160 != 2147450881) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -7;
	static uint16_t x646 = 4961U;
	volatile int64_t t161 = INT64_MAX;

    t161 = ((x645>x646)^(x647^x648));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 4183837878LLU;
	uint16_t x651 = 18U;
	int8_t x652 = INT8_MIN;

    t162 = ((x649>x650)^(x651^x652));

    if (t162 != -110) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -119;
	int16_t x654 = -3;
	int64_t x655 = -1LL;

    t163 = ((x653>x654)^(x655^x656));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static volatile int32_t x658 = INT32_MAX;
	uint32_t x659 = 36U;
	int8_t x660 = -1;
	volatile uint32_t t164 = 15U;

    t164 = ((x657>x658)^(x659^x660));

    if (t164 != 4294967259U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	static int16_t x662 = INT16_MAX;
	uint16_t x663 = UINT16_MAX;
	uint32_t x664 = 2342407U;

    t165 = ((x661>x662)^(x663^x664));

    if (t165 != 2310648U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x668 = 5U;
	uint32_t t166 = 27U;

    t166 = ((x665>x666)^(x667^x668));

    if (t166 != 32762U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = INT32_MAX;
	uint64_t x671 = 14776000LLU;
	int64_t x672 = 7421096LL;
	volatile uint64_t t167 = 50081574398905464LLU;

    t167 = ((x669>x670)^(x671^x672));

    if (t167 != 9456232LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	int32_t x675 = 48;
	static volatile int16_t x676 = INT16_MIN;
	volatile int32_t t168 = 0;

    t168 = ((x673>x674)^(x675^x676));

    if (t168 != -32720) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	static int32_t x678 = INT32_MIN;
	static uint16_t x679 = 45U;
	volatile int32_t t169 = -3;

    t169 = ((x677>x678)^(x679^x680));

    if (t169 != 27) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	uint16_t x682 = UINT16_MAX;
	uint16_t x683 = UINT16_MAX;
	volatile uint32_t t170 = 488U;

    t170 = ((x681>x682)^(x683^x684));

    if (t170 != 1698759U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x687 = INT32_MIN;

    t171 = ((x685>x686)^(x687^x688));

    if (t171 != -2147418114) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	uint16_t x690 = 19970U;
	int8_t x691 = INT8_MIN;
	int64_t x692 = -58LL;
	volatile int64_t t172 = -14LL;

    t172 = ((x689>x690)^(x691^x692));

    if (t172 != 71LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	static int16_t x694 = -1;
	int8_t x695 = 5;
	uint64_t x696 = 7266LLU;
	volatile uint64_t t173 = 42969303037624901LLU;

    t173 = ((x693>x694)^(x695^x696));

    if (t173 != 7271LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x697 = 9306748LLU;
	static int8_t x700 = -12;

    t174 = ((x697>x698)^(x699^x700));

    if (t174 != -3581) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	static int32_t x704 = -1;
	int32_t t175 = -2;

    t175 = ((x701>x702)^(x703^x704));

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = -1;
	volatile int16_t x708 = -1;

    t176 = ((x705>x706)^(x707^x708));

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 2275082435461186264LLU;
	int8_t x711 = -5;
	int64_t x712 = -13938791LL;
	int64_t t177 = -9164LL;

    t177 = ((x709>x710)^(x711^x712));

    if (t177 != 13938787LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int8_t x714 = -1;
	int16_t x715 = INT16_MIN;
	int16_t x716 = -1;
	int32_t t178 = 6207;

    t178 = ((x713>x714)^(x715^x716));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 595409LLU;
	int32_t x718 = -1;
	static uint32_t x719 = UINT32_MAX;
	uint8_t x720 = UINT8_MAX;

    t179 = ((x717>x718)^(x719^x720));

    if (t179 != 4294967040U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -5;
	uint64_t x722 = 2269730934618608190LLU;
	int64_t x723 = INT64_MAX;
	static int8_t x724 = 29;
	volatile int64_t t180 = -319155430620493LL;

    t180 = ((x721>x722)^(x723^x724));

    if (t180 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	uint32_t x728 = 157936U;
	volatile uint32_t t181 = 1146036U;

    t181 = ((x725>x726)^(x727^x728));

    if (t181 != 4294830321U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MAX;
	int64_t x731 = INT64_MIN;
	int32_t x732 = -974;
	int64_t t182 = -31714030687LL;

    t182 = ((x729>x730)^(x731^x732));

    if (t182 != 9223372036854774834LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile int64_t x734 = INT64_MIN;
	int64_t x735 = INT64_MIN;
	int64_t x736 = INT64_MIN;

    t183 = ((x733>x734)^(x735^x736));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = -8290052297375LL;
	int64_t x738 = INT64_MIN;
	int16_t x739 = INT16_MIN;
	volatile int8_t x740 = 11;
	volatile int32_t t184 = -219043;

    t184 = ((x737>x738)^(x739^x740));

    if (t184 != -32758) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = 7436484224099214LL;
	int32_t x742 = INT32_MIN;
	uint32_t x743 = 1813147U;
	int32_t x744 = -97;
	volatile uint32_t t185 = 94504546U;

    t185 = ((x741>x742)^(x743^x744));

    if (t185 != 4293154053U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -4;
	uint8_t x746 = 30U;
	volatile uint64_t x747 = UINT64_MAX;
	static uint16_t x748 = 13844U;

    t186 = ((x745>x746)^(x747^x748));

    if (t186 != 18446744073709537771LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x749 = INT8_MIN;
	static int16_t x750 = -12;
	uint64_t x751 = 167740389525LLU;
	uint32_t x752 = UINT32_MAX;
	volatile uint64_t t187 = 21600964988LLU;

    t187 = ((x749>x750)^(x751^x752));

    if (t187 != 171562026858LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = 34799;
	static int8_t x754 = INT8_MIN;
	uint16_t x756 = 18115U;
	volatile int32_t t188 = 0;

    t188 = ((x753>x754)^(x755^x756));

    if (t188 != 18114) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = -1;
	static uint16_t x758 = UINT16_MAX;
	int8_t x759 = -1;
	volatile int64_t x760 = INT64_MIN;
	volatile int64_t t189 = INT64_MAX;

    t189 = ((x757>x758)^(x759^x760));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = -4392;
	static int32_t x762 = 2533889;
	uint8_t x763 = 0U;
	int32_t x764 = 1;
	static int32_t t190 = -25311;

    t190 = ((x761>x762)^(x763^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 4058U;
	static uint8_t x766 = UINT8_MAX;
	int32_t x767 = 2235327;
	int64_t x768 = -5212847880574344LL;
	volatile int64_t t191 = -85545LL;

    t191 = ((x765>x766)^(x767^x768));

    if (t191 != -5212847878606394LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MIN;
	uint32_t x770 = 179U;
	int16_t x772 = -1;
	volatile int32_t t192 = 9879077;

    t192 = ((x769>x770)^(x771^x772));

    if (t192 != -256) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 0;
	int32_t x774 = -16125328;
	int64_t x775 = INT64_MAX;
	volatile uint32_t x776 = 1598788404U;
	static volatile int64_t t193 = -4256LL;

    t193 = ((x773>x774)^(x775^x776));

    if (t193 != 9223372035255987402LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	int8_t x780 = INT8_MIN;
	volatile uint32_t t194 = 115U;

    t194 = ((x777>x778)^(x779^x780));

    if (t194 != 4294967142U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile int64_t x782 = INT64_MIN;
	int8_t x783 = 0;
	int32_t x784 = 7;
	volatile int32_t t195 = -67968244;

    t195 = ((x781>x782)^(x783^x784));

    if (t195 != 6) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 1U;
	int16_t x787 = 53;
	static uint64_t t196 = 58746326261289900LLU;

    t196 = ((x785>x786)^(x787^x788));

    if (t196 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x789 = 18741637U;
	uint16_t x790 = 5681U;
	int16_t x791 = INT16_MIN;
	int32_t x792 = INT32_MAX;
	volatile int32_t t197 = -18;

    t197 = ((x789>x790)^(x791^x792));

    if (t197 != -2147450882) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MAX;
	static uint32_t x794 = 217579211U;
	static volatile uint64_t x795 = UINT64_MAX;
	uint8_t x796 = 34U;
	volatile uint64_t t198 = 1194LLU;

    t198 = ((x793>x794)^(x795^x796));

    if (t198 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 15U;
	static int32_t x798 = -382616;
	uint8_t x799 = 25U;
	volatile int8_t x800 = -1;
	int32_t t199 = -388710558;

    t199 = ((x797>x798)^(x799^x800));

    if (t199 != -25) { NG(); } else { ; }
	
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

