
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

static int16_t x2 = INT16_MAX;
static int16_t x8 = INT16_MIN;
static int64_t x10 = -1LL;
int8_t x14 = INT8_MAX;
volatile uint8_t x19 = 1U;
int8_t x22 = -40;
static int64_t x28 = -1LL;
int8_t x30 = INT8_MIN;
int32_t t7 = -373716429;
int32_t x38 = INT32_MIN;
int16_t x54 = INT16_MAX;
int64_t x55 = INT64_MAX;
static uint8_t x61 = UINT8_MAX;
volatile int64_t x63 = -29841228LL;
volatile int32_t t15 = 712357;
uint32_t x66 = 931U;
volatile int32_t t17 = 1;
int32_t x74 = INT32_MIN;
static int64_t x75 = INT64_MAX;
int32_t t18 = 17532;
int64_t x80 = -1LL;
volatile uint32_t x82 = 541937101U;
static int16_t x84 = -1;
static int64_t x85 = -20482LL;
uint64_t x86 = UINT64_MAX;
static int16_t x88 = -1;
volatile uint32_t x89 = UINT32_MAX;
int32_t t22 = -114766057;
uint32_t x94 = 34U;
uint16_t x102 = 6005U;
uint32_t x105 = 336U;
int32_t t27 = 65;
static int64_t x114 = INT64_MAX;
uint32_t x115 = 8031551U;
static volatile int32_t t29 = 500;
int8_t x125 = -15;
int8_t x128 = INT8_MAX;
int32_t x132 = INT32_MAX;
int32_t t32 = -28;
int64_t x133 = 6110255632693874LL;
static uint8_t x134 = 18U;
int32_t x136 = INT32_MAX;
static volatile int8_t x137 = INT8_MIN;
static volatile int32_t t34 = 1055809391;
int64_t x143 = INT64_MIN;
static int8_t x144 = 19;
volatile int32_t x162 = -1;
static volatile uint64_t x163 = 383615862LLU;
volatile int32_t t40 = 49802522;
uint32_t x169 = 10U;
static volatile int8_t x171 = INT8_MIN;
int8_t x177 = 0;
static volatile uint8_t x178 = 126U;
int32_t x186 = 397744;
uint64_t x191 = 26014990092LLU;
uint16_t x194 = 3798U;
uint32_t x199 = 2855U;
volatile uint64_t x203 = 1420718282746557661LLU;
volatile uint8_t x205 = UINT8_MAX;
static volatile int8_t x210 = -1;
uint16_t x214 = 4582U;
volatile int8_t x217 = INT8_MIN;
int32_t x218 = INT32_MIN;
int32_t t57 = 197;
int32_t x239 = INT32_MIN;
uint32_t x244 = 823009U;
static int8_t x246 = INT8_MIN;
int32_t x248 = 0;
volatile int32_t t61 = 2130799;
volatile uint32_t x251 = UINT32_MAX;
uint32_t x253 = 1670158106U;
int16_t x256 = INT16_MIN;
int32_t x265 = -28;
int64_t x267 = INT64_MAX;
volatile int16_t x269 = INT16_MIN;
int32_t x270 = INT32_MIN;
int16_t x271 = -18;
static int8_t x275 = 0;
static int32_t t68 = -1364;
int16_t x279 = INT16_MAX;
volatile uint64_t x290 = 4447439891507225192LLU;
int16_t x295 = -1;
uint64_t x299 = 2578149LLU;
uint64_t x300 = UINT64_MAX;
int16_t x311 = INT16_MIN;
volatile int16_t x315 = -1;
uint16_t x316 = 2U;
int8_t x320 = INT8_MAX;
uint32_t x322 = UINT32_MAX;
uint8_t x326 = UINT8_MAX;
static int32_t t81 = 6593;
static volatile int32_t t82 = 4007;
int8_t x340 = 14;
int32_t t84 = -19795;
int16_t x341 = INT16_MIN;
static int32_t x342 = INT32_MIN;
static volatile int64_t x345 = INT64_MIN;
uint8_t x347 = 7U;
volatile int32_t x352 = -138;
int32_t t88 = 102673;
int16_t x359 = 365;
int8_t x360 = -11;
volatile int32_t t89 = -3500;
volatile int32_t t91 = -42;
volatile int32_t x371 = 97;
int32_t t92 = -5477;
int32_t x373 = INT32_MIN;
int8_t x374 = INT8_MIN;
static volatile int32_t t93 = -55;
volatile int64_t x377 = INT64_MIN;
int32_t t95 = -686219990;
volatile uint16_t x388 = 212U;
uint8_t x392 = 1U;
volatile int32_t t97 = 1866824;
int16_t x394 = INT16_MAX;
int64_t x398 = -1LL;
uint32_t x399 = UINT32_MAX;
volatile int8_t x409 = INT8_MIN;
static int8_t x411 = INT8_MIN;
int32_t x414 = INT32_MIN;
int8_t x415 = INT8_MIN;
static int32_t x417 = -1;
uint8_t x420 = 7U;
volatile int32_t t104 = -19;
static uint32_t x422 = 91442U;
uint64_t x425 = 5053LLU;
static int8_t x430 = -1;
int32_t x432 = INT32_MAX;
volatile int32_t t108 = -571;
int32_t x440 = -7914174;
volatile int32_t t109 = -3668;
int32_t x441 = 910689;
int32_t x445 = INT32_MIN;
int16_t x452 = 105;
int32_t x455 = INT32_MIN;
int16_t x459 = INT16_MIN;
uint16_t x464 = 181U;
uint32_t x470 = UINT32_MAX;
uint16_t x483 = 130U;
uint16_t x485 = 17665U;
static uint8_t x491 = 0U;
int32_t t122 = -12429;
int16_t x506 = -1;
int16_t x507 = -1;
int32_t t127 = 319826;
static uint64_t x515 = 1967773200472339LLU;
int8_t x523 = INT8_MIN;
static int64_t x526 = INT64_MAX;
uint32_t x528 = 91439U;
volatile int32_t t131 = -108649;
int32_t x529 = -1;
int16_t x530 = INT16_MIN;
uint8_t x534 = 16U;
volatile int64_t x546 = INT64_MIN;
int16_t x561 = INT16_MIN;
int16_t x564 = -1;
static volatile int32_t t140 = 44679;
int32_t x584 = INT32_MIN;
int16_t x587 = INT16_MAX;
volatile int32_t t146 = -9;
int16_t x591 = -1;
volatile int32_t t147 = 936214577;
uint8_t x603 = 15U;
int16_t x604 = INT16_MAX;
int32_t t150 = -58575974;
static int32_t x608 = 506031;
static int8_t x609 = -1;
static int8_t x610 = 1;
int8_t x616 = INT8_MIN;
volatile uint64_t x618 = UINT64_MAX;
volatile uint64_t x623 = UINT64_MAX;
volatile int32_t t156 = 28;
int8_t x638 = 18;
int64_t x645 = INT64_MAX;
int8_t x646 = -1;
int64_t x648 = 9199778LL;
volatile int32_t t161 = 14817533;
int32_t x652 = 91;
int8_t x654 = INT8_MIN;
static int8_t x656 = INT8_MAX;
static uint64_t x664 = 265715957029160LLU;
int32_t x665 = INT32_MIN;
int32_t t167 = -26786526;
uint16_t x677 = 1549U;
uint16_t x687 = 1696U;
volatile int32_t t171 = -858738;
int8_t x689 = INT8_MIN;
uint8_t x690 = UINT8_MAX;
int64_t x692 = -4722LL;
int32_t x695 = INT32_MIN;
int64_t x698 = INT64_MIN;
int32_t t174 = -1;
uint16_t x702 = UINT16_MAX;
int64_t x704 = -1LL;
uint64_t x705 = 6LLU;
volatile int64_t x707 = -1LL;
int32_t x710 = 147676688;
volatile uint16_t x712 = 5325U;
volatile int32_t t177 = -3839050;
static int64_t x717 = INT64_MAX;
static uint32_t x718 = 28U;
uint32_t x733 = UINT32_MAX;
static int8_t x735 = -8;
int32_t t185 = -751;
volatile uint8_t x748 = 6U;
int32_t x749 = 144961;
volatile int8_t x754 = -30;
uint64_t x757 = UINT64_MAX;
static volatile int32_t t189 = 0;
volatile uint8_t x766 = UINT8_MAX;
static uint8_t x775 = UINT8_MAX;
volatile int32_t t193 = -3679;
int32_t t194 = 0;
int16_t x783 = INT16_MAX;
int32_t x784 = -354253844;
volatile int64_t x788 = INT64_MIN;
volatile int32_t t196 = -908;
int8_t x789 = 32;
int32_t x790 = INT32_MAX;
volatile int64_t x792 = -1LL;


