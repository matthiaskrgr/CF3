
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

static int32_t x2 = -170542;
uint64_t x8 = 74963725511664100LLU;
int16_t x11 = 589;
int64_t x14 = INT64_MIN;
int8_t x24 = INT8_MIN;
volatile int32_t t5 = -12;
int32_t t8 = -2;
int64_t x40 = INT64_MIN;
static int16_t x43 = -1;
int64_t x45 = 4LL;
int32_t x47 = INT32_MIN;
volatile int32_t x49 = INT32_MIN;
int32_t x50 = INT32_MAX;
uint16_t x52 = 291U;
static int32_t t13 = 66;
int32_t x58 = INT32_MIN;
int64_t x59 = INT64_MAX;
volatile int32_t x63 = INT32_MIN;
int32_t x69 = INT32_MAX;
int32_t x72 = -1;
volatile int32_t t17 = 0;
static int32_t t20 = -8135;
volatile int8_t x89 = -22;
static int16_t x92 = INT16_MIN;
static volatile int32_t t22 = -312;
int16_t x96 = INT16_MIN;
volatile int16_t x97 = 3335;
static uint16_t x98 = UINT16_MAX;
int32_t t24 = 3146;
int64_t x101 = 2423LL;
int32_t x110 = -1;
uint64_t x119 = 96461636LLU;
static int64_t x120 = -1LL;
static int8_t x127 = -44;
static volatile uint16_t x133 = 373U;
uint32_t x134 = 121914U;
uint64_t x137 = 111LLU;
static int32_t x139 = 26;
int16_t x142 = -1;
volatile int32_t t34 = 98824;
int8_t x147 = 38;
int64_t x151 = -47LL;
int64_t x168 = INT64_MIN;
volatile int32_t t38 = -637408703;
uint8_t x175 = 6U;
static volatile uint8_t x181 = 2U;
volatile int16_t x182 = 7693;
int32_t x188 = -7176210;
static volatile int32_t t42 = -59659256;
int32_t x196 = 1071;
uint16_t x201 = 6U;
volatile int8_t x202 = -1;
static int32_t t46 = -38360;
volatile int64_t x205 = -1LL;
uint32_t x211 = 8U;
int32_t x215 = INT32_MIN;
static int16_t x217 = INT16_MIN;
uint32_t x221 = 9905U;
volatile int8_t x222 = INT8_MIN;
uint32_t x224 = UINT32_MAX;
static uint32_t x226 = 12037U;
volatile int32_t t52 = -4039;
uint32_t x231 = 36037452U;
volatile int32_t t53 = 345596;
volatile int32_t t57 = 3791464;
int16_t x259 = INT16_MIN;
volatile int32_t t60 = 111991;
int16_t x272 = INT16_MIN;
int16_t x275 = 1058;
int64_t x276 = INT64_MIN;
volatile uint32_t x287 = 1728U;
volatile int32_t x290 = INT32_MIN;
volatile uint8_t x291 = 25U;
int8_t x295 = INT8_MIN;
static volatile int64_t x297 = INT64_MAX;
int64_t x310 = INT64_MIN;
uint64_t x316 = 13989355663LLU;
int64_t x317 = 230882394254682637LL;
static volatile uint32_t x324 = UINT32_MAX;
static int8_t x325 = 1;
static volatile int32_t t75 = -535;
int32_t t76 = -157;
uint8_t x337 = 1U;
uint64_t x339 = 2230791324LLU;
static int32_t x342 = -25;
static uint64_t x343 = UINT64_MAX;
int64_t x353 = 246403218LL;
int16_t x360 = -1;
volatile int32_t t82 = 33232;
uint32_t x368 = 32U;
static int32_t x371 = -1;
uint64_t x372 = UINT64_MAX;
volatile int32_t t84 = 2350;
volatile int32_t t86 = 117840183;
static int16_t x386 = INT16_MIN;
int64_t x397 = -12988874268910LL;
int16_t x417 = -60;
volatile int32_t t92 = -7;
int32_t x423 = -5;
int8_t x424 = INT8_MAX;
volatile int32_t t93 = -14;
int8_t x432 = INT8_MAX;
static int16_t x434 = -1;
static int32_t x437 = INT32_MIN;
int32_t x441 = 726449;
int32_t x449 = INT32_MAX;
uint64_t x458 = 409597697916628360LLU;
int8_t x466 = -6;
uint64_t x467 = 27985344221LLU;
int32_t t104 = -13744;
int64_t x473 = -1LL;
uint64_t x478 = 9542LLU;
volatile int8_t x479 = INT8_MAX;
uint64_t x480 = 29153958403601LLU;
int32_t t109 = 214306;
static uint16_t x502 = 7130U;
int32_t x506 = INT32_MIN;
int32_t x519 = -1;
static uint32_t x520 = UINT32_MAX;
volatile uint8_t x523 = UINT8_MAX;
volatile int32_t t115 = 370160;
static volatile int32_t t117 = -40494719;
static int8_t x536 = INT8_MIN;
static int16_t x538 = -1;
uint16_t x539 = 0U;
int8_t x549 = -1;
static uint32_t x551 = 22U;
uint32_t x568 = 2024994U;
uint32_t x570 = UINT32_MAX;
volatile int32_t x571 = -254625370;
int16_t x580 = INT16_MAX;
int64_t x581 = 6242LL;
uint8_t x586 = UINT8_MAX;
uint32_t x601 = 28U;
volatile int64_t x605 = INT64_MIN;
int64_t x607 = -1LL;
int32_t t136 = 15;
int64_t x610 = INT64_MIN;
volatile int32_t t138 = -79497;
int8_t x617 = INT8_MIN;
static int32_t x624 = INT32_MAX;
static int64_t x629 = INT64_MIN;
volatile uint8_t x634 = 2U;
volatile uint64_t x635 = UINT64_MAX;
static volatile int8_t x637 = INT8_MIN;
uint32_t x642 = 8940U;
static volatile int32_t t144 = -16;
int8_t x645 = INT8_MIN;
int8_t x648 = -1;
volatile int32_t x651 = INT32_MIN;
int64_t x660 = 79640LL;
volatile int16_t x662 = -1;
int8_t x668 = INT8_MIN;
static int16_t x669 = INT16_MIN;
static volatile uint16_t x672 = 9827U;
static uint32_t x674 = UINT32_MAX;
uint16_t x679 = UINT16_MAX;
int64_t x680 = 3LL;
int32_t t153 = 38875;
int32_t x682 = INT32_MIN;
int8_t x685 = INT8_MIN;
int32_t x686 = INT32_MAX;
int16_t x688 = INT16_MIN;
int32_t t157 = 12940;
volatile int32_t t159 = -310;
volatile int8_t x707 = 43;
int16_t x708 = -1;
int16_t x712 = 82;
int64_t x713 = -1LL;
uint32_t x718 = UINT32_MAX;
int64_t x720 = INT64_MIN;
uint32_t x723 = 20456399U;
uint16_t x728 = UINT16_MAX;
volatile int32_t t166 = -25101;
volatile int16_t x735 = INT16_MIN;
static int32_t x736 = 76;
volatile int64_t x737 = 7313532719050LL;
int32_t t168 = 85654427;
int16_t x744 = -60;
uint64_t x745 = 578308111726LLU;
int8_t x749 = INT8_MIN;
static int32_t x754 = INT32_MAX;
uint64_t x757 = 74406LLU;
int32_t t173 = 75255127;
volatile int64_t x767 = -1LL;
volatile int8_t x772 = INT8_MIN;
static int16_t x779 = INT16_MIN;
static volatile int32_t t179 = -1;
int64_t x787 = INT64_MIN;
volatile uint64_t x789 = 21950898LLU;
int32_t x795 = 71628913;
uint64_t x799 = 3198755052LLU;
int8_t x803 = INT8_MIN;
uint64_t x806 = 15615519711376LLU;
volatile uint16_t x807 = 12U;
int8_t x812 = INT8_MAX;
uint16_t x814 = 5U;
int32_t t187 = -6;
static int64_t x824 = -1LL;
int8_t x831 = -1;
uint16_t x835 = 90U;
int8_t x836 = -28;
volatile int32_t t192 = 126030;
int64_t x838 = -1LL;
volatile int64_t x854 = 4076498277554204LL;
int32_t x857 = -83496;
volatile uint8_t x863 = 25U;
int32_t x867 = INT32_MIN;
int32_t t199 = 446;


