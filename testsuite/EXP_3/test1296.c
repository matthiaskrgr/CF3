
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

uint16_t x2 = UINT16_MAX;
volatile int16_t x10 = INT16_MIN;
uint16_t x11 = UINT16_MAX;
uint16_t x15 = 499U;
int32_t x18 = -1;
static volatile int32_t t5 = 3651281;
uint32_t x28 = 181932289U;
volatile int32_t t6 = 45999575;
static int8_t x31 = INT8_MIN;
static int16_t x34 = -1;
uint64_t x39 = UINT64_MAX;
int8_t x47 = -1;
volatile int32_t t11 = -30;
uint64_t x53 = UINT64_MAX;
volatile int32_t x56 = -98402;
uint16_t x70 = UINT16_MAX;
uint16_t x73 = 922U;
int32_t x74 = -1;
static volatile int32_t x81 = -1;
static volatile int32_t t20 = -21626345;
static volatile uint16_t x96 = UINT16_MAX;
int32_t x100 = -1;
int32_t t26 = -2245815;
int32_t x111 = INT32_MIN;
volatile int32_t t27 = -742675;
int32_t x114 = INT32_MIN;
int8_t x117 = -1;
uint64_t x118 = 7468LLU;
static uint64_t x127 = 364LLU;
volatile int32_t t33 = 177;
volatile int8_t x143 = -1;
int64_t x145 = INT64_MAX;
static int32_t t36 = 1627;
volatile int32_t t37 = 1;
int64_t x154 = INT64_MAX;
int8_t x156 = -1;
int32_t t38 = -15174;
uint8_t x168 = 97U;
int64_t x169 = -2734507501LL;
int64_t x170 = -3734622LL;
uint8_t x173 = 1U;
int32_t t43 = 3688;
int8_t x180 = -11;
int32_t x199 = -1;
uint64_t x202 = 782701982888513LLU;
uint16_t x205 = 3U;
uint16_t x218 = 3U;
int16_t x221 = -644;
static volatile int8_t x222 = -1;
static int8_t x230 = -1;
uint32_t x236 = 0U;
static volatile int32_t t58 = 56433584;
static volatile int64_t x242 = 853905LL;
int16_t x243 = INT16_MIN;
static int8_t x247 = INT8_MIN;
uint64_t x248 = 4434668228425381305LLU;
volatile uint16_t x249 = 2886U;
int16_t x252 = -2;
uint16_t x254 = UINT16_MAX;
int64_t x255 = INT64_MIN;
int64_t x257 = -101505015LL;
int32_t t64 = -143225;
volatile int64_t x262 = -1LL;
uint8_t x263 = 3U;
volatile int64_t x267 = INT64_MIN;
int8_t x268 = 24;
volatile int32_t t66 = -3;
uint8_t x270 = 0U;
int32_t t67 = 4246985;
uint64_t x273 = UINT64_MAX;
uint16_t x275 = 102U;
int32_t t69 = -399873028;
static int16_t x281 = -1;
int64_t x284 = -1LL;
volatile uint32_t x291 = UINT32_MAX;
volatile uint32_t x294 = 6U;
int16_t x295 = INT16_MIN;
static volatile int64_t x304 = INT64_MIN;
volatile int32_t t76 = -115;
int8_t x310 = INT8_MAX;
uint64_t x314 = UINT64_MAX;
int8_t x315 = INT8_MAX;
static uint8_t x317 = 15U;
uint32_t x318 = 211U;
int32_t t79 = 137433128;
int64_t x321 = -1LL;
int32_t t81 = 0;
volatile uint64_t x332 = 20LLU;
int8_t x333 = 15;
int8_t x336 = -1;
uint8_t x346 = 3U;
int8_t x355 = 1;
uint32_t x361 = UINT32_MAX;
uint16_t x366 = 83U;
static int8_t x379 = INT8_MAX;
int32_t t94 = 181206177;
uint16_t x393 = 13776U;
int32_t x396 = INT32_MAX;
volatile int64_t x397 = INT64_MAX;
int32_t x402 = -1;
static volatile uint8_t x403 = 1U;
static int8_t x408 = 26;
volatile int32_t t101 = 0;
int64_t x411 = 17LL;
int8_t x433 = 1;
static volatile int32_t t111 = 616788557;
uint16_t x449 = 0U;
int8_t x459 = -1;
volatile int32_t t114 = -23459;
int16_t x462 = INT16_MAX;
static uint8_t x463 = 0U;
volatile int32_t t115 = 80;
int8_t x467 = 0;
static int32_t x482 = INT32_MAX;
uint64_t x489 = 29903743632941794LLU;
int32_t x493 = INT32_MIN;
static uint8_t x502 = UINT8_MAX;
static volatile int64_t x504 = INT64_MIN;
uint8_t x508 = UINT8_MAX;
volatile int32_t x509 = INT32_MAX;
static int16_t x510 = -1;
static volatile int8_t x514 = INT8_MIN;
int8_t x516 = -15;
int32_t x519 = 289;
int32_t t131 = 157627881;
static uint64_t x530 = UINT64_MAX;
int32_t t132 = -3;
volatile int32_t t134 = -57;
int32_t x542 = -1;
int8_t x548 = -1;
static uint32_t x552 = 119705280U;
static uint16_t x554 = 31936U;
static int8_t x555 = -57;
uint64_t x558 = UINT64_MAX;
uint64_t x560 = UINT64_MAX;
uint64_t x561 = UINT64_MAX;
static volatile int64_t x567 = INT64_MIN;
int32_t x570 = -1;
static int32_t x576 = INT32_MIN;
uint16_t x584 = UINT16_MAX;
int32_t x585 = INT32_MIN;
int32_t x589 = INT32_MIN;
static uint64_t x590 = 2627964626644566347LLU;
static volatile int32_t t148 = 0;
volatile uint16_t x600 = 4605U;
static int64_t x602 = INT64_MIN;
int64_t x603 = INT64_MIN;
static int64_t x609 = 201LL;
volatile uint8_t x610 = UINT8_MAX;
static int64_t x612 = INT64_MAX;
uint16_t x624 = 7U;
volatile int32_t x625 = INT32_MIN;
volatile int32_t t157 = 19523112;
int16_t x634 = INT16_MIN;
int32_t x636 = INT32_MIN;
int32_t x643 = INT32_MIN;
int16_t x644 = INT16_MIN;
int8_t x646 = 5;
int32_t x647 = -1650284;
int8_t x650 = INT8_MIN;
int16_t x660 = INT16_MAX;
static int32_t x661 = 49;
volatile uint8_t x663 = UINT8_MAX;
int32_t x674 = INT32_MAX;
int16_t x675 = -1847;
static int64_t x680 = -655589LL;
volatile int32_t t169 = -2448;
int64_t x681 = INT64_MIN;
int8_t x683 = INT8_MIN;
volatile int32_t t170 = -117713478;
static uint8_t x687 = 39U;
volatile int64_t x689 = INT64_MIN;
uint32_t x695 = 99534082U;
int64_t x696 = INT64_MIN;
volatile int32_t t173 = 0;
int64_t x699 = -13095554857LL;
int16_t x700 = INT16_MAX;
int16_t x702 = INT16_MIN;
int64_t x703 = 7440LL;
uint64_t x704 = 107124LLU;
int64_t x705 = 29218106091LL;
int64_t x710 = INT64_MIN;
int8_t x715 = 41;
volatile int16_t x717 = INT16_MAX;
int8_t x718 = INT8_MIN;
int32_t x719 = INT32_MIN;
int64_t x727 = INT64_MAX;
int32_t t181 = 8262136;
uint32_t x730 = 903529252U;
static uint32_t x734 = 105U;
static volatile uint16_t x736 = 4U;
int64_t x737 = 71955173814871005LL;
int32_t x740 = -55202087;
volatile int32_t t184 = -22;
volatile int64_t x752 = 130509LL;
uint32_t x758 = 10800U;
int32_t x761 = INT32_MAX;
int32_t t190 = 16;
int16_t x770 = INT16_MIN;
uint32_t x773 = UINT32_MAX;
int8_t x774 = -5;
int64_t x779 = INT64_MAX;
uint64_t x788 = 28147500213LLU;
uint16_t x789 = 0U;
static int16_t x791 = -1;
int32_t x792 = INT32_MIN;
static int16_t x795 = INT16_MIN;
int32_t t199 = -10580496;


