
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

uint8_t x1 = 1U;
volatile int32_t x6 = -1;
int32_t x8 = INT32_MIN;
static int32_t t1 = INT32_MIN;
volatile int16_t x13 = -1;
volatile int8_t x15 = INT8_MAX;
int16_t x16 = INT16_MAX;
static int32_t t2 = 683806057;
uint32_t x18 = UINT32_MAX;
int16_t x25 = INT16_MAX;
uint32_t x37 = UINT32_MAX;
uint16_t x55 = UINT16_MAX;
int8_t x61 = INT8_MAX;
uint64_t x64 = UINT64_MAX;
int32_t x67 = 6034076;
volatile int64_t x68 = -1LL;
int8_t x76 = -4;
int32_t t17 = 26279875;
int32_t x77 = INT32_MIN;
uint8_t x83 = UINT8_MAX;
int32_t x86 = INT32_MIN;
static int8_t x87 = 1;
static uint64_t x88 = 220746LLU;
int16_t x89 = INT16_MAX;
static uint8_t x90 = 0U;
int16_t x92 = INT16_MIN;
int64_t x93 = INT64_MIN;
static uint32_t x94 = UINT32_MAX;
int32_t t24 = 2420;
uint64_t x105 = 201435LLU;
static volatile uint64_t x110 = 143LLU;
volatile uint32_t t26 = 2840U;
volatile int32_t x117 = INT32_MIN;
volatile uint32_t t30 = 71172433U;
static int64_t x134 = INT64_MIN;
int8_t x141 = -1;
uint16_t x151 = UINT16_MAX;
int16_t x155 = INT16_MIN;
volatile int32_t t37 = 3097;
static int16_t x164 = -1;
static int64_t x169 = -185716602735105155LL;
int8_t x173 = 28;
static uint64_t x183 = UINT64_MAX;
volatile int8_t x190 = INT8_MIN;
int32_t x191 = -7;
static volatile int32_t t46 = 2160517;
volatile int32_t x193 = 172542;
static int32_t t47 = -89113392;
static int32_t x200 = -1;
int32_t t48 = 126218406;
int16_t x203 = INT16_MAX;
volatile int32_t t49 = -944362;
volatile uint32_t x206 = 1380402U;
volatile uint16_t x211 = UINT16_MAX;
static volatile int32_t t52 = -3;
int32_t x220 = INT32_MIN;
int32_t t55 = -1289391;
int8_t x233 = INT8_MIN;
static volatile uint64_t x234 = 17LLU;
int32_t x236 = INT32_MIN;
static uint64_t x237 = 4886193105LLU;
uint8_t x240 = UINT8_MAX;
int32_t x248 = INT32_MIN;
volatile int32_t t59 = INT32_MIN;
static int32_t x253 = INT32_MAX;
int16_t x254 = INT16_MAX;
int8_t x260 = INT8_MIN;
int16_t x261 = INT16_MAX;
int32_t x262 = 57034475;
static int16_t x266 = -1;
int16_t x268 = -1;
int32_t t64 = -7303;
volatile uint32_t x269 = UINT32_MAX;
static volatile int32_t t65 = 1;
int32_t x275 = 210471;
int32_t x277 = INT32_MIN;
volatile int8_t x279 = -1;
int16_t x283 = -1;
int32_t x285 = INT32_MIN;
uint32_t x300 = 109U;
volatile int8_t x303 = -7;
int32_t x304 = INT32_MIN;
int8_t x314 = INT8_MAX;
volatile int8_t x316 = INT8_MAX;
int8_t x320 = 13;
uint32_t x322 = 19904643U;
int32_t x328 = INT32_MIN;
int32_t x338 = -1;
int16_t x346 = INT16_MIN;
int32_t t86 = -16376;
static uint8_t x360 = 4U;
int64_t x364 = INT64_MAX;
int8_t x365 = INT8_MIN;
static uint16_t x366 = 84U;
int16_t x367 = INT16_MAX;
static volatile int32_t t90 = 548261;
volatile uint8_t x381 = 29U;
int16_t x395 = INT16_MIN;
int32_t x396 = INT32_MAX;
static int64_t x399 = INT64_MAX;
uint64_t x403 = 1627793759389420LLU;
static uint8_t x404 = 2U;
int32_t t99 = 304271;
int16_t x416 = INT16_MIN;
int32_t x426 = -1;
static int64_t x428 = INT64_MIN;
int8_t x430 = -1;
static int16_t x431 = INT16_MIN;
volatile int32_t x439 = INT32_MAX;
volatile int64_t x444 = -1LL;
int64_t x445 = -1LL;
uint64_t x450 = UINT64_MAX;
int16_t x476 = INT16_MIN;
uint64_t x478 = UINT64_MAX;
int64_t x485 = INT64_MIN;
static int64_t x488 = INT64_MIN;
static volatile int64_t t118 = INT64_MIN;
static int8_t x490 = INT8_MIN;
volatile int32_t t119 = 440;
int32_t x494 = INT32_MAX;
static int16_t x500 = -15;
int8_t x509 = INT8_MIN;
volatile int16_t x512 = INT16_MIN;
uint16_t x515 = UINT16_MAX;
int32_t x517 = -1;
int8_t x523 = -1;
volatile uint16_t x524 = 52U;
volatile uint64_t x527 = 118558LLU;
int16_t x528 = 0;
static int64_t x533 = INT64_MIN;
uint64_t x535 = 7364651225267464LLU;
volatile uint16_t x536 = 3667U;
uint64_t x538 = UINT64_MAX;
volatile int16_t x547 = 1782;
int64_t x557 = INT64_MIN;
static int32_t x559 = 9;
int8_t x560 = INT8_MIN;
int16_t x561 = INT16_MAX;
int64_t x563 = INT64_MIN;
volatile uint64_t x567 = 465892002804545175LLU;
int8_t x579 = INT8_MIN;
uint16_t x582 = 19U;
int32_t x586 = 14;
static int32_t x587 = INT32_MIN;
uint16_t x588 = 0U;
int8_t x589 = INT8_MIN;
int8_t x590 = INT8_MIN;
volatile uint16_t x591 = 134U;
static uint8_t x592 = 89U;
uint64_t x598 = 198228LLU;
uint64_t x599 = 2052571551823927LLU;
int8_t x603 = 53;
int16_t x606 = 135;
int8_t x607 = INT8_MAX;
int64_t x614 = -1LL;
uint32_t x616 = UINT32_MAX;
uint32_t t148 = 342U;
int32_t x622 = INT32_MIN;
volatile int32_t t149 = INT32_MIN;
int64_t t150 = 1067720234LL;
int32_t t153 = 1639;
uint64_t x643 = 1037LLU;
int32_t x647 = INT32_MIN;
volatile int64_t t156 = -8460298329LL;
int16_t x653 = 3;
volatile int64_t x655 = INT64_MIN;
uint64_t t158 = 123266106LLU;
static uint64_t x663 = UINT64_MAX;
int8_t x666 = INT8_MIN;
static volatile int32_t t160 = -1475343;
static int8_t x675 = 1;
int64_t x676 = -1LL;
int8_t x682 = INT8_MAX;
static uint64_t t164 = 1329LLU;
volatile int16_t x689 = INT16_MIN;
int32_t x693 = -1;
int32_t x695 = INT32_MIN;
int16_t x696 = 6235;
uint16_t x700 = UINT16_MAX;
volatile uint8_t x703 = 15U;
int64_t x705 = INT64_MIN;
static volatile int16_t x708 = 2;
int64_t x713 = INT64_MAX;
int32_t x714 = INT32_MIN;
int32_t x725 = -144287;
volatile int64_t t174 = INT64_MIN;
int64_t x729 = INT64_MIN;
int64_t x731 = INT64_MAX;
volatile int32_t t175 = -2937578;
int8_t x735 = INT8_MAX;
int16_t x746 = INT16_MIN;
static uint8_t x749 = 3U;
int32_t x750 = INT32_MIN;
static volatile int32_t x761 = -3;
volatile int32_t x781 = INT32_MIN;
int8_t x783 = 44;
volatile int32_t t188 = 0;
int16_t x788 = INT16_MIN;
int64_t x789 = INT64_MIN;
int32_t t191 = -50863930;
uint16_t x800 = 0U;
uint64_t x808 = 14731LLU;
uint64_t x820 = 2550804989LLU;
static int8_t x825 = 28;