void f0(void) {
    	static uint32_t x1 = 388U;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 53099223;

    t0 = ((x1|x2)>(x3>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -13;
	uint8_t x6 = 6U;
	static volatile uint32_t x7 = 2132188725U;
	volatile int32_t t1 = -9097;

    t1 = ((x5|x6)>(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	static int32_t x11 = -1;
	static uint16_t x12 = 15U;
	volatile int32_t t2 = -79391813;

    t2 = ((x9|x10)>(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -467321310;

    t3 = ((x13|x14)>(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static int64_t x18 = -3163LL;
	uint8_t x20 = 33U;
	volatile int32_t t4 = 1050371;

    t4 = ((x17|x18)>(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	static volatile int8_t x23 = -42;
	volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -1875;

    t5 = ((x21|x22)>(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 6129U;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	volatile int32_t t6 = -1724;

    t6 = ((x25|x26)>(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	volatile uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 50U;

    t7 = ((x29|x30)>(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1405356LLU;
	volatile int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MAX;
	volatile uint64_t x36 = 214139677421489785LLU;
	volatile int32_t t8 = -5;

    t8 = ((x33|x34)>(x35>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 369366447821022158LL;
	volatile uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = 0;

    t9 = ((x37|x38)>(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 0;
	int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MAX;
	static int64_t x44 = INT64_MIN;
	int32_t t10 = -206;

    t10 = ((x41|x42)>(x43>x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = -94;
	int8_t x48 = 0;
	volatile int32_t t11 = -5665456;

    t11 = ((x45|x46)>(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static int64_t x50 = -5172433392LL;
	int64_t x51 = -1LL;
	uint64_t x52 = 333630553240602287LLU;
	volatile int32_t t12 = -15944604;

    t12 = ((x49|x50)>(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	uint16_t x56 = 20U;
	int32_t t13 = -48152;

    t13 = ((x53|x54)>(x55>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 701;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = -38;
	int16_t x60 = 3;
	int32_t t14 = 1;

    t14 = ((x57|x58)>(x59>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = -305967723;
	volatile int8_t x64 = INT8_MIN;

    t15 = ((x61|x62)>(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 6786779761LL;
	volatile int16_t x67 = 58;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 9;

    t16 = ((x65|x66)>(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MAX;
	static volatile int32_t x71 = 16695045;
	int16_t x72 = -1;

    t17 = ((x69|x70)>(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = 12;
	int16_t x76 = INT16_MIN;

    t18 = ((x73|x74)>(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = -1;
	int32_t x79 = -1;
	int32_t t19 = 456947;

    t19 = ((x77|x78)>(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x81 = INT64_MIN;
	static uint16_t x83 = UINT16_MAX;
	int32_t t20 = -1;

    t20 = ((x81|x82)>(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x87 = 169U;
	volatile int32_t t21 = -1;

    t21 = ((x85|x86)>(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x90 = -1;
	int16_t x91 = -1;
	static uint8_t x92 = 15U;

    t22 = ((x89|x90)>(x91>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	uint64_t x95 = 7636891085815843LLU;
	uint8_t x96 = 0U;
	int32_t t23 = 27;

    t23 = ((x93|x94)>(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 7;
	uint8_t x98 = UINT8_MAX;
	volatile int8_t x99 = INT8_MAX;
	int8_t x100 = 1;
	volatile int32_t t24 = -17042;

    t24 = ((x97|x98)>(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int32_t x103 = 1;
	int64_t x104 = INT64_MAX;
	int32_t t25 = -11067756;

    t25 = ((x101|x102)>(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = 5LL;
	int32_t t26 = 30528692;

    t26 = ((x105|x106)>(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int16_t x110 = 1;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;

    t27 = ((x109|x110)>(x111>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = -417818;

    t28 = ((x113|x114)>(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	uint8_t x119 = 53U;
	static uint8_t x120 = 58U;

    t29 = ((x117|x118)>(x119>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	static int16_t x122 = -1;
	volatile int8_t x123 = -1;
	int8_t x124 = -54;
	volatile int32_t t30 = -945324902;

    t30 = ((x121|x122)>(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MAX;
	int32_t t31 = -3969175;

    t31 = ((x125|x126)>(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	int32_t x130 = -1;
	int32_t x131 = INT32_MIN;

    t32 = ((x129|x130)>(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x135 = INT8_MIN;
	static volatile int32_t t33 = 2147;

    t33 = ((x133|x134)>(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = UINT64_MAX;
	static volatile int32_t x139 = 285156326;
	volatile uint8_t x140 = UINT8_MAX;

    t34 = ((x137|x138)>(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	int16_t x142 = INT16_MIN;
	volatile int32_t t35 = -1949;

    t35 = ((x141|x142)>(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	volatile int8_t x146 = -1;
	uint8_t x147 = 23U;
	int8_t x148 = 59;
	volatile int32_t t36 = 56;

    t36 = ((x145|x146)>(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	uint32_t x150 = 14997U;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 276788497974LLU;
	volatile int32_t t37 = -14943;

    t37 = ((x149|x150)>(x151>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -11;
	static uint16_t x154 = 0U;
	uint16_t x155 = 943U;
	static uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = 817;

    t38 = ((x153|x154)>(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 11U;
	volatile int64_t x160 = INT64_MIN;
	int32_t t39 = 9772;

    t39 = ((x157|x158)>(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MAX;
	int16_t x164 = INT16_MIN;

    t40 = ((x161|x162)>(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;
	int32_t t41 = 4595094;

    t41 = ((x165|x166)>(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x170 = INT32_MAX;
	int64_t x172 = 118452LL;
	int32_t t42 = 213;

    t42 = ((x169|x170)>(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	static uint32_t x176 = 280507291U;
	int32_t t43 = -10031;

    t43 = ((x173|x174)>(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x179 = 7622609036493655LLU;
	static int16_t x180 = -1;
	volatile int32_t t44 = -2019;

    t44 = ((x177|x178)>(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 54371;

    t45 = ((x181|x182)>(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -1;
	volatile int32_t x187 = INT32_MIN;
	volatile int8_t x188 = INT8_MIN;
	int32_t t46 = -440218;

    t46 = ((x185|x186)>(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = 103LL;
	int8_t x192 = 13;
	int32_t t47 = 1100;

    t47 = ((x189|x190)>(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	int32_t x195 = 3750539;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -6;

    t48 = ((x193|x194)>(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = INT64_MAX;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = -125674121;

    t49 = ((x197|x198)>(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 877928U;
	static int32_t x202 = INT32_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 2448;

    t50 = ((x201|x202)>(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x206 = -1LL;
	int16_t x207 = -68;
	int32_t x208 = -1;
	int32_t t51 = -11;

    t51 = ((x205|x206)>(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	int8_t x211 = INT8_MAX;
	volatile int32_t x212 = -1;
	volatile int32_t t52 = 27;

    t52 = ((x209|x210)>(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	int32_t x215 = 33964620;
	int8_t x216 = -1;
	static int32_t t53 = 3943359;

    t53 = ((x213|x214)>(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x219 = 169LLU;
	volatile int64_t x220 = -1LL;
	volatile int32_t t54 = -6076059;

    t54 = ((x217|x218)>(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	int32_t x222 = -1;
	int16_t x223 = 12742;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -92133069;

    t55 = ((x221|x222)>(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile uint16_t x227 = 16120U;
	static int32_t x228 = -135041950;
	volatile int32_t t56 = 0;

    t56 = ((x225|x226)>(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 59;
	int8_t x230 = -4;
	volatile int8_t x231 = INT8_MIN;
	uint32_t x232 = UINT32_MAX;

    t57 = ((x229|x230)>(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = 520462530629398LL;
	static uint8_t x234 = 40U;
	int32_t x235 = INT32_MIN;
	static int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = -651197;

    t58 = ((x233|x234)>(x235>x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 1U;
	volatile int8_t x238 = -15;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 841202135;

    t59 = ((x237|x238)>(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static uint8_t x242 = UINT8_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t t60 = -9062;

    t60 = ((x241|x242)>(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 7U;
	static int32_t x247 = INT32_MIN;

    t61 = ((x245|x246)>(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MAX;
	int16_t x252 = INT16_MAX;
	static int32_t t62 = -1;

    t62 = ((x249|x250)>(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	volatile int32_t t63 = 2;

    t63 = ((x253|x254)>(x255>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x258 = -1;
	volatile uint8_t x259 = 2U;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = 1;

    t64 = ((x257|x258)>(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint64_t x262 = 4235232967590LLU;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = -1872;

    t65 = ((x261|x262)>(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 0U;
	static int16_t x268 = -1;
	static volatile int32_t t66 = 604512925;

    t66 = ((x265|x266)>(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x272 = 1821U;
	static int32_t t67 = -564182351;

    t67 = ((x269|x270)>(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 21U;
	uint32_t x274 = 1U;
	uint32_t x276 = 27871969U;

    t68 = ((x273|x274)>(x275>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static int16_t x278 = 88;
	static uint64_t x280 = 3259LLU;
	int32_t t69 = 66660617;

    t69 = ((x277|x278)>(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -369;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	static int8_t x284 = INT8_MIN;
	static int32_t t70 = -1;

    t70 = ((x281|x282)>(x283>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x285 = UINT32_MAX;
	volatile uint64_t x286 = 111457LLU;
	uint64_t x287 = 2154473456264263255LLU;
	uint32_t x288 = UINT32_MAX;
	int32_t t71 = -32458117;

    t71 = ((x285|x286)>(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = UINT16_MAX;
	uint32_t x291 = 153339521U;
	int32_t x292 = 81;
	int32_t t72 = 53;

    t72 = ((x289|x290)>(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	uint64_t x294 = UINT64_MAX;
	uint64_t x296 = 75996LLU;
	volatile int32_t t73 = -208803;

    t73 = ((x293|x294)>(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	static int32_t t74 = -1;

    t74 = ((x297|x298)>(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	static uint16_t x302 = 129U;
	int64_t x303 = INT64_MIN;
	uint8_t x304 = 13U;
	volatile int32_t t75 = 1549;

    t75 = ((x301|x302)>(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 5;
	int8_t x306 = -1;
	uint16_t x307 = 1981U;
	static int64_t x308 = -3880523LL;
	int32_t t76 = 317385311;

    t76 = ((x305|x306)>(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -5896;
	int16_t x310 = -1;
	int64_t x312 = -1LL;
	static volatile int32_t t77 = -6;

    t77 = ((x309|x310)>(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 8103U;
	static int32_t x314 = -1;
	static volatile int32_t t78 = 6338;

    t78 = ((x313|x314)>(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	int16_t x319 = -8;
	volatile int32_t t79 = -37097;

    t79 = ((x317|x318)>(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 0;
	int16_t x323 = 3;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -273;

    t80 = ((x321|x322)>(x323>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	uint16_t x327 = 0U;
	int8_t x328 = INT8_MIN;

    t81 = ((x325|x326)>(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 0;
	uint16_t x330 = 1U;
	volatile uint64_t x331 = UINT64_MAX;
	uint8_t x332 = 1U;

    t82 = ((x329|x330)>(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -1;
	volatile int32_t x334 = 3016;
	uint8_t x335 = 15U;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = -24;

    t83 = ((x333|x334)>(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = 25U;
	uint16_t x339 = UINT16_MAX;

    t84 = ((x337|x338)>(x339>x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x343 = 783U;
	int64_t x344 = -612907LL;
	static volatile int32_t t85 = 214;

    t85 = ((x341|x342)>(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x346 = UINT32_MAX;
	static uint32_t x348 = 457074U;
	volatile int32_t t86 = -93273;

    t86 = ((x345|x346)>(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int32_t t87 = 3161252;

    t87 = ((x349|x350)>(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -23705389LL;
	volatile uint64_t x354 = UINT64_MAX;
	int16_t x355 = 0;
	static uint32_t x356 = 2524284U;

    t88 = ((x353|x354)>(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	volatile uint8_t x358 = 0U;

    t89 = ((x357|x358)>(x359>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 3562U;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 1;

    t90 = ((x361|x362)>(x363>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 12678546U;
	uint64_t x367 = 480783055LLU;
	static uint32_t x368 = UINT32_MAX;

    t91 = ((x365|x366)>(x367>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 861265127LLU;
	static int64_t x370 = -3454770654LL;
	int8_t x372 = -5;

    t92 = ((x369|x370)>(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x375 = 1U;
	volatile uint64_t x376 = 51288554LLU;

    t93 = ((x373|x374)>(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 501U;
	int64_t x379 = INT64_MIN;
	int32_t x380 = 16329392;
	static volatile int32_t t94 = 1;

    t94 = ((x377|x378)>(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int8_t x382 = 27;
	int8_t x383 = INT8_MAX;
	static volatile uint64_t x384 = 594974181097291627LLU;

    t95 = ((x381|x382)>(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 3151163U;
	uint32_t x387 = UINT32_MAX;
	volatile int32_t t96 = 3169;

    t96 = ((x385|x386)>(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 96U;
	static int8_t x390 = INT8_MIN;
	uint32_t x391 = 29U;

    t97 = ((x389|x390)>(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -126;
	uint16_t x395 = 355U;
	static uint32_t x396 = UINT32_MAX;
	int32_t t98 = 5693;

    t98 = ((x393|x394)>(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x397 = 27U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -10439;

    t99 = ((x397|x398)>(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MAX;
	int32_t x403 = 9;
	static int32_t x404 = INT32_MIN;
	int32_t t100 = -7699205;

    t100 = ((x401|x402)>(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 7640409190659120LLU;
	static int32_t x406 = INT32_MIN;
	static uint16_t x407 = UINT16_MAX;
	static volatile int32_t x408 = -100;
	static volatile int32_t t101 = -72075561;

    t101 = ((x405|x406)>(x407>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -35560484;
	int16_t x412 = INT16_MIN;
	int32_t t102 = 874;

    t102 = ((x409|x410)>(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = -178;
	volatile uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = 47878;

    t103 = ((x413|x414)>(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MAX;
	int64_t x419 = 357LL;

    t104 = ((x417|x418)>(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 27;
	volatile uint32_t x423 = 3395U;
	int16_t x424 = 1;
	volatile int32_t t105 = 223005358;

    t105 = ((x421|x422)>(x423>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MIN;
	uint64_t x427 = 164LLU;
	int16_t x428 = -4734;
	int32_t t106 = 1;

    t106 = ((x425|x426)>(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MAX;
	static int8_t x431 = INT8_MIN;
	int32_t t107 = -170;

    t107 = ((x429|x430)>(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = 1U;
	int64_t x434 = -1LL;
	uint64_t x435 = 399393903498LLU;
	static int16_t x436 = -136;

    t108 = ((x433|x434)>(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 7012286LLU;
	int16_t x438 = INT16_MAX;
	static int16_t x439 = INT16_MIN;

    t109 = ((x437|x438)>(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = -1;
	int8_t x443 = INT8_MAX;
	int64_t x444 = -10176650763593LL;
	volatile int32_t t110 = -119112;

    t110 = ((x441|x442)>(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x446 = -9230017086139LL;
	int8_t x447 = -1;
	int8_t x448 = 1;
	int32_t t111 = 12852263;

    t111 = ((x445|x446)>(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 1U;
	volatile int16_t x450 = 6026;
	volatile uint64_t x451 = UINT64_MAX;
	volatile int32_t t112 = 18;

    t112 = ((x449|x450)>(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 4086U;
	uint16_t x454 = 1U;
	int32_t x456 = -59523241;
	volatile int32_t t113 = -174372;

    t113 = ((x453|x454)>(x455>x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 1;
	uint8_t x458 = 0U;
	static uint16_t x460 = 0U;
	int32_t t114 = -1;

    t114 = ((x457|x458)>(x459>x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 7U;
	uint32_t x462 = 28585822U;
	int32_t x463 = INT32_MAX;
	volatile int32_t t115 = 41643103;

    t115 = ((x461|x462)>(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	int32_t x466 = 7;
	int8_t x467 = 1;
	volatile uint16_t x468 = UINT16_MAX;
	int32_t t116 = 77852000;

    t116 = ((x465|x466)>(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = -1;
	volatile int8_t x471 = INT8_MAX;
	static volatile uint64_t x472 = UINT64_MAX;
	static volatile int32_t t117 = -10;

    t117 = ((x469|x470)>(x471>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 121563;
	volatile uint16_t x474 = UINT16_MAX;
	volatile int64_t x475 = -1LL;
	int32_t x476 = 92;
	volatile int32_t t118 = -578100;

    t118 = ((x473|x474)>(x475>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int8_t x478 = INT8_MIN;
	static int16_t x479 = -1;
	int64_t x480 = 105928012650LL;
	int32_t t119 = -802;

    t119 = ((x477|x478)>(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -9901LL;
	static int64_t x482 = -387643767005LL;
	int32_t x484 = 274;
	static int32_t t120 = 19976793;

    t120 = ((x481|x482)>(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x486 = 3200U;
	static volatile int32_t x487 = INT32_MAX;
	int64_t x488 = -18058LL;
	volatile int32_t t121 = -1;

    t121 = ((x485|x486)>(x487>x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = UINT64_MAX;
	int16_t x490 = INT16_MIN;
	static int8_t x492 = 0;

    t122 = ((x489|x490)>(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MIN;
	uint64_t x494 = 191374LLU;
	static int32_t x495 = -74582;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = -308024914;

    t123 = ((x493|x494)>(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int32_t x498 = 1030453;
	int8_t x499 = INT8_MIN;
	int8_t x500 = 5;
	volatile int32_t t124 = -541423857;

    t124 = ((x497|x498)>(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = -202;
	volatile int64_t x502 = -212LL;
	int64_t x503 = INT64_MAX;
	uint64_t x504 = 690930LLU;
	volatile int32_t t125 = 338326139;

    t125 = ((x501|x502)>(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 16LLU;
	static uint16_t x508 = 178U;
	volatile int32_t t126 = 0;

    t126 = ((x505|x506)>(x507>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = -1;
	int16_t x510 = INT16_MAX;
	int32_t x511 = INT32_MAX;
	int16_t x512 = INT16_MAX;

    t127 = ((x509|x510)>(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MAX;
	volatile int64_t x514 = INT64_MIN;
	int32_t x516 = -2993575;
	volatile int32_t t128 = -1122147;

    t128 = ((x513|x514)>(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x517 = 121U;
	volatile uint8_t x518 = UINT8_MAX;
	static int16_t x519 = -9;
	uint16_t x520 = UINT16_MAX;
	int32_t t129 = -94851781;

    t129 = ((x517|x518)>(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	uint64_t x522 = 912201201082655LLU;
	volatile uint8_t x524 = 2U;
	int32_t t130 = 1;

    t130 = ((x521|x522)>(x523>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = 20LL;
	static int64_t x527 = INT64_MIN;

    t131 = ((x525|x526)>(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x531 = INT64_MIN;
	uint32_t x532 = 171U;
	static volatile int32_t t132 = 638;

    t132 = ((x529|x530)>(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 1U;
	int64_t x535 = 352484LL;
	int64_t x536 = 29723187LL;
	static int32_t t133 = 3;

    t133 = ((x533|x534)>(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -18;
	int32_t x538 = -1;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = 1973U;
	int32_t t134 = -6883;

    t134 = ((x537|x538)>(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	int32_t x542 = INT32_MIN;
	int32_t x543 = -1;
	int8_t x544 = -47;
	volatile int32_t t135 = 2284;

    t135 = ((x541|x542)>(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MIN;
	static volatile uint32_t x547 = 841U;
	int32_t x548 = 0;
	int32_t t136 = -11505;

    t136 = ((x545|x546)>(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = 153U;
	uint32_t x550 = UINT32_MAX;
	uint32_t x551 = 95166U;
	int32_t x552 = INT32_MIN;
	int32_t t137 = -44;

    t137 = ((x549|x550)>(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -470;
	static volatile int16_t x554 = INT16_MAX;
	volatile int64_t x555 = -1LL;
	volatile uint8_t x556 = UINT8_MAX;
	volatile int32_t t138 = -3;

    t138 = ((x553|x554)>(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static uint8_t x558 = 0U;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = INT32_MIN;
	int32_t t139 = 331138;

    t139 = ((x557|x558)>(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MIN;
	uint8_t x563 = UINT8_MAX;

    t140 = ((x561|x562)>(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	uint16_t x567 = 35U;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t141 = -5;

    t141 = ((x565|x566)>(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	int32_t x570 = 0;
	static int32_t x571 = INT32_MIN;
	volatile uint16_t x572 = 28346U;
	int32_t t142 = 36706;

    t142 = ((x569|x570)>(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x573 = 2U;
	uint8_t x574 = 24U;
	int16_t x575 = -1;
	int8_t x576 = INT8_MIN;
	int32_t t143 = 36;

    t143 = ((x573|x574)>(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -906524LL;
	int32_t x578 = 0;
	volatile int8_t x579 = INT8_MIN;
	static uint32_t x580 = 1422218716U;
	volatile int32_t t144 = 3558830;

    t144 = ((x577|x578)>(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 6U;
	uint8_t x582 = 6U;
	volatile int64_t x583 = -1LL;
	int32_t t145 = -310329;

    t145 = ((x581|x582)>(x583>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 1;
	volatile uint16_t x586 = UINT16_MAX;
	static uint8_t x588 = 18U;

    t146 = ((x585|x586)>(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint32_t x590 = UINT32_MAX;
	uint8_t x592 = UINT8_MAX;

    t147 = ((x589|x590)>(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	uint64_t x594 = UINT64_MAX;
	uint32_t x595 = 190337572U;
	uint32_t x596 = 36931U;
	static int32_t t148 = 494217;

    t148 = ((x593|x594)>(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -2241;
	int32_t x598 = -1;
	static uint16_t x599 = UINT16_MAX;
	int64_t x600 = 881183493944303736LL;
	volatile int32_t t149 = 3595421;

    t149 = ((x597|x598)>(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	volatile int32_t x602 = INT32_MAX;

    t150 = ((x601|x602)>(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -2764457809568301LL;
	uint64_t x606 = 1392378525785LLU;
	volatile uint8_t x607 = 1U;
	int32_t t151 = -1599;

    t151 = ((x605|x606)>(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x611 = 4409;
	int16_t x612 = -395;
	static int32_t t152 = 70339;

    t152 = ((x609|x610)>(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = 1;
	int64_t x614 = INT64_MIN;
	volatile int8_t x615 = -1;
	static volatile int32_t t153 = 11;

    t153 = ((x613|x614)>(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	static int16_t x619 = INT16_MAX;
	uint32_t x620 = 13401U;
	int32_t t154 = 15805;

    t154 = ((x617|x618)>(x619>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 0U;
	uint64_t x622 = 102055307707842496LLU;
	int64_t x624 = INT64_MIN;
	int32_t t155 = -19935667;

    t155 = ((x621|x622)>(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = -1;
	static int64_t x626 = INT64_MIN;
	static int32_t x627 = INT32_MIN;
	volatile uint8_t x628 = 34U;

    t156 = ((x625|x626)>(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 0;
	uint8_t x630 = 0U;
	int32_t x631 = -1;
	volatile int8_t x632 = -28;
	static volatile int32_t t157 = -1596;

    t157 = ((x629|x630)>(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	volatile int32_t x634 = INT32_MIN;
	uint64_t x635 = UINT64_MAX;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = -3900082;

    t158 = ((x633|x634)>(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	uint8_t x639 = 7U;
	volatile int8_t x640 = -1;
	int32_t t159 = 2;

    t159 = ((x637|x638)>(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MIN;
	uint32_t x643 = 1U;
	int16_t x644 = INT16_MIN;
	int32_t t160 = -1380;

    t160 = ((x641|x642)>(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x647 = INT32_MIN;

    t161 = ((x645|x646)>(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 0U;
	uint64_t x650 = 109025935025LLU;
	int32_t x651 = INT32_MAX;
	int32_t t162 = -17598;

    t162 = ((x649|x650)>(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int32_t x655 = INT32_MAX;
	volatile int32_t t163 = -54;

    t163 = ((x653|x654)>(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	static volatile uint8_t x658 = UINT8_MAX;
	int64_t x659 = -182470656169153LL;
	static volatile uint8_t x660 = 21U;
	int32_t t164 = 158;

    t164 = ((x657|x658)>(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	uint32_t x662 = UINT32_MAX;
	uint32_t x663 = 238U;
	int32_t t165 = -23957;

    t165 = ((x661|x662)>(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x666 = UINT8_MAX;
	uint32_t x667 = UINT32_MAX;
	int8_t x668 = -13;
	int32_t t166 = 1979510;

    t166 = ((x665|x666)>(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -2;
	int8_t x670 = -1;
	int32_t x671 = 32;
	int64_t x672 = INT64_MIN;

    t167 = ((x669|x670)>(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	uint64_t x674 = 216LLU;
	uint16_t x675 = 13U;
	volatile uint8_t x676 = 13U;
	int32_t t168 = -1;

    t168 = ((x673|x674)>(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = UINT64_MAX;
	int16_t x679 = 78;
	int16_t x680 = INT16_MIN;
	volatile int32_t t169 = 872;

    t169 = ((x677|x678)>(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	uint16_t x682 = 53U;
	int32_t x683 = INT32_MIN;
	volatile int32_t x684 = INT32_MIN;
	int32_t t170 = -196485;

    t170 = ((x681|x682)>(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	static int8_t x686 = INT8_MIN;
	static int32_t x688 = INT32_MIN;

    t171 = ((x685|x686)>(x687>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x691 = INT8_MAX;
	volatile int32_t t172 = 0;

    t172 = ((x689|x690)>(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	uint32_t x694 = UINT32_MAX;
	static int64_t x696 = -341015145LL;
	static volatile int32_t t173 = -1064744;

    t173 = ((x693|x694)>(x695>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x699 = 543679966653241794LLU;
	int32_t x700 = INT32_MIN;

    t174 = ((x697|x698)>(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -9;
	int32_t x703 = -1;
	int32_t t175 = -98109601;

    t175 = ((x701|x702)>(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = UINT16_MAX;
	static uint8_t x708 = UINT8_MAX;
	int32_t t176 = 6145;

    t176 = ((x705|x706)>(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	volatile int32_t x711 = INT32_MAX;

    t177 = ((x709|x710)>(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 1;
	int16_t x714 = INT16_MIN;
	static int8_t x715 = 1;
	uint16_t x716 = 0U;
	static int32_t t178 = -438;

    t178 = ((x713|x714)>(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x719 = 1;
	static int32_t x720 = -1;
	int32_t t179 = 33365;

    t179 = ((x717|x718)>(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = -1;
	int16_t x722 = INT16_MIN;
	int8_t x723 = -30;
	static int64_t x724 = INT64_MIN;
	static volatile int32_t t180 = -171;

    t180 = ((x721|x722)>(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = 712991591160705287LL;
	int16_t x726 = -44;
	int16_t x727 = -1;
	static volatile int8_t x728 = -1;
	int32_t t181 = 3;

    t181 = ((x725|x726)>(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 4182U;
	volatile uint64_t x730 = 112871254658226758LLU;
	int16_t x731 = 1502;
	static volatile int8_t x732 = -27;
	int32_t t182 = 55835;

    t182 = ((x729|x730)>(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x734 = -11;
	static volatile int32_t x736 = INT32_MIN;
	volatile int32_t t183 = 27633;

    t183 = ((x733|x734)>(x735>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = INT8_MAX;
	int64_t x738 = -1LL;
	uint32_t x739 = 73106U;
	static volatile uint16_t x740 = 71U;
	static int32_t t184 = 30174;

    t184 = ((x737|x738)>(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 62200;
	static int8_t x742 = 39;
	uint32_t x743 = 95U;
	static uint16_t x744 = 4282U;

    t185 = ((x741|x742)>(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	volatile uint8_t x747 = 3U;
	int32_t t186 = -5;

    t186 = ((x745|x746)>(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x750 = INT16_MIN;
	volatile int64_t x751 = INT64_MAX;
	int8_t x752 = -1;
	int32_t t187 = -883053;

    t187 = ((x749|x750)>(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	static uint8_t x755 = 49U;
	static int16_t x756 = -3;
	int32_t t188 = 408;

    t188 = ((x753|x754)>(x755>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = INT64_MAX;
	int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;

    t189 = ((x757|x758)>(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -1;
	uint32_t x762 = 702U;
	static int64_t x763 = INT64_MIN;
	uint16_t x764 = 5U;
	volatile int32_t t190 = 7;

    t190 = ((x761|x762)>(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -47;
	static uint64_t x767 = 150111877231584639LLU;
	volatile int8_t x768 = 0;
	static int32_t t191 = -3208207;

    t191 = ((x765|x766)>(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	static int16_t x770 = INT16_MIN;
	uint8_t x771 = UINT8_MAX;
	int64_t x772 = INT64_MAX;
	volatile int32_t t192 = -1;

    t192 = ((x769|x770)>(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 6U;
	int8_t x774 = 2;
	int8_t x776 = -3;

    t193 = ((x773|x774)>(x775>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = 46123486620311585LL;
	uint32_t x778 = UINT32_MAX;
	int32_t x779 = INT32_MIN;
	volatile int8_t x780 = -1;

    t194 = ((x777|x778)>(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	volatile int16_t x782 = INT16_MAX;
	volatile int32_t t195 = -170;

    t195 = ((x781|x782)>(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 9956U;
	uint64_t x786 = UINT64_MAX;
	uint64_t x787 = UINT64_MAX;

    t196 = ((x785|x786)>(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x791 = -1LL;
	volatile int32_t t197 = 2054300;

    t197 = ((x789|x790)>(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = -1;
	int32_t x794 = INT32_MIN;
	uint32_t x795 = UINT32_MAX;
	int32_t x796 = -50439461;
	int32_t t198 = 11675;

    t198 = ((x793|x794)>(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	uint32_t x800 = UINT32_MAX;
	volatile int32_t t199 = 110;

    t199 = ((x797|x798)>(x799>x800));

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

