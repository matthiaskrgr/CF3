
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

int8_t x4 = INT8_MIN;
volatile int16_t x5 = INT16_MAX;
static int64_t x8 = INT64_MAX;
static uint64_t x9 = 0LLU;
volatile int64_t x10 = 4119442489775569LL;
uint16_t x16 = UINT16_MAX;
int64_t x29 = -44265907LL;
int64_t x35 = INT64_MAX;
int8_t x41 = 7;
uint16_t x44 = 31741U;
static volatile int64_t x49 = INT64_MIN;
int16_t x50 = INT16_MIN;
static volatile int32_t t12 = -22261;
int64_t x56 = INT64_MAX;
uint16_t x59 = 13U;
static uint32_t x71 = 466549U;
static int8_t x72 = -1;
uint8_t x75 = 62U;
static int64_t x80 = INT64_MIN;
volatile int32_t t19 = -1504;
int16_t x90 = INT16_MAX;
int16_t x92 = -1;
static int64_t x98 = 123052LL;
uint16_t x104 = UINT16_MAX;
volatile int16_t x105 = 4;
static volatile int16_t x109 = INT16_MIN;
uint32_t x114 = 53157665U;
volatile int16_t x125 = 0;
int8_t x128 = INT8_MIN;
volatile uint64_t x130 = 453LLU;
uint32_t x132 = 174701052U;
int32_t t32 = 4575168;
int32_t x135 = INT32_MIN;
uint32_t x137 = UINT32_MAX;
int64_t x141 = INT64_MIN;
int32_t x147 = 152462666;
volatile int8_t x149 = INT8_MIN;
int32_t t38 = 735;
volatile int32_t x157 = INT32_MIN;
volatile int8_t x160 = INT8_MIN;
int32_t x165 = INT32_MIN;
volatile int32_t t41 = 195534279;
static int16_t x174 = INT16_MIN;
int32_t x179 = INT32_MAX;
int64_t x183 = -1LL;
volatile int32_t x186 = INT32_MAX;
int8_t x187 = INT8_MIN;
int32_t t47 = -1944231;
int32_t x195 = 23554;
int8_t x197 = 0;
volatile int8_t x199 = INT8_MIN;
volatile int32_t x200 = -70574;
volatile uint64_t x204 = 167635079834153LLU;
int64_t x208 = INT64_MIN;
int8_t x211 = -13;
uint16_t x212 = UINT16_MAX;
uint16_t x220 = UINT16_MAX;
static int32_t t54 = 0;
uint16_t x223 = 887U;
volatile int64_t x226 = 10589397073LL;
volatile int32_t t57 = -41;
int64_t x233 = INT64_MAX;
static int8_t x234 = INT8_MAX;
volatile uint32_t x236 = 27271132U;
int16_t x237 = INT16_MAX;
int8_t x240 = INT8_MIN;
uint16_t x245 = UINT16_MAX;
int16_t x249 = -1;
int16_t x251 = 64;
int8_t x253 = -1;
uint64_t x255 = 17934719331837LLU;
uint16_t x257 = UINT16_MAX;
int32_t t64 = -1065492;
int16_t x273 = -1;
int64_t x276 = INT64_MIN;
int32_t x279 = -1;
uint8_t x281 = 1U;
int32_t t70 = 1;
static uint64_t x286 = 0LLU;
int64_t x289 = -86387090LL;
int16_t x290 = INT16_MIN;
uint32_t x291 = UINT32_MAX;
volatile int8_t x292 = -12;
volatile int16_t x303 = -4417;
int8_t x305 = INT8_MAX;
static uint64_t x317 = 13621691334LLU;
volatile uint8_t x320 = 39U;
volatile int32_t t80 = -36733204;
uint32_t x325 = 4662U;
static uint64_t x342 = 104380069239LLU;
volatile uint8_t x344 = 62U;
static uint32_t x352 = UINT32_MAX;
static volatile uint8_t x358 = 4U;
int64_t x360 = -1LL;
int16_t x363 = INT16_MIN;
static volatile uint16_t x365 = 0U;
static volatile int8_t x369 = INT8_MIN;
uint32_t x378 = 507U;
int8_t x383 = -12;
int32_t t95 = 0;
int16_t x388 = 15;
static volatile int32_t x396 = -1;
uint64_t x397 = 2219240958052743LLU;
uint64_t x400 = 2LLU;
int32_t t99 = 7805;
int16_t x406 = INT16_MIN;
static int32_t x407 = INT32_MAX;
int32_t t101 = -764933142;
int16_t x409 = 2304;
int16_t x415 = 93;
int32_t x417 = 2;
int16_t x424 = INT16_MIN;
int32_t t105 = 268;
uint32_t x425 = 21U;
volatile int8_t x432 = INT8_MIN;
volatile uint16_t x437 = UINT16_MAX;
static volatile int64_t x440 = INT64_MAX;
static int32_t x443 = INT32_MIN;
int64_t x452 = 0LL;
static volatile int16_t x458 = INT16_MIN;
volatile int32_t t114 = 911;
volatile uint32_t x466 = 97U;
static volatile int64_t x469 = 0LL;
uint16_t x471 = UINT16_MAX;
int16_t x475 = INT16_MIN;
static int32_t t120 = 477797316;
volatile uint64_t x489 = 699LLU;
int32_t x493 = 0;
int16_t x499 = INT16_MAX;
volatile int32_t t124 = -46;
uint64_t x508 = 3157214976245513LLU;
int64_t x513 = INT64_MIN;
int16_t x520 = INT16_MIN;
volatile int16_t x522 = -1;
int32_t t130 = 108438;
int8_t x528 = 1;
int32_t x530 = INT32_MIN;
int64_t x539 = 35319098LL;
int8_t x541 = INT8_MAX;
uint8_t x546 = UINT8_MAX;
volatile uint64_t x550 = 0LLU;
static volatile int32_t t138 = 50726;
uint32_t x566 = UINT32_MAX;
static int32_t x568 = -1;
uint16_t x576 = 1U;
volatile int32_t t144 = -844377;
volatile int8_t x588 = -1;
volatile int32_t x592 = -48;
volatile uint64_t x597 = UINT64_MAX;
int8_t x602 = INT8_MAX;
static int32_t x606 = -769024643;
static uint64_t x617 = 885580LLU;
int32_t x621 = -1;
int64_t x624 = 257755549288473732LL;
volatile int32_t t157 = -28306;
volatile int64_t x634 = INT64_MIN;
volatile uint16_t x645 = UINT16_MAX;
uint64_t x652 = 149536612156LLU;
uint64_t x655 = 8233LLU;
volatile int32_t t163 = 11;
int16_t x660 = 1164;
int32_t t165 = -114105943;
uint32_t x665 = 41U;
int64_t x667 = INT64_MIN;
int32_t t166 = 1517;
uint32_t x672 = 34539961U;
static volatile int32_t t167 = -730482377;
volatile uint64_t x676 = 60123352306508LLU;
int32_t x680 = -8;
volatile int32_t t169 = -301;
uint32_t x681 = UINT32_MAX;
int16_t x685 = INT16_MAX;
static int64_t x689 = -14870LL;
static volatile int32_t t173 = 29;
int64_t x704 = INT64_MAX;
static int32_t t175 = 24727;
uint64_t x708 = UINT64_MAX;
uint64_t x713 = 61776545LLU;
int8_t x714 = INT8_MIN;
uint32_t x715 = UINT32_MAX;
int8_t x719 = 1;
volatile uint64_t x723 = 148556LLU;
uint64_t x730 = 985047LLU;
uint8_t x744 = 3U;
uint8_t x746 = 6U;
int32_t x747 = INT32_MIN;
static int32_t x748 = INT32_MIN;
volatile int64_t x750 = 20774LL;
uint16_t x751 = UINT16_MAX;
int16_t x763 = INT16_MIN;
uint16_t x765 = 1290U;
static volatile int8_t x766 = INT8_MIN;
uint16_t x767 = 0U;
volatile int32_t x769 = 0;
int16_t x773 = -1;
uint8_t x774 = UINT8_MAX;
int32_t x779 = -1;
uint16_t x787 = UINT16_MAX;
volatile uint16_t x788 = UINT16_MAX;
uint32_t x791 = UINT32_MAX;
static uint64_t x792 = 19377500426952833LLU;
static volatile int16_t x796 = -286;
int64_t x799 = INT64_MIN;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	int32_t x3 = -46178270;
	int32_t t0 = -7046;

    t0 = ((x1>x2)==(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = 35;
	int64_t x7 = -523080174LL;
	int32_t t1 = -1102;

    t1 = ((x5>x6)==(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = UINT16_MAX;
	int16_t x12 = -8;
	static volatile int32_t t2 = -105935259;

    t2 = ((x9>x10)==(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static uint64_t x14 = UINT64_MAX;
	uint8_t x15 = 82U;
	int32_t t3 = 66053302;

    t3 = ((x13>x14)==(x15|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MAX;
	static int32_t x19 = INT32_MIN;
	int32_t x20 = -1;
	int32_t t4 = -117982308;

    t4 = ((x17>x18)==(x19|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 590996U;
	int64_t x22 = INT64_MAX;
	volatile uint32_t x23 = 2089469U;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t5 = 425;

    t5 = ((x21>x22)==(x23|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 2LLU;
	static volatile int16_t x26 = 34;
	int64_t x27 = INT64_MAX;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -164224496;

    t6 = ((x25>x26)==(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 300283283364886014LLU;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 114430274531LLU;
	volatile int32_t t7 = 0;

    t7 = ((x29>x30)==(x31|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = -1;
	volatile uint16_t x36 = 16U;
	int32_t t8 = -61342;

    t8 = ((x33>x34)==(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MAX;
	static int8_t x38 = -1;
	int32_t x39 = 109;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -57;

    t9 = ((x37>x38)==(x39|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = UINT16_MAX;
	uint16_t x43 = UINT16_MAX;
	static int32_t t10 = 53553;

    t10 = ((x41>x42)==(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -236860935LL;
	int16_t x46 = -25;
	uint8_t x47 = 9U;
	uint64_t x48 = 125699LLU;
	volatile int32_t t11 = -73;

    t11 = ((x45>x46)==(x47|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x51 = -1;
	int32_t x52 = -357080714;

    t12 = ((x49>x50)==(x51|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = 54U;
	volatile int32_t t13 = -6;

    t13 = ((x53>x54)==(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = -1;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = -202774;

    t14 = ((x57>x58)==(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 81U;
	volatile int8_t x62 = -26;
	volatile int16_t x63 = 5090;
	static int64_t x64 = -1LL;
	volatile int32_t t15 = 18984;

    t15 = ((x61>x62)==(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	int64_t x68 = -7LL;
	volatile int32_t t16 = -49;

    t16 = ((x65>x66)==(x67|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int8_t x70 = 1;
	volatile int32_t t17 = 509270678;

    t17 = ((x69>x70)==(x71|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 84887;
	int32_t x74 = INT32_MIN;
	static volatile int8_t x76 = -1;
	int32_t t18 = 21;

    t18 = ((x73>x74)==(x75|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 2099259346562LLU;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 748U;

    t19 = ((x77>x78)==(x79|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 1223U;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = 2766;
	int32_t x84 = 164265;
	volatile int32_t t20 = 330761;

    t20 = ((x81>x82)==(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	volatile int32_t x86 = 1;
	uint32_t x87 = 442215U;
	uint8_t x88 = 21U;
	int32_t t21 = 988;

    t21 = ((x85>x86)==(x87|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int16_t x91 = -1;
	int32_t t22 = -390650;

    t22 = ((x89>x90)==(x91|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -66686302;
	static volatile int32_t x94 = -1;
	int64_t x95 = -3LL;
	uint64_t x96 = 6954777202053171615LLU;
	volatile int32_t t23 = 226410292;

    t23 = ((x93>x94)==(x95|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = 0;
	volatile uint64_t x99 = 920496LLU;
	uint64_t x100 = 4LLU;
	volatile int32_t t24 = -36180257;

    t24 = ((x97>x98)==(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -1;
	volatile int16_t x102 = INT16_MAX;
	static uint8_t x103 = UINT8_MAX;
	int32_t t25 = -441469230;

    t25 = ((x101>x102)==(x103|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x106 = 0U;
	int64_t x107 = INT64_MAX;
	int64_t x108 = INT64_MAX;
	int32_t t26 = -4182;

    t26 = ((x105>x106)==(x107|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = 0U;
	volatile int32_t x111 = -2281584;
	static uint32_t x112 = 14461670U;
	int32_t t27 = -58737928;

    t27 = ((x109>x110)==(x111|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	static int8_t x115 = -1;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -139416593;

    t28 = ((x113>x114)==(x115|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 467586431;

    t29 = ((x117>x118)==(x119|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	volatile int64_t x123 = -30768196LL;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -3224;

    t30 = ((x121>x122)==(x123|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	int32_t t31 = -1006;

    t31 = ((x125>x126)==(x127|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 0U;
	uint16_t x131 = 361U;

    t32 = ((x129>x130)==(x131|x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 28;
	int64_t x134 = INT64_MIN;
	volatile uint8_t x136 = 107U;
	volatile int32_t t33 = -15;

    t33 = ((x133>x134)==(x135|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = -1;
	static int32_t x139 = 64614;
	uint32_t x140 = 23414076U;
	volatile int32_t t34 = -1917;

    t34 = ((x137>x138)==(x139|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = -397391218819LL;
	static int16_t x143 = 754;
	static int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -895864;

    t35 = ((x141>x142)==(x143|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 9U;
	static int8_t x146 = 1;
	uint64_t x148 = 3028564227LLU;
	volatile int32_t t36 = 6140684;

    t36 = ((x145>x146)==(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = INT64_MIN;
	volatile uint32_t x151 = 22118553U;
	volatile uint16_t x152 = 481U;
	static int32_t t37 = 9505;

    t37 = ((x149>x150)==(x151|x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	uint32_t x154 = 30575456U;
	volatile int16_t x155 = INT16_MAX;
	int32_t x156 = -6711;

    t38 = ((x153>x154)==(x155|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = 12082723868121LLU;
	int16_t x159 = 10;
	static int32_t t39 = 7;

    t39 = ((x157>x158)==(x159|x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = 8U;
	int16_t x163 = INT16_MIN;
	int16_t x164 = 2624;
	int32_t t40 = -65578387;

    t40 = ((x161>x162)==(x163|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x166 = -203;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;

    t41 = ((x165>x166)==(x167|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x169 = INT8_MIN;
	volatile uint64_t x170 = 78667403562LLU;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 861064379LLU;
	static int32_t t42 = -5220;

    t42 = ((x169>x170)==(x171|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 10;
	static int16_t x175 = -31;
	uint64_t x176 = UINT64_MAX;
	static volatile int32_t t43 = 1904;

    t43 = ((x173>x174)==(x175|x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MAX;
	static volatile int16_t x178 = INT16_MAX;
	int32_t x180 = 3;
	int32_t t44 = -510;

    t44 = ((x177>x178)==(x179|x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 8U;
	int64_t x182 = -1LL;
	volatile int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = -7985780;

    t45 = ((x181>x182)==(x183|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = INT64_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 87074;

    t46 = ((x185>x186)==(x187|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	volatile int8_t x190 = INT8_MIN;
	volatile int64_t x191 = -1LL;
	int8_t x192 = INT8_MIN;

    t47 = ((x189>x190)==(x191|x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = UINT16_MAX;
	uint16_t x194 = 370U;
	volatile int16_t x196 = 1;
	volatile int32_t t48 = -11306;

    t48 = ((x193>x194)==(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -1LL;
	int32_t t49 = -25628851;

    t49 = ((x197>x198)==(x199|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -243892515;
	uint8_t x202 = 3U;
	int64_t x203 = INT64_MAX;
	int32_t t50 = -62562;

    t50 = ((x201>x202)==(x203|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = 149913696U;
	static uint16_t x206 = 7961U;
	static int8_t x207 = 1;
	volatile int32_t t51 = -23;

    t51 = ((x205>x206)==(x207|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 19256962529LLU;
	int64_t x210 = INT64_MIN;
	int32_t t52 = -168;

    t52 = ((x209>x210)==(x211|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = 1362009072U;
	int64_t x215 = -1LL;
	static int32_t x216 = -2;
	int32_t t53 = 196755367;

    t53 = ((x213>x214)==(x215|x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	volatile int64_t x218 = -245541842LL;
	int64_t x219 = -91937571930332102LL;

    t54 = ((x217>x218)==(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x224 = 14;
	int32_t t55 = 93;

    t55 = ((x221>x222)==(x223|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 358882LLU;
	volatile int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MAX;
	int32_t t56 = -39824;

    t56 = ((x225>x226)==(x227|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -50327855597836LL;
	static volatile uint64_t x230 = UINT64_MAX;
	static volatile int8_t x231 = -3;
	uint64_t x232 = 2454301488202507622LLU;

    t57 = ((x229>x230)==(x231|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 264070494;

    t58 = ((x233>x234)==(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	int32_t t59 = 7910;

    t59 = ((x237>x238)==(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -6;
	int16_t x242 = INT16_MIN;
	static int64_t x243 = INT64_MAX;
	int8_t x244 = 3;
	volatile int32_t t60 = 30480;

    t60 = ((x241>x242)==(x243|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = 1552473156LL;
	int32_t x247 = -1;
	static volatile int64_t x248 = -6653343333LL;
	volatile int32_t t61 = -1413;

    t61 = ((x245>x246)==(x247|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MAX;
	volatile uint16_t x252 = 18U;
	static volatile int32_t t62 = 0;

    t62 = ((x249>x250)==(x251|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x254 = -3;
	static volatile int8_t x256 = 1;
	int32_t t63 = -277850;

    t63 = ((x253>x254)==(x255|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = UINT8_MAX;
	static int8_t x260 = INT8_MIN;

    t64 = ((x257>x258)==(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = 3U;
	volatile int64_t x262 = INT64_MAX;
	uint32_t x263 = 20048U;
	uint32_t x264 = 6U;
	volatile int32_t t65 = -184;

    t65 = ((x261>x262)==(x263|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint16_t x266 = 3200U;
	static uint32_t x267 = 13U;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 704744;

    t66 = ((x265>x266)==(x267|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1772LL;
	int64_t x270 = -1LL;
	volatile int8_t x271 = 25;
	static uint16_t x272 = 6U;
	static volatile int32_t t67 = 17414;

    t67 = ((x269>x270)==(x271|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x274 = 8569446797198555LLU;
	int8_t x275 = -1;
	volatile int32_t t68 = -62571;

    t68 = ((x273>x274)==(x275|x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = -1LL;
	uint16_t x278 = 88U;
	int64_t x280 = INT64_MAX;
	volatile int32_t t69 = 1;

    t69 = ((x277>x278)==(x279|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MIN;
	static int16_t x283 = 435;
	int16_t x284 = INT16_MAX;

    t70 = ((x281>x282)==(x283|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int64_t x287 = -1LL;
	int8_t x288 = INT8_MIN;
	static int32_t t71 = 41408477;

    t71 = ((x285>x286)==(x287|x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t t72 = 162299;

    t72 = ((x289>x290)==(x291|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = 3275737U;
	static volatile uint8_t x294 = 1U;
	uint16_t x295 = UINT16_MAX;
	static uint32_t x296 = 242U;
	volatile int32_t t73 = 9768294;

    t73 = ((x293>x294)==(x295|x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MAX;
	int16_t x300 = -1;
	int32_t t74 = -1583;

    t74 = ((x297>x298)==(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 81254U;
	int64_t x302 = 4001354876907LL;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 6800;

    t75 = ((x301>x302)==(x303|x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MAX;
	static int32_t x307 = 2;
	uint32_t x308 = 11741U;
	int32_t t76 = 0;

    t76 = ((x305>x306)==(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = -6232;
	static int32_t x312 = INT32_MAX;
	static int32_t t77 = -7255694;

    t77 = ((x309>x310)==(x311|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	volatile int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	uint16_t x316 = 0U;
	int32_t t78 = -27205979;

    t78 = ((x313>x314)==(x315|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = INT64_MIN;
	static int64_t x319 = -2020390LL;
	volatile int32_t t79 = -57850;

    t79 = ((x317>x318)==(x319|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = 4U;
	uint64_t x322 = 623601217549473305LLU;
	int64_t x323 = 9LL;
	int64_t x324 = 1156652LL;

    t80 = ((x321>x322)==(x323|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	uint8_t x327 = 9U;
	int32_t x328 = 14;
	int32_t t81 = -187169929;

    t81 = ((x325>x326)==(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 2022163230353190LLU;
	volatile int8_t x330 = -1;
	uint64_t x331 = 2530678181LLU;
	static int64_t x332 = INT64_MAX;
	volatile int32_t t82 = 3;

    t82 = ((x329>x330)==(x331|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 840454U;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 41251;

    t83 = ((x333>x334)==(x335|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 2764123087418161399LL;
	uint8_t x338 = 1U;
	int8_t x339 = INT8_MAX;
	volatile int64_t x340 = INT64_MIN;
	int32_t t84 = 5503220;

    t84 = ((x337>x338)==(x339|x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MIN;
	uint32_t x343 = 160125U;
	volatile int32_t t85 = -1136;

    t85 = ((x341>x342)==(x343|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	int8_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	static int32_t t86 = 1041670;

    t86 = ((x345>x346)==(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int64_t x350 = -2375LL;
	uint8_t x351 = 1U;
	volatile int32_t t87 = 529;

    t87 = ((x349>x350)==(x351|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	uint32_t x354 = 91328U;
	uint8_t x355 = UINT8_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	volatile int32_t t88 = 13287;

    t88 = ((x353>x354)==(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 61;
	int16_t x359 = -1;
	int32_t t89 = -239874;

    t89 = ((x357>x358)==(x359|x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	static uint8_t x362 = UINT8_MAX;
	uint16_t x364 = 23U;
	static int32_t t90 = -16075885;

    t90 = ((x361>x362)==(x363|x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x366 = -1;
	int8_t x367 = 0;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 45;

    t91 = ((x365>x366)==(x367|x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MAX;
	static int16_t x371 = INT16_MIN;
	static int32_t x372 = -1;
	int32_t t92 = 1;

    t92 = ((x369>x370)==(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = 27605872LL;
	int32_t x374 = 38;
	uint32_t x375 = 2226U;
	int8_t x376 = INT8_MIN;
	static int32_t t93 = 419879314;

    t93 = ((x373>x374)==(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	volatile uint16_t x379 = 0U;
	static volatile int32_t x380 = INT32_MAX;
	volatile int32_t t94 = -37692;

    t94 = ((x377>x378)==(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 57848481904771001LLU;
	int16_t x382 = -1381;
	volatile int32_t x384 = INT32_MAX;

    t95 = ((x381>x382)==(x383|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	volatile int16_t x386 = INT16_MAX;
	volatile int8_t x387 = INT8_MIN;
	volatile int32_t t96 = 1413;

    t96 = ((x385>x386)==(x387|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MAX;
	static int16_t x390 = -1;
	int32_t x391 = -1;
	uint32_t x392 = 12U;
	int32_t t97 = 4;

    t97 = ((x389>x390)==(x391|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	volatile int8_t x394 = -1;
	static uint8_t x395 = 70U;
	volatile int32_t t98 = 5;

    t98 = ((x393>x394)==(x395|x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = 25;
	int8_t x399 = INT8_MIN;

    t99 = ((x397>x398)==(x399|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	volatile int16_t x402 = -1;
	static int32_t x403 = INT32_MIN;
	volatile int32_t x404 = 92;
	static int32_t t100 = 2352;

    t100 = ((x401>x402)==(x403|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = UINT32_MAX;
	int16_t x408 = INT16_MIN;

    t101 = ((x405>x406)==(x407|x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x410 = 31562543933354400LLU;
	int16_t x411 = -5;
	int16_t x412 = INT16_MIN;
	volatile int32_t t102 = -1;

    t102 = ((x409>x410)==(x411|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	uint16_t x414 = 60U;
	static uint64_t x416 = 10331406LLU;
	volatile int32_t t103 = -3;

    t103 = ((x413>x414)==(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = -1;
	int32_t t104 = 503636370;

    t104 = ((x417>x418)==(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;

    t105 = ((x421>x422)==(x423|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x426 = 86;
	volatile int8_t x427 = 1;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t106 = 409373374;

    t106 = ((x425>x426)==(x427|x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -40;
	int32_t x430 = -1;
	static uint64_t x431 = 15279LLU;
	static int32_t t107 = 0;

    t107 = ((x429>x430)==(x431|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = -1;
	int32_t t108 = -854975;

    t108 = ((x433>x434)==(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 0LLU;
	uint8_t x439 = UINT8_MAX;
	int32_t t109 = 35754;

    t109 = ((x437>x438)==(x439|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 1;
	int8_t x442 = INT8_MAX;
	int16_t x444 = INT16_MIN;
	static int32_t t110 = -1;

    t110 = ((x441>x442)==(x443|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -7416093;
	static volatile uint16_t x446 = 4U;
	int64_t x447 = 1058612006465784053LL;
	volatile uint16_t x448 = UINT16_MAX;
	int32_t t111 = -26662788;

    t111 = ((x445>x446)==(x447|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x450 = 700345;
	static int32_t x451 = -1;
	volatile int32_t t112 = 106877212;

    t112 = ((x449>x450)==(x451|x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MAX;
	volatile int64_t x454 = INT64_MIN;
	volatile int64_t x455 = -2031416088971LL;
	volatile int64_t x456 = -1LL;
	volatile int32_t t113 = -40;

    t113 = ((x453>x454)==(x455|x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x459 = 4726622849LL;
	uint64_t x460 = 195554844LLU;

    t114 = ((x457>x458)==(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = INT8_MIN;
	volatile int8_t x462 = INT8_MIN;
	static volatile int32_t x463 = 132619605;
	static uint16_t x464 = 3640U;
	volatile int32_t t115 = 3731533;

    t115 = ((x461>x462)==(x463|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = UINT32_MAX;
	int64_t x467 = INT64_MAX;
	int16_t x468 = INT16_MIN;
	int32_t t116 = -3670193;

    t116 = ((x465>x466)==(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = INT64_MIN;
	int32_t x472 = -1;
	static volatile int32_t t117 = 13917;

    t117 = ((x469>x470)==(x471|x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 13U;
	static int8_t x474 = INT8_MAX;
	volatile int8_t x476 = -3;
	int32_t t118 = 162221;

    t118 = ((x473>x474)==(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MAX;
	uint32_t x480 = 2963U;
	volatile int32_t t119 = -655830232;

    t119 = ((x477>x478)==(x479|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MAX;
	static uint64_t x484 = 6752051918146LLU;

    t120 = ((x481>x482)==(x483|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = -1LL;
	int8_t x486 = INT8_MAX;
	int16_t x487 = 2768;
	uint64_t x488 = 13432LLU;
	int32_t t121 = -222;

    t121 = ((x485>x486)==(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = -297273521;
	static volatile int32_t x491 = 84409;
	static int16_t x492 = 7;
	static volatile int32_t t122 = -857578;

    t122 = ((x489>x490)==(x491|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x494 = UINT8_MAX;
	int8_t x495 = -36;
	int64_t x496 = INT64_MAX;
	volatile int32_t t123 = -187;

    t123 = ((x493>x494)==(x495|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x497 = UINT64_MAX;
	uint32_t x498 = 1608765067U;
	static int8_t x500 = INT8_MIN;

    t124 = ((x497>x498)==(x499|x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = -14723206853759LL;
	int8_t x502 = 54;
	static volatile int64_t x503 = -1LL;
	static int8_t x504 = INT8_MAX;
	volatile int32_t t125 = -419;

    t125 = ((x501>x502)==(x503|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 55484097U;
	uint8_t x506 = 1U;
	uint8_t x507 = 16U;
	volatile int32_t t126 = -106;

    t126 = ((x505>x506)==(x507|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	static uint64_t x510 = UINT64_MAX;
	volatile int16_t x511 = INT16_MAX;
	static volatile int8_t x512 = INT8_MAX;
	volatile int32_t t127 = -303;

    t127 = ((x509>x510)==(x511|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = 0;
	volatile int64_t x515 = INT64_MIN;
	uint32_t x516 = 1U;
	volatile int32_t t128 = 0;

    t128 = ((x513>x514)==(x515|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 520271500652388LLU;
	uint64_t x518 = 9LLU;
	static uint8_t x519 = 69U;
	int32_t t129 = -25383772;

    t129 = ((x517>x518)==(x519|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x521 = 10428;
	static volatile int8_t x523 = -1;
	uint32_t x524 = 3U;

    t130 = ((x521>x522)==(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	int32_t x526 = INT32_MIN;
	static volatile int8_t x527 = INT8_MIN;
	volatile int32_t t131 = -35;

    t131 = ((x525>x526)==(x527|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -24;
	uint64_t x531 = 528241863LLU;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -142845;

    t132 = ((x529>x530)==(x531|x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = INT8_MAX;
	int32_t x534 = -1627410;
	static int32_t x535 = -1083860;
	volatile int16_t x536 = INT16_MAX;
	int32_t t133 = -163579875;

    t133 = ((x533>x534)==(x535|x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	int16_t x538 = INT16_MAX;
	int8_t x540 = INT8_MIN;
	int32_t t134 = 478;

    t134 = ((x537>x538)==(x539|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = INT64_MAX;
	int8_t x543 = -1;
	static uint8_t x544 = 37U;
	static volatile int32_t t135 = -14438;

    t135 = ((x541>x542)==(x543|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	uint64_t x547 = UINT64_MAX;
	int16_t x548 = 10549;
	static volatile int32_t t136 = -58659315;

    t136 = ((x545>x546)==(x547|x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 0LL;
	volatile int16_t x551 = INT16_MIN;
	uint64_t x552 = 871626709044946LLU;
	int32_t t137 = -489341;

    t137 = ((x549>x550)==(x551|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	int8_t x554 = -1;
	static uint16_t x555 = 7734U;
	static uint64_t x556 = 1LLU;

    t138 = ((x553>x554)==(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MAX;
	int16_t x558 = INT16_MIN;
	volatile uint32_t x559 = UINT32_MAX;
	static volatile int8_t x560 = -1;
	int32_t t139 = -70;

    t139 = ((x557>x558)==(x559|x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = -1;
	static int16_t x562 = -1;
	uint64_t x563 = 7784545862944937405LLU;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t140 = 1474420;

    t140 = ((x561>x562)==(x563|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 16115595;
	volatile int64_t x567 = -27913415746971704LL;
	volatile int32_t t141 = -22;

    t141 = ((x565>x566)==(x567|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	volatile int16_t x570 = INT16_MIN;
	int16_t x571 = INT16_MIN;
	volatile uint32_t x572 = 2U;
	volatile int32_t t142 = -740010;

    t142 = ((x569>x570)==(x571|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MAX;
	static int32_t x575 = 531;
	int32_t t143 = 13;

    t143 = ((x573>x574)==(x575|x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 49U;
	static int8_t x578 = -1;
	static uint64_t x579 = 24243992LLU;
	uint8_t x580 = UINT8_MAX;

    t144 = ((x577>x578)==(x579|x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	static volatile int32_t x582 = INT32_MAX;
	volatile uint8_t x583 = 94U;
	volatile int8_t x584 = 5;
	int32_t t145 = 34323296;

    t145 = ((x581>x582)==(x583|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -252;
	int64_t x586 = INT64_MAX;
	int16_t x587 = INT16_MIN;
	volatile int32_t t146 = -1;

    t146 = ((x585>x586)==(x587|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	volatile uint64_t x590 = 3693LLU;
	uint8_t x591 = UINT8_MAX;
	int32_t t147 = 4898817;

    t147 = ((x589>x590)==(x591|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x594 = -5;
	static int16_t x595 = -1;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -8624460;

    t148 = ((x593>x594)==(x595|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	static volatile uint8_t x599 = 9U;
	volatile int16_t x600 = 1092;
	int32_t t149 = -12207;

    t149 = ((x597>x598)==(x599|x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 1U;
	volatile int16_t x603 = 5;
	int32_t x604 = INT32_MIN;
	int32_t t150 = 807189536;

    t150 = ((x601>x602)==(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	static int32_t x607 = INT32_MAX;
	int16_t x608 = -3;
	int32_t t151 = -678997599;

    t151 = ((x605>x606)==(x607|x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -6;
	volatile uint8_t x610 = 13U;
	uint64_t x611 = 180LLU;
	int64_t x612 = INT64_MIN;
	volatile int32_t t152 = 149081581;

    t152 = ((x609>x610)==(x611|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MAX;
	int16_t x615 = INT16_MIN;
	int32_t x616 = INT32_MIN;
	volatile int32_t t153 = 19;

    t153 = ((x613>x614)==(x615|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	volatile int16_t x620 = INT16_MIN;
	int32_t t154 = 40;

    t154 = ((x617>x618)==(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MIN;
	volatile int16_t x623 = 1603;
	volatile int32_t t155 = 0;

    t155 = ((x621>x622)==(x623|x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 10914528430LL;
	volatile int32_t x626 = -1039;
	volatile int8_t x627 = -19;
	int8_t x628 = INT8_MAX;
	int32_t t156 = -76;

    t156 = ((x625>x626)==(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MAX;
	int32_t x632 = INT32_MIN;

    t157 = ((x629>x630)==(x631|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 1595U;
	uint8_t x635 = UINT8_MAX;
	uint64_t x636 = UINT64_MAX;
	volatile int32_t t158 = 30;

    t158 = ((x633>x634)==(x635|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	uint16_t x638 = 221U;
	int8_t x639 = INT8_MAX;
	int32_t x640 = -1;
	int32_t t159 = 803;

    t159 = ((x637>x638)==(x639|x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 477U;
	static uint16_t x642 = 100U;
	int64_t x643 = INT64_MAX;
	uint32_t x644 = UINT32_MAX;
	int32_t t160 = -15313;

    t160 = ((x641>x642)==(x643|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x646 = -1LL;
	int64_t x647 = INT64_MIN;
	int64_t x648 = 64031795515575352LL;
	int32_t t161 = -258717838;

    t161 = ((x645>x646)==(x647|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	uint64_t x650 = UINT64_MAX;
	uint32_t x651 = 33U;
	volatile int32_t t162 = 5318;

    t162 = ((x649>x650)==(x651|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	uint16_t x654 = 3720U;
	uint64_t x656 = 132968552574777072LLU;

    t163 = ((x653>x654)==(x655|x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 9;
	int32_t x658 = INT32_MIN;
	int64_t x659 = -4608664547LL;
	volatile int32_t t164 = -58;

    t164 = ((x657>x658)==(x659|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int8_t x662 = INT8_MIN;
	int8_t x663 = -5;
	static volatile uint8_t x664 = 21U;

    t165 = ((x661>x662)==(x663|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x666 = INT8_MIN;
	volatile int8_t x668 = 1;

    t166 = ((x665>x666)==(x667|x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	static int64_t x670 = 15719689965915LL;
	uint16_t x671 = UINT16_MAX;

    t167 = ((x669>x670)==(x671|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -1;
	int16_t x674 = 1;
	uint64_t x675 = UINT64_MAX;
	int32_t t168 = 146030212;

    t168 = ((x673>x674)==(x675|x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 479088U;
	uint8_t x678 = 3U;
	uint8_t x679 = 2U;

    t169 = ((x677>x678)==(x679|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = -1LL;
	volatile int8_t x683 = INT8_MIN;
	int8_t x684 = -1;
	int32_t t170 = -133471523;

    t170 = ((x681>x682)==(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x686 = -1LL;
	volatile int32_t x687 = INT32_MIN;
	uint16_t x688 = 2U;
	volatile int32_t t171 = 389;

    t171 = ((x685>x686)==(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x690 = 474U;
	uint64_t x691 = 12981510635LLU;
	uint64_t x692 = 99767730883632LLU;
	volatile int32_t t172 = -2098;

    t172 = ((x689>x690)==(x691|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	uint64_t x694 = UINT64_MAX;
	static volatile uint32_t x695 = 5184038U;
	int16_t x696 = INT16_MIN;

    t173 = ((x693>x694)==(x695|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x698 = INT64_MAX;
	static uint8_t x699 = 6U;
	uint8_t x700 = 10U;
	int32_t t174 = 6;

    t174 = ((x697>x698)==(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	static int32_t x702 = -129960144;
	static volatile int16_t x703 = INT16_MAX;

    t175 = ((x701>x702)==(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = -1;
	uint32_t x706 = 0U;
	uint64_t x707 = 48152077486LLU;
	int32_t t176 = -106539557;

    t176 = ((x705>x706)==(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = INT64_MIN;
	uint32_t x711 = 29268U;
	volatile uint8_t x712 = 56U;
	int32_t t177 = 407;

    t177 = ((x709>x710)==(x711|x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x716 = -1099LL;
	volatile int32_t t178 = -73122216;

    t178 = ((x713>x714)==(x715|x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 30U;
	int16_t x720 = -1;
	volatile int32_t t179 = -14399;

    t179 = ((x717>x718)==(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 28U;
	int8_t x722 = 7;
	int16_t x724 = INT16_MIN;
	volatile int32_t t180 = -56133;

    t180 = ((x721>x722)==(x723|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int32_t x726 = -1;
	uint8_t x727 = 3U;
	int32_t x728 = INT32_MIN;
	int32_t t181 = 13925;

    t181 = ((x725>x726)==(x727|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1463702468574045LL;
	static int16_t x731 = INT16_MIN;
	uint16_t x732 = 632U;
	volatile int32_t t182 = -130196365;

    t182 = ((x729>x730)==(x731|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	int32_t x734 = INT32_MIN;
	int8_t x735 = 0;
	volatile int64_t x736 = INT64_MAX;
	volatile int32_t t183 = -1694;

    t183 = ((x733>x734)==(x735|x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x737 = 334471709731979709LLU;
	static int64_t x738 = INT64_MIN;
	static int64_t x739 = INT64_MAX;
	int16_t x740 = INT16_MAX;
	volatile int32_t t184 = -1;

    t184 = ((x737>x738)==(x739|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 11653U;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MAX;
	int32_t t185 = 15411;

    t185 = ((x741>x742)==(x743|x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = -1;
	volatile int32_t t186 = 399500428;

    t186 = ((x745>x746)==(x747|x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	uint16_t x752 = 3189U;
	volatile int32_t t187 = -7165;

    t187 = ((x749>x750)==(x751|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 5584005;
	static uint32_t x754 = 129507122U;
	int64_t x755 = -1LL;
	volatile int8_t x756 = INT8_MIN;
	int32_t t188 = 1;

    t188 = ((x753>x754)==(x755|x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	uint64_t x758 = 108447726834162834LLU;
	int64_t x759 = INT64_MAX;
	int64_t x760 = -1LL;
	static int32_t t189 = -13212327;

    t189 = ((x757>x758)==(x759|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = -11;
	uint8_t x762 = 59U;
	static int64_t x764 = 1869355806791LL;
	int32_t t190 = 1980;

    t190 = ((x761>x762)==(x763|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x768 = INT8_MIN;
	static volatile int32_t t191 = 5969913;

    t191 = ((x765>x766)==(x767|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x770 = INT64_MIN;
	uint8_t x771 = 2U;
	static uint16_t x772 = UINT16_MAX;
	volatile int32_t t192 = -12814;

    t192 = ((x769>x770)==(x771|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x775 = UINT32_MAX;
	int64_t x776 = -1LL;
	int32_t t193 = -728556;

    t193 = ((x773>x774)==(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MIN;
	uint16_t x778 = UINT16_MAX;
	int64_t x780 = -2186631555870LL;
	volatile int32_t t194 = -1575;

    t194 = ((x777>x778)==(x779|x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	static uint16_t x782 = 5U;
	int16_t x783 = -1;
	static volatile int8_t x784 = -24;
	volatile int32_t t195 = 91150208;

    t195 = ((x781>x782)==(x783|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = -1;
	int64_t x786 = INT64_MIN;
	volatile int32_t t196 = -390;

    t196 = ((x785>x786)==(x787|x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 16U;
	int16_t x790 = 2966;
	int32_t t197 = 6;

    t197 = ((x789>x790)==(x791|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 355700584470710LL;
	static uint32_t x794 = UINT32_MAX;
	volatile int64_t x795 = INT64_MIN;
	static volatile int32_t t198 = 268;

    t198 = ((x793>x794)==(x795|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	uint8_t x798 = 3U;
	static int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 58988401;

    t199 = ((x797>x798)==(x799|x800));

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

