
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

volatile uint32_t x1 = UINT32_MAX;
int32_t x3 = INT32_MIN;
static uint64_t x4 = 524LLU;
int8_t x7 = 1;
uint64_t x11 = 122591413LLU;
volatile int8_t x13 = INT8_MIN;
int8_t x25 = 1;
static uint64_t x26 = UINT64_MAX;
int64_t x28 = -1LL;
uint32_t x33 = 255U;
uint64_t x36 = 125591852199854815LLU;
int32_t t8 = 5952;
int16_t x41 = INT16_MAX;
uint64_t x43 = 854082842824736470LLU;
volatile int64_t x46 = INT64_MIN;
int16_t x48 = -1707;
volatile int32_t x55 = -1;
int32_t x61 = 24684;
int8_t x66 = INT8_MAX;
int64_t x67 = 3034058197LL;
static int64_t x69 = INT64_MAX;
static int64_t x74 = INT64_MIN;
uint32_t x76 = 1379007956U;
static volatile uint8_t x77 = 2U;
volatile int32_t t20 = -17;
int8_t x92 = -4;
uint16_t x96 = 0U;
uint64_t x101 = 575196167412695539LLU;
uint8_t x102 = UINT8_MAX;
volatile int32_t t24 = -78038;
int32_t x116 = -1;
static volatile int8_t x118 = INT8_MIN;
int8_t x119 = -1;
int32_t x123 = -1;
static uint64_t x127 = 21606609523500LLU;
int32_t x133 = INT32_MIN;
uint8_t x142 = 1U;
int32_t x143 = INT32_MIN;
static int32_t t33 = -248514694;
volatile int32_t t34 = -55598308;
int8_t x152 = 4;
uint64_t x166 = 1830346553105LLU;
volatile int64_t x167 = INT64_MIN;
int8_t x168 = -24;
uint32_t x169 = 1101453344U;
static int16_t x174 = -1;
volatile uint16_t x176 = 1290U;
static uint8_t x180 = UINT8_MAX;
int32_t x188 = 4049954;
static int64_t x191 = -1LL;
int32_t x192 = -400138049;
int32_t t45 = -201010;
static int16_t x199 = -116;
int16_t x202 = INT16_MAX;
volatile int32_t t48 = 21727;
int64_t x210 = INT64_MIN;
uint64_t x213 = UINT64_MAX;
uint32_t x214 = 44U;
volatile int8_t x216 = -1;
int8_t x221 = 1;
int32_t x224 = -1;
static volatile int32_t t52 = -55929;
int32_t x227 = INT32_MAX;
static volatile uint8_t x249 = UINT8_MAX;
volatile int32_t t57 = -5421;
static int8_t x255 = 3;
int32_t t59 = -18965270;
int32_t x266 = -1;
uint16_t x268 = UINT16_MAX;
static uint64_t x270 = 55585LLU;
volatile int32_t x276 = -14332623;
uint32_t x277 = UINT32_MAX;
volatile int32_t t65 = 271;
static uint32_t x285 = 32839718U;
int32_t x286 = INT32_MAX;
volatile uint8_t x301 = 2U;
int8_t x304 = -1;
uint32_t x305 = 21U;
uint32_t x306 = 53432740U;
int32_t x310 = -1;
int16_t x315 = -3896;
volatile int32_t t70 = -12;
volatile int32_t t72 = 32609;
volatile int16_t x329 = INT16_MIN;
uint8_t x332 = UINT8_MAX;
int64_t x336 = INT64_MIN;
uint16_t x338 = 710U;
static volatile int16_t x341 = 75;
int32_t t78 = 27;
volatile int64_t x355 = INT64_MIN;
static uint64_t x356 = UINT64_MAX;
int32_t x366 = 1;
static volatile int32_t t82 = -65739327;
uint16_t x373 = 6736U;
int16_t x379 = -10731;
int64_t x386 = -1LL;
volatile int32_t t89 = -2903015;
volatile int64_t x407 = INT64_MIN;
uint64_t x410 = 10994072394830907LLU;
int32_t t93 = -50614;
int32_t t94 = -2271098;
int64_t x422 = 42370222349914LL;
static uint16_t x424 = 616U;
int32_t x425 = -1205341;
int16_t x436 = -742;
int64_t x459 = INT64_MIN;
int8_t x460 = 20;
int16_t x465 = INT16_MAX;
volatile int32_t t105 = -48932449;
int64_t x475 = 1506LL;
volatile int8_t x482 = INT8_MIN;
int32_t x483 = -1261;
int8_t x485 = -1;
volatile int32_t x486 = 1;
int16_t x487 = 6;
uint64_t x489 = 607242086307441LLU;
int32_t t110 = 105617378;
int8_t x493 = INT8_MAX;
int16_t x495 = INT16_MIN;
uint8_t x499 = 29U;
uint16_t x500 = 1216U;
int8_t x511 = INT8_MIN;
uint32_t x513 = UINT32_MAX;
static int64_t x516 = INT64_MAX;
int64_t x525 = -1LL;
int32_t t120 = 13112;
volatile int16_t x538 = INT16_MIN;
uint8_t x545 = 0U;
int16_t x551 = INT16_MIN;
volatile int8_t x553 = INT8_MIN;
uint16_t x554 = 1876U;
int16_t x576 = INT16_MIN;
static int16_t x580 = INT16_MIN;
int16_t x582 = INT16_MAX;
int16_t x584 = -1;
int32_t t130 = 4103;
int32_t t131 = -8121179;
int16_t x593 = INT16_MIN;
int16_t x598 = -1;
int32_t t135 = 1034;
volatile int64_t x617 = -16054609535564069LL;
int32_t t141 = -24;
int64_t x629 = 61215342039LL;
int64_t x631 = INT64_MIN;
uint64_t x638 = UINT64_MAX;
static int8_t x644 = INT8_MIN;
static uint16_t x645 = UINT16_MAX;
int8_t x655 = -1;
int16_t x668 = -1;
uint16_t x670 = UINT16_MAX;
volatile int8_t x676 = INT8_MIN;
uint32_t x678 = UINT32_MAX;
int32_t x681 = 999756800;
volatile uint8_t x682 = UINT8_MAX;
int64_t x686 = -1LL;
static uint8_t x687 = 28U;
int8_t x698 = INT8_MIN;
int16_t x701 = -1;
int16_t x708 = INT16_MAX;
static int32_t x712 = INT32_MIN;
volatile int32_t t163 = -1;
volatile int32_t t165 = -161;
int32_t x730 = -60;
int8_t x735 = -1;
int8_t x738 = INT8_MIN;
volatile uint32_t x739 = 945129U;
uint32_t x740 = UINT32_MAX;
volatile int32_t t168 = 18846;
int32_t x742 = INT32_MIN;
int32_t x760 = -1;
uint16_t x775 = 26U;
int32_t t175 = 0;
int16_t x783 = INT16_MIN;
int32_t t176 = 1;
volatile int16_t x809 = INT16_MAX;
int32_t t181 = -466;
uint8_t x813 = 7U;
int64_t x823 = INT64_MIN;
int32_t x824 = 75170724;
static int32_t t187 = 6023276;
volatile int32_t x842 = INT32_MIN;
int16_t x845 = -7;
int32_t t190 = -112;
int16_t x849 = INT16_MIN;
uint16_t x851 = 4U;
int32_t t192 = -1279855;
static int16_t x858 = INT16_MIN;
volatile int16_t x861 = -110;
volatile int32_t x863 = INT32_MIN;
int32_t x871 = 401733205;
volatile int32_t t196 = 4;
int8_t x883 = INT8_MAX;
volatile int32_t x884 = -8;
static int32_t t198 = 0;


