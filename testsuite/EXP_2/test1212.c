
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

volatile int32_t t0 = 0;
int8_t x5 = INT8_MAX;
int8_t x9 = -1;
int8_t x10 = -1;
int16_t x11 = INT16_MAX;
volatile int32_t t3 = -143013892;
uint16_t x19 = 524U;
volatile uint16_t x28 = 1U;
uint8_t x31 = UINT8_MAX;
int64_t x32 = -1LL;
volatile int32_t x35 = INT32_MIN;
int16_t x37 = INT16_MAX;
static volatile int64_t x45 = 696541LL;
volatile int16_t x48 = INT16_MIN;
volatile int16_t x54 = -58;
int32_t x55 = -1;
uint32_t x57 = 4U;
uint64_t x59 = UINT64_MAX;
int32_t t14 = -16114331;
volatile int32_t x62 = -54;
static int16_t x63 = INT16_MIN;
int32_t x66 = -1;
int16_t x68 = INT16_MIN;
static volatile int32_t t16 = -996134;
uint32_t x69 = 12U;
volatile int8_t x73 = INT8_MAX;
volatile int32_t x74 = INT32_MIN;
static int16_t x76 = 1;
static int8_t x77 = -13;
int8_t x79 = INT8_MAX;
int32_t t19 = 0;
int64_t x91 = -1136LL;
int16_t x94 = INT16_MIN;
int64_t x96 = -16815746143LL;
uint64_t x100 = UINT64_MAX;
volatile uint32_t x102 = 58257383U;
volatile int32_t t25 = 593;
static int32_t t26 = 1;
volatile int32_t t28 = 23;
volatile int32_t x119 = -243;
int32_t t29 = -26839509;
volatile int16_t x123 = -1;
static volatile int32_t t31 = 110276720;
uint32_t x130 = UINT32_MAX;
int8_t x148 = -1;
int64_t x151 = 15861123945LL;
uint16_t x154 = 573U;
int8_t x160 = INT8_MIN;
int64_t x161 = 1304735748415208457LL;
int64_t x166 = -6597936217730LL;
volatile int64_t x167 = -74907910LL;
int64_t x170 = -1LL;
int8_t x172 = -1;
uint64_t x177 = UINT64_MAX;
static int16_t x181 = INT16_MIN;
volatile int8_t x187 = INT8_MIN;
static int32_t x191 = -611628;
int32_t t47 = -12;
volatile int64_t x195 = -52401612103274LL;
uint16_t x197 = 7768U;
volatile uint64_t x204 = 501907476299035LLU;
int32_t x209 = INT32_MAX;
volatile uint16_t x211 = UINT16_MAX;
int64_t x214 = INT64_MIN;
uint32_t x215 = 10U;
int64_t x219 = INT64_MAX;
volatile int64_t x222 = INT64_MAX;
static int32_t t55 = 54143590;
uint64_t x232 = UINT64_MAX;
static uint64_t x236 = UINT64_MAX;
volatile int32_t t58 = -154426;
int64_t x238 = INT64_MIN;
static volatile uint16_t x242 = 83U;
uint32_t x250 = UINT32_MAX;
int16_t x251 = INT16_MIN;
static int32_t x256 = INT32_MIN;
int32_t t63 = 2333156;
int16_t x257 = INT16_MIN;
int64_t x259 = -553027818LL;
uint8_t x260 = UINT8_MAX;
uint8_t x263 = 6U;
int32_t t65 = -23;
int32_t t66 = 691101;
int32_t x270 = 656450;
static int16_t x271 = -1;
int64_t x275 = -1LL;
int8_t x282 = INT8_MIN;
static int32_t x289 = INT32_MIN;
uint8_t x292 = 54U;
static int32_t x298 = 1117197;
static volatile uint8_t x300 = 1U;
volatile int32_t t74 = 29;
volatile uint64_t x301 = UINT64_MAX;
static int8_t x302 = -1;
int16_t x317 = INT16_MAX;
int32_t t79 = -138679;
uint64_t x327 = 18099LLU;
int8_t x328 = INT8_MIN;
static int8_t x333 = INT8_MAX;
static int8_t x340 = INT8_MIN;
static volatile int32_t t84 = 428996221;
uint64_t x345 = 346LLU;
uint8_t x350 = 0U;
volatile uint32_t x353 = 2551U;
static volatile int32_t t88 = 314;
int64_t x357 = -1LL;
int32_t x369 = -1;
volatile int32_t t92 = 1073;
uint16_t x379 = 29U;
volatile int32_t t94 = 2954;
int16_t x381 = INT16_MAX;
int32_t t95 = -23;
volatile int64_t x388 = 2LL;
uint32_t x392 = 692542283U;
static int32_t t97 = -1;
uint16_t x394 = UINT16_MAX;
int64_t x395 = -8LL;
static int8_t x398 = -1;
static int16_t x408 = INT16_MAX;
int64_t x409 = INT64_MIN;
int64_t x410 = INT64_MIN;
int64_t x422 = INT64_MIN;
volatile int32_t t105 = 38471216;
static int8_t x429 = INT8_MAX;
uint32_t x433 = 1445448740U;
volatile int64_t x436 = INT64_MIN;
volatile uint32_t x444 = UINT32_MAX;
volatile int64_t x449 = INT64_MIN;
int64_t x459 = INT64_MIN;
static int16_t x461 = -1;
int32_t t115 = 3;
int32_t x476 = INT32_MIN;
int32_t x477 = -1;
volatile int8_t x480 = INT8_MIN;
int32_t t119 = 3731;
volatile int32_t x486 = INT32_MAX;
volatile uint8_t x491 = 75U;
static int32_t x494 = -1;
uint16_t x496 = 372U;
int64_t x497 = INT64_MIN;
volatile int16_t x499 = -1;
int32_t x500 = INT32_MAX;
int8_t x501 = 0;
int32_t x510 = INT32_MIN;
int64_t x515 = -1LL;
int32_t t129 = -7162231;
int64_t x522 = -1775179927983LL;
uint32_t x526 = 27U;
static uint64_t x531 = 2225LLU;
static volatile int64_t x534 = INT64_MIN;
int32_t x535 = 14196209;
static int16_t x542 = INT16_MIN;
int32_t x544 = INT32_MAX;
int32_t t135 = 183835;
int32_t t136 = 25137;
static uint16_t x552 = UINT16_MAX;
uint32_t x556 = UINT32_MAX;
int32_t x557 = INT32_MAX;
static int32_t t139 = -3294;
uint32_t x574 = UINT32_MAX;
volatile int32_t t143 = 13;
volatile uint16_t x579 = 18U;
int32_t x583 = INT32_MAX;
uint64_t x589 = 30987LLU;
volatile int64_t x590 = -1LL;
uint32_t x594 = UINT32_MAX;
int16_t x609 = INT16_MIN;
int64_t x617 = -1LL;
int64_t x619 = 1181113LL;
int8_t x628 = -1;
static int16_t x632 = -11;
int64_t x636 = INT64_MIN;
static int32_t t158 = 2056847;
static int16_t x640 = INT16_MIN;
int32_t t159 = -636772;
int8_t x647 = -2;
int16_t x654 = INT16_MIN;
static volatile int64_t x661 = -1LL;
static int64_t x664 = -1LL;
int64_t x668 = 4533950508LL;
static int32_t x669 = 224326072;
static uint8_t x671 = 94U;
static volatile int32_t t167 = -3286;
static int64_t x675 = INT64_MAX;
uint64_t x678 = 558LLU;
static uint64_t x683 = UINT64_MAX;
uint32_t x693 = UINT32_MAX;
uint16_t x699 = 11522U;
static int16_t x702 = -336;
static uint32_t x704 = 49U;
int32_t x717 = INT32_MAX;
static volatile uint16_t x720 = 30695U;
volatile uint8_t x724 = 7U;
int32_t t180 = -57638;
static uint64_t x729 = 37LLU;
int32_t x732 = -27;
uint64_t x733 = UINT64_MAX;
int32_t t183 = 789465062;
int32_t t184 = -650819564;
volatile int8_t x741 = -5;
static uint16_t x743 = UINT16_MAX;
uint16_t x751 = 2U;
volatile int32_t t187 = -1;
uint64_t x756 = 45689325161832LLU;
int8_t x761 = -1;
static int64_t x776 = INT64_MIN;
volatile int32_t t193 = 6;
volatile int8_t x777 = INT8_MIN;
volatile int32_t t195 = 0;
int32_t x790 = -6453539;
volatile uint64_t x797 = 50702116522995732LLU;
volatile int32_t t199 = -234232703;


