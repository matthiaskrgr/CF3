
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

volatile int32_t x1 = INT32_MIN;
static int32_t x7 = -632300;
int64_t x9 = -1LL;
static int32_t x14 = -5;
uint32_t x23 = UINT32_MAX;
int16_t x28 = -253;
int32_t t9 = 888;
static volatile int32_t t13 = -2;
int32_t x64 = -129864;
volatile int32_t t15 = -106642;
static int64_t x70 = 11453329057725024LL;
volatile int8_t x71 = INT8_MIN;
uint8_t x76 = 15U;
uint32_t x79 = UINT32_MAX;
volatile uint32_t t19 = 339020739U;
int32_t x83 = -809356;
uint32_t x93 = 110352254U;
volatile uint32_t t23 = 17318U;
int32_t t24 = 92654913;
uint32_t t25 = UINT32_MAX;
int32_t x107 = 282;
int16_t x113 = 2550;
int32_t t29 = 9941770;
int32_t x124 = -657065;
static int8_t x125 = 5;
volatile int32_t t33 = 3855;
uint64_t x143 = UINT64_MAX;
uint64_t x145 = 57890LLU;
int64_t x148 = INT64_MIN;
volatile uint32_t x149 = UINT32_MAX;
uint8_t x151 = UINT8_MAX;
static uint8_t x153 = UINT8_MAX;
volatile int32_t t39 = -11;
volatile uint16_t x161 = 585U;
uint16_t x162 = 9044U;
static int8_t x168 = INT8_MIN;
volatile int64_t x175 = INT64_MIN;
volatile int64_t x176 = -1LL;
int16_t x177 = INT16_MIN;
volatile int16_t x178 = -1;
static int8_t x186 = INT8_MIN;
int8_t x187 = INT8_MAX;
volatile int32_t t46 = -1;
int64_t t50 = 2078060283278LL;
volatile int16_t x205 = INT16_MAX;
int64_t x207 = 323471706531LL;
int16_t x211 = INT16_MIN;
int32_t x212 = INT32_MIN;
int16_t x216 = INT16_MIN;
volatile int64_t x219 = INT64_MAX;
uint64_t x222 = UINT64_MAX;
static volatile int16_t x226 = INT16_MIN;
volatile uint32_t x227 = 1974775U;
volatile int32_t x229 = -1;
uint8_t x231 = 6U;
volatile int32_t t57 = 6717939;
uint64_t x244 = 5174162596049656LLU;
volatile uint32_t x246 = UINT32_MAX;
int16_t x252 = -1;
volatile int64_t t62 = INT64_MIN;
int8_t x253 = INT8_MIN;
int8_t x254 = INT8_MAX;
static int8_t x256 = 0;
int32_t t63 = -1961883;
volatile int32_t t64 = 515638;
volatile uint32_t x261 = UINT32_MAX;
uint64_t x264 = 793383563794590LLU;
volatile int64_t t66 = -1767257502876LL;
int64_t x274 = 0LL;
int16_t x287 = 0;
int64_t x292 = INT64_MIN;
int16_t x295 = 2;
int64_t x299 = INT64_MIN;
uint64_t x300 = UINT64_MAX;
uint8_t x313 = UINT8_MAX;
int16_t x315 = INT16_MIN;
int32_t t78 = -40602;
int64_t x320 = -12082582LL;
int32_t x325 = INT32_MAX;
int16_t x328 = INT16_MIN;
volatile int32_t x335 = 3;
static int32_t x338 = INT32_MIN;
volatile int16_t x339 = -62;
static int32_t t84 = -14990;
static int8_t x341 = INT8_MAX;
uint64_t x350 = 532584LLU;
volatile uint32_t x372 = 1U;
static int16_t x379 = INT16_MAX;
volatile int32_t t96 = 8762511;
int8_t x392 = 2;
uint64_t x399 = UINT64_MAX;
static int16_t x414 = 0;
static int32_t x415 = -1;
uint8_t x425 = UINT8_MAX;
int32_t x426 = -1;
int64_t x428 = 12682573167LL;
uint32_t x429 = 8717159U;
int32_t x435 = 28395;
int16_t x443 = -6471;
uint16_t x449 = UINT16_MAX;
int64_t x451 = 3315LL;
uint16_t x453 = 5086U;
int32_t x458 = 104571;
int32_t x462 = 81602175;
uint16_t x464 = 58U;
volatile int64_t t115 = -7388LL;
volatile int8_t x472 = INT8_MAX;
int16_t x479 = 3940;
int32_t x480 = -1;
static uint64_t x481 = UINT64_MAX;
int64_t x482 = INT64_MIN;
volatile uint64_t t120 = 14997LLU;
int16_t x495 = 1086;
int16_t x499 = 1251;
volatile uint32_t x503 = UINT32_MAX;
int32_t x508 = -1;
static volatile int32_t t127 = 3390940;
uint32_t x513 = UINT32_MAX;
int16_t x516 = INT16_MIN;
int64_t x518 = -1LL;
uint32_t x521 = 48U;
uint8_t x526 = UINT8_MAX;
int64_t x531 = 1492745772LL;
uint16_t x532 = 7U;
volatile int32_t t132 = 2971863;
volatile uint16_t x533 = 7U;
static int8_t x534 = INT8_MIN;
int32_t t133 = 64;
uint64_t x537 = 21LLU;
int16_t x540 = 20;
static int8_t x541 = 3;
int64_t x547 = INT64_MAX;
static volatile int32_t t136 = 8519;
uint64_t x554 = UINT64_MAX;
int8_t x555 = INT8_MIN;
static int32_t x556 = INT32_MIN;
uint64_t x557 = 1877LLU;
volatile uint64_t t139 = 998503409591LLU;
int64_t x561 = INT64_MAX;
int64_t x575 = INT64_MIN;
int32_t x585 = INT32_MIN;
int64_t x594 = INT64_MIN;
int32_t t148 = 6;
volatile uint64_t x615 = 5998543997630997LLU;
uint32_t x621 = 94507U;
int8_t x638 = -1;
uint32_t x644 = 5U;
int32_t x646 = -8;
int32_t x647 = INT32_MIN;
int8_t x648 = INT8_MIN;
int32_t x655 = -238;
uint8_t x656 = 89U;
volatile int64_t t163 = INT64_MAX;
volatile uint16_t x657 = 3U;
volatile int32_t t164 = 0;
volatile int32_t t165 = -264023484;
int32_t x667 = -1;
static uint8_t x671 = 100U;
volatile int32_t t167 = 0;
volatile int32_t x681 = INT32_MIN;
uint64_t x686 = 457431552105766597LLU;
volatile int32_t t175 = 90281399;
volatile int64_t x708 = 344543583LL;
int64_t t176 = -532962515588093692LL;
uint32_t x712 = 231222316U;
int32_t x716 = 6;
static volatile uint8_t x718 = UINT8_MAX;
int32_t t179 = -11556;
static volatile int64_t x721 = INT64_MIN;
volatile int16_t x722 = INT16_MIN;
int8_t x728 = -14;
static int32_t x732 = 4145079;
volatile uint8_t x739 = UINT8_MAX;
int64_t x744 = -5LL;
int32_t x754 = -1;
int64_t t188 = -1498685LL;
static volatile int8_t x770 = INT8_MIN;
uint8_t x772 = UINT8_MAX;
int8_t x773 = -47;
uint64_t x774 = 29841610LLU;
int64_t x781 = -385950560412LL;
static uint16_t x782 = 1U;
static int8_t x784 = -14;
int64_t x787 = INT64_MAX;
uint32_t t196 = 24023678U;
volatile uint8_t x792 = 13U;
int64_t x794 = -1LL;


