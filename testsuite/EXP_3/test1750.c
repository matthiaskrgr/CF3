
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
int16_t x3 = 188;
volatile int16_t x5 = -1;
int16_t x7 = -48;
int64_t t2 = -1LL;
int8_t x13 = 1;
uint8_t x15 = 44U;
volatile uint64_t t4 = UINT64_MAX;
int32_t x24 = -1100976;
uint32_t x28 = 3791681U;
uint32_t t6 = UINT32_MAX;
int8_t x33 = INT8_MAX;
uint64_t x35 = 298498340LLU;
int32_t x42 = -80;
int32_t x58 = INT32_MIN;
volatile int32_t t15 = -28785534;
volatile uint8_t x67 = UINT8_MAX;
uint64_t x68 = UINT64_MAX;
volatile uint64_t x71 = UINT64_MAX;
uint64_t t17 = 178853242076184LLU;
int8_t x75 = 2;
volatile int32_t t18 = 100758634;
int8_t x77 = -5;
uint64_t t21 = 5103742548213029LLU;
uint8_t x96 = 28U;
volatile uint64_t t23 = 33089709762581883LLU;
volatile uint64_t x97 = 7441922LLU;
static volatile int64_t x100 = INT64_MAX;
int64_t x102 = INT64_MIN;
static int16_t x104 = -14;
int16_t x108 = 1;
int8_t x109 = INT8_MIN;
uint8_t x112 = 9U;
int64_t x114 = INT64_MAX;
uint8_t x117 = 5U;
uint64_t x119 = 1336454LLU;
int64_t t29 = INT64_MAX;
static int32_t x126 = INT32_MAX;
int32_t x131 = INT32_MAX;
int32_t t32 = -88197718;
uint32_t x141 = 2U;
uint64_t x146 = 8235558LLU;
uint64_t t36 = 1033403660842858800LLU;
uint64_t x157 = 72LLU;
int64_t x159 = INT64_MIN;
static volatile int16_t x169 = 5;
uint64_t x172 = 386LLU;
static uint32_t t42 = 3988329U;
int32_t x182 = INT32_MIN;
volatile int32_t t47 = -1;
int64_t x194 = INT64_MAX;
static uint32_t t49 = UINT32_MAX;
int16_t x204 = -2472;
int8_t x208 = INT8_MAX;
uint8_t x210 = 10U;
volatile int64_t x219 = INT64_MIN;
volatile uint16_t x220 = 1744U;
static volatile int64_t x226 = INT64_MIN;
volatile uint64_t x233 = 7460288072LLU;
uint32_t x234 = 17656793U;
int16_t x236 = INT16_MIN;
volatile int16_t x238 = -1;
static volatile int16_t x239 = INT16_MAX;
uint32_t x241 = 1626496U;
volatile int64_t x242 = INT64_MIN;
static uint16_t x248 = UINT16_MAX;
static int64_t x250 = -1LL;
volatile uint64_t t62 = 7LLU;
uint32_t x254 = 47969321U;
int8_t x259 = INT8_MIN;
static volatile uint64_t t64 = 2624029LLU;
int8_t x276 = INT8_MIN;
int8_t x282 = 2;
int32_t x289 = INT32_MAX;
uint16_t x291 = UINT16_MAX;
static volatile int8_t x297 = -3;
static int16_t x300 = -302;
uint32_t x318 = 28912U;
uint64_t x319 = 11110181958LLU;
volatile uint32_t x322 = 6495U;
int32_t x330 = -1;
int8_t x337 = INT8_MIN;
int32_t x344 = INT32_MAX;
int16_t x353 = INT16_MIN;
int16_t x356 = INT16_MAX;
volatile int32_t t88 = -828121900;
int32_t x359 = INT32_MIN;
uint32_t x372 = UINT32_MAX;
volatile uint64_t x373 = UINT64_MAX;
static int8_t x386 = INT8_MIN;
static uint32_t x387 = 10383383U;
uint32_t x390 = UINT32_MAX;
static int16_t x392 = INT16_MIN;
volatile uint32_t t97 = UINT32_MAX;
int8_t x395 = INT8_MAX;
static uint16_t x402 = 7227U;
int32_t t100 = -11;
volatile uint64_t x406 = 11346230107396389LLU;
int8_t x419 = -5;
int64_t x430 = 708551828766417796LL;
static volatile uint32_t x433 = 5774U;
volatile uint8_t x435 = UINT8_MAX;
uint64_t x439 = 60505956LLU;
int64_t x442 = INT64_MIN;
static volatile int32_t x447 = -1;
volatile int64_t t112 = INT64_MAX;
uint64_t x458 = 19LLU;
static int32_t x462 = -1;
int16_t x466 = INT16_MIN;
uint16_t x470 = UINT16_MAX;
static int64_t x480 = -7086694LL;
static volatile int32_t t120 = -1284;
static uint32_t x488 = 0U;
int16_t x490 = INT16_MIN;
volatile int32_t t122 = 55650;
int32_t x498 = 262483051;
static volatile int32_t t124 = 28015;
uint64_t x502 = 127LLU;
uint32_t x504 = 3U;
volatile uint64_t t125 = 37701440863643LLU;
int16_t x507 = INT16_MAX;
int32_t x508 = INT32_MIN;
static uint64_t x513 = UINT64_MAX;
int64_t x519 = INT64_MIN;
volatile int8_t x520 = -6;
int32_t t129 = 66095;
volatile int8_t x523 = INT8_MIN;
int32_t t131 = 11397738;
int32_t x531 = 156630;
static volatile uint32_t x536 = 1269272U;
int32_t t133 = -1;
uint32_t x545 = 881371U;
volatile int32_t t137 = -601723;
static volatile int16_t x553 = INT16_MIN;
volatile uint64_t t140 = 11524LLU;
int64_t x569 = INT64_MIN;
volatile uint32_t x575 = 36U;
int32_t t143 = -1721;
int64_t x577 = -24343363555LL;
int32_t x581 = -1;
volatile int32_t x588 = 881;
volatile uint64_t x590 = 2956954984240LLU;
int8_t x593 = INT8_MIN;
volatile int8_t x595 = INT8_MAX;
volatile int8_t x597 = 29;
uint32_t x603 = UINT32_MAX;
uint32_t x604 = 640033U;
static int32_t x610 = 4345;
volatile int8_t x616 = INT8_MAX;
int16_t x622 = -6422;
int64_t x623 = -1LL;
uint16_t x628 = 13U;
volatile uint64_t x639 = UINT64_MAX;
int64_t x643 = 114807443616870LL;
int64_t x650 = INT64_MAX;
int64_t x655 = INT64_MIN;
uint32_t x656 = 2937149U;
uint8_t x662 = 48U;
volatile int16_t x675 = INT16_MIN;
volatile int8_t x678 = INT8_MIN;
volatile int32_t x682 = 401;
int32_t x696 = INT32_MIN;
int32_t t174 = 206910160;
static uint32_t t175 = 804597U;
int32_t x714 = -1;
uint64_t x717 = 7992010930606605LLU;
uint8_t x724 = 2U;
int8_t x728 = 24;
volatile uint64_t t181 = UINT64_MAX;
volatile int64_t t184 = 1937444818LL;
static int32_t x741 = INT32_MIN;
volatile uint32_t t185 = 789540U;
int64_t t187 = 3321228998808419486LL;
int32_t x754 = INT32_MAX;
static int64_t t189 = -1348487318LL;
int8_t x764 = INT8_MIN;
int32_t t190 = -1757;
int16_t x765 = 2215;
int64_t x768 = -1LL;
static uint32_t x769 = 2707415U;
int16_t x771 = 3;
uint8_t x772 = UINT8_MAX;
int8_t x774 = INT8_MAX;
int64_t x777 = INT64_MAX;
static uint32_t x779 = 2653U;
int32_t x790 = INT32_MIN;
uint32_t x793 = 4U;
int32_t t199 = -9;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	volatile uint8_t x4 = 2U;
	uint64_t t0 = 718022764054382LLU;

    t0 = ((x1|x2)^(x3>x4));

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = -6;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -50;

    t1 = ((x5|x6)^(x7>x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;

    t2 = ((x9|x10)^(x11>x12));

    if (t2 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	volatile int32_t x16 = -1;
	static volatile int64_t t3 = INT64_MIN;

    t3 = ((x13|x14)^(x15>x16));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint8_t x18 = 0U;
	int64_t x19 = INT64_MIN;
	int8_t x20 = 0;

    t4 = ((x17|x18)^(x19>x20));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -12037;
	volatile int64_t x22 = -1LL;
	int8_t x23 = -1;
	int64_t t5 = 545LL;

    t5 = ((x21|x22)^(x23>x24));

    if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 9989372U;
	static int8_t x26 = -14;
	uint64_t x27 = UINT64_MAX;

    t6 = ((x25|x26)^(x27>x28));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	static int64_t x30 = INT64_MIN;
	static volatile int64_t x31 = INT64_MIN;
	volatile uint32_t x32 = 91325U;
	int64_t t7 = -815914713163345983LL;

    t7 = ((x29|x30)^(x31>x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	static uint32_t x36 = 653768U;
	static volatile int64_t t8 = 29439LL;

    t8 = ((x33|x34)^(x35>x36));

    if (t8 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 20U;
	uint16_t x38 = 0U;
	volatile int32_t x39 = 776;
	static volatile int16_t x40 = INT16_MAX;
	int32_t t9 = 3;

    t9 = ((x37|x38)^(x39>x40));

    if (t9 != 20) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -15;
	int8_t x43 = 1;
	int16_t x44 = -1;
	int32_t t10 = 305761827;

    t10 = ((x41|x42)^(x43>x44));

    if (t10 != -16) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int8_t x46 = INT8_MIN;
	uint16_t x47 = 6885U;
	uint32_t x48 = 79848U;
	static int64_t t11 = -442307LL;

    t11 = ((x45|x46)^(x47>x48));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 32;
	int64_t x50 = -1LL;
	int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MIN;
	volatile int64_t t12 = 28LL;

    t12 = ((x49|x50)^(x51>x52));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = 266884219LL;
	int32_t x54 = 148798;
	int16_t x55 = INT16_MAX;
	int16_t x56 = -1;
	volatile int64_t t13 = 126LL;

    t13 = ((x53|x54)^(x55>x56));

    if (t13 != 267015550LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int64_t x59 = -764508224692697LL;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -16346;

    t14 = ((x57|x58)^(x59>x60));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	static volatile uint64_t x64 = 3140LLU;

    t15 = ((x61|x62)^(x63>x64));

    if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = -1;
	uint16_t x66 = 53U;
	int32_t t16 = 0;

    t16 = ((x65|x66)^(x67>x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 1U;
	uint64_t x70 = 9055696LLU;
	int64_t x72 = INT64_MIN;

    t17 = ((x69|x70)^(x71>x72));

    if (t17 != 9055696LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int8_t x74 = 60;
	static int64_t x76 = 48653109414652LL;

    t18 = ((x73|x74)^(x75>x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = INT8_MIN;
	uint16_t x79 = 252U;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 5;

    t19 = ((x77|x78)^(x79>x80));

    if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 13683U;
	static uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = -1;
	static volatile uint64_t x84 = UINT64_MAX;
	int32_t t20 = -1;

    t20 = ((x81|x82)^(x83>x84));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 63495547238488957LLU;
	int64_t x86 = -945648715LL;
	uint8_t x87 = UINT8_MAX;
	static int64_t x88 = -123599LL;

    t21 = ((x85|x86)^(x87>x88));

    if (t21 != 18446744073306545148LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	static volatile int32_t x91 = -14;
	uint8_t x92 = 6U;
	int64_t t22 = -29880979805419LL;

    t22 = ((x89|x90)^(x91>x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 1266849053652LLU;
	static uint32_t x94 = 266012089U;
	uint64_t x95 = UINT64_MAX;

    t23 = ((x93|x94)^(x95>x96));

    if (t23 != 1267013222396LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = -3;
	uint8_t x99 = UINT8_MAX;
	volatile uint64_t t24 = UINT64_MAX;

    t24 = ((x97|x98)^(x99>x100));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	static uint16_t x103 = 0U;
	int64_t t25 = 28611206995194LL;

    t25 = ((x101|x102)^(x103>x104));

    if (t25 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	int32_t x106 = 61336;
	int8_t x107 = -1;
	volatile int32_t t26 = 1;

    t26 = ((x105|x106)^(x107>x108));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = -3729;
	int16_t x111 = INT16_MAX;
	static volatile int32_t t27 = -94;

    t27 = ((x109|x110)^(x111>x112));

    if (t27 != -18) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -1;
	volatile int16_t x115 = INT16_MAX;
	int16_t x116 = -1;
	volatile int64_t t28 = -7553418686145945LL;

    t28 = ((x113|x114)^(x115>x116));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	int8_t x120 = -1;

    t29 = ((x117|x118)^(x119>x120));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 126539504027921979LLU;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 55U;
	volatile uint64_t t30 = 1LLU;

    t30 = ((x121|x122)^(x123>x124));

    if (t30 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 8282;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = INT32_MAX;

    t31 = ((x125|x126)^(x127>x128));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 55U;
	uint16_t x130 = UINT16_MAX;
	int8_t x132 = INT8_MIN;

    t32 = ((x129|x130)^(x131>x132));

    if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MAX;
	volatile int8_t x135 = 1;
	int32_t x136 = -12418829;
	static int64_t t33 = -1LL;

    t33 = ((x133|x134)^(x135>x136));

    if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	volatile int8_t x138 = 36;
	uint32_t x139 = 88302U;
	static int64_t x140 = 44963953865642928LL;
	volatile int32_t t34 = 17713;

    t34 = ((x137|x138)^(x139>x140));

    if (t34 != -32732) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;
	static volatile uint32_t t35 = 8U;

    t35 = ((x141|x142)^(x143>x144));

    if (t35 != 4294934530U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	volatile int32_t x147 = 16681865;
	volatile uint16_t x148 = 1807U;

    t36 = ((x145|x146)^(x147>x148));

    if (t36 != 18446744071570303527LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -1;
	int32_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -2521;

    t37 = ((x149|x150)^(x151>x152));

    if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	static int64_t x154 = INT64_MAX;
	int16_t x155 = -1562;
	static int16_t x156 = -45;
	volatile int64_t t38 = 20LL;

    t38 = ((x153|x154)^(x155>x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile uint64_t t39 = 7438LLU;

    t39 = ((x157|x158)^(x159>x160));

    if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 10613709864816LL;
	int8_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;
	volatile int64_t t40 = 1028510LL;

    t40 = ((x161|x162)^(x163>x164));

    if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x166 = 15708;
	volatile int32_t x167 = -224;
	static int16_t x168 = INT16_MIN;
	volatile int64_t t41 = -56LL;

    t41 = ((x165|x166)^(x167>x168));

    if (t41 != -9223372036854760099LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x170 = 33396U;
	int16_t x171 = 82;

    t42 = ((x169|x170)^(x171>x172));

    if (t42 != 33397U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	volatile int16_t x174 = -254;
	int16_t x175 = INT16_MAX;
	int16_t x176 = 80;
	volatile int32_t t43 = 679761;

    t43 = ((x173|x174)^(x175>x176));

    if (t43 != -125) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x177 = INT16_MIN;
	int32_t x178 = 99057083;
	int32_t x179 = 15423;
	static int64_t x180 = 313759380127756LL;
	volatile int32_t t44 = -14133701;

    t44 = ((x177|x178)^(x179>x180));

    if (t44 != -581) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint32_t x183 = UINT32_MAX;
	static int8_t x184 = -1;
	volatile int32_t t45 = INT32_MIN;

    t45 = ((x181|x182)^(x183>x184));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	uint16_t x186 = 10U;
	volatile uint8_t x187 = 24U;
	uint8_t x188 = UINT8_MAX;
	static volatile int32_t t46 = 1201;

    t46 = ((x185|x186)^(x187>x188));

    if (t46 != -118) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = 2;
	int32_t x190 = -60922;
	volatile int16_t x191 = 101;
	static volatile uint32_t x192 = UINT32_MAX;

    t47 = ((x189|x190)^(x191>x192));

    if (t47 != -60922) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x193 = UINT16_MAX;
	int16_t x195 = 0;
	int64_t x196 = INT64_MIN;
	int64_t t48 = 62672163827532LL;

    t48 = ((x193|x194)^(x195>x196));

    if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	static volatile uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -1;

    t49 = ((x197|x198)^(x199>x200));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -10;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = -1;
	volatile int32_t t50 = -652027531;

    t50 = ((x201|x202)^(x203>x204));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MAX;
	volatile int64_t t51 = -1943520413232LL;

    t51 = ((x205|x206)^(x207>x208));

    if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -5;
	static volatile int32_t t52 = -87036238;

    t52 = ((x209|x210)^(x211>x212));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	int32_t x214 = -1;
	int64_t x215 = INT64_MIN;
	volatile int16_t x216 = 1;
	volatile int64_t t53 = -32068LL;

    t53 = ((x213|x214)^(x215>x216));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 456517474339405591LLU;
	uint64_t x218 = 2LLU;
	uint64_t t54 = 18LLU;

    t54 = ((x217|x218)^(x219>x220));

    if (t54 != 456517474339405591LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 3201134074LLU;
	static uint64_t x222 = 248110389704683606LLU;
	int64_t x223 = -58213LL;
	volatile int16_t x224 = -7126;
	static uint64_t t55 = 7531168553930LLU;

    t55 = ((x221|x222)^(x223>x224));

    if (t55 != 248110389780250110LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	static int32_t x227 = INT32_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = ((x225|x226)^(x227>x228));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	uint8_t x230 = 36U;
	int64_t x231 = -380692291421602411LL;
	int8_t x232 = 5;
	static int32_t t57 = 2;

    t57 = ((x229|x230)^(x231>x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x235 = 233762141187LLU;
	volatile uint64_t t58 = 1669228544215145LLU;

    t58 = ((x233|x234)^(x235>x236));

    if (t58 != 7477395417LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = 8826U;
	volatile uint8_t x240 = 12U;
	static volatile int32_t t59 = 25;

    t59 = ((x237|x238)^(x239>x240));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x243 = 42U;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int64_t t60 = 4159042133389410146LL;

    t60 = ((x241|x242)^(x243>x244));

    if (t60 != -9223372036853149312LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -26LL;
	volatile int16_t x246 = -15;
	int32_t x247 = INT32_MIN;
	int64_t t61 = -50141502307870358LL;

    t61 = ((x245|x246)^(x247>x248));

    if (t61 != -9LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 630669LLU;
	int32_t x251 = -1;
	volatile int32_t x252 = INT32_MIN;

    t62 = ((x249|x250)^(x251>x252));

    if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MAX;
	volatile uint64_t x255 = 7484776534LLU;
	uint64_t x256 = UINT64_MAX;
	static volatile uint32_t t63 = 2U;

    t63 = ((x253|x254)^(x255>x256));

    if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x257 = 4U;
	uint64_t x258 = 1128618401928LLU;
	int16_t x260 = -5051;

    t64 = ((x257|x258)^(x259>x260));

    if (t64 != 1128618401933LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	volatile int16_t x262 = -13;
	volatile int8_t x263 = INT8_MIN;
	uint16_t x264 = 23U;
	volatile int32_t t65 = 14;

    t65 = ((x261|x262)^(x263>x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	volatile int32_t x266 = 863;
	uint32_t x267 = 1003315421U;
	uint16_t x268 = 3U;
	int32_t t66 = -425;

    t66 = ((x265|x266)^(x267>x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 25432U;
	int64_t x270 = INT64_MIN;
	uint64_t x271 = 24LLU;
	int64_t x272 = -136890355744351LL;
	int64_t t67 = 2490LL;

    t67 = ((x269|x270)^(x271>x272));

    if (t67 != -9223372036854750376LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 35;
	int32_t x274 = INT32_MIN;
	int16_t x275 = 3623;
	int32_t t68 = 10;

    t68 = ((x273|x274)^(x275>x276));

    if (t68 != -2147483614) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = 136LL;
	int8_t x278 = 1;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t69 = 13819344518818LL;

    t69 = ((x277|x278)^(x279>x280));

    if (t69 != 137LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = -1;
	uint32_t x283 = UINT32_MAX;
	static uint16_t x284 = 3U;
	volatile int32_t t70 = -61;

    t70 = ((x281|x282)^(x283>x284));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 0U;
	volatile int32_t x286 = INT32_MIN;
	volatile uint64_t x287 = 19482291295109950LLU;
	static int32_t x288 = INT32_MIN;
	int32_t t71 = INT32_MIN;

    t71 = ((x285|x286)^(x287>x288));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = 92U;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = INT32_MAX;

    t72 = ((x289|x290)^(x291>x292));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	static volatile int32_t x294 = INT32_MAX;
	uint64_t x295 = 793516305469861LLU;
	int64_t x296 = 945162129961723LL;
	volatile int32_t t73 = -1149;

    t73 = ((x293|x294)^(x295>x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = INT8_MIN;
	uint16_t x299 = 81U;
	int32_t t74 = 26199617;

    t74 = ((x297|x298)^(x299>x300));

    if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	uint16_t x302 = 942U;
	static volatile int32_t x303 = INT32_MIN;
	uint16_t x304 = 45U;
	int32_t t75 = 752;

    t75 = ((x301|x302)^(x303>x304));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	uint8_t x306 = 1U;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 349237513;

    t76 = ((x305|x306)^(x307>x308));

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MAX;
	int16_t x311 = -1;
	static int32_t x312 = INT32_MIN;
	static int32_t t77 = -739;

    t77 = ((x309|x310)^(x311>x312));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -27744911;
	static int8_t x314 = INT8_MIN;
	volatile int8_t x315 = -19;
	static uint32_t x316 = 657750U;
	volatile int32_t t78 = 20225275;

    t78 = ((x313|x314)^(x315>x316));

    if (t78 != -16) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	int64_t x320 = 38144035LL;
	volatile uint32_t t79 = 26203U;

    t79 = ((x317|x318)^(x319>x320));

    if (t79 != 28926U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 179U;
	int8_t x323 = INT8_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	uint32_t t80 = 255779040U;

    t80 = ((x321|x322)^(x323>x324));

    if (t80 != 6655U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = -24LL;
	int8_t x326 = -1;
	volatile int16_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -149541544228431451LL;

    t81 = ((x325|x326)^(x327>x328));

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = 1;
	uint64_t x331 = UINT64_MAX;
	static uint32_t x332 = 196U;
	int32_t t82 = 66574028;

    t82 = ((x329|x330)^(x331>x332));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = -6;
	int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	static volatile int64_t x336 = -250292223216460210LL;
	static int32_t t83 = -478;

    t83 = ((x333|x334)^(x335>x336));

    if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = 3;
	static int16_t x339 = 841;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = 184290;

    t84 = ((x337|x338)^(x339>x340));

    if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	int32_t t85 = -245064;

    t85 = ((x341|x342)^(x343>x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 3;
	volatile uint64_t x346 = 1183LLU;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = 21678U;
	volatile uint64_t t86 = 3578409LLU;

    t86 = ((x345|x346)^(x347>x348));

    if (t86 != 1183LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = INT64_MAX;
	uint16_t x350 = 3U;
	int16_t x351 = INT16_MAX;
	static int8_t x352 = INT8_MIN;
	volatile int64_t t87 = 0LL;

    t87 = ((x349|x350)^(x351>x352));

    if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x354 = -30440;
	uint64_t x355 = 19627273645686LLU;

    t88 = ((x353|x354)^(x355>x356));

    if (t88 != -30439) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 57;
	int64_t x358 = INT64_MIN;
	int32_t x360 = INT32_MAX;
	int64_t t89 = 1142505985242784LL;

    t89 = ((x357|x358)^(x359>x360));

    if (t89 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -5;
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile int64_t t90 = 153671511LL;

    t90 = ((x361|x362)^(x363>x364));

    if (t90 != -5LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	static volatile int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	static int32_t t91 = 919;

    t91 = ((x365|x366)^(x367>x368));

    if (t91 != -2147483521) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 1952344U;
	volatile int64_t x370 = -64724716026LL;
	uint64_t x371 = 121648801116LLU;
	volatile int64_t t92 = 2370335509885888415LL;

    t92 = ((x369|x370)^(x371>x372));

    if (t92 != -64724402593LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	volatile uint16_t x376 = 6U;
	uint64_t t93 = UINT64_MAX;

    t93 = ((x373|x374)^(x375>x376));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	int64_t x379 = INT64_MAX;
	int16_t x380 = -2;
	static volatile int32_t t94 = -40720;

    t94 = ((x377|x378)^(x379>x380));

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	int32_t x382 = -1;
	volatile uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 682;

    t95 = ((x381|x382)^(x383>x384));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = 1;
	uint64_t x388 = 80706748681218844LLU;
	int32_t t96 = -10265961;

    t96 = ((x385|x386)^(x387>x388));

    if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 100U;
	int64_t x391 = INT64_MIN;

    t97 = ((x389|x390)^(x391>x392));

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	volatile int64_t x394 = INT64_MIN;
	static int64_t x396 = 7789550143234LL;
	static volatile int64_t t98 = INT64_MIN;

    t98 = ((x393|x394)^(x395>x396));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	int16_t x399 = 693;
	int32_t x400 = -1;
	static volatile int32_t t99 = 0;

    t99 = ((x397|x398)^(x399>x400));

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 3421U;

    t100 = ((x401|x402)^(x403>x404));

    if (t100 != 7423) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	int8_t x407 = INT8_MIN;
	volatile uint64_t x408 = 3311946951937038300LLU;
	volatile uint64_t t101 = 182018168703073LLU;

    t101 = ((x405|x406)^(x407>x408));

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -2;
	int32_t x410 = 5519921;
	int16_t x411 = -112;
	uint16_t x412 = 42U;
	int32_t t102 = 19578;

    t102 = ((x409|x410)^(x411>x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -5LL;
	uint32_t x414 = 1655U;
	int8_t x415 = -1;
	volatile int32_t x416 = -1666;
	int64_t t103 = 110516275155423338LL;

    t103 = ((x413|x414)^(x415>x416));

    if (t103 != -2LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x417 = 13;
	uint32_t x418 = 64628801U;
	uint8_t x420 = 3U;
	uint32_t t104 = 199095192U;

    t104 = ((x417|x418)^(x419>x420));

    if (t104 != 64628813U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 48U;
	int8_t x422 = INT8_MIN;
	int64_t x423 = 29LL;
	volatile int8_t x424 = -1;
	int32_t t105 = 75482;

    t105 = ((x421|x422)^(x423>x424));

    if (t105 != -79) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = INT32_MIN;
	int32_t x426 = -2414;
	volatile uint8_t x427 = 14U;
	uint16_t x428 = 518U;
	volatile int32_t t106 = -37240560;

    t106 = ((x425|x426)^(x427>x428));

    if (t106 != -2414) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	static int32_t x431 = -1;
	int8_t x432 = INT8_MIN;
	static int64_t t107 = 932349998469LL;

    t107 = ((x429|x430)^(x431>x432));

    if (t107 != -2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x434 = UINT16_MAX;
	uint16_t x436 = 104U;
	volatile uint32_t t108 = 5U;

    t108 = ((x433|x434)^(x435>x436));

    if (t108 != 65534U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = -1;
	uint16_t x438 = 606U;
	int32_t x440 = INT32_MIN;
	int32_t t109 = 314568574;

    t109 = ((x437|x438)^(x439>x440));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	uint8_t x443 = 109U;
	int64_t x444 = -134748718687326LL;
	volatile int64_t t110 = 66LL;

    t110 = ((x441|x442)^(x443>x444));

    if (t110 != -2147483647LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 126U;
	int16_t x446 = -247;
	uint16_t x448 = 9U;
	static int32_t t111 = 517471;

    t111 = ((x445|x446)^(x447>x448));

    if (t111 != -129) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	static uint32_t x450 = UINT32_MAX;
	int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;

    t112 = ((x449|x450)^(x451>x452));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -1LL;
	int32_t x454 = INT32_MAX;
	int64_t x455 = INT64_MAX;
	int64_t x456 = -15881282485547LL;
	volatile int64_t t113 = 18LL;

    t113 = ((x453|x454)^(x455>x456));

    if (t113 != -2LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MAX;
	uint64_t x459 = UINT64_MAX;
	static uint32_t x460 = UINT32_MAX;
	uint64_t t114 = 157LLU;

    t114 = ((x457|x458)^(x459>x460));

    if (t114 != 2147483646LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	int32_t x463 = INT32_MIN;
	static int16_t x464 = 0;
	int32_t t115 = 260582816;

    t115 = ((x461|x462)^(x463>x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = 81U;
	int64_t x467 = INT64_MAX;
	int64_t x468 = 1053484739257600LL;
	volatile int32_t t116 = 181572118;

    t116 = ((x465|x466)^(x467>x468));

    if (t116 != -32688) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x469 = 4;
	int8_t x471 = 0;
	volatile int16_t x472 = INT16_MIN;
	static volatile int32_t t117 = -14;

    t117 = ((x469|x470)^(x471>x472));

    if (t117 != 65534) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 3484560344255276LLU;
	static uint64_t x474 = 25194444496089LLU;
	uint8_t x475 = UINT8_MAX;
	static uint8_t x476 = UINT8_MAX;
	volatile uint64_t t118 = 168LLU;

    t118 = ((x473|x474)^(x475>x476));

    if (t118 != 3509617190412285LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int32_t x478 = INT32_MAX;
	volatile uint64_t x479 = 29783LLU;
	volatile int32_t t119 = -165241;

    t119 = ((x477|x478)^(x479>x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	uint8_t x482 = 12U;
	uint8_t x483 = UINT8_MAX;
	uint16_t x484 = 3864U;

    t120 = ((x481|x482)^(x483>x484));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = 5;
	volatile int16_t x486 = INT16_MAX;
	uint8_t x487 = 16U;
	volatile int32_t t121 = 241843;

    t121 = ((x485|x486)^(x487>x488));

    if (t121 != 32766) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MAX;
	static int8_t x491 = -18;
	int8_t x492 = 12;

    t122 = ((x489|x490)^(x491>x492));

    if (t122 != -32641) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 50U;
	volatile int8_t x494 = 0;
	volatile uint64_t x495 = 76561105103879128LLU;
	volatile int8_t x496 = 0;
	volatile int32_t t123 = -3451;

    t123 = ((x493|x494)^(x495>x496));

    if (t123 != 51) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -1;
	volatile uint64_t x499 = UINT64_MAX;
	int32_t x500 = -279;

    t124 = ((x497|x498)^(x499>x500));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x501 = 37U;
	int8_t x503 = 47;

    t125 = ((x501|x502)^(x503>x504));

    if (t125 != 126LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = 16347U;
	volatile int16_t x506 = -228;
	static int32_t t126 = -143724843;

    t126 = ((x505|x506)^(x507>x508));

    if (t126 != -34) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = -1;
	volatile uint64_t x510 = 3346349LLU;
	int64_t x511 = INT64_MIN;
	static int8_t x512 = INT8_MIN;
	uint64_t t127 = UINT64_MAX;

    t127 = ((x509|x510)^(x511>x512));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x514 = 694U;
	int32_t x515 = INT32_MAX;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t128 = 27995636037553LLU;

    t128 = ((x513|x514)^(x515>x516));

    if (t128 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int8_t x518 = INT8_MAX;

    t129 = ((x517|x518)^(x519>x520));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	int16_t x522 = -6;
	int32_t x524 = INT32_MAX;
	volatile int32_t t130 = -704;

    t130 = ((x521|x522)^(x523>x524));

    if (t130 != -6) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = -1;
	int32_t x526 = INT32_MIN;
	uint16_t x527 = 2U;
	volatile uint64_t x528 = 475696LLU;

    t131 = ((x525|x526)^(x527>x528));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	static volatile uint16_t x530 = 199U;
	int64_t x532 = INT64_MIN;
	static int32_t t132 = 146801603;

    t132 = ((x529|x530)^(x531>x532));

    if (t132 != -58) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	static int8_t x534 = INT8_MIN;
	volatile uint32_t x535 = 4662747U;

    t133 = ((x533|x534)^(x535>x536));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MAX;
	static int8_t x538 = INT8_MIN;
	int64_t x539 = -1LL;
	static volatile uint16_t x540 = 397U;
	volatile int32_t t134 = -1352;

    t134 = ((x537|x538)^(x539>x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = INT16_MIN;
	int32_t x543 = INT32_MIN;
	static uint16_t x544 = 1481U;
	int32_t t135 = 13920501;

    t135 = ((x541|x542)^(x543>x544));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x546 = 2U;
	static uint32_t x547 = 31193782U;
	volatile uint16_t x548 = 2U;
	volatile uint32_t t136 = 1970U;

    t136 = ((x545|x546)^(x547>x548));

    if (t136 != 881370U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 0;
	int32_t x550 = INT32_MIN;
	uint16_t x551 = UINT16_MAX;
	uint8_t x552 = 0U;

    t137 = ((x549|x550)^(x551>x552));

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = 190U;
	int64_t x555 = -1LL;
	uint32_t x556 = UINT32_MAX;
	static int32_t t138 = 5575;

    t138 = ((x553|x554)^(x555>x556));

    if (t138 != -32578) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	uint8_t x558 = UINT8_MAX;
	volatile int64_t x559 = -1LL;
	static int64_t x560 = INT64_MIN;
	volatile uint64_t t139 = 3LLU;

    t139 = ((x557|x558)^(x559>x560));

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 91455664LLU;
	static volatile uint32_t x562 = UINT32_MAX;
	uint8_t x563 = UINT8_MAX;
	int16_t x564 = INT16_MAX;

    t140 = ((x561|x562)^(x563>x564));

    if (t140 != 4294967295LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = INT64_MIN;
	static int64_t x566 = -1LL;
	int64_t x567 = -1LL;
	int8_t x568 = 38;
	int64_t t141 = 281173658453898LL;

    t141 = ((x565|x566)^(x567>x568));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = -1;
	uint32_t x571 = 160255U;
	volatile int64_t x572 = -3425LL;
	int64_t t142 = -1664325LL;

    t142 = ((x569|x570)^(x571>x572));

    if (t142 != -2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = -1;
	volatile int16_t x574 = INT16_MIN;
	static uint8_t x576 = 17U;

    t143 = ((x573|x574)^(x575>x576));

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x578 = -1201;
	static volatile int64_t x579 = INT64_MAX;
	int64_t x580 = INT64_MIN;
	volatile int64_t t144 = 9425564LL;

    t144 = ((x577|x578)^(x579>x580));

    if (t144 != -1186LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = UINT32_MAX;
	uint16_t x583 = UINT16_MAX;
	static uint8_t x584 = UINT8_MAX;
	volatile uint32_t t145 = 15U;

    t145 = ((x581|x582)^(x583>x584));

    if (t145 != 4294967294U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MAX;
	int64_t x586 = INT64_MAX;
	uint32_t x587 = 28774U;
	static int64_t t146 = -135LL;

    t146 = ((x585|x586)^(x587>x588));

    if (t146 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -3;
	static int64_t x591 = INT64_MIN;
	int8_t x592 = 1;
	static uint64_t t147 = 2684LLU;

    t147 = ((x589|x590)^(x591>x592));

    if (t147 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x594 = UINT32_MAX;
	volatile int8_t x596 = INT8_MIN;
	uint32_t t148 = 271U;

    t148 = ((x593|x594)^(x595>x596));

    if (t148 != 4294967294U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x598 = 88U;
	uint16_t x599 = 0U;
	int64_t x600 = 6293937LL;
	volatile uint32_t t149 = 6764U;

    t149 = ((x597|x598)^(x599>x600));

    if (t149 != 93U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	volatile int64_t x602 = -1LL;
	static volatile int64_t t150 = -3929371LL;

    t150 = ((x601|x602)^(x603>x604));

    if (t150 != -2LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	static int16_t x606 = -43;
	int32_t x607 = -167866570;
	int32_t x608 = INT32_MAX;
	int32_t t151 = -23466048;

    t151 = ((x605|x606)^(x607>x608));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	static uint32_t x611 = 1942551U;
	uint32_t x612 = 38411468U;
	int32_t t152 = INT32_MAX;

    t152 = ((x609|x610)^(x611>x612));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x613 = INT8_MIN;
	int32_t x614 = 1285349;
	volatile uint8_t x615 = 0U;
	volatile int32_t t153 = 1976954;

    t153 = ((x613|x614)^(x615>x616));

    if (t153 != -27) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -22;
	int32_t x618 = INT32_MIN;
	static int64_t x619 = -1LL;
	int16_t x620 = -3;
	volatile int32_t t154 = -3;

    t154 = ((x617|x618)^(x619>x620));

    if (t154 != -21) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	static int16_t x624 = 0;
	static int32_t t155 = -10002;

    t155 = ((x621|x622)^(x623>x624));

    if (t155 != -6422) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint32_t x626 = 3U;
	int64_t x627 = INT64_MIN;
	uint32_t t156 = 2U;

    t156 = ((x625|x626)^(x627>x628));

    if (t156 != 2147483651U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	static int16_t x630 = INT16_MAX;
	uint16_t x631 = UINT16_MAX;
	volatile uint64_t x632 = 1956193556680251420LLU;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = ((x629|x630)^(x631>x632));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	int32_t x634 = -1;
	int8_t x635 = INT8_MIN;
	uint32_t x636 = UINT32_MAX;
	int32_t t158 = 0;

    t158 = ((x633|x634)^(x635>x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = UINT32_MAX;
	int16_t x638 = INT16_MIN;
	volatile int64_t x640 = INT64_MAX;
	uint32_t t159 = 658801U;

    t159 = ((x637|x638)^(x639>x640));

    if (t159 != 4294967294U) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = INT16_MAX;
	uint16_t x642 = 587U;
	uint64_t x644 = 0LLU;
	volatile int32_t t160 = -603313117;

    t160 = ((x641|x642)^(x643>x644));

    if (t160 != 32766) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int64_t x646 = 81487075042LL;
	uint8_t x647 = 112U;
	int32_t x648 = INT32_MIN;
	static int64_t t161 = 616LL;

    t161 = ((x645|x646)^(x647>x648));

    if (t161 != -9223371955367700765LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	volatile int32_t x651 = INT32_MIN;
	uint64_t x652 = UINT64_MAX;
	static int64_t t162 = -685506928LL;

    t162 = ((x649|x650)^(x651>x652));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	static volatile uint32_t x654 = 125021764U;
	uint32_t t163 = UINT32_MAX;

    t163 = ((x653|x654)^(x655>x656));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = INT32_MIN;
	uint64_t x659 = UINT64_MAX;
	static uint16_t x660 = 28U;
	int64_t t164 = -1238350178615LL;

    t164 = ((x657|x658)^(x659>x660));

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = 10U;
	volatile int8_t x663 = -1;
	uint32_t x664 = 166U;
	volatile int32_t t165 = 80440;

    t165 = ((x661|x662)^(x663>x664));

    if (t165 != 59) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x665 = -1;
	volatile int32_t x666 = 9553899;
	int16_t x667 = -7479;
	int64_t x668 = INT64_MIN;
	volatile int32_t t166 = -208447281;

    t166 = ((x665|x666)^(x667>x668));

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	volatile int32_t x670 = INT32_MIN;
	static int8_t x671 = INT8_MIN;
	volatile int64_t x672 = INT64_MIN;
	volatile int32_t t167 = -139325;

    t167 = ((x669|x670)^(x671>x672));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = UINT32_MAX;
	int32_t x674 = 255;
	int16_t x676 = INT16_MIN;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = ((x673|x674)^(x675>x676));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 3719LL;
	volatile int64_t x679 = -1LL;
	int8_t x680 = 9;
	volatile int64_t t169 = -60409LL;

    t169 = ((x677|x678)^(x679>x680));

    if (t169 != -121LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 4465245LLU;
	static int64_t x683 = INT64_MAX;
	int16_t x684 = INT16_MIN;
	volatile uint64_t t170 = 131369906311LLU;

    t170 = ((x681|x682)^(x683>x684));

    if (t170 != 4465628LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	volatile uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	uint16_t x688 = UINT16_MAX;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = ((x685|x686)^(x687>x688));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 504;
	int32_t x690 = INT32_MIN;
	int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	int32_t t172 = -28;

    t172 = ((x689|x690)^(x691>x692));

    if (t172 != -2147483144) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = 841469;
	volatile uint64_t t173 = 4534833443760LLU;

    t173 = ((x693|x694)^(x695>x696));

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	uint8_t x698 = 24U;
	int8_t x699 = 2;
	int32_t x700 = -1725453;

    t174 = ((x697|x698)^(x699>x700));

    if (t174 != -103) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = 8U;
	int8_t x702 = -18;
	int8_t x703 = -1;
	int32_t x704 = -10001075;

    t175 = ((x701|x702)^(x703>x704));

    if (t175 != 4294967279U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 110U;
	uint8_t x706 = 11U;
	int8_t x707 = INT8_MIN;
	static int8_t x708 = INT8_MIN;
	int32_t t176 = -186979;

    t176 = ((x705|x706)^(x707>x708));

    if (t176 != 111) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = -3654;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = 12504375;
	volatile int64_t t177 = -368716030762111575LL;

    t177 = ((x709|x710)^(x711>x712));

    if (t177 != -3654LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static volatile uint8_t x715 = 1U;
	int32_t x716 = -1;
	static volatile int32_t t178 = -3;

    t178 = ((x713|x714)^(x715>x716));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = INT8_MIN;
	static volatile uint16_t x719 = UINT16_MAX;
	volatile uint8_t x720 = UINT8_MAX;
	volatile uint64_t t179 = 131LLU;

    t179 = ((x717|x718)^(x719>x720));

    if (t179 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	volatile uint8_t x722 = 4U;
	volatile int32_t x723 = 62167;
	volatile uint64_t t180 = 9620LLU;

    t180 = ((x721|x722)^(x723>x724));

    if (t180 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = -1LL;
	volatile uint64_t x726 = 54LLU;
	int64_t x727 = INT64_MIN;

    t181 = ((x725|x726)^(x727>x728));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x729 = 2U;
	int32_t x730 = INT32_MAX;
	int32_t x731 = 14017;
	uint8_t x732 = 4U;
	volatile int32_t t182 = 824;

    t182 = ((x729|x730)^(x731>x732));

    if (t182 != 2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	volatile int32_t x734 = -456;
	int32_t x735 = -144153;
	volatile int64_t x736 = 102566352LL;
	static volatile int32_t t183 = -900;

    t183 = ((x733|x734)^(x735>x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	volatile int64_t x738 = -1LL;
	static uint16_t x739 = UINT16_MAX;
	int64_t x740 = INT64_MIN;

    t184 = ((x737|x738)^(x739>x740));

    if (t184 != -2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x742 = 79U;
	int64_t x743 = INT64_MIN;
	int16_t x744 = -2;

    t185 = ((x741|x742)^(x743>x744));

    if (t185 != 2147483727U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	volatile uint64_t x746 = 218345497LLU;
	uint32_t x747 = 1349516254U;
	volatile uint32_t x748 = 0U;
	volatile uint64_t t186 = 81253944490700LLU;

    t186 = ((x745|x746)^(x747>x748));

    if (t186 != 18446744073709531160LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 106;
	volatile int64_t x750 = INT64_MIN;
	uint64_t x751 = UINT64_MAX;
	int16_t x752 = 0;

    t187 = ((x749|x750)^(x751>x752));

    if (t187 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x755 = INT16_MAX;
	int64_t x756 = 3779505381181LL;
	static int32_t t188 = 59119781;

    t188 = ((x753|x754)^(x755>x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MAX;
	static int64_t x758 = -940479503957LL;
	int64_t x759 = INT64_MIN;
	int16_t x760 = -590;

    t189 = ((x757|x758)^(x759>x760));

    if (t189 != -940479503873LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MAX;
	uint8_t x762 = UINT8_MAX;
	static int16_t x763 = INT16_MIN;

    t190 = ((x761|x762)^(x763>x764));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x766 = 203353928U;
	int16_t x767 = INT16_MIN;
	static volatile uint32_t t191 = 1668373U;

    t191 = ((x765|x766)^(x767>x768));

    if (t191 != 203354095U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = -1LL;
	volatile int64_t t192 = -1620490137972005LL;

    t192 = ((x769|x770)^(x771>x772));

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	static volatile int32_t x775 = 488344;
	static int16_t x776 = -1;
	int64_t t193 = 27718990671LL;

    t193 = ((x773|x774)^(x775>x776));

    if (t193 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x778 = 11258051LLU;
	volatile int8_t x780 = 0;
	uint64_t t194 = 3716778905263860LLU;

    t194 = ((x777|x778)^(x779>x780));

    if (t194 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x781 = 970962095213347096LLU;
	static int8_t x782 = -2;
	int32_t x783 = 18801;
	volatile uint64_t x784 = UINT64_MAX;
	static volatile uint64_t t195 = 52679585LLU;

    t195 = ((x781|x782)^(x783>x784));

    if (t195 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int8_t x786 = -1;
	int64_t x787 = -1LL;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 1;

    t196 = ((x785|x786)^(x787>x788));

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	volatile int16_t x791 = INT16_MIN;
	volatile uint16_t x792 = 5U;
	int32_t t197 = 1;

    t197 = ((x789|x790)^(x791>x792));

    if (t197 != -2147483521) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = 1812;
	static uint8_t x795 = UINT8_MAX;
	uint32_t x796 = 192957U;
	static uint32_t t198 = 29099324U;

    t198 = ((x793|x794)^(x795>x796));

    if (t198 != 1812U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = -464;
	volatile uint8_t x798 = UINT8_MAX;
	volatile int64_t x799 = INT64_MIN;
	static int32_t x800 = INT32_MAX;

    t199 = ((x797|x798)^(x799>x800));

    if (t199 != -257) { NG(); } else { ; }
	
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

