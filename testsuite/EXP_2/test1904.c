
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

int16_t x1 = -1287;
volatile int16_t x2 = INT16_MIN;
uint16_t x8 = 1U;
static int16_t x12 = INT16_MIN;
static int64_t x15 = 16948LL;
volatile uint16_t x16 = 118U;
int8_t x21 = -1;
int32_t t5 = -179351289;
static int8_t x28 = INT8_MIN;
volatile int32_t t6 = -145644;
volatile int32_t x32 = -277484284;
int64_t x33 = -1LL;
volatile int16_t x34 = INT16_MIN;
int32_t x39 = 178843513;
int32_t x40 = INT32_MIN;
volatile int16_t x52 = 16183;
int8_t x53 = 0;
uint64_t x55 = UINT64_MAX;
uint32_t x56 = UINT32_MAX;
int64_t x59 = 397LL;
static volatile uint8_t x62 = UINT8_MAX;
int8_t x64 = INT8_MIN;
volatile int8_t x72 = -1;
int8_t x78 = -17;
int32_t t20 = 7;
volatile int32_t t21 = 488;
uint64_t x91 = UINT64_MAX;
volatile int64_t x92 = -63967771LL;
uint64_t x94 = UINT64_MAX;
volatile int32_t t23 = -1;
volatile int32_t x104 = INT32_MIN;
static int8_t x106 = INT8_MIN;
int64_t x108 = 4406693926639011834LL;
int16_t x111 = 18;
int8_t x113 = -1;
uint32_t x118 = 0U;
int16_t x123 = 0;
volatile uint64_t t30 = 807285084158884876LLU;
int32_t x128 = INT32_MIN;
uint32_t x142 = 23246U;
uint32_t x145 = 0U;
int16_t x146 = -1;
int32_t t36 = -112;
uint8_t x152 = 1U;
volatile int32_t t37 = 10;
int32_t t43 = -1428;
int16_t x177 = -197;
int8_t x179 = INT8_MIN;
volatile int8_t x187 = -1;
volatile int32_t t46 = 11540237;
int64_t x190 = -12625LL;
int8_t x192 = INT8_MIN;
uint64_t x194 = 37971428LLU;
int16_t x197 = 8707;
int64_t x204 = INT64_MIN;
static int64_t t50 = INT64_MIN;
static uint64_t x205 = UINT64_MAX;
int16_t x208 = INT16_MAX;
volatile int16_t x210 = 6;
static volatile uint32_t t52 = UINT32_MAX;
int16_t x217 = INT16_MIN;
static int32_t x220 = INT32_MIN;
volatile int32_t x221 = INT32_MIN;
int32_t x232 = INT32_MIN;
int64_t x243 = 2012LL;
static uint64_t x246 = 5840605413898LLU;
volatile int16_t x257 = INT16_MIN;
volatile int32_t t66 = -5;
static uint64_t x271 = 961703591LLU;
int32_t t67 = INT32_MIN;
volatile int64_t t68 = 266322844956913972LL;
static int32_t x278 = 135346;
uint64_t x283 = 112834933386197LLU;
volatile int32_t t70 = -15286349;
uint8_t x285 = 16U;
static uint64_t x291 = 13549509LLU;
int16_t x296 = INT16_MIN;
int16_t x300 = INT16_MAX;
uint8_t x305 = 3U;
static uint16_t x317 = 14U;
volatile int32_t t80 = 4;
int32_t x329 = INT32_MAX;
int16_t x336 = INT16_MIN;
int8_t x337 = INT8_MAX;
uint16_t x341 = 223U;
static uint16_t x350 = 87U;
volatile uint16_t x354 = 29U;
static uint16_t x355 = 8U;
static int64_t x359 = INT64_MIN;
int32_t x386 = 29115;
static volatile uint64_t t96 = 67LLU;
uint16_t x392 = UINT16_MAX;
static int32_t x408 = INT32_MAX;
int8_t x413 = -1;
int8_t x425 = INT8_MIN;
int32_t x428 = 13133400;
uint16_t x429 = 3U;
volatile int8_t x430 = 7;
uint32_t x435 = 5U;
uint32_t x437 = 308U;
int16_t x438 = -1;
static int64_t x440 = 2439LL;
int64_t x451 = INT64_MIN;
int32_t x453 = INT32_MIN;
volatile int32_t t113 = -47;
uint16_t x457 = UINT16_MAX;
volatile int64_t x463 = -1LL;
static int32_t t116 = -704837;
int64_t x470 = -1LL;
int32_t x473 = INT32_MIN;
int8_t x474 = -1;
volatile int32_t t119 = 1;
uint32_t x488 = 1266U;
uint16_t x490 = UINT16_MAX;
int8_t x493 = -1;
int64_t x494 = -17706645641278LL;
uint64_t x505 = UINT64_MAX;
int16_t x507 = 65;
uint32_t x510 = UINT32_MAX;
volatile int8_t x511 = 2;
int32_t x514 = -1;
uint16_t x527 = 1U;
volatile int32_t x528 = INT32_MIN;
int8_t x531 = INT8_MIN;
static volatile int32_t t132 = -3;
volatile int32_t x534 = INT32_MIN;
volatile int32_t t133 = 15570446;
uint32_t x540 = 779U;
int16_t x547 = INT16_MAX;
int8_t x549 = -1;
int8_t x551 = 8;
volatile uint64_t t137 = 6548718454363LLU;
volatile int8_t x556 = INT8_MIN;
int64_t x559 = INT64_MIN;
uint64_t x560 = 5275LLU;
int64_t x567 = INT64_MIN;
volatile int8_t x573 = -1;
volatile int8_t x588 = INT8_MIN;
int32_t x597 = -53277;
static uint8_t x599 = 3U;
uint16_t x600 = UINT16_MAX;
int32_t t150 = -19649112;
int8_t x606 = INT8_MIN;
int64_t x608 = -450LL;
int64_t t151 = -6544275079LL;
volatile uint16_t x612 = 364U;
static volatile int64_t x616 = -1LL;
static int32_t t154 = 654891860;
volatile uint8_t x624 = 1U;
int32_t t155 = -9223;
static volatile int8_t x639 = INT8_MIN;
int32_t t159 = 54;
static uint8_t x649 = 2U;
static uint8_t x652 = UINT8_MAX;
static int32_t x666 = -966774739;
volatile int16_t x671 = -1;
int64_t x675 = INT64_MIN;
volatile uint32_t t168 = 115776471U;
int32_t x679 = INT32_MAX;
uint8_t x681 = UINT8_MAX;
volatile uint8_t x691 = 14U;
uint32_t x693 = 41U;
int64_t x698 = 16060LL;
uint64_t t174 = 9235010792429729LLU;
uint8_t x704 = 1U;
volatile int64_t t176 = 151489559496300LL;
uint16_t x710 = 23978U;
static int16_t x715 = -134;
int16_t x717 = INT16_MIN;
volatile uint32_t x719 = UINT32_MAX;
static int8_t x723 = INT8_MIN;
static int16_t x730 = INT16_MAX;
uint32_t x732 = 22U;
volatile int32_t x735 = INT32_MIN;
uint16_t x739 = 7U;
int32_t x742 = -1;
uint16_t x753 = UINT16_MAX;
int8_t x769 = -5;
int32_t x770 = INT32_MIN;
uint8_t x776 = 80U;
static int16_t x777 = INT16_MAX;
volatile int64_t x779 = INT64_MIN;
int64_t x780 = INT64_MIN;
static int16_t x787 = 42;
int64_t x791 = INT64_MIN;
uint64_t x792 = UINT64_MAX;
volatile uint32_t x795 = 749U;


