
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

int16_t x2 = -31;
int8_t x10 = INT8_MIN;
int32_t t1 = 210;
int64_t x16 = 24817911602505LL;
volatile int32_t t2 = 126714398;
int32_t x21 = 247695070;
int16_t x28 = 5722;
volatile int32_t t4 = 95416;
volatile int16_t x36 = 0;
static int16_t x40 = INT16_MIN;
int32_t t6 = -16422196;
volatile int8_t x46 = INT8_MIN;
int64_t x48 = -6849LL;
volatile int32_t t10 = -10983997;
static int8_t x72 = INT8_MAX;
volatile int32_t t12 = -301400;
volatile uint8_t x80 = UINT8_MAX;
uint8_t x90 = 11U;
uint16_t x108 = UINT16_MAX;
int32_t t19 = -14734;
int8_t x111 = INT8_MIN;
static volatile int32_t t22 = 155;
int32_t t24 = 54037117;
static uint8_t x135 = 20U;
volatile uint8_t x136 = UINT8_MAX;
int64_t x142 = INT64_MAX;
volatile int32_t t28 = -34814058;
int64_t x147 = -1LL;
int32_t x148 = -1;
int32_t x154 = 28393;
uint8_t x169 = 3U;
static volatile uint64_t x176 = 258LLU;
int32_t t35 = 2705;
uint32_t x193 = UINT32_MAX;
int16_t x195 = INT16_MIN;
uint64_t x207 = 8236134LLU;
int32_t t40 = -100700071;
volatile int16_t x232 = -3;
int64_t x233 = INT64_MIN;
int8_t x244 = 3;
uint32_t x247 = 431222138U;
uint32_t x253 = UINT32_MAX;
int16_t x256 = INT16_MAX;
int32_t t48 = -223880444;
int32_t t49 = -38227055;
int16_t x269 = INT16_MIN;
static int64_t x273 = INT64_MAX;
volatile int64_t x285 = INT64_MIN;
volatile int32_t x289 = 1284;
int8_t x292 = INT8_MIN;
uint8_t x295 = UINT8_MAX;
volatile int32_t t56 = 357;
volatile int32_t t59 = 1598;
int8_t x311 = 30;
static int16_t x322 = INT16_MAX;
static int32_t t61 = 1;
uint64_t x328 = 3399753213490LLU;
uint64_t x336 = 25068483LLU;
volatile int16_t x341 = INT16_MIN;
int32_t t66 = 316361020;
int8_t x352 = 24;
static int32_t t67 = -8;
int16_t x367 = INT16_MIN;
static int16_t x374 = -65;
int8_t x376 = INT8_MAX;
volatile int16_t x388 = INT16_MIN;
int8_t x389 = 4;
int16_t x391 = -1;
volatile uint64_t x394 = 1333LLU;
int64_t x402 = 6305LL;
volatile int32_t t74 = -509;
int32_t t75 = -47962;
uint8_t x420 = 2U;
static uint16_t x426 = 9700U;
volatile int16_t x429 = -1;
int16_t x431 = INT16_MIN;
volatile int32_t t79 = -712366154;
int32_t x433 = 67;
uint64_t x434 = 530971465360718LLU;
static int32_t t81 = -9881;
uint64_t x470 = 18402394298705LLU;
uint8_t x474 = UINT8_MAX;
static int8_t x478 = INT8_MIN;
int16_t x480 = 3;
uint8_t x494 = UINT8_MAX;
int16_t x499 = INT16_MIN;
int64_t x502 = INT64_MAX;
int32_t x506 = -186110942;
int16_t x511 = 0;
static volatile int32_t t93 = 118229;
static volatile int32_t t94 = -30;
int8_t x534 = -1;
int64_t x538 = 1474941791462LL;
int32_t x541 = -1;
volatile uint32_t x543 = 446U;
static uint8_t x544 = 107U;
volatile int32_t x546 = INT32_MIN;
volatile int16_t x554 = 1;
uint32_t x555 = 3712687U;
uint32_t x563 = 1U;
int16_t x578 = -2739;
int16_t x588 = 111;
int16_t x592 = -1;
int64_t x597 = INT64_MAX;
volatile int32_t t109 = -470984568;
static int8_t x615 = -20;
volatile int32_t t110 = -50721;
uint16_t x617 = UINT16_MAX;
uint16_t x630 = UINT16_MAX;
static uint8_t x634 = UINT8_MAX;
volatile int64_t x636 = INT64_MAX;
uint32_t x644 = 184312754U;
volatile int16_t x647 = INT16_MAX;
uint8_t x648 = 0U;
volatile int8_t x650 = INT8_MIN;
volatile int8_t x653 = INT8_MIN;
volatile int32_t t119 = -4186332;
int8_t x660 = -1;
int16_t x663 = -14412;
int32_t x675 = 24;
uint8_t x676 = UINT8_MAX;
int8_t x677 = INT8_MIN;
int32_t x679 = -1;
volatile int8_t x682 = -13;
static volatile int32_t t125 = 0;
static int32_t t126 = 614886;
uint8_t x689 = 10U;
int32_t x694 = INT32_MIN;
int32_t t128 = -521070;
volatile uint8_t x713 = UINT8_MAX;
uint64_t x718 = 8053LLU;
int16_t x729 = INT16_MAX;
volatile int32_t t133 = -614668;
uint8_t x736 = 0U;
static uint32_t x739 = 3U;
uint8_t x740 = 1U;
volatile int32_t x745 = -27234;
volatile uint32_t x759 = 174894U;
static uint8_t x762 = UINT8_MAX;
int16_t x764 = 13;
int8_t x765 = -59;
static int64_t x767 = -1LL;
static int8_t x774 = INT8_MAX;
int32_t x778 = INT32_MIN;
int32_t x788 = 478;
static int16_t x791 = -1;
uint16_t x792 = 1855U;
int16_t x800 = 26;
int32_t t146 = -408292029;
int32_t t148 = 60249;
int16_t x813 = 2;
uint8_t x820 = 80U;
volatile int32_t t155 = 9514439;
int16_t x863 = -525;
static int8_t x875 = INT8_MIN;
volatile int32_t t159 = 469155;
volatile int32_t x878 = 330;
int64_t x879 = INT64_MAX;
static volatile uint64_t x881 = UINT64_MAX;
static uint32_t x885 = 14306U;
volatile int64_t x889 = INT64_MIN;
int16_t x893 = INT16_MAX;
volatile uint8_t x895 = 3U;
int8_t x901 = 36;
uint64_t x913 = 37131752LLU;
int8_t x922 = 4;
volatile int64_t x923 = INT64_MIN;
int16_t x924 = 0;
volatile int16_t x927 = INT16_MIN;
static uint32_t x928 = 101205751U;
volatile uint32_t x933 = UINT32_MAX;
volatile int32_t t176 = 751271;
int16_t x962 = -38;
volatile int8_t x963 = INT8_MIN;
static uint16_t x969 = 34U;
int64_t x982 = INT64_MAX;
static int8_t x984 = -2;
int8_t x986 = INT8_MIN;
int32_t t184 = -1937;
int16_t x990 = -1;
volatile uint8_t x991 = 57U;
static volatile int16_t x992 = INT16_MIN;
static int32_t t185 = -1;
int16_t x997 = INT16_MIN;
static uint8_t x1022 = UINT8_MAX;
uint64_t x1023 = 243LLU;
volatile int64_t x1047 = -13LL;
volatile int32_t x1055 = 6204707;
static int64_t x1058 = INT64_MAX;
uint32_t x1060 = UINT32_MAX;
int32_t t194 = -74819054;
static volatile int8_t x1061 = 40;
static uint16_t x1064 = UINT16_MAX;
static volatile int32_t t195 = -126;
int8_t x1075 = INT8_MIN;
int32_t t198 = 59;


