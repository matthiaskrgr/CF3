
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

volatile int64_t x20 = -1LL;
volatile int32_t t4 = -4996;
int64_t x23 = -231LL;
int32_t x24 = -2908;
int32_t x28 = INT32_MIN;
static int8_t x42 = -1;
volatile int32_t t11 = -8;
static volatile int32_t x50 = INT32_MIN;
int32_t x51 = INT32_MIN;
volatile int32_t t12 = 2073;
volatile int16_t x55 = INT16_MIN;
volatile int16_t x56 = 3;
static uint64_t x76 = UINT64_MAX;
int32_t t18 = INT32_MIN;
static int8_t x77 = INT8_MIN;
uint32_t x79 = 7557U;
int16_t x83 = INT16_MAX;
static int32_t x84 = -1;
volatile int32_t t20 = -1;
uint64_t x89 = 377738546826250281LLU;
volatile int16_t x92 = INT16_MAX;
uint16_t x95 = 32U;
uint8_t x100 = UINT8_MAX;
static int16_t x103 = INT16_MIN;
volatile int8_t x108 = 51;
int32_t t26 = 2778;
static int64_t x112 = INT64_MIN;
static int64_t x116 = INT64_MIN;
volatile uint32_t t28 = 1U;
int8_t x117 = 0;
static uint64_t x122 = 1004610LLU;
uint32_t x123 = UINT32_MAX;
static uint16_t x125 = 25U;
uint64_t x126 = UINT64_MAX;
static uint8_t x129 = 13U;
int64_t x131 = -1087861LL;
static uint64_t x134 = 33056457LLU;
static int32_t x148 = -1;
int32_t t38 = 380637917;
int8_t x164 = INT8_MIN;
int16_t x166 = -4;
uint64_t x167 = 1LLU;
int8_t x170 = -43;
int32_t x171 = -1;
int64_t x175 = -45348844637LL;
volatile int64_t t44 = 4032296507637844381LL;
uint32_t x184 = 5865U;
int16_t x191 = INT16_MAX;
uint64_t x199 = 157024LLU;
volatile int32_t t50 = -458;
static int16_t x209 = INT16_MIN;
static volatile int32_t x221 = -1;
volatile int8_t x228 = INT8_MAX;
int16_t x230 = INT16_MIN;
uint64_t x234 = UINT64_MAX;
int32_t x235 = -1;
uint64_t x237 = 1511031LLU;
static int8_t x243 = 2;
uint32_t x245 = 4925U;
static volatile int64_t x251 = INT64_MIN;
int32_t x253 = INT32_MAX;
uint64_t x261 = UINT64_MAX;
int64_t x266 = -925LL;
int16_t x269 = 1950;
static int64_t x284 = -24716534103434229LL;
int32_t x291 = INT32_MIN;
volatile int16_t x295 = INT16_MIN;
volatile int32_t t74 = -55;
uint32_t x310 = UINT32_MAX;
uint64_t x311 = UINT64_MAX;
int8_t x312 = INT8_MIN;
int16_t x317 = 5;
static int64_t x318 = INT64_MIN;
uint64_t x322 = 171439884162878053LLU;
int32_t t81 = -1;
static uint64_t x331 = 2826170406LLU;
volatile uint16_t x332 = 22226U;
uint32_t x334 = 14388U;
int64_t x336 = INT64_MAX;
static int32_t t83 = 699705;
static int8_t x337 = -46;
volatile int32_t x341 = INT32_MIN;
static int32_t x349 = -1;
int16_t x350 = 12;
int32_t x353 = 0;
int16_t x354 = INT16_MIN;
static int8_t x356 = -1;
int16_t x365 = 1;
static int32_t x368 = INT32_MAX;
int8_t x372 = INT8_MAX;
int32_t x373 = INT32_MAX;
int64_t x377 = -1LL;
int16_t x387 = 327;
uint64_t x389 = 164LLU;
uint64_t t97 = 350LLU;
volatile uint32_t x397 = 235921651U;
int8_t x399 = -1;
static int16_t x401 = 3;
volatile int32_t t100 = -3300;
uint64_t x406 = 4939LLU;
uint64_t x412 = 14384447LLU;
int8_t x424 = INT8_MAX;
volatile int8_t x425 = INT8_MAX;
int16_t x426 = -37;
static uint32_t x440 = 51865906U;
int16_t x448 = -1;
static int64_t x452 = -51LL;
static volatile uint64_t t114 = 208900932820500LLU;
volatile int16_t x461 = INT16_MIN;
static volatile uint8_t x467 = 65U;
volatile int16_t x475 = 39;
volatile int32_t t119 = 14608;
int16_t x485 = INT16_MIN;
int8_t x492 = -1;
static volatile int32_t t122 = 2;
volatile int32_t t124 = 735;
int8_t x501 = 1;
static volatile uint64_t x506 = 2975864LLU;
static uint16_t x507 = UINT16_MAX;
int16_t x513 = INT16_MIN;
volatile int32_t t128 = -11;
int8_t x518 = -48;
static int64_t x522 = -2530885991LL;
int32_t x526 = INT32_MAX;
int8_t x537 = INT8_MIN;
int32_t x539 = INT32_MAX;
int32_t t134 = -185;
uint32_t x542 = UINT32_MAX;
uint16_t x556 = 26748U;
static int16_t x557 = INT16_MIN;
static volatile int64_t x560 = -279911587LL;
int64_t x572 = INT64_MAX;
volatile int64_t x591 = INT64_MAX;
uint64_t x600 = 4024344LLU;
volatile uint8_t x604 = 1U;
int32_t t150 = -80574;
int64_t x605 = 296854639479810LL;
int64_t x608 = -1LL;
uint64_t x610 = 33577327344804133LLU;
int16_t x612 = -1;
static int16_t x613 = -1;
uint32_t x614 = UINT32_MAX;
uint8_t x624 = 7U;
int32_t t155 = 1;
static volatile uint8_t x625 = UINT8_MAX;
int32_t x626 = INT32_MIN;
volatile int16_t x627 = INT16_MIN;
uint16_t x628 = 28U;
volatile int32_t x640 = INT32_MAX;
volatile int64_t t159 = -4767085737LL;
int8_t x656 = -1;
uint8_t x660 = UINT8_MAX;
int16_t x663 = -572;
static volatile uint8_t x667 = UINT8_MAX;
int8_t x672 = INT8_MIN;
static int16_t x690 = 2222;
int8_t x695 = 23;
int32_t x697 = -14195497;
int32_t x704 = -1;
int32_t t176 = 6;
static volatile int32_t t177 = INT32_MIN;
int16_t x718 = -1;
int64_t x719 = -1LL;
volatile int32_t t179 = INT32_MAX;
volatile int8_t x726 = 0;
static uint32_t x727 = 137176891U;
volatile int8_t x732 = -1;
volatile int32_t t181 = -31754482;
int8_t x740 = INT8_MAX;
uint32_t x760 = 565943115U;
uint8_t x763 = 21U;
volatile int32_t t189 = 53;
int16_t x765 = INT16_MAX;
int16_t x767 = -1;
uint16_t x768 = UINT16_MAX;
uint16_t x769 = 1U;
int64_t x770 = -5974651060686LL;
volatile uint32_t x772 = 176U;
static int32_t t191 = -9475;
volatile int32_t x774 = INT32_MIN;
uint8_t x775 = 1U;
int16_t x776 = INT16_MAX;
volatile int32_t t192 = -6222608;
uint32_t x777 = 1787U;
int32_t x778 = 128119;
int8_t x779 = INT8_MAX;
int8_t x787 = INT8_MAX;
uint8_t x791 = UINT8_MAX;
int16_t x794 = -1;
static uint64_t x796 = UINT64_MAX;
static uint64_t x801 = 3633314587342206LLU;
uint8_t x804 = 50U;
uint64_t t199 = 12081349159212050LLU;


