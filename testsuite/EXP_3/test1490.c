
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

uint32_t x10 = UINT32_MAX;
int8_t x15 = INT8_MAX;
int32_t t3 = -3;
int32_t x20 = 209;
int32_t x22 = 85031;
int32_t x24 = -1;
int32_t x34 = -262;
static uint16_t x37 = 26U;
static volatile int32_t x39 = 114721;
int64_t x44 = -820226455226877598LL;
int16_t x45 = INT16_MIN;
volatile int8_t x49 = 62;
int8_t x51 = INT8_MAX;
uint64_t x52 = UINT64_MAX;
static int32_t x53 = 490435;
int8_t x57 = 6;
uint64_t x60 = 31804869450522951LLU;
volatile uint8_t x61 = UINT8_MAX;
volatile int32_t x63 = -1;
int64_t x68 = INT64_MIN;
uint32_t x71 = 0U;
int8_t x72 = 1;
static int64_t x75 = -83800LL;
uint32_t x80 = 19783U;
int32_t t20 = 0;
int8_t x89 = INT8_MIN;
int8_t x92 = -1;
int32_t x93 = -1282;
int16_t x95 = -1;
uint64_t x98 = 115239794340004LLU;
int16_t x99 = 228;
volatile uint16_t x101 = 2U;
int64_t x103 = -1LL;
int16_t x109 = 167;
int32_t t28 = -258263;
static int64_t x117 = INT64_MIN;
int32_t x120 = -1;
volatile int32_t t31 = 328908075;
int32_t t32 = -3649;
int8_t x136 = INT8_MAX;
volatile uint8_t x139 = 4U;
int16_t x143 = -2105;
uint32_t x149 = 38U;
static int32_t x151 = INT32_MIN;
static int16_t x153 = 39;
uint8_t x160 = 1U;
uint16_t x161 = 4U;
static volatile uint8_t x166 = 0U;
volatile int32_t t41 = -493;
static volatile uint16_t x171 = UINT16_MAX;
static int64_t x172 = 956732406LL;
int32_t t44 = -3498081;
static volatile uint8_t x182 = 22U;
static int8_t x199 = -1;
volatile int16_t x201 = INT16_MIN;
int8_t x204 = INT8_MIN;
volatile int32_t t51 = 6267;
static volatile int64_t x209 = -513822992119LL;
int32_t x210 = -1;
uint8_t x214 = 24U;
uint64_t x215 = 10LLU;
uint8_t x230 = 81U;
volatile int8_t x233 = INT8_MIN;
int64_t x236 = INT64_MIN;
int8_t x241 = 0;
volatile int32_t t60 = 9;
volatile uint32_t x247 = 137749078U;
int8_t x248 = INT8_MIN;
volatile int8_t x251 = INT8_MIN;
volatile int32_t t62 = 2515471;
uint32_t x253 = 64491U;
volatile int8_t x257 = INT8_MAX;
static uint64_t x262 = 39384603LLU;
int32_t x263 = INT32_MIN;
volatile int8_t x272 = INT8_MIN;
int64_t x281 = -1LL;
int64_t x288 = INT64_MIN;
uint8_t x291 = 30U;
int64_t x298 = 520956964899LL;
volatile int64_t x305 = INT64_MIN;
static volatile int32_t t77 = -18;
int32_t x314 = INT32_MIN;
static uint8_t x315 = UINT8_MAX;
uint8_t x325 = 62U;
uint32_t x328 = 1371802037U;
uint64_t x331 = UINT64_MAX;
uint64_t x335 = 1169128858681633065LLU;
int8_t x338 = INT8_MIN;
volatile int16_t x346 = 8;
int32_t t87 = 2;
static int64_t x353 = INT64_MAX;
static volatile int8_t x357 = 21;
volatile int8_t x363 = INT8_MIN;
static int32_t x366 = -34;
static int16_t x368 = INT16_MIN;
int32_t x370 = INT32_MAX;
int16_t x374 = -2;
uint16_t x375 = UINT16_MAX;
uint16_t x379 = UINT16_MAX;
uint64_t x380 = 13330LLU;
static int16_t x382 = 0;
int64_t x384 = INT64_MIN;
volatile int16_t x385 = INT16_MIN;
static int8_t x386 = 16;
int16_t x388 = INT16_MAX;
volatile int32_t t97 = 0;
volatile int32_t t98 = 122;
static int32_t x401 = INT32_MIN;
uint8_t x403 = 3U;
volatile int64_t x414 = INT64_MAX;
uint32_t x421 = 916046008U;
uint32_t x424 = 0U;
int16_t x429 = INT16_MIN;
static int32_t x441 = -231331403;
int64_t x442 = INT64_MIN;
int64_t x445 = INT64_MAX;
volatile int64_t x447 = INT64_MIN;
int32_t t112 = -12817;
volatile int32_t t113 = -10271;
int32_t t114 = -33;
uint64_t x471 = 45387946LLU;
uint64_t x472 = 6299946LLU;
volatile int32_t t117 = -85305689;
volatile uint32_t x474 = UINT32_MAX;
static uint32_t x489 = 90295053U;
uint16_t x502 = 1450U;
uint32_t x503 = UINT32_MAX;
static int8_t x505 = -4;
volatile int16_t x510 = INT16_MIN;
uint8_t x518 = 2U;
uint64_t x521 = 388646440LLU;
int16_t x530 = -1;
int8_t x533 = -1;
int64_t x535 = -1LL;
volatile uint8_t x542 = 24U;
int16_t x545 = 421;
int64_t x546 = INT64_MIN;
static int32_t x548 = 344759;
int32_t x559 = 7375682;
int64_t x561 = -1LL;
static volatile int64_t x565 = -2815379LL;
volatile int32_t t142 = -521795116;
volatile int64_t x577 = INT64_MAX;
volatile int64_t x578 = -1LL;
int64_t x582 = 1709316959835895LL;
int32_t t145 = -2101;
int64_t x588 = INT64_MIN;
volatile int32_t x592 = -1;
int32_t t147 = -12372842;
volatile int32_t t149 = -2;
volatile uint8_t x602 = 0U;
static int8_t x622 = INT8_MAX;
static volatile int32_t t156 = 3719;
static uint16_t x635 = 13U;
volatile int32_t t158 = -1080;
static volatile int32_t x637 = INT32_MAX;
int16_t x645 = -1;
int32_t x646 = -288;
int32_t x647 = -3;
static volatile int32_t x648 = INT32_MIN;
int32_t x661 = -1;
static int32_t t165 = 1;
volatile int32_t t166 = -76094;
int16_t x675 = INT16_MIN;
int64_t x678 = 156836135758LL;
volatile uint32_t x690 = 100U;
volatile uint16_t x694 = UINT16_MAX;
int8_t x698 = INT8_MIN;
volatile uint64_t x704 = 4003478LLU;
int32_t t175 = 93;
volatile uint8_t x707 = 12U;
int32_t x708 = -1;
volatile int32_t t176 = 1414595;
static volatile int32_t t177 = -19204371;
int32_t t178 = -291392;
uint16_t x723 = 58U;
volatile int32_t t180 = 0;
static uint32_t x731 = 172809U;
int8_t x739 = -19;
int64_t x740 = -1LL;
volatile int8_t x742 = INT8_MAX;
static int8_t x743 = -1;
int64_t x744 = -1LL;
static int16_t x745 = 2561;
int64_t x762 = INT64_MIN;
int16_t x772 = 96;
int8_t x775 = 0;
int64_t x776 = INT64_MIN;
static int8_t x777 = 1;
int64_t x778 = -27923223LL;
static uint16_t x780 = 29U;
int32_t x784 = INT32_MIN;
int32_t t197 = 4145;