void f0(void) {
    	static volatile int32_t x1 = INT32_MIN;
	uint8_t x3 = 1U;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 335222328;

    t0 = ((x1%x2)==(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MAX;
	volatile int32_t x11 = 14437;
	uint64_t x12 = UINT64_MAX;

    t1 = ((x9%x10)==(x11*x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x13 = UINT64_MAX;
	static volatile uint8_t x14 = 2U;
	uint64_t x15 = 63762893959LLU;

    t2 = ((x13%x14)==(x15*x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = -5249;
	volatile int32_t t3 = -7842316;

    t3 = ((x21%x22)==(x23*x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MAX;
	int64_t x27 = -1LL;

    t4 = ((x25%x26)==(x27*x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x33 = -1;
	uint16_t x34 = 8U;
	int16_t x35 = INT16_MIN;
	volatile int32_t t5 = 24250178;

    t5 = ((x33%x34)==(x35*x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = -429103310104178LL;
	int64_t x38 = -1LL;
	uint32_t x39 = 5U;

    t6 = ((x37%x38)==(x39*x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x45 = INT32_MIN;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t7 = -14476;

    t7 = ((x45%x46)==(x47*x48));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x49 = INT32_MIN;
	uint32_t x50 = 23278U;
	int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = UINT64_MAX;
	volatile int32_t t8 = 8021312;

    t8 = ((x49%x50)==(x51*x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 3U;
	uint8_t x55 = 95U;
	static uint8_t x56 = 121U;
	volatile int32_t t9 = 38132205;

    t9 = ((x53%x54)==(x55*x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x61 = 6104U;
	static uint32_t x62 = 14632581U;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 511U;

    t10 = ((x61%x62)==(x63*x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x65 = 295958791908700710LLU;
	int16_t x66 = 5;
	static int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;
	volatile int32_t t11 = 256;

    t11 = ((x65%x66)==(x67*x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = -4183374;

    t12 = ((x69%x70)==(x71*x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x77 = 19U;
	volatile int64_t x78 = INT64_MAX;
	int32_t x79 = 0;
	static int32_t t13 = -19;

    t13 = ((x77%x78)==(x79*x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x81 = UINT8_MAX;
	int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t14 = 1639535;

    t14 = ((x81%x82)==(x83*x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 10074U;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t15 = -213911284;

    t15 = ((x85%x86)==(x87*x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x89 = INT32_MIN;
	volatile uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 0U;
	volatile int32_t t16 = 19025;

    t16 = ((x89%x90)==(x91*x92));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x93 = INT16_MIN;
	static uint8_t x94 = 1U;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 9673900521591651LLU;
	int32_t t17 = 480;

    t17 = ((x93%x94)==(x95*x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t18 = 47427096;

    t18 = ((x101%x102)==(x103*x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	volatile int8_t x107 = INT8_MAX;

    t19 = ((x105%x106)==(x107*x108));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x109 = 15U;
	int8_t x110 = -1;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t20 = 5002;

    t20 = ((x109%x110)==(x111*x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x113 = 0;
	int64_t x114 = INT64_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t21 = 0;

    t21 = ((x113%x114)==(x115*x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x117 = 0U;
	static uint32_t x118 = 31U;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = -59771;

    t22 = ((x117%x118)==(x119*x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x121 = INT8_MAX;
	uint64_t x122 = 916437780420LLU;
	int64_t x123 = INT64_MIN;
	static uint64_t x124 = UINT64_MAX;
	volatile int32_t t23 = 10050;

    t23 = ((x121%x122)==(x123*x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x125 = INT16_MAX;
	static int16_t x126 = -1;
	static uint16_t x127 = 16757U;
	uint8_t x128 = 3U;

    t24 = ((x125%x126)==(x127*x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x129 = INT64_MIN;
	uint8_t x130 = 12U;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	static int32_t t25 = -858;

    t25 = ((x129%x130)==(x131*x132));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = -123;
	uint16_t x134 = 178U;
	volatile int32_t t26 = 628006;

    t26 = ((x133%x134)==(x135*x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x137 = -36385033LL;
	uint32_t x138 = 31886334U;
	uint32_t x139 = 8U;
	uint8_t x140 = 9U;
	int32_t t27 = 239020641;

    t27 = ((x137%x138)==(x139*x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x141 = UINT16_MAX;
	uint16_t x143 = 17U;
	int8_t x144 = INT8_MIN;

    t28 = ((x141%x142)==(x143*x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 583U;
	volatile int32_t t29 = -106414810;

    t29 = ((x145%x146)==(x147*x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x153 = 4904U;
	volatile int16_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t30 = -4084;

    t30 = ((x153%x154)==(x155*x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x161 = 24;
	int16_t x162 = 34;
	int8_t x163 = -1;
	uint8_t x164 = 1U;
	volatile int32_t t31 = 2;

    t31 = ((x161%x162)==(x163*x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x166 = 77U;
	int16_t x167 = 0;
	uint8_t x168 = 6U;
	static volatile int32_t t32 = -422557;

    t32 = ((x165%x166)==(x167*x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t33 = 59;

    t33 = ((x169%x170)==(x171*x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x173 = 40U;
	uint64_t x174 = 4398495LLU;
	uint16_t x175 = 89U;
	static int32_t t34 = -610;

    t34 = ((x173%x174)==(x175*x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x177 = INT8_MAX;
	uint8_t x178 = 6U;
	uint64_t x179 = 104035642843786LLU;
	int8_t x180 = 1;

    t35 = ((x177%x178)==(x179*x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x189 = UINT64_MAX;
	int32_t x190 = 2;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t36 = -112;

    t36 = ((x189%x190)==(x191*x192));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x194 = 928U;
	static uint32_t x196 = UINT32_MAX;
	volatile int32_t t37 = -638762850;

    t37 = ((x193%x194)==(x195*x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x197 = -1;
	int64_t x198 = -11231667888LL;
	static uint64_t x199 = 6041989227259462456LLU;
	int8_t x200 = INT8_MIN;
	int32_t t38 = -1;

    t38 = ((x197%x198)==(x199*x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = 1;
	int32_t x206 = 31372;
	int8_t x208 = INT8_MIN;
	int32_t t39 = 25636010;

    t39 = ((x205%x206)==(x207*x208));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x209 = -1;
	uint16_t x210 = 2007U;
	int32_t x211 = -1;
	int8_t x212 = -1;

    t40 = ((x209%x210)==(x211*x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x213 = 23;
	int64_t x214 = INT64_MAX;
	static uint16_t x215 = 4482U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t41 = -47319076;

    t41 = ((x213%x214)==(x215*x216));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x221 = -1;
	int32_t x222 = INT32_MIN;
	uint16_t x223 = 1312U;
	volatile int8_t x224 = INT8_MIN;
	int32_t t42 = -19;

    t42 = ((x221%x222)==(x223*x224));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x225 = -43;
	int64_t x226 = -1LL;
	static volatile uint32_t x227 = 56841U;
	int8_t x228 = INT8_MAX;
	static volatile int32_t t43 = -521;

    t43 = ((x225%x226)==(x227*x228));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x229 = 0U;
	int8_t x230 = INT8_MAX;
	int8_t x231 = -1;
	volatile int32_t t44 = -179844;

    t44 = ((x229%x230)==(x231*x232));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 68395677355179LLU;
	int32_t t45 = 0;

    t45 = ((x233%x234)==(x235*x236));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x241 = INT32_MAX;
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = 17754759829759LL;
	int32_t t46 = 53824;

    t46 = ((x241%x242)==(x243*x244));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x245 = 2;
	int32_t x246 = 3417;
	uint8_t x248 = 2U;
	int32_t t47 = -1786;

    t47 = ((x245%x246)==(x247*x248));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x254 = -1;
	uint16_t x255 = 1U;

    t48 = ((x253%x254)==(x255*x256));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x261 = INT64_MIN;
	volatile int8_t x262 = -1;
	int8_t x263 = INT8_MAX;
	uint32_t x264 = UINT32_MAX;

    t49 = ((x261%x262)==(x263*x264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	static volatile int16_t x272 = -1;
	volatile int32_t t50 = -179;

    t50 = ((x269%x270)==(x271*x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x274 = -1;
	uint64_t x275 = 26578003489LLU;
	uint8_t x276 = UINT8_MAX;
	int32_t t51 = 2;

    t51 = ((x273%x274)==(x275*x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x277 = -1;
	int32_t x278 = -1;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 6U;
	static volatile int32_t t52 = 48746;

    t52 = ((x277%x278)==(x279*x280));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 84LLU;
	int64_t x284 = INT64_MIN;
	volatile int32_t t53 = -66447;

    t53 = ((x281%x282)==(x283*x284));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x286 = UINT64_MAX;
	volatile int16_t x287 = INT16_MAX;
	uint32_t x288 = 110821768U;
	volatile int32_t t54 = 127495;

    t54 = ((x285%x286)==(x287*x288));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x290 = -1;
	int64_t x291 = 14705382992LL;
	static int32_t t55 = 385;

    t55 = ((x289%x290)==(x291*x292));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x293 = INT16_MAX;
	int32_t x294 = -1;
	static int32_t x296 = -1261;

    t56 = ((x293%x294)==(x295*x296));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x297 = 0U;
	static volatile int8_t x298 = INT8_MAX;
	int32_t x299 = -1;
	static int64_t x300 = -1LL;
	static volatile int32_t t57 = -73314;

    t57 = ((x297%x298)==(x299*x300));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	static uint32_t x304 = 340992U;
	int32_t t58 = -5720;

    t58 = ((x301%x302)==(x303*x304));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x305 = 510;
	volatile uint16_t x306 = 19919U;
	int32_t x307 = 7081629;
	int16_t x308 = -1;

    t59 = ((x305%x306)==(x307*x308));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int16_t x312 = -1;
	int32_t t60 = -680891;

    t60 = ((x309%x310)==(x311*x312));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x321 = INT64_MAX;
	static int32_t x323 = -69326;
	int8_t x324 = 2;

    t61 = ((x321%x322)==(x323*x324));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x325 = 4454;
	int32_t x326 = INT32_MIN;
	static uint64_t x327 = UINT64_MAX;
	int32_t t62 = 356884;

    t62 = ((x325%x326)==(x327*x328));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MAX;
	volatile uint64_t x332 = 430LLU;
	volatile int32_t t63 = -5652;

    t63 = ((x329%x330)==(x331*x332));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x333 = 2U;
	uint16_t x334 = 414U;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t64 = 6031;

    t64 = ((x333%x334)==(x335*x336));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x337 = -3;
	int64_t x338 = 425194116LL;
	static uint8_t x339 = 9U;
	int16_t x340 = INT16_MAX;
	volatile int32_t t65 = -63102;

    t65 = ((x337%x338)==(x339*x340));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 616U;

    t66 = ((x341%x342)==(x343*x344));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x349 = 328962LLU;
	uint64_t x350 = UINT64_MAX;
	static int16_t x351 = INT16_MAX;

    t67 = ((x349%x350)==(x351*x352));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t68 = -107717;

    t68 = ((x365%x366)==(x367*x368));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x373 = 22U;
	static int16_t x375 = 0;
	static int32_t t69 = 52900945;

    t69 = ((x373%x374)==(x375*x376));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x385 = -1LL;
	volatile int8_t x386 = INT8_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	int32_t t70 = 1061101427;

    t70 = ((x385%x386)==(x387*x388));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x390 = -3;
	uint64_t x392 = 3842198LLU;
	volatile int32_t t71 = 2;

    t71 = ((x389%x390)==(x391*x392));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x393 = 796;
	int32_t x395 = 5164;
	int16_t x396 = -1;
	int32_t t72 = -1;

    t72 = ((x393%x394)==(x395*x396));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x401 = 22U;
	static uint16_t x403 = 6U;
	static uint16_t x404 = 176U;
	volatile int32_t t73 = 0;

    t73 = ((x401%x402)==(x403*x404));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x409 = INT32_MIN;
	static int16_t x410 = INT16_MIN;
	uint16_t x411 = 38U;
	uint32_t x412 = UINT32_MAX;

    t74 = ((x409%x410)==(x411*x412));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x413 = 0U;
	volatile int8_t x414 = INT8_MAX;
	volatile int8_t x415 = -9;
	uint16_t x416 = UINT16_MAX;

    t75 = ((x413%x414)==(x415*x416));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x417 = 4;
	uint8_t x418 = 116U;
	static int8_t x419 = INT8_MAX;
	volatile int32_t t76 = -26;

    t76 = ((x417%x418)==(x419*x420));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MAX;
	int32_t x423 = 372;
	static volatile uint16_t x424 = 2U;
	static int32_t t77 = -931913473;

    t77 = ((x421%x422)==(x423*x424));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x425 = 15662U;
	static uint8_t x427 = 73U;
	int64_t x428 = -1LL;
	int32_t t78 = 806;

    t78 = ((x425%x426)==(x427*x428));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x430 = -21;
	uint32_t x432 = 3U;

    t79 = ((x429%x430)==(x431*x432));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x435 = INT16_MAX;
	volatile int64_t x436 = -1LL;
	static volatile int32_t t80 = 159079115;

    t80 = ((x433%x434)==(x435*x436));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x457 = 5886280LLU;
	uint32_t x458 = UINT32_MAX;
	uint64_t x459 = UINT64_MAX;
	static int8_t x460 = -1;

    t81 = ((x457%x458)==(x459*x460));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x461 = INT16_MIN;
	uint16_t x462 = 904U;
	int8_t x463 = -1;
	volatile int8_t x464 = INT8_MAX;
	int32_t t82 = -2040131;

    t82 = ((x461%x462)==(x463*x464));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x469 = 62674065LLU;
	int8_t x471 = 1;
	static volatile int8_t x472 = INT8_MIN;
	volatile int32_t t83 = 246;

    t83 = ((x469%x470)==(x471*x472));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x473 = INT16_MAX;
	volatile int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	volatile int32_t t84 = -1;

    t84 = ((x473%x474)==(x475*x476));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x477 = -1;
	volatile uint32_t x479 = 1265840U;
	int32_t t85 = -21;

    t85 = ((x477%x478)==(x479*x480));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x481 = 210891LLU;
	uint8_t x482 = 70U;
	int8_t x483 = INT8_MAX;
	uint32_t x484 = 182331736U;
	int32_t t86 = -5611657;

    t86 = ((x481%x482)==(x483*x484));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x489 = 5940;
	static int16_t x490 = INT16_MAX;
	uint32_t x491 = 563U;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t87 = 3420716;

    t87 = ((x489%x490)==(x491*x492));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x493 = 14;
	int64_t x495 = -2137139691LL;
	uint64_t x496 = 266LLU;
	static volatile int32_t t88 = 13;

    t88 = ((x493%x494)==(x495*x496));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x497 = 42;
	int8_t x498 = -1;
	volatile uint16_t x500 = 30U;
	int32_t t89 = 11545448;

    t89 = ((x497%x498)==(x499*x500));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	volatile int16_t x503 = -23;
	uint8_t x504 = 12U;
	int32_t t90 = -2;

    t90 = ((x501%x502)==(x503*x504));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x505 = -1;
	uint64_t x507 = 347576LLU;
	static uint64_t x508 = 5254517917443LLU;
	volatile int32_t t91 = -45;

    t91 = ((x505%x506)==(x507*x508));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x509 = 575079909936LLU;
	volatile uint64_t x510 = UINT64_MAX;
	static volatile uint64_t x512 = UINT64_MAX;
	static int32_t t92 = -603;

    t92 = ((x509%x510)==(x511*x512));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x525 = 6750605055794LLU;
	uint32_t x526 = 1430709U;
	volatile int32_t x527 = -1;
	volatile int32_t x528 = INT32_MAX;

    t93 = ((x525%x526)==(x527*x528));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x529 = 3LLU;
	volatile int32_t x530 = -61;
	uint16_t x531 = 7694U;
	static uint8_t x532 = 4U;

    t94 = ((x529%x530)==(x531*x532));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x533 = 73LLU;
	int16_t x535 = INT16_MIN;
	static uint8_t x536 = 2U;
	int32_t t95 = -2693;

    t95 = ((x533%x534)==(x535*x536));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x537 = INT64_MIN;
	static uint64_t x539 = 2969079571947195LLU;
	uint32_t x540 = 56U;
	int32_t t96 = -60756518;

    t96 = ((x537%x538)==(x539*x540));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x542 = INT16_MAX;
	int32_t t97 = -3468116;

    t97 = ((x541%x542)==(x543*x544));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x545 = 2U;
	int64_t x547 = -1LL;
	int8_t x548 = INT8_MIN;
	volatile int32_t t98 = -35070967;

    t98 = ((x545%x546)==(x547*x548));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x550 = -1;
	static int16_t x551 = -780;
	int32_t x552 = -1;
	int32_t t99 = 616771;

    t99 = ((x549%x550)==(x551*x552));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x553 = 87;
	uint16_t x556 = 201U;
	int32_t t100 = 5;

    t100 = ((x553%x554)==(x555*x556));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x561 = 23077496U;
	int32_t x562 = -1;
	static int16_t x564 = -247;
	volatile int32_t t101 = -1;

    t101 = ((x561%x562)==(x563*x564));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x565 = INT32_MAX;
	int16_t x566 = 389;
	int8_t x567 = 0;
	volatile uint64_t x568 = 428LLU;
	volatile int32_t t102 = -451285495;

    t102 = ((x565%x566)==(x567*x568));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = -48;
	int32_t x571 = INT32_MAX;
	int64_t x572 = -39253LL;
	static volatile int32_t t103 = 122;

    t103 = ((x569%x570)==(x571*x572));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x577 = -1;
	uint32_t x579 = 412091U;
	static int16_t x580 = -2544;
	volatile int32_t t104 = 3940;

    t104 = ((x577%x578)==(x579*x580));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x585 = 9265;
	uint16_t x586 = 44U;
	int16_t x587 = -54;
	static int32_t t105 = 1;

    t105 = ((x585%x586)==(x587*x588));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x589 = INT8_MIN;
	int32_t x590 = -1;
	int64_t x591 = -1LL;
	int32_t t106 = -1677;

    t106 = ((x589%x590)==(x591*x592));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x593 = INT8_MIN;
	volatile int8_t x594 = -1;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = -10743LL;
	volatile int32_t t107 = -4582824;

    t107 = ((x593%x594)==(x595*x596));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x598 = INT64_MIN;
	uint32_t x599 = UINT32_MAX;
	uint16_t x600 = 5U;
	static int32_t t108 = 198;

    t108 = ((x597%x598)==(x599*x600));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x601 = 15LLU;
	volatile uint64_t x602 = UINT64_MAX;
	static int8_t x603 = -1;
	int8_t x604 = -1;

    t109 = ((x601%x602)==(x603*x604));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x613 = 3605;
	static int32_t x614 = -1;
	static uint16_t x616 = 0U;

    t110 = ((x613%x614)==(x615*x616));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x618 = -1;
	volatile int16_t x619 = INT16_MIN;
	uint8_t x620 = 2U;
	volatile int32_t t111 = 40314471;

    t111 = ((x617%x618)==(x619*x620));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x621 = 8;
	int32_t x622 = INT32_MAX;
	uint64_t x623 = 8078936030LLU;
	int16_t x624 = INT16_MIN;
	int32_t t112 = 0;

    t112 = ((x621%x622)==(x623*x624));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x625 = INT32_MIN;
	static int32_t x626 = INT32_MAX;
	volatile int64_t x627 = -5093352723LL;
	int16_t x628 = INT16_MIN;
	static volatile int32_t t113 = -1508;

    t113 = ((x625%x626)==(x627*x628));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x629 = 1693620667405123LL;
	volatile uint64_t x631 = UINT64_MAX;
	int8_t x632 = INT8_MAX;
	volatile int32_t t114 = -3353444;

    t114 = ((x629%x630)==(x631*x632));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x633 = 522651104U;
	static volatile uint64_t x635 = 1527435LLU;
	static volatile int32_t t115 = 848;

    t115 = ((x633%x634)==(x635*x636));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x641 = INT32_MIN;
	int8_t x642 = INT8_MIN;
	int8_t x643 = -1;
	volatile int32_t t116 = -894;

    t116 = ((x641%x642)==(x643*x644));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x645 = 98U;
	static uint8_t x646 = 3U;
	volatile int32_t t117 = 704996;

    t117 = ((x645%x646)==(x647*x648));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x649 = INT16_MIN;
	static volatile int16_t x651 = -15;
	int16_t x652 = -1;
	static volatile int32_t t118 = -19276154;

    t118 = ((x649%x650)==(x651*x652));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x654 = INT64_MIN;
	uint8_t x655 = 19U;
	static int16_t x656 = 2;

    t119 = ((x653%x654)==(x655*x656));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x657 = INT8_MIN;
	volatile uint8_t x658 = 113U;
	int16_t x659 = INT16_MIN;
	int32_t t120 = 69;

    t120 = ((x657%x658)==(x659*x660));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x661 = INT64_MIN;
	int16_t x662 = 8844;
	int16_t x664 = 61;
	int32_t t121 = -998;

    t121 = ((x661%x662)==(x663*x664));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x665 = UINT16_MAX;
	static uint16_t x666 = UINT16_MAX;
	static int16_t x667 = -1;
	static uint32_t x668 = UINT32_MAX;
	volatile int32_t t122 = 0;

    t122 = ((x665%x666)==(x667*x668));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x673 = -1;
	volatile int64_t x674 = INT64_MAX;
	volatile int32_t t123 = -454723;

    t123 = ((x673%x674)==(x675*x676));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x678 = INT32_MIN;
	static int8_t x680 = INT8_MAX;
	int32_t t124 = 13709;

    t124 = ((x677%x678)==(x679*x680));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x681 = 436U;
	uint8_t x683 = 1U;
	int8_t x684 = INT8_MAX;

    t125 = ((x681%x682)==(x683*x684));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x685 = -1;
	int32_t x686 = -1;
	uint8_t x687 = 65U;
	static uint16_t x688 = 6225U;

    t126 = ((x685%x686)==(x687*x688));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x690 = 5;
	static int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	volatile int32_t t127 = -2180190;

    t127 = ((x689%x690)==(x691*x692));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x693 = -4035LL;
	int16_t x695 = -1;
	uint32_t x696 = 1931380273U;

    t128 = ((x693%x694)==(x695*x696));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x714 = 12524U;
	static int32_t x715 = 605697;
	static uint32_t x716 = 83853U;
	volatile int32_t t129 = 14777;

    t129 = ((x713%x714)==(x715*x716));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x717 = INT32_MAX;
	uint64_t x719 = 997357576855LLU;
	int16_t x720 = -920;
	static int32_t t130 = 54;

    t130 = ((x717%x718)==(x719*x720));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x721 = 121U;
	int64_t x722 = -1LL;
	volatile int8_t x723 = -1;
	static uint64_t x724 = 21LLU;
	int32_t t131 = -1511;

    t131 = ((x721%x722)==(x723*x724));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x725 = -160;
	volatile uint64_t x726 = 73361448696159708LLU;
	static int32_t x727 = -1;
	uint32_t x728 = 6U;
	volatile int32_t t132 = -165;

    t132 = ((x725%x726)==(x727*x728));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x730 = -1;
	volatile int8_t x731 = INT8_MIN;
	volatile int16_t x732 = INT16_MAX;

    t133 = ((x729%x730)==(x731*x732));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x733 = 14304;
	volatile uint64_t x734 = 27476454LLU;
	volatile int8_t x735 = -10;
	volatile int32_t t134 = -169;

    t134 = ((x733%x734)==(x735*x736));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x737 = 0U;
	int8_t x738 = 14;
	static volatile int32_t t135 = -1602458;

    t135 = ((x737%x738)==(x739*x740));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x741 = UINT16_MAX;
	uint32_t x742 = 1307332112U;
	static uint64_t x743 = 44123253942LLU;
	static uint64_t x744 = UINT64_MAX;
	static volatile int32_t t136 = 239331560;

    t136 = ((x741%x742)==(x743*x744));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x746 = UINT8_MAX;
	int16_t x747 = -1;
	uint64_t x748 = UINT64_MAX;
	int32_t t137 = 3220;

    t137 = ((x745%x746)==(x747*x748));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x757 = -394107;
	static uint16_t x758 = UINT16_MAX;
	volatile uint64_t x760 = UINT64_MAX;
	volatile int32_t t138 = -44;

    t138 = ((x757%x758)==(x759*x760));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x761 = 23;
	volatile int16_t x763 = INT16_MAX;
	int32_t t139 = 13441367;

    t139 = ((x761%x762)==(x763*x764));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x766 = INT8_MIN;
	uint64_t x768 = UINT64_MAX;
	int32_t t140 = -1661;

    t140 = ((x765%x766)==(x767*x768));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x769 = INT8_MAX;
	volatile int64_t x770 = INT64_MIN;
	volatile int32_t x771 = INT32_MAX;
	uint8_t x772 = 1U;
	volatile int32_t t141 = 3;

    t141 = ((x769%x770)==(x771*x772));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x773 = INT32_MAX;
	volatile int16_t x775 = INT16_MAX;
	static volatile int32_t x776 = -1;
	static int32_t t142 = -1;

    t142 = ((x773%x774)==(x775*x776));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x777 = -1LL;
	static int16_t x779 = INT16_MIN;
	uint64_t x780 = UINT64_MAX;
	int32_t t143 = -43884732;

    t143 = ((x777%x778)==(x779*x780));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x785 = INT64_MAX;
	static int8_t x786 = 2;
	uint16_t x787 = 2450U;
	volatile int32_t t144 = -19;

    t144 = ((x785%x786)==(x787*x788));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x789 = INT8_MIN;
	int64_t x790 = 648413LL;
	int32_t t145 = 2;

    t145 = ((x789%x790)==(x791*x792));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x797 = UINT32_MAX;
	int64_t x798 = INT64_MIN;
	static uint8_t x799 = 6U;

    t146 = ((x797%x798)==(x799*x800));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x801 = UINT64_MAX;
	volatile uint32_t x802 = 5481U;
	int16_t x803 = INT16_MAX;
	static uint16_t x804 = 57U;
	static volatile int32_t t147 = 3413;

    t147 = ((x801%x802)==(x803*x804));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x805 = INT64_MIN;
	static int64_t x806 = INT64_MAX;
	int32_t x807 = -1;
	uint16_t x808 = 13788U;

    t148 = ((x805%x806)==(x807*x808));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x814 = -1;
	static volatile uint16_t x815 = 211U;
	volatile int32_t x816 = 66;
	int32_t t149 = -58;

    t149 = ((x813%x814)==(x815*x816));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x817 = -64;
	uint8_t x818 = 5U;
	volatile int16_t x819 = -1;
	volatile int32_t t150 = 155;

    t150 = ((x817%x818)==(x819*x820));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x821 = UINT64_MAX;
	static int8_t x822 = INT8_MIN;
	static int16_t x823 = INT16_MIN;
	static int8_t x824 = -25;
	volatile int32_t t151 = 1070;

    t151 = ((x821%x822)==(x823*x824));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x837 = 8270254788LL;
	static int16_t x838 = 3907;
	uint32_t x839 = 0U;
	int64_t x840 = INT64_MIN;
	int32_t t152 = -2848436;

    t152 = ((x837%x838)==(x839*x840));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x841 = -6;
	static uint16_t x842 = 30351U;
	uint8_t x843 = 1U;
	volatile uint16_t x844 = 12874U;
	int32_t t153 = -3877;

    t153 = ((x841%x842)==(x843*x844));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x853 = UINT16_MAX;
	int64_t x854 = -4024840LL;
	int32_t x855 = 21;
	static volatile uint8_t x856 = UINT8_MAX;
	int32_t t154 = 8738;

    t154 = ((x853%x854)==(x855*x856));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x857 = INT8_MIN;
	volatile uint64_t x858 = 20108082LLU;
	int8_t x859 = INT8_MAX;
	volatile uint32_t x860 = 3U;

    t155 = ((x857%x858)==(x859*x860));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x861 = 46U;
	int8_t x862 = 18;
	volatile uint8_t x864 = 13U;
	volatile int32_t t156 = 3;

    t156 = ((x861%x862)==(x863*x864));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x865 = INT8_MIN;
	int64_t x866 = -6540733561761LL;
	volatile int8_t x867 = INT8_MAX;
	int16_t x868 = 123;
	int32_t t157 = -354433120;

    t157 = ((x865%x866)==(x867*x868));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x869 = UINT16_MAX;
	uint16_t x870 = UINT16_MAX;
	volatile uint64_t x871 = 128318062LLU;
	int8_t x872 = 5;
	static int32_t t158 = -26549039;

    t158 = ((x869%x870)==(x871*x872));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x873 = 4077U;
	int16_t x874 = INT16_MAX;
	static volatile uint64_t x876 = 35741095424LLU;

    t159 = ((x873%x874)==(x875*x876));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x877 = -1;
	int16_t x880 = -1;
	int32_t t160 = -557345;

    t160 = ((x877%x878)==(x879*x880));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x882 = INT8_MAX;
	volatile int32_t x883 = 1;
	int64_t x884 = INT64_MAX;
	int32_t t161 = -1;

    t161 = ((x881%x882)==(x883*x884));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x886 = -529;
	static volatile int8_t x887 = 24;
	static int16_t x888 = -1;
	volatile int32_t t162 = -127201574;

    t162 = ((x885%x886)==(x887*x888));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x890 = INT16_MIN;
	static int32_t x891 = -30;
	int8_t x892 = -1;
	volatile int32_t t163 = 502;

    t163 = ((x889%x890)==(x891*x892));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x894 = INT8_MAX;
	uint64_t x896 = 616779221LLU;
	volatile int32_t t164 = -1739;

    t164 = ((x893%x894)==(x895*x896));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x897 = UINT32_MAX;
	static uint16_t x898 = UINT16_MAX;
	uint16_t x899 = 13207U;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t165 = -25630;

    t165 = ((x897%x898)==(x899*x900));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x902 = 16U;
	static int16_t x903 = 58;
	uint8_t x904 = 9U;
	int32_t t166 = 71683;

    t166 = ((x901%x902)==(x903*x904));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x905 = INT64_MIN;
	int64_t x906 = INT64_MIN;
	volatile int32_t x907 = -1;
	uint16_t x908 = 1U;
	volatile int32_t t167 = 1941076;

    t167 = ((x905%x906)==(x907*x908));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x909 = -62;
	int32_t x910 = -1;
	int16_t x911 = INT16_MIN;
	int8_t x912 = -1;
	static volatile int32_t t168 = 10009;

    t168 = ((x909%x910)==(x911*x912));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x914 = -1;
	static int64_t x915 = INT64_MIN;
	static uint8_t x916 = 1U;
	static volatile int32_t t169 = 54;

    t169 = ((x913%x914)==(x915*x916));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x921 = -10;
	static int32_t t170 = -252;

    t170 = ((x921%x922)==(x923*x924));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x925 = 5785738488LL;
	static int16_t x926 = -1;
	volatile int32_t t171 = 201;

    t171 = ((x925%x926)==(x927*x928));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x929 = 30;
	int16_t x930 = INT16_MIN;
	int8_t x931 = INT8_MAX;
	volatile int32_t x932 = 2042;
	int32_t t172 = -150100773;

    t172 = ((x929%x930)==(x931*x932));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x934 = -1;
	volatile int64_t x935 = -1LL;
	int64_t x936 = -444LL;
	volatile int32_t t173 = -211829666;

    t173 = ((x933%x934)==(x935*x936));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x941 = -6;
	static int8_t x942 = -1;
	uint32_t x943 = 9758U;
	uint32_t x944 = UINT32_MAX;
	int32_t t174 = 84770;

    t174 = ((x941%x942)==(x943*x944));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x945 = INT32_MIN;
	volatile uint8_t x946 = 16U;
	static int64_t x947 = 45104456LL;
	static uint64_t x948 = 122102586LLU;
	int32_t t175 = -23694821;

    t175 = ((x945%x946)==(x947*x948));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x949 = INT8_MIN;
	uint16_t x950 = 737U;
	int16_t x951 = INT16_MIN;
	uint64_t x952 = 2937871194024664LLU;

    t176 = ((x949%x950)==(x951*x952));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x957 = -1;
	volatile uint8_t x958 = UINT8_MAX;
	int32_t x959 = INT32_MAX;
	volatile int64_t x960 = -1LL;
	volatile int32_t t177 = 131643320;

    t177 = ((x957%x958)==(x959*x960));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x961 = INT32_MIN;
	int16_t x964 = INT16_MAX;
	int32_t t178 = 55966;

    t178 = ((x961%x962)==(x963*x964));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x965 = -1;
	int64_t x966 = INT64_MIN;
	static uint32_t x967 = 299616985U;
	volatile uint64_t x968 = 120365637LLU;
	volatile int32_t t179 = -1;

    t179 = ((x965%x966)==(x967*x968));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x970 = 4808;
	volatile int32_t x971 = -7998;
	uint64_t x972 = 486503LLU;
	volatile int32_t t180 = 139146;

    t180 = ((x969%x970)==(x971*x972));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x973 = -1;
	uint64_t x974 = 26451388LLU;
	volatile uint64_t x975 = 4391691834521LLU;
	uint8_t x976 = 31U;
	static int32_t t181 = 1916147;

    t181 = ((x973%x974)==(x975*x976));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x977 = INT8_MAX;
	uint8_t x978 = 13U;
	uint64_t x979 = UINT64_MAX;
	int16_t x980 = INT16_MIN;
	int32_t t182 = -728176885;

    t182 = ((x977%x978)==(x979*x980));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x981 = UINT64_MAX;
	uint8_t x983 = 6U;
	int32_t t183 = -6371;

    t183 = ((x981%x982)==(x983*x984));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x985 = -1;
	static volatile int64_t x987 = 20215232417LL;
	uint8_t x988 = 44U;

    t184 = ((x985%x986)==(x987*x988));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x989 = INT32_MAX;

    t185 = ((x989%x990)==(x991*x992));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x993 = -33;
	static uint16_t x994 = 1383U;
	int64_t x995 = 30LL;
	int16_t x996 = -1;
	volatile int32_t t186 = 148807;

    t186 = ((x993%x994)==(x995*x996));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x998 = 1799U;
	int8_t x999 = -1;
	int8_t x1000 = -1;
	volatile int32_t t187 = 1264;

    t187 = ((x997%x998)==(x999*x1000));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1001 = UINT64_MAX;
	int32_t x1002 = INT32_MIN;
	int8_t x1003 = INT8_MIN;
	static int16_t x1004 = -15;
	int32_t t188 = -3516813;

    t188 = ((x1001%x1002)==(x1003*x1004));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1021 = -1LL;
	int8_t x1024 = INT8_MIN;
	int32_t t189 = -649530339;

    t189 = ((x1021%x1022)==(x1023*x1024));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1033 = 32U;
	int8_t x1034 = INT8_MAX;
	static uint32_t x1035 = 5U;
	uint8_t x1036 = 15U;
	volatile int32_t t190 = -319289;

    t190 = ((x1033%x1034)==(x1035*x1036));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1041 = -1;
	int16_t x1042 = 245;
	uint64_t x1043 = 4483442980953655LLU;
	int32_t x1044 = -1;
	int32_t t191 = -2809896;

    t191 = ((x1041%x1042)==(x1043*x1044));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1045 = INT8_MIN;
	uint8_t x1046 = UINT8_MAX;
	uint64_t x1048 = 290346LLU;
	volatile int32_t t192 = -352197054;

    t192 = ((x1045%x1046)==(x1047*x1048));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1053 = INT16_MIN;
	uint8_t x1054 = UINT8_MAX;
	static int8_t x1056 = 6;
	static volatile int32_t t193 = 415525594;

    t193 = ((x1053%x1054)==(x1055*x1056));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x1057 = 39U;
	int32_t x1059 = 6152905;

    t194 = ((x1057%x1058)==(x1059*x1060));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1062 = INT32_MAX;
	static int16_t x1063 = INT16_MIN;

    t195 = ((x1061%x1062)==(x1063*x1064));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1065 = 1269963U;
	int32_t x1066 = INT32_MIN;
	static volatile int16_t x1067 = INT16_MIN;
	static uint32_t x1068 = 469U;
	int32_t t196 = 3;

    t196 = ((x1065%x1066)==(x1067*x1068));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1069 = INT32_MAX;
	uint8_t x1070 = 19U;
	int8_t x1071 = -24;
	int32_t x1072 = 8;
	volatile int32_t t197 = 1;

    t197 = ((x1069%x1070)==(x1071*x1072));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1073 = INT64_MAX;
	static volatile uint32_t x1074 = 419483U;
	int16_t x1076 = INT16_MIN;

    t198 = ((x1073%x1074)==(x1075*x1076));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1077 = 1539030;
	volatile int32_t x1078 = -3096935;
	uint32_t x1079 = UINT32_MAX;
	uint64_t x1080 = 77930372438889391LLU;
	int32_t t199 = 11563;

    t199 = ((x1077%x1078)==(x1079*x1080));

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

