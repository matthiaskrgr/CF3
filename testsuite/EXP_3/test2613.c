
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

static int16_t x3 = INT16_MIN;
int32_t x5 = INT32_MAX;
static volatile int32_t x7 = 62155;
int16_t x12 = -1;
int32_t t3 = -1;
uint64_t x24 = 14379043LLU;
volatile int8_t x31 = INT8_MIN;
uint32_t x53 = 12U;
volatile int32_t t13 = 365;
int32_t x57 = -2;
static int16_t x58 = INT16_MIN;
int64_t x61 = INT64_MIN;
static uint16_t x62 = 26U;
uint8_t x65 = 7U;
volatile int16_t x66 = INT16_MIN;
int8_t x68 = 8;
static volatile int32_t t16 = 833;
volatile int64_t x75 = INT64_MIN;
static int32_t t21 = 2920;
uint16_t x93 = 499U;
uint64_t x96 = UINT64_MAX;
static volatile uint8_t x97 = UINT8_MAX;
uint8_t x99 = UINT8_MAX;
int16_t x106 = INT16_MIN;
volatile int32_t t26 = 14975791;
int8_t x119 = -30;
volatile int32_t t30 = 644284470;
uint64_t x129 = UINT64_MAX;
int16_t x136 = -21;
static int64_t x140 = -1LL;
volatile int32_t x149 = INT32_MAX;
int8_t x151 = 37;
uint8_t x161 = 40U;
volatile int8_t x163 = -5;
int64_t x169 = 1LL;
int32_t t42 = 48;
uint16_t x176 = UINT16_MAX;
int16_t x180 = 1;
int32_t t44 = 10;
volatile int8_t x182 = INT8_MAX;
volatile int32_t t45 = 225128;
volatile uint8_t x186 = UINT8_MAX;
int32_t x192 = INT32_MIN;
static int32_t x203 = INT32_MIN;
static int32_t t51 = -71;
static int16_t x212 = -748;
volatile int8_t x214 = INT8_MIN;
uint16_t x215 = UINT16_MAX;
static int16_t x216 = INT16_MAX;
volatile int32_t t55 = -1785820;
static int8_t x229 = -25;
volatile int16_t x240 = INT16_MIN;
static int32_t x248 = INT32_MIN;
static uint8_t x251 = 19U;
volatile uint32_t x253 = 0U;
int32_t x256 = INT32_MAX;
volatile int32_t t63 = 14;
volatile int8_t x269 = -1;
uint8_t x277 = 1U;
uint32_t x278 = 294019U;
uint8_t x280 = 1U;
int64_t x283 = 842201336908LL;
int32_t x285 = INT32_MAX;
static int8_t x295 = 1;
uint32_t x302 = UINT32_MAX;
static volatile int32_t t71 = -51408;
int32_t x316 = 65543005;
int32_t x320 = INT32_MIN;
int16_t x324 = INT16_MIN;
int8_t x334 = INT8_MIN;
uint8_t x336 = UINT8_MAX;
static uint32_t x340 = 597U;
volatile int16_t x343 = INT16_MAX;
static int32_t x346 = -1;
int8_t x347 = INT8_MIN;
int32_t x348 = INT32_MIN;
volatile int32_t t83 = 15678243;
int32_t x358 = 32744438;
int32_t x364 = -3172600;
int8_t x368 = -6;
int64_t x369 = INT64_MIN;
volatile int32_t t87 = -69692122;
int16_t x381 = INT16_MIN;
volatile int32_t t90 = 88968;
int64_t x391 = INT64_MIN;
int32_t t92 = 179886367;
int32_t x393 = INT32_MIN;
static uint16_t x416 = UINT16_MAX;
uint8_t x417 = 16U;
static int16_t x430 = INT16_MIN;
volatile int16_t x431 = INT16_MIN;
uint8_t x445 = 17U;
static uint16_t x450 = UINT16_MAX;
int64_t x454 = INT64_MAX;
uint8_t x465 = 0U;
int16_t x470 = INT16_MIN;
int32_t x472 = -811902;
int16_t x473 = INT16_MIN;
int32_t t116 = -56;
uint16_t x489 = 58U;
int16_t x497 = -1;
int32_t t119 = -752;
int32_t x502 = INT32_MAX;
uint16_t x505 = UINT16_MAX;
int64_t x508 = INT64_MAX;
int8_t x514 = INT8_MIN;
int64_t x516 = INT64_MAX;
int16_t x517 = -13949;
int64_t x523 = -1LL;
int8_t x525 = INT8_MIN;
static int32_t t125 = 1;
int8_t x529 = 0;
volatile int16_t x530 = -3160;
static volatile int64_t x532 = -1LL;
int64_t x534 = INT64_MIN;
int8_t x540 = -7;
static volatile int16_t x543 = -258;
static int8_t x553 = -1;
int32_t x557 = INT32_MAX;
int32_t t133 = -823636014;
int8_t x562 = -42;
uint32_t x566 = 899885U;
int32_t t135 = 12349607;
static int64_t x569 = -1LL;
int64_t x580 = INT64_MAX;
int32_t t140 = -18971;
int64_t x598 = INT64_MAX;
static uint32_t x599 = 2U;
volatile int32_t t144 = 48615;
int32_t x605 = INT32_MIN;
uint32_t x606 = 12U;
static int32_t x607 = INT32_MIN;
int32_t x609 = 33350;
int8_t x616 = INT8_MIN;
volatile uint64_t x631 = UINT64_MAX;
volatile uint64_t x632 = 33352639250LLU;
int16_t x635 = -1;
int32_t x637 = -40606;
static int64_t x645 = -1LL;
uint32_t x646 = UINT32_MAX;
int32_t x650 = -1;
int64_t x654 = -1LL;
volatile int32_t t156 = 12410;
int16_t x657 = INT16_MIN;
int64_t x662 = INT64_MIN;
int16_t x675 = INT16_MIN;
int32_t t161 = -63010;
uint64_t x683 = 519906441834LLU;
int64_t x684 = INT64_MIN;
static volatile int32_t t163 = 0;
int64_t x688 = -1LL;
int64_t x692 = -1LL;
volatile int32_t x695 = INT32_MIN;
int32_t t166 = 474598110;
int32_t x700 = INT32_MIN;
int8_t x706 = 4;
volatile int64_t x707 = INT64_MIN;
static int16_t x708 = -3272;
static uint32_t x710 = 51U;
static int64_t x714 = -1LL;
uint16_t x716 = 16236U;
static volatile int8_t x721 = 0;
volatile int64_t x730 = INT64_MIN;
uint8_t x738 = UINT8_MAX;
volatile int32_t x740 = INT32_MAX;
volatile int32_t t179 = -1300;
int8_t x753 = INT8_MAX;
uint32_t x763 = UINT32_MAX;
int8_t x767 = INT8_MIN;
int32_t t184 = -3614;
uint32_t x770 = 477U;
int8_t x775 = INT8_MIN;
int32_t t186 = 131862127;
static int64_t x780 = -37469349LL;
int64_t x782 = -1LL;
int8_t x788 = INT8_MIN;
int32_t t189 = -10909459;
static volatile uint64_t x789 = 78594825LLU;
static int16_t x799 = 0;
int32_t t192 = 373;
uint32_t x804 = 0U;
volatile int64_t x806 = INT64_MIN;
int16_t x810 = INT16_MAX;
int32_t x811 = INT32_MAX;
int32_t t195 = -5161;
int64_t x818 = INT64_MIN;
uint64_t x820 = 274694326259LLU;
int8_t x822 = -1;
uint32_t x826 = UINT32_MAX;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	uint32_t x4 = 441805498U;
	volatile int32_t t0 = -5;

    t0 = ((x1%x2)>(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 85;

    t1 = ((x5%x6)>(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 1;
	int16_t x10 = -1;
	volatile uint64_t x11 = 1464366LLU;
	static volatile int32_t t2 = 249387323;

    t2 = ((x9%x10)>(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	volatile int16_t x14 = 5;
	static int64_t x15 = 420LL;
	static uint32_t x16 = 7346412U;

    t3 = ((x13%x14)>(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	static int16_t x18 = -10811;
	volatile uint16_t x19 = UINT16_MAX;
	volatile int64_t x20 = -1LL;
	static volatile int32_t t4 = -236;

    t4 = ((x17%x18)>(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MAX;
	int16_t x23 = 9317;
	static int32_t t5 = -193770344;

    t5 = ((x21%x22)>(x23^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 1;
	volatile uint32_t x26 = 1U;
	int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -885652104;

    t6 = ((x25%x26)>(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 2022U;
	int32_t x30 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -8;

    t7 = ((x29%x30)>(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = 0;
	volatile int8_t x34 = INT8_MIN;
	int64_t x35 = -12748LL;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -968404372;

    t8 = ((x33%x34)>(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	volatile int32_t x39 = INT32_MAX;
	uint16_t x40 = 139U;
	int32_t t9 = 2556;

    t9 = ((x37%x38)>(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 109U;
	volatile int8_t x42 = INT8_MAX;
	static int16_t x43 = -1;
	int16_t x44 = -1;
	volatile int32_t t10 = 1;

    t10 = ((x41%x42)>(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -235LL;
	volatile uint32_t x46 = UINT32_MAX;
	static uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = -1;
	int32_t t11 = 60627538;

    t11 = ((x45%x46)>(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = -55;
	static int64_t x51 = -1LL;
	static int8_t x52 = -1;
	int32_t t12 = -3979;

    t12 = ((x49%x50)>(x51^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	static uint64_t x55 = UINT64_MAX;
	int8_t x56 = -7;

    t13 = ((x53%x54)>(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x59 = 107U;
	int64_t x60 = INT64_MAX;
	static volatile int32_t t14 = -1;

    t14 = ((x57%x58)>(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x63 = -123;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 127;

    t15 = ((x61%x62)>(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x67 = UINT8_MAX;

    t16 = ((x65%x66)>(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 49U;
	int32_t x70 = 81739221;
	uint16_t x71 = 324U;
	int64_t x72 = -318156551206271757LL;
	volatile int32_t t17 = 5924;

    t17 = ((x69%x70)>(x71^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 140;

    t18 = ((x73%x74)>(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	static volatile int64_t x78 = INT64_MIN;
	uint8_t x79 = UINT8_MAX;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = -167679540;

    t19 = ((x77%x78)>(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 13;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = UINT8_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 74215410;

    t20 = ((x81%x82)>(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	uint32_t x86 = 11U;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t x88 = INT32_MAX;

    t21 = ((x85%x86)>(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	volatile uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	volatile int8_t x92 = -1;
	static int32_t t22 = -2031670;

    t22 = ((x89%x90)>(x91^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = UINT64_MAX;
	static volatile uint8_t x95 = 13U;
	volatile int32_t t23 = 18298;

    t23 = ((x93%x94)>(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x98 = 673340835135256000LLU;
	uint8_t x100 = 3U;
	int32_t t24 = -208;

    t24 = ((x97%x98)>(x99^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x102 = -1;
	static int16_t x103 = 9;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 3;

    t25 = ((x101%x102)>(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -1;
	int16_t x107 = 10;
	int64_t x108 = INT64_MIN;

    t26 = ((x105%x106)>(x107^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	uint64_t x110 = 428LLU;
	static int64_t x111 = 30047237LL;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -2898307;

    t27 = ((x109%x110)>(x111^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	static int8_t x114 = INT8_MAX;
	static int32_t x115 = -10;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -55327054;

    t28 = ((x113%x114)>(x115^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int64_t x118 = -1LL;
	static uint64_t x120 = 105116858222479360LLU;
	static int32_t t29 = -138129950;

    t29 = ((x117%x118)>(x119^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 30350007;
	int64_t x122 = INT64_MAX;
	static int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;

    t30 = ((x121%x122)>(x123^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -430029352LL;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	int32_t t31 = 253930;

    t31 = ((x125%x126)>(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int8_t x132 = INT8_MAX;
	int32_t t32 = 1;

    t32 = ((x129%x130)>(x131^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 72263373LLU;
	volatile int32_t x134 = 84;
	uint32_t x135 = 5997723U;
	int32_t t33 = 3175;

    t33 = ((x133%x134)>(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int32_t x138 = -1;
	int8_t x139 = -34;
	volatile int32_t t34 = -17224443;

    t34 = ((x137%x138)>(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 1246U;
	uint16_t x142 = 19U;
	int32_t x143 = INT32_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = 110176490;

    t35 = ((x141%x142)>(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 2;
	volatile uint64_t x146 = 15260636158571151LLU;
	volatile uint8_t x147 = 61U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 743;

    t36 = ((x145%x146)>(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = -1;
	static int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 976;

    t37 = ((x149%x150)>(x151^x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 47U;
	uint64_t x154 = 340012061379059404LLU;
	volatile int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -2881;

    t38 = ((x153%x154)>(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint64_t x158 = 133591918594253549LLU;
	int32_t x159 = 25;
	uint8_t x160 = 36U;
	volatile int32_t t39 = -1911159;

    t39 = ((x157%x158)>(x159^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x162 = 48U;
	int8_t x164 = -1;
	volatile int32_t t40 = -14943;

    t40 = ((x161%x162)>(x163^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -6411975;
	static uint16_t x166 = 8224U;
	int64_t x167 = INT64_MAX;
	volatile uint16_t x168 = 3U;
	volatile int32_t t41 = -3;

    t41 = ((x165%x166)>(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x170 = 67177543LLU;
	static uint32_t x171 = UINT32_MAX;
	uint8_t x172 = UINT8_MAX;

    t42 = ((x169%x170)>(x171^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 0;
	int64_t x174 = 4006761LL;
	volatile int8_t x175 = INT8_MIN;
	volatile int32_t t43 = -837;

    t43 = ((x173%x174)>(x175^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = UINT16_MAX;
	volatile int64_t x178 = 137817491049155072LL;
	int16_t x179 = INT16_MIN;

    t44 = ((x177%x178)>(x179^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 58185963;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;

    t45 = ((x181%x182)>(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	static volatile int16_t x187 = 1154;
	uint32_t x188 = 10005660U;
	volatile int32_t t46 = -1353;

    t46 = ((x185%x186)>(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = UINT32_MAX;
	int8_t x190 = -6;
	int32_t x191 = INT32_MIN;
	int32_t t47 = -1744494;

    t47 = ((x189%x190)>(x191^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = -1949829;
	volatile int32_t x194 = 8317080;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 1U;
	int32_t t48 = -52531;

    t48 = ((x193%x194)>(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = 50182186648408763LL;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = UINT64_MAX;
	static int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -147146;

    t49 = ((x197%x198)>(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 152;
	volatile uint32_t x202 = UINT32_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -14356513;

    t50 = ((x201%x202)>(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 80U;
	static volatile int8_t x206 = INT8_MAX;
	static int64_t x207 = -70506LL;
	int8_t x208 = -1;

    t51 = ((x205%x206)>(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	volatile int64_t x210 = 10586678LL;
	volatile int8_t x211 = -1;
	int32_t t52 = -140524;

    t52 = ((x209%x210)>(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = INT64_MIN;
	int32_t t53 = 1;

    t53 = ((x213%x214)>(x215^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	static int8_t x218 = -55;
	uint32_t x219 = 2807U;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -5295771;

    t54 = ((x217%x218)>(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 1U;

    t55 = ((x221%x222)>(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x230 = -1LL;
	uint8_t x231 = UINT8_MAX;
	static int64_t x232 = INT64_MIN;
	int32_t t56 = 381;

    t56 = ((x229%x230)>(x231^x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x233 = 1U;
	static uint32_t x234 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -1;
	int32_t t57 = -2562507;

    t57 = ((x233%x234)>(x235^x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = -1;
	int8_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	int32_t t58 = -3;

    t58 = ((x237%x238)>(x239^x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	volatile uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t59 = 0;

    t59 = ((x241%x242)>(x243^x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = 425U;
	static uint16_t x246 = 5U;
	static int64_t x247 = -907922203369194LL;
	volatile int32_t t60 = -3064952;

    t60 = ((x245%x246)>(x247^x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = INT8_MIN;
	uint8_t x250 = 7U;
	uint64_t x252 = 112LLU;
	static volatile int32_t t61 = -3794;

    t61 = ((x249%x250)>(x251^x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x254 = INT64_MIN;
	volatile int64_t x255 = INT64_MAX;
	int32_t t62 = -11995118;

    t62 = ((x253%x254)>(x255^x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x261 = UINT64_MAX;
	static uint8_t x262 = UINT8_MAX;
	volatile int8_t x263 = -1;
	int16_t x264 = 10;

    t63 = ((x261%x262)>(x263^x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	uint32_t x266 = 44136701U;
	volatile int64_t x267 = INT64_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t64 = 3782;

    t64 = ((x265%x266)>(x267^x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x270 = 34;
	int32_t x271 = 574;
	int16_t x272 = 23;
	static int32_t t65 = -15188;

    t65 = ((x269%x270)>(x271^x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x279 = INT64_MAX;
	volatile int32_t t66 = -4;

    t66 = ((x277%x278)>(x279^x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = 286714719082982200LL;
	static int64_t x284 = INT64_MIN;
	volatile int32_t t67 = 464850;

    t67 = ((x281%x282)>(x283^x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x286 = 290127U;
	int64_t x287 = -1LL;
	static volatile uint32_t x288 = 4U;
	volatile int32_t t68 = 206597733;

    t68 = ((x285%x286)>(x287^x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t69 = -74569;

    t69 = ((x293%x294)>(x295^x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = 10U;
	int64_t x298 = -1LL;
	volatile int32_t x299 = INT32_MIN;
	volatile int8_t x300 = -27;
	volatile int32_t t70 = -40084;

    t70 = ((x297%x298)>(x299^x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MAX;
	uint8_t x303 = 2U;
	int16_t x304 = 2495;

    t71 = ((x301%x302)>(x303^x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = INT64_MIN;
	uint16_t x306 = 31662U;
	int16_t x307 = -232;
	volatile int8_t x308 = -60;
	volatile int32_t t72 = 4031241;

    t72 = ((x305%x306)>(x307^x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x313 = 5U;
	int32_t x314 = -1;
	volatile int8_t x315 = INT8_MAX;
	int32_t t73 = 1675;

    t73 = ((x313%x314)>(x315^x316));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = -1;
	volatile uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;
	volatile int32_t t74 = -56506;

    t74 = ((x317%x318)>(x319^x320));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 5U;
	int16_t x323 = -69;
	static volatile int32_t t75 = 38;

    t75 = ((x321%x322)>(x323^x324));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x325 = 597345079549207LLU;
	int8_t x326 = -7;
	uint64_t x327 = 210173LLU;
	volatile int32_t x328 = 1;
	static int32_t t76 = 2630118;

    t76 = ((x325%x326)>(x327^x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x329 = 930802LL;
	int64_t x330 = -1LL;
	volatile int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MAX;
	volatile int32_t t77 = 144;

    t77 = ((x329%x330)>(x331^x332));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x333 = 4018U;
	static int32_t x335 = -1;
	volatile int32_t t78 = -636;

    t78 = ((x333%x334)>(x335^x336));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x337 = INT32_MAX;
	int32_t x338 = INT32_MAX;
	static int8_t x339 = INT8_MIN;
	int32_t t79 = -53;

    t79 = ((x337%x338)>(x339^x340));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x341 = 4490999468897318LLU;
	uint32_t x342 = UINT32_MAX;
	static int32_t x344 = INT32_MIN;
	int32_t t80 = -689080445;

    t80 = ((x341%x342)>(x343^x344));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = INT64_MAX;
	static volatile int32_t t81 = -9206555;

    t81 = ((x345%x346)>(x347^x348));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = INT64_MIN;
	volatile int64_t x350 = 12307316586756010LL;
	int8_t x351 = 15;
	static int64_t x352 = -1LL;
	static volatile int32_t t82 = -1;

    t82 = ((x349%x350)>(x351^x352));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = INT8_MAX;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;

    t83 = ((x353%x354)>(x355^x356));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x357 = -372;
	int64_t x359 = -1LL;
	uint32_t x360 = UINT32_MAX;
	int32_t t84 = 4;

    t84 = ((x357%x358)>(x359^x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x361 = -53LL;
	int8_t x362 = INT8_MIN;
	static uint32_t x363 = UINT32_MAX;
	int32_t t85 = 644304578;

    t85 = ((x361%x362)>(x363^x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x365 = 15U;
	int8_t x366 = 1;
	uint64_t x367 = 7668923LLU;
	static int32_t t86 = -28471;

    t86 = ((x365%x366)>(x367^x368));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x370 = 3392LLU;
	static volatile int16_t x371 = INT16_MAX;
	uint8_t x372 = 86U;

    t87 = ((x369%x370)>(x371^x372));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MIN;
	static int32_t x374 = INT32_MAX;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t88 = 9086;

    t88 = ((x373%x374)>(x375^x376));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x377 = 8U;
	int16_t x378 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t89 = -1458;

    t89 = ((x377%x378)>(x379^x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x382 = -843;
	int32_t x383 = -1;
	static uint64_t x384 = 7735704927871556126LLU;

    t90 = ((x381%x382)>(x383^x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = 2398;
	int64_t x388 = INT64_MIN;
	volatile int32_t t91 = 47515483;

    t91 = ((x385%x386)>(x387^x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = 171439895;
	volatile int8_t x390 = INT8_MAX;
	static int64_t x392 = INT64_MAX;

    t92 = ((x389%x390)>(x391^x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x394 = INT8_MIN;
	static int32_t x395 = -6451;
	static int8_t x396 = 33;
	int32_t t93 = -256904518;

    t93 = ((x393%x394)>(x395^x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x397 = 1U;
	volatile int64_t x398 = -1LL;
	volatile int8_t x399 = 4;
	uint32_t x400 = 185U;
	int32_t t94 = 25268;

    t94 = ((x397%x398)>(x399^x400));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 1709229133431LLU;
	int16_t x403 = -10738;
	static int16_t x404 = INT16_MAX;
	int32_t t95 = -65;

    t95 = ((x401%x402)>(x403^x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = -1LL;
	static int32_t x406 = -1;
	int32_t x407 = -1;
	int64_t x408 = -1LL;
	static int32_t t96 = -6047;

    t96 = ((x405%x406)>(x407^x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x409 = INT64_MIN;
	static int32_t x410 = -92760;
	int8_t x411 = 8;
	volatile int16_t x412 = 1041;
	volatile int32_t t97 = 605007661;

    t97 = ((x409%x410)>(x411^x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = -1LL;
	static volatile int8_t x414 = INT8_MIN;
	uint32_t x415 = UINT32_MAX;
	int32_t t98 = 19732;

    t98 = ((x413%x414)>(x415^x416));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x418 = UINT8_MAX;
	int8_t x419 = 3;
	int64_t x420 = -1LL;
	int32_t t99 = -63039531;

    t99 = ((x417%x418)>(x419^x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MAX;
	int16_t x422 = -4615;
	int64_t x423 = INT64_MIN;
	int64_t x424 = INT64_MIN;
	int32_t t100 = 97;

    t100 = ((x421%x422)>(x423^x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x425 = INT64_MIN;
	static volatile int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	volatile uint8_t x428 = UINT8_MAX;
	static int32_t t101 = 3193882;

    t101 = ((x425%x426)>(x427^x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x429 = -114988876LL;
	int64_t x432 = 3956524LL;
	int32_t t102 = 2084546;

    t102 = ((x429%x430)>(x431^x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = INT64_MIN;
	static uint32_t x434 = 3U;
	volatile uint8_t x435 = 0U;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t103 = 632443611;

    t103 = ((x433%x434)>(x435^x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x437 = 39;
	int8_t x438 = 1;
	int16_t x439 = 14755;
	static int64_t x440 = -1LL;
	static int32_t t104 = -1052351291;

    t104 = ((x437%x438)>(x439^x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x441 = INT64_MIN;
	static uint8_t x442 = 33U;
	uint8_t x443 = 29U;
	volatile uint8_t x444 = 35U;
	int32_t t105 = -4014980;

    t105 = ((x441%x442)>(x443^x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x446 = 25LL;
	volatile uint64_t x447 = 3952089845580014LLU;
	volatile uint64_t x448 = 13407088951131358LLU;
	int32_t t106 = 32914;

    t106 = ((x445%x446)>(x447^x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	static int8_t x451 = -1;
	int8_t x452 = 14;
	int32_t t107 = -82;

    t107 = ((x449%x450)>(x451^x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = 1;
	uint8_t x455 = 36U;
	static uint64_t x456 = 10545LLU;
	static int32_t t108 = 67;

    t108 = ((x453%x454)>(x455^x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x457 = 43U;
	int8_t x458 = -1;
	int32_t x459 = -3;
	volatile int8_t x460 = -1;
	volatile int32_t t109 = -513481653;

    t109 = ((x457%x458)>(x459^x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = -1;
	static int32_t x462 = -20;
	volatile int16_t x463 = -1;
	int8_t x464 = INT8_MIN;
	static int32_t t110 = 0;

    t110 = ((x461%x462)>(x463^x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x466 = INT64_MIN;
	volatile uint16_t x467 = 3649U;
	static uint16_t x468 = 11570U;
	static volatile int32_t t111 = -8093;

    t111 = ((x465%x466)>(x467^x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x469 = 1141U;
	int16_t x471 = -1;
	static volatile int32_t t112 = 446045;

    t112 = ((x469%x470)>(x471^x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x474 = 1LL;
	static uint8_t x475 = 0U;
	volatile uint16_t x476 = 6U;
	volatile int32_t t113 = 15168473;

    t113 = ((x473%x474)>(x475^x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = 1099;
	static uint16_t x478 = 5U;
	int64_t x479 = INT64_MIN;
	int8_t x480 = -1;
	static volatile int32_t t114 = 41;

    t114 = ((x477%x478)>(x479^x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x481 = -1;
	int32_t x482 = -3;
	int32_t x483 = INT32_MAX;
	uint32_t x484 = UINT32_MAX;
	int32_t t115 = -381432547;

    t115 = ((x481%x482)>(x483^x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x485 = 1315LLU;
	volatile int8_t x486 = INT8_MAX;
	uint16_t x487 = UINT16_MAX;
	static int16_t x488 = INT16_MIN;

    t116 = ((x485%x486)>(x487^x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x490 = -1;
	volatile int8_t x491 = INT8_MAX;
	static uint16_t x492 = 4194U;
	int32_t t117 = -300366880;

    t117 = ((x489%x490)>(x491^x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x493 = 5789U;
	int32_t x494 = INT32_MAX;
	static int16_t x495 = -1;
	uint32_t x496 = 30360704U;
	static volatile int32_t t118 = -171576883;

    t118 = ((x493%x494)>(x495^x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x498 = -1;
	int8_t x499 = INT8_MAX;
	volatile int64_t x500 = INT64_MIN;

    t119 = ((x497%x498)>(x499^x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = INT32_MAX;
	int16_t x503 = INT16_MAX;
	int8_t x504 = INT8_MAX;
	static int32_t t120 = -4;

    t120 = ((x501%x502)>(x503^x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x506 = -1LL;
	volatile int16_t x507 = 130;
	static int32_t t121 = -730750824;

    t121 = ((x505%x506)>(x507^x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x513 = INT8_MIN;
	uint16_t x515 = UINT16_MAX;
	int32_t t122 = 157017130;

    t122 = ((x513%x514)>(x515^x516));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x518 = INT16_MIN;
	int16_t x519 = 11717;
	uint8_t x520 = UINT8_MAX;
	int32_t t123 = 260859;

    t123 = ((x517%x518)>(x519^x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x521 = 419U;
	static volatile int64_t x522 = INT64_MIN;
	uint16_t x524 = UINT16_MAX;
	static int32_t t124 = -1051278076;

    t124 = ((x521%x522)>(x523^x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x526 = INT32_MAX;
	uint8_t x527 = UINT8_MAX;
	int16_t x528 = -1;

    t125 = ((x525%x526)>(x527^x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x531 = -1;
	int32_t t126 = -1;

    t126 = ((x529%x530)>(x531^x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = INT16_MAX;
	static int64_t x535 = INT64_MIN;
	static uint64_t x536 = UINT64_MAX;
	volatile int32_t t127 = 28798941;

    t127 = ((x533%x534)>(x535^x536));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x537 = 37U;
	volatile int8_t x538 = INT8_MAX;
	uint8_t x539 = 0U;
	static int32_t t128 = -122101415;

    t128 = ((x537%x538)>(x539^x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x541 = 57;
	int8_t x542 = 1;
	uint32_t x544 = 5888574U;
	static int32_t t129 = 1561;

    t129 = ((x541%x542)>(x543^x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = 7;
	uint8_t x546 = 1U;
	static int64_t x547 = INT64_MIN;
	uint8_t x548 = UINT8_MAX;
	int32_t t130 = 28;

    t130 = ((x545%x546)>(x547^x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x549 = UINT8_MAX;
	int16_t x550 = -6141;
	int32_t x551 = 32;
	volatile int16_t x552 = INT16_MAX;
	volatile int32_t t131 = 88657;

    t131 = ((x549%x550)>(x551^x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x554 = UINT32_MAX;
	uint32_t x555 = 15U;
	static volatile int8_t x556 = 52;
	volatile int32_t t132 = 109888;

    t132 = ((x553%x554)>(x555^x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x558 = INT32_MAX;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = INT32_MIN;

    t133 = ((x557%x558)>(x559^x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = 1958LL;
	int32_t x563 = -6149;
	volatile uint64_t x564 = UINT64_MAX;
	int32_t t134 = -127868120;

    t134 = ((x561%x562)>(x563^x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = INT64_MAX;
	int64_t x567 = INT64_MIN;
	volatile int64_t x568 = INT64_MIN;

    t135 = ((x565%x566)>(x567^x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x570 = 2U;
	uint32_t x571 = UINT32_MAX;
	static int32_t x572 = -49668464;
	volatile int32_t t136 = 0;

    t136 = ((x569%x570)>(x571^x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x573 = -2;
	static uint64_t x574 = 3080248LLU;
	int32_t x575 = INT32_MAX;
	int64_t x576 = INT64_MIN;
	volatile int32_t t137 = 1;

    t137 = ((x573%x574)>(x575^x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = -1;
	int16_t x579 = INT16_MIN;
	static volatile int32_t t138 = 6443;

    t138 = ((x577%x578)>(x579^x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x581 = -1;
	int8_t x582 = INT8_MIN;
	static int8_t x583 = INT8_MIN;
	int32_t x584 = -1;
	static int32_t t139 = 731213;

    t139 = ((x581%x582)>(x583^x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MAX;
	int64_t x587 = -1LL;
	uint16_t x588 = UINT16_MAX;

    t140 = ((x585%x586)>(x587^x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x589 = -1;
	uint16_t x590 = UINT16_MAX;
	int32_t x591 = -14149898;
	int32_t x592 = 486915261;
	static volatile int32_t t141 = -2612;

    t141 = ((x589%x590)>(x591^x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x593 = 1517200293LLU;
	uint16_t x594 = 10U;
	static volatile int8_t x595 = -58;
	int8_t x596 = 12;
	int32_t t142 = 38;

    t142 = ((x593%x594)>(x595^x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x597 = INT8_MAX;
	int8_t x600 = INT8_MAX;
	volatile int32_t t143 = -717;

    t143 = ((x597%x598)>(x599^x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x601 = INT8_MAX;
	static int64_t x602 = INT64_MIN;
	volatile int8_t x603 = INT8_MAX;
	int16_t x604 = INT16_MIN;

    t144 = ((x601%x602)>(x603^x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x608 = -6;
	int32_t t145 = -21032;

    t145 = ((x605%x606)>(x607^x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x610 = UINT16_MAX;
	static int32_t x611 = -1;
	uint64_t x612 = 1235722724LLU;
	static volatile int32_t t146 = -202713;

    t146 = ((x609%x610)>(x611^x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	static int32_t x614 = 62187100;
	volatile int16_t x615 = 4;
	volatile int32_t t147 = -11;

    t147 = ((x613%x614)>(x615^x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x617 = -1LL;
	int32_t x618 = 54;
	static int32_t x619 = INT32_MAX;
	static uint32_t x620 = 1440U;
	static int32_t t148 = -402471856;

    t148 = ((x617%x618)>(x619^x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x621 = -5;
	int8_t x622 = INT8_MIN;
	uint16_t x623 = 5U;
	static volatile int64_t x624 = -1LL;
	int32_t t149 = -608147;

    t149 = ((x621%x622)>(x623^x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x629 = INT64_MIN;
	int16_t x630 = -1;
	volatile int32_t t150 = 3;

    t150 = ((x629%x630)>(x631^x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = -12501575808280499LL;
	volatile int64_t x634 = -1LL;
	uint8_t x636 = 1U;
	int32_t t151 = -1577;

    t151 = ((x633%x634)>(x635^x636));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x638 = INT16_MAX;
	int32_t x639 = -3634023;
	static uint16_t x640 = 531U;
	int32_t t152 = -37942;

    t152 = ((x637%x638)>(x639^x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x641 = 81U;
	int8_t x642 = INT8_MIN;
	int32_t x643 = -1;
	volatile uint64_t x644 = 16374561005LLU;
	int32_t t153 = 28858780;

    t153 = ((x641%x642)>(x643^x644));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x647 = INT64_MIN;
	static int32_t x648 = INT32_MAX;
	volatile int32_t t154 = -3598529;

    t154 = ((x645%x646)>(x647^x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x649 = -2;
	static int16_t x651 = 2;
	static int8_t x652 = INT8_MIN;
	static volatile int32_t t155 = -909623286;

    t155 = ((x649%x650)>(x651^x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = INT8_MAX;
	uint16_t x655 = UINT16_MAX;
	int16_t x656 = INT16_MIN;

    t156 = ((x653%x654)>(x655^x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x658 = INT64_MAX;
	int8_t x659 = INT8_MIN;
	volatile int8_t x660 = INT8_MAX;
	int32_t t157 = -26959;

    t157 = ((x657%x658)>(x659^x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x661 = 588U;
	volatile uint32_t x663 = 1U;
	static int16_t x664 = INT16_MAX;
	volatile int32_t t158 = 5;

    t158 = ((x661%x662)>(x663^x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = INT8_MIN;
	static int8_t x666 = -1;
	volatile int16_t x667 = -1;
	uint16_t x668 = 141U;
	volatile int32_t t159 = 1260523;

    t159 = ((x665%x666)>(x667^x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x669 = -1;
	uint32_t x670 = 1176U;
	int64_t x671 = -1LL;
	uint8_t x672 = 83U;
	int32_t t160 = 2;

    t160 = ((x669%x670)>(x671^x672));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x673 = 145U;
	int32_t x674 = -519058483;
	int64_t x676 = INT64_MIN;

    t161 = ((x673%x674)>(x675^x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x677 = -1;
	int8_t x678 = -53;
	volatile uint32_t x679 = 219U;
	volatile uint8_t x680 = 6U;
	int32_t t162 = -179;

    t162 = ((x677%x678)>(x679^x680));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = INT32_MAX;
	uint16_t x682 = 1671U;

    t163 = ((x681%x682)>(x683^x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	static uint32_t x686 = 2409334U;
	int8_t x687 = -1;
	static volatile int32_t t164 = 564832;

    t164 = ((x685%x686)>(x687^x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x689 = -1494202550364LL;
	int8_t x690 = INT8_MIN;
	uint64_t x691 = 995987146341739722LLU;
	int32_t t165 = 5;

    t165 = ((x689%x690)>(x691^x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x693 = -1;
	int32_t x694 = -1;
	uint8_t x696 = UINT8_MAX;

    t166 = ((x693%x694)>(x695^x696));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x697 = INT16_MAX;
	static uint32_t x698 = UINT32_MAX;
	uint32_t x699 = UINT32_MAX;
	volatile int32_t t167 = 3;

    t167 = ((x697%x698)>(x699^x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = INT8_MIN;
	uint8_t x702 = UINT8_MAX;
	uint32_t x703 = 114014447U;
	volatile int8_t x704 = INT8_MAX;
	volatile int32_t t168 = -62400;

    t168 = ((x701%x702)>(x703^x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x705 = INT32_MIN;
	int32_t t169 = 9732;

    t169 = ((x705%x706)>(x707^x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x709 = 6857;
	int8_t x711 = -1;
	static int64_t x712 = INT64_MIN;
	volatile int32_t t170 = -7;

    t170 = ((x709%x710)>(x711^x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = INT16_MIN;
	volatile uint64_t x715 = 1501761895705248844LLU;
	volatile int32_t t171 = -3977;

    t171 = ((x713%x714)>(x715^x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x717 = 1LL;
	int64_t x718 = -455653717183LL;
	int8_t x719 = INT8_MAX;
	int64_t x720 = -1518043681738LL;
	int32_t t172 = -12456;

    t172 = ((x717%x718)>(x719^x720));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x722 = 1932LLU;
	volatile uint16_t x723 = UINT16_MAX;
	int16_t x724 = 330;
	volatile int32_t t173 = -6423329;

    t173 = ((x721%x722)>(x723^x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x725 = INT8_MIN;
	int64_t x726 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	int32_t x728 = -1;
	int32_t t174 = 0;

    t174 = ((x725%x726)>(x727^x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = INT64_MIN;
	uint8_t x731 = 0U;
	volatile uint32_t x732 = UINT32_MAX;
	int32_t t175 = -275198178;

    t175 = ((x729%x730)>(x731^x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x733 = -27;
	uint64_t x734 = 781113849LLU;
	static volatile uint16_t x735 = UINT16_MAX;
	int16_t x736 = INT16_MIN;
	static volatile int32_t t176 = -12049;

    t176 = ((x733%x734)>(x735^x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = INT8_MAX;
	volatile int16_t x739 = INT16_MIN;
	volatile int32_t t177 = 449383;

    t177 = ((x737%x738)>(x739^x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x741 = INT64_MAX;
	int16_t x742 = 1265;
	int64_t x743 = 192469725712222LL;
	int8_t x744 = INT8_MAX;
	volatile int32_t t178 = -139;

    t178 = ((x741%x742)>(x743^x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x745 = -3;
	int8_t x746 = -7;
	uint32_t x747 = UINT32_MAX;
	volatile int32_t x748 = INT32_MIN;

    t179 = ((x745%x746)>(x747^x748));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x749 = INT16_MAX;
	uint16_t x750 = 8U;
	static int64_t x751 = INT64_MAX;
	int32_t x752 = INT32_MIN;
	int32_t t180 = 586;

    t180 = ((x749%x750)>(x751^x752));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x754 = 62660741576977LLU;
	int16_t x755 = -809;
	static int16_t x756 = INT16_MAX;
	int32_t t181 = -122044;

    t181 = ((x753%x754)>(x755^x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x757 = INT32_MIN;
	volatile int32_t x758 = -274;
	int64_t x759 = INT64_MIN;
	static uint8_t x760 = UINT8_MAX;
	static int32_t t182 = 4;

    t182 = ((x757%x758)>(x759^x760));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x761 = 6391531254984LLU;
	int16_t x762 = INT16_MIN;
	uint8_t x764 = UINT8_MAX;
	int32_t t183 = 5;

    t183 = ((x761%x762)>(x763^x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x765 = -1LL;
	static volatile int32_t x766 = -38876957;
	uint8_t x768 = 63U;

    t184 = ((x765%x766)>(x767^x768));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x769 = UINT64_MAX;
	int64_t x771 = -1LL;
	uint64_t x772 = UINT64_MAX;
	int32_t t185 = 3;

    t185 = ((x769%x770)>(x771^x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x773 = INT16_MAX;
	uint32_t x774 = 28442379U;
	int64_t x776 = INT64_MIN;

    t186 = ((x773%x774)>(x775^x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x777 = 1LL;
	int16_t x778 = -243;
	uint64_t x779 = 521239202LLU;
	static volatile int32_t t187 = -13429409;

    t187 = ((x777%x778)>(x779^x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x781 = -419074670881064000LL;
	int16_t x783 = 181;
	uint64_t x784 = UINT64_MAX;
	int32_t t188 = 84;

    t188 = ((x781%x782)>(x783^x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x785 = INT32_MIN;
	uint8_t x786 = 57U;
	int16_t x787 = INT16_MIN;

    t189 = ((x785%x786)>(x787^x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x790 = 1415U;
	uint64_t x791 = UINT64_MAX;
	int8_t x792 = 0;
	volatile int32_t t190 = 165756738;

    t190 = ((x789%x790)>(x791^x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x793 = 19U;
	int64_t x794 = -1LL;
	int64_t x795 = INT64_MIN;
	volatile int8_t x796 = -1;
	volatile int32_t t191 = 10858;

    t191 = ((x793%x794)>(x795^x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x797 = INT64_MAX;
	uint64_t x798 = 5560672336489003150LLU;
	uint8_t x800 = 14U;

    t192 = ((x797%x798)>(x799^x800));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x801 = 7U;
	int64_t x802 = INT64_MIN;
	int64_t x803 = INT64_MAX;
	volatile int32_t t193 = 111485269;

    t193 = ((x801%x802)>(x803^x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = -1;
	int32_t x807 = INT32_MAX;
	int32_t x808 = -15659664;
	static int32_t t194 = -4502830;

    t194 = ((x805%x806)>(x807^x808));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = -7100467685067981LL;
	int32_t x812 = 805967;

    t195 = ((x809%x810)>(x811^x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x813 = 1U;
	static int32_t x814 = -1;
	int32_t x815 = -5;
	int32_t x816 = INT32_MAX;
	static int32_t t196 = -51065841;

    t196 = ((x813%x814)>(x815^x816));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = -45;
	volatile int32_t x819 = INT32_MIN;
	int32_t t197 = 47193727;

    t197 = ((x817%x818)>(x819^x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x821 = UINT32_MAX;
	int8_t x823 = INT8_MIN;
	int8_t x824 = INT8_MAX;
	static volatile int32_t t198 = -137893;

    t198 = ((x821%x822)>(x823^x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x825 = 12539U;
	static uint64_t x827 = 1955LLU;
	uint16_t x828 = 597U;
	int32_t t199 = -15788730;

    t199 = ((x825%x826)>(x827^x828));

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

