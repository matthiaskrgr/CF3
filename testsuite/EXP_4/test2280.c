
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

int8_t x3 = INT8_MIN;
int32_t t0 = -1;
uint32_t x5 = UINT32_MAX;
int16_t x7 = INT16_MIN;
static int16_t x10 = INT16_MAX;
uint16_t x12 = UINT16_MAX;
volatile int32_t x13 = INT32_MIN;
int16_t x15 = 1;
int8_t x16 = -1;
static int8_t x17 = -1;
static int16_t x18 = INT16_MIN;
volatile int32_t t4 = -5260993;
int16_t x22 = INT16_MIN;
int32_t x24 = INT32_MIN;
int32_t x28 = INT32_MIN;
static uint32_t t7 = 831398U;
int8_t x33 = INT8_MIN;
int32_t t8 = -26125408;
volatile uint8_t x41 = 0U;
volatile int32_t x46 = INT32_MIN;
volatile int64_t x48 = INT64_MIN;
int16_t x59 = INT16_MIN;
int32_t t15 = 249056;
int8_t x65 = INT8_MAX;
int8_t x67 = -33;
int8_t x68 = INT8_MAX;
uint8_t x72 = 39U;
int16_t x75 = -10723;
uint32_t x78 = UINT32_MAX;
int64_t x85 = 8939228593967426LL;
static int8_t x88 = 22;
uint64_t x94 = UINT64_MAX;
int16_t x95 = 8;
int64_t t23 = 64433890703648LL;
uint16_t x98 = 31U;
int8_t x99 = INT8_MAX;
int64_t x104 = 30620218746344LL;
static int16_t x111 = -1;
int32_t x115 = INT32_MIN;
int64_t x117 = -47872897060444LL;
int64_t x118 = INT64_MIN;
int64_t t29 = 17889934LL;
int64_t x125 = 13253632955831442LL;
static uint64_t x127 = UINT64_MAX;
int64_t t31 = -13LL;
int64_t x129 = INT64_MAX;
static uint16_t x130 = UINT16_MAX;
volatile int64_t t32 = 63196972879636574LL;
int32_t x133 = INT32_MIN;
int8_t x136 = 1;
int16_t x143 = INT16_MIN;
volatile int32_t t35 = -5943045;
volatile int8_t x149 = INT8_MAX;
int32_t x154 = INT32_MIN;
int32_t t38 = 1;
int16_t x165 = 3;
int16_t x179 = 16366;
uint16_t x181 = 12U;
int32_t x188 = INT32_MIN;
static int8_t x190 = INT8_MAX;
uint64_t x191 = UINT64_MAX;
volatile int32_t t47 = 79183;
static int8_t x195 = -1;
uint8_t x200 = 0U;
volatile int64_t t52 = 24715695LL;
volatile int32_t t53 = 15471;
int8_t x218 = INT8_MIN;
int64_t x224 = INT64_MIN;
int32_t t56 = -456128;
static volatile int64_t x231 = -1LL;
volatile int32_t x232 = -14410741;
static uint16_t x235 = 295U;
int32_t t58 = -7;
volatile int32_t x238 = 19069;
int32_t t59 = 6980;
int16_t x248 = INT16_MIN;
uint16_t x251 = UINT16_MAX;
static int32_t t63 = 3520;
int8_t x257 = -3;
uint64_t x266 = 43360LLU;
static volatile uint8_t x268 = UINT8_MAX;
int32_t t66 = 26004962;
volatile uint32_t x269 = 4U;
uint16_t x286 = 3U;
int64_t x298 = 0LL;
static volatile int64_t x300 = INT64_MIN;
volatile int32_t x304 = 1498393;
volatile uint64_t t75 = 934837LLU;
int16_t x307 = 0;
volatile uint16_t x310 = UINT16_MAX;
int16_t x324 = INT16_MIN;
volatile int32_t t81 = 673;
int64_t x338 = 37669505750351569LL;
int32_t x339 = INT32_MIN;
volatile int32_t t87 = 14;
uint64_t x354 = 27515413432LLU;
int64_t x363 = 471180LL;
uint8_t x364 = 1U;
int8_t x368 = INT8_MIN;
volatile int32_t t91 = -3937638;
uint32_t x371 = 2U;
static int16_t x377 = -1;
static uint16_t x381 = 3U;
int64_t x387 = -1LL;
uint64_t x391 = UINT64_MAX;
volatile int32_t x393 = 798;
static int16_t x397 = -1;
int32_t x398 = INT32_MAX;
static volatile int64_t x400 = 2LL;
uint8_t x401 = UINT8_MAX;
uint32_t x405 = 117631770U;
static int64_t x406 = INT64_MIN;
int8_t x408 = INT8_MIN;
static uint16_t x409 = UINT16_MAX;
volatile int64_t x410 = INT64_MIN;
int32_t t102 = -47;
int16_t x422 = INT16_MIN;
int16_t x427 = INT16_MAX;
static int32_t x428 = -1;
volatile int64_t x429 = -4LL;
int32_t x433 = INT32_MIN;
int8_t x434 = INT8_MIN;
uint32_t x437 = 6610760U;
int32_t x440 = INT32_MIN;
static volatile int32_t x444 = -1;
int64_t x456 = -1LL;
int8_t x462 = 1;
volatile int16_t x465 = -7;
uint8_t x468 = 1U;
volatile int32_t t117 = 4877128;
static int64_t x476 = INT64_MAX;
uint32_t x480 = UINT32_MAX;
int32_t x485 = INT32_MIN;
int8_t x488 = INT8_MIN;
volatile uint64_t t122 = 210315813367127970LLU;
int32_t x493 = -1;
int32_t t123 = -7;
int32_t x504 = -1;
int8_t x512 = 1;
volatile int64_t t129 = -29032329212LL;
volatile int64_t x522 = -1LL;
int16_t x528 = 0;
int8_t x538 = INT8_MIN;
uint64_t x542 = 1080084556LLU;
volatile int16_t x544 = -110;
static volatile int32_t t135 = 881537;
uint32_t x547 = 63563449U;
uint64_t t136 = 15147677LLU;
int8_t x550 = INT8_MAX;
static volatile int8_t x551 = INT8_MAX;
uint16_t x561 = 7U;
uint16_t x564 = 61U;
int64_t x569 = INT64_MIN;
static int32_t x570 = 12070;
volatile uint32_t x579 = 60771596U;
static uint8_t x588 = 2U;
int16_t x591 = INT16_MAX;
uint16_t x592 = 648U;
int16_t x593 = INT16_MAX;
static int64_t x599 = INT64_MIN;
static int16_t x602 = INT16_MAX;
static int16_t x604 = INT16_MAX;
static volatile int32_t x613 = 9634831;
int64_t x614 = 523196721539721660LL;
volatile int8_t x620 = -1;
uint16_t x621 = UINT16_MAX;
volatile int16_t x627 = 8;
volatile int64_t x628 = 5LL;
int16_t x632 = INT16_MIN;
volatile int8_t x633 = -2;
int16_t x638 = INT16_MAX;
int64_t x639 = INT64_MIN;
volatile int32_t t159 = 887846;
int32_t t160 = -116;
volatile uint8_t x645 = 1U;
int32_t t163 = -237;
int8_t x657 = -1;
int16_t x663 = 25;
volatile int32_t t166 = -12;
volatile int64_t x672 = 3573LL;
volatile int32_t t167 = 17;
uint32_t x679 = UINT32_MAX;
uint8_t x685 = UINT8_MAX;
int8_t x688 = INT8_MAX;
static uint32_t t174 = 10U;
int64_t x703 = -1LL;
uint16_t x709 = UINT16_MAX;
volatile uint8_t x714 = 0U;
uint8_t x717 = 11U;
uint8_t x721 = 62U;
int64_t x733 = INT64_MIN;
volatile int16_t x735 = -1;
static uint8_t x740 = UINT8_MAX;
static int8_t x742 = INT8_MIN;
volatile int32_t x745 = INT32_MIN;
uint8_t x746 = 8U;
uint16_t x750 = UINT16_MAX;
uint32_t x751 = 0U;
int8_t x752 = 9;
static uint32_t x755 = 175651536U;
uint8_t x760 = 6U;
volatile int64_t x761 = -1LL;
volatile int64_t t190 = 540905480265511LL;
int16_t x765 = -33;
int64_t x768 = -1LL;
int32_t x770 = INT32_MIN;
int8_t x773 = INT8_MIN;
int64_t x777 = -1LL;
volatile int32_t x784 = -1;
int64_t x790 = -1039805024267428LL;
volatile uint16_t x798 = 719U;
uint8_t x799 = 57U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MAX;
	int32_t x4 = INT32_MIN;

    t0 = (x1&(x2>(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = -1;
	uint8_t x8 = 14U;
	volatile uint32_t t1 = 5U;

    t1 = (x5&(x6>(x7&x8)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint64_t x11 = 244LLU;
	volatile int32_t t2 = -5382945;

    t2 = (x9&(x10>(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x14 = 20328801;
	int32_t t3 = 6;

    t3 = (x13&(x14>(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x19 = INT32_MIN;
	volatile uint8_t x20 = UINT8_MAX;

    t4 = (x17&(x18>(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	static int32_t x23 = -1;
	volatile int32_t t5 = -1;

    t5 = (x21&(x22>(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int32_t x26 = -17863960;
	static volatile uint16_t x27 = 7107U;
	int32_t t6 = -341312;

    t6 = (x25&(x26>(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 3876U;
	static int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	static int32_t x32 = INT32_MIN;

    t7 = (x29&(x30>(x31&x32)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = -1;
	int64_t x35 = -43LL;
	int8_t x36 = -32;

    t8 = (x33&(x34>(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -24099;
	volatile uint8_t x38 = 22U;
	uint64_t x39 = UINT64_MAX;
	uint32_t x40 = UINT32_MAX;
	static volatile int32_t t9 = 274475987;

    t9 = (x37&(x38>(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x42 = INT64_MAX;
	uint16_t x43 = 678U;
	uint16_t x44 = 1108U;
	static volatile int32_t t10 = -75121364;

    t10 = (x41&(x42>(x43&x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 6U;
	int8_t x47 = INT8_MIN;
	volatile uint32_t t11 = 1960U;

    t11 = (x45&(x46>(x47&x48)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	uint64_t x52 = 1944347LLU;
	int32_t t12 = 78;

    t12 = (x49&(x50>(x51&x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	uint32_t x54 = 83847U;
	int16_t x55 = 15116;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 254142;

    t13 = (x53&(x54>(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MAX;
	uint64_t x60 = 7LLU;
	uint32_t t14 = 1033796U;

    t14 = (x57&(x58>(x59&x60)));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	volatile int64_t x62 = INT64_MAX;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = UINT16_MAX;

    t15 = (x61&(x62>(x63&x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	int32_t t16 = -195053;

    t16 = (x65&(x66>(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 4573;
	static int16_t x70 = -200;
	volatile int32_t x71 = INT32_MIN;
	static volatile int32_t t17 = 169191261;

    t17 = (x69&(x70>(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	int32_t x74 = 13100479;
	int64_t x76 = INT64_MAX;
	int32_t t18 = -412689309;

    t18 = (x73&(x74>(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	static int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -10063;

    t19 = (x77&(x78>(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = 4;
	int16_t x82 = INT16_MIN;
	volatile int32_t x83 = -54210526;
	static int8_t x84 = -14;
	volatile int32_t t20 = 4;

    t20 = (x81&(x82>(x83&x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	volatile int16_t x87 = -1;
	volatile int64_t t21 = 235259107650LL;

    t21 = (x85&(x86>(x87&x88)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	static uint8_t x91 = UINT8_MAX;
	volatile int64_t x92 = INT64_MAX;
	int32_t t22 = 2;

    t22 = (x89&(x90>(x91&x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	volatile int32_t x96 = -1;

    t23 = (x93&(x94>(x95&x96)));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 235;
	static int16_t x100 = -409;
	int32_t t24 = -677;

    t24 = (x97&(x98>(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 219960622398601LL;
	volatile uint16_t x102 = UINT16_MAX;
	static uint32_t x103 = 4745U;
	volatile int64_t t25 = -1933769109LL;

    t25 = (x101&(x102>(x103&x104)));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = 1738U;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -918;

    t26 = (x105&(x106>(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 1U;
	int32_t x110 = -31;
	int64_t x112 = -1LL;
	int32_t t27 = -780;

    t27 = (x109&(x110>(x111&x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 0;
	uint8_t x114 = 8U;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 472;

    t28 = (x113&(x114>(x115&x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x119 = 0;
	volatile uint64_t x120 = UINT64_MAX;

    t29 = (x117&(x118>(x119&x120)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	volatile int16_t x122 = -1;
	static uint8_t x123 = 32U;
	int32_t x124 = -1;
	volatile int32_t t30 = -187;

    t30 = (x121&(x122>(x123&x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	volatile uint64_t x128 = UINT64_MAX;

    t31 = (x125&(x126>(x127&x128)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x131 = 3U;
	volatile int32_t x132 = -1;

    t32 = (x129&(x130>(x131&x132)));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t33 = 189177275;

    t33 = (x133&(x134>(x135&x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = UINT8_MAX;
	int32_t x138 = 26386498;
	volatile uint8_t x139 = 13U;
	int64_t x140 = -3344098LL;
	volatile int32_t t34 = 83973286;

    t34 = (x137&(x138>(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x141 = INT8_MIN;
	uint16_t x142 = UINT16_MAX;
	static uint32_t x144 = 2U;

    t35 = (x141&(x142>(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = -1;
	static volatile int16_t x147 = -1;
	uint8_t x148 = 64U;
	volatile int32_t t36 = -5911232;

    t36 = (x145&(x146>(x147&x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x150 = 195U;
	int8_t x151 = -1;
	volatile int16_t x152 = -8;
	int32_t t37 = -107734;

    t37 = (x149&(x150>(x151&x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int32_t x155 = -1;
	volatile int16_t x156 = INT16_MIN;

    t38 = (x153&(x154>(x155&x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -15;
	volatile uint16_t x158 = 17U;
	volatile int8_t x159 = 0;
	int8_t x160 = 0;
	int32_t t39 = 18;

    t39 = (x157&(x158>(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = 285U;
	static volatile int64_t x164 = INT64_MIN;
	int32_t t40 = 2;

    t40 = (x161&(x162>(x163&x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x166 = -1;
	volatile int8_t x167 = 1;
	int64_t x168 = -1LL;
	int32_t t41 = -1;

    t41 = (x165&(x166>(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -6005;
	volatile int16_t x170 = -1692;
	uint8_t x171 = 0U;
	int32_t x172 = INT32_MAX;
	int32_t t42 = -13891050;

    t42 = (x169&(x170>(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	int16_t x174 = INT16_MAX;
	volatile int64_t x175 = 188462733196726916LL;
	int8_t x176 = INT8_MIN;
	static int32_t t43 = -189408;

    t43 = (x173&(x174>(x175&x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	int64_t x178 = 54841803732997LL;
	int64_t x180 = 232088569211247LL;
	volatile int32_t t44 = -895;

    t44 = (x177&(x178>(x179&x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = 0;
	volatile uint32_t x183 = 1798U;
	static int32_t x184 = -1;
	int32_t t45 = 3140;

    t45 = (x181&(x182>(x183&x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int8_t x186 = INT8_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = 2868;

    t46 = (x185&(x186>(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = UINT8_MAX;
	static int64_t x192 = -1LL;

    t47 = (x189&(x190>(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	static uint64_t x194 = 6218483340LLU;
	uint8_t x196 = UINT8_MAX;
	static int32_t t48 = 13015;

    t48 = (x193&(x194>(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -15306;
	int16_t x198 = 0;
	int32_t x199 = -1;
	volatile int32_t t49 = -672;

    t49 = (x197&(x198>(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MAX;
	uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 211650432LLU;
	int64_t x204 = INT64_MAX;
	int32_t t50 = -1034191;

    t50 = (x201&(x202>(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	uint64_t x206 = 144379LLU;
	static uint64_t x207 = UINT64_MAX;
	int32_t x208 = -456;
	volatile uint32_t t51 = 19049U;

    t51 = (x205&(x206>(x207&x208)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x210 = 461076;
	static uint32_t x211 = 121547U;
	volatile uint16_t x212 = UINT16_MAX;

    t52 = (x209&(x210>(x211&x212)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = -1;
	uint16_t x214 = 109U;
	int64_t x215 = INT64_MIN;
	int8_t x216 = 7;

    t53 = (x213&(x214>(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x217 = -1;
	volatile int64_t x219 = 26329983711956LL;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = 0;

    t54 = (x217&(x218>(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -55788582575LL;
	uint8_t x222 = 0U;
	volatile uint64_t x223 = 3919LLU;
	int64_t t55 = 5801468069LL;

    t55 = (x221&(x222>(x223&x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	int64_t x226 = INT64_MIN;
	static int8_t x227 = -4;
	static uint16_t x228 = 2U;

    t56 = (x225&(x226>(x227&x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 224090601787307053LLU;
	uint64_t x230 = UINT64_MAX;
	volatile uint64_t t57 = 14224302LLU;

    t57 = (x229&(x230>(x231&x232)));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = -4;
	int8_t x234 = INT8_MIN;
	static uint64_t x236 = UINT64_MAX;

    t58 = (x233&(x234>(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -12;
	uint32_t x239 = 908208830U;
	static int16_t x240 = INT16_MIN;

    t59 = (x237&(x238>(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	int32_t x243 = -343;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = -72143327;

    t60 = (x241&(x242>(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 17U;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 58756U;
	int32_t t61 = -4984;

    t61 = (x245&(x246>(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 21U;
	uint64_t x250 = 25141313LLU;
	static int64_t x252 = 24811LL;
	static volatile int32_t t62 = -137;

    t62 = (x249&(x250>(x251&x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	uint32_t x254 = 292763U;
	static uint32_t x255 = UINT32_MAX;
	static int64_t x256 = -1LL;

    t63 = (x253&(x254>(x255&x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x258 = 484368U;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 19057070U;
	volatile int32_t t64 = -27;

    t64 = (x257&(x258>(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	static uint16_t x262 = 526U;
	uint16_t x263 = 54U;
	uint16_t x264 = UINT16_MAX;
	int32_t t65 = -816;

    t65 = (x261&(x262>(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	uint8_t x267 = UINT8_MAX;

    t66 = (x265&(x266>(x267&x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x270 = 13892U;
	int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MIN;
	static volatile uint32_t t67 = 62834U;

    t67 = (x269&(x270>(x271&x272)));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	uint16_t x274 = UINT16_MAX;
	uint64_t x275 = 122345LLU;
	int64_t x276 = -84545044916293273LL;
	volatile int64_t t68 = 4LL;

    t68 = (x273&(x274>(x275&x276)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = 1505;
	uint16_t x279 = 5U;
	static volatile int8_t x280 = 0;
	int64_t t69 = -26741501LL;

    t69 = (x277&(x278>(x279&x280)));

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 1U;
	int64_t x282 = INT64_MIN;
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 58460;

    t70 = (x281&(x282>(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1037303679601883LL;
	int32_t x287 = INT32_MIN;
	static uint32_t x288 = UINT32_MAX;
	static volatile int64_t t71 = 24LL;

    t71 = (x285&(x286>(x287&x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = INT64_MIN;
	uint64_t x290 = 0LLU;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = 3845071LLU;
	volatile int64_t t72 = -1408LL;

    t72 = (x289&(x290>(x291&x292)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 44993844089LLU;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = 11;
	int64_t x296 = INT64_MAX;
	uint64_t t73 = 168402LLU;

    t73 = (x293&(x294>(x295&x296)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -11;
	int64_t x299 = INT64_MAX;
	int32_t t74 = 7167;

    t74 = (x297&(x298>(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = UINT64_MAX;
	static int32_t x302 = -88;
	int16_t x303 = 2;

    t75 = (x301&(x302>(x303&x304)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	volatile int64_t x308 = -1LL;
	volatile int32_t t76 = -1936897;

    t76 = (x305&(x306>(x307&x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	static uint64_t x311 = 684755LLU;
	volatile int64_t x312 = -1LL;
	volatile int32_t t77 = -456506064;

    t77 = (x309&(x310>(x311&x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MIN;
	int8_t x315 = -1;
	int64_t x316 = INT64_MAX;
	static volatile int32_t t78 = 254;

    t78 = (x313&(x314>(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = -36;
	int64_t x318 = -1LL;
	int16_t x319 = 1;
	int16_t x320 = -1;
	volatile int32_t t79 = -245;

    t79 = (x317&(x318>(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = -364772381LL;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 3751LLU;
	volatile int64_t t80 = 1396445664956875282LL;

    t80 = (x321&(x322>(x323&x324)));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 0U;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	uint64_t x328 = UINT64_MAX;

    t81 = (x325&(x326>(x327&x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x329 = 341U;
	uint8_t x330 = 2U;
	uint32_t x331 = 1U;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = 1;

    t82 = (x329&(x330>(x331&x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x333 = 1U;
	static int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	int32_t t83 = -876;

    t83 = (x333&(x334>(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile int8_t x340 = 0;
	volatile int64_t t84 = -49100090897LL;

    t84 = (x337&(x338>(x339&x340)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 355U;
	int16_t x342 = INT16_MAX;
	int32_t x343 = -1;
	uint8_t x344 = 0U;
	volatile uint32_t t85 = 0U;

    t85 = (x341&(x342>(x343&x344)));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 285414LLU;
	volatile uint64_t x346 = 54934486607LLU;
	int16_t x347 = -233;
	static int16_t x348 = -1;
	uint64_t t86 = 1315LLU;

    t86 = (x345&(x346>(x347&x348)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	int64_t x350 = -1LL;
	int32_t x351 = 3;
	static int8_t x352 = INT8_MIN;

    t87 = (x349&(x350>(x351&x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = 5;
	static int16_t x355 = INT16_MIN;
	static uint8_t x356 = 49U;
	int32_t t88 = 186311919;

    t88 = (x353&(x354>(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x357 = UINT16_MAX;
	volatile int64_t x358 = INT64_MIN;
	static uint16_t x359 = 3U;
	int8_t x360 = 31;
	static volatile int32_t t89 = -268709;

    t89 = (x357&(x358>(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 751U;
	int64_t x362 = 149073830658LL;
	volatile uint32_t t90 = 535U;

    t90 = (x361&(x362>(x363&x364)));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = 475625;
	volatile int8_t x366 = -1;
	int16_t x367 = INT16_MIN;

    t91 = (x365&(x366>(x367&x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 0;
	static int64_t x370 = 490023501111227435LL;
	static uint16_t x372 = 5U;
	static volatile int32_t t92 = -923;

    t92 = (x369&(x370>(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = 278967351LLU;
	static int16_t x374 = -51;
	int32_t x375 = 109426109;
	uint8_t x376 = UINT8_MAX;
	static uint64_t t93 = 324042600LLU;

    t93 = (x373&(x374>(x375&x376)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -15LL;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	volatile int32_t t94 = 31;

    t94 = (x377&(x378>(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x382 = INT32_MIN;
	static int64_t x383 = -1LL;
	volatile int8_t x384 = -18;
	int32_t t95 = 141;

    t95 = (x381&(x382>(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = -523760092832575345LL;
	volatile uint16_t x386 = 12603U;
	volatile int16_t x388 = -5;
	int64_t t96 = -31789287626124LL;

    t96 = (x385&(x386>(x387&x388)));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 853U;
	volatile int32_t x390 = -1;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t97 = -1722643;

    t97 = (x389&(x390>(x391&x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x394 = INT32_MAX;
	uint32_t x395 = 1U;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 461520;

    t98 = (x393&(x394>(x395&x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x399 = UINT16_MAX;
	int32_t t99 = 364243256;

    t99 = (x397&(x398>(x399&x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x402 = INT8_MIN;
	int64_t x403 = -1LL;
	int64_t x404 = INT64_MIN;
	int32_t t100 = -43881;

    t100 = (x401&(x402>(x403&x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x407 = INT64_MAX;
	uint32_t t101 = 97388632U;

    t101 = (x405&(x406>(x407&x408)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x411 = -1LL;
	int8_t x412 = 29;

    t102 = (x409&(x410>(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 330443225830526LL;
	static int32_t x414 = INT32_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile uint32_t x416 = 23U;
	volatile int64_t t103 = 3573712865194732LL;

    t103 = (x413&(x414>(x415&x416)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MIN;
	static uint32_t x418 = 0U;
	int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -51142;

    t104 = (x417&(x418>(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	static int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = 6246;

    t105 = (x421&(x422>(x423&x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int32_t t106 = 151909;

    t106 = (x425&(x426>(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x430 = INT8_MIN;
	volatile uint64_t x431 = UINT64_MAX;
	static uint8_t x432 = 60U;
	int64_t t107 = -3208LL;

    t107 = (x429&(x430>(x431&x432)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x435 = INT16_MAX;
	uint64_t x436 = 352LLU;
	volatile int32_t t108 = 13;

    t108 = (x433&(x434>(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = 299U;
	volatile int16_t x439 = -1;
	uint32_t t109 = 186371U;

    t109 = (x437&(x438>(x439&x440)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -1LL;
	int32_t x442 = -1;
	int64_t x443 = -1LL;
	int64_t t110 = 204102673869461905LL;

    t110 = (x441&(x442>(x443&x444)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	static volatile int8_t x446 = -1;
	static volatile int8_t x447 = INT8_MIN;
	int32_t x448 = -1;
	volatile int64_t t111 = 397461011LL;

    t111 = (x445&(x446>(x447&x448)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 0;
	uint8_t x450 = UINT8_MAX;
	uint8_t x451 = 22U;
	uint16_t x452 = 791U;
	static int32_t t112 = -1890065;

    t112 = (x449&(x450>(x451&x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	uint8_t x454 = 54U;
	int8_t x455 = -1;
	int32_t t113 = 688;

    t113 = (x453&(x454>(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -53;
	volatile uint32_t x458 = 289507U;
	int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 0;

    t114 = (x457&(x458>(x459&x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x463 = 366526220;
	uint16_t x464 = 355U;
	volatile int32_t t115 = 1034;

    t115 = (x461&(x462>(x463&x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = 102U;
	int32_t x467 = INT32_MIN;
	int32_t t116 = -52505;

    t116 = (x465&(x466>(x467&x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	static uint64_t x470 = UINT64_MAX;
	int64_t x471 = INT64_MIN;
	uint64_t x472 = 67360217380359LLU;

    t117 = (x469&(x470>(x471&x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MIN;
	uint32_t x475 = 406121U;
	int32_t t118 = -205645167;

    t118 = (x473&(x474>(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = UINT32_MAX;
	uint8_t x478 = UINT8_MAX;
	static uint32_t x479 = UINT32_MAX;
	volatile uint32_t t119 = 16U;

    t119 = (x477&(x478>(x479&x480)));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = 1;
	volatile uint32_t x482 = 114867633U;
	int64_t x483 = INT64_MIN;
	uint32_t x484 = 4936U;
	volatile int32_t t120 = -1635840;

    t120 = (x481&(x482>(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x486 = 1279792520991849722LLU;
	static volatile int64_t x487 = -1LL;
	int32_t t121 = 7247974;

    t121 = (x485&(x486>(x487&x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 108050708LLU;
	int16_t x490 = -1202;
	int16_t x491 = INT16_MAX;
	uint64_t x492 = UINT64_MAX;

    t122 = (x489&(x490>(x491&x492)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x494 = -387946326357LL;
	uint32_t x495 = 1U;
	uint16_t x496 = UINT16_MAX;

    t123 = (x493&(x494>(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	volatile uint8_t x498 = UINT8_MAX;
	static uint64_t x499 = 60448LLU;
	int32_t x500 = 0;
	int32_t t124 = 519209;

    t124 = (x497&(x498>(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	uint64_t x502 = UINT64_MAX;
	static int32_t x503 = 28685;
	volatile int32_t t125 = -8;

    t125 = (x501&(x502>(x503&x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 219;
	int16_t x506 = -9232;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = 21063;

    t126 = (x505&(x506>(x507&x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MIN;
	volatile int16_t x511 = -1;
	volatile uint64_t t127 = 1929431993815LLU;

    t127 = (x509&(x510>(x511&x512)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -2;
	static int32_t x514 = INT32_MIN;
	static volatile int32_t x515 = INT32_MIN;
	uint64_t x516 = 10530LLU;
	volatile int32_t t128 = 93641092;

    t128 = (x513&(x514>(x515&x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -13LL;
	int8_t x518 = 0;
	int32_t x519 = INT32_MIN;
	volatile int32_t x520 = INT32_MAX;

    t129 = (x517&(x518>(x519&x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	int8_t x523 = INT8_MAX;
	volatile int16_t x524 = INT16_MIN;
	static int64_t t130 = -3LL;

    t130 = (x521&(x522>(x523&x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -57;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	int32_t t131 = 1807;

    t131 = (x525&(x526>(x527&x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	int16_t x530 = -155;
	volatile int8_t x531 = -1;
	static int64_t x532 = INT64_MIN;
	int64_t t132 = 45383816815781800LL;

    t132 = (x529&(x530>(x531&x532)));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MAX;
	static uint8_t x534 = 10U;
	volatile int32_t x535 = INT32_MAX;
	int8_t x536 = 0;
	int64_t t133 = -13970463355LL;

    t133 = (x533&(x534>(x535&x536)));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 73LLU;
	int32_t x539 = -379424;
	static volatile uint64_t x540 = 43265246LLU;
	uint64_t t134 = 1225933234LLU;

    t134 = (x537&(x538>(x539&x540)));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -3;
	static volatile int32_t x543 = INT32_MIN;

    t135 = (x541&(x542>(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = 75638910805923LLU;
	uint8_t x546 = 1U;
	volatile uint64_t x548 = UINT64_MAX;

    t136 = (x545&(x546>(x547&x548)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	uint64_t x552 = 5104213LLU;
	volatile int32_t t137 = -10369249;

    t137 = (x549&(x550>(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	static volatile int16_t x554 = -11606;
	int8_t x555 = -1;
	volatile int32_t x556 = -1;
	int32_t t138 = -55;

    t138 = (x553&(x554>(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	static int32_t x558 = -1;
	volatile int32_t x559 = -1;
	static uint64_t x560 = UINT64_MAX;
	int64_t t139 = 29538162553LL;

    t139 = (x557&(x558>(x559&x560)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = 205U;
	int32_t x563 = -920;
	volatile int32_t t140 = -114618;

    t140 = (x561&(x562>(x563&x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = INT16_MIN;
	int16_t x566 = 5;
	static int32_t x567 = INT32_MAX;
	uint32_t x568 = 420131766U;
	volatile int32_t t141 = 4621099;

    t141 = (x565&(x566>(x567&x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x571 = 338502121;
	int16_t x572 = -1;
	volatile int64_t t142 = -1444960883LL;

    t142 = (x569&(x570>(x571&x572)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = 40;
	int16_t x574 = -1;
	int16_t x575 = -681;
	volatile int16_t x576 = -4;
	int32_t t143 = 6238718;

    t143 = (x573&(x574>(x575&x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	int16_t x578 = INT16_MIN;
	static volatile uint8_t x580 = 2U;
	int32_t t144 = -5;

    t144 = (x577&(x578>(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x582 = 20U;
	int32_t x583 = INT32_MAX;
	int8_t x584 = INT8_MIN;
	int64_t t145 = -1192566377206LL;

    t145 = (x581&(x582>(x583&x584)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	int16_t x586 = -1;
	volatile uint32_t x587 = 76531U;
	uint64_t t146 = 3234159230905386360LLU;

    t146 = (x585&(x586>(x587&x588)));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MIN;
	static volatile int64_t t147 = -71447547LL;

    t147 = (x589&(x590>(x591&x592)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x594 = -1;
	int16_t x595 = 1;
	int64_t x596 = INT64_MAX;
	int32_t t148 = 3925;

    t148 = (x593&(x594>(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 2;
	uint32_t x598 = 0U;
	volatile int32_t x600 = INT32_MAX;
	static volatile int32_t t149 = 2686;

    t149 = (x597&(x598>(x599&x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = 51;
	int16_t x603 = INT16_MIN;
	int32_t t150 = -61;

    t150 = (x601&(x602>(x603&x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -102;
	static int16_t x606 = INT16_MAX;
	int8_t x607 = 1;
	uint32_t x608 = 17U;
	volatile int32_t t151 = 17;

    t151 = (x605&(x606>(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -1;
	static uint32_t x610 = 28U;
	static int8_t x611 = 40;
	uint32_t x612 = UINT32_MAX;
	static int32_t t152 = 15474;

    t152 = (x609&(x610>(x611&x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x615 = -1;
	int16_t x616 = -1;
	int32_t t153 = -37034630;

    t153 = (x613&(x614>(x615&x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	static int32_t x618 = INT32_MIN;
	volatile int32_t x619 = -1;
	int32_t t154 = -1198770;

    t154 = (x617&(x618>(x619&x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = 123;
	uint32_t x623 = 51379U;
	int32_t x624 = INT32_MIN;
	int32_t t155 = -46365;

    t155 = (x621&(x622>(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	static int32_t x626 = INT32_MAX;
	volatile int64_t t156 = 5122510870880LL;

    t156 = (x625&(x626>(x627&x628)));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	uint64_t x630 = 1706636871LLU;
	static uint32_t x631 = 1U;
	volatile int32_t t157 = 58840791;

    t157 = (x629&(x630>(x631&x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x634 = 1;
	static int32_t x635 = INT32_MAX;
	int16_t x636 = INT16_MAX;
	int32_t t158 = 46116;

    t158 = (x633&(x634>(x635&x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	static uint32_t x640 = 3115360U;

    t159 = (x637&(x638>(x639&x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	int8_t x642 = INT8_MIN;
	static int32_t x643 = -6722500;
	uint64_t x644 = UINT64_MAX;

    t160 = (x641&(x642>(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	int16_t x647 = 1;
	int64_t x648 = -1LL;
	static volatile int32_t t161 = -9;

    t161 = (x645&(x646>(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MIN;
	volatile int64_t x651 = INT64_MAX;
	int8_t x652 = -1;
	int32_t t162 = -6952;

    t162 = (x649&(x650>(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MIN;
	int64_t x654 = 7LL;
	static int64_t x655 = -1LL;
	volatile int16_t x656 = INT16_MIN;

    t163 = (x653&(x654>(x655&x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x658 = INT32_MAX;
	static uint32_t x659 = UINT32_MAX;
	int64_t x660 = 654352487642498LL;
	int32_t t164 = 435278;

    t164 = (x657&(x658>(x659&x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x661 = 104LLU;
	volatile int16_t x662 = INT16_MIN;
	int32_t x664 = -1;
	uint64_t t165 = 224072LLU;

    t165 = (x661&(x662>(x663&x664)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = 94;
	int32_t x666 = INT32_MAX;
	uint32_t x667 = 268717U;
	static uint64_t x668 = 9697176LLU;

    t166 = (x665&(x666>(x667&x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = 1072;
	int32_t x670 = -26326612;
	int64_t x671 = -1LL;

    t167 = (x669&(x670>(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x674 = UINT32_MAX;
	int16_t x675 = -1;
	uint8_t x676 = 14U;
	int32_t t168 = -42;

    t168 = (x673&(x674>(x675&x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 0U;
	volatile int64_t x678 = -1LL;
	uint32_t x680 = UINT32_MAX;
	int32_t t169 = -32261;

    t169 = (x677&(x678>(x679&x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = -1;
	static int64_t x682 = 3906957969LL;
	int16_t x683 = -1;
	static uint64_t x684 = 371413895367266877LLU;
	int32_t t170 = 287;

    t170 = (x681&(x682>(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = INT32_MAX;
	int8_t x687 = INT8_MAX;
	static int32_t t171 = 7711;

    t171 = (x685&(x686>(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	uint64_t x690 = 16LLU;
	int16_t x691 = INT16_MAX;
	int16_t x692 = INT16_MIN;
	static int32_t t172 = 2;

    t172 = (x689&(x690>(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 7U;
	int64_t x694 = INT64_MAX;
	int16_t x695 = 19;
	int64_t x696 = INT64_MAX;
	volatile int32_t t173 = -164530;

    t173 = (x693&(x694>(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 7U;
	int64_t x698 = INT64_MAX;
	uint8_t x699 = UINT8_MAX;
	int8_t x700 = 4;

    t174 = (x697&(x698>(x699&x700)));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MAX;
	int32_t x702 = INT32_MIN;
	int8_t x704 = INT8_MIN;
	volatile int32_t t175 = -744;

    t175 = (x701&(x702>(x703&x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	static int8_t x706 = -1;
	int16_t x707 = -1;
	int16_t x708 = INT16_MIN;
	volatile uint32_t t176 = 30U;

    t176 = (x705&(x706>(x707&x708)));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x710 = 1;
	uint16_t x711 = 4U;
	volatile uint32_t x712 = 164U;
	static int32_t t177 = -351904642;

    t177 = (x709&(x710>(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	static int32_t x715 = INT32_MIN;
	int32_t x716 = -13909571;
	volatile uint32_t t178 = 499402011U;

    t178 = (x713&(x714>(x715&x716)));

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = INT8_MIN;
	int16_t x719 = 0;
	volatile int8_t x720 = 3;
	volatile int32_t t179 = 835;

    t179 = (x717&(x718>(x719&x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = INT64_MAX;
	int64_t x723 = INT64_MIN;
	int8_t x724 = INT8_MIN;
	static volatile int32_t t180 = 0;

    t180 = (x721&(x722>(x723&x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	static uint16_t x726 = 1916U;
	uint32_t x727 = UINT32_MAX;
	static int8_t x728 = -1;
	volatile uint64_t t181 = 1045485117053LLU;

    t181 = (x725&(x726>(x727&x728)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 12;
	uint32_t x730 = UINT32_MAX;
	uint8_t x731 = UINT8_MAX;
	int8_t x732 = 3;
	int32_t t182 = 381096;

    t182 = (x729&(x730>(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = UINT32_MAX;
	int16_t x736 = 0;
	volatile int64_t t183 = 1131352510581187591LL;

    t183 = (x733&(x734>(x735&x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = INT8_MIN;
	int64_t x738 = INT64_MAX;
	int32_t x739 = INT32_MIN;
	volatile int32_t t184 = -1097;

    t184 = (x737&(x738>(x739&x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = UINT8_MAX;
	uint8_t x743 = UINT8_MAX;
	uint64_t x744 = 1039735LLU;
	volatile int32_t t185 = 9015;

    t185 = (x741&(x742>(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x747 = -1LL;
	uint32_t x748 = 678U;
	volatile int32_t t186 = -17926871;

    t186 = (x745&(x746>(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 918U;
	int32_t t187 = -7;

    t187 = (x749&(x750>(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x753 = UINT32_MAX;
	static volatile int8_t x754 = INT8_MAX;
	volatile int16_t x756 = INT16_MAX;
	uint32_t t188 = 76U;

    t188 = (x753&(x754>(x755&x756)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 0U;
	static uint64_t x758 = 20493LLU;
	volatile int8_t x759 = -4;
	int32_t t189 = 15;

    t189 = (x757&(x758>(x759&x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = UINT64_MAX;
	volatile uint8_t x763 = 104U;
	uint8_t x764 = UINT8_MAX;

    t190 = (x761&(x762>(x763&x764)));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x766 = INT8_MIN;
	int64_t x767 = -1LL;
	int32_t t191 = -8;

    t191 = (x765&(x766>(x767&x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 3362U;
	int16_t x771 = INT16_MIN;
	static uint8_t x772 = UINT8_MAX;
	volatile uint32_t t192 = 2607U;

    t192 = (x769&(x770>(x771&x772)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = 4097;
	int8_t x775 = INT8_MAX;
	static volatile uint32_t x776 = UINT32_MAX;
	volatile int32_t t193 = 30;

    t193 = (x773&(x774>(x775&x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x778 = 211478LLU;
	static int64_t x779 = INT64_MAX;
	static volatile uint32_t x780 = 535530936U;
	int64_t t194 = 90238087989LL;

    t194 = (x777&(x778>(x779&x780)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile uint32_t x782 = 6040U;
	int64_t x783 = 6LL;
	static uint32_t t195 = 657213239U;

    t195 = (x781&(x782>(x783&x784)));

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	volatile int32_t x786 = INT32_MIN;
	int8_t x787 = -48;
	int8_t x788 = INT8_MIN;
	volatile int32_t t196 = -1605;

    t196 = (x785&(x786>(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = 44U;
	int32_t x791 = 3703950;
	int32_t x792 = INT32_MIN;
	int32_t t197 = 137117;

    t197 = (x789&(x790>(x791&x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 658228LLU;
	int64_t x794 = INT64_MIN;
	volatile int16_t x795 = -520;
	static int8_t x796 = -1;
	uint64_t t198 = 452LLU;

    t198 = (x793&(x794>(x795&x796)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 2112;
	int16_t x800 = 0;
	volatile int32_t t199 = 44491;

    t199 = (x797&(x798>(x799&x800)));

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

