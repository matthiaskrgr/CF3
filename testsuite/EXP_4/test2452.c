
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

volatile uint8_t x1 = UINT8_MAX;
static int16_t x4 = INT16_MIN;
uint16_t x5 = 23U;
int32_t x10 = 21576461;
int64_t x11 = INT64_MIN;
int64_t x13 = INT64_MAX;
static int16_t x14 = INT16_MIN;
uint16_t x18 = 32239U;
int32_t x19 = INT32_MAX;
int64_t x37 = 3619095541011009LL;
uint64_t x38 = 291440486712159767LLU;
uint8_t x44 = 10U;
int8_t x46 = -1;
int32_t x53 = -1;
uint32_t x56 = 177649493U;
static int8_t x68 = INT8_MIN;
int8_t x78 = INT8_MIN;
volatile uint32_t t19 = UINT32_MAX;
uint32_t x87 = 8229662U;
volatile int32_t x90 = -1;
volatile int64_t x93 = INT64_MAX;
volatile int64_t t23 = INT64_MAX;
static volatile int64_t x97 = -1LL;
uint16_t x98 = UINT16_MAX;
uint8_t x99 = UINT8_MAX;
int32_t x105 = -1;
int16_t x108 = -1;
volatile int32_t t27 = -2226;
volatile int32_t t28 = -15765;
static int64_t x124 = INT64_MIN;
static int16_t x129 = 1322;
static volatile uint64_t x134 = 145739LLU;
uint64_t t32 = 470777LLU;
int32_t t35 = 48;
int16_t x154 = INT16_MIN;
volatile int64_t x161 = -2LL;
static volatile uint64_t x165 = UINT64_MAX;
int64_t x166 = -5174499LL;
volatile uint64_t t40 = UINT64_MAX;
static int16_t x172 = -4;
uint32_t x174 = 1U;
int16_t x179 = -1;
volatile int64_t x184 = 51LL;
static uint8_t x188 = 5U;
uint32_t t47 = 180U;
volatile int16_t x198 = INT16_MIN;
static int8_t x206 = INT8_MIN;
uint64_t x207 = 0LLU;
static uint8_t x212 = 16U;
int64_t x216 = -1LL;
static volatile int32_t t55 = 12706528;
int16_t x229 = INT16_MIN;
static int32_t x234 = INT32_MIN;
int8_t x238 = INT8_MAX;
int8_t x239 = -1;
int32_t t58 = -12170;
int16_t x241 = -1;
volatile int32_t t59 = -13619953;
static uint16_t x253 = 13U;
int8_t x255 = INT8_MIN;
uint16_t x263 = UINT16_MAX;
volatile int8_t x265 = -13;
static volatile int16_t x271 = INT16_MAX;
int64_t t66 = INT64_MAX;
uint64_t x278 = 49LLU;
static volatile int8_t x279 = INT8_MIN;
uint8_t x281 = 10U;
int32_t x282 = 580378131;
uint8_t x284 = UINT8_MAX;
int8_t x293 = -1;
int8_t x294 = -1;
static uint16_t x295 = 3848U;
int32_t t73 = INT32_MAX;
int8_t x301 = -48;
static volatile int32_t t74 = -676969318;
int8_t x307 = -1;
static int8_t x310 = INT8_MAX;
int64_t x318 = 13428871LL;
static int32_t t79 = -5353955;
uint32_t x329 = 5994156U;
uint16_t x332 = UINT16_MAX;
volatile uint32_t t81 = 584U;
volatile int32_t x333 = INT32_MIN;
int64_t x335 = INT64_MIN;
volatile int32_t t82 = INT32_MIN;
volatile uint8_t x341 = 2U;
static int16_t x345 = INT16_MIN;
int32_t x358 = INT32_MIN;
static volatile int64_t x360 = -1LL;
uint16_t x365 = 0U;
int8_t x370 = INT8_MIN;
int64_t x375 = INT64_MIN;
volatile int32_t t92 = -1;
int32_t x380 = 61241435;
int32_t t94 = INT32_MIN;
int32_t x388 = INT32_MIN;
uint16_t x389 = 69U;
int64_t x392 = -1LL;
volatile int32_t x393 = INT32_MIN;
uint8_t x408 = 1U;
static volatile int64_t t102 = 5LL;
static volatile uint8_t x420 = 29U;
int32_t t103 = 0;
uint64_t x422 = 36LLU;
uint8_t x430 = UINT8_MAX;
int16_t x435 = INT16_MIN;
volatile int8_t x443 = -41;
volatile uint32_t x444 = 222U;
uint16_t x463 = 2U;
volatile uint32_t x466 = 121316U;
volatile uint64_t x468 = 2874016538LLU;
static int64_t t114 = INT64_MIN;
int8_t x471 = -1;
int16_t x486 = INT16_MAX;
uint8_t x489 = 25U;
int16_t x491 = INT16_MIN;
static volatile uint64_t x498 = UINT64_MAX;
int64_t x499 = -1LL;
volatile int64_t x509 = INT64_MAX;
int64_t x512 = INT64_MIN;
int64_t t125 = INT64_MAX;
volatile int32_t t126 = -2801643;
int32_t t127 = 2;
uint8_t x535 = 53U;
volatile int32_t t131 = INT32_MIN;
static volatile int32_t x553 = INT32_MIN;
int64_t x554 = INT64_MIN;
volatile int32_t t136 = INT32_MIN;
static uint64_t x560 = 14921050LLU;
int32_t t137 = -45013;
int32_t x561 = -17273;
uint64_t x566 = UINT64_MAX;
int32_t t139 = 305777845;
uint64_t x571 = 2309398770549688373LLU;
int8_t x572 = INT8_MIN;
volatile int32_t t141 = -10309;
volatile int32_t t142 = -1234;
volatile int16_t x583 = 347;
volatile int32_t t144 = -3;
uint32_t x592 = UINT32_MAX;
int32_t t145 = 727754661;
static int64_t x593 = -2902278365979947986LL;
static int64_t x601 = INT64_MAX;
uint16_t x603 = 0U;
int64_t x610 = INT64_MIN;
int8_t x618 = INT8_MAX;
uint8_t x619 = 47U;
volatile uint16_t x622 = UINT16_MAX;
static int8_t x626 = 1;
int64_t x628 = -1LL;
int16_t x631 = 51;
int16_t x638 = 6362;
int32_t x642 = -343;
volatile int8_t x645 = 1;
int64_t x654 = INT64_MIN;
uint8_t x656 = 80U;
static int32_t t163 = 18054;
int8_t x667 = 9;
int64_t x674 = INT64_MIN;
volatile uint32_t t166 = UINT32_MAX;
int32_t x677 = INT32_MIN;
volatile int32_t t168 = 0;
int16_t x691 = -1;
static int64_t t170 = INT64_MAX;
static uint32_t x693 = 914U;
int64_t x702 = INT64_MAX;
int64_t t175 = INT64_MIN;
int64_t x714 = -1LL;
int64_t x716 = -1LL;
int32_t t176 = 8;
volatile int64_t x717 = INT64_MAX;
uint8_t x718 = UINT8_MAX;
static uint32_t x721 = 784976U;
int16_t x723 = INT16_MIN;
volatile uint16_t x724 = UINT16_MAX;
static volatile int8_t x725 = INT8_MIN;
static uint64_t x732 = 5558406355770LLU;
int16_t x733 = INT16_MIN;
volatile int64_t x747 = INT64_MIN;
volatile uint8_t x748 = 9U;
int64_t x756 = INT64_MIN;
int32_t x757 = INT32_MAX;
volatile int32_t x759 = 505794115;
uint64_t x762 = 1430027712960104391LLU;
uint32_t t192 = 34619725U;
static int16_t x783 = INT16_MAX;
int8_t x793 = INT8_MIN;
volatile int32_t t196 = 8317056;
int16_t x799 = INT16_MIN;
int32_t x802 = INT32_MAX;
int16_t x805 = INT16_MIN;
static uint8_t x806 = UINT8_MAX;
volatile int32_t t199 = -107913;


