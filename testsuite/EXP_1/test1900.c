
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

volatile int32_t x7 = -1;
int32_t t1 = 1;
uint64_t x10 = UINT64_MAX;
uint16_t x15 = 23U;
uint32_t x25 = 1974509U;
uint64_t x29 = UINT64_MAX;
uint16_t x35 = 22927U;
uint16_t x38 = 17743U;
static uint16_t x39 = UINT16_MAX;
volatile int32_t x40 = 63074;
int64_t x41 = INT64_MAX;
int8_t x43 = INT8_MIN;
volatile uint64_t x44 = 71655LLU;
int32_t t11 = 23482253;
static volatile uint16_t x51 = 99U;
static int32_t x53 = INT32_MIN;
static volatile uint64_t x63 = 17476198LLU;
static volatile int32_t x64 = INT32_MAX;
volatile int32_t t16 = -1616;
volatile int32_t t17 = -404862220;
int8_t x78 = -1;
uint64_t x85 = 58LLU;
int32_t x87 = -25584286;
volatile uint32_t x89 = 366256U;
int64_t x95 = -315924468853593LL;
uint16_t x102 = 216U;
static uint8_t x103 = UINT8_MAX;
int64_t x112 = -367297843465891762LL;
volatile int32_t t27 = 6;
int64_t x123 = INT64_MIN;
int8_t x124 = INT8_MIN;
volatile int64_t x133 = INT64_MIN;
int32_t t33 = 4275;
int32_t x147 = 427;
static int32_t x150 = INT32_MAX;
static int16_t x152 = -1;
int64_t x156 = -8383121LL;
int32_t t39 = -2471516;
int32_t t40 = 1930;
volatile int64_t x165 = -1LL;
static uint32_t x166 = 1087509U;
int16_t x171 = INT16_MIN;
int8_t x184 = INT8_MIN;
int32_t t49 = 7787;
uint32_t x214 = UINT32_MAX;
static volatile int32_t t53 = -3;
static uint16_t x221 = 40U;
volatile uint16_t x226 = UINT16_MAX;
int8_t x227 = INT8_MIN;
int64_t x229 = INT64_MAX;
static volatile int16_t x240 = -1;
static int16_t x242 = INT16_MIN;
volatile int32_t t60 = 3465273;
uint8_t x246 = 40U;
volatile int32_t t61 = -41;
int16_t x249 = -1;
int64_t x251 = INT64_MIN;
int16_t x259 = INT16_MIN;
uint32_t x260 = UINT32_MAX;
int16_t x266 = INT16_MIN;
int64_t x267 = INT64_MIN;
volatile int32_t t67 = -83660;
int16_t x273 = -2;
volatile uint32_t x275 = 2017204U;
uint32_t x276 = 39408403U;
volatile int32_t t68 = -9203;
volatile int64_t x277 = INT64_MIN;
static uint8_t x279 = 2U;
volatile int32_t t69 = 1958066;
int16_t x282 = INT16_MIN;
int32_t x287 = INT32_MIN;
static volatile int64_t x289 = -48LL;
static volatile int32_t t72 = 16;
volatile int32_t x299 = 1808457;
uint32_t x313 = 871U;
volatile int16_t x315 = INT16_MIN;
uint64_t x316 = 633LLU;
int32_t t78 = -23078129;
volatile int64_t x319 = 100091LL;
int64_t x327 = 17007233298740LL;
static uint64_t x331 = UINT64_MAX;
uint16_t x337 = 233U;
volatile int16_t x344 = -1;
volatile int32_t t85 = 1180610;
static int16_t x347 = -1;
int16_t x348 = INT16_MIN;
static int32_t x353 = INT32_MIN;
static int16_t x365 = -6;
uint32_t x367 = UINT32_MAX;
int64_t x368 = INT64_MIN;
static int32_t t92 = 11;
static uint8_t x378 = 1U;
int8_t x380 = -5;
static volatile int32_t x383 = -166343;
int16_t x384 = 851;
volatile int32_t x387 = -1;
volatile int32_t x396 = -154481425;
static uint64_t x402 = UINT64_MAX;
int8_t x412 = -1;
static int32_t t102 = -221560;
volatile uint64_t x413 = 14897LLU;
volatile int8_t x419 = INT8_MIN;
int32_t t104 = -15152702;
volatile int32_t t105 = -9148;
int32_t x429 = INT32_MAX;
static uint16_t x431 = 220U;
volatile int8_t x436 = -1;
volatile int16_t x437 = 350;
static uint16_t x445 = 15U;
volatile int64_t x453 = INT64_MAX;
static volatile int8_t x456 = INT8_MIN;
volatile int32_t t113 = -1;
uint32_t x465 = 396U;
int16_t x466 = INT16_MIN;
uint64_t x473 = 97LLU;
static int64_t x474 = INT64_MIN;
int8_t x475 = INT8_MAX;
int32_t x484 = INT32_MIN;
static uint32_t x487 = 5U;
static int8_t x514 = INT8_MIN;
int32_t t128 = 315;
volatile int16_t x517 = -1;
uint64_t x518 = UINT64_MAX;
int16_t x522 = -1;
volatile int16_t x528 = 0;
uint32_t x531 = 20188272U;
int32_t t132 = 161423;
volatile uint8_t x536 = 13U;
volatile int32_t x539 = 21645;
int8_t x540 = 39;
uint16_t x541 = 1020U;
int8_t x543 = 0;
int32_t x545 = INT32_MIN;
volatile int8_t x546 = 7;
static uint64_t x548 = 0LLU;
uint16_t x549 = 190U;
static int32_t x551 = INT32_MAX;
volatile int16_t x557 = INT16_MIN;
uint8_t x568 = UINT8_MAX;
volatile int32_t x572 = INT32_MIN;
int8_t x583 = INT8_MAX;
int32_t t146 = -63;
uint32_t x593 = 0U;
int32_t x594 = INT32_MAX;
int8_t x596 = INT8_MAX;
int32_t t148 = -143896;
int16_t x616 = 1;
static uint8_t x619 = 16U;
volatile int64_t x623 = 20884676966378LL;
uint16_t x626 = 10990U;
static uint8_t x627 = 0U;
int16_t x632 = 2;
int32_t t157 = 930248489;
volatile int32_t t158 = -1;
int64_t x645 = 211610327LL;
int8_t x647 = -1;
int8_t x658 = 26;
int8_t x659 = INT8_MIN;
volatile int32_t x663 = 10214695;
int32_t x664 = -1;
uint32_t x675 = 16988U;
volatile int32_t t169 = -1916140;
static int32_t t170 = 71786764;
int32_t x685 = -11484;
int16_t x687 = -154;
volatile int32_t x691 = INT32_MIN;
int64_t x692 = -1LL;
static volatile int8_t x696 = 1;
static int8_t x697 = INT8_MIN;
uint64_t x702 = UINT64_MAX;
int64_t x710 = INT64_MIN;
int64_t x711 = 9448LL;
uint32_t x716 = 1U;
uint16_t x721 = 180U;
int32_t x723 = INT32_MIN;
uint64_t x724 = 4037753245136LLU;
volatile int64_t x730 = INT64_MIN;
int8_t x732 = 1;
static uint8_t x738 = UINT8_MAX;
uint64_t x741 = 1456096971700473LLU;
static volatile uint16_t x742 = 7U;
int64_t x748 = INT64_MIN;
int16_t x749 = INT16_MIN;
static uint32_t x751 = UINT32_MAX;
uint64_t x755 = 0LLU;
int32_t t188 = -88241;
int8_t x761 = 4;
int16_t x770 = -1454;
uint8_t x775 = UINT8_MAX;
int32_t t197 = 133294466;
volatile int32_t t199 = -9644;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x3 = -159543;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 1;

    t0 = (((x1<=x2)<=x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 0U;
	int8_t x8 = 0;

    t1 = (((x5<=x6)<=x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 3U;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	static int32_t t2 = 434;

    t2 = (((x9<=x10)<=x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	int8_t x14 = -1;
	uint64_t x16 = 203538LLU;
	volatile int32_t t3 = 945136;

    t3 = (((x13<=x14)<=x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MAX;
	static int64_t x19 = -1LL;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 154650;

    t4 = (((x17<=x18)<=x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -67003002LL;
	uint64_t x22 = 68726LLU;
	static int32_t x23 = -234;
	static uint16_t x24 = 30U;
	int32_t t5 = 536;

    t5 = (((x21<=x22)<=x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = 9906;

    t6 = (((x25<=x26)<=x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = 1535;

    t7 = (((x29<=x30)<=x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	volatile uint64_t x34 = 372925525LLU;
	int64_t x36 = 3694690594454LL;
	static int32_t t8 = -13027322;

    t8 = (((x33<=x34)<=x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile int32_t t9 = 1188;

    t9 = (((x37<=x38)<=x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = INT8_MIN;
	volatile int32_t t10 = 9;

    t10 = (((x41<=x42)<=x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -13903;
	uint64_t x46 = UINT64_MAX;
	uint32_t x47 = 1U;
	int32_t x48 = INT32_MAX;

    t11 = (((x45<=x46)<=x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 1;
	int32_t x50 = 2;
	static volatile uint16_t x52 = 149U;
	static int32_t t12 = 480191;

    t12 = (((x49<=x50)<=x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	volatile uint32_t x55 = UINT32_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -549;

    t13 = (((x53<=x54)<=x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MIN;
	static uint16_t x58 = 11U;
	static int16_t x59 = 127;
	volatile uint8_t x60 = 15U;
	int32_t t14 = -29289;

    t14 = (((x57<=x58)<=x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = 74167843730225LL;
	uint32_t x62 = 2U;
	volatile int32_t t15 = 781730;

    t15 = (((x61<=x62)<=x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = INT32_MIN;
	volatile int8_t x66 = -1;
	uint8_t x67 = 21U;
	static volatile uint16_t x68 = 9U;

    t16 = (((x65<=x66)<=x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	static int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	volatile int32_t x72 = INT32_MIN;

    t17 = (((x69<=x70)<=x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 236LLU;
	int16_t x74 = 479;
	volatile uint16_t x75 = 0U;
	int8_t x76 = 2;
	int32_t t18 = 103;

    t18 = (((x73<=x74)<=x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 23U;
	static uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 3U;
	volatile int32_t t19 = 580622273;

    t19 = (((x77<=x78)<=x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x82 = -91;
	static int16_t x83 = -1;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = 2371110;

    t20 = (((x81<=x82)<=x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -77073891;
	volatile uint64_t x88 = 594879974479081863LLU;
	volatile int32_t t21 = 1;

    t21 = (((x85<=x86)<=x87)<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = 0U;
	int16_t x91 = INT16_MIN;
	static uint8_t x92 = 1U;
	volatile int32_t t22 = 10087;

    t22 = (((x89<=x90)<=x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 1U;
	static int16_t x94 = -21;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = 5728111;

    t23 = (((x93<=x94)<=x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 568256645654LLU;
	int16_t x98 = INT16_MIN;
	volatile int32_t x99 = INT32_MAX;
	static uint16_t x100 = 398U;
	int32_t t24 = 502525049;

    t24 = (((x97<=x98)<=x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = INT64_MAX;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 507240;

    t25 = (((x101<=x102)<=x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 14558568LL;
	static int8_t x106 = -28;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 6;

    t26 = (((x105<=x106)<=x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint64_t x110 = 4374423744250518LLU;
	static int32_t x111 = INT32_MAX;

    t27 = (((x109<=x110)<=x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 244U;
	uint32_t x115 = 1218368202U;
	int8_t x116 = -1;
	volatile int32_t t28 = -3;

    t28 = (((x113<=x114)<=x115)<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -2205407LL;
	int8_t x118 = -1;
	int16_t x119 = 414;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 0;

    t29 = (((x117<=x118)<=x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 80U;
	volatile int8_t x122 = INT8_MIN;
	volatile int32_t t30 = 0;

    t30 = (((x121<=x122)<=x123)<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = 49U;
	volatile int16_t x126 = 202;
	static uint8_t x127 = 35U;
	uint8_t x128 = 100U;
	volatile int32_t t31 = 426298454;

    t31 = (((x125<=x126)<=x127)<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -5;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	static uint32_t x132 = 120719140U;
	int32_t t32 = 8;

    t32 = (((x129<=x130)<=x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x134 = 10U;
	volatile uint64_t x135 = 271764080364LLU;
	static int32_t x136 = INT32_MIN;

    t33 = (((x133<=x134)<=x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	volatile int64_t x138 = INT64_MIN;
	static int16_t x139 = -8758;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 4861724;

    t34 = (((x137<=x138)<=x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MAX;
	volatile int32_t x144 = INT32_MAX;
	static int32_t t35 = -1433;

    t35 = (((x141<=x142)<=x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	volatile int32_t x146 = -1;
	int8_t x148 = -1;
	volatile int32_t t36 = -987158;

    t36 = (((x145<=x146)<=x147)<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int64_t x151 = INT64_MAX;
	volatile int32_t t37 = -10;

    t37 = (((x149<=x150)<=x151)<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 89LLU;
	int64_t x154 = -1LL;
	uint64_t x155 = UINT64_MAX;
	volatile int32_t t38 = -939573145;

    t38 = (((x153<=x154)<=x155)<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 76LL;
	volatile int32_t x158 = -3;
	int32_t x159 = -124;
	int16_t x160 = 4957;

    t39 = (((x157<=x158)<=x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = 1285060LL;
	static int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	int16_t x164 = 15364;

    t40 = (((x161<=x162)<=x163)<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x167 = -33812133515LL;
	int32_t x168 = -1;
	int32_t t41 = -114926;

    t41 = (((x165<=x166)<=x167)<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x169 = UINT64_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	static uint32_t x172 = 23013621U;
	volatile int32_t t42 = -1;

    t42 = (((x169<=x170)<=x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -21LL;
	int64_t x174 = 34085488444267LL;
	static uint8_t x175 = 31U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -8899;

    t43 = (((x173<=x174)<=x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 52438879LLU;
	static int32_t x178 = INT32_MIN;
	int8_t x179 = 26;
	int64_t x180 = INT64_MAX;
	static int32_t t44 = 155159;

    t44 = (((x177<=x178)<=x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MIN;
	volatile int16_t x183 = -99;
	int32_t t45 = 11;

    t45 = (((x181<=x182)<=x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	volatile uint32_t x186 = UINT32_MAX;
	int32_t x187 = -14;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -1;

    t46 = (((x185<=x186)<=x187)<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	volatile uint32_t x191 = 269015882U;
	uint64_t x192 = 2521420LLU;
	volatile int32_t t47 = 10945974;

    t47 = (((x189<=x190)<=x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	volatile int64_t x194 = 61LL;
	int8_t x195 = -13;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 127946863;

    t48 = (((x193<=x194)<=x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	volatile int32_t x198 = INT32_MIN;
	static int64_t x199 = INT64_MAX;
	uint32_t x200 = 395099U;

    t49 = (((x197<=x198)<=x199)<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 4;
	int16_t x202 = 110;
	static int16_t x203 = INT16_MIN;
	volatile int64_t x204 = -13LL;
	int32_t t50 = -181155;

    t50 = (((x201<=x202)<=x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int16_t x206 = 900;
	int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = 287498037984916092LLU;
	int32_t t51 = 65298;

    t51 = (((x205<=x206)<=x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	int32_t x210 = 42;
	uint32_t x211 = UINT32_MAX;
	static int32_t x212 = -1;
	int32_t t52 = 37829;

    t52 = (((x209<=x210)<=x211)<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = -18;
	volatile int8_t x215 = 26;
	volatile uint16_t x216 = 8875U;

    t53 = (((x213<=x214)<=x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 11;
	uint8_t x218 = 2U;
	uint64_t x219 = 8930630LLU;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t54 = -74;

    t54 = (((x217<=x218)<=x219)<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	static int16_t x223 = INT16_MIN;
	int16_t x224 = 10;
	static volatile int32_t t55 = 55;

    t55 = (((x221<=x222)<=x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 0U;
	volatile int16_t x228 = INT16_MAX;
	int32_t t56 = -155389;

    t56 = (((x225<=x226)<=x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x230 = 2LL;
	int64_t x231 = -1LL;
	int32_t x232 = -1;
	static int32_t t57 = 398;

    t57 = (((x229<=x230)<=x231)<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	uint64_t x234 = 293473875LLU;
	volatile int64_t x235 = 973511LL;
	static uint16_t x236 = 3U;
	static int32_t t58 = -1;

    t58 = (((x233<=x234)<=x235)<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -1;
	static int32_t x238 = INT32_MAX;
	uint8_t x239 = 27U;
	int32_t t59 = 554068;

    t59 = (((x237<=x238)<=x239)<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	int16_t x243 = -1;
	volatile int8_t x244 = 38;

    t60 = (((x241<=x242)<=x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = -1;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;

    t61 = (((x245<=x246)<=x247)<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = 712;
	static uint32_t x252 = 121237U;
	volatile int32_t t62 = 10045851;

    t62 = (((x249<=x250)<=x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MAX;
	uint64_t x254 = 63925351653779LLU;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t63 = -3658873;

    t63 = (((x253<=x254)<=x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 5507290;
	volatile uint32_t x258 = UINT32_MAX;
	static volatile int32_t t64 = 26;

    t64 = (((x257<=x258)<=x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	int32_t x262 = -1;
	int64_t x263 = INT64_MIN;
	uint8_t x264 = 3U;
	int32_t t65 = -25;

    t65 = (((x261<=x262)<=x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	int32_t x268 = 11424563;
	volatile int32_t t66 = 31062734;

    t66 = (((x265<=x266)<=x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	int64_t x271 = INT64_MIN;
	volatile int8_t x272 = -15;

    t67 = (((x269<=x270)<=x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -10562;

    t68 = (((x273<=x274)<=x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = -31;
	static int64_t x280 = -12601432LL;

    t69 = (((x277<=x278)<=x279)<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -9;
	int8_t x283 = 7;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t70 = 623;

    t70 = (((x281<=x282)<=x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = 32;
	int32_t x286 = -1;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -187547;

    t71 = (((x285<=x286)<=x287)<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	int32_t x292 = -157185870;

    t72 = (((x289<=x290)<=x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 101U;
	int32_t x294 = -22272654;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = -1;
	int32_t t73 = -74152631;

    t73 = (((x293<=x294)<=x295)<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	uint64_t x298 = 2980709115LLU;
	uint8_t x300 = 0U;
	static int32_t t74 = 0;

    t74 = (((x297<=x298)<=x299)<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	uint64_t x302 = 17536LLU;
	uint16_t x303 = UINT16_MAX;
	volatile uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = 707053;

    t75 = (((x301<=x302)<=x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 612517142U;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 1675516579U;
	static int16_t x308 = -1;
	int32_t t76 = 1;

    t76 = (((x305<=x306)<=x307)<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = 69061476073LLU;
	int32_t x310 = INT32_MAX;
	int16_t x311 = -4;
	int16_t x312 = -1;
	volatile int32_t t77 = 1;

    t77 = (((x309<=x310)<=x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MAX;

    t78 = (((x313<=x314)<=x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MIN;
	volatile int16_t x320 = 1465;
	static int32_t t79 = 37;

    t79 = (((x317<=x318)<=x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = -1LL;
	volatile int64_t x322 = 528132537229LL;
	volatile int8_t x323 = 47;
	uint64_t x324 = 4402462086497152LLU;
	volatile int32_t t80 = -65794865;

    t80 = (((x321<=x322)<=x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -7022147325386LL;
	int16_t x326 = -1;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = -90;

    t81 = (((x325<=x326)<=x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	int8_t x330 = 21;
	static uint64_t x332 = 115846587LLU;
	int32_t t82 = -4;

    t82 = (((x329<=x330)<=x331)<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MAX;
	volatile int8_t x335 = -2;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -10221;

    t83 = (((x333<=x334)<=x335)<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MAX;
	int8_t x339 = -43;
	int32_t x340 = -463344;
	volatile int32_t t84 = 44087;

    t84 = (((x337<=x338)<=x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = 4U;

    t85 = (((x341<=x342)<=x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 107468544403LLU;
	volatile uint8_t x346 = 2U;
	int32_t t86 = 15942;

    t86 = (((x345<=x346)<=x347)<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 2;
	static int64_t x350 = -830713165858LL;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -11;
	volatile int32_t t87 = 2;

    t87 = (((x349<=x350)<=x351)<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x354 = 51100900570LLU;
	static int32_t x355 = -29;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -110;

    t88 = (((x353<=x354)<=x355)<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	static volatile int32_t x358 = -1;
	static int8_t x359 = -1;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t89 = 135;

    t89 = (((x357<=x358)<=x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MAX;
	int8_t x362 = -1;
	uint64_t x363 = 777159388613511652LLU;
	static int8_t x364 = 0;
	static volatile int32_t t90 = 13866122;

    t90 = (((x361<=x362)<=x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MAX;
	int32_t t91 = 0;

    t91 = (((x365<=x366)<=x367)<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = UINT32_MAX;
	volatile uint16_t x371 = 13448U;
	int32_t x372 = 11;

    t92 = (((x369<=x370)<=x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = UINT16_MAX;
	int64_t x374 = -2348LL;
	int32_t x375 = 8849;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = 1;

    t93 = (((x373<=x374)<=x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x377 = 59908U;
	int32_t x379 = INT32_MIN;
	static volatile int32_t t94 = 418;

    t94 = (((x377<=x378)<=x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -2;
	int8_t x382 = INT8_MIN;
	int32_t t95 = -23;

    t95 = (((x381<=x382)<=x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 0LL;
	int16_t x386 = 495;
	int32_t x388 = -989818;
	int32_t t96 = 35672213;

    t96 = (((x385<=x386)<=x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x389 = 31U;
	volatile int16_t x390 = INT16_MIN;
	int8_t x391 = 0;
	static int16_t x392 = INT16_MAX;
	static int32_t t97 = -1;

    t97 = (((x389<=x390)<=x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -6;
	volatile int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MIN;
	static int32_t t98 = 2;

    t98 = (((x393<=x394)<=x395)<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 11404;
	uint64_t x398 = 13618579131LLU;
	uint64_t x399 = 143LLU;
	int8_t x400 = -15;
	volatile int32_t t99 = -521430;

    t99 = (((x397<=x398)<=x399)<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 8U;
	int64_t x403 = -1LL;
	int8_t x404 = -1;
	static volatile int32_t t100 = 496;

    t100 = (((x401<=x402)<=x403)<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 34677133LLU;
	volatile uint32_t x406 = UINT32_MAX;
	uint16_t x407 = UINT16_MAX;
	volatile int16_t x408 = INT16_MIN;
	static int32_t t101 = 2842;

    t101 = (((x405<=x406)<=x407)<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	volatile uint32_t x410 = UINT32_MAX;
	static int32_t x411 = INT32_MAX;

    t102 = (((x409<=x410)<=x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x414 = 359U;
	volatile int32_t x415 = -1;
	static volatile int8_t x416 = -1;
	volatile int32_t t103 = 10743259;

    t103 = (((x413<=x414)<=x415)<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -2;
	uint32_t x418 = 24442191U;
	int16_t x420 = 8142;

    t104 = (((x417<=x418)<=x419)<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	uint8_t x422 = 6U;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MAX;

    t105 = (((x421<=x422)<=x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -135775612LL;
	uint8_t x426 = 0U;
	volatile int16_t x427 = INT16_MAX;
	volatile int32_t x428 = -382706986;
	int32_t t106 = -35695;

    t106 = (((x425<=x426)<=x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x430 = INT64_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t107 = -28;

    t107 = (((x429<=x430)<=x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	int64_t x434 = INT64_MAX;
	int8_t x435 = 0;
	int32_t t108 = -27;

    t108 = (((x433<=x434)<=x435)<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 748LLU;
	int8_t x439 = -1;
	int16_t x440 = INT16_MIN;
	int32_t t109 = -7292;

    t109 = (((x437<=x438)<=x439)<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 51;
	int8_t x444 = -1;
	int32_t t110 = 119;

    t110 = (((x441<=x442)<=x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = UINT64_MAX;
	static volatile int32_t t111 = 3191474;

    t111 = (((x445<=x446)<=x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 26U;
	int32_t x450 = 517;
	int16_t x451 = 478;
	int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 11;

    t112 = (((x449<=x450)<=x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x454 = 1U;
	uint8_t x455 = 3U;

    t113 = (((x453<=x454)<=x455)<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	static int8_t x458 = INT8_MIN;
	uint8_t x459 = 1U;
	uint64_t x460 = 21337147LLU;
	volatile int32_t t114 = 2019;

    t114 = (((x457<=x458)<=x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MAX;
	int16_t x462 = 23;
	int16_t x463 = -1;
	int32_t x464 = INT32_MIN;
	int32_t t115 = -1753571;

    t115 = (((x461<=x462)<=x463)<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x467 = INT32_MAX;
	static volatile uint32_t x468 = UINT32_MAX;
	volatile int32_t t116 = -78;

    t116 = (((x465<=x466)<=x467)<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	static int16_t x470 = -931;
	static uint32_t x471 = 23401124U;
	static int32_t x472 = INT32_MIN;
	volatile int32_t t117 = -150272;

    t117 = (((x469<=x470)<=x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x476 = -1LL;
	int32_t t118 = 210838;

    t118 = (((x473<=x474)<=x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MAX;
	volatile uint8_t x478 = 3U;
	int8_t x479 = INT8_MIN;
	int32_t x480 = 4929;
	volatile int32_t t119 = -688526;

    t119 = (((x477<=x478)<=x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = INT32_MIN;
	volatile uint16_t x482 = 18U;
	int8_t x483 = INT8_MIN;
	volatile int32_t t120 = -1;

    t120 = (((x481<=x482)<=x483)<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -204;
	int64_t x486 = -794732LL;
	static int64_t x488 = -29LL;
	static int32_t t121 = 62677911;

    t121 = (((x485<=x486)<=x487)<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = -4478531;
	uint16_t x490 = 13U;
	int32_t x491 = -59688376;
	static int32_t x492 = INT32_MAX;
	int32_t t122 = -1217;

    t122 = (((x489<=x490)<=x491)<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MAX;
	volatile int8_t x494 = INT8_MIN;
	uint32_t x495 = 2644U;
	int8_t x496 = INT8_MAX;
	int32_t t123 = 674032;

    t123 = (((x493<=x494)<=x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MAX;
	int32_t x499 = INT32_MIN;
	uint8_t x500 = 16U;
	int32_t t124 = -762060;

    t124 = (((x497<=x498)<=x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	volatile int8_t x502 = -18;
	static int8_t x503 = 39;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = 125782;

    t125 = (((x501<=x502)<=x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	static int32_t x506 = -17;
	static int64_t x507 = INT64_MAX;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t126 = 49;

    t126 = (((x505<=x506)<=x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x510 = 1;
	int8_t x511 = INT8_MIN;
	volatile uint64_t x512 = 1422054018863LLU;
	int32_t t127 = 74;

    t127 = (((x509<=x510)<=x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x515 = INT8_MAX;
	static uint16_t x516 = UINT16_MAX;

    t128 = (((x513<=x514)<=x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x519 = 1U;
	static volatile int8_t x520 = -1;
	volatile int32_t t129 = -86;

    t129 = (((x517<=x518)<=x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = 25LLU;
	int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MAX;
	int32_t t130 = 275426869;

    t130 = (((x521<=x522)<=x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = INT64_MAX;
	static uint16_t x526 = 1U;
	uint16_t x527 = 1659U;
	static volatile int32_t t131 = 0;

    t131 = (((x525<=x526)<=x527)<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 109107654047LLU;
	volatile int64_t x530 = -41LL;
	static int32_t x532 = -23722;

    t132 = (((x529<=x530)<=x531)<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -145;
	volatile int32_t x534 = 183442505;
	volatile int8_t x535 = INT8_MIN;
	int32_t t133 = -306621551;

    t133 = (((x533<=x534)<=x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = 446925182U;
	volatile int16_t x538 = 1;
	int32_t t134 = 26120816;

    t134 = (((x537<=x538)<=x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x542 = INT8_MAX;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t135 = 44;

    t135 = (((x541<=x542)<=x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x547 = UINT16_MAX;
	volatile int32_t t136 = 0;

    t136 = (((x545<=x546)<=x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x550 = -1LL;
	int8_t x552 = -3;
	int32_t t137 = -257929461;

    t137 = (((x549<=x550)<=x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 6923LLU;
	uint32_t x554 = 8198U;
	volatile uint16_t x555 = 7U;
	uint8_t x556 = 29U;
	volatile int32_t t138 = 6;

    t138 = (((x553<=x554)<=x555)<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MIN;
	int64_t x559 = INT64_MIN;
	uint16_t x560 = 30U;
	volatile int32_t t139 = 101770851;

    t139 = (((x557<=x558)<=x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	volatile int8_t x562 = -1;
	int32_t x563 = 1918;
	volatile int8_t x564 = INT8_MIN;
	volatile int32_t t140 = -255438;

    t140 = (((x561<=x562)<=x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MAX;
	volatile int32_t t141 = 4198;

    t141 = (((x565<=x566)<=x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -1LL;
	uint8_t x570 = UINT8_MAX;
	volatile int64_t x571 = INT64_MIN;
	static int32_t t142 = -806993179;

    t142 = (((x569<=x570)<=x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 2888U;
	volatile uint32_t x574 = UINT32_MAX;
	volatile int16_t x575 = 7;
	static uint16_t x576 = 28U;
	int32_t t143 = -21704606;

    t143 = (((x573<=x574)<=x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MAX;
	int32_t x579 = INT32_MAX;
	int64_t x580 = 63985653975LL;
	int32_t t144 = 20;

    t144 = (((x577<=x578)<=x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	int64_t x582 = INT64_MIN;
	int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 221944;

    t145 = (((x581<=x582)<=x583)<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	static volatile int16_t x586 = INT16_MAX;
	uint8_t x587 = 88U;
	int32_t x588 = -1;

    t146 = (((x585<=x586)<=x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	static int8_t x590 = -1;
	uint32_t x591 = 3U;
	volatile int16_t x592 = INT16_MAX;
	int32_t t147 = 1;

    t147 = (((x589<=x590)<=x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x595 = UINT16_MAX;

    t148 = (((x593<=x594)<=x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 120432628U;
	static volatile int8_t x598 = -4;
	volatile int8_t x599 = INT8_MAX;
	int16_t x600 = -1;
	volatile int32_t t149 = -2;

    t149 = (((x597<=x598)<=x599)<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	volatile int16_t x602 = INT16_MIN;
	int64_t x603 = INT64_MAX;
	int8_t x604 = INT8_MAX;
	volatile int32_t t150 = 4027;

    t150 = (((x601<=x602)<=x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 1136;
	uint64_t x606 = 88782901LLU;
	uint16_t x607 = 23239U;
	static volatile uint8_t x608 = 54U;
	static int32_t t151 = 217183;

    t151 = (((x605<=x606)<=x607)<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	uint64_t x610 = 9702610244LLU;
	int8_t x611 = -1;
	static uint32_t x612 = 1356220U;
	volatile int32_t t152 = 271;

    t152 = (((x609<=x610)<=x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 121U;
	uint32_t x614 = 700410U;
	int32_t x615 = INT32_MIN;
	int32_t t153 = -1;

    t153 = (((x613<=x614)<=x615)<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 1998576;
	int32_t x618 = -1;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t154 = 5926;

    t154 = (((x617<=x618)<=x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 21778381769524LL;
	volatile uint64_t x622 = 1643087107941396LLU;
	int16_t x624 = INT16_MIN;
	int32_t t155 = 48947;

    t155 = (((x621<=x622)<=x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	uint64_t x628 = UINT64_MAX;
	int32_t t156 = -14292;

    t156 = (((x625<=x626)<=x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MIN;
	uint16_t x630 = 0U;
	int64_t x631 = INT64_MIN;

    t157 = (((x629<=x630)<=x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 13U;
	volatile int32_t x634 = 3477;
	int32_t x635 = INT32_MIN;
	static int16_t x636 = INT16_MIN;

    t158 = (((x633<=x634)<=x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -1;
	static volatile int64_t x638 = -1LL;
	uint8_t x639 = 0U;
	int8_t x640 = -19;
	int32_t t159 = 95333635;

    t159 = (((x637<=x638)<=x639)<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -28277086LL;
	int8_t x642 = 0;
	int16_t x643 = -1;
	static volatile int16_t x644 = INT16_MIN;
	volatile int32_t t160 = -6;

    t160 = (((x641<=x642)<=x643)<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x646 = 0;
	static int32_t x648 = INT32_MIN;
	int32_t t161 = -20402;

    t161 = (((x645<=x646)<=x647)<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 131892LLU;
	int16_t x650 = 2819;
	int16_t x651 = -1;
	static volatile uint16_t x652 = UINT16_MAX;
	int32_t t162 = -32;

    t162 = (((x649<=x650)<=x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	volatile uint16_t x654 = 12563U;
	int8_t x655 = INT8_MIN;
	static int8_t x656 = 4;
	int32_t t163 = -6050;

    t163 = (((x653<=x654)<=x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = 231799;

    t164 = (((x657<=x658)<=x659)<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x661 = UINT32_MAX;
	int64_t x662 = INT64_MAX;
	int32_t t165 = 0;

    t165 = (((x661<=x662)<=x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	int32_t x666 = INT32_MAX;
	volatile int8_t x667 = INT8_MIN;
	uint32_t x668 = UINT32_MAX;
	static int32_t t166 = 1604;

    t166 = (((x665<=x666)<=x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = 2273U;
	volatile uint8_t x670 = 0U;
	uint64_t x671 = 2399132931LLU;
	uint32_t x672 = 2043812U;
	int32_t t167 = -1;

    t167 = (((x669<=x670)<=x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = 30;
	int16_t x676 = -1;
	volatile int32_t t168 = 64257;

    t168 = (((x673<=x674)<=x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	volatile int64_t x678 = INT64_MIN;
	static volatile int8_t x679 = 1;
	static uint16_t x680 = 9528U;

    t169 = (((x677<=x678)<=x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	volatile uint32_t x682 = UINT32_MAX;
	int8_t x683 = -1;
	int32_t x684 = INT32_MIN;

    t170 = (((x681<=x682)<=x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = 239;
	static uint8_t x688 = 0U;
	int32_t t171 = -1;

    t171 = (((x685<=x686)<=x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MIN;
	volatile int32_t t172 = 402726102;

    t172 = (((x689<=x690)<=x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	volatile uint8_t x694 = 2U;
	int16_t x695 = -54;
	int32_t t173 = -341;

    t173 = (((x693<=x694)<=x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x698 = UINT16_MAX;
	int32_t x699 = 4303436;
	uint16_t x700 = 0U;
	volatile int32_t t174 = 154;

    t174 = (((x697<=x698)<=x699)<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x701 = 1594561609LLU;
	uint64_t x703 = 13LLU;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = 101803;

    t175 = (((x701<=x702)<=x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	int64_t x706 = INT64_MAX;
	int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MIN;
	int32_t t176 = 3;

    t176 = (((x705<=x706)<=x707)<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 33U;
	uint32_t x712 = UINT32_MAX;
	static int32_t t177 = -42;

    t177 = (((x709<=x710)<=x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 41U;
	static uint32_t x714 = 307974U;
	uint8_t x715 = 21U;
	volatile int32_t t178 = -56280;

    t178 = (((x713<=x714)<=x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	uint16_t x718 = 4U;
	volatile int16_t x719 = INT16_MIN;
	uint64_t x720 = 2138999472071047LLU;
	volatile int32_t t179 = 9985846;

    t179 = (((x717<=x718)<=x719)<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x722 = 5U;
	static volatile int32_t t180 = -61350674;

    t180 = (((x721<=x722)<=x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 62U;
	volatile int32_t x726 = INT32_MIN;
	int64_t x727 = -1LL;
	int8_t x728 = INT8_MIN;
	volatile int32_t t181 = 16029;

    t181 = (((x725<=x726)<=x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -5;
	uint8_t x731 = 0U;
	static int32_t t182 = 31650;

    t182 = (((x729<=x730)<=x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = INT16_MAX;
	static int64_t x735 = INT64_MAX;
	volatile int32_t x736 = INT32_MIN;
	int32_t t183 = 514492;

    t183 = (((x733<=x734)<=x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 29U;
	int32_t x739 = -319709;
	int32_t x740 = INT32_MIN;
	static int32_t t184 = 54;

    t184 = (((x737<=x738)<=x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x743 = INT16_MIN;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -11789829;

    t185 = (((x741<=x742)<=x743)<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x745 = 244416038841153830LLU;
	int32_t x746 = 14306222;
	int8_t x747 = INT8_MAX;
	int32_t t186 = 14795;

    t186 = (((x745<=x746)<=x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x750 = 7869U;
	int16_t x752 = -1;
	int32_t t187 = 1187;

    t187 = (((x749<=x750)<=x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	uint8_t x754 = 49U;
	uint64_t x756 = UINT64_MAX;

    t188 = (((x753<=x754)<=x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x757 = 13151LLU;
	static int64_t x758 = 119LL;
	volatile int16_t x759 = 48;
	int64_t x760 = INT64_MIN;
	int32_t t189 = 14895;

    t189 = (((x757<=x758)<=x759)<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = UINT8_MAX;
	int16_t x763 = INT16_MIN;
	uint8_t x764 = 14U;
	volatile int32_t t190 = -2095;

    t190 = (((x761<=x762)<=x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MAX;
	int64_t x766 = INT64_MIN;
	volatile int64_t x767 = -1LL;
	int64_t x768 = -1LL;
	static int32_t t191 = -2;

    t191 = (((x765<=x766)<=x767)<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = UINT8_MAX;
	int32_t x771 = INT32_MAX;
	uint64_t x772 = 33718340966801095LLU;
	static volatile int32_t t192 = -10362897;

    t192 = (((x769<=x770)<=x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 7U;
	volatile uint32_t x774 = 22U;
	static int16_t x776 = INT16_MIN;
	int32_t t193 = 147;

    t193 = (((x773<=x774)<=x775)<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 4773;
	int8_t x778 = INT8_MAX;
	volatile int64_t x779 = -1LL;
	int16_t x780 = INT16_MIN;
	static int32_t t194 = 38;

    t194 = (((x777<=x778)<=x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 3543978468095LLU;
	int64_t x782 = INT64_MIN;
	static volatile uint8_t x783 = 0U;
	int64_t x784 = 486937836843LL;
	int32_t t195 = 337811;

    t195 = (((x781<=x782)<=x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 0U;
	int16_t x786 = INT16_MIN;
	int8_t x787 = -1;
	int32_t x788 = -1;
	volatile int32_t t196 = -133838951;

    t196 = (((x785<=x786)<=x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 6U;
	uint16_t x790 = UINT16_MAX;
	uint32_t x791 = 427756949U;
	int16_t x792 = INT16_MIN;

    t197 = (((x789<=x790)<=x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MIN;
	int32_t x795 = -1;
	int16_t x796 = -1;
	volatile int32_t t198 = 177;

    t198 = (((x793<=x794)<=x795)<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 0;
	uint64_t x798 = UINT64_MAX;
	int64_t x799 = INT64_MIN;
	int16_t x800 = INT16_MIN;

    t199 = (((x797<=x798)<=x799)<=x800);

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

