
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

static int8_t x1 = INT8_MIN;
uint32_t x7 = 1708402011U;
int16_t x10 = INT16_MIN;
int32_t x13 = INT32_MIN;
int32_t x15 = 30;
static volatile int16_t x16 = INT16_MIN;
static int8_t x20 = INT8_MAX;
int16_t x21 = INT16_MIN;
static volatile int8_t x23 = -24;
int8_t x24 = -11;
int8_t x25 = 31;
int8_t x33 = INT8_MIN;
int8_t x40 = 1;
volatile int32_t t9 = -9744198;
uint16_t x43 = 4U;
int8_t x45 = -2;
int32_t x46 = -1;
static uint64_t x47 = UINT64_MAX;
static volatile int32_t t12 = 1522;
uint64_t x54 = 231835660526LLU;
int32_t x55 = INT32_MIN;
static int64_t x60 = -1LL;
volatile uint16_t x64 = UINT16_MAX;
volatile int32_t x65 = 3;
int16_t x67 = 0;
int8_t x76 = 25;
int32_t x78 = -1;
volatile int32_t t19 = 11775;
int32_t x82 = -20904402;
uint32_t x85 = 372658765U;
volatile int32_t t22 = 40;
volatile int32_t t23 = 3;
static volatile uint8_t x107 = UINT8_MAX;
int8_t x112 = -1;
int16_t x116 = INT16_MIN;
uint16_t x121 = UINT16_MAX;
uint64_t x127 = UINT64_MAX;
uint16_t x134 = 1U;
int64_t x146 = -1LL;
uint8_t x153 = 11U;
volatile int32_t t38 = 3418;
volatile int8_t x158 = INT8_MIN;
int16_t x163 = INT16_MAX;
static uint16_t x164 = UINT16_MAX;
static int16_t x172 = 1;
int32_t t42 = 450424042;
int8_t x174 = INT8_MIN;
uint64_t x177 = UINT64_MAX;
int8_t x185 = INT8_MAX;
volatile int64_t x193 = 33650908631581482LL;
uint8_t x194 = UINT8_MAX;
int8_t x195 = 0;
static uint8_t x200 = 2U;
int16_t x206 = -1;
int16_t x207 = 5;
static volatile int8_t x212 = 1;
uint16_t x218 = 227U;
volatile int16_t x221 = -1;
volatile int64_t x223 = INT64_MIN;
volatile int16_t x225 = 1846;
static int32_t t55 = 7221782;
volatile uint32_t x229 = 5492U;
static int8_t x230 = INT8_MIN;
int64_t x245 = INT64_MIN;
static volatile int8_t x246 = 59;
volatile int32_t x251 = 332975;
volatile uint64_t x254 = UINT64_MAX;
int64_t x260 = INT64_MAX;
uint8_t x262 = 65U;
volatile int16_t x264 = INT16_MIN;
int16_t x267 = 60;
static int16_t x269 = 25;
int8_t x270 = 1;
int8_t x271 = INT8_MIN;
int32_t t65 = 53691955;
volatile int32_t x300 = -188575822;
volatile int16_t x302 = INT16_MIN;
int32_t x303 = INT32_MIN;
uint32_t x308 = UINT32_MAX;
int8_t x309 = INT8_MIN;
int8_t x313 = INT8_MAX;
uint8_t x317 = 85U;
uint8_t x322 = 7U;
static int64_t x325 = INT64_MIN;
uint16_t x326 = 104U;
int64_t x331 = INT64_MIN;
volatile int32_t t79 = 753;
int8_t x335 = INT8_MIN;
uint32_t x338 = UINT32_MAX;
uint32_t x348 = 6354249U;
uint64_t x350 = 5193609LLU;
int16_t x352 = -1;
uint16_t x353 = 86U;
static volatile int32_t x358 = INT32_MIN;
volatile uint32_t x363 = 142375U;
static uint8_t x370 = 6U;
int16_t x374 = INT16_MAX;
static uint8_t x376 = UINT8_MAX;
int64_t x377 = INT64_MIN;
int32_t x380 = INT32_MIN;
uint64_t x382 = 1054684416465LLU;
static uint8_t x384 = UINT8_MAX;
int8_t x389 = 0;
static int32_t x390 = INT32_MIN;
volatile int8_t x397 = INT8_MIN;
int64_t x399 = INT64_MIN;
volatile int8_t x400 = -1;
uint64_t x405 = UINT64_MAX;
static volatile int32_t t98 = -63052;
uint64_t x414 = 28463805634720434LLU;
volatile int32_t t99 = -3;
static int16_t x424 = INT16_MIN;
uint16_t x431 = UINT16_MAX;
volatile int32_t t103 = 19432;
uint32_t x447 = 1117723U;
uint32_t x459 = 220839U;
int32_t x460 = INT32_MIN;
volatile int32_t t113 = 153;
volatile int16_t x474 = INT16_MAX;
volatile int64_t x476 = -1LL;
int32_t t115 = 301;
volatile int8_t x485 = INT8_MAX;
static volatile int32_t x489 = 35460;
int16_t x491 = -1;
volatile int32_t t119 = 9497517;
int32_t x506 = 1;
int64_t x509 = -22570LL;
volatile int16_t x510 = INT16_MAX;
uint64_t x514 = UINT64_MAX;
int32_t t123 = -16330344;
static volatile int8_t x519 = 15;
volatile int8_t x523 = INT8_MIN;
int8_t x526 = -1;
int16_t x533 = -1;
int32_t x534 = -4572991;
int16_t x544 = -1;
int16_t x547 = INT16_MAX;
int8_t x548 = 0;
int32_t x556 = INT32_MIN;
volatile uint64_t x559 = UINT64_MAX;
static int8_t x561 = -29;
int8_t x569 = 0;
int32_t x570 = 7;
uint64_t x571 = UINT64_MAX;
int32_t x574 = -2092476;
int8_t x576 = INT8_MIN;
int32_t t138 = 6721191;
int64_t x579 = 434206024LL;
int32_t t139 = -18951964;
int32_t t140 = 48;
int64_t x586 = 1004052746920595196LL;
uint16_t x588 = 3778U;
int16_t x596 = -1;
int8_t x598 = INT8_MIN;
static int64_t x599 = INT64_MIN;
uint64_t x600 = UINT64_MAX;
static int32_t t145 = 251142564;
int64_t x606 = INT64_MIN;
static uint16_t x610 = UINT16_MAX;
int8_t x613 = INT8_MIN;
static int64_t x617 = -1LL;
volatile uint16_t x628 = 20044U;
int32_t x632 = INT32_MIN;
volatile int32_t t152 = 24752819;
uint16_t x633 = 993U;
volatile int32_t x638 = INT32_MIN;
volatile uint16_t x639 = 214U;
volatile int64_t x641 = INT64_MAX;
int32_t t156 = 588534813;
int64_t x652 = INT64_MIN;
volatile int8_t x653 = -46;
int32_t x659 = -209026;
int32_t x667 = INT32_MIN;
uint32_t x668 = 705U;
int32_t t161 = 966829981;
int8_t x672 = INT8_MAX;
uint64_t x674 = UINT64_MAX;
static volatile int64_t x680 = -1LL;
uint64_t x683 = 6212903537792226945LLU;
int32_t x686 = -1;
uint32_t x687 = 13U;
int64_t x695 = INT64_MIN;
volatile int32_t t168 = 422276;
static int8_t x703 = -1;
static int32_t t169 = 436;
volatile int32_t t170 = -1766;
int16_t x712 = INT16_MIN;
static int64_t x714 = 3540851153811566LL;
volatile uint32_t x720 = 9343U;
volatile int32_t t175 = -471;
volatile int32_t t179 = 52890;
volatile int8_t x752 = -1;
int64_t x758 = INT64_MIN;
volatile int64_t x760 = INT64_MIN;
volatile uint8_t x768 = 1U;
int16_t x776 = -1;
volatile int8_t x780 = 1;
uint16_t x781 = 31U;
int32_t x783 = -1;
uint16_t x793 = UINT16_MAX;
int16_t x795 = -1;
static int8_t x798 = -1;
int16_t x801 = -1;
uint8_t x815 = 45U;
volatile int32_t t197 = 6100;
int16_t x821 = 14128;
int32_t x822 = INT32_MIN;


