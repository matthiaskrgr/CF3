
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

static int64_t x6 = 4205LL;
uint32_t x11 = UINT32_MAX;
int16_t x12 = 7352;
int32_t x14 = -1;
int32_t x23 = 1915243;
static int16_t x30 = -1;
int8_t x31 = -3;
static int16_t x35 = INT16_MIN;
int16_t x38 = INT16_MIN;
static uint16_t x42 = 8842U;
uint64_t x43 = 3000021067944710LLU;
int64_t x44 = INT64_MIN;
int32_t x48 = 11571136;
volatile int64_t x49 = -1LL;
volatile uint16_t x55 = 1938U;
static uint32_t t15 = 5998U;
static int16_t x66 = -4;
volatile int32_t t16 = 40;
uint64_t x69 = UINT64_MAX;
volatile uint32_t x71 = 158206601U;
volatile uint32_t x84 = UINT32_MAX;
volatile int64_t t20 = -207129096LL;
static int32_t x86 = -1;
static uint8_t x92 = 4U;
volatile int8_t x94 = -22;
int64_t x95 = INT64_MIN;
int8_t x96 = -1;
volatile int64_t t23 = -46162679460621892LL;
volatile uint64_t t24 = UINT64_MAX;
static volatile int16_t x104 = -1;
int32_t t25 = -68512194;
int64_t x108 = 18LL;
int64_t x112 = INT64_MAX;
int32_t t28 = 8227;
int16_t x119 = 13;
uint16_t x121 = 0U;
int8_t x126 = INT8_MIN;
static volatile int64_t t32 = -932412383LL;
static int32_t t33 = -16;
volatile int64_t t34 = 49888878890350932LL;
volatile uint8_t x144 = 3U;
int8_t x155 = -1;
static volatile int64_t x162 = 1125347LL;
uint64_t x163 = 146285731LLU;
volatile uint64_t t40 = 4312871LLU;
int16_t x168 = INT16_MIN;
int64_t t41 = -261425LL;
int64_t x170 = -2352LL;
uint64_t x171 = UINT64_MAX;
int64_t x174 = -17147914LL;
int16_t x176 = INT16_MIN;
static int64_t x177 = INT64_MIN;
uint8_t x178 = 3U;
int16_t x180 = -1104;
int32_t t44 = 0;
static int64_t x193 = INT64_MIN;
static int64_t x195 = -1LL;
volatile int16_t x196 = -1;
int64_t t48 = 545393589641099324LL;
static int32_t x200 = -1;
volatile int32_t x202 = -130629;
uint16_t x204 = 16279U;
int32_t t50 = 50;
static uint16_t x209 = 2U;
uint64_t x210 = UINT64_MAX;
int64_t x214 = -64578914LL;
static volatile uint8_t x215 = 4U;
volatile int32_t x219 = INT32_MIN;
volatile int32_t x228 = INT32_MAX;
int32_t x229 = INT32_MIN;
static int32_t x231 = INT32_MAX;
int64_t x239 = INT64_MAX;
int32_t x242 = -565477;
volatile uint8_t x243 = UINT8_MAX;
volatile int32_t t60 = -82388584;
int32_t x246 = -10;
int8_t x253 = INT8_MIN;
int8_t x256 = -1;
int32_t x258 = INT32_MIN;
int8_t x259 = INT8_MIN;
int32_t x260 = INT32_MIN;
static int16_t x264 = 9792;
int8_t x270 = INT8_MAX;
uint32_t x271 = 98479288U;
uint32_t t67 = 7U;
int64_t x275 = INT64_MIN;
uint32_t x277 = UINT32_MAX;
int64_t x278 = INT64_MIN;
volatile uint64_t x289 = 982420231291422LLU;
static uint32_t x296 = 24834U;
static uint32_t x298 = UINT32_MAX;
int64_t x300 = INT64_MIN;
volatile int8_t x303 = INT8_MIN;
static volatile uint8_t x307 = 46U;
int32_t x308 = -20956;
int32_t x325 = INT32_MAX;
int64_t t81 = -5LL;
int16_t x329 = INT16_MIN;
volatile int16_t x337 = 940;
int64_t x351 = INT64_MAX;
int32_t x352 = -1;
int32_t x354 = -1;
static uint64_t x355 = UINT64_MAX;
static volatile uint32_t x358 = 54370U;
int32_t x370 = -253492;
int64_t x371 = INT64_MAX;
int64_t x373 = INT64_MAX;
int32_t t93 = 7317;
static int16_t x385 = -28;
int8_t x388 = INT8_MAX;
int32_t t95 = 0;
int8_t x393 = -2;
uint16_t x395 = UINT16_MAX;
static volatile int32_t t97 = 446075;
uint64_t x398 = 1LLU;
static int16_t x405 = -54;
int64_t x407 = INT64_MIN;
int8_t x408 = INT8_MAX;
int8_t x412 = INT8_MIN;
int64_t t101 = 1270140315113866617LL;
uint8_t x414 = 21U;
static int8_t x416 = INT8_MAX;
int8_t x420 = -1;
int64_t x428 = -1LL;
volatile uint32_t x437 = 6016U;
uint32_t x438 = 300936U;
uint64_t x440 = UINT64_MAX;
uint32_t x442 = 1849774635U;
static int64_t x443 = INT64_MAX;
volatile int64_t t109 = -202LL;
int8_t x445 = INT8_MIN;
volatile uint64_t x446 = UINT64_MAX;
int8_t x456 = INT8_MAX;
volatile int64_t t113 = -2892109293468038516LL;
volatile uint64_t t114 = 4949139328042LLU;
volatile int32_t x466 = INT32_MIN;
int8_t x471 = INT8_MAX;
volatile uint8_t x474 = UINT8_MAX;
volatile int64_t x475 = -1LL;
static int64_t t117 = -22613LL;
uint16_t x479 = 751U;
volatile int8_t x484 = INT8_MIN;
volatile int32_t x485 = INT32_MIN;
uint16_t x487 = 3717U;
int32_t x488 = 607867312;
int8_t x492 = -1;
volatile int64_t x493 = 895843707LL;
int16_t x494 = INT16_MAX;
volatile int16_t x497 = -7;
int32_t x502 = -1;
int32_t x503 = -52;
volatile int64_t x506 = 733257751687457LL;
static int16_t x507 = -1;
static int16_t x513 = -2;
volatile int8_t x520 = INT8_MAX;
uint8_t x527 = 37U;
volatile int8_t x528 = INT8_MAX;
int64_t x535 = -1LL;
uint64_t x538 = 0LLU;
int64_t t133 = -1LL;
int64_t x546 = -1LL;
static int16_t x548 = 11675;
int32_t t135 = 1;
volatile int64_t x551 = -4751LL;
uint32_t x553 = UINT32_MAX;
volatile int64_t x560 = 858390201896308LL;
int32_t x565 = -1687604;
volatile int8_t x589 = -1;
static uint8_t x592 = UINT8_MAX;
static int8_t x603 = -1;
int32_t t148 = -5887;
int16_t x610 = -1;
int32_t x624 = INT32_MIN;
volatile int64_t x630 = -24350474300LL;
int64_t t154 = -1950821819LL;
int64_t x638 = INT64_MAX;
static int32_t x641 = -1;
int64_t x655 = -1638085453825583804LL;
uint64_t t160 = UINT64_MAX;
volatile uint16_t x664 = 22316U;
static int32_t x670 = -3;
volatile int32_t t164 = -111095368;
int16_t x676 = -1;
volatile int64_t x677 = INT64_MIN;
int64_t x684 = INT64_MIN;
volatile uint64_t t168 = 2331643267594824LLU;
static volatile int32_t x690 = 6402;
int32_t x694 = INT32_MAX;
static volatile uint32_t x700 = 1356935U;
static int8_t x703 = -1;
volatile uint8_t x704 = 1U;
volatile uint8_t x710 = 2U;
volatile int16_t x712 = -1;
int32_t x715 = INT32_MAX;
uint16_t x717 = 5000U;
volatile int8_t x720 = INT8_MIN;
int8_t x724 = INT8_MIN;
volatile int32_t t177 = 64512701;
int8_t x726 = -1;
volatile uint32_t t178 = 17479U;
uint16_t x733 = UINT16_MAX;
int16_t x735 = -4;
int8_t x742 = INT8_MIN;
volatile int64_t x745 = INT64_MIN;
int16_t x748 = INT16_MAX;
int32_t x750 = INT32_MIN;
uint16_t x754 = 69U;
static int32_t x761 = INT32_MIN;
int32_t x762 = INT32_MIN;
volatile int16_t x772 = -1;
int32_t x773 = INT32_MAX;
int64_t x774 = -1LL;
static volatile int64_t t190 = 11LL;
int16_t x779 = -462;
int32_t t193 = -48534;
static int16_t x802 = INT16_MIN;
uint8_t x812 = 1U;


