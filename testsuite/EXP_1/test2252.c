
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

volatile int8_t x2 = -1;
volatile int32_t t2 = 0;
int64_t x27 = INT64_MAX;
int8_t x28 = -1;
uint64_t x29 = 2897806946447624534LLU;
volatile uint32_t t7 = 13883U;
uint32_t x37 = 1814U;
int16_t x40 = INT16_MIN;
static uint16_t x54 = 142U;
int8_t x58 = INT8_MAX;
volatile uint16_t x60 = 0U;
uint16_t x63 = 26823U;
int16_t x68 = INT16_MIN;
volatile int16_t x75 = -1;
static uint16_t x77 = UINT16_MAX;
int8_t x79 = INT8_MIN;
volatile uint64_t x80 = 4805893604033057658LLU;
int64_t x83 = 8933172884439911LL;
volatile int32_t t20 = 1229;
uint64_t x85 = UINT64_MAX;
uint32_t t21 = 118847982U;
int32_t x89 = INT32_MAX;
int32_t t22 = -1;
volatile uint64_t x94 = 331LLU;
int64_t t23 = -1805LL;
static volatile int16_t x103 = 60;
uint16_t x109 = 2U;
static uint8_t x116 = UINT8_MAX;
int32_t t28 = -1039;
int8_t x119 = INT8_MIN;
uint64_t x122 = UINT64_MAX;
static uint8_t x130 = 4U;
uint32_t x132 = 69755U;
int8_t x134 = INT8_MAX;
static int64_t x137 = INT64_MIN;
static int32_t x143 = -12507;
volatile uint32_t x163 = UINT32_MAX;
volatile int8_t x167 = INT8_MIN;
int8_t x168 = -1;
int16_t x171 = INT16_MIN;
uint32_t x172 = UINT32_MAX;
volatile int64_t t43 = -847312LL;
volatile int64_t x179 = INT64_MIN;
int8_t x182 = -23;
volatile int32_t t45 = -12;
static volatile int64_t x198 = -115019592871902LL;
static volatile int16_t x203 = 1;
uint8_t x205 = UINT8_MAX;
int16_t x211 = 169;
volatile int32_t t54 = 27;
uint16_t x225 = 454U;
uint16_t x228 = 38U;
volatile int8_t x235 = INT8_MIN;
int8_t x236 = INT8_MAX;
int32_t t58 = -493123;
int64_t x237 = -23278763153135664LL;
uint32_t t59 = 97868U;
uint16_t x243 = 4551U;
static int32_t x249 = -1;
volatile int32_t t62 = -387;
int8_t x258 = 1;
volatile int32_t t65 = 455885;
int16_t x265 = INT16_MAX;
static int64_t t66 = -98401021758LL;
uint8_t x270 = 42U;
int32_t t67 = -4805;
int32_t x275 = INT32_MAX;
uint64_t x277 = UINT64_MAX;
uint64_t x289 = UINT64_MAX;
int16_t x297 = INT16_MIN;
int64_t x300 = 906395861006375912LL;
volatile int64_t t75 = 500357784LL;
int64_t x315 = INT64_MIN;
uint16_t x318 = 36U;
volatile int32_t t79 = 10;
static uint8_t x321 = 0U;
static int8_t x324 = 1;
uint8_t x326 = UINT8_MAX;
uint32_t x333 = UINT32_MAX;
volatile int64_t t83 = 1337LL;
int32_t t84 = 644;
volatile int64_t x343 = INT64_MIN;
uint8_t x345 = UINT8_MAX;
int8_t x347 = INT8_MIN;
int64_t x350 = INT64_MIN;
volatile int32_t t87 = 7285156;
volatile int16_t x356 = INT16_MIN;
volatile int32_t t88 = 116089999;
volatile int32_t t89 = 67454;
int8_t x363 = 11;
int8_t x366 = -1;
int16_t x378 = INT16_MIN;
static int64_t x379 = INT64_MAX;
static volatile int64_t x380 = -29LL;
volatile int64_t t94 = 3702402245LL;
int16_t x384 = 4;
int8_t x385 = INT8_MIN;
int64_t x386 = -6277995044335667LL;
int32_t t96 = -2633;
volatile uint32_t x392 = 448874275U;
int64_t t98 = 10493414195181190LL;
int32_t x397 = INT32_MAX;
int8_t x399 = INT8_MAX;
static volatile int32_t x430 = -7;
volatile int32_t t107 = -13450;
uint16_t x433 = 8U;
int16_t x435 = -1589;
static volatile int8_t x436 = INT8_MIN;
int64_t x443 = -132LL;
static uint8_t x444 = 16U;
volatile int32_t t110 = -326089266;
int64_t x448 = INT64_MIN;
int64_t x456 = 505347462614LL;
uint16_t x460 = 4U;
uint64_t x461 = UINT64_MAX;
volatile int16_t x464 = -839;
uint64_t x468 = 143674245506250939LLU;
volatile int64_t x476 = INT64_MIN;
int64_t t118 = 529364427537LL;
uint8_t x477 = 0U;
int16_t x487 = INT16_MIN;
uint16_t x488 = 1U;
int8_t x498 = 3;
int8_t x499 = INT8_MAX;
int32_t x503 = INT32_MIN;
volatile int16_t x510 = 254;
int8_t x516 = -15;
int8_t x518 = -1;
volatile int32_t t129 = 1;
static int64_t t130 = 17991356534194458LL;
int8_t x527 = -12;
static int64_t x528 = INT64_MIN;
static volatile int64_t t131 = -957306418LL;
uint32_t t133 = 253U;
volatile uint16_t x537 = 2U;
volatile int32_t t134 = 10624347;
int32_t t136 = 417819;
int8_t x555 = INT8_MIN;
volatile uint8_t x561 = 23U;
uint32_t x564 = UINT32_MAX;
int16_t x565 = INT16_MAX;
uint64_t x576 = UINT64_MAX;
int64_t x577 = INT64_MAX;
volatile int32_t x578 = -33085355;
int16_t x580 = -215;
int64_t x583 = -1LL;
static int32_t x584 = -1051417443;
volatile int32_t t145 = -185993831;
static volatile int64_t x587 = -7039859LL;
int16_t x593 = INT16_MAX;
static int32_t x598 = -160418640;
volatile int32_t t150 = 20315392;
int64_t x613 = -1LL;
volatile int32_t t153 = 0;
int64_t x618 = INT64_MIN;
static volatile uint64_t x619 = 14340491420LLU;
uint32_t x621 = 2088903303U;
int8_t x624 = -1;
int32_t x625 = INT32_MAX;
static volatile int64_t t156 = -2505LL;
static int32_t t157 = -15936442;
volatile uint16_t x636 = 39U;
volatile uint64_t x637 = 170926646027LLU;
uint64_t x639 = 3LLU;
volatile int8_t x644 = 52;
int64_t x645 = -1048051542240590681LL;
int8_t x647 = INT8_MIN;
uint16_t x653 = 105U;
int32_t x656 = INT32_MIN;
int8_t x658 = INT8_MAX;
int32_t t165 = 153672980;
int32_t x669 = INT32_MIN;
static uint32_t x673 = UINT32_MAX;
static volatile int32_t t168 = -93563;
int8_t x684 = 1;
uint32_t x687 = UINT32_MAX;
uint16_t x688 = UINT16_MAX;
int32_t t172 = 1550799;
int8_t x697 = INT8_MIN;
int64_t x700 = INT64_MIN;
volatile int64_t t174 = 2697839251030914359LL;
int8_t x703 = -15;
volatile int32_t t175 = 494;
int32_t t177 = 30342762;
uint64_t x715 = 1LLU;
int16_t x721 = INT16_MIN;
uint8_t x725 = 85U;
int8_t x728 = INT8_MAX;
static volatile int8_t x730 = INT8_MIN;
int32_t x733 = INT32_MIN;
int32_t x735 = INT32_MIN;
uint8_t x740 = UINT8_MAX;
volatile int32_t t184 = -127143131;
int16_t x742 = -1;
uint8_t x745 = 2U;
uint32_t x746 = 8142U;
int16_t x748 = -1;
int32_t t186 = 7081;
int8_t x756 = -1;
static int64_t x758 = 140127538023488LL;
int64_t x761 = INT64_MIN;
int64_t x762 = 65132767644001LL;
static int8_t x764 = INT8_MAX;
uint64_t x766 = UINT64_MAX;
uint32_t t191 = 76901076U;
int8_t x776 = INT8_MAX;
int64_t x777 = INT64_MIN;
int16_t x778 = -1;
static int32_t x780 = INT32_MAX;
uint64_t x784 = 17452634797893306LLU;
volatile uint64_t x791 = 1124986542980962817LLU;
static int64_t t197 = -223391332607099LL;
volatile int32_t t199 = 1916733;