void f0(void) {
    	volatile uint64_t x2 = 6400976578077112LLU;
	volatile int32_t t0 = 76521;

    t0 = ((x1*(x2%x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int8_t x6 = 9;
	uint8_t x8 = 93U;
	int32_t t1 = -526184;

    t1 = ((x5*(x6%x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int64_t x10 = 44871343790229LL;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 23;

    t2 = ((x9*(x10%x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	volatile uint8_t x15 = 40U;
	volatile int64_t x16 = -1LL;
	int32_t t3 = -14827;

    t3 = ((x13*(x14%x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static uint32_t x18 = 12931U;
	static volatile uint32_t x19 = UINT32_MAX;
	int32_t x20 = 6228;
	static int32_t t4 = -4979;

    t4 = ((x17*(x18%x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	uint64_t x22 = UINT64_MAX;
	static int64_t x23 = -1LL;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -115507;

    t5 = ((x21*(x22%x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x27 = INT32_MIN;
	volatile int32_t t6 = -667471551;

    t6 = ((x25*(x26%x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = UINT64_MAX;
	uint16_t x30 = 7687U;
	int64_t x31 = -5270LL;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -7454930;

    t7 = ((x29*(x30%x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = -11;
	static int16_t x35 = -12;

    t8 = ((x33*(x34%x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = INT64_MIN;
	int32_t x44 = -1;
	volatile int32_t t9 = 589;

    t9 = ((x41*(x42%x43))==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	static int64_t x47 = 3LL;
	int32_t t10 = 12308;

    t10 = ((x45*(x46%x47))==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = 1793;
	volatile int64_t x50 = -1LL;
	static uint64_t x51 = 2231841667647712LLU;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 28174;

    t11 = ((x49*(x50%x51))==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 1U;
	int8_t x54 = -1;
	static int16_t x56 = INT16_MIN;
	int32_t t12 = -1;

    t12 = ((x53*(x54%x55))==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -3068516;
	int16_t x58 = -219;
	static int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;
	static int32_t t13 = -5402;

    t13 = ((x57*(x58%x59))==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x62 = 789141U;
	uint32_t x63 = 1857363U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 455814;

    t14 = ((x61*(x62%x63))==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	uint8_t x68 = 80U;
	static volatile int32_t t15 = 413;

    t15 = ((x65*(x66%x67))==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 696LLU;
	uint64_t x72 = UINT64_MAX;
	int32_t t16 = 0;

    t16 = ((x69*(x70%x71))==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	static volatile int64_t x75 = -254062803LL;
	int32_t t17 = -32276;

    t17 = ((x73*(x74%x75))==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x78 = 121U;
	int64_t x79 = INT64_MAX;
	uint32_t x80 = 134645115U;
	int32_t t18 = -1;

    t18 = ((x77*(x78%x79))==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 3853643482LLU;
	int8_t x82 = 4;
	static uint8_t x83 = UINT8_MAX;
	static int8_t x84 = -1;
	volatile int32_t t19 = -7659474;

    t19 = ((x81*(x82%x83))==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = 4;
	volatile int8_t x86 = -1;
	int32_t x87 = 287;
	uint64_t x88 = 469932LLU;

    t20 = ((x85*(x86%x87))==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	volatile int16_t x90 = 16;
	static int8_t x91 = INT8_MAX;
	int32_t t21 = 16931606;

    t21 = ((x89*(x90%x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MAX;
	volatile int32_t t22 = 555571;

    t22 = ((x93*(x94%x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = 2;
	int32_t x98 = -597;
	volatile int16_t x99 = INT16_MIN;
	uint8_t x100 = UINT8_MAX;
	int32_t t23 = 19880372;

    t23 = ((x97*(x98%x99))==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x103 = INT64_MIN;
	int16_t x104 = 2;

    t24 = ((x101*(x102%x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 31U;
	int8_t x111 = -4;
	static uint32_t x112 = 1U;
	volatile int32_t t25 = -110940518;

    t25 = ((x109*(x110%x111))==x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	int32_t t26 = 154;

    t26 = ((x113*(x114%x115))==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 4;
	volatile uint16_t x120 = 3U;
	int32_t t27 = -130438;

    t27 = ((x117*(x118%x119))==x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 24U;
	uint64_t x122 = UINT64_MAX;
	int16_t x124 = -7082;
	int32_t t28 = 6765;

    t28 = ((x121*(x122%x123))==x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 112U;
	volatile int64_t x126 = INT64_MIN;
	uint64_t x128 = 436LLU;
	int32_t t29 = 475;

    t29 = ((x125*(x126%x127))==x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x129 = -1LL;
	static uint32_t x130 = 11624670U;
	uint32_t x131 = UINT32_MAX;
	static uint8_t x132 = UINT8_MAX;
	int32_t t30 = 82382;

    t30 = ((x129*(x130%x131))==x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t31 = 2;

    t31 = ((x133*(x134%x135))==x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = -1LL;
	volatile uint32_t x138 = 8805560U;
	static int8_t x139 = INT8_MAX;
	static int64_t x140 = 27139LL;
	volatile int32_t t32 = 0;

    t32 = ((x137*(x138%x139))==x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MIN;
	static int16_t x144 = INT16_MAX;

    t33 = ((x141*(x142%x143))==x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = UINT8_MAX;
	int16_t x146 = -683;
	volatile int32_t x147 = -120;
	int8_t x148 = 1;

    t34 = ((x145*(x146%x147))==x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	int32_t t35 = -154622573;

    t35 = ((x149*(x150%x151))==x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = 0;
	int16_t x154 = -1;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -4410756027095215589LL;
	int32_t t36 = -315;

    t36 = ((x153*(x154%x155))==x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = UINT32_MAX;
	int8_t x158 = -29;
	uint64_t x159 = 1424010295811542813LLU;
	uint32_t x160 = 3558U;
	static volatile int32_t t37 = -4;

    t37 = ((x157*(x158%x159))==x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 0;
	static int32_t t38 = 0;

    t38 = ((x165*(x166%x167))==x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x170 = INT64_MAX;
	int16_t x171 = -13437;
	static uint64_t x172 = 1618526LLU;
	static volatile int32_t t39 = -302112130;

    t39 = ((x169*(x170%x171))==x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = -1;
	int64_t x175 = -1LL;
	int32_t t40 = 531472028;

    t40 = ((x173*(x174%x175))==x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	static uint8_t x178 = 27U;
	int8_t x179 = INT8_MIN;
	int32_t t41 = -64546;

    t41 = ((x177*(x178%x179))==x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = 7U;
	int8_t x182 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t42 = -36667210;

    t42 = ((x181*(x182%x183))==x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x185 = -2434;
	volatile int64_t x186 = -17143276493LL;
	uint16_t x187 = 509U;
	volatile int32_t t43 = 302859949;

    t43 = ((x185*(x186%x187))==x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x189 = INT16_MIN;
	static uint16_t x190 = UINT16_MAX;
	volatile int32_t t44 = -13;

    t44 = ((x189*(x190%x191))==x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int8_t x194 = 0;
	static int8_t x195 = -1;
	uint16_t x196 = UINT16_MAX;

    t45 = ((x193*(x194%x195))==x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x197 = 30U;
	int16_t x198 = -1;
	int64_t x200 = INT64_MIN;
	int32_t t46 = -2012230;

    t46 = ((x197*(x198%x199))==x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = 1;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t47 = 10378542;

    t47 = ((x201*(x202%x203))==x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = 1U;
	int8_t x206 = INT8_MIN;
	volatile uint32_t x207 = 11389360U;
	uint64_t x208 = UINT64_MAX;

    t48 = ((x205*(x206%x207))==x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 1507U;
	int8_t x211 = 44;
	static volatile int16_t x212 = -70;
	volatile int32_t t49 = 3412432;

    t49 = ((x209*(x210%x211))==x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x215 = 8U;
	static volatile int32_t t50 = 620;

    t50 = ((x213*(x214%x215))==x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x217 = 556093403LLU;
	uint32_t x218 = 816361U;
	volatile int64_t x219 = INT64_MIN;
	uint8_t x220 = 0U;
	volatile int32_t t51 = -57043824;

    t51 = ((x217*(x218%x219))==x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x222 = -27215843LL;
	static int8_t x223 = INT8_MAX;

    t52 = ((x221*(x222%x223))==x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = 6137554335195707272LLU;
	static int32_t x226 = INT32_MIN;
	int8_t x228 = -2;
	volatile int32_t t53 = -2508753;

    t53 = ((x225*(x226%x227))==x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = INT32_MAX;
	int16_t x234 = -1;
	uint8_t x235 = 16U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t54 = 2290;

    t54 = ((x233*(x234%x235))==x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x237 = UINT64_MAX;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = -3086435363640LL;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t55 = 2465429;

    t55 = ((x237*(x238%x239))==x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = 1U;
	uint32_t x242 = 4U;
	uint32_t x243 = 3555U;
	uint8_t x244 = 22U;
	int32_t t56 = 659870038;

    t56 = ((x241*(x242%x243))==x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x250 = INT8_MAX;
	int16_t x251 = -1;
	static uint64_t x252 = 83226269385LLU;

    t57 = ((x249*(x250%x251))==x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint64_t x253 = 51LLU;
	int32_t x254 = INT32_MIN;
	uint32_t x256 = 378U;
	int32_t t58 = -2125741;

    t58 = ((x253*(x254%x255))==x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x257 = 24U;
	uint32_t x258 = 2428U;
	int8_t x259 = -1;
	static volatile uint16_t x260 = 15536U;

    t59 = ((x257*(x258%x259))==x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	volatile int64_t x263 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	int32_t t60 = -50652;

    t60 = ((x261*(x262%x263))==x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x265 = 5127502;
	static uint32_t x267 = 24165174U;
	int32_t t61 = 0;

    t61 = ((x265*(x266%x267))==x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MIN;
	volatile int32_t x271 = -177511;
	uint8_t x272 = 1U;
	int32_t t62 = 117;

    t62 = ((x269*(x270%x271))==x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x273 = UINT8_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	volatile uint8_t x275 = 3U;
	int32_t t63 = 12;

    t63 = ((x273*(x274%x275))==x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t64 = 721615762;

    t64 = ((x277*(x278%x279))==x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = -1;
	int32_t x282 = 98553;
	static int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MIN;

    t65 = ((x281*(x282%x283))==x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x287 = -54LL;
	volatile int32_t x288 = INT32_MIN;
	int32_t t66 = -27;

    t66 = ((x285*(x286%x287))==x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x302 = INT64_MIN;
	int64_t x303 = 22003107482791LL;
	int32_t t67 = -52023;

    t67 = ((x301*(x302%x303))==x304);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x307 = UINT32_MAX;
	int16_t x308 = -1;
	int32_t t68 = 216204907;

    t68 = ((x305*(x306%x307))==x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x309 = -1;
	volatile int8_t x311 = INT8_MAX;
	volatile int16_t x312 = INT16_MIN;
	int32_t t69 = 11188;

    t69 = ((x309*(x310%x311))==x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = INT32_MAX;
	static int64_t x314 = -3716653934LL;
	int16_t x316 = -61;

    t70 = ((x313*(x314%x315))==x316);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x317 = 19U;
	volatile uint8_t x318 = 4U;
	static int8_t x319 = INT8_MIN;
	static volatile int8_t x320 = 1;
	int32_t t71 = 0;

    t71 = ((x317*(x318%x319))==x320);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = 96802536LL;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 386325180LLU;
	volatile int16_t x324 = INT16_MAX;

    t72 = ((x321*(x322%x323))==x324);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x325 = INT32_MAX;
	uint8_t x326 = 1U;
	int8_t x327 = INT8_MIN;
	volatile int32_t x328 = INT32_MAX;
	volatile int32_t t73 = 89223227;

    t73 = ((x325*(x326%x327))==x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x330 = INT8_MIN;
	static int32_t x331 = -1;
	int32_t t74 = 2737;

    t74 = ((x329*(x330%x331))==x332);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = 779;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	volatile int32_t t75 = -1541274;

    t75 = ((x333*(x334%x335))==x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x337 = 6557U;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 698026725LLU;
	int32_t t76 = -182201073;

    t76 = ((x337*(x338%x339))==x340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -13;
	static volatile int32_t t77 = -45593294;

    t77 = ((x341*(x342%x343))==x344);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x345 = 6212986LLU;
	volatile uint32_t x346 = 9806U;
	static int16_t x347 = -1;
	volatile int64_t x348 = 13572LL;

    t78 = ((x345*(x346%x347))==x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x349 = 6397LLU;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = -18;
	volatile int64_t x352 = INT64_MAX;
	volatile int32_t t79 = 716;

    t79 = ((x349*(x350%x351))==x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 29076U;
	volatile int32_t t80 = -47;

    t80 = ((x353*(x354%x355))==x356);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = -1;
	volatile int8_t x362 = INT8_MAX;
	int32_t x363 = -209053862;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t81 = -91;

    t81 = ((x361*(x362%x363))==x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x365 = 39737LLU;
	int32_t x367 = -21462;
	uint16_t x368 = 0U;

    t82 = ((x365*(x366%x367))==x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x374 = UINT16_MAX;
	static uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 459U;
	int32_t t83 = -106;

    t83 = ((x373*(x374%x375))==x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x377 = INT16_MIN;
	static int64_t x378 = 36LL;
	int8_t x380 = INT8_MIN;
	volatile int32_t t84 = -210;

    t84 = ((x377*(x378%x379))==x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	static volatile int32_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t85 = 477;

    t85 = ((x381*(x382%x383))==x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = -10;
	volatile int8_t x387 = -1;
	static volatile int32_t x388 = -53;
	static int32_t t86 = 90038198;

    t86 = ((x385*(x386%x387))==x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x389 = INT8_MAX;
	int16_t x390 = 16;
	int16_t x391 = -273;
	uint8_t x392 = 0U;
	volatile int32_t t87 = 867125009;

    t87 = ((x389*(x390%x391))==x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x393 = 7LLU;
	static int8_t x394 = -1;
	static int64_t x395 = INT64_MAX;
	uint32_t x396 = 2210090U;
	int32_t t88 = -47211;

    t88 = ((x393*(x394%x395))==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x397 = 145U;
	int8_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	uint64_t x400 = 112616223881835322LLU;

    t89 = ((x397*(x398%x399))==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x401 = INT16_MIN;
	int64_t x402 = 106051001LL;
	static uint8_t x403 = 4U;
	volatile int32_t x404 = 120035;
	int32_t t90 = 124803032;

    t90 = ((x401*(x402%x403))==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = 865223934;
	volatile int32_t x406 = -10;
	int64_t x408 = INT64_MIN;
	volatile int32_t t91 = -400079145;

    t91 = ((x405*(x406%x407))==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x409 = 18U;
	uint64_t x411 = UINT64_MAX;
	static uint16_t x412 = UINT16_MAX;
	int32_t t92 = -120510631;

    t92 = ((x409*(x410%x411))==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x413 = 10120U;
	static uint8_t x414 = UINT8_MAX;
	int8_t x415 = -1;
	int64_t x416 = -30LL;

    t93 = ((x413*(x414%x415))==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x417 = -4;
	int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	volatile int8_t x420 = INT8_MIN;

    t94 = ((x417*(x418%x419))==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x421 = INT16_MAX;
	static int64_t x423 = INT64_MIN;
	static int32_t t95 = 10;

    t95 = ((x421*(x422%x423))==x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x426 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	static volatile uint8_t x428 = 20U;
	volatile int32_t t96 = 958977948;

    t96 = ((x425*(x426%x427))==x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x429 = 336;
	static uint16_t x430 = 1753U;
	volatile int16_t x431 = INT16_MAX;
	uint64_t x432 = 8572405262056556LLU;
	volatile int32_t t97 = 18472;

    t97 = ((x429*(x430%x431))==x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x433 = -1;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 27U;
	volatile int32_t t98 = 14247;

    t98 = ((x433*(x434%x435))==x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	static volatile int16_t x440 = INT16_MAX;
	volatile int32_t t99 = 109580;

    t99 = ((x437*(x438%x439))==x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = 1;
	static volatile int64_t x443 = INT64_MAX;
	uint8_t x444 = UINT8_MAX;
	int32_t t100 = -159;

    t100 = ((x441*(x442%x443))==x444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x449 = 1U;
	volatile int8_t x450 = -1;
	static int16_t x451 = 2;
	static int64_t x452 = INT64_MAX;
	int32_t t101 = -219;

    t101 = ((x449*(x450%x451))==x452);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x453 = -447774;
	int8_t x454 = INT8_MIN;
	static uint32_t x455 = 103573606U;
	int64_t x456 = INT64_MIN;
	int32_t t102 = 3;

    t102 = ((x453*(x454%x455))==x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x457 = -1;
	int16_t x458 = INT16_MIN;
	int32_t t103 = 3683001;

    t103 = ((x457*(x458%x459))==x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x466 = UINT32_MAX;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = 283;
	static int32_t t104 = -187;

    t104 = ((x465*(x466%x467))==x468);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = INT16_MIN;
	int16_t x470 = 431;
	volatile uint64_t x471 = UINT64_MAX;
	uint16_t x472 = 41U;

    t105 = ((x469*(x470%x471))==x472);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = -354;
	uint8_t x474 = 92U;
	int8_t x476 = 3;
	int32_t t106 = -2055275;

    t106 = ((x473*(x474%x475))==x476);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x477 = INT8_MAX;
	static int32_t x478 = INT32_MIN;
	volatile uint64_t x479 = 6465253LLU;
	uint64_t x480 = 2211764LLU;
	static volatile int32_t t107 = 3;

    t107 = ((x477*(x478%x479))==x480);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x481 = INT8_MIN;
	static uint32_t x484 = 4U;
	int32_t t108 = 1;

    t108 = ((x481*(x482%x483))==x484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x488 = INT16_MIN;
	int32_t t109 = -20612478;

    t109 = ((x485*(x486%x487))==x488);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x490 = 0U;
	static int64_t x491 = -7LL;
	volatile int32_t x492 = 764009;

    t110 = ((x489*(x490%x491))==x492);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x494 = 1U;
	volatile uint64_t x496 = 1LLU;
	int32_t t111 = 1241;

    t111 = ((x493*(x494%x495))==x496);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x497 = -1;
	volatile int16_t x498 = -7;
	volatile int32_t t112 = 170272630;

    t112 = ((x497*(x498%x499))==x500);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x501 = -1892;
	int16_t x502 = INT16_MAX;
	static uint8_t x503 = UINT8_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t113 = 296379292;

    t113 = ((x501*(x502%x503))==x504);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x505 = UINT16_MAX;
	static volatile int16_t x506 = INT16_MAX;
	uint16_t x507 = UINT16_MAX;
	static int32_t x508 = INT32_MIN;
	volatile int32_t t114 = -465787;

    t114 = ((x505*(x506%x507))==x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x509 = 131102366940682LLU;
	int64_t x510 = INT64_MIN;
	uint64_t x512 = 227052506LLU;
	volatile int32_t t115 = -512715;

    t115 = ((x509*(x510%x511))==x512);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x515 = -6322;
	int32_t t116 = 1;

    t116 = ((x513*(x514%x515))==x516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x517 = INT32_MAX;
	int64_t x518 = -9894LL;
	uint8_t x519 = 3U;
	volatile int8_t x520 = INT8_MIN;
	int32_t t117 = -8666;

    t117 = ((x517*(x518%x519))==x520);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x521 = 3;
	static int32_t x522 = -1;
	int64_t x523 = INT64_MAX;
	int64_t x524 = 4139208090627313LL;
	int32_t t118 = 5925765;

    t118 = ((x521*(x522%x523))==x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x526 = INT64_MAX;
	volatile int32_t x527 = INT32_MAX;
	uint8_t x528 = 5U;
	int32_t t119 = 10502966;

    t119 = ((x525*(x526%x527))==x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x529 = -1;
	volatile uint8_t x530 = 11U;
	volatile uint8_t x531 = UINT8_MAX;
	int16_t x532 = INT16_MAX;

    t120 = ((x529*(x530%x531))==x532);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x537 = 140501906U;
	uint32_t x539 = 750516U;
	volatile int64_t x540 = -36807975LL;
	volatile int32_t t121 = -426067;

    t121 = ((x537*(x538%x539))==x540);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x541 = INT8_MAX;
	static int16_t x542 = 308;
	volatile uint16_t x543 = 856U;
	volatile int32_t x544 = 4734826;
	int32_t t122 = -927857;

    t122 = ((x541*(x542%x543))==x544);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x546 = INT16_MIN;
	volatile uint16_t x547 = 20698U;
	int32_t x548 = -66298405;
	int32_t t123 = 470;

    t123 = ((x545*(x546%x547))==x548);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x549 = 53U;
	volatile int8_t x550 = -1;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t124 = 2317;

    t124 = ((x549*(x550%x551))==x552);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x555 = INT8_MIN;
	int32_t x556 = -665375393;
	int32_t t125 = 1737;

    t125 = ((x553*(x554%x555))==x556);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x557 = 102U;
	int8_t x558 = INT8_MIN;
	int16_t x559 = 4475;
	int64_t x560 = -1LL;
	volatile int32_t t126 = 2;

    t126 = ((x557*(x558%x559))==x560);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x569 = INT8_MIN;
	static int64_t x570 = INT64_MAX;
	volatile int16_t x571 = INT16_MIN;
	static uint8_t x572 = 35U;
	volatile int32_t t127 = 7534;

    t127 = ((x569*(x570%x571))==x572);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x573 = UINT16_MAX;
	uint16_t x574 = 12U;
	static int64_t x575 = INT64_MAX;
	static int32_t t128 = 15772;

    t128 = ((x573*(x574%x575))==x576);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x577 = -42395LL;
	volatile uint64_t x578 = 6387850420LLU;
	volatile int8_t x579 = 2;
	volatile int32_t t129 = 21194;

    t129 = ((x577*(x578%x579))==x580);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = -1;
	static uint64_t x583 = UINT64_MAX;

    t130 = ((x581*(x582%x583))==x584);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x585 = 7414U;
	uint64_t x586 = 2029067LLU;
	static uint32_t x587 = 14008U;
	static int64_t x588 = 1173076319302LL;

    t131 = ((x585*(x586%x587))==x588);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x589 = INT16_MIN;
	int32_t x590 = INT32_MIN;
	int16_t x591 = INT16_MAX;
	volatile int32_t x592 = -1;
	int32_t t132 = -2611388;

    t132 = ((x589*(x590%x591))==x592);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x594 = 93U;
	int32_t x595 = -1;
	static uint8_t x596 = 3U;
	int32_t t133 = -8;

    t133 = ((x593*(x594%x595))==x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x597 = -67266;
	int32_t x599 = INT32_MIN;
	int16_t x600 = -1;
	int32_t t134 = 13;

    t134 = ((x597*(x598%x599))==x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x601 = 22923LLU;
	uint32_t x602 = UINT32_MAX;
	int8_t x603 = 1;
	static volatile int16_t x604 = INT16_MIN;

    t135 = ((x601*(x602%x603))==x604);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x605 = 1360504701U;
	uint16_t x606 = 24U;
	static int16_t x607 = INT16_MIN;
	int16_t x608 = -1;
	volatile int32_t t136 = 81269624;

    t136 = ((x605*(x606%x607))==x608);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x609 = INT8_MAX;
	volatile int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	volatile int32_t x612 = -1;
	volatile int32_t t137 = 32063;

    t137 = ((x609*(x610%x611))==x612);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x613 = 1544U;
	uint16_t x614 = UINT16_MAX;
	int64_t x615 = -25615040426275712LL;
	volatile int8_t x616 = 1;
	int32_t t138 = 9972;

    t138 = ((x613*(x614%x615))==x616);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x618 = INT16_MIN;
	volatile int8_t x619 = INT8_MIN;
	volatile int64_t x620 = -5LL;
	static int32_t t139 = 0;

    t139 = ((x617*(x618%x619))==x620);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x621 = 1U;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = 11;
	uint64_t x624 = UINT64_MAX;
	int32_t t140 = 4030;

    t140 = ((x621*(x622%x623))==x624);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x625 = 256U;
	uint8_t x626 = 115U;
	static int16_t x627 = INT16_MIN;
	int8_t x628 = -1;

    t141 = ((x625*(x626%x627))==x628);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x630 = 1;
	uint16_t x632 = 28706U;
	int32_t t142 = 0;

    t142 = ((x629*(x630%x631))==x632);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x633 = UINT64_MAX;
	int32_t x634 = 3951;
	int8_t x635 = INT8_MIN;
	int8_t x636 = INT8_MIN;
	volatile int32_t t143 = -21358;

    t143 = ((x633*(x634%x635))==x636);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x637 = 0U;
	static int16_t x639 = -1;
	int8_t x640 = 1;
	int32_t t144 = -826908;

    t144 = ((x637*(x638%x639))==x640);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = -2172072439515LL;
	int16_t x643 = INT16_MAX;
	static volatile int32_t t145 = 760;

    t145 = ((x641*(x642%x643))==x644);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x646 = INT16_MAX;
	int32_t x647 = INT32_MIN;
	uint64_t x648 = 246439207946184LLU;
	volatile int32_t t146 = 14;

    t146 = ((x645*(x646%x647))==x648);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x649 = 0;
	uint8_t x650 = UINT8_MAX;
	volatile int32_t x651 = 56475;
	int8_t x652 = 1;
	static int32_t t147 = 302;

    t147 = ((x649*(x650%x651))==x652);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x653 = -84295190;
	int16_t x654 = -1;
	uint8_t x656 = 0U;
	int32_t t148 = 19522;

    t148 = ((x653*(x654%x655))==x656);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x657 = -1LL;
	uint8_t x658 = 1U;
	uint16_t x659 = 451U;
	int8_t x660 = -40;
	static int32_t t149 = -6983697;

    t149 = ((x657*(x658%x659))==x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x661 = INT8_MAX;
	int16_t x662 = INT16_MAX;
	static int64_t x663 = -1LL;
	volatile int32_t x664 = -1;
	static volatile int32_t t150 = 8176;

    t150 = ((x661*(x662%x663))==x664);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x665 = INT16_MAX;
	int32_t x666 = INT32_MIN;
	int64_t x667 = INT64_MIN;
	int32_t t151 = -361;

    t151 = ((x665*(x666%x667))==x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x669 = -2;
	static int8_t x671 = -1;
	uint8_t x672 = 126U;
	int32_t t152 = 3688;

    t152 = ((x669*(x670%x671))==x672);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x673 = 27U;
	int64_t x674 = 566289661310385661LL;
	volatile uint64_t x675 = 4335LLU;
	volatile int32_t t153 = -5440;

    t153 = ((x673*(x674%x675))==x676);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x677 = UINT8_MAX;
	static int32_t x679 = 269;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t154 = 19332514;

    t154 = ((x677*(x678%x679))==x680);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x683 = UINT64_MAX;
	static int8_t x684 = INT8_MIN;
	int32_t t155 = 176;

    t155 = ((x681*(x682%x683))==x684);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x685 = INT8_MIN;
	int8_t x688 = INT8_MAX;
	volatile int32_t t156 = 12;

    t156 = ((x685*(x686%x687))==x688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x689 = 179U;
	uint8_t x690 = 29U;
	int16_t x691 = -1;
	int64_t x692 = -1LL;
	int32_t t157 = 479133517;

    t157 = ((x689*(x690%x691))==x692);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x693 = -1;
	volatile uint16_t x694 = UINT16_MAX;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = 2;
	int32_t t158 = -3;

    t158 = ((x693*(x694%x695))==x696);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = -1;
	volatile int64_t x699 = 14206212490148753LL;
	int32_t x700 = INT32_MIN;
	volatile int32_t t159 = -96;

    t159 = ((x697*(x698%x699))==x700);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x702 = 3U;
	int16_t x703 = -1136;
	static volatile int8_t x704 = INT8_MIN;
	volatile int32_t t160 = 5;

    t160 = ((x701*(x702%x703))==x704);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x705 = -1LL;
	int32_t x706 = -1;
	volatile int64_t x707 = -1LL;
	volatile int32_t t161 = 45;

    t161 = ((x705*(x706%x707))==x708);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x709 = 17U;
	int8_t x710 = INT8_MIN;
	volatile int16_t x711 = 4;
	static int32_t t162 = -289;

    t162 = ((x709*(x710%x711))==x712);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x713 = -210;
	volatile int64_t x714 = -1LL;
	volatile int16_t x715 = INT16_MAX;
	int16_t x716 = INT16_MAX;

    t163 = ((x713*(x714%x715))==x716);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x717 = -32705783;
	uint32_t x718 = UINT32_MAX;
	int16_t x719 = INT16_MIN;
	volatile int64_t x720 = INT64_MIN;
	static int32_t t164 = -525;

    t164 = ((x717*(x718%x719))==x720);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x725 = 22146085737LLU;
	static int16_t x726 = 6368;
	uint8_t x727 = 42U;
	int8_t x728 = INT8_MAX;

    t165 = ((x725*(x726%x727))==x728);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x729 = INT16_MAX;
	int8_t x731 = INT8_MIN;
	int8_t x732 = 54;
	int32_t t166 = -6526;

    t166 = ((x729*(x730%x731))==x732);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x733 = 3U;
	static uint16_t x734 = UINT16_MAX;
	uint8_t x736 = UINT8_MAX;
	int32_t t167 = 1351;

    t167 = ((x733*(x734%x735))==x736);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x737 = 7670591409944LLU;

    t168 = ((x737*(x738%x739))==x740);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x743 = 534159U;
	volatile int16_t x744 = INT16_MIN;
	volatile int32_t t169 = -93425490;

    t169 = ((x741*(x742%x743))==x744);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x749 = -1;
	int16_t x750 = -6591;
	static int64_t x751 = 1239648992847513687LL;
	int64_t x752 = INT64_MIN;
	int32_t t170 = -491132;

    t170 = ((x749*(x750%x751))==x752);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x753 = 0U;
	int16_t x754 = -1;
	uint32_t x755 = 1364709U;
	int64_t x756 = INT64_MIN;
	int32_t t171 = 100667;

    t171 = ((x753*(x754%x755))==x756);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x757 = 5U;
	volatile int8_t x758 = INT8_MAX;
	uint8_t x759 = UINT8_MAX;
	int32_t t172 = -1002647433;

    t172 = ((x757*(x758%x759))==x760);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x761 = INT8_MAX;
	int8_t x762 = INT8_MIN;
	int64_t x763 = INT64_MIN;
	volatile int8_t x764 = INT8_MAX;
	volatile int32_t t173 = -8;

    t173 = ((x761*(x762%x763))==x764);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x773 = 1U;
	uint64_t x774 = 247761219185LLU;
	uint64_t x776 = 1908762LLU;
	int32_t t174 = -14185;

    t174 = ((x773*(x774%x775))==x776);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x777 = 9;
	static int32_t x778 = 139;
	int32_t x779 = -1;
	volatile int8_t x780 = -2;

    t175 = ((x777*(x778%x779))==x780);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = UINT64_MAX;
	int8_t x782 = -1;
	static volatile int16_t x784 = -3043;

    t176 = ((x781*(x782%x783))==x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile int32_t x786 = INT32_MIN;
	int8_t x787 = -1;
	int16_t x788 = -1;
	volatile int32_t t177 = 7;

    t177 = ((x785*(x786%x787))==x788);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x797 = 1;
	uint16_t x798 = 1U;
	static int8_t x799 = INT8_MAX;
	static int8_t x800 = 1;
	int32_t t178 = 715061482;

    t178 = ((x797*(x798%x799))==x800);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	uint32_t x802 = 102433374U;
	int32_t x803 = INT32_MIN;
	volatile int32_t x804 = 10383819;
	int32_t t179 = -1;

    t179 = ((x801*(x802%x803))==x804);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x805 = -3747;
	uint8_t x806 = 5U;
	int16_t x807 = INT16_MIN;
	int8_t x808 = INT8_MAX;
	int32_t t180 = 47935526;

    t180 = ((x805*(x806%x807))==x808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x810 = INT16_MAX;
	int16_t x811 = INT16_MIN;
	int16_t x812 = INT16_MAX;

    t181 = ((x809*(x810%x811))==x812);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x814 = UINT16_MAX;
	int64_t x815 = -1LL;
	static volatile int8_t x816 = -1;
	int32_t t182 = 38169;

    t182 = ((x813*(x814%x815))==x816);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x817 = -1;
	uint64_t x818 = 33396441LLU;
	static int16_t x819 = 442;
	static int32_t x820 = -1;
	int32_t t183 = -29010;

    t183 = ((x817*(x818%x819))==x820);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x821 = 285;
	int16_t x822 = -447;
	volatile int32_t t184 = -2;

    t184 = ((x821*(x822%x823))==x824);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x825 = 595387U;
	uint32_t x826 = 33U;
	uint32_t x827 = UINT32_MAX;
	int32_t x828 = -1;
	int32_t t185 = -1;

    t185 = ((x825*(x826%x827))==x828);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x829 = 3;
	volatile int32_t x830 = INT32_MIN;
	uint64_t x831 = 1745830798LLU;
	volatile int64_t x832 = 227801LL;
	static volatile int32_t t186 = 17;

    t186 = ((x829*(x830%x831))==x832);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x833 = INT16_MAX;
	uint8_t x834 = 0U;
	int16_t x835 = INT16_MIN;
	volatile uint64_t x836 = 3050170859923811LLU;

    t187 = ((x833*(x834%x835))==x836);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x837 = 2;
	int64_t x838 = INT64_MIN;
	int8_t x839 = -1;
	volatile int64_t x840 = -8224777230873982LL;
	int32_t t188 = 529143349;

    t188 = ((x837*(x838%x839))==x840);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x841 = -1678676;
	uint64_t x843 = 62332764603LLU;
	uint16_t x844 = UINT16_MAX;
	volatile int32_t t189 = -101;

    t189 = ((x841*(x842%x843))==x844);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x846 = -57547869LL;
	static int8_t x847 = 1;
	uint64_t x848 = 5412963LLU;

    t190 = ((x845*(x846%x847))==x848);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x850 = -1;
	static uint32_t x852 = UINT32_MAX;
	int32_t t191 = 1;

    t191 = ((x849*(x850%x851))==x852);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x853 = 6956063U;
	volatile int32_t x854 = INT32_MIN;
	int32_t x855 = 102573;
	uint8_t x856 = 11U;

    t192 = ((x853*(x854%x855))==x856);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x857 = INT64_MIN;
	volatile uint64_t x859 = UINT64_MAX;
	int8_t x860 = INT8_MAX;
	int32_t t193 = -52043;

    t193 = ((x857*(x858%x859))==x860);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x862 = -1;
	uint16_t x864 = 10U;
	static int32_t t194 = 6;

    t194 = ((x861*(x862%x863))==x864);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x865 = -210LL;
	int64_t x866 = -1LL;
	uint64_t x867 = 2075761885LLU;
	int16_t x868 = 6;
	volatile int32_t t195 = 616202;

    t195 = ((x865*(x866%x867))==x868);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	uint8_t x872 = 27U;

    t196 = ((x869*(x870%x871))==x872);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x873 = 5U;
	uint16_t x874 = UINT16_MAX;
	static uint64_t x875 = UINT64_MAX;
	uint8_t x876 = 11U;
	int32_t t197 = -60;

    t197 = ((x873*(x874%x875))==x876);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x881 = 1;
	int64_t x882 = INT64_MAX;

    t198 = ((x881*(x882%x883))==x884);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x885 = -1LL;
	volatile int16_t x886 = INT16_MIN;
	volatile uint16_t x887 = UINT16_MAX;
	int64_t x888 = -1LL;
	volatile int32_t t199 = 153751;

    t199 = ((x885*(x886%x887))==x888);

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

