
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

uint8_t x6 = UINT8_MAX;
int16_t x13 = INT16_MAX;
uint64_t x14 = UINT64_MAX;
uint8_t x23 = 1U;
uint8_t x33 = 26U;
static volatile int32_t t6 = 199;
volatile int32_t t7 = -42;
static uint32_t x42 = 3282U;
int32_t t10 = 220453901;
volatile uint32_t x54 = 3363U;
static int32_t x59 = INT32_MIN;
int32_t t13 = 81;
static int32_t x67 = INT32_MIN;
volatile int32_t x74 = INT32_MIN;
volatile int32_t x78 = INT32_MAX;
static uint16_t x79 = 1227U;
static volatile int32_t t17 = 245905;
int16_t x87 = INT16_MIN;
volatile uint64_t x88 = UINT64_MAX;
volatile int32_t t19 = -6045;
static int16_t x89 = INT16_MAX;
int32_t t21 = -46035978;
int16_t x99 = 8;
uint32_t x109 = 0U;
uint8_t x110 = 103U;
int16_t x113 = INT16_MIN;
int16_t x114 = -24;
static volatile int32_t t27 = 833847508;
uint32_t x121 = UINT32_MAX;
int8_t x130 = 14;
int32_t x131 = INT32_MAX;
volatile int8_t x136 = INT8_MIN;
volatile int32_t x139 = -1;
int32_t t32 = 14951;
static int32_t x143 = INT32_MAX;
static int8_t x144 = 1;
uint16_t x145 = UINT16_MAX;
volatile int64_t x150 = INT64_MAX;
int32_t t35 = 7;
volatile uint8_t x156 = 3U;
volatile int64_t x158 = -27084056365LL;
uint8_t x159 = 0U;
uint64_t x176 = 9005589LLU;
int32_t x179 = INT32_MIN;
int32_t t42 = 15;
int16_t x183 = INT16_MAX;
int64_t x186 = INT64_MIN;
volatile int32_t t44 = 990;
int16_t x189 = -1;
int16_t x196 = -7;
volatile int32_t t47 = 44262147;
static uint8_t x206 = UINT8_MAX;
int32_t x210 = INT32_MIN;
static uint8_t x212 = UINT8_MAX;
int32_t t51 = -37179746;
int16_t x220 = INT16_MIN;
static int64_t x221 = INT64_MIN;
int64_t x223 = INT64_MIN;
volatile uint8_t x224 = 4U;
uint16_t x228 = 97U;
uint8_t x230 = 36U;
int8_t x238 = -1;
volatile int64_t x240 = INT64_MIN;
int64_t x252 = INT64_MIN;
volatile int8_t x259 = 4;
int16_t x260 = INT16_MIN;
volatile uint8_t x264 = UINT8_MAX;
static int16_t x265 = INT16_MAX;
volatile int64_t x269 = 31897537169256LL;
int32_t x270 = -123764581;
uint8_t x275 = 3U;
static volatile int32_t t66 = -63509;
int64_t x283 = INT64_MAX;
static int8_t x291 = -1;
static int8_t x296 = 1;
uint8_t x305 = UINT8_MAX;
static volatile int32_t t74 = -84372;
uint64_t x313 = 17242390LLU;
int32_t x315 = -1;
uint8_t x316 = 3U;
int32_t t75 = -183422;
int64_t x317 = -3794492LL;
int8_t x320 = INT8_MIN;
uint32_t x321 = UINT32_MAX;
uint16_t x322 = 964U;
int64_t x334 = -1LL;
static int8_t x337 = -7;
int16_t x339 = -3;
int32_t t81 = 1;
int32_t x346 = 457;
static int16_t x347 = -326;
int8_t x348 = INT8_MIN;
static uint16_t x351 = UINT16_MAX;
uint8_t x358 = 45U;
static int16_t x361 = -1;
static int16_t x362 = INT16_MIN;
static int64_t x365 = INT64_MIN;
uint32_t x368 = UINT32_MAX;
int32_t x372 = -475384;
uint8_t x383 = UINT8_MAX;
static int8_t x386 = INT8_MIN;
int32_t x389 = INT32_MIN;
static int8_t x402 = -5;
int32_t t96 = -32681;
int8_t x405 = 1;
volatile int16_t x411 = INT16_MIN;
int32_t x423 = INT32_MAX;
int8_t x424 = -1;
int16_t x427 = INT16_MAX;
int32_t t105 = 4;
int16_t x443 = INT16_MIN;
uint16_t x445 = 3U;
volatile int32_t t110 = -114255;
static volatile int32_t t111 = 189617337;
int64_t x478 = INT64_MAX;
int8_t x481 = -2;
uint16_t x485 = 1U;
static int8_t x486 = 29;
int32_t x487 = INT32_MIN;
volatile int32_t t114 = 2;
int32_t x493 = INT32_MIN;
int64_t x500 = -1LL;
int32_t t117 = -11703;
uint64_t x501 = UINT64_MAX;
static int32_t x502 = INT32_MAX;
int32_t t119 = -1036594;
static int8_t x514 = INT8_MAX;
static int64_t x516 = INT64_MIN;
static int32_t x518 = 886800;
int32_t t122 = 461371;
static volatile int32_t t123 = 0;
static uint64_t x530 = 266898325396703656LLU;
int16_t x534 = INT16_MIN;
volatile int32_t x546 = 112813980;
static volatile int32_t t129 = -27;
int32_t x558 = INT32_MAX;
int32_t x566 = INT32_MIN;
int16_t x569 = INT16_MAX;
uint8_t x584 = 28U;
int32_t t137 = 3244;
volatile int8_t x586 = INT8_MAX;
uint8_t x587 = 37U;
int64_t x588 = INT64_MIN;
int64_t x591 = INT64_MAX;
static uint8_t x593 = 81U;
static volatile int16_t x600 = -1;
static volatile int32_t x604 = INT32_MIN;
int16_t x608 = INT16_MIN;
int32_t x610 = INT32_MIN;
static int16_t x615 = -1;
volatile int16_t x616 = -47;
volatile int32_t t145 = 449243376;
volatile int64_t x621 = INT64_MAX;
uint64_t x632 = 190972979491835LLU;
int64_t x637 = INT64_MIN;
int32_t t153 = -2445944;
int16_t x649 = 2;
int8_t x657 = INT8_MIN;
volatile int8_t x667 = INT8_MAX;
uint64_t x671 = 58617820772971050LLU;
int8_t x682 = 1;
volatile int16_t x685 = INT16_MIN;
uint8_t x686 = UINT8_MAX;
int8_t x689 = -4;
int32_t x691 = INT32_MIN;
static int8_t x700 = 1;
int16_t x703 = INT16_MIN;
static volatile uint16_t x706 = 9116U;
int32_t x707 = INT32_MIN;
int8_t x711 = INT8_MAX;
volatile int8_t x713 = -1;
int8_t x718 = -1;
int16_t x727 = INT16_MIN;
uint8_t x734 = 20U;
static uint8_t x736 = UINT8_MAX;
static int32_t t175 = 107566;
int8_t x752 = -1;
int32_t x756 = 1;
int16_t x764 = INT16_MIN;
int32_t t179 = -91;
volatile uint32_t x768 = 1096050182U;
static uint32_t x769 = UINT32_MAX;
static uint16_t x775 = 132U;
int32_t t182 = -597454;
int16_t x780 = -1;
int8_t x790 = INT8_MAX;
static int16_t x791 = INT16_MIN;
int16_t x793 = -1;
uint16_t x796 = 1U;
static volatile int32_t t187 = 0;
int8_t x814 = INT8_MAX;
int64_t x819 = INT64_MAX;
int64_t x830 = INT64_MIN;
uint16_t x832 = UINT16_MAX;
volatile int32_t t196 = 8864;
volatile int64_t x839 = INT64_MAX;
volatile int32_t x842 = INT32_MAX;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -17;

    t0 = (x1>(x2==(x3/x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = 1149806670688635783LL;
	volatile int32_t t1 = 9220188;

    t1 = (x5>(x6==(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t2 = 0;

    t2 = (x13>(x14==(x15/x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 22952LLU;
	uint32_t x18 = 1015509583U;
	volatile uint16_t x19 = UINT16_MAX;
	static uint64_t x20 = UINT64_MAX;
	volatile int32_t t3 = 48;

    t3 = (x17>(x18==(x19/x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 2;
	int64_t x22 = 63456707900LL;
	uint8_t x24 = UINT8_MAX;
	static int32_t t4 = 333915;

    t4 = (x21>(x22==(x23/x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 12U;
	int32_t x26 = INT32_MAX;
	int16_t x27 = -11280;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t5 = 14463182;

    t5 = (x25>(x26==(x27/x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x34 = INT32_MAX;
	int8_t x35 = -1;
	int32_t x36 = INT32_MAX;

    t6 = (x33>(x34==(x35/x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	uint16_t x40 = 311U;

    t7 = (x37>(x38==(x39/x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 9492U;
	volatile int64_t x43 = 621LL;
	int16_t x44 = -795;
	static volatile int32_t t8 = -7114467;

    t8 = (x41>(x42==(x43/x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 690U;
	int32_t x46 = -1;
	int32_t x47 = INT32_MAX;
	int64_t x48 = INT64_MAX;
	volatile int32_t t9 = 28237843;

    t9 = (x45>(x46==(x47/x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MIN;
	static int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	int32_t x52 = 4254091;

    t10 = (x49>(x50==(x51/x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = INT64_MAX;
	volatile int32_t t11 = -183005512;

    t11 = (x53>(x54==(x55/x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MAX;
	uint32_t x58 = 9701U;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t12 = -160285075;

    t12 = (x57>(x58==(x59/x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x61 = -1LL;
	static int8_t x62 = -6;
	uint16_t x63 = 2U;
	int32_t x64 = -10615337;

    t13 = (x61>(x62==(x63/x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x65 = 414026903388310LL;
	volatile uint32_t x66 = 5426U;
	int64_t x68 = -1LL;
	static volatile int32_t t14 = -34;

    t14 = (x65>(x66==(x67/x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = 6;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -2LL;
	volatile uint32_t x72 = 78U;
	volatile int32_t t15 = 222340809;

    t15 = (x69>(x70==(x71/x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MAX;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t16 = -1036017;

    t16 = (x73>(x74==(x75/x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = 73U;
	static int64_t x80 = -30LL;

    t17 = (x77>(x78==(x79/x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x81 = 0U;
	int8_t x82 = -1;
	volatile int8_t x83 = INT8_MIN;
	static volatile int32_t x84 = INT32_MAX;
	volatile int32_t t18 = -1906380;

    t18 = (x81>(x82==(x83/x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = -1;
	volatile int64_t x86 = INT64_MIN;

    t19 = (x85>(x86==(x87/x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x90 = 0U;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MAX;
	int32_t t20 = 174;

    t20 = (x89>(x90==(x91/x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	uint32_t x94 = 1U;
	volatile int8_t x95 = 46;
	uint16_t x96 = 2026U;

    t21 = (x93>(x94==(x95/x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -1;
	int64_t x98 = -1LL;
	static uint16_t x100 = 5U;
	int32_t t22 = 1562;

    t22 = (x97>(x98==(x99/x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MAX;
	volatile int8_t x102 = 2;
	volatile int8_t x103 = -6;
	static int64_t x104 = -1271143259961649695LL;
	volatile int32_t t23 = 3712;

    t23 = (x101>(x102==(x103/x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x105 = INT64_MIN;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t24 = -37;

    t24 = (x105>(x106==(x107/x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	int32_t t25 = 45;

    t25 = (x109>(x110==(x111/x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x115 = INT32_MIN;
	uint8_t x116 = 3U;
	int32_t t26 = 33508439;

    t26 = (x113>(x114==(x115/x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 126U;
	int8_t x118 = -1;
	static int8_t x119 = 42;
	int64_t x120 = 439359240974015LL;

    t27 = (x117>(x118==(x119/x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = 8679110118LL;
	int32_t t28 = -21776;

    t28 = (x121>(x122==(x123/x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x125 = -1;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 2911340LLU;
	volatile int16_t x128 = -1;
	volatile int32_t t29 = -29;

    t29 = (x125>(x126==(x127/x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x129 = 7822093359840979582LLU;
	volatile uint64_t x132 = 381781LLU;
	int32_t t30 = -6529794;

    t30 = (x129>(x130==(x131/x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -1;
	int16_t x134 = 903;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t t31 = 7078297;

    t31 = (x133>(x134==(x135/x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MIN;
	static int64_t x138 = -56976000345LL;
	int8_t x140 = INT8_MAX;

    t32 = (x137>(x138==(x139/x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x141 = 42U;
	uint8_t x142 = UINT8_MAX;
	int32_t t33 = -1;

    t33 = (x141>(x142==(x143/x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x146 = 0;
	int16_t x147 = -2;
	static uint32_t x148 = 30U;
	static int32_t t34 = -34845;

    t34 = (x145>(x146==(x147/x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x149 = 1078868349LLU;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = UINT8_MAX;

    t35 = (x149>(x150==(x151/x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MIN;
	int32_t x155 = -51141;
	int32_t t36 = 644062;

    t36 = (x153>(x154==(x155/x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -16503574217LL;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t37 = 55111;

    t37 = (x157>(x158==(x159/x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = 27390U;
	int32_t t38 = 986078;

    t38 = (x161>(x162==(x163/x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MAX;
	int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t39 = 64261874;

    t39 = (x165>(x166==(x167/x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MAX;
	static uint16_t x171 = 5411U;
	uint32_t x172 = 635773U;
	volatile int32_t t40 = -41347;

    t40 = (x169>(x170==(x171/x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	uint64_t x174 = 846130616423LLU;
	volatile int32_t x175 = INT32_MIN;
	int32_t t41 = -1407;

    t41 = (x173>(x174==(x175/x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x177 = 5U;
	static int64_t x178 = -3685691LL;
	int64_t x180 = INT64_MAX;

    t42 = (x177>(x178==(x179/x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x181 = UINT32_MAX;
	static int8_t x182 = INT8_MAX;
	int16_t x184 = -1;
	int32_t t43 = 23153;

    t43 = (x181>(x182==(x183/x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = 3009099LLU;
	static int32_t x187 = INT32_MAX;
	static volatile int16_t x188 = INT16_MAX;

    t44 = (x185>(x186==(x187/x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x190 = 9U;
	volatile int16_t x191 = -1;
	int16_t x192 = -1;
	volatile int32_t t45 = -24351;

    t45 = (x189>(x190==(x191/x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = 1LL;
	volatile int32_t t46 = 2;

    t46 = (x193>(x194==(x195/x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	static volatile uint16_t x198 = 4U;
	int16_t x199 = INT16_MIN;
	volatile uint32_t x200 = 1208363302U;

    t47 = (x197>(x198==(x199/x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	uint64_t x204 = 41LLU;
	int32_t t48 = 0;

    t48 = (x201>(x202==(x203/x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t49 = -475;

    t49 = (x205>(x206==(x207/x208)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = 14;
	int16_t x211 = INT16_MAX;
	int32_t t50 = -38925;

    t50 = (x209>(x210==(x211/x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x213 = INT64_MIN;
	int16_t x214 = -2;
	static int64_t x215 = -1LL;
	static int32_t x216 = INT32_MIN;

    t51 = (x213>(x214==(x215/x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	uint32_t x218 = 456805335U;
	volatile int16_t x219 = -1;
	int32_t t52 = -76;

    t52 = (x217>(x218==(x219/x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x222 = INT16_MIN;
	static int32_t t53 = -205375;

    t53 = (x221>(x222==(x223/x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	static int32_t x226 = -1;
	int8_t x227 = -5;
	int32_t t54 = 0;

    t54 = (x225>(x226==(x227/x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = 35;
	int64_t x231 = INT64_MAX;
	volatile uint32_t x232 = 259U;
	volatile int32_t t55 = 361300;

    t55 = (x229>(x230==(x231/x232)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MIN;
	int16_t x234 = -6;
	static uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t56 = -16;

    t56 = (x233>(x234==(x235/x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x237 = INT32_MIN;
	int8_t x239 = 0;
	volatile int32_t t57 = -109653704;

    t57 = (x237>(x238==(x239/x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MAX;
	uint8_t x242 = 57U;
	int8_t x243 = -3;
	int64_t x244 = -3398425LL;
	volatile int32_t t58 = 14;

    t58 = (x241>(x242==(x243/x244)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x245 = INT16_MIN;
	int64_t x246 = -1LL;
	static int8_t x247 = -50;
	volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t59 = -29926;

    t59 = (x245>(x246==(x247/x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = -29112763;
	int8_t x250 = -1;
	static int32_t x251 = 46114610;
	int32_t t60 = 475857797;

    t60 = (x249>(x250==(x251/x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -1;
	int32_t x254 = 250;
	int16_t x255 = INT16_MIN;
	static volatile int16_t x256 = -1;
	int32_t t61 = 1;

    t61 = (x253>(x254==(x255/x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x257 = INT8_MIN;
	uint64_t x258 = 24LLU;
	int32_t t62 = 962302;

    t62 = (x257>(x258==(x259/x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1001;
	int32_t x262 = -57;
	uint64_t x263 = 787659041610800LLU;
	volatile int32_t t63 = 16;

    t63 = (x261>(x262==(x263/x264)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x266 = INT64_MIN;
	int16_t x267 = -12;
	static volatile uint64_t x268 = 35168166042319834LLU;
	int32_t t64 = 237470;

    t64 = (x265>(x266==(x267/x268)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x271 = UINT16_MAX;
	static int64_t x272 = INT64_MAX;
	volatile int32_t t65 = -315;

    t65 = (x269>(x270==(x271/x272)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 396891U;
	uint64_t x276 = UINT64_MAX;

    t66 = (x273>(x274==(x275/x276)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = 0;
	volatile int8_t x278 = -1;
	int64_t x279 = INT64_MAX;
	int16_t x280 = -43;
	volatile int32_t t67 = 820;

    t67 = (x277>(x278==(x279/x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = UINT64_MAX;
	uint8_t x282 = 18U;
	int16_t x284 = INT16_MAX;
	int32_t t68 = 119456073;

    t68 = (x281>(x282==(x283/x284)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = INT32_MAX;
	int8_t x286 = -1;
	int8_t x287 = -1;
	int32_t x288 = 15283914;
	int32_t t69 = -1894774;

    t69 = (x285>(x286==(x287/x288)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x289 = UINT32_MAX;
	uint64_t x290 = 296LLU;
	int64_t x292 = INT64_MIN;
	int32_t t70 = 58;

    t70 = (x289>(x290==(x291/x292)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = 3;
	int64_t x294 = INT64_MIN;
	int8_t x295 = 2;
	int32_t t71 = 510146;

    t71 = (x293>(x294==(x295/x296)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 774U;
	int64_t x298 = -18067272898469904LL;
	volatile int16_t x299 = 0;
	uint64_t x300 = 3870095708708578156LLU;
	int32_t t72 = 3034;

    t72 = (x297>(x298==(x299/x300)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 496410558574LLU;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = -1369694;

    t73 = (x301>(x302==(x303/x304)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x306 = 5U;
	static uint32_t x307 = 958U;
	int8_t x308 = -1;

    t74 = (x305>(x306==(x307/x308)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x314 = INT8_MIN;

    t75 = (x313>(x314==(x315/x316)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x318 = 7U;
	static uint16_t x319 = UINT16_MAX;
	int32_t t76 = -11;

    t76 = (x317>(x318==(x319/x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x323 = -521;
	uint32_t x324 = 58U;
	static int32_t t77 = 425952;

    t77 = (x321>(x322==(x323/x324)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x325 = 2;
	int32_t x326 = 4075;
	int16_t x327 = INT16_MIN;
	static uint16_t x328 = UINT16_MAX;
	volatile int32_t t78 = -12;

    t78 = (x325>(x326==(x327/x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = INT32_MIN;
	volatile uint64_t x335 = 230095LLU;
	uint16_t x336 = 3480U;
	volatile int32_t t79 = 233854;

    t79 = (x333>(x334==(x335/x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x338 = INT16_MAX;
	int16_t x340 = 156;
	int32_t t80 = -111;

    t80 = (x337>(x338==(x339/x340)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = INT32_MAX;
	volatile int8_t x342 = INT8_MIN;
	volatile int32_t x343 = 0;
	int32_t x344 = INT32_MIN;

    t81 = (x341>(x342==(x343/x344)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x345 = 21U;
	volatile int32_t t82 = -1;

    t82 = (x345>(x346==(x347/x348)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = -37LL;
	uint64_t x350 = UINT64_MAX;
	uint16_t x352 = 649U;
	int32_t t83 = -987782890;

    t83 = (x349>(x350==(x351/x352)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x353 = 110U;
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	volatile int64_t x356 = 719870264LL;
	volatile int32_t t84 = 1;

    t84 = (x353>(x354==(x355/x356)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x359 = INT32_MAX;
	volatile int64_t x360 = -259887295LL;
	volatile int32_t t85 = -3577;

    t85 = (x357>(x358==(x359/x360)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	int32_t t86 = 906431020;

    t86 = (x361>(x362==(x363/x364)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x366 = -1;
	int32_t x367 = -1;
	volatile int32_t t87 = 15840132;

    t87 = (x365>(x366==(x367/x368)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = INT32_MAX;
	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = 5U;
	int32_t t88 = -27038;

    t88 = (x369>(x370==(x371/x372)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x373 = 48337215LL;
	static uint64_t x374 = 137550636LLU;
	static int64_t x375 = -3807162LL;
	volatile uint16_t x376 = 871U;
	volatile int32_t t89 = 81613;

    t89 = (x373>(x374==(x375/x376)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x377 = INT32_MIN;
	static uint16_t x378 = 0U;
	volatile uint8_t x379 = 3U;
	uint64_t x380 = 345615327284946LLU;
	static int32_t t90 = 9;

    t90 = (x377>(x378==(x379/x380)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = 7855;
	uint32_t x382 = 25U;
	static int16_t x384 = 23;
	int32_t t91 = 27;

    t91 = (x381>(x382==(x383/x384)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x385 = 121667U;
	volatile uint16_t x387 = UINT16_MAX;
	volatile uint16_t x388 = 308U;
	volatile int32_t t92 = -23;

    t92 = (x385>(x386==(x387/x388)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x390 = 78U;
	int8_t x391 = -1;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t93 = -1212757;

    t93 = (x389>(x390==(x391/x392)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = 12U;
	static uint32_t x394 = 3149U;
	static int64_t x395 = INT64_MIN;
	uint64_t x396 = 1819182220438270LLU;
	int32_t t94 = 16388020;

    t94 = (x393>(x394==(x395/x396)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x397 = INT64_MIN;
	static int8_t x398 = 1;
	int16_t x399 = -16377;
	int16_t x400 = -1;
	volatile int32_t t95 = -620648165;

    t95 = (x397>(x398==(x399/x400)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	static volatile int16_t x403 = 3428;
	int64_t x404 = INT64_MAX;

    t96 = (x401>(x402==(x403/x404)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x406 = 0;
	uint8_t x407 = 0U;
	uint16_t x408 = 2U;
	int32_t t97 = 0;

    t97 = (x405>(x406==(x407/x408)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x409 = INT64_MIN;
	int32_t x410 = -7756;
	int64_t x412 = -7867922313334LL;
	int32_t t98 = -533317965;

    t98 = (x409>(x410==(x411/x412)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x413 = -3592;
	volatile uint32_t x414 = UINT32_MAX;
	volatile uint16_t x415 = 1953U;
	int8_t x416 = -1;
	static volatile int32_t t99 = -1023241953;

    t99 = (x413>(x414==(x415/x416)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = 56777845408LL;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MAX;
	static int32_t t100 = -13793636;

    t100 = (x417>(x418==(x419/x420)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = 1;
	int32_t t101 = 685621726;

    t101 = (x421>(x422==(x423/x424)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = 228;
	int8_t x426 = INT8_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t102 = 89899771;

    t102 = (x425>(x426==(x427/x428)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = -25;
	static int64_t x430 = -802515177374736451LL;
	volatile int16_t x431 = -49;
	uint8_t x432 = 110U;
	int32_t t103 = -1047961911;

    t103 = (x429>(x430==(x431/x432)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x433 = 1239096;
	int8_t x434 = INT8_MIN;
	volatile uint64_t x435 = 8917877326804997LLU;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t104 = -3;

    t104 = (x433>(x434==(x435/x436)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = INT32_MAX;
	int8_t x438 = INT8_MIN;
	static uint8_t x439 = 26U;
	int8_t x440 = -1;

    t105 = (x437>(x438==(x439/x440)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x441 = 18U;
	int64_t x442 = -1847012481460LL;
	int32_t x444 = INT32_MIN;
	int32_t t106 = -33;

    t106 = (x441>(x442==(x443/x444)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x446 = INT8_MIN;
	uint8_t x447 = UINT8_MAX;
	uint64_t x448 = 156143LLU;
	int32_t t107 = 0;

    t107 = (x445>(x446==(x447/x448)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x449 = 6504304598885LLU;
	int32_t x450 = -31022;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	static volatile int32_t t108 = -423;

    t108 = (x449>(x450==(x451/x452)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x461 = INT64_MIN;
	uint32_t x462 = UINT32_MAX;
	int32_t x463 = INT32_MIN;
	static int32_t x464 = 999;
	volatile int32_t t109 = -714;

    t109 = (x461>(x462==(x463/x464)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x465 = 51562U;
	int64_t x466 = -15626285425797LL;
	static uint64_t x467 = 9LLU;
	int16_t x468 = INT16_MAX;

    t110 = (x465>(x466==(x467/x468)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x469 = INT32_MAX;
	int64_t x470 = INT64_MIN;
	int64_t x471 = -1LL;
	volatile uint8_t x472 = UINT8_MAX;

    t111 = (x469>(x470==(x471/x472)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = INT64_MIN;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = -1;
	volatile int32_t t112 = 960017348;

    t112 = (x477>(x478==(x479/x480)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x482 = 1U;
	volatile int16_t x483 = -1;
	int8_t x484 = -1;
	int32_t t113 = -4618508;

    t113 = (x481>(x482==(x483/x484)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x488 = 58U;

    t114 = (x485>(x486==(x487/x488)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint32_t x490 = 85U;
	static int32_t x491 = -1186947;
	uint16_t x492 = 493U;
	static int32_t t115 = 0;

    t115 = (x489>(x490==(x491/x492)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x494 = INT16_MAX;
	int8_t x495 = 1;
	static int32_t x496 = INT32_MIN;
	volatile int32_t t116 = -3822;

    t116 = (x493>(x494==(x495/x496)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x497 = 550642432717LL;
	int16_t x498 = INT16_MIN;
	int64_t x499 = 1725978795684LL;

    t117 = (x497>(x498==(x499/x500)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x503 = -215;
	static int32_t x504 = -1;
	int32_t t118 = 3087;

    t118 = (x501>(x502==(x503/x504)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = INT16_MIN;
	volatile uint8_t x506 = 11U;
	uint32_t x507 = 1411524272U;
	int8_t x508 = INT8_MIN;

    t119 = (x505>(x506==(x507/x508)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x509 = INT16_MIN;
	uint64_t x510 = 1116758LLU;
	static int8_t x511 = INT8_MAX;
	static uint16_t x512 = UINT16_MAX;
	volatile int32_t t120 = -1060;

    t120 = (x509>(x510==(x511/x512)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x513 = 2LL;
	static volatile int64_t x515 = -1LL;
	volatile int32_t t121 = 5179507;

    t121 = (x513>(x514==(x515/x516)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = -1;
	static int8_t x519 = INT8_MIN;
	int8_t x520 = 3;

    t122 = (x517>(x518==(x519/x520)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = -1;
	int32_t x522 = -946;
	static int32_t x523 = INT32_MIN;
	uint32_t x524 = UINT32_MAX;

    t123 = (x521>(x522==(x523/x524)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x525 = 74664LL;
	static uint16_t x526 = 24U;
	int32_t x527 = INT32_MIN;
	static int64_t x528 = INT64_MIN;
	int32_t t124 = -1;

    t124 = (x525>(x526==(x527/x528)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x529 = 3U;
	uint8_t x531 = 1U;
	static uint64_t x532 = 37719585528134LLU;
	volatile int32_t t125 = -5789666;

    t125 = (x529>(x530==(x531/x532)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x533 = INT8_MIN;
	int16_t x535 = -1;
	volatile int8_t x536 = INT8_MIN;
	int32_t t126 = 23736;

    t126 = (x533>(x534==(x535/x536)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x537 = 0;
	int32_t x538 = -1;
	int32_t x539 = 3;
	volatile int32_t x540 = INT32_MIN;
	int32_t t127 = -1502465;

    t127 = (x537>(x538==(x539/x540)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x541 = 46995600183604549LLU;
	int16_t x542 = INT16_MIN;
	volatile uint32_t x543 = UINT32_MAX;
	uint64_t x544 = 52987LLU;
	static int32_t t128 = 0;

    t128 = (x541>(x542==(x543/x544)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x547 = -3;
	int8_t x548 = -2;

    t129 = (x545>(x546==(x547/x548)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x549 = INT8_MIN;
	static uint64_t x550 = UINT64_MAX;
	int16_t x551 = INT16_MAX;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t130 = 3091;

    t130 = (x549>(x550==(x551/x552)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x557 = 1U;
	int8_t x559 = -1;
	int64_t x560 = INT64_MIN;
	static int32_t t131 = -7029016;

    t131 = (x557>(x558==(x559/x560)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x561 = -2160653990223936LL;
	static volatile uint64_t x562 = UINT64_MAX;
	int16_t x563 = -1;
	int32_t x564 = -1;
	int32_t t132 = 122;

    t132 = (x561>(x562==(x563/x564)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x565 = INT16_MIN;
	static volatile int16_t x567 = -1;
	volatile int32_t x568 = INT32_MAX;
	int32_t t133 = 554888;

    t133 = (x565>(x566==(x567/x568)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x570 = 25U;
	int64_t x571 = INT64_MAX;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t134 = 16387002;

    t134 = (x569>(x570==(x571/x572)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x573 = -38635587LL;
	static int32_t x574 = -107772;
	int16_t x575 = INT16_MIN;
	volatile uint8_t x576 = UINT8_MAX;
	volatile int32_t t135 = 161;

    t135 = (x573>(x574==(x575/x576)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = -1;
	uint64_t x579 = 66081925854317142LLU;
	static uint16_t x580 = UINT16_MAX;
	int32_t t136 = -83274668;

    t136 = (x577>(x578==(x579/x580)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x581 = -239;
	int64_t x582 = -7245LL;
	int8_t x583 = INT8_MAX;

    t137 = (x581>(x582==(x583/x584)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x585 = 2182330932017301488LLU;
	volatile int32_t t138 = -4732213;

    t138 = (x585>(x586==(x587/x588)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = -1;
	uint64_t x590 = 2386155111LLU;
	volatile uint64_t x592 = 56833564975LLU;
	int32_t t139 = 9936620;

    t139 = (x589>(x590==(x591/x592)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x594 = 13U;
	int8_t x595 = -1;
	static int64_t x596 = 1LL;
	int32_t t140 = -12040499;

    t140 = (x593>(x594==(x595/x596)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	int64_t x598 = -18859320LL;
	uint64_t x599 = 471366105426708574LLU;
	volatile int32_t t141 = 263;

    t141 = (x597>(x598==(x599/x600)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x601 = UINT64_MAX;
	static volatile int16_t x602 = INT16_MIN;
	uint32_t x603 = 15986U;
	volatile int32_t t142 = 948496204;

    t142 = (x601>(x602==(x603/x604)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x605 = INT8_MAX;
	volatile int8_t x606 = INT8_MAX;
	static int32_t x607 = INT32_MAX;
	volatile int32_t t143 = 17897085;

    t143 = (x605>(x606==(x607/x608)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MIN;
	static int8_t x611 = INT8_MAX;
	int16_t x612 = -11579;
	volatile int32_t t144 = 3339;

    t144 = (x609>(x610==(x611/x612)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x613 = INT16_MIN;
	uint32_t x614 = UINT32_MAX;

    t145 = (x613>(x614==(x615/x616)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x617 = 165U;
	int32_t x618 = -74;
	int16_t x619 = INT16_MIN;
	static uint8_t x620 = UINT8_MAX;
	int32_t t146 = 460238;

    t146 = (x617>(x618==(x619/x620)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x622 = INT32_MIN;
	volatile int64_t x623 = INT64_MIN;
	int16_t x624 = 13467;
	int32_t t147 = 15897;

    t147 = (x621>(x622==(x623/x624)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x625 = INT32_MIN;
	uint16_t x626 = 2U;
	volatile int16_t x627 = -12;
	int16_t x628 = -44;
	int32_t t148 = 113229;

    t148 = (x625>(x626==(x627/x628)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x629 = INT32_MIN;
	static int64_t x630 = -28LL;
	uint16_t x631 = 340U;
	volatile int32_t t149 = 7;

    t149 = (x629>(x630==(x631/x632)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x633 = 202;
	int16_t x634 = INT16_MIN;
	int32_t x635 = -1;
	int8_t x636 = INT8_MIN;
	volatile int32_t t150 = 3677343;

    t150 = (x633>(x634==(x635/x636)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x638 = INT64_MIN;
	int8_t x639 = 58;
	static uint64_t x640 = 9397987LLU;
	int32_t t151 = 394;

    t151 = (x637>(x638==(x639/x640)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = 6U;
	static int32_t x644 = -1;
	int32_t t152 = 67;

    t152 = (x641>(x642==(x643/x644)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x645 = INT8_MAX;
	volatile int16_t x646 = INT16_MIN;
	static int32_t x647 = INT32_MIN;
	int64_t x648 = INT64_MAX;

    t153 = (x645>(x646==(x647/x648)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x650 = INT64_MIN;
	static int32_t x651 = -101;
	int32_t x652 = INT32_MIN;
	volatile int32_t t154 = -768;

    t154 = (x649>(x650==(x651/x652)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x653 = 7263U;
	int64_t x654 = 231825181LL;
	int8_t x655 = INT8_MAX;
	uint16_t x656 = 6U;
	volatile int32_t t155 = -168;

    t155 = (x653>(x654==(x655/x656)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x658 = UINT32_MAX;
	uint16_t x659 = 30819U;
	static uint32_t x660 = UINT32_MAX;
	int32_t t156 = 8931005;

    t156 = (x657>(x658==(x659/x660)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x665 = 3;
	uint32_t x666 = UINT32_MAX;
	int16_t x668 = -10;
	volatile int32_t t157 = -10442514;

    t157 = (x665>(x666==(x667/x668)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x669 = INT8_MIN;
	volatile int32_t x670 = INT32_MAX;
	int8_t x672 = -5;
	static int32_t t158 = -95;

    t158 = (x669>(x670==(x671/x672)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x673 = 1U;
	int16_t x674 = 223;
	int16_t x675 = INT16_MAX;
	int8_t x676 = -1;
	volatile int32_t t159 = 3;

    t159 = (x673>(x674==(x675/x676)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = 3;
	int32_t x679 = -1;
	static uint16_t x680 = 42U;
	volatile int32_t t160 = 6;

    t160 = (x677>(x678==(x679/x680)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x681 = INT16_MIN;
	uint8_t x683 = 23U;
	volatile int8_t x684 = INT8_MIN;
	volatile int32_t t161 = -1578008;

    t161 = (x681>(x682==(x683/x684)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x687 = INT16_MIN;
	int64_t x688 = INT64_MIN;
	volatile int32_t t162 = 222;

    t162 = (x685>(x686==(x687/x688)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x690 = 1U;
	uint8_t x692 = 1U;
	int32_t t163 = -769;

    t163 = (x689>(x690==(x691/x692)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x693 = INT32_MIN;
	volatile int8_t x694 = -1;
	uint32_t x695 = UINT32_MAX;
	volatile int8_t x696 = -1;
	static int32_t t164 = 335;

    t164 = (x693>(x694==(x695/x696)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x697 = INT8_MIN;
	int64_t x698 = -1LL;
	int8_t x699 = -54;
	int32_t t165 = -42;

    t165 = (x697>(x698==(x699/x700)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x701 = -1LL;
	static uint8_t x702 = 127U;
	volatile int16_t x704 = INT16_MAX;
	volatile int32_t t166 = -731787243;

    t166 = (x701>(x702==(x703/x704)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x705 = UINT64_MAX;
	uint8_t x708 = UINT8_MAX;
	int32_t t167 = 4;

    t167 = (x705>(x706==(x707/x708)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x709 = 59974216U;
	static int8_t x710 = -1;
	static uint8_t x712 = UINT8_MAX;
	int32_t t168 = 20976159;

    t168 = (x709>(x710==(x711/x712)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x714 = INT32_MIN;
	uint8_t x715 = 17U;
	static int64_t x716 = -1LL;
	volatile int32_t t169 = 816197;

    t169 = (x713>(x714==(x715/x716)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x717 = -522601111869653093LL;
	int32_t x719 = INT32_MIN;
	static uint32_t x720 = UINT32_MAX;
	volatile int32_t t170 = 18;

    t170 = (x717>(x718==(x719/x720)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x725 = INT8_MAX;
	int8_t x726 = -4;
	int16_t x728 = INT16_MAX;
	int32_t t171 = 1006129;

    t171 = (x725>(x726==(x727/x728)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x729 = 48591084U;
	int8_t x730 = 30;
	int16_t x731 = INT16_MAX;
	int32_t x732 = INT32_MAX;
	volatile int32_t t172 = 1307;

    t172 = (x729>(x730==(x731/x732)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x733 = 1;
	int8_t x735 = INT8_MIN;
	int32_t t173 = -7217;

    t173 = (x733>(x734==(x735/x736)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x737 = 1474271740LL;
	uint32_t x738 = UINT32_MAX;
	uint64_t x739 = UINT64_MAX;
	uint16_t x740 = 3U;
	volatile int32_t t174 = 32635809;

    t174 = (x737>(x738==(x739/x740)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x741 = 1U;
	int8_t x742 = -1;
	uint32_t x743 = 10U;
	static uint32_t x744 = UINT32_MAX;

    t175 = (x741>(x742==(x743/x744)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x749 = INT32_MIN;
	static int32_t x750 = INT32_MAX;
	uint64_t x751 = 59098237436362810LLU;
	int32_t t176 = -629;

    t176 = (x749>(x750==(x751/x752)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	static uint64_t x754 = 163339770282026LLU;
	int32_t x755 = INT32_MIN;
	volatile int32_t t177 = 180623857;

    t177 = (x753>(x754==(x755/x756)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x757 = -1;
	volatile uint32_t x758 = 14U;
	int16_t x759 = 1010;
	int32_t x760 = INT32_MIN;
	int32_t t178 = 168819;

    t178 = (x757>(x758==(x759/x760)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x761 = 7U;
	static uint32_t x762 = 4937203U;
	volatile uint32_t x763 = 246U;

    t179 = (x761>(x762==(x763/x764)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x765 = -23018402;
	static int16_t x766 = INT16_MIN;
	int32_t x767 = -1;
	int32_t t180 = -1;

    t180 = (x765>(x766==(x767/x768)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x770 = UINT8_MAX;
	int32_t x771 = -2155699;
	int64_t x772 = 34878830322095952LL;
	static volatile int32_t t181 = 4;

    t181 = (x769>(x770==(x771/x772)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x773 = 17U;
	static int32_t x774 = INT32_MAX;
	static int32_t x776 = 12829412;

    t182 = (x773>(x774==(x775/x776)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x777 = INT8_MIN;
	int64_t x778 = INT64_MIN;
	uint16_t x779 = UINT16_MAX;
	volatile int32_t t183 = 0;

    t183 = (x777>(x778==(x779/x780)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x781 = INT64_MAX;
	volatile int16_t x782 = -5;
	int32_t x783 = -390672;
	int64_t x784 = -1LL;
	volatile int32_t t184 = 2858;

    t184 = (x781>(x782==(x783/x784)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x785 = INT8_MIN;
	uint8_t x786 = 0U;
	int64_t x787 = -1985821771285898LL;
	int64_t x788 = 8109LL;
	int32_t t185 = -6;

    t185 = (x785>(x786==(x787/x788)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x789 = INT32_MIN;
	int64_t x792 = INT64_MAX;
	volatile int32_t t186 = 43;

    t186 = (x789>(x790==(x791/x792)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x794 = 9U;
	int8_t x795 = INT8_MIN;

    t187 = (x793>(x794==(x795/x796)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x797 = 1;
	int32_t x798 = INT32_MIN;
	int16_t x799 = 2550;
	int16_t x800 = -1;
	volatile int32_t t188 = -3561;

    t188 = (x797>(x798==(x799/x800)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x801 = INT8_MAX;
	volatile int64_t x802 = INT64_MIN;
	static uint32_t x803 = 2U;
	uint32_t x804 = UINT32_MAX;
	static int32_t t189 = 11541096;

    t189 = (x801>(x802==(x803/x804)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x805 = INT32_MIN;
	static int32_t x806 = 53;
	int64_t x807 = -1LL;
	int8_t x808 = INT8_MAX;
	int32_t t190 = -1;

    t190 = (x805>(x806==(x807/x808)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x809 = 127655U;
	uint32_t x810 = 48U;
	int32_t x811 = -1;
	volatile int32_t x812 = INT32_MIN;
	int32_t t191 = 78537;

    t191 = (x809>(x810==(x811/x812)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x813 = -583633021;
	int64_t x815 = -1LL;
	int8_t x816 = INT8_MIN;
	int32_t t192 = 238811;

    t192 = (x813>(x814==(x815/x816)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x817 = -1;
	static int16_t x818 = INT16_MAX;
	volatile uint32_t x820 = UINT32_MAX;
	int32_t t193 = -1326;

    t193 = (x817>(x818==(x819/x820)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x821 = UINT64_MAX;
	uint16_t x822 = 3167U;
	volatile uint32_t x823 = 199753661U;
	static volatile int32_t x824 = INT32_MAX;
	int32_t t194 = 4;

    t194 = (x821>(x822==(x823/x824)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = -27;
	static int16_t x826 = 291;
	uint64_t x827 = UINT64_MAX;
	static uint16_t x828 = 2427U;
	volatile int32_t t195 = 4;

    t195 = (x825>(x826==(x827/x828)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x829 = -1;
	volatile int16_t x831 = INT16_MIN;

    t196 = (x829>(x830==(x831/x832)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x837 = 44100389;
	uint64_t x838 = UINT64_MAX;
	int64_t x840 = -1LL;
	volatile int32_t t197 = -2;

    t197 = (x837>(x838==(x839/x840)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x841 = -9698683425755901LL;
	int8_t x843 = -58;
	int8_t x844 = -4;
	static int32_t t198 = -9;

    t198 = (x841>(x842==(x843/x844)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x845 = INT32_MIN;
	uint32_t x846 = 151U;
	int16_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int32_t t199 = 15;

    t199 = (x845>(x846==(x847/x848)));

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