void f0(void) {
    	volatile int16_t x1 = -270;
	uint64_t x2 = 1301861462634882LLU;
	static int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 955847420;

    t0 = (x1*(x2<=(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 1;
	static volatile uint8_t x6 = UINT8_MAX;
	static int64_t x7 = -1LL;
	int16_t x8 = -640;
	volatile int32_t t1 = -1656;

    t1 = (x5*(x6<=(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 104423715450613LLU;
	int32_t x12 = 4;
	int32_t t2 = 28;

    t2 = (x9*(x10<=(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 822LLU;
	static uint16_t x14 = 16U;
	int64_t x15 = INT64_MAX;
	uint32_t x16 = 5U;
	uint64_t t3 = 15264994LLU;

    t3 = (x13*(x14<=(x15%x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	static volatile int16_t x19 = INT16_MIN;

    t4 = (x17*(x18<=(x19%x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -9646176;
	uint16_t x22 = 7U;
	static volatile int32_t t5 = -654;

    t5 = (x21*(x22<=(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 12U;
	int8_t x26 = -1;
	uint64_t x27 = 484183633620419LLU;
	volatile uint32_t t6 = 1833U;

    t6 = (x25*(x26<=(x27%x28)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -532961349512282628LL;
	int16_t x30 = -52;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -1LL;

    t7 = (x29*(x30<=(x31%x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x34 = -16;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = INT32_MIN;

    t8 = (x33*(x34<=(x35%x36)));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int16_t x38 = -1;
	uint16_t x39 = 1U;
	int64_t x40 = 4872LL;
	volatile int32_t t9 = -26008;

    t9 = (x37*(x38<=(x39%x40)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 250186LLU;
	int64_t x43 = -426813149051161363LL;
	int16_t x44 = -1;
	volatile uint64_t t10 = 2LLU;

    t10 = (x41*(x42<=(x43%x44)));

    if (t10 != 250186LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	uint32_t x46 = 639687U;
	static uint16_t x47 = UINT16_MAX;
	uint16_t x48 = 1883U;

    t11 = (x45*(x46<=(x47%x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int64_t x52 = INT64_MIN;

    t12 = (x49*(x50<=(x51%x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = -7761LL;
	static int32_t t13 = -1480;

    t13 = (x53*(x54<=(x55%x56)));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = 3;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = -292;
	uint32_t x60 = 85218U;
	static int32_t t14 = -12973779;

    t14 = (x57*(x58<=(x59%x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = UINT64_MAX;
	int8_t x62 = -1;
	int64_t x63 = -1LL;
	static int32_t x64 = INT32_MIN;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = (x61*(x62<=(x63%x64)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x65 = UINT32_MAX;
	uint32_t x66 = 9013U;
	static volatile int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	uint32_t t16 = 6U;

    t16 = (x65*(x66<=(x67%x68)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -8015580LL;
	volatile uint32_t x70 = 311693U;
	int8_t x71 = 6;
	static int16_t x72 = -2;
	int64_t t17 = 52425141LL;

    t17 = (x69*(x70<=(x71%x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint64_t x74 = 1062045477960LLU;
	int16_t x75 = INT16_MIN;

    t18 = (x73*(x74<=(x75%x76)));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = 2;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -254;

    t19 = (x77*(x78<=(x79%x80)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -15;
	int16_t x82 = INT16_MAX;

    t20 = (x81*(x82<=(x83%x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 0;
	int16_t x86 = INT16_MIN;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MAX;
	static volatile int32_t t21 = -54786053;

    t21 = (x85*(x86<=(x87%x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x90 = 21;
	uint32_t x91 = 8116U;
	volatile uint64_t t22 = 222943096652892LLU;

    t22 = (x89*(x90<=(x91%x92)));

    if (t22 != 377738546826250281LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 75LLU;
	static uint8_t x94 = 7U;
	static uint8_t x96 = 25U;
	uint64_t t23 = 1688795012LLU;

    t23 = (x93*(x94<=(x95%x96)));

    if (t23 != 75LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = 38;
	static volatile int32_t t24 = 444;

    t24 = (x97*(x98<=(x99%x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x102 = 59010275588640LL;
	static int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -26;

    t25 = (x101*(x102<=(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = -1;
	static uint32_t x106 = 117U;
	uint32_t x107 = 3638U;

    t26 = (x105*(x106<=(x107%x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	volatile int16_t x110 = INT16_MAX;
	uint8_t x111 = UINT8_MAX;
	int32_t t27 = -118;

    t27 = (x109*(x110<=(x111%x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 41372815U;
	int8_t x114 = INT8_MIN;
	volatile int8_t x115 = -1;

    t28 = (x113*(x114<=(x115%x116)));

    if (t28 != 41372815U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = 221LL;
	volatile int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -4302;

    t29 = (x117*(x118<=(x119%x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = -29081;

    t30 = (x121*(x122<=(x123%x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x127 = INT8_MIN;
	volatile int16_t x128 = -27;
	static volatile int32_t t31 = -1467327;

    t31 = (x125*(x126<=(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = -291650;
	static uint8_t x132 = 15U;
	int32_t t32 = 0;

    t32 = (x129*(x130<=(x131%x132)));

    if (t32 != 13) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	volatile int16_t x135 = INT16_MIN;
	static int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 801673005;

    t33 = (x133*(x134<=(x135%x136)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -903;
	int32_t x138 = -1;
	volatile int16_t x139 = INT16_MAX;
	uint8_t x140 = UINT8_MAX;
	static volatile int32_t t34 = 1295286;

    t34 = (x137*(x138<=(x139%x140)));

    if (t34 != -903) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int16_t x142 = 49;
	int32_t x143 = INT32_MIN;
	int16_t x144 = -21;
	int64_t t35 = 505002681227169LL;

    t35 = (x141*(x142<=(x143%x144)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MAX;
	static volatile int32_t t36 = 5910136;

    t36 = (x145*(x146<=(x147%x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = -213418066269LL;
	static int16_t x150 = -843;
	int32_t x151 = -1;
	uint8_t x152 = 9U;
	static int64_t t37 = -542417LL;

    t37 = (x149*(x150<=(x151%x152)));

    if (t37 != -213418066269LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = 0U;
	static volatile int64_t x155 = -1LL;
	volatile int16_t x156 = 7;

    t38 = (x153*(x154<=(x155%x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	int32_t x158 = -1;
	static int32_t x159 = -232;
	int8_t x160 = -1;
	int32_t t39 = -11;

    t39 = (x157*(x158<=(x159%x160)));

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 7U;
	uint64_t x162 = 9110629LLU;
	uint32_t x163 = 1528U;
	volatile uint32_t t40 = 3U;

    t40 = (x161*(x162<=(x163%x164)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 135556275U;
	volatile int8_t x168 = -1;
	volatile uint32_t t41 = 179U;

    t41 = (x165*(x166<=(x167%x168)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -13491350160438LL;
	uint16_t x172 = UINT16_MAX;
	static int64_t t42 = 27LL;

    t42 = (x169*(x170<=(x171%x172)));

    if (t42 != -13491350160438LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	int16_t x174 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = (x173*(x174<=(x175%x176)));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	uint32_t x178 = 196U;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 2U;

    t44 = (x177*(x178<=(x179%x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x181 = -16473797;
	static uint8_t x182 = 29U;
	volatile int8_t x183 = -1;
	int32_t t45 = 1;

    t45 = (x181*(x182<=(x183%x184)));

    if (t45 != -16473797) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 1389U;
	static int32_t x186 = INT32_MIN;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MAX;
	uint32_t t46 = 29239698U;

    t46 = (x185*(x186<=(x187%x188)));

    if (t46 != 1389U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = INT32_MIN;

    t47 = (x189*(x190<=(x191%x192)));

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	static int8_t x194 = INT8_MAX;
	volatile uint16_t x195 = 9177U;
	int32_t x196 = -47843;
	volatile int32_t t48 = -210063;

    t48 = (x193*(x194<=(x195%x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = -54;
	uint16_t x200 = UINT16_MAX;
	static int64_t t49 = 546328LL;

    t49 = (x197*(x198<=(x199%x200)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = -1;
	uint64_t x204 = 2463145974586511LLU;

    t50 = (x201*(x202<=(x203%x204)));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 2U;
	int32_t t51 = -35;

    t51 = (x205*(x206<=(x207%x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x210 = 775;
	volatile int64_t x211 = -344394721626LL;
	volatile int32_t x212 = 3012196;
	int32_t t52 = -1;

    t52 = (x209*(x210<=(x211%x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MAX;
	int64_t x215 = 51619293391881LL;
	int8_t x216 = -1;
	volatile int32_t t53 = -236718039;

    t53 = (x213*(x214<=(x215%x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = 1;
	volatile int64_t x218 = 4480696926998221LL;
	static uint8_t x219 = 3U;
	uint8_t x220 = 4U;
	volatile int32_t t54 = -12;

    t54 = (x217*(x218<=(x219%x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	static uint64_t x224 = 12567275LLU;
	static int32_t t55 = 3858970;

    t55 = (x221*(x222<=(x223%x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = 465;
	volatile int8_t x226 = 2;
	int64_t x227 = INT64_MIN;
	int32_t t56 = -7;

    t56 = (x225*(x226<=(x227%x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	int32_t x231 = -1;
	uint32_t x232 = 521615053U;
	volatile int32_t t57 = 1033360;

    t57 = (x229*(x230<=(x231%x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int32_t x236 = INT32_MIN;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = (x233*(x234<=(x235%x236)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MAX;
	int64_t x240 = 105570392LL;
	uint64_t t59 = 18988726LLU;

    t59 = (x237*(x238<=(x239%x240)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 0U;
	volatile uint32_t x242 = 5129U;
	volatile int32_t x244 = -1;
	int32_t t60 = -118497;

    t60 = (x241*(x242<=(x243%x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t61 = 265U;

    t61 = (x245*(x246<=(x247%x248)));

    if (t61 != 4925U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 322227U;
	volatile int32_t x250 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	volatile uint32_t t62 = 255206895U;

    t62 = (x249*(x250<=(x251%x252)));

    if (t62 != 322227U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = -437013093972LL;
	int8_t x255 = INT8_MIN;
	static int16_t x256 = -7;
	int32_t t63 = INT32_MAX;

    t63 = (x253*(x254<=(x255%x256)));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 9U;
	static volatile int8_t x258 = -1;
	static volatile uint32_t x259 = 86U;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 885009084;

    t64 = (x257*(x258<=(x259%x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x262 = -1LL;
	static uint64_t x263 = UINT64_MAX;
	volatile uint64_t x264 = UINT64_MAX;
	uint64_t t65 = 1786053165LLU;

    t65 = (x261*(x262<=(x263%x264)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = INT8_MIN;
	volatile int8_t x267 = INT8_MIN;
	int64_t x268 = 16494977245809LL;
	volatile int32_t t66 = 511248415;

    t66 = (x265*(x266<=(x267%x268)));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x270 = 2U;
	int64_t x271 = -3752757161611915LL;
	static volatile int64_t x272 = INT64_MIN;
	volatile int32_t t67 = 438;

    t67 = (x269*(x270<=(x271%x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	int64_t x274 = INT64_MIN;
	static uint16_t x275 = UINT16_MAX;
	int64_t x276 = -1LL;
	volatile uint32_t t68 = UINT32_MAX;

    t68 = (x273*(x274<=(x275%x276)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 1U;
	int8_t x278 = INT8_MAX;
	volatile int16_t x279 = 655;
	int8_t x280 = -2;
	volatile int32_t t69 = 10;

    t69 = (x277*(x278<=(x279%x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x281 = UINT64_MAX;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -1478119428019722338LL;
	uint64_t t70 = 515969LLU;

    t70 = (x281*(x282<=(x283%x284)));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 4915;

    t71 = (x285*(x286<=(x287%x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MIN;
	uint16_t x290 = 912U;
	uint64_t x292 = 34213651LLU;
	volatile int32_t t72 = 115881533;

    t72 = (x289*(x290<=(x291%x292)));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = INT64_MIN;
	int8_t x296 = INT8_MAX;
	volatile uint32_t t73 = UINT32_MAX;

    t73 = (x293*(x294<=(x295%x296)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MAX;
	int16_t x298 = -49;
	int8_t x299 = -34;
	static volatile uint16_t x300 = 9251U;

    t74 = (x297*(x298<=(x299%x300)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	static volatile int16_t x303 = INT16_MIN;
	uint8_t x304 = 21U;
	int32_t t75 = 203;

    t75 = (x301*(x302<=(x303%x304)));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 26140U;
	uint8_t x306 = 0U;
	int32_t x307 = -1;
	static int64_t x308 = INT64_MIN;
	uint32_t t76 = 2308U;

    t76 = (x305*(x306<=(x307%x308)));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	volatile int64_t t77 = 8544843529LL;

    t77 = (x309*(x310<=(x311%x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	static uint16_t x315 = 3145U;
	uint16_t x316 = 14U;
	volatile int32_t t78 = INT32_MIN;

    t78 = (x313*(x314<=(x315%x316)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x319 = INT32_MIN;
	uint64_t x320 = 189937LLU;
	static volatile int32_t t79 = -27406240;

    t79 = (x317*(x318<=(x319%x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	uint32_t x323 = 1451720U;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -42;

    t80 = (x321*(x322<=(x323%x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MAX;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = -15;
	volatile int32_t x328 = INT32_MIN;

    t81 = (x325*(x326<=(x327%x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	volatile int32_t t82 = -26684084;

    t82 = (x329*(x330<=(x331%x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 8;
	int16_t x335 = INT16_MIN;

    t83 = (x333*(x334<=(x335%x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = 202;
	static uint32_t x339 = 74U;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 302309;

    t84 = (x337*(x338<=(x339%x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = -1LL;
	int16_t x343 = -796;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -7715;

    t85 = (x341*(x342<=(x343%x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MAX;
	static int32_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	static volatile uint64_t t86 = 49861398436313038LLU;

    t86 = (x345*(x346<=(x347%x348)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x351 = 130396882841LL;
	int32_t x352 = 3178;
	volatile int32_t t87 = -2;

    t87 = (x349*(x350<=(x351%x352)));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x355 = -1;
	volatile int32_t t88 = -1417;

    t88 = (x353*(x354<=(x355%x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = 2U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t89 = -89816;

    t89 = (x357*(x358<=(x359%x360)));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 347U;
	int32_t x362 = INT32_MAX;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;
	volatile int32_t t90 = 1608926;

    t90 = (x361*(x362<=(x363%x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x366 = UINT16_MAX;
	static int64_t x367 = -3858045657196LL;
	int32_t t91 = -30513033;

    t91 = (x365*(x366<=(x367%x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	volatile int32_t t92 = -720322284;

    t92 = (x369*(x370<=(x371%x372)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x374 = 105U;
	int16_t x375 = -1;
	static int64_t x376 = INT64_MAX;
	int32_t t93 = 15200;

    t93 = (x373*(x374<=(x375%x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -2662823;
	uint8_t x379 = 0U;
	static int8_t x380 = 1;
	volatile int64_t t94 = 471692509LL;

    t94 = (x377*(x378<=(x379%x380)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	uint32_t x382 = 1U;
	int64_t x383 = 286112LL;
	int32_t x384 = 76101054;
	static volatile int32_t t95 = INT32_MAX;

    t95 = (x381*(x382<=(x383%x384)));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MAX;
	volatile int64_t x388 = INT64_MAX;
	static volatile int32_t t96 = 41726910;

    t96 = (x385*(x386<=(x387%x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x390 = 9U;
	uint16_t x391 = 1U;
	volatile int16_t x392 = INT16_MIN;

    t97 = (x389*(x390<=(x391%x392)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 1303U;
	int32_t x394 = INT32_MAX;
	volatile int32_t x395 = -443310;
	int64_t x396 = -1LL;
	int32_t t98 = 49;

    t98 = (x393*(x394<=(x395%x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x398 = 970U;
	int32_t x400 = INT32_MAX;
	static volatile uint32_t t99 = 106385U;

    t99 = (x397*(x398<=(x399%x400)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x402 = INT32_MIN;
	volatile int32_t x403 = 200245;
	volatile int8_t x404 = -1;

    t100 = (x401*(x402<=(x403%x404)));

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	uint16_t x407 = 30U;
	static uint16_t x408 = 42U;
	static volatile uint64_t t101 = 90423037724LLU;

    t101 = (x405*(x406<=(x407%x408)));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = UINT64_MAX;
	uint32_t x410 = 29U;
	int32_t x411 = 365537064;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (x409*(x410<=(x411%x412)));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	uint8_t x414 = 0U;
	static int16_t x415 = 51;
	uint8_t x416 = 20U;
	volatile int64_t t103 = INT64_MAX;

    t103 = (x413*(x414<=(x415%x416)));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	volatile int16_t x418 = 264;
	int32_t x419 = 1245075;
	int16_t x420 = 13978;
	int32_t t104 = INT32_MAX;

    t104 = (x417*(x418<=(x419%x420)));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	int16_t x422 = INT16_MAX;
	volatile int16_t x423 = -6;
	static int64_t t105 = -43799591158LL;

    t105 = (x421*(x422<=(x423%x424)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x427 = INT64_MIN;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t106 = 17564451;

    t106 = (x425*(x426<=(x427%x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 1;
	int8_t x430 = INT8_MIN;
	static int32_t x431 = 213802603;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -28441834;

    t107 = (x429*(x430<=(x431%x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 630U;
	volatile int64_t x434 = INT64_MAX;
	static volatile uint16_t x435 = 1U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t108 = 17436663;

    t108 = (x433*(x434<=(x435%x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 5378U;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	static volatile int32_t t109 = 3314;

    t109 = (x437*(x438<=(x439%x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 127U;
	uint32_t x442 = 1826139630U;
	int32_t x443 = 0;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t110 = 8286691;

    t110 = (x441*(x442<=(x443%x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 1964LLU;
	static uint32_t x446 = 17162209U;
	static uint16_t x447 = 15U;
	uint64_t t111 = 42LLU;

    t111 = (x445*(x446<=(x447%x448)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	volatile int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MIN;
	static int32_t t112 = 20002509;

    t112 = (x449*(x450<=(x451%x452)));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int8_t x454 = -1;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = 26U;
	volatile uint64_t t113 = 427678292055102LLU;

    t113 = (x453*(x454<=(x455%x456)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = 89180LLU;
	int8_t x458 = INT8_MIN;
	volatile uint16_t x459 = 365U;
	uint16_t x460 = UINT16_MAX;

    t114 = (x457*(x458<=(x459%x460)));

    if (t114 != 89180LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x462 = 47787108463974LLU;
	int32_t x463 = -7205;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = 0;

    t115 = (x461*(x462<=(x463%x464)));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 1;
	int64_t x466 = INT64_MAX;
	int16_t x468 = 935;
	volatile int32_t t116 = 309861771;

    t116 = (x465*(x466<=(x467%x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = 225272290LL;
	int8_t x470 = INT8_MIN;
	volatile uint8_t x471 = 4U;
	uint32_t x472 = UINT32_MAX;
	int64_t t117 = -394313LL;

    t117 = (x469*(x470<=(x471%x472)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	uint16_t x474 = 160U;
	volatile uint32_t x476 = 90U;
	volatile int64_t t118 = 1LL;

    t118 = (x473*(x474<=(x475%x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MIN;
	static int32_t x479 = 707255;
	static int16_t x480 = INT16_MAX;

    t119 = (x477*(x478<=(x479%x480)));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile int16_t x482 = INT16_MIN;
	static int64_t x483 = -571LL;
	volatile uint64_t x484 = UINT64_MAX;
	volatile int32_t t120 = 2;

    t120 = (x481*(x482<=(x483%x484)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x486 = 22U;
	int64_t x487 = -1LL;
	uint32_t x488 = 38214312U;
	volatile int32_t t121 = -38924;

    t121 = (x485*(x486<=(x487%x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x489 = 1;
	uint8_t x490 = UINT8_MAX;
	static int32_t x491 = INT32_MAX;

    t122 = (x489*(x490<=(x491%x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 3U;
	volatile int32_t x494 = -3;
	int8_t x495 = INT8_MIN;
	static volatile int16_t x496 = -15;
	volatile int32_t t123 = 1;

    t123 = (x493*(x494<=(x495%x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1106;
	static volatile int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;
	int16_t x500 = -1;

    t124 = (x497*(x498<=(x499%x500)));

    if (t124 != -1106) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MIN;
	uint8_t x503 = UINT8_MAX;
	static volatile uint16_t x504 = 11780U;
	int32_t t125 = 5;

    t125 = (x501*(x502<=(x503%x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 1284314U;
	volatile uint16_t x508 = 3891U;
	uint32_t t126 = 1U;

    t126 = (x505*(x506<=(x507%x508)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 5510U;
	int32_t x510 = -63764670;
	static uint8_t x511 = 52U;
	static int64_t x512 = INT64_MAX;
	volatile uint32_t t127 = 219889U;

    t127 = (x509*(x510<=(x511%x512)));

    if (t127 != 5510U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = UINT64_MAX;
	int8_t x515 = INT8_MAX;
	int8_t x516 = INT8_MIN;

    t128 = (x513*(x514<=(x515%x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = UINT32_MAX;
	uint8_t x519 = UINT8_MAX;
	static volatile int16_t x520 = -273;
	static volatile uint32_t t129 = UINT32_MAX;

    t129 = (x517*(x518<=(x519%x520)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	uint64_t x523 = 2989039232495LLU;
	uint64_t x524 = 127321428LLU;
	volatile int32_t t130 = -216369421;

    t130 = (x521*(x522<=(x523%x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x525 = 4864996662961383LLU;
	uint16_t x527 = UINT16_MAX;
	volatile int32_t x528 = INT32_MIN;
	uint64_t t131 = 99638842LLU;

    t131 = (x525*(x526<=(x527%x528)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	volatile int32_t x530 = -1;
	uint64_t x531 = UINT64_MAX;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 63310;

    t132 = (x529*(x530<=(x531%x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	static volatile uint16_t x534 = 54U;
	uint64_t x535 = 3668571720527128LLU;
	int64_t x536 = 840493LL;
	int32_t t133 = 244;

    t133 = (x533*(x534<=(x535%x536)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = INT8_MAX;
	uint16_t x540 = UINT16_MAX;

    t134 = (x537*(x538<=(x539%x540)));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = -1;
	uint16_t x543 = 7U;
	int64_t x544 = 26165020662265LL;
	volatile int32_t t135 = -289734;

    t135 = (x541*(x542<=(x543%x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	static uint16_t x546 = UINT16_MAX;
	int64_t x547 = INT64_MAX;
	int16_t x548 = INT16_MIN;
	int32_t t136 = 64225;

    t136 = (x545*(x546<=(x547%x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x549 = 824093859LLU;
	int8_t x550 = 48;
	int32_t x551 = 28;
	static uint32_t x552 = UINT32_MAX;
	uint64_t t137 = 1131836817019LLU;

    t137 = (x549*(x550<=(x551%x552)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -4637LL;
	static int16_t x554 = INT16_MIN;
	uint64_t x555 = 9LLU;
	volatile int64_t t138 = 74802420367540LL;

    t138 = (x553*(x554<=(x555%x556)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = INT16_MAX;
	uint64_t x559 = 2492151LLU;
	volatile int32_t t139 = 11170046;

    t139 = (x557*(x558<=(x559%x560)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 15366U;
	uint16_t x562 = 0U;
	static int16_t x563 = INT16_MAX;
	int16_t x564 = -1811;
	volatile int32_t t140 = -118;

    t140 = (x561*(x562<=(x563%x564)));

    if (t140 != 15366) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = -1;
	int8_t x567 = INT8_MIN;
	uint64_t x568 = UINT64_MAX;
	volatile int64_t t141 = 4164LL;

    t141 = (x565*(x566<=(x567%x568)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x569 = 3U;
	volatile uint64_t x570 = 25407383328477650LLU;
	static int16_t x571 = 121;
	int32_t t142 = -3138;

    t142 = (x569*(x570<=(x571%x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 19;
	int16_t x574 = -1;
	uint16_t x575 = 117U;
	uint64_t x576 = 1304092882LLU;
	static volatile int32_t t143 = 11354347;

    t143 = (x573*(x574<=(x575%x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	static int32_t x578 = 75560;
	uint64_t x579 = 54436046710165LLU;
	int16_t x580 = INT16_MAX;
	volatile int32_t t144 = -3482;

    t144 = (x577*(x578<=(x579%x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = INT64_MAX;
	static int16_t x582 = INT16_MIN;
	volatile int64_t x583 = INT64_MAX;
	static int16_t x584 = 948;
	int64_t t145 = INT64_MAX;

    t145 = (x581*(x582<=(x583%x584)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MIN;
	volatile uint32_t x587 = 1U;
	uint64_t x588 = UINT64_MAX;
	volatile int32_t t146 = -7643341;

    t146 = (x585*(x586<=(x587%x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MIN;
	volatile int32_t x590 = -23047;
	static volatile int32_t x592 = 7249711;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x589*(x590<=(x591%x592)));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = INT16_MIN;
	volatile int8_t x594 = INT8_MIN;
	int16_t x595 = -1;
	volatile int64_t x596 = INT64_MAX;
	volatile int32_t t148 = 16751739;

    t148 = (x593*(x594<=(x595%x596)));

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = 4251852373109441LLU;
	int8_t x598 = INT8_MIN;
	uint16_t x599 = UINT16_MAX;
	uint64_t t149 = 7191290896120796655LLU;

    t149 = (x597*(x598<=(x599%x600)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	int32_t x602 = -1;
	volatile int32_t x603 = 6361;

    t150 = (x601*(x602<=(x603%x604)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x606 = -1;
	static volatile int32_t x607 = -141239195;
	static volatile int64_t t151 = 14837LL;

    t151 = (x605*(x606<=(x607%x608)));

    if (t151 != 296854639479810LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = -925;
	uint8_t x611 = UINT8_MAX;
	static volatile int32_t t152 = 0;

    t152 = (x609*(x610<=(x611%x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x615 = -1;
	int32_t x616 = -1;
	int32_t t153 = 20302159;

    t153 = (x613*(x614<=(x615%x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	uint64_t x618 = 5989LLU;
	int32_t x619 = INT32_MAX;
	int16_t x620 = INT16_MAX;
	static int64_t t154 = 8317121850748LL;

    t154 = (x617*(x618<=(x619%x620)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MAX;
	uint32_t x622 = 4870U;
	volatile int64_t x623 = 52572584782LL;

    t155 = (x621*(x622<=(x623%x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t t156 = -152;

    t156 = (x625*(x626<=(x627%x628)));

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MAX;
	int32_t x630 = 385460;
	uint32_t x631 = UINT32_MAX;
	uint8_t x632 = 19U;
	int64_t t157 = 53717471916LL;

    t157 = (x629*(x630<=(x631%x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	uint64_t x634 = 3714LLU;
	static int8_t x635 = INT8_MAX;
	static uint16_t x636 = UINT16_MAX;
	int64_t t158 = 7115662335226LL;

    t158 = (x633*(x634<=(x635%x636)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = INT64_MIN;
	volatile int16_t x638 = 231;
	int16_t x639 = INT16_MIN;

    t159 = (x637*(x638<=(x639%x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 245LLU;
	uint64_t x642 = 6474770LLU;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = -1;
	volatile uint64_t t160 = 1805983LLU;

    t160 = (x641*(x642<=(x643%x644)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	static int32_t x646 = INT32_MIN;
	uint64_t x647 = 8282466857994772702LLU;
	uint8_t x648 = 1U;
	volatile uint32_t t161 = 35800197U;

    t161 = (x645*(x646<=(x647%x648)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x649 = 61;
	static uint32_t x650 = UINT32_MAX;
	uint8_t x651 = 3U;
	int8_t x652 = INT8_MIN;
	volatile int32_t t162 = 208693938;

    t162 = (x649*(x650<=(x651%x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 10U;
	static int64_t x654 = -1LL;
	uint64_t x655 = 255335449LLU;
	int32_t t163 = 553;

    t163 = (x653*(x654<=(x655%x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	static int64_t x658 = INT64_MIN;
	int8_t x659 = INT8_MAX;
	volatile int64_t t164 = INT64_MAX;

    t164 = (x657*(x658<=(x659%x660)));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	int32_t x662 = INT32_MIN;
	int32_t x664 = INT32_MAX;
	uint64_t t165 = UINT64_MAX;

    t165 = (x661*(x662<=(x663%x664)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	static uint16_t x666 = UINT16_MAX;
	static int8_t x668 = -5;
	static volatile int32_t t166 = 10;

    t166 = (x665*(x666<=(x667%x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	static int8_t x670 = INT8_MIN;
	int64_t x671 = INT64_MAX;
	volatile int32_t t167 = INT32_MAX;

    t167 = (x669*(x670<=(x671%x672)));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 465U;
	int64_t x674 = 6LL;
	uint16_t x675 = 12392U;
	int64_t x676 = INT64_MIN;
	uint32_t t168 = 9351U;

    t168 = (x673*(x674<=(x675%x676)));

    if (t168 != 465U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	uint64_t x678 = UINT64_MAX;
	int32_t x679 = INT32_MAX;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = 577355961;

    t169 = (x677*(x678<=(x679%x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = 46U;
	static volatile int16_t x682 = INT16_MIN;
	uint32_t x683 = UINT32_MAX;
	int64_t x684 = -119651840726356LL;
	uint32_t t170 = 522U;

    t170 = (x681*(x682<=(x683%x684)));

    if (t170 != 46U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 6;
	static int32_t x686 = -28463;
	int64_t x687 = 434265LL;
	int8_t x688 = -1;
	static int32_t t171 = 1;

    t171 = (x685*(x686<=(x687%x688)));

    if (t171 != 6) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	uint64_t x691 = 118767094087302LLU;
	uint64_t x692 = 5102789LLU;
	static int32_t t172 = 360;

    t172 = (x689*(x690<=(x691%x692)));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -4;
	int32_t x694 = INT32_MIN;
	uint64_t x696 = 9637443587041495LLU;
	volatile int32_t t173 = -24159;

    t173 = (x693*(x694<=(x695%x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = INT64_MIN;
	int32_t x699 = INT32_MIN;
	static int8_t x700 = INT8_MIN;
	static volatile int32_t t174 = -23118827;

    t174 = (x697*(x698<=(x699%x700)));

    if (t174 != -14195497) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 2LLU;
	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 23U;
	uint64_t t175 = 141LLU;

    t175 = (x701*(x702<=(x703%x704)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x705 = UINT8_MAX;
	uint32_t x706 = 86783489U;
	int64_t x707 = -1490735746250792877LL;
	uint64_t x708 = 49025220546LLU;

    t176 = (x705*(x706<=(x707%x708)));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x713 = INT32_MIN;
	volatile int32_t x714 = -1;
	int8_t x715 = 25;
	uint16_t x716 = 1U;

    t177 = (x713*(x714<=(x715%x716)));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x717 = -1;
	volatile int32_t x720 = INT32_MIN;
	volatile int32_t t178 = 10625275;

    t178 = (x717*(x718<=(x719%x720)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x721 = INT32_MAX;
	int64_t x722 = -1LL;
	uint8_t x723 = 50U;
	int32_t x724 = -1;

    t179 = (x721*(x722<=(x723%x724)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x725 = INT64_MIN;
	volatile int32_t x728 = INT32_MIN;
	volatile int64_t t180 = INT64_MIN;

    t180 = (x725*(x726<=(x727%x728)));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x729 = INT8_MIN;
	uint32_t x730 = 13082721U;
	int8_t x731 = 0;

    t181 = (x729*(x730<=(x731%x732)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x733 = -1;
	int8_t x734 = INT8_MAX;
	uint32_t x735 = 9357552U;
	int64_t x736 = INT64_MIN;
	volatile int32_t t182 = 12583141;

    t182 = (x733*(x734<=(x735%x736)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x737 = INT8_MAX;
	int64_t x738 = -1LL;
	int8_t x739 = -1;
	int32_t t183 = -403660234;

    t183 = (x737*(x738<=(x739%x740)));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = -1;
	static volatile int32_t x743 = 644;
	int16_t x744 = -1;
	int32_t t184 = INT32_MIN;

    t184 = (x741*(x742<=(x743%x744)));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x745 = INT8_MIN;
	uint64_t x746 = 615616940334842LLU;
	int16_t x747 = -1;
	volatile int8_t x748 = -1;
	int32_t t185 = -2976238;

    t185 = (x745*(x746<=(x747%x748)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x749 = -199912LL;
	int32_t x750 = INT32_MAX;
	int64_t x751 = INT64_MAX;
	uint8_t x752 = 4U;
	int64_t t186 = -19221758448462LL;

    t186 = (x749*(x750<=(x751%x752)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x753 = INT8_MIN;
	volatile uint8_t x754 = UINT8_MAX;
	static int64_t x755 = -1LL;
	int16_t x756 = INT16_MIN;
	volatile int32_t t187 = 824367462;

    t187 = (x753*(x754<=(x755%x756)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x757 = INT64_MAX;
	uint64_t x758 = 184LLU;
	int16_t x759 = INT16_MIN;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x757*(x758<=(x759%x760)));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x761 = INT8_MIN;
	static int32_t x762 = -1;
	int16_t x764 = INT16_MAX;

    t189 = (x761*(x762<=(x763%x764)));

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x766 = INT16_MIN;
	volatile int32_t t190 = 1;

    t190 = (x765*(x766<=(x767%x768)));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x771 = 145911851221221LLU;

    t191 = (x769*(x770<=(x771%x772)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x773 = INT8_MIN;

    t192 = (x773*(x774<=(x775%x776)));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x780 = INT64_MIN;
	volatile uint32_t t193 = 234491U;

    t193 = (x777*(x778<=(x779%x780)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x781 = 64U;
	static uint8_t x782 = 0U;
	volatile int64_t x783 = INT64_MIN;
	volatile uint64_t x784 = 2922405362LLU;
	static int32_t t194 = -3;

    t194 = (x781*(x782<=(x783%x784)));

    if (t194 != 64) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x785 = -1;
	static uint8_t x786 = 5U;
	static uint8_t x788 = 13U;
	volatile int32_t t195 = 722586834;

    t195 = (x785*(x786<=(x787%x788)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x789 = INT32_MAX;
	static int8_t x790 = -1;
	int16_t x792 = INT16_MAX;
	int32_t t196 = INT32_MAX;

    t196 = (x789*(x790<=(x791%x792)));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x793 = 4U;
	volatile uint8_t x795 = UINT8_MAX;
	volatile int32_t t197 = 11740900;

    t197 = (x793*(x794<=(x795%x796)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x797 = -1;
	static volatile uint8_t x798 = UINT8_MAX;
	int8_t x799 = INT8_MIN;
	int64_t x800 = -1LL;
	volatile int32_t t198 = 3;

    t198 = (x797*(x798<=(x799%x800)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x802 = -1;
	int32_t x803 = INT32_MIN;

    t199 = (x801*(x802<=(x803%x804)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