void f0(void) {
    	static int16_t x2 = 93;
	uint8_t x3 = UINT8_MAX;
	static uint32_t x4 = UINT32_MAX;
	static uint32_t t0 = 10017231U;

    t0 = (((x1==x2)<=x3)+x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 299;
	int8_t x7 = INT8_MIN;

    t1 = (((x5==x6)<=x7)+x8);

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x14 = UINT32_MAX;

    t2 = (((x13==x14)<=x15)+x16);

    if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 284U;
	int8_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (((x17==x18)<=x19)+x20);

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 548086U;
	int16_t x24 = -1;
	int32_t t4 = 228365343;

    t4 = (((x21==x22)<=x23)+x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = 488182LLU;
	volatile uint64_t t5 = 7030108618328388878LLU;

    t5 = (((x25==x26)<=x27)+x28);

    if (t5 != 488183LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 11LL;
	int64_t x30 = 1700282427317369LL;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = 0LL;
	volatile int64_t t6 = 81665LL;

    t6 = (((x29==x30)<=x31)+x32);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x33 = 78U;
	uint16_t x34 = 227U;
	static uint16_t x35 = 765U;
	uint32_t x36 = 1333882U;
	uint32_t t7 = 13347916U;

    t7 = (((x33==x34)<=x35)+x36);

    if (t7 != 1333883U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x38 = 1374259913919321LL;
	static volatile uint8_t x39 = 5U;
	static uint16_t x40 = UINT16_MAX;
	volatile int32_t t8 = 47;

    t8 = (((x37==x38)<=x39)+x40);

    if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint16_t x42 = UINT16_MAX;
	uint8_t x43 = 16U;
	int32_t x44 = INT32_MIN;
	int32_t t9 = -624;

    t9 = (((x41==x42)<=x43)+x44);

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 3LL;
	static volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = -190398784;

    t10 = (((x45==x46)<=x47)+x48);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = 0;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = INT8_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 5539206107367737994LLU;

    t11 = (((x49==x50)<=x51)+x52);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t12 = 791;

    t12 = (((x53==x54)<=x55)+x56);

    if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = -1192037677511140LL;
	int8_t x58 = -1;
	int16_t x59 = -1;
	static uint64_t x60 = 42466055621752LLU;
	uint64_t t13 = 247156917320656LLU;

    t13 = (((x57==x58)<=x59)+x60);

    if (t13 != 42466055621752LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x62 = -1854954949944151923LL;
	uint16_t x63 = 15004U;
	uint64_t t14 = 12246992LLU;

    t14 = (((x61==x62)<=x63)+x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = -1LL;
	uint8_t x66 = 0U;
	volatile int64_t t15 = 742523563LL;

    t15 = (((x65==x66)<=x67)+x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 5869360094LLU;
	int8_t x70 = INT8_MAX;
	static uint32_t x71 = 90397U;
	uint32_t x72 = 63U;
	static uint32_t t16 = 2028002U;

    t16 = (((x69==x70)<=x71)+x72);

    if (t16 != 64U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	static volatile int32_t x74 = -1;
	int32_t x75 = -1;

    t17 = (((x73==x74)<=x75)+x76);

    if (t17 != -4) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t18 = 6360195056LL;

    t18 = (((x77==x78)<=x79)+x80);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = INT64_MAX;
	volatile int8_t x82 = 1;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t19 = 424409;

    t19 = (((x81==x82)<=x83)+x84);

    if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -817;
	uint64_t t20 = 1040601073LLU;

    t20 = (((x85==x86)<=x87)+x88);

    if (t20 != 220747LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x91 = UINT16_MAX;
	volatile int32_t t21 = -61856;

    t21 = (((x89==x90)<=x91)+x92);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x95 = -19214656;
	volatile int8_t x96 = INT8_MIN;
	int32_t t22 = -620;

    t22 = (((x93==x94)<=x95)+x96);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 79283704U;
	int16_t x100 = -1;
	volatile int32_t t23 = 55906495;

    t23 = (((x97==x98)<=x99)+x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x101 = INT32_MIN;
	volatile int8_t x102 = -36;
	int64_t x103 = 890654LL;
	volatile int8_t x104 = INT8_MAX;

    t24 = (((x101==x102)<=x103)+x104);

    if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = INT8_MAX;
	int16_t x107 = 0;
	static int16_t x108 = INT16_MIN;
	int32_t t25 = 68001;

    t25 = (((x105==x106)<=x107)+x108);

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -4;
	uint8_t x111 = 0U;
	uint32_t x112 = 324675U;

    t26 = (((x109==x110)<=x111)+x112);

    if (t26 != 324676U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	volatile uint64_t x114 = 1163121053333526LLU;
	volatile int16_t x115 = -1;
	volatile int8_t x116 = INT8_MIN;
	int32_t t27 = 10136;

    t27 = (((x113==x114)<=x115)+x116);

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = 23;
	volatile int32_t t28 = -50730;

    t28 = (((x117==x118)<=x119)+x120);

    if (t28 != 23) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	volatile uint8_t x123 = 18U;
	static uint32_t x124 = 3972260U;
	uint32_t t29 = 3U;

    t29 = (((x121==x122)<=x123)+x124);

    if (t29 != 3972261U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -339LL;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 31896459U;
	uint32_t x128 = UINT32_MAX;

    t30 = (((x125==x126)<=x127)+x128);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -1LL;
	uint16_t x130 = 4185U;
	volatile uint64_t x131 = 428LLU;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -6447;

    t31 = (((x129==x130)<=x131)+x132);

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = 26;
	volatile uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 1759U;
	static uint32_t t32 = 58355U;

    t32 = (((x133==x134)<=x135)+x136);

    if (t32 != 1760U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -25;
	int64_t x138 = INT64_MIN;
	volatile int32_t x139 = INT32_MAX;
	static int32_t x140 = -83;
	int32_t t33 = 2237617;

    t33 = (((x137==x138)<=x139)+x140);

    if (t33 != -82) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x142 = 201U;
	int8_t x143 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t34 = 29812;

    t34 = (((x141==x142)<=x143)+x144);

    if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = 1U;
	volatile int16_t x146 = INT16_MIN;
	uint32_t x147 = 9190112U;
	int16_t x148 = -1;
	int32_t t35 = 118;

    t35 = (((x145==x146)<=x147)+x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x149 = UINT64_MAX;
	static uint16_t x150 = 1U;
	static volatile int64_t x152 = INT64_MIN;
	int64_t t36 = 207753391154078799LL;

    t36 = (((x149==x150)<=x151)+x152);

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MAX;
	static volatile int8_t x154 = -31;
	int32_t x156 = -126;

    t37 = (((x153==x154)<=x155)+x156);

    if (t37 != -126) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	static int8_t x158 = INT8_MIN;
	static uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t38 = -281;

    t38 = (((x157==x158)<=x159)+x160);

    if (t38 != 256) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = -43;
	int32_t x162 = INT32_MIN;
	static int32_t x163 = -1;
	int32_t t39 = -18694;

    t39 = (((x161==x162)<=x163)+x164);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x165 = 21U;
	volatile int16_t x166 = -279;
	int16_t x167 = -1;
	volatile int16_t x168 = 41;
	volatile int32_t t40 = -7;

    t40 = (((x165==x166)<=x167)+x168);

    if (t40 != 41) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = 7558U;
	volatile uint32_t t41 = 2662254U;

    t41 = (((x169==x170)<=x171)+x172);

    if (t41 != 7558U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x174 = -57;
	uint64_t x175 = 11349035LLU;
	int8_t x176 = INT8_MIN;
	volatile int32_t t42 = -286798;

    t42 = (((x173==x174)<=x175)+x176);

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x177 = 4147645169296803228LL;
	static uint16_t x178 = 3U;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t43 = 277684408401LL;

    t43 = (((x177==x178)<=x179)+x180);

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 78U;
	int8_t x182 = 1;
	int16_t x184 = INT16_MIN;
	static int32_t t44 = 975007;

    t44 = (((x181==x182)<=x183)+x184);

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = 0U;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = 3U;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t45 = 1449;

    t45 = (((x185==x186)<=x187)+x188);

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x189 = -1;
	static uint16_t x192 = UINT16_MAX;

    t46 = (((x189==x190)<=x191)+x192);

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x194 = 193086868;
	int16_t x195 = INT16_MIN;
	static int8_t x196 = INT8_MIN;

    t47 = (((x193==x194)<=x195)+x196);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x197 = 5889U;
	uint32_t x198 = 58642U;
	volatile int16_t x199 = -1;

    t48 = (((x197==x198)<=x199)+x200);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x201 = 28096653869503852LLU;
	int64_t x202 = INT64_MIN;
	int16_t x204 = INT16_MAX;

    t49 = (((x201==x202)<=x203)+x204);

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MAX;
	int32_t x207 = -1;
	int32_t x208 = -1;
	static int32_t t50 = 1047486;

    t50 = (((x205==x206)<=x207)+x208);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = -1673017157LL;
	int64_t x210 = 132029231010LL;
	uint8_t x212 = UINT8_MAX;
	int32_t t51 = -1;

    t51 = (((x209==x210)<=x211)+x212);

    if (t51 != 256) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	volatile uint8_t x214 = 30U;
	int8_t x215 = INT8_MAX;
	int16_t x216 = INT16_MIN;

    t52 = (((x213==x214)<=x215)+x216);

    if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MIN;
	static int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	int32_t t53 = -2285301;

    t53 = (((x217==x218)<=x219)+x220);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = -1119;
	volatile int32_t t54 = 2;

    t54 = (((x221==x222)<=x223)+x224);

    if (t54 != -1118) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 15U;
	static int32_t x227 = -1;
	uint16_t x228 = 11U;

    t55 = (((x225==x226)<=x227)+x228);

    if (t55 != 11) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = INT8_MIN;
	uint8_t x230 = 19U;
	uint64_t x231 = 7414582313LLU;
	int16_t x232 = 4;
	volatile int32_t t56 = -82807580;

    t56 = (((x229==x230)<=x231)+x232);

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x235 = 302U;
	int32_t t57 = 0;

    t57 = (((x233==x234)<=x235)+x236);

    if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x238 = 1431;
	uint16_t x239 = 5U;
	int32_t t58 = -42067818;

    t58 = (((x237==x238)<=x239)+x240);

    if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;

    t59 = (((x245==x246)<=x247)+x248);

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 51U;
	volatile int16_t x250 = 391;
	volatile int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MAX;
	int32_t t60 = -560;

    t60 = (((x249==x250)<=x251)+x252);

    if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x255 = 570487759U;
	static int64_t x256 = -1LL;
	volatile int64_t t61 = -6684LL;

    t61 = (((x253==x254)<=x255)+x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = -1;
	static uint16_t x258 = UINT16_MAX;
	int32_t x259 = INT32_MAX;
	volatile int32_t t62 = -317273;

    t62 = (((x257==x258)<=x259)+x260);

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x263 = UINT16_MAX;
	static int16_t x264 = 5745;
	volatile int32_t t63 = 9;

    t63 = (((x261==x262)<=x263)+x264);

    if (t63 != 5746) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x265 = -124;
	static int32_t x267 = INT32_MIN;

    t64 = (((x265==x266)<=x267)+x268);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x270 = -176070;
	uint64_t x271 = UINT64_MAX;
	static int16_t x272 = INT16_MAX;

    t65 = (((x269==x270)<=x271)+x272);

    if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = INT64_MIN;
	uint32_t x274 = 194596571U;
	uint8_t x276 = 3U;
	static volatile int32_t t66 = 246392;

    t66 = (((x273==x274)<=x275)+x276);

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x278 = INT8_MIN;
	volatile int64_t x280 = INT64_MIN;
	int64_t t67 = INT64_MIN;

    t67 = (((x277==x278)<=x279)+x280);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x281 = INT32_MIN;
	static int32_t x282 = 1853;
	int8_t x284 = -1;
	volatile int32_t t68 = 1;

    t68 = (((x281==x282)<=x283)+x284);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = -1;
	volatile int32_t t69 = 13;

    t69 = (((x285==x286)<=x287)+x288);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = UINT16_MAX;
	uint16_t x290 = 31171U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = -710325;
	int32_t t70 = -9411885;

    t70 = (((x289==x290)<=x291)+x292);

    if (t70 != -710324) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	uint32_t x295 = 462668U;
	volatile int16_t x296 = INT16_MIN;
	int32_t t71 = 12607;

    t71 = (((x293==x294)<=x295)+x296);

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = 107U;
	volatile uint32_t x298 = 6778818U;
	uint16_t x299 = UINT16_MAX;
	volatile uint32_t t72 = 222900U;

    t72 = (((x297==x298)<=x299)+x300);

    if (t72 != 110U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x301 = 2891U;
	int16_t x302 = -1;
	volatile int32_t t73 = INT32_MIN;

    t73 = (((x301==x302)<=x303)+x304);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -122608;
	int16_t x306 = -5570;
	volatile int16_t x307 = 781;
	static uint64_t x308 = 71282983LLU;
	volatile uint64_t t74 = 109605122925729LLU;

    t74 = (((x305==x306)<=x307)+x308);

    if (t74 != 71282984LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x309 = 5076812;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	int64_t x312 = INT64_MAX;
	int64_t t75 = INT64_MAX;

    t75 = (((x309==x310)<=x311)+x312);

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x313 = INT8_MAX;
	static volatile uint8_t x315 = 0U;
	static volatile int32_t t76 = -856975170;

    t76 = (((x313==x314)<=x315)+x316);

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -1;
	uint16_t x318 = 4U;
	int16_t x319 = -1;
	int32_t t77 = -7873;

    t77 = (((x317==x318)<=x319)+x320);

    if (t77 != 13) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MAX;
	static volatile int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t78 = 66534270;

    t78 = (((x321==x322)<=x323)+x324);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x325 = INT32_MIN;
	static int16_t x326 = -1;
	volatile uint16_t x327 = UINT16_MAX;
	volatile int32_t t79 = 0;

    t79 = (((x325==x326)<=x327)+x328);

    if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 188U;
	volatile uint64_t x332 = UINT64_MAX;
	uint64_t t80 = 57LLU;

    t80 = (((x329==x330)<=x331)+x332);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t81 = UINT32_MAX;

    t81 = (((x333==x334)<=x335)+x336);

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x337 = 64464361493598LLU;
	volatile int64_t x339 = -1LL;
	int8_t x340 = -1;
	int32_t t82 = -1901883;

    t82 = (((x337==x338)<=x339)+x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = 8224806;
	uint8_t x343 = 92U;
	int16_t x344 = INT16_MIN;
	int32_t t83 = 22450094;

    t83 = (((x341==x342)<=x343)+x344);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = -178496;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = (((x345==x346)<=x347)+x348);

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = 1134U;
	int16_t x351 = INT16_MAX;
	volatile int8_t x352 = INT8_MAX;
	int32_t t85 = -10394438;

    t85 = (((x349==x350)<=x351)+x352);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = -1;
	static volatile int8_t x354 = INT8_MIN;
	int16_t x355 = -53;
	static volatile uint8_t x356 = UINT8_MAX;

    t86 = (((x353==x354)<=x355)+x356);

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x357 = 187;
	uint8_t x358 = UINT8_MAX;
	static uint8_t x359 = UINT8_MAX;
	volatile int32_t t87 = 77725273;

    t87 = (((x357==x358)<=x359)+x360);

    if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -1LL;
	volatile int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	int64_t t88 = INT64_MAX;

    t88 = (((x361==x362)<=x363)+x364);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x368 = -2;
	volatile int32_t t89 = 2;

    t89 = (((x365==x366)<=x367)+x368);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	uint64_t x371 = 442752040583LLU;
	int32_t x372 = INT32_MIN;

    t90 = (((x369==x370)<=x371)+x372);

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x373 = INT8_MAX;
	uint8_t x374 = UINT8_MAX;
	int8_t x375 = INT8_MIN;
	static uint8_t x376 = 9U;
	static int32_t t91 = -1585779;

    t91 = (((x373==x374)<=x375)+x376);

    if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = 336;
	static int16_t x378 = INT16_MAX;
	static int64_t x379 = INT64_MAX;
	int8_t x380 = -1;
	static int32_t t92 = 826911740;

    t92 = (((x377==x378)<=x379)+x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x382 = -18023364;
	uint8_t x383 = 2U;
	uint16_t x384 = 610U;
	volatile int32_t t93 = 0;

    t93 = (((x381==x382)<=x383)+x384);

    if (t93 != 611) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = 330763446415424074LLU;
	int16_t x386 = INT16_MAX;
	static uint8_t x387 = UINT8_MAX;
	static uint16_t x388 = 20U;
	volatile int32_t t94 = 1291;

    t94 = (((x385==x386)<=x387)+x388);

    if (t94 != 21) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = 203;
	uint16_t x394 = 673U;
	static volatile int32_t t95 = INT32_MAX;

    t95 = (((x393==x394)<=x395)+x396);

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x397 = INT16_MAX;
	uint16_t x398 = 1843U;
	int8_t x400 = INT8_MIN;
	int32_t t96 = 667224352;

    t96 = (((x397==x398)<=x399)+x400);

    if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x401 = 7U;
	int32_t x402 = -1;
	static volatile int32_t t97 = -7977072;

    t97 = (((x401==x402)<=x403)+x404);

    if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x405 = 66514428U;
	int64_t x406 = -328693750417417LL;
	static volatile int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	int64_t t98 = -190116136869LL;

    t98 = (((x405==x406)<=x407)+x408);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x409 = 0U;
	static int64_t x410 = 6LL;
	uint8_t x411 = 12U;
	volatile int8_t x412 = -3;

    t99 = (((x409==x410)<=x411)+x412);

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x413 = 183201U;
	int64_t x414 = 3194259LL;
	int8_t x415 = -1;
	int32_t t100 = -39;

    t100 = (((x413==x414)<=x415)+x416);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x417 = 28U;
	uint64_t x418 = 20286060115LLU;
	volatile int8_t x419 = INT8_MAX;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t101 = 4365194;

    t101 = (((x417==x418)<=x419)+x420);

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = -55725475167LL;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t102 = -232527106151658LL;

    t102 = (((x421==x422)<=x423)+x424);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = INT16_MAX;
	int16_t x427 = -86;
	volatile int64_t t103 = INT64_MIN;

    t103 = (((x425==x426)<=x427)+x428);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x429 = 3U;
	uint8_t x432 = 13U;
	int32_t t104 = 6138081;

    t104 = (((x429==x430)<=x431)+x432);

    if (t104 != 13) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MAX;
	volatile uint64_t x436 = 13493LLU;
	uint64_t t105 = 10257296LLU;

    t105 = (((x433==x434)<=x435)+x436);

    if (t105 != 13494LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x438 = INT64_MAX;
	int16_t x440 = -1;
	volatile int32_t t106 = 19;

    t106 = (((x437==x438)<=x439)+x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x442 = -52;
	int64_t x443 = 2444198271LL;
	volatile int64_t t107 = -1185034843857971LL;

    t107 = (((x441==x442)<=x443)+x444);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x446 = INT8_MIN;
	volatile int8_t x447 = -2;
	int8_t x448 = INT8_MAX;
	int32_t t108 = -962;

    t108 = (((x445==x446)<=x447)+x448);

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = 1554741;
	uint64_t x451 = 2280328158458136204LLU;
	volatile int32_t x452 = INT32_MIN;
	int32_t t109 = -4257155;

    t109 = (((x449==x450)<=x451)+x452);

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = -1;
	int32_t x454 = INT32_MAX;
	volatile uint8_t x455 = 4U;
	static int8_t x456 = 4;
	static int32_t t110 = 9514048;

    t110 = (((x453==x454)<=x455)+x456);

    if (t110 != 5) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	int32_t x458 = -7;
	uint16_t x459 = 75U;
	int8_t x460 = 0;
	volatile int32_t t111 = 29545;

    t111 = (((x457==x458)<=x459)+x460);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x461 = -6;
	volatile int8_t x462 = INT8_MIN;
	static int8_t x463 = INT8_MIN;
	static uint64_t x464 = UINT64_MAX;
	static uint64_t t112 = UINT64_MAX;

    t112 = (((x461==x462)<=x463)+x464);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x465 = -1;
	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MAX;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t113 = -61;

    t113 = (((x465==x466)<=x467)+x468);

    if (t113 != 256) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x469 = 210205LLU;
	int16_t x470 = INT16_MIN;
	int64_t x471 = -1LL;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t114 = UINT64_MAX;

    t114 = (((x469==x470)<=x471)+x472);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x473 = INT8_MAX;
	uint8_t x474 = 58U;
	uint16_t x475 = UINT16_MAX;
	volatile int32_t t115 = -12;

    t115 = (((x473==x474)<=x475)+x476);

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x477 = UINT32_MAX;
	uint16_t x479 = 1U;
	volatile uint16_t x480 = 226U;
	int32_t t116 = 6;

    t116 = (((x477==x478)<=x479)+x480);

    if (t116 != 227) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MAX;
	volatile uint64_t x484 = UINT64_MAX;
	uint64_t t117 = 6306267022023733LLU;

    t117 = (((x481==x482)<=x483)+x484);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x486 = 1;
	volatile int32_t x487 = INT32_MIN;

    t118 = (((x485==x486)<=x487)+x488);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = -1571LL;
	int64_t x491 = 5530LL;
	static int32_t x492 = INT32_MIN;

    t119 = (((x489==x490)<=x491)+x492);

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = -1;
	uint32_t x495 = 575147U;
	int64_t x496 = -1LL;
	static int64_t t120 = -193815807420217LL;

    t120 = (((x493==x494)<=x495)+x496);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x497 = 7;
	volatile uint64_t x498 = UINT64_MAX;
	volatile int32_t x499 = 156214378;
	volatile int32_t t121 = 21085041;

    t121 = (((x497==x498)<=x499)+x500);

    if (t121 != -14) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x501 = INT16_MIN;
	uint16_t x502 = 275U;
	uint8_t x503 = UINT8_MAX;
	static volatile int16_t x504 = -1;
	volatile int32_t t122 = 427;

    t122 = (((x501==x502)<=x503)+x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = -4491;
	int64_t x506 = INT64_MIN;
	int16_t x507 = INT16_MIN;
	static int32_t x508 = -1;
	volatile int32_t t123 = -126650;

    t123 = (((x505==x506)<=x507)+x508);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x510 = INT16_MIN;
	static uint8_t x511 = 100U;
	int32_t t124 = -4213847;

    t124 = (((x509==x510)<=x511)+x512);

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1;
	int16_t x514 = INT16_MIN;
	int8_t x516 = INT8_MAX;
	volatile int32_t t125 = -51108755;

    t125 = (((x513==x514)<=x515)+x516);

    if (t125 != 128) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x518 = 2721U;
	volatile int16_t x519 = -783;
	static uint8_t x520 = 16U;
	volatile int32_t t126 = 8257035;

    t126 = (((x517==x518)<=x519)+x520);

    if (t126 != 16) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x521 = 56U;
	int64_t x522 = -1LL;
	int32_t t127 = -14463;

    t127 = (((x521==x522)<=x523)+x524);

    if (t127 != 52) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = INT64_MIN;
	static int32_t x526 = -1;
	int32_t t128 = 178;

    t128 = (((x525==x526)<=x527)+x528);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x529 = 13507;
	int64_t x530 = INT64_MIN;
	uint16_t x531 = 709U;
	int16_t x532 = INT16_MIN;
	int32_t t129 = 31634908;

    t129 = (((x529==x530)<=x531)+x532);

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x534 = UINT16_MAX;
	int32_t t130 = 14034;

    t130 = (((x533==x534)<=x535)+x536);

    if (t130 != 3668) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x539 = 50267631LL;
	uint16_t x540 = 91U;
	static volatile int32_t t131 = -34920209;

    t131 = (((x537==x538)<=x539)+x540);

    if (t131 != 92) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x541 = 23003857611596257LLU;
	uint64_t x542 = 45300196997LLU;
	static uint8_t x543 = UINT8_MAX;
	static uint32_t x544 = 1224783569U;
	static volatile uint32_t t132 = 7014164U;

    t132 = (((x541==x542)<=x543)+x544);

    if (t132 != 1224783570U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x545 = -1;
	int16_t x546 = 446;
	volatile int8_t x548 = INT8_MIN;
	static volatile int32_t t133 = 28;

    t133 = (((x545==x546)<=x547)+x548);

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x549 = UINT64_MAX;
	static uint8_t x550 = UINT8_MAX;
	uint32_t x551 = 1559170475U;
	uint64_t x552 = 10578223LLU;
	volatile uint64_t t134 = 2860429721LLU;

    t134 = (((x549==x550)<=x551)+x552);

    if (t134 != 10578224LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MAX;
	int16_t x555 = INT16_MAX;
	int8_t x556 = 4;
	volatile int32_t t135 = 44837945;

    t135 = (((x553==x554)<=x555)+x556);

    if (t135 != 5) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x558 = -1;
	int32_t t136 = 5;

    t136 = (((x557==x558)<=x559)+x560);

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x562 = INT64_MAX;
	volatile int16_t x564 = 1;
	int32_t t137 = 1011353949;

    t137 = (((x561==x562)<=x563)+x564);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x565 = 14;
	uint8_t x566 = 68U;
	uint64_t x568 = 413626811995564381LLU;
	volatile uint64_t t138 = 17695544748560LLU;

    t138 = (((x565==x566)<=x567)+x568);

    if (t138 != 413626811995564382LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = INT16_MIN;
	uint16_t x574 = 7U;
	static int8_t x575 = -1;
	static volatile int16_t x576 = INT16_MAX;
	volatile int32_t t139 = -16;

    t139 = (((x573==x574)<=x575)+x576);

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x577 = INT64_MAX;
	volatile uint16_t x578 = 22931U;
	uint64_t x580 = 44284605202294LLU;
	uint64_t t140 = 859023224812LLU;

    t140 = (((x577==x578)<=x579)+x580);

    if (t140 != 44284605202294LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = 9887U;
	int16_t x583 = INT16_MAX;
	uint8_t x584 = 3U;
	static int32_t t141 = 107;

    t141 = (((x581==x582)<=x583)+x584);

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = INT16_MAX;
	volatile int32_t t142 = 897;

    t142 = (((x585==x586)<=x587)+x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t t143 = -11872;

    t143 = (((x589==x590)<=x591)+x592);

    if (t143 != 90) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x597 = -1;
	int16_t x600 = INT16_MIN;
	int32_t t144 = -2040161;

    t144 = (((x597==x598)<=x599)+x600);

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x601 = 71U;
	int16_t x602 = INT16_MIN;
	static int16_t x604 = INT16_MIN;
	static int32_t t145 = 0;

    t145 = (((x601==x602)<=x603)+x604);

    if (t145 != -32767) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = INT8_MAX;
	int32_t x608 = -5855;
	volatile int32_t t146 = -38;

    t146 = (((x605==x606)<=x607)+x608);

    if (t146 != -5854) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = INT64_MAX;
	int8_t x610 = INT8_MAX;
	int8_t x611 = -1;
	uint8_t x612 = 10U;
	int32_t t147 = 41;

    t147 = (((x609==x610)<=x611)+x612);

    if (t147 != 10) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x613 = -1;
	static volatile uint64_t x615 = 120340784869LLU;

    t148 = (((x613==x614)<=x615)+x616);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x621 = 126;
	int32_t x623 = -1;
	static int32_t x624 = INT32_MIN;

    t149 = (((x621==x622)<=x623)+x624);

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x625 = UINT8_MAX;
	int64_t x626 = INT64_MIN;
	volatile int32_t x627 = -3;
	int64_t x628 = -927530443LL;

    t150 = (((x625==x626)<=x627)+x628);

    if (t150 != -927530443LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x629 = 60333495LLU;
	uint64_t x630 = 565853384LLU;
	uint32_t x631 = 20558320U;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t151 = 47;

    t151 = (((x629==x630)<=x631)+x632);

    if (t151 != 65536) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x633 = 776;
	uint32_t x634 = 2U;
	static int16_t x635 = INT16_MAX;
	uint16_t x636 = 6U;
	int32_t t152 = -889;

    t152 = (((x633==x634)<=x635)+x636);

    if (t152 != 7) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x637 = 5LLU;
	int16_t x638 = INT16_MIN;
	static int32_t x639 = -1;
	int16_t x640 = -1;

    t153 = (((x637==x638)<=x639)+x640);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x641 = -1;
	uint16_t x642 = 0U;
	static int16_t x644 = 2424;
	volatile int32_t t154 = 456;

    t154 = (((x641==x642)<=x643)+x644);

    if (t154 != 2425) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x645 = -1;
	uint16_t x646 = UINT16_MAX;
	int16_t x648 = 761;
	static int32_t t155 = -453;

    t155 = (((x645==x646)<=x647)+x648);

    if (t155 != 761) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = -1LL;
	volatile uint64_t x650 = UINT64_MAX;
	volatile int32_t x651 = -16138;
	int64_t x652 = -1LL;

    t156 = (((x649==x650)<=x651)+x652);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x654 = -1;
	int32_t x656 = INT32_MAX;
	int32_t t157 = INT32_MAX;

    t157 = (((x653==x654)<=x655)+x656);

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x657 = UINT16_MAX;
	int8_t x658 = -1;
	uint64_t x659 = 14447834756885LLU;
	static uint64_t x660 = UINT64_MAX;

    t158 = (((x657==x658)<=x659)+x660);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = -1;
	static uint64_t x662 = 548142LLU;
	int64_t x664 = -27803527189120LL;
	volatile int64_t t159 = -6795129703714LL;

    t159 = (((x661==x662)<=x663)+x664);

    if (t159 != -27803527189119LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x665 = INT32_MAX;
	int16_t x667 = -1;
	uint16_t x668 = 0U;

    t160 = (((x665==x666)<=x667)+x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = INT32_MIN;
	int32_t x670 = -1;
	int64_t x671 = INT64_MAX;
	static int8_t x672 = -1;
	int32_t t161 = 908;

    t161 = (((x669==x670)<=x671)+x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = -79LL;
	int64_t x674 = -1LL;
	static int64_t t162 = 47738236584LL;

    t162 = (((x673==x674)<=x675)+x676);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = INT64_MAX;
	static int16_t x678 = -1386;
	static int16_t x679 = INT16_MIN;
	static uint8_t x680 = 0U;
	static int32_t t163 = -250648;

    t163 = (((x677==x678)<=x679)+x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x681 = UINT16_MAX;
	static uint16_t x683 = UINT16_MAX;
	uint64_t x684 = 2764473LLU;

    t164 = (((x681==x682)<=x683)+x684);

    if (t164 != 2764474LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = INT32_MIN;
	volatile int64_t x686 = -227LL;
	int64_t x687 = INT64_MIN;
	static uint16_t x688 = 1452U;
	volatile int32_t t165 = 158417216;

    t165 = (((x685==x686)<=x687)+x688);

    if (t165 != 1452) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x690 = -100;
	int8_t x691 = -1;
	int32_t x692 = -1;
	volatile int32_t t166 = 447122417;

    t166 = (((x689==x690)<=x691)+x692);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x694 = 1167985LL;
	volatile int32_t t167 = 96;

    t167 = (((x693==x694)<=x695)+x696);

    if (t167 != 6235) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x697 = UINT16_MAX;
	volatile int32_t x698 = INT32_MAX;
	static uint8_t x699 = 5U;
	int32_t t168 = 370848;

    t168 = (((x697==x698)<=x699)+x700);

    if (t168 != 65536) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x701 = INT8_MIN;
	volatile uint8_t x702 = 1U;
	volatile int8_t x704 = INT8_MIN;
	volatile int32_t t169 = -139;

    t169 = (((x701==x702)<=x703)+x704);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x706 = 14LLU;
	static int32_t x707 = INT32_MIN;
	int32_t t170 = 1;

    t170 = (((x705==x706)<=x707)+x708);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x715 = INT64_MIN;
	int16_t x716 = INT16_MAX;
	static int32_t t171 = 626;

    t171 = (((x713==x714)<=x715)+x716);

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = -1;
	int64_t x719 = 997450LL;
	int16_t x720 = -121;
	volatile int32_t t172 = 213808618;

    t172 = (((x717==x718)<=x719)+x720);

    if (t172 != -120) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x721 = UINT16_MAX;
	int64_t x722 = INT64_MIN;
	int16_t x723 = INT16_MIN;
	uint8_t x724 = 6U;
	volatile int32_t t173 = 129238;

    t173 = (((x721==x722)<=x723)+x724);

    if (t173 != 6) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x726 = -1;
	volatile int8_t x727 = -61;
	int64_t x728 = INT64_MIN;

    t174 = (((x725==x726)<=x727)+x728);

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x730 = INT32_MIN;
	volatile uint8_t x732 = 45U;

    t175 = (((x729==x730)<=x731)+x732);

    if (t175 != 46) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x733 = -11143594;
	volatile int16_t x734 = INT16_MAX;
	int16_t x736 = -1;
	volatile int32_t t176 = -424;

    t176 = (((x733==x734)<=x735)+x736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x737 = 2U;
	volatile uint8_t x738 = 2U;
	int16_t x739 = INT16_MAX;
	int16_t x740 = INT16_MIN;
	static volatile int32_t t177 = -121369932;

    t177 = (((x737==x738)<=x739)+x740);

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = -1;
	static int32_t x742 = -356116379;
	int32_t x743 = INT32_MIN;
	static uint64_t x744 = UINT64_MAX;
	uint64_t t178 = UINT64_MAX;

    t178 = (((x741==x742)<=x743)+x744);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = INT32_MAX;
	static uint8_t x747 = UINT8_MAX;
	static uint32_t x748 = 22609185U;
	static volatile uint32_t t179 = 233950U;

    t179 = (((x745==x746)<=x747)+x748);

    if (t179 != 22609186U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x751 = INT32_MIN;
	int64_t x752 = INT64_MAX;
	volatile int64_t t180 = INT64_MAX;

    t180 = (((x749==x750)<=x751)+x752);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MIN;
	volatile uint64_t x756 = 717514LLU;
	uint64_t t181 = 71LLU;

    t181 = (((x753==x754)<=x755)+x756);

    if (t181 != 717514LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x757 = 41701015193340LL;
	static int64_t x758 = -56831023488LL;
	static int64_t x759 = INT64_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t182 = 84142217;

    t182 = (((x757==x758)<=x759)+x760);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x762 = INT16_MIN;
	int16_t x763 = INT16_MAX;
	volatile int16_t x764 = INT16_MIN;
	static int32_t t183 = -755274;

    t183 = (((x761==x762)<=x763)+x764);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x765 = INT8_MAX;
	int64_t x766 = INT64_MIN;
	static uint16_t x767 = UINT16_MAX;
	int64_t x768 = INT64_MIN;
	static int64_t t184 = -8166651558LL;

    t184 = (((x765==x766)<=x767)+x768);

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x769 = -16313999460LL;
	uint32_t x770 = UINT32_MAX;
	uint64_t x771 = 262LLU;
	int16_t x772 = 1;
	int32_t t185 = -293954;

    t185 = (((x769==x770)<=x771)+x772);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x773 = INT32_MIN;
	volatile int64_t x774 = -419384136LL;
	int8_t x775 = -1;
	static volatile uint8_t x776 = UINT8_MAX;
	static int32_t t186 = -6;

    t186 = (((x773==x774)<=x775)+x776);

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x777 = 67U;
	static uint32_t x778 = 13U;
	int64_t x779 = 714LL;
	volatile int32_t x780 = 239;
	static volatile int32_t t187 = -76536;

    t187 = (((x777==x778)<=x779)+x780);

    if (t187 != 240) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x782 = UINT64_MAX;
	int8_t x784 = -9;

    t188 = (((x781==x782)<=x783)+x784);

    if (t188 != -8) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x785 = INT8_MAX;
	uint8_t x786 = 0U;
	uint8_t x787 = 4U;
	volatile int32_t t189 = -52;

    t189 = (((x785==x786)<=x787)+x788);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x790 = INT16_MAX;
	int8_t x791 = INT8_MAX;
	static volatile uint16_t x792 = UINT16_MAX;
	volatile int32_t t190 = -1554149;

    t190 = (((x789==x790)<=x791)+x792);

    if (t190 != 65536) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x794 = 40827783;
	int64_t x795 = 59LL;
	int16_t x796 = -5498;

    t191 = (((x793==x794)<=x795)+x796);

    if (t191 != -5497) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x797 = INT8_MAX;
	uint64_t x798 = 60970LLU;
	int16_t x799 = 6;
	volatile int32_t t192 = 1;

    t192 = (((x797==x798)<=x799)+x800);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x801 = 66713938;
	volatile uint32_t x802 = UINT32_MAX;
	int64_t x803 = 305288256264LL;
	int64_t x804 = 240117229576491LL;
	volatile int64_t t193 = -205LL;

    t193 = (((x801==x802)<=x803)+x804);

    if (t193 != 240117229576492LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = -1;
	int32_t x806 = INT32_MIN;
	volatile int8_t x807 = INT8_MAX;
	volatile uint64_t t194 = 3510418715LLU;

    t194 = (((x805==x806)<=x807)+x808);

    if (t194 != 14732LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = INT32_MIN;
	volatile int8_t x810 = 1;
	int16_t x811 = -65;
	int32_t x812 = INT32_MAX;
	int32_t t195 = INT32_MAX;

    t195 = (((x809==x810)<=x811)+x812);

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = INT16_MIN;
	uint32_t x814 = 3U;
	uint64_t x815 = 1276630LLU;
	static uint8_t x816 = 18U;
	volatile int32_t t196 = 14;

    t196 = (((x813==x814)<=x815)+x816);

    if (t196 != 19) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x817 = UINT64_MAX;
	static volatile int32_t x818 = INT32_MIN;
	uint32_t x819 = 2006093191U;
	uint64_t t197 = 456457445588202LLU;

    t197 = (((x817==x818)<=x819)+x820);

    if (t197 != 2550804990LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x821 = 1195809664LLU;
	int16_t x822 = -1051;
	static int32_t x823 = INT32_MIN;
	int32_t x824 = INT32_MIN;
	static int32_t t198 = INT32_MIN;

    t198 = (((x821==x822)<=x823)+x824);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x826 = 652172U;
	uint16_t x827 = 102U;
	volatile int32_t x828 = 360609269;
	int32_t t199 = -1803727;

    t199 = (((x825==x826)<=x827)+x828);

    if (t199 != 360609270) { NG(); } else { ; }
	
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

