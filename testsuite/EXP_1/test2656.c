
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

static int16_t x2 = -2;
uint64_t x3 = 231LLU;
static int16_t x5 = 2775;
static int16_t x8 = INT16_MAX;
int64_t x9 = 863955711680659171LL;
volatile int32_t t2 = -10410;
int16_t x13 = INT16_MIN;
uint32_t x24 = 8134828U;
int8_t x25 = INT8_MIN;
int32_t t8 = -515466136;
int32_t x44 = INT32_MIN;
uint64_t x46 = 893271540623LLU;
static int64_t x54 = INT64_MAX;
volatile int32_t x59 = INT32_MIN;
static int16_t x63 = -1;
volatile int32_t t15 = 13;
static uint64_t x72 = 1610137563497444323LLU;
uint8_t x74 = 20U;
int64_t x76 = INT64_MIN;
int32_t t19 = -68676;
uint64_t x83 = 11882LLU;
int32_t x106 = 168387930;
static int16_t x115 = -1;
uint64_t x118 = 3512451473330391412LLU;
uint32_t x123 = UINT32_MAX;
uint8_t x124 = 5U;
int64_t x125 = -13678862997LL;
volatile int8_t x126 = 22;
volatile int16_t x129 = -1;
uint32_t x131 = UINT32_MAX;
int64_t x147 = INT64_MAX;
static volatile uint8_t x151 = 1U;
int32_t x159 = INT32_MIN;
int8_t x162 = INT8_MAX;
uint8_t x166 = UINT8_MAX;
int16_t x169 = 14;
int64_t x171 = INT64_MIN;
int8_t x174 = INT8_MIN;
static uint16_t x175 = 2U;
int32_t x176 = -10458;
int32_t t43 = 4913;
int32_t x177 = INT32_MIN;
int16_t x186 = INT16_MIN;
static uint16_t x187 = UINT16_MAX;
volatile uint16_t x191 = 12U;
static volatile int8_t x197 = -3;
static uint8_t x198 = 0U;
int64_t x203 = -174625LL;
int64_t x212 = -1LL;
volatile int64_t x214 = -19861406828LL;
volatile int32_t t53 = -514;
int32_t t54 = 1;
uint64_t x241 = UINT64_MAX;
uint8_t x247 = 0U;
int8_t x249 = INT8_MAX;
int64_t x250 = INT64_MAX;
static volatile int8_t x260 = 0;
volatile uint8_t x261 = 22U;
static int64_t x266 = 74381268655LL;
int16_t x268 = INT16_MAX;
int8_t x273 = 1;
volatile int32_t t68 = -252;
volatile int8_t x278 = INT8_MIN;
volatile int32_t t69 = -795310;
int64_t x286 = 2708335740LL;
int64_t x287 = INT64_MIN;
int32_t t72 = -92;
static int32_t x297 = INT32_MAX;
int32_t x300 = INT32_MIN;
int8_t x307 = 0;
volatile int32_t t76 = 75584;
int32_t x310 = 0;
int32_t x316 = INT32_MIN;
int64_t x321 = INT64_MIN;
static uint8_t x323 = 24U;
volatile uint8_t x331 = 4U;
uint64_t x334 = 9LLU;
static int32_t t83 = 182102418;
volatile uint64_t x345 = UINT64_MAX;
uint16_t x354 = 30312U;
int16_t x355 = 737;
uint8_t x356 = 22U;
uint8_t x357 = UINT8_MAX;
int32_t x361 = -1;
uint32_t x366 = 6U;
static int32_t x370 = INT32_MIN;
int64_t x375 = 49010499LL;
int16_t x377 = INT16_MIN;
int16_t x379 = -1;
static int64_t x381 = -43LL;
static volatile uint16_t x385 = UINT16_MAX;
volatile uint16_t x388 = 16602U;
static uint64_t x395 = UINT64_MAX;
int32_t t99 = -234658848;
static int32_t x401 = INT32_MIN;
uint16_t x402 = UINT16_MAX;
volatile uint32_t x403 = 24U;
int64_t x413 = INT64_MIN;
volatile int32_t x421 = 41146;
volatile int16_t x426 = -1;
uint32_t x430 = 83813364U;
volatile int8_t x431 = INT8_MIN;
int64_t x443 = -60772934343LL;
uint32_t x447 = UINT32_MAX;
volatile int32_t t116 = 31049838;
static int8_t x476 = INT8_MIN;
volatile uint16_t x478 = UINT16_MAX;
int8_t x482 = INT8_MIN;
int16_t x492 = -16311;
uint32_t x504 = 5U;
int64_t x507 = -1LL;
int8_t x508 = -2;
uint32_t x516 = 117195904U;
int32_t x517 = -1;
int32_t x518 = -1;
int64_t x524 = INT64_MAX;
int8_t x533 = 1;
int16_t x539 = -1;
volatile uint16_t x542 = 0U;
volatile int32_t x546 = -1;
volatile uint32_t x549 = 247044U;
int16_t x550 = 0;
int64_t x553 = INT64_MIN;
volatile int8_t x559 = INT8_MIN;
int32_t x562 = INT32_MIN;
uint8_t x566 = UINT8_MAX;
static int32_t x569 = -1;
static int16_t x570 = INT16_MAX;
static int8_t x578 = -5;
int64_t x579 = INT64_MIN;
uint64_t x582 = UINT64_MAX;
uint32_t x586 = 107068125U;
volatile int32_t x590 = 99;
int8_t x593 = -1;
uint8_t x594 = UINT8_MAX;
int32_t t148 = 30590;
int32_t x599 = INT32_MIN;
int8_t x600 = -1;
static volatile uint16_t x605 = 3U;
volatile int32_t t152 = -1;
int16_t x613 = INT16_MIN;
static int32_t x618 = -1;
static volatile int64_t x620 = INT64_MAX;
int32_t x624 = INT32_MIN;
int32_t x625 = 134;
volatile int64_t x632 = INT64_MIN;
static volatile int32_t x641 = 32;
static uint16_t x649 = 29U;
static int16_t x650 = -1;
int8_t x651 = INT8_MAX;
volatile int32_t t162 = 26909;
static int32_t x657 = -418;
int32_t t165 = -839371296;
volatile int8_t x666 = -1;
volatile int8_t x672 = 25;
volatile int32_t x676 = INT32_MAX;
static int16_t x681 = INT16_MAX;
static int32_t x683 = -59851;
volatile uint16_t x684 = 52U;
volatile int64_t x689 = -142574299460762LL;
static uint16_t x690 = 7U;
int32_t x707 = INT32_MIN;
uint64_t x710 = 7629061336711LLU;
int8_t x712 = INT8_MIN;
int32_t t177 = -1;
int64_t x713 = -1LL;
int32_t x715 = -1;
uint32_t x716 = UINT32_MAX;
volatile int32_t t178 = -33026581;
static int16_t x719 = 4529;
volatile int8_t x722 = INT8_MIN;
int64_t x726 = INT64_MAX;
volatile int32_t t181 = 2027986;
int16_t x732 = INT16_MIN;
static volatile int32_t t182 = 995;
static int64_t x737 = INT64_MIN;
uint32_t x738 = 0U;
volatile int32_t x739 = -1;
static int64_t x743 = INT64_MAX;
volatile uint8_t x744 = 69U;
int32_t t186 = 14361056;
int32_t x753 = -510546;
static volatile int16_t x756 = 1;
int64_t x758 = INT64_MAX;
int16_t x760 = 1;
int8_t x768 = INT8_MIN;
int16_t x778 = 11;
volatile int32_t t194 = 39974;
static uint8_t x782 = 6U;
int16_t x788 = INT16_MIN;
int32_t x795 = INT32_MIN;
int16_t x800 = -1;


