
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

int32_t x1 = INT32_MIN;
uint32_t x3 = 189U;
int16_t x11 = -54;
static volatile int32_t t2 = 20;
int16_t x19 = INT16_MIN;
uint16_t x22 = 3626U;
static int16_t x25 = -1;
static uint16_t x28 = UINT16_MAX;
int16_t x29 = INT16_MIN;
volatile int32_t t7 = -230;
int32_t t8 = -77;
volatile int32_t t9 = -2487;
uint32_t x43 = UINT32_MAX;
int8_t x47 = 2;
int16_t x49 = 9556;
volatile int32_t x61 = 94711205;
uint8_t x63 = 10U;
int32_t x80 = 6002163;
static uint64_t x81 = 111269291514LLU;
volatile int32_t t21 = -513110440;
uint8_t x89 = UINT8_MAX;
static volatile int32_t x92 = INT32_MAX;
static volatile uint8_t x94 = 36U;
volatile int64_t x97 = INT64_MAX;
uint16_t x105 = 131U;
volatile int64_t x109 = INT64_MAX;
volatile int32_t t29 = -10;
volatile int32_t t30 = 122;
int8_t x127 = 20;
uint16_t x131 = 16851U;
volatile int32_t t32 = 2;
volatile uint8_t x136 = UINT8_MAX;
int16_t x137 = INT16_MIN;
volatile int32_t t34 = -129701;
int8_t x147 = INT8_MAX;
int16_t x151 = -6;
static int32_t x156 = 1;
int8_t x158 = -6;
int16_t x164 = 0;
int16_t x168 = INT16_MAX;
uint16_t x173 = 67U;
int16_t x175 = -1;
static volatile int32_t x177 = -26562;
int16_t x188 = INT16_MIN;
volatile int8_t x190 = INT8_MAX;
volatile int32_t t47 = 1926;
int32_t x195 = INT32_MIN;
uint16_t x198 = 10U;
static int16_t x200 = INT16_MAX;
int32_t t49 = 67;
static volatile uint32_t x201 = 92320858U;
volatile int16_t x202 = INT16_MIN;
volatile int32_t t50 = 10;
static int64_t x205 = INT64_MIN;
int8_t x207 = INT8_MIN;
uint32_t x209 = 49U;
uint32_t x213 = UINT32_MAX;
static uint64_t x228 = 215949941LLU;
int32_t t57 = 2010;
uint8_t x236 = 10U;
int16_t x240 = 3;
int32_t t59 = 509832490;
int64_t x243 = 16794399487LL;
int32_t x246 = -52837;
static volatile int16_t x251 = INT16_MIN;
static int32_t t62 = 2138;
int64_t x261 = -80098543361644LL;
int32_t x263 = 77;
static int64_t x271 = 440073809163618771LL;
static int32_t t67 = 0;
volatile int16_t x287 = -58;
volatile int32_t t71 = 639302;
uint16_t x290 = 237U;
volatile int16_t x295 = INT16_MIN;
volatile int32_t t73 = -5463663;
uint16_t x305 = UINT16_MAX;
int32_t x306 = -222266197;
uint16_t x308 = UINT16_MAX;
static int32_t x318 = 1736599;
uint16_t x324 = 18U;
static volatile uint32_t x336 = 516085453U;
static volatile int32_t t85 = -3174775;
int64_t x347 = 845685242813573915LL;
static int16_t x354 = INT16_MIN;
int32_t t89 = 5588839;
uint64_t x376 = UINT64_MAX;
int32_t x378 = INT32_MIN;
uint32_t x379 = 2955200U;
int32_t t97 = -45271874;
uint64_t x393 = 28310855LLU;
int8_t x395 = -1;
volatile uint32_t x402 = 723545U;
int8_t x403 = INT8_MIN;
volatile uint16_t x411 = 149U;
volatile int32_t t102 = -54360874;
volatile uint64_t x425 = UINT64_MAX;
int8_t x426 = -1;
int64_t x434 = -1LL;
volatile int32_t t108 = 8;
static uint32_t x439 = 116U;
uint16_t x448 = 624U;
static volatile int64_t x449 = INT64_MAX;
int32_t t112 = 926;
int32_t t113 = -1;
uint32_t x457 = 456U;
volatile int32_t t115 = -108;
uint32_t x466 = UINT32_MAX;
volatile uint64_t x476 = 13517LLU;
int16_t x480 = INT16_MIN;
volatile int32_t t120 = 70830;
static volatile uint16_t x488 = UINT16_MAX;
int32_t x494 = INT32_MIN;
int8_t x496 = 10;
volatile int64_t x498 = -1LL;
int64_t x501 = -1LL;
uint64_t x505 = 6285275229802LLU;
static int8_t x508 = INT8_MIN;
int32_t x510 = -4498;
int8_t x512 = -1;
uint64_t x522 = 263682132507953021LLU;
static int64_t x527 = INT64_MAX;
int8_t x528 = -1;
volatile int64_t x548 = -251951614LL;
static volatile int32_t t136 = 57692917;
uint8_t x553 = 1U;
int32_t t138 = 22644;
int32_t x558 = -1932750;
static int64_t x560 = -1LL;
static int8_t x570 = INT8_MIN;
volatile int32_t t144 = -9;
int32_t x583 = -1;
int32_t t147 = 54079883;
int8_t x594 = -1;
volatile int32_t x604 = INT32_MIN;
uint32_t x609 = UINT32_MAX;
volatile uint64_t x615 = UINT64_MAX;
volatile int64_t x617 = -922120LL;
volatile int32_t x619 = INT32_MIN;
int64_t x631 = INT64_MIN;
static int8_t x639 = INT8_MIN;
volatile int32_t t160 = 56;
int16_t x654 = INT16_MIN;
volatile uint16_t x657 = 3U;
int32_t x665 = INT32_MIN;
static volatile int32_t t166 = 5;
volatile uint64_t x669 = 34025097761500383LLU;
uint64_t x671 = 1010944388223LLU;
volatile int32_t t167 = -3763;
volatile int32_t x680 = INT32_MAX;
int16_t x683 = -1;
int16_t x689 = INT16_MAX;
int32_t t174 = -5025;
static int32_t t175 = 676892;
int16_t x705 = INT16_MIN;
int32_t t176 = -128;
static volatile int32_t x711 = 45215145;
uint8_t x729 = UINT8_MAX;
static int32_t t182 = 0;
int8_t x745 = INT8_MIN;
int64_t x746 = INT64_MAX;
int8_t x748 = INT8_MIN;
int16_t x749 = -2;
int16_t x757 = INT16_MIN;
int8_t x760 = INT8_MAX;
volatile uint64_t x765 = UINT64_MAX;
int32_t x767 = INT32_MIN;
static int32_t x768 = INT32_MIN;
int32_t x776 = INT32_MAX;
int32_t t193 = 31;
int32_t t194 = 6;
uint64_t x781 = 82507551LLU;
uint16_t x785 = UINT16_MAX;
int16_t x791 = -846;
static int32_t t197 = -1896;
int32_t t198 = 724;
uint8_t x797 = 4U;