void f0(void) {
    	uint32_t x1 = 4188331U;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -36707885319LL;
	volatile int32_t t0 = -1866073;

    t0 = ((x1>x2)==(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 72985243LLU;
	int64_t x6 = -21LL;
	int16_t x7 = -12;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -103326319;

    t1 = ((x5>x6)==(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -88135266LL;
	volatile uint16_t x12 = 7U;
	int32_t t2 = 103;

    t2 = ((x9>x10)==(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile uint16_t x14 = 289U;
	static int16_t x16 = INT16_MAX;
	int32_t t3 = -100490526;

    t3 = ((x13>x14)==(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = 2506;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = 361861634560621LL;
	volatile int32_t t4 = -3639806;

    t4 = ((x17>x18)==(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 12510765935808LLU;
	uint16_t x22 = 1988U;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;

    t5 = ((x21>x22)==(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	uint16_t x26 = 1U;
	static int64_t x27 = -726756LL;

    t6 = ((x25>x26)==(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -12;
	int8_t x30 = 0;
	volatile uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 103203234;

    t7 = ((x29>x30)==(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	static volatile int8_t x35 = INT8_MIN;
	static int16_t x36 = -1;
	volatile int32_t t8 = 142190;

    t8 = ((x33>x34)==(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -12648;
	volatile int32_t x38 = -162210444;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = -4619953;

    t9 = ((x37>x38)==(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int16_t x43 = -5153;
	static volatile int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -411;

    t10 = ((x41>x42)==(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = UINT8_MAX;
	uint8_t x46 = 0U;
	int64_t x48 = 1080253864357LL;

    t11 = ((x45>x46)==(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = -2;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = 169U;
	int32_t t12 = -167259289;

    t12 = ((x49>x50)==(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int32_t t13 = 11579;

    t13 = ((x53>x54)==(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	uint32_t x58 = 4U;
	int16_t x59 = INT16_MAX;
	uint32_t x60 = 1U;
	static volatile int32_t t14 = -161;

    t14 = ((x57>x58)==(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int64_t x62 = -1LL;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = 0;
	static volatile int32_t t15 = 135785121;

    t15 = ((x61>x62)==(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	volatile int64_t x66 = INT64_MAX;
	volatile int32_t x67 = INT32_MAX;
	static uint64_t x68 = 399LLU;
	int32_t t16 = -126;

    t16 = ((x65>x66)==(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 13873U;
	int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 10640;

    t17 = ((x69>x70)==(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -30;

    t18 = ((x73>x74)==(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 28551547LLU;
	volatile int32_t x78 = -1;
	int64_t x79 = 5LL;
	static volatile int64_t x80 = 40786013LL;
	static int32_t t19 = -1698875;

    t19 = ((x77>x78)==(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = INT64_MIN;
	uint8_t x83 = 57U;
	uint8_t x84 = UINT8_MAX;

    t20 = ((x81>x82)==(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 3;
	uint64_t x86 = UINT64_MAX;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = -1;
	int32_t t21 = -57;

    t21 = ((x85>x86)==(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	int8_t x90 = 1;
	volatile int32_t x91 = -118647;
	volatile int8_t x92 = 20;
	volatile int32_t t22 = -463040157;

    t22 = ((x89>x90)==(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	int16_t x95 = -1;
	volatile int32_t t23 = -17338;

    t23 = ((x93>x94)==(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 90U;
	uint16_t x98 = 0U;
	volatile uint16_t x99 = UINT16_MAX;
	int32_t t24 = 197181895;

    t24 = ((x97>x98)==(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = -3659895;
	static int64_t x102 = 21427602968858LL;
	int64_t x103 = INT64_MAX;
	int8_t x104 = -1;
	volatile int32_t t25 = -3;

    t25 = ((x101>x102)==(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = 466386414869LL;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = 70;

    t26 = ((x105>x106)==(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = -1704136;
	uint8_t x110 = UINT8_MAX;
	static uint64_t x112 = 6092787724498LLU;

    t27 = ((x109>x110)==(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 12437;
	int32_t x115 = INT32_MAX;
	static int32_t x116 = -834173468;
	static volatile int32_t t28 = -350346;

    t28 = ((x113>x114)==(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x119 = INT8_MIN;
	static int16_t x120 = -676;
	static int32_t t29 = -374083;

    t29 = ((x117>x118)==(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = 10986LL;
	uint8_t x122 = 1U;
	volatile uint16_t x123 = 114U;
	uint64_t x124 = 88990101626852343LLU;
	int32_t t30 = 7882394;

    t30 = ((x121>x122)==(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int16_t x126 = -39;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -41836;

    t31 = ((x125>x126)==(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 5882951734788321LLU;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -81823611;

    t32 = ((x129>x130)==(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile int64_t x135 = INT64_MIN;
	volatile int16_t x136 = INT16_MAX;

    t33 = ((x133>x134)==(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 0U;
	uint16_t x138 = 0U;
	static int8_t x139 = INT8_MIN;
	uint8_t x140 = UINT8_MAX;
	int32_t t34 = 1005371;

    t34 = ((x137>x138)==(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = 0LL;
	uint16_t x144 = 643U;
	volatile int32_t t35 = -26;

    t35 = ((x141>x142)==(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = -1LL;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;

    t36 = ((x145>x146)==(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -16035;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 8319LLU;
	uint64_t x152 = UINT64_MAX;

    t37 = ((x149>x150)==(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = INT8_MAX;
	int16_t x155 = -1;

    t38 = ((x153>x154)==(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 118U;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t39 = 1;

    t39 = ((x157>x158)==(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -10;
	int16_t x162 = INT16_MIN;
	static int16_t x163 = -1;
	static uint8_t x164 = 18U;
	volatile int32_t t40 = -538731999;

    t40 = ((x161>x162)==(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = 0;
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	volatile int32_t t41 = -444491;

    t41 = ((x165>x166)==(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	static int32_t t42 = -19;

    t42 = ((x169>x170)==(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = -1;
	static int16_t x175 = INT16_MAX;
	int32_t x176 = -1;

    t43 = ((x173>x174)==(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	volatile int64_t x178 = -24024LL;
	static int64_t x179 = 53605532230425158LL;
	volatile int32_t t44 = 38494;

    t44 = ((x177>x178)==(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = -5;
	uint32_t x182 = 741U;
	uint16_t x183 = 121U;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = 2;

    t45 = ((x181>x182)==(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MAX;
	int16_t x186 = -1;
	int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -90;

    t46 = ((x185>x186)==(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	uint32_t x190 = 1U;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = 5;
	static volatile int32_t t47 = -429;

    t47 = ((x189>x190)==(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 35U;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;
	static volatile int64_t x196 = 162266693527LL;
	int32_t t48 = 2250;

    t48 = ((x193>x194)==(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -1LL;
	volatile int8_t x198 = 1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -77873648;

    t49 = ((x197>x198)==(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -206939967;

    t50 = ((x201>x202)==(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = 16900;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 314314879;

    t51 = ((x205>x206)==(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 2;
	static int16_t x210 = 16321;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 72977;

    t52 = ((x209>x210)==(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 1;
	volatile int8_t x214 = INT8_MIN;
	volatile int16_t x215 = INT16_MAX;
	uint32_t x216 = 1047226716U;
	int32_t t53 = 1;

    t53 = ((x213>x214)==(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	static int8_t x220 = INT8_MIN;
	int32_t t54 = -55;

    t54 = ((x217>x218)==(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = INT32_MIN;
	static uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = 3;

    t55 = ((x221>x222)==(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	volatile uint64_t x226 = 236LLU;
	static int32_t x227 = -16;
	int16_t x228 = -13;
	volatile int32_t t56 = 0;

    t56 = ((x225>x226)==(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 740270355032352LLU;
	uint16_t x231 = 24U;
	int32_t x232 = -1;
	volatile int32_t t57 = -7927164;

    t57 = ((x229>x230)==(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = -1;
	static uint8_t x234 = 2U;
	static int64_t x235 = INT64_MAX;

    t58 = ((x233>x234)==(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 2U;
	static int32_t x238 = -1;
	uint8_t x239 = 15U;
	int64_t x240 = 168086512LL;
	int32_t t59 = -25765;

    t59 = ((x237>x238)==(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MIN;
	int16_t x244 = -1;
	int32_t t60 = 423647211;

    t60 = ((x241>x242)==(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = 1U;
	volatile int8_t x246 = INT8_MAX;
	int32_t t61 = 27;

    t61 = ((x245>x246)==(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x250 = 1;
	int32_t x251 = INT32_MIN;
	volatile int32_t t62 = 0;

    t62 = ((x249>x250)==(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x253 = INT32_MIN;
	int64_t x256 = -1LL;
	int32_t t63 = 2019;

    t63 = ((x253>x254)==(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;

    t64 = ((x257>x258)==(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t65 = 409199234;

    t65 = ((x261>x262)==(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;

    t66 = ((x265>x266)==(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = INT16_MIN;
	uint64_t x271 = 1565085LLU;
	volatile uint64_t x272 = 77718708LLU;

    t67 = ((x269>x270)==(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x274 = INT16_MIN;
	int16_t x276 = 1;
	volatile int32_t t68 = 6285375;

    t68 = ((x273>x274)==(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = 8624;

    t69 = ((x277>x278)==(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x282 = 3871;
	int64_t x283 = INT64_MAX;
	int32_t t70 = -64797;

    t70 = ((x281>x282)==(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 1359077467296803LL;
	int64_t x286 = -1LL;
	int32_t x287 = 94;
	uint16_t x288 = 242U;
	volatile int32_t t71 = 583;

    t71 = ((x285>x286)==(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 402926048815779LLU;
	static uint32_t x290 = 50U;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -75377679;

    t72 = ((x289>x290)==(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	volatile int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 0;

    t73 = ((x293>x294)==(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = UINT16_MAX;
	volatile int8_t x298 = 16;
	static uint8_t x299 = 1U;
	static uint16_t x300 = 7597U;
	int32_t t74 = 1;

    t74 = ((x297>x298)==(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	static uint64_t x302 = UINT64_MAX;
	int8_t x303 = 0;
	int32_t t75 = 1109657;

    t75 = ((x301>x302)==(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MAX;
	static int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	uint32_t x308 = UINT32_MAX;

    t76 = ((x305>x306)==(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 104738351;

    t77 = ((x309>x310)==(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x313 = UINT8_MAX;
	int64_t x316 = INT64_MAX;
	volatile int32_t t78 = 6768920;

    t78 = ((x313>x314)==(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x319 = INT16_MIN;
	int32_t x320 = 5;

    t79 = ((x317>x318)==(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = 14;
	int8_t x323 = 0;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = 559161;

    t80 = ((x321>x322)==(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	uint32_t x326 = 216U;
	uint32_t x327 = 121862U;
	static int8_t x328 = INT8_MIN;

    t81 = ((x325>x326)==(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	static int8_t x330 = -1;
	int8_t x331 = INT8_MIN;
	volatile int32_t t82 = -5;

    t82 = ((x329>x330)==(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x334 = 63262;
	volatile int8_t x335 = INT8_MIN;
	int32_t t83 = -431569;

    t83 = ((x333>x334)==(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = -1LL;
	int32_t x338 = 3267;
	static uint16_t x339 = UINT16_MAX;
	volatile uint32_t x340 = 302597876U;
	int32_t t84 = 313899;

    t84 = ((x337>x338)==(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	volatile uint64_t x343 = 542161604914915370LLU;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 47;

    t85 = ((x341>x342)==(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -1LL;
	volatile int16_t x347 = 760;
	static int16_t x348 = -209;
	int32_t t86 = 43114;

    t86 = ((x345>x346)==(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	int8_t x350 = -1;
	int64_t x351 = -118019LL;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -2410;

    t87 = ((x349>x350)==(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint8_t x354 = 5U;
	static volatile uint16_t x356 = UINT16_MAX;
	static int32_t t88 = 25659;

    t88 = ((x353>x354)==(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 21348464;
	uint64_t x358 = 2LLU;
	int16_t x359 = -1;
	int32_t x360 = 259;
	int32_t t89 = -48271;

    t89 = ((x357>x358)==(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	static int16_t x364 = 3;
	volatile int32_t t90 = 484412;

    t90 = ((x361>x362)==(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	uint64_t x367 = 537713421808085893LLU;
	uint64_t x368 = 64680034LLU;
	int32_t t91 = 12;

    t91 = ((x365>x366)==(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint64_t x370 = 3417885584193517LLU;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = -1384;
	static int32_t t92 = 269;

    t92 = ((x369>x370)==(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	volatile int8_t x374 = INT8_MAX;
	int32_t x375 = -1;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = -216883027;

    t93 = ((x373>x374)==(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -11LL;
	uint8_t x378 = 39U;
	int64_t x380 = INT64_MIN;

    t94 = ((x377>x378)==(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile uint8_t x383 = 0U;
	int8_t x384 = -1;
	int32_t t95 = -1221390;

    t95 = ((x381>x382)==(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -7;
	static uint32_t x386 = 374921U;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 1151200;

    t96 = ((x385>x386)==(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	static int64_t x392 = INT64_MIN;
	int32_t t97 = -3239626;

    t97 = ((x389>x390)==(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x394 = INT64_MAX;
	static int8_t x395 = INT8_MAX;
	volatile int32_t t98 = -58;

    t98 = ((x393>x394)==(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = 14165U;
	uint64_t x400 = 77054392LLU;
	int32_t t99 = 2447;

    t99 = ((x397>x398)==(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = 580934LL;
	int16_t x404 = -1;
	int32_t t100 = 57469;

    t100 = ((x401>x402)==(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = 7;
	int64_t x407 = INT64_MIN;

    t101 = ((x405>x406)==(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static uint8_t x410 = UINT8_MAX;
	volatile uint32_t x412 = UINT32_MAX;
	int32_t t102 = -98;

    t102 = ((x409>x410)==(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 55132557876468LL;
	uint32_t x414 = UINT32_MAX;
	static uint32_t x415 = 3489U;
	uint32_t x416 = 20898431U;
	static volatile int32_t t103 = 59;

    t103 = ((x413>x414)==(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MIN;
	static uint64_t x419 = 24408281852461213LLU;
	volatile int64_t x420 = INT64_MIN;
	volatile int32_t t104 = 2261631;

    t104 = ((x417>x418)==(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = 2U;
	volatile int64_t x424 = INT64_MAX;
	static volatile int32_t t105 = 1;

    t105 = ((x421>x422)==(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = INT32_MAX;
	uint16_t x426 = UINT16_MAX;
	static volatile uint32_t x427 = 8412681U;
	uint8_t x428 = 46U;
	volatile int32_t t106 = 11;

    t106 = ((x425>x426)==(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x429 = INT64_MIN;
	uint32_t x430 = 5406U;
	static int64_t x431 = INT64_MIN;
	static uint16_t x432 = 0U;
	int32_t t107 = 1673042;

    t107 = ((x429>x430)==(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x434 = UINT8_MAX;
	volatile uint8_t x435 = 39U;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t108 = -1423;

    t108 = ((x433>x434)==(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 16152459178LLU;
	int8_t x438 = INT8_MAX;
	uint16_t x439 = UINT16_MAX;
	int8_t x440 = 31;
	int32_t t109 = -1016839551;

    t109 = ((x437>x438)==(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 1;
	static volatile int8_t x442 = INT8_MIN;
	uint64_t x443 = 6128084999LLU;
	int32_t x444 = INT32_MIN;
	volatile int32_t t110 = 1177;

    t110 = ((x441>x442)==(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 0U;
	static int8_t x446 = 1;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = -1;

    t111 = ((x445>x446)==(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x450 = 49U;
	int64_t x451 = INT64_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t112 = 1;

    t112 = ((x449>x450)==(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 174LLU;
	volatile uint8_t x454 = UINT8_MAX;
	int64_t x455 = INT64_MIN;
	static int64_t x456 = INT64_MIN;
	int32_t t113 = -12;

    t113 = ((x453>x454)==(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -8705LL;
	uint64_t x458 = UINT64_MAX;
	volatile uint8_t x460 = 26U;

    t114 = ((x457>x458)==(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = -1;
	volatile int8_t x464 = -11;

    t115 = ((x461>x462)==(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -492540126449000LL;
	int64_t x466 = INT64_MIN;
	int16_t x468 = 11;
	int32_t t116 = 5059354;

    t116 = ((x465>x466)==(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 466LLU;
	volatile int32_t x470 = -1;
	uint16_t x471 = UINT16_MAX;
	volatile int8_t x472 = 35;
	volatile int32_t t117 = -10571743;

    t117 = ((x469>x470)==(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	int8_t x476 = -1;
	volatile int32_t t118 = -1;

    t118 = ((x473>x474)==(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 11985481U;
	static int8_t x479 = -58;
	int8_t x480 = -12;
	volatile int32_t t119 = -4655;

    t119 = ((x477>x478)==(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MIN;
	static int16_t x483 = INT16_MIN;
	uint32_t x484 = 170080888U;
	int32_t t120 = 475826;

    t120 = ((x481>x482)==(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	static int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	volatile int32_t t121 = -123;

    t121 = ((x485>x486)==(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = 7971335U;
	static int8_t x491 = -1;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 483998;

    t122 = ((x489>x490)==(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -1;
	volatile uint8_t x495 = 11U;
	static uint64_t x496 = UINT64_MAX;
	int32_t t123 = 7994;

    t123 = ((x493>x494)==(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	volatile int32_t x498 = -20347;
	volatile int64_t x499 = 427378215LL;
	int8_t x500 = -1;
	volatile int32_t t124 = -9881;

    t124 = ((x497>x498)==(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x501 = INT32_MIN;
	volatile int8_t x503 = 1;
	static volatile int32_t t125 = -3463;

    t125 = ((x501>x502)==(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	static uint64_t x506 = UINT64_MAX;
	static volatile int8_t x507 = INT8_MAX;
	volatile int32_t t126 = -23135;

    t126 = ((x505>x506)==(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x511 = 424U;
	int64_t x512 = -3654514LL;
	static volatile int32_t t127 = 0;

    t127 = ((x509>x510)==(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = -1;
	uint8_t x515 = UINT8_MAX;
	int32_t t128 = 6814653;

    t128 = ((x513>x514)==(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 491296207LLU;
	uint16_t x518 = UINT16_MAX;
	int64_t x520 = INT64_MAX;
	int32_t t129 = -65061;

    t129 = ((x517>x518)==(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 25U;
	static uint64_t x522 = 15LLU;
	int32_t x523 = -1;
	static uint32_t x524 = 359201U;
	volatile int32_t t130 = -48;

    t130 = ((x521>x522)==(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	volatile int8_t x526 = INT8_MIN;
	volatile int16_t x527 = -1;
	uint32_t x528 = UINT32_MAX;

    t131 = ((x525>x526)==(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	volatile int64_t x531 = -163924505LL;
	uint16_t x532 = 5897U;

    t132 = ((x529>x530)==(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = 3977325LLU;
	volatile int64_t x534 = 37682LL;
	volatile uint8_t x535 = 1U;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t133 = -1639575;

    t133 = ((x533>x534)==(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -63403;
	static int16_t x538 = INT16_MIN;
	uint32_t x539 = 241501302U;
	volatile uint8_t x540 = UINT8_MAX;

    t134 = ((x537>x538)==(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 2598423928636275LL;
	int32_t x543 = -22;
	static int32_t x544 = -1;
	volatile int32_t t135 = -230569752;

    t135 = ((x541>x542)==(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 7U;
	uint32_t x546 = 1U;
	static int8_t x547 = INT8_MAX;
	static int32_t t136 = -11876395;

    t136 = ((x545>x546)==(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MIN;
	static volatile int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MAX;
	static volatile int32_t t137 = -80791083;

    t137 = ((x549>x550)==(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 432495LLU;
	volatile int8_t x556 = INT8_MAX;
	volatile int32_t t138 = 98507859;

    t138 = ((x553>x554)==(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static int64_t x559 = INT64_MIN;
	volatile int32_t t139 = -3295;

    t139 = ((x557>x558)==(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MAX;
	int16_t x563 = INT16_MIN;
	volatile int16_t x564 = INT16_MIN;
	int32_t t140 = 6446;

    t140 = ((x561>x562)==(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = -628019114;
	int32_t x566 = -107846874;
	volatile int8_t x568 = 0;
	int32_t t141 = 1;

    t141 = ((x565>x566)==(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 6LLU;
	int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MAX;
	static int32_t t142 = 35;

    t142 = ((x569>x570)==(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = UINT8_MAX;
	volatile uint16_t x574 = UINT16_MAX;
	int8_t x575 = -1;
	static volatile int32_t t143 = 9226;

    t143 = ((x573>x574)==(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x577 = UINT8_MAX;
	int32_t x578 = INT32_MIN;
	volatile uint32_t x579 = UINT32_MAX;
	volatile int16_t x580 = INT16_MIN;
	int32_t t144 = 460931777;

    t144 = ((x577>x578)==(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = UINT64_MAX;
	int64_t x582 = -1LL;
	int16_t x583 = 71;
	volatile int32_t t145 = -434615305;

    t145 = ((x581>x582)==(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = INT64_MIN;
	uint8_t x587 = UINT8_MAX;
	int16_t x588 = INT16_MIN;
	int32_t t146 = 1898;

    t146 = ((x585>x586)==(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = INT16_MIN;
	uint8_t x592 = 108U;
	int32_t t147 = -8;

    t147 = ((x589>x590)==(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 3002857983976LLU;
	volatile int8_t x594 = INT8_MAX;
	int64_t x595 = INT64_MAX;
	int16_t x596 = INT16_MIN;

    t148 = ((x593>x594)==(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = -12987;
	volatile uint16_t x598 = 0U;
	uint32_t x599 = 59364U;
	volatile int32_t t149 = 2327;

    t149 = ((x597>x598)==(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 3U;
	int16_t x604 = -1;
	int32_t t150 = -93537;

    t150 = ((x601>x602)==(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int8_t x606 = -1;
	int16_t x607 = -1;
	static uint64_t x608 = UINT64_MAX;
	int32_t t151 = 2;

    t151 = ((x605>x606)==(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x611 = INT64_MIN;
	int32_t t152 = 14188545;

    t152 = ((x609>x610)==(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = 0U;
	volatile int16_t x614 = INT16_MIN;
	static int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -1276002;

    t153 = ((x613>x614)==(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = INT64_MAX;
	uint16_t x618 = UINT16_MAX;
	uint8_t x619 = UINT8_MAX;
	uint64_t x620 = 441969494981LLU;
	volatile int32_t t154 = -7;

    t154 = ((x617>x618)==(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -1LL;
	uint8_t x622 = UINT8_MAX;
	static int64_t x623 = -1295LL;
	static volatile int32_t t155 = 4792;

    t155 = ((x621>x622)==(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -1LL;
	uint8_t x627 = 5U;
	int32_t x628 = INT32_MAX;
	volatile int32_t t156 = 60523373;

    t156 = ((x625>x626)==(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = -1;
	int64_t x630 = INT64_MAX;
	uint16_t x631 = 8730U;
	static int32_t x632 = -26894;

    t157 = ((x629>x630)==(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	volatile int32_t x635 = INT32_MAX;
	static volatile int32_t t158 = 7;

    t158 = ((x633>x634)==(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 5U;
	int16_t x638 = -1;
	int8_t x639 = -3;
	int32_t x640 = INT32_MIN;
	int32_t t159 = -98321;

    t159 = ((x637>x638)==(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	volatile uint64_t x642 = 1041673409LLU;
	static volatile int32_t t160 = -45503378;

    t160 = ((x641>x642)==(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x648 = -1;
	volatile int32_t t161 = -54798;

    t161 = ((x645>x646)==(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -2345971;
	volatile int64_t x651 = -1LL;
	uint64_t x652 = 35876018450805985LLU;
	static volatile int32_t t162 = -23;

    t162 = ((x649>x650)==(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	static int8_t x654 = -50;
	volatile uint16_t x655 = 7392U;
	static int32_t x656 = -1;
	int32_t t163 = -90155;

    t163 = ((x653>x654)==(x655!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 2U;
	int64_t x658 = 31331LL;
	int16_t x659 = INT16_MIN;
	volatile int32_t t164 = -243;

    t164 = ((x657>x658)==(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MIN;
	static volatile int16_t x664 = INT16_MAX;
	static volatile int32_t t165 = -7874;

    t165 = ((x661>x662)==(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 1LLU;
	volatile int8_t x666 = 3;
	static int16_t x667 = 4775;
	int8_t x668 = -1;
	volatile int32_t t166 = -3634;

    t166 = ((x665>x666)==(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = 1;
	uint16_t x670 = 5051U;
	volatile uint8_t x671 = UINT8_MAX;
	static int16_t x672 = INT16_MIN;
	static int32_t t167 = -1166343;

    t167 = ((x669>x670)==(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	static volatile int64_t x676 = 121728578222709LL;
	volatile int32_t t168 = -509;

    t168 = ((x673>x674)==(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x677 = 25370U;
	int16_t x678 = -1;
	int16_t x679 = INT16_MIN;

    t169 = ((x677>x678)==(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x682 = 420U;
	int32_t x684 = INT32_MAX;

    t170 = ((x681>x682)==(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	volatile int64_t x686 = -365901117LL;
	int16_t x688 = INT16_MAX;
	int32_t t171 = 857549;

    t171 = ((x685>x686)==(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MAX;
	int32_t x691 = INT32_MIN;
	int8_t x692 = -1;
	static int32_t t172 = 1;

    t172 = ((x689>x690)==(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 791235036854LLU;
	int8_t x694 = 23;

    t173 = ((x693>x694)==(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x698 = INT64_MIN;
	volatile int32_t t174 = -18;

    t174 = ((x697>x698)==(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = 54;
	volatile int32_t t175 = 9138;

    t175 = ((x701>x702)==(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x706 = -1;
	volatile int64_t x707 = -1LL;
	uint16_t x708 = 1U;
	volatile int32_t t176 = 40035037;

    t176 = ((x705>x706)==(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	uint64_t x711 = 20130140LLU;
	int16_t x712 = INT16_MAX;
	volatile int32_t t177 = 1892871;

    t177 = ((x709>x710)==(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -39;
	uint8_t x714 = UINT8_MAX;
	volatile uint64_t x716 = 2253574053LLU;
	volatile int32_t t178 = -38;

    t178 = ((x713>x714)==(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x720 = INT32_MIN;
	static volatile int32_t t179 = -3;

    t179 = ((x717>x718)==(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = -1;
	int8_t x722 = -1;
	int64_t x723 = -1LL;
	uint8_t x724 = 7U;
	int32_t t180 = 1;

    t180 = ((x721>x722)==(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	uint8_t x726 = UINT8_MAX;
	int16_t x728 = INT16_MIN;

    t181 = ((x725>x726)==(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = 4940901595195LL;
	uint64_t x731 = 66138243652370014LLU;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = 732640142;

    t182 = ((x729>x730)==(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	int64_t x735 = -4471920694513383453LL;
	volatile int32_t t183 = -1190932;

    t183 = ((x733>x734)==(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x738 = INT16_MIN;
	volatile int16_t x739 = -1298;

    t184 = ((x737>x738)==(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = -10;
	static int16_t x743 = -10;
	int8_t x744 = -1;
	static int32_t t185 = 406941;

    t185 = ((x741>x742)==(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MAX;
	int32_t x746 = -1;
	int8_t x747 = INT8_MIN;
	int8_t x748 = -1;
	int32_t t186 = -881773059;

    t186 = ((x745>x746)==(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint32_t x750 = UINT32_MAX;
	int8_t x751 = -1;
	volatile int32_t t187 = -81796;

    t187 = ((x749>x750)==(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = -1;
	static uint64_t x754 = 6209010LLU;
	static int16_t x755 = -1;
	static int64_t x756 = INT64_MIN;
	int32_t t188 = 571;

    t188 = ((x753>x754)==(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = -16971346;
	int8_t x759 = INT8_MAX;
	static int64_t x760 = 7871920231914165LL;
	static int32_t t189 = 0;

    t189 = ((x757>x758)==(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x762 = UINT16_MAX;
	static uint32_t x763 = UINT32_MAX;
	uint8_t x764 = 14U;

    t190 = ((x761>x762)==(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x765 = INT32_MIN;
	int64_t x766 = INT64_MIN;
	static int64_t x767 = INT64_MIN;
	uint64_t x768 = UINT64_MAX;
	int32_t t191 = 145010;

    t191 = ((x765>x766)==(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = UINT8_MAX;
	int64_t x771 = INT64_MIN;
	int32_t x772 = INT32_MIN;
	int32_t t192 = 438;

    t192 = ((x769>x770)==(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x775 = UINT64_MAX;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t193 = 238348331;

    t193 = ((x773>x774)==(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	static int32_t x778 = INT32_MIN;
	int64_t x780 = -11878861579449LL;
	volatile int32_t t194 = -3731059;

    t194 = ((x777>x778)==(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x781 = 938U;
	int32_t x782 = -68093;
	int8_t x783 = INT8_MIN;
	int32_t x784 = -3953;
	volatile int32_t t195 = 4747;

    t195 = ((x781>x782)==(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MAX;
	uint8_t x786 = 12U;
	uint32_t x787 = UINT32_MAX;
	int32_t t196 = 200521729;

    t196 = ((x785>x786)==(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x790 = UINT8_MAX;
	volatile int32_t t197 = -264;

    t197 = ((x789>x790)==(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = -736;
	uint16_t x794 = UINT16_MAX;
	int8_t x796 = -1;
	volatile int32_t t198 = 1726;

    t198 = ((x793>x794)==(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 6U;
	uint16_t x798 = 5475U;
	static volatile int32_t x799 = INT32_MIN;
	static volatile int64_t x800 = INT64_MIN;

    t199 = ((x797>x798)==(x799!=x800));

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