void f0(void) {
    	static int8_t x3 = 45;
	volatile uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 5;

    t0 = ((x1<=(x2<=x3))^x4);

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 0;
	int32_t x6 = -47003;
	int64_t x7 = -1LL;
	int32_t t1 = 2478;

    t1 = ((x5<=(x6<=x7))^x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int32_t x10 = -1;
	uint16_t x11 = 1389U;
	int32_t t2 = -309411893;

    t2 = ((x9<=(x10<=x11))^x12);

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 628505LL;
	static volatile uint64_t x14 = 680LLU;
	int32_t t3 = 24;

    t3 = ((x13<=(x14<=x15))^x16);

    if (t3 != 118) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 1U;
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MAX;
	static int32_t t4 = -176767306;

    t4 = ((x17<=(x18<=x19))^x20);

    if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x22 = 45U;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = 1U;

    t5 = ((x21<=(x22<=x23))^x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 20011LLU;

    t6 = ((x25<=(x26<=x27))^x28);

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 24799421774731LL;
	int16_t x30 = 357;
	static volatile int8_t x31 = INT8_MAX;
	volatile int32_t t7 = -4091;

    t7 = ((x29<=(x30<=x31))^x32);

    if (t7 != -277484284) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x35 = 126U;
	static volatile int8_t x36 = 1;
	int32_t t8 = -32;

    t8 = ((x33<=(x34<=x35))^x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MAX;
	volatile int16_t x38 = INT16_MIN;
	volatile int32_t t9 = INT32_MIN;

    t9 = ((x37<=(x38<=x39))^x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 1;
	int8_t x42 = INT8_MAX;
	uint64_t x43 = 116915257957691LLU;
	int32_t x44 = -91849547;
	int32_t t10 = 10;

    t10 = ((x41<=(x42<=x43))^x44);

    if (t10 != -91849548) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 1U;
	int64_t x46 = INT64_MAX;
	volatile uint32_t x47 = 13534110U;
	uint16_t x48 = 3373U;
	int32_t t11 = -2137923;

    t11 = ((x45<=(x46<=x47))^x48);

    if (t11 != 3373) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 13U;
	uint8_t x50 = 11U;
	int16_t x51 = -2;
	volatile int32_t t12 = -1;

    t12 = ((x49<=(x50<=x51))^x52);

    if (t12 != 16183) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = -218050926822397LL;
	volatile uint32_t t13 = 271U;

    t13 = ((x53<=(x54<=x55))^x56);

    if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	static uint64_t x60 = 15LLU;
	volatile uint64_t t14 = 30349021LLU;

    t14 = ((x57<=(x58<=x59))^x60);

    if (t14 != 15LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -11;
	static uint32_t x63 = UINT32_MAX;
	int32_t t15 = 464;

    t15 = ((x61<=(x62<=x63))^x64);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = -1;
	static uint32_t x67 = UINT32_MAX;
	volatile int8_t x68 = -35;
	int32_t t16 = 721876;

    t16 = ((x65<=(x66<=x67))^x68);

    if (t16 != -36) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static volatile uint64_t x70 = UINT64_MAX;
	static volatile int8_t x71 = 3;
	int32_t t17 = -221114107;

    t17 = ((x69<=(x70<=x71))^x72);

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MAX;
	int64_t x76 = -1LL;
	static int64_t t18 = -114LL;

    t18 = ((x73<=(x74<=x75))^x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MIN;
	static int32_t t19 = -329;

    t19 = ((x77<=(x78<=x79))^x80);

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 481703104812688690LLU;
	uint32_t x82 = 413073952U;
	int64_t x83 = -1LL;
	int16_t x84 = -1;

    t20 = ((x81<=(x82<=x83))^x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

    t21 = ((x85<=(x86<=x87))^x88);

    if (t21 != 2147483646) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint64_t x90 = UINT64_MAX;
	volatile int64_t t22 = 492467LL;

    t22 = ((x89<=(x90<=x91))^x92);

    if (t22 != -63967772LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 32U;
	int16_t x95 = 9;
	uint8_t x96 = 19U;

    t23 = ((x93<=(x94<=x95))^x96);

    if (t23 != 19) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int16_t x98 = -1;
	volatile int8_t x99 = 1;
	static volatile int8_t x100 = INT8_MIN;
	int32_t t24 = -8701;

    t24 = ((x97<=(x98<=x99))^x100);

    if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = 0U;
	uint64_t x102 = 1424968LLU;
	int64_t x103 = -1LL;
	int32_t t25 = 10866;

    t25 = ((x101<=(x102<=x103))^x104);

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 22U;
	uint16_t x107 = UINT16_MAX;
	int64_t t26 = -30LL;

    t26 = ((x105<=(x106<=x107))^x108);

    if (t26 != 4406693926639011834LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MAX;
	volatile int64_t x110 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t27 = -892599792;

    t27 = ((x109<=(x110<=x111))^x112);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = -1LL;
	uint32_t x115 = 80U;
	int32_t x116 = -875;
	volatile int32_t t28 = 356;

    t28 = ((x113<=(x114<=x115))^x116);

    if (t28 != -876) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MIN;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 7;

    t29 = ((x117<=(x118<=x119))^x120);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = 3590;
	int64_t x122 = -1897969LL;
	uint64_t x124 = 1LLU;

    t30 = ((x121<=(x122<=x123))^x124);

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 2U;
	static int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int32_t t31 = INT32_MIN;

    t31 = ((x125<=(x126<=x127))^x128);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	uint8_t x132 = 9U;
	static volatile int32_t t32 = -370491;

    t32 = ((x129<=(x130<=x131))^x132);

    if (t32 != 9) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 1U;
	volatile int8_t x134 = 1;
	uint16_t x135 = 1269U;
	int8_t x136 = 1;
	static int32_t t33 = 4018;

    t33 = ((x133<=(x134<=x135))^x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -106819LL;
	static int32_t x138 = -1;
	int32_t x139 = INT32_MAX;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 110722830;

    t34 = ((x137<=(x138<=x139))^x140);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	int8_t x143 = 0;
	int64_t x144 = 8181994524119LL;
	volatile int64_t t35 = 151LL;

    t35 = ((x141<=(x142<=x143))^x144);

    if (t35 != 8181994524118LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x147 = INT8_MIN;
	int16_t x148 = -1;

    t36 = ((x145<=(x146<=x147))^x148);

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 27U;
	static int8_t x150 = INT8_MIN;
	static int16_t x151 = INT16_MIN;

    t37 = ((x149<=(x150<=x151))^x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	volatile int32_t x154 = INT32_MIN;
	static volatile uint32_t x155 = 11855733U;
	int64_t x156 = -1LL;
	static int64_t t38 = 406975862696826LL;

    t38 = ((x153<=(x154<=x155))^x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 0;
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t39 = 89LLU;

    t39 = ((x157<=(x158<=x159))^x160);

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = 1071;
	static volatile uint8_t x162 = UINT8_MAX;
	static int32_t x163 = 82437;
	uint8_t x164 = 17U;
	volatile int32_t t40 = 2851273;

    t40 = ((x161<=(x162<=x163))^x164);

    if (t40 != 17) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -19;
	static int32_t x166 = 492;
	static volatile uint32_t x167 = UINT32_MAX;
	uint8_t x168 = 17U;
	int32_t t41 = -302531;

    t41 = ((x165<=(x166<=x167))^x168);

    if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	volatile uint64_t x170 = 12300762780LLU;
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MIN;
	static int64_t t42 = INT64_MIN;

    t42 = ((x169<=(x170<=x171))^x172);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MAX;
	volatile int16_t x175 = 307;
	int16_t x176 = INT16_MIN;

    t43 = ((x173<=(x174<=x175))^x176);

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x178 = 47U;
	uint32_t x180 = UINT32_MAX;
	static volatile uint32_t t44 = 119668680U;

    t44 = ((x177<=(x178<=x179))^x180);

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	uint8_t x182 = UINT8_MAX;
	volatile int64_t x183 = INT64_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -194;

    t45 = ((x181<=(x182<=x183))^x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x185 = INT16_MIN;
	uint8_t x186 = UINT8_MAX;
	int16_t x188 = -1;

    t46 = ((x185<=(x186<=x187))^x188);

    if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 17U;
	volatile int64_t x191 = INT64_MAX;
	static int32_t t47 = 2954;

    t47 = ((x189<=(x190<=x191))^x192);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x193 = 4U;
	static int32_t x195 = -1;
	int64_t x196 = -1LL;
	static volatile int64_t t48 = 21314864LL;

    t48 = ((x193<=(x194<=x195))^x196);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = -24;
	static int64_t x199 = INT64_MAX;
	static int16_t x200 = INT16_MAX;
	static int32_t t49 = -386058;

    t49 = ((x197<=(x198<=x199))^x200);

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -7;

    t50 = ((x201<=(x202<=x203))^x204);

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = -89762672;
	int8_t x207 = INT8_MIN;
	volatile int32_t t51 = 281153;

    t51 = ((x205<=(x206<=x207))^x208);

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = UINT8_MAX;
	volatile int64_t x211 = -1LL;
	uint32_t x212 = UINT32_MAX;

    t52 = ((x209<=(x210<=x211))^x212);

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = 338225825;
	uint16_t x214 = 249U;
	uint32_t x215 = 802507567U;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t53 = 19423;

    t53 = ((x213<=(x214<=x215))^x216);

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -1;
	static int64_t x219 = -1LL;
	int32_t t54 = 1014647;

    t54 = ((x217<=(x218<=x219))^x220);

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x222 = 181899LLU;
	static int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	volatile int32_t t55 = -7873843;

    t55 = ((x221<=(x222<=x223))^x224);

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	uint32_t x226 = 209U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 693312292;

    t56 = ((x225<=(x226<=x227))^x228);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	volatile int32_t x230 = INT32_MIN;
	int64_t x231 = -1LL;
	int32_t t57 = -537922;

    t57 = ((x229<=(x230<=x231))^x232);

    if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 6501U;
	volatile uint16_t x234 = 6452U;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = 48;
	volatile int32_t t58 = -365047;

    t58 = ((x233<=(x234<=x235))^x236);

    if (t58 != 48) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 10782;
	int16_t x238 = -200;
	uint32_t x239 = 0U;
	uint8_t x240 = 3U;
	volatile int32_t t59 = -72326455;

    t59 = ((x237<=(x238<=x239))^x240);

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 6U;
	int16_t x242 = INT16_MAX;
	int64_t x244 = 3LL;
	volatile int64_t t60 = -67544688LL;

    t60 = ((x241<=(x242<=x243))^x244);

    if (t60 != 3LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	volatile int16_t x247 = INT16_MIN;
	uint8_t x248 = 33U;
	int32_t t61 = 5;

    t61 = ((x245<=(x246<=x247))^x248);

    if (t61 != 32) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 48;
	int8_t x250 = INT8_MIN;
	volatile int32_t x251 = -1;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 208726;

    t62 = ((x249<=(x250<=x251))^x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = -1;
	static int64_t x254 = INT64_MIN;
	uint32_t x255 = 17083901U;
	int16_t x256 = INT16_MAX;
	static int32_t t63 = 49304;

    t63 = ((x253<=(x254<=x255))^x256);

    if (t63 != 32766) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x258 = -56657450465LL;
	int16_t x259 = -1;
	uint64_t x260 = 8LLU;
	static uint64_t t64 = 34587333032992LLU;

    t64 = ((x257<=(x258<=x259))^x260);

    if (t64 != 9LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	static int32_t x263 = -19;
	int8_t x264 = 0;
	volatile int32_t t65 = 5221734;

    t65 = ((x261<=(x262<=x263))^x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int32_t x268 = INT32_MIN;

    t66 = ((x265<=(x266<=x267))^x268);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = 3;
	int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MIN;

    t67 = ((x269<=(x270<=x271))^x272);

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	static uint32_t x275 = UINT32_MAX;
	int64_t x276 = 3526762019549LL;

    t68 = ((x273<=(x274<=x275))^x276);

    if (t68 != 3526762019548LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 224878U;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -132408078642815004LL;
	volatile int64_t t69 = 138653159242415LL;

    t69 = ((x277<=(x278<=x279))^x280);

    if (t69 != -132408078642815004LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 77U;
	uint8_t x282 = 18U;
	int16_t x284 = INT16_MAX;

    t70 = ((x281<=(x282<=x283))^x284);

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -29;
	uint16_t x287 = 18740U;
	static int32_t x288 = -1;
	volatile int32_t t71 = 84705;

    t71 = ((x285<=(x286<=x287))^x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x289 = 578180242LLU;
	int64_t x290 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = INT32_MIN;

    t72 = ((x289<=(x290<=x291))^x292);

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MAX;
	volatile uint64_t x294 = 82651213250774LLU;
	int8_t x295 = -1;
	int32_t t73 = -827;

    t73 = ((x293<=(x294<=x295))^x296);

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -50;
	static int8_t x298 = INT8_MAX;
	volatile int16_t x299 = INT16_MAX;
	int32_t t74 = -2;

    t74 = ((x297<=(x298<=x299))^x300);

    if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint64_t x302 = 2396131065098947LLU;
	int64_t x303 = 895088LL;
	uint8_t x304 = 1U;
	volatile int32_t t75 = 6191;

    t75 = ((x301<=(x302<=x303))^x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x306 = -1486822638709LL;
	static volatile int32_t x307 = 0;
	int32_t x308 = INT32_MIN;
	int32_t t76 = INT32_MIN;

    t76 = ((x305<=(x306<=x307))^x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	static int64_t x310 = 32301LL;
	uint16_t x311 = 4661U;
	int32_t x312 = -152876;
	volatile int32_t t77 = 30677;

    t77 = ((x309<=(x310<=x311))^x312);

    if (t77 != -152876) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 0;
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t78 = 339;

    t78 = ((x313<=(x314<=x315))^x316);

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x318 = -1LL;
	int16_t x319 = 195;
	static int64_t x320 = 10LL;
	volatile int64_t t79 = 3314554098909044LL;

    t79 = ((x317<=(x318<=x319))^x320);

    if (t79 != 10LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 314U;
	static int16_t x322 = INT16_MIN;
	static volatile int8_t x323 = INT8_MIN;
	static int8_t x324 = INT8_MIN;

    t80 = ((x321<=(x322<=x323))^x324);

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = UINT32_MAX;
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 408740U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

    t81 = ((x325<=(x326<=x327))^x328);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x330 = 3064U;
	int8_t x331 = INT8_MIN;
	volatile uint32_t x332 = 1U;
	volatile uint32_t t82 = 1230U;

    t82 = ((x329<=(x330<=x331))^x332);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int64_t x334 = INT64_MIN;
	static int32_t x335 = INT32_MAX;
	volatile int32_t t83 = -558760;

    t83 = ((x333<=(x334<=x335))^x336);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x338 = UINT64_MAX;
	static uint8_t x339 = 22U;
	uint16_t x340 = UINT16_MAX;
	static int32_t t84 = -28930;

    t84 = ((x337<=(x338<=x339))^x340);

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x342 = INT64_MAX;
	static volatile int64_t x343 = -4502014440838744735LL;
	int16_t x344 = 6;
	static volatile int32_t t85 = -512577047;

    t85 = ((x341<=(x342<=x343))^x344);

    if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 94330701U;
	int32_t x346 = INT32_MIN;
	uint16_t x347 = 25U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 3676655;

    t86 = ((x345<=(x346<=x347))^x348);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int32_t x351 = -1;
	uint32_t x352 = 1013003626U;
	volatile uint32_t t87 = 0U;

    t87 = ((x349<=(x350<=x351))^x352);

    if (t87 != 1013003626U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = -1;
	uint16_t x356 = 2065U;
	volatile int32_t t88 = 3895646;

    t88 = ((x353<=(x354<=x355))^x356);

    if (t88 != 2064) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	static int64_t x358 = INT64_MAX;
	int8_t x360 = -31;
	volatile int32_t t89 = 7;

    t89 = ((x357<=(x358<=x359))^x360);

    if (t89 != -31) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 1;
	volatile int64_t x362 = 13017000030LL;
	volatile uint64_t x363 = 62751LLU;
	uint16_t x364 = 19U;
	volatile int32_t t90 = -3511;

    t90 = ((x361<=(x362<=x363))^x364);

    if (t90 != 19) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 4649565890334LLU;
	int16_t x366 = -1;
	static volatile int64_t x367 = INT64_MAX;
	int64_t x368 = 1LL;
	int64_t t91 = 17907850589199251LL;

    t91 = ((x365<=(x366<=x367))^x368);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 45U;
	static int32_t x371 = -1;
	static uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = 1;

    t92 = ((x369<=(x370<=x371))^x372);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = 1LLU;
	uint64_t x376 = UINT64_MAX;
	uint64_t t93 = 13309937LLU;

    t93 = ((x373<=(x374<=x375))^x376);

    if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MAX;
	int32_t t94 = INT32_MAX;

    t94 = ((x377<=(x378<=x379))^x380);

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	int16_t x382 = 250;
	int64_t x383 = -1LL;
	int32_t x384 = 227;
	volatile int32_t t95 = -33;

    t95 = ((x381<=(x382<=x383))^x384);

    if (t95 != 227) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -1;
	static uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 107922829957LLU;

    t96 = ((x385<=(x386<=x387))^x388);

    if (t96 != 107922829956LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 417695224216LLU;
	int32_t x390 = 224638940;
	int32_t x391 = -280164;
	int32_t t97 = 45116;

    t97 = ((x389<=(x390<=x391))^x392);

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -1;
	int64_t x394 = INT64_MAX;
	volatile int16_t x395 = -1;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 13856815;

    t98 = ((x393<=(x394<=x395))^x396);

    if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -5132LL;
	static int64_t x398 = 32477612309648720LL;
	int64_t x399 = INT64_MAX;
	static volatile int16_t x400 = -524;
	volatile int32_t t99 = 419716869;

    t99 = ((x397<=(x398<=x399))^x400);

    if (t99 != -523) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	static int32_t x402 = INT32_MIN;
	volatile int8_t x403 = INT8_MIN;
	int64_t x404 = -629728021802369LL;
	volatile int64_t t100 = -894247690062LL;

    t100 = ((x401<=(x402<=x403))^x404);

    if (t100 != -629728021802370LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -23;
	volatile uint32_t x406 = 2U;
	volatile int16_t x407 = 0;
	static volatile int32_t t101 = -1;

    t101 = ((x405<=(x406<=x407))^x408);

    if (t101 != 2147483646) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = 4236U;
	static int64_t x410 = INT64_MIN;
	static int16_t x411 = -179;
	int64_t x412 = INT64_MAX;
	int64_t t102 = INT64_MAX;

    t102 = ((x409<=(x410<=x411))^x412);

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x414 = 1U;
	volatile uint16_t x415 = 164U;
	int16_t x416 = -7;
	volatile int32_t t103 = -602;

    t103 = ((x413<=(x414<=x415))^x416);

    if (t103 != -8) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 29U;
	int8_t x418 = -5;
	int32_t x419 = -1;
	uint64_t x420 = 414294LLU;
	uint64_t t104 = 3230535034309093999LLU;

    t104 = ((x417<=(x418<=x419))^x420);

    if (t104 != 414294LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 1528U;
	volatile int32_t x424 = INT32_MAX;
	int32_t t105 = -284854751;

    t105 = ((x421<=(x422<=x423))^x424);

    if (t105 != 2147483646) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x426 = 2837U;
	static uint32_t x427 = 91822U;
	int32_t t106 = -188114001;

    t106 = ((x425<=(x426<=x427))^x428);

    if (t106 != 13133401) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x431 = INT32_MIN;
	static uint16_t x432 = UINT16_MAX;
	volatile int32_t t107 = 25;

    t107 = ((x429<=(x430<=x431))^x432);

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = 3;
	static int32_t x436 = -98;
	int32_t t108 = -70;

    t108 = ((x433<=(x434<=x435))^x436);

    if (t108 != -97) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x439 = -426LL;
	int64_t t109 = -93LL;

    t109 = ((x437<=(x438<=x439))^x440);

    if (t109 != 2439LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 23U;
	uint32_t x442 = 1377U;
	int8_t x443 = -47;
	int16_t x444 = -1;
	volatile int32_t t110 = -215;

    t110 = ((x441<=(x442<=x443))^x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = UINT32_MAX;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 2U;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t111 = -1;

    t111 = ((x445<=(x446<=x447))^x448);

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	uint32_t x450 = 19464486U;
	volatile int32_t x452 = -5509377;
	volatile int32_t t112 = -30239;

    t112 = ((x449<=(x450<=x451))^x452);

    if (t112 != -5509378) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x454 = 1884403853LL;
	uint16_t x455 = 184U;
	uint16_t x456 = UINT16_MAX;

    t113 = ((x453<=(x454<=x455))^x456);

    if (t113 != 65534) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x458 = UINT32_MAX;
	uint64_t x459 = 805LLU;
	int64_t x460 = INT64_MAX;
	static volatile int64_t t114 = INT64_MAX;

    t114 = ((x457<=(x458<=x459))^x460);

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	static int64_t x464 = INT64_MAX;
	int64_t t115 = 1LL;

    t115 = ((x461<=(x462<=x463))^x464);

    if (t115 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = UINT64_MAX;
	int16_t x467 = -1;
	volatile uint8_t x468 = UINT8_MAX;

    t116 = ((x465<=(x466<=x467))^x468);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 5390U;
	int64_t x471 = INT64_MIN;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t117 = INT64_MIN;

    t117 = ((x469<=(x470<=x471))^x472);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x475 = 609LL;
	static volatile int8_t x476 = 0;
	static volatile int32_t t118 = 49130574;

    t118 = ((x473<=(x474<=x475))^x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x477 = -3;
	int32_t x478 = -224;
	static volatile uint64_t x479 = 464360843LLU;
	int16_t x480 = -1;

    t119 = ((x477<=(x478<=x479))^x480);

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	uint64_t x482 = 9176289587467LLU;
	uint32_t x483 = 3U;
	static uint32_t x484 = 6695883U;
	volatile uint32_t t120 = 1007324U;

    t120 = ((x481<=(x482<=x483))^x484);

    if (t120 != 6695882U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	int8_t x486 = -1;
	static int16_t x487 = -2059;
	volatile uint32_t t121 = 710280U;

    t121 = ((x485<=(x486<=x487))^x488);

    if (t121 != 1266U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	static int32_t x491 = -4502725;
	uint16_t x492 = 322U;
	volatile int32_t t122 = -3245043;

    t122 = ((x489<=(x490<=x491))^x492);

    if (t122 != 323) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x495 = INT64_MIN;
	static volatile int16_t x496 = INT16_MIN;
	static int32_t t123 = -1;

    t123 = ((x493<=(x494<=x495))^x496);

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -1;
	int32_t x498 = INT32_MIN;
	uint16_t x499 = 5721U;
	uint16_t x500 = 572U;
	volatile int32_t t124 = -27860;

    t124 = ((x497<=(x498<=x499))^x500);

    if (t124 != 573) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 90905145696LL;
	static int8_t x502 = -1;
	int64_t x503 = INT64_MAX;
	uint8_t x504 = 3U;
	volatile int32_t t125 = 781818075;

    t125 = ((x501<=(x502<=x503))^x504);

    if (t125 != 3) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = -3915126LL;
	uint16_t x508 = UINT16_MAX;
	int32_t t126 = -5;

    t126 = ((x505<=(x506<=x507))^x508);

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -42593465967LL;
	int8_t x512 = INT8_MAX;
	int32_t t127 = -14848036;

    t127 = ((x509<=(x510<=x511))^x512);

    if (t127 != 126) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	int32_t x515 = INT32_MAX;
	int8_t x516 = INT8_MIN;
	volatile int32_t t128 = 28279401;

    t128 = ((x513<=(x514<=x515))^x516);

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x517 = INT16_MAX;
	static int64_t x518 = -1LL;
	static int16_t x519 = INT16_MIN;
	volatile int32_t x520 = 1;
	volatile int32_t t129 = 59071060;

    t129 = ((x517<=(x518<=x519))^x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	static int8_t x522 = -1;
	int64_t x523 = -1LL;
	uint16_t x524 = 9U;
	volatile int32_t t130 = -63348;

    t130 = ((x521<=(x522<=x523))^x524);

    if (t130 != 8) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	uint8_t x526 = 97U;
	static int32_t t131 = -334378437;

    t131 = ((x525<=(x526<=x527))^x528);

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 36U;
	uint16_t x530 = 11151U;
	static uint8_t x532 = 1U;

    t132 = ((x529<=(x530<=x531))^x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	static int16_t x535 = -18;
	static uint8_t x536 = 20U;

    t133 = ((x533<=(x534<=x535))^x536);

    if (t133 != 20) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	uint16_t x538 = UINT16_MAX;
	int64_t x539 = -1LL;
	volatile uint32_t t134 = 1460U;

    t134 = ((x537<=(x538<=x539))^x540);

    if (t134 != 778U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 2107866623381754313LL;
	static int16_t x542 = 2;
	uint32_t x543 = 28858U;
	volatile int64_t x544 = -11290981090LL;
	static int64_t t135 = 19885LL;

    t135 = ((x541<=(x542<=x543))^x544);

    if (t135 != -11290981090LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -5;
	int8_t x546 = -1;
	int16_t x548 = INT16_MIN;
	int32_t t136 = 381;

    t136 = ((x545<=(x546<=x547))^x548);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -56185518;
	uint64_t x552 = 216350568826763LLU;

    t137 = ((x549<=(x550<=x551))^x552);

    if (t137 != 216350568826762LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -8204744078LL;
	uint64_t x554 = 14LLU;
	int64_t x555 = INT64_MAX;
	volatile int32_t t138 = 42971750;

    t138 = ((x553<=(x554<=x555))^x556);

    if (t138 != -127) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -54269950178417831LL;
	int8_t x558 = INT8_MIN;
	uint64_t t139 = 1930010864382LLU;

    t139 = ((x557<=(x558<=x559))^x560);

    if (t139 != 5274LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	static int16_t x562 = -1;
	volatile int32_t x563 = -4;
	uint8_t x564 = UINT8_MAX;
	int32_t t140 = -1;

    t140 = ((x561<=(x562<=x563))^x564);

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 1108223LLU;
	int64_t x566 = -5573148LL;
	int64_t x568 = INT64_MAX;
	volatile int64_t t141 = INT64_MAX;

    t141 = ((x565<=(x566<=x567))^x568);

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 58253LLU;
	int32_t x570 = -1;
	int64_t x571 = INT64_MIN;
	uint64_t x572 = UINT64_MAX;
	uint64_t t142 = UINT64_MAX;

    t142 = ((x569<=(x570<=x571))^x572);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	uint16_t x576 = 6U;
	int32_t t143 = -14932;

    t143 = ((x573<=(x574<=x575))^x576);

    if (t143 != 7) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = -1;
	volatile int32_t x579 = -1;
	int64_t x580 = 26025951LL;
	int64_t t144 = -731379261LL;

    t144 = ((x577<=(x578<=x579))^x580);

    if (t144 != 26025950LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -29247;
	int64_t x582 = INT64_MAX;
	static uint64_t x583 = 15585553124LLU;
	static int32_t x584 = INT32_MIN;
	volatile int32_t t145 = -572;

    t145 = ((x581<=(x582<=x583))^x584);

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = -226843033123LL;
	volatile int8_t x586 = 12;
	int16_t x587 = -4901;
	volatile int32_t t146 = 6477;

    t146 = ((x585<=(x586<=x587))^x588);

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x589 = UINT16_MAX;
	uint64_t x590 = UINT64_MAX;
	static volatile int8_t x591 = 3;
	int16_t x592 = -1;
	static int32_t t147 = -25373027;

    t147 = ((x589<=(x590<=x591))^x592);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = 23;
	static uint8_t x594 = 15U;
	int8_t x595 = INT8_MAX;
	uint64_t x596 = 26321398123152892LLU;
	uint64_t t148 = 12613LLU;

    t148 = ((x593<=(x594<=x595))^x596);

    if (t148 != 26321398123152892LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x598 = UINT32_MAX;
	volatile int32_t t149 = 31;

    t149 = ((x597<=(x598<=x599))^x600);

    if (t149 != 65534) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = -1;
	static int64_t x602 = -7468327LL;
	volatile uint32_t x603 = UINT32_MAX;
	int32_t x604 = 1;

    t150 = ((x601<=(x602<=x603))^x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	volatile int32_t x607 = INT32_MIN;

    t151 = ((x605<=(x606<=x607))^x608);

    if (t151 != -449LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 925026LLU;
	int16_t x610 = INT16_MIN;
	uint16_t x611 = 6374U;
	int32_t t152 = 521;

    t152 = ((x609<=(x610<=x611))^x612);

    if (t152 != 364) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -1;
	int64_t x614 = INT64_MIN;
	int64_t x615 = -12005LL;
	int64_t t153 = 1216833900990LL;

    t153 = ((x613<=(x614<=x615))^x616);

    if (t153 != -2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	int16_t x618 = INT16_MAX;
	volatile int64_t x619 = 539776150LL;
	int32_t x620 = 3392;

    t154 = ((x617<=(x618<=x619))^x620);

    if (t154 != 3392) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 189U;
	static uint8_t x622 = UINT8_MAX;
	volatile uint16_t x623 = 4482U;

    t155 = ((x621<=(x622<=x623))^x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 1U;
	int64_t x626 = 535LL;
	volatile int8_t x627 = 1;
	uint64_t x628 = UINT64_MAX;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = ((x625<=(x626<=x627))^x628);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = INT32_MIN;
	volatile int8_t x630 = INT8_MIN;
	volatile int16_t x631 = -49;
	volatile int16_t x632 = -51;
	volatile int32_t t157 = 36846;

    t157 = ((x629<=(x630<=x631))^x632);

    if (t157 != -52) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	int32_t x634 = 1;
	static int8_t x635 = INT8_MAX;
	int32_t x636 = INT32_MIN;
	volatile int32_t t158 = INT32_MIN;

    t158 = ((x633<=(x634<=x635))^x636);

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 14U;
	static volatile int8_t x638 = INT8_MAX;
	int16_t x640 = INT16_MIN;

    t159 = ((x637<=(x638<=x639))^x640);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 497763U;
	int8_t x642 = INT8_MIN;
	static uint8_t x643 = 9U;
	int32_t x644 = INT32_MAX;
	static int32_t t160 = INT32_MAX;

    t160 = ((x641<=(x642<=x643))^x644);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 655294;
	int8_t x646 = 14;
	uint16_t x647 = 1U;
	int32_t x648 = INT32_MAX;
	volatile int32_t t161 = INT32_MAX;

    t161 = ((x645<=(x646<=x647))^x648);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MIN;
	static int32_t t162 = 157;

    t162 = ((x649<=(x650<=x651))^x652);

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -17;
	int64_t x654 = INT64_MIN;
	int8_t x655 = INT8_MIN;
	static volatile int32_t x656 = INT32_MAX;
	volatile int32_t t163 = -241;

    t163 = ((x653<=(x654<=x655))^x656);

    if (t163 != 2147483646) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint16_t x658 = 62U;
	volatile int16_t x659 = -1;
	static int64_t x660 = -1LL;
	volatile int64_t t164 = -183061963306LL;

    t164 = ((x657<=(x658<=x659))^x660);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = -1LL;
	volatile int16_t x662 = INT16_MIN;
	static volatile uint16_t x663 = UINT16_MAX;
	volatile int64_t x664 = INT64_MIN;
	static int64_t t165 = -785343706682976140LL;

    t165 = ((x661<=(x662<=x663))^x664);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = UINT64_MAX;
	volatile int32_t x667 = -1;
	int16_t x668 = -1;
	volatile int32_t t166 = 57252;

    t166 = ((x665<=(x666<=x667))^x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	static int16_t x670 = INT16_MIN;
	static int64_t x672 = -1LL;
	volatile int64_t t167 = 10LL;

    t167 = ((x669<=(x670<=x671))^x672);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 764U;
	uint16_t x674 = 12U;
	static uint32_t x676 = 32U;

    t168 = ((x673<=(x674<=x675))^x676);

    if (t168 != 32U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile uint64_t x678 = 48942030365LLU;
	uint16_t x680 = 2289U;
	static volatile int32_t t169 = -333223646;

    t169 = ((x677<=(x678<=x679))^x680);

    if (t169 != 2289) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x682 = 13205757973LLU;
	volatile int64_t x683 = -1LL;
	volatile uint32_t x684 = 1U;
	static volatile uint32_t t170 = 672U;

    t170 = ((x681<=(x682<=x683))^x684);

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MIN;
	static int64_t x686 = -1LL;
	int16_t x687 = 12273;
	int16_t x688 = INT16_MIN;
	static int32_t t171 = -1;

    t171 = ((x685<=(x686<=x687))^x688);

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	volatile uint64_t x690 = 932960704LLU;
	int64_t x692 = 8LL;
	int64_t t172 = -75407439773450828LL;

    t172 = ((x689<=(x690<=x691))^x692);

    if (t172 != 8LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x694 = 87U;
	int64_t x695 = INT64_MIN;
	int8_t x696 = INT8_MAX;
	int32_t t173 = 35;

    t173 = ((x693<=(x694<=x695))^x696);

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -1LL;
	uint64_t x699 = UINT64_MAX;
	uint64_t x700 = UINT64_MAX;

    t174 = ((x697<=(x698<=x699))^x700);

    if (t174 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	volatile uint16_t x702 = 21U;
	int16_t x703 = 1241;
	int32_t t175 = -114;

    t175 = ((x701<=(x702<=x703))^x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 15472LLU;
	uint32_t x706 = 495314080U;
	uint32_t x707 = 414U;
	int64_t x708 = -3956682198838LL;

    t176 = ((x705<=(x706<=x707))^x708);

    if (t176 != -3956682198838LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	int32_t x711 = 1;
	int32_t x712 = 1;
	volatile int32_t t177 = -55374;

    t177 = ((x709<=(x710<=x711))^x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 86U;
	uint32_t x714 = 53050621U;
	static uint16_t x716 = UINT16_MAX;
	volatile int32_t t178 = 1;

    t178 = ((x713<=(x714<=x715))^x716);

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = INT64_MIN;
	int32_t x720 = INT32_MAX;
	int32_t t179 = 91;

    t179 = ((x717<=(x718<=x719))^x720);

    if (t179 != 2147483646) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = -1123017916LL;
	int16_t x722 = INT16_MIN;
	int16_t x724 = INT16_MAX;
	int32_t t180 = 7;

    t180 = ((x721<=(x722<=x723))^x724);

    if (t180 != 32766) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = -221832LL;
	int64_t x726 = 221982856903324594LL;
	int64_t x727 = -1LL;
	int32_t x728 = 1;
	int32_t t181 = 65535818;

    t181 = ((x725<=(x726<=x727))^x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 0;
	int8_t x731 = INT8_MIN;
	uint32_t t182 = 0U;

    t182 = ((x729<=(x730<=x731))^x732);

    if (t182 != 23U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 295;
	volatile int32_t x734 = 403050694;
	volatile int16_t x736 = -1;
	int32_t t183 = -13253482;

    t183 = ((x733<=(x734<=x735))^x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 2288986995363379LLU;
	uint64_t x738 = 421343LLU;
	int64_t x740 = -20007458261495LL;
	volatile int64_t t184 = -2974451419LL;

    t184 = ((x737<=(x738<=x739))^x740);

    if (t184 != -20007458261495LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -7;
	uint32_t x743 = 1U;
	uint64_t x744 = 317709680251LLU;
	volatile uint64_t t185 = 10LLU;

    t185 = ((x741<=(x742<=x743))^x744);

    if (t185 != 317709680250LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	static uint8_t x746 = UINT8_MAX;
	int32_t x747 = 1022504;
	volatile int32_t x748 = INT32_MIN;
	volatile int32_t t186 = INT32_MIN;

    t186 = ((x745<=(x746<=x747))^x748);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	int32_t x750 = -1;
	volatile uint8_t x751 = 86U;
	int16_t x752 = INT16_MAX;
	int32_t t187 = 396333788;

    t187 = ((x749<=(x750<=x751))^x752);

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x754 = -2419313957433643LL;
	int32_t x755 = 4;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t188 = -12248;

    t188 = ((x753<=(x754<=x755))^x756);

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	int16_t x759 = INT16_MAX;
	uint16_t x760 = 94U;
	volatile int32_t t189 = -254;

    t189 = ((x757<=(x758<=x759))^x760);

    if (t189 != 95) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	static int32_t x762 = -1;
	int8_t x763 = -22;
	int64_t x764 = 12778166LL;
	int64_t t190 = 15LL;

    t190 = ((x761<=(x762<=x763))^x764);

    if (t190 != 12778167LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -37;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	uint32_t x768 = 599U;
	volatile uint32_t t191 = 1859219U;

    t191 = ((x765<=(x766<=x767))^x768);

    if (t191 != 598U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x771 = UINT32_MAX;
	uint32_t x772 = UINT32_MAX;
	volatile uint32_t t192 = 14407855U;

    t192 = ((x769<=(x770<=x771))^x772);

    if (t192 != 4294967294U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 2U;
	int8_t x774 = INT8_MAX;
	static int64_t x775 = -1LL;
	int32_t t193 = 9674;

    t193 = ((x773<=(x774<=x775))^x776);

    if (t193 != 80) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	static int64_t t194 = INT64_MIN;

    t194 = ((x777<=(x778<=x779))^x780);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = INT16_MIN;
	volatile int64_t x782 = INT64_MAX;
	uint32_t x783 = 162212U;
	int64_t x784 = INT64_MIN;
	static int64_t t195 = -30748090LL;

    t195 = ((x781<=(x782<=x783))^x784);

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 328256802U;
	volatile int32_t x786 = -30;
	uint8_t x788 = UINT8_MAX;
	int32_t t196 = 0;

    t196 = ((x785<=(x786<=x787))^x788);

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x790 = INT32_MIN;
	uint64_t t197 = 4047520970176718117LLU;

    t197 = ((x789<=(x790<=x791))^x792);

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x793 = 1657071LLU;
	uint64_t x794 = 4LLU;
	volatile int8_t x796 = INT8_MAX;
	volatile int32_t t198 = -1;

    t198 = ((x793<=(x794<=x795))^x796);

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	static int64_t x798 = INT64_MIN;
	uint32_t x799 = 630U;
	uint32_t x800 = UINT32_MAX;
	uint32_t t199 = 5U;

    t199 = ((x797<=(x798<=x799))^x800);

    if (t199 != 4294967294U) { NG(); } else { ; }
	
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

