
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

int64_t x4 = -318383019LL;
static int8_t x8 = INT8_MIN;
int32_t t1 = -2520210;
int16_t x10 = INT16_MIN;
volatile int32_t x12 = 297089683;
volatile int32_t t2 = -48;
static volatile int32_t t4 = 0;
static int8_t x26 = -1;
int8_t x30 = INT8_MIN;
uint16_t x31 = 563U;
int32_t t7 = 227376;
uint32_t x35 = 530U;
volatile int32_t t8 = -2044574;
int32_t x39 = INT32_MAX;
uint32_t x49 = 302524U;
uint8_t x51 = 60U;
uint8_t x66 = 99U;
uint32_t x71 = 960394371U;
int32_t t18 = 1;
uint64_t x78 = UINT64_MAX;
static uint32_t x79 = 887U;
volatile int8_t x80 = INT8_MIN;
int32_t t19 = -1;
uint32_t x85 = UINT32_MAX;
int32_t x87 = INT32_MIN;
int64_t x88 = -1LL;
static int32_t x94 = INT32_MIN;
int16_t x98 = -1880;
static volatile int32_t t24 = -11;
int64_t x101 = INT64_MAX;
int32_t t25 = -1771;
static uint8_t x111 = 1U;
uint64_t x112 = 6405513962474LLU;
static uint64_t x125 = UINT64_MAX;
volatile int8_t x138 = 10;
volatile int32_t t34 = 60;
int64_t x142 = 460LL;
static int32_t t35 = 43021;
int32_t x148 = INT32_MIN;
int32_t t36 = -51950115;
uint16_t x150 = 4625U;
int8_t x155 = 11;
int64_t x163 = INT64_MIN;
static int64_t x165 = INT64_MIN;
volatile int8_t x172 = INT8_MAX;
volatile int32_t t42 = -548392;
static int64_t x173 = -64169106LL;
uint16_t x175 = 5U;
int32_t t43 = -1;
int64_t x180 = -15784677704523414LL;
volatile uint8_t x203 = 51U;
static int64_t x208 = -115151LL;
int8_t x211 = -7;
int16_t x214 = -1119;
int64_t x215 = -1LL;
static int32_t t55 = 14977833;
uint64_t x226 = 132602454533357867LLU;
uint8_t x229 = 53U;
uint64_t x231 = UINT64_MAX;
uint16_t x233 = UINT16_MAX;
int64_t x236 = INT64_MIN;
int32_t t59 = -3;
int32_t t60 = 493267;
int16_t x254 = INT16_MAX;
int16_t x255 = INT16_MAX;
uint8_t x257 = 57U;
int16_t x260 = INT16_MAX;
volatile int8_t x265 = INT8_MIN;
static int64_t x268 = INT64_MAX;
int64_t x270 = 3LL;
int8_t x273 = INT8_MIN;
uint32_t x277 = 66U;
volatile uint32_t x280 = 106738801U;
int32_t t70 = 18053;
uint16_t x293 = UINT16_MAX;
int8_t x300 = INT8_MIN;
int16_t x307 = -1;
int32_t t76 = -19;
static int64_t x311 = -1LL;
int64_t x313 = -1250355191757LL;
volatile int32_t x316 = INT32_MAX;
uint64_t x320 = 95273942LLU;
int32_t x323 = -1;
static int32_t x328 = 0;
int64_t x346 = -1LL;
int16_t x350 = INT16_MIN;
int16_t x357 = INT16_MAX;
int16_t x361 = -1;
static int16_t x364 = -106;
int64_t x369 = -1LL;
volatile int32_t t92 = 7896;
uint32_t x387 = 15420034U;
static int16_t x388 = INT16_MIN;
volatile int32_t x390 = INT32_MIN;
int32_t t97 = -2;
volatile int32_t t100 = -4;
int32_t x412 = -1;
uint8_t x413 = UINT8_MAX;
volatile int16_t x421 = INT16_MIN;
uint16_t x424 = UINT16_MAX;
static uint64_t x430 = 824LLU;
int64_t x439 = -113200LL;
volatile int64_t x441 = 668LL;
int32_t x444 = -251155888;
uint16_t x453 = 7133U;
int64_t x459 = -1LL;
int16_t x464 = -2;
uint32_t x465 = UINT32_MAX;
int8_t x469 = 0;
static int32_t x473 = INT32_MIN;
int64_t x474 = 500801965888LL;
static uint32_t x481 = 980968363U;
int8_t x491 = -1;
uint32_t x493 = 489442U;
volatile int32_t t123 = 2198;
uint16_t x500 = 2153U;
volatile int32_t t124 = -41056;
static volatile int64_t x502 = 247339413158LL;
volatile int16_t x509 = INT16_MIN;
int16_t x510 = INT16_MIN;
volatile int32_t t128 = 107438;
int16_t x522 = INT16_MIN;
static uint32_t x525 = 15980U;
volatile int64_t x526 = 5LL;
int8_t x528 = -1;
static volatile uint8_t x529 = UINT8_MAX;
int16_t x531 = INT16_MAX;
int32_t t132 = -14895196;
int32_t x534 = -1;
uint32_t x539 = 1U;
int16_t x542 = 11;
int32_t x544 = -7312;
static int32_t x549 = 1071288;
int64_t x553 = -539005801564793LL;
uint16_t x556 = 3707U;
int16_t x557 = INT16_MAX;
volatile uint16_t x558 = 552U;
uint32_t x560 = 881986408U;
int32_t t139 = 1852368;
int32_t x561 = INT32_MIN;
int8_t x564 = -7;
uint64_t x569 = UINT64_MAX;
volatile int16_t x571 = INT16_MIN;
volatile int32_t t142 = -1763;
static int8_t x573 = INT8_MIN;
int32_t t144 = 242;
uint32_t x589 = UINT32_MAX;
volatile uint64_t x594 = 3303006516584LLU;
int16_t x595 = INT16_MAX;
int16_t x600 = 617;
int8_t x601 = 1;
int16_t x604 = -15042;
int32_t t150 = -256308;
volatile int32_t t153 = 12619;
int32_t x618 = INT32_MIN;
uint8_t x620 = 5U;
int32_t t157 = -14189;
uint8_t x634 = 123U;
volatile int32_t t159 = -173280326;
static volatile int16_t x642 = INT16_MIN;
uint8_t x644 = UINT8_MAX;
volatile int16_t x652 = -69;
int16_t x656 = INT16_MIN;
int32_t x657 = -738853557;
int32_t t164 = -45958067;
uint8_t x662 = 3U;
int16_t x675 = -1;
int32_t t168 = -46192;
static int16_t x683 = INT16_MIN;
volatile uint8_t x701 = UINT8_MAX;
int64_t x707 = INT64_MIN;
int8_t x710 = 7;
static volatile int64_t x718 = INT64_MIN;
uint16_t x720 = 6238U;
int16_t x731 = 3428;
static int64_t x737 = INT64_MIN;
int8_t x740 = INT8_MIN;
int16_t x745 = 0;
int32_t t186 = -1607722;
static int16_t x749 = INT16_MAX;
int32_t t188 = 14172;
volatile int8_t x762 = -1;
static int16_t x768 = INT16_MIN;
int64_t x769 = -199639645176622632LL;
static int64_t x770 = -1LL;
volatile int32_t t193 = -13;
int64_t x780 = -1LL;
volatile int16_t x782 = INT16_MIN;
static int32_t x788 = -27650680;
static int32_t t196 = -3;
int64_t x795 = 2995736969958856LL;
uint64_t x797 = 83LLU;
int32_t x798 = INT32_MIN;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 1;

    t0 = (((x1^x2)^x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MIN;
	volatile int16_t x7 = INT16_MIN;

    t1 = (((x5^x6)^x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 15U;
	static int64_t x11 = INT64_MIN;

    t2 = (((x9^x10)^x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 1U;
	int32_t x14 = INT32_MIN;
	int64_t x15 = -170108LL;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -67;

    t3 = (((x13^x14)^x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int8_t x18 = -1;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;

    t4 = (((x17^x18)^x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	static uint64_t x22 = 94847LLU;
	volatile uint32_t x23 = UINT32_MAX;
	static uint8_t x24 = 0U;
	volatile int32_t t5 = -643328;

    t5 = (((x21^x22)^x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	uint32_t x27 = 47949808U;
	volatile int32_t x28 = INT32_MAX;
	int32_t t6 = 1;

    t6 = (((x25^x26)^x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x32 = INT8_MIN;

    t7 = (((x29^x30)^x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = 15829132LL;
	static uint16_t x34 = UINT16_MAX;
	int16_t x36 = INT16_MAX;

    t8 = (((x33^x34)^x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	uint32_t x38 = 4U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -38671;

    t9 = (((x37^x38)^x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 17635429504051145LLU;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -1178733;

    t10 = (((x41^x42)^x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 2287;

    t11 = (((x45^x46)^x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -1LL;
	static int8_t x52 = 14;
	volatile int32_t t12 = 0;

    t12 = (((x49^x50)^x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int8_t x54 = INT8_MIN;
	static int64_t x55 = 5694LL;
	uint8_t x56 = 42U;
	int32_t t13 = 8078870;

    t13 = (((x53^x54)^x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	uint16_t x58 = 97U;
	volatile int16_t x59 = -1;
	static uint64_t x60 = 453785891064699LLU;
	volatile int32_t t14 = 92;

    t14 = (((x57^x58)^x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	uint8_t x62 = 11U;
	int32_t x63 = 69526;
	int16_t x64 = INT16_MIN;
	static int32_t t15 = -1643280;

    t15 = (((x61^x62)^x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	uint32_t x67 = 3U;
	uint8_t x68 = 3U;
	int32_t t16 = -77020;

    t16 = (((x65^x66)^x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = 63;
	uint16_t x70 = UINT16_MAX;
	int32_t x72 = -1;
	volatile int32_t t17 = 180370721;

    t17 = (((x69^x70)^x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = 0;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = 12;

    t18 = (((x73^x74)^x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 2302578019702LLU;

    t19 = (((x77^x78)^x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 1U;
	int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = 290582040;
	static volatile int32_t t20 = -3718;

    t20 = (((x81^x82)^x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	int32_t t21 = -7286501;

    t21 = (((x85^x86)^x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	int64_t x90 = 133083545657420073LL;
	int8_t x91 = -36;
	static volatile uint32_t x92 = 3U;
	volatile int32_t t22 = -318;

    t22 = (((x89^x90)^x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -85226728241810LL;
	int32_t x95 = INT32_MIN;
	int16_t x96 = -545;
	volatile int32_t t23 = 270;

    t23 = (((x93^x94)^x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = 1920804LL;

    t24 = (((x97^x98)^x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x102 = 0U;
	uint8_t x103 = 0U;
	int16_t x104 = INT16_MIN;

    t25 = (((x101^x102)^x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	int16_t x106 = INT16_MIN;
	uint8_t x107 = 1U;
	uint64_t x108 = 22222LLU;
	volatile int32_t t26 = -12018;

    t26 = (((x105^x106)^x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile int8_t x110 = INT8_MAX;
	int32_t t27 = -1599243;

    t27 = (((x109^x110)^x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	int16_t x114 = 101;
	static int16_t x115 = -3614;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 53921;

    t28 = (((x113^x114)^x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	uint32_t x118 = 408158621U;
	uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 255141299LLU;
	int32_t t29 = -1;

    t29 = (((x117^x118)^x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MAX;
	static int8_t x123 = INT8_MAX;
	int64_t x124 = 9669629515763421LL;
	volatile int32_t t30 = -16935312;

    t30 = (((x121^x122)^x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -1;
	uint16_t x128 = 335U;
	int32_t t31 = -204;

    t31 = (((x125^x126)^x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 7;
	int64_t x130 = 6LL;
	int16_t x131 = INT16_MAX;
	int32_t x132 = -30890136;
	int32_t t32 = -14727;

    t32 = (((x129^x130)^x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 41927605517064118LLU;
	volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;
	volatile int32_t t33 = -45174599;

    t33 = (((x133^x134)^x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1551;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;

    t34 = (((x137^x138)^x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MAX;
	uint32_t x143 = 13686153U;
	static uint64_t x144 = UINT64_MAX;

    t35 = (((x141^x142)^x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 0;
	volatile int16_t x146 = 711;
	int64_t x147 = INT64_MAX;

    t36 = (((x145^x146)^x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static uint64_t x151 = 213641984026LLU;
	int64_t x152 = -1LL;
	int32_t t37 = -1318444;

    t37 = (((x149^x150)^x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -2778092412LL;
	static uint16_t x154 = 9391U;
	uint64_t x156 = 3308LLU;
	volatile int32_t t38 = 1034401188;

    t38 = (((x153^x154)^x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = 0;
	static uint64_t x158 = UINT64_MAX;
	static int64_t x159 = -1LL;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 7576270;

    t39 = (((x157^x158)^x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 280U;
	static int64_t x162 = -304469572LL;
	uint8_t x164 = 1U;
	volatile int32_t t40 = 22622;

    t40 = (((x161^x162)^x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x166 = -10;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = -181088;

    t41 = (((x165^x166)^x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 10476U;
	static int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MAX;

    t42 = (((x169^x170)^x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = -1;
	int64_t x176 = 32315LL;

    t43 = (((x173^x174)^x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = -5762;
	int16_t x179 = INT16_MIN;
	int32_t t44 = -567622526;

    t44 = (((x177^x178)^x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	int16_t x183 = 117;
	int64_t x184 = 3LL;
	int32_t t45 = 7493;

    t45 = (((x181^x182)^x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x185 = 2U;
	uint16_t x186 = 678U;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MAX;
	int32_t t46 = 2122542;

    t46 = (((x185^x186)^x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	uint64_t x190 = 0LLU;
	int16_t x191 = INT16_MAX;
	static int8_t x192 = INT8_MAX;
	int32_t t47 = 240334338;

    t47 = (((x189^x190)^x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 58;
	int8_t x194 = INT8_MIN;
	int8_t x195 = 0;
	volatile int64_t x196 = -3747941254229783995LL;
	int32_t t48 = 13609932;

    t48 = (((x193^x194)^x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = 330595;
	int32_t x199 = -548;
	uint32_t x200 = 0U;
	volatile int32_t t49 = 34;

    t49 = (((x197^x198)^x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -85003463;

    t50 = (((x201^x202)^x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 1522896163379LL;
	uint16_t x206 = 9U;
	uint32_t x207 = 161247974U;
	int32_t t51 = -1;

    t51 = (((x205^x206)^x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 1;
	volatile int64_t x210 = INT64_MAX;
	uint16_t x212 = 24U;
	volatile int32_t t52 = -13;

    t52 = (((x209^x210)^x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 7372916473993560903LLU;
	static uint32_t x216 = 26U;
	volatile int32_t t53 = 0;

    t53 = (((x213^x214)^x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 530523U;
	int64_t x218 = INT64_MAX;
	static int64_t x219 = INT64_MAX;
	static volatile int8_t x220 = INT8_MAX;
	static int32_t t54 = 364;

    t54 = (((x217^x218)^x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MAX;
	static volatile uint16_t x222 = 7U;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MAX;

    t55 = (((x221^x222)^x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 47U;
	int16_t x227 = -34;
	uint32_t x228 = 1992455U;
	int32_t t56 = 2974764;

    t56 = (((x225^x226)^x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = -1451LL;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -16287247;

    t57 = (((x229^x230)^x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x234 = INT32_MIN;
	static uint8_t x235 = UINT8_MAX;
	int32_t t58 = -130439;

    t58 = (((x233^x234)^x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 23;
	uint16_t x238 = 944U;
	uint32_t x239 = 232U;
	static int32_t x240 = -1;

    t59 = (((x237^x238)^x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	int32_t x244 = -323282;

    t60 = (((x241^x242)^x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 150;
	volatile int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t61 = 18095627;

    t61 = (((x245^x246)^x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 6LLU;
	int64_t x250 = -438503LL;
	static int64_t x251 = 0LL;
	static volatile int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = -247;

    t62 = (((x249^x250)^x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	static uint16_t x256 = 25544U;
	static volatile int32_t t63 = -488366;

    t63 = (((x253^x254)^x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -25LL;
	volatile int32_t t64 = 517351;

    t64 = (((x257^x258)^x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 2273U;
	int16_t x262 = INT16_MAX;
	int32_t x263 = -1;
	uint64_t x264 = 1062669936LLU;
	static int32_t t65 = 974229;

    t65 = (((x261^x262)^x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x266 = 2;
	int8_t x267 = -1;
	int32_t t66 = -6447;

    t66 = (((x265^x266)^x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = 20;
	volatile int32_t t67 = 701651;

    t67 = (((x269^x270)^x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = INT64_MIN;
	volatile int8_t x275 = -1;
	static uint64_t x276 = UINT64_MAX;
	int32_t t68 = 21518972;

    t68 = (((x273^x274)^x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x278 = UINT64_MAX;
	static volatile int64_t x279 = -446579097LL;
	int32_t t69 = -814779588;

    t69 = (((x277^x278)^x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 0LLU;
	static int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MIN;
	static uint8_t x284 = UINT8_MAX;

    t70 = (((x281^x282)^x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 4U;
	int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	static volatile int32_t x288 = -1;
	static int32_t t71 = -1;

    t71 = (((x285^x286)^x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint32_t x290 = 1U;
	uint64_t x291 = UINT64_MAX;
	static int8_t x292 = INT8_MAX;
	static int32_t t72 = 411;

    t72 = (((x289^x290)^x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 124LLU;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 2582903;

    t73 = (((x293^x294)^x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	int32_t t74 = 1848;

    t74 = (((x297^x298)^x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = -51;
	static uint32_t x303 = 61464072U;
	volatile uint64_t x304 = 9250LLU;
	int32_t t75 = 5639;

    t75 = (((x301^x302)^x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile int16_t x306 = INT16_MIN;
	int16_t x308 = INT16_MAX;

    t76 = (((x305^x306)^x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	uint16_t x310 = 632U;
	volatile uint64_t x312 = 183282255440143737LLU;
	static volatile int32_t t77 = 53902854;

    t77 = (((x309^x310)^x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x314 = 62U;
	int64_t x315 = INT64_MAX;
	volatile int32_t t78 = -367;

    t78 = (((x313^x314)^x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 131180516;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = 7U;
	volatile int32_t t79 = 170976049;

    t79 = (((x317^x318)^x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = 5LL;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 2733;

    t80 = (((x321^x322)^x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	static int8_t x326 = 0;
	static int16_t x327 = -6;
	volatile int32_t t81 = 2271325;

    t81 = (((x325^x326)^x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 0U;
	uint16_t x332 = 2U;
	int32_t t82 = 202;

    t82 = (((x329^x330)^x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	uint8_t x335 = 53U;
	int64_t x336 = 208512756LL;
	int32_t t83 = 254209685;

    t83 = (((x333^x334)^x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	static uint8_t x340 = 7U;
	volatile int32_t t84 = 13;

    t84 = (((x337^x338)^x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 35U;
	int32_t x342 = -1;
	int8_t x343 = -60;
	uint16_t x344 = 8280U;
	int32_t t85 = 1135564;

    t85 = (((x341^x342)^x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 115U;
	int16_t x347 = -339;
	static int8_t x348 = INT8_MAX;
	int32_t t86 = 10;

    t86 = (((x345^x346)^x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = UINT8_MAX;
	static int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 0;

    t87 = (((x349^x350)^x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	static uint16_t x354 = 132U;
	static volatile int16_t x355 = INT16_MIN;
	int32_t x356 = -1517301;
	int32_t t88 = 3124432;

    t88 = (((x353^x354)^x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x358 = 314;
	int8_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;
	volatile int32_t t89 = -5;

    t89 = (((x357^x358)^x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x362 = UINT8_MAX;
	int64_t x363 = INT64_MAX;
	static volatile int32_t t90 = -35;

    t90 = (((x361^x362)^x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = 5643275;

    t91 = (((x365^x366)^x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = 1;
	int16_t x371 = INT16_MIN;
	volatile uint32_t x372 = 1194100744U;

    t92 = (((x369^x370)^x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 15U;
	static int64_t x374 = -1LL;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = UINT32_MAX;
	int32_t t93 = -127376275;

    t93 = (((x373^x374)^x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	static int8_t x378 = -1;
	static int64_t x379 = 0LL;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -31053295;

    t94 = (((x377^x378)^x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -26466448157505179LL;
	static uint32_t x382 = 2837799U;
	uint32_t x383 = 9899U;
	volatile uint32_t x384 = 33290788U;
	volatile int32_t t95 = 1;

    t95 = (((x381^x382)^x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x385 = 101LLU;
	int32_t x386 = -1;
	volatile int32_t t96 = 4167732;

    t96 = (((x385^x386)^x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	static int16_t x391 = 77;
	static int16_t x392 = -1;

    t97 = (((x389^x390)^x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int32_t x394 = -214033201;
	volatile uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 14488617;

    t98 = (((x393^x394)^x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MIN;
	static volatile int64_t x399 = -108290269365210LL;
	int64_t x400 = -1LL;
	int32_t t99 = 2;

    t99 = (((x397^x398)^x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	uint8_t x402 = UINT8_MAX;
	static uint8_t x403 = UINT8_MAX;
	volatile int32_t x404 = -4487;

    t100 = (((x401^x402)^x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = INT16_MIN;
	uint64_t x406 = UINT64_MAX;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = -1;
	static int32_t t101 = 508;

    t101 = (((x405^x406)^x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -9070697;
	volatile int32_t x410 = 1;
	int64_t x411 = 51133140660LL;
	int32_t t102 = 387;

    t102 = (((x409^x410)^x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MIN;
	uint8_t x415 = 6U;
	int16_t x416 = INT16_MIN;
	int32_t t103 = -429703081;

    t103 = (((x413^x414)^x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int64_t x420 = -1LL;
	volatile int32_t t104 = -38316862;

    t104 = (((x417^x418)^x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x422 = 124U;
	static uint16_t x423 = UINT16_MAX;
	static volatile int32_t t105 = 3100;

    t105 = (((x421^x422)^x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 3;
	int16_t x426 = -1;
	static int64_t x427 = 20000704790LL;
	static int64_t x428 = INT64_MAX;
	int32_t t106 = -784160078;

    t106 = (((x425^x426)^x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -7LL;
	int64_t x431 = 28973288597933LL;
	static int8_t x432 = -1;
	int32_t t107 = 568;

    t107 = (((x429^x430)^x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = 9650701;
	int16_t x435 = -1;
	int64_t x436 = -62LL;
	int32_t t108 = 1756393;

    t108 = (((x433^x434)^x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -1;
	uint16_t x438 = 15556U;
	int32_t x440 = 60248;
	volatile int32_t t109 = -3;

    t109 = (((x437^x438)^x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = 27766U;
	volatile int64_t x443 = -1LL;
	volatile int32_t t110 = -1504195;

    t110 = (((x441^x442)^x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -762066822;
	int16_t x446 = -21;
	static int16_t x447 = -1;
	static volatile int64_t x448 = -482611LL;
	volatile int32_t t111 = 277470609;

    t111 = (((x445^x446)^x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 0LLU;
	uint64_t x450 = UINT64_MAX;
	static uint32_t x451 = 28113U;
	int16_t x452 = -1;
	int32_t t112 = -2644;

    t112 = (((x449^x450)^x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x454 = 17688U;
	int32_t x455 = -1;
	static int8_t x456 = INT8_MIN;
	int32_t t113 = -4596;

    t113 = (((x453^x454)^x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x457 = 3U;
	volatile int64_t x458 = INT64_MAX;
	volatile int16_t x460 = INT16_MIN;
	int32_t t114 = -1034099081;

    t114 = (((x457^x458)^x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	static volatile int8_t x462 = INT8_MAX;
	static int64_t x463 = -556515548091LL;
	int32_t t115 = 125780782;

    t115 = (((x461^x462)^x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = 5;
	volatile uint32_t x467 = 37955310U;
	int32_t x468 = INT32_MAX;
	int32_t t116 = -417689;

    t116 = (((x465^x466)^x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = INT64_MIN;
	int16_t x471 = 171;
	int16_t x472 = INT16_MAX;
	static volatile int32_t t117 = 1;

    t117 = (((x469^x470)^x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x475 = -1LL;
	static int32_t x476 = -3;
	int32_t t118 = 0;

    t118 = (((x473^x474)^x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	volatile uint64_t x478 = 838LLU;
	int64_t x479 = INT64_MAX;
	volatile uint8_t x480 = 80U;
	volatile int32_t t119 = -124719410;

    t119 = (((x477^x478)^x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x482 = UINT64_MAX;
	static int16_t x483 = INT16_MIN;
	static int16_t x484 = -99;
	volatile int32_t t120 = -664338804;

    t120 = (((x481^x482)^x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -4099017280202018724LL;
	volatile int32_t x486 = INT32_MIN;
	volatile uint64_t x487 = 8781569004581546LLU;
	uint32_t x488 = 4533197U;
	int32_t t121 = 19480531;

    t121 = (((x485^x486)^x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MIN;
	uint8_t x490 = UINT8_MAX;
	int64_t x492 = -5516789LL;
	volatile int32_t t122 = 245450;

    t122 = (((x489^x490)^x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x494 = -2668;
	int8_t x495 = INT8_MIN;
	int64_t x496 = INT64_MIN;

    t123 = (((x493^x494)^x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 93U;
	int32_t x498 = INT32_MIN;
	uint8_t x499 = 12U;

    t124 = (((x497^x498)^x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 792074120460330LLU;
	int32_t x503 = 165803278;
	uint16_t x504 = 0U;
	int32_t t125 = 88865;

    t125 = (((x501^x502)^x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -28;
	volatile int8_t x506 = 1;
	int16_t x507 = INT16_MAX;
	int32_t x508 = 1;
	int32_t t126 = -13102;

    t126 = (((x505^x506)^x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x511 = 7U;
	int16_t x512 = 3;
	volatile int32_t t127 = -39605709;

    t127 = (((x509^x510)^x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -15720;
	static int16_t x514 = 1512;
	uint32_t x515 = UINT32_MAX;
	int16_t x516 = -867;

    t128 = (((x513^x514)^x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 3U;
	volatile uint8_t x518 = 6U;
	uint64_t x519 = 36364364735847LLU;
	int64_t x520 = -51477256LL;
	volatile int32_t t129 = -984305736;

    t129 = (((x517^x518)^x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = INT32_MAX;
	volatile uint32_t x523 = 104643U;
	uint32_t x524 = 107696107U;
	int32_t t130 = -252000;

    t130 = (((x521^x522)^x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x527 = 25U;
	static int32_t t131 = 1;

    t131 = (((x525^x526)^x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x530 = 7U;
	uint64_t x532 = UINT64_MAX;

    t132 = (((x529^x530)^x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 5552;
	int64_t x535 = INT64_MIN;
	static int8_t x536 = INT8_MAX;
	int32_t t133 = 340795;

    t133 = (((x533^x534)^x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 65207516U;
	uint8_t x538 = 8U;
	volatile int32_t x540 = INT32_MAX;
	volatile int32_t t134 = -2;

    t134 = (((x537^x538)^x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 1U;
	static int64_t x543 = INT64_MIN;
	static int32_t t135 = -88383753;

    t135 = (((x541^x542)^x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x546 = INT64_MIN;
	int32_t x547 = -1;
	int32_t x548 = INT32_MIN;
	static volatile int32_t t136 = -4;

    t136 = (((x545^x546)^x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MIN;
	int16_t x551 = 869;
	int8_t x552 = -1;
	int32_t t137 = -84006;

    t137 = (((x549^x550)^x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MAX;
	static volatile int32_t t138 = 11480;

    t138 = (((x553^x554)^x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x559 = INT16_MIN;

    t139 = (((x557^x558)^x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x562 = -3442;
	static int16_t x563 = -110;
	int32_t t140 = 222;

    t140 = (((x561^x562)^x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -1;
	int64_t x566 = 73225860480LL;
	int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;
	volatile int32_t t141 = 348;

    t141 = (((x565^x566)^x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = UINT32_MAX;
	uint16_t x572 = 1113U;

    t142 = (((x569^x570)^x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MIN;
	uint16_t x575 = 5U;
	int8_t x576 = -46;
	static volatile int32_t t143 = -902606777;

    t143 = (((x573^x574)^x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x577 = INT16_MAX;
	uint8_t x578 = 1U;
	int8_t x579 = INT8_MIN;
	volatile int32_t x580 = -1;

    t144 = (((x577^x578)^x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = -25;
	volatile int32_t x583 = INT32_MIN;
	int32_t x584 = -1;
	int32_t t145 = -97;

    t145 = (((x581^x582)^x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = -15215;
	static int8_t x586 = -40;
	volatile uint8_t x587 = UINT8_MAX;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t146 = 29482144;

    t146 = (((x585^x586)^x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x590 = INT32_MIN;
	uint8_t x591 = 45U;
	int8_t x592 = -1;
	static volatile int32_t t147 = 107;

    t147 = (((x589^x590)^x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = INT32_MAX;
	int16_t x596 = -1;
	int32_t t148 = -17876950;

    t148 = (((x593^x594)^x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = 1;
	volatile int32_t x598 = 1265255;
	int32_t x599 = INT32_MAX;
	int32_t t149 = -912044696;

    t149 = (((x597^x598)^x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MAX;
	uint16_t x603 = 6U;

    t150 = (((x601^x602)^x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	uint32_t x606 = 341U;
	static int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = -4;

    t151 = (((x605^x606)^x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 1005702U;
	int8_t x610 = INT8_MAX;
	volatile int16_t x611 = INT16_MAX;
	static volatile int8_t x612 = -1;
	volatile int32_t t152 = -396122656;

    t152 = (((x609^x610)^x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -11;
	volatile int64_t x614 = -1LL;
	int64_t x615 = 1154590548338117LL;
	static int64_t x616 = INT64_MIN;

    t153 = (((x613^x614)^x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x617 = INT64_MIN;
	int32_t x619 = -211250035;
	volatile int32_t t154 = -2275347;

    t154 = (((x617^x618)^x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 33U;
	int8_t x622 = -39;
	static uint16_t x623 = 1502U;
	int16_t x624 = 43;
	volatile int32_t t155 = -2;

    t155 = (((x621^x622)^x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	int8_t x626 = -1;
	int64_t x627 = INT64_MIN;
	int64_t x628 = 26LL;
	volatile int32_t t156 = 1366;

    t156 = (((x625^x626)^x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 636U;
	volatile int8_t x630 = INT8_MAX;
	static uint8_t x631 = UINT8_MAX;
	volatile uint64_t x632 = 753564872LLU;

    t157 = (((x629^x630)^x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	static int16_t x635 = INT16_MAX;
	static volatile uint16_t x636 = 8U;
	volatile int32_t t158 = -245756114;

    t158 = (((x633^x634)^x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	uint32_t x638 = 10U;
	static int8_t x639 = INT8_MAX;
	uint16_t x640 = 5U;

    t159 = (((x637^x638)^x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 1U;
	volatile uint8_t x643 = 7U;
	volatile int32_t t160 = 36229818;

    t160 = (((x641^x642)^x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint32_t x646 = 38U;
	uint16_t x647 = 30443U;
	static int8_t x648 = -1;
	int32_t t161 = 527536977;

    t161 = (((x645^x646)^x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = -1;
	int16_t x651 = -14;
	static int32_t t162 = -1;

    t162 = (((x649^x650)^x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = INT16_MAX;
	int32_t x654 = -1;
	uint8_t x655 = 1U;
	static volatile int32_t t163 = -53553;

    t163 = (((x653^x654)^x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x658 = INT64_MIN;
	static uint32_t x659 = 261U;
	int8_t x660 = INT8_MIN;

    t164 = (((x657^x658)^x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -15;
	volatile uint16_t x663 = 5326U;
	int64_t x664 = -1LL;
	static volatile int32_t t165 = -155;

    t165 = (((x661^x662)^x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MIN;
	int64_t x666 = 1331619594656255701LL;
	uint64_t x667 = 6LLU;
	int64_t x668 = INT64_MIN;
	int32_t t166 = -877897004;

    t166 = (((x665^x666)^x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	int16_t x670 = 8555;
	uint16_t x671 = UINT16_MAX;
	int8_t x672 = INT8_MIN;
	volatile int32_t t167 = -5;

    t167 = (((x669^x670)^x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = -1059560901;
	uint8_t x674 = 23U;
	uint64_t x676 = UINT64_MAX;

    t168 = (((x673^x674)^x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = 983700603LL;
	uint32_t x678 = UINT32_MAX;
	volatile int16_t x679 = INT16_MAX;
	int64_t x680 = 433663LL;
	int32_t t169 = -616132138;

    t169 = (((x677^x678)^x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = UINT8_MAX;
	int16_t x682 = INT16_MIN;
	int16_t x684 = INT16_MIN;
	volatile int32_t t170 = -2010487;

    t170 = (((x681^x682)^x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 27;
	int8_t x686 = 59;
	uint8_t x687 = 9U;
	int64_t x688 = 46223LL;
	int32_t t171 = -1428;

    t171 = (((x685^x686)^x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MAX;
	uint8_t x690 = UINT8_MAX;
	int16_t x691 = -1;
	int64_t x692 = INT64_MAX;
	int32_t t172 = 4492;

    t172 = (((x689^x690)^x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	uint32_t x694 = UINT32_MAX;
	int16_t x695 = INT16_MIN;
	int32_t x696 = INT32_MIN;
	volatile int32_t t173 = 168;

    t173 = (((x693^x694)^x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 1380LLU;
	static volatile int8_t x698 = INT8_MIN;
	int64_t x699 = -1LL;
	int16_t x700 = INT16_MAX;
	int32_t t174 = -249044;

    t174 = (((x697^x698)^x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x702 = UINT8_MAX;
	uint64_t x703 = 749630LLU;
	int8_t x704 = 1;
	volatile int32_t t175 = -872814;

    t175 = (((x701^x702)^x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MAX;
	uint8_t x706 = UINT8_MAX;
	int32_t x708 = -1;
	static int32_t t176 = -1907;

    t176 = (((x705^x706)^x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 5560U;
	volatile int64_t x711 = INT64_MIN;
	int64_t x712 = INT64_MAX;
	int32_t t177 = 5806299;

    t177 = (((x709^x710)^x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	static int8_t x714 = INT8_MAX;
	int32_t x715 = -1;
	uint32_t x716 = 12U;
	volatile int32_t t178 = 956752737;

    t178 = (((x713^x714)^x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -4002341553045LL;
	int16_t x719 = INT16_MIN;
	volatile int32_t t179 = 553;

    t179 = (((x717^x718)^x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	uint64_t x722 = 15284880LLU;
	int16_t x723 = INT16_MAX;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = -5128047;

    t180 = (((x721^x722)^x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -1;
	int16_t x726 = 463;
	uint64_t x727 = 53754101250908608LLU;
	static int32_t x728 = 311;
	volatile int32_t t181 = -28;

    t181 = (((x725^x726)^x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	volatile int16_t x730 = -1;
	uint8_t x732 = 38U;
	int32_t t182 = -215;

    t182 = (((x729^x730)^x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 58U;
	int16_t x734 = INT16_MAX;
	int8_t x735 = -1;
	static int64_t x736 = INT64_MIN;
	volatile int32_t t183 = 153468166;

    t183 = (((x733^x734)^x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x738 = INT32_MIN;
	uint8_t x739 = 60U;
	int32_t t184 = -1789090;

    t184 = (((x737^x738)^x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = INT8_MAX;
	static uint16_t x743 = 1U;
	int8_t x744 = INT8_MIN;
	static int32_t t185 = 22057;

    t185 = (((x741^x742)^x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x746 = INT8_MAX;
	int8_t x747 = INT8_MAX;
	int32_t x748 = INT32_MAX;

    t186 = (((x745^x746)^x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MAX;
	int64_t x751 = INT64_MIN;
	int16_t x752 = INT16_MIN;
	volatile int32_t t187 = -6812277;

    t187 = (((x749^x750)^x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 23868295365505LLU;
	int16_t x754 = INT16_MAX;
	int8_t x755 = 24;
	int64_t x756 = -1LL;

    t188 = (((x753^x754)^x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = 899281571LL;
	static int64_t x758 = -38LL;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MAX;
	volatile int32_t t189 = 1041793;

    t189 = (((x757^x758)^x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MAX;
	static uint8_t x763 = UINT8_MAX;
	uint8_t x764 = 54U;
	volatile int32_t t190 = -854;

    t190 = (((x761^x762)^x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = -63;
	int32_t x766 = INT32_MIN;
	volatile int64_t x767 = -1LL;
	int32_t t191 = 94325755;

    t191 = (((x765^x766)^x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x771 = -59;
	volatile uint16_t x772 = UINT16_MAX;
	static volatile int32_t t192 = 317300;

    t192 = (((x769^x770)^x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MIN;
	volatile int32_t x774 = -4476;
	uint8_t x775 = 3U;
	volatile uint64_t x776 = 1LLU;

    t193 = (((x773^x774)^x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = -1;
	static int8_t x778 = INT8_MAX;
	static uint16_t x779 = UINT16_MAX;
	int32_t t194 = -81;

    t194 = (((x777^x778)^x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -307965236;
	int64_t x783 = -188392871506907742LL;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t195 = 1;

    t195 = (((x781^x782)^x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	uint16_t x786 = UINT16_MAX;
	static volatile uint16_t x787 = 593U;

    t196 = (((x785^x786)^x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 4;
	int16_t x790 = INT16_MIN;
	int8_t x791 = INT8_MAX;
	int32_t x792 = INT32_MAX;
	int32_t t197 = -353;

    t197 = (((x789^x790)^x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = 0;
	int32_t x796 = -1;
	static int32_t t198 = 913739;

    t198 = (((x793^x794)^x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = INT16_MIN;
	static int32_t x800 = INT32_MIN;
	volatile int32_t t199 = -16192331;

    t199 = (((x797^x798)^x799)==x800);

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

