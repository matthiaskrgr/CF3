
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

static int64_t x3 = -1LL;
static int8_t x4 = 12;
int32_t x7 = INT32_MIN;
uint16_t x10 = 2016U;
static volatile uint32_t x11 = 31845177U;
int16_t x22 = INT16_MIN;
volatile int64_t t5 = -424956364539723LL;
int32_t t6 = -8821;
uint8_t x30 = 14U;
uint8_t x34 = 30U;
int16_t x36 = INT16_MIN;
int8_t x38 = -1;
int32_t x45 = -134181;
volatile int8_t x51 = -1;
volatile uint64_t t12 = 1178130626475196LLU;
static uint64_t x60 = 76LLU;
int8_t x61 = -1;
int32_t x64 = INT32_MIN;
static int32_t t14 = -40648710;
int32_t x70 = 2;
int32_t t16 = 833105;
volatile uint16_t x74 = UINT16_MAX;
uint64_t x76 = UINT64_MAX;
int32_t x86 = INT32_MIN;
int8_t x99 = INT8_MAX;
static volatile int32_t t24 = -1033101;
uint64_t t25 = 0LLU;
int16_t x109 = INT16_MAX;
int8_t x115 = INT8_MAX;
static volatile int32_t t28 = 8096695;
int32_t x123 = INT32_MAX;
int64_t x127 = 0LL;
volatile int8_t x129 = INT8_MIN;
static int64_t x130 = -96LL;
volatile int16_t x135 = INT16_MIN;
static int64_t t32 = 698895LL;
static uint64_t x137 = 8264838025897LLU;
volatile int64_t t34 = -2937286200434393LL;
volatile uint8_t x145 = 25U;
int8_t x148 = INT8_MAX;
uint32_t x161 = 23626U;
volatile uint32_t t38 = 29U;
int64_t x167 = INT64_MIN;
volatile uint8_t x170 = 5U;
volatile int64_t x174 = INT64_MAX;
int8_t x176 = 9;
int32_t t42 = -99;
int64_t x183 = 227552529933388LL;
uint64_t t43 = 11088740275795LLU;
int8_t x188 = INT8_MIN;
uint64_t x189 = 136938LLU;
int16_t x191 = -1;
volatile uint64_t t46 = 1840364074800289LLU;
static int64_t x199 = INT64_MIN;
int8_t x203 = -1;
int16_t x204 = INT16_MAX;
int64_t t48 = 4163LL;
uint16_t x205 = 1U;
int16_t x208 = 600;
int64_t t50 = 325LL;
int8_t x221 = -5;
int16_t x222 = -1;
int8_t x224 = INT8_MIN;
int8_t x226 = INT8_MAX;
uint32_t t53 = 11858178U;
int32_t x234 = -1;
int16_t x237 = INT16_MIN;
volatile int8_t x243 = -1;
uint32_t x244 = 819671694U;
volatile uint16_t x251 = 85U;
static uint32_t x258 = UINT32_MAX;
uint64_t x260 = 1008748793323LLU;
volatile int64_t t62 = -1089070662376195646LL;
static int16_t x267 = INT16_MIN;
uint64_t t63 = 4495090279310LLU;
uint32_t x269 = 8740U;
volatile int32_t x284 = INT32_MIN;
uint64_t t67 = 2133220811734LLU;
uint32_t x290 = UINT32_MAX;
volatile uint32_t x295 = 21387U;
int64_t x296 = INT64_MIN;
volatile uint64_t x309 = UINT64_MAX;
uint64_t x312 = UINT64_MAX;
int32_t x315 = INT32_MIN;
volatile int64_t x316 = 244881753206LL;
static uint64_t x319 = UINT64_MAX;
int64_t x320 = -1LL;
static volatile int8_t x328 = INT8_MAX;
volatile int64_t x336 = -1LL;
int32_t x338 = -4;
volatile int64_t x344 = INT64_MIN;
int32_t x347 = -3;
uint16_t x348 = 4U;
volatile int64_t t82 = 2755885866398627356LL;
static uint64_t t84 = 2677LLU;
int32_t x362 = 209512066;
uint8_t x365 = 1U;
volatile int64_t t86 = 4523LL;
uint8_t x379 = 12U;
static volatile int16_t x381 = 938;
int16_t x386 = INT16_MIN;
static int16_t x392 = INT16_MIN;
static uint8_t x397 = 101U;
int16_t x429 = -1;
uint16_t x431 = 10660U;
int64_t x436 = 375193475035LL;
volatile int16_t x438 = -1;
static uint32_t x440 = UINT32_MAX;
volatile int16_t x442 = 38;
static volatile uint64_t x445 = 216693691261LLU;
volatile uint8_t x451 = 0U;
uint32_t x453 = 410058U;
int64_t x459 = -1LL;
volatile uint64_t t108 = UINT64_MAX;
volatile int16_t x472 = 59;
uint16_t x485 = 474U;
int16_t x498 = -709;
int64_t x499 = -18472260536281LL;
volatile int8_t x500 = -1;
static int16_t x513 = -1;
static int16_t x514 = INT16_MIN;
static volatile int64_t x519 = 383252894765LL;
volatile int64_t t122 = -2308052LL;
volatile int16_t x535 = -1;
volatile int32_t t127 = 50;
int64_t x546 = INT64_MIN;
volatile uint64_t t128 = 675LLU;
uint16_t x549 = 16U;
uint32_t x564 = UINT32_MAX;
volatile int64_t x568 = -1LL;
volatile uint8_t x569 = 12U;
int32_t x570 = INT32_MIN;
volatile int64_t x572 = INT64_MIN;
int64_t t134 = -1LL;
int8_t x581 = 1;
int8_t x586 = INT8_MIN;
int64_t x592 = 1317354263796585967LL;
static int64_t x597 = INT64_MAX;
int16_t x604 = INT16_MIN;
static int8_t x609 = INT8_MIN;
uint16_t x612 = 1314U;
static int64_t x622 = 8260585LL;
int64_t x623 = INT64_MIN;
volatile int16_t x624 = 1;
static int8_t x625 = -1;
int32_t x628 = INT32_MAX;
volatile int64_t x629 = 0LL;
static int64_t x635 = 287215199998817011LL;
static volatile int64_t t150 = -467905584LL;
int8_t x637 = INT8_MIN;
int16_t x639 = INT16_MAX;
static int16_t x641 = 57;
uint64_t x645 = UINT64_MAX;
int16_t x648 = INT16_MIN;
int64_t t154 = 68LL;
int16_t x655 = -1;
int32_t x658 = INT32_MIN;
volatile uint16_t x677 = 1301U;
int32_t t160 = -248918;
static volatile uint32_t t162 = 12041U;
uint16_t x689 = 1U;
int16_t x690 = INT16_MAX;
static uint8_t x691 = UINT8_MAX;
static uint64_t t163 = 8481589745770089LLU;
int8_t x694 = -3;
int8_t x696 = -16;
int32_t x697 = -9169;
volatile int8_t x700 = INT8_MIN;
int8_t x702 = INT8_MIN;
static int16_t x704 = INT16_MIN;
static int32_t t166 = -214;
int16_t x711 = 166;
int32_t x712 = INT32_MIN;
uint64_t t169 = 157675305LLU;
int8_t x719 = -1;
uint64_t t170 = 32966876604LLU;
int8_t x724 = INT8_MIN;
int8_t x731 = -1;
volatile int64_t t173 = -6603LL;
uint64_t x733 = 191LLU;
int8_t x734 = -1;
static volatile int16_t x740 = INT16_MAX;
uint32_t x750 = 3980391U;
int8_t x751 = -1;
volatile int32_t x762 = -122401155;
static int8_t x763 = INT8_MAX;
volatile int64_t x764 = INT64_MAX;
uint64_t x770 = 556862307069218755LLU;
int16_t x772 = INT16_MIN;
uint64_t x786 = 964927288806069LLU;
static volatile int64_t x792 = 46146069829LL;
volatile int8_t x795 = -1;
int64_t x796 = 277LL;
static int32_t t187 = 127852078;
int16_t x801 = -1;
uint16_t x804 = 49U;
volatile int8_t x807 = 28;
volatile int64_t t191 = 193234515409357405LL;
static uint64_t x819 = 4266118LLU;
volatile int32_t x823 = INT32_MIN;
static int8_t x825 = INT8_MAX;
int32_t x829 = -1;
int64_t x830 = 97180738681890740LL;
int64_t x832 = INT64_MAX;
static int64_t x833 = -909LL;
uint8_t x835 = 4U;
uint32_t x840 = 8U;


