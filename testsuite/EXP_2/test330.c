
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

int8_t x1 = INT8_MIN;
volatile uint16_t x2 = 30766U;
uint16_t x5 = UINT16_MAX;
uint8_t x11 = 20U;
int8_t x16 = INT8_MAX;
volatile int32_t t3 = 6;
volatile int64_t x21 = 579255445971LL;
int32_t x26 = INT32_MIN;
static int16_t x27 = INT16_MIN;
volatile int32_t t7 = 19631537;
uint16_t x33 = UINT16_MAX;
int32_t t8 = -1843;
volatile uint16_t x39 = UINT16_MAX;
uint16_t x44 = 1652U;
static volatile int32_t t10 = 59;
volatile int16_t x61 = 227;
volatile uint8_t x62 = UINT8_MAX;
uint32_t x66 = 14233U;
volatile int16_t x69 = INT16_MAX;
int16_t x70 = -129;
int8_t x73 = -1;
volatile uint8_t x76 = 59U;
int32_t x80 = INT32_MIN;
uint16_t x81 = 0U;
uint8_t x83 = 84U;
uint64_t x84 = 136400192651LLU;
int8_t x85 = INT8_MIN;
uint8_t x92 = 7U;
int32_t x96 = 247398320;
int64_t x97 = -31LL;
int8_t x102 = -1;
int8_t x111 = INT8_MAX;
int32_t t28 = 702536556;
int64_t x127 = -1LL;
int8_t x130 = INT8_MIN;
int8_t x135 = INT8_MAX;
int64_t x139 = 82782202985LL;
static uint64_t x149 = 259598103380497LLU;
uint16_t x161 = 147U;
int16_t x162 = INT16_MIN;
uint16_t x182 = 24207U;
int8_t x183 = INT8_MIN;
static volatile uint16_t x184 = UINT16_MAX;
volatile int32_t t46 = 1;
uint16_t x201 = 0U;
int16_t x211 = -7;
uint64_t x214 = 223919506337621LLU;
int16_t x218 = -1;
uint16_t x219 = UINT16_MAX;
int8_t x222 = INT8_MAX;
int32_t t52 = 0;
int16_t x228 = -1;
static int8_t x247 = INT8_MIN;
int8_t x255 = -17;
int8_t x256 = 1;
static int32_t t60 = -2;
static int16_t x261 = INT16_MAX;
volatile int32_t t61 = 6;
volatile uint16_t x278 = 1872U;
int64_t x279 = -1LL;
volatile int32_t t66 = 28;
int64_t x289 = INT64_MIN;
int8_t x307 = INT8_MAX;
int32_t t71 = -404454;
int64_t x312 = INT64_MAX;
int64_t x316 = INT64_MIN;
static int8_t x317 = -1;
volatile int32_t t74 = 14;
int8_t x331 = -6;
volatile int8_t x336 = INT8_MIN;
int32_t x338 = INT32_MIN;
int64_t x346 = 3906LL;
uint32_t x363 = 314399U;
uint64_t x365 = UINT64_MAX;
int16_t x368 = INT16_MIN;
static int64_t x372 = -38822894278LL;
int32_t x373 = -1;
int64_t x376 = INT64_MIN;
static int32_t t85 = 132340;
int8_t x377 = INT8_MAX;
int32_t x385 = 1463;
uint64_t x387 = 758666LLU;
uint32_t x394 = 328U;
int16_t x410 = INT16_MAX;
int16_t x411 = INT16_MIN;
uint16_t x412 = 43U;
int64_t x415 = INT64_MIN;
static volatile uint16_t x416 = 2U;
int64_t x423 = -1LL;
uint16_t x425 = 6U;
static int32_t t96 = 1130;
int32_t t97 = -1108900;
int16_t x441 = INT16_MIN;
static int32_t x445 = -7021;
int8_t x448 = INT8_MIN;
uint8_t x452 = 0U;
int8_t x454 = -1;
int32_t x455 = 3828420;
uint16_t x456 = 8U;
int8_t x461 = INT8_MIN;
int16_t x463 = -3;
int32_t x465 = INT32_MIN;
int16_t x466 = INT16_MIN;
volatile int32_t t106 = 51601915;
volatile int32_t t108 = -190789;
int32_t x484 = -1;
static int32_t x488 = INT32_MAX;
volatile int32_t t111 = 227;
int64_t x493 = INT64_MIN;
int8_t x496 = 38;
uint16_t x504 = 8U;
int32_t x516 = -2187856;
int64_t x525 = -264100LL;
int32_t x528 = INT32_MIN;
volatile int64_t x530 = 7052105LL;
int8_t x533 = INT8_MAX;
static uint8_t x539 = 2U;
uint32_t x541 = UINT32_MAX;
volatile int8_t x543 = -1;
int16_t x556 = -2450;
volatile int64_t x563 = INT64_MIN;
volatile int32_t t123 = -315224215;
uint64_t x565 = 59778LLU;
int16_t x566 = INT16_MIN;
int16_t x569 = INT16_MAX;
uint16_t x570 = 3926U;
uint8_t x574 = UINT8_MAX;
uint32_t x575 = 4705526U;
uint16_t x579 = 62U;
uint16_t x580 = UINT16_MAX;
int8_t x584 = -1;
static uint32_t x588 = 1U;
uint8_t x592 = UINT8_MAX;
int16_t x593 = -1;
uint32_t x595 = UINT32_MAX;
volatile int8_t x598 = -1;
int8_t x600 = INT8_MIN;
uint16_t x602 = UINT16_MAX;
volatile uint64_t x606 = 0LLU;
static uint8_t x608 = UINT8_MAX;
int32_t t134 = -825127;
uint64_t x610 = UINT64_MAX;
uint64_t x613 = UINT64_MAX;
volatile int16_t x618 = INT16_MIN;
volatile uint32_t x639 = UINT32_MAX;
uint8_t x648 = 1U;
int64_t x652 = 12540490LL;
int8_t x654 = INT8_MAX;
int16_t x656 = INT16_MIN;
int64_t x657 = INT64_MIN;
uint32_t x664 = UINT32_MAX;
static int32_t t150 = -12279506;
int64_t x683 = -1LL;
int32_t x688 = -1;
int8_t x698 = INT8_MAX;
int16_t x700 = 378;
int64_t x702 = INT64_MAX;
volatile int8_t x703 = 0;
volatile int32_t t156 = -26446626;
uint32_t x705 = UINT32_MAX;
volatile int8_t x712 = 2;
int32_t t160 = 1016622594;
static volatile int64_t x723 = 1LL;
static int16_t x724 = INT16_MAX;
static int16_t x729 = 1822;
uint64_t x731 = 12061LLU;
volatile int32_t x734 = -1;
int32_t t163 = 57751718;
static volatile int64_t x741 = -221450112451736789LL;
volatile int16_t x751 = 311;
int8_t x757 = INT8_MAX;
int64_t x769 = -1LL;
uint16_t x775 = 109U;
int16_t x778 = 2259;
int32_t t175 = 64987;
static int8_t x787 = 2;
uint32_t x794 = UINT32_MAX;
int64_t x800 = -1876585037LL;
volatile int64_t x807 = -1810357LL;
static int8_t x808 = -1;
int8_t x809 = 15;
volatile uint32_t x812 = 10U;
volatile int8_t x816 = INT8_MIN;
int64_t x818 = -212459LL;
int64_t x819 = -1LL;
static int64_t x830 = -2836853567465315414LL;
int8_t x831 = -1;
static int16_t x837 = 1963;
int16_t x839 = INT16_MIN;
volatile int32_t x840 = -533;
uint8_t x852 = UINT8_MAX;
volatile int8_t x854 = INT8_MAX;
int32_t t191 = -299985632;
int64_t x864 = 3339LL;
static volatile int32_t t192 = -12;
uint8_t x883 = 7U;
int64_t x886 = INT64_MIN;
int64_t x887 = INT64_MIN;
volatile int16_t x888 = INT16_MIN;
uint32_t x889 = 7324U;
int32_t x893 = INT32_MIN;
int32_t x896 = -1;