void f0(void) {
    	static int32_t x2 = 33041726;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = -1;

    t0 = (x1-(x2==(x3|x4)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = -1LL;
	int8_t x7 = 1;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 2;

    t1 = (x5-(x6==(x7|x8)));

    if (t1 != 22) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static int16_t x12 = 107;
	volatile int32_t t2 = 568;

    t2 = (x9-(x10==(x11|x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x15 = INT8_MAX;
	volatile int8_t x16 = INT8_MIN;
	static int64_t t3 = INT64_MAX;

    t3 = (x13-(x14==(x15|x16)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int16_t x20 = INT16_MIN;
	static volatile uint32_t t4 = UINT32_MAX;

    t4 = (x17-(x18==(x19|x20)));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	uint8_t x22 = 25U;
	volatile int8_t x23 = -1;
	int32_t x24 = -1;
	static int64_t t5 = INT64_MIN;

    t5 = (x21-(x22==(x23|x24)));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	static int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 20754806;

    t6 = (x25-(x26==(x27|x28)));

    if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (x29-(x30==(x31|x32)));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 16520438373439119LLU;
	volatile int16_t x34 = 1;
	int8_t x35 = INT8_MAX;
	int16_t x36 = -1;
	volatile uint64_t t8 = 2310304605LLU;

    t8 = (x33-(x34==(x35|x36)));

    if (t8 != 16520438373439119LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x39 = UINT64_MAX;
	static volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 51873335580718980LL;

    t9 = (x37-(x38==(x39|x40)));

    if (t9 != 3619095541011009LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 4705273323LL;
	static int64_t x42 = INT64_MIN;
	int64_t x43 = -217366299741072160LL;
	int64_t t10 = -8204756635LL;

    t10 = (x41-(x42==(x43|x44)));

    if (t10 != 4705273323LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	uint64_t x47 = 2222361179LLU;
	uint16_t x48 = 2202U;
	volatile int32_t t11 = -15204085;

    t11 = (x45-(x46==(x47|x48)));

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static uint64_t x50 = UINT64_MAX;
	static uint16_t x51 = 2U;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 964745;

    t12 = (x49-(x50==(x51|x52)));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x54 = INT32_MAX;
	volatile int32_t x55 = INT32_MIN;
	volatile int32_t t13 = -2;

    t13 = (x53-(x54==(x55|x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -1;
	static int16_t x58 = -3;
	int32_t x59 = INT32_MIN;
	static uint32_t x60 = 193510U;
	int32_t t14 = -242;

    t14 = (x57-(x58==(x59|x60)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -8917134429056LL;
	uint32_t x62 = 81230126U;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 46883LL;

    t15 = (x61-(x62==(x63|x64)));

    if (t15 != -8917134429056LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = UINT16_MAX;
	int16_t x66 = 19;
	int64_t x67 = INT64_MIN;
	static int32_t t16 = -8;

    t16 = (x65-(x66==(x67|x68)));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 27U;
	static int64_t x71 = INT64_MIN;
	static int32_t x72 = -1;
	uint32_t t17 = UINT32_MAX;

    t17 = (x69-(x70==(x71|x72)));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int16_t x74 = -99;
	int32_t x75 = INT32_MAX;
	volatile int8_t x76 = -4;
	int32_t t18 = 760;

    t18 = (x73-(x74==(x75|x76)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	volatile uint64_t x79 = 45005443255158LLU;
	int32_t x80 = INT32_MIN;

    t19 = (x77-(x78==(x79|x80)));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x81 = 1U;
	volatile uint64_t x82 = 676088404253390LLU;
	static volatile int32_t x83 = -1;
	uint16_t x84 = 3U;
	uint32_t t20 = 1973U;

    t20 = (x81-(x82==(x83|x84)));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -3266;
	static int16_t x86 = 3327;
	volatile int8_t x88 = -20;
	int32_t t21 = -1006979;

    t21 = (x85-(x86==(x87|x88)));

    if (t21 != -3266) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x89 = 14LLU;
	static int32_t x91 = INT32_MAX;
	int8_t x92 = -1;
	uint64_t t22 = 1407358991095279576LLU;

    t22 = (x89-(x90==(x91|x92)));

    if (t22 != 13LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MIN;
	int8_t x95 = -3;
	int8_t x96 = INT8_MAX;

    t23 = (x93-(x94==(x95|x96)));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x100 = -1;
	int64_t t24 = 3287453788353LL;

    t24 = (x97-(x98==(x99|x100)));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 853U;
	volatile int64_t x102 = INT64_MAX;
	static int32_t x103 = -4036;
	int16_t x104 = -29;
	uint32_t t25 = 1673461608U;

    t25 = (x101-(x102==(x103|x104)));

    if (t25 != 853U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = 0U;
	static int32_t x107 = INT32_MIN;
	volatile int32_t t26 = 3;

    t26 = (x105-(x106==(x107|x108)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	static uint16_t x114 = 17U;
	static int32_t x115 = INT32_MAX;
	volatile uint64_t x116 = 122LLU;

    t27 = (x113-(x114==(x115|x116)));

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t x120 = INT32_MAX;

    t28 = (x117-(x118==(x119|x120)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = 2;
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int32_t t29 = 227657627;

    t29 = (x121-(x122==(x123|x124)));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = -26;
	static int64_t t30 = INT64_MIN;

    t30 = (x125-(x126==(x127|x128)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x130 = 1U;
	int16_t x131 = -1;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t31 = 750016031;

    t31 = (x129-(x130==(x131|x132)));

    if (t31 != 1322) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x133 = 3566855128727LLU;
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MAX;

    t32 = (x133-(x134==(x135|x136)));

    if (t32 != 3566855128727LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MAX;
	uint16_t x139 = UINT16_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -283;

    t33 = (x137-(x138==(x139|x140)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 361935LLU;
	uint16_t x142 = 16211U;
	uint64_t x143 = 3035LLU;
	static uint16_t x144 = UINT16_MAX;
	volatile uint64_t t34 = 5LLU;

    t34 = (x141-(x142==(x143|x144)));

    if (t34 != 361935LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x145 = 12U;
	volatile uint16_t x146 = 13750U;
	volatile uint32_t x147 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;

    t35 = (x145-(x146==(x147|x148)));

    if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 131120125802508595LLU;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	uint64_t t36 = UINT64_MAX;

    t36 = (x149-(x150==(x151|x152)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	int64_t x155 = INT64_MIN;
	int8_t x156 = 1;
	int32_t t37 = 16527954;

    t37 = (x153-(x154==(x155|x156)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -319;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = 6;
	static int8_t x160 = -3;
	int32_t t38 = 6875083;

    t38 = (x157-(x158==(x159|x160)));

    if (t38 != -319) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x162 = -6;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = INT16_MIN;
	int64_t t39 = -202093825747192LL;

    t39 = (x161-(x162==(x163|x164)));

    if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x167 = -1;
	static int32_t x168 = -1;

    t40 = (x165-(x166==(x167|x168)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = 217928297264344LL;
	static int16_t x170 = -1;
	volatile uint16_t x171 = UINT16_MAX;
	static int64_t t41 = -24438718441830683LL;

    t41 = (x169-(x170==(x171|x172)));

    if (t41 != 217928297264343LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 3U;
	static uint64_t x175 = UINT64_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t42 = -2;

    t42 = (x173-(x174==(x175|x176)));

    if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x177 = 370045512U;
	uint8_t x178 = 50U;
	uint64_t x180 = 34674LLU;
	volatile uint32_t t43 = 14451002U;

    t43 = (x177-(x178==(x179|x180)));

    if (t43 != 370045512U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = 1;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = 0;
	int32_t t44 = -18;

    t44 = (x181-(x182==(x183|x184)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	int32_t x186 = 1237;
	int32_t x187 = 3;
	int32_t t45 = -16206;

    t45 = (x185-(x186==(x187|x188)));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	uint64_t x190 = 24423LLU;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	static int32_t t46 = -19487;

    t46 = (x189-(x190==(x191|x192)));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x193 = 420U;
	int64_t x194 = 23819895600LL;
	int8_t x195 = 0;
	volatile uint8_t x196 = 0U;

    t47 = (x193-(x194==(x195|x196)));

    if (t47 != 420U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x197 = 2;
	static uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 799416867764LLU;
	static volatile int32_t t48 = -1503623;

    t48 = (x197-(x198==(x199|x200)));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x201 = 1U;
	static uint8_t x202 = 95U;
	static int16_t x203 = 0;
	int8_t x204 = -12;
	static int32_t t49 = 231;

    t49 = (x201-(x202==(x203|x204)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x205 = -1;
	static int16_t x208 = -137;
	volatile int32_t t50 = 0;

    t50 = (x205-(x206==(x207|x208)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	volatile int16_t x211 = INT16_MIN;
	static volatile int32_t t51 = 7;

    t51 = (x209-(x210==(x211|x212)));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MIN;
	volatile int64_t x214 = INT64_MIN;
	volatile uint16_t x215 = UINT16_MAX;
	volatile int32_t t52 = 746;

    t52 = (x213-(x214==(x215|x216)));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = UINT16_MAX;
	volatile int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	uint8_t x220 = 2U;
	volatile int32_t t53 = 423268;

    t53 = (x217-(x218==(x219|x220)));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = 86551290;
	int32_t x222 = INT32_MIN;
	static int32_t x223 = -64;
	static int8_t x224 = 15;
	int32_t t54 = -33088803;

    t54 = (x221-(x222==(x223|x224)));

    if (t54 != 86551290) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = INT16_MAX;
	static int16_t x226 = 991;
	int64_t x227 = -1LL;
	static int8_t x228 = -1;

    t55 = (x225-(x226==(x227|x228)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x230 = 29U;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = 1624;

    t56 = (x229-(x230==(x231|x232)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x233 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	uint16_t x236 = 1549U;
	volatile int32_t t57 = 99850;

    t57 = (x233-(x234==(x235|x236)));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = UINT8_MAX;
	static int16_t x240 = -2382;

    t58 = (x237-(x238==(x239|x240)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 809412572794428978LLU;

    t59 = (x241-(x242==(x243|x244)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = -1;
	static int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	volatile int16_t x248 = INT16_MAX;
	static volatile int32_t t60 = -2;

    t60 = (x245-(x246==(x247|x248)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x249 = INT16_MIN;
	int16_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	uint16_t x252 = 0U;
	int32_t t61 = -5;

    t61 = (x249-(x250==(x251|x252)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x254 = INT8_MAX;
	uint32_t x256 = 24U;
	int32_t t62 = 21076;

    t62 = (x253-(x254==(x255|x256)));

    if (t62 != 13) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 43U;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	int32_t t63 = 849;

    t63 = (x257-(x258==(x259|x260)));

    if (t63 != 42) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x261 = 3U;
	int32_t x262 = -1;
	int32_t x264 = -1;
	volatile int32_t t64 = -11;

    t64 = (x261-(x262==(x263|x264)));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x266 = INT8_MAX;
	uint8_t x267 = 10U;
	uint16_t x268 = UINT16_MAX;
	static int32_t t65 = -52;

    t65 = (x265-(x266==(x267|x268)));

    if (t65 != -13) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MAX;
	static int8_t x272 = INT8_MIN;

    t66 = (x269-(x270==(x271|x272)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x273 = -67;
	int8_t x274 = INT8_MAX;
	static int64_t x275 = 498333691444373LL;
	static int8_t x276 = -1;
	static int32_t t67 = -252;

    t67 = (x273-(x274==(x275|x276)));

    if (t67 != -67) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MAX;
	uint32_t x280 = 247U;
	volatile int64_t t68 = INT64_MAX;

    t68 = (x277-(x278==(x279|x280)));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x283 = INT64_MIN;
	volatile int32_t t69 = 8566;

    t69 = (x281-(x282==(x283|x284)));

    if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = -21;
	static uint16_t x286 = UINT16_MAX;
	int64_t x287 = -422955096281LL;
	uint16_t x288 = 133U;
	volatile int32_t t70 = -414101018;

    t70 = (x285-(x286==(x287|x288)));

    if (t70 != -21) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x289 = INT64_MAX;
	uint16_t x290 = 7U;
	int8_t x291 = -9;
	int32_t x292 = INT32_MAX;
	int64_t t71 = INT64_MAX;

    t71 = (x289-(x290==(x291|x292)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x296 = 371;
	volatile int32_t t72 = -5934496;

    t72 = (x293-(x294==(x295|x296)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MAX;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 42;
	int8_t x300 = -63;

    t73 = (x297-(x298==(x299|x300)));

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = INT64_MIN;

    t74 = (x301-(x302==(x303|x304)));

    if (t74 != -49) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = -1;
	static volatile int32_t x306 = -1;
	uint8_t x308 = 1U;
	static volatile int32_t t75 = 6;

    t75 = (x305-(x306==(x307|x308)));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MIN;
	volatile uint64_t x311 = UINT64_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t76 = 765;

    t76 = (x309-(x310==(x311|x312)));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MAX;
	uint8_t x314 = 15U;
	int32_t x315 = 6252;
	int64_t x316 = 458812561708LL;
	int32_t t77 = 2;

    t77 = (x313-(x314==(x315|x316)));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x317 = 3009;
	volatile int32_t x319 = -1;
	int64_t x320 = 1LL;
	volatile int32_t t78 = 218;

    t78 = (x317-(x318==(x319|x320)));

    if (t78 != 3009) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static uint64_t x323 = 1718003566LLU;
	int64_t x324 = INT64_MAX;

    t79 = (x321-(x322==(x323|x324)));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t80 = 24808641717LL;

    t80 = (x325-(x326==(x327|x328)));

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;

    t81 = (x329-(x330==(x331|x332)));

    if (t81 != 5994155U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x334 = 38U;
	uint8_t x336 = 80U;

    t82 = (x333-(x334==(x335|x336)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MIN;
	volatile uint32_t x338 = 11519771U;
	uint64_t x339 = 1320212LLU;
	uint64_t x340 = UINT64_MAX;
	int64_t t83 = INT64_MIN;

    t83 = (x337-(x338==(x339|x340)));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 4U;
	static int32_t x344 = -1;
	static int32_t t84 = 12;

    t84 = (x341-(x342==(x343|x344)));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x346 = 926315797120LL;
	uint64_t x347 = 497920339866070LLU;
	static int16_t x348 = 10791;
	static volatile int32_t t85 = 20367;

    t85 = (x345-(x346==(x347|x348)));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = -1;
	int64_t x350 = -1LL;
	volatile uint16_t x351 = UINT16_MAX;
	int32_t x352 = 21287;
	volatile int32_t t86 = 721559;

    t86 = (x349-(x350==(x351|x352)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MAX;
	uint16_t x354 = 327U;
	volatile uint16_t x355 = 575U;
	static uint8_t x356 = 5U;
	static int32_t t87 = INT32_MAX;

    t87 = (x353-(x354==(x355|x356)));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MAX;
	volatile int32_t x359 = -111;
	volatile int32_t t88 = INT32_MAX;

    t88 = (x357-(x358==(x359|x360)));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x361 = INT32_MIN;
	static uint8_t x362 = 48U;
	static int16_t x363 = -243;
	int32_t x364 = INT32_MIN;
	int32_t t89 = INT32_MIN;

    t89 = (x361-(x362==(x363|x364)));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x366 = INT64_MIN;
	volatile uint32_t x367 = 173U;
	uint32_t x368 = 1U;
	static volatile int32_t t90 = -25;

    t90 = (x365-(x366==(x367|x368)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x369 = -2210;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t x372 = INT32_MAX;
	int32_t t91 = 2588;

    t91 = (x369-(x370==(x371|x372)));

    if (t91 != -2210) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MAX;
	static volatile int32_t x374 = -24221;
	uint8_t x376 = 81U;

    t92 = (x373-(x374==(x375|x376)));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = -4334089;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = 194304230889287LLU;
	int32_t t93 = 36539;

    t93 = (x377-(x378==(x379|x380)));

    if (t93 != -4334089) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = INT32_MIN;
	uint64_t x382 = 1902100370100LLU;
	uint8_t x383 = 0U;
	volatile int64_t x384 = INT64_MIN;

    t94 = (x381-(x382==(x383|x384)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x385 = INT16_MAX;
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 0U;
	volatile int32_t t95 = 1;

    t95 = (x385-(x386==(x387|x388)));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x390 = UINT8_MAX;
	int32_t x391 = 150842478;
	static volatile int32_t t96 = 0;

    t96 = (x389-(x390==(x391|x392)));

    if (t96 != 69) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x394 = 53U;
	static int64_t x395 = -7544616065006LL;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t97 = INT32_MIN;

    t97 = (x393-(x394==(x395|x396)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x397 = 11490U;
	volatile int8_t x398 = -1;
	static uint64_t x399 = UINT64_MAX;
	static volatile uint64_t x400 = UINT64_MAX;
	volatile uint32_t t98 = 39736U;

    t98 = (x397-(x398==(x399|x400)));

    if (t98 != 11489U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x401 = -223;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 19681379878658LLU;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t99 = -2280615;

    t99 = (x401-(x402==(x403|x404)));

    if (t99 != -223) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x405 = 1092411U;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = 380890361LLU;
	volatile uint32_t t100 = 9060312U;

    t100 = (x405-(x406==(x407|x408)));

    if (t100 != 1092411U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x409 = INT16_MAX;
	int32_t x410 = 0;
	uint16_t x411 = UINT16_MAX;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t101 = 0;

    t101 = (x409-(x410==(x411|x412)));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x413 = INT64_MAX;
	static volatile int32_t x414 = -1;
	static uint32_t x415 = UINT32_MAX;
	int8_t x416 = INT8_MIN;

    t102 = (x413-(x414==(x415|x416)));

    if (t102 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = 1U;
	int16_t x418 = -349;
	int16_t x419 = INT16_MIN;

    t103 = (x417-(x418==(x419|x420)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = UINT32_MAX;
	static volatile int32_t t104 = 7623091;

    t104 = (x421-(x422==(x423|x424)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = INT64_MIN;
	uint16_t x426 = 2U;
	volatile int16_t x427 = 163;
	static int16_t x428 = INT16_MIN;
	int64_t t105 = INT64_MIN;

    t105 = (x425-(x426==(x427|x428)));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = -466;
	volatile uint64_t x431 = 6307055771459870034LLU;
	int16_t x432 = INT16_MIN;
	int32_t t106 = -86669532;

    t106 = (x429-(x430==(x431|x432)));

    if (t106 != -466) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = INT64_MIN;
	int32_t x434 = -1;
	volatile int16_t x436 = INT16_MIN;
	int64_t t107 = INT64_MIN;

    t107 = (x433-(x434==(x435|x436)));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x437 = INT32_MIN;
	uint32_t x438 = 66403434U;
	static int16_t x439 = 1238;
	static int32_t x440 = 13390;
	int32_t t108 = INT32_MIN;

    t108 = (x437-(x438==(x439|x440)));

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x441 = 23U;
	volatile int16_t x442 = INT16_MIN;
	volatile int32_t t109 = -1;

    t109 = (x441-(x442==(x443|x444)));

    if (t109 != 23) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x445 = 1740U;
	int32_t x446 = 20;
	int64_t x447 = -1LL;
	static int16_t x448 = INT16_MAX;
	volatile uint32_t t110 = 1562290760U;

    t110 = (x445-(x446==(x447|x448)));

    if (t110 != 1740U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = INT8_MAX;
	static uint32_t x450 = 501713863U;
	static volatile int64_t x451 = INT64_MIN;
	static volatile uint16_t x452 = 11U;
	volatile int32_t t111 = -12397;

    t111 = (x449-(x450==(x451|x452)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x453 = 2U;
	uint64_t x454 = 51516974LLU;
	static volatile uint32_t x455 = UINT32_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t112 = -90;

    t112 = (x453-(x454==(x455|x456)));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = -1;
	int32_t x462 = -1;
	static int16_t x464 = INT16_MIN;
	int32_t t113 = -661570644;

    t113 = (x461-(x462==(x463|x464)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x465 = INT64_MIN;
	int64_t x467 = INT64_MIN;

    t114 = (x465-(x466==(x467|x468)));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x469 = UINT32_MAX;
	static int8_t x470 = -1;
	static volatile uint32_t x472 = UINT32_MAX;
	volatile uint32_t t115 = 120947U;

    t115 = (x469-(x470==(x471|x472)));

    if (t115 != 4294967294U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x473 = UINT16_MAX;
	uint64_t x474 = 743711LLU;
	int64_t x475 = -1LL;
	uint16_t x476 = 11U;
	static int32_t t116 = 7;

    t116 = (x473-(x474==(x475|x476)));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x477 = INT64_MIN;
	static uint16_t x478 = 0U;
	uint32_t x479 = 498669U;
	int16_t x480 = -55;
	int64_t t117 = INT64_MIN;

    t117 = (x477-(x478==(x479|x480)));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x481 = 19;
	uint8_t x482 = 121U;
	int16_t x483 = 0;
	volatile int64_t x484 = 1452397990729449239LL;
	static int32_t t118 = 6334336;

    t118 = (x481-(x482==(x483|x484)));

    if (t118 != 19) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x485 = INT64_MIN;
	int8_t x487 = 14;
	static int8_t x488 = INT8_MAX;
	volatile int64_t t119 = INT64_MIN;

    t119 = (x485-(x486==(x487|x488)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x490 = 101U;
	int64_t x492 = INT64_MAX;
	static volatile int32_t t120 = -2;

    t120 = (x489-(x490==(x491|x492)));

    if (t120 != 25) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x493 = INT32_MIN;
	volatile int8_t x494 = -8;
	uint32_t x495 = 192779281U;
	volatile int32_t x496 = -1;
	int32_t t121 = INT32_MIN;

    t121 = (x493-(x494==(x495|x496)));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x497 = 204U;
	static int16_t x500 = 0;
	volatile int32_t t122 = -235253;

    t122 = (x497-(x498==(x499|x500)));

    if (t122 != 203) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x501 = -1;
	int32_t x502 = -615948;
	int64_t x503 = INT64_MIN;
	int32_t x504 = -1143145;
	volatile int32_t t123 = 108239;

    t123 = (x501-(x502==(x503|x504)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x505 = UINT8_MAX;
	uint64_t x506 = 3040LLU;
	uint16_t x507 = 125U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t124 = -7105;

    t124 = (x505-(x506==(x507|x508)));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x510 = INT16_MIN;
	uint8_t x511 = UINT8_MAX;

    t125 = (x509-(x510==(x511|x512)));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x513 = 110U;
	volatile int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MIN;

    t126 = (x513-(x514==(x515|x516)));

    if (t126 != 110) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x518 = INT64_MAX;
	static int16_t x519 = 2;
	static volatile uint8_t x520 = 0U;

    t127 = (x517-(x518==(x519|x520)));

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x521 = INT64_MIN;
	volatile uint64_t x522 = 3297103561188629309LLU;
	int64_t x523 = -4688440011951633LL;
	volatile int64_t x524 = INT64_MIN;
	static volatile int64_t t128 = INT64_MIN;

    t128 = (x521-(x522==(x523|x524)));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x525 = UINT32_MAX;
	int16_t x526 = INT16_MIN;
	uint32_t x527 = UINT32_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = (x525-(x526==(x527|x528)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x529 = UINT16_MAX;
	volatile int16_t x530 = 1573;
	uint8_t x531 = 4U;
	int16_t x532 = INT16_MAX;
	int32_t t130 = 5;

    t130 = (x529-(x530==(x531|x532)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x534 = -1;
	volatile int8_t x536 = INT8_MIN;

    t131 = (x533-(x534==(x535|x536)));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x537 = 8006415917237822LL;
	volatile int32_t x538 = INT32_MAX;
	static int16_t x539 = -1;
	int16_t x540 = INT16_MAX;
	static int64_t t132 = 4020664LL;

    t132 = (x537-(x538==(x539|x540)));

    if (t132 != 8006415917237822LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x541 = INT32_MIN;
	int16_t x542 = INT16_MIN;
	int8_t x543 = -1;
	static int8_t x544 = INT8_MIN;
	int32_t t133 = INT32_MIN;

    t133 = (x541-(x542==(x543|x544)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x545 = 107U;
	static volatile uint16_t x546 = UINT16_MAX;
	int16_t x547 = INT16_MIN;
	volatile int16_t x548 = INT16_MAX;
	volatile int32_t t134 = 9;

    t134 = (x545-(x546==(x547|x548)));

    if (t134 != 107) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x549 = 118455694463733LLU;
	int64_t x550 = -3761007941147199872LL;
	uint16_t x551 = 1663U;
	static uint64_t x552 = UINT64_MAX;
	volatile uint64_t t135 = 414031LLU;

    t135 = (x549-(x550==(x551|x552)));

    if (t135 != 118455694463733LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x555 = UINT32_MAX;
	volatile int16_t x556 = INT16_MAX;

    t136 = (x553-(x554==(x555|x556)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x557 = 3U;
	int64_t x558 = INT64_MAX;
	int32_t x559 = -1;

    t137 = (x557-(x558==(x559|x560)));

    if (t137 != 3) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x562 = INT8_MIN;
	static uint8_t x563 = 31U;
	uint16_t x564 = 14433U;
	int32_t t138 = 33655;

    t138 = (x561-(x562==(x563|x564)));

    if (t138 != -17273) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x565 = 40U;
	uint16_t x567 = UINT16_MAX;
	static int8_t x568 = INT8_MIN;

    t139 = (x565-(x566==(x567|x568)));

    if (t139 != 39) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x569 = 12391;
	int8_t x570 = INT8_MIN;
	int32_t t140 = -7820400;

    t140 = (x569-(x570==(x571|x572)));

    if (t140 != 12391) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x573 = 223U;
	uint32_t x574 = 116700U;
	int8_t x575 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;

    t141 = (x573-(x574==(x575|x576)));

    if (t141 != 223) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x577 = INT16_MAX;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = -225;
	uint64_t x580 = 5497681955LLU;

    t142 = (x577-(x578==(x579|x580)));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x581 = 71068794LL;
	volatile int32_t x582 = INT32_MAX;
	volatile uint16_t x584 = UINT16_MAX;
	int64_t t143 = -3576776835112582LL;

    t143 = (x581-(x582==(x583|x584)));

    if (t143 != 71068794LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x585 = 13U;
	int32_t x586 = INT32_MIN;
	int16_t x587 = INT16_MIN;
	volatile int64_t x588 = 1118LL;

    t144 = (x585-(x586==(x587|x588)));

    if (t144 != 13) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x589 = -627;
	int32_t x590 = 114;
	int32_t x591 = -1;

    t145 = (x589-(x590==(x591|x592)));

    if (t145 != -627) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x594 = -505;
	static volatile int16_t x595 = -2;
	uint16_t x596 = UINT16_MAX;
	static int64_t t146 = -127LL;

    t146 = (x593-(x594==(x595|x596)));

    if (t146 != -2902278365979947986LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x597 = 1;
	static int32_t x598 = -1;
	volatile uint64_t x599 = 3055999225LLU;
	uint16_t x600 = 0U;
	int32_t t147 = 2463569;

    t147 = (x597-(x598==(x599|x600)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x602 = INT64_MIN;
	uint16_t x604 = 47U;
	static int64_t t148 = INT64_MAX;

    t148 = (x601-(x602==(x603|x604)));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x605 = 6402708216186306LLU;
	int8_t x606 = INT8_MIN;
	int8_t x607 = -1;
	uint16_t x608 = UINT16_MAX;
	uint64_t t149 = 65557845664LLU;

    t149 = (x605-(x606==(x607|x608)));

    if (t149 != 6402708216186306LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x609 = 3U;
	static int8_t x611 = 8;
	int32_t x612 = -350;
	static volatile int32_t t150 = 8525;

    t150 = (x609-(x610==(x611|x612)));

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x613 = 123;
	uint64_t x614 = 19171LLU;
	static int8_t x615 = INT8_MIN;
	int64_t x616 = 1860243090119870LL;
	static volatile int32_t t151 = -83816;

    t151 = (x613-(x614==(x615|x616)));

    if (t151 != 123) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x617 = 447U;
	int8_t x620 = INT8_MIN;
	int32_t t152 = -39524389;

    t152 = (x617-(x618==(x619|x620)));

    if (t152 != 447) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x621 = INT16_MIN;
	uint64_t x623 = 15472957453682LLU;
	static uint8_t x624 = UINT8_MAX;
	volatile int32_t t153 = -107008;

    t153 = (x621-(x622==(x623|x624)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x625 = 92858388U;
	volatile uint32_t x627 = 116U;
	volatile uint32_t t154 = 8405U;

    t154 = (x625-(x626==(x627|x628)));

    if (t154 != 92858388U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x629 = -61347265;
	int64_t x630 = -1LL;
	volatile int64_t x632 = INT64_MIN;
	volatile int32_t t155 = 1;

    t155 = (x629-(x630==(x631|x632)));

    if (t155 != -61347265) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x633 = 45060;
	int32_t x634 = INT32_MAX;
	int32_t x635 = INT32_MAX;
	uint32_t x636 = 109092U;
	int32_t t156 = 0;

    t156 = (x633-(x634==(x635|x636)));

    if (t156 != 45059) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x637 = UINT16_MAX;
	volatile int32_t x639 = INT32_MIN;
	int64_t x640 = -534793303026LL;
	volatile int32_t t157 = -57;

    t157 = (x637-(x638==(x639|x640)));

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x641 = 1860585252LLU;
	uint32_t x643 = UINT32_MAX;
	static int32_t x644 = -63149;
	volatile uint64_t t158 = 56744LLU;

    t158 = (x641-(x642==(x643|x644)));

    if (t158 != 1860585252LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x646 = INT16_MAX;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = -1;
	volatile int32_t t159 = 7631532;

    t159 = (x645-(x646==(x647|x648)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile int8_t x650 = -3;
	static int8_t x651 = INT8_MIN;
	int32_t x652 = -1;
	uint32_t t160 = UINT32_MAX;

    t160 = (x649-(x650==(x651|x652)));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x653 = UINT8_MAX;
	static int8_t x655 = -1;
	volatile int32_t t161 = 213;

    t161 = (x653-(x654==(x655|x656)));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x657 = 1025501163786141119LLU;
	static int8_t x658 = -1;
	static int64_t x659 = 3514508608LL;
	volatile int32_t x660 = -196300;
	static uint64_t t162 = 30945557545839LLU;

    t162 = (x657-(x658==(x659|x660)));

    if (t162 != 1025501163786141119LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x661 = INT16_MIN;
	volatile int64_t x662 = 11010779396LL;
	static int64_t x663 = -893255378720LL;
	static int16_t x664 = 5700;

    t163 = (x661-(x662==(x663|x664)));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	int64_t x666 = -21608203451291077LL;
	int16_t x668 = INT16_MAX;
	int32_t t164 = 912;

    t164 = (x665-(x666==(x667|x668)));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x669 = INT64_MAX;
	volatile uint8_t x670 = 30U;
	int64_t x671 = INT64_MIN;
	int32_t x672 = 592192723;
	static volatile int64_t t165 = INT64_MAX;

    t165 = (x669-(x670==(x671|x672)));

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x673 = UINT32_MAX;
	volatile int16_t x675 = INT16_MAX;
	int16_t x676 = INT16_MIN;

    t166 = (x673-(x674==(x675|x676)));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x678 = INT64_MIN;
	static int64_t x679 = -1LL;
	static int16_t x680 = INT16_MIN;
	static volatile int32_t t167 = INT32_MIN;

    t167 = (x677-(x678==(x679|x680)));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x681 = 50;
	int32_t x682 = INT32_MIN;
	int64_t x683 = -34474057LL;
	static volatile uint32_t x684 = UINT32_MAX;

    t168 = (x681-(x682==(x683|x684)));

    if (t168 != 50) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x685 = -80;
	static int64_t x686 = INT64_MIN;
	uint64_t x687 = 16968531218813989LLU;
	uint16_t x688 = UINT16_MAX;
	static volatile int32_t t169 = -15399728;

    t169 = (x685-(x686==(x687|x688)));

    if (t169 != -80) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = INT64_MAX;
	int64_t x690 = -9481706355761LL;
	volatile int64_t x692 = 1LL;

    t170 = (x689-(x690==(x691|x692)));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x694 = -1;
	uint8_t x695 = 1U;
	volatile int8_t x696 = INT8_MAX;
	volatile uint32_t t171 = 1U;

    t171 = (x693-(x694==(x695|x696)));

    if (t171 != 914U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x697 = -1;
	static int32_t x698 = -1;
	uint16_t x699 = 14U;
	int32_t x700 = INT32_MAX;
	static int32_t t172 = 92641;

    t172 = (x697-(x698==(x699|x700)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x703 = INT64_MAX;
	int8_t x704 = INT8_MIN;
	volatile int64_t t173 = INT64_MIN;

    t173 = (x701-(x702==(x703|x704)));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MIN;
	static int64_t x707 = INT64_MAX;
	static uint32_t x708 = 498780877U;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x705-(x706==(x707|x708)));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = -9;
	uint16_t x711 = UINT16_MAX;
	static int64_t x712 = INT64_MIN;

    t175 = (x709-(x710==(x711|x712)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x713 = INT32_MAX;
	uint8_t x715 = 6U;

    t176 = (x713-(x714==(x715|x716)));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x719 = 75U;
	int32_t x720 = INT32_MIN;
	volatile int64_t t177 = INT64_MAX;

    t177 = (x717-(x718==(x719|x720)));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x722 = INT16_MIN;
	uint32_t t178 = 578130758U;

    t178 = (x721-(x722==(x723|x724)));

    if (t178 != 784976U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x726 = -1;
	uint64_t x727 = 392LLU;
	volatile uint8_t x728 = UINT8_MAX;
	int32_t t179 = 45;

    t179 = (x725-(x726==(x727|x728)));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x729 = INT16_MIN;
	static int16_t x730 = -36;
	int16_t x731 = 213;
	static volatile int32_t t180 = -1546;

    t180 = (x729-(x730==(x731|x732)));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x734 = 115LLU;
	static int64_t x735 = INT64_MIN;
	volatile uint16_t x736 = 1U;
	int32_t t181 = 3;

    t181 = (x733-(x734==(x735|x736)));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x737 = 2487498387993149LLU;
	uint32_t x738 = 292U;
	uint64_t x739 = 211977317485285676LLU;
	int16_t x740 = -15658;
	volatile uint64_t t182 = 90033428566733480LLU;

    t182 = (x737-(x738==(x739|x740)));

    if (t182 != 2487498387993149LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x741 = UINT64_MAX;
	int16_t x742 = INT16_MIN;
	static uint8_t x743 = 26U;
	int64_t x744 = INT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = (x741-(x742==(x743|x744)));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x745 = 32691;
	uint8_t x746 = UINT8_MAX;
	int32_t t184 = -15604;

    t184 = (x745-(x746==(x747|x748)));

    if (t184 != 32691) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x749 = INT8_MAX;
	int8_t x750 = 24;
	volatile uint64_t x751 = 88385LLU;
	uint64_t x752 = 978LLU;
	volatile int32_t t185 = 108612;

    t185 = (x749-(x750==(x751|x752)));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x753 = INT64_MAX;
	int64_t x754 = INT64_MIN;
	volatile int32_t x755 = -1;
	int64_t t186 = INT64_MAX;

    t186 = (x753-(x754==(x755|x756)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x758 = INT64_MAX;
	int8_t x760 = 0;
	static int32_t t187 = INT32_MAX;

    t187 = (x757-(x758==(x759|x760)));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint8_t x763 = UINT8_MAX;
	uint32_t x764 = 337334U;
	static volatile int64_t t188 = INT64_MIN;

    t188 = (x761-(x762==(x763|x764)));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x765 = 2U;
	uint8_t x766 = UINT8_MAX;
	int16_t x767 = -1;
	uint64_t x768 = UINT64_MAX;
	int32_t t189 = -1142;

    t189 = (x765-(x766==(x767|x768)));

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x769 = 29854U;
	volatile uint8_t x770 = 23U;
	uint64_t x771 = 4126582LLU;
	int64_t x772 = 238256004858270LL;
	int32_t t190 = 115103;

    t190 = (x769-(x770==(x771|x772)));

    if (t190 != 29854) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x773 = -344924;
	uint64_t x774 = 4266006706612107LLU;
	int64_t x775 = -11097674323146LL;
	int8_t x776 = -1;
	volatile int32_t t191 = -1632087;

    t191 = (x773-(x774==(x775|x776)));

    if (t191 != -344924) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x777 = 741972U;
	int64_t x778 = INT64_MIN;
	uint64_t x779 = 2274793405LLU;
	int64_t x780 = -2019725538476609844LL;

    t192 = (x777-(x778==(x779|x780)));

    if (t192 != 741972U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x781 = 17382U;
	int8_t x782 = INT8_MIN;
	uint32_t x784 = 4500U;
	volatile int32_t t193 = 56;

    t193 = (x781-(x782==(x783|x784)));

    if (t193 != 17382) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x785 = INT16_MAX;
	static uint16_t x786 = 634U;
	int64_t x787 = -17842165941031714LL;
	int8_t x788 = 13;
	volatile int32_t t194 = -194;

    t194 = (x785-(x786==(x787|x788)));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x789 = UINT64_MAX;
	int64_t x790 = INT64_MAX;
	uint32_t x791 = 12515U;
	static int16_t x792 = INT16_MIN;
	uint64_t t195 = UINT64_MAX;

    t195 = (x789-(x790==(x791|x792)));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x794 = 8U;
	volatile int32_t x795 = INT32_MIN;
	volatile int64_t x796 = INT64_MAX;

    t196 = (x793-(x794==(x795|x796)));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x797 = 83LLU;
	int16_t x798 = -1;
	int64_t x800 = -499680794332641LL;
	uint64_t t197 = 581570919LLU;

    t197 = (x797-(x798==(x799|x800)));

    if (t197 != 83LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x801 = INT8_MAX;
	static uint32_t x803 = 60U;
	int64_t x804 = -741LL;
	int32_t t198 = -69928;

    t198 = (x801-(x802==(x803|x804)));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x807 = 5LLU;
	int8_t x808 = -1;

    t199 = (x805-(x806==(x807|x808)));

    if (t199 != -32768) { NG(); } else { ; }
	
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