void f0(void) {
    	uint32_t x2 = 875U;
	int64_t x4 = -904020767LL;
	volatile int32_t t0 = 96864052;

    t0 = (x1==(x2^(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 49475159340038LLU;
	uint32_t x6 = 14843158U;
	static volatile int64_t x7 = -25687071LL;
	volatile int8_t x8 = -1;
	int32_t t1 = 2026788;

    t1 = (x5==(x6^(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 895554LLU;
	uint32_t x10 = 59617687U;
	uint16_t x12 = 79U;

    t2 = (x9==(x10^(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	volatile uint8_t x15 = 41U;
	int8_t x16 = -1;
	int32_t t3 = -4;

    t3 = (x13==(x14^(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int64_t x18 = -1LL;
	int8_t x20 = 1;
	int32_t t4 = 177854412;

    t4 = (x17==(x18^(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int32_t x23 = -5710;
	static int8_t x24 = -1;
	volatile int32_t t5 = -2939807;

    t5 = (x21==(x22^(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = 17;
	uint64_t x27 = UINT64_MAX;
	static volatile int32_t t6 = -1;

    t6 = (x25==(x26^(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MIN;
	static int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;

    t7 = (x29==(x30^(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = -10;
	volatile int8_t x34 = 1;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = 100U;

    t8 = (x33==(x34^(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 81401LLU;
	int8_t x39 = -1;
	static int32_t x40 = -1;

    t9 = (x37==(x38^(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	int32_t x44 = 27;
	static int32_t t10 = -48289;

    t10 = (x41==(x42^(x43^x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 13U;
	int32_t x46 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -99;

    t11 = (x45==(x46^(x47^x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	int32_t t12 = -5576450;

    t12 = (x49==(x50^(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int8_t x54 = -1;
	uint8_t x55 = 1U;
	int32_t x56 = INT32_MAX;
	static int32_t t13 = -244358948;

    t13 = (x53==(x54^(x55^x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = -1;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = 490167U;
	int8_t x60 = 0;
	volatile int32_t t14 = 26;

    t14 = (x57==(x58^(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = 110537633LLU;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -2;

    t15 = (x61==(x62^(x63^x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 24333U;
	int32_t x66 = 1065777553;
	int32_t x67 = INT32_MAX;
	volatile uint16_t x68 = 97U;
	static volatile int32_t t16 = 57028;

    t16 = (x65==(x66^(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	uint16_t x70 = 96U;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = INT64_MIN;
	static int32_t t17 = -443;

    t17 = (x69==(x70^(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	uint8_t x74 = 10U;
	uint32_t x75 = 63735U;
	volatile uint16_t x76 = 44U;
	int32_t t18 = -9;

    t18 = (x73==(x74^(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = -1;
	int64_t x78 = -24333249LL;
	int32_t x79 = -1831555;
	static int32_t t19 = -26099;

    t19 = (x77==(x78^(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = -2;

    t20 = (x81==(x82^(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 5;
	int8_t x86 = INT8_MAX;
	int16_t x87 = -1322;
	int32_t x88 = 163160;

    t21 = (x85==(x86^(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = 110LLU;
	int32_t x91 = -851175413;
	volatile int32_t t22 = -11;

    t22 = (x89==(x90^(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = 0;
	volatile int16_t x95 = 953;
	int16_t x96 = 76;
	static volatile int32_t t23 = 477575732;

    t23 = (x93==(x94^(x95^x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = -1;
	static int32_t x99 = 34;
	static volatile uint64_t x100 = 21591994675397525LLU;
	int32_t t24 = 5;

    t24 = (x97==(x98^(x99^x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 26U;
	uint64_t x103 = 281666700LLU;
	static uint16_t x104 = 24U;
	int32_t t25 = 2;

    t25 = (x101==(x102^(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x106 = INT8_MIN;
	static uint16_t x107 = 854U;
	volatile int64_t x108 = INT64_MIN;
	int32_t t26 = 14368627;

    t26 = (x105==(x106^(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MAX;
	volatile int16_t x111 = -2;
	uint32_t x112 = 3223U;
	static volatile int32_t t27 = 17859;

    t27 = (x109==(x110^(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = -1;
	int8_t x114 = 18;
	uint32_t x115 = 0U;
	uint64_t x116 = UINT64_MAX;
	int32_t t28 = 8347;

    t28 = (x113==(x114^(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	static int64_t x118 = INT64_MIN;
	int64_t x119 = 17584028LL;
	uint64_t x120 = 9690469529LLU;

    t29 = (x117==(x118^(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 54LL;
	static volatile uint8_t x122 = 14U;
	static int64_t x123 = -1290142570583356LL;
	static int16_t x124 = INT16_MAX;

    t30 = (x121==(x122^(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MAX;
	int32_t x128 = -1;
	volatile int32_t t31 = -166;

    t31 = (x125==(x126^(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 2U;
	int16_t x130 = -1;
	static int64_t x132 = -1LL;

    t32 = (x129==(x130^(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 5U;
	volatile int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	volatile int32_t t33 = 81711807;

    t33 = (x133==(x134^(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = -6;
	int8_t x139 = -1;
	int8_t x140 = -1;

    t34 = (x137==(x138^(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = 657;
	volatile uint8_t x142 = UINT8_MAX;
	int8_t x143 = -2;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = -325649;

    t35 = (x141==(x142^(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int32_t x146 = INT32_MIN;
	int8_t x148 = -14;
	volatile int32_t t36 = 1446160;

    t36 = (x145==(x146^(x147^x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	static int16_t x150 = INT16_MAX;
	int32_t x152 = -451;
	volatile int32_t t37 = 1;

    t37 = (x149==(x150^(x151^x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	int16_t x155 = 10;
	volatile int32_t t38 = 11;

    t38 = (x153==(x154^(x155^x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 3U;
	static volatile int64_t x159 = 58634347491582LL;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 69;

    t39 = (x157==(x158^(x159^x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	int8_t x162 = -1;
	volatile uint8_t x163 = 3U;
	static int32_t t40 = -1;

    t40 = (x161==(x162^(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 1852174U;
	volatile int8_t x166 = -62;
	static int64_t x167 = INT64_MAX;
	int32_t t41 = 0;

    t41 = (x165==(x166^(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = 1;
	int32_t x170 = INT32_MAX;
	uint64_t x171 = UINT64_MAX;
	volatile int32_t x172 = -1;
	int32_t t42 = -267315421;

    t42 = (x169==(x170^(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = UINT64_MAX;
	volatile int64_t x176 = INT64_MIN;
	int32_t t43 = 4;

    t43 = (x173==(x174^(x175^x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = INT64_MIN;
	static int8_t x179 = 0;
	int64_t x180 = -5358LL;
	static volatile int32_t t44 = 6;

    t44 = (x177==(x178^(x179^x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 118;
	static uint8_t x182 = 0U;
	static int8_t x183 = 0;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -22;

    t45 = (x181==(x182^(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	static uint64_t x187 = 1LLU;
	volatile int32_t t46 = -60;

    t46 = (x185==(x186^(x187^x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 4892116;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;

    t47 = (x189==(x190^(x191^x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 127;
	uint32_t x194 = 449U;
	int8_t x196 = -16;
	volatile int32_t t48 = 102393;

    t48 = (x193==(x194^(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	int8_t x199 = -1;

    t49 = (x197==(x198^(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x203 = 272;
	uint16_t x204 = 427U;

    t50 = (x201==(x202^(x203^x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = -1;
	volatile int32_t t51 = -233770420;

    t51 = (x205==(x206^(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -499956289605367LL;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	int32_t t52 = 22948961;

    t52 = (x209==(x210^(x211^x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = -1;
	uint64_t x215 = 17235820LLU;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -27453250;

    t53 = (x213==(x214^(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int64_t x219 = -1LL;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 1;

    t54 = (x217==(x218^(x219^x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 1;
	int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile uint32_t x224 = 1340708098U;
	volatile int32_t t55 = 1;

    t55 = (x221==(x222^(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -742036949895671LL;
	int8_t x226 = -2;
	int16_t x227 = -9900;
	int32_t t56 = 591;

    t56 = (x225==(x226^(x227^x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 1758U;
	uint32_t x230 = 63066349U;
	uint64_t x231 = 219782047LLU;
	int32_t x232 = INT32_MAX;

    t57 = (x229==(x230^(x231^x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 643012554U;
	int64_t x234 = 128074LL;
	int8_t x235 = INT8_MIN;
	int32_t t58 = 105507;

    t58 = (x233==(x234^(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MAX;
	int8_t x238 = -1;
	volatile uint16_t x239 = 30320U;

    t59 = (x237==(x238^(x239^x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	static volatile int16_t x242 = -89;
	static uint32_t x244 = 1U;
	volatile int32_t t60 = 124;

    t60 = (x241==(x242^(x243^x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 3U;
	static int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	static volatile int32_t t61 = 2240;

    t61 = (x245==(x246^(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -31068;
	int64_t x250 = -180786704LL;
	uint64_t x252 = UINT64_MAX;

    t62 = (x249==(x250^(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 566;
	int64_t x254 = 549976099633315LL;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -39909898LL;
	volatile int32_t t63 = 75229;

    t63 = (x253==(x254^(x255^x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 1138;
	static uint8_t x258 = 8U;
	int32_t x259 = 365;
	volatile uint64_t x260 = 7648768244814634LLU;
	int32_t t64 = 2899;

    t64 = (x257==(x258^(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	uint16_t x264 = 518U;
	int32_t t65 = -143410705;

    t65 = (x261==(x262^(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 157584306;
	static int64_t x266 = INT64_MAX;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 4;
	volatile int32_t t66 = -14640;

    t66 = (x265==(x266^(x267^x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	volatile int8_t x270 = INT8_MIN;
	static int32_t x272 = INT32_MIN;

    t67 = (x269==(x270^(x271^x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int64_t x274 = 389303137181087778LL;
	static uint8_t x275 = 6U;
	uint16_t x276 = 27920U;
	int32_t t68 = -1;

    t68 = (x273==(x274^(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	static volatile int8_t x279 = 1;
	static volatile int8_t x280 = -1;
	volatile int32_t t69 = -199694;

    t69 = (x277==(x278^(x279^x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -7;
	int16_t x282 = 11;
	uint8_t x283 = 87U;
	volatile int64_t x284 = -1LL;
	int32_t t70 = 502;

    t70 = (x281==(x282^(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = INT8_MIN;
	uint32_t x286 = 899126U;
	int8_t x288 = -7;

    t71 = (x285==(x286^(x287^x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 1729U;
	static int32_t t72 = -747266292;

    t72 = (x289==(x290^(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	static int64_t x296 = INT64_MIN;

    t73 = (x293==(x294^(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	static int16_t x298 = 6;
	uint32_t x299 = 5U;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 3;

    t74 = (x297==(x298^(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x301 = 17U;
	uint16_t x302 = 2970U;
	volatile int64_t x303 = 2114525056616342LL;
	uint64_t x304 = 79LLU;
	volatile int32_t t75 = 2;

    t75 = (x301==(x302^(x303^x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x307 = 25U;
	volatile int32_t t76 = 1;

    t76 = (x305==(x306^(x307^x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = 143270407681244545LL;
	int64_t x310 = INT64_MIN;
	static int32_t x311 = INT32_MIN;
	static uint8_t x312 = 1U;
	static volatile int32_t t77 = -127639917;

    t77 = (x309==(x310^(x311^x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = 24U;
	static volatile int16_t x315 = INT16_MIN;
	int16_t x316 = -1;
	static int32_t t78 = -111766;

    t78 = (x313==(x314^(x315^x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MIN;
	uint64_t x319 = 84852818091515LLU;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -1319;

    t79 = (x317==(x318^(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -6;
	int64_t x322 = 430LL;
	int8_t x323 = INT8_MIN;
	volatile int32_t t80 = -2;

    t80 = (x321==(x322^(x323^x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -4;
	uint16_t x326 = 5U;
	volatile uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 68U;
	int32_t t81 = -13509;

    t81 = (x325==(x326^(x327^x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	static uint64_t x332 = 29713605LLU;
	static int32_t t82 = 12;

    t82 = (x329==(x330^(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MAX;
	volatile int8_t x335 = INT8_MAX;
	volatile int32_t t83 = -5142;

    t83 = (x333==(x334^(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	static int16_t x338 = INT16_MIN;
	static int32_t x339 = -355525009;
	int64_t x340 = 46057010898LL;
	volatile int32_t t84 = -1801485;

    t84 = (x337==(x338^(x339^x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int64_t x342 = -1LL;
	uint16_t x343 = 3U;
	int32_t x344 = INT32_MIN;

    t85 = (x341==(x342^(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	volatile int16_t x346 = INT16_MIN;
	volatile int32_t x348 = INT32_MIN;
	int32_t t86 = -16606872;

    t86 = (x345==(x346^(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = 1;
	uint64_t x350 = UINT64_MAX;
	uint64_t x351 = 9085627563LLU;
	static int8_t x352 = 0;
	int32_t t87 = -9;

    t87 = (x349==(x350^(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int16_t x355 = INT16_MAX;
	static int16_t x356 = INT16_MIN;
	static volatile int32_t t88 = -3;

    t88 = (x353==(x354^(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -1;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;

    t89 = (x357==(x358^(x359^x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = 12215983118134LL;
	int8_t x362 = INT8_MIN;
	int16_t x363 = 9;
	static int32_t x364 = INT32_MIN;
	int32_t t90 = -68878;

    t90 = (x361==(x362^(x363^x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = 202605509092LLU;
	uint8_t x366 = 10U;
	static int16_t x367 = INT16_MAX;
	static int16_t x368 = 418;
	int32_t t91 = -7831;

    t91 = (x365==(x366^(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int8_t x371 = 0;
	int8_t x372 = -1;
	int32_t t92 = -2;

    t92 = (x369==(x370^(x371^x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 0U;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MAX;
	volatile int32_t t93 = -325;

    t93 = (x373==(x374^(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 3939307;
	int16_t x380 = 123;
	int32_t t94 = -23;

    t94 = (x377==(x378^(x379^x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = 3899974U;
	static int32_t x382 = 62817;
	static volatile int32_t x383 = -1;
	uint64_t x384 = 1LLU;
	int32_t t95 = 19892;

    t95 = (x381==(x382^(x383^x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	volatile int32_t x386 = INT32_MIN;
	static uint8_t x387 = 1U;
	int32_t x388 = -1;
	volatile int32_t t96 = 42301789;

    t96 = (x385==(x386^(x387^x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -4;
	uint8_t x390 = 0U;
	static uint16_t x391 = 664U;
	static uint8_t x392 = 0U;

    t97 = (x389==(x390^(x391^x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = UINT16_MAX;
	int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -243091;

    t98 = (x393==(x394^(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 0;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = 2823;

    t99 = (x397==(x398^(x399^x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MAX;
	static volatile uint16_t x404 = 1569U;
	volatile int32_t t100 = 26647;

    t100 = (x401==(x402^(x403^x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	static int32_t x406 = -1;
	uint64_t x407 = 10861LLU;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = -491693717;

    t101 = (x405==(x406^(x407^x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	volatile int16_t x410 = INT16_MIN;
	int32_t x412 = -1;

    t102 = (x409==(x410^(x411^x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = INT64_MIN;
	static uint8_t x414 = 36U;
	static int32_t x415 = 54751652;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = 2007;

    t103 = (x413==(x414^(x415^x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x417 = -13;
	int64_t x418 = -148843135609LL;
	int32_t x419 = INT32_MAX;
	static uint32_t x420 = UINT32_MAX;
	int32_t t104 = -2;

    t104 = (x417==(x418^(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MAX;
	uint64_t x424 = 390383562651LLU;
	int32_t t105 = -82238440;

    t105 = (x421==(x422^(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x427 = 2255U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t106 = -17780;

    t106 = (x425==(x426^(x427^x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MAX;
	uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;
	int32_t t107 = -183;

    t107 = (x429==(x430^(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	int16_t x435 = INT16_MIN;
	volatile int8_t x436 = 25;

    t108 = (x433==(x434^(x435^x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	static int64_t x438 = INT64_MAX;
	volatile int8_t x440 = INT8_MAX;
	volatile int32_t t109 = 1728;

    t109 = (x437==(x438^(x439^x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 162U;
	int64_t x442 = INT64_MIN;
	int32_t x443 = -60731;
	uint8_t x444 = 41U;
	int32_t t110 = -1;

    t110 = (x441==(x442^(x443^x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x445 = 616U;
	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = UINT32_MAX;
	int32_t t111 = 52477;

    t111 = (x445==(x446^(x447^x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x450 = 36559605U;
	static int32_t x451 = 214400265;
	static uint32_t x452 = UINT32_MAX;

    t112 = (x449==(x450^(x451^x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 806149665543444251LLU;
	uint32_t x454 = UINT32_MAX;
	static uint32_t x455 = UINT32_MAX;
	int32_t x456 = -1;

    t113 = (x453==(x454^(x455^x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x458 = UINT16_MAX;
	int8_t x459 = -1;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t114 = 4089;

    t114 = (x457==(x458^(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x462 = INT16_MAX;
	static int8_t x463 = 2;
	int64_t x464 = INT64_MIN;

    t115 = (x461==(x462^(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = -1LL;
	volatile int32_t x467 = INT32_MAX;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t116 = 780;

    t116 = (x465==(x466^(x467^x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = INT32_MIN;
	volatile uint8_t x470 = 0U;
	static int64_t x471 = INT64_MAX;
	int8_t x472 = 1;
	static volatile int32_t t117 = -1045660;

    t117 = (x469==(x470^(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 402;
	int32_t x474 = INT32_MIN;
	static uint8_t x475 = 9U;
	volatile int32_t t118 = 244299;

    t118 = (x473==(x474^(x475^x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = -625LL;
	static uint8_t x478 = 1U;
	static int16_t x479 = INT16_MAX;
	int32_t t119 = 244459;

    t119 = (x477==(x478^(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 4046LLU;
	int8_t x482 = -1;
	int64_t x483 = -1LL;
	int8_t x484 = INT8_MAX;

    t120 = (x481==(x482^(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile int16_t x486 = 3;
	int32_t x487 = -1;
	volatile int32_t t121 = 60401094;

    t121 = (x485==(x486^(x487^x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	volatile int8_t x490 = INT8_MAX;
	static int64_t x491 = -2662698LL;
	static int32_t x492 = INT32_MIN;
	int32_t t122 = -191800158;

    t122 = (x489==(x490^(x491^x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = -1;
	volatile uint8_t x495 = UINT8_MAX;
	int32_t t123 = 69770742;

    t123 = (x493==(x494^(x495^x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = -7;
	uint32_t x499 = UINT32_MAX;
	int64_t x500 = 2951075690LL;
	volatile int32_t t124 = 65;

    t124 = (x497==(x498^(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 1U;
	int32_t x503 = INT32_MIN;
	int8_t x504 = 1;
	static volatile int32_t t125 = 0;

    t125 = (x501==(x502^(x503^x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 2699LLU;
	int32_t x507 = INT32_MIN;
	static volatile int32_t t126 = 9045299;

    t126 = (x505==(x506^(x507^x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 13471127U;
	uint64_t x511 = UINT64_MAX;
	volatile int32_t t127 = -53;

    t127 = (x509==(x510^(x511^x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = -92299836;
	int8_t x514 = INT8_MIN;
	volatile int8_t x515 = -1;
	volatile uint16_t x516 = 1U;
	static volatile int32_t t128 = -6287806;

    t128 = (x513==(x514^(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -9776610254LL;
	int64_t x518 = INT64_MIN;
	volatile int64_t x519 = -1LL;
	int32_t x520 = INT32_MAX;
	volatile int32_t t129 = -2914;

    t129 = (x517==(x518^(x519^x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = UINT16_MAX;
	uint64_t x523 = 876120965035946350LLU;
	int64_t x524 = INT64_MAX;
	static volatile int32_t t130 = -59;

    t130 = (x521==(x522^(x523^x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 98092674196061680LLU;
	static volatile int8_t x526 = INT8_MIN;
	int32_t t131 = -88;

    t131 = (x525==(x526^(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = INT8_MIN;
	uint32_t x530 = 759816755U;
	int64_t x531 = INT64_MIN;
	int16_t x532 = -168;
	int32_t t132 = 50760;

    t132 = (x529==(x530^(x531^x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = INT8_MIN;
	static uint8_t x534 = 21U;
	volatile int32_t x535 = INT32_MIN;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t133 = -1;

    t133 = (x533==(x534^(x535^x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	uint8_t x538 = 2U;
	volatile int64_t x539 = INT64_MIN;
	volatile int32_t x540 = 1;
	static volatile int32_t t134 = 239805;

    t134 = (x537==(x538^(x539^x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	uint64_t x542 = UINT64_MAX;
	uint32_t x543 = UINT32_MAX;
	uint16_t x544 = UINT16_MAX;
	int32_t t135 = 5313;

    t135 = (x541==(x542^(x543^x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 10654;
	static int8_t x546 = 13;
	static int32_t x547 = INT32_MIN;

    t136 = (x545==(x546^(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile uint64_t x550 = 1868370703LLU;
	volatile uint32_t x551 = 59U;
	volatile int16_t x552 = INT16_MAX;
	int32_t t137 = -14601;

    t137 = (x549==(x550^(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = 1LLU;
	static uint8_t x555 = 22U;
	static int16_t x556 = -1;

    t138 = (x553==(x554^(x555^x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x559 = INT32_MIN;
	int32_t t139 = -162509914;

    t139 = (x557==(x558^(x559^x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MIN;
	uint8_t x562 = 18U;
	static int64_t x563 = 444330209LL;
	volatile int16_t x564 = INT16_MIN;
	static int32_t t140 = 467560;

    t140 = (x561==(x562^(x563^x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = -502;
	volatile int16_t x566 = -1;
	int16_t x567 = 2794;
	int32_t x568 = -5796877;
	int32_t t141 = 31227465;

    t141 = (x565==(x566^(x567^x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	uint32_t x571 = 48672170U;
	int32_t x572 = 485033036;
	volatile int32_t t142 = -233;

    t142 = (x569==(x570^(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint16_t x574 = 211U;
	uint32_t x575 = 1268179U;
	int8_t x576 = INT8_MAX;
	int32_t t143 = 254332;

    t143 = (x573==(x574^(x575^x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = 4;
	int8_t x578 = INT8_MIN;
	int32_t x579 = -279;
	uint16_t x580 = 0U;

    t144 = (x577==(x578^(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	uint32_t x582 = 3635U;
	static int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 1;

    t145 = (x581==(x582^(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 9171U;
	uint64_t x586 = 244379LLU;
	volatile uint64_t x587 = 9261350290828425LLU;
	int8_t x588 = -1;
	volatile int32_t t146 = 48491;

    t146 = (x585==(x586^(x587^x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x590 = -1;
	volatile int8_t x591 = -1;
	volatile int32_t x592 = 748905221;

    t147 = (x589==(x590^(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -124;
	static int16_t x595 = INT16_MIN;
	int16_t x596 = -1;
	volatile int32_t t148 = 6;

    t148 = (x593==(x594^(x595^x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -17;
	uint64_t x598 = 1027310LLU;
	uint16_t x599 = UINT16_MAX;
	volatile int64_t x600 = 1675LL;
	volatile int32_t t149 = -106;

    t149 = (x597==(x598^(x599^x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	int32_t x602 = -1;
	static volatile int16_t x603 = INT16_MIN;
	volatile int32_t t150 = 398;

    t150 = (x601==(x602^(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	static int16_t x606 = INT16_MIN;
	uint16_t x607 = 3U;
	uint64_t x608 = 51799LLU;
	int32_t t151 = -2;

    t151 = (x605==(x606^(x607^x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x610 = UINT64_MAX;
	int64_t x611 = INT64_MAX;
	uint64_t x612 = 28804943543428124LLU;
	volatile int32_t t152 = -59;

    t152 = (x609==(x610^(x611^x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = UINT16_MAX;
	static int16_t x614 = -211;
	uint8_t x616 = UINT8_MAX;
	int32_t t153 = 168;

    t153 = (x613==(x614^(x615^x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MAX;
	int64_t x620 = INT64_MIN;
	volatile int32_t t154 = -4;

    t154 = (x617==(x618^(x619^x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MAX;
	int8_t x622 = INT8_MIN;
	volatile int32_t x623 = INT32_MAX;
	int16_t x624 = -1;
	int32_t t155 = 1206;

    t155 = (x621==(x622^(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = UINT32_MAX;
	static volatile uint32_t x626 = 4674077U;
	int8_t x627 = INT8_MIN;
	int16_t x628 = -1;
	volatile int32_t t156 = 16845;

    t156 = (x625==(x626^(x627^x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -44;
	static int16_t x630 = INT16_MIN;
	int64_t x632 = INT64_MAX;
	volatile int32_t t157 = -32371616;

    t157 = (x629==(x630^(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	uint64_t x634 = 149801633623LLU;
	int8_t x635 = INT8_MIN;
	int16_t x636 = -3;
	int32_t t158 = 6;

    t158 = (x633==(x634^(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 0;
	int64_t x638 = INT64_MIN;
	static int64_t x640 = -1LL;
	volatile int32_t t159 = -12963417;

    t159 = (x637==(x638^(x639^x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = UINT32_MAX;
	int64_t x642 = INT64_MIN;
	int16_t x643 = 0;
	volatile uint32_t x644 = 2305278U;

    t160 = (x641==(x642^(x643^x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	int8_t x646 = INT8_MIN;
	int64_t x647 = 5190120534510LL;
	int8_t x648 = -1;
	volatile int32_t t161 = 24357284;

    t161 = (x645==(x646^(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x650 = 5;
	int64_t x651 = -1LL;
	uint32_t x652 = 134342U;
	static int32_t t162 = 21556;

    t162 = (x649==(x650^(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 4;
	uint8_t x655 = UINT8_MAX;
	static int32_t x656 = 6651;
	int32_t t163 = -1484364;

    t163 = (x653==(x654^(x655^x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = 945138077LLU;
	static uint64_t x659 = UINT64_MAX;
	uint64_t x660 = 10086815725LLU;
	volatile int32_t t164 = -7935;

    t164 = (x657==(x658^(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = -8001;
	volatile int16_t x662 = -1;
	volatile int32_t x663 = -365127771;
	static int64_t x664 = INT64_MAX;
	volatile int32_t t165 = 227770960;

    t165 = (x661==(x662^(x663^x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	int8_t x667 = 12;
	static int32_t x668 = -862852;

    t166 = (x665==(x666^(x667^x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = 1U;
	static int32_t x672 = INT32_MAX;

    t167 = (x669==(x670^(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 8;
	static uint64_t x674 = 37635966678LLU;
	int64_t x675 = INT64_MIN;
	int8_t x676 = -1;
	volatile int32_t t168 = 1529095;

    t168 = (x673==(x674^(x675^x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static volatile int64_t x678 = -1LL;
	uint16_t x679 = 412U;
	static volatile int32_t t169 = 4187885;

    t169 = (x677==(x678^(x679^x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	static volatile int8_t x682 = INT8_MIN;
	static uint64_t x684 = UINT64_MAX;
	int32_t t170 = -22;

    t170 = (x681==(x682^(x683^x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -8196403546665LL;
	int16_t x686 = 38;
	static uint64_t x687 = 6131913LLU;
	static int8_t x688 = INT8_MIN;
	volatile int32_t t171 = 57500;

    t171 = (x685==(x686^(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = UINT32_MAX;
	int32_t x691 = INT32_MIN;
	uint64_t x692 = 166995253670582LLU;
	volatile int32_t t172 = 1373;

    t172 = (x689==(x690^(x691^x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = INT32_MIN;
	uint8_t x695 = 35U;
	volatile int8_t x696 = INT8_MIN;
	int32_t t173 = -1101;

    t173 = (x693==(x694^(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -1LL;
	int16_t x698 = -208;
	int32_t x699 = INT32_MIN;
	int16_t x700 = -142;

    t174 = (x697==(x698^(x699^x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 61U;
	static uint64_t x702 = 1451488250LLU;
	static volatile int16_t x703 = INT16_MIN;
	int32_t x704 = -1;

    t175 = (x701==(x702^(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	int64_t x707 = INT64_MAX;
	int64_t x708 = INT64_MIN;

    t176 = (x705==(x706^(x707^x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -4;
	uint8_t x710 = 65U;
	uint8_t x712 = 7U;
	volatile int32_t t177 = -28786953;

    t177 = (x709==(x710^(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MIN;
	volatile uint8_t x714 = 115U;
	int32_t x715 = INT32_MIN;
	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = 56;

    t178 = (x713==(x714^(x715^x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	volatile uint32_t x718 = 226987966U;
	int32_t x719 = INT32_MAX;
	static int64_t x720 = -1LL;
	int32_t t179 = -278;

    t179 = (x717==(x718^(x719^x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int16_t x722 = 1;
	volatile int16_t x723 = -1;
	int32_t x724 = INT32_MIN;
	volatile int32_t t180 = 4;

    t180 = (x721==(x722^(x723^x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MAX;
	uint8_t x728 = 32U;
	static volatile int32_t t181 = -5634;

    t181 = (x725==(x726^(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = INT16_MIN;
	int64_t x731 = INT64_MAX;
	volatile uint16_t x732 = 107U;

    t182 = (x729==(x730^(x731^x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 114800440203420607LLU;
	int8_t x734 = 44;
	static int8_t x735 = INT8_MIN;
	static int64_t x736 = -1LL;
	volatile int32_t t183 = 11614;

    t183 = (x733==(x734^(x735^x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = -14196;
	static int16_t x738 = INT16_MIN;
	volatile int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MIN;
	static volatile int32_t t184 = -1567;

    t184 = (x737==(x738^(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int8_t x742 = INT8_MIN;
	uint8_t x743 = 8U;
	static uint8_t x744 = UINT8_MAX;
	volatile int32_t t185 = 222738;

    t185 = (x741==(x742^(x743^x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x747 = INT8_MAX;
	int32_t t186 = -18507877;

    t186 = (x745==(x746^(x747^x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x750 = 5;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MIN;
	int32_t t187 = -45;

    t187 = (x749==(x750^(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = INT8_MAX;
	uint8_t x754 = UINT8_MAX;
	static volatile uint16_t x755 = 2788U;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 317529;

    t188 = (x753==(x754^(x755^x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x758 = INT64_MIN;
	int64_t x759 = INT64_MIN;
	volatile int32_t t189 = -228794371;

    t189 = (x757==(x758^(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 2249;
	int8_t x762 = -1;
	volatile int64_t x763 = INT64_MIN;
	volatile int32_t x764 = INT32_MAX;
	int32_t t190 = -7;

    t190 = (x761==(x762^(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x766 = 20885LL;
	static int32_t t191 = -107434912;

    t191 = (x765==(x766^(x767^x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	volatile uint32_t x770 = 1409U;
	uint64_t x771 = 8946897797089928LLU;
	volatile uint8_t x772 = 1U;
	static volatile int32_t t192 = 69565166;

    t192 = (x769==(x770^(x771^x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	static volatile int32_t x774 = 768;
	uint16_t x775 = 6U;

    t193 = (x773==(x774^(x775^x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 20U;
	static uint16_t x778 = 386U;
	int8_t x779 = INT8_MAX;
	static volatile int16_t x780 = -1962;

    t194 = (x777==(x778^(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 57LLU;
	int32_t x783 = 3783;
	uint32_t x784 = UINT32_MAX;
	static volatile int32_t t195 = 670725144;

    t195 = (x781==(x782^(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 9513143594LLU;
	int16_t x787 = -1;
	uint64_t x788 = 5769994542690365LLU;
	static int32_t t196 = 420722602;

    t196 = (x785==(x786^(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 749298050304619LLU;
	uint16_t x790 = 14U;
	volatile uint64_t x792 = 13394457LLU;

    t197 = (x789==(x790^(x791^x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = -1;
	uint16_t x794 = 39U;
	int64_t x795 = INT64_MAX;
	static int32_t x796 = -1;

    t198 = (x793==(x794^(x795^x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	static int32_t x799 = 7642;
	int64_t x800 = INT64_MAX;
	volatile int32_t t199 = 14;

    t199 = (x797==(x798^(x799^x800)));

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