void f0(void) {
    	static uint16_t x1 = 7743U;
	int8_t x4 = 0;
	static volatile int32_t t0 = -519766;

    t0 = (((x1^x2)==x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = UINT32_MAX;
	volatile int32_t x7 = INT32_MIN;
	static volatile int32_t t1 = -48;

    t1 = (((x5^x6)==x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	volatile uint8_t x11 = 2U;
	int64_t x12 = INT64_MIN;

    t2 = (((x9^x10)==x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1;
	volatile int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -62522;

    t3 = (((x13^x14)==x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = -7631;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -10611236;

    t4 = (((x17^x18)==x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1601329LLU;
	static int16_t x22 = -84;
	uint64_t x23 = 10457232670809LLU;
	int32_t t5 = 0;

    t5 = (((x21^x22)==x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = 4;
	uint32_t x27 = 1U;
	volatile int64_t x28 = INT64_MIN;
	int32_t t6 = -3;

    t6 = (((x25^x26)==x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	uint32_t x30 = 24U;
	uint8_t x31 = 24U;
	static volatile int8_t x32 = INT8_MIN;
	int32_t t7 = 165260860;

    t7 = (((x29^x30)==x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 231;
	volatile uint8_t x34 = UINT8_MAX;
	volatile int16_t x35 = -3;
	static int64_t x36 = -1LL;

    t8 = (((x33^x34)==x35)<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x37 = INT32_MAX;
	uint16_t x38 = 90U;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 430133U;
	volatile int32_t t9 = -770465;

    t9 = (((x37^x38)==x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int64_t x42 = -1LL;
	volatile int32_t x43 = INT32_MIN;
	volatile int32_t t10 = -16871;

    t10 = (((x41^x42)==x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 855160U;
	int32_t x47 = -53517161;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 586809;

    t11 = (((x45^x46)==x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint32_t x50 = 2U;
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = -1;
	int32_t t12 = 389038;

    t12 = (((x49^x50)==x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x53 = UINT8_MAX;
	static uint64_t x55 = 99214720774217LLU;
	int32_t x56 = -32222746;
	int32_t t13 = 241;

    t13 = (((x53^x54)==x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 4U;
	int8_t x58 = INT8_MAX;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -42765;

    t14 = (((x57^x58)==x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MAX;
	int64_t x64 = -1LL;

    t15 = (((x61^x62)==x63)<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 27U;
	static int8_t x66 = 0;
	volatile uint32_t x67 = UINT32_MAX;
	static int8_t x68 = -1;
	int32_t t16 = 97043128;

    t16 = (((x65^x66)==x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 1582410946LL;
	static int32_t x70 = -680;
	volatile int16_t x71 = -1;
	int32_t t17 = 12218297;

    t17 = (((x69^x70)==x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MIN;
	int32_t x75 = -1;
	int32_t t18 = 0;

    t18 = (((x73^x74)==x75)<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x78 = -1;
	int64_t x79 = 69505232248LL;
	int8_t x80 = -1;

    t19 = (((x77^x78)==x79)<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = 12;
	int64_t x82 = INT64_MIN;
	volatile int64_t x84 = INT64_MAX;
	int32_t t20 = 247718;

    t20 = (((x81^x82)==x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint32_t x88 = 142857U;
	volatile int32_t t21 = -741904084;

    t21 = (((x85^x86)==x87)<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = 57134639;
	volatile uint32_t x90 = 1671969940U;
	uint8_t x91 = 44U;
	uint8_t x92 = 118U;
	int32_t t22 = -215557;

    t22 = (((x89^x90)==x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -1;
	int64_t x94 = -50LL;
	static int32_t x95 = 6;
	static int16_t x96 = -1;
	volatile int32_t t23 = -26;

    t23 = (((x93^x94)==x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -22;
	int64_t x98 = -1LL;
	int64_t x99 = INT64_MAX;
	volatile int32_t x100 = INT32_MAX;
	static volatile int32_t t24 = -63318775;

    t24 = (((x97^x98)==x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = 160;
	int8_t x102 = INT8_MAX;
	static uint8_t x103 = 0U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = 11;

    t25 = (((x101^x102)==x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -574395;
	uint64_t x107 = 208554841044LLU;
	uint16_t x108 = 16028U;
	static int32_t t26 = -366626;

    t26 = (((x105^x106)==x107)<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	int8_t x110 = INT8_MIN;
	int16_t x111 = 4;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = -262;

    t27 = (((x109^x110)==x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 329;
	uint64_t x114 = 245607586019160LLU;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 658607502;

    t28 = (((x113^x114)==x115)<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 2028;
	static int32_t x119 = INT32_MIN;
	int32_t x120 = 887;
	int32_t t29 = 36249475;

    t29 = (((x117^x118)==x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 68U;
	int16_t x122 = INT16_MAX;
	int32_t t30 = -1342123;

    t30 = (((x121^x122)==x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x127 = 104U;
	static int32_t x128 = -1;
	volatile int32_t t31 = -47;

    t31 = (((x125^x126)==x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -13;
	int16_t x132 = 6631;
	static int32_t t32 = 151410;

    t32 = (((x129^x130)==x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = 28;
	uint8_t x134 = UINT8_MAX;
	static int8_t x135 = INT8_MAX;
	int16_t x136 = -6;
	volatile int32_t t33 = 2;

    t33 = (((x133^x134)==x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 1261LLU;
	int8_t x138 = -7;
	volatile int8_t x139 = INT8_MAX;
	int64_t x140 = -1LL;
	int32_t t34 = 0;

    t34 = (((x137^x138)==x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -2107098023080LL;
	int64_t x142 = INT64_MIN;
	static volatile uint16_t x143 = 8788U;
	uint64_t x144 = 13488151029LLU;
	volatile int32_t t35 = -55837451;

    t35 = (((x141^x142)==x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -1LL;
	uint8_t x146 = UINT8_MAX;
	static uint64_t x148 = 228LLU;
	volatile int32_t t36 = -31773889;

    t36 = (((x145^x146)==x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MAX;
	volatile uint64_t x152 = 16739726515LLU;
	volatile int32_t t37 = -175;

    t37 = (((x149^x150)==x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = 138898U;
	int32_t x154 = 6;
	int8_t x155 = INT8_MIN;
	int8_t x156 = 0;
	volatile int32_t t38 = 1167;

    t38 = (((x153^x154)==x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	uint64_t x158 = 5161898253098079LLU;
	int16_t x160 = 1967;
	volatile int32_t t39 = 10891;

    t39 = (((x157^x158)==x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	volatile int16_t x163 = -1;
	int64_t x164 = -1LL;
	static int32_t t40 = -844;

    t40 = (((x161^x162)==x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MIN;
	volatile int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	static int32_t t41 = 42;

    t41 = (((x165^x166)==x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = -1;
	int32_t x172 = 161095;
	int32_t t42 = -86;

    t42 = (((x169^x170)==x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -1;

    t43 = (((x173^x174)==x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = UINT32_MAX;
	static uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = -4;

    t44 = (((x177^x178)==x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 6U;
	int8_t x182 = 0;
	int64_t x183 = -1LL;
	volatile int8_t x184 = -1;
	volatile int32_t t45 = 317929;

    t45 = (((x181^x182)==x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	static uint8_t x188 = 31U;
	static volatile int32_t t46 = 1;

    t46 = (((x185^x186)==x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = -12;
	int64_t x190 = 22657LL;
	uint8_t x192 = 3U;
	int32_t t47 = 10;

    t47 = (((x189^x190)==x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	int64_t x194 = -1LL;
	volatile int32_t x195 = 2;
	volatile int32_t x196 = 9407;
	volatile int32_t t48 = -9305429;

    t48 = (((x193^x194)==x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x199 = INT64_MAX;
	volatile int32_t x200 = -176696897;
	int32_t t49 = -29;

    t49 = (((x197^x198)==x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 1588LLU;
	int16_t x202 = -1;
	static int8_t x204 = -1;
	volatile int32_t t50 = 2482291;

    t50 = (((x201^x202)==x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 1U;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = -1958305879054117LL;
	static uint16_t x208 = 6195U;
	volatile int32_t t51 = 495;

    t51 = (((x205^x206)==x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	int64_t x210 = -1LL;
	static int32_t x211 = 32030;
	volatile int32_t t52 = -49;

    t52 = (((x209^x210)==x211)<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -2;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;

    t53 = (((x213^x214)==x215)<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 92423654LLU;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = -2;

    t54 = (((x217^x218)==x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MAX;
	int64_t x222 = -385429486928737923LL;
	uint8_t x223 = 1U;
	static uint32_t x224 = UINT32_MAX;
	int32_t t55 = -28046179;

    t55 = (((x221^x222)==x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	static uint32_t x226 = UINT32_MAX;
	uint8_t x227 = 23U;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 6;

    t56 = (((x225^x226)==x227)<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	int8_t x230 = -7;
	uint32_t x231 = UINT32_MAX;
	uint32_t x232 = 65595U;
	volatile int32_t t57 = 23;

    t57 = (((x229^x230)==x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 4U;
	int64_t x234 = -7LL;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 9253353;

    t58 = (((x233^x234)==x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 991110670LL;
	static uint8_t x238 = UINT8_MAX;
	int16_t x239 = -1;
	static uint32_t x240 = 59257936U;
	int32_t t59 = -285667;

    t59 = (((x237^x238)==x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = 190545158;
	int64_t x243 = INT64_MIN;
	int16_t x244 = 1;
	static int32_t t60 = 11;

    t60 = (((x241^x242)==x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -10051LL;
	volatile int32_t x246 = INT32_MIN;
	static volatile int64_t x248 = INT64_MIN;
	static int32_t t61 = 1;

    t61 = (((x245^x246)==x247)<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x251 = 153U;
	volatile int64_t x252 = INT64_MIN;
	static int32_t t62 = -33459;

    t62 = (((x249^x250)==x251)<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = -1;
	volatile int8_t x256 = 0;
	int32_t t63 = -2;

    t63 = (((x253^x254)==x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 233U;
	static uint64_t x258 = 14946LLU;
	uint32_t x259 = 430349892U;
	volatile int32_t t64 = -35030890;

    t64 = (((x257^x258)==x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = -2777;
	int8_t x263 = INT8_MAX;
	volatile int32_t x264 = 2314;
	int32_t t65 = 19552;

    t65 = (((x261^x262)==x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = -1;
	uint8_t x267 = 1U;
	volatile int32_t t66 = 108;

    t66 = (((x265^x266)==x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -1LL;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	int32_t x272 = 36;
	volatile int32_t t67 = -7319;

    t67 = (((x269^x270)==x271)<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = 89271007314087343LL;
	int8_t x275 = INT8_MAX;
	int8_t x276 = -11;

    t68 = (((x273^x274)==x275)<=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 1800U;
	static uint16_t x279 = 44U;
	uint16_t x280 = 28300U;

    t69 = (((x277^x278)==x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int64_t x282 = -1LL;
	int32_t x283 = -147828;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 2085767;

    t70 = (((x281^x282)==x283)<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 81U;
	int8_t x288 = 6;
	volatile int32_t t71 = 8313304;

    t71 = (((x285^x286)==x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 509768842079LLU;
	int16_t x290 = INT16_MAX;
	static volatile int8_t x291 = INT8_MAX;
	int64_t x292 = -2LL;

    t72 = (((x289^x290)==x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = UINT8_MAX;
	volatile uint64_t x294 = UINT64_MAX;
	int8_t x295 = 13;
	volatile uint16_t x296 = 1U;
	static volatile int32_t t73 = -4309363;

    t73 = (((x293^x294)==x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = -306;
	volatile int8_t x299 = 14;
	volatile int32_t t74 = -237650;

    t74 = (((x297^x298)==x299)<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint32_t x302 = UINT32_MAX;
	volatile uint64_t x303 = 7078090888762246LLU;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = 14627694;

    t75 = (((x301^x302)==x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MIN;
	uint32_t x308 = 76716U;

    t76 = (((x305^x306)==x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	static int64_t x311 = -1LL;
	volatile uint8_t x312 = 19U;
	int32_t t77 = -2008;

    t77 = (((x309^x310)==x311)<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -2;
	uint32_t x314 = 6224U;
	static volatile int16_t x315 = INT16_MIN;
	volatile int32_t t78 = -4848359;

    t78 = (((x313^x314)==x315)<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint16_t x318 = 30U;
	int16_t x319 = 767;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 3221;

    t79 = (((x317^x318)==x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x322 = 3U;
	static uint32_t x324 = 25U;
	volatile int32_t t80 = -909453311;

    t80 = (((x321^x322)==x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = -1;
	uint16_t x327 = 1U;
	int16_t x328 = INT16_MAX;
	int32_t t81 = -12591;

    t81 = (((x325^x326)==x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x332 = -1176984421516LL;
	volatile int32_t t82 = -108056;

    t82 = (((x329^x330)==x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = 96;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 129841455LLU;

    t83 = (((x333^x334)==x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = 2;
	int32_t x338 = INT32_MAX;
	int64_t x339 = INT64_MAX;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -253063;

    t84 = (((x337^x338)==x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = INT16_MIN;
	uint8_t x342 = 14U;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 25U;
	int32_t t85 = -314;

    t85 = (((x341^x342)==x343)<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = UINT64_MAX;
	int32_t x347 = 1756194;
	volatile int64_t x348 = -1LL;
	static volatile int32_t t86 = 777070481;

    t86 = (((x345^x346)==x347)<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = 624450498673603809LLU;
	uint32_t x350 = 0U;
	volatile uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 5U;
	volatile int32_t t87 = -172017869;

    t87 = (((x349^x350)==x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MAX;
	volatile int32_t t88 = 3842029;

    t88 = (((x353^x354)==x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x358 = -1905;
	int16_t x359 = -1;
	uint32_t x360 = 1528U;
	volatile int32_t t89 = -63878029;

    t89 = (((x357^x358)==x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = UINT8_MAX;
	static volatile int32_t t90 = -9791;

    t90 = (((x361^x362)==x363)<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	uint32_t x367 = 2710U;
	static uint64_t x368 = 9224570329LLU;
	int32_t t91 = -29;

    t91 = (((x365^x366)==x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t92 = 1;

    t92 = (((x369^x370)==x371)<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MAX;
	int8_t x374 = -1;
	int32_t x376 = INT32_MAX;
	volatile int32_t t93 = 496199;

    t93 = (((x373^x374)==x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -1;
	int32_t x380 = INT32_MIN;
	int32_t t94 = -2444;

    t94 = (((x377^x378)==x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = -1;
	volatile uint8_t x383 = 3U;
	uint64_t x384 = 899LLU;
	volatile int32_t t95 = -261;

    t95 = (((x381^x382)==x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = INT16_MAX;
	int32_t x387 = 33061;
	int32_t t96 = -489;

    t96 = (((x385^x386)==x387)<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	int32_t x390 = INT32_MAX;
	volatile int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = -9;

    t97 = (((x389^x390)==x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -135057;

    t98 = (((x393^x394)==x395)<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 1255625396U;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MIN;
	int32_t x400 = 30204;

    t99 = (((x397^x398)==x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x404 = 1474241649843LLU;
	volatile int32_t t100 = -127896;

    t100 = (((x401^x402)==x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = 1401206433626292327LL;
	int8_t x406 = -1;
	static volatile int64_t x407 = -1624017331LL;
	int32_t x408 = INT32_MAX;
	static volatile int32_t t101 = 16369;

    t101 = (((x405^x406)==x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -2781;
	static int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	int32_t t102 = -4;

    t102 = (((x409^x410)==x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MAX;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = -247;

    t103 = (((x413^x414)==x415)<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 3864696512676LLU;
	int16_t x419 = INT16_MIN;
	volatile int64_t x420 = -1367LL;
	static int32_t t104 = -1789;

    t104 = (((x417^x418)==x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = -2145;
	volatile int64_t x423 = -2626LL;
	int16_t x424 = 25;
	volatile int32_t t105 = 7686055;

    t105 = (((x421^x422)==x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -55983080LL;
	int16_t x427 = INT16_MIN;
	int16_t x428 = -1;
	volatile int32_t t106 = 1371;

    t106 = (((x425^x426)==x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = UINT16_MAX;
	int64_t x432 = INT64_MAX;
	int32_t t107 = 5834252;

    t107 = (((x429^x430)==x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	static int32_t x434 = 33221378;
	volatile uint64_t x435 = 34416318247237382LLU;
	static volatile uint32_t x436 = 559U;
	static volatile int32_t t108 = 181364;

    t108 = (((x433^x434)==x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	uint16_t x439 = 3865U;
	int16_t x440 = -250;
	int32_t t109 = 250;

    t109 = (((x437^x438)==x439)<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -7513110980357LL;
	uint32_t x442 = UINT32_MAX;
	int16_t x444 = 0;
	static int32_t t110 = -62403;

    t110 = (((x441^x442)==x443)<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = INT16_MIN;
	uint16_t x446 = 0U;
	static int16_t x448 = -1;
	int32_t t111 = 113;

    t111 = (((x445^x446)==x447)<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MIN;
	int16_t x450 = -1;
	volatile int8_t x451 = -1;
	int8_t x452 = INT8_MIN;
	static int32_t t112 = 1;

    t112 = (((x449^x450)==x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	uint8_t x454 = 0U;
	static uint16_t x455 = 397U;
	uint32_t x456 = 11314U;
	int32_t t113 = 10;

    t113 = (((x453^x454)==x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -16;
	volatile int8_t x458 = INT8_MIN;
	volatile int16_t x459 = INT16_MIN;
	static uint64_t x460 = 112386435252212159LLU;
	volatile int32_t t114 = -1506;

    t114 = (((x457^x458)==x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 1739U;
	int8_t x462 = 2;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 1390317U;
	int32_t t115 = -116572776;

    t115 = (((x461^x462)==x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 1U;
	static uint16_t x466 = 1111U;
	volatile uint8_t x467 = UINT8_MAX;
	volatile uint64_t x468 = 13506135774LLU;

    t116 = (((x465^x466)==x467)<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	static int32_t x470 = 4246140;
	uint64_t x471 = 19441LLU;
	uint32_t x472 = UINT32_MAX;
	volatile int32_t t117 = 28436231;

    t117 = (((x469^x470)==x471)<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MIN;
	volatile uint32_t x475 = UINT32_MAX;
	volatile int32_t t118 = 291487514;

    t118 = (((x473^x474)==x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	static int32_t t119 = 1636;

    t119 = (((x477^x478)==x479)<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	static volatile int32_t x483 = INT32_MIN;
	volatile int32_t x484 = -1;
	int32_t t120 = 25;

    t120 = (((x481^x482)==x483)<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 3U;
	int64_t x486 = INT64_MIN;
	static volatile uint64_t x487 = UINT64_MAX;
	int16_t x488 = INT16_MAX;
	volatile int32_t t121 = 20766;

    t121 = (((x485^x486)==x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x490 = 562;
	int8_t x491 = INT8_MIN;
	volatile int32_t t122 = 84188849;

    t122 = (((x489^x490)==x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = 0U;
	int8_t x494 = INT8_MIN;
	uint32_t x495 = 626105417U;
	volatile uint32_t x496 = UINT32_MAX;
	int32_t t123 = -185583395;

    t123 = (((x493^x494)==x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -11051LL;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;
	int32_t x500 = 142;
	static int32_t t124 = 975415;

    t124 = (((x497^x498)==x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MAX;
	int32_t x502 = 291;
	int8_t x503 = 10;
	int32_t t125 = -1720;

    t125 = (((x501^x502)==x503)<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	uint8_t x506 = 66U;
	int32_t t126 = 2;

    t126 = (((x505^x506)==x507)<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	static int8_t x510 = -1;
	int16_t x511 = -1;
	uint16_t x512 = 3105U;
	int32_t t127 = -122143;

    t127 = (((x509^x510)==x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	static int16_t x514 = -50;
	int16_t x515 = INT16_MAX;
	int32_t t128 = -112;

    t128 = (((x513^x514)==x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x519 = -1;
	int8_t x520 = INT8_MIN;
	int32_t t129 = 20780510;

    t129 = (((x517^x518)==x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 771309U;
	int8_t x522 = INT8_MAX;
	int8_t x523 = -5;
	int32_t t130 = 150337480;

    t130 = (((x521^x522)==x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	uint8_t x526 = 2U;
	volatile int32_t x527 = INT32_MIN;
	uint16_t x528 = 19268U;
	int32_t t131 = 74;

    t131 = (((x525^x526)==x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 40U;
	uint8_t x530 = 0U;
	static int32_t x531 = -1;
	int32_t x532 = INT32_MIN;
	int32_t t132 = 1;

    t132 = (((x529^x530)==x531)<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = 62U;
	int8_t x535 = INT8_MIN;
	uint64_t x536 = 19387LLU;
	int32_t t133 = -13654970;

    t133 = (((x533^x534)==x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = -1LL;
	uint64_t x538 = 578172660465303931LLU;
	uint8_t x540 = 93U;
	volatile int32_t t134 = -158245;

    t134 = (((x537^x538)==x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = 375743341099746LLU;
	uint16_t x543 = UINT16_MAX;
	static int32_t x544 = -1;
	int32_t t135 = -1;

    t135 = (((x541^x542)==x543)<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 26U;
	static volatile int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MIN;
	int32_t t136 = -256075834;

    t136 = (((x545^x546)==x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = -187128144;

    t137 = (((x549^x550)==x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -1;
	static uint8_t x555 = 33U;
	uint32_t x556 = UINT32_MAX;
	int32_t t138 = -81580092;

    t138 = (((x553^x554)==x555)<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 3839245873270710076LL;
	uint8_t x558 = 1U;
	int8_t x560 = INT8_MAX;
	static int32_t t139 = 985;

    t139 = (((x557^x558)==x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = -1;
	int32_t x563 = INT32_MAX;
	int8_t x564 = -1;
	int32_t t140 = 1;

    t140 = (((x561^x562)==x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	int8_t x567 = 1;
	uint8_t x568 = 13U;
	int32_t t141 = 3773;

    t141 = (((x565^x566)==x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x571 = INT16_MAX;
	static int8_t x572 = 2;
	static int32_t t142 = 155705;

    t142 = (((x569^x570)==x571)<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 11U;
	volatile int8_t x574 = INT8_MAX;
	static int8_t x575 = INT8_MAX;
	int8_t x576 = INT8_MAX;
	int32_t t143 = 294001806;

    t143 = (((x573^x574)==x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MIN;
	static uint32_t x580 = 872921917U;
	int32_t t144 = 16288418;

    t144 = (((x577^x578)==x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 5U;
	int32_t x583 = -356970898;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t145 = -17;

    t145 = (((x581^x582)==x583)<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x587 = INT16_MAX;
	int16_t x588 = -7748;
	volatile int32_t t146 = -401;

    t146 = (((x585^x586)==x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile uint16_t x591 = UINT16_MAX;
	volatile int16_t x592 = INT16_MIN;
	int32_t t147 = -664937;

    t147 = (((x589^x590)==x591)<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x595 = INT64_MIN;
	static volatile int32_t x596 = INT32_MAX;

    t148 = (((x593^x594)==x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MIN;
	int32_t t149 = 1;

    t149 = (((x597^x598)==x599)<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 25513845;
	static int32_t x602 = -98843034;
	uint8_t x603 = UINT8_MAX;
	uint32_t x604 = UINT32_MAX;
	int32_t t150 = 253535;

    t150 = (((x601^x602)==x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x606 = UINT8_MAX;
	volatile uint16_t x607 = UINT16_MAX;
	int64_t x608 = INT64_MIN;
	int32_t t151 = 494255721;

    t151 = (((x605^x606)==x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 63U;
	volatile int16_t x610 = 1;
	volatile int16_t x611 = INT16_MAX;
	volatile uint16_t x612 = UINT16_MAX;

    t152 = (((x609^x610)==x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x614 = 0U;
	int32_t x615 = INT32_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -797442;

    t153 = (((x613^x614)==x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	int64_t x619 = -1LL;
	volatile int32_t t154 = -8;

    t154 = (((x617^x618)==x619)<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	static uint64_t x622 = 31336757280487LLU;
	int32_t x623 = 8132;
	int32_t t155 = 51503;

    t155 = (((x621^x622)==x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x626 = 2666611248995LLU;
	uint16_t x627 = 11065U;
	int8_t x628 = INT8_MAX;
	int32_t t156 = 20865;

    t156 = (((x625^x626)==x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 1U;
	int8_t x630 = 25;
	uint64_t x631 = 81542776771150258LLU;
	int32_t t157 = 16380;

    t157 = (((x629^x630)==x631)<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 1U;
	uint8_t x634 = 16U;
	uint8_t x635 = UINT8_MAX;
	static int64_t x636 = -1LL;
	volatile int32_t t158 = 67068;

    t158 = (((x633^x634)==x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = INT8_MAX;
	static volatile uint64_t x639 = 115053973244LLU;
	static uint64_t x640 = 55LLU;
	volatile int32_t t159 = -239604641;

    t159 = (((x637^x638)==x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = 97U;
	int8_t x643 = INT8_MIN;
	int16_t x644 = 0;
	volatile int32_t t160 = 27;

    t160 = (((x641^x642)==x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x645 = INT8_MIN;
	volatile uint32_t x646 = 95081U;
	int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MAX;
	int32_t t161 = 1994190;

    t161 = (((x645^x646)==x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x652 = 7319LL;

    t162 = (((x649^x650)==x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	static volatile int32_t x654 = -1835550;
	static int64_t x655 = -1LL;
	int8_t x656 = 26;
	volatile int32_t t163 = -30727440;

    t163 = (((x653^x654)==x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x658 = INT8_MIN;
	static uint16_t x659 = 24269U;
	static int64_t x660 = INT64_MAX;
	static int32_t t164 = 5806;

    t164 = (((x657^x658)==x659)<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 6U;
	int32_t x662 = -6806;
	volatile int16_t x663 = INT16_MIN;
	int8_t x664 = -1;

    t165 = (((x661^x662)==x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MAX;
	static int64_t x667 = -111454446LL;
	uint32_t x668 = 76604U;
	int32_t t166 = 0;

    t166 = (((x665^x666)==x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -6550;
	volatile uint16_t x670 = 2U;
	int32_t x671 = -13432563;
	static volatile int32_t t167 = -1689615;

    t167 = (((x669^x670)==x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x673 = INT16_MIN;
	int8_t x674 = 1;
	int8_t x675 = 3;
	volatile int32_t t168 = 0;

    t168 = (((x673^x674)==x675)<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = INT8_MAX;
	volatile uint8_t x678 = UINT8_MAX;
	uint32_t x679 = 1U;
	uint64_t x680 = UINT64_MAX;
	int32_t t169 = 785200743;

    t169 = (((x677^x678)==x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x682 = 6;
	int32_t t170 = -14280;

    t170 = (((x681^x682)==x683)<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	int64_t x686 = 878790884LL;
	int64_t x687 = INT64_MIN;
	static uint8_t x688 = 4U;
	static volatile int32_t t171 = 426821097;

    t171 = (((x685^x686)==x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x691 = INT64_MIN;
	volatile int64_t x692 = -3504419331LL;
	int32_t t172 = -5918;

    t172 = (((x689^x690)==x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 153947027;
	int16_t x694 = -128;
	volatile int8_t x695 = -1;
	volatile int16_t x696 = -1;
	static volatile int32_t t173 = -255658;

    t173 = (((x693^x694)==x695)<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = 33;
	static int16_t x698 = INT16_MIN;
	int32_t x699 = INT32_MIN;
	static int32_t x700 = -1;
	int32_t t174 = -23;

    t174 = (((x697^x698)==x699)<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = -1LL;
	static int8_t x703 = 56;
	int8_t x704 = -1;
	static int32_t t175 = -3352;

    t175 = (((x701^x702)==x703)<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x705 = 0U;
	volatile int8_t x706 = -1;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = 686469;

    t176 = (((x705^x706)==x707)<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	int8_t x711 = -1;

    t177 = (((x709^x710)==x711)<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = 3721;

    t178 = (((x713^x714)==x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	static volatile int8_t x718 = INT8_MAX;
	static int32_t x720 = INT32_MIN;
	static volatile int32_t t179 = -142;

    t179 = (((x717^x718)==x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	int32_t x723 = INT32_MIN;
	int32_t x724 = INT32_MAX;
	volatile int32_t t180 = 21306;

    t180 = (((x721^x722)==x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -3;
	static uint64_t x727 = UINT64_MAX;
	volatile uint32_t x728 = 7498956U;

    t181 = (((x725^x726)==x727)<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = 33LL;
	int64_t x730 = 70LL;
	int8_t x731 = -1;

    t182 = (((x729^x730)==x731)<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = 1U;
	uint16_t x734 = 7U;
	int16_t x735 = -1;
	int16_t x736 = -1;
	static volatile int32_t t183 = -176125395;

    t183 = (((x733^x734)==x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x740 = -1;
	int32_t t184 = -29062179;

    t184 = (((x737^x738)==x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	int8_t x742 = INT8_MIN;
	int32_t t185 = 16415;

    t185 = (((x741^x742)==x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	volatile uint64_t x747 = 9785461041697LLU;
	int64_t x748 = INT64_MIN;

    t186 = (((x745^x746)==x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	int8_t x750 = INT8_MIN;
	volatile int8_t x751 = -1;
	int8_t x752 = 14;
	int32_t t187 = -4313749;

    t187 = (((x749^x750)==x751)<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x754 = -3234057328647313LL;
	uint16_t x755 = 24829U;
	static int32_t t188 = -401;

    t188 = (((x753^x754)==x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x757 = 0U;
	int64_t x759 = 170791LL;
	int32_t t189 = -1296267;

    t189 = (((x757^x758)==x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = -1094732122059228556LL;
	int16_t x764 = -1;
	int32_t t190 = 2560185;

    t190 = (((x761^x762)==x763)<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 4;
	static int32_t x766 = 2276629;
	uint64_t x767 = UINT64_MAX;
	static int32_t t191 = -22760840;

    t191 = (((x765^x766)==x767)<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -12;
	int16_t x770 = -1;
	static int8_t x771 = INT8_MIN;
	uint8_t x772 = 45U;
	int32_t t192 = 3;

    t192 = (((x769^x770)==x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 5;
	static int16_t x774 = -1;
	uint32_t x775 = UINT32_MAX;
	volatile uint32_t x776 = UINT32_MAX;
	int32_t t193 = 16560121;

    t193 = (((x773^x774)==x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile int32_t x779 = INT32_MAX;
	int16_t x780 = -7980;

    t194 = (((x777^x778)==x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint32_t x783 = 60260477U;
	int8_t x784 = -1;
	volatile int32_t t195 = 1;

    t195 = (((x781^x782)==x783)<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int64_t x786 = 885114718229036LL;
	volatile int16_t x787 = 7958;
	int32_t t196 = 44230;

    t196 = (((x785^x786)==x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = 1387U;
	static uint16_t x790 = 66U;
	uint16_t x791 = UINT16_MAX;
	int32_t x792 = -2215091;
	static volatile int32_t t197 = -6;

    t197 = (((x789^x790)==x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 858238379772675LLU;
	uint32_t x794 = 163418129U;
	int32_t x796 = -257;
	int32_t t198 = -3473319;

    t198 = (((x793^x794)==x795)<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	static uint8_t x798 = UINT8_MAX;
	volatile uint32_t x799 = 66137377U;
	static volatile int32_t t199 = 182362;

    t199 = (((x797^x798)==x799)<=x800);

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