void f0(void) {
    	int16_t x1 = -2;
	static volatile uint64_t x3 = 169728321938435LLU;
	int16_t x4 = -1;
	volatile int32_t t0 = 133;

    t0 = ((x1<=x2)>(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	static uint8_t x6 = 44U;
	uint32_t x7 = 1389652U;
	volatile int32_t t1 = 2411561;

    t1 = ((x5<=x6)>(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	int8_t x10 = 3;
	static uint32_t x12 = 21339401U;
	static volatile int32_t t2 = -1155237;

    t2 = ((x9<=x10)>(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = INT64_MIN;
	int8_t x15 = 0;
	volatile uint32_t x16 = 935300U;
	volatile int32_t t3 = 667204;

    t3 = ((x13<=x14)>(x15+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	static int32_t x18 = INT32_MIN;
	uint16_t x19 = 54U;
	uint8_t x20 = 7U;
	volatile int32_t t4 = 58464226;

    t4 = ((x17<=x18)>(x19+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 1;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = -1;

    t5 = ((x21<=x22)>(x23+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x25 = 226680U;
	int64_t x26 = 16LL;
	int32_t x27 = 954870566;
	uint32_t x28 = UINT32_MAX;
	static int32_t t6 = 69;

    t6 = ((x25<=x26)>(x27+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 6408426857188LLU;
	static volatile int8_t x30 = INT8_MIN;
	uint64_t x31 = 5LLU;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -11203862;

    t7 = ((x29<=x30)>(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static uint64_t x34 = 1029442864617LLU;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -1LL;

    t8 = ((x33<=x34)>(x35+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 29U;
	int16_t x38 = INT16_MAX;
	uint8_t x39 = UINT8_MAX;
	int32_t t9 = 6385842;

    t9 = ((x37<=x38)>(x39+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int64_t x44 = -1LL;
	int32_t t10 = 600607;

    t10 = ((x41<=x42)>(x43+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = INT32_MIN;
	volatile uint64_t x48 = 353857682874LLU;
	volatile int32_t t11 = -16095;

    t11 = ((x45<=x46)>(x47+x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MIN;
	int32_t t12 = 74;

    t12 = ((x49<=x50)>(x51+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 100U;
	static int8_t x54 = 16;
	uint64_t x55 = 1790LLU;
	uint32_t x56 = 1098640U;

    t13 = ((x53<=x54)>(x55+x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x60 = -5;
	volatile int32_t t14 = 2493;

    t14 = ((x57<=x58)>(x59+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x62 = 302687LLU;
	uint8_t x64 = 3U;
	volatile int32_t t15 = -51904375;

    t15 = ((x61<=x62)>(x63+x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	volatile int32_t x66 = -149391;
	uint16_t x67 = 6U;
	int8_t x68 = 61;
	int32_t t16 = -786571;

    t16 = ((x65<=x66)>(x67+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x70 = 59U;
	volatile int16_t x71 = INT16_MIN;

    t17 = ((x69<=x70)>(x71+x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 167575193U;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -14988;

    t18 = ((x73<=x74)>(x75+x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	uint64_t x78 = UINT64_MAX;
	static uint64_t x79 = 0LLU;
	uint8_t x80 = 12U;
	volatile int32_t t19 = 30879;

    t19 = ((x77<=x78)>(x79+x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	int64_t x82 = -1LL;
	int8_t x83 = 0;
	uint8_t x84 = UINT8_MAX;

    t20 = ((x81<=x82)>(x83+x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static int64_t x86 = -3109LL;
	int32_t x87 = 180709474;
	uint64_t x88 = 70068527179462LLU;
	int32_t t21 = -90644198;

    t21 = ((x85<=x86)>(x87+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;

    t22 = ((x89<=x90)>(x91+x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = -3537678964093098LL;
	uint32_t x95 = 3821U;
	static int32_t t23 = 785548062;

    t23 = ((x93<=x94)>(x95+x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x99 = 3210915U;
	int32_t x100 = INT32_MIN;

    t24 = ((x97<=x98)>(x99+x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x102 = -16;
	static volatile int64_t x103 = INT64_MIN;
	static int16_t x104 = 14;
	int32_t t25 = -499987;

    t25 = ((x101<=x102)>(x103+x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	static uint64_t x112 = 385275163LLU;
	volatile int32_t t26 = 10823;

    t26 = ((x109<=x110)>(x111+x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 7U;
	uint64_t x114 = 8134725569LLU;
	static volatile int64_t x115 = 9218320449108236LL;
	int32_t x116 = -433155937;
	int32_t t27 = -16772;

    t27 = ((x113<=x114)>(x115+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x117 = 252506059235814LLU;
	int32_t x118 = -1;
	static int32_t t28 = 65439791;

    t28 = ((x117<=x118)>(x119+x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 1;
	static int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	static volatile int64_t x124 = -3949511074986445896LL;
	volatile int32_t t29 = 424860;

    t29 = ((x121<=x122)>(x123+x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MAX;
	static volatile uint32_t x126 = UINT32_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t30 = -22438;

    t30 = ((x125<=x126)>(x127+x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x129 = INT32_MIN;
	static int8_t x130 = -48;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 7118LLU;
	static int32_t t31 = -16907;

    t31 = ((x129<=x130)>(x131+x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x135 = UINT8_MAX;
	static uint16_t x136 = 4606U;
	volatile int32_t t32 = -6;

    t32 = ((x133<=x134)>(x135+x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x138 = INT16_MIN;
	volatile uint32_t x140 = UINT32_MAX;
	int32_t t33 = 325520949;

    t33 = ((x137<=x138)>(x139+x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MIN;
	volatile int64_t x143 = -42464223LL;
	int32_t x144 = -1;

    t34 = ((x141<=x142)>(x143+x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 6008513748822474LLU;
	static uint32_t x146 = UINT32_MAX;
	static int8_t x148 = INT8_MAX;
	volatile int32_t t35 = 70;

    t35 = ((x145<=x146)>(x147+x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x149 = 5;
	int16_t x150 = 53;
	static int32_t x152 = 113;
	int32_t t36 = -724;

    t36 = ((x149<=x150)>(x151+x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = -1;
	static volatile int32_t x158 = -1;
	int8_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int32_t t37 = -2276111;

    t37 = ((x157<=x158)>(x159+x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = -1;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MAX;

    t38 = ((x165<=x166)>(x167+x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MAX;
	static int8_t x170 = INT8_MIN;
	volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;
	int32_t t39 = 158599;

    t39 = ((x169<=x170)>(x171+x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MAX;
	int8_t x176 = INT8_MIN;
	static int32_t t40 = 21175163;

    t40 = ((x173<=x174)>(x175+x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x183 = 92920LLU;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t41 = -19869345;

    t41 = ((x181<=x182)>(x183+x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = -6;
	uint64_t x187 = 275824598LLU;

    t42 = ((x185<=x186)>(x187+x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x189 = 18U;
	volatile int64_t x190 = -1LL;
	static volatile int32_t x191 = -1;
	int16_t x192 = -428;
	int32_t t43 = 27759884;

    t43 = ((x189<=x190)>(x191+x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x193 = 0U;
	static int64_t x194 = -419LL;
	int8_t x195 = INT8_MAX;
	int32_t t44 = 2857647;

    t44 = ((x193<=x194)>(x195+x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	static volatile uint16_t x198 = 1U;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t45 = 20;

    t45 = ((x197<=x198)>(x199+x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x203 = 3;
	int32_t x204 = 2738765;

    t46 = ((x201<=x202)>(x203+x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x206 = 14U;
	static int16_t x207 = INT16_MAX;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t47 = 759;

    t47 = ((x205<=x206)>(x207+x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x209 = 12096U;
	volatile int8_t x210 = 3;
	int32_t x212 = -1;
	volatile int32_t t48 = 8034758;

    t48 = ((x209<=x210)>(x211+x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x213 = 2070902690587LLU;
	int32_t x214 = -1;
	volatile int8_t x216 = 9;
	int32_t t49 = 1043714427;

    t49 = ((x213<=x214)>(x215+x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x218 = INT32_MIN;
	uint16_t x219 = 75U;
	uint8_t x220 = 6U;
	volatile int32_t t50 = 13364107;

    t50 = ((x217<=x218)>(x219+x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x223 = 0LL;
	volatile int32_t t51 = -14543149;

    t51 = ((x221<=x222)>(x223+x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	static int16_t x227 = INT16_MIN;
	static int16_t x228 = -1;

    t52 = ((x225<=x226)>(x227+x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MAX;
	int64_t x232 = -1LL;

    t53 = ((x229<=x230)>(x231+x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x233 = -1;
	static int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t54 = 121147182;

    t54 = ((x233<=x234)>(x235+x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x241 = INT8_MAX;
	int8_t x242 = -1;
	static uint32_t x243 = 16048163U;
	volatile int64_t x244 = -1LL;
	volatile int32_t t55 = 13408;

    t55 = ((x241<=x242)>(x243+x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x245 = INT8_MIN;
	uint64_t x246 = 206536910644366LLU;
	int32_t x247 = 56871;
	int16_t x248 = 48;
	int32_t t56 = -8;

    t56 = ((x245<=x246)>(x247+x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = INT16_MAX;
	static uint32_t x250 = UINT32_MAX;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;

    t57 = ((x249<=x250)>(x251+x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	uint16_t x256 = 1946U;
	volatile int32_t t58 = 3313;

    t58 = ((x253<=x254)>(x255+x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t59 = 3763;

    t59 = ((x257<=x258)>(x259+x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x261 = INT32_MAX;
	volatile int16_t x262 = -1;
	uint64_t x263 = 5318LLU;
	int8_t x264 = 2;

    t60 = ((x261<=x262)>(x263+x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x269 = INT8_MAX;
	int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MIN;
	volatile int32_t t61 = 857922373;

    t61 = ((x269<=x270)>(x271+x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = INT8_MAX;
	volatile int32_t t62 = 822795546;

    t62 = ((x273<=x274)>(x275+x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = 147168;
	int32_t x280 = INT32_MIN;
	int32_t t63 = 3852;

    t63 = ((x277<=x278)>(x279+x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x281 = UINT16_MAX;
	int64_t x282 = -4442736647813286386LL;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t64 = -2718;

    t64 = ((x281<=x282)>(x283+x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x285 = -16;
	static int16_t x286 = INT16_MIN;
	volatile uint16_t x288 = 14U;
	volatile int32_t t65 = -13880560;

    t65 = ((x285<=x286)>(x287+x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x289 = 23U;
	volatile uint32_t x292 = 3297713U;
	volatile int32_t t66 = -1;

    t66 = ((x289<=x290)>(x291+x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x293 = 53U;
	volatile int32_t x294 = INT32_MIN;
	int64_t x296 = -200249729641536LL;
	int32_t t67 = -1493;

    t67 = ((x293<=x294)>(x295+x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x298 = UINT16_MAX;
	static int16_t x299 = -1626;
	uint8_t x300 = 7U;
	int32_t t68 = -406833;

    t68 = ((x297<=x298)>(x299+x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = -1LL;
	int64_t x302 = -1060LL;
	volatile int8_t x303 = INT8_MIN;
	volatile int32_t x304 = -16877478;
	volatile int32_t t69 = 14;

    t69 = ((x301<=x302)>(x303+x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x305 = -21;
	volatile int8_t x306 = INT8_MAX;
	int8_t x307 = 0;
	static int8_t x308 = 11;
	volatile int32_t t70 = -14519;

    t70 = ((x305<=x306)>(x307+x308));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t71 = 1;

    t71 = ((x309<=x310)>(x311+x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x313 = INT32_MIN;
	volatile int8_t x314 = -1;
	uint8_t x315 = 0U;
	static int32_t t72 = 48;

    t72 = ((x313<=x314)>(x315+x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x318 = 13597LLU;
	static int32_t x319 = INT32_MAX;
	int8_t x320 = -1;
	volatile int32_t t73 = 22560;

    t73 = ((x317<=x318)>(x319+x320));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	int8_t x323 = 39;
	static int32_t t74 = 20;

    t74 = ((x321<=x322)>(x323+x324));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = 1U;

    t75 = ((x325<=x326)>(x327+x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x329 = 3;
	uint8_t x330 = 4U;
	static int16_t x331 = INT16_MIN;
	static int8_t x332 = -1;

    t76 = ((x329<=x330)>(x331+x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x338 = INT32_MIN;
	volatile int8_t x340 = INT8_MIN;
	int32_t t77 = -18768444;

    t77 = ((x337<=x338)>(x339+x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = UINT64_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t78 = -1;

    t78 = ((x341<=x342)>(x343+x344));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MAX;
	static int32_t x347 = 11995;
	int64_t x348 = INT64_MIN;
	static int32_t t79 = -2866422;

    t79 = ((x345<=x346)>(x347+x348));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x349 = 61U;
	static volatile int64_t x350 = -86LL;
	uint64_t x351 = 9122485443063814040LLU;
	int64_t x352 = -1LL;
	static int32_t t80 = 3766596;

    t80 = ((x349<=x350)>(x351+x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x354 = 2U;
	static int16_t x355 = 1;
	volatile uint8_t x356 = 68U;
	volatile int32_t t81 = 4018;

    t81 = ((x353<=x354)>(x355+x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x357 = INT32_MAX;
	static int32_t x358 = INT32_MIN;
	static uint64_t x359 = 10131LLU;

    t82 = ((x357<=x358)>(x359+x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x365 = INT64_MIN;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	int32_t t83 = 101;

    t83 = ((x365<=x366)>(x367+x368));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = 219914021LL;
	int16_t x370 = 8;

    t84 = ((x369<=x370)>(x371+x372));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MIN;
	static int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	static volatile int32_t t85 = -114328069;

    t85 = ((x373<=x374)>(x375+x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = INT32_MIN;
	static int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	static volatile uint32_t x380 = 1U;

    t86 = ((x377<=x378)>(x379+x380));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t87 = -3;

    t87 = ((x385<=x386)>(x387+x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x389 = 239LLU;
	volatile uint64_t x390 = 8LLU;
	int8_t x391 = -1;
	uint64_t x392 = UINT64_MAX;
	static volatile int32_t t88 = -3605;

    t88 = ((x389<=x390)>(x391+x392));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x398 = 42LLU;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MAX;
	int32_t t89 = -2229;

    t89 = ((x397<=x398)>(x399+x400));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x401 = 974005U;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -1;
	static uint32_t x404 = 1069785082U;
	volatile int32_t t90 = 8;

    t90 = ((x401<=x402)>(x403+x404));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x409 = -3021LL;
	static int32_t x410 = INT32_MIN;
	static uint32_t x411 = UINT32_MAX;
	volatile uint64_t x412 = 1186463684151544215LLU;
	volatile int32_t t91 = 7414331;

    t91 = ((x409<=x410)>(x411+x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	static uint8_t x420 = 65U;

    t92 = ((x417<=x418)>(x419+x420));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x421 = INT64_MAX;
	uint32_t x422 = UINT32_MAX;

    t93 = ((x421<=x422)>(x423+x424));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x425 = 0U;
	volatile int64_t x426 = INT64_MAX;
	int8_t x427 = -1;
	int16_t x428 = 471;
	int32_t t94 = -70601;

    t94 = ((x425<=x426)>(x427+x428));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x429 = -24045962928465005LL;
	volatile uint8_t x430 = 0U;
	uint16_t x431 = 177U;
	volatile int32_t t95 = -7158;

    t95 = ((x429<=x430)>(x431+x432));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x433 = 1U;
	static volatile uint16_t x435 = 253U;
	uint64_t x436 = 0LLU;
	volatile int32_t t96 = -3177;

    t96 = ((x433<=x434)>(x435+x436));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x438 = -1;
	volatile int64_t x439 = -2127208934LL;
	static int8_t x440 = INT8_MAX;
	int32_t t97 = 3903849;

    t97 = ((x437<=x438)>(x439+x440));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x442 = INT16_MAX;
	int16_t x443 = -1;
	volatile uint16_t x444 = UINT16_MAX;
	volatile int32_t t98 = -1021;

    t98 = ((x441<=x442)>(x443+x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x445 = 26U;
	int16_t x446 = -73;
	int16_t x447 = -27;
	uint32_t x448 = UINT32_MAX;
	static volatile int32_t t99 = -444;

    t99 = ((x445<=x446)>(x447+x448));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x450 = INT32_MAX;
	uint16_t x451 = 152U;
	volatile int8_t x452 = 1;
	int32_t t100 = -865203253;

    t100 = ((x449<=x450)>(x451+x452));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	int32_t x454 = -324263738;
	static uint32_t x455 = UINT32_MAX;
	uint64_t x456 = 200075225079597796LLU;
	int32_t t101 = -153378;

    t101 = ((x453<=x454)>(x455+x456));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x457 = UINT64_MAX;
	int16_t x459 = INT16_MIN;
	static int32_t x460 = -1;
	static int32_t t102 = -24690349;

    t102 = ((x457<=x458)>(x459+x460));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = 6;
	volatile uint8_t x463 = 3U;
	uint64_t x464 = 246LLU;
	int32_t t103 = 1948423;

    t103 = ((x461<=x462)>(x463+x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x465 = UINT32_MAX;
	int8_t x468 = INT8_MIN;

    t104 = ((x465<=x466)>(x467+x468));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = INT64_MAX;
	volatile int8_t x470 = INT8_MAX;
	static volatile int32_t x471 = -1;
	volatile int32_t x472 = -13096074;
	volatile int32_t t105 = -24;

    t105 = ((x469<=x470)>(x471+x472));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 3464U;
	int32_t t106 = 229953;

    t106 = ((x473<=x474)>(x475+x476));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = INT32_MAX;
	static int32_t t107 = 8978;

    t107 = ((x477<=x478)>(x479+x480));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x489 = 21U;
	volatile int8_t x490 = -15;
	static volatile int8_t x491 = 1;
	uint64_t x492 = UINT64_MAX;
	int32_t t108 = 1;

    t108 = ((x489<=x490)>(x491+x492));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x497 = 0;
	volatile uint32_t x498 = UINT32_MAX;
	int64_t x499 = 1726839993068685LL;
	int64_t x500 = -1LL;

    t109 = ((x497<=x498)>(x499+x500));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x501 = -59;
	int32_t x503 = INT32_MIN;
	static volatile int64_t x504 = 1255659644LL;
	volatile int32_t t110 = -30;

    t110 = ((x501<=x502)>(x503+x504));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x505 = 0;
	int32_t x507 = -1;
	uint16_t x508 = UINT16_MAX;
	static volatile int32_t t111 = 2;

    t111 = ((x505<=x506)>(x507+x508));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x509 = INT64_MIN;
	uint64_t x510 = 525251167LLU;
	int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MAX;
	int32_t t112 = 11871;

    t112 = ((x509<=x510)>(x511+x512));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x513 = 1463630941U;
	int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MAX;
	static uint32_t x516 = 436137501U;
	static int32_t t113 = -12201;

    t113 = ((x513<=x514)>(x515+x516));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x517 = UINT64_MAX;
	static volatile int8_t x518 = -38;
	int32_t t114 = 910;

    t114 = ((x517<=x518)>(x519+x520));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = 534314284LL;
	static int16_t x524 = INT16_MIN;

    t115 = ((x521<=x522)>(x523+x524));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x525 = 0;
	static int8_t x526 = INT8_MIN;
	uint8_t x527 = 67U;
	int16_t x528 = 1;
	volatile int32_t t116 = -187060;

    t116 = ((x525<=x526)>(x527+x528));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x529 = 11U;
	uint8_t x530 = 19U;
	uint64_t x531 = UINT64_MAX;
	static int8_t x532 = INT8_MAX;

    t117 = ((x529<=x530)>(x531+x532));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MAX;
	static int16_t x535 = INT16_MIN;
	int32_t t118 = -4;

    t118 = ((x533<=x534)>(x535+x536));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x537 = INT16_MAX;
	static int64_t x540 = -1LL;
	int32_t t119 = -171;

    t119 = ((x537<=x538)>(x539+x540));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x541 = UINT32_MAX;
	int16_t x542 = INT16_MAX;
	uint32_t x543 = 3U;
	uint8_t x544 = 0U;
	int32_t t120 = 57;

    t120 = ((x541<=x542)>(x543+x544));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x545 = UINT16_MAX;
	static volatile uint32_t x546 = 46169264U;
	int64_t x547 = -1LL;
	int8_t x548 = INT8_MIN;
	static int32_t t121 = -322430;

    t121 = ((x545<=x546)>(x547+x548));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x550 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	volatile int32_t t122 = 9798570;

    t122 = ((x549<=x550)>(x551+x552));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x553 = 0;
	static int64_t x554 = INT64_MIN;
	uint64_t x555 = UINT64_MAX;
	int8_t x556 = 2;
	volatile int32_t t123 = 222231009;

    t123 = ((x553<=x554)>(x555+x556));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = 13U;
	uint32_t x558 = UINT32_MAX;
	int8_t x559 = INT8_MIN;
	int8_t x560 = INT8_MIN;
	int32_t t124 = 687;

    t124 = ((x557<=x558)>(x559+x560));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x561 = UINT32_MAX;
	int64_t x562 = -1LL;
	int8_t x563 = -1;
	volatile uint64_t x564 = 271990098138LLU;
	volatile int32_t t125 = 80230;

    t125 = ((x561<=x562)>(x563+x564));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x565 = 6992U;
	int16_t x566 = INT16_MIN;
	uint16_t x567 = UINT16_MAX;
	int32_t t126 = 30357;

    t126 = ((x565<=x566)>(x567+x568));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x569 = 15314U;
	volatile int16_t x572 = INT16_MIN;
	int32_t t127 = 1434;

    t127 = ((x569<=x570)>(x571+x572));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x573 = 32147347U;
	int16_t x574 = INT16_MIN;
	uint64_t x575 = UINT64_MAX;
	uint32_t x576 = UINT32_MAX;
	int32_t t128 = 12341;

    t128 = ((x573<=x574)>(x575+x576));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x577 = -641962521;
	uint64_t x578 = UINT64_MAX;
	int16_t x579 = 6;
	volatile int32_t t129 = 16450009;

    t129 = ((x577<=x578)>(x579+x580));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x582 = INT32_MIN;
	uint32_t x583 = 0U;
	volatile uint64_t x584 = UINT64_MAX;
	int32_t t130 = -7;

    t130 = ((x581<=x582)>(x583+x584));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x585 = INT16_MAX;
	volatile int16_t x587 = INT16_MAX;
	int8_t x588 = -1;
	static int32_t t131 = 5;

    t131 = ((x585<=x586)>(x587+x588));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x589 = -470;
	static int32_t x590 = -1;
	volatile uint64_t x591 = UINT64_MAX;
	uint32_t x592 = 1U;
	volatile int32_t t132 = 8706;

    t132 = ((x589<=x590)>(x591+x592));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = -1;
	int32_t x594 = 63110;
	int64_t x595 = 34990LL;
	int64_t x596 = -1LL;
	int32_t t133 = 52721876;

    t133 = ((x593<=x594)>(x595+x596));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = -1LL;
	int16_t x599 = INT16_MAX;
	static int8_t x600 = -1;
	volatile int32_t t134 = 105;

    t134 = ((x597<=x598)>(x599+x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x602 = -1;
	int16_t x603 = INT16_MAX;
	int8_t x604 = -2;
	volatile int32_t t135 = 495;

    t135 = ((x601<=x602)>(x603+x604));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x606 = 7018U;
	volatile uint8_t x608 = UINT8_MAX;

    t136 = ((x605<=x606)>(x607+x608));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x609 = INT16_MIN;
	static uint8_t x611 = 14U;
	uint32_t x612 = 222U;
	volatile int32_t t137 = -7595929;

    t137 = ((x609<=x610)>(x611+x612));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	static int64_t x614 = INT64_MIN;
	static uint16_t x615 = 3339U;
	uint16_t x616 = UINT16_MAX;

    t138 = ((x613<=x614)>(x615+x616));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x618 = INT16_MIN;
	uint64_t x619 = UINT64_MAX;
	static volatile int64_t x620 = 103600285405135LL;
	int32_t t139 = 34;

    t139 = ((x617<=x618)>(x619+x620));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x621 = 1;
	int16_t x622 = INT16_MIN;
	int32_t x623 = -1;
	static volatile int32_t t140 = -508;

    t140 = ((x621<=x622)>(x623+x624));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x630 = 234U;
	volatile int32_t x631 = 115725309;
	int8_t x632 = 0;
	int32_t t141 = 42051699;

    t141 = ((x629<=x630)>(x631+x632));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x633 = 1952937913813848LL;
	uint32_t x636 = 251U;
	static volatile int32_t t142 = -437804122;

    t142 = ((x633<=x634)>(x635+x636));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x638 = INT64_MIN;
	int64_t x639 = -21092597311LL;
	uint32_t x640 = UINT32_MAX;
	static int32_t t143 = 114662004;

    t143 = ((x637<=x638)>(x639+x640));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x641 = INT32_MIN;
	static uint64_t x643 = 106132LLU;
	int32_t x644 = 1576308;

    t144 = ((x641<=x642)>(x643+x644));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MAX;
	volatile int32_t t145 = 1;

    t145 = ((x645<=x646)>(x647+x648));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x649 = -9497;
	int64_t x650 = INT64_MIN;
	int64_t x652 = INT64_MAX;
	volatile int32_t t146 = -5406282;

    t146 = ((x649<=x650)>(x651+x652));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MAX;
	volatile uint32_t x656 = 303310425U;
	volatile int32_t t147 = -1349393;

    t147 = ((x653<=x654)>(x655+x656));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x657 = -1;
	static int16_t x658 = INT16_MIN;
	static uint32_t x659 = 198U;
	int32_t t148 = -6;

    t148 = ((x657<=x658)>(x659+x660));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = INT32_MIN;
	int16_t x663 = -1;
	uint32_t x664 = UINT32_MAX;
	int32_t t149 = 69;

    t149 = ((x661<=x662)>(x663+x664));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x665 = -1LL;
	int16_t x666 = INT16_MAX;
	static int8_t x667 = INT8_MIN;
	volatile int32_t t150 = -1076939;

    t150 = ((x665<=x666)>(x667+x668));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x670 = 39;
	int32_t x671 = -1;
	static volatile int32_t t151 = -37;

    t151 = ((x669<=x670)>(x671+x672));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x673 = INT16_MIN;
	int64_t x675 = -1LL;
	uint8_t x676 = 0U;
	volatile int32_t t152 = 325;

    t152 = ((x673<=x674)>(x675+x676));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MIN;

    t153 = ((x677<=x678)>(x679+x680));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x681 = 4U;
	volatile uint16_t x683 = UINT16_MAX;
	volatile int8_t x684 = INT8_MIN;
	volatile int32_t t154 = 53;

    t154 = ((x681<=x682)>(x683+x684));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x687 = 133389LLU;
	volatile int32_t t155 = 8276031;

    t155 = ((x685<=x686)>(x687+x688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x690 = -1;
	static uint8_t x691 = UINT8_MAX;
	volatile uint8_t x692 = UINT8_MAX;
	int32_t t156 = -302;

    t156 = ((x689<=x690)>(x691+x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x693 = 743477014U;
	int16_t x694 = INT16_MIN;
	uint32_t x695 = 22450U;
	uint32_t x696 = UINT32_MAX;

    t157 = ((x693<=x694)>(x695+x696));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x697 = -2;
	static int16_t x698 = INT16_MIN;
	uint32_t x699 = 21271U;
	volatile uint16_t x700 = UINT16_MAX;
	int32_t t158 = -157150705;

    t158 = ((x697<=x698)>(x699+x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x701 = -1;
	int16_t x702 = -243;
	int16_t x703 = INT16_MAX;
	int32_t x704 = 50;

    t159 = ((x701<=x702)>(x703+x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x705 = UINT8_MAX;
	static uint64_t x706 = 541233798292LLU;
	volatile int32_t t160 = -962810;

    t160 = ((x705<=x706)>(x707+x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x709 = -2553652;
	static int64_t x710 = INT64_MIN;
	static int32_t x711 = 404755048;
	static int32_t t161 = -7706;

    t161 = ((x709<=x710)>(x711+x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x714 = -1LL;
	uint32_t x715 = 2395690U;
	uint64_t x716 = 2102618340LLU;
	int32_t t162 = -209919480;

    t162 = ((x713<=x714)>(x715+x716));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x717 = 0;
	uint16_t x719 = 0U;
	int32_t t163 = -41;

    t163 = ((x717<=x718)>(x719+x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x721 = -1LL;
	int16_t x722 = INT16_MIN;
	int32_t x724 = -1025082686;
	int32_t t164 = -94225;

    t164 = ((x721<=x722)>(x723+x724));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x725 = 1U;
	int32_t x726 = 54697752;
	static volatile int32_t x727 = -1;
	int32_t t165 = -1888;

    t165 = ((x725<=x726)>(x727+x728));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x729 = -22145832214043LL;
	uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MAX;
	int32_t x732 = 0;

    t166 = ((x729<=x730)>(x731+x732));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x733 = 121897053448916779LLU;
	int8_t x734 = -1;
	static int32_t t167 = 4792;

    t167 = ((x733<=x734)>(x735+x736));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x738 = INT8_MIN;
	static uint8_t x739 = 1U;
	int64_t x740 = INT64_MIN;

    t168 = ((x737<=x738)>(x739+x740));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x741 = -1LL;
	volatile int16_t x742 = -3;
	volatile uint64_t x743 = UINT64_MAX;
	int32_t t169 = -208953096;

    t169 = ((x741<=x742)>(x743+x744));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x746 = 2907495730674432601LLU;
	static volatile int32_t x747 = 373;
	volatile int8_t x748 = INT8_MAX;
	static volatile int32_t t170 = -975;

    t170 = ((x745<=x746)>(x747+x748));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x750 = 21895U;
	int8_t x751 = -1;
	volatile int32_t x752 = INT32_MAX;
	int32_t t171 = -2;

    t171 = ((x749<=x750)>(x751+x752));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x753 = INT64_MIN;
	static volatile int32_t x755 = INT32_MIN;
	uint64_t x756 = 2104445895416517LLU;
	volatile int32_t t172 = -297857;

    t172 = ((x753<=x754)>(x755+x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x758 = 761U;
	int8_t x759 = -1;
	int64_t x760 = -1LL;

    t173 = ((x757<=x758)>(x759+x760));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x761 = -30;
	static int8_t x762 = INT8_MAX;
	uint8_t x763 = UINT8_MAX;
	int32_t x764 = INT32_MIN;
	int32_t t174 = -80514;

    t174 = ((x761<=x762)>(x763+x764));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x765 = 147LLU;
	uint16_t x766 = 238U;
	int64_t x768 = -30434LL;
	int32_t t175 = -28648;

    t175 = ((x765<=x766)>(x767+x768));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x769 = 126;
	static uint64_t x770 = 28680752LLU;
	int32_t x771 = INT32_MAX;
	int32_t t176 = -6024833;

    t176 = ((x769<=x770)>(x771+x772));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x773 = 21;
	int16_t x774 = 1564;
	int32_t x775 = INT32_MIN;
	volatile uint8_t x776 = 1U;
	int32_t t177 = -33280;

    t177 = ((x773<=x774)>(x775+x776));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x777 = INT8_MIN;
	static int32_t x778 = INT32_MIN;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t178 = -97178423;

    t178 = ((x777<=x778)>(x779+x780));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x781 = 2252520LL;
	int32_t x782 = INT32_MIN;
	int8_t x783 = -1;
	int16_t x784 = 1;

    t179 = ((x781<=x782)>(x783+x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	volatile int64_t x786 = INT64_MAX;
	uint32_t x788 = UINT32_MAX;
	int32_t t180 = 20929;

    t180 = ((x785<=x786)>(x787+x788));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x790 = INT32_MIN;
	int64_t x791 = -1LL;
	uint16_t x792 = 11267U;
	volatile int32_t t181 = -1;

    t181 = ((x789<=x790)>(x791+x792));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x793 = -273;
	int64_t x794 = INT64_MAX;
	volatile uint64_t x796 = UINT64_MAX;
	volatile int32_t t182 = 4062127;

    t182 = ((x793<=x794)>(x795+x796));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x797 = 924U;
	int64_t x798 = -167916799373252709LL;
	volatile uint8_t x800 = 17U;
	int32_t t183 = -133319482;

    t183 = ((x797<=x798)>(x799+x800));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x801 = 5U;
	volatile int32_t x802 = INT32_MIN;
	uint16_t x804 = UINT16_MAX;
	volatile int32_t t184 = -53710;

    t184 = ((x801<=x802)>(x803+x804));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x805 = -1;
	int32_t x808 = INT32_MIN;
	volatile int32_t t185 = 744447567;

    t185 = ((x805<=x806)>(x807+x808));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x809 = -6401909LL;
	uint8_t x810 = 60U;
	static int32_t x811 = INT32_MIN;
	static volatile int32_t t186 = -47;

    t186 = ((x809<=x810)>(x811+x812));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x813 = -5550LL;
	volatile int32_t x815 = -415;
	static int8_t x816 = INT8_MIN;

    t187 = ((x813<=x814)>(x815+x816));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x817 = INT16_MIN;
	int64_t x818 = 153406LL;
	int32_t x819 = -51131;
	uint32_t x820 = 16429835U;
	volatile int32_t t188 = 0;

    t188 = ((x817<=x818)>(x819+x820));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x821 = INT32_MIN;
	int32_t x822 = -1;
	int32_t x823 = -942;
	volatile int32_t t189 = -1465339;

    t189 = ((x821<=x822)>(x823+x824));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x825 = UINT16_MAX;
	int32_t x826 = INT32_MAX;
	volatile int8_t x827 = INT8_MIN;
	uint64_t x828 = 3364369261207LLU;
	static int32_t t190 = 6755130;

    t190 = ((x825<=x826)>(x827+x828));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x829 = INT64_MAX;
	volatile int8_t x830 = INT8_MIN;
	int64_t x832 = INT64_MAX;
	int32_t t191 = -64;

    t191 = ((x829<=x830)>(x831+x832));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x833 = UINT32_MAX;
	int32_t x834 = INT32_MIN;

    t192 = ((x833<=x834)>(x835+x836));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x837 = 0U;
	uint32_t x839 = 18U;
	volatile int32_t x840 = INT32_MIN;
	int32_t t193 = -1823;

    t193 = ((x837<=x838)>(x839+x840));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x845 = INT8_MAX;
	volatile int8_t x846 = -1;
	volatile int32_t x847 = -1;
	volatile int8_t x848 = -14;
	int32_t t194 = -78589;

    t194 = ((x845<=x846)>(x847+x848));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x853 = -1;
	int8_t x855 = -1;
	int16_t x856 = INT16_MIN;
	volatile int32_t t195 = 33;

    t195 = ((x853<=x854)>(x855+x856));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x858 = -1;
	volatile uint8_t x859 = 9U;
	volatile int32_t x860 = -502;
	volatile int32_t t196 = -182007684;

    t196 = ((x857<=x858)>(x859+x860));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x861 = -1;
	uint32_t x862 = 11630U;
	static int16_t x864 = -999;
	volatile int32_t t197 = 221029;

    t197 = ((x861<=x862)>(x863+x864));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x865 = UINT16_MAX;
	static volatile int32_t x866 = INT32_MAX;
	uint64_t x868 = 30645488969LLU;
	volatile int32_t t198 = 5;

    t198 = ((x865<=x866)>(x867+x868));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x869 = INT16_MIN;
	int16_t x870 = INT16_MAX;
	int16_t x871 = 1;
	uint64_t x872 = UINT64_MAX;

    t199 = ((x869<=x870)>(x871+x872));

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