void f0(void) {
    	volatile uint32_t x1 = 14678662U;
	int16_t x3 = 2;
	uint32_t x4 = UINT32_MAX;
	static uint32_t t0 = 1U;

    t0 = (((x1&x2)!=x3)&x4);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	int8_t x8 = 62;
	volatile int32_t t1 = -779734316;

    t1 = (((x5&x6)!=x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 75U;
	int16_t x10 = -252;
	uint32_t x11 = 23704033U;
	int8_t x12 = -6;

    t2 = (((x9&x10)!=x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static int16_t x14 = 3683;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = INT64_MIN;
	static int64_t t3 = -40LL;

    t3 = (((x13&x14)!=x15)&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 28062395911LLU;
	int64_t x18 = 31137449365LL;
	static int8_t x19 = -1;
	static uint32_t x20 = 88U;
	static uint32_t t4 = 14196U;

    t4 = (((x17&x18)!=x19)&x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile int16_t x22 = -1;
	static int32_t x23 = INT32_MAX;
	int8_t x24 = -1;
	volatile int32_t t5 = -22297327;

    t5 = (((x21&x22)!=x23)&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = 3340LL;
	volatile int32_t t6 = -25343;

    t6 = (((x25&x26)!=x27)&x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x30 = UINT32_MAX;
	int64_t x31 = -1LL;
	volatile uint32_t x32 = 390U;

    t7 = (((x29&x30)!=x31)&x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = 1;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = -1;
	volatile int32_t t8 = -3888453;

    t8 = (((x33&x34)!=x35)&x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 700046LLU;
	static int64_t x39 = INT64_MAX;
	int32_t t9 = -177908;

    t9 = (((x37&x38)!=x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	volatile int32_t x42 = INT32_MAX;
	uint32_t x43 = 1431U;
	static uint16_t x44 = UINT16_MAX;
	int32_t t10 = -12;

    t10 = (((x41&x42)!=x43)&x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 76;
	int8_t x46 = 1;
	static int32_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 634U;

    t11 = (((x45&x46)!=x47)&x48);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	static uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 0U;
	volatile int32_t x52 = -352;
	int32_t t12 = 56;

    t12 = (((x49&x50)!=x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	uint32_t x55 = 1278U;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 33237344;

    t13 = (((x53&x54)!=x55)&x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 1;
	int8_t x59 = INT8_MIN;
	int32_t t14 = -1932;

    t14 = (((x57&x58)!=x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -966LL;
	int8_t x62 = 0;
	volatile int64_t x64 = -1LL;
	int64_t t15 = 41LL;

    t15 = (((x61&x62)!=x63)&x64);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MAX;
	static int32_t x67 = 0;
	static volatile int32_t t16 = 2304108;

    t16 = (((x65&x66)!=x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 0;
	int32_t x70 = -1;
	uint8_t x71 = 27U;
	int64_t x72 = INT64_MIN;
	int64_t t17 = -14023LL;

    t17 = (((x69&x70)!=x71)&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 7984067788602LLU;
	int32_t x74 = INT32_MIN;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = -31871;

    t18 = (((x73&x74)!=x75)&x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MIN;
	volatile uint64_t t19 = 9638691057LLU;

    t19 = (((x77&x78)!=x79)&x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	static int32_t x82 = -1;
	static volatile int16_t x84 = -17;

    t20 = (((x81&x82)!=x83)&x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = -1;
	static int64_t x87 = -758094837821548LL;
	static uint32_t x88 = 189258U;

    t21 = (((x85&x86)!=x87)&x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x90 = 10306094181379918LLU;
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;

    t22 = (((x89&x90)!=x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 341U;
	uint64_t x95 = 1048792557LLU;
	int64_t x96 = INT64_MIN;

    t23 = (((x93&x94)!=x95)&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	static int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 8748519094189166426LLU;
	uint64_t t24 = 1030315435405297431LLU;

    t24 = (((x97&x98)!=x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int16_t x104 = -1;
	int32_t t25 = 273;

    t25 = (((x101&x102)!=x103)&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = -1;
	int64_t x106 = -206611736415327LL;
	uint32_t x107 = 191U;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = -43686935036449LL;

    t26 = (((x105&x106)!=x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x110 = 18975U;
	int64_t x111 = 1053964168757LL;
	int16_t x112 = -1;
	volatile int32_t t27 = 52655;

    t27 = (((x109&x110)!=x111)&x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x113 = -1LL;
	int16_t x114 = -1;
	static int32_t x115 = INT32_MIN;

    t28 = (((x113&x114)!=x115)&x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	int16_t x118 = 1;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -258969LL;

    t29 = (((x117&x118)!=x119)&x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 2U;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = 441;
	int32_t t30 = 855261309;

    t30 = (((x121&x122)!=x123)&x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	static uint16_t x127 = 881U;
	int16_t x128 = -1;
	volatile int32_t t31 = 685761;

    t31 = (((x125&x126)!=x127)&x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = 1LLU;
	static int64_t x131 = 111992515LL;
	uint32_t t32 = 1066022682U;

    t32 = (((x129&x130)!=x131)&x132);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 438927LL;
	uint8_t x135 = 7U;
	uint32_t x136 = 47U;
	static volatile uint32_t t33 = 817U;

    t33 = (((x133&x134)!=x135)&x136);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x138 = 85U;
	uint8_t x139 = 57U;
	static int8_t x140 = INT8_MAX;
	int32_t t34 = -41;

    t34 = (((x137&x138)!=x139)&x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -4;
	int32_t x142 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -1;

    t35 = (((x141&x142)!=x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 1U;
	static int32_t x146 = -158490;
	static uint32_t x147 = 145U;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 1724985585LLU;

    t36 = (((x145&x146)!=x147)&x148);

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	int32_t x152 = -1;
	static volatile int32_t t37 = -203418076;

    t37 = (((x149&x150)!=x151)&x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	volatile int16_t x154 = INT16_MIN;
	static volatile int8_t x155 = -39;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 90805329;

    t38 = (((x153&x154)!=x155)&x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 464997957LLU;
	volatile int8_t x158 = 0;
	uint16_t x159 = UINT16_MAX;
	volatile uint8_t x160 = UINT8_MAX;
	static int32_t t39 = -23;

    t39 = (((x157&x158)!=x159)&x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	int16_t x162 = 1;
	uint64_t x164 = 187712280804LLU;
	volatile uint64_t t40 = 5795707LLU;

    t40 = (((x161&x162)!=x163)&x164);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -26;
	int8_t x166 = INT8_MIN;
	int32_t t41 = -1009826;

    t41 = (((x165&x166)!=x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = 103U;
	static int64_t x170 = INT64_MAX;
	uint32_t t42 = 0U;

    t42 = (((x169&x170)!=x171)&x172);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -1LL;

    t43 = (((x173&x174)!=x175)&x176);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MIN;
	uint8_t x180 = 38U;
	volatile int32_t t44 = 732;

    t44 = (((x177&x178)!=x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	static uint32_t x183 = 602896U;
	int16_t x184 = INT16_MIN;

    t45 = (((x181&x182)!=x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = UINT32_MAX;
	volatile int8_t x186 = -1;
	volatile uint16_t x187 = UINT16_MAX;
	static uint64_t x188 = 75483805186417LLU;
	uint64_t t46 = 69406064299216670LLU;

    t46 = (((x185&x186)!=x187)&x188);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	uint64_t x190 = UINT64_MAX;
	volatile int8_t x191 = -2;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 975528353;

    t47 = (((x189&x190)!=x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = 1;
	int32_t x195 = 16;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 1;

    t48 = (((x193&x194)!=x195)&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	volatile int32_t x199 = INT32_MIN;
	volatile int16_t x200 = INT16_MAX;
	int32_t t49 = -5516942;

    t49 = (((x197&x198)!=x199)&x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = -30825088146503LL;
	static volatile int64_t x202 = -13LL;
	int16_t x204 = INT16_MAX;
	static volatile int32_t t50 = 64689169;

    t50 = (((x201&x202)!=x203)&x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x206 = 11U;
	uint8_t x207 = UINT8_MAX;
	static int64_t x208 = -32246618809603LL;
	int64_t t51 = -99682632LL;

    t51 = (((x205&x206)!=x207)&x208);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = 104839128677717LL;
	uint64_t x210 = 134921778067927LLU;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 980037666;

    t52 = (((x209&x210)!=x211)&x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x213 = UINT8_MAX;
	volatile int64_t x214 = INT64_MIN;
	static int16_t x215 = INT16_MIN;
	static volatile int32_t x216 = 656929040;
	int32_t t53 = 34686;

    t53 = (((x213&x214)!=x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 27161U;
	int64_t x218 = INT64_MIN;
	static uint32_t x219 = 21022U;
	int16_t x220 = 140;

    t54 = (((x217&x218)!=x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = -683866798903112863LL;
	volatile int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 930;

    t55 = (((x221&x222)!=x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x226 = -8086LL;
	int64_t x227 = INT64_MIN;
	static int32_t t56 = 127069;

    t56 = (((x225&x226)!=x227)&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 399LLU;
	static int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MAX;
	int32_t t57 = -61308051;

    t57 = (((x229&x230)!=x231)&x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	int64_t x234 = -1LL;

    t58 = (((x233&x234)!=x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MAX;
	int16_t x239 = 63;
	volatile uint32_t x240 = 4504U;

    t59 = (((x237&x238)!=x239)&x240);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MAX;
	static int16_t x242 = -1;
	int64_t x244 = INT64_MIN;
	int64_t t60 = -4933627LL;

    t60 = (((x241&x242)!=x243)&x244);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x245 = 1;
	static volatile int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 0;

    t61 = (((x245&x246)!=x247)&x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = 78U;
	static int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;

    t62 = (((x249&x250)!=x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x253 = 10302086U;
	int64_t x254 = INT64_MIN;
	static uint8_t x255 = 32U;
	uint8_t x256 = 33U;
	int32_t t63 = -1;

    t63 = (((x253&x254)!=x255)&x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = INT64_MIN;
	static volatile int16_t x259 = -1;
	int64_t x260 = 107761109768973576LL;
	volatile int64_t t64 = 100544031055782LL;

    t64 = (((x257&x258)!=x259)&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 21;
	static uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MIN;
	static int16_t x264 = -8442;

    t65 = (((x261&x262)!=x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 103U;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MAX;

    t66 = (((x265&x266)!=x267)&x268);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 631154949125855LLU;
	static uint16_t x271 = 152U;
	int32_t x272 = INT32_MIN;

    t67 = (((x269&x270)!=x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = -10881;
	static uint16_t x274 = 106U;
	uint8_t x276 = 0U;
	volatile int32_t t68 = -4438402;

    t68 = (((x273&x274)!=x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = -1;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = -1;
	int32_t t69 = 1;

    t69 = (((x277&x278)!=x279)&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 1;
	volatile int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 2935013;
	int32_t t70 = -1;

    t70 = (((x281&x282)!=x283)&x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;
	static int32_t t71 = -13;

    t71 = (((x285&x286)!=x287)&x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = INT8_MAX;
	uint32_t x291 = 1828361546U;
	volatile int64_t x292 = INT64_MIN;
	int64_t t72 = 63700471367322LL;

    t72 = (((x289&x290)!=x291)&x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	int32_t x294 = INT32_MAX;
	uint16_t x295 = 15473U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -3220;

    t73 = (((x293&x294)!=x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MAX;
	volatile int64_t t74 = -22251189702LL;

    t74 = (((x297&x298)!=x299)&x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = -131;
	static int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;

    t75 = (((x301&x302)!=x303)&x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	volatile int16_t x306 = 335;
	uint64_t x307 = 545LLU;
	volatile int32_t x308 = INT32_MIN;
	static volatile int32_t t76 = 83612516;

    t76 = (((x305&x306)!=x307)&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -5;
	int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -41;
	static int32_t t77 = 0;

    t77 = (((x309&x310)!=x311)&x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 820123732883LLU;
	static volatile int16_t x314 = INT16_MIN;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 671LL;

    t78 = (((x313&x314)!=x315)&x316);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	volatile int8_t x319 = 57;
	int32_t x320 = -1;

    t79 = (((x317&x318)!=x319)&x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x322 = UINT32_MAX;
	static uint32_t x323 = UINT32_MAX;
	int32_t t80 = -3;

    t80 = (((x321&x322)!=x323)&x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = -61;
	volatile uint32_t x327 = 421U;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -1578301;

    t81 = (((x325&x326)!=x327)&x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 9U;
	static int8_t x330 = -1;
	int64_t x331 = 66295951LL;
	volatile int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -8;

    t82 = (((x329&x330)!=x331)&x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x334 = 17458343148447142LL;
	uint32_t x335 = UINT32_MAX;
	int64_t x336 = -104388LL;

    t83 = (((x333&x334)!=x335)&x336);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x337 = 36U;
	int64_t x338 = -101648LL;
	int16_t x339 = -34;
	uint16_t x340 = 4211U;

    t84 = (((x337&x338)!=x339)&x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = 161409;
	static int32_t x342 = INT32_MIN;
	static volatile int16_t x344 = -17;
	int32_t t85 = -1226;

    t85 = (((x341&x342)!=x343)&x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x346 = 1;
	volatile int16_t x348 = -9;
	volatile int32_t t86 = -68491;

    t86 = (((x345&x346)!=x347)&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	static int64_t x351 = -1LL;
	int16_t x352 = 58;

    t87 = (((x349&x350)!=x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = UINT16_MAX;
	int16_t x354 = 2181;
	int64_t x355 = 84801LL;

    t88 = (((x353&x354)!=x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint32_t x358 = 0U;
	volatile int8_t x359 = INT8_MAX;
	int32_t x360 = -1;

    t89 = (((x357&x358)!=x359)&x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int16_t x362 = -4884;
	int16_t x364 = 1;
	volatile int32_t t90 = 2;

    t90 = (((x361&x362)!=x363)&x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	static int32_t x367 = 345832009;
	uint64_t x368 = 12189616394741LLU;
	uint64_t t91 = 475803460LLU;

    t91 = (((x365&x366)!=x367)&x368);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x369 = UINT32_MAX;
	static int8_t x370 = INT8_MIN;
	uint16_t x371 = 24775U;
	uint16_t x372 = 3U;
	int32_t t92 = 0;

    t92 = (((x369&x370)!=x371)&x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = UINT8_MAX;
	int16_t x374 = -1;
	uint8_t x375 = 88U;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -856590872;

    t93 = (((x373&x374)!=x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;

    t94 = (((x377&x378)!=x379)&x380);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -7;
	int16_t x382 = -1;
	volatile uint64_t x383 = 4147043196986066LLU;
	static volatile int32_t t95 = -434;

    t95 = (((x381&x382)!=x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x387 = INT32_MAX;
	static int8_t x388 = -1;

    t96 = (((x385&x386)!=x387)&x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 570U;
	int32_t x390 = -1;
	int64_t x391 = 16997626111341LL;
	uint32_t t97 = 11U;

    t97 = (((x389&x390)!=x391)&x392);

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	int16_t x394 = -2611;
	uint32_t x395 = 25416519U;
	int64_t x396 = INT64_MIN;

    t98 = (((x393&x394)!=x395)&x396);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x398 = UINT16_MAX;
	uint64_t x400 = 13902414LLU;
	volatile uint64_t t99 = 339730627LLU;

    t99 = (((x397&x398)!=x399)&x400);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	static volatile uint16_t x402 = 28750U;
	volatile uint16_t x403 = UINT16_MAX;
	int32_t x404 = -12831;
	static volatile int32_t t100 = 7691;

    t100 = (((x401&x402)!=x403)&x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = -24;
	int64_t x407 = 3841978LL;
	static volatile uint32_t x408 = 1728U;
	static uint32_t t101 = 5U;

    t101 = (((x405&x406)!=x407)&x408);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	uint16_t x410 = UINT16_MAX;
	static int8_t x411 = INT8_MIN;
	static uint8_t x412 = 21U;
	static int32_t t102 = 1;

    t102 = (((x409&x410)!=x411)&x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	volatile int8_t x414 = INT8_MIN;
	volatile int16_t x415 = INT16_MIN;
	volatile int32_t x416 = -1;
	int32_t t103 = -29;

    t103 = (((x413&x414)!=x415)&x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x417 = 1306U;
	uint16_t x418 = UINT16_MAX;
	volatile int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 17164736;

    t104 = (((x417&x418)!=x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MAX;
	uint16_t x422 = 27U;
	uint32_t x423 = 12U;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t105 = 93;

    t105 = (((x421&x422)!=x423)&x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x425 = INT16_MIN;
	volatile int32_t x426 = INT32_MIN;
	uint16_t x427 = 7U;
	volatile int16_t x428 = -1;
	volatile int32_t t106 = 984;

    t106 = (((x425&x426)!=x427)&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -25115800359LL;
	volatile int32_t x431 = INT32_MAX;
	volatile int16_t x432 = 2;

    t107 = (((x429&x430)!=x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x434 = -1LL;
	volatile int32_t t108 = -2096;

    t108 = (((x433&x434)!=x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x437 = 5U;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MAX;
	int64_t x440 = -127517484LL;
	int64_t t109 = 265LL;

    t109 = (((x437&x438)!=x439)&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = INT64_MIN;
	int16_t x442 = INT16_MAX;

    t110 = (((x441&x442)!=x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x446 = INT8_MIN;
	uint64_t x447 = 20358021566LLU;
	volatile int64_t t111 = -102571069531LL;

    t111 = (((x445&x446)!=x447)&x448);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	volatile int8_t x450 = INT8_MAX;
	volatile uint16_t x451 = UINT16_MAX;
	static uint64_t x452 = 51188371664248456LLU;
	volatile uint64_t t112 = 989279LLU;

    t112 = (((x449&x450)!=x451)&x452);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 19U;
	int64_t x454 = -1LL;
	int32_t x455 = INT32_MIN;
	static volatile int64_t t113 = 135819859677403655LL;

    t113 = (((x453&x454)!=x455)&x456);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x458 = -675700;
	int32_t x459 = -156195783;
	volatile int32_t t114 = 6580545;

    t114 = (((x457&x458)!=x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	int32_t x463 = 45498;
	int32_t t115 = 695567;

    t115 = (((x461&x462)!=x463)&x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	static int64_t x466 = INT64_MIN;
	uint64_t x467 = UINT64_MAX;
	volatile uint64_t t116 = 11237408872LLU;

    t116 = (((x465&x466)!=x467)&x468);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -1;
	uint64_t x470 = 9LLU;
	int64_t x471 = -1LL;
	static int64_t x472 = -1LL;
	static int64_t t117 = 845032582LL;

    t117 = (((x469&x470)!=x471)&x472);

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x473 = 0U;
	uint16_t x474 = 3U;
	static volatile uint8_t x475 = 90U;

    t118 = (((x473&x474)!=x475)&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x478 = INT16_MIN;
	int64_t x479 = INT64_MIN;
	volatile int8_t x480 = INT8_MAX;
	int32_t t119 = -284;

    t119 = (((x477&x478)!=x479)&x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = INT64_MAX;
	uint32_t x482 = UINT32_MAX;
	uint64_t x483 = 23960LLU;
	uint8_t x484 = 5U;
	int32_t t120 = -9430;

    t120 = (((x481&x482)!=x483)&x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	volatile int64_t x486 = INT64_MIN;
	volatile int32_t t121 = -4723;

    t121 = (((x485&x486)!=x487)&x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MAX;
	volatile int8_t x491 = 1;
	uint32_t x492 = UINT32_MAX;
	uint32_t t122 = 929U;

    t122 = (((x489&x490)!=x491)&x492);

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -7227951842LL;
	int64_t x494 = -54344612964990LL;
	uint32_t x495 = UINT32_MAX;
	static volatile int32_t x496 = INT32_MAX;
	int32_t t123 = 0;

    t123 = (((x493&x494)!=x495)&x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	int32_t x500 = INT32_MIN;
	volatile int32_t t124 = -47712;

    t124 = (((x497&x498)!=x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	volatile int16_t x502 = INT16_MAX;
	int8_t x504 = INT8_MAX;
	volatile int32_t t125 = 98555066;

    t125 = (((x501&x502)!=x503)&x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static volatile int16_t x506 = -1;
	int32_t x507 = -17265429;
	uint8_t x508 = 16U;
	int32_t t126 = 2;

    t126 = (((x505&x506)!=x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = UINT8_MAX;
	static int32_t x511 = INT32_MAX;
	int32_t x512 = -3;
	volatile int32_t t127 = 3434;

    t127 = (((x509&x510)!=x511)&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	int16_t x514 = INT16_MIN;
	static int32_t x515 = INT32_MIN;
	int32_t t128 = 13497;

    t128 = (((x513&x514)!=x515)&x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = 268424513;
	volatile int32_t x519 = INT32_MIN;
	int16_t x520 = INT16_MAX;

    t129 = (((x517&x518)!=x519)&x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 3U;
	static uint64_t x522 = 4285290533422679782LLU;
	static uint8_t x523 = 21U;
	int64_t x524 = INT64_MAX;

    t130 = (((x521&x522)!=x523)&x524);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = -2;
	int64_t x526 = INT64_MAX;

    t131 = (((x525&x526)!=x527)&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 217U;
	int64_t x530 = INT64_MIN;
	uint32_t x531 = 5945U;
	int32_t x532 = INT32_MIN;
	int32_t t132 = 3309;

    t132 = (((x529&x530)!=x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = 12361887LLU;
	uint8_t x534 = 49U;
	uint16_t x535 = UINT16_MAX;
	uint32_t x536 = 1823U;

    t133 = (((x533&x534)!=x535)&x536);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	uint64_t x539 = UINT64_MAX;
	uint8_t x540 = UINT8_MAX;

    t134 = (((x537&x538)!=x539)&x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 280669239882279LLU;
	uint64_t x542 = 857LLU;
	static int32_t x543 = -149205061;
	volatile int64_t x544 = INT64_MIN;
	static int64_t t135 = -75959586003LL;

    t135 = (((x541&x542)!=x543)&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = 0LL;
	static int64_t x547 = -376182883LL;
	int8_t x548 = -21;

    t136 = (((x545&x546)!=x547)&x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -1LL;
	int16_t x550 = INT16_MAX;
	int8_t x551 = -14;
	int16_t x552 = 1;
	volatile int32_t t137 = -72;

    t137 = (((x549&x550)!=x551)&x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	static int16_t x554 = INT16_MIN;
	int8_t x556 = -1;
	int32_t t138 = 5530;

    t138 = (((x553&x554)!=x555)&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	volatile int16_t x558 = INT16_MIN;
	static int64_t x559 = INT64_MIN;
	volatile int32_t x560 = INT32_MAX;
	volatile int32_t t139 = 76615;

    t139 = (((x557&x558)!=x559)&x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x562 = -125;
	int16_t x563 = -1;
	uint32_t t140 = 1232542179U;

    t140 = (((x561&x562)!=x563)&x564);

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x566 = 5U;
	int8_t x567 = 0;
	static int32_t x568 = 1135;
	volatile int32_t t141 = -857;

    t141 = (((x565&x566)!=x567)&x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 0LLU;
	volatile int64_t x570 = INT64_MAX;
	static int16_t x571 = -1;
	volatile int8_t x572 = 0;
	int32_t t142 = -223748828;

    t142 = (((x569&x570)!=x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 1;
	int32_t x574 = -28392;
	int16_t x575 = -88;
	uint64_t t143 = 150625603776284359LLU;

    t143 = (((x573&x574)!=x575)&x576);

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x579 = 1U;
	int32_t t144 = -218084077;

    t144 = (((x577&x578)!=x579)&x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = UINT8_MAX;
	int64_t x582 = INT64_MIN;

    t145 = (((x581&x582)!=x583)&x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int16_t x586 = INT16_MAX;
	static int64_t x588 = INT64_MAX;
	int64_t t146 = 63955693136LL;

    t146 = (((x585&x586)!=x587)&x588);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 14181U;
	volatile int8_t x590 = 1;
	uint32_t x591 = 1U;
	static uint16_t x592 = 612U;
	volatile int32_t t147 = 8361563;

    t147 = (((x589&x590)!=x591)&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x594 = 0U;
	int32_t x595 = -30022;
	volatile int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -3021961;

    t148 = (((x593&x594)!=x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x599 = INT8_MAX;
	int16_t x600 = 117;
	int32_t t149 = 1;

    t149 = (((x597&x598)!=x599)&x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	int32_t x602 = INT32_MAX;
	int16_t x603 = INT16_MIN;
	int32_t x604 = -512;

    t150 = (((x601&x602)!=x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint16_t x606 = 23177U;
	int16_t x607 = -1;
	int16_t x608 = -1;
	int32_t t151 = 2;

    t151 = (((x605&x606)!=x607)&x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -53659;
	uint16_t x610 = 353U;
	int16_t x611 = INT16_MIN;
	int16_t x612 = 17;
	static volatile int32_t t152 = -765329230;

    t152 = (((x609&x610)!=x611)&x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x614 = 35153897U;
	int32_t x615 = 31236;
	int32_t x616 = INT32_MIN;

    t153 = (((x613&x614)!=x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 1;
	volatile uint32_t x620 = 41U;
	static uint32_t t154 = 2059262U;

    t154 = (((x617&x618)!=x619)&x620);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = INT8_MIN;
	volatile int32_t x623 = INT32_MIN;
	static volatile int32_t t155 = -1;

    t155 = (((x621&x622)!=x623)&x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x626 = 938U;
	int16_t x627 = -1;
	int64_t x628 = INT64_MIN;

    t156 = (((x625&x626)!=x627)&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MAX;
	int64_t x630 = INT64_MAX;
	uint16_t x631 = 50U;
	static int32_t x632 = INT32_MAX;

    t157 = (((x629&x630)!=x631)&x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	uint64_t x634 = 40637797702611LLU;
	int16_t x635 = INT16_MAX;
	volatile int32_t t158 = -1;

    t158 = (((x633&x634)!=x635)&x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = INT64_MIN;
	int16_t x640 = -2977;
	volatile int32_t t159 = 245;

    t159 = (((x637&x638)!=x639)&x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	static volatile int8_t x642 = -1;
	uint32_t x643 = 702386U;
	int32_t t160 = -11153913;

    t160 = (((x641&x642)!=x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = INT8_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 129844715;

    t161 = (((x645&x646)!=x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	volatile uint8_t x650 = 2U;
	static int8_t x651 = INT8_MAX;
	volatile int32_t x652 = -1;
	int32_t t162 = -12524;

    t162 = (((x649&x650)!=x651)&x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = -14542;
	int64_t x655 = -164LL;
	int32_t t163 = -2020097;

    t163 = (((x653&x654)!=x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int64_t x659 = -1LL;
	uint32_t x660 = UINT32_MAX;
	static volatile uint32_t t164 = 117U;

    t164 = (((x657&x658)!=x659)&x660);

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 638U;
	int16_t x662 = -5;
	static uint64_t x663 = UINT64_MAX;
	static uint8_t x664 = UINT8_MAX;

    t165 = (((x661&x662)!=x663)&x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 114U;
	int16_t x666 = 1;
	uint32_t x667 = 253934U;
	volatile int8_t x668 = INT8_MIN;
	volatile int32_t t166 = -330546230;

    t166 = (((x665&x666)!=x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x670 = UINT64_MAX;
	uint16_t x671 = 470U;
	int64_t x672 = INT64_MIN;
	static int64_t t167 = 1811450172LL;

    t167 = (((x669&x670)!=x671)&x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x674 = 349U;
	static volatile uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MAX;

    t168 = (((x673&x674)!=x675)&x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	uint8_t x678 = UINT8_MAX;
	int16_t x679 = INT16_MIN;
	int64_t x680 = INT64_MIN;
	int64_t t169 = 10170607329805902LL;

    t169 = (((x677&x678)!=x679)&x680);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	uint64_t x682 = UINT64_MAX;
	static int64_t x683 = -1LL;
	static volatile int32_t t170 = 131;

    t170 = (((x681&x682)!=x683)&x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 975U;
	int8_t x686 = INT8_MAX;
	volatile int32_t t171 = -1;

    t171 = (((x685&x686)!=x687)&x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -1;
	static volatile uint16_t x690 = 11462U;
	static int64_t x691 = -241401525LL;
	int32_t x692 = INT32_MIN;

    t172 = (((x689&x690)!=x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int64_t x694 = INT64_MAX;
	static uint64_t x695 = UINT64_MAX;
	int16_t x696 = -1;
	int32_t t173 = 139782869;

    t173 = (((x693&x694)!=x695)&x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	static int64_t x699 = INT64_MIN;

    t174 = (((x697&x698)!=x699)&x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 2;
	int8_t x702 = -8;
	static int8_t x704 = INT8_MIN;

    t175 = (((x701&x702)!=x703)&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -90202522690867LL;
	uint64_t x706 = 252476127454726LLU;
	int8_t x707 = INT8_MIN;
	uint16_t x708 = 19U;
	volatile int32_t t176 = -1;

    t176 = (((x705&x706)!=x707)&x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 1657829U;
	static int32_t x712 = INT32_MAX;

    t177 = (((x709&x710)!=x711)&x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 1796U;
	int64_t x714 = 2540296307558LL;
	int8_t x716 = INT8_MIN;
	int32_t t178 = -26;

    t178 = (((x713&x714)!=x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x717 = -4242935;
	int8_t x718 = 1;
	uint32_t x719 = UINT32_MAX;
	uint16_t x720 = 2U;
	int32_t t179 = -1024;

    t179 = (((x717&x718)!=x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x722 = INT32_MIN;
	int64_t x723 = -1LL;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = -353554138;

    t180 = (((x721&x722)!=x723)&x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = INT32_MIN;
	uint64_t x727 = UINT64_MAX;
	static int32_t t181 = 1;

    t181 = (((x725&x726)!=x727)&x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	volatile uint64_t x731 = 22001769605LLU;
	int16_t x732 = -3;
	volatile int32_t t182 = -18446;

    t182 = (((x729&x730)!=x731)&x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = -10;
	uint32_t x736 = 0U;
	static volatile uint32_t t183 = 32606152U;

    t183 = (((x733&x734)!=x735)&x736);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 842808LLU;
	uint32_t x738 = 197U;
	uint8_t x739 = 3U;

    t184 = (((x737&x738)!=x739)&x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	int8_t x743 = 24;
	int16_t x744 = INT16_MIN;
	static int32_t t185 = 38230;

    t185 = (((x741&x742)!=x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x747 = -1;

    t186 = (((x745&x746)!=x747)&x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 678762460U;
	int32_t x750 = 2;
	static int32_t x751 = 248851;
	uint8_t x752 = 13U;
	volatile int32_t t187 = -122;

    t187 = (((x749&x750)!=x751)&x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = -7;
	int16_t x754 = INT16_MIN;
	int32_t x755 = -899002;
	int32_t t188 = -55191;

    t188 = (((x753&x754)!=x755)&x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = 219;
	uint64_t x759 = 153664LLU;
	volatile int64_t x760 = 284LL;
	static volatile int64_t t189 = 24LL;

    t189 = (((x757&x758)!=x759)&x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x763 = -6;
	volatile int32_t t190 = -49;

    t190 = (((x761&x762)!=x763)&x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 7655U;
	static int16_t x767 = -427;
	uint32_t x768 = 2397U;

    t191 = (((x765&x766)!=x767)&x768);

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 17367U;
	int8_t x770 = -14;
	int32_t x771 = 4;
	uint16_t x772 = 6937U;
	volatile int32_t t192 = 330578784;

    t192 = (((x769&x770)!=x771)&x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 49U;
	volatile int64_t x774 = INT64_MAX;
	volatile int16_t x775 = INT16_MAX;
	int32_t t193 = 33402;

    t193 = (((x773&x774)!=x775)&x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x779 = INT8_MIN;
	int32_t t194 = 49502940;

    t194 = (((x777&x778)!=x779)&x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = 10239;
	int8_t x782 = 12;
	uint16_t x783 = UINT16_MAX;
	volatile uint64_t t195 = 31LLU;

    t195 = (((x781&x782)!=x783)&x784);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = INT64_MIN;
	volatile uint32_t x787 = UINT32_MAX;
	int64_t x788 = -1LL;
	volatile int64_t t196 = -29LL;

    t196 = (((x785&x786)!=x787)&x788);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MAX;
	static int32_t x790 = INT32_MAX;
	int64_t x792 = INT64_MIN;

    t197 = (((x789&x790)!=x791)&x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	uint8_t x794 = 24U;
	volatile int32_t x795 = -183384711;
	uint16_t x796 = 20988U;
	int32_t t198 = -51126;

    t198 = (((x793&x794)!=x795)&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 101010U;
	int64_t x798 = INT64_MAX;
	int16_t x799 = INT16_MIN;
	volatile int16_t x800 = 2750;

    t199 = (((x797&x798)!=x799)&x800);

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