void f0(void) {
    	int64_t x1 = -418LL;
	volatile int64_t x2 = -122628314332LL;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -537421242;

    t0 = (((x1!=x2)/x3)|x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 262498U;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -107282;

    t1 = (((x5!=x6)/x7)|x8);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	int64_t x10 = INT64_MIN;
	volatile uint32_t t2 = 35U;

    t2 = (((x9!=x10)/x11)|x12);

    if (t2 != 7352U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -2;
	volatile int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = INT32_MIN;

    t3 = (((x13!=x14)/x15)|x16);

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 4029161788LLU;
	int16_t x18 = 9792;
	static int32_t x19 = -3;
	static int64_t x20 = -1LL;
	int64_t t4 = 22595893510831198LL;

    t4 = (((x17!=x18)/x19)|x20);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile int64_t x22 = INT64_MIN;
	int32_t x24 = -1;
	int32_t t5 = 82047;

    t5 = (((x21!=x22)/x23)|x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	int16_t x27 = -20;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 0;

    t6 = (((x25!=x26)/x27)|x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	uint16_t x32 = 3U;
	volatile int32_t t7 = 38848;

    t7 = (((x29!=x30)/x31)|x32);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	int64_t x34 = INT64_MIN;
	int32_t x36 = -343;
	volatile int32_t t8 = 362642982;

    t8 = (((x33!=x34)/x35)|x36);

    if (t8 != -343) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 5723955041417582LL;
	static uint64_t x39 = 107LLU;
	static int32_t x40 = 1;
	volatile uint64_t t9 = 127813490LLU;

    t9 = (((x37!=x38)/x39)|x40);

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	uint64_t t10 = 49670061728LLU;

    t10 = (((x41!=x42)/x43)|x44);

    if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 3U;
	int32_t t11 = 927768341;

    t11 = (((x45!=x46)/x47)|x48);

    if (t11 != 11571136) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x50 = -1;
	volatile int64_t x51 = INT64_MAX;
	static int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

    t12 = (((x49!=x50)/x51)|x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	static int32_t x54 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 2168076;

    t13 = (((x53!=x54)/x55)|x56);

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	volatile uint32_t x58 = 487362U;
	int16_t x59 = 9;
	int16_t x60 = -1;
	volatile int32_t t14 = 4;

    t14 = (((x57!=x58)/x59)|x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	static int32_t x62 = INT32_MAX;
	uint32_t x63 = 18821893U;
	uint32_t x64 = 94U;

    t15 = (((x61!=x62)/x63)|x64);

    if (t15 != 94U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 92828776996107436LLU;
	int8_t x67 = INT8_MIN;
	int8_t x68 = -48;

    t16 = (((x65!=x66)/x67)|x68);

    if (t16 != -48) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = 0;
	uint32_t x72 = 17501U;
	uint32_t t17 = 4698040U;

    t17 = (((x69!=x70)/x71)|x72);

    if (t17 != 17501U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	int8_t x74 = -11;
	uint16_t x75 = UINT16_MAX;
	static int8_t x76 = 0;
	int32_t t18 = 11203750;

    t18 = (((x73!=x74)/x75)|x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	uint16_t x78 = 831U;
	static uint64_t x79 = UINT64_MAX;
	uint8_t x80 = 10U;
	volatile uint64_t t19 = 160775223LLU;

    t19 = (((x77!=x78)/x79)|x80);

    if (t19 != 10LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 122U;
	static volatile int8_t x82 = INT8_MAX;
	int64_t x83 = -1LL;

    t20 = (((x81!=x82)/x83)|x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MIN;
	int8_t x87 = -22;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

    t21 = (((x85!=x86)/x87)|x88);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 47U;
	volatile int8_t x90 = INT8_MIN;
	static volatile int64_t x91 = -8244LL;
	volatile int64_t t22 = 120798331741203491LL;

    t22 = (((x89!=x90)/x91)|x92);

    if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = INT16_MAX;

    t23 = (((x93!=x94)/x95)|x96);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MAX;
	static uint16_t x98 = 2U;
	int32_t x99 = 20;
	uint64_t x100 = UINT64_MAX;

    t24 = (((x97!=x98)/x99)|x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 2805LLU;
	static int32_t x102 = 209436;
	uint8_t x103 = UINT8_MAX;

    t25 = (((x101!=x102)/x103)|x104);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	uint16_t x106 = UINT16_MAX;
	static uint16_t x107 = 12590U;
	volatile int64_t t26 = 873101869921223LL;

    t26 = (((x105!=x106)/x107)|x108);

    if (t26 != 18LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = INT64_MIN;
	static uint64_t x110 = 54968LLU;
	int8_t x111 = INT8_MIN;
	volatile int64_t t27 = INT64_MAX;

    t27 = (((x109!=x110)/x111)|x112);

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;

    t28 = (((x113!=x114)/x115)|x116);

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -1;
	volatile uint8_t x118 = UINT8_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t29 = 28914606747587602LL;

    t29 = (((x117!=x118)/x119)|x120);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = 64837269U;
	static int64_t x123 = INT64_MIN;
	int64_t x124 = 21948291LL;
	volatile int64_t t30 = 5LL;

    t30 = (((x121!=x122)/x123)|x124);

    if (t30 != 21948291LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 32131696807LLU;
	int32_t x127 = 1;
	uint16_t x128 = 145U;
	int32_t t31 = 77341;

    t31 = (((x125!=x126)/x127)|x128);

    if (t31 != 145) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = 164888893;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 7568767U;

    t32 = (((x129!=x130)/x131)|x132);

    if (t32 != 7568767LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	static int32_t x134 = -149;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MIN;

    t33 = (((x133!=x134)/x135)|x136);

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static int8_t x138 = -1;
	int64_t x139 = INT64_MIN;
	volatile int8_t x140 = INT8_MIN;

    t34 = (((x137!=x138)/x139)|x140);

    if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 7U;
	uint16_t x142 = 4091U;
	int32_t x143 = INT32_MIN;
	volatile int32_t t35 = 2256;

    t35 = (((x141!=x142)/x143)|x144);

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = 98U;
	int64_t x146 = INT64_MIN;
	static int32_t x147 = INT32_MAX;
	volatile int64_t x148 = INT64_MIN;
	int64_t t36 = INT64_MIN;

    t36 = (((x145!=x146)/x147)|x148);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = 1860;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 933364817LLU;
	int64_t x152 = 3015730125LL;
	uint64_t t37 = 6249LLU;

    t37 = (((x149!=x150)/x151)|x152);

    if (t37 != 3015730125LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 60;
	uint32_t x154 = 3011U;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 7190922LL;

    t38 = (((x153!=x154)/x155)|x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = 3;
	int64_t x158 = INT64_MAX;
	static volatile int64_t x159 = INT64_MIN;
	int8_t x160 = -1;
	int64_t t39 = -3LL;

    t39 = (((x157!=x158)/x159)|x160);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = INT8_MAX;
	static int32_t x164 = INT32_MIN;

    t40 = (((x161!=x162)/x163)|x164);

    if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	static int32_t x166 = -1861;
	static int64_t x167 = INT64_MAX;

    t41 = (((x165!=x166)/x167)|x168);

    if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -1;
	uint32_t x172 = 469U;
	uint64_t t42 = 273727129309225589LLU;

    t42 = (((x169!=x170)/x171)|x172);

    if (t42 != 469LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 19037U;
	volatile int64_t x175 = -1LL;
	int64_t t43 = -993343LL;

    t43 = (((x173!=x174)/x175)|x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x179 = 12411;

    t44 = (((x177!=x178)/x179)|x180);

    if (t44 != -1104) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = INT64_MIN;
	volatile int64_t x182 = 31522667606LL;
	volatile uint32_t x183 = UINT32_MAX;
	int16_t x184 = -83;
	uint32_t t45 = 9U;

    t45 = (((x181!=x182)/x183)|x184);

    if (t45 != 4294967213U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x185 = -1;
	static volatile int64_t x186 = 84LL;
	int64_t x187 = -87582LL;
	int16_t x188 = INT16_MIN;
	volatile int64_t t46 = -1LL;

    t46 = (((x185!=x186)/x187)|x188);

    if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MAX;
	int8_t x190 = -54;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (((x189!=x190)/x191)|x192);

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MIN;

    t48 = (((x193!=x194)/x195)|x196);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 11U;
	volatile uint16_t x199 = 550U;
	static int32_t t49 = 397;

    t49 = (((x197!=x198)/x199)|x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = -1;
	uint8_t x203 = UINT8_MAX;

    t50 = (((x201!=x202)/x203)|x204);

    if (t50 != 16279) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1601;
	int16_t x206 = INT16_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

    t51 = (((x205!=x206)/x207)|x208);

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x211 = -7526726LL;
	int32_t x212 = -1;
	volatile int64_t t52 = -246527956940148LL;

    t52 = (((x209!=x210)/x211)|x212);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 25006U;
	volatile int8_t x216 = -1;
	volatile int32_t t53 = -1408;

    t53 = (((x213!=x214)/x215)|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	uint64_t x220 = 1LLU;
	volatile uint64_t t54 = 117LLU;

    t54 = (((x217!=x218)/x219)|x220);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 4018760LLU;
	static int8_t x222 = -1;
	uint16_t x223 = 43U;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = 113244961;

    t55 = (((x221!=x222)/x223)|x224);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x226 = 18U;
	volatile int64_t x227 = -4698961832225012LL;
	static volatile int64_t t56 = 902894LL;

    t56 = (((x225!=x226)/x227)|x228);

    if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x230 = 1738253788LLU;
	static int16_t x232 = -63;
	int32_t t57 = -115433759;

    t57 = (((x229!=x230)/x231)|x232);

    if (t57 != -63) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = 7;
	int16_t x234 = -18;
	int32_t x235 = INT32_MIN;
	volatile int16_t x236 = -1;
	static int32_t t58 = -22154;

    t58 = (((x233!=x234)/x235)|x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	static volatile int32_t x238 = INT32_MAX;
	volatile int32_t x240 = INT32_MAX;
	int64_t t59 = -636179LL;

    t59 = (((x237!=x238)/x239)|x240);

    if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 649U;
	static int16_t x244 = INT16_MAX;

    t60 = (((x241!=x242)/x243)|x244);

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int32_t x247 = -1;
	static int32_t x248 = -81;
	int32_t t61 = -1;

    t61 = (((x245!=x246)/x247)|x248);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	static int16_t x251 = -1;
	int64_t x252 = INT64_MAX;
	volatile int64_t t62 = -123637574452LL;

    t62 = (((x249!=x250)/x251)|x252);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 58U;
	int64_t x255 = -1LL;
	volatile int64_t t63 = 17507848862835542LL;

    t63 = (((x253!=x254)/x255)|x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MAX;
	int32_t t64 = INT32_MIN;

    t64 = (((x257!=x258)/x259)|x260);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = 1;
	int16_t x262 = 10;
	int64_t x263 = 124664985316415984LL;
	volatile int64_t t65 = 1LL;

    t65 = (((x261!=x262)/x263)|x264);

    if (t65 != 9792LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 14;
	int32_t x266 = -9365198;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (((x265!=x266)/x267)|x268);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	uint32_t x272 = 29U;

    t67 = (((x269!=x270)/x271)|x272);

    if (t67 != 29U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = 150238LLU;
	uint16_t x276 = 151U;
	int64_t t68 = 14LL;

    t68 = (((x273!=x274)/x275)|x276);

    if (t68 != 151LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x279 = 78129641;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -50914;

    t69 = (((x277!=x278)/x279)|x280);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -630;
	int64_t x282 = 135188870302372LL;
	int8_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = -361894102418901527LL;

    t70 = (((x281!=x282)/x283)|x284);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x285 = 19U;
	static uint32_t x286 = 19U;
	static int64_t x287 = 1LL;
	uint16_t x288 = UINT16_MAX;
	int64_t t71 = -351LL;

    t71 = (((x285!=x286)/x287)|x288);

    if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x290 = 2U;
	static int16_t x291 = 1;
	uint16_t x292 = 0U;
	int32_t t72 = 54391;

    t72 = (((x289!=x290)/x291)|x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = -4454707;
	int8_t x294 = 11;
	int8_t x295 = INT8_MIN;
	uint32_t t73 = 3U;

    t73 = (((x293!=x294)/x295)|x296);

    if (t73 != 24834U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = 32U;
	int32_t x299 = INT32_MAX;
	volatile int64_t t74 = INT64_MIN;

    t74 = (((x297!=x298)/x299)|x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	int8_t x302 = INT8_MIN;
	int8_t x304 = -1;
	static volatile int32_t t75 = 496372828;

    t75 = (((x301!=x302)/x303)|x304);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -657;
	int16_t x306 = 1262;
	volatile int32_t t76 = 602;

    t76 = (((x305!=x306)/x307)|x308);

    if (t76 != -20956) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	uint16_t x310 = 5172U;
	volatile int16_t x311 = -1;
	static int8_t x312 = -1;
	int32_t t77 = -34042847;

    t77 = (((x309!=x310)/x311)|x312);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x313 = -1;
	int64_t x314 = 62833520041291LL;
	int32_t x315 = -22;
	uint16_t x316 = 95U;
	int32_t t78 = 89091;

    t78 = (((x313!=x314)/x315)|x316);

    if (t78 != 95) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 1;
	int8_t x318 = -1;
	uint16_t x319 = 6U;
	uint32_t x320 = UINT32_MAX;
	static uint32_t t79 = UINT32_MAX;

    t79 = (((x317!=x318)/x319)|x320);

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	static uint64_t x322 = 4247LLU;
	static int16_t x323 = -1;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -5110;

    t80 = (((x321!=x322)/x323)|x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MAX;
	volatile int32_t x328 = INT32_MAX;

    t81 = (((x325!=x326)/x327)|x328);

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = 0LLU;
	uint64_t x331 = UINT64_MAX;
	static volatile int32_t x332 = INT32_MAX;
	static volatile uint64_t t82 = 8504175965260937LLU;

    t82 = (((x329!=x330)/x331)|x332);

    if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -25;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	static uint8_t x336 = UINT8_MAX;
	int32_t t83 = -234;

    t83 = (((x333!=x334)/x335)|x336);

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	uint8_t x339 = UINT8_MAX;
	int16_t x340 = -1;
	volatile int32_t t84 = 39874;

    t84 = (((x337!=x338)/x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 168131U;
	int32_t x342 = INT32_MAX;
	int32_t x343 = INT32_MAX;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 1395124;

    t85 = (((x341!=x342)/x343)|x344);

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = -3LL;
	volatile int64_t t86 = 222476474646174995LL;

    t86 = (((x345!=x346)/x347)|x348);

    if (t86 != -3LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = -3658385;
	int8_t x350 = -3;
	volatile int64_t t87 = -837644311306405418LL;

    t87 = (((x349!=x350)/x351)|x352);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	volatile int32_t x356 = -21390071;
	uint64_t t88 = 8169742LLU;

    t88 = (((x353!=x354)/x355)|x356);

    if (t88 != 18446744073688161545LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 4;
	volatile int16_t x359 = INT16_MAX;
	int8_t x360 = 45;
	static int32_t t89 = 11884655;

    t89 = (((x357!=x358)/x359)|x360);

    if (t89 != 45) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = -1;
	static int32_t x362 = INT32_MIN;
	static uint16_t x363 = 3U;
	uint64_t x364 = 1274044236LLU;
	volatile uint64_t t90 = 19856893533905LLU;

    t90 = (((x361!=x362)/x363)|x364);

    if (t90 != 1274044236LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	static volatile int16_t x366 = -8459;
	int16_t x367 = -1;
	static int64_t x368 = INT64_MIN;
	static volatile int64_t t91 = 21LL;

    t91 = (((x365!=x366)/x367)|x368);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -976807670;
	static int32_t x372 = INT32_MAX;
	volatile int64_t t92 = 0LL;

    t92 = (((x369!=x370)/x371)|x372);

    if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	static int16_t x375 = -1;
	int8_t x376 = 9;

    t93 = (((x373!=x374)/x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	volatile int8_t x379 = INT8_MIN;
	static int16_t x380 = 58;
	volatile int32_t t94 = -849600;

    t94 = (((x377!=x378)/x379)|x380);

    if (t94 != 58) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x386 = 4U;
	static uint16_t x387 = UINT16_MAX;

    t95 = (((x385!=x386)/x387)|x388);

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 9U;
	static volatile int32_t x392 = INT32_MIN;
	volatile int32_t t96 = INT32_MIN;

    t96 = (((x389!=x390)/x391)|x392);

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x394 = INT16_MAX;
	int16_t x396 = -1;

    t97 = (((x393!=x394)/x395)|x396);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = INT32_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	volatile uint8_t x400 = UINT8_MAX;
	uint32_t t98 = 144U;

    t98 = (((x397!=x398)/x399)|x400);

    if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x401 = -1;
	int32_t x402 = -1;
	int8_t x403 = -1;
	uint64_t x404 = 10635257LLU;
	volatile uint64_t t99 = 2770190978966LLU;

    t99 = (((x401!=x402)/x403)|x404);

    if (t99 != 10635257LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x406 = 7863605207123304LLU;
	volatile int64_t t100 = 4826591063408LL;

    t100 = (((x405!=x406)/x407)|x408);

    if (t100 != 127LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = INT64_MIN;
	static int64_t x410 = INT64_MAX;
	static int64_t x411 = INT64_MAX;

    t101 = (((x409!=x410)/x411)|x412);

    if (t101 != -128LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x413 = -42806652;
	uint8_t x415 = 99U;
	static volatile int32_t t102 = 129704;

    t102 = (((x413!=x414)/x415)|x416);

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = 6U;
	static volatile int16_t x418 = -1;
	volatile int64_t x419 = 192217853119LL;
	int64_t t103 = 56LL;

    t103 = (((x417!=x418)/x419)|x420);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = 20;
	uint8_t x422 = 1U;
	uint32_t x423 = 24U;
	static int64_t x424 = 1LL;
	volatile int64_t t104 = 45390324456917045LL;

    t104 = (((x421!=x422)/x423)|x424);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = -1;
	volatile uint64_t x427 = 61128LLU;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (((x425!=x426)/x427)|x428);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = INT16_MIN;
	volatile int64_t x430 = INT64_MIN;
	volatile uint8_t x431 = 123U;
	volatile int64_t x432 = INT64_MIN;
	int64_t t106 = INT64_MIN;

    t106 = (((x429!=x430)/x431)|x432);

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x433 = UINT64_MAX;
	uint8_t x434 = 11U;
	volatile int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MIN;
	int32_t t107 = 1;

    t107 = (((x433!=x434)/x435)|x436);

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x439 = INT32_MIN;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (((x437!=x438)/x439)|x440);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = 2664152;
	static volatile int16_t x444 = 210;

    t109 = (((x441!=x442)/x443)|x444);

    if (t109 != 210LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x447 = INT16_MAX;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = (((x445!=x446)/x447)|x448);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x449 = INT8_MIN;
	static int64_t x450 = INT64_MIN;
	int64_t x451 = -1LL;
	int8_t x452 = INT8_MAX;
	int64_t t111 = 4LL;

    t111 = (((x449!=x450)/x451)|x452);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x453 = INT32_MIN;
	static volatile int16_t x454 = -1;
	int8_t x455 = 2;
	volatile int32_t t112 = 2;

    t112 = (((x453!=x454)/x455)|x456);

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = 1;
	uint16_t x458 = 5U;
	int64_t x459 = 3362871296LL;
	volatile int8_t x460 = INT8_MAX;

    t113 = (((x457!=x458)/x459)|x460);

    if (t113 != 127LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x461 = 61U;
	int8_t x462 = INT8_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	int8_t x464 = INT8_MIN;

    t114 = (((x461!=x462)/x463)|x464);

    if (t114 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x467 = INT32_MIN;
	uint8_t x468 = 1U;
	volatile int32_t t115 = -5451420;

    t115 = (((x465!=x466)/x467)|x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = INT32_MAX;
	static int8_t x470 = INT8_MIN;
	uint32_t x472 = UINT32_MAX;
	uint32_t t116 = UINT32_MAX;

    t116 = (((x469!=x470)/x471)|x472);

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x473 = INT8_MIN;
	int64_t x476 = INT64_MAX;

    t117 = (((x473!=x474)/x475)|x476);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x477 = INT8_MIN;
	volatile int16_t x478 = -83;
	uint64_t x480 = UINT64_MAX;
	uint64_t t118 = UINT64_MAX;

    t118 = (((x477!=x478)/x479)|x480);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MAX;
	int64_t x483 = INT64_MIN;
	volatile int64_t t119 = 13833352LL;

    t119 = (((x481!=x482)/x483)|x484);

    if (t119 != -128LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x486 = INT8_MIN;
	volatile int32_t t120 = 1;

    t120 = (((x485!=x486)/x487)|x488);

    if (t120 != 607867312) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x489 = 25U;
	uint16_t x490 = UINT16_MAX;
	static int16_t x491 = -1;
	int32_t t121 = 236976;

    t121 = (((x489!=x490)/x491)|x492);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;
	volatile int32_t t122 = INT32_MIN;

    t122 = (((x493!=x494)/x495)|x496);

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x498 = 9238U;
	volatile int32_t x499 = 11818;
	uint16_t x500 = 899U;
	int32_t t123 = 9;

    t123 = (((x497!=x498)/x499)|x500);

    if (t123 != 899) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x504 = -1;
	int32_t t124 = 8595622;

    t124 = (((x501!=x502)/x503)|x504);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x508 = INT16_MAX;
	volatile int32_t t125 = -297;

    t125 = (((x505!=x506)/x507)|x508);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x509 = 550U;
	int16_t x510 = INT16_MIN;
	uint8_t x511 = 70U;
	int64_t x512 = 16559LL;
	volatile int64_t t126 = 64397LL;

    t126 = (((x509!=x510)/x511)|x512);

    if (t126 != 16559LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x514 = -1LL;
	int8_t x515 = -55;
	uint8_t x516 = UINT8_MAX;
	static volatile int32_t t127 = -1;

    t127 = (((x513!=x514)/x515)|x516);

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x517 = 2;
	uint16_t x518 = UINT16_MAX;
	int64_t x519 = INT64_MIN;
	int64_t t128 = 10058989LL;

    t128 = (((x517!=x518)/x519)|x520);

    if (t128 != 127LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x521 = INT64_MIN;
	int8_t x522 = 0;
	volatile int8_t x523 = INT8_MAX;
	volatile int32_t x524 = -360;
	volatile int32_t t129 = 0;

    t129 = (((x521!=x522)/x523)|x524);

    if (t129 != -360) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = 0;
	uint16_t x526 = UINT16_MAX;
	int32_t t130 = -149342364;

    t130 = (((x525!=x526)/x527)|x528);

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x529 = INT64_MAX;
	int16_t x530 = 39;
	static int8_t x531 = -1;
	int32_t x532 = INT32_MAX;
	volatile int32_t t131 = -917799;

    t131 = (((x529!=x530)/x531)|x532);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x533 = 22U;
	int8_t x534 = INT8_MAX;
	volatile int8_t x536 = 0;
	static int64_t t132 = 838430LL;

    t132 = (((x533!=x534)/x535)|x536);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MIN;
	uint32_t x539 = UINT32_MAX;
	static int64_t x540 = -1LL;

    t133 = (((x537!=x538)/x539)|x540);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x541 = INT16_MIN;
	volatile int8_t x542 = INT8_MIN;
	int64_t x543 = INT64_MIN;
	volatile int16_t x544 = INT16_MIN;
	int64_t t134 = -652835LL;

    t134 = (((x541!=x542)/x543)|x544);

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x545 = INT32_MAX;
	int8_t x547 = INT8_MIN;

    t135 = (((x545!=x546)/x547)|x548);

    if (t135 != 11675) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x549 = UINT8_MAX;
	static int64_t x550 = INT64_MIN;
	uint64_t x552 = 1098886067092LLU;
	uint64_t t136 = 147799801669943039LLU;

    t136 = (((x549!=x550)/x551)|x552);

    if (t136 != 1098886067092LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x554 = UINT64_MAX;
	int16_t x555 = -1;
	uint16_t x556 = UINT16_MAX;
	static volatile int32_t t137 = -561845017;

    t137 = (((x553!=x554)/x555)|x556);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x557 = 3;
	uint8_t x558 = 3U;
	static int8_t x559 = -1;
	volatile int64_t t138 = 140661887083761LL;

    t138 = (((x557!=x558)/x559)|x560);

    if (t138 != 858390201896308LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x561 = 60287211802285LL;
	volatile uint16_t x562 = 610U;
	int16_t x563 = -5011;
	uint8_t x564 = UINT8_MAX;
	int32_t t139 = 226;

    t139 = (((x561!=x562)/x563)|x564);

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x566 = 19951117154LL;
	int32_t x567 = 1;
	volatile int64_t x568 = INT64_MIN;
	static volatile int64_t t140 = -518963LL;

    t140 = (((x565!=x566)/x567)|x568);

    if (t140 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x569 = INT32_MIN;
	volatile int64_t x570 = INT64_MIN;
	int8_t x571 = INT8_MIN;
	uint64_t x572 = UINT64_MAX;
	static uint64_t t141 = UINT64_MAX;

    t141 = (((x569!=x570)/x571)|x572);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x577 = INT32_MIN;
	int64_t x578 = 1LL;
	uint32_t x579 = 917303299U;
	int8_t x580 = INT8_MAX;
	static uint32_t t142 = 104U;

    t142 = (((x577!=x578)/x579)|x580);

    if (t142 != 127U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x581 = INT64_MIN;
	uint16_t x582 = 1U;
	volatile uint64_t x583 = 55LLU;
	volatile int8_t x584 = 6;
	volatile uint64_t t143 = 403307176755279LLU;

    t143 = (((x581!=x582)/x583)|x584);

    if (t143 != 6LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = UINT64_MAX;
	uint16_t x586 = 3U;
	uint16_t x587 = 405U;
	uint8_t x588 = 3U;
	volatile int32_t t144 = -8911;

    t144 = (((x585!=x586)/x587)|x588);

    if (t144 != 3) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x590 = INT32_MAX;
	volatile uint64_t x591 = 299487152600124296LLU;
	volatile uint64_t t145 = 144996997LLU;

    t145 = (((x589!=x590)/x591)|x592);

    if (t145 != 255LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x593 = -1;
	volatile int8_t x594 = -1;
	int8_t x595 = 21;
	int32_t x596 = 6171;
	int32_t t146 = -84;

    t146 = (((x593!=x594)/x595)|x596);

    if (t146 != 6171) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x601 = INT8_MIN;
	volatile uint64_t x602 = 415366201085LLU;
	static int64_t x604 = INT64_MIN;
	volatile int64_t t147 = 229429LL;

    t147 = (((x601!=x602)/x603)|x604);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 224090652U;
	int64_t x606 = INT64_MIN;
	int32_t x607 = INT32_MIN;
	int16_t x608 = INT16_MAX;

    t148 = (((x605!=x606)/x607)|x608);

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x609 = 0;
	int64_t x611 = -4429902673245LL;
	int16_t x612 = 0;
	int64_t t149 = -927142687405161LL;

    t149 = (((x609!=x610)/x611)|x612);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x613 = 4272827556805432132LLU;
	static uint16_t x614 = UINT16_MAX;
	uint32_t x615 = 349224U;
	volatile uint64_t x616 = UINT64_MAX;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (((x613!=x614)/x615)|x616);

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x617 = 20900U;
	uint32_t x618 = UINT32_MAX;
	volatile uint16_t x619 = 248U;
	static int32_t x620 = -19355662;
	int32_t t151 = 838721356;

    t151 = (((x617!=x618)/x619)|x620);

    if (t151 != -19355662) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x621 = 40U;
	int16_t x622 = 6;
	int64_t x623 = -1LL;
	volatile int64_t t152 = 97391264LL;

    t152 = (((x621!=x622)/x623)|x624);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = INT64_MIN;
	uint16_t x626 = 9881U;
	uint8_t x627 = 12U;
	int32_t x628 = INT32_MAX;
	int32_t t153 = INT32_MAX;

    t153 = (((x625!=x626)/x627)|x628);

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x629 = -4400LL;
	static int64_t x631 = INT64_MIN;
	volatile uint32_t x632 = UINT32_MAX;

    t154 = (((x629!=x630)/x631)|x632);

    if (t154 != 4294967295LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x633 = INT64_MAX;
	int64_t x634 = 19642208611LL;
	static int16_t x635 = INT16_MIN;
	volatile int64_t x636 = INT64_MIN;
	int64_t t155 = INT64_MIN;

    t155 = (((x633!=x634)/x635)|x636);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x637 = -23;
	int8_t x639 = 12;
	int64_t x640 = -1LL;
	int64_t t156 = 318100446372516LL;

    t156 = (((x637!=x638)/x639)|x640);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x642 = 359213156LLU;
	int32_t x643 = -775816;
	static int16_t x644 = INT16_MAX;
	int32_t t157 = 879;

    t157 = (((x641!=x642)/x643)|x644);

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x645 = 56U;
	volatile int16_t x646 = INT16_MAX;
	int64_t x647 = -62814995256602516LL;
	int8_t x648 = -2;
	volatile int64_t t158 = 20687595122865433LL;

    t158 = (((x645!=x646)/x647)|x648);

    if (t158 != -2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = 244203;
	static int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MIN;
	volatile int16_t x652 = -1;
	volatile int64_t t159 = 666644778060LL;

    t159 = (((x649!=x650)/x651)|x652);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = INT16_MAX;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x656 = UINT64_MAX;

    t160 = (((x653!=x654)/x655)|x656);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = INT8_MAX;
	uint16_t x658 = UINT16_MAX;
	int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t161 = 331184489;

    t161 = (((x657!=x658)/x659)|x660);

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x661 = -1;
	int32_t x662 = -1;
	static volatile int64_t x663 = INT64_MAX;
	int64_t t162 = 13LL;

    t162 = (((x661!=x662)/x663)|x664);

    if (t162 != 22316LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x665 = 34U;
	int16_t x666 = INT16_MAX;
	static int16_t x667 = -1618;
	static uint32_t x668 = 583U;
	static uint32_t t163 = 1569948776U;

    t163 = (((x665!=x666)/x667)|x668);

    if (t163 != 583U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = UINT8_MAX;
	static int8_t x671 = -1;
	volatile int32_t x672 = INT32_MIN;

    t164 = (((x669!=x670)/x671)|x672);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x673 = INT8_MIN;
	volatile int8_t x674 = INT8_MIN;
	static uint16_t x675 = 234U;
	volatile int32_t t165 = -5622;

    t165 = (((x673!=x674)/x675)|x676);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x678 = 1597U;
	int64_t x679 = INT64_MIN;
	int64_t x680 = -20063888748028LL;
	int64_t t166 = -465733LL;

    t166 = (((x677!=x678)/x679)|x680);

    if (t166 != -20063888748028LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x681 = 393U;
	volatile int16_t x682 = INT16_MIN;
	int8_t x683 = -1;
	volatile int64_t t167 = -99769634701LL;

    t167 = (((x681!=x682)/x683)|x684);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x685 = -1;
	volatile int16_t x686 = -12306;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 999663LLU;

    t168 = (((x685!=x686)/x687)|x688);

    if (t168 != 999663LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = INT64_MAX;
	uint32_t x691 = 244U;
	int8_t x692 = -1;
	uint32_t t169 = UINT32_MAX;

    t169 = (((x689!=x690)/x691)|x692);

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x693 = -1864780846161046LL;
	int16_t x695 = -1;
	volatile int16_t x696 = -1;
	int32_t t170 = -13;

    t170 = (((x693!=x694)/x695)|x696);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x697 = -76;
	int64_t x698 = INT64_MIN;
	volatile uint8_t x699 = 3U;
	uint32_t t171 = 298996U;

    t171 = (((x697!=x698)/x699)|x700);

    if (t171 != 1356935U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = INT16_MIN;
	static volatile int32_t t172 = 224267;

    t172 = (((x701!=x702)/x703)|x704);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = INT16_MIN;
	static int32_t x706 = INT32_MAX;
	volatile int32_t x707 = 1;
	uint16_t x708 = 45U;
	volatile int32_t t173 = -20;

    t173 = (((x705!=x706)/x707)|x708);

    if (t173 != 45) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = INT64_MIN;
	uint32_t x711 = UINT32_MAX;
	uint32_t t174 = UINT32_MAX;

    t174 = (((x709!=x710)/x711)|x712);

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x713 = INT32_MAX;
	uint16_t x714 = UINT16_MAX;
	static int64_t x716 = -49384889211LL;
	int64_t t175 = -9304767LL;

    t175 = (((x713!=x714)/x715)|x716);

    if (t175 != -49384889211LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x718 = -1LL;
	static int32_t x719 = INT32_MIN;
	int32_t t176 = 951;

    t176 = (((x717!=x718)/x719)|x720);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x721 = INT32_MAX;
	uint16_t x722 = 91U;
	uint16_t x723 = 3U;

    t177 = (((x721!=x722)/x723)|x724);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x725 = INT8_MIN;
	static uint32_t x727 = 800399090U;
	uint32_t x728 = 350U;

    t178 = (((x725!=x726)/x727)|x728);

    if (t178 != 350U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x729 = UINT16_MAX;
	int32_t x730 = -635;
	uint8_t x731 = UINT8_MAX;
	volatile int8_t x732 = INT8_MAX;
	volatile int32_t t179 = -860182;

    t179 = (((x729!=x730)/x731)|x732);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x734 = UINT32_MAX;
	int64_t x736 = -1LL;
	volatile int64_t t180 = -3836982702753369232LL;

    t180 = (((x733!=x734)/x735)|x736);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x737 = INT8_MIN;
	static volatile uint16_t x738 = UINT16_MAX;
	int8_t x739 = -30;
	static int32_t x740 = -8;
	volatile int32_t t181 = -7448406;

    t181 = (((x737!=x738)/x739)|x740);

    if (t181 != -8) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x741 = INT32_MIN;
	uint64_t x743 = 384647107918010LLU;
	static volatile uint64_t x744 = 118360734093805223LLU;
	volatile uint64_t t182 = 13LLU;

    t182 = (((x741!=x742)/x743)|x744);

    if (t182 != 118360734093805223LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x746 = INT64_MIN;
	static int32_t x747 = -54372;
	static volatile int32_t t183 = -5181921;

    t183 = (((x745!=x746)/x747)|x748);

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x749 = -1;
	int32_t x751 = INT32_MIN;
	static int8_t x752 = INT8_MIN;
	static volatile int32_t t184 = -1916;

    t184 = (((x749!=x750)/x751)|x752);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x753 = INT16_MIN;
	int16_t x755 = 16;
	static volatile int16_t x756 = INT16_MIN;
	int32_t t185 = 92;

    t185 = (((x753!=x754)/x755)|x756);

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x757 = -1;
	uint32_t x758 = 3880666U;
	int32_t x759 = INT32_MIN;
	int32_t x760 = 188625;
	int32_t t186 = 32286033;

    t186 = (((x757!=x758)/x759)|x760);

    if (t186 != 188625) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x763 = -1LL;
	int64_t x764 = -162931LL;
	volatile int64_t t187 = -6LL;

    t187 = (((x761!=x762)/x763)|x764);

    if (t187 != -162931LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = UINT8_MAX;
	uint32_t x767 = UINT32_MAX;
	int8_t x768 = INT8_MIN;
	uint32_t t188 = 2639492U;

    t188 = (((x765!=x766)/x767)|x768);

    if (t188 != 4294967168U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x769 = -1LL;
	volatile uint16_t x770 = UINT16_MAX;
	int64_t x771 = 226362950LL;
	int64_t t189 = -77998693290095884LL;

    t189 = (((x769!=x770)/x771)|x772);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x775 = 1;
	int64_t x776 = -1LL;

    t190 = (((x773!=x774)/x775)|x776);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x777 = 350316670LLU;
	static int32_t x778 = -15670;
	int64_t x780 = INT64_MIN;
	volatile int64_t t191 = INT64_MIN;

    t191 = (((x777!=x778)/x779)|x780);

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x781 = UINT8_MAX;
	uint16_t x782 = 8356U;
	uint64_t x783 = UINT64_MAX;
	uint64_t x784 = 10726182LLU;
	static uint64_t t192 = 4934LLU;

    t192 = (((x781!=x782)/x783)|x784);

    if (t192 != 10726182LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x785 = 5U;
	int8_t x786 = -1;
	volatile int16_t x787 = 126;
	int32_t x788 = -1;

    t193 = (((x785!=x786)/x787)|x788);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x789 = 0U;
	uint64_t x790 = UINT64_MAX;
	volatile int16_t x791 = INT16_MIN;
	uint64_t x792 = UINT64_MAX;
	volatile uint64_t t194 = UINT64_MAX;

    t194 = (((x789!=x790)/x791)|x792);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x793 = INT64_MIN;
	uint64_t x794 = UINT64_MAX;
	volatile int32_t x795 = -1235;
	static volatile int32_t x796 = 95602;
	volatile int32_t t195 = -36276;

    t195 = (((x793!=x794)/x795)|x796);

    if (t195 != 95602) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x797 = INT8_MIN;
	static int64_t x798 = 412803916LL;
	uint16_t x799 = 6U;
	static int32_t x800 = -3126;
	volatile int32_t t196 = -103724348;

    t196 = (((x797!=x798)/x799)|x800);

    if (t196 != -3126) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x801 = INT8_MIN;
	volatile int64_t x803 = INT64_MIN;
	uint16_t x804 = UINT16_MAX;
	volatile int64_t t197 = -1462459036LL;

    t197 = (((x801!=x802)/x803)|x804);

    if (t197 != 65535LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x805 = -71;
	uint8_t x806 = UINT8_MAX;
	int32_t x807 = INT32_MAX;
	volatile uint64_t x808 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = (((x805!=x806)/x807)|x808);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x809 = UINT8_MAX;
	int64_t x810 = 1LL;
	static volatile int8_t x811 = INT8_MAX;
	int32_t t199 = -1;

    t199 = (((x809!=x810)/x811)|x812);

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

