
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

int64_t x2 = INT64_MIN;
volatile int32_t x8 = INT32_MIN;
volatile uint32_t x18 = UINT32_MAX;
int16_t x28 = INT16_MAX;
static int64_t x34 = -48LL;
int8_t x39 = -1;
int32_t t8 = -112;
uint8_t x48 = 101U;
static uint32_t x50 = 684U;
static uint32_t x53 = UINT32_MAX;
uint8_t x55 = UINT8_MAX;
volatile uint32_t t12 = 3936U;
volatile uint8_t x58 = UINT8_MAX;
static int8_t x62 = INT8_MAX;
volatile uint64_t x63 = 1143104930007203669LLU;
static int16_t x67 = INT16_MAX;
static uint64_t x68 = 103LLU;
uint32_t x69 = 158267281U;
int8_t x70 = INT8_MIN;
int32_t x74 = -1;
uint32_t x77 = UINT32_MAX;
static int64_t x84 = -16887273952940LL;
volatile int64_t t19 = 71040LL;
volatile int8_t x87 = 2;
volatile int32_t x92 = INT32_MIN;
int32_t x97 = INT32_MIN;
uint8_t x105 = 0U;
int64_t x108 = INT64_MIN;
static int64_t x115 = -1LL;
volatile int16_t x116 = -1;
static uint16_t x118 = 3U;
volatile int16_t x120 = -1;
int8_t x122 = INT8_MIN;
uint8_t x123 = 2U;
volatile int32_t t30 = -3913022;
uint64_t x137 = 17267736537681936LLU;
volatile int8_t x144 = 1;
int32_t t33 = 1;
int16_t x145 = INT16_MIN;
uint16_t x154 = 12U;
int32_t t37 = -2;
uint8_t x163 = UINT8_MAX;
uint16_t x169 = UINT16_MAX;
volatile int64_t x170 = -1LL;
int64_t t40 = 14745523212601LL;
int8_t x178 = INT8_MAX;
int32_t t42 = -124;
uint8_t x181 = 6U;
volatile int8_t x193 = -1;
volatile int8_t x217 = -1;
volatile uint16_t x221 = UINT16_MAX;
uint8_t x224 = 50U;
uint16_t x227 = UINT16_MAX;
int64_t x228 = -1LL;
volatile int32_t x229 = 5621;
int16_t x230 = 8097;
volatile int64_t x231 = 500LL;
int16_t x235 = -78;
volatile int64_t t56 = 1LL;
volatile int32_t x237 = INT32_MAX;
uint8_t x239 = UINT8_MAX;
int16_t x242 = 79;
int32_t x247 = -1;
uint16_t x252 = 242U;
volatile int64_t t61 = 1LL;
static volatile int32_t t63 = -6840742;
volatile int64_t x265 = -9154371320237LL;
static int32_t x266 = 12;
volatile int32_t t67 = 315265069;
uint32_t x290 = UINT32_MAX;
volatile uint64_t x295 = UINT64_MAX;
int8_t x300 = 7;
static int64_t x301 = -257875639LL;
int8_t x302 = INT8_MIN;
uint16_t x303 = 59U;
int8_t x313 = INT8_MIN;
int8_t x321 = -1;
volatile uint32_t x325 = 1U;
int8_t x329 = -1;
volatile uint8_t x332 = 117U;
int64_t x333 = -183219476289LL;
uint64_t x345 = 118586LLU;
uint8_t x350 = UINT8_MAX;
uint64_t x354 = 6208668249275430LLU;
static int64_t x357 = INT64_MAX;
int8_t x359 = -1;
static int16_t x364 = -1;
int16_t x368 = -913;
int8_t x369 = INT8_MIN;
static volatile uint16_t x370 = 17399U;
uint64_t x372 = 444LLU;
int64_t x373 = INT64_MAX;
uint64_t x376 = UINT64_MAX;
volatile uint64_t x381 = 13283114496215536LLU;
int8_t x387 = INT8_MIN;
static int32_t x392 = INT32_MAX;
int16_t x396 = 20;
int64_t x400 = 146736056724613378LL;
int32_t t100 = 121849;
static volatile uint64_t x420 = 8529366840132LLU;
static int32_t x423 = INT32_MIN;
static int32_t t103 = 99659;
int16_t x431 = INT16_MIN;
static volatile uint64_t x434 = 1954LLU;
static volatile uint32_t x444 = 2021366826U;
static int32_t t109 = 27634;
uint8_t x452 = 1U;
int64_t x458 = 2024LL;
int32_t x469 = INT32_MAX;
int32_t x473 = -514856;
volatile uint16_t x476 = 60U;
static uint32_t t116 = 520695305U;
uint8_t x491 = 115U;
static int8_t x504 = -1;
uint64_t t124 = 6943LLU;
int64_t x513 = -1LL;
uint64_t x518 = 2754LLU;
int32_t x520 = INT32_MIN;
static int16_t x528 = INT16_MAX;
int16_t x530 = INT16_MIN;
uint64_t t130 = 799LLU;
volatile int64_t x543 = -1LL;
volatile uint32_t x552 = 3220493U;
int64_t x554 = INT64_MIN;
int16_t x555 = INT16_MAX;
volatile int8_t x559 = -29;
int8_t x562 = -1;
uint32_t x564 = 1U;
int8_t x566 = 1;
volatile uint64_t x571 = 57427073506870883LLU;
int32_t x592 = INT32_MIN;
uint8_t x599 = UINT8_MAX;
volatile uint64_t t146 = 25LLU;
static int8_t x612 = -29;
static volatile int64_t t148 = 2483038971426LL;
static int32_t x613 = INT32_MIN;
int16_t x616 = -700;
volatile int32_t t150 = 809776058;
int32_t x623 = 2216;
volatile int32_t x630 = 3;
int32_t t153 = -13975;
int16_t x637 = -4370;
int16_t x639 = INT16_MIN;
int16_t x644 = 4;
int64_t x646 = 22297868336371LL;
volatile uint32_t t157 = 24U;
volatile int16_t x656 = INT16_MIN;
int32_t t159 = -11028;
static volatile uint8_t x662 = 1U;
volatile int64_t x671 = INT64_MAX;
uint64_t x678 = 57756LLU;
int8_t x680 = -1;
volatile int16_t x684 = INT16_MIN;
volatile int32_t t167 = 4128905;
static int64_t x690 = 197079LL;
uint8_t x691 = 75U;
volatile int8_t x696 = 57;
int8_t x698 = INT8_MAX;
uint32_t t170 = 539098134U;
int16_t x701 = -1;
int32_t x708 = 3;
int64_t x709 = -1LL;
uint32_t x711 = 58U;
volatile int32_t t174 = -15;
static uint32_t x719 = 31U;
int8_t x725 = INT8_MIN;
static volatile uint16_t x727 = 23U;
static int32_t t177 = 336301;
int32_t x730 = -1;
volatile int32_t x735 = 52356774;
volatile int64_t x736 = INT64_MIN;
static int32_t x737 = 130947071;
int16_t x740 = INT16_MAX;
uint16_t x741 = 51U;
volatile int16_t x746 = 408;
uint8_t x747 = UINT8_MAX;
static int8_t x753 = INT8_MIN;
uint64_t x759 = UINT64_MAX;
static uint64_t x768 = 3LLU;
volatile int16_t x769 = -1;
volatile int16_t x774 = INT16_MAX;
uint32_t x783 = UINT32_MAX;
volatile uint32_t t191 = 155U;
uint32_t t192 = 482U;
volatile int64_t t194 = 2943722101338924667LL;
int32_t x798 = -1;
volatile int32_t t195 = -2134704;
volatile int16_t x801 = INT16_MIN;
uint16_t x808 = 922U;
uint32_t x813 = 216U;
int8_t x814 = 0;
uint8_t x816 = 8U;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	volatile int8_t x4 = -8;
	volatile uint32_t t0 = 7U;

    t0 = (((x1<=x2)*x3)/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	volatile int64_t x6 = INT64_MAX;
	volatile int8_t x7 = INT8_MIN;
	int32_t t1 = -702685;

    t1 = (((x5<=x6)*x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = -1;
	volatile int64_t x14 = -1LL;
	uint32_t x15 = 498459U;
	static uint32_t x16 = 1052945838U;
	volatile uint32_t t2 = 28114477U;

    t2 = (((x13<=x14)*x15)/x16);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	static uint32_t x19 = UINT32_MAX;
	int64_t x20 = -39036265827948LL;
	static volatile int64_t t3 = -64423318150283LL;

    t3 = (((x17<=x18)*x19)/x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	volatile uint64_t x22 = 156LLU;
	volatile int8_t x23 = INT8_MIN;
	uint32_t x24 = 1069426557U;
	volatile uint32_t t4 = 357855U;

    t4 = (((x21<=x22)*x23)/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x25 = 10593U;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	uint32_t t5 = 115U;

    t5 = (((x25<=x26)*x27)/x28);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x29 = 11356U;
	volatile int32_t x30 = -76;
	uint32_t x31 = 16197U;
	int16_t x32 = INT16_MAX;
	static uint32_t t6 = 3008U;

    t6 = (((x29<=x30)*x31)/x32);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x33 = 19U;
	volatile int8_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t7 = -31201;

    t7 = (((x33<=x34)*x35)/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 3U;
	int16_t x38 = -1;
	volatile uint8_t x40 = 39U;

    t8 = (((x37<=x38)*x39)/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 133U;
	int32_t x42 = -729;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -7447626LL;

    t9 = (((x41<=x42)*x43)/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -2568;
	static uint8_t x46 = 79U;
	volatile int32_t x47 = INT32_MIN;
	volatile int32_t t10 = 120;

    t10 = (((x45<=x46)*x47)/x48);

    if (t10 != -21262214) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	int32_t x51 = -1;
	int32_t x52 = 3091679;
	int32_t t11 = 0;

    t11 = (((x49<=x50)*x51)/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = INT16_MAX;
	volatile uint32_t x56 = 182455744U;

    t12 = (((x53<=x54)*x55)/x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = -1;
	int8_t x59 = 0;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t13 = 239743649686342911LL;

    t13 = (((x57<=x58)*x59)/x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -114384768471611LL;
	static int16_t x64 = INT16_MIN;
	volatile uint64_t t14 = 176594293LLU;

    t14 = (((x61<=x62)*x63)/x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 173;
	int16_t x66 = INT16_MIN;
	static volatile uint64_t t15 = 315362465756LLU;

    t15 = (((x65<=x66)*x67)/x68);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x71 = 471838400LLU;
	int8_t x72 = -1;
	volatile uint64_t t16 = 47705691787LLU;

    t16 = (((x69<=x70)*x71)/x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	static int8_t x75 = -1;
	static int32_t x76 = INT32_MAX;
	static volatile int32_t t17 = -2314638;

    t17 = (((x73<=x74)*x75)/x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = UINT64_MAX;
	static uint32_t x79 = 5942080U;
	int32_t x80 = INT32_MIN;
	static volatile uint32_t t18 = 30805855U;

    t18 = (((x77<=x78)*x79)/x80);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x81 = 116U;
	int8_t x82 = INT8_MIN;
	static int16_t x83 = -405;

    t19 = (((x81<=x82)*x83)/x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 117U;
	volatile int8_t x86 = 4;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -3165;

    t20 = (((x85<=x86)*x87)/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x89 = UINT64_MAX;
	volatile int16_t x90 = INT16_MIN;
	static int32_t x91 = 3;
	volatile int32_t t21 = -31969;

    t21 = (((x89<=x90)*x91)/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -131028359;
	int64_t x94 = -1LL;
	static int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	static int32_t t22 = -30223374;

    t22 = (((x93<=x94)*x95)/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x98 = -427;
	static volatile int8_t x99 = INT8_MIN;
	static int8_t x100 = -6;
	volatile int32_t t23 = 555036;

    t23 = (((x97<=x98)*x99)/x100);

    if (t23 != 21) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MIN;
	uint64_t x103 = 4985904088LLU;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t24 = 1276LLU;

    t24 = (((x101<=x102)*x103)/x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = 4299013255378LL;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t25 = 1645847643LLU;

    t25 = (((x105<=x106)*x107)/x108);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x110 = 51969;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -909471312686464490LL;
	int64_t t26 = 10896839475112739LL;

    t26 = (((x109<=x110)*x111)/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x113 = 691U;
	uint16_t x114 = UINT16_MAX;
	int64_t t27 = -1282505916903664011LL;

    t27 = (((x113<=x114)*x115)/x116);

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 56;
	int32_t x119 = -1;
	int32_t t28 = 3584;

    t28 = (((x117<=x118)*x119)/x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 14U;
	static int8_t x124 = -1;
	volatile int32_t t29 = 918439;

    t29 = (((x121<=x122)*x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 69091;
	int64_t x126 = -11794024973LL;
	int32_t x127 = INT32_MIN;
	volatile int16_t x128 = INT16_MAX;

    t30 = (((x125<=x126)*x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 5LLU;
	static int32_t x132 = -10981;
	static volatile uint64_t t31 = 535438LLU;

    t31 = (((x129<=x130)*x131)/x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = -1;
	volatile int64_t x140 = -38175689097LL;
	static int64_t t32 = -25348049379LL;

    t32 = (((x137<=x138)*x139)/x140);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MAX;
	static uint8_t x142 = 39U;
	volatile uint8_t x143 = 52U;

    t33 = (((x141<=x142)*x143)/x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x146 = UINT8_MAX;
	int16_t x147 = 1;
	int16_t x148 = INT16_MIN;
	volatile int32_t t34 = -2;

    t34 = (((x145<=x146)*x147)/x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MAX;
	int8_t x150 = -1;
	volatile uint64_t x151 = UINT64_MAX;
	int16_t x152 = -6;
	uint64_t t35 = 167LLU;

    t35 = (((x149<=x150)*x151)/x152);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	static int8_t x155 = 8;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t36 = -51067;

    t36 = (((x153<=x154)*x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = 70;
	int32_t x160 = -1;

    t37 = (((x157<=x158)*x159)/x160);

    if (t37 != -70) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 1;
	static volatile uint32_t x162 = UINT32_MAX;
	int8_t x164 = -1;
	int32_t t38 = 634760;

    t38 = (((x161<=x162)*x163)/x164);

    if (t38 != -255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x165 = 2;
	int16_t x166 = -1;
	int64_t x167 = -6358113651677591LL;
	int64_t x168 = -1LL;
	int64_t t39 = -6860LL;

    t39 = (((x165<=x166)*x167)/x168);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x171 = 2U;
	int64_t x172 = -1LL;

    t40 = (((x169<=x170)*x171)/x172);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = -1;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t41 = -4383812;

    t41 = (((x173<=x174)*x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = -1;
	static int16_t x179 = INT16_MAX;
	int16_t x180 = INT16_MIN;

    t42 = (((x177<=x178)*x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x182 = INT64_MIN;
	static volatile int16_t x183 = -1;
	uint32_t x184 = 52U;
	volatile uint32_t t43 = 256U;

    t43 = (((x181<=x182)*x183)/x184);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MAX;
	int64_t x188 = -16664582LL;
	volatile int64_t t44 = 489417242LL;

    t44 = (((x185<=x186)*x187)/x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = UINT8_MAX;
	static int8_t x190 = 29;
	int32_t x191 = -1;
	uint64_t x192 = 389394276881762590LLU;
	uint64_t t45 = 852311420434LLU;

    t45 = (((x189<=x190)*x191)/x192);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x194 = 8U;
	int64_t x195 = -897543642142387454LL;
	int64_t x196 = INT64_MIN;
	volatile int64_t t46 = -2301625LL;

    t46 = (((x193<=x194)*x195)/x196);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	int16_t x198 = -2328;
	int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;
	int64_t t47 = 27LL;

    t47 = (((x197<=x198)*x199)/x200);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x201 = 128157LLU;
	uint8_t x202 = 0U;
	static int8_t x203 = -15;
	int16_t x204 = 2;
	int32_t t48 = 13;

    t48 = (((x201<=x202)*x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 30U;
	uint64_t x206 = 11LLU;
	int32_t x207 = INT32_MIN;
	static uint64_t x208 = 12932114564059LLU;
	uint64_t t49 = 7LLU;

    t49 = (((x205<=x206)*x207)/x208);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = UINT16_MAX;
	volatile uint32_t x210 = 133661842U;
	int32_t x211 = -1;
	static int64_t x212 = INT64_MIN;
	int64_t t50 = -284084LL;

    t50 = (((x209<=x210)*x211)/x212);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = 427667727979LL;
	int8_t x214 = 0;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = 119U;
	uint32_t t51 = 95729U;

    t51 = (((x213<=x214)*x215)/x216);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x218 = 7724U;
	uint8_t x219 = UINT8_MAX;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t52 = 48U;

    t52 = (((x217<=x218)*x219)/x220);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x222 = INT32_MAX;
	volatile int8_t x223 = -1;
	volatile int32_t t53 = 35789905;

    t53 = (((x221<=x222)*x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x225 = 8796675872294LLU;
	static int8_t x226 = INT8_MIN;
	int64_t t54 = -34632787367537LL;

    t54 = (((x225<=x226)*x227)/x228);

    if (t54 != -65535LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x232 = 113382LLU;
	uint64_t t55 = 1174259350747767LLU;

    t55 = (((x229<=x230)*x231)/x232);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -2551230;
	int32_t x234 = INT32_MIN;
	int64_t x236 = INT64_MIN;

    t56 = (((x233<=x234)*x235)/x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x238 = 40;
	uint32_t x240 = UINT32_MAX;
	static uint32_t t57 = 86842U;

    t57 = (((x237<=x238)*x239)/x240);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = UINT8_MAX;
	volatile int32_t x243 = -36642463;
	int32_t x244 = -1;
	volatile int32_t t58 = -2987;

    t58 = (((x241<=x242)*x243)/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x245 = -1LL;
	static int8_t x246 = INT8_MAX;
	volatile int8_t x248 = INT8_MAX;
	int32_t t59 = 51690;

    t59 = (((x245<=x246)*x247)/x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x249 = -1;
	volatile uint32_t x250 = 1U;
	uint16_t x251 = UINT16_MAX;
	static int32_t t60 = 3072288;

    t60 = (((x249<=x250)*x251)/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x253 = 10;
	static int8_t x254 = INT8_MIN;
	int64_t x255 = 332LL;
	uint32_t x256 = UINT32_MAX;

    t61 = (((x253<=x254)*x255)/x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	static uint32_t x260 = 11657954U;
	int64_t t62 = 152753LL;

    t62 = (((x257<=x258)*x259)/x260);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1;
	static uint64_t x262 = 0LLU;
	int32_t x263 = INT32_MIN;
	static volatile int8_t x264 = INT8_MIN;

    t63 = (((x261<=x262)*x263)/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x267 = -1;
	int32_t x268 = -1;
	int32_t t64 = -3;

    t64 = (((x265<=x266)*x267)/x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = -1LL;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 0U;
	uint32_t x272 = 1U;
	volatile uint32_t t65 = 1241650360U;

    t65 = (((x269<=x270)*x271)/x272);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = INT64_MIN;
	uint16_t x274 = 1U;
	static uint8_t x275 = 7U;
	int8_t x276 = -17;
	int32_t t66 = 12;

    t66 = (((x273<=x274)*x275)/x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = INT64_MAX;
	uint32_t x278 = 16U;
	static volatile int8_t x279 = -44;
	volatile int32_t x280 = INT32_MIN;

    t67 = (((x277<=x278)*x279)/x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x281 = UINT8_MAX;
	static int8_t x282 = -1;
	int16_t x283 = INT16_MAX;
	uint16_t x284 = 168U;
	static volatile int32_t t68 = -605625;

    t68 = (((x281<=x282)*x283)/x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x285 = -7996748226505LL;
	int16_t x286 = -3592;
	int64_t x287 = 16526929828757419LL;
	static uint32_t x288 = UINT32_MAX;
	int64_t t69 = -231591504095199LL;

    t69 = (((x285<=x286)*x287)/x288);

    if (t69 != 3847975LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 3769811U;
	int32_t x291 = INT32_MIN;
	volatile int32_t x292 = 15287;
	int32_t t70 = -1;

    t70 = (((x289<=x290)*x291)/x292);

    if (t70 != -140477) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	static int8_t x296 = 26;
	uint64_t t71 = 25932550059838299LLU;

    t71 = (((x293<=x294)*x295)/x296);

    if (t71 != 709490156681136600LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x297 = INT16_MIN;
	static volatile int32_t x298 = INT32_MIN;
	volatile int8_t x299 = 2;
	volatile int32_t t72 = -10589;

    t72 = (((x297<=x298)*x299)/x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x304 = -1;
	volatile int32_t t73 = -62183387;

    t73 = (((x301<=x302)*x303)/x304);

    if (t73 != -59) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = INT8_MAX;
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 3781424019LLU;
	static int8_t x308 = INT8_MAX;
	volatile uint64_t t74 = 1138614521037250LLU;

    t74 = (((x305<=x306)*x307)/x308);

    if (t74 != 29774992LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = INT8_MAX;
	static volatile uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 108667LLU;
	uint64_t x312 = 254LLU;
	uint64_t t75 = 1LLU;

    t75 = (((x309<=x310)*x311)/x312);

    if (t75 != 427LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x314 = -1;
	int8_t x315 = -10;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t76 = -299;

    t76 = (((x313<=x314)*x315)/x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -5046733;
	uint64_t x318 = 9025LLU;
	int8_t x319 = INT8_MIN;
	static int8_t x320 = 10;
	volatile int32_t t77 = 240760487;

    t77 = (((x317<=x318)*x319)/x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 60U;
	int64_t x324 = 12637067059121LL;
	volatile int64_t t78 = -14133LL;

    t78 = (((x321<=x322)*x323)/x324);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x326 = 221949U;
	static int16_t x327 = -27;
	int16_t x328 = INT16_MIN;
	static int32_t t79 = -630339;

    t79 = (((x325<=x326)*x327)/x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x330 = -375;
	int8_t x331 = INT8_MAX;
	volatile int32_t t80 = -157974271;

    t80 = (((x329<=x330)*x331)/x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x334 = -149;
	volatile uint16_t x335 = 515U;
	int64_t x336 = -249278606593LL;
	volatile int64_t t81 = 104574LL;

    t81 = (((x333<=x334)*x335)/x336);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x337 = INT64_MIN;
	int16_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 15299U;
	volatile int32_t t82 = -1731;

    t82 = (((x337<=x338)*x339)/x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	int16_t x343 = -74;
	int16_t x344 = INT16_MIN;
	int32_t t83 = -27864;

    t83 = (((x341<=x342)*x343)/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x346 = INT32_MAX;
	static volatile int8_t x347 = -39;
	static int32_t x348 = -1;
	volatile int32_t t84 = 99355991;

    t84 = (((x345<=x346)*x347)/x348);

    if (t84 != 39) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	uint16_t x352 = 6U;
	int64_t t85 = 47088LL;

    t85 = (((x349<=x350)*x351)/x352);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x353 = -1;
	volatile int64_t x355 = INT64_MIN;
	uint16_t x356 = 71U;
	static int64_t t86 = -151590546432357345LL;

    t86 = (((x353<=x354)*x355)/x356);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x358 = INT64_MIN;
	int64_t x360 = INT64_MAX;
	int64_t t87 = -36346364486902414LL;

    t87 = (((x357<=x358)*x359)/x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x361 = -1;
	int32_t x362 = -1807;
	int64_t x363 = -3668863912434LL;
	volatile int64_t t88 = -98539901351245789LL;

    t88 = (((x361<=x362)*x363)/x364);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = UINT32_MAX;
	volatile uint64_t x366 = 72259LLU;
	static uint32_t x367 = 94U;
	uint32_t t89 = 1439U;

    t89 = (((x365<=x366)*x367)/x368);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x371 = -1;
	uint64_t t90 = 2073973095LLU;

    t90 = (((x369<=x370)*x371)/x372);

    if (t90 != 41546720886733224LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x374 = 1U;
	int32_t x375 = INT32_MAX;
	volatile uint64_t t91 = 484004742777232246LLU;

    t91 = (((x373<=x374)*x375)/x376);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	static uint64_t x379 = 6879LLU;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t92 = 12667868545692LLU;

    t92 = (((x377<=x378)*x379)/x380);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x382 = 23754U;
	int8_t x383 = -1;
	int16_t x384 = 3752;
	volatile int32_t t93 = 9663596;

    t93 = (((x381<=x382)*x383)/x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x385 = -31921606650144693LL;
	static volatile int32_t x386 = -11;
	volatile uint16_t x388 = 20910U;
	int32_t t94 = -264111038;

    t94 = (((x385<=x386)*x387)/x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x389 = -1;
	volatile uint8_t x390 = 1U;
	int8_t x391 = -2;
	int32_t t95 = -529011073;

    t95 = (((x389<=x390)*x391)/x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x393 = 79U;
	int16_t x394 = INT16_MIN;
	int8_t x395 = 7;
	static volatile int32_t t96 = 12350355;

    t96 = (((x393<=x394)*x395)/x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	volatile int8_t x399 = -1;
	volatile int64_t t97 = -6261530181520LL;

    t97 = (((x397<=x398)*x399)/x400);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x401 = 0U;
	uint16_t x402 = UINT16_MAX;
	uint8_t x403 = UINT8_MAX;
	static int32_t x404 = INT32_MAX;
	volatile int32_t t98 = -1968;

    t98 = (((x401<=x402)*x403)/x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = INT8_MIN;
	static int32_t x406 = INT32_MIN;
	volatile int16_t x407 = INT16_MAX;
	static volatile int32_t x408 = INT32_MIN;
	static int32_t t99 = -78607;

    t99 = (((x405<=x406)*x407)/x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x409 = 160U;
	uint16_t x410 = UINT16_MAX;
	int32_t x411 = 14;
	uint16_t x412 = UINT16_MAX;

    t100 = (((x409<=x410)*x411)/x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	uint16_t x415 = 3U;
	volatile uint16_t x416 = 40U;
	volatile int32_t t101 = 5211;

    t101 = (((x413<=x414)*x415)/x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	int16_t x418 = 218;
	int16_t x419 = -95;
	static uint64_t t102 = 822208721LLU;

    t102 = (((x417<=x418)*x419)/x420);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = -1LL;
	int8_t x422 = -35;
	int32_t x424 = INT32_MIN;

    t103 = (((x421<=x422)*x423)/x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x425 = 187LLU;
	int32_t x426 = INT32_MIN;
	static int32_t x427 = -14851;
	volatile uint16_t x428 = 135U;
	volatile int32_t t104 = -745117;

    t104 = (((x425<=x426)*x427)/x428);

    if (t104 != -110) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x429 = 5882364U;
	int64_t x430 = INT64_MIN;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t105 = -1155829;

    t105 = (((x429<=x430)*x431)/x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x433 = 112380817866LLU;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = 559LLU;
	uint64_t t106 = 1730LLU;

    t106 = (((x433<=x434)*x435)/x436);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x437 = INT16_MIN;
	uint8_t x438 = UINT8_MAX;
	uint16_t x439 = UINT16_MAX;
	static int32_t x440 = -1;
	static volatile int32_t t107 = -116752720;

    t107 = (((x437<=x438)*x439)/x440);

    if (t107 != -65535) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = INT16_MIN;
	uint8_t x442 = 0U;
	uint64_t x443 = 7299997717597370169LLU;
	volatile uint64_t t108 = 149174239563868LLU;

    t108 = (((x441<=x442)*x443)/x444);

    if (t108 != 3611416603LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = INT64_MAX;
	int64_t x446 = 12248610LL;
	volatile uint16_t x447 = UINT16_MAX;
	static int8_t x448 = -1;

    t109 = (((x445<=x446)*x447)/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = -1LL;
	int64_t x450 = INT64_MIN;
	static int16_t x451 = INT16_MIN;
	int32_t t110 = -1503010;

    t110 = (((x449<=x450)*x451)/x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x453 = 4676248308LLU;
	uint32_t x454 = 6639U;
	int8_t x455 = -1;
	uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t111 = 6U;

    t111 = (((x453<=x454)*x455)/x456);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	volatile int64_t t112 = -6LL;

    t112 = (((x457<=x458)*x459)/x460);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	volatile uint32_t x462 = UINT32_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t113 = -560;

    t113 = (((x461<=x462)*x463)/x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = -48498823;
	uint32_t x466 = 246449U;
	uint32_t x467 = UINT32_MAX;
	static volatile int64_t x468 = -62LL;
	volatile int64_t t114 = 466113598019168740LL;

    t114 = (((x465<=x466)*x467)/x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x470 = 58;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t115 = 116246;

    t115 = (((x469<=x470)*x471)/x472);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x474 = INT32_MIN;
	uint32_t x475 = 56U;

    t116 = (((x473<=x474)*x475)/x476);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = INT32_MAX;
	volatile int64_t x478 = INT64_MIN;
	int8_t x479 = 0;
	static int64_t x480 = -1444433654422LL;
	volatile int64_t t117 = 251485515LL;

    t117 = (((x477<=x478)*x479)/x480);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = INT16_MIN;
	uint32_t x482 = UINT32_MAX;
	static int32_t x483 = 1269;
	int8_t x484 = -1;
	volatile int32_t t118 = -4;

    t118 = (((x481<=x482)*x483)/x484);

    if (t118 != -1269) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x485 = -1;
	int16_t x486 = 0;
	int32_t x487 = -671458182;
	int32_t x488 = INT32_MAX;
	int32_t t119 = 3;

    t119 = (((x485<=x486)*x487)/x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = 1;
	uint16_t x490 = 27818U;
	static int32_t x492 = -1;
	volatile int32_t t120 = 26271;

    t120 = (((x489<=x490)*x491)/x492);

    if (t120 != -115) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x493 = UINT64_MAX;
	static int16_t x494 = INT16_MIN;
	uint32_t x495 = UINT32_MAX;
	uint32_t x496 = UINT32_MAX;
	uint32_t t121 = 1074U;

    t121 = (((x493<=x494)*x495)/x496);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x497 = 3U;
	int16_t x498 = 0;
	int16_t x499 = -1;
	int64_t x500 = INT64_MAX;
	volatile int64_t t122 = 43097133981LL;

    t122 = (((x497<=x498)*x499)/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x501 = UINT64_MAX;
	volatile int8_t x502 = -10;
	int32_t x503 = -1971020;
	int32_t t123 = 9538252;

    t123 = (((x501<=x502)*x503)/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = -1;
	volatile int16_t x506 = 2;
	int64_t x507 = 0LL;
	uint64_t x508 = 846525696615883635LLU;

    t124 = (((x505<=x506)*x507)/x508);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x514 = 6;
	volatile uint32_t x515 = 87477170U;
	static volatile int16_t x516 = 184;
	static volatile uint32_t t125 = 10755U;

    t125 = (((x513<=x514)*x515)/x516);

    if (t125 != 475419U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = UINT8_MAX;
	int32_t x519 = 736747;
	int32_t t126 = -4038796;

    t126 = (((x517<=x518)*x519)/x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 43U;
	int16_t x522 = -3;
	static uint8_t x523 = 8U;
	int64_t x524 = INT64_MIN;
	volatile int64_t t127 = -404104635945300677LL;

    t127 = (((x521<=x522)*x523)/x524);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = 67LL;
	volatile uint32_t x526 = 5U;
	int8_t x527 = INT8_MIN;
	int32_t t128 = -2054712;

    t128 = (((x525<=x526)*x527)/x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x529 = 62;
	int16_t x531 = INT16_MIN;
	volatile int8_t x532 = INT8_MAX;
	static volatile int32_t t129 = -13;

    t129 = (((x529<=x530)*x531)/x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = 0U;
	uint32_t x534 = 12329U;
	uint64_t x535 = 147LLU;
	static int16_t x536 = 409;

    t130 = (((x533<=x534)*x535)/x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x541 = -28;
	static int64_t x542 = INT64_MAX;
	int16_t x544 = -21;
	int64_t t131 = -232LL;

    t131 = (((x541<=x542)*x543)/x544);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x545 = -1LL;
	uint64_t x546 = 1421318719365327LLU;
	static volatile int8_t x547 = 13;
	static int32_t x548 = INT32_MIN;
	volatile int32_t t132 = 7974125;

    t132 = (((x545<=x546)*x547)/x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x549 = 43087U;
	static int16_t x550 = INT16_MIN;
	static int8_t x551 = INT8_MIN;
	volatile uint32_t t133 = 425119U;

    t133 = (((x549<=x550)*x551)/x552);

    if (t133 != 1333U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = UINT32_MAX;
	uint16_t x556 = 5734U;
	volatile int32_t t134 = -53;

    t134 = (((x553<=x554)*x555)/x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x557 = 0;
	volatile int32_t x558 = -52;
	volatile uint8_t x560 = 4U;
	volatile int32_t t135 = 3877289;

    t135 = (((x557<=x558)*x559)/x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x561 = INT64_MIN;
	uint32_t x563 = 14233U;
	uint32_t t136 = 441588102U;

    t136 = (((x561<=x562)*x563)/x564);

    if (t136 != 14233U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = 413587610;
	static int64_t x567 = -1LL;
	int32_t x568 = -490360597;
	volatile int64_t t137 = -2483LL;

    t137 = (((x565<=x566)*x567)/x568);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x569 = 2U;
	int64_t x570 = INT64_MAX;
	volatile int8_t x572 = INT8_MIN;
	static volatile uint64_t t138 = 5996LLU;

    t138 = (((x569<=x570)*x571)/x572);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = -25;
	volatile uint8_t x574 = UINT8_MAX;
	int32_t x575 = INT32_MAX;
	uint16_t x576 = 7U;
	int32_t t139 = 1;

    t139 = (((x573<=x574)*x575)/x576);

    if (t139 != 306783378) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = -1LL;
	static int8_t x578 = INT8_MIN;
	static int16_t x579 = -1;
	int64_t x580 = 17047607958639LL;
	volatile int64_t t140 = 173LL;

    t140 = (((x577<=x578)*x579)/x580);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MIN;
	int32_t x583 = INT32_MIN;
	static int16_t x584 = -100;
	int32_t t141 = -1311237;

    t141 = (((x581<=x582)*x583)/x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = -2067685;
	int64_t x586 = INT64_MAX;
	uint8_t x587 = UINT8_MAX;
	static uint64_t x588 = UINT64_MAX;
	volatile uint64_t t142 = 16802LLU;

    t142 = (((x585<=x586)*x587)/x588);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	int16_t x590 = INT16_MIN;
	volatile uint64_t x591 = UINT64_MAX;
	uint64_t t143 = 13423805LLU;

    t143 = (((x589<=x590)*x591)/x592);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x593 = INT8_MAX;
	uint32_t x594 = UINT32_MAX;
	int64_t x595 = INT64_MAX;
	volatile int32_t x596 = -1;
	static volatile int64_t t144 = 405626082304266979LL;

    t144 = (((x593<=x594)*x595)/x596);

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x597 = INT16_MIN;
	int64_t x598 = INT64_MIN;
	int8_t x600 = -1;
	volatile int32_t t145 = -143554;

    t145 = (((x597<=x598)*x599)/x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = INT8_MIN;
	int32_t x602 = -1;
	static uint64_t x603 = 18395192LLU;
	uint8_t x604 = UINT8_MAX;

    t146 = (((x601<=x602)*x603)/x604);

    if (t146 != 72138LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = 120707U;
	static int32_t x607 = -9302880;
	int8_t x608 = INT8_MAX;
	static int32_t t147 = -28031142;

    t147 = (((x605<=x606)*x607)/x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x609 = INT16_MIN;
	static int8_t x610 = -1;
	volatile int64_t x611 = INT64_MAX;

    t148 = (((x609<=x610)*x611)/x612);

    if (t148 != -318047311615681924LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x614 = INT8_MAX;
	uint64_t x615 = UINT64_MAX;
	volatile uint64_t t149 = 4636142354509361461LLU;

    t149 = (((x613<=x614)*x615)/x616);

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x617 = INT64_MIN;
	uint16_t x618 = 171U;
	int32_t x619 = INT32_MIN;
	int8_t x620 = INT8_MIN;

    t150 = (((x617<=x618)*x619)/x620);

    if (t150 != 16777216) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x621 = -1;
	static volatile int16_t x622 = INT16_MIN;
	volatile int16_t x624 = -43;
	int32_t t151 = 0;

    t151 = (((x621<=x622)*x623)/x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = 1031636;
	static int64_t x627 = INT64_MIN;
	int8_t x628 = 63;
	int64_t t152 = -54747752LL;

    t152 = (((x625<=x626)*x627)/x628);

    if (t152 != -146402730743726600LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x629 = -1;
	static int32_t x631 = INT32_MAX;
	uint8_t x632 = 75U;

    t153 = (((x629<=x630)*x631)/x632);

    if (t153 != 28633115) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x633 = 311030214U;
	static volatile int16_t x634 = 0;
	int64_t x635 = 19163299386554LL;
	int8_t x636 = 16;
	volatile int64_t t154 = -932254799902LL;

    t154 = (((x633<=x634)*x635)/x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x638 = 248074965;
	int16_t x640 = INT16_MAX;
	static int32_t t155 = 2988;

    t155 = (((x637<=x638)*x639)/x640);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = 2335;
	int64_t x642 = -1LL;
	uint16_t x643 = 0U;
	static volatile int32_t t156 = 112445;

    t156 = (((x641<=x642)*x643)/x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x645 = -1;
	uint32_t x647 = UINT32_MAX;
	volatile int32_t x648 = 13545654;

    t157 = (((x645<=x646)*x647)/x648);

    if (t157 != 317U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = INT64_MIN;
	volatile int8_t x650 = INT8_MAX;
	static uint16_t x651 = 427U;
	int16_t x652 = INT16_MAX;
	static int32_t t158 = 433504962;

    t158 = (((x649<=x650)*x651)/x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x653 = UINT32_MAX;
	int16_t x654 = -722;
	volatile int8_t x655 = INT8_MIN;

    t159 = (((x653<=x654)*x655)/x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x657 = -6;
	uint64_t x658 = 8195908968454558LLU;
	int8_t x659 = -1;
	int64_t x660 = -1LL;
	volatile int64_t t160 = -52644579470LL;

    t160 = (((x657<=x658)*x659)/x660);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x661 = 9722138668215576LLU;
	uint8_t x663 = 1U;
	int8_t x664 = -1;
	int32_t t161 = 8843;

    t161 = (((x661<=x662)*x663)/x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = 4;
	static int64_t x667 = 85018767LL;
	int8_t x668 = -1;
	volatile int64_t t162 = -54096411LL;

    t162 = (((x665<=x666)*x667)/x668);

    if (t162 != -85018767LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x669 = 87;
	volatile int32_t x670 = INT32_MIN;
	uint64_t x672 = UINT64_MAX;
	uint64_t t163 = 4613143044747973114LLU;

    t163 = (((x669<=x670)*x671)/x672);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x673 = UINT32_MAX;
	int32_t x674 = 94;
	static volatile int64_t x675 = -1LL;
	uint16_t x676 = UINT16_MAX;
	volatile int64_t t164 = 127500112091365LL;

    t164 = (((x673<=x674)*x675)/x676);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x677 = UINT64_MAX;
	volatile int32_t x679 = 3507;
	int32_t t165 = 228200057;

    t165 = (((x677<=x678)*x679)/x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = INT8_MIN;
	int16_t x682 = 12940;
	volatile uint16_t x683 = UINT16_MAX;
	int32_t t166 = -1;

    t166 = (((x681<=x682)*x683)/x684);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x685 = 337296643LL;
	int8_t x686 = INT8_MAX;
	uint8_t x687 = UINT8_MAX;
	uint16_t x688 = UINT16_MAX;

    t167 = (((x685<=x686)*x687)/x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x689 = 4094;
	int64_t x692 = -33LL;
	int64_t t168 = -59231761LL;

    t168 = (((x689<=x690)*x691)/x692);

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = -2224;
	volatile uint64_t x694 = 959111057853658LLU;
	uint32_t x695 = UINT32_MAX;
	volatile uint32_t t169 = 1701U;

    t169 = (((x693<=x694)*x695)/x696);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = -3609219878LL;
	volatile uint32_t x699 = 122346623U;
	volatile int16_t x700 = INT16_MIN;

    t170 = (((x697<=x698)*x699)/x700);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x702 = INT16_MIN;
	int8_t x703 = INT8_MIN;
	int16_t x704 = INT16_MIN;
	static int32_t t171 = 1;

    t171 = (((x701<=x702)*x703)/x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x705 = 1U;
	volatile int64_t x706 = -403631960268569LL;
	volatile uint32_t x707 = UINT32_MAX;
	uint32_t t172 = 64386U;

    t172 = (((x705<=x706)*x707)/x708);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x710 = INT64_MIN;
	int16_t x712 = INT16_MAX;
	uint32_t t173 = 31181218U;

    t173 = (((x709<=x710)*x711)/x712);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x713 = 8940U;
	static int64_t x714 = -24LL;
	uint8_t x715 = 24U;
	int32_t x716 = INT32_MAX;

    t174 = (((x713<=x714)*x715)/x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = INT32_MAX;
	uint32_t x718 = UINT32_MAX;
	int16_t x720 = 558;
	uint32_t t175 = 8684433U;

    t175 = (((x717<=x718)*x719)/x720);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x721 = 19U;
	int8_t x722 = 3;
	int32_t x723 = -5422904;
	int16_t x724 = INT16_MIN;
	static volatile int32_t t176 = -3613;

    t176 = (((x721<=x722)*x723)/x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x726 = -1;
	volatile int8_t x728 = INT8_MIN;

    t177 = (((x725<=x726)*x727)/x728);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x729 = UINT32_MAX;
	uint8_t x731 = 1U;
	uint16_t x732 = UINT16_MAX;
	static int32_t t178 = -287286;

    t178 = (((x729<=x730)*x731)/x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x733 = -1;
	int32_t x734 = 520;
	int64_t t179 = 263275002LL;

    t179 = (((x733<=x734)*x735)/x736);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x738 = INT64_MAX;
	int32_t x739 = -351261475;
	static int32_t t180 = -493847531;

    t180 = (((x737<=x738)*x739)/x740);

    if (t180 != -10719) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x742 = 91U;
	uint16_t x743 = UINT16_MAX;
	int64_t x744 = INT64_MIN;
	int64_t t181 = -2094138961166LL;

    t181 = (((x741<=x742)*x743)/x744);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x745 = 169021198LL;
	int64_t x748 = INT64_MAX;
	int64_t t182 = 3341188100090LL;

    t182 = (((x745<=x746)*x747)/x748);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x749 = INT8_MIN;
	static int8_t x750 = 12;
	int8_t x751 = INT8_MIN;
	int16_t x752 = -1;
	volatile int32_t t183 = 14657332;

    t183 = (((x749<=x750)*x751)/x752);

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x754 = INT64_MIN;
	static int16_t x755 = INT16_MAX;
	uint32_t x756 = UINT32_MAX;
	volatile uint32_t t184 = 2503U;

    t184 = (((x753<=x754)*x755)/x756);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x757 = 20U;
	int32_t x758 = -1;
	static int32_t x760 = 48295;
	volatile uint64_t t185 = 1482880LLU;

    t185 = (((x757<=x758)*x759)/x760);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x761 = UINT64_MAX;
	volatile int16_t x762 = INT16_MIN;
	static volatile uint64_t x763 = UINT64_MAX;
	volatile int64_t x764 = -2245LL;
	static uint64_t t186 = 44LLU;

    t186 = (((x761<=x762)*x763)/x764);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x765 = UINT64_MAX;
	int64_t x766 = INT64_MIN;
	static int8_t x767 = INT8_MAX;
	static volatile uint64_t t187 = 1678451127067376LLU;

    t187 = (((x765<=x766)*x767)/x768);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x770 = 278294LL;
	static uint8_t x771 = 19U;
	volatile uint16_t x772 = 47U;
	static volatile int32_t t188 = -1792905;

    t188 = (((x769<=x770)*x771)/x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x773 = UINT32_MAX;
	static uint16_t x775 = UINT16_MAX;
	int8_t x776 = -1;
	static volatile int32_t t189 = -2893492;

    t189 = (((x773<=x774)*x775)/x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x777 = INT64_MAX;
	static int64_t x778 = 14280561LL;
	static volatile int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t190 = 369764;

    t190 = (((x777<=x778)*x779)/x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MIN;
	volatile int16_t x784 = 7;

    t191 = (((x781<=x782)*x783)/x784);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = INT32_MAX;
	int16_t x786 = INT16_MIN;
	uint8_t x787 = 0U;
	volatile uint32_t x788 = UINT32_MAX;

    t192 = (((x785<=x786)*x787)/x788);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = INT16_MAX;
	static int8_t x790 = INT8_MAX;
	static uint64_t x791 = 695462252941844LLU;
	int16_t x792 = INT16_MAX;
	volatile uint64_t t193 = 209669242887865LLU;

    t193 = (((x789<=x790)*x791)/x792);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x793 = 4U;
	int8_t x794 = INT8_MIN;
	uint16_t x795 = 15U;
	int64_t x796 = INT64_MIN;

    t194 = (((x793<=x794)*x795)/x796);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x797 = 32719U;
	int32_t x799 = -250442;
	int16_t x800 = INT16_MAX;

    t195 = (((x797<=x798)*x799)/x800);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x802 = UINT32_MAX;
	int16_t x803 = -29;
	int16_t x804 = -1;
	static int32_t t196 = -566;

    t196 = (((x801<=x802)*x803)/x804);

    if (t196 != 29) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x805 = -1LL;
	int16_t x806 = -1;
	uint32_t x807 = UINT32_MAX;
	static uint32_t t197 = 12816U;

    t197 = (((x805<=x806)*x807)/x808);

    if (t197 != 4658315U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x809 = UINT32_MAX;
	int16_t x810 = -1;
	int16_t x811 = INT16_MIN;
	int64_t x812 = 745041368LL;
	static int64_t t198 = 2940LL;

    t198 = (((x809<=x810)*x811)/x812);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x815 = 11U;
	volatile uint32_t t199 = 111463267U;

    t199 = (((x813<=x814)*x815)/x816);

    if (t199 != 0U) { NG(); } else { ; }
	
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