void f0(void) {
    	uint32_t x1 = 963887620U;
	static volatile int32_t x2 = 27935;
	int16_t x3 = -3;
	volatile int16_t x4 = -37;

    t0 = ((x1*(x2!=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	int16_t x7 = 88;
	int64_t x8 = 70816786350469486LL;
	static volatile int32_t t1 = -18;

    t1 = ((x5*(x6!=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 24301538;

    t2 = ((x9*(x10!=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 493001LL;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -14;
	volatile int64_t x16 = INT64_MIN;

    t3 = ((x13*(x14!=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	static uint16_t x18 = 510U;
	static volatile uint64_t x20 = 966794281LLU;
	static int32_t t4 = -61216;

    t4 = ((x17*(x18!=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -14;
	uint8_t x22 = 2U;
	static volatile uint16_t x23 = 108U;
	int8_t x24 = -20;
	static volatile int32_t t5 = -2995;

    t5 = ((x21*(x22!=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int16_t x26 = INT16_MIN;
	static uint8_t x27 = 7U;
	volatile int32_t t6 = -18506325;

    t6 = ((x25*(x26!=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 7;
	static volatile int64_t x30 = INT64_MAX;
	volatile int32_t t7 = 16760141;

    t7 = ((x29*(x30!=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 7;
	volatile int16_t x34 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -4095;

    t8 = ((x33*(x34!=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 0U;
	int8_t x39 = -28;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 95045;

    t9 = ((x37*(x38!=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 546647032638LL;
	int32_t x42 = 1113065;
	uint8_t x43 = UINT8_MAX;
	static int64_t x44 = -1LL;
	volatile int32_t t10 = 2069222;

    t10 = ((x41*(x42!=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1798459LL;
	uint8_t x47 = 0U;
	int32_t t11 = -5;

    t11 = ((x45*(x46!=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x49 = 57U;
	volatile uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -15365;

    t12 = ((x49*(x50!=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	uint32_t x56 = 1516605U;
	int32_t t13 = 821;

    t13 = ((x53*(x54!=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x58 = UINT64_MAX;
	int16_t x60 = INT16_MAX;

    t14 = ((x57*(x58!=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	int32_t x64 = 0;
	int32_t t15 = 4;

    t15 = ((x61*(x62!=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	uint16_t x67 = UINT16_MAX;

    t16 = ((x65*(x66!=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = UINT64_MAX;
	static int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 10999943;

    t17 = ((x69*(x70!=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x75 = 7909U;
	static int32_t t18 = -5;

    t18 = ((x73*(x74!=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = 91744796U;
	uint64_t x80 = UINT64_MAX;

    t19 = ((x77*(x78!=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	static volatile int16_t x82 = -1;
	int32_t x83 = 2;
	int8_t x84 = 2;
	static int32_t t20 = -753974;

    t20 = ((x81*(x82!=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -787204;
	int8_t x86 = -1;
	int32_t x87 = -1;
	static int64_t x88 = -1LL;
	volatile int32_t t21 = -49409311;

    t21 = ((x85*(x86!=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 5005414U;
	uint64_t x90 = 882LLU;
	volatile uint32_t x92 = 4U;
	static volatile int32_t t22 = 6;

    t22 = ((x89*(x90!=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x95 = -8244979757533336LL;
	volatile int32_t t23 = 536997;

    t23 = ((x93*(x94!=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	static int8_t x98 = INT8_MIN;
	static int8_t x99 = INT8_MIN;
	static volatile int32_t t24 = -397119;

    t24 = ((x97*(x98!=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = UINT32_MAX;

    t25 = ((x101*(x102!=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	uint64_t x107 = 1LLU;
	uint32_t x108 = 9795784U;

    t26 = ((x105*(x106!=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	static int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = 1701;

    t27 = ((x109*(x110!=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = 1006776;
	static int8_t x114 = INT8_MAX;
	volatile int16_t x115 = -1;
	uint8_t x116 = 1U;

    t28 = ((x113*(x114!=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 151;
	static volatile uint8_t x118 = 0U;
	int32_t x120 = INT32_MAX;

    t29 = ((x117*(x118!=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = 495392870;
	int8_t x122 = INT8_MIN;
	static int16_t x124 = 128;
	static volatile int32_t t30 = 31280513;

    t30 = ((x121*(x122!=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	static uint16_t x126 = UINT16_MAX;
	static int64_t x127 = INT64_MAX;
	volatile uint64_t x128 = 30301LLU;

    t31 = ((x125*(x126!=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = -4;
	int64_t x131 = 0LL;
	uint32_t x132 = UINT32_MAX;
	int32_t t32 = 62023956;

    t32 = ((x129*(x130!=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 122U;
	static int32_t x134 = 37891782;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = 3215U;
	int32_t t33 = 42;

    t33 = ((x133*(x134!=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MAX;
	uint32_t x139 = UINT32_MAX;
	volatile int64_t x140 = 892344638LL;
	int32_t t34 = 497533760;

    t34 = ((x137*(x138!=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static uint32_t x142 = UINT32_MAX;
	int64_t x143 = -2120595912709908LL;
	uint8_t x144 = 1U;
	int32_t t35 = -6394;

    t35 = ((x141*(x142!=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile uint16_t x146 = 4064U;
	uint64_t x147 = 27256083235108843LLU;
	volatile int32_t t36 = 4;

    t36 = ((x145*(x146!=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = 523;
	static int8_t x150 = INT8_MAX;
	int16_t x152 = 14;
	int32_t t37 = -947;

    t37 = ((x149*(x150!=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 2U;
	int16_t x155 = 4;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -154318068;

    t38 = ((x153*(x154!=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	static int8_t x158 = -1;
	int64_t x159 = INT64_MAX;
	volatile int32_t t39 = 3;

    t39 = ((x157*(x158!=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = -6800182163LL;
	int32_t x163 = -87355234;
	int64_t x164 = -415120385203927751LL;
	static volatile int32_t t40 = -19;

    t40 = ((x161*(x162!=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 67631594U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 3971707;

    t41 = ((x165*(x166!=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 1309040LLU;
	int16_t x171 = INT16_MAX;
	int32_t t42 = 439840;

    t42 = ((x169*(x170!=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile int32_t x174 = -196;
	int64_t x175 = -1LL;
	static int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -239623;

    t43 = ((x173*(x174!=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x178 = 3902U;
	int16_t x179 = 1;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 283959;

    t44 = ((x177*(x178!=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -150;
	int16_t x183 = INT16_MIN;
	static int32_t x184 = 3;
	static int32_t t45 = 5442616;

    t45 = ((x181*(x182!=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = UINT64_MAX;
	int16_t x186 = -1;
	int32_t x188 = -1;
	int32_t t46 = 3813616;

    t46 = ((x185*(x186!=x187))==x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = 15083;
	uint8_t x190 = 2U;
	static int8_t x192 = INT8_MAX;

    t47 = ((x189*(x190!=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -377;
	uint32_t x194 = 917313U;
	int16_t x196 = 1;
	volatile int32_t t48 = -19454;

    t48 = ((x193*(x194!=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x198 = UINT64_MAX;
	static int16_t x199 = INT16_MAX;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 64863;

    t49 = ((x197*(x198!=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	static uint8_t x202 = 2U;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t50 = -14;

    t50 = ((x201*(x202!=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = 2735;
	static volatile int8_t x206 = INT8_MIN;
	int8_t x207 = 1;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 597938799;

    t51 = ((x205*(x206!=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x210 = UINT64_MAX;
	static int64_t x212 = -1LL;
	volatile int32_t t52 = 10602886;

    t52 = ((x209*(x210!=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 7U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -207394;

    t53 = ((x213*(x214!=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = UINT8_MAX;
	volatile int64_t x218 = INT64_MIN;
	volatile int16_t x220 = 0;
	int32_t t54 = -2048138;

    t54 = ((x217*(x218!=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x223 = -5;
	volatile int8_t x224 = INT8_MAX;

    t55 = ((x221*(x222!=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = 6299;
	int8_t x226 = 1;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MAX;
	int32_t t56 = -433;

    t56 = ((x225*(x226!=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	int8_t x230 = 0;
	int64_t x231 = INT64_MIN;
	int32_t t57 = -89934;

    t57 = ((x229*(x230!=x231))==x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = -252924470;
	int8_t x234 = INT8_MIN;
	static volatile uint32_t x235 = UINT32_MAX;

    t58 = ((x233*(x234!=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	int8_t x239 = -2;
	static volatile int64_t x240 = -15048016307506439LL;
	static volatile int32_t t59 = 1165;

    t59 = ((x237*(x238!=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = 110367510745LLU;
	static volatile int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 1401982;

    t60 = ((x241*(x242!=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 4;
	static volatile uint8_t x246 = 31U;
	static volatile int8_t x247 = 8;
	uint32_t x248 = 12618U;
	int32_t t61 = -25103978;

    t61 = ((x245*(x246!=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	uint8_t x252 = 20U;
	int32_t t62 = -36;

    t62 = ((x249*(x250!=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 3LLU;
	uint32_t x254 = 233639U;
	int64_t x255 = -97373LL;

    t63 = ((x253*(x254!=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	int32_t t64 = -1283;

    t64 = ((x257*(x258!=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x261 = 6U;
	uint16_t x262 = 5777U;
	uint8_t x264 = 31U;

    t65 = ((x261*(x262!=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int64_t x266 = 159745255987LL;
	volatile uint32_t x267 = UINT32_MAX;
	static int16_t x268 = INT16_MAX;

    t66 = ((x265*(x266!=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 30980698U;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 1041889;

    t67 = ((x269*(x270!=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = -6;
	uint32_t x274 = UINT32_MAX;
	static uint32_t x276 = 27227U;
	volatile int32_t t68 = 1572;

    t68 = ((x273*(x274!=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	int64_t x278 = 491717392217405004LL;
	int16_t x279 = -1;
	int64_t x280 = 23798278104LL;
	int32_t t69 = 2007368;

    t69 = ((x277*(x278!=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x281 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MIN;
	int32_t t70 = -1007;

    t70 = ((x281*(x282!=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int32_t x288 = -1;
	int32_t t71 = 926;

    t71 = ((x285*(x286!=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 521761835;
	uint8_t x291 = UINT8_MAX;
	static int32_t t72 = 0;

    t72 = ((x289*(x290!=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 661U;
	uint32_t x295 = 15U;
	uint32_t x296 = 20985805U;
	volatile int32_t t73 = -12;

    t73 = ((x293*(x294!=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	static int8_t x299 = INT8_MIN;

    t74 = ((x297*(x298!=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x303 = 178747LLU;
	static uint8_t x304 = 27U;
	volatile int32_t t75 = -2332;

    t75 = ((x301*(x302!=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = 3409U;
	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -9;

    t76 = ((x305*(x306!=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 16253U;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = 11053;
	static volatile uint8_t x312 = 44U;
	volatile int32_t t77 = -803912;

    t77 = ((x309*(x310!=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 1859069147LLU;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 344502;

    t78 = ((x313*(x314!=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int64_t x320 = 9704LL;

    t79 = ((x317*(x318!=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = -1;
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -113;

    t80 = ((x321*(x322!=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = 5;
	static int16_t x326 = INT16_MAX;
	int32_t t81 = -170863;

    t81 = ((x325*(x326!=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 4U;
	volatile int64_t x330 = INT64_MIN;
	int8_t x331 = -3;
	uint32_t x332 = 1580U;
	volatile int32_t t82 = 31;

    t82 = ((x329*(x330!=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = 126;
	static uint16_t x335 = 18U;
	uint16_t x336 = 0U;
	volatile int32_t t83 = -3324253;

    t83 = ((x333*(x334!=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = 33;
	volatile int8_t x338 = INT8_MIN;
	static volatile int32_t x339 = -4300336;

    t84 = ((x337*(x338!=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MAX;
	static uint8_t x342 = 5U;
	int8_t x343 = -17;
	int64_t x344 = 286197277LL;
	volatile int32_t t85 = -27;

    t85 = ((x341*(x342!=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -260086;

    t86 = ((x345*(x346!=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	volatile uint32_t x351 = 274U;
	static int32_t x352 = 65931292;
	int32_t t87 = 454588332;

    t87 = ((x349*(x350!=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x354 = 19U;
	int16_t x355 = -9285;
	int32_t x356 = -910506;

    t88 = ((x353*(x354!=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = INT8_MAX;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -81070320;

    t89 = ((x357*(x358!=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x361 = UINT8_MAX;
	static int64_t x362 = -67276592044461LL;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = INT16_MAX;
	static int32_t t90 = 0;

    t90 = ((x361*(x362!=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -1;
	int8_t x366 = INT8_MIN;
	int32_t x367 = 0;
	int64_t x368 = 17129898991490LL;
	static volatile int32_t t91 = 37526;

    t91 = ((x365*(x366!=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x370 = INT32_MIN;
	static int8_t x371 = -54;
	uint16_t x372 = UINT16_MAX;

    t92 = ((x369*(x370!=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	int64_t x374 = INT64_MAX;
	static uint32_t x375 = 13U;
	uint32_t x376 = 6467986U;
	volatile int32_t t93 = 228;

    t93 = ((x373*(x374!=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MAX;
	int64_t x378 = 1150307050LL;
	int8_t x380 = INT8_MIN;

    t94 = ((x377*(x378!=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -282194117365419999LL;
	uint64_t x383 = 2806728LLU;
	volatile int8_t x384 = INT8_MAX;

    t95 = ((x381*(x382!=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	uint64_t x386 = 49LLU;
	int64_t x387 = INT64_MAX;
	static volatile int32_t t96 = -440;

    t96 = ((x385*(x386!=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 519332912LLU;
	static int8_t x390 = -12;
	volatile uint16_t x391 = UINT16_MAX;

    t97 = ((x389*(x390!=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -161078LL;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 1;

    t98 = ((x393*(x394!=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	int64_t x399 = -1LL;
	int64_t x400 = -1LL;
	volatile int32_t t99 = 43623962;

    t99 = ((x397*(x398!=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int16_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1LL;
	volatile int32_t t100 = 19;

    t100 = ((x401*(x402!=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	volatile uint32_t x406 = 15U;
	int8_t x407 = INT8_MIN;
	int32_t t101 = -199889;

    t101 = ((x405*(x406!=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x411 = -3;
	volatile int64_t x412 = INT64_MIN;
	static int32_t t102 = -56;

    t102 = ((x409*(x410!=x411))==x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 1674527866LL;
	static volatile uint8_t x414 = 1U;
	volatile uint8_t x415 = 0U;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t103 = -1711;

    t103 = ((x413*(x414!=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -56;
	volatile int32_t x418 = -1;
	int64_t x419 = -11LL;
	uint8_t x420 = 1U;
	volatile int32_t t104 = 254602789;

    t104 = ((x417*(x418!=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	volatile int64_t x423 = 26830994LL;
	uint64_t x424 = 308LLU;

    t105 = ((x421*(x422!=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 2672U;
	uint32_t x426 = 1U;
	int16_t x427 = -1;
	uint8_t x428 = 14U;
	volatile int32_t t106 = 1;

    t106 = ((x425*(x426!=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MIN;
	int16_t x432 = -1;
	int32_t t107 = -5;

    t107 = ((x429*(x430!=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 1027207LLU;
	volatile uint8_t x435 = 0U;
	volatile int32_t t108 = 356166;

    t108 = ((x433*(x434!=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x437 = 232973U;
	uint16_t x438 = 15485U;
	static uint32_t x439 = 26U;
	int64_t x440 = -1LL;
	int32_t t109 = 73025;

    t109 = ((x437*(x438!=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = -1;
	volatile int16_t x442 = INT16_MIN;
	volatile uint16_t x443 = 445U;
	static int32_t t110 = -1;

    t110 = ((x441*(x442!=x443))==x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint32_t x446 = UINT32_MAX;
	uint64_t x447 = UINT64_MAX;
	static int32_t x448 = 21;
	int32_t t111 = 102;

    t111 = ((x445*(x446!=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x450 = INT8_MIN;
	volatile uint16_t x451 = 50U;
	int8_t x452 = INT8_MIN;
	static int32_t t112 = 2900611;

    t112 = ((x449*(x450!=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	uint8_t x454 = 0U;
	volatile int64_t x455 = INT64_MIN;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t113 = -189309;

    t113 = ((x453*(x454!=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 5;
	uint64_t x458 = 1075LLU;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 255796;

    t114 = ((x457*(x458!=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = INT16_MIN;
	uint64_t x463 = 216417813329378LLU;
	int8_t x464 = INT8_MIN;

    t115 = ((x461*(x462!=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int64_t x466 = -1LL;
	int8_t x467 = -4;
	volatile int64_t x468 = INT64_MAX;
	int32_t t116 = 53334171;

    t116 = ((x465*(x466!=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MAX;
	volatile int32_t x471 = -1;
	int32_t x472 = 50826256;
	volatile int32_t t117 = 413468;

    t117 = ((x469*(x470!=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 264802312438495LLU;
	static volatile uint32_t x474 = 0U;
	static volatile int32_t x475 = INT32_MAX;
	int32_t t118 = -4863630;

    t118 = ((x473*(x474!=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	volatile int8_t x479 = INT8_MIN;

    t119 = ((x477*(x478!=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile int32_t x482 = INT32_MAX;
	static volatile uint32_t x483 = 75412U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t120 = -436528;

    t120 = ((x481*(x482!=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static int8_t x487 = INT8_MAX;
	static int8_t x488 = 1;
	volatile int32_t t121 = 155719;

    t121 = ((x485*(x486!=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int8_t x490 = -14;
	uint32_t x492 = 7042223U;
	int32_t t122 = 8;

    t122 = ((x489*(x490!=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x493 = INT64_MIN;
	static int32_t x495 = -1;
	volatile int32_t t123 = 162;

    t123 = ((x493*(x494!=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = -1;
	volatile int32_t t124 = -117;

    t124 = ((x497*(x498!=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = -1;
	int16_t x503 = 184;
	int32_t x504 = -1;
	volatile int32_t t125 = -59;

    t125 = ((x501*(x502!=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	uint64_t x506 = 66971084LLU;
	static int8_t x507 = -1;
	int16_t x508 = INT16_MIN;
	static int32_t t126 = 94098;

    t126 = ((x505*(x506!=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -1921;
	static int32_t x511 = -17;
	uint64_t x512 = 36LLU;
	int32_t t127 = 5875;

    t127 = ((x509*(x510!=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -3;
	static volatile int16_t x514 = INT16_MIN;
	uint64_t x516 = 91782LLU;
	int32_t t128 = -67;

    t128 = ((x513*(x514!=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = INT32_MIN;
	static volatile int32_t x518 = INT32_MIN;
	int64_t x519 = -8869LL;
	int64_t x520 = INT64_MIN;

    t129 = ((x517*(x518!=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 13271;
	int64_t x523 = INT64_MIN;
	static volatile int32_t x524 = INT32_MIN;
	volatile int32_t t130 = 1;

    t130 = ((x521*(x522!=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -427;
	int8_t x527 = 1;
	int64_t x528 = 141757261020LL;
	int32_t t131 = 0;

    t131 = ((x525*(x526!=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = UINT32_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t132 = 1146928;

    t132 = ((x529*(x530!=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	uint16_t x536 = 7784U;
	int32_t t133 = -14252934;

    t133 = ((x533*(x534!=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = INT64_MIN;
	uint64_t x539 = 1LLU;
	static int32_t x540 = 6;
	volatile int32_t t134 = -1100;

    t134 = ((x537*(x538!=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 1;
	static volatile uint16_t x543 = 49U;

    t135 = ((x541*(x542!=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	volatile int32_t x546 = INT32_MIN;
	static int16_t x547 = -61;
	uint16_t x548 = 29U;

    t136 = ((x545*(x546!=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	int32_t x550 = INT32_MIN;
	int8_t x551 = INT8_MAX;
	volatile int32_t t137 = -259168110;

    t137 = ((x549*(x550!=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x553 = 3U;
	static volatile int64_t x554 = INT64_MAX;
	uint64_t x555 = 3225849057558LLU;
	volatile int32_t t138 = -1937;

    t138 = ((x553*(x554!=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x558 = INT16_MIN;
	uint16_t x559 = 8958U;
	volatile int64_t x560 = INT64_MAX;

    t139 = ((x557*(x558!=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MAX;
	uint32_t x562 = UINT32_MAX;
	int64_t x563 = INT64_MIN;
	volatile int16_t x564 = -345;
	int32_t t140 = -191740;

    t140 = ((x561*(x562!=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = 18111;
	static volatile uint64_t x566 = UINT64_MAX;
	uint32_t x567 = 3803757U;
	int16_t x568 = INT16_MIN;
	int32_t t141 = -52246;

    t141 = ((x565*(x566!=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -83875304;
	int8_t x570 = INT8_MAX;
	static volatile int32_t x571 = INT32_MAX;
	static int64_t x572 = 6902991433957162LL;
	static volatile int32_t t142 = 11;

    t142 = ((x569*(x570!=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	volatile uint32_t x575 = 6027U;
	static int16_t x576 = -1;

    t143 = ((x573*(x574!=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 1U;
	volatile int8_t x578 = 1;
	uint32_t x580 = 456265843U;
	volatile int32_t t144 = 370113;

    t144 = ((x577*(x578!=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -3480299406238442360LL;
	volatile int64_t x582 = INT64_MIN;
	int16_t x584 = 245;
	volatile int32_t t145 = 79173;

    t145 = ((x581*(x582!=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -13;
	static volatile uint8_t x586 = 0U;
	volatile int64_t x587 = 17LL;
	int64_t x588 = 117028LL;
	volatile int32_t t146 = 1;

    t146 = ((x585*(x586!=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x591 = INT16_MIN;
	uint16_t x592 = 6401U;
	volatile int32_t t147 = 17716171;

    t147 = ((x589*(x590!=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int32_t x595 = INT32_MIN;
	static uint32_t x596 = UINT32_MAX;
	int32_t t148 = 2428267;

    t148 = ((x593*(x594!=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -2012;
	static int64_t x598 = -221LL;
	volatile int32_t x599 = INT32_MAX;
	int16_t x600 = INT16_MAX;
	volatile int32_t t149 = -47436993;

    t149 = ((x597*(x598!=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x601 = -1;
	int64_t x602 = 159887103878048555LL;
	int8_t x603 = -1;
	int8_t x604 = -1;
	int32_t t150 = 908;

    t150 = ((x601*(x602!=x603))==x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x605 = 5485407LLU;
	static int16_t x606 = -1;
	static int16_t x607 = INT16_MIN;
	int32_t x608 = 724937;
	int32_t t151 = -4140594;

    t151 = ((x605*(x606!=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x610 = -1LL;
	volatile uint32_t x611 = 276650U;
	volatile int16_t x612 = 5962;
	static volatile int32_t t152 = 1;

    t152 = ((x609*(x610!=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 530LL;
	int64_t x614 = -1LL;
	uint64_t x615 = UINT64_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t153 = 55;

    t153 = ((x613*(x614!=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = -1;
	int32_t x620 = -1;
	static int32_t t154 = -8259853;

    t154 = ((x617*(x618!=x619))==x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint8_t x622 = 75U;
	int64_t x623 = INT64_MIN;
	volatile int64_t x624 = 26132741256697LL;
	int32_t t155 = 1;

    t155 = ((x621*(x622!=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = INT16_MIN;
	uint8_t x626 = UINT8_MAX;
	int8_t x627 = -8;
	volatile int32_t t156 = -592;

    t156 = ((x625*(x626!=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 682361;
	int32_t x630 = 174;
	int64_t x631 = INT64_MAX;
	int32_t t157 = -61797396;

    t157 = ((x629*(x630!=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 3618U;
	int32_t x634 = INT32_MIN;
	static volatile uint8_t x635 = 5U;

    t158 = ((x633*(x634!=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = 1;
	int8_t x638 = 31;
	static uint64_t x639 = 84418LLU;

    t159 = ((x637*(x638!=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 5U;
	uint16_t x642 = UINT16_MAX;
	volatile int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MAX;
	static volatile int32_t t160 = 121958;

    t160 = ((x641*(x642!=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int64_t x646 = -1LL;
	static uint8_t x648 = 8U;
	volatile int32_t t161 = -250404424;

    t161 = ((x645*(x646!=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x649 = INT64_MIN;
	int32_t x650 = INT32_MIN;
	volatile uint32_t x651 = UINT32_MAX;
	volatile int16_t x652 = INT16_MIN;
	static volatile int32_t t162 = 13614;

    t162 = ((x649*(x650!=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	uint8_t x655 = UINT8_MAX;
	int16_t x656 = -1;
	int32_t t163 = 0;

    t163 = ((x653*(x654!=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x657 = 13965816344LL;
	int32_t x658 = INT32_MIN;
	uint8_t x659 = 1U;
	int64_t x660 = INT64_MAX;
	int32_t t164 = -208920;

    t164 = ((x657*(x658!=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = -6809289LL;
	static uint16_t x663 = 120U;
	volatile int32_t t165 = 15417972;

    t165 = ((x661*(x662!=x663))==x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	uint16_t x666 = 4U;
	int32_t x667 = 525277;
	volatile int32_t t166 = 5274865;

    t166 = ((x665*(x666!=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;

    t167 = ((x669*(x670!=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int64_t x674 = 91224757495LL;
	volatile int16_t x676 = INT16_MAX;
	int32_t t168 = 1829;

    t168 = ((x673*(x674!=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	volatile uint32_t x679 = UINT32_MAX;
	int8_t x680 = 54;
	int32_t t169 = -4682291;

    t169 = ((x677*(x678!=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int16_t x682 = INT16_MIN;
	int8_t x684 = -7;
	volatile int32_t t170 = -59459;

    t170 = ((x681*(x682!=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 92808;
	int32_t x686 = 230247;
	volatile uint32_t x687 = 8067216U;
	volatile int16_t x688 = INT16_MIN;
	static volatile int32_t t171 = -4587902;

    t171 = ((x685*(x686!=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 10115;
	int32_t x690 = -181150893;
	int8_t x691 = INT8_MIN;
	uint64_t x692 = UINT64_MAX;
	int32_t t172 = 53598;

    t172 = ((x689*(x690!=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x694 = INT16_MIN;
	static int32_t x695 = -1;
	uint8_t x696 = 3U;
	volatile int32_t t173 = -2104184;

    t173 = ((x693*(x694!=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	uint64_t x698 = 237942120LLU;
	int32_t x700 = INT32_MAX;
	volatile int32_t t174 = 1;

    t174 = ((x697*(x698!=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = 1U;
	uint16_t x703 = 3U;
	static volatile int32_t t175 = -68050;

    t175 = ((x701*(x702!=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static uint32_t x706 = UINT32_MAX;
	int64_t x707 = INT64_MIN;
	uint32_t x708 = 2792043U;
	volatile int32_t t176 = -2717941;

    t176 = ((x705*(x706!=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	volatile int8_t x710 = 58;
	int64_t x711 = INT64_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = -58918766;

    t177 = ((x709*(x710!=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	static int32_t x714 = 269;
	static int16_t x715 = -1308;
	static int8_t x716 = -27;
	int32_t t178 = 20;

    t178 = ((x713*(x714!=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x718 = UINT16_MAX;
	static int16_t x719 = -790;
	int32_t t179 = -1;

    t179 = ((x717*(x718!=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 2340282068324LLU;
	volatile uint16_t x722 = 0U;
	int16_t x723 = INT16_MIN;

    t180 = ((x721*(x722!=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	volatile int64_t x726 = -1502426852LL;
	int16_t x727 = -3821;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = 2658;

    t181 = ((x725*(x726!=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MIN;
	int16_t x731 = 121;
	volatile int32_t t182 = 2356314;

    t182 = ((x729*(x730!=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x734 = -1LL;
	uint16_t x735 = 20595U;
	int8_t x736 = INT8_MIN;

    t183 = ((x733*(x734!=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = INT16_MIN;
	uint8_t x738 = 4U;
	int16_t x739 = INT16_MIN;
	volatile int8_t x740 = 38;

    t184 = ((x737*(x738!=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = INT64_MAX;
	uint16_t x744 = 127U;
	int32_t t185 = -8924;

    t185 = ((x741*(x742!=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MAX;
	int32_t x747 = -5573396;
	static int16_t x748 = INT16_MIN;
	int32_t t186 = -131436;

    t186 = ((x745*(x746!=x747))==x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MAX;
	static int64_t x752 = INT64_MAX;

    t187 = ((x749*(x750!=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = 16290664U;
	int8_t x754 = -1;
	volatile uint16_t x755 = UINT16_MAX;
	volatile int32_t t188 = -171114;

    t188 = ((x753*(x754!=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = -1913935129LL;
	int64_t x758 = INT64_MIN;
	int16_t x759 = -6607;
	int64_t x760 = 4215917115189766LL;
	int32_t t189 = -2081864;

    t189 = ((x757*(x758!=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MIN;
	static int64_t x763 = -942532112LL;
	static uint64_t x764 = 378322343609LLU;
	int32_t t190 = -10220279;

    t190 = ((x761*(x762!=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	int32_t x766 = -7;
	int64_t x767 = -1LL;
	volatile int64_t x768 = -423156591250020LL;
	static int32_t t191 = -9307843;

    t191 = ((x765*(x766!=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -1;
	static int16_t x770 = 12;
	static int64_t x771 = -12780354886479LL;
	int32_t x772 = -286;
	static volatile int32_t t192 = -9;

    t192 = ((x769*(x770!=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	int16_t x775 = INT16_MIN;

    t193 = ((x773*(x774!=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = UINT16_MAX;
	int16_t x779 = INT16_MAX;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t194 = 11;

    t194 = ((x777*(x778!=x779))==x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -5;
	uint8_t x782 = UINT8_MAX;
	int64_t x783 = -1LL;
	static int16_t x784 = 826;

    t195 = ((x781*(x782!=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	static uint16_t x786 = 24U;
	int32_t x787 = INT32_MAX;
	uint32_t x788 = UINT32_MAX;
	int32_t t196 = 205741;

    t196 = ((x785*(x786!=x787))==x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x789 = INT16_MIN;
	int64_t x791 = INT64_MIN;
	int64_t x792 = -1254LL;
	static volatile int32_t t197 = 572;

    t197 = ((x789*(x790!=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 1511LLU;
	int16_t x794 = 317;
	static int32_t x795 = -1;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t198 = 863;

    t198 = ((x793*(x794!=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x798 = 0U;
	int16_t x799 = 1161;
	int64_t x800 = -1LL;

    t199 = ((x797*(x798!=x799))==x800);

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