void f0(void) {
    	int8_t x2 = 57;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = 17;
	int32_t t0 = INT32_MIN;

    t0 = (x1^(x2<=(x3==x4)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MAX;
	uint32_t x8 = 3545U;
	int32_t t1 = 7356;

    t1 = (x5^(x6<=(x7==x8)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 17941663U;
	static int64_t x11 = -1LL;
	int8_t x12 = 21;
	volatile int64_t t2 = -1978179371325LL;

    t2 = (x9^(x10<=(x11==x12)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = -1;
	static int64_t t3 = 669913431623200LL;

    t3 = (x13^(x14<=(x15==x16)));

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MIN;
	uint8_t x19 = 6U;
	int64_t x20 = -1LL;
	int32_t t4 = -1;

    t4 = (x17^(x18<=(x19==x20)));

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	uint64_t x22 = 18215LLU;
	uint32_t x24 = UINT32_MAX;
	static uint32_t t5 = UINT32_MAX;

    t5 = (x21^(x22<=(x23==x24)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static int32_t t6 = 3450;

    t6 = (x25^(x26<=(x27==x28)));

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	int32_t x30 = 82725;
	static int32_t x31 = INT32_MIN;
	volatile int16_t x32 = 1;
	static int32_t t7 = 0;

    t7 = (x29^(x30<=(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int16_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	int32_t t8 = 11349;

    t8 = (x33^(x34<=(x35==x36)));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -1;
	static int64_t x38 = INT64_MAX;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = -1;

    t9 = (x37^(x38<=(x39==x40)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	int64_t x42 = -1LL;
	int8_t x43 = -1;
	volatile int32_t x44 = -36143968;
	volatile int32_t t10 = 61963446;

    t10 = (x41^(x42<=(x43==x44)));

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MAX;
	int64_t x47 = 3942757LL;
	uint16_t x48 = 468U;
	static volatile int32_t t11 = 568555;

    t11 = (x45^(x46<=(x47==x48)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static int64_t x50 = -1370LL;
	uint16_t x51 = 2U;
	static int8_t x52 = 5;
	static volatile int32_t t12 = -258;

    t12 = (x49^(x50<=(x51==x52)));

    if (t12 != 2147483646) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 1;
	volatile int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -230879316660896320LL;

    t13 = (x53^(x54<=(x55==x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	volatile uint8_t x59 = 100U;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = INT64_MIN;

    t14 = (x57^(x58<=(x59==x60)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	uint64_t x63 = 762562054283LLU;

    t15 = (x61^(x62<=(x63==x64)));

    if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int64_t x66 = -124015966053733LL;
	int64_t x67 = -61065499781LL;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 31760;

    t16 = (x65^(x66<=(x67==x68)));

    if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 110977354660623476LL;
	int64_t x72 = INT64_MIN;
	int64_t t17 = -5985759869LL;

    t17 = (x69^(x70<=(x71==x72)));

    if (t17 != 110977354660623476LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -35;
	uint16_t x74 = 317U;
	static int8_t x75 = 5;
	volatile int32_t t18 = 5891034;

    t18 = (x73^(x74<=(x75==x76)));

    if (t18 != -35) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 1450587U;
	static int16_t x78 = INT16_MIN;
	int32_t x80 = -7769;

    t19 = (x77^(x78<=(x79==x80)));

    if (t19 != 1450586U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MAX;
	int64_t x82 = INT64_MIN;
	volatile int32_t x84 = INT32_MAX;
	int32_t t20 = -43;

    t20 = (x81^(x82<=(x83==x84)));

    if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 42;
	uint64_t x86 = 372147759135LLU;
	volatile int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 1384;

    t21 = (x85^(x86<=(x87==x88)));

    if (t21 != 42) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	uint8_t x90 = 31U;
	static int32_t x91 = 0;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 1;

    t22 = (x89^(x90<=(x91==x92)));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 2220U;
	static int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;

    t23 = (x93^(x94<=(x95==x96)));

    if (t23 != 110352254U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	volatile uint64_t x99 = 2099841124223LLU;
	uint8_t x100 = UINT8_MAX;

    t24 = (x97^(x98<=(x99==x100)));

    if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 1064758376U;
	uint64_t x103 = 107528461401933LLU;
	uint8_t x104 = 1U;

    t25 = (x101^(x102<=(x103==x104)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	uint32_t x106 = 4158U;
	static volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = INT32_MIN;

    t26 = (x105^(x106<=(x107==x108)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -33;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MAX;
	int32_t x112 = -48461;
	static int32_t t27 = -15644355;

    t27 = (x109^(x110<=(x111==x112)));

    if (t27 != -34) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = -1;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -2;

    t28 = (x113^(x114<=(x115==x116)));

    if (t28 != 2550) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	volatile int32_t x119 = INT32_MAX;
	int64_t x120 = -1LL;

    t29 = (x117^(x118<=(x119==x120)));

    if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	volatile int8_t x123 = INT8_MIN;
	volatile int64_t t30 = INT64_MAX;

    t30 = (x121^(x122<=(x123==x124)));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -1;
	int8_t x127 = INT8_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -1727566;

    t31 = (x125^(x126<=(x127==x128)));

    if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	int8_t x131 = -1;
	volatile int8_t x132 = -1;
	volatile int32_t t32 = -28473966;

    t32 = (x129^(x130<=(x131==x132)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	int16_t x134 = -1880;
	volatile int32_t x135 = -1;
	int8_t x136 = -1;

    t33 = (x133^(x134<=(x135==x136)));

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 2;
	static int8_t x138 = INT8_MAX;
	uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 2U;
	volatile int32_t t34 = 145;

    t34 = (x137^(x138<=(x139==x140)));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MAX;
	static int32_t x142 = -97065978;
	int64_t x144 = INT64_MAX;
	static volatile int32_t t35 = 4;

    t35 = (x141^(x142<=(x143==x144)));

    if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x146 = 0U;
	uint16_t x147 = 600U;
	uint64_t t36 = 753975081912970436LLU;

    t36 = (x145^(x146<=(x147==x148)));

    if (t36 != 57891LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 35U;
	int16_t x152 = 7189;
	volatile uint32_t t37 = UINT32_MAX;

    t37 = (x149^(x150<=(x151==x152)));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x154 = 4U;
	static volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MAX;
	volatile int32_t t38 = -1475;

    t38 = (x153^(x154<=(x155==x156)));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -1;
	uint8_t x158 = UINT8_MAX;
	volatile int16_t x159 = -1;
	static int64_t x160 = -1LL;

    t39 = (x157^(x158<=(x159==x160)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x163 = 77U;
	uint64_t x164 = 8522836873922LLU;
	volatile int32_t t40 = 68280868;

    t40 = (x161^(x162<=(x163==x164)));

    if (t40 != 585) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 24LL;
	volatile uint32_t x166 = UINT32_MAX;
	volatile int8_t x167 = 0;
	static int64_t t41 = 25273LL;

    t41 = (x165^(x166<=(x167==x168)));

    if (t41 != 24LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	int64_t x171 = -2920321125909213LL;
	int16_t x172 = -4363;
	volatile int32_t t42 = -161366;

    t42 = (x169^(x170<=(x171==x172)));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	static uint32_t x174 = UINT32_MAX;
	volatile int32_t t43 = INT32_MAX;

    t43 = (x173^(x174<=(x175==x176)));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x179 = -1;
	static int8_t x180 = 13;
	static volatile int32_t t44 = 0;

    t44 = (x177^(x178<=(x179==x180)));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 1U;
	uint8_t x182 = 33U;
	static int64_t x183 = -32773886405429557LL;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = 30891;

    t45 = (x181^(x182<=(x183==x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = 6;
	static int64_t x188 = 2037348161324225LL;

    t46 = (x185^(x186<=(x187==x188)));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	int8_t x190 = INT8_MAX;
	int16_t x191 = -58;
	uint8_t x192 = 27U;
	volatile int64_t t47 = -15704199LL;

    t47 = (x189^(x190<=(x191==x192)));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x193 = 353299723U;
	uint16_t x194 = 9U;
	static uint8_t x195 = 15U;
	uint32_t x196 = 1743493471U;
	volatile uint32_t t48 = 106250U;

    t48 = (x193^(x194<=(x195==x196)));

    if (t48 != 353299723U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x197 = 3U;
	int64_t x198 = -1LL;
	uint64_t x199 = UINT64_MAX;
	static int64_t x200 = 80368598LL;
	volatile int32_t t49 = 254460327;

    t49 = (x197^(x198<=(x199==x200)));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -1LL;
	int64_t x202 = 2754191587LL;
	int64_t x203 = -1LL;
	int16_t x204 = -1;

    t50 = (x201^(x202<=(x203==x204)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = INT64_MAX;
	uint32_t x208 = 816U;
	int32_t t51 = -19756;

    t51 = (x205^(x206<=(x207==x208)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 2093831286U;
	int16_t x210 = INT16_MAX;
	volatile uint32_t t52 = 924U;

    t52 = (x209^(x210<=(x211==x212)));

    if (t52 != 2093831286U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 0;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = 29U;
	int32_t t53 = 230;

    t53 = (x213^(x214<=(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 4291LL;
	int32_t x218 = INT32_MAX;
	volatile int8_t x220 = INT8_MIN;
	volatile int64_t t54 = 32993086LL;

    t54 = (x217^(x218<=(x219==x220)));

    if (t54 != 4291LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 1904U;
	volatile uint32_t x223 = 25196U;
	int64_t x224 = INT64_MIN;
	uint32_t t55 = 146989089U;

    t55 = (x221^(x222<=(x223==x224)));

    if (t55 != 1904U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 5LLU;
	static uint32_t x228 = 127078U;
	volatile uint64_t t56 = 327LLU;

    t56 = (x225^(x226<=(x227==x228)));

    if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x230 = 2718U;
	volatile uint8_t x232 = 0U;

    t57 = (x229^(x230<=(x231==x232)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	static int64_t x234 = INT64_MAX;
	static int64_t x235 = 3630839860637708616LL;
	static int8_t x236 = INT8_MIN;
	int64_t t58 = INT64_MAX;

    t58 = (x233^(x234<=(x235==x236)));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MAX;
	int32_t t59 = 271079971;

    t59 = (x237^(x238<=(x239==x240)));

    if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 40;
	int64_t x242 = -1LL;
	static int32_t x243 = -1;
	int32_t t60 = 2;

    t60 = (x241^(x242<=(x243==x244)));

    if (t60 != 41) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1460LL;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -33098535;
	volatile int64_t t61 = 1520441423390LL;

    t61 = (x245^(x246<=(x247==x248)));

    if (t61 != -1460LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = 6788486079LLU;
	int8_t x251 = INT8_MIN;

    t62 = (x249^(x250<=(x251==x252)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x255 = 125U;

    t63 = (x253^(x254<=(x255==x256)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -21160322;
	static int64_t x258 = -1LL;
	static int64_t x259 = INT64_MIN;
	uint32_t x260 = 14U;

    t64 = (x257^(x258<=(x259==x260)));

    if (t64 != -21160321) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = 12370;
	static uint8_t x263 = 22U;
	volatile uint32_t t65 = UINT32_MAX;

    t65 = (x261^(x262<=(x263==x264)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	int8_t x266 = -24;
	int8_t x267 = -1;
	int64_t x268 = -1LL;

    t66 = (x265^(x266<=(x267==x268)));

    if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	uint16_t x271 = 10742U;
	int16_t x272 = -1;
	volatile int64_t t67 = -7895LL;

    t67 = (x269^(x270<=(x271==x272)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	uint8_t x275 = 24U;
	uint64_t x276 = 77263289771LLU;
	uint32_t t68 = 449U;

    t68 = (x273^(x274<=(x275==x276)));

    if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = 4;
	int64_t x278 = -1LL;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = 1;
	int32_t t69 = 563;

    t69 = (x277^(x278<=(x279==x280)));

    if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -1LL;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	int32_t x284 = -1;
	int64_t t70 = 694343308000867LL;

    t70 = (x281^(x282<=(x283==x284)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 8;
	volatile int8_t x286 = INT8_MAX;
	static int8_t x288 = -38;
	int32_t t71 = -907;

    t71 = (x285^(x286<=(x287==x288)));

    if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	volatile int16_t x291 = -962;
	int64_t t72 = 15917824825LL;

    t72 = (x289^(x290<=(x291==x292)));

    if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	uint16_t x294 = 193U;
	static int8_t x296 = 0;
	int64_t t73 = INT64_MIN;

    t73 = (x293^(x294<=(x295==x296)));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	uint16_t x298 = 225U;
	int32_t t74 = -1042329282;

    t74 = (x297^(x298<=(x299==x300)));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MAX;
	volatile int16_t x303 = 1;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -624628762;

    t75 = (x301^(x302<=(x303==x304)));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int64_t x306 = INT64_MAX;
	static int64_t x307 = -1564397297627952171LL;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = -173828519;

    t76 = (x305^(x306<=(x307==x308)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MIN;
	static int16_t x310 = 1;
	int64_t x311 = -8943507734341773LL;
	volatile uint16_t x312 = 19U;
	volatile int32_t t77 = -1917;

    t77 = (x309^(x310<=(x311==x312)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	uint16_t x316 = 3U;

    t78 = (x313^(x314<=(x315==x316)));

    if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 13U;
	int8_t x318 = INT8_MIN;
	static int16_t x319 = 5722;
	int32_t t79 = 3543215;

    t79 = (x317^(x318<=(x319==x320)));

    if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	int32_t x322 = INT32_MIN;
	volatile int8_t x323 = -1;
	int64_t x324 = 4355LL;
	volatile int64_t t80 = -82LL;

    t80 = (x321^(x322<=(x323==x324)));

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	int32_t t81 = INT32_MAX;

    t81 = (x325^(x326<=(x327==x328)));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 91140963073008LLU;
	uint16_t x330 = 17018U;
	volatile int16_t x331 = -178;
	static int64_t x332 = INT64_MAX;
	volatile uint64_t t82 = 235654385959501LLU;

    t82 = (x329^(x330<=(x331==x332)));

    if (t82 != 91140963073008LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 504U;
	uint32_t x334 = 43U;
	int32_t x336 = INT32_MIN;
	uint32_t t83 = 1110338272U;

    t83 = (x333^(x334<=(x335==x336)));

    if (t83 != 504U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = -1;
	uint32_t x340 = UINT32_MAX;

    t84 = (x337^(x338<=(x339==x340)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = UINT64_MAX;
	static uint32_t x343 = 24365U;
	static int8_t x344 = INT8_MAX;
	static int32_t t85 = -5473;

    t85 = (x341^(x342<=(x343==x344)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	uint64_t t86 = 45232LLU;

    t86 = (x345^(x346<=(x347==x348)));

    if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int32_t x351 = -477907570;
	volatile int16_t x352 = INT16_MIN;
	static int32_t t87 = INT32_MIN;

    t87 = (x349^(x350<=(x351==x352)));

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 6550199LLU;
	int16_t x356 = -2968;
	int32_t t88 = 225955;

    t88 = (x353^(x354<=(x355==x356)));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 863U;
	volatile int16_t x358 = 6066;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = 1;
	volatile uint32_t t89 = 114831636U;

    t89 = (x357^(x358<=(x359==x360)));

    if (t89 != 863U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	int16_t x362 = 999;
	int16_t x363 = INT16_MAX;
	volatile int32_t x364 = 1;
	static int32_t t90 = 47760;

    t90 = (x361^(x362<=(x363==x364)));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MAX;
	static int64_t x366 = 50341LL;
	static int32_t x367 = INT32_MIN;
	volatile uint64_t x368 = 119264317754LLU;
	int32_t t91 = -1425714;

    t91 = (x365^(x366<=(x367==x368)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	int8_t x371 = INT8_MIN;
	volatile uint32_t t92 = UINT32_MAX;

    t92 = (x369^(x370<=(x371==x372)));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = 9490;
	volatile uint32_t x374 = UINT32_MAX;
	static uint8_t x375 = UINT8_MAX;
	int16_t x376 = -123;
	int32_t t93 = 33271512;

    t93 = (x373^(x374<=(x375==x376)));

    if (t93 != 9490) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	int8_t x380 = INT8_MIN;
	static int32_t t94 = -6410094;

    t94 = (x377^(x378<=(x379==x380)));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 63899791708LLU;
	int32_t x382 = -2;
	int64_t x383 = -1LL;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t95 = 23LLU;

    t95 = (x381^(x382<=(x383==x384)));

    if (t95 != 63899791709LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 2364U;
	static uint32_t x386 = 10517U;
	volatile int64_t x387 = INT64_MAX;
	volatile int64_t x388 = -28LL;

    t96 = (x385^(x386<=(x387==x388)));

    if (t96 != 2364) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int8_t x390 = 1;
	volatile int16_t x391 = INT16_MIN;
	int64_t t97 = INT64_MIN;

    t97 = (x389^(x390<=(x391==x392)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = 9649LL;
	volatile uint64_t x394 = 678841513910392149LLU;
	int64_t x395 = INT64_MAX;
	uint16_t x396 = UINT16_MAX;
	int64_t t98 = -614607057LL;

    t98 = (x393^(x394<=(x395==x396)));

    if (t98 != 9649LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x397 = 0LLU;
	static uint8_t x398 = 29U;
	volatile int16_t x400 = -8755;
	static uint64_t t99 = 104214310752562149LLU;

    t99 = (x397^(x398<=(x399==x400)));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int64_t x402 = INT64_MIN;
	int8_t x403 = 0;
	int16_t x404 = 3507;
	int32_t t100 = 0;

    t100 = (x401^(x402<=(x403==x404)));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 27448;
	volatile uint64_t x406 = 17621165728524762LLU;
	static int16_t x407 = INT16_MIN;
	volatile int64_t x408 = -24885168028LL;
	volatile int32_t t101 = -983;

    t101 = (x405^(x406<=(x407==x408)));

    if (t101 != 27448) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	int16_t x412 = 1;
	volatile int32_t t102 = -876;

    t102 = (x409^(x410<=(x411==x412)));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = INT64_MAX;
	uint8_t x416 = 3U;
	static volatile int64_t t103 = -3LL;

    t103 = (x413^(x414<=(x415==x416)));

    if (t103 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MAX;
	static uint32_t x419 = UINT32_MAX;
	int64_t x420 = 1LL;
	uint64_t t104 = UINT64_MAX;

    t104 = (x417^(x418<=(x419==x420)));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 70438424636LLU;
	volatile int64_t x422 = 3397402LL;
	int32_t x423 = 184972;
	int64_t x424 = 1LL;
	volatile uint64_t t105 = 12LLU;

    t105 = (x421^(x422<=(x423==x424)));

    if (t105 != 70438424636LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x427 = INT8_MAX;
	static volatile int32_t t106 = -305;

    t106 = (x425^(x426<=(x427==x428)));

    if (t106 != 254) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = INT8_MIN;
	uint16_t x431 = 7372U;
	uint32_t x432 = 29614U;
	static volatile uint32_t t107 = 60066U;

    t107 = (x429^(x430<=(x431==x432)));

    if (t107 != 8717158U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x433 = INT16_MIN;
	volatile int8_t x434 = -1;
	int64_t x436 = -1LL;
	int32_t t108 = -8;

    t108 = (x433^(x434<=(x435==x436)));

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MIN;
	static int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = INT32_MIN;
	int32_t t109 = 1894943;

    t109 = (x437^(x438<=(x439==x440)));

    if (t109 != -127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 0U;
	int16_t x442 = 193;
	uint64_t x444 = UINT64_MAX;
	int32_t t110 = -5;

    t110 = (x441^(x442<=(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 97;
	volatile uint64_t x446 = 291879635713594LLU;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MAX;
	int32_t t111 = 2025;

    t111 = (x445^(x446<=(x447==x448)));

    if (t111 != 97) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x450 = INT16_MAX;
	int32_t x452 = INT32_MAX;
	int32_t t112 = -5402158;

    t112 = (x449^(x450<=(x451==x452)));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MAX;
	static int64_t x455 = 677967296LL;
	int64_t x456 = -11091092293824LL;
	volatile int32_t t113 = 11682115;

    t113 = (x453^(x454<=(x455==x456)));

    if (t113 != 5086) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 718U;
	volatile uint32_t x459 = UINT32_MAX;
	int64_t x460 = 16726800837LL;
	int32_t t114 = -8070132;

    t114 = (x457^(x458<=(x459==x460)));

    if (t114 != 718) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	volatile int32_t x463 = 7286;

    t115 = (x461^(x462<=(x463==x464)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	int8_t x466 = -1;
	int32_t x467 = 688507;
	int32_t x468 = INT32_MIN;
	uint64_t t116 = 26123LLU;

    t116 = (x465^(x466<=(x467==x468)));

    if (t116 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -25;
	volatile int16_t x470 = -1;
	static int64_t x471 = 22826123535LL;
	volatile int32_t t117 = -6;

    t117 = (x469^(x470<=(x471==x472)));

    if (t117 != -26) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -96557634;
	static int16_t x474 = 308;
	volatile int64_t x475 = INT64_MIN;
	uint8_t x476 = 28U;
	volatile int32_t t118 = 472677348;

    t118 = (x473^(x474<=(x475==x476)));

    if (t118 != -96557634) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MAX;
	int64_t t119 = INT64_MIN;

    t119 = (x477^(x478<=(x479==x480)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x483 = INT32_MIN;
	int64_t x484 = -1LL;

    t120 = (x481^(x482<=(x483==x484)));

    if (t120 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x485 = INT32_MIN;
	int64_t x486 = -79797LL;
	int8_t x487 = -14;
	int8_t x488 = INT8_MAX;
	volatile int32_t t121 = -6262096;

    t121 = (x485^(x486<=(x487==x488)));

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 760500U;
	uint8_t x490 = UINT8_MAX;
	int64_t x491 = INT64_MAX;
	volatile int8_t x492 = INT8_MIN;
	volatile uint32_t t122 = 183U;

    t122 = (x489^(x490<=(x491==x492)));

    if (t122 != 760500U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int32_t x494 = -1;
	int64_t x496 = INT64_MAX;
	int64_t t123 = 151690507170LL;

    t123 = (x493^(x494<=(x495==x496)));

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	static volatile uint32_t x498 = 28057188U;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = INT32_MIN;

    t124 = (x497^(x498<=(x499==x500)));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = 379LL;
	int16_t x502 = -1;
	static uint64_t x504 = UINT64_MAX;
	int64_t t125 = 262715086354LL;

    t125 = (x501^(x502<=(x503==x504)));

    if (t125 != 378LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MIN;
	uint8_t x507 = 2U;
	volatile int64_t t126 = -39371877LL;

    t126 = (x505^(x506<=(x507==x508)));

    if (t126 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	uint64_t x510 = 82497175287LLU;
	volatile int8_t x511 = INT8_MIN;
	int64_t x512 = INT64_MIN;

    t127 = (x509^(x510<=(x511==x512)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x514 = 3U;
	uint8_t x515 = 9U;
	volatile uint32_t t128 = UINT32_MAX;

    t128 = (x513^(x514<=(x515==x516)));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = INT32_MIN;
	int8_t x519 = -37;
	int8_t x520 = 1;
	int32_t t129 = -28;

    t129 = (x517^(x518<=(x519==x520)));

    if (t129 != -2147483647) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -1;
	volatile int8_t x523 = INT8_MIN;
	int8_t x524 = 3;
	volatile uint32_t t130 = 691097618U;

    t130 = (x521^(x522<=(x523==x524)));

    if (t130 != 49U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = 122U;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = -1;
	static int32_t t131 = 34495;

    t131 = (x525^(x526<=(x527==x528)));

    if (t131 != 122) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x530 = -1LL;

    t132 = (x529^(x530<=(x531==x532)));

    if (t132 != 2147483646) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x535 = -1;
	static uint8_t x536 = 1U;

    t133 = (x533^(x534<=(x535==x536)));

    if (t133 != 6) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = -2;
	static uint8_t x539 = 1U;
	static uint64_t t134 = 984167LLU;

    t134 = (x537^(x538<=(x539==x540)));

    if (t134 != 20LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = INT8_MIN;
	int16_t x543 = -1;
	uint16_t x544 = UINT16_MAX;
	int32_t t135 = 20126861;

    t135 = (x541^(x542<=(x543==x544)));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = 4834458905LL;
	static volatile uint64_t x548 = UINT64_MAX;

    t136 = (x545^(x546<=(x547==x548)));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -109367927060LL;
	int16_t x550 = INT16_MIN;
	static uint32_t x551 = UINT32_MAX;
	static int8_t x552 = INT8_MIN;
	static int64_t t137 = 56LL;

    t137 = (x549^(x550<=(x551==x552)));

    if (t137 != -109367927059LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x553 = INT64_MAX;
	static int64_t t138 = INT64_MAX;

    t138 = (x553^(x554<=(x555==x556)));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	uint8_t x559 = 1U;
	volatile int32_t x560 = INT32_MAX;

    t139 = (x557^(x558<=(x559==x560)));

    if (t139 != 1876LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = 23375U;
	int64_t x563 = -26716656577LL;
	int16_t x564 = INT16_MIN;
	volatile int64_t t140 = INT64_MAX;

    t140 = (x561^(x562<=(x563==x564)));

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 11;
	int8_t x566 = 0;
	uint8_t x567 = 1U;
	int64_t x568 = INT64_MIN;
	static int32_t t141 = -98;

    t141 = (x565^(x566<=(x567==x568)));

    if (t141 != 10) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = 40;
	volatile int16_t x570 = -30;
	int16_t x571 = INT16_MIN;
	uint16_t x572 = UINT16_MAX;
	int32_t t142 = -111378155;

    t142 = (x569^(x570<=(x571==x572)));

    if (t142 != 41) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = INT64_MIN;
	uint8_t x574 = UINT8_MAX;
	volatile uint32_t x576 = 258938172U;
	int64_t t143 = INT64_MIN;

    t143 = (x573^(x574<=(x575==x576)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	static int8_t x579 = -1;
	volatile int16_t x580 = -1;
	int32_t t144 = -912;

    t144 = (x577^(x578<=(x579==x580)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 12U;
	int16_t x582 = INT16_MIN;
	int64_t x583 = -120549803LL;
	uint16_t x584 = 16U;
	volatile int32_t t145 = -13;

    t145 = (x581^(x582<=(x583==x584)));

    if (t145 != 13) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = INT32_MIN;
	static volatile int16_t x587 = -1;
	volatile int16_t x588 = -1;
	int32_t t146 = 73577;

    t146 = (x585^(x586<=(x587==x588)));

    if (t146 != -2147483647) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -160268;
	volatile int32_t x590 = 255388113;
	uint16_t x591 = 377U;
	int16_t x592 = 1;
	volatile int32_t t147 = -29;

    t147 = (x589^(x590<=(x591==x592)));

    if (t147 != -160268) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	static volatile int16_t x595 = -1;
	static uint8_t x596 = 27U;

    t148 = (x593^(x594<=(x595==x596)));

    if (t148 != 2147483646) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint32_t x598 = 68U;
	int32_t x599 = INT32_MIN;
	int64_t x600 = -30028250898435LL;
	volatile int32_t t149 = 107431;

    t149 = (x597^(x598<=(x599==x600)));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	uint16_t x602 = 886U;
	int16_t x603 = INT16_MIN;
	int32_t x604 = -8883306;
	static int32_t t150 = INT32_MAX;

    t150 = (x601^(x602<=(x603==x604)));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x605 = 63U;
	volatile uint8_t x606 = 14U;
	static int8_t x607 = -1;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t151 = -91;

    t151 = (x605^(x606<=(x607==x608)));

    if (t151 != 63) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = 6919;
	int64_t x610 = 3LL;
	int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	int32_t t152 = -7;

    t152 = (x609^(x610<=(x611==x612)));

    if (t152 != 6919) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static volatile int32_t x614 = INT32_MIN;
	volatile uint32_t x616 = 1200471U;
	int32_t t153 = 10403;

    t153 = (x613^(x614<=(x615==x616)));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x617 = 7035LLU;
	static volatile int32_t x618 = -1;
	uint16_t x619 = 27279U;
	int64_t x620 = -1LL;
	volatile uint64_t t154 = 48LLU;

    t154 = (x617^(x618<=(x619==x620)));

    if (t154 != 7034LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x622 = 81468078LL;
	int8_t x623 = 51;
	int64_t x624 = INT64_MIN;
	volatile uint32_t t155 = 408488886U;

    t155 = (x621^(x622<=(x623==x624)));

    if (t155 != 94507U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	uint8_t x626 = 3U;
	int64_t x627 = INT64_MIN;
	static uint32_t x628 = UINT32_MAX;
	int32_t t156 = 403933;

    t156 = (x625^(x626<=(x627==x628)));

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	static int64_t x630 = -1LL;
	static int16_t x631 = -392;
	int8_t x632 = -1;
	int32_t t157 = 328846;

    t157 = (x629^(x630<=(x631==x632)));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = 119;
	volatile int32_t x634 = 32585;
	int32_t x635 = -1609864;
	int16_t x636 = -1;
	static int32_t t158 = -6;

    t158 = (x633^(x634<=(x635==x636)));

    if (t158 != 119) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MAX;
	volatile uint8_t x639 = 121U;
	static volatile int16_t x640 = -1;
	static volatile int32_t t159 = -523;

    t159 = (x637^(x638<=(x639==x640)));

    if (t159 != 2147483646) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 51;
	static int16_t x642 = INT16_MIN;
	int8_t x643 = INT8_MAX;
	volatile int32_t t160 = 3;

    t160 = (x641^(x642<=(x643==x644)));

    if (t160 != 50) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	static int64_t t161 = -29778849838LL;

    t161 = (x645^(x646<=(x647==x648)));

    if (t161 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	static int8_t x650 = INT8_MIN;
	int8_t x651 = -1;
	uint16_t x652 = 2U;
	int32_t t162 = 45;

    t162 = (x649^(x650<=(x651==x652)));

    if (t162 != 126) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	uint16_t x654 = 7U;

    t163 = (x653^(x654<=(x655==x656)));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x658 = -277823917;
	int16_t x659 = -1;
	uint16_t x660 = UINT16_MAX;

    t164 = (x657^(x658<=(x659==x660)));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = INT16_MIN;
	int64_t x662 = INT64_MIN;
	static int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MIN;

    t165 = (x661^(x662<=(x663==x664)));

    if (t165 != -32767) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	volatile int16_t x666 = -1;
	volatile int64_t x668 = INT64_MAX;
	volatile int32_t t166 = -831724;

    t166 = (x665^(x666<=(x667==x668)));

    if (t166 != -32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	volatile int64_t x670 = -1LL;
	int64_t x672 = -1LL;

    t167 = (x669^(x670<=(x671==x672)));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	uint8_t x674 = UINT8_MAX;
	int32_t x675 = -1;
	int32_t x676 = -1;
	volatile int32_t t168 = 0;

    t168 = (x673^(x674<=(x675==x676)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MAX;
	static int8_t x678 = INT8_MIN;
	static int32_t x679 = 117184969;
	static volatile uint32_t x680 = 3150393U;
	int32_t t169 = 24;

    t169 = (x677^(x678<=(x679==x680)));

    if (t169 != 2147483646) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x682 = INT8_MIN;
	int8_t x683 = INT8_MIN;
	int32_t x684 = 45197038;
	volatile int32_t t170 = -829476;

    t170 = (x681^(x682<=(x683==x684)));

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	int64_t x687 = INT64_MAX;
	int8_t x688 = INT8_MAX;
	int32_t t171 = 133682;

    t171 = (x685^(x686<=(x687==x688)));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile uint16_t x690 = 16888U;
	volatile int16_t x691 = -1;
	static int64_t x692 = -1LL;
	volatile int32_t t172 = 44885460;

    t172 = (x689^(x690<=(x691==x692)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -2318;
	int64_t x694 = -1LL;
	uint32_t x695 = 64299U;
	volatile uint32_t x696 = UINT32_MAX;
	static int32_t t173 = 6917872;

    t173 = (x693^(x694<=(x695==x696)));

    if (t173 != -2317) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 510619U;
	uint64_t x698 = 5496785022LLU;
	int32_t x699 = -1;
	uint8_t x700 = 2U;
	volatile uint32_t t174 = 791U;

    t174 = (x697^(x698<=(x699==x700)));

    if (t174 != 510619U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = 130150021;
	uint32_t x702 = 22175923U;
	int8_t x703 = -1;
	volatile int16_t x704 = -1;

    t175 = (x701^(x702<=(x703==x704)));

    if (t175 != 130150021) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1094649161825LL;
	int64_t x706 = INT64_MIN;
	volatile int16_t x707 = INT16_MIN;

    t176 = (x705^(x706<=(x707==x708)));

    if (t176 != -1094649161826LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = INT64_MIN;
	int32_t x711 = INT32_MAX;
	int32_t t177 = -372981;

    t177 = (x709^(x710<=(x711==x712)));

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = INT32_MIN;
	static int64_t x715 = INT64_MAX;
	int64_t t178 = 15LL;

    t178 = (x713^(x714<=(x715==x716)));

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	static volatile int64_t x719 = INT64_MAX;
	uint16_t x720 = 3307U;

    t179 = (x717^(x718<=(x719==x720)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x723 = INT64_MIN;
	volatile int16_t x724 = INT16_MIN;
	volatile int64_t t180 = 1003488626498073327LL;

    t180 = (x721^(x722<=(x723==x724)));

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x726 = -58;
	int16_t x727 = INT16_MIN;
	volatile int32_t t181 = -92804958;

    t181 = (x725^(x726<=(x727==x728)));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = -240;
	volatile int32_t x731 = INT32_MAX;
	volatile int32_t t182 = -245212;

    t182 = (x729^(x730<=(x731==x732)));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	uint64_t x734 = UINT64_MAX;
	volatile int8_t x735 = INT8_MAX;
	int16_t x736 = INT16_MIN;
	int64_t t183 = -56021330494LL;

    t183 = (x733^(x734<=(x735==x736)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 29538U;
	static uint16_t x738 = UINT16_MAX;
	int32_t x740 = INT32_MIN;
	int32_t t184 = -5;

    t184 = (x737^(x738<=(x739==x740)));

    if (t184 != 29538) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 31LLU;
	static uint8_t x742 = 0U;
	uint16_t x743 = 27187U;
	volatile uint64_t t185 = 4449LLU;

    t185 = (x741^(x742<=(x743==x744)));

    if (t185 != 30LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 46;
	static int16_t x746 = -1;
	static uint16_t x747 = 3560U;
	static int16_t x748 = -1;
	int32_t t186 = 1;

    t186 = (x745^(x746<=(x747==x748)));

    if (t186 != 47) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	static int32_t x750 = INT32_MIN;
	volatile int16_t x751 = INT16_MAX;
	static uint64_t x752 = UINT64_MAX;
	volatile int32_t t187 = 17889;

    t187 = (x749^(x750<=(x751==x752)));

    if (t187 != 2147483646) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 41936684684845LL;
	static int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MIN;

    t188 = (x753^(x754<=(x755==x756)));

    if (t188 != 41936684684844LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	uint8_t x758 = 7U;
	int16_t x759 = INT16_MIN;
	static int64_t x760 = INT64_MAX;
	volatile int32_t t189 = -2233002;

    t189 = (x757^(x758<=(x759==x760)));

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x761 = 1443LLU;
	int64_t x762 = INT64_MIN;
	volatile uint16_t x763 = 4747U;
	volatile int32_t x764 = 15;
	uint64_t t190 = 4976639485284LLU;

    t190 = (x761^(x762<=(x763==x764)));

    if (t190 != 1442LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = INT32_MIN;
	int16_t x766 = INT16_MIN;
	int32_t x767 = -1;
	volatile uint16_t x768 = UINT16_MAX;
	int32_t t191 = -69649;

    t191 = (x765^(x766<=(x767==x768)));

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 374390381U;
	static volatile int8_t x771 = -1;
	volatile uint32_t t192 = 42852357U;

    t192 = (x769^(x770<=(x771==x772)));

    if (t192 != 374390380U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x775 = 122U;
	int16_t x776 = -1;
	int32_t t193 = 4955;

    t193 = (x773^(x774<=(x775==x776)));

    if (t193 != -47) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 29706U;
	volatile int8_t x778 = -11;
	static uint64_t x779 = UINT64_MAX;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 359;

    t194 = (x777^(x778<=(x779==x780)));

    if (t194 != 29707) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x783 = INT32_MIN;
	int64_t t195 = -623007723LL;

    t195 = (x781^(x782<=(x783==x784)));

    if (t195 != -385950560412LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = 1U;
	volatile int64_t x786 = INT64_MIN;
	uint16_t x788 = 11487U;

    t196 = (x785^(x786<=(x787==x788)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 13147869951717337LLU;
	int64_t x790 = -233141LL;
	uint8_t x791 = UINT8_MAX;
	volatile uint64_t t197 = 674024963518456LLU;

    t197 = (x789^(x790<=(x791==x792)));

    if (t197 != 13147869951717336LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	int8_t x795 = INT8_MAX;
	uint64_t x796 = UINT64_MAX;
	static int32_t t198 = -174032453;

    t198 = (x793^(x794<=(x795==x796)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x797 = 3695171688971942LLU;
	volatile int64_t x798 = -812536LL;
	uint32_t x799 = 150U;
	int64_t x800 = INT64_MIN;
	volatile uint64_t t199 = 11602418867LLU;

    t199 = (x797^(x798<=(x799==x800)));

    if (t199 != 3695171688971943LLU) { NG(); } else { ; }
	
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