void f0(void) {
    	uint8_t x3 = 13U;
	volatile int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 178014346;

    t0 = ((x1<=(x2-x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	int32_t x7 = 0;
	int8_t x8 = -1;
	int32_t t1 = -1;

    t1 = ((x5<=(x6-x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -330384584735953LL;
	uint16_t x10 = 5468U;
	static volatile int64_t x12 = INT64_MAX;
	int32_t t2 = -31607397;

    t2 = ((x9<=(x10-x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static uint64_t x14 = UINT64_MAX;
	static int16_t x15 = INT16_MAX;

    t3 = ((x13<=(x14-x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int32_t x18 = INT32_MAX;
	static uint16_t x19 = 15U;
	static uint16_t x20 = 29488U;
	int32_t t4 = 169866182;

    t4 = ((x17<=(x18-x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -3449879278LL;
	uint64_t x23 = UINT64_MAX;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -3887311;

    t5 = ((x21<=(x22-x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int32_t x28 = -1;
	int32_t t6 = -38166478;

    t6 = ((x25<=(x26-x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -1LL;
	uint16_t x30 = 13U;
	uint32_t x31 = 30806601U;
	uint16_t x32 = 6U;

    t7 = ((x29<=(x30-x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;

    t8 = ((x33<=(x34-x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	static volatile int64_t x38 = -1LL;
	int16_t x40 = -1;
	volatile int32_t t9 = 112;

    t9 = ((x37<=(x38-x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = -291320830;
	int16_t x42 = 419;
	uint32_t x43 = UINT32_MAX;

    t10 = ((x41<=(x42-x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = -1;
	uint32_t x47 = 12U;
	int16_t x48 = -23;
	volatile int32_t t11 = -7;

    t11 = ((x45<=(x46-x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	static int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = 26134U;
	int32_t t12 = 1358;

    t12 = ((x49<=(x50-x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MAX;
	static uint16_t x55 = 36U;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 30603;

    t13 = ((x53<=(x54-x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	uint16_t x58 = 754U;
	int8_t x59 = -1;
	volatile int32_t x60 = -654;
	static volatile int32_t t14 = -2;

    t14 = ((x57<=(x58-x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = -1;
	volatile uint32_t x64 = 64698304U;
	static int32_t t15 = 137;

    t15 = ((x61<=(x62-x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	static int16_t x67 = -1;
	volatile uint32_t x68 = 30278U;
	volatile int32_t t16 = 0;

    t16 = ((x65<=(x66-x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x71 = 528440740U;
	int16_t x72 = -1;
	volatile int32_t t17 = 393395;

    t17 = ((x69<=(x70-x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	int32_t t18 = -284;

    t18 = ((x73<=(x74-x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	volatile int32_t t19 = -680;

    t19 = ((x77<=(x78-x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x82 = -423677890;
	volatile int32_t t20 = -2899158;

    t20 = ((x81<=(x82-x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = -1;
	int64_t x87 = -1LL;
	uint8_t x88 = 70U;
	static int32_t t21 = -745387733;

    t21 = ((x85<=(x86-x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x90 = 7U;
	volatile int64_t x91 = -105LL;
	int32_t t22 = -838984;

    t22 = ((x89<=(x90-x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = -1;
	int32_t t23 = 231392;

    t23 = ((x93<=(x94-x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x98 = UINT32_MAX;
	static uint32_t x99 = UINT32_MAX;
	int16_t x100 = -1;
	volatile int32_t t24 = -1904421;

    t24 = ((x97<=(x98-x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	static int32_t x103 = 2924450;
	static int8_t x104 = INT8_MAX;
	int32_t t25 = -1;

    t25 = ((x101<=(x102-x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	volatile int32_t x106 = -28718731;
	static int16_t x107 = INT16_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 15431775;

    t26 = ((x105<=(x106-x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -7654LL;
	uint64_t x110 = 142435344281382029LLU;
	static volatile uint8_t x112 = 1U;
	static volatile int32_t t27 = -1399;

    t27 = ((x109<=(x110-x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 4159;
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = -66;
	int16_t x120 = INT16_MIN;

    t28 = ((x117<=(x118-x119))==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = 4345910;
	uint64_t x122 = 91146075313743LLU;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = 62U;
	volatile int32_t t29 = 1;

    t29 = ((x121<=(x122-x123))==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 11473092U;
	int8_t x126 = 0;
	int8_t x128 = -2;
	volatile int32_t t30 = -336011320;

    t30 = ((x125<=(x126-x127))==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 16LLU;
	uint32_t x131 = 31U;
	static int64_t x132 = INT64_MIN;
	int32_t t31 = 4525856;

    t31 = ((x129<=(x130-x131))==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = 12395483;

    t32 = ((x133<=(x134-x135))==x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	int64_t x138 = 181501745LL;
	int16_t x140 = -1;
	static int32_t t33 = -182945;

    t33 = ((x137<=(x138-x139))==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 2U;
	int16_t x142 = INT16_MIN;
	static int64_t x143 = 846870LL;
	static uint32_t x144 = 9636427U;
	volatile int32_t t34 = 3;

    t34 = ((x141<=(x142-x143))==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x145 = 1U;
	uint64_t x146 = 0LLU;
	uint16_t x147 = 32U;
	uint32_t x148 = 389875U;
	int32_t t35 = -2;

    t35 = ((x145<=(x146-x147))==x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x150 = INT16_MIN;
	uint16_t x151 = 1U;
	int8_t x152 = -28;
	int32_t t36 = 457;

    t36 = ((x149<=(x150-x151))==x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = -93;
	int16_t x154 = INT16_MIN;
	volatile int8_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t37 = 32;

    t37 = ((x153<=(x154-x155))==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x157 = -1;
	volatile uint32_t x158 = UINT32_MAX;
	volatile uint8_t x159 = UINT8_MAX;
	static int32_t x160 = -5362;
	volatile int32_t t38 = -368902074;

    t38 = ((x157<=(x158-x159))==x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	static volatile int32_t t39 = 329;

    t39 = ((x161<=(x162-x163))==x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MIN;
	static volatile uint32_t x167 = UINT32_MAX;
	static int16_t x168 = -1;
	int32_t t40 = -30308204;

    t40 = ((x165<=(x166-x167))==x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x169 = INT8_MIN;
	uint64_t x170 = UINT64_MAX;
	static volatile int8_t x171 = -1;
	volatile int8_t x172 = -1;
	int32_t t41 = 11170351;

    t41 = ((x169<=(x170-x171))==x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MAX;
	uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 395U;
	uint8_t x180 = UINT8_MAX;
	int32_t t42 = -14692805;

    t42 = ((x177<=(x178-x179))==x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x181 = 71U;
	int32_t t43 = 12692890;

    t43 = ((x181<=(x182-x183))==x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MAX;
	volatile int64_t x190 = 64095LL;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t44 = -1004925;

    t44 = ((x189<=(x190-x191))==x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = 10;
	uint16_t x195 = 9U;
	int32_t x196 = 846462;
	volatile int32_t t45 = 6249;

    t45 = ((x193<=(x194-x195))==x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MIN;
	uint16_t x198 = 26U;
	uint8_t x199 = UINT8_MAX;
	volatile int8_t x200 = -10;

    t46 = ((x197<=(x198-x199))==x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x202 = 923LL;
	int32_t x203 = INT32_MAX;
	volatile uint32_t x204 = 5521180U;
	int32_t t47 = -21253648;

    t47 = ((x201<=(x202-x203))==x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = 410116109;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = UINT16_MAX;
	int8_t x208 = -1;
	volatile int32_t t48 = -392;

    t48 = ((x205<=(x206-x207))==x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = -1LL;
	int16_t x210 = -1;
	uint16_t x212 = 23U;
	static volatile int32_t t49 = 67864;

    t49 = ((x209<=(x210-x211))==x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x213 = UINT8_MAX;
	volatile int64_t x215 = 3664008691058936LL;
	uint32_t x216 = UINT32_MAX;
	static volatile int32_t t50 = 13885;

    t50 = ((x213<=(x214-x215))==x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = -57;
	int64_t x220 = -1LL;
	int32_t t51 = 16008451;

    t51 = ((x217<=(x218-x219))==x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x221 = 238581241U;
	volatile uint32_t x223 = 845375068U;
	static int32_t x224 = INT32_MIN;

    t52 = ((x221<=(x222-x223))==x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	volatile int32_t x227 = 30925;
	volatile int32_t t53 = 8664;

    t53 = ((x225<=(x226-x227))==x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x233 = 83LL;
	uint32_t x234 = 7410U;
	int8_t x235 = INT8_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t54 = -80036141;

    t54 = ((x233<=(x234-x235))==x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MIN;
	int32_t x239 = -1;
	int8_t x240 = INT8_MIN;
	static int32_t t55 = 380;

    t55 = ((x237<=(x238-x239))==x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = -6;
	static int64_t x244 = -8544068674516LL;
	int32_t t56 = -226647;

    t56 = ((x241<=(x242-x243))==x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x245 = 1564154856LLU;
	int8_t x246 = INT8_MAX;
	int32_t x248 = 114142;
	volatile int32_t t57 = -1041152911;

    t57 = ((x245<=(x246-x247))==x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int32_t t58 = -3;

    t58 = ((x249<=(x250-x251))==x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = 51;
	static uint8_t x254 = 79U;
	int32_t t59 = -13;

    t59 = ((x253<=(x254-x255))==x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = -1LL;
	volatile int16_t x258 = -1;
	static uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 970323001U;

    t60 = ((x257<=(x258-x259))==x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x262 = 960249726140757LLU;
	static int16_t x263 = -238;
	volatile int16_t x264 = INT16_MIN;

    t61 = ((x261<=(x262-x263))==x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x265 = -2098;
	int32_t x266 = -1;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = -22;
	int32_t t62 = 1496;

    t62 = ((x265<=(x266-x267))==x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MAX;
	volatile uint32_t x275 = 17275U;
	int16_t x276 = -1;
	int32_t t63 = 647355201;

    t63 = ((x273<=(x274-x275))==x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x277 = INT8_MAX;
	volatile int16_t x280 = -34;
	volatile int32_t t64 = 13;

    t64 = ((x277<=(x278-x279))==x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MIN;
	int64_t x282 = -495LL;
	int32_t x283 = INT32_MAX;
	static volatile int8_t x284 = -1;
	int32_t t65 = -3930;

    t65 = ((x281<=(x282-x283))==x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = 2780173;

    t66 = ((x285<=(x286-x287))==x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x290 = UINT64_MAX;
	int64_t x291 = 2662LL;
	int32_t x292 = 164506634;
	int32_t t67 = -7276856;

    t67 = ((x289<=(x290-x291))==x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x294 = -1LL;
	uint16_t x295 = 1U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t68 = -1205508;

    t68 = ((x293<=(x294-x295))==x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t69 = -344;

    t69 = ((x297<=(x298-x299))==x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = 1;
	int8_t x302 = -24;
	static int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = 194772U;
	volatile int32_t t70 = -325;

    t70 = ((x301<=(x302-x303))==x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MIN;
	volatile int64_t x306 = -2401510189520559277LL;
	int64_t x308 = 206394716211LL;

    t71 = ((x305<=(x306-x307))==x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x309 = 15959U;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = 1616U;
	int32_t t72 = 13;

    t72 = ((x309<=(x310-x311))==x312);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MAX;
	int8_t x315 = INT8_MAX;
	int32_t t73 = 1434;

    t73 = ((x313<=(x314-x315))==x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x318 = INT16_MIN;
	volatile uint64_t x319 = 61970LLU;
	int8_t x320 = 22;

    t74 = ((x317<=(x318-x319))==x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x321 = 2200058656791704684LLU;
	static int32_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	uint64_t x324 = 133615955263LLU;
	volatile int32_t t75 = 76487800;

    t75 = ((x321<=(x322-x323))==x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x329 = INT64_MIN;
	static uint16_t x330 = 194U;
	int64_t x332 = -1LL;
	int32_t t76 = 906321;

    t76 = ((x329<=(x330-x331))==x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = -1;
	uint8_t x334 = 9U;
	volatile int16_t x335 = 3048;
	int32_t t77 = -763950;

    t77 = ((x333<=(x334-x335))==x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x337 = 0LLU;
	static int64_t x339 = INT64_MIN;
	volatile int8_t x340 = 29;
	volatile int32_t t78 = -21;

    t78 = ((x337<=(x338-x339))==x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x347 = -1;
	volatile int8_t x348 = INT8_MIN;
	int32_t t79 = -4;

    t79 = ((x345<=(x346-x347))==x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MIN;
	int8_t x351 = -1;
	uint16_t x352 = 1U;
	static volatile int32_t t80 = -938;

    t80 = ((x349<=(x350-x351))==x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = 17LL;
	static int8_t x359 = 0;
	static int64_t x360 = -3799LL;
	int32_t t81 = 1737819;

    t81 = ((x357<=(x358-x359))==x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x361 = UINT16_MAX;
	uint16_t x362 = UINT16_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t82 = -8000;

    t82 = ((x361<=(x362-x363))==x364);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x366 = 7U;
	volatile uint64_t x367 = 733972586142LLU;
	volatile int32_t t83 = -854;

    t83 = ((x365<=(x366-x367))==x368);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x369 = -1;
	int8_t x370 = -46;
	static int32_t x371 = INT32_MIN;
	int32_t t84 = -125785;

    t84 = ((x369<=(x370-x371))==x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x374 = -1;
	uint32_t x375 = 0U;

    t85 = ((x373<=(x374-x375))==x376);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x378 = -1;
	int16_t x379 = 911;
	int16_t x380 = 715;
	int32_t t86 = -37462642;

    t86 = ((x377<=(x378-x379))==x380);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x386 = 1024U;
	uint64_t x388 = 0LLU;
	int32_t t87 = 2824529;

    t87 = ((x385<=(x386-x387))==x388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = -1LL;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MAX;
	static int32_t t88 = -5651731;

    t88 = ((x393<=(x394-x395))==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x397 = UINT64_MAX;
	static int8_t x398 = -2;
	volatile int64_t x399 = -106246LL;
	uint16_t x400 = UINT16_MAX;
	static int32_t t89 = -1625;

    t89 = ((x397<=(x398-x399))==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x401 = 0U;
	uint32_t x402 = UINT32_MAX;
	static int8_t x403 = -1;
	int16_t x404 = -1;
	volatile int32_t t90 = -1;

    t90 = ((x401<=(x402-x403))==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x409 = -1LL;
	volatile int32_t t91 = 28;

    t91 = ((x409<=(x410-x411))==x412);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = -330656674LL;
	int32_t t92 = -116611359;

    t92 = ((x413<=(x414-x415))==x416);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x417 = 12U;
	volatile uint16_t x418 = 440U;
	static uint32_t x419 = UINT32_MAX;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t93 = 8;

    t93 = ((x417<=(x418-x419))==x420);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	uint16_t x422 = 0U;
	volatile int64_t x424 = 434960LL;
	int32_t t94 = -34135;

    t94 = ((x421<=(x422-x423))==x424);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x426 = -1;
	uint64_t x427 = 126411071040LLU;
	static int32_t x428 = -131;
	static volatile int32_t t95 = 0;

    t95 = ((x425<=(x426-x427))==x428);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = INT32_MIN;
	static int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MAX;
	uint64_t x432 = 76159896LLU;

    t96 = ((x429<=(x430-x431))==x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	uint32_t x435 = 637433U;
	static volatile int64_t x436 = -1LL;

    t97 = ((x433<=(x434-x435))==x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x437 = INT8_MAX;
	uint16_t x438 = 90U;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t98 = 899322780;

    t98 = ((x437<=(x438-x439))==x440);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x442 = 2709603U;
	static volatile uint8_t x443 = 54U;
	int64_t x444 = INT64_MIN;
	int32_t t99 = -789;

    t99 = ((x441<=(x442-x443))==x444);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MIN;
	static volatile int32_t t100 = -352412;

    t100 = ((x445<=(x446-x447))==x448);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = INT64_MIN;
	int32_t x450 = INT32_MAX;
	uint16_t x451 = UINT16_MAX;
	int32_t t101 = 4597;

    t101 = ((x449<=(x450-x451))==x452);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x453 = INT64_MIN;
	volatile int32_t t102 = 31944;

    t102 = ((x453<=(x454-x455))==x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x457 = 35224940LLU;
	volatile int16_t x458 = -1;
	static volatile uint8_t x459 = UINT8_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t103 = -161410;

    t103 = ((x457<=(x458-x459))==x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x462 = 37074683;
	static int64_t x464 = INT64_MAX;
	int32_t t104 = -176;

    t104 = ((x461<=(x462-x463))==x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x467 = INT8_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t105 = -113910336;

    t105 = ((x465<=(x466-x467))==x468);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x469 = 21U;
	uint32_t x470 = UINT32_MAX;
	volatile int8_t x471 = INT8_MIN;
	volatile int8_t x472 = -32;

    t106 = ((x469<=(x470-x471))==x472);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MAX;
	uint32_t x474 = UINT32_MAX;
	static int16_t x475 = 214;
	static uint32_t x476 = UINT32_MAX;
	volatile int32_t t107 = 660428;

    t107 = ((x473<=(x474-x475))==x476);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x477 = INT8_MAX;
	int32_t x478 = INT32_MAX;
	volatile uint16_t x479 = 69U;
	uint16_t x480 = 2U;

    t108 = ((x477<=(x478-x479))==x480);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x481 = 10016U;
	int16_t x482 = INT16_MAX;
	int16_t x483 = -3563;
	int32_t t109 = 22;

    t109 = ((x481<=(x482-x483))==x484);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x485 = 248010265U;
	volatile uint8_t x486 = 1U;
	static int16_t x487 = 54;
	volatile int32_t t110 = -3157272;

    t110 = ((x485<=(x486-x487))==x488);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x489 = UINT32_MAX;
	uint8_t x490 = 2U;
	int32_t x491 = 1819081;
	int32_t x492 = 1910;

    t111 = ((x489<=(x490-x491))==x492);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x494 = 37116182389820562LLU;
	int64_t x495 = INT64_MIN;
	volatile int32_t t112 = -520640;

    t112 = ((x493<=(x494-x495))==x496);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x497 = -6118;
	volatile int8_t x498 = -19;
	volatile uint32_t x499 = 33624U;
	uint64_t x500 = UINT64_MAX;
	int32_t t113 = 3681052;

    t113 = ((x497<=(x498-x499))==x500);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x501 = INT8_MAX;
	uint32_t x502 = 31U;
	volatile int32_t x503 = -147711;
	static volatile int32_t t114 = -9;

    t114 = ((x501<=(x502-x503))==x504);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x513 = -1;
	volatile int8_t x514 = INT8_MIN;
	static volatile int8_t x515 = INT8_MIN;
	volatile int32_t t115 = 420531;

    t115 = ((x513<=(x514-x515))==x516);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x526 = 10U;
	int32_t x527 = -1;
	volatile int32_t t116 = 3283755;

    t116 = ((x525<=(x526-x527))==x528);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x529 = -1;
	uint64_t x531 = UINT64_MAX;
	int64_t x532 = 423757LL;
	int32_t t117 = 11;

    t117 = ((x529<=(x530-x531))==x532);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x534 = UINT16_MAX;
	int16_t x535 = 15;
	volatile uint64_t x536 = 528844193LLU;
	volatile int32_t t118 = 773;

    t118 = ((x533<=(x534-x535))==x536);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x537 = -146786LL;
	uint64_t x538 = 117448916794LLU;
	int32_t x540 = INT32_MAX;
	int32_t t119 = 12071;

    t119 = ((x537<=(x538-x539))==x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x542 = INT64_MIN;
	uint8_t x544 = 10U;
	static volatile int32_t t120 = 14284;

    t120 = ((x541<=(x542-x543))==x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MAX;
	uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MAX;
	int32_t t121 = 479;

    t121 = ((x545<=(x546-x547))==x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x553 = -393057044;
	int16_t x554 = INT16_MIN;
	int64_t x555 = -15798LL;
	int32_t t122 = -355;

    t122 = ((x553<=(x554-x555))==x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int16_t x562 = INT16_MIN;
	volatile int32_t x564 = INT32_MIN;

    t123 = ((x561<=(x562-x563))==x564);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x567 = UINT16_MAX;
	uint32_t x568 = 4U;
	volatile int32_t t124 = 2;

    t124 = ((x565<=(x566-x567))==x568);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x571 = -1;
	int16_t x572 = INT16_MIN;
	int32_t t125 = -284;

    t125 = ((x569<=(x570-x571))==x572);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x573 = 59717570U;
	uint64_t x576 = UINT64_MAX;
	int32_t t126 = 60077;

    t126 = ((x573<=(x574-x575))==x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile int16_t x578 = -1;
	volatile int32_t t127 = 1;

    t127 = ((x577<=(x578-x579))==x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x582 = -41781;
	int64_t x583 = 372LL;
	static volatile int32_t t128 = -856451152;

    t128 = ((x581<=(x582-x583))==x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x585 = -1;
	static uint32_t x586 = 1238634231U;
	uint64_t x587 = 2810291LLU;
	volatile int32_t t129 = -196;

    t129 = ((x585<=(x586-x587))==x588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x589 = INT8_MIN;
	uint64_t x590 = 11393877LLU;
	int8_t x591 = INT8_MAX;
	int32_t t130 = 1;

    t130 = ((x589<=(x590-x591))==x592);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x594 = 2U;
	int16_t x596 = INT16_MIN;
	volatile int32_t t131 = -8;

    t131 = ((x593<=(x594-x595))==x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x599 = INT16_MIN;
	volatile int32_t t132 = 32881326;

    t132 = ((x597<=(x598-x599))==x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x601 = -2;
	volatile uint16_t x603 = 13U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t133 = 113801486;

    t133 = ((x601<=(x602-x603))==x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x607 = INT16_MIN;

    t134 = ((x605<=(x606-x607))==x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x609 = 840103LLU;
	volatile uint64_t x611 = UINT64_MAX;
	static uint32_t x612 = 106U;
	static volatile int32_t t135 = -30906;

    t135 = ((x609<=(x610-x611))==x612);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x614 = INT16_MAX;
	int32_t x615 = -738859923;
	int8_t x616 = -32;
	int32_t t136 = 25483371;

    t136 = ((x613<=(x614-x615))==x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x617 = UINT16_MAX;
	volatile int64_t x619 = -1LL;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t137 = -372472801;

    t137 = ((x617<=(x618-x619))==x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x621 = 6338U;
	int16_t x622 = -1;
	uint64_t x623 = 59639LLU;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t138 = 1598180;

    t138 = ((x621<=(x622-x623))==x624);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x629 = 7767U;
	int16_t x630 = 6754;
	int8_t x631 = INT8_MIN;
	uint64_t x632 = 11720388453528LLU;
	static int32_t t139 = -17;

    t139 = ((x629<=(x630-x631))==x632);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x637 = -3;
	int32_t x638 = INT32_MIN;
	static int8_t x640 = INT8_MAX;
	volatile int32_t t140 = 1064663368;

    t140 = ((x637<=(x638-x639))==x640);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x641 = 68631666786LLU;
	static uint32_t x642 = UINT32_MAX;
	volatile int8_t x643 = INT8_MAX;
	int8_t x644 = 10;
	volatile int32_t t141 = -12814550;

    t141 = ((x641<=(x642-x643))==x644);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x645 = -1LL;
	static uint64_t x646 = 13005842216170998LLU;
	int64_t x647 = INT64_MIN;
	static int32_t t142 = 20;

    t142 = ((x645<=(x646-x647))==x648);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x649 = 527843002U;
	uint8_t x650 = UINT8_MAX;
	volatile int8_t x651 = 3;
	int32_t t143 = -164721;

    t143 = ((x649<=(x650-x651))==x652);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x653 = 1044662013LL;
	int8_t x655 = -27;
	int32_t t144 = 2841;

    t144 = ((x653<=(x654-x655))==x656);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x658 = INT64_MIN;
	static int8_t x659 = INT8_MIN;
	static uint16_t x660 = UINT16_MAX;
	volatile int32_t t145 = -93637091;

    t145 = ((x657<=(x658-x659))==x660);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x661 = 45;
	static int32_t x662 = -1137;
	int32_t x663 = INT32_MIN;
	int32_t t146 = 3;

    t146 = ((x661<=(x662-x663))==x664);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = -1;
	int64_t x666 = 859615656159LL;
	static int32_t x667 = 3194;
	static uint64_t x668 = 413LLU;
	static volatile int32_t t147 = 65292840;

    t147 = ((x665<=(x666-x667))==x668);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x669 = INT8_MAX;
	int32_t x670 = 23495024;
	static volatile int16_t x671 = -419;
	int16_t x672 = -17;
	volatile int32_t t148 = -11312152;

    t148 = ((x669<=(x670-x671))==x672);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x673 = 3;
	int16_t x674 = 0;
	static int8_t x675 = 11;
	uint32_t x676 = 0U;
	volatile int32_t t149 = -259869;

    t149 = ((x673<=(x674-x675))==x676);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x677 = -1;
	uint64_t x678 = 29310430285318LLU;
	uint8_t x679 = UINT8_MAX;
	uint16_t x680 = 1U;

    t150 = ((x677<=(x678-x679))==x680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	uint32_t x682 = 95U;
	uint8_t x684 = 0U;
	volatile int32_t t151 = 5814;

    t151 = ((x681<=(x682-x683))==x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = INT64_MIN;
	uint8_t x686 = 81U;
	int64_t x687 = 101LL;
	static volatile int32_t t152 = 22;

    t152 = ((x685<=(x686-x687))==x688);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x689 = 62U;
	static uint64_t x690 = 5339805841417560LLU;
	int64_t x691 = INT64_MIN;
	int8_t x692 = INT8_MAX;
	int32_t t153 = -105006562;

    t153 = ((x689<=(x690-x691))==x692);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x693 = 318U;
	static int16_t x694 = 0;
	volatile int64_t x695 = INT64_MAX;
	static int8_t x696 = -15;
	int32_t t154 = -267;

    t154 = ((x693<=(x694-x695))==x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x697 = 9;
	int8_t x699 = 6;
	int32_t t155 = -1;

    t155 = ((x697<=(x698-x699))==x700);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x701 = INT16_MIN;
	int32_t x704 = -210220;

    t156 = ((x701<=(x702-x703))==x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x706 = 754U;
	volatile int16_t x707 = -1;
	int16_t x708 = -1;
	volatile int32_t t157 = -125878672;

    t157 = ((x705<=(x706-x707))==x708);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x709 = 1U;
	volatile int64_t x710 = -2432082666494185LL;
	volatile uint16_t x711 = UINT16_MAX;
	int32_t t158 = -240;

    t158 = ((x709<=(x710-x711))==x712);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x713 = INT16_MIN;
	uint32_t x714 = UINT32_MAX;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = 925;
	volatile int32_t t159 = 13200;

    t159 = ((x713<=(x714-x715))==x716);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = -3626282LL;
	int8_t x719 = 19;
	int8_t x720 = INT8_MIN;

    t160 = ((x717<=(x718-x719))==x720);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x721 = 1U;
	uint16_t x722 = 638U;
	volatile int32_t t161 = -297053111;

    t161 = ((x721<=(x722-x723))==x724);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x730 = 0U;
	static uint8_t x732 = UINT8_MAX;
	static int32_t t162 = -779;

    t162 = ((x729<=(x730-x731))==x732);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x733 = 117U;
	int32_t x735 = INT32_MIN;
	int32_t x736 = INT32_MIN;

    t163 = ((x733<=(x734-x735))==x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x737 = UINT32_MAX;
	uint8_t x738 = 15U;
	int16_t x739 = 0;
	int32_t x740 = 3;
	volatile int32_t t164 = -3;

    t164 = ((x737<=(x738-x739))==x740);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x742 = 11588788U;
	static int8_t x743 = INT8_MAX;
	int16_t x744 = INT16_MIN;
	volatile int32_t t165 = 4802466;

    t165 = ((x741<=(x742-x743))==x744);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int8_t x746 = -1;
	uint64_t x747 = 138155LLU;
	int32_t x748 = 27;
	int32_t t166 = -30;

    t166 = ((x745<=(x746-x747))==x748);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x749 = -1;
	uint64_t x750 = 1543883359501LLU;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t167 = -5565;

    t167 = ((x749<=(x750-x751))==x752);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x753 = INT16_MIN;
	volatile int32_t x754 = -20;
	static uint64_t x755 = UINT64_MAX;
	static uint16_t x756 = 2U;
	volatile int32_t t168 = -253701;

    t168 = ((x753<=(x754-x755))==x756);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x758 = -1747626;
	int16_t x759 = -1;
	int16_t x760 = 452;
	int32_t t169 = -469923;

    t169 = ((x757<=(x758-x759))==x760);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x761 = INT16_MAX;
	static uint64_t x762 = UINT64_MAX;
	uint64_t x763 = UINT64_MAX;
	static uint8_t x764 = 98U;
	volatile int32_t t170 = 837;

    t170 = ((x761<=(x762-x763))==x764);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x765 = 155U;
	volatile uint16_t x766 = 1U;
	static uint8_t x767 = 9U;
	int32_t x768 = -1;
	int32_t t171 = 329;

    t171 = ((x765<=(x766-x767))==x768);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x770 = 117700362351LLU;
	static volatile int32_t x771 = 2;
	uint8_t x772 = UINT8_MAX;
	int32_t t172 = 1478;

    t172 = ((x769<=(x770-x771))==x772);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x773 = 2954716;
	uint8_t x774 = UINT8_MAX;
	int32_t x776 = INT32_MIN;
	int32_t t173 = -377435638;

    t173 = ((x773<=(x774-x775))==x776);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x777 = -1;
	int16_t x779 = INT16_MAX;
	uint8_t x780 = 0U;
	volatile int32_t t174 = 39;

    t174 = ((x777<=(x778-x779))==x780);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = -1;
	int32_t x782 = -1;
	int32_t x783 = INT32_MIN;
	int8_t x784 = -52;

    t175 = ((x781<=(x782-x783))==x784);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x785 = UINT32_MAX;
	int32_t x786 = -1;
	uint64_t x788 = 48714045833478980LLU;
	static int32_t t176 = -6135;

    t176 = ((x785<=(x786-x787))==x788);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x793 = 156U;
	int32_t x795 = INT32_MIN;
	uint8_t x796 = 3U;
	volatile int32_t t177 = 410615378;

    t177 = ((x793<=(x794-x795))==x796);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x797 = 2695851414LLU;
	int64_t x798 = 2093701LL;
	volatile int64_t x799 = INT64_MAX;
	volatile int32_t t178 = 1856755;

    t178 = ((x797<=(x798-x799))==x800);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = INT64_MAX;
	int64_t x802 = 3275160341722LL;
	volatile int16_t x803 = INT16_MIN;
	int8_t x804 = INT8_MIN;
	int32_t t179 = -5;

    t179 = ((x801<=(x802-x803))==x804);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x805 = 0U;
	uint64_t x806 = 661080654104LLU;
	volatile int32_t t180 = -399971044;

    t180 = ((x805<=(x806-x807))==x808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x810 = 8160098233922937556LLU;
	volatile int32_t x811 = -887;
	static int32_t t181 = 12;

    t181 = ((x809<=(x810-x811))==x812);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x813 = 22;
	volatile uint64_t x814 = 0LLU;
	volatile int32_t x815 = INT32_MIN;
	int32_t t182 = 2;

    t182 = ((x813<=(x814-x815))==x816);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x817 = INT16_MAX;
	int32_t x820 = INT32_MIN;
	int32_t t183 = -2011;

    t183 = ((x817<=(x818-x819))==x820);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x821 = -1;
	static int16_t x822 = -1;
	int64_t x823 = -5117762822885LL;
	int64_t x824 = -1LL;
	int32_t t184 = -15628012;

    t184 = ((x821<=(x822-x823))==x824);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x829 = INT32_MIN;
	uint64_t x832 = UINT64_MAX;
	int32_t t185 = -10597;

    t185 = ((x829<=(x830-x831))==x832);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x833 = UINT8_MAX;
	static int64_t x834 = 3LL;
	int8_t x835 = 22;
	uint64_t x836 = 15866357550455209LLU;
	volatile int32_t t186 = -2303704;

    t186 = ((x833<=(x834-x835))==x836);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x838 = -22795517;
	volatile int32_t t187 = 328;

    t187 = ((x837<=(x838-x839))==x840);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x841 = -34;
	uint8_t x842 = UINT8_MAX;
	uint8_t x843 = 5U;
	uint64_t x844 = 4800193821780LLU;
	static volatile int32_t t188 = -12544493;

    t188 = ((x841<=(x842-x843))==x844);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x849 = -3LL;
	uint64_t x850 = 15260385832169626LLU;
	volatile uint64_t x851 = UINT64_MAX;
	int32_t t189 = 30777419;

    t189 = ((x849<=(x850-x851))==x852);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x853 = INT8_MIN;
	volatile int32_t x855 = -1;
	uint8_t x856 = 1U;
	static volatile int32_t t190 = 803;

    t190 = ((x853<=(x854-x855))==x856);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x857 = 4094178;
	int8_t x858 = -1;
	int64_t x859 = 654191732LL;
	uint8_t x860 = 8U;

    t191 = ((x857<=(x858-x859))==x860);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x861 = INT16_MIN;
	int64_t x862 = -1LL;
	static volatile uint16_t x863 = 31232U;

    t192 = ((x861<=(x862-x863))==x864);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x869 = -25;
	int8_t x870 = -1;
	static int64_t x871 = INT64_MAX;
	int64_t x872 = -1481020546544952103LL;
	volatile int32_t t193 = -39;

    t193 = ((x869<=(x870-x871))==x872);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x873 = -32847582642952166LL;
	static int8_t x874 = 12;
	uint32_t x875 = 394U;
	static volatile int8_t x876 = INT8_MIN;
	volatile int32_t t194 = 1769;

    t194 = ((x873<=(x874-x875))==x876);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x877 = 3313U;
	int8_t x878 = -1;
	uint32_t x879 = UINT32_MAX;
	int32_t x880 = 138817;
	int32_t t195 = -969518;

    t195 = ((x877<=(x878-x879))==x880);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	volatile int16_t x882 = 0;
	uint32_t x884 = UINT32_MAX;
	int32_t t196 = 215727;

    t196 = ((x881<=(x882-x883))==x884);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x885 = 7U;
	volatile int32_t t197 = 1419249;

    t197 = ((x885<=(x886-x887))==x888);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x890 = UINT8_MAX;
	uint8_t x891 = UINT8_MAX;
	int8_t x892 = INT8_MAX;
	static volatile int32_t t198 = 662;

    t198 = ((x889<=(x890-x891))==x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x894 = INT32_MIN;
	uint8_t x895 = 0U;
	int32_t t199 = 342822;

    t199 = ((x893<=(x894-x895))==x896);

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

