
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

volatile int64_t x1 = INT64_MAX;
uint8_t x14 = 55U;
volatile int64_t x21 = -1LL;
int16_t x23 = INT16_MIN;
static volatile uint8_t x31 = 107U;
int64_t x37 = INT64_MIN;
uint16_t x43 = 3993U;
int32_t t11 = 12042364;
uint8_t x49 = 1U;
int32_t x55 = INT32_MIN;
int64_t x58 = 13722LL;
uint64_t x60 = 0LLU;
volatile uint8_t x64 = 3U;
int8_t x69 = INT8_MIN;
volatile int32_t t17 = -124;
uint8_t x79 = 34U;
int32_t t20 = -110;
int32_t x92 = -14334924;
static uint16_t x99 = 964U;
volatile int64_t x100 = INT64_MIN;
int16_t x106 = -1;
static int64_t x108 = -1LL;
int8_t x110 = -1;
volatile int8_t x111 = -1;
uint8_t x118 = 55U;
static int32_t x119 = 0;
static uint16_t x121 = UINT16_MAX;
static int8_t x124 = INT8_MAX;
uint16_t x129 = 23312U;
int8_t x132 = 19;
int32_t t32 = -36;
uint16_t x134 = 1U;
volatile int32_t t33 = -221;
int16_t x138 = -1;
static volatile uint8_t x147 = UINT8_MAX;
static volatile int32_t t36 = -2852119;
uint16_t x151 = 528U;
int32_t t37 = 4;
int16_t x153 = -677;
static uint8_t x155 = 4U;
static int64_t x156 = -519617534LL;
uint64_t x164 = UINT64_MAX;
volatile int32_t t40 = 66074;
uint64_t x167 = 71810455836613335LLU;
int64_t x170 = INT64_MIN;
volatile int32_t t44 = 18760;
uint32_t x188 = UINT32_MAX;
int32_t x197 = -1;
int16_t x202 = INT16_MIN;
int32_t t50 = 5048496;
int32_t t51 = -125;
int64_t x211 = 7252043813102900LL;
int8_t x212 = -1;
uint16_t x215 = 7030U;
static int32_t x226 = INT32_MIN;
uint16_t x230 = UINT16_MAX;
volatile int32_t t57 = -1759;
volatile int64_t x234 = INT64_MIN;
volatile uint32_t x235 = 177U;
int32_t x240 = INT32_MIN;
int32_t x242 = -638;
volatile int32_t x248 = -1902;
static uint16_t x267 = 5U;
int32_t t66 = 1481;
static int32_t x272 = INT32_MIN;
uint16_t x281 = 1313U;
int16_t x283 = 1;
int32_t x286 = INT32_MIN;
int32_t x293 = -1;
uint16_t x297 = 27240U;
int32_t x298 = INT32_MAX;
int16_t x302 = 71;
int32_t t75 = 1256469;
static int32_t x307 = -41553;
static int32_t t76 = -2148;
int64_t x310 = -6413LL;
int32_t t77 = -1869534;
int8_t x316 = INT8_MIN;
static volatile uint16_t x318 = 47U;
uint8_t x319 = 40U;
volatile int32_t t80 = -19495;
uint64_t x332 = UINT64_MAX;
volatile uint64_t x337 = 1054715473LLU;
int8_t x340 = INT8_MIN;
static volatile uint64_t x351 = 0LLU;
static int8_t x352 = -18;
int32_t x354 = 101;
int32_t t88 = 2378102;
volatile int8_t x361 = 0;
volatile int16_t x369 = INT16_MAX;
volatile int32_t x372 = 4752;
int32_t x376 = INT32_MIN;
uint8_t x379 = UINT8_MAX;
volatile int32_t t95 = 224;
static uint64_t x387 = 45572041229998352LLU;
static uint32_t x389 = 221555U;
int8_t x390 = INT8_MIN;
uint16_t x391 = 315U;
int64_t x392 = INT64_MAX;
static int16_t x398 = INT16_MAX;
volatile uint32_t x399 = 7104U;
int8_t x403 = INT8_MAX;
int32_t t101 = -469;
volatile int32_t x412 = 21;
volatile int64_t x415 = 159959696994392LL;
int16_t x416 = INT16_MIN;
static int32_t t106 = 88055848;
int32_t x433 = INT32_MAX;
int32_t t108 = 366;
volatile int32_t t109 = 63263933;
int64_t x450 = INT64_MIN;
volatile int32_t t112 = -129129;
static int64_t x456 = INT64_MIN;
int32_t t113 = -119885;
uint32_t x457 = UINT32_MAX;
uint16_t x462 = 7U;
uint16_t x463 = 1U;
volatile int32_t t116 = -1377;
int64_t x469 = INT64_MIN;
static int16_t x471 = INT16_MAX;
static volatile int32_t t117 = -29307179;
static volatile int16_t x481 = -29;
uint16_t x489 = UINT16_MAX;
volatile int32_t x490 = INT32_MAX;
volatile uint64_t x492 = UINT64_MAX;
static int16_t x496 = -1;
static int32_t t123 = 1;
int16_t x497 = INT16_MIN;
static int8_t x501 = INT8_MIN;
static uint16_t x505 = 11188U;
static volatile int8_t x506 = INT8_MAX;
int16_t x512 = 116;
int8_t x513 = -5;
static int16_t x514 = INT16_MIN;
int32_t t128 = -18826322;
int64_t x518 = -1LL;
uint8_t x526 = 63U;
int8_t x535 = 0;
int8_t x536 = 1;
static int32_t x538 = -6854;
int32_t x541 = -1;
volatile int16_t x547 = 1;
int16_t x552 = -1;
int64_t x559 = 35LL;
int32_t t139 = -22179841;
int8_t x561 = INT8_MIN;
static uint64_t x573 = 142526LLU;
int32_t x578 = -1;
int64_t x586 = INT64_MIN;
int64_t x591 = INT64_MAX;
int32_t t147 = -909;
volatile int32_t t148 = 1;
int64_t x600 = -1LL;
uint8_t x607 = 21U;
uint64_t x608 = 1343053639LLU;
volatile int32_t x618 = -402974367;
int32_t x619 = INT32_MAX;
volatile uint8_t x622 = UINT8_MAX;
static uint16_t x628 = 4529U;
uint8_t x636 = UINT8_MAX;
volatile int8_t x639 = INT8_MAX;
int64_t x643 = INT64_MIN;
volatile int32_t t160 = -1174;
volatile int8_t x646 = INT8_MAX;
volatile int64_t x647 = INT64_MIN;
int8_t x656 = INT8_MIN;
int8_t x665 = INT8_MIN;
int32_t x666 = -22810467;
int32_t t167 = -70286;
static int8_t x675 = INT8_MIN;
uint8_t x679 = UINT8_MAX;
uint16_t x680 = 1038U;
volatile int64_t x691 = INT64_MIN;
volatile int8_t x698 = -1;
uint8_t x699 = 83U;
volatile uint64_t x702 = 8329531529455323LLU;
volatile int32_t t175 = -6458810;
uint16_t x706 = 0U;
uint32_t x713 = 515903U;
static int16_t x715 = INT16_MIN;
static int16_t x716 = -1;
int32_t t181 = 50058583;
uint8_t x730 = 126U;
uint64_t x732 = 257765LLU;
uint8_t x737 = UINT8_MAX;
uint8_t x740 = 13U;
int64_t x741 = INT64_MIN;
int8_t x742 = INT8_MAX;
uint8_t x752 = UINT8_MAX;
int32_t t187 = -302530;
uint8_t x757 = 42U;
static int64_t x758 = INT64_MIN;
int32_t t190 = -32;
volatile int8_t x767 = -3;
static uint64_t x769 = UINT64_MAX;
int16_t x771 = INT16_MIN;
int64_t x775 = INT64_MIN;
static uint32_t x776 = 2075948664U;
int64_t x780 = -3820569192LL;
int64_t x781 = INT64_MIN;
volatile int16_t x782 = 0;
int64_t x783 = INT64_MIN;
volatile int16_t x788 = 4911;
volatile int32_t x791 = INT32_MIN;
volatile int32_t x794 = INT32_MIN;
int32_t t198 = 25;
static int32_t x798 = INT32_MAX;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	static uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 121871910;

    t0 = ((x1|(x2|x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int32_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 12U;
	static volatile int32_t t1 = 3691;

    t1 = ((x5|(x6|x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	uint32_t x10 = 211851U;
	int8_t x11 = 12;
	uint64_t x12 = 108577778LLU;
	volatile int32_t t2 = -3958063;

    t2 = ((x9|(x10|x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 25785132U;
	int64_t x15 = -1LL;
	int16_t x16 = -1;
	int32_t t3 = 2320256;

    t3 = ((x13|(x14|x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 361LL;
	int16_t x18 = 53;
	volatile int64_t x19 = 323428783777LL;
	int16_t x20 = -1;
	volatile int32_t t4 = 622;

    t4 = ((x17|(x18|x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = UINT32_MAX;
	uint8_t x24 = 40U;
	int32_t t5 = 1;

    t5 = ((x21|(x22|x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	uint8_t x26 = 88U;
	static uint16_t x27 = 44U;
	static uint64_t x28 = UINT64_MAX;
	static volatile int32_t t6 = -493966;

    t6 = ((x25|(x26|x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x30 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -158516;

    t7 = ((x29|(x30|x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = 0U;
	volatile int32_t t8 = 15038;

    t8 = ((x33|(x34|x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 125250;

    t9 = ((x37|(x38|x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 9867LLU;
	uint16_t x42 = 111U;
	uint32_t x44 = 1689571840U;
	static volatile int32_t t10 = -12973;

    t10 = ((x41|(x42|x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	static uint16_t x47 = 30U;
	int64_t x48 = INT64_MAX;

    t11 = ((x45|(x46|x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x50 = UINT32_MAX;
	int64_t x51 = 2818806621LL;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 528419;

    t12 = ((x49|(x50|x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x53 = -30174599;
	int16_t x54 = INT16_MIN;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = -706279;

    t13 = ((x53|(x54|x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x59 = -212;
	volatile int32_t t14 = -59554;

    t14 = ((x57|(x58|x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	volatile int64_t x62 = INT64_MIN;
	volatile int64_t x63 = 3700539657377501LL;
	int32_t t15 = 103643903;

    t15 = ((x61|(x62|x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MAX;
	volatile int16_t x68 = -1;
	volatile int32_t t16 = 851316609;

    t16 = ((x65|(x66|x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x70 = INT64_MAX;
	int32_t x71 = -1;
	int16_t x72 = -59;

    t17 = ((x69|(x70|x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 7659LLU;
	int64_t x74 = -1772935168LL;
	int32_t x75 = 159571;
	volatile int64_t x76 = -98LL;
	int32_t t18 = 87105993;

    t18 = ((x73|(x74|x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = UINT32_MAX;
	volatile int8_t x78 = -1;
	volatile int32_t x80 = INT32_MAX;
	static int32_t t19 = 6178;

    t19 = ((x77|(x78|x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	volatile uint32_t x84 = 141U;

    t20 = ((x81|(x82|x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 0U;
	uint16_t x86 = 1213U;
	uint32_t x87 = 62362U;
	int32_t x88 = 45576598;
	int32_t t21 = -1;

    t21 = ((x85|(x86|x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 4444894LL;
	int32_t t22 = 512499632;

    t22 = ((x89|(x90|x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = -1;
	int16_t x94 = 11;
	int64_t x95 = INT64_MAX;
	static uint32_t x96 = 3857170U;
	volatile int32_t t23 = 11;

    t23 = ((x93|(x94|x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 16342U;
	int16_t x98 = INT16_MIN;
	volatile int32_t t24 = 14;

    t24 = ((x97|(x98|x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 48;
	int8_t x102 = -1;
	int16_t x103 = -1;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = -108;

    t25 = ((x101|(x102|x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	volatile int32_t t26 = 1;

    t26 = ((x105|(x106|x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 205266;

    t27 = ((x109|(x110|x111))>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x113 = INT32_MAX;
	static uint64_t x114 = UINT64_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	volatile int64_t x116 = INT64_MAX;
	static int32_t t28 = -33979850;

    t28 = ((x113|(x114|x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 32;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -5;

    t29 = ((x117|(x118|x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x122 = INT16_MAX;
	volatile int16_t x123 = INT16_MAX;
	volatile int32_t t30 = 21;

    t30 = ((x121|(x122|x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -2624174675LL;
	int8_t x126 = -6;
	int32_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int32_t t31 = 6204;

    t31 = ((x125|(x126|x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MAX;
	uint16_t x131 = UINT16_MAX;

    t32 = ((x129|(x130|x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	static int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;

    t33 = ((x133|(x134|x135))>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x137 = 253675292U;
	int8_t x139 = -5;
	volatile int16_t x140 = 49;
	int32_t t34 = -1;

    t34 = ((x137|(x138|x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 12735;
	volatile uint16_t x142 = 0U;
	int8_t x143 = -1;
	int32_t x144 = -2;
	int32_t t35 = -195479;

    t35 = ((x141|(x142|x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	int32_t x148 = INT32_MIN;

    t36 = ((x145|(x146|x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 2889U;
	volatile int8_t x150 = -2;
	int64_t x152 = -3LL;

    t37 = ((x149|(x150|x151))>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MAX;
	volatile int32_t t38 = -7025424;

    t38 = ((x153|(x154|x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 0U;
	volatile uint64_t x160 = 33244772LLU;
	static volatile int32_t t39 = 659368815;

    t39 = ((x157|(x158|x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 1589306486U;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MAX;

    t40 = ((x161|(x162|x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 9U;
	uint64_t x166 = UINT64_MAX;
	volatile int32_t x168 = -11623189;
	volatile int32_t t41 = 3;

    t41 = ((x165|(x166|x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 3;
	static int64_t x171 = -1LL;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t42 = 2;

    t42 = ((x169|(x170|x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -859;
	static uint32_t x174 = 1438048U;
	volatile uint32_t x175 = 2826U;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t43 = -3225703;

    t43 = ((x173|(x174|x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 14776628;
	static int8_t x178 = -2;
	uint16_t x179 = UINT16_MAX;
	int8_t x180 = -1;

    t44 = ((x177|(x178|x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	volatile uint32_t x182 = 26446U;
	static uint16_t x183 = 12314U;
	uint64_t x184 = 10016264632236LLU;
	volatile int32_t t45 = -56;

    t45 = ((x181|(x182|x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -28058340;
	volatile uint64_t x186 = 91164LLU;
	int8_t x187 = -1;
	int32_t t46 = 17334456;

    t46 = ((x185|(x186|x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x189 = UINT8_MAX;
	uint32_t x190 = UINT32_MAX;
	uint64_t x191 = 125938648545LLU;
	volatile int8_t x192 = 17;
	int32_t t47 = -178140;

    t47 = ((x189|(x190|x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	volatile uint8_t x194 = 11U;
	int8_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -354;

    t48 = ((x193|(x194|x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x198 = 1616811381394359715LLU;
	volatile int8_t x199 = -29;
	int8_t x200 = 13;
	int32_t t49 = 1;

    t49 = ((x197|(x198|x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x201 = 279U;
	uint32_t x203 = UINT32_MAX;
	volatile uint8_t x204 = 2U;

    t50 = ((x201|(x202|x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = 8;
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MAX;
	uint16_t x208 = 792U;

    t51 = ((x205|(x206|x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	uint64_t x210 = 2197962LLU;
	volatile int32_t t52 = 13158;

    t52 = ((x209|(x210|x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	static uint16_t x214 = UINT16_MAX;
	uint16_t x216 = 2U;
	volatile int32_t t53 = -1719;

    t53 = ((x213|(x214|x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	static volatile int64_t x219 = 72344897LL;
	static uint8_t x220 = UINT8_MAX;
	int32_t t54 = -2;

    t54 = ((x217|(x218|x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -20785171;
	uint16_t x222 = 494U;
	int16_t x223 = INT16_MAX;
	volatile uint8_t x224 = 82U;
	volatile int32_t t55 = -31;

    t55 = ((x221|(x222|x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = INT32_MAX;
	static int32_t x227 = -1;
	int8_t x228 = 42;
	int32_t t56 = -26071677;

    t56 = ((x225|(x226|x227))>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = 7003285705186LL;
	uint16_t x231 = 6503U;
	uint64_t x232 = 1987480577660LLU;

    t57 = ((x229|(x230|x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int8_t x236 = -1;
	volatile int32_t t58 = -4;

    t58 = ((x233|(x234|x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MIN;
	volatile int8_t x239 = -5;
	volatile int32_t t59 = 3;

    t59 = ((x237|(x238|x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -3;
	static int64_t x243 = INT64_MIN;
	int32_t x244 = -31200;
	int32_t t60 = 29687504;

    t60 = ((x241|(x242|x243))>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 5U;
	int32_t t61 = 1;

    t61 = ((x245|(x246|x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MAX;
	uint32_t x250 = 80U;
	int8_t x251 = -14;
	volatile uint8_t x252 = 2U;
	int32_t t62 = -240983;

    t62 = ((x249|(x250|x251))>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = -1;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = -874914;
	volatile int64_t x256 = INT64_MIN;
	int32_t t63 = -79788950;

    t63 = ((x253|(x254|x255))>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x257 = UINT16_MAX;
	static uint16_t x258 = 7U;
	uint64_t x259 = 11918LLU;
	uint8_t x260 = 1U;
	int32_t t64 = 0;

    t64 = ((x257|(x258|x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x261 = 9U;
	int32_t x262 = INT32_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	uint8_t x264 = 5U;
	static int32_t t65 = 13407678;

    t65 = ((x261|(x262|x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -3728;
	int8_t x266 = -2;
	uint8_t x268 = UINT8_MAX;

    t66 = ((x265|(x266|x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MIN;
	uint32_t x270 = 1733466U;
	static int32_t x271 = INT32_MAX;
	int32_t t67 = 3245561;

    t67 = ((x269|(x270|x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	uint64_t x274 = 15526190LLU;
	uint16_t x275 = 6197U;
	static volatile uint32_t x276 = 7U;
	static int32_t t68 = -71;

    t68 = ((x273|(x274|x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	static volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 31;

    t69 = ((x277|(x278|x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = UINT16_MAX;
	uint8_t x284 = 1U;
	volatile int32_t t70 = -63171287;

    t70 = ((x281|(x282|x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 859;
	int64_t x287 = INT64_MIN;
	static int16_t x288 = 0;
	static volatile int32_t t71 = -97;

    t71 = ((x285|(x286|x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 323U;
	volatile int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -10;

    t72 = ((x289|(x290|x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = 93289;
	volatile int32_t x295 = 4070703;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 0;

    t73 = ((x293|(x294|x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x299 = 10112301LLU;
	volatile uint32_t x300 = 51439U;
	volatile int32_t t74 = 299;

    t74 = ((x297|(x298|x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	volatile uint16_t x303 = 91U;
	int32_t x304 = INT32_MAX;

    t75 = ((x301|(x302|x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = 513315;
	int64_t x306 = -5202612LL;
	static uint32_t x308 = UINT32_MAX;

    t76 = ((x305|(x306|x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -1;
	volatile uint32_t x311 = 28U;
	int32_t x312 = INT32_MIN;

    t77 = ((x309|(x310|x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 467465;
	volatile int64_t x314 = INT64_MAX;
	static uint8_t x315 = 0U;
	static volatile int32_t t78 = -36656210;

    t78 = ((x313|(x314|x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	volatile int8_t x320 = -1;
	volatile int32_t t79 = 3633;

    t79 = ((x317|(x318|x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 179717387LL;
	volatile int16_t x322 = INT16_MIN;
	uint64_t x323 = 3307738543326312739LLU;
	int32_t x324 = 55542741;

    t80 = ((x321|(x322|x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t81 = -223986;

    t81 = ((x325|(x326|x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 7564445663228065750LLU;
	int64_t x330 = INT64_MIN;
	int32_t x331 = 8120953;
	int32_t t82 = 0;

    t82 = ((x329|(x330|x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MAX;
	volatile int16_t x336 = 2;
	int32_t t83 = -30144;

    t83 = ((x333|(x334|x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MAX;
	int64_t x339 = INT64_MIN;
	int32_t t84 = 19;

    t84 = ((x337|(x338|x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 11932390LL;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	uint16_t x344 = 5289U;
	int32_t t85 = -375360;

    t85 = ((x341|(x342|x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 144161602;

    t86 = ((x345|(x346|x347))>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 610;
	int16_t x350 = INT16_MAX;
	int32_t t87 = -237;

    t87 = ((x349|(x350|x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -5119867691188LL;
	static volatile int16_t x355 = 6;
	int16_t x356 = INT16_MAX;

    t88 = ((x353|(x354|x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	static volatile uint64_t x358 = 29LLU;
	static uint8_t x359 = UINT8_MAX;
	int16_t x360 = -2;
	volatile int32_t t89 = 229;

    t89 = ((x357|(x358|x359))>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 15LLU;
	static volatile int32_t t90 = 0;

    t90 = ((x361|(x362|x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -47;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -276;

    t91 = ((x365|(x366|x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = -1;
	volatile uint32_t x371 = 0U;
	volatile int32_t t92 = 2433;

    t92 = ((x369|(x370|x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	int32_t x374 = -1;
	uint32_t x375 = 388841U;
	volatile int32_t t93 = 169;

    t93 = ((x373|(x374|x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	int16_t x378 = -1;
	int8_t x380 = -7;
	int32_t t94 = 1;

    t94 = ((x377|(x378|x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	static int64_t x382 = 1527786746647LL;
	uint16_t x383 = 1631U;
	int16_t x384 = INT16_MIN;

    t95 = ((x381|(x382|x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	uint16_t x388 = UINT16_MAX;
	static volatile int32_t t96 = 0;

    t96 = ((x385|(x386|x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t t97 = -17876;

    t97 = ((x389|(x390|x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = -1;
	volatile int32_t t98 = -10151907;

    t98 = ((x393|(x394|x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -33;

    t99 = ((x397|(x398|x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 1;
	int32_t x402 = -20409077;
	static int8_t x404 = 7;
	volatile int32_t t100 = -12703911;

    t100 = ((x401|(x402|x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 12U;
	volatile int16_t x406 = INT16_MIN;
	uint8_t x407 = 1U;
	int8_t x408 = 28;

    t101 = ((x405|(x406|x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 109571829LL;
	volatile int8_t x410 = INT8_MAX;
	int8_t x411 = INT8_MIN;
	int32_t t102 = -11;

    t102 = ((x409|(x410|x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	volatile int32_t x414 = 419990604;
	int32_t t103 = 3329;

    t103 = ((x413|(x414|x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	volatile int32_t x418 = -27414;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = UINT16_MAX;
	int32_t t104 = 13623235;

    t104 = ((x417|(x418|x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MAX;
	static uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	int64_t x424 = INT64_MAX;
	volatile int32_t t105 = 0;

    t105 = ((x421|(x422|x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x425 = 58U;
	volatile uint32_t x426 = UINT32_MAX;
	int32_t x427 = -1;
	static int32_t x428 = -1376642;

    t106 = ((x425|(x426|x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	volatile int16_t x430 = -81;
	int8_t x431 = -1;
	int8_t x432 = 0;
	static int32_t t107 = 171066;

    t107 = ((x429|(x430|x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x434 = 0U;
	volatile int8_t x435 = INT8_MIN;
	int8_t x436 = -1;

    t108 = ((x433|(x434|x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	int8_t x438 = 5;
	uint64_t x439 = 40095LLU;
	int8_t x440 = -1;

    t109 = ((x437|(x438|x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 1105816170LLU;
	uint16_t x442 = 31730U;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;
	static int32_t t110 = 11;

    t110 = ((x441|(x442|x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	volatile int16_t x446 = -1;
	int32_t x447 = 45607435;
	int8_t x448 = INT8_MAX;
	volatile int32_t t111 = -8;

    t111 = ((x445|(x446|x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	volatile int8_t x451 = -1;
	int16_t x452 = -1;

    t112 = ((x449|(x450|x451))>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = 374226538;
	int16_t x454 = -1;
	int32_t x455 = INT32_MIN;

    t113 = ((x453|(x454|x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	static uint16_t x460 = UINT16_MAX;
	volatile int32_t t114 = 0;

    t114 = ((x457|(x458|x459))>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 142LLU;
	int64_t x464 = 12209226759LL;
	volatile int32_t t115 = 5;

    t115 = ((x461|(x462|x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = 1019;
	int32_t x466 = INT32_MIN;
	static uint8_t x467 = UINT8_MAX;
	uint32_t x468 = UINT32_MAX;

    t116 = ((x465|(x466|x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x470 = 35U;
	static uint16_t x472 = 7591U;

    t117 = ((x469|(x470|x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	uint32_t x474 = 38025U;
	int16_t x475 = -2;
	uint32_t x476 = 161562U;
	volatile int32_t t118 = 0;

    t118 = ((x473|(x474|x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MIN;
	static volatile int16_t x479 = INT16_MIN;
	int64_t x480 = 23332304381679LL;
	volatile int32_t t119 = -1;

    t119 = ((x477|(x478|x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x482 = -1LL;
	volatile int32_t x483 = INT32_MAX;
	int64_t x484 = INT64_MAX;
	volatile int32_t t120 = -1985;

    t120 = ((x481|(x482|x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 1U;
	volatile uint32_t x486 = 16351241U;
	static volatile int8_t x487 = -8;
	volatile uint8_t x488 = UINT8_MAX;
	int32_t t121 = 30675;

    t121 = ((x485|(x486|x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x491 = UINT64_MAX;
	static volatile int32_t t122 = 0;

    t122 = ((x489|(x490|x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int8_t x494 = INT8_MIN;
	volatile int64_t x495 = 12687019809560606LL;

    t123 = ((x493|(x494|x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x498 = -1LL;
	volatile int16_t x499 = -1;
	static int16_t x500 = -1047;
	volatile int32_t t124 = 188271537;

    t124 = ((x497|(x498|x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = 1;
	static volatile int64_t x503 = -34LL;
	int16_t x504 = INT16_MIN;
	int32_t t125 = 1069744630;

    t125 = ((x501|(x502|x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x507 = -1LL;
	int64_t x508 = -1LL;
	int32_t t126 = -1434;

    t126 = ((x505|(x506|x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x509 = UINT64_MAX;
	int32_t x510 = 96064;
	int32_t x511 = -961747626;
	volatile int32_t t127 = 283;

    t127 = ((x509|(x510|x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x515 = 2966738LLU;
	int8_t x516 = -25;

    t128 = ((x513|(x514|x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -11675330456179277LL;
	int16_t x519 = -5;
	int16_t x520 = INT16_MIN;
	int32_t t129 = 246;

    t129 = ((x517|(x518|x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	static int8_t x522 = -32;
	volatile int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MIN;
	int32_t t130 = -15;

    t130 = ((x521|(x522|x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 29;
	int32_t x527 = -3613;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = 53;

    t131 = ((x525|(x526|x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint64_t x530 = 3473742LLU;
	volatile int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MIN;
	static int32_t t132 = -112260;

    t132 = ((x529|(x530|x531))>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	static int32_t x534 = -1;
	volatile int32_t t133 = -2748686;

    t133 = ((x533|(x534|x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MIN;
	static volatile int32_t t134 = -1;

    t134 = ((x537|(x538|x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = INT64_MAX;
	uint64_t x543 = UINT64_MAX;
	uint8_t x544 = UINT8_MAX;
	int32_t t135 = 798488;

    t135 = ((x541|(x542|x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = -1;
	uint64_t x546 = 91220LLU;
	static uint32_t x548 = 1469U;
	volatile int32_t t136 = 18991;

    t136 = ((x545|(x546|x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = INT32_MAX;
	static int64_t x550 = INT64_MIN;
	static int32_t x551 = -2648400;
	volatile int32_t t137 = -7233092;

    t137 = ((x549|(x550|x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 492U;
	int32_t x554 = INT32_MIN;
	int64_t x555 = -1LL;
	int64_t x556 = -4526580082LL;
	static volatile int32_t t138 = -1386724;

    t138 = ((x553|(x554|x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	static uint64_t x558 = 29044LLU;
	int64_t x560 = INT64_MAX;

    t139 = ((x557|(x558|x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x562 = UINT8_MAX;
	volatile int32_t x563 = -1;
	volatile uint8_t x564 = UINT8_MAX;
	int32_t t140 = -206;

    t140 = ((x561|(x562|x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 3;
	static int32_t x566 = 1153;
	int32_t x567 = INT32_MIN;
	volatile int32_t x568 = INT32_MIN;
	int32_t t141 = 3965375;

    t141 = ((x565|(x566|x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 6;
	int8_t x570 = -1;
	static uint64_t x571 = 91902324523780LLU;
	int8_t x572 = INT8_MIN;
	static volatile int32_t t142 = -1;

    t142 = ((x569|(x570|x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x574 = -2LL;
	int32_t x575 = INT32_MAX;
	static uint8_t x576 = 53U;
	volatile int32_t t143 = -335064;

    t143 = ((x573|(x574|x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 21863940037840LL;
	int16_t x579 = INT16_MIN;
	int32_t x580 = -1;
	volatile int32_t t144 = 248;

    t144 = ((x577|(x578|x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -1;
	volatile int32_t x582 = INT32_MAX;
	static int8_t x583 = -1;
	int16_t x584 = 1172;
	volatile int32_t t145 = 131;

    t145 = ((x581|(x582|x583))>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int32_t x587 = -786;
	int32_t x588 = 8;
	volatile int32_t t146 = 81716906;

    t146 = ((x585|(x586|x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MAX;
	int32_t x590 = INT32_MAX;
	int16_t x592 = 1388;

    t147 = ((x589|(x590|x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = INT8_MIN;
	int32_t x594 = 712;
	uint32_t x595 = 304U;
	uint32_t x596 = 117U;

    t148 = ((x593|(x594|x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MAX;
	int64_t x599 = INT64_MIN;
	int32_t t149 = -180;

    t149 = ((x597|(x598|x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 31U;
	uint16_t x602 = 2971U;
	volatile uint8_t x603 = UINT8_MAX;
	volatile int16_t x604 = INT16_MIN;
	static int32_t t150 = -1;

    t150 = ((x601|(x602|x603))>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 39669467221LLU;
	int32_t x606 = INT32_MAX;
	static volatile int32_t t151 = 89410214;

    t151 = ((x605|(x606|x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = -1;
	volatile int8_t x610 = -1;
	volatile uint64_t x611 = UINT64_MAX;
	int32_t x612 = -3;
	int32_t t152 = 2;

    t152 = ((x609|(x610|x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile int16_t x614 = -36;
	int64_t x615 = INT64_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t153 = 16;

    t153 = ((x613|(x614|x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 19U;
	volatile uint16_t x620 = 26U;
	static volatile int32_t t154 = -484323;

    t154 = ((x617|(x618|x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x623 = INT64_MAX;
	static int64_t x624 = -1LL;
	volatile int32_t t155 = -79;

    t155 = ((x621|(x622|x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 0;
	int32_t x626 = -1;
	static int8_t x627 = INT8_MIN;
	static volatile int32_t t156 = 4688;

    t156 = ((x625|(x626|x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = 183532230;
	uint16_t x630 = 156U;
	static volatile int16_t x631 = INT16_MIN;
	uint64_t x632 = 2745LLU;
	int32_t t157 = -113328;

    t157 = ((x629|(x630|x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	uint32_t x634 = 306039U;
	static int16_t x635 = -67;
	volatile int32_t t158 = -529075;

    t158 = ((x633|(x634|x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -19220LL;
	static int16_t x638 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = 12014702;

    t159 = ((x637|(x638|x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MIN;
	static uint32_t x642 = 2U;
	static uint32_t x644 = 1996010U;

    t160 = ((x641|(x642|x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	static int64_t x648 = INT64_MIN;
	int32_t t161 = 159620731;

    t161 = ((x645|(x646|x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = 165750319169284678LL;
	volatile int64_t x650 = -2755637977475134131LL;
	int8_t x651 = INT8_MIN;
	int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 2;

    t162 = ((x649|(x650|x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = -5;
	uint16_t x654 = 5U;
	int8_t x655 = INT8_MAX;
	static volatile int32_t t163 = -2;

    t163 = ((x653|(x654|x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MIN;
	volatile int64_t x658 = -1LL;
	int32_t x659 = -101642;
	int64_t x660 = INT64_MAX;
	static volatile int32_t t164 = 226397;

    t164 = ((x657|(x658|x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -154;
	static uint16_t x662 = UINT16_MAX;
	static volatile uint64_t x663 = 13180LLU;
	uint32_t x664 = 510522U;
	int32_t t165 = -208;

    t165 = ((x661|(x662|x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x667 = -1LL;
	volatile int64_t x668 = INT64_MAX;
	static volatile int32_t t166 = 1;

    t166 = ((x665|(x666|x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = INT64_MIN;
	volatile int32_t x670 = INT32_MIN;
	uint8_t x671 = 8U;
	volatile int16_t x672 = INT16_MIN;

    t167 = ((x669|(x670|x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = 18;
	int32_t x676 = INT32_MAX;
	static volatile int32_t t168 = 911919;

    t168 = ((x673|(x674|x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 5U;
	int64_t x678 = 889555441798LL;
	volatile int32_t t169 = 1;

    t169 = ((x677|(x678|x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x681 = 63U;
	int8_t x682 = 47;
	int8_t x683 = INT8_MAX;
	int64_t x684 = 85LL;
	int32_t t170 = 796;

    t170 = ((x681|(x682|x683))>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = 10;
	int8_t x686 = 49;
	uint32_t x687 = 2U;
	uint16_t x688 = 700U;
	volatile int32_t t171 = -1039362;

    t171 = ((x685|(x686|x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 21209U;
	uint16_t x690 = UINT16_MAX;
	uint16_t x692 = 229U;
	volatile int32_t t172 = -7078985;

    t172 = ((x689|(x690|x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int16_t x694 = -25;
	int16_t x695 = INT16_MIN;
	uint64_t x696 = 186433905918049098LLU;
	static volatile int32_t t173 = 6;

    t173 = ((x693|(x694|x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -1LL;
	uint64_t x700 = UINT64_MAX;
	static int32_t t174 = 372;

    t174 = ((x697|(x698|x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = -1;
	static int64_t x703 = 8374569851LL;
	int16_t x704 = -1;

    t175 = ((x701|(x702|x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	static uint16_t x707 = 47U;
	int32_t x708 = INT32_MIN;
	int32_t t176 = -76308721;

    t176 = ((x705|(x706|x707))>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 107U;
	volatile uint8_t x710 = 2U;
	uint64_t x711 = 8461LLU;
	int64_t x712 = INT64_MIN;
	static int32_t t177 = -46927;

    t177 = ((x709|(x710|x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x714 = INT64_MIN;
	static int32_t t178 = -194993497;

    t178 = ((x713|(x714|x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	volatile uint16_t x718 = 954U;
	int8_t x719 = -1;
	volatile int32_t x720 = INT32_MAX;
	int32_t t179 = 3466;

    t179 = ((x717|(x718|x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -12388;
	static int64_t x722 = -1262031549465281512LL;
	static int8_t x723 = 13;
	volatile int16_t x724 = -1;
	int32_t t180 = 864431;

    t180 = ((x721|(x722|x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = 21;
	int64_t x726 = INT64_MIN;
	int16_t x727 = INT16_MAX;
	uint32_t x728 = UINT32_MAX;

    t181 = ((x725|(x726|x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = -1LL;
	uint16_t x731 = 59U;
	int32_t t182 = 76625;

    t182 = ((x729|(x730|x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 1140228960U;
	int16_t x734 = 6579;
	uint8_t x735 = UINT8_MAX;
	uint8_t x736 = 7U;
	volatile int32_t t183 = 140;

    t183 = ((x733|(x734|x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x738 = INT16_MIN;
	static int16_t x739 = -1;
	int32_t t184 = 1657069;

    t184 = ((x737|(x738|x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x743 = UINT32_MAX;
	int32_t x744 = -1;
	int32_t t185 = 454545406;

    t185 = ((x741|(x742|x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 5;
	uint8_t x746 = UINT8_MAX;
	static int8_t x747 = INT8_MIN;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 4065842;

    t186 = ((x745|(x746|x747))>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = INT8_MIN;
	uint64_t x751 = 3LLU;

    t187 = ((x749|(x750|x751))>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 0U;
	uint64_t x754 = 90903LLU;
	int32_t x755 = 1404250;
	int64_t x756 = -1LL;
	static int32_t t188 = 4;

    t188 = ((x753|(x754|x755))>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = 21658192LL;
	static int64_t x760 = -1LL;
	static int32_t t189 = 339357;

    t189 = ((x757|(x758|x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -1LL;
	int8_t x762 = INT8_MIN;
	volatile int32_t x763 = -1;
	int16_t x764 = -1;

    t190 = ((x761|(x762|x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -502545508LL;
	int8_t x766 = -3;
	int16_t x768 = 1;
	static volatile int32_t t191 = 1;

    t191 = ((x765|(x766|x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x770 = INT64_MIN;
	int64_t x772 = -1LL;
	volatile int32_t t192 = 13268;

    t192 = ((x769|(x770|x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = 63726548102679701LL;
	uint32_t x774 = 1749U;
	volatile int32_t t193 = -7499712;

    t193 = ((x773|(x774|x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 0LLU;
	int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MIN;
	int32_t t194 = 7848;

    t194 = ((x777|(x778|x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x784 = INT32_MIN;
	static volatile int32_t t195 = 120368058;

    t195 = ((x781|(x782|x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int64_t x786 = -272035LL;
	uint32_t x787 = 111766167U;
	int32_t t196 = 131005;

    t196 = ((x785|(x786|x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MAX;
	static uint8_t x790 = 63U;
	uint64_t x792 = 509867466797LLU;
	volatile int32_t t197 = -5836159;

    t197 = ((x789|(x790|x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MAX;
	int32_t x795 = INT32_MIN;
	uint64_t x796 = 45061252LLU;

    t198 = ((x793|(x794|x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 545263714345LLU;
	uint64_t x799 = UINT64_MAX;
	uint16_t x800 = 121U;
	int32_t t199 = 0;

    t199 = ((x797|(x798|x799))>x800);

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