void f0(void) {
    	int8_t x1 = -1;
	int16_t x2 = -1;
	static int16_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -17565513;

    t0 = ((x1>x2)<<(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	volatile int16_t x6 = 65;
	int8_t x7 = 16;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -21127508;

    t1 = ((x5>x6)<<(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int16_t x11 = -7;
	int64_t x12 = -1LL;
	int32_t t2 = 428563159;

    t2 = ((x9>x10)<<(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int8_t x16 = 5;

    t3 = ((x13>x14)<<(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int32_t x18 = 50713;
	uint16_t x19 = 4U;
	volatile int32_t t4 = -3090141;

    t4 = ((x17>x18)<<(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 3U;
	static uint64_t x23 = UINT64_MAX;
	volatile int32_t t5 = -2242479;

    t5 = ((x21>x22)<<(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int64_t x26 = 4955LL;
	uint8_t x27 = 1U;
	int16_t x28 = -41;
	int32_t t6 = -290;

    t6 = ((x25>x26)<<(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile uint8_t x30 = 9U;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -4051;

    t7 = ((x29>x30)<<(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 78291790855114LLU;
	static int16_t x35 = -1;
	volatile int32_t x36 = -1;
	int32_t t8 = 31085;

    t8 = ((x33>x34)<<(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x38 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 214;

    t9 = ((x37>x38)<<(x39==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = 235;
	volatile int32_t t10 = -8527056;

    t10 = ((x41>x42)<<(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 1U;
	volatile int8_t x47 = INT8_MIN;
	volatile int32_t x48 = -1;
	volatile int32_t t11 = 22;

    t11 = ((x45>x46)<<(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x50 = INT8_MIN;
	int32_t t12 = -215892;

    t12 = ((x49>x50)<<(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MIN;
	int8_t x55 = -1;
	static volatile int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -27;

    t13 = ((x53>x54)<<(x55==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = -9874217863605979LL;
	static volatile int64_t x59 = INT64_MIN;
	static volatile int32_t t14 = -41709726;

    t14 = ((x57>x58)<<(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = -1;

    t15 = ((x61>x62)<<(x63==x64));

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MIN;
	volatile uint64_t x66 = 8059144414LLU;
	volatile int32_t x67 = INT32_MAX;
	int32_t t16 = -124;

    t16 = ((x65>x66)<<(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MAX;
	int32_t t17 = -634662530;

    t17 = ((x69>x70)<<(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -28;

    t18 = ((x73>x74)<<(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t t19 = -93;

    t19 = ((x77>x78)<<(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 0;
	static int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	static uint16_t x84 = UINT16_MAX;

    t20 = ((x81>x82)<<(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 46493900536200LL;
	static int16_t x86 = INT16_MAX;
	volatile uint8_t x87 = 12U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -7;

    t21 = ((x85>x86)<<(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MAX;
	int32_t t22 = -182900;

    t22 = ((x89>x90)<<(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 1;

    t23 = ((x93>x94)<<(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	int64_t x100 = INT64_MIN;
	int32_t t24 = -9;

    t24 = ((x97>x98)<<(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 443LLU;
	uint64_t x104 = 11753658794LLU;
	int32_t t25 = 0;

    t25 = ((x101>x102)<<(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MAX;
	volatile int64_t x106 = 7805LL;
	int64_t x107 = INT64_MAX;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 54155;

    t26 = ((x105>x106)<<(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = INT16_MAX;
	volatile uint16_t x111 = 105U;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 79062;

    t27 = ((x109>x110)<<(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	static int8_t x114 = INT8_MIN;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = INT16_MIN;

    t28 = ((x113>x114)<<(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x118 = 55U;
	int32_t x119 = 1460;
	int32_t t29 = -263118353;

    t29 = ((x117>x118)<<(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 114U;
	static uint64_t x122 = 29228LLU;
	int64_t x123 = -1LL;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t30 = -208098;

    t30 = ((x121>x122)<<(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -1;
	static int16_t x126 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MAX;

    t31 = ((x125>x126)<<(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = -1;
	uint64_t x131 = 207229721060586LLU;
	int8_t x132 = INT8_MIN;

    t32 = ((x129>x130)<<(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -262461395;
	uint16_t x134 = 3U;
	volatile int16_t x135 = INT16_MIN;
	int32_t t33 = 29399549;

    t33 = ((x133>x134)<<(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 515989;
	int8_t x138 = 1;
	volatile int32_t x140 = -4;
	volatile int32_t t34 = 1;

    t34 = ((x137>x138)<<(x139==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = 23834;
	int32_t x142 = 1326;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = -31798;

    t35 = ((x141>x142)<<(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 67409;

    t36 = ((x145>x146)<<(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	static int32_t t37 = -465264444;

    t37 = ((x149>x150)<<(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -115848;

    t38 = ((x153>x154)<<(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = 3101886508471137LL;
	uint16_t x158 = 6U;
	volatile int16_t x159 = -1;
	static int32_t t39 = -158613980;

    t39 = ((x157>x158)<<(x159==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MIN;
	static int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	static volatile int32_t t40 = 3;

    t40 = ((x161>x162)<<(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	uint64_t x167 = 3233540170692673LLU;
	int8_t x168 = -1;

    t41 = ((x165>x166)<<(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int32_t t42 = -108770;

    t42 = ((x169>x170)<<(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 5534U;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 337;

    t43 = ((x173>x174)<<(x175==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint32_t x178 = 315805U;
	int32_t x179 = -1;
	int8_t x180 = INT8_MIN;

    t44 = ((x177>x178)<<(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x181 = 7855339U;
	static volatile int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -355755338;

    t45 = ((x181>x182)<<(x183==x184));

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = -351;
	int32_t x187 = 0;
	int8_t x188 = 1;
	volatile int32_t t46 = -1;

    t46 = ((x185>x186)<<(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x189 = 5999790960332LL;
	int64_t x190 = -308771051513LL;
	uint64_t x191 = 107403477970LLU;
	int8_t x192 = -1;
	int32_t t47 = 398;

    t47 = ((x189>x190)<<(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 23473U;
	volatile int8_t x195 = INT8_MIN;
	uint32_t x196 = 493765392U;
	int32_t t48 = 88394081;

    t48 = ((x193>x194)<<(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	volatile int32_t x198 = 246026809;
	volatile uint32_t x200 = 37659072U;
	volatile int32_t t49 = 101121515;

    t49 = ((x197>x198)<<(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	volatile int32_t t50 = 25000495;

    t50 = ((x201>x202)<<(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int16_t x206 = INT16_MAX;
	int8_t x207 = INT8_MIN;
	volatile uint8_t x208 = UINT8_MAX;

    t51 = ((x205>x206)<<(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x211 = -7;
	int64_t x212 = -19462324LL;
	static int32_t t52 = -983349349;

    t52 = ((x209>x210)<<(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = INT64_MIN;
	uint64_t x216 = 111454LLU;
	volatile int32_t t53 = 729939833;

    t53 = ((x213>x214)<<(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MAX;
	volatile int32_t x220 = INT32_MIN;
	int32_t t54 = 493;

    t54 = ((x217>x218)<<(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 25780;

    t55 = ((x221>x222)<<(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x226 = -1;
	static volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -10806;
	int32_t t56 = -478;

    t56 = ((x225>x226)<<(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	volatile int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 2627;

    t57 = ((x229>x230)<<(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = -1;
	uint8_t x235 = 0U;
	volatile int32_t t58 = -15;

    t58 = ((x233>x234)<<(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	static int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -9626;

    t59 = ((x237>x238)<<(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	uint8_t x244 = 10U;

    t60 = ((x241>x242)<<(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 0LL;
	uint8_t x246 = 79U;
	volatile int32_t t61 = 739216998;

    t61 = ((x245>x246)<<(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 8;
	static int16_t x250 = INT16_MAX;
	volatile int32_t x252 = INT32_MAX;

    t62 = ((x249>x250)<<(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 2U;
	static uint64_t x255 = 942061254385651LLU;
	int16_t x256 = 1;
	int32_t t63 = -4386;

    t63 = ((x253>x254)<<(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MIN;
	int32_t x259 = -1;
	volatile uint64_t x260 = UINT64_MAX;
	int32_t t64 = 0;

    t64 = ((x257>x258)<<(x259==x260));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MAX;
	int64_t x264 = INT64_MAX;
	volatile int32_t t65 = 580;

    t65 = ((x261>x262)<<(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	uint16_t x266 = 5825U;
	static int64_t x267 = INT64_MIN;
	uint8_t x268 = 2U;
	volatile int32_t t66 = -1;

    t66 = ((x265>x266)<<(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	static int16_t x270 = -1;
	uint16_t x271 = 0U;
	static int32_t t67 = -210101;

    t67 = ((x269>x270)<<(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	static uint64_t x274 = 9686571167LLU;
	static int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t68 = 0;

    t68 = ((x273>x274)<<(x275==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x277 = UINT32_MAX;
	static uint16_t x278 = UINT16_MAX;
	int32_t x279 = -227864;
	static uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 183637637;

    t69 = ((x277>x278)<<(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x282 = INT32_MIN;
	uint64_t x283 = 454887528443LLU;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 1;

    t70 = ((x281>x282)<<(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	static uint16_t x287 = 3U;
	int32_t t71 = 5136;

    t71 = ((x285>x286)<<(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile uint32_t x290 = 2U;
	volatile int32_t x292 = -1;
	volatile int32_t t72 = -3;

    t72 = ((x289>x290)<<(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	static int64_t x294 = -5LL;
	int64_t x295 = INT64_MAX;
	int64_t x296 = -282658521396202794LL;
	int32_t t73 = 377703;

    t73 = ((x293>x294)<<(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	static uint16_t x299 = UINT16_MAX;
	volatile uint64_t x300 = 1236241054963454LLU;
	int32_t t74 = 1082;

    t74 = ((x297>x298)<<(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 681206238382265920LLU;
	int8_t x302 = -1;
	static int16_t x303 = 1119;
	int64_t x304 = -1LL;
	static volatile int32_t t75 = 41117;

    t75 = ((x301>x302)<<(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	uint32_t x307 = 3872686U;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = -7748761;

    t76 = ((x305>x306)<<(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x310 = -123;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;

    t77 = ((x309>x310)<<(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t78 = 5916110;

    t78 = ((x313>x314)<<(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	volatile int8_t x318 = -1;
	static int8_t x319 = 42;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 13;

    t79 = ((x317>x318)<<(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = 17;
	int16_t x323 = 2;
	static volatile int8_t x324 = 0;
	volatile int32_t t80 = 987;

    t80 = ((x321>x322)<<(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	volatile int32_t t81 = 1364728;

    t81 = ((x325>x326)<<(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MAX;
	int64_t x330 = -366LL;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -24030200;

    t82 = ((x329>x330)<<(x331==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = 3539U;
	volatile int8_t x334 = INT8_MIN;
	int16_t x336 = -1;
	static int32_t t83 = 5;

    t83 = ((x333>x334)<<(x335==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = 1LL;
	int16_t x339 = INT16_MIN;
	int16_t x340 = 0;
	volatile int32_t t84 = 117790680;

    t84 = ((x337>x338)<<(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 525445464548846028LL;
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 0U;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 1543;

    t85 = ((x341>x342)<<(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 11540U;
	int8_t x347 = 30;
	volatile uint16_t x348 = 16386U;
	int32_t t86 = -22957134;

    t86 = ((x345>x346)<<(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 0;
	int16_t x350 = -1;
	uint32_t x351 = 361098U;
	static uint64_t x352 = 95196960239708524LLU;

    t87 = ((x349>x350)<<(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = INT64_MIN;
	uint64_t x355 = 15599450599681LLU;
	int64_t x356 = INT64_MIN;
	static int32_t t88 = -12;

    t88 = ((x353>x354)<<(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = UINT16_MAX;
	volatile int16_t x359 = -2086;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -3811;

    t89 = ((x357>x358)<<(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 34U;
	uint16_t x362 = 1969U;
	volatile int8_t x364 = INT8_MAX;
	int32_t t90 = -219030112;

    t90 = ((x361>x362)<<(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -76;
	uint16_t x367 = 3U;
	int32_t t91 = 72907;

    t91 = ((x365>x366)<<(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 170019U;
	uint8_t x371 = 1U;
	int16_t x372 = -3939;
	volatile int32_t t92 = 54;

    t92 = ((x369>x370)<<(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	int8_t x376 = INT8_MAX;
	static volatile int32_t t93 = 41045;

    t93 = ((x373>x374)<<(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 31717772986923LLU;
	int64_t x378 = INT64_MAX;
	int32_t t94 = -42390;

    t94 = ((x377>x378)<<(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	int16_t x383 = INT16_MAX;
	static volatile int32_t t95 = 2;

    t95 = ((x381>x382)<<(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x387 = 520270019855148LL;
	volatile int32_t t96 = 27721;

    t96 = ((x385>x386)<<(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x389 = UINT8_MAX;
	uint16_t x390 = 3U;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MAX;

    t97 = ((x389>x390)<<(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	static uint16_t x396 = 4U;

    t98 = ((x393>x394)<<(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MAX;
	static volatile int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = UINT16_MAX;
	int8_t x400 = -1;
	int32_t t99 = 374721;

    t99 = ((x397>x398)<<(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x402 = UINT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = 3793;

    t100 = ((x401>x402)<<(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 9U;
	static volatile int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 221;

    t101 = ((x405>x406)<<(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MIN;
	static int8_t x411 = INT8_MIN;
	volatile uint32_t x412 = 515497939U;
	volatile int32_t t102 = -778065;

    t102 = ((x409>x410)<<(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int8_t x415 = -2;
	volatile uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = 171179;

    t103 = ((x413>x414)<<(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 12333929873470078LL;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -3;
	static int16_t x420 = -1;
	volatile int32_t t104 = 330983;

    t104 = ((x417>x418)<<(x419==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 681768962U;
	volatile uint64_t x423 = 6925LLU;
	static volatile int32_t t105 = 3430;

    t105 = ((x421>x422)<<(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 2U;
	int64_t x426 = INT64_MAX;
	volatile int32_t x427 = -1;
	int16_t x428 = INT16_MIN;
	int32_t t106 = -15;

    t106 = ((x425>x426)<<(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = 28047;
	static volatile int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t107 = 4984171;

    t107 = ((x429>x430)<<(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x433 = 380488665LLU;
	uint64_t x434 = 2023400760967LLU;
	int32_t x435 = -4668;
	int8_t x436 = 0;
	int32_t t108 = 650;

    t108 = ((x433>x434)<<(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 179515367708137418LL;
	uint8_t x438 = UINT8_MAX;
	static int8_t x439 = -10;
	uint16_t x440 = 11U;
	int32_t t109 = 531091094;

    t109 = ((x437>x438)<<(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x443 = 35U;
	static int64_t x444 = INT64_MAX;
	volatile int32_t t110 = -39;

    t110 = ((x441>x442)<<(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = INT32_MIN;
	uint8_t x448 = 10U;
	static volatile int32_t t111 = 2;

    t111 = ((x445>x446)<<(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -176299870LL;
	static volatile int16_t x450 = INT16_MIN;
	static uint16_t x451 = 13U;
	int8_t x452 = -1;

    t112 = ((x449>x450)<<(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	int8_t x454 = INT8_MAX;
	int32_t x455 = INT32_MAX;
	int32_t x456 = -1;

    t113 = ((x453>x454)<<(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -10;
	static int8_t x458 = INT8_MIN;
	int32_t x459 = -161717;
	int16_t x460 = -2;

    t114 = ((x457>x458)<<(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	static int32_t x462 = INT32_MIN;
	int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = 0;

    t115 = ((x461>x462)<<(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = -1LL;
	uint16_t x466 = 3U;
	int64_t x467 = 85247236LL;
	volatile int8_t x468 = INT8_MAX;
	int32_t t116 = 6608075;

    t116 = ((x465>x466)<<(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 1498968LL;
	static int16_t x470 = -1;

    t117 = ((x469>x470)<<(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x473 = UINT32_MAX;
	static uint32_t x475 = UINT32_MAX;
	int32_t x476 = -1;
	int32_t t118 = 0;

    t118 = ((x473>x474)<<(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = 117U;
	static int16_t x478 = -1;
	int8_t x479 = -57;
	volatile uint32_t x480 = 2U;
	volatile int32_t t119 = -13514;

    t119 = ((x477>x478)<<(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	uint16_t x482 = 939U;
	uint8_t x483 = 3U;
	volatile int16_t x484 = INT16_MAX;
	volatile int32_t t120 = 22829837;

    t120 = ((x481>x482)<<(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	int8_t x486 = -42;
	uint8_t x487 = UINT8_MAX;
	static int64_t x488 = -1LL;
	volatile int32_t t121 = -3484388;

    t121 = ((x485>x486)<<(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = INT16_MIN;
	static int16_t x491 = -1;
	int32_t x492 = -1;
	static int32_t t122 = 811;

    t122 = ((x489>x490)<<(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	uint64_t x494 = 22357263090LLU;
	volatile int32_t x495 = INT32_MIN;
	int8_t x496 = INT8_MAX;
	volatile int32_t t123 = 1;

    t123 = ((x493>x494)<<(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x497 = 15011053744794LLU;
	int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MAX;
	static int64_t x500 = 0LL;
	volatile int32_t t124 = 159;

    t124 = ((x497>x498)<<(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 22LLU;
	volatile uint16_t x504 = UINT16_MAX;
	int32_t t125 = -166011;

    t125 = ((x501>x502)<<(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x506 = 63650880342LLU;
	int16_t x507 = 1;
	int8_t x508 = INT8_MIN;
	volatile int32_t t126 = 496917648;

    t126 = ((x505>x506)<<(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 11;
	int16_t x511 = INT16_MAX;
	uint8_t x512 = 10U;
	int32_t t127 = -1;

    t127 = ((x509>x510)<<(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = 4;
	static int32_t x514 = -9121666;
	int64_t x515 = INT64_MAX;
	int16_t x516 = -124;
	static volatile int32_t t128 = 481770357;

    t128 = ((x513>x514)<<(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static volatile int16_t x519 = INT16_MIN;
	int64_t x520 = -1LL;
	volatile int32_t t129 = 809347;

    t129 = ((x517>x518)<<(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = 2876181847827472945LL;
	uint16_t x523 = UINT16_MAX;
	uint64_t x524 = UINT64_MAX;
	static int32_t t130 = -3692708;

    t130 = ((x521>x522)<<(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -10;
	int8_t x526 = INT8_MIN;
	uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = 16;
	int32_t t131 = -2234395;

    t131 = ((x525>x526)<<(x527==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = -6;
	int32_t x531 = INT32_MIN;
	int8_t x532 = INT8_MAX;
	int32_t t132 = 823364247;

    t132 = ((x529>x530)<<(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = INT32_MIN;
	int64_t x536 = 3972LL;
	int32_t t133 = -2;

    t133 = ((x533>x534)<<(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = -1195;
	static int32_t x539 = -1;
	volatile int16_t x540 = INT16_MAX;
	volatile int32_t t134 = 11270826;

    t134 = ((x537>x538)<<(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = INT16_MIN;
	static volatile int16_t x543 = INT16_MAX;
	static uint64_t x544 = 97028942157LLU;
	int32_t t135 = -18;

    t135 = ((x541>x542)<<(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x547 = 1;
	static int32_t t136 = -238660650;

    t136 = ((x545>x546)<<(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MIN;
	volatile uint32_t x550 = UINT32_MAX;
	uint32_t x551 = 626U;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t137 = 498208591;

    t137 = ((x549>x550)<<(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 6U;
	uint64_t x554 = 32756LLU;
	static int16_t x555 = INT16_MIN;
	volatile int64_t x556 = 775LL;
	static int32_t t138 = 1318953;

    t138 = ((x553>x554)<<(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = 1;
	volatile uint16_t x558 = UINT16_MAX;
	uint64_t x560 = UINT64_MAX;
	volatile int32_t t139 = -4236823;

    t139 = ((x557>x558)<<(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x562 = INT16_MAX;
	static uint64_t x563 = UINT64_MAX;
	static uint16_t x564 = 63U;
	volatile int32_t t140 = 236;

    t140 = ((x561>x562)<<(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x566 = INT16_MAX;
	volatile int16_t x567 = INT16_MIN;
	static int16_t x568 = -2;
	int32_t t141 = 1930865;

    t141 = ((x565>x566)<<(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = 14379028U;
	static volatile uint64_t x570 = 21598350661016LLU;
	static uint32_t x571 = 667113240U;
	int64_t x572 = -16957126130708LL;

    t142 = ((x569>x570)<<(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x574 = INT32_MIN;
	static int32_t x575 = 55;
	volatile int8_t x576 = -12;
	volatile int32_t t143 = 1352;

    t143 = ((x573>x574)<<(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x579 = INT32_MIN;
	int16_t x580 = -1;
	int32_t t144 = -10796699;

    t144 = ((x577>x578)<<(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	static int16_t x583 = 0;
	int64_t x584 = INT64_MAX;

    t145 = ((x581>x582)<<(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = UINT16_MAX;
	static int64_t x586 = INT64_MIN;
	static uint16_t x587 = 5U;
	int32_t t146 = 13351;

    t146 = ((x585>x586)<<(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = INT32_MIN;
	uint32_t x590 = 109450U;
	int8_t x591 = INT8_MIN;

    t147 = ((x589>x590)<<(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	uint8_t x594 = UINT8_MAX;
	static volatile int64_t x595 = -1LL;
	int16_t x596 = INT16_MIN;
	int32_t t148 = 180;

    t148 = ((x593>x594)<<(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = UINT16_MAX;
	uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MAX;
	int32_t x600 = 259681;

    t149 = ((x597>x598)<<(x599==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = 1;
	int64_t x603 = INT64_MAX;
	int16_t x604 = INT16_MIN;
	int32_t t150 = -234022;

    t150 = ((x601>x602)<<(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	uint8_t x607 = UINT8_MAX;
	int8_t x608 = 1;
	volatile int32_t t151 = 99813;

    t151 = ((x605>x606)<<(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -25;
	int64_t x610 = -1LL;
	int64_t x611 = INT64_MIN;
	uint16_t x612 = UINT16_MAX;
	int32_t t152 = -158;

    t152 = ((x609>x610)<<(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	static uint32_t x614 = UINT32_MAX;
	volatile int8_t x615 = 2;
	int64_t x616 = -162055LL;
	int32_t t153 = 192677;

    t153 = ((x613>x614)<<(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 14U;
	int64_t x618 = INT64_MIN;
	int64_t x619 = -1LL;
	uint16_t x620 = 63U;
	int32_t t154 = 90317;

    t154 = ((x617>x618)<<(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	volatile uint32_t x623 = UINT32_MAX;
	volatile int8_t x624 = -1;
	int32_t t155 = -4719869;

    t155 = ((x621>x622)<<(x623==x624));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -1LL;
	volatile uint16_t x626 = 10U;
	int16_t x627 = INT16_MIN;
	int8_t x628 = INT8_MAX;

    t156 = ((x625>x626)<<(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x630 = -135;
	static uint8_t x631 = UINT8_MAX;
	volatile int16_t x632 = 1;
	volatile int32_t t157 = -2750666;

    t157 = ((x629>x630)<<(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x633 = 27U;
	static int16_t x634 = INT16_MIN;
	int16_t x636 = INT16_MIN;

    t158 = ((x633>x634)<<(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x638 = INT32_MIN;
	int32_t x639 = INT32_MAX;
	volatile uint32_t x640 = 316841U;
	static volatile int32_t t159 = 9234;

    t159 = ((x637>x638)<<(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	static volatile int16_t x642 = -1;
	volatile int64_t x643 = -1LL;
	int32_t x644 = INT32_MIN;
	int32_t t160 = -6039535;

    t160 = ((x641>x642)<<(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t t161 = -32772058;

    t161 = ((x645>x646)<<(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = 4U;
	int16_t x650 = -7588;
	int32_t x651 = -1;
	int16_t x652 = -173;
	int32_t t162 = -46;

    t162 = ((x649>x650)<<(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = 0;
	int16_t x656 = INT16_MIN;
	int32_t t163 = -315;

    t163 = ((x653>x654)<<(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	volatile uint64_t x658 = 7591561552553363380LLU;
	uint64_t x659 = 34198973LLU;
	int16_t x660 = 281;
	volatile int32_t t164 = 63;

    t164 = ((x657>x658)<<(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x662 = UINT64_MAX;
	static volatile int64_t x663 = INT64_MIN;
	volatile uint16_t x664 = 8112U;

    t165 = ((x661>x662)<<(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 25670185394779408LLU;
	static volatile int16_t x666 = INT16_MIN;
	int16_t x667 = 42;
	static volatile int64_t x668 = INT64_MIN;

    t166 = ((x665>x666)<<(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	static uint8_t x670 = UINT8_MAX;
	volatile int8_t x671 = 1;
	int16_t x672 = 57;
	volatile int32_t t167 = -5741482;

    t167 = ((x669>x670)<<(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = 4312703799LL;
	volatile int16_t x674 = -2;
	uint8_t x676 = 38U;
	int32_t t168 = 3903170;

    t168 = ((x673>x674)<<(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 0U;
	int32_t x679 = 971723727;
	uint32_t x680 = UINT32_MAX;
	int32_t t169 = -46173234;

    t169 = ((x677>x678)<<(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	uint16_t x682 = 1U;
	int64_t x683 = INT64_MIN;
	int32_t x684 = -891510914;
	volatile int32_t t170 = 184188;

    t170 = ((x681>x682)<<(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	static int64_t x686 = INT64_MIN;
	int16_t x687 = INT16_MAX;
	uint8_t x688 = 18U;
	static int32_t t171 = 195;

    t171 = ((x685>x686)<<(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 7U;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = -503;

    t172 = ((x689>x690)<<(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x695 = -151;
	int8_t x696 = 1;
	volatile int32_t t173 = -38215840;

    t173 = ((x693>x694)<<(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	static uint64_t x699 = 1934456LLU;
	int16_t x700 = INT16_MIN;
	static volatile int32_t t174 = -60569909;

    t174 = ((x697>x698)<<(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 1508LLU;
	int8_t x702 = INT8_MIN;
	int32_t x703 = INT32_MAX;

    t175 = ((x701>x702)<<(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x705 = 1;
	int16_t x706 = 2;

    t176 = ((x705>x706)<<(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	volatile int8_t x710 = INT8_MIN;
	int8_t x711 = -4;
	int32_t x712 = INT32_MIN;

    t177 = ((x709>x710)<<(x711==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 4698;
	static int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	uint32_t x716 = 1774201332U;

    t178 = ((x713>x714)<<(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -6363;
	int32_t x718 = 31;
	uint16_t x719 = 1502U;
	static uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = 39;

    t179 = ((x717>x718)<<(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MAX;
	volatile int16_t x722 = INT16_MIN;
	int64_t x724 = 56697833370LL;

    t180 = ((x721>x722)<<(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 4LLU;
	int16_t x726 = INT16_MIN;
	int8_t x727 = INT8_MIN;
	static int64_t x728 = -1LL;
	static int32_t t181 = -498841;

    t181 = ((x725>x726)<<(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MIN;
	volatile int8_t x730 = INT8_MAX;
	static uint16_t x732 = 0U;
	int32_t t182 = 11288697;

    t182 = ((x729>x730)<<(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 35U;
	int16_t x734 = INT16_MIN;
	uint16_t x735 = 0U;
	uint16_t x736 = 1346U;
	int32_t t183 = 22;

    t183 = ((x733>x734)<<(x735==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 3U;
	uint64_t x738 = 4126LLU;
	volatile int32_t t184 = -392357;

    t184 = ((x737>x738)<<(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	volatile int32_t t185 = 0;

    t185 = ((x741>x742)<<(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = 0;
	volatile int16_t x747 = -2;
	int32_t x748 = -130727;
	volatile int32_t t186 = 5627417;

    t186 = ((x745>x746)<<(x747==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 2820U;
	int16_t x750 = 3341;
	int8_t x751 = 3;
	uint64_t x752 = 2962437196137849LLU;
	static volatile int32_t t187 = -44555400;

    t187 = ((x749>x750)<<(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 1U;
	int64_t x754 = INT64_MIN;
	uint8_t x755 = 84U;
	int16_t x756 = 6;
	volatile int32_t t188 = 618928;

    t188 = ((x753>x754)<<(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = UINT64_MAX;
	uint32_t x758 = 5435387U;
	int32_t x759 = -210667308;
	volatile uint16_t x760 = UINT16_MAX;
	int32_t t189 = 537458;

    t189 = ((x757>x758)<<(x759==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	static uint64_t x763 = 66236509795325260LLU;
	uint16_t x764 = 1U;
	int32_t t190 = -350117950;

    t190 = ((x761>x762)<<(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 617157LLU;
	int64_t x766 = INT64_MIN;
	int8_t x767 = INT8_MIN;
	int16_t x768 = -1;
	volatile int32_t t191 = -13;

    t191 = ((x765>x766)<<(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = UINT16_MAX;
	int32_t x770 = -111;
	int16_t x771 = INT16_MIN;
	static int32_t t192 = 42878156;

    t192 = ((x769>x770)<<(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	volatile int64_t x774 = INT64_MIN;
	int32_t t193 = -16563241;

    t193 = ((x773>x774)<<(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x779 = INT16_MIN;
	volatile int32_t t194 = -481873451;

    t194 = ((x777>x778)<<(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -60;
	int8_t x782 = 51;
	static int32_t x783 = INT32_MIN;
	static volatile int32_t t195 = 12;

    t195 = ((x781>x782)<<(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static int64_t x786 = INT64_MIN;
	uint8_t x787 = UINT8_MAX;
	uint8_t x788 = 1U;
	volatile int32_t t196 = -91835;

    t196 = ((x785>x786)<<(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1341;
	static int32_t x790 = -433;
	volatile int8_t x791 = -19;
	static volatile int32_t x792 = -55;

    t197 = ((x789>x790)<<(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	int8_t x794 = -1;
	static int32_t x795 = INT32_MIN;
	static int8_t x796 = INT8_MAX;
	int32_t t198 = 689;

    t198 = ((x793>x794)<<(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = INT32_MIN;
	uint16_t x798 = 279U;
	int8_t x799 = -1;
	int64_t x800 = 2012597465742674LL;
	static int32_t t199 = -2035;

    t199 = ((x797>x798)<<(x799==x800));

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

