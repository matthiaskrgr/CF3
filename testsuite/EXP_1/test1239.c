
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

static int32_t x2 = -1;
int16_t x7 = INT16_MIN;
volatile int32_t t1 = -810497;
uint8_t x10 = UINT8_MAX;
int16_t x17 = -1;
static uint32_t x22 = UINT32_MAX;
volatile int8_t x28 = INT8_MAX;
int32_t t6 = 2;
static int64_t x34 = -1LL;
uint32_t x36 = 0U;
int32_t x42 = INT32_MIN;
uint16_t x45 = 663U;
uint8_t x51 = UINT8_MAX;
static uint8_t x56 = UINT8_MAX;
int32_t t13 = 50683301;
int64_t x60 = INT64_MIN;
volatile int32_t t14 = 299229768;
int8_t x64 = 11;
static int32_t t15 = -574464;
int8_t x65 = INT8_MIN;
uint8_t x67 = 1U;
int32_t x68 = 47671199;
int64_t x72 = INT64_MIN;
volatile uint16_t x73 = 6933U;
int8_t x81 = INT8_MAX;
static int32_t x82 = INT32_MIN;
uint64_t x83 = 51LLU;
static volatile int32_t t21 = -11;
uint8_t x104 = 22U;
uint16_t x105 = 24U;
int8_t x107 = -1;
uint8_t x116 = 3U;
int32_t x118 = -1;
uint64_t x128 = 58065943004837LLU;
int32_t t30 = 1;
static volatile int32_t x129 = INT32_MIN;
volatile int32_t t31 = -62;
int32_t x133 = -4353;
int32_t x140 = INT32_MAX;
int32_t t33 = 303444;
int8_t x142 = INT8_MIN;
int32_t x145 = 28240;
volatile int16_t x147 = 315;
static int64_t x149 = -102659174890916LL;
volatile int32_t t36 = -136;
static int16_t x160 = 0;
int64_t x161 = -4111828743849681LL;
uint32_t x162 = 364U;
uint8_t x164 = 23U;
int8_t x165 = INT8_MIN;
uint64_t x166 = 1900LLU;
static uint8_t x170 = 2U;
int32_t t43 = -6553609;
int32_t x182 = -1;
static int8_t x183 = 1;
static int32_t t44 = 1987;
uint32_t x185 = 1794U;
int64_t x197 = -1LL;
volatile int8_t x199 = INT8_MAX;
uint16_t x203 = UINT16_MAX;
static volatile int64_t x210 = INT64_MIN;
int32_t x212 = INT32_MIN;
static volatile int32_t t51 = -167;
int64_t x213 = INT64_MIN;
int64_t x216 = -1LL;
int32_t x220 = INT32_MAX;
int32_t t53 = 482;
int8_t x224 = INT8_MIN;
static volatile int64_t x233 = -1LL;
static volatile uint32_t x240 = 8090282U;
volatile int8_t x251 = INT8_MIN;
static int64_t x253 = INT64_MIN;
uint64_t x254 = 37LLU;
uint64_t x260 = 612296867793552441LLU;
static volatile int32_t x262 = -22;
int16_t x264 = INT16_MIN;
int8_t x266 = INT8_MAX;
static int16_t x274 = -1;
static volatile int16_t x276 = INT16_MIN;
int32_t t66 = -3765;
uint32_t x283 = UINT32_MAX;
static volatile int32_t t67 = 5249058;
int16_t x293 = -1;
volatile int64_t x294 = 44425406472895028LL;
uint32_t x297 = UINT32_MAX;
int16_t x307 = -179;
int8_t x310 = INT8_MAX;
int16_t x315 = INT16_MAX;
int32_t t77 = 19879;
volatile int16_t x332 = INT16_MIN;
int8_t x340 = INT8_MAX;
uint32_t x346 = 1882925U;
int64_t x352 = INT64_MAX;
volatile int32_t t83 = -161836;
int64_t x353 = -1LL;
volatile uint64_t x356 = 10143131LLU;
volatile int16_t x360 = -512;
int8_t x365 = -1;
int16_t x369 = -1;
volatile int16_t x374 = INT16_MIN;
volatile int32_t t89 = 15732;
int8_t x379 = -1;
int16_t x380 = INT16_MAX;
int64_t x381 = 40698178747LL;
static volatile int32_t x382 = -2;
uint64_t x384 = UINT64_MAX;
volatile int32_t t91 = -84837;
volatile int64_t x388 = -1LL;
int32_t t94 = 117446766;
volatile uint16_t x398 = 1U;
uint16_t x402 = 23946U;
int32_t x408 = 739;
volatile uint8_t x409 = 30U;
volatile uint64_t x410 = UINT64_MAX;
volatile uint64_t x411 = 49LLU;
volatile int32_t t98 = -6006412;
int8_t x417 = INT8_MAX;
volatile int32_t x433 = -1;
uint8_t x434 = 1U;
volatile int8_t x438 = INT8_MIN;
static uint32_t x441 = UINT32_MAX;
uint8_t x442 = UINT8_MAX;
int16_t x443 = INT16_MAX;
int32_t x447 = -52062247;
int32_t x450 = -486953469;
int32_t x451 = INT32_MAX;
int8_t x453 = INT8_MAX;
static uint32_t x455 = 6737010U;
int64_t x467 = -1LL;
int16_t x468 = 6;
volatile uint64_t x475 = 711LLU;
static int32_t t116 = -1;
int16_t x487 = INT16_MIN;
static int8_t x490 = INT8_MIN;
int16_t x491 = INT16_MIN;
int32_t x492 = INT32_MIN;
volatile int16_t x498 = 240;
int32_t t120 = 54216;
uint16_t x508 = 336U;
static volatile int32_t t123 = 10268;
uint16_t x514 = 1299U;
int16_t x527 = INT16_MIN;
int16_t x530 = -6;
int64_t x532 = INT64_MIN;
int32_t t128 = 36019;
static int8_t x534 = -1;
static uint32_t x544 = 223343422U;
int16_t x545 = INT16_MAX;
volatile uint64_t x546 = UINT64_MAX;
int32_t t133 = -850399;
int64_t x559 = 693LL;
int8_t x563 = INT8_MIN;
int8_t x564 = INT8_MAX;
int32_t x568 = INT32_MAX;
int8_t x570 = -1;
static int8_t x575 = INT8_MIN;
int64_t x578 = 2LL;
static volatile int32_t t140 = -1008721;
volatile int8_t x584 = INT8_MAX;
volatile int32_t t142 = 8185;
int32_t x589 = INT32_MIN;
int32_t x591 = -1;
volatile int32_t t144 = -175;
int64_t x604 = -1LL;
int32_t t146 = 17;
int64_t x611 = INT64_MIN;
int8_t x614 = 0;
int16_t x622 = -1;
int8_t x626 = -3;
volatile int32_t t152 = -2041894;
volatile int8_t x630 = INT8_MAX;
int16_t x637 = -1967;
uint16_t x638 = UINT16_MAX;
static volatile int8_t x649 = -1;
uint64_t x651 = 10LLU;
int64_t x654 = -1LL;
int32_t x667 = INT32_MAX;
volatile int32_t x669 = -119345;
int32_t t164 = -1;
int16_t x684 = INT16_MIN;
static volatile int16_t x687 = -6;
int16_t x691 = INT16_MAX;
int8_t x693 = INT8_MIN;
volatile int32_t t169 = 52035;
static int32_t t170 = 702001430;
uint32_t x707 = UINT32_MAX;
static volatile int8_t x710 = INT8_MAX;
int8_t x720 = -1;
int8_t x731 = INT8_MIN;
uint8_t x739 = 49U;
static int64_t x745 = -1LL;
int32_t x754 = INT32_MAX;
static uint16_t x755 = 343U;
uint64_t x763 = 11602210046290LLU;
static volatile int32_t t185 = -15897;
uint8_t x770 = 13U;
volatile int32_t t187 = 144125;
uint16_t x780 = 158U;
static uint8_t x783 = 17U;
int8_t x789 = 1;
static uint8_t x801 = 4U;
static volatile uint64_t x810 = 3LLU;
uint8_t x812 = 15U;
int32_t t196 = -18053130;
uint32_t x813 = 546115U;
uint64_t x815 = 97LLU;
uint64_t x822 = 747842320608LLU;
int32_t t199 = 629925;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile uint16_t x3 = UINT16_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -26398288;

    t0 = (((x1!=x2)%x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 1670LLU;
	int64_t x6 = -262784308553LL;
	int16_t x8 = 13722;

    t1 = (((x5!=x6)%x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int32_t x11 = 438513;
	int16_t x12 = 2116;
	static volatile int32_t t2 = 342;

    t2 = (((x9!=x10)%x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MAX;
	uint32_t x15 = 5725610U;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 28685;

    t3 = (((x13!=x14)%x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x18 = 47U;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = -1;
	int32_t t4 = 362462;

    t4 = (((x17!=x18)%x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 55U;
	static int32_t x23 = INT32_MIN;
	int8_t x24 = -1;
	volatile int32_t t5 = 1;

    t5 = (((x21!=x22)%x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MAX;

    t6 = (((x25!=x26)%x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 1705040983U;
	volatile int64_t x30 = 6105774650967LL;
	int64_t x31 = 62LL;
	int64_t x32 = -1LL;
	volatile int32_t t7 = 46;

    t7 = (((x29!=x30)%x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	static int8_t x35 = INT8_MIN;
	static int32_t t8 = -664422471;

    t8 = (((x33!=x34)%x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	static int8_t x38 = 12;
	uint16_t x39 = 2U;
	int64_t x40 = INT64_MAX;
	int32_t t9 = 2;

    t9 = (((x37!=x38)%x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	static volatile uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 6658;

    t10 = (((x41!=x42)%x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1LL;
	uint16_t x47 = 7U;
	volatile int32_t x48 = -1;
	static int32_t t11 = -724999;

    t11 = (((x45!=x46)%x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 86LL;
	uint32_t x50 = UINT32_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = -4832257;

    t12 = (((x49!=x50)%x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 3008201U;
	uint32_t x54 = 0U;
	static int8_t x55 = -1;

    t13 = (((x53!=x54)%x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	static volatile int64_t x58 = 2045LL;
	uint8_t x59 = UINT8_MAX;

    t14 = (((x57!=x58)%x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 37885835U;
	int8_t x62 = 61;
	static int32_t x63 = -17184;

    t15 = (((x61!=x62)%x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MAX;
	volatile int32_t t16 = 5215;

    t16 = (((x65!=x66)%x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 1115985093856697LLU;
	int16_t x70 = 412;
	int8_t x71 = INT8_MIN;
	volatile int32_t t17 = -25358144;

    t17 = (((x69!=x70)%x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int16_t x76 = 20;
	int32_t t18 = -865164683;

    t18 = (((x73!=x74)%x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 0U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	volatile int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 127;

    t19 = (((x77!=x78)%x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x84 = 2;
	static int32_t t20 = -11207;

    t20 = (((x81!=x82)%x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint8_t x86 = UINT8_MAX;
	uint64_t x87 = UINT64_MAX;
	uint16_t x88 = 2473U;

    t21 = (((x85!=x86)%x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 4U;
	int16_t x90 = 32;
	static uint64_t x91 = 1272116512060492186LLU;
	uint8_t x92 = 3U;
	volatile int32_t t22 = -672540822;

    t22 = (((x89!=x90)%x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 0U;
	int8_t x94 = -1;
	int16_t x95 = -1;
	int64_t x96 = 1126LL;
	volatile int32_t t23 = 0;

    t23 = (((x93!=x94)%x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 92U;
	int8_t x99 = -1;
	uint32_t x100 = 66U;
	volatile int32_t t24 = 52664;

    t24 = (((x97!=x98)%x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	volatile int16_t x103 = INT16_MIN;
	int32_t t25 = -171;

    t25 = (((x101!=x102)%x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	volatile uint32_t x108 = 2U;
	int32_t t26 = -1207324;

    t26 = (((x105!=x106)%x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int64_t x114 = -1LL;
	int64_t x115 = INT64_MAX;
	int32_t t27 = 13;

    t27 = (((x113!=x114)%x115)!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x117 = 1;
	uint16_t x119 = 9416U;
	volatile int32_t x120 = INT32_MIN;
	static volatile int32_t t28 = -312;

    t28 = (((x117!=x118)%x119)!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = -48;
	volatile int8_t x122 = INT8_MIN;
	uint8_t x123 = 7U;
	uint64_t x124 = 9899847663486LLU;
	int32_t t29 = 60317702;

    t29 = (((x121!=x122)%x123)!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -17876867517295380LL;
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MIN;

    t30 = (((x125!=x126)%x127)!=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x130 = UINT32_MAX;
	uint32_t x131 = 4603722U;
	int32_t x132 = 108273031;

    t31 = (((x129!=x130)%x131)!=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x134 = 1LL;
	uint64_t x135 = UINT64_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t32 = 2451;

    t32 = (((x133!=x134)%x135)!=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -21;
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MIN;

    t33 = (((x137!=x138)%x139)!=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x141 = UINT8_MAX;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t34 = 62086684;

    t34 = (((x141!=x142)%x143)!=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x146 = INT32_MIN;
	int16_t x148 = 0;
	int32_t t35 = -78347498;

    t35 = (((x145!=x146)%x147)!=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x150 = INT64_MIN;
	uint16_t x151 = 7U;
	static int32_t x152 = -126395;

    t36 = (((x149!=x150)%x151)!=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x153 = 50U;
	uint8_t x154 = 0U;
	int8_t x155 = -1;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t37 = -13;

    t37 = (((x153!=x154)%x155)!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	int32_t x159 = INT32_MIN;
	static volatile int32_t t38 = -93037845;

    t38 = (((x157!=x158)%x159)!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x163 = INT32_MIN;
	static int32_t t39 = -661;

    t39 = (((x161!=x162)%x163)!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x167 = 418;
	uint64_t x168 = 1LLU;
	volatile int32_t t40 = -79003409;

    t40 = (((x165!=x166)%x167)!=x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x169 = 19704150491LLU;
	static uint64_t x171 = 953612LLU;
	int8_t x172 = INT8_MAX;
	volatile int32_t t41 = -110;

    t41 = (((x169!=x170)%x171)!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = 27;
	int32_t x174 = INT32_MAX;
	int16_t x175 = -14;
	uint32_t x176 = 1635705U;
	int32_t t42 = 62360437;

    t42 = (((x173!=x174)%x175)!=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MAX;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = -20955817683LL;
	uint8_t x180 = UINT8_MAX;

    t43 = (((x177!=x178)%x179)!=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 3U;
	uint32_t x184 = 17475U;

    t44 = (((x181!=x182)%x183)!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = -480343042;

    t45 = (((x185!=x186)%x187)!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = 4403U;
	volatile int64_t x190 = -116845399LL;
	volatile int8_t x191 = 1;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t46 = 3;

    t46 = (((x189!=x190)%x191)!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = UINT64_MAX;
	static int8_t x194 = INT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t47 = -4031212;

    t47 = (((x193!=x194)%x195)!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x198 = INT64_MIN;
	volatile int32_t x200 = 7118918;
	static int32_t t48 = 7085934;

    t48 = (((x197!=x198)%x199)!=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x201 = 16U;
	int16_t x202 = INT16_MAX;
	uint16_t x204 = UINT16_MAX;
	int32_t t49 = 2262;

    t49 = (((x201!=x202)%x203)!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x205 = INT8_MIN;
	static int32_t x206 = -2;
	static int64_t x207 = -3221794236627973048LL;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t50 = 7;

    t50 = (((x205!=x206)%x207)!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = 2647;
	int32_t x211 = INT32_MAX;

    t51 = (((x209!=x210)%x211)!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x214 = 41800060;
	static int64_t x215 = -1LL;
	volatile int32_t t52 = 555;

    t52 = (((x213!=x214)%x215)!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x217 = 1U;
	volatile uint16_t x218 = UINT16_MAX;
	int64_t x219 = -1045739761906LL;

    t53 = (((x217!=x218)%x219)!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MAX;
	uint8_t x222 = 0U;
	int32_t x223 = -28421;
	int32_t t54 = -523592772;

    t54 = (((x221!=x222)%x223)!=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = 5285932810048028LL;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 0U;
	volatile int32_t t55 = 184678;

    t55 = (((x225!=x226)%x227)!=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x234 = 3U;
	volatile uint32_t x235 = 2142235658U;
	static int16_t x236 = -2589;
	volatile int32_t t56 = 120424;

    t56 = (((x233!=x234)%x235)!=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x237 = 1043949008;
	int8_t x238 = INT8_MAX;
	int16_t x239 = -11691;
	int32_t t57 = 12376864;

    t57 = (((x237!=x238)%x239)!=x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = 27908823114784LLU;
	uint32_t x242 = 22090U;
	int64_t x243 = 3335871152001246903LL;
	int8_t x244 = INT8_MIN;
	volatile int32_t t58 = -4204;

    t58 = (((x241!=x242)%x243)!=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = 7640LLU;
	int64_t x250 = INT64_MAX;
	int32_t x252 = 36753;
	volatile int32_t t59 = -14926954;

    t59 = (((x249!=x250)%x251)!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	volatile int32_t t60 = -1;

    t60 = (((x253!=x254)%x255)!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = INT64_MAX;
	int16_t x258 = 14039;
	volatile int32_t x259 = INT32_MAX;
	int32_t t61 = -6;

    t61 = (((x257!=x258)%x259)!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x261 = UINT32_MAX;
	volatile int16_t x263 = INT16_MIN;
	int32_t t62 = 50;

    t62 = (((x261!=x262)%x263)!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = -1;
	int32_t x267 = -754889;
	uint8_t x268 = 99U;
	static int32_t t63 = -12081757;

    t63 = (((x265!=x266)%x267)!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = 17624U;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t64 = 31;

    t64 = (((x269!=x270)%x271)!=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int16_t x275 = 408;
	int32_t t65 = 4;

    t65 = (((x273!=x274)%x275)!=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x277 = 3341967LLU;
	volatile uint8_t x278 = 6U;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;

    t66 = (((x277!=x278)%x279)!=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x281 = 0U;
	volatile uint16_t x282 = UINT16_MAX;
	volatile int8_t x284 = INT8_MIN;

    t67 = (((x281!=x282)%x283)!=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x286 = 35;
	int8_t x287 = INT8_MIN;
	int16_t x288 = 0;
	volatile int32_t t68 = 49750492;

    t68 = (((x285!=x286)%x287)!=x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x289 = UINT64_MAX;
	int32_t x290 = -1;
	int16_t x291 = -1;
	int16_t x292 = -630;
	static int32_t t69 = -25721598;

    t69 = (((x289!=x290)%x291)!=x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x295 = -1;
	uint64_t x296 = 6076LLU;
	int32_t t70 = 2567051;

    t70 = (((x293!=x294)%x295)!=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x298 = 0;
	static int8_t x299 = 1;
	int32_t x300 = INT32_MAX;
	int32_t t71 = 493542116;

    t71 = (((x297!=x298)%x299)!=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MAX;
	int32_t x303 = -1;
	volatile uint16_t x304 = UINT16_MAX;
	int32_t t72 = 153377775;

    t72 = (((x301!=x302)%x303)!=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MAX;
	uint64_t x306 = UINT64_MAX;
	static volatile uint32_t x308 = 193U;
	volatile int32_t t73 = 3896280;

    t73 = (((x305!=x306)%x307)!=x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	volatile int8_t x312 = -1;
	volatile int32_t t74 = -859;

    t74 = (((x309!=x310)%x311)!=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x316 = -1;
	volatile int32_t t75 = -880;

    t75 = (((x313!=x314)%x315)!=x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x321 = 13;
	int64_t x322 = INT64_MAX;
	int64_t x323 = -1LL;
	int64_t x324 = -378LL;
	int32_t t76 = -230739;

    t76 = (((x321!=x322)%x323)!=x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	volatile int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;

    t77 = (((x325!=x326)%x327)!=x328);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	int32_t t78 = -8948536;

    t78 = (((x329!=x330)%x331)!=x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = 1830123;
	volatile uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 392269458932087044LLU;
	int32_t x336 = -106853;
	volatile int32_t t79 = 340;

    t79 = (((x333!=x334)%x335)!=x336);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x337 = 3U;
	int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	int32_t t80 = 1;

    t80 = (((x337!=x338)%x339)!=x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = -1;
	int64_t x342 = -1LL;
	static volatile uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = INT8_MIN;
	int32_t t81 = 288203355;

    t81 = (((x341!=x342)%x343)!=x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = INT64_MIN;
	uint16_t x347 = 7U;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t82 = -798545098;

    t82 = (((x345!=x346)%x347)!=x348);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = INT64_MIN;
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;

    t83 = (((x349!=x350)%x351)!=x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x354 = 4123U;
	int16_t x355 = 1;
	volatile int32_t t84 = 87;

    t84 = (((x353!=x354)%x355)!=x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	volatile int32_t x359 = -1;
	volatile int32_t t85 = -120109869;

    t85 = (((x357!=x358)%x359)!=x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x361 = -1LL;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	static int32_t t86 = -6737922;

    t86 = (((x361!=x362)%x363)!=x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x366 = 1345295U;
	uint64_t x367 = 149659181623524316LLU;
	static int32_t x368 = -1407;
	int32_t t87 = 702722898;

    t87 = (((x365!=x366)%x367)!=x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x370 = INT64_MIN;
	int64_t x371 = 272LL;
	static uint16_t x372 = 1018U;
	volatile int32_t t88 = 6;

    t88 = (((x369!=x370)%x371)!=x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = -1;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;

    t89 = (((x373!=x374)%x375)!=x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x377 = 0U;
	static uint32_t x378 = 63844U;
	volatile int32_t t90 = 283165;

    t90 = (((x377!=x378)%x379)!=x380);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x383 = INT64_MAX;

    t91 = (((x381!=x382)%x383)!=x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile int16_t x387 = -1;
	int32_t t92 = -85122130;

    t92 = (((x385!=x386)%x387)!=x388);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x389 = 54U;
	volatile int64_t x390 = 3031LL;
	uint16_t x391 = 399U;
	int8_t x392 = 23;
	volatile int32_t t93 = -1525061;

    t93 = (((x389!=x390)%x391)!=x392);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x393 = INT64_MIN;
	static uint32_t x394 = 1587786U;
	volatile uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 8U;

    t94 = (((x393!=x394)%x395)!=x396);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = INT64_MAX;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MAX;
	int32_t t95 = 120394;

    t95 = (((x397!=x398)%x399)!=x400);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = 8U;
	volatile uint64_t x403 = 210354LLU;
	int64_t x404 = -581726692LL;
	volatile int32_t t96 = -4709317;

    t96 = (((x401!=x402)%x403)!=x404);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x405 = 27U;
	int8_t x406 = 4;
	uint16_t x407 = UINT16_MAX;
	volatile int32_t t97 = 3;

    t97 = (((x405!=x406)%x407)!=x408);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x412 = 48U;

    t98 = (((x409!=x410)%x411)!=x412);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = INT64_MAX;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = 15;
	int32_t t99 = -1;

    t99 = (((x413!=x414)%x415)!=x416);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x418 = INT32_MIN;
	uint16_t x419 = 5604U;
	uint8_t x420 = UINT8_MAX;
	int32_t t100 = -667646;

    t100 = (((x417!=x418)%x419)!=x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x421 = INT64_MIN;
	static int32_t x422 = INT32_MAX;
	uint16_t x423 = 2U;
	static uint64_t x424 = UINT64_MAX;
	static int32_t t101 = -17;

    t101 = (((x421!=x422)%x423)!=x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MIN;
	uint8_t x426 = 17U;
	static int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	static int32_t t102 = 23;

    t102 = (((x425!=x426)%x427)!=x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x429 = UINT16_MAX;
	int8_t x430 = INT8_MIN;
	int8_t x431 = -21;
	uint64_t x432 = 134582736LLU;
	int32_t t103 = -39669314;

    t103 = (((x429!=x430)%x431)!=x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x435 = INT8_MIN;
	volatile int8_t x436 = 7;
	int32_t t104 = 14;

    t104 = (((x433!=x434)%x435)!=x436);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = INT32_MIN;
	volatile int8_t x439 = INT8_MAX;
	volatile int8_t x440 = INT8_MIN;
	static int32_t t105 = 1431;

    t105 = (((x437!=x438)%x439)!=x440);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x444 = 6U;
	static volatile int32_t t106 = 45;

    t106 = (((x441!=x442)%x443)!=x444);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x445 = INT64_MIN;
	int8_t x446 = INT8_MIN;
	static uint32_t x448 = UINT32_MAX;
	static int32_t t107 = -16;

    t107 = (((x445!=x446)%x447)!=x448);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x449 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	volatile int32_t t108 = -281;

    t108 = (((x449!=x450)%x451)!=x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x454 = 14U;
	int32_t x456 = INT32_MIN;
	int32_t t109 = -2984;

    t109 = (((x453!=x454)%x455)!=x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x457 = 38U;
	uint32_t x458 = UINT32_MAX;
	int8_t x459 = INT8_MIN;
	static int64_t x460 = INT64_MAX;
	volatile int32_t t110 = -1694;

    t110 = (((x457!=x458)%x459)!=x460);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = -1;
	volatile int8_t x463 = INT8_MIN;
	int16_t x464 = 3;
	static volatile int32_t t111 = -517222;

    t111 = (((x461!=x462)%x463)!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x465 = 8934U;
	static int64_t x466 = -1LL;
	volatile int32_t t112 = -161545314;

    t112 = (((x465!=x466)%x467)!=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = INT32_MAX;
	static int16_t x470 = INT16_MIN;
	static int8_t x471 = INT8_MAX;
	int64_t x472 = -1157LL;
	int32_t t113 = 3120;

    t113 = (((x469!=x470)%x471)!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x473 = -1;
	static volatile int64_t x474 = -1LL;
	static uint64_t x476 = 166898LLU;
	static int32_t t114 = 62621;

    t114 = (((x473!=x474)%x475)!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x477 = UINT8_MAX;
	int64_t x478 = INT64_MIN;
	volatile uint16_t x479 = UINT16_MAX;
	volatile uint16_t x480 = UINT16_MAX;
	static volatile int32_t t115 = -519;

    t115 = (((x477!=x478)%x479)!=x480);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x481 = -84;
	volatile int8_t x482 = INT8_MIN;
	volatile uint32_t x483 = 133569U;
	int32_t x484 = INT32_MAX;

    t116 = (((x481!=x482)%x483)!=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = 254468;
	static uint16_t x486 = UINT16_MAX;
	int8_t x488 = INT8_MAX;
	volatile int32_t t117 = 0;

    t117 = (((x485!=x486)%x487)!=x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int32_t t118 = 916;

    t118 = (((x489!=x490)%x491)!=x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = INT8_MIN;
	static int8_t x494 = INT8_MIN;
	static int32_t x495 = -291554903;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t119 = -744919721;

    t119 = (((x493!=x494)%x495)!=x496);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = INT16_MIN;
	static int16_t x499 = INT16_MAX;
	uint64_t x500 = 476575978480LLU;

    t120 = (((x497!=x498)%x499)!=x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x501 = -1LL;
	volatile uint16_t x502 = 9U;
	int16_t x503 = INT16_MAX;
	int32_t x504 = INT32_MIN;
	int32_t t121 = 62;

    t121 = (((x501!=x502)%x503)!=x504);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x505 = 22U;
	int64_t x506 = -1LL;
	static int32_t x507 = INT32_MAX;
	int32_t t122 = 494783;

    t122 = (((x505!=x506)%x507)!=x508);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x509 = 1908001575U;
	int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	int64_t x512 = -1LL;

    t123 = (((x509!=x510)%x511)!=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x513 = UINT16_MAX;
	static int16_t x515 = INT16_MAX;
	volatile int16_t x516 = 1562;
	volatile int32_t t124 = -972;

    t124 = (((x513!=x514)%x515)!=x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x517 = 3794080LL;
	static int64_t x518 = 40960815682382LL;
	static volatile int8_t x519 = INT8_MAX;
	uint16_t x520 = UINT16_MAX;
	int32_t t125 = -124373;

    t125 = (((x517!=x518)%x519)!=x520);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MIN;
	static int8_t x522 = INT8_MIN;
	volatile int64_t x523 = 88369LL;
	int16_t x524 = -1;
	volatile int32_t t126 = 9051863;

    t126 = (((x521!=x522)%x523)!=x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = INT32_MIN;
	uint64_t x526 = 9472067LLU;
	uint64_t x528 = 5863792689485LLU;
	volatile int32_t t127 = -459;

    t127 = (((x525!=x526)%x527)!=x528);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 335U;
	int16_t x531 = -1;

    t128 = (((x529!=x530)%x531)!=x532);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x533 = 45U;
	int8_t x535 = -28;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t129 = 687113;

    t129 = (((x533!=x534)%x535)!=x536);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x537 = 1U;
	static int64_t x538 = INT64_MIN;
	int16_t x539 = INT16_MIN;
	volatile uint8_t x540 = 3U;
	volatile int32_t t130 = -64843594;

    t130 = (((x537!=x538)%x539)!=x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x541 = 520802784U;
	uint32_t x542 = 1519U;
	static int32_t x543 = -1;
	volatile int32_t t131 = -9;

    t131 = (((x541!=x542)%x543)!=x544);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x547 = INT8_MAX;
	uint16_t x548 = 13U;
	int32_t t132 = -685013;

    t132 = (((x545!=x546)%x547)!=x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x549 = INT16_MAX;
	static int8_t x550 = INT8_MAX;
	uint16_t x551 = 27041U;
	static int8_t x552 = INT8_MAX;

    t133 = (((x549!=x550)%x551)!=x552);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MIN;
	volatile int32_t x554 = INT32_MIN;
	int32_t x555 = INT32_MIN;
	uint64_t x556 = 387LLU;
	static int32_t t134 = 0;

    t134 = (((x553!=x554)%x555)!=x556);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x557 = 806790938851897LL;
	int16_t x558 = 2510;
	int64_t x560 = INT64_MAX;
	volatile int32_t t135 = 779;

    t135 = (((x557!=x558)%x559)!=x560);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = 38U;
	int64_t x562 = 520025801401186603LL;
	static volatile int32_t t136 = 383586677;

    t136 = (((x561!=x562)%x563)!=x564);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = INT32_MIN;
	int64_t x566 = -1LL;
	uint64_t x567 = UINT64_MAX;
	volatile int32_t t137 = -276911;

    t137 = (((x565!=x566)%x567)!=x568);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x569 = -1;
	volatile int64_t x571 = INT64_MAX;
	uint32_t x572 = 1065836U;
	int32_t t138 = 38369928;

    t138 = (((x569!=x570)%x571)!=x572);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = INT32_MIN;
	static volatile int16_t x574 = INT16_MAX;
	int64_t x576 = INT64_MIN;
	int32_t t139 = 3;

    t139 = (((x573!=x574)%x575)!=x576);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x577 = 101198330U;
	int16_t x579 = -1196;
	int64_t x580 = INT64_MIN;

    t140 = (((x577!=x578)%x579)!=x580);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x581 = 7;
	int16_t x582 = -1;
	uint8_t x583 = 3U;
	volatile int32_t t141 = 1273027;

    t141 = (((x581!=x582)%x583)!=x584);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	uint64_t x588 = UINT64_MAX;

    t142 = (((x585!=x586)%x587)!=x588);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x590 = INT64_MAX;
	volatile int8_t x592 = -8;
	volatile int32_t t143 = -166076296;

    t143 = (((x589!=x590)%x591)!=x592);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = -3621;
	static int16_t x594 = INT16_MIN;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = INT64_MIN;

    t144 = (((x593!=x594)%x595)!=x596);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x597 = 2U;
	static int16_t x598 = -10;
	volatile int16_t x599 = INT16_MIN;
	uint8_t x600 = 0U;
	int32_t t145 = -394;

    t145 = (((x597!=x598)%x599)!=x600);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = -1;
	uint8_t x602 = 93U;
	static uint32_t x603 = 184314U;

    t146 = (((x601!=x602)%x603)!=x604);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x605 = UINT8_MAX;
	volatile int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MAX;
	int8_t x608 = INT8_MIN;
	volatile int32_t t147 = -332414;

    t147 = (((x605!=x606)%x607)!=x608);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x609 = 26U;
	static uint64_t x610 = 3321934139206117LLU;
	int64_t x612 = INT64_MIN;
	volatile int32_t t148 = -1500115;

    t148 = (((x609!=x610)%x611)!=x612);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = 46U;
	uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MAX;
	volatile int32_t t149 = -12874755;

    t149 = (((x613!=x614)%x615)!=x616);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x617 = 16568763078586LL;
	int8_t x618 = 0;
	int16_t x619 = -14539;
	int16_t x620 = INT16_MAX;
	int32_t t150 = 61;

    t150 = (((x617!=x618)%x619)!=x620);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x621 = -1;
	int16_t x623 = 6055;
	int64_t x624 = INT64_MIN;
	volatile int32_t t151 = 228;

    t151 = (((x621!=x622)%x623)!=x624);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = 1;
	uint8_t x627 = 1U;
	volatile int32_t x628 = INT32_MIN;

    t152 = (((x625!=x626)%x627)!=x628);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MAX;
	uint8_t x631 = 18U;
	uint32_t x632 = 1U;
	volatile int32_t t153 = 1;

    t153 = (((x629!=x630)%x631)!=x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x633 = UINT8_MAX;
	uint64_t x634 = 893005193LLU;
	volatile int16_t x635 = INT16_MAX;
	int16_t x636 = INT16_MIN;
	int32_t t154 = 760594294;

    t154 = (((x633!=x634)%x635)!=x636);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x639 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	static volatile int32_t t155 = -479046107;

    t155 = (((x637!=x638)%x639)!=x640);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x641 = 0LLU;
	uint32_t x642 = 55656535U;
	int8_t x643 = -1;
	int8_t x644 = -3;
	volatile int32_t t156 = -14489582;

    t156 = (((x641!=x642)%x643)!=x644);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x645 = 81;
	uint16_t x646 = 4U;
	int16_t x647 = 3074;
	volatile uint8_t x648 = 1U;
	int32_t t157 = 16;

    t157 = (((x645!=x646)%x647)!=x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x650 = INT64_MIN;
	int16_t x652 = -1;
	int32_t t158 = -29851;

    t158 = (((x649!=x650)%x651)!=x652);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = 1;
	int16_t x655 = INT16_MIN;
	int8_t x656 = 4;
	int32_t t159 = -319184727;

    t159 = (((x653!=x654)%x655)!=x656);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = INT32_MIN;
	static int32_t x658 = 94;
	static volatile uint16_t x659 = 2423U;
	int16_t x660 = -1;
	int32_t t160 = 1;

    t160 = (((x657!=x658)%x659)!=x660);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x661 = UINT32_MAX;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MAX;
	int16_t x664 = INT16_MIN;
	int32_t t161 = -23040285;

    t161 = (((x661!=x662)%x663)!=x664);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x665 = 404750U;
	static int16_t x666 = -1;
	volatile int8_t x668 = -1;
	int32_t t162 = 3331313;

    t162 = (((x665!=x666)%x667)!=x668);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x670 = INT16_MIN;
	static int8_t x671 = INT8_MIN;
	int64_t x672 = 305570643174890LL;
	volatile int32_t t163 = 19;

    t163 = (((x669!=x670)%x671)!=x672);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = INT16_MAX;
	volatile uint16_t x678 = 17U;
	static int32_t x679 = 13168114;
	volatile int16_t x680 = 10;

    t164 = (((x677!=x678)%x679)!=x680);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = 7;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	volatile int32_t t165 = 78543723;

    t165 = (((x681!=x682)%x683)!=x684);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x685 = 486U;
	int32_t x686 = INT32_MIN;
	volatile uint64_t x688 = 0LLU;
	int32_t t166 = -9205;

    t166 = (((x685!=x686)%x687)!=x688);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = INT64_MAX;
	int32_t x690 = -7235;
	uint32_t x692 = 12273064U;
	static int32_t t167 = -282604;

    t167 = (((x689!=x690)%x691)!=x692);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = 1967435637LL;
	volatile int32_t t168 = 107907870;

    t168 = (((x693!=x694)%x695)!=x696);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x697 = 94U;
	int16_t x698 = -1;
	int64_t x699 = INT64_MAX;
	static uint32_t x700 = 1018541278U;

    t169 = (((x697!=x698)%x699)!=x700);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MAX;
	int8_t x702 = INT8_MIN;
	volatile int16_t x703 = INT16_MIN;
	int32_t x704 = -4079;

    t170 = (((x701!=x702)%x703)!=x704);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x705 = 25068U;
	volatile int8_t x706 = INT8_MIN;
	static int8_t x708 = INT8_MAX;
	int32_t t171 = 18149;

    t171 = (((x705!=x706)%x707)!=x708);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x709 = 357572300LLU;
	volatile uint64_t x711 = 78435891LLU;
	int8_t x712 = INT8_MIN;
	volatile int32_t t172 = 0;

    t172 = (((x709!=x710)%x711)!=x712);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = -352230584;
	uint16_t x714 = 5827U;
	int16_t x715 = INT16_MIN;
	volatile int16_t x716 = INT16_MIN;
	volatile int32_t t173 = -5557;

    t173 = (((x713!=x714)%x715)!=x716);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x717 = 0;
	static uint64_t x718 = UINT64_MAX;
	uint64_t x719 = 994888872LLU;
	static volatile int32_t t174 = -5;

    t174 = (((x717!=x718)%x719)!=x720);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x721 = INT16_MAX;
	int64_t x722 = INT64_MIN;
	int16_t x723 = INT16_MIN;
	volatile int16_t x724 = INT16_MAX;
	static volatile int32_t t175 = -34335105;

    t175 = (((x721!=x722)%x723)!=x724);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x725 = INT64_MAX;
	volatile int8_t x726 = -2;
	uint32_t x727 = UINT32_MAX;
	int16_t x728 = INT16_MIN;
	int32_t t176 = -167476783;

    t176 = (((x725!=x726)%x727)!=x728);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = INT32_MIN;
	uint32_t x730 = 54U;
	volatile uint32_t x732 = 732499U;
	volatile int32_t t177 = -2;

    t177 = (((x729!=x730)%x731)!=x732);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = 1982U;
	int32_t x734 = -1;
	static int64_t x735 = INT64_MIN;
	int64_t x736 = INT64_MIN;
	int32_t t178 = 1211385;

    t178 = (((x733!=x734)%x735)!=x736);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x737 = UINT64_MAX;
	int16_t x738 = 595;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t179 = -7;

    t179 = (((x737!=x738)%x739)!=x740);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x741 = 6U;
	uint32_t x742 = 120502582U;
	int16_t x743 = INT16_MAX;
	int8_t x744 = -1;
	volatile int32_t t180 = 0;

    t180 = (((x741!=x742)%x743)!=x744);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x746 = -1LL;
	int8_t x747 = INT8_MIN;
	volatile uint64_t x748 = UINT64_MAX;
	static int32_t t181 = 0;

    t181 = (((x745!=x746)%x747)!=x748);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x749 = INT8_MIN;
	volatile int32_t x750 = INT32_MIN;
	int32_t x751 = INT32_MAX;
	uint8_t x752 = 55U;
	static volatile int32_t t182 = 3;

    t182 = (((x749!=x750)%x751)!=x752);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = -1;
	uint64_t x756 = 6653109706716LLU;
	volatile int32_t t183 = 11376308;

    t183 = (((x753!=x754)%x755)!=x756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x757 = INT64_MIN;
	uint8_t x758 = 83U;
	static uint32_t x759 = 341U;
	int8_t x760 = INT8_MIN;
	static int32_t t184 = -85643;

    t184 = (((x757!=x758)%x759)!=x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = 3LLU;
	int8_t x762 = 34;
	volatile uint32_t x764 = 2490U;

    t185 = (((x761!=x762)%x763)!=x764);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = INT16_MIN;
	uint8_t x771 = 27U;
	static volatile uint8_t x772 = UINT8_MAX;
	volatile int32_t t186 = -6;

    t186 = (((x769!=x770)%x771)!=x772);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x773 = UINT16_MAX;
	volatile int64_t x774 = 344268748LL;
	uint16_t x775 = 342U;
	volatile int8_t x776 = INT8_MAX;

    t187 = (((x773!=x774)%x775)!=x776);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = 5;
	int16_t x778 = INT16_MIN;
	int64_t x779 = -209305LL;
	volatile int32_t t188 = -4564;

    t188 = (((x777!=x778)%x779)!=x780);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x781 = 18LLU;
	static int32_t x782 = INT32_MIN;
	int32_t x784 = INT32_MIN;
	int32_t t189 = -2;

    t189 = (((x781!=x782)%x783)!=x784);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x785 = 7;
	volatile int32_t x786 = INT32_MIN;
	int64_t x787 = INT64_MIN;
	int64_t x788 = 15510175LL;
	static int32_t t190 = -6862;

    t190 = (((x785!=x786)%x787)!=x788);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x790 = -1;
	int64_t x791 = 1LL;
	int64_t x792 = INT64_MAX;
	int32_t t191 = 5246;

    t191 = (((x789!=x790)%x791)!=x792);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x793 = INT16_MIN;
	int16_t x794 = -596;
	uint32_t x795 = UINT32_MAX;
	int16_t x796 = INT16_MAX;
	int32_t t192 = 308;

    t192 = (((x793!=x794)%x795)!=x796);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -12449LL;
	uint64_t x798 = 2LLU;
	uint16_t x799 = 49U;
	static int8_t x800 = 4;
	int32_t t193 = 6236;

    t193 = (((x797!=x798)%x799)!=x800);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x802 = UINT8_MAX;
	int16_t x803 = 11;
	static volatile uint8_t x804 = 2U;
	volatile int32_t t194 = 43;

    t194 = (((x801!=x802)%x803)!=x804);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x805 = 25;
	static int16_t x806 = -1;
	uint32_t x807 = UINT32_MAX;
	static int64_t x808 = -1LL;
	volatile int32_t t195 = 32;

    t195 = (((x805!=x806)%x807)!=x808);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x809 = 41854833LLU;
	uint8_t x811 = 5U;

    t196 = (((x809!=x810)%x811)!=x812);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x814 = INT16_MIN;
	volatile int64_t x816 = -5LL;
	volatile int32_t t197 = -5244;

    t197 = (((x813!=x814)%x815)!=x816);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x818 = -2;
	uint16_t x819 = 2U;
	int64_t x820 = -9884LL;
	volatile int32_t t198 = -130448088;

    t198 = (((x817!=x818)%x819)!=x820);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = INT8_MIN;
	uint16_t x823 = UINT16_MAX;
	uint32_t x824 = 125953U;

    t199 = (((x821!=x822)%x823)!=x824);

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