void f0(void) {
    	static int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = -3010613;

    t0 = ((x1%x2)>(x3&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 0U;
	volatile int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 416417397;

    t1 = ((x5%x6)>(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	static uint8_t x11 = 51U;
	static uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -7;

    t2 = ((x9%x10)>(x11&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	static int32_t t3 = 21;

    t3 = ((x13%x14)>(x15&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1622220;
	static int8_t x18 = INT8_MAX;
	int8_t x19 = -1;
	static volatile int32_t t4 = 0;

    t4 = ((x17%x18)>(x19&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	static volatile int32_t t5 = 35;

    t5 = ((x21%x22)>(x23&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 152131636868440LL;
	static int8_t x27 = INT8_MIN;
	uint16_t x28 = 2U;
	volatile int32_t t6 = 16;

    t6 = ((x25%x26)>(x27&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MAX;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -69191446;

    t7 = ((x29%x30)>(x31&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = 26030U;
	static int16_t x35 = -7753;
	volatile uint8_t x36 = 2U;
	int32_t t8 = 29435;

    t8 = ((x33%x34)>(x35&x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 66868149095844980LLU;
	static int16_t x38 = 2;
	int16_t x39 = -1;

    t9 = ((x37%x38)>(x39&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 17770U;
	uint32_t x42 = 237948151U;
	int32_t x44 = -1;
	int32_t t10 = 3988199;

    t10 = ((x41%x42)>(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -3;

    t11 = ((x45%x46)>(x47&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	static int8_t x50 = 14;
	int16_t x51 = -390;
	volatile int32_t x52 = -849922102;

    t12 = ((x49%x50)>(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 0;

    t13 = ((x53%x54)>(x55&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 0;
	int8_t x58 = 58;
	volatile int8_t x59 = INT8_MIN;
	static volatile int32_t t14 = 911015152;

    t14 = ((x57%x58)>(x59&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static uint64_t x62 = UINT64_MAX;
	int16_t x63 = -179;
	int32_t t15 = 110;

    t15 = ((x61%x62)>(x63&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x66 = 704LLU;
	static int64_t x68 = INT64_MIN;
	int32_t t16 = 2;

    t16 = ((x65%x66)>(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 103081U;
	uint8_t x70 = 12U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 2825480;

    t17 = ((x69%x70)>(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	static int8_t x74 = INT8_MAX;
	uint32_t x75 = 74U;
	volatile int32_t t18 = 0;

    t18 = ((x73%x74)>(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	int16_t x79 = -1;
	int64_t x80 = 189621489814393255LL;

    t19 = ((x77%x78)>(x79&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	volatile int16_t x83 = INT16_MAX;
	uint32_t x84 = 3712U;
	int32_t t20 = 28;

    t20 = ((x81%x82)>(x83&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -56507;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 3814;

    t21 = ((x85%x86)>(x87&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = 43987949;
	int64_t x91 = INT64_MIN;
	int16_t x92 = -34;

    t22 = ((x89%x90)>(x91&x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x93 = 2U;
	uint16_t x94 = 26U;
	int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = UINT64_MAX;

    t23 = ((x93%x94)>(x95&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -920;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 3589952953LLU;
	volatile int32_t t24 = -1;

    t24 = ((x97%x98)>(x99&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MAX;
	volatile uint32_t x103 = UINT32_MAX;
	uint64_t x104 = 1436LLU;
	volatile int32_t t25 = -475605541;

    t25 = ((x101%x102)>(x103&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int32_t x106 = 5;
	int32_t x108 = -1;
	volatile int32_t t26 = 10;

    t26 = ((x105%x106)>(x107&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x109 = 12U;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = 1U;
	volatile int32_t t27 = 2364250;

    t27 = ((x109%x110)>(x111&x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	volatile int64_t x114 = INT64_MIN;
	uint16_t x115 = 3590U;
	int32_t t28 = 24;

    t28 = ((x113%x114)>(x115&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 1582932U;
	uint16_t x118 = 2042U;
	volatile int8_t x119 = 25;
	int16_t x120 = 3258;
	static volatile int32_t t29 = -5146;

    t29 = ((x117%x118)>(x119&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x122 = INT64_MIN;
	static uint8_t x123 = 31U;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = 3460;

    t30 = ((x121%x122)>(x123&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = 15;
	uint32_t x128 = 18U;
	volatile int32_t t31 = -25723;

    t31 = ((x125%x126)>(x127&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	uint64_t x131 = UINT64_MAX;
	static int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = 7361;

    t32 = ((x129%x130)>(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	uint64_t x135 = UINT64_MAX;
	volatile int32_t x136 = -1;
	static int32_t t33 = -4;

    t33 = ((x133%x134)>(x135&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	volatile uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 1U;
	static int32_t t34 = 319455;

    t34 = ((x137%x138)>(x139&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -330;
	int16_t x142 = INT16_MIN;
	int64_t x143 = 45LL;
	static uint8_t x144 = 0U;
	volatile int32_t t35 = -2756696;

    t35 = ((x141%x142)>(x143&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = UINT64_MAX;
	volatile int64_t x147 = INT64_MAX;
	uint64_t x148 = 688702991LLU;
	volatile int32_t t36 = 90644319;

    t36 = ((x145%x146)>(x147&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	static int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -159121;

    t37 = ((x149%x150)>(x151&x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	int8_t x155 = 1;
	uint8_t x156 = 3U;

    t38 = ((x153%x154)>(x155&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 11376518U;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 13099;

    t39 = ((x157%x158)>(x159&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	volatile int64_t x162 = -1910839363399LL;
	volatile int32_t t40 = 37250608;

    t40 = ((x161%x162)>(x163&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	static int32_t x166 = 848;
	static int16_t x167 = -1;
	int16_t x168 = -1;
	volatile int32_t t41 = -53993;

    t41 = ((x165%x166)>(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -1LL;
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = INT32_MAX;

    t42 = ((x169%x170)>(x171&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	volatile uint64_t x175 = 25162528878795LLU;
	volatile int16_t x176 = -168;
	int32_t t43 = -3;

    t43 = ((x173%x174)>(x175&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = 926626842;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = -7042140;

    t44 = ((x177%x178)>(x179&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	uint8_t x182 = 123U;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 21263709LLU;
	volatile int32_t t45 = -904242;

    t45 = ((x181%x182)>(x183&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MAX;
	int16_t x188 = -189;
	int32_t t46 = 1649;

    t46 = ((x185%x186)>(x187&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -87442;

    t47 = ((x189%x190)>(x191&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x196 = -1LL;
	int32_t t48 = -86197;

    t48 = ((x193%x194)>(x195&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = 13U;
	int8_t x198 = INT8_MAX;
	int64_t x199 = -1LL;
	static int32_t t49 = -790857087;

    t49 = ((x197%x198)>(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x201 = 26U;
	int16_t x202 = -1;
	static volatile int16_t x203 = INT16_MIN;
	volatile int8_t x204 = -1;
	int32_t t50 = 110348657;

    t50 = ((x201%x202)>(x203&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x205 = 191LLU;
	volatile uint32_t x208 = 6U;
	volatile int32_t t51 = 20;

    t51 = ((x205%x206)>(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = 1010;
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = 205U;
	volatile int32_t t52 = -266831;

    t52 = ((x209%x210)>(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x217 = INT64_MIN;
	int8_t x219 = -7;
	int8_t x220 = -1;
	int32_t t53 = 297;

    t53 = ((x217%x218)>(x219&x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x222 = 1453;
	int8_t x224 = -1;
	int32_t t54 = 19439720;

    t54 = ((x221%x222)>(x223&x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x226 = 2198113746765038LLU;
	int32_t x227 = INT32_MAX;
	int8_t x228 = 0;

    t55 = ((x225%x226)>(x227&x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 118LLU;
	static int32_t t56 = -29;

    t56 = ((x229%x230)>(x231&x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = 19481955896LLU;
	int32_t x234 = -1;
	int64_t x235 = 5653454431433737LL;
	static int32_t x236 = 9134;
	static int32_t t57 = -16;

    t57 = ((x233%x234)>(x235&x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x237 = INT16_MIN;
	volatile int64_t x238 = 50836826180LL;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MAX;
	int32_t t58 = -24;

    t58 = ((x237%x238)>(x239&x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x247 = -1;
	int32_t x248 = INT32_MAX;
	volatile int32_t t59 = 2162071;

    t59 = ((x245%x246)>(x247&x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x249 = UINT8_MAX;
	volatile uint64_t x250 = 416152632LLU;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t60 = 229901;

    t60 = ((x249%x250)>(x251&x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = -3260275LL;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;
	volatile int32_t t61 = 633;

    t61 = ((x253%x254)>(x255&x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	volatile int32_t t62 = 15;

    t62 = ((x257%x258)>(x259&x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = 15588145670589LLU;
	volatile uint16_t x263 = UINT16_MAX;
	volatile int32_t t63 = -41;

    t63 = ((x261%x262)>(x263&x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x265 = INT16_MIN;
	static int16_t x266 = -1;
	uint16_t x268 = 495U;
	static int32_t t64 = -146803774;

    t64 = ((x265%x266)>(x267&x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x272 = -507;

    t65 = ((x269%x270)>(x271&x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = -1;
	uint16_t x274 = 12U;
	volatile int64_t x275 = -1LL;
	int32_t x276 = -31891466;
	static volatile int32_t t66 = -61829;

    t66 = ((x273%x274)>(x275&x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x281 = 1LLU;
	static int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = 3U;
	static int32_t t67 = 14;

    t67 = ((x281%x282)>(x283&x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = INT16_MAX;
	volatile int32_t x286 = -1;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;
	static volatile int32_t t68 = -565;

    t68 = ((x285%x286)>(x287&x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MIN;
	static int64_t x290 = INT64_MAX;
	uint64_t x291 = UINT64_MAX;
	volatile uint8_t x292 = 15U;
	static volatile int32_t t69 = 9;

    t69 = ((x289%x290)>(x291&x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MAX;
	int64_t x295 = -253403LL;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t70 = -143453518;

    t70 = ((x293%x294)>(x295&x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x297 = INT8_MIN;
	int32_t x298 = -27141;
	int16_t x299 = INT16_MIN;
	static int32_t t71 = -47;

    t71 = ((x297%x298)>(x299&x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = INT8_MIN;
	static int8_t x304 = INT8_MIN;
	int32_t t72 = -508;

    t72 = ((x301%x302)>(x303&x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x305 = 1037099U;
	int64_t x306 = -1LL;
	int8_t x307 = INT8_MIN;
	static int32_t t73 = 880707;

    t73 = ((x305%x306)>(x307&x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x310 = INT64_MIN;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;
	int32_t t74 = 15899;

    t74 = ((x309%x310)>(x311&x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x314 = 19;
	static volatile uint8_t x315 = 116U;
	uint64_t x316 = 231LLU;
	static volatile int32_t t75 = -615373001;

    t75 = ((x313%x314)>(x315&x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x318 = INT8_MIN;
	int32_t x319 = 204;
	static int8_t x320 = 0;
	int32_t t76 = 173828642;

    t76 = ((x317%x318)>(x319&x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x321 = -1;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -129052339;
	static volatile int32_t t77 = 217285;

    t77 = ((x321%x322)>(x323&x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x327 = 1399;
	int16_t x328 = 5246;
	volatile int32_t t78 = -162877;

    t78 = ((x325%x326)>(x327&x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = 511;
	int16_t x332 = -1;

    t79 = ((x329%x330)>(x331&x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = UINT8_MAX;
	static int8_t x336 = INT8_MAX;
	static int32_t t80 = -1009879405;

    t80 = ((x333%x334)>(x335&x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	volatile int8_t x339 = INT8_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t81 = -373513504;

    t81 = ((x337%x338)>(x339&x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x341 = UINT8_MAX;
	static int64_t x342 = -1LL;
	int16_t x343 = 3;
	volatile int16_t x344 = INT16_MIN;
	int32_t t82 = -1973;

    t82 = ((x341%x342)>(x343&x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x345 = 29U;
	int64_t x346 = INT64_MIN;
	static uint32_t x347 = UINT32_MAX;
	int32_t t83 = -570;

    t83 = ((x345%x346)>(x347&x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x349 = INT8_MIN;
	uint16_t x351 = UINT16_MAX;
	int32_t t84 = 15;

    t84 = ((x349%x350)>(x351&x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x354 = 9619U;
	int16_t x355 = -2;
	int32_t x356 = -84067;
	int32_t t85 = 237052577;

    t85 = ((x353%x354)>(x355&x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t86 = 172930;

    t86 = ((x357%x358)>(x359&x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x361 = 3617U;
	int16_t x362 = INT16_MAX;
	int32_t x364 = INT32_MAX;
	int32_t t87 = 29;

    t87 = ((x361%x362)>(x363&x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x365 = -1;
	volatile uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 967U;
	int8_t x368 = -1;
	volatile int32_t t88 = -41260162;

    t88 = ((x365%x366)>(x367&x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = 191128902;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t x372 = -837659;
	volatile int32_t t89 = 116;

    t89 = ((x369%x370)>(x371&x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = 14135;
	static int64_t x375 = INT64_MIN;
	volatile int32_t t90 = -246605;

    t90 = ((x373%x374)>(x375&x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x378 = 1291642347LLU;
	static uint8_t x379 = 31U;
	static volatile int32_t t91 = -3;

    t91 = ((x377%x378)>(x379&x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = 789650033LL;
	static volatile int32_t x383 = INT32_MAX;
	int32_t t92 = -23;

    t92 = ((x381%x382)>(x383&x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 90371199U;
	int16_t x388 = 1;
	volatile int32_t t93 = 74;

    t93 = ((x385%x386)>(x387&x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;
	static int32_t t94 = -1;

    t94 = ((x389%x390)>(x391&x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x393 = 2089797891662LLU;
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = -267396LL;
	static int64_t x396 = INT64_MIN;
	int32_t t95 = -143809253;

    t95 = ((x393%x394)>(x395&x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x398 = -1LL;
	int32_t t96 = 2174508;

    t96 = ((x397%x398)>(x399&x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x406 = INT64_MIN;
	volatile int8_t x407 = -1;
	int8_t x408 = 0;
	int32_t t97 = 96681;

    t97 = ((x405%x406)>(x407&x408));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x409 = INT8_MIN;
	static int64_t x410 = INT64_MAX;
	int32_t x411 = INT32_MIN;
	int64_t x412 = INT64_MIN;

    t98 = ((x409%x410)>(x411&x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x413 = INT8_MAX;
	int64_t x415 = 0LL;
	uint16_t x416 = 8U;

    t99 = ((x413%x414)>(x415&x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x417 = 17567676960336809LLU;
	uint8_t x418 = 27U;
	uint64_t x419 = 170923LLU;
	int8_t x420 = -1;
	volatile int32_t t100 = -3932;

    t100 = ((x417%x418)>(x419&x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = 235815394LL;
	volatile int32_t x422 = INT32_MAX;
	int32_t x423 = INT32_MIN;
	int32_t t101 = 21793494;

    t101 = ((x421%x422)>(x423&x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = -1LL;
	volatile int32_t x426 = -1;
	static int16_t x427 = INT16_MIN;
	uint64_t x428 = 5556331096892010755LLU;
	static volatile int32_t t102 = 4;

    t102 = ((x425%x426)>(x427&x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = 35;
	int8_t x430 = -1;
	int8_t x432 = -1;

    t103 = ((x429%x430)>(x431&x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = INT16_MAX;
	int64_t x434 = 1088390352459063LL;
	int64_t x435 = -1LL;
	uint64_t x436 = 3604791478LLU;
	volatile int32_t t104 = -5359;

    t104 = ((x433%x434)>(x435&x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x437 = 1U;
	uint16_t x438 = 61U;
	int32_t x439 = INT32_MIN;
	static uint32_t x440 = 3288U;
	int32_t t105 = -18825114;

    t105 = ((x437%x438)>(x439&x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x441 = INT8_MIN;
	volatile int16_t x442 = INT16_MAX;
	int32_t x443 = -358;
	static int8_t x444 = 1;
	volatile int32_t t106 = -228;

    t106 = ((x441%x442)>(x443&x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x445 = UINT32_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	int32_t x448 = INT32_MAX;
	volatile int32_t t107 = -104340201;

    t107 = ((x445%x446)>(x447&x448));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x449 = INT32_MAX;
	int16_t x450 = 14498;
	uint32_t x451 = 3U;
	volatile int32_t x452 = 7;
	volatile int32_t t108 = 145542;

    t108 = ((x449%x450)>(x451&x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	uint64_t x454 = 16241LLU;
	int32_t x455 = -1;
	int8_t x456 = INT8_MIN;
	volatile int32_t t109 = 147023;

    t109 = ((x453%x454)>(x455&x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x457 = INT64_MIN;
	volatile int8_t x458 = INT8_MAX;
	static int32_t t110 = -3146;

    t110 = ((x457%x458)>(x459&x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x461 = UINT16_MAX;
	int8_t x462 = -1;
	volatile uint64_t x463 = UINT64_MAX;
	volatile uint8_t x464 = 95U;
	int32_t t111 = 5;

    t111 = ((x461%x462)>(x463&x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x465 = INT64_MAX;
	int16_t x466 = -3;
	int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t112 = -2;

    t112 = ((x465%x466)>(x467&x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	uint8_t x470 = 16U;
	uint32_t x471 = UINT32_MAX;
	int16_t x472 = INT16_MAX;

    t113 = ((x469%x470)>(x471&x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = 266883252U;
	static volatile uint64_t x475 = 10476390084045LLU;
	static int32_t t114 = -151367;

    t114 = ((x473%x474)>(x475&x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x477 = 31;
	int16_t x478 = INT16_MAX;
	int32_t x479 = 2;
	int32_t x480 = INT32_MIN;

    t115 = ((x477%x478)>(x479&x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = INT64_MIN;
	volatile uint16_t x482 = UINT16_MAX;
	int8_t x483 = 1;
	volatile int64_t x484 = INT64_MAX;
	int32_t t116 = -1;

    t116 = ((x481%x482)>(x483&x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x486 = 53U;
	static volatile uint32_t x487 = 1482U;
	int64_t x488 = INT64_MIN;
	int32_t t117 = -386687;

    t117 = ((x485%x486)>(x487&x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x490 = INT64_MIN;
	volatile uint16_t x492 = 6U;
	int32_t t118 = -1009413;

    t118 = ((x489%x490)>(x491&x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = -1;
	uint8_t x498 = 104U;
	uint16_t x499 = 247U;
	uint32_t x500 = 91297066U;

    t119 = ((x497%x498)>(x499&x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = -1;
	int16_t x502 = INT16_MIN;
	volatile uint8_t x503 = 21U;
	uint32_t x504 = 1328540U;
	volatile int32_t t120 = -27;

    t120 = ((x501%x502)>(x503&x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x505 = UINT8_MAX;
	uint8_t x507 = 24U;
	uint32_t x508 = 107201335U;
	int32_t t121 = 1293942;

    t121 = ((x505%x506)>(x507&x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x511 = INT32_MAX;
	static uint64_t x512 = 9327580155537LLU;
	volatile int32_t t122 = 167884952;

    t122 = ((x509%x510)>(x511&x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x513 = UINT16_MAX;
	static int64_t x515 = -84496886595706987LL;
	uint32_t x516 = 9328U;

    t123 = ((x513%x514)>(x515&x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x517 = 3U;
	static uint64_t x518 = 7070LLU;
	int32_t x520 = INT32_MAX;
	int32_t t124 = 2;

    t124 = ((x517%x518)>(x519&x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x521 = UINT8_MAX;
	uint64_t x522 = 139917264442762233LLU;
	volatile uint8_t x524 = UINT8_MAX;
	int32_t t125 = 43178;

    t125 = ((x521%x522)>(x523&x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x525 = -1;
	int16_t x527 = 372;
	int64_t x528 = INT64_MAX;
	volatile int32_t t126 = 391;

    t126 = ((x525%x526)>(x527&x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x529 = INT64_MAX;
	static int32_t x530 = INT32_MIN;
	int8_t x531 = INT8_MIN;
	int8_t x532 = -1;
	volatile int32_t t127 = 6030;

    t127 = ((x529%x530)>(x531&x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x535 = INT16_MIN;
	static int32_t x536 = INT32_MIN;
	int32_t t128 = -278140;

    t128 = ((x533%x534)>(x535&x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x537 = INT8_MIN;
	static int32_t x538 = INT32_MAX;
	int32_t x539 = 15355085;
	int32_t x540 = -1;
	volatile int32_t t129 = 669514121;

    t129 = ((x537%x538)>(x539&x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = -1;
	uint64_t x543 = 19597LLU;
	volatile int32_t t130 = -38266;

    t130 = ((x541%x542)>(x543&x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x545 = INT8_MIN;
	volatile int16_t x546 = INT16_MIN;
	volatile int32_t t131 = -109;

    t131 = ((x545%x546)>(x547&x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x549 = INT16_MIN;
	int16_t x550 = INT16_MIN;
	static uint8_t x551 = 3U;
	uint16_t x552 = 11757U;
	int32_t t132 = 247651;

    t132 = ((x549%x550)>(x551&x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x553 = -114781;
	int64_t x554 = INT64_MIN;
	volatile int32_t x555 = -7265877;
	int32_t t133 = 28656359;

    t133 = ((x553%x554)>(x555&x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x557 = 163;
	int64_t x558 = -1LL;
	volatile int8_t x560 = -1;
	volatile int32_t t134 = 14;

    t134 = ((x557%x558)>(x559&x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x562 = INT16_MIN;
	volatile int16_t x563 = 12;
	volatile int32_t x564 = -1;
	int32_t t135 = 65187;

    t135 = ((x561%x562)>(x563&x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = -7;
	volatile int8_t x566 = INT8_MIN;
	volatile uint32_t x567 = 3772563U;
	uint16_t x568 = 486U;
	volatile int32_t t136 = 525647127;

    t136 = ((x565%x566)>(x567&x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x572 = INT8_MIN;
	int32_t t137 = -5208999;

    t137 = ((x569%x570)>(x571&x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x573 = 1763U;
	static int16_t x575 = -1;

    t138 = ((x573%x574)>(x575&x576));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x577 = INT16_MIN;
	int16_t x578 = INT16_MIN;
	int16_t x580 = 15;

    t139 = ((x577%x578)>(x579&x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = 56;
	static int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;

    t140 = ((x581%x582)>(x583&x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x585 = INT8_MIN;
	int16_t x587 = 966;
	volatile int32_t t141 = -1;

    t141 = ((x585%x586)>(x587&x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x589 = 30087U;
	static int32_t x590 = INT32_MIN;
	int32_t x591 = 252003;
	int16_t x592 = -30;
	volatile int32_t t142 = 10743;

    t142 = ((x589%x590)>(x591&x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x593 = INT16_MAX;
	uint64_t x594 = UINT64_MAX;
	int64_t x595 = INT64_MAX;
	volatile int32_t t143 = -58443;

    t143 = ((x593%x594)>(x595&x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x597 = INT16_MAX;
	volatile int32_t t144 = -3190028;

    t144 = ((x597%x598)>(x599&x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MAX;
	uint64_t x603 = UINT64_MAX;
	int8_t x604 = -1;

    t145 = ((x601%x602)>(x603&x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x605 = INT32_MIN;
	volatile int8_t x607 = INT8_MAX;
	static int8_t x608 = INT8_MIN;
	int32_t t146 = -64889332;

    t146 = ((x605%x606)>(x607&x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x609 = 15237315U;
	volatile int64_t x611 = -1LL;
	int16_t x612 = INT16_MIN;
	int32_t t147 = 23216941;

    t147 = ((x609%x610)>(x611&x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x614 = -1801176813370764LL;
	uint32_t x615 = 0U;
	static int16_t x616 = 2;
	int32_t t148 = 33345625;

    t148 = ((x613%x614)>(x615&x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x618 = -47;
	int64_t x619 = INT64_MAX;
	int64_t x620 = INT64_MIN;
	static int32_t t149 = -23472;

    t149 = ((x617%x618)>(x619&x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x621 = 43U;
	int16_t x622 = 9;
	volatile uint32_t x623 = 21425U;
	int16_t x624 = -2719;
	int32_t t150 = -66689824;

    t150 = ((x621%x622)>(x623&x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x625 = -1;
	volatile int8_t x626 = INT8_MAX;
	static int8_t x627 = -12;
	volatile int32_t t151 = -3268;

    t151 = ((x625%x626)>(x627&x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = -4061;
	volatile int8_t x631 = INT8_MIN;

    t152 = ((x629%x630)>(x631&x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x634 = 157039796092LLU;
	int64_t x635 = INT64_MIN;
	static uint32_t x636 = 11903U;
	static int32_t t153 = 239073;

    t153 = ((x633%x634)>(x635&x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = -1;
	int64_t x640 = 1LL;
	static volatile int32_t t154 = 102;

    t154 = ((x637%x638)>(x639&x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x642 = INT8_MAX;
	uint32_t x643 = 1U;
	uint32_t x644 = UINT32_MAX;
	int32_t t155 = 124516;

    t155 = ((x641%x642)>(x643&x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x645 = 0;
	volatile uint16_t x646 = UINT16_MAX;
	int8_t x647 = -1;
	int8_t x648 = INT8_MIN;

    t156 = ((x645%x646)>(x647&x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x650 = INT8_MIN;
	int8_t x651 = INT8_MIN;
	static volatile int32_t t157 = 4033;

    t157 = ((x649%x650)>(x651&x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x654 = -9;
	int16_t x655 = -6919;
	int8_t x656 = -1;
	int32_t t158 = 1;

    t158 = ((x653%x654)>(x655&x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = 0;
	int8_t x658 = INT8_MAX;
	static int8_t x660 = INT8_MAX;
	volatile int32_t t159 = 119;

    t159 = ((x657%x658)>(x659&x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x661 = 13613720852534LLU;
	volatile int8_t x662 = 29;
	int64_t x663 = -1LL;
	int16_t x664 = INT16_MIN;
	static volatile int32_t t160 = 2;

    t160 = ((x661%x662)>(x663&x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x665 = 1064LLU;
	int8_t x666 = -1;

    t161 = ((x665%x666)>(x667&x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x669 = 3;
	int8_t x670 = INT8_MAX;
	int32_t x671 = INT32_MIN;
	volatile int32_t t162 = -10;

    t162 = ((x669%x670)>(x671&x672));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x675 = -7;
	uint64_t x676 = 102645010978422156LLU;
	int32_t t163 = -2052473;

    t163 = ((x673%x674)>(x675&x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = -2658837LL;
	int32_t x678 = INT32_MIN;
	int8_t x679 = INT8_MIN;
	static int32_t t164 = 11313069;

    t164 = ((x677%x678)>(x679&x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = -1;
	uint64_t x682 = 70100LLU;
	int16_t x684 = INT16_MIN;
	static int32_t t165 = -2;

    t165 = ((x681%x682)>(x683&x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = -1;
	int32_t x688 = INT32_MIN;
	int32_t t166 = -1374514;

    t166 = ((x685%x686)>(x687&x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x693 = 8LLU;
	volatile int32_t x694 = INT32_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t167 = 262;

    t167 = ((x693%x694)>(x695&x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = 0;
	int8_t x698 = -1;
	int8_t x699 = -1;
	uint64_t x700 = UINT64_MAX;

    t168 = ((x697%x698)>(x699&x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x701 = -1;
	uint32_t x702 = 728026678U;
	uint16_t x704 = 122U;

    t169 = ((x701%x702)>(x703&x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = INT64_MIN;
	int8_t x706 = 1;
	uint64_t x707 = 4676590890LLU;
	volatile int64_t x708 = 0LL;

    t170 = ((x705%x706)>(x707&x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x709 = UINT16_MAX;
	int8_t x710 = INT8_MIN;
	int32_t x711 = 95553;
	static int32_t t171 = 575172462;

    t171 = ((x709%x710)>(x711&x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x713 = 606424317901LLU;
	uint64_t x715 = 564020903LLU;
	int32_t x716 = INT32_MAX;
	volatile int32_t t172 = 5157;

    t172 = ((x713%x714)>(x715&x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x717 = INT8_MIN;
	int32_t x718 = INT32_MIN;
	int8_t x719 = INT8_MAX;
	static int32_t t173 = -128162680;

    t173 = ((x717%x718)>(x719&x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = 0;
	int64_t x722 = 114LL;
	uint8_t x723 = 13U;
	int8_t x724 = INT8_MAX;
	volatile int32_t t174 = 24025365;

    t174 = ((x721%x722)>(x723&x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x725 = -7448962;
	uint16_t x726 = 204U;
	uint64_t x727 = 17LLU;
	int8_t x728 = -1;

    t175 = ((x725%x726)>(x727&x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x729 = 4U;
	int64_t x730 = INT64_MAX;
	int64_t x731 = INT64_MIN;
	int32_t x732 = INT32_MAX;
	int32_t t176 = -717;

    t176 = ((x729%x730)>(x731&x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x733 = INT16_MAX;
	volatile uint8_t x734 = UINT8_MAX;
	static int64_t x735 = INT64_MIN;
	volatile int16_t x736 = -1;
	int32_t t177 = 86020364;

    t177 = ((x733%x734)>(x735&x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x737 = INT16_MIN;
	uint32_t x738 = 18807928U;
	int16_t x739 = INT16_MIN;
	volatile int32_t x740 = 3310489;
	volatile int32_t t178 = 684614481;

    t178 = ((x737%x738)>(x739&x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x741 = 27;
	uint8_t x742 = UINT8_MAX;
	static int8_t x743 = INT8_MIN;
	int32_t x744 = INT32_MAX;

    t179 = ((x741%x742)>(x743&x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x745 = -1299122;
	volatile int32_t x746 = INT32_MIN;
	int32_t x747 = INT32_MAX;
	int64_t x748 = INT64_MIN;
	static volatile int32_t t180 = 55;

    t180 = ((x745%x746)>(x747&x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x749 = 413197LLU;
	static uint32_t x750 = 314U;
	volatile int16_t x751 = -5292;
	volatile int32_t t181 = 2721;

    t181 = ((x749%x750)>(x751&x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x753 = -1;
	int8_t x754 = INT8_MAX;
	volatile uint8_t x755 = UINT8_MAX;
	volatile int8_t x756 = -41;
	int32_t t182 = -210806861;

    t182 = ((x753%x754)>(x755&x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x757 = 1U;
	int64_t x759 = INT64_MIN;
	volatile int32_t t183 = 1740;

    t183 = ((x757%x758)>(x759&x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = -1383;
	uint32_t x762 = 643943162U;
	volatile int8_t x763 = INT8_MIN;
	int32_t x764 = INT32_MIN;
	int32_t t184 = -483646;

    t184 = ((x761%x762)>(x763&x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x765 = 5044U;
	volatile int16_t x766 = -1834;
	volatile int64_t x767 = 1381111835LL;
	int32_t t185 = -2686029;

    t185 = ((x765%x766)>(x767&x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x769 = INT64_MIN;
	static int16_t x770 = INT16_MIN;
	uint64_t x771 = 13868725087LLU;
	int32_t x772 = INT32_MIN;
	volatile int32_t t186 = -106;

    t186 = ((x769%x770)>(x771&x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MIN;
	static int64_t x774 = INT64_MIN;
	uint64_t x775 = 50724524944LLU;
	int32_t t187 = -38;

    t187 = ((x773%x774)>(x775&x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = -41;
	uint32_t x778 = 6U;
	int32_t x779 = INT32_MIN;
	int32_t t188 = 6995930;

    t188 = ((x777%x778)>(x779&x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x782 = -1;
	volatile int8_t x784 = INT8_MIN;
	int32_t t189 = -25724;

    t189 = ((x781%x782)>(x783&x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = INT8_MIN;
	uint16_t x786 = UINT16_MAX;
	uint8_t x787 = 14U;
	int16_t x788 = INT16_MAX;
	volatile int32_t t190 = 42331547;

    t190 = ((x785%x786)>(x787&x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = -16539LL;
	int32_t x790 = INT32_MIN;
	static uint16_t x791 = 152U;
	volatile int64_t x792 = 1142923672821884544LL;
	volatile int32_t t191 = 16495388;

    t191 = ((x789%x790)>(x791&x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x794 = -6;
	static volatile int8_t x796 = -1;
	static int32_t t192 = -4144406;

    t192 = ((x793%x794)>(x795&x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x797 = 10551148902857647LLU;
	volatile int8_t x799 = 1;
	static int16_t x800 = INT16_MAX;
	volatile int32_t t193 = 386;

    t193 = ((x797%x798)>(x799&x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x802 = 124U;
	int32_t x803 = INT32_MIN;
	int8_t x804 = INT8_MIN;
	volatile int32_t t194 = 9;

    t194 = ((x801%x802)>(x803&x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x805 = UINT16_MAX;
	static int8_t x806 = INT8_MAX;
	uint8_t x807 = 10U;
	volatile uint32_t x808 = UINT32_MAX;
	int32_t t195 = 1035425743;

    t195 = ((x805%x806)>(x807&x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x809 = -13176332285LL;
	int32_t x810 = INT32_MIN;
	uint64_t x811 = 204450LLU;
	int64_t x812 = -1LL;
	volatile int32_t t196 = 8;

    t196 = ((x809%x810)>(x811&x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x813 = 56505373U;
	uint16_t x814 = 1426U;
	int16_t x816 = -1;

    t197 = ((x813%x814)>(x815&x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x817 = 494U;
	static int32_t x818 = INT32_MIN;
	int64_t x819 = 897466747211395833LL;
	int16_t x820 = 3;
	int32_t t198 = 389;

    t198 = ((x817%x818)>(x819&x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x823 = INT32_MIN;
	uint32_t x824 = 611042062U;
	int32_t t199 = 988692415;

    t199 = ((x821%x822)>(x823&x824));

    if (t199 != 1) { NG(); } else { ; }
	
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