void f0(void) {
    	static int8_t x1 = 21;
	volatile int32_t x2 = INT32_MIN;
	static int64_t t0 = -23514888LL;

    t0 = ((x1/x2)*(x3|x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 5;
	static volatile int32_t x6 = -1616039;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 3;

    t1 = ((x5/x6)*(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint8_t x12 = 102U;
	volatile uint32_t t2 = 16438U;

    t2 = ((x9/x10)*(x11|x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -50;
	static int8_t x14 = -1;
	int32_t x15 = -1;
	int8_t x16 = 0;
	volatile int32_t t3 = -1;

    t3 = ((x13/x14)*(x15|x16));

    if (t3 != -50) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	int32_t x19 = 1;
	uint8_t x20 = 11U;
	static int32_t t4 = -8260796;

    t4 = ((x17/x18)*(x19|x20));

    if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1976U;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;

    t5 = ((x21/x22)*(x23|x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;

    t6 = ((x25/x26)*(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 16770U;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 110U;
	static uint32_t t7 = 10999U;

    t7 = ((x29/x30)*(x31|x32));

    if (t7 != 152019U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = 5U;
	static volatile int16_t x35 = INT16_MIN;
	static volatile int32_t t8 = 1277137;

    t8 = ((x33/x34)*(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x37 = INT8_MAX;
	int64_t x39 = -1LL;
	int32_t x40 = -1;
	volatile int64_t t9 = -298LL;

    t9 = ((x37/x38)*(x39|x40));

    if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x46 = 4087U;
	static uint64_t x47 = 195018LLU;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t10 = 14530LLU;

    t10 = ((x45/x46)*(x47|x48));

    if (t10 != 18446744073703309344LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = INT64_MIN;
	int64_t x50 = -1248977LL;
	uint16_t x52 = 15U;
	int64_t t11 = 14678827LL;

    t11 = ((x49/x50)*(x51|x52));

    if (t11 != -7384741301765LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = INT8_MIN;
	volatile uint64_t x56 = 12670702716LLU;

    t12 = ((x53/x54)*(x55|x56));

    if (t12 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = UINT16_MAX;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	volatile uint64_t t13 = 558451402009788LLU;

    t13 = ((x57/x58)*(x59|x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x62 = -1;
	static int8_t x63 = INT8_MAX;

    t14 = ((x61/x62)*(x63|x64));

    if (t14 != -2147483521) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 2U;
	static uint64_t x66 = 12017926340654LLU;
	int64_t x67 = 63769357LL;
	static int8_t x68 = -11;
	volatile uint64_t t15 = 14762443894066LLU;

    t15 = ((x65/x66)*(x67|x68));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x69 = 1;
	int16_t x71 = -1;
	int8_t x72 = -1;

    t16 = ((x69/x70)*(x71|x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 1512U;
	uint8_t x75 = 0U;
	uint64_t t17 = 2170064765907632936LLU;

    t17 = ((x73/x74)*(x75|x76));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -319659553LL;
	static uint16_t x78 = 208U;
	volatile int64_t x79 = INT64_MAX;
	static volatile uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t18 = 132600139LLU;

    t18 = ((x77/x78)*(x79|x80));

    if (t18 != 1536824LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = -168;
	int64_t x82 = -1LL;
	uint16_t x83 = 35U;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t19 = 283LL;

    t19 = ((x81/x82)*(x83|x84));

    if (t19 != 42840LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x87 = 61364430LLU;
	int32_t x88 = INT32_MIN;
	static uint64_t t20 = 120026119515LLU;

    t20 = ((x85/x86)*(x87|x88));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x89 = UINT16_MAX;
	static int16_t x90 = -969;
	int32_t x91 = INT32_MAX;
	static int64_t x92 = -1LL;
	static int64_t t21 = 3189183139711594LL;

    t21 = ((x89/x90)*(x91|x92));

    if (t21 != 67LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x93 = 1536U;
	int16_t x94 = 204;
	uint8_t x95 = 0U;
	int8_t x96 = INT8_MIN;
	static volatile uint32_t t22 = 372U;

    t22 = ((x93/x94)*(x95|x96));

    if (t22 != 4294966400U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	int32_t x100 = 1;
	int32_t t23 = -2;

    t23 = ((x97/x98)*(x99|x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	static int8_t x103 = -1;
	uint8_t x104 = UINT8_MAX;

    t24 = ((x101/x102)*(x103|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	static uint64_t x107 = 6213315572293163694LLU;
	volatile int8_t x108 = 2;

    t25 = ((x105/x106)*(x107|x108));

    if (t25 != 6213315572293163694LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	volatile int64_t t26 = -16824474198699LL;

    t26 = ((x109/x110)*(x111|x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	uint8_t x114 = 22U;
	volatile int32_t x116 = -1;
	volatile int32_t t27 = -77199629;

    t27 = ((x113/x114)*(x115|x116));

    if (t27 != 1489) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = INT16_MAX;
	volatile int8_t x118 = 7;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = INT8_MIN;

    t28 = ((x117/x118)*(x119|x120));

    if (t28 != -4681) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 5837U;
	uint16_t x122 = 4841U;
	uint32_t x124 = 36U;
	volatile uint32_t t29 = 1045077302U;

    t29 = ((x121/x122)*(x123|x124));

    if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = 1;
	int64_t x126 = INT64_MAX;
	int16_t x128 = -8;
	int64_t t30 = -42LL;

    t30 = ((x125/x126)*(x127|x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x131 = 629U;
	int32_t x132 = INT32_MIN;
	volatile int64_t t31 = 6354474769337LL;

    t31 = ((x129/x130)*(x131|x132));

    if (t31 != 2147484277LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 62U;
	int64_t x134 = INT64_MIN;
	int8_t x136 = INT8_MIN;

    t32 = ((x133/x134)*(x135|x136));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x138 = -1;
	static uint8_t x139 = 12U;
	static uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t33 = 2129051038684765263LLU;

    t33 = ((x137/x138)*(x139|x140));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x142 = -29692506259754LL;
	static int8_t x143 = INT8_MIN;
	static volatile int64_t x144 = -1LL;

    t34 = ((x141/x142)*(x143|x144));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MIN;
	volatile int32_t t35 = 7678;

    t35 = ((x145/x146)*(x147|x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	volatile int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -231220680LL;
	int64_t t36 = 1802445978LL;

    t36 = ((x149/x150)*(x151|x152));

    if (t36 != -29596247040LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 28600U;
	static volatile int32_t t37 = -1;

    t37 = ((x157/x158)*(x159|x160));

    if (t37 != 2147455048) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = 718;
	volatile int32_t x163 = 4456087;
	volatile int16_t x164 = INT16_MIN;

    t38 = ((x161/x162)*(x163|x164));

    if (t38 != 4294955744U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 5919;
	uint32_t x166 = UINT32_MAX;
	static int8_t x168 = -1;
	volatile int64_t t39 = -1169786884052828693LL;

    t39 = ((x165/x166)*(x167|x168));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -13;
	volatile int32_t x171 = -505439648;
	uint8_t x172 = UINT8_MAX;
	int32_t t40 = -1;

    t40 = ((x169/x170)*(x171|x172));

    if (t40 != 1010878978) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x175 = -1;
	int64_t t41 = 14357501LL;

    t41 = ((x173/x174)*(x175|x176));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MIN;
	int16_t x178 = 12;
	int16_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;

    t42 = ((x177/x178)*(x179|x180));

    if (t42 != 178956970) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = INT8_MIN;
	uint64_t x182 = 2386317564765LLU;
	int8_t x184 = INT8_MAX;

    t43 = ((x181/x182)*(x183|x184));

    if (t43 != 6588838071951888987LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int64_t t44 = -29965680253LL;

    t44 = ((x185/x186)*(x187|x188));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x190 = INT16_MIN;
	int16_t x192 = -1;
	static uint64_t t45 = 5LLU;

    t45 = ((x189/x190)*(x191|x192));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = UINT64_MAX;
	uint64_t x194 = 1952921746962294LLU;
	static int32_t x195 = INT32_MAX;
	volatile int64_t x196 = INT64_MAX;

    t46 = ((x193/x194)*(x195|x196));

    if (t46 != 9223372036854766363LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x197 = 1072076640;
	static int32_t x198 = INT32_MIN;
	int64_t x200 = INT64_MAX;
	volatile int64_t t47 = -82LL;

    t47 = ((x197/x198)*(x199|x200));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;

    t48 = ((x201/x202)*(x203|x204));

    if (t48 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = INT64_MIN;
	int8_t x207 = 1;
	volatile int64_t t49 = 8LL;

    t49 = ((x205/x206)*(x207|x208));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = INT16_MAX;
	int16_t x210 = -1;
	int64_t x211 = 1246LL;
	uint32_t x212 = UINT32_MAX;

    t50 = ((x209/x210)*(x211|x212));

    if (t50 != -140733193355265LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = -1;
	static uint16_t x214 = UINT16_MAX;
	volatile int64_t x215 = 2922470305481LL;
	int64_t x216 = INT64_MIN;
	int64_t t51 = -13902714905695LL;

    t51 = ((x213/x214)*(x215|x216));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x223 = UINT64_MAX;
	volatile uint64_t t52 = 3611591506294LLU;

    t52 = ((x221/x222)*(x223|x224));

    if (t52 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = INT16_MAX;
	static int8_t x227 = INT8_MAX;
	uint32_t x228 = 5372265U;

    t53 = ((x225/x226)*(x227|x228));

    if (t53 != 1386050046U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x229 = 7659U;
	uint16_t x230 = 13026U;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -65325476634585LL;
	uint64_t t54 = 66478345246LLU;

    t54 = ((x229/x230)*(x231|x232));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x233 = INT16_MAX;
	uint16_t x235 = 50U;
	uint16_t x236 = UINT16_MAX;
	int32_t t55 = -62218;

    t55 = ((x233/x234)*(x235|x236));

    if (t55 != -2147385345) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int32_t x240 = -1;
	int32_t t56 = -2352;

    t56 = ((x237/x238)*(x239|x240));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int64_t x242 = INT64_MAX;
	volatile uint64_t t57 = 1327518258316889245LLU;

    t57 = ((x241/x242)*(x243|x244));

    if (t57 != 8589934590LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x245 = 101U;
	static uint16_t x246 = 6U;
	static int32_t x247 = -1;
	int64_t x248 = 11247225713186LL;
	volatile int64_t t58 = -226083038316143404LL;

    t58 = ((x245/x246)*(x247|x248));

    if (t58 != -16LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	uint32_t x252 = 42U;
	volatile uint32_t t59 = 49490U;

    t59 = ((x249/x250)*(x251|x252));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 17396075999LLU;
	static int8_t x256 = INT8_MAX;
	volatile uint64_t t60 = 4467141734LLU;

    t60 = ((x253/x254)*(x255|x256));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = -2374603;
	static int32_t x259 = 3;
	static uint64_t t61 = 24LLU;

    t61 = ((x257/x258)*(x259|x260));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = 511;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MIN;

    t62 = ((x261/x262)*(x263|x264));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x265 = 404755679360063040LLU;
	int32_t x266 = INT32_MAX;
	int32_t x268 = INT32_MIN;

    t63 = ((x265/x266)*(x267|x268));

    if (t63 != 18446737897628041216LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x270 = UINT16_MAX;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = 6688931942LLU;
	uint64_t t64 = 2394489LLU;

    t64 = ((x269/x270)*(x271|x272));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -720;
	static uint32_t x280 = 2229U;
	uint32_t t65 = 43470008U;

    t65 = ((x277/x278)*(x279|x280));

    if (t65 != 4294966709U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x281 = -1;
	static int32_t x282 = INT32_MAX;
	static uint32_t x283 = 152506U;
	uint32_t t66 = 11135U;

    t66 = ((x281/x282)*(x283|x284));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	static volatile uint64_t x287 = 11018363397LLU;
	int32_t x288 = INT32_MIN;

    t67 = ((x285/x286)*(x287|x288));

    if (t67 != 18446621748243005440LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -1LL;
	static int8_t x291 = -1;
	volatile int32_t x292 = -1;
	volatile int64_t t68 = -1862802481757127LL;

    t68 = ((x289/x290)*(x291|x292));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = -5;
	int64_t x294 = 3291LL;
	static volatile int64_t t69 = 571168982946307556LL;

    t69 = ((x293/x294)*(x295|x296));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x297 = -1;
	int64_t x298 = 12LL;
	static int64_t x299 = 15530LL;
	uint8_t x300 = UINT8_MAX;
	int64_t t70 = 1993LL;

    t70 = ((x297/x298)*(x299|x300));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x301 = 0U;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	uint64_t t71 = 6307261LLU;

    t71 = ((x301/x302)*(x303|x304));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	static int64_t x306 = INT64_MAX;
	volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	volatile int64_t t72 = -1599855997954628809LL;

    t72 = ((x305/x306)*(x307|x308));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x310 = INT64_MAX;
	uint64_t x311 = UINT64_MAX;
	uint64_t t73 = 157584188832071876LLU;

    t73 = ((x309/x310)*(x311|x312));

    if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MIN;
	volatile int64_t t74 = -4168133535518LL;

    t74 = ((x313/x314)*(x315|x316));

    if (t74 != 530110910070LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	volatile uint64_t t75 = 6213171883124LLU;

    t75 = ((x317/x318)*(x319|x320));

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x321 = INT8_MAX;
	volatile uint32_t x322 = 12U;
	volatile int16_t x323 = -1;
	int16_t x324 = 0;
	static volatile uint32_t t76 = 38U;

    t76 = ((x321/x322)*(x323|x324));

    if (t76 != 4294967286U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = -1;
	uint64_t x326 = 143155521LLU;
	volatile int64_t x327 = INT64_MIN;
	uint64_t t77 = 634277716926171LLU;

    t77 = ((x325/x326)*(x327|x328));

    if (t77 != 9223388401829601673LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 7U;
	uint64_t t78 = 491LLU;

    t78 = ((x333/x334)*(x335|x336));

    if (t78 != 18374403900871474943LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x337 = UINT32_MAX;
	static int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int64_t t79 = -1472217435LL;

    t79 = ((x337/x338)*(x339|x340));

    if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x341 = 603LLU;
	static int64_t x342 = -1LL;
	volatile int32_t x343 = -6378;
	volatile uint64_t t80 = 968117665452LLU;

    t80 = ((x341/x342)*(x343|x344));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x345 = 7965083007403994LLU;
	int32_t x346 = -570773;
	static uint64_t t81 = 831006077696722LLU;

    t81 = ((x345/x346)*(x347|x348));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = -1LL;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	volatile int32_t x352 = INT32_MAX;

    t82 = ((x349/x350)*(x351|x352));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x353 = INT16_MIN;
	uint64_t x354 = 1568LLU;
	int8_t x355 = 4;
	uint8_t x356 = 3U;
	volatile uint64_t t83 = 10936907LLU;

    t83 = ((x353/x354)*(x355|x356));

    if (t83 != 82351536043346066LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x357 = 33U;
	uint64_t x358 = 1301019206243245LLU;
	int64_t x359 = -1LL;
	static int8_t x360 = INT8_MAX;

    t84 = ((x357/x358)*(x359|x360));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x361 = -1;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = 8U;
	volatile int32_t t85 = -58486;

    t85 = ((x361/x362)*(x363|x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x366 = 9642U;
	static int64_t x367 = INT64_MIN;
	static uint32_t x368 = 0U;

    t86 = ((x365/x366)*(x367|x368));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x369 = -821;
	int64_t x370 = 58807376401471LL;
	int64_t x371 = INT64_MIN;
	static uint16_t x372 = 199U;
	int64_t t87 = 7434244264LL;

    t87 = ((x369/x370)*(x371|x372));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	volatile int64_t x378 = 17LL;
	volatile int32_t x380 = INT32_MIN;
	uint64_t t88 = 1296115791326LLU;

    t88 = ((x377/x378)*(x379|x380));

    if (t88 != 3255307777839772852LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 7998U;
	volatile uint32_t t89 = 1U;

    t89 = ((x381/x382)*(x383|x384));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x385 = UINT32_MAX;
	int16_t x387 = INT16_MAX;
	int32_t x388 = -1;
	static volatile uint32_t t90 = UINT32_MAX;

    t90 = ((x385/x386)*(x387|x388));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x389 = UINT64_MAX;
	int8_t x390 = 62;
	static int32_t x391 = INT32_MIN;
	volatile uint64_t t91 = 48597817427565882LLU;

    t91 = ((x389/x390)*(x391|x392));

    if (t91 != 8925843906633662464LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x393 = 482677059LL;
	uint16_t x394 = UINT16_MAX;
	volatile int32_t x395 = 534115997;
	static uint64_t x396 = UINT64_MAX;
	static uint64_t t92 = 4901890471LLU;

    t92 = ((x393/x394)*(x395|x396));

    if (t92 != 18446744073709544251LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x398 = INT32_MAX;
	static volatile uint16_t x399 = 1U;
	static int16_t x400 = -38;
	int32_t t93 = 198;

    t93 = ((x397/x398)*(x399|x400));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x401 = -11;
	volatile int8_t x402 = 12;
	uint8_t x403 = UINT8_MAX;
	int16_t x404 = -1;
	int32_t t94 = -2044;

    t94 = ((x401/x402)*(x403|x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x405 = 21;
	uint32_t x406 = UINT32_MAX;
	uint8_t x407 = 29U;
	volatile int16_t x408 = -1;
	volatile uint32_t t95 = 587U;

    t95 = ((x405/x406)*(x407|x408));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x409 = 33U;
	int8_t x410 = INT8_MIN;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	uint32_t t96 = 38236514U;

    t96 = ((x409/x410)*(x411|x412));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x413 = 892274U;
	int8_t x414 = INT8_MIN;
	volatile int32_t x415 = -1;
	static volatile int64_t x416 = -73LL;
	volatile int64_t t97 = -3288103820581506LL;

    t97 = ((x413/x414)*(x415|x416));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MAX;
	volatile int16_t x419 = 1931;
	int32_t x420 = -1;
	int64_t t98 = -675LL;

    t98 = ((x417/x418)*(x419|x420));

    if (t98 != 4294967298LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MIN;
	int64_t x423 = -555886LL;
	int32_t x424 = INT32_MAX;
	volatile int64_t t99 = 5244951LL;

    t99 = ((x421/x422)*(x423|x424));

    if (t99 != -4294967296LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x425 = -206;
	volatile int64_t x426 = 93LL;
	int16_t x427 = -898;
	int8_t x428 = INT8_MIN;
	static int64_t t100 = 576116836509LL;

    t100 = ((x425/x426)*(x427|x428));

    if (t100 != 4LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x430 = UINT64_MAX;
	volatile int16_t x432 = -9;
	volatile uint64_t t101 = 0LLU;

    t101 = ((x429/x430)*(x431|x432));

    if (t101 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x433 = -1;
	int8_t x434 = INT8_MAX;
	int32_t x435 = INT32_MIN;
	int64_t t102 = -5282697LL;

    t102 = ((x433/x434)*(x435|x436));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x437 = -1LL;
	volatile int64_t x439 = -5666887451327LL;
	static int64_t t103 = 88682576569LL;

    t103 = ((x437/x438)*(x439|x440));

    if (t103 != -5665061863425LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x441 = 7950422677127LLU;
	int8_t x443 = 1;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t104 = 7475502545116LLU;

    t104 = ((x441/x442)*(x443|x444));

    if (t104 != 18446743864487902218LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x446 = 390245U;
	int8_t x447 = -1;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t105 = 1553904672LLU;

    t105 = ((x445/x446)*(x447|x448));

    if (t105 != 18446744073708996340LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x449 = INT64_MIN;
	int64_t x450 = 27191326LL;
	uint64_t x452 = 70115503682LLU;
	uint64_t t106 = 260208765LLU;

    t106 = ((x449/x450)*(x451|x452));

    if (t106 != 12929525548335796698LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x454 = -736LL;
	int8_t x455 = 2;
	int32_t x456 = INT32_MIN;
	int64_t t107 = 1LL;

    t107 = ((x453/x454)*(x455|x456));

    if (t107 != 1196148390822LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x457 = -1;
	int8_t x458 = -1;
	uint64_t x460 = 7009605503010640LLU;

    t108 = ((x457/x458)*(x459|x460));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x465 = 1;
	int64_t x466 = 2525395638890762930LL;
	int32_t x467 = 10294;
	volatile uint16_t x468 = UINT16_MAX;
	static int64_t t109 = 403101840602026280LL;

    t109 = ((x465/x466)*(x467|x468));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x469 = INT8_MAX;
	static volatile int8_t x470 = 8;
	uint16_t x471 = 1U;
	static volatile int32_t t110 = -167;

    t110 = ((x469/x470)*(x471|x472));

    if (t110 != 885) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x473 = UINT64_MAX;
	static int16_t x474 = 1;
	int8_t x475 = INT8_MIN;
	static uint32_t x476 = 1565U;
	volatile uint64_t t111 = 69105287471009902LLU;

    t111 = ((x473/x474)*(x475|x476));

    if (t111 != 18446744069414584419LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x477 = INT16_MIN;
	static uint8_t x478 = UINT8_MAX;
	int8_t x479 = -3;
	volatile int32_t x480 = 1;
	volatile int32_t t112 = -972;

    t112 = ((x477/x478)*(x479|x480));

    if (t112 != 384) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MIN;
	static int16_t x483 = -100;
	int32_t x484 = INT32_MIN;
	volatile int32_t t113 = -1506;

    t113 = ((x481/x482)*(x483|x484));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x486 = 52U;
	static int32_t x487 = 38573750;
	int16_t x488 = INT16_MIN;
	volatile uint32_t t114 = 10687143U;

    t114 = ((x485/x486)*(x487|x488));

    if (t114 != 4294724710U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MAX;
	uint8_t x491 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	static uint64_t t115 = 1446LLU;

    t115 = ((x489/x490)*(x491|x492));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = INT32_MIN;
	int32_t x495 = 540186908;
	uint32_t x496 = 59U;
	uint32_t t116 = 175326494U;

    t116 = ((x493/x494)*(x495|x496));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = ((x497/x498)*(x499|x500));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x501 = -28071992756LL;
	int64_t x502 = -3498364915513876278LL;
	int64_t x503 = -2506168817504824457LL;
	static int64_t x504 = INT64_MIN;
	int64_t t118 = 163065178778928LL;

    t118 = ((x501/x502)*(x503|x504));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x505 = 12U;
	int32_t x506 = -1;
	volatile int64_t x507 = INT64_MAX;
	int8_t x508 = INT8_MIN;
	int64_t t119 = -514742743394546LL;

    t119 = ((x505/x506)*(x507|x508));

    if (t119 != 12LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x509 = 1;
	int16_t x510 = -1;
	int16_t x511 = INT16_MIN;
	volatile int8_t x512 = INT8_MIN;
	int32_t t120 = -11882707;

    t120 = ((x509/x510)*(x511|x512));

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x515 = -1;
	uint32_t x516 = 1875U;
	volatile uint32_t t121 = 614810576U;

    t121 = ((x513/x514)*(x515|x516));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x517 = 63U;
	volatile int8_t x518 = 7;
	volatile uint16_t x520 = 14U;

    t122 = ((x517/x518)*(x519|x520));

    if (t122 != 3449276052903LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = INT16_MIN;
	int8_t x522 = 4;
	static int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MAX;
	int64_t t123 = -1039340871LL;

    t123 = ((x521/x522)*(x523|x524));

    if (t123 != 8192LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = INT16_MIN;
	int32_t x527 = INT32_MIN;
	int16_t x528 = INT16_MAX;
	volatile int32_t t124 = -227351;

    t124 = ((x525/x526)*(x527|x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile uint32_t x534 = UINT32_MAX;
	uint32_t x536 = 1277606041U;
	uint32_t t125 = UINT32_MAX;

    t125 = ((x533/x534)*(x535|x536));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile int64_t x538 = INT64_MAX;
	volatile int64_t x539 = INT64_MIN;
	int64_t x540 = -1LL;
	volatile int64_t t126 = -201LL;

    t126 = ((x537/x538)*(x539|x540));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x541 = INT16_MAX;
	static int16_t x542 = INT16_MIN;
	static int8_t x543 = INT8_MIN;
	int32_t x544 = INT32_MIN;

    t127 = ((x541/x542)*(x543|x544));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile int16_t x547 = INT16_MAX;
	static uint16_t x548 = 100U;

    t128 = ((x545/x546)*(x547|x548));

    if (t128 != 32767LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	int32_t x552 = INT32_MAX;
	volatile int32_t t129 = -3514;

    t129 = ((x549/x550)*(x551|x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x553 = INT64_MIN;
	int16_t x554 = INT16_MIN;
	uint64_t x555 = 645765111684882674LLU;
	volatile uint16_t x556 = 1203U;
	volatile uint64_t t130 = 32963804887417LLU;

    t130 = ((x553/x554)*(x555|x556));

    if (t130 != 7274157823133483008LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x557 = 884LL;
	volatile int64_t x558 = INT64_MIN;
	uint16_t x559 = 57U;
	int8_t x560 = INT8_MIN;
	int64_t t131 = 120486366LL;

    t131 = ((x557/x558)*(x559|x560));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x561 = UINT16_MAX;
	int8_t x562 = INT8_MIN;
	uint16_t x563 = 85U;
	uint32_t t132 = 19744U;

    t132 = ((x561/x562)*(x563|x564));

    if (t132 != 511U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x565 = INT16_MAX;
	int32_t x566 = -1;
	uint8_t x567 = UINT8_MAX;
	int64_t t133 = 12LL;

    t133 = ((x565/x566)*(x567|x568));

    if (t133 != 32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x571 = INT16_MAX;

    t134 = ((x569/x570)*(x571|x572));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x573 = 27271738U;
	int16_t x574 = -14;
	static volatile int16_t x575 = 5;
	uint8_t x576 = 0U;
	static uint32_t t135 = 17268605U;

    t135 = ((x573/x574)*(x575|x576));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x577 = 49U;
	static int8_t x578 = 3;
	static uint8_t x579 = 69U;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t136 = -128;

    t136 = ((x577/x578)*(x579|x580));

    if (t136 != 4080) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x582 = 953800303U;
	uint8_t x583 = 28U;
	int32_t x584 = 12;
	volatile uint32_t t137 = 6645451U;

    t137 = ((x581/x582)*(x583|x584));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x585 = INT64_MAX;
	volatile int8_t x587 = INT8_MIN;
	volatile uint8_t x588 = UINT8_MAX;
	volatile int64_t t138 = -1330904417549LL;

    t138 = ((x585/x586)*(x587|x588));

    if (t138 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x589 = INT16_MIN;
	int8_t x590 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	int64_t t139 = 36025683984010743LL;

    t139 = ((x589/x590)*(x591|x592));

    if (t139 != 7005474LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x593 = 735780U;
	static int16_t x594 = 66;
	uint64_t x595 = 2627938638247147LLU;
	uint16_t x596 = UINT16_MAX;
	uint64_t t140 = 11540LLU;

    t140 = ((x593/x594)*(x595|x596));

    if (t140 != 10849515866049205364LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x598 = 1U;
	static int8_t x599 = INT8_MIN;
	int64_t x600 = INT64_MAX;
	volatile int64_t t141 = 1623259LL;

    t141 = ((x597/x598)*(x599|x600));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x601 = -1;
	static int64_t x602 = INT64_MIN;
	int8_t x603 = INT8_MIN;
	int64_t t142 = -6LL;

    t142 = ((x601/x602)*(x603|x604));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x605 = -1;
	int16_t x606 = 3;
	volatile int64_t x607 = INT64_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile uint64_t t143 = 80886081366859LLU;

    t143 = ((x605/x606)*(x607|x608));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x610 = INT8_MIN;
	volatile int32_t x611 = -1;
	int32_t t144 = -6;

    t144 = ((x609/x610)*(x611|x612));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x613 = 22907824871LLU;
	static volatile int16_t x614 = -1;
	int16_t x615 = -1;
	uint8_t x616 = UINT8_MAX;
	uint64_t t145 = 347LLU;

    t145 = ((x613/x614)*(x615|x616));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x617 = INT32_MIN;
	int64_t x618 = INT64_MIN;
	int8_t x619 = -1;
	static uint8_t x620 = 13U;
	volatile int64_t t146 = -4801LL;

    t146 = ((x617/x618)*(x619|x620));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x621 = 0U;
	volatile int64_t t147 = 109LL;

    t147 = ((x621/x622)*(x623|x624));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x626 = 176124LL;
	volatile uint8_t x627 = 28U;
	int64_t t148 = -2962400591336601259LL;

    t148 = ((x625/x626)*(x627|x628));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x630 = UINT16_MAX;
	uint8_t x631 = 0U;
	static int8_t x632 = 25;
	volatile int64_t t149 = -1813529812273509490LL;

    t149 = ((x629/x630)*(x631|x632));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x633 = 25682U;
	int16_t x634 = INT16_MIN;
	int64_t x636 = INT64_MIN;

    t150 = ((x633/x634)*(x635|x636));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x638 = 11U;
	int8_t x640 = -15;
	volatile int32_t t151 = 65929;

    t151 = ((x637/x638)*(x639|x640));

    if (t151 != 11) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x642 = 672446859;
	uint16_t x643 = 1U;
	int16_t x644 = 943;
	int32_t t152 = -339092699;

    t152 = ((x641/x642)*(x643|x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x646 = -57;
	static uint32_t x647 = UINT32_MAX;
	uint64_t t153 = 26729542LLU;

    t153 = ((x645/x646)*(x647|x648));

    if (t153 != 4294967295LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x649 = -1LL;
	int16_t x650 = -1;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 25341584U;

    t154 = ((x649/x650)*(x651|x652));

    if (t154 != -9223372036829434224LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x653 = 181192813269231LLU;
	int32_t x654 = -1;
	int64_t x656 = INT64_MIN;
	volatile uint64_t t155 = 28733260LLU;

    t155 = ((x653/x654)*(x655|x656));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x657 = INT8_MIN;
	uint16_t x659 = 764U;
	int64_t x660 = INT64_MIN;
	volatile int64_t t156 = -33605636322069LL;

    t156 = ((x657/x658)*(x659|x660));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x661 = INT64_MIN;
	uint32_t x662 = 27776U;
	int8_t x663 = -1;
	int16_t x664 = INT16_MIN;
	int64_t t157 = -3LL;

    t157 = ((x661/x662)*(x663|x664));

    if (t157 != 332062645336073LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x666 = UINT64_MAX;
	uint64_t x667 = 953625454359388LLU;
	int64_t x668 = INT64_MIN;
	volatile uint64_t t158 = 9662589LLU;

    t158 = ((x665/x666)*(x667|x668));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x669 = 1941U;
	static int32_t x670 = INT32_MAX;
	int16_t x671 = INT16_MAX;
	volatile uint64_t x672 = 7916532489889LLU;
	uint64_t t159 = 3LLU;

    t159 = ((x669/x670)*(x671|x672));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x678 = INT32_MAX;
	uint16_t x679 = UINT16_MAX;
	uint8_t x680 = 1U;

    t160 = ((x677/x678)*(x679|x680));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x681 = 5U;
	static volatile int32_t x682 = -1;
	static int8_t x683 = INT8_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t161 = 32504055;

    t161 = ((x681/x682)*(x683|x684));

    if (t161 != 640) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x685 = INT16_MIN;
	uint32_t x686 = 1652U;
	static int16_t x687 = INT16_MIN;
	uint8_t x688 = UINT8_MAX;

    t162 = ((x685/x686)*(x687|x688));

    if (t162 != 1370780513U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x692 = 91487LLU;

    t163 = ((x689/x690)*(x691|x692));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x693 = 362;
	int8_t x695 = -1;
	int32_t t164 = 398026;

    t164 = ((x693/x694)*(x695|x696));

    if (t164 != 120) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x698 = UINT64_MAX;
	volatile uint8_t x699 = 86U;
	uint64_t t165 = 249LLU;

    t165 = ((x697/x698)*(x699|x700));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x701 = -16048429;
	int32_t x703 = INT32_MAX;

    t166 = ((x701/x702)*(x703|x704));

    if (t166 != -125378) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x705 = -115350376253LL;
	int8_t x706 = 5;
	volatile int8_t x707 = INT8_MIN;
	uint8_t x708 = 16U;
	static int64_t t167 = -81LL;

    t167 = ((x705/x706)*(x707|x708));

    if (t167 != 2583848428000LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = -1;
	volatile int16_t x710 = -1;
	volatile int32_t t168 = 112460;

    t168 = ((x709/x710)*(x711|x712));

    if (t168 != -2147483482) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x713 = INT16_MAX;
	uint64_t x714 = UINT64_MAX;
	int8_t x715 = -19;
	static uint32_t x716 = 1231265968U;

    t169 = ((x713/x714)*(x715|x716));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x717 = INT64_MAX;
	int32_t x718 = INT32_MIN;
	volatile uint64_t x720 = UINT64_MAX;

    t170 = ((x717/x718)*(x719|x720));

    if (t170 != 4294967295LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x721 = 95U;
	static uint16_t x722 = 2U;
	static uint16_t x723 = 1704U;
	uint32_t t171 = 43460128U;

    t171 = ((x721/x722)*(x723|x724));

    if (t171 != 4294963160U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x725 = 0;
	int8_t x726 = INT8_MIN;
	volatile int8_t x727 = 2;
	int64_t x728 = -1LL;
	static volatile int64_t t172 = -1623057514143700235LL;

    t172 = ((x725/x726)*(x727|x728));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x729 = 1400U;
	int16_t x730 = 239;
	int64_t x732 = 11574351493477LL;

    t173 = ((x729/x730)*(x731|x732));

    if (t173 != -5LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x735 = 34321LL;
	int16_t x736 = INT16_MIN;
	uint64_t t174 = 859LLU;

    t174 = ((x733/x734)*(x735|x736));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x737 = INT8_MIN;
	int16_t x738 = -1;
	volatile uint16_t x739 = UINT16_MAX;
	static int32_t t175 = 14878319;

    t175 = ((x737/x738)*(x739|x740));

    if (t175 != 8388480) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = -1;
	int32_t x742 = -98;
	int16_t x743 = -25;
	static int8_t x744 = INT8_MAX;
	int32_t t176 = -11;

    t176 = ((x741/x742)*(x743|x744));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x745 = INT16_MIN;
	volatile int64_t x746 = INT64_MIN;
	int8_t x747 = 14;
	static int8_t x748 = -1;
	volatile int64_t t177 = -41311349502LL;

    t177 = ((x745/x746)*(x747|x748));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x749 = INT64_MIN;
	uint64_t x752 = UINT64_MAX;
	uint64_t t178 = 5339LLU;

    t178 = ((x749/x750)*(x751|x752));

    if (t178 != 2317202515244LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x761 = INT8_MIN;
	static int64_t t179 = 485825525612631LL;

    t179 = ((x761/x762)*(x763|x764));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x765 = 157;
	static uint32_t x766 = UINT32_MAX;
	static int32_t x767 = -1;
	int64_t x768 = INT64_MAX;
	int64_t t180 = 615427LL;

    t180 = ((x765/x766)*(x767|x768));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x769 = -1LL;
	int8_t x771 = INT8_MIN;
	volatile uint64_t t181 = 101026268618LLU;

    t181 = ((x769/x770)*(x771|x772));

    if (t181 != 18446744073709547392LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x773 = INT32_MIN;
	int32_t x774 = 270077321;
	volatile int32_t x775 = -1;
	uint32_t x776 = UINT32_MAX;
	static uint32_t t182 = 108935294U;

    t182 = ((x773/x774)*(x775|x776));

    if (t182 != 7U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x781 = 22;
	uint8_t x782 = UINT8_MAX;
	uint64_t x783 = 51354595LLU;
	static int32_t x784 = -1;
	uint64_t t183 = 697LLU;

    t183 = ((x781/x782)*(x783|x784));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x785 = 213;
	int8_t x787 = 37;
	int8_t x788 = 0;
	static uint64_t t184 = 11013LLU;

    t184 = ((x785/x786)*(x787|x788));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x789 = 879U;
	uint32_t x790 = 114369832U;
	static uint64_t x791 = 4341308664058LLU;
	volatile uint64_t t185 = 3161187106527201882LLU;

    t185 = ((x789/x790)*(x791|x792));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x793 = INT32_MIN;
	static int32_t x794 = INT32_MIN;
	int64_t t186 = 1979176LL;

    t186 = ((x793/x794)*(x795|x796));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x797 = INT8_MAX;
	int8_t x798 = -16;
	int32_t x799 = 708715;
	int32_t x800 = 15683651;

    t187 = ((x797/x798)*(x799|x800));

    if (t187 != -110015213) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x802 = -1LL;
	static int8_t x803 = INT8_MIN;
	volatile int64_t t188 = -81267510074LL;

    t188 = ((x801/x802)*(x803|x804));

    if (t188 != -79LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x805 = -62588203;
	uint64_t x806 = UINT64_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile uint64_t t189 = 6495393089580491749LLU;

    t189 = ((x805/x806)*(x807|x808));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x809 = -1;
	uint16_t x810 = 761U;
	uint32_t x811 = 3376U;
	static volatile int32_t x812 = INT32_MIN;
	uint32_t t190 = 1475917U;

    t190 = ((x809/x810)*(x811|x812));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x813 = -2854576136563LL;
	volatile uint32_t x814 = 8034824U;
	static int16_t x815 = -11;
	static volatile uint8_t x816 = 3U;

    t191 = ((x813/x814)*(x815|x816));

    if (t191 != 3197475LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MIN;
	int64_t x820 = INT64_MIN;
	volatile uint64_t t192 = 76LLU;

    t192 = ((x817/x818)*(x819|x820));

    if (t192 != 1092126208LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x821 = 26;
	volatile uint8_t x822 = 107U;
	int8_t x824 = INT8_MIN;
	int32_t t193 = -1;

    t193 = ((x821/x822)*(x823|x824));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x826 = -29197151;
	volatile int8_t x827 = -10;
	static int64_t x828 = INT64_MAX;
	int64_t t194 = 106219LL;

    t194 = ((x825/x826)*(x827|x828));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x831 = INT64_MIN;
	volatile int64_t t195 = 104417219846583800LL;

    t195 = ((x829/x830)*(x831|x832));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x834 = 2LL;
	int32_t x836 = INT32_MIN;
	volatile int64_t t196 = 1581286281606072996LL;

    t196 = ((x833/x834)*(x835|x836));

    if (t196 != 974957574376LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x837 = INT32_MAX;
	int32_t x838 = INT32_MIN;
	volatile uint32_t x839 = 72448251U;
	volatile uint32_t t197 = 11U;

    t197 = ((x837/x838)*(x839|x840));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x841 = 500563078337LLU;
	uint8_t x842 = UINT8_MAX;
	int64_t x843 = 15796496051LL;
	uint16_t x844 = 60U;
	volatile uint64_t t198 = 4378745026413LLU;

    t198 = ((x841/x842)*(x843|x844));

    if (t198 != 12561658655565117616LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x845 = 36U;
	int8_t x846 = -1;
	static uint8_t x847 = UINT8_MAX;
	uint64_t x848 = UINT64_MAX;
	static volatile uint64_t t199 = 2886118LLU;

    t199 = ((x845/x846)*(x847|x848));

    if (t199 != 36LLU) { NG(); } else { ; }
	
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

