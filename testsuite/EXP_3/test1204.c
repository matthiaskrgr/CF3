
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

static uint8_t x5 = 12U;
uint8_t x6 = 0U;
static int64_t x8 = 8139960505431728LL;
static int32_t t2 = -5;
int16_t x16 = -1;
static int16_t x17 = INT16_MIN;
static volatile int16_t x24 = -1;
static uint64_t x27 = 338LLU;
int16_t x60 = INT16_MIN;
int16_t x66 = 4813;
static int32_t x68 = INT32_MIN;
int64_t x74 = INT64_MIN;
static int16_t x80 = INT16_MAX;
volatile int64_t x81 = -14696256LL;
int64_t x100 = INT64_MIN;
volatile uint64_t t22 = 773285139800077511LLU;
volatile int64_t x108 = INT64_MIN;
uint32_t t23 = 1769042461U;
int32_t x111 = INT32_MIN;
static int32_t t26 = -290492;
uint64_t x122 = 25730572LLU;
static uint16_t x131 = 1U;
static uint64_t t29 = 41086577047199789LLU;
static int8_t x133 = INT8_MIN;
uint32_t x134 = UINT32_MAX;
int16_t x136 = -1;
volatile uint32_t t30 = 129001U;
uint8_t x148 = 61U;
static int8_t x150 = 1;
static uint32_t x157 = UINT32_MAX;
uint32_t t36 = 1822U;
volatile int8_t x161 = INT8_MAX;
int8_t x165 = INT8_MIN;
static volatile int32_t t38 = 8270;
static volatile uint8_t x169 = 62U;
volatile int64_t t44 = 706981783LL;
int32_t x193 = -111665;
volatile int8_t x195 = -1;
uint32_t t45 = 41U;
static int16_t x207 = INT16_MAX;
volatile uint64_t x212 = UINT64_MAX;
int64_t x244 = INT64_MIN;
static volatile int8_t x245 = -1;
int32_t t56 = -4111362;
int64_t x257 = -1LL;
int8_t x274 = -1;
int8_t x295 = 6;
int8_t x298 = 7;
volatile uint64_t x302 = UINT64_MAX;
static int32_t x303 = INT32_MIN;
int16_t x313 = INT16_MIN;
volatile int64_t x329 = INT64_MIN;
int16_t x334 = INT16_MIN;
uint8_t x338 = 0U;
volatile int16_t x348 = INT16_MAX;
volatile int64_t x349 = INT64_MIN;
int8_t x352 = 29;
int32_t x354 = -253;
int32_t x359 = -1516;
uint16_t x361 = 1754U;
int32_t t80 = 81;
int16_t x368 = INT16_MIN;
static int8_t x371 = -1;
volatile uint8_t x372 = 82U;
static int32_t x375 = 1175;
uint64_t x376 = 3421074LLU;
int32_t x377 = -2;
int64_t x380 = -1068815942173986LL;
static int32_t t85 = -1;
int64_t x386 = 1668616586LL;
int16_t x388 = INT16_MIN;
volatile int64_t t86 = 1623641294LL;
volatile int16_t x391 = INT16_MIN;
int32_t x392 = INT32_MIN;
static volatile int32_t t88 = 110724;
volatile int16_t x398 = -1;
int16_t x415 = 797;
int16_t x421 = INT16_MIN;
int32_t t93 = -3610;
static int16_t x430 = INT16_MAX;
int16_t x434 = INT16_MIN;
static int64_t x435 = -1LL;
int32_t x438 = 310789561;
volatile int64_t t98 = -243065LL;
int32_t t99 = 13;
int16_t x467 = INT16_MAX;
int32_t x470 = -1967117;
int64_t x474 = -1764530960LL;
int32_t t106 = 2182871;
int16_t x492 = INT16_MAX;
int64_t x493 = INT64_MIN;
int16_t x498 = INT16_MAX;
int64_t x499 = INT64_MIN;
volatile uint32_t t109 = 108906846U;
int32_t x506 = -1;
uint64_t x514 = 68LLU;
int8_t x525 = INT8_MIN;
int64_t x531 = INT64_MIN;
static int16_t x539 = INT16_MAX;
volatile int64_t t117 = 2664450020582LL;
uint32_t x547 = 2532507U;
volatile uint32_t t119 = 628302841U;
volatile int8_t x552 = INT8_MAX;
volatile uint16_t x564 = 462U;
int64_t t123 = 3528252912822LL;
static uint32_t x566 = UINT32_MAX;
int32_t x567 = 1059330035;
static volatile int8_t x570 = INT8_MAX;
int32_t x582 = -1;
int32_t x584 = INT32_MAX;
volatile int32_t t129 = 19289;
volatile int16_t x608 = INT16_MIN;
int64_t x622 = INT64_MAX;
int16_t x626 = INT16_MAX;
int32_t t135 = 343622345;
volatile uint32_t x640 = 15590382U;
volatile int32_t x642 = INT32_MIN;
static int32_t x643 = 158;
volatile int64_t t137 = 51271954LL;
static uint16_t x648 = UINT16_MAX;
int32_t x668 = 3217590;
int16_t x673 = INT16_MIN;
static uint16_t x689 = 3609U;
static uint32_t x691 = 21586U;
int16_t x700 = INT16_MIN;
uint16_t x711 = 4U;
int8_t x716 = INT8_MIN;
int16_t x722 = INT16_MIN;
int8_t x723 = INT8_MIN;
int8_t x728 = INT8_MIN;
volatile int64_t x731 = INT64_MAX;
static int32_t x745 = -1;
int16_t x748 = INT16_MIN;
int16_t x756 = -2;
int8_t x762 = INT8_MIN;
uint8_t x766 = UINT8_MAX;
int32_t t162 = -1004;
int8_t x771 = 45;
static uint64_t x774 = UINT64_MAX;
static volatile uint64_t t164 = 34955653560738103LLU;
int64_t x784 = -807453284LL;
volatile uint32_t x790 = 227083U;
static int32_t x792 = INT32_MIN;
volatile int64_t t168 = 1464LL;
int64_t x805 = -1LL;
int64_t x810 = -199513719463LL;
static int64_t x811 = INT64_MIN;
int16_t x814 = 5062;
int64_t x818 = -62813LL;
uint64_t x825 = 10LLU;
uint64_t x835 = 1888809502092LLU;
static int32_t x838 = -5;
uint16_t x842 = 984U;
int32_t x846 = 388413728;
int32_t t181 = -1994;
int64_t x850 = 2305728LL;
static int64_t x852 = INT64_MAX;
static volatile int8_t x865 = INT8_MIN;
volatile uint64_t t185 = 38LLU;
uint32_t x871 = 7U;
int32_t x875 = -5582;
volatile uint64_t t187 = 4738438710LLU;
int32_t x878 = -454429;
volatile int32_t t188 = 14220813;
uint32_t x883 = UINT32_MAX;
static volatile uint32_t x886 = 17796630U;
static uint16_t x887 = 2593U;
int64_t t190 = -331330106326887865LL;
uint16_t x893 = 4585U;
uint32_t x896 = 0U;
int32_t t192 = 87933;
static int16_t x898 = 55;
uint64_t x899 = 11186295877506706LLU;
volatile uint32_t x900 = 527U;
static volatile int32_t t193 = 66181739;
volatile int32_t t194 = 887565;
int32_t t195 = -111498349;
static volatile int32_t x912 = INT32_MIN;
int8_t x921 = INT8_MAX;


void f0(void) {
    	static uint16_t x1 = 1863U;
	int64_t x2 = 10937869336253LL;
	static uint8_t x3 = 4U;
	uint64_t x4 = UINT64_MAX;
	static int64_t t0 = 1927264LL;

    t0 = ((x1-x2)^(x3!=x4));

    if (t0 != -10937869334389LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x7 = -1;
	int32_t t1 = 295;

    t1 = ((x5-x6)^(x7!=x8));

    if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 47;
	int8_t x10 = INT8_MIN;
	static uint8_t x11 = 1U;
	uint8_t x12 = 0U;

    t2 = ((x9-x10)^(x11!=x12));

    if (t2 != 174) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -3128091;
	int16_t x14 = 1;
	static int32_t x15 = INT32_MIN;
	int32_t t3 = -132160150;

    t3 = ((x13-x14)^(x15!=x16));

    if (t3 != -3128091) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MAX;
	volatile int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 103;

    t4 = ((x17-x18)^(x19!=x20));

    if (t4 != -65536) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x21 = UINT8_MAX;
	int8_t x22 = 0;
	int64_t x23 = INT64_MIN;
	static volatile int32_t t5 = -7;

    t5 = ((x21-x22)^(x23!=x24));

    if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -952152992498LL;
	int8_t x26 = -1;
	static volatile int64_t x28 = INT64_MIN;
	int64_t t6 = -4583625425514628035LL;

    t6 = ((x25-x26)^(x27!=x28));

    if (t6 != -952152992498LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 31243;

    t7 = ((x29-x30)^(x31!=x32));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -24042413;
	uint16_t x38 = 531U;
	volatile int32_t x39 = INT32_MAX;
	int64_t x40 = -1LL;
	volatile int32_t t8 = 1;

    t8 = ((x37-x38)^(x39!=x40));

    if (t8 != -24042943) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = UINT8_MAX;
	volatile int8_t x42 = 0;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	int32_t t9 = -179364;

    t9 = ((x41-x42)^(x43!=x44));

    if (t9 != 254) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 4867U;
	uint16_t x46 = 2273U;
	uint64_t x47 = 15LLU;
	static int32_t x48 = 127517;
	uint32_t t10 = 12890U;

    t10 = ((x45-x46)^(x47!=x48));

    if (t10 != 2595U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = -1;
	volatile int64_t x50 = -1924731LL;
	uint32_t x51 = 0U;
	int8_t x52 = -1;
	volatile int64_t t11 = 11881378547LL;

    t11 = ((x49-x50)^(x51!=x52));

    if (t11 != 1924731LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -8129743;
	volatile int64_t x54 = -1LL;
	static int16_t x55 = INT16_MIN;
	static volatile uint8_t x56 = 38U;
	volatile int64_t t12 = 90LL;

    t12 = ((x53-x54)^(x55!=x56));

    if (t12 != -8129741LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 38308U;
	volatile int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	uint32_t t13 = 174535U;

    t13 = ((x57-x58)^(x59!=x60));

    if (t13 != 38181U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x65 = -3;
	static int8_t x67 = INT8_MIN;
	int32_t t14 = -36038475;

    t14 = ((x65-x66)^(x67!=x68));

    if (t14 != -4815) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MAX;
	uint32_t x70 = 31242307U;
	uint8_t x71 = UINT8_MAX;
	volatile uint16_t x72 = 126U;
	uint32_t t15 = 9U;

    t15 = ((x69-x70)^(x71!=x72));

    if (t15 != 2116241341U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = -1;
	int8_t x75 = 19;
	int32_t x76 = INT32_MIN;
	int64_t t16 = -250537097LL;

    t16 = ((x73-x74)^(x75!=x76));

    if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	int32_t t17 = -5;

    t17 = ((x77-x78)^(x79!=x80));

    if (t17 != 2147483521) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x82 = 137699549630538491LLU;
	static uint8_t x83 = 63U;
	static uint64_t x84 = 753398LLU;
	volatile uint64_t t18 = 4436290234159983197LLU;

    t18 = ((x81-x82)^(x83!=x84));

    if (t18 != 18309044524064316868LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 1U;
	volatile int64_t x86 = 465874759799LL;
	volatile int16_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	int64_t t19 = 31269058376084LL;

    t19 = ((x85-x86)^(x87!=x88));

    if (t19 != -465874759797LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x89 = 40910847919045LLU;
	int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	int16_t x92 = -102;
	volatile uint64_t t20 = 30042884LLU;

    t20 = ((x89-x90)^(x91!=x92));

    if (t20 != 9223412947702694852LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x97 = 8128U;
	volatile uint16_t x98 = UINT16_MAX;
	static int64_t x99 = INT64_MIN;
	uint32_t t21 = 93700U;

    t21 = ((x97-x98)^(x99!=x100));

    if (t21 != 4294909889U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MIN;
	volatile uint64_t x102 = 310402074228967090LLU;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;

    t22 = ((x101-x102)^(x103!=x104));

    if (t22 != 8912969962625808719LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint32_t x106 = 501518U;
	uint64_t x107 = 2984906624870890LLU;

    t23 = ((x105-x106)^(x107!=x108));

    if (t23 != 4294433011U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 20073126166840LLU;
	uint32_t x110 = 52341U;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t24 = 7342917LLU;

    t24 = ((x109-x110)^(x111!=x112));

    if (t24 != 20073126114498LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = 58;
	static int64_t x114 = -32525029711330LL;
	static uint8_t x115 = 1U;
	static volatile int16_t x116 = 2;
	int64_t t25 = 1LL;

    t25 = ((x113-x114)^(x115!=x116));

    if (t25 != 32525029711389LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x118 = 34U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;

    t26 = ((x117-x118)^(x119!=x120));

    if (t26 != -32801) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = INT64_MIN;
	volatile uint16_t x123 = 1U;
	static int64_t x124 = INT64_MAX;
	volatile uint64_t t27 = 88551LLU;

    t27 = ((x121-x122)^(x123!=x124));

    if (t27 != 9223372036829045237LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x125 = 20U;
	volatile int32_t x126 = INT32_MAX;
	static int32_t x127 = INT32_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t28 = -5155;

    t28 = ((x125-x126)^(x127!=x128));

    if (t28 != -2147483628) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 2U;
	uint64_t x130 = UINT64_MAX;
	int16_t x132 = INT16_MAX;

    t29 = ((x129-x130)^(x131!=x132));

    if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x135 = -1;

    t30 = ((x133-x134)^(x135!=x136));

    if (t30 != 4294967169U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x137 = -1730444;
	int64_t x138 = 62179512021059850LL;
	uint32_t x139 = UINT32_MAX;
	static int64_t x140 = INT64_MAX;
	static volatile int64_t t31 = 104539006LL;

    t31 = ((x137-x138)^(x139!=x140));

    if (t31 != -62179512022790293LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x141 = -46881950123LL;
	static uint16_t x142 = 102U;
	int32_t x143 = INT32_MAX;
	static volatile int16_t x144 = INT16_MAX;
	volatile int64_t t32 = 397784LL;

    t32 = ((x141-x142)^(x143!=x144));

    if (t32 != -46881950226LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x145 = INT64_MAX;
	uint8_t x146 = 61U;
	volatile int8_t x147 = -1;
	static volatile int64_t t33 = -12345684963705LL;

    t33 = ((x145-x146)^(x147!=x148));

    if (t33 != 9223372036854775747LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x149 = INT32_MAX;
	int64_t x151 = INT64_MIN;
	int32_t x152 = -266029;
	int32_t t34 = INT32_MAX;

    t34 = ((x149-x150)^(x151!=x152));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x153 = INT8_MIN;
	static volatile int16_t x154 = -28;
	volatile int32_t x155 = -1;
	int16_t x156 = INT16_MAX;
	int32_t t35 = -41474;

    t35 = ((x153-x154)^(x155!=x156));

    if (t35 != -99) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	static int16_t x160 = INT16_MIN;

    t36 = ((x157-x158)^(x159!=x160));

    if (t36 != 2147483646U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t37 = -743611586989LL;

    t37 = ((x161-x162)^(x163!=x164));

    if (t37 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = 0;

    t38 = ((x165-x166)^(x167!=x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x170 = -5230;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = -1;
	int32_t t39 = 457;

    t39 = ((x169-x170)^(x171!=x172));

    if (t39 != 5293) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	static volatile uint16_t x175 = UINT16_MAX;
	uint32_t x176 = 108481U;
	int64_t t40 = 250063451783519LL;

    t40 = ((x173-x174)^(x175!=x176));

    if (t40 != 126LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x177 = INT64_MAX;
	uint32_t x178 = 940316U;
	int32_t x179 = INT32_MAX;
	int64_t x180 = -88LL;
	int64_t t41 = 135471639341327498LL;

    t41 = ((x177-x178)^(x179!=x180));

    if (t41 != 9223372036853835490LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x181 = 8LLU;
	static int8_t x182 = -1;
	int64_t x183 = 21LL;
	int8_t x184 = -1;
	static uint64_t t42 = 5838LLU;

    t42 = ((x181-x182)^(x183!=x184));

    if (t42 != 8LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MAX;
	static int16_t x186 = -1;
	int32_t x187 = 2462841;
	int16_t x188 = 0;
	volatile int32_t t43 = -18424653;

    t43 = ((x185-x186)^(x187!=x188));

    if (t43 != 32769) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 52;
	static volatile int64_t x192 = INT64_MIN;

    t44 = ((x189-x190)^(x191!=x192));

    if (t44 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x194 = 223U;
	static uint8_t x196 = 1U;

    t45 = ((x193-x194)^(x195!=x196));

    if (t45 != 4294855409U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = 5;
	static int8_t x203 = INT8_MAX;
	volatile int64_t x204 = INT64_MIN;
	int32_t t46 = -1252361;

    t46 = ((x201-x202)^(x203!=x204));

    if (t46 != -32774) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x205 = 105578U;
	volatile uint64_t x206 = UINT64_MAX;
	static volatile int32_t x208 = INT32_MIN;
	uint64_t t47 = 4127028025570LLU;

    t47 = ((x205-x206)^(x207!=x208));

    if (t47 != 105578LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x209 = 13261LLU;
	int32_t x210 = -1;
	static uint16_t x211 = UINT16_MAX;
	uint64_t t48 = 390973260365LLU;

    t48 = ((x209-x210)^(x211!=x212));

    if (t48 != 13263LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x213 = 1;
	uint16_t x214 = 9U;
	static int16_t x215 = INT16_MIN;
	static int32_t x216 = INT32_MIN;
	int32_t t49 = -2556372;

    t49 = ((x213-x214)^(x215!=x216));

    if (t49 != -7) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = -1;
	static uint16_t x218 = UINT16_MAX;
	static volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;
	int32_t t50 = -194;

    t50 = ((x217-x218)^(x219!=x220));

    if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = 401984;
	int8_t x222 = INT8_MAX;
	volatile int16_t x223 = INT16_MIN;
	static int32_t x224 = 128360761;
	volatile int32_t t51 = -3381;

    t51 = ((x221-x222)^(x223!=x224));

    if (t51 != 401856) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = INT64_MAX;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -1;
	uint8_t x228 = 3U;
	volatile int64_t t52 = 723LL;

    t52 = ((x225-x226)^(x227!=x228));

    if (t52 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = -2;
	int8_t x230 = 23;
	uint32_t x231 = 2557450U;
	static int32_t x232 = INT32_MIN;
	int32_t t53 = 342064115;

    t53 = ((x229-x230)^(x231!=x232));

    if (t53 != -26) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	int8_t x238 = INT8_MIN;
	volatile uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	static int32_t t54 = -16022140;

    t54 = ((x237-x238)^(x239!=x240));

    if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x241 = 57911069LLU;
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint64_t t55 = 64623LLU;

    t55 = ((x241-x242)^(x243!=x244));

    if (t55 != 18446744071619979039LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x246 = UINT8_MAX;
	static int32_t x247 = -1;
	uint16_t x248 = 31U;

    t56 = ((x245-x246)^(x247!=x248));

    if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = -2127013357449LL;
	int16_t x250 = -9862;
	int16_t x251 = -1;
	static int64_t x252 = -118650115160LL;
	volatile int64_t t57 = 1605673816001333378LL;

    t57 = ((x249-x250)^(x251!=x252));

    if (t57 != -2127013347588LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x253 = INT16_MAX;
	uint8_t x254 = 1U;
	uint8_t x255 = 7U;
	static int64_t x256 = INT64_MAX;
	static int32_t t58 = -252430756;

    t58 = ((x253-x254)^(x255!=x256));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int64_t t59 = -553966351LL;

    t59 = ((x257-x258)^(x259!=x260));

    if (t59 != 2147483646LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x261 = 0;
	static int64_t x262 = INT64_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = 12;
	volatile int64_t t60 = INT64_MIN;

    t60 = ((x261-x262)^(x263!=x264));

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x265 = 1;
	volatile int64_t x266 = -940887467744LL;
	static volatile int8_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t61 = 141LL;

    t61 = ((x265-x266)^(x267!=x268));

    if (t61 != 940887467744LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	static uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t62 = 19827490;

    t62 = ((x269-x270)^(x271!=x272));

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 2U;
	volatile int32_t t63 = 1058932405;

    t63 = ((x273-x274)^(x275!=x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x281 = UINT8_MAX;
	int32_t x282 = INT32_MAX;
	volatile int32_t x283 = INT32_MAX;
	volatile uint32_t x284 = 5499U;
	static int32_t t64 = 60;

    t64 = ((x281-x282)^(x283!=x284));

    if (t64 != -2147483391) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x289 = 5133994463868576LLU;
	uint8_t x290 = 1U;
	int8_t x291 = INT8_MAX;
	static volatile int32_t x292 = 206339;
	uint64_t t65 = 625496020LLU;

    t65 = ((x289-x290)^(x291!=x292));

    if (t65 != 5133994463868574LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x293 = UINT16_MAX;
	int8_t x294 = 4;
	int8_t x296 = INT8_MAX;
	volatile int32_t t66 = 568582;

    t66 = ((x293-x294)^(x295!=x296));

    if (t66 != 65530) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x297 = UINT64_MAX;
	uint32_t x299 = 42987226U;
	int32_t x300 = INT32_MAX;
	static volatile uint64_t t67 = 13566997LLU;

    t67 = ((x297-x298)^(x299!=x300));

    if (t67 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x301 = UINT16_MAX;
	uint8_t x304 = 6U;
	volatile uint64_t t68 = 1599LLU;

    t68 = ((x301-x302)^(x303!=x304));

    if (t68 != 65537LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x309 = 492995857682036LLU;
	int32_t x310 = -1;
	int8_t x311 = -10;
	static int64_t x312 = INT64_MAX;
	uint64_t t69 = 58926LLU;

    t69 = ((x309-x310)^(x311!=x312));

    if (t69 != 492995857682036LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x314 = 1U;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = 1;
	volatile uint32_t t70 = 40U;

    t70 = ((x313-x314)^(x315!=x316));

    if (t70 != 4294934526U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x317 = 1263U;
	uint8_t x318 = UINT8_MAX;
	uint64_t x319 = 7LLU;
	int32_t x320 = -255;
	volatile int32_t t71 = -5;

    t71 = ((x317-x318)^(x319!=x320));

    if (t71 != 1009) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x325 = 334065471038352LLU;
	int16_t x326 = -44;
	static uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t72 = 264682LLU;

    t72 = ((x325-x326)^(x327!=x328));

    if (t72 != 334065471038397LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x330 = 0;
	uint16_t x331 = 12231U;
	int64_t x332 = -44860881819004LL;
	int64_t t73 = 6769LL;

    t73 = ((x329-x330)^(x331!=x332));

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x333 = -1;
	static int8_t x335 = -1;
	volatile uint32_t x336 = UINT32_MAX;
	volatile int32_t t74 = 63;

    t74 = ((x333-x334)^(x335!=x336));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = -1LL;
	int16_t x339 = INT16_MIN;
	static int32_t x340 = INT32_MIN;
	int64_t t75 = 8978LL;

    t75 = ((x337-x338)^(x339!=x340));

    if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	int64_t t76 = 12124769161656816LL;

    t76 = ((x345-x346)^(x347!=x348));

    if (t76 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x350 = -1;
	uint32_t x351 = 0U;
	volatile int64_t t77 = INT64_MIN;

    t77 = ((x349-x350)^(x351!=x352));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x353 = -15LL;
	int16_t x355 = 20;
	static int8_t x356 = -51;
	volatile int64_t t78 = -52770LL;

    t78 = ((x353-x354)^(x355!=x356));

    if (t78 != 239LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x357 = INT64_MAX;
	volatile uint16_t x358 = 4050U;
	uint64_t x360 = 2525718165LLU;
	volatile int64_t t79 = 45335621912645LL;

    t79 = ((x357-x358)^(x359!=x360));

    if (t79 != 9223372036854771756LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;

    t80 = ((x361-x362)^(x363!=x364));

    if (t80 != 1883) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x365 = 40U;
	volatile uint64_t x366 = 0LLU;
	static int8_t x367 = -1;
	static volatile uint64_t t81 = 6276038250LLU;

    t81 = ((x365-x366)^(x367!=x368));

    if (t81 != 41LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	volatile uint32_t t82 = 873U;

    t82 = ((x369-x370)^(x371!=x372));

    if (t82 != 32766U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x373 = INT16_MIN;
	uint16_t x374 = 1384U;
	volatile int32_t t83 = 628146218;

    t83 = ((x373-x374)^(x375!=x376));

    if (t83 != -34151) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x378 = INT16_MIN;
	int16_t x379 = -5481;
	int32_t t84 = 0;

    t84 = ((x377-x378)^(x379!=x380));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x382 = 7U;
	int64_t x383 = 39090447006474284LL;
	int16_t x384 = 48;

    t85 = ((x381-x382)^(x383!=x384));

    if (t85 != 121) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x385 = UINT16_MAX;
	uint8_t x387 = UINT8_MAX;

    t86 = ((x385-x386)^(x387!=x388));

    if (t86 != -1668551052LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	int8_t x390 = 10;
	static uint32_t t87 = 25U;

    t87 = ((x389-x390)^(x391!=x392));

    if (t87 != 4294967284U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x393 = 1U;
	int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int64_t x396 = -30548656LL;

    t88 = ((x393-x394)^(x395!=x396));

    if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x397 = INT32_MIN;
	static int16_t x399 = INT16_MAX;
	volatile int16_t x400 = 519;
	volatile int32_t t89 = INT32_MIN;

    t89 = ((x397-x398)^(x399!=x400));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = -1;
	uint16_t x410 = 9U;
	int32_t x411 = 4165;
	static volatile int64_t x412 = 1571093799190LL;
	int32_t t90 = 31754;

    t90 = ((x409-x410)^(x411!=x412));

    if (t90 != -9) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x413 = INT32_MIN;
	volatile int16_t x414 = -1;
	static int64_t x416 = INT64_MIN;
	volatile int32_t t91 = INT32_MIN;

    t91 = ((x413-x414)^(x415!=x416));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x417 = INT64_MIN;
	static int32_t x418 = -1;
	static int16_t x419 = -1;
	volatile uint8_t x420 = UINT8_MAX;
	static int64_t t92 = INT64_MIN;

    t92 = ((x417-x418)^(x419!=x420));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x422 = 70U;
	int8_t x423 = INT8_MIN;
	int32_t x424 = -14878;

    t93 = ((x421-x422)^(x423!=x424));

    if (t93 != -32837) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x425 = INT32_MIN;
	static int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	uint8_t x428 = 5U;
	volatile int64_t t94 = 510454014LL;

    t94 = ((x425-x426)^(x427!=x428));

    if (t94 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x429 = 13662U;
	volatile int64_t x431 = -1LL;
	static int32_t x432 = -3;
	volatile uint32_t t95 = 169518U;

    t95 = ((x429-x430)^(x431!=x432));

    if (t95 != 4294948190U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = UINT32_MAX;
	int64_t x436 = -1LL;
	static uint32_t t96 = 162919U;

    t96 = ((x433-x434)^(x435!=x436));

    if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x437 = INT64_MAX;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MAX;
	static volatile int64_t t97 = 0LL;

    t97 = ((x437-x438)^(x439!=x440));

    if (t97 != 9223372036543986247LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x445 = -1LL;
	static int16_t x446 = INT16_MAX;
	static int64_t x447 = 62LL;
	int16_t x448 = INT16_MAX;

    t98 = ((x445-x446)^(x447!=x448));

    if (t98 != -32767LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x449 = 1;
	volatile int32_t x450 = -374;
	int8_t x451 = -21;
	volatile int8_t x452 = -1;

    t99 = ((x449-x450)^(x451!=x452));

    if (t99 != 374) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x458 = INT32_MIN;
	int64_t x459 = -78784517LL;
	int64_t x460 = INT64_MIN;
	volatile int32_t t100 = -425;

    t100 = ((x457-x458)^(x459!=x460));

    if (t100 != 2147483521) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x461 = INT16_MIN;
	int8_t x462 = -1;
	int32_t x463 = INT32_MIN;
	static volatile uint64_t x464 = UINT64_MAX;
	int32_t t101 = -135;

    t101 = ((x461-x462)^(x463!=x464));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x465 = INT32_MIN;
	static uint64_t x466 = UINT64_MAX;
	static volatile uint64_t x468 = UINT64_MAX;
	uint64_t t102 = 15793624545LLU;

    t102 = ((x465-x466)^(x467!=x468));

    if (t102 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x469 = 1548LL;
	static int32_t x471 = INT32_MIN;
	uint16_t x472 = 16U;
	int64_t t103 = 72656333LL;

    t103 = ((x469-x470)^(x471!=x472));

    if (t103 != 1968664LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x473 = INT16_MIN;
	volatile uint16_t x475 = 21548U;
	int16_t x476 = INT16_MAX;
	int64_t t104 = -118070610LL;

    t104 = ((x473-x474)^(x475!=x476));

    if (t104 != 1764498193LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x477 = 6LLU;
	int32_t x478 = -1915203;
	int16_t x479 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	uint64_t t105 = 1390LLU;

    t105 = ((x477-x478)^(x479!=x480));

    if (t105 != 1915208LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x481 = INT8_MIN;
	static volatile int16_t x482 = INT16_MAX;
	static volatile int16_t x483 = INT16_MAX;
	static volatile int8_t x484 = 1;

    t106 = ((x481-x482)^(x483!=x484));

    if (t106 != -32896) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x489 = INT64_MAX;
	int32_t x490 = INT32_MAX;
	int8_t x491 = INT8_MIN;
	volatile int64_t t107 = 10010LL;

    t107 = ((x489-x490)^(x491!=x492));

    if (t107 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x494 = -1;
	int16_t x495 = -5;
	int64_t x496 = INT64_MAX;
	int64_t t108 = INT64_MIN;

    t108 = ((x493-x494)^(x495!=x496));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x497 = 15U;
	int16_t x500 = 7;

    t109 = ((x497-x498)^(x499!=x500));

    if (t109 != 4294934545U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x502 = INT8_MIN;
	int32_t x503 = INT32_MAX;
	static uint8_t x504 = UINT8_MAX;
	int32_t t110 = 28669;

    t110 = ((x501-x502)^(x503!=x504));

    if (t110 != 382) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = -1;
	int8_t x507 = 1;
	uint8_t x508 = UINT8_MAX;
	int32_t t111 = 1;

    t111 = ((x505-x506)^(x507!=x508));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x509 = 86417U;
	int32_t x510 = 0;
	int32_t x511 = INT32_MIN;
	int64_t x512 = 56532LL;
	volatile uint32_t t112 = 59562137U;

    t112 = ((x509-x510)^(x511!=x512));

    if (t112 != 86416U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile int64_t x515 = -1LL;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t113 = 554553408192995801LLU;

    t113 = ((x513-x514)^(x515!=x516));

    if (t113 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = 15554818607119LL;
	int16_t x523 = INT16_MAX;
	int16_t x524 = INT16_MIN;
	volatile int64_t t114 = 2862654235808LL;

    t114 = ((x521-x522)^(x523!=x524));

    if (t114 != -15556966090768LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x526 = 4048;
	static int64_t x527 = INT64_MAX;
	int8_t x528 = 39;
	volatile int32_t t115 = -1743812;

    t115 = ((x525-x526)^(x527!=x528));

    if (t115 != -4175) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x529 = -1;
	int8_t x530 = -9;
	int64_t x532 = INT64_MAX;
	volatile int32_t t116 = -6;

    t116 = ((x529-x530)^(x531!=x532));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x537 = 323709919061642LL;
	static volatile int16_t x538 = INT16_MIN;
	volatile int8_t x540 = -13;

    t117 = ((x537-x538)^(x539!=x540));

    if (t117 != 323709919094411LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x541 = -1LL;
	static int8_t x542 = INT8_MIN;
	int8_t x543 = INT8_MAX;
	int32_t x544 = INT32_MAX;
	volatile int64_t t118 = 50807842559LL;

    t118 = ((x541-x542)^(x543!=x544));

    if (t118 != 126LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x545 = 51673U;
	int8_t x546 = INT8_MAX;
	int16_t x548 = -3;

    t119 = ((x545-x546)^(x547!=x548));

    if (t119 != 51547U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x549 = INT16_MIN;
	volatile int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MIN;
	int32_t t120 = -10605;

    t120 = ((x549-x550)^(x551!=x552));

    if (t120 != -65536) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x553 = 7U;
	int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MIN;
	volatile uint16_t x556 = 6U;
	static int32_t t121 = 1467105;

    t121 = ((x553-x554)^(x555!=x556));

    if (t121 != 134) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x557 = -172;
	uint32_t x558 = UINT32_MAX;
	uint32_t x559 = 1241570U;
	uint16_t x560 = 365U;
	uint32_t t122 = 32743487U;

    t122 = ((x557-x558)^(x559!=x560));

    if (t122 != 4294967124U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x561 = INT64_MAX;
	int64_t x562 = 20745334518774223LL;
	static int32_t x563 = -29;

    t123 = ((x561-x562)^(x563!=x564));

    if (t123 != 9202626702336001585LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x565 = INT64_MAX;
	int32_t x568 = 0;
	volatile int64_t t124 = -4956539LL;

    t124 = ((x565-x566)^(x567!=x568));

    if (t124 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x571 = -1LL;
	volatile uint8_t x572 = UINT8_MAX;
	int32_t t125 = 3858169;

    t125 = ((x569-x570)^(x571!=x572));

    if (t125 != 32641) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x573 = 14;
	int16_t x574 = INT16_MIN;
	static int16_t x575 = -1;
	int8_t x576 = -25;
	int32_t t126 = -22;

    t126 = ((x573-x574)^(x575!=x576));

    if (t126 != 32783) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x581 = 3U;
	int32_t x583 = INT32_MAX;
	static int32_t t127 = -3;

    t127 = ((x581-x582)^(x583!=x584));

    if (t127 != 4) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = 52;
	uint64_t x587 = 29862829523LLU;
	static volatile int8_t x588 = INT8_MAX;
	volatile int32_t t128 = -29652;

    t128 = ((x585-x586)^(x587!=x588));

    if (t128 != -32819) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x589 = -137804;
	uint16_t x590 = 19603U;
	static volatile int8_t x591 = INT8_MAX;
	int16_t x592 = INT16_MIN;

    t129 = ((x589-x590)^(x591!=x592));

    if (t129 != -157408) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile int8_t x602 = INT8_MIN;
	volatile uint64_t x603 = 48998384031LLU;
	int8_t x604 = INT8_MIN;
	int32_t t130 = 696797189;

    t130 = ((x601-x602)^(x603!=x604));

    if (t130 != 65662) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	int64_t x606 = -59909LL;
	volatile int8_t x607 = INT8_MAX;
	volatile int64_t t131 = 599416LL;

    t131 = ((x605-x606)^(x607!=x608));

    if (t131 != 4295027205LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x613 = 1U;
	int32_t x614 = INT32_MAX;
	static int32_t x615 = -1;
	int8_t x616 = 12;
	volatile int32_t t132 = 5528559;

    t132 = ((x613-x614)^(x615!=x616));

    if (t132 != -2147483645) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x617 = UINT32_MAX;
	int16_t x618 = INT16_MIN;
	int64_t x619 = -9085767203818LL;
	static int8_t x620 = -2;
	uint32_t t133 = 11U;

    t133 = ((x617-x618)^(x619!=x620));

    if (t133 != 32766U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x621 = 1125135601692346625LLU;
	int32_t x623 = -1;
	static uint64_t x624 = 779934918614013950LLU;
	uint64_t t134 = 244LLU;

    t134 = ((x621-x622)^(x623!=x624));

    if (t134 != 10348507638547122435LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x625 = 16U;
	uint64_t x627 = UINT64_MAX;
	uint32_t x628 = 66712957U;

    t135 = ((x625-x626)^(x627!=x628));

    if (t135 != -32752) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x637 = -1LL;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = 45699U;
	volatile int64_t t136 = 1LL;

    t136 = ((x637-x638)^(x639!=x640));

    if (t136 != 32766LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x641 = 13621LL;
	static int32_t x644 = -1;

    t137 = ((x641-x642)^(x643!=x644));

    if (t137 != 2147497268LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x645 = 2026376657049879LLU;
	static volatile int64_t x646 = -1LL;
	int32_t x647 = -1;
	volatile uint64_t t138 = 684689365906842LLU;

    t138 = ((x645-x646)^(x647!=x648));

    if (t138 != 2026376657049881LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x657 = -1;
	static int64_t x658 = INT64_MIN;
	volatile int64_t x659 = INT64_MAX;
	volatile int16_t x660 = INT16_MAX;
	volatile int64_t t139 = 13LL;

    t139 = ((x657-x658)^(x659!=x660));

    if (t139 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	int64_t x663 = -180829180LL;
	static uint8_t x664 = UINT8_MAX;
	int32_t t140 = 170561454;

    t140 = ((x661-x662)^(x663!=x664));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x665 = -421140;
	uint32_t x666 = 3747442U;
	static int8_t x667 = INT8_MAX;
	uint32_t t141 = 360707U;

    t141 = ((x665-x666)^(x667!=x668));

    if (t141 != 4290798715U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x669 = 31245U;
	int8_t x670 = -1;
	uint16_t x671 = 3U;
	int16_t x672 = -13835;
	int32_t t142 = -12;

    t142 = ((x669-x670)^(x671!=x672));

    if (t142 != 31247) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x674 = INT8_MIN;
	int32_t x675 = INT32_MIN;
	uint32_t x676 = UINT32_MAX;
	int32_t t143 = 501;

    t143 = ((x673-x674)^(x675!=x676));

    if (t143 != -32639) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x677 = INT32_MIN;
	volatile int32_t x678 = -358094263;
	volatile int32_t x679 = 54;
	volatile int64_t x680 = -1LL;
	volatile int32_t t144 = -11822294;

    t144 = ((x677-x678)^(x679!=x680));

    if (t144 != -1789389386) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x685 = UINT8_MAX;
	static uint16_t x686 = UINT16_MAX;
	uint64_t x687 = 329403829739LLU;
	volatile int64_t x688 = INT64_MIN;
	static int32_t t145 = 24338313;

    t145 = ((x685-x686)^(x687!=x688));

    if (t145 != -65279) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x690 = -168843;
	uint64_t x692 = 539113600730587LLU;
	volatile int32_t t146 = -25715866;

    t146 = ((x689-x690)^(x691!=x692));

    if (t146 != 172453) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x693 = 104897;
	static int64_t x694 = INT64_MAX;
	uint16_t x695 = 420U;
	static uint32_t x696 = 40U;
	volatile int64_t t147 = -113LL;

    t147 = ((x693-x694)^(x695!=x696));

    if (t147 != -9223372036854670909LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x697 = INT32_MIN;
	static int64_t x698 = INT64_MIN;
	uint64_t x699 = UINT64_MAX;
	volatile int64_t t148 = -5959933844746501LL;

    t148 = ((x697-x698)^(x699!=x700));

    if (t148 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x705 = INT8_MAX;
	uint8_t x706 = 65U;
	uint16_t x707 = UINT16_MAX;
	volatile int32_t x708 = INT32_MAX;
	static volatile int32_t t149 = 555;

    t149 = ((x705-x706)^(x707!=x708));

    if (t149 != 63) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = -1;
	uint64_t x712 = UINT64_MAX;
	volatile int32_t t150 = 1;

    t150 = ((x709-x710)^(x711!=x712));

    if (t150 != 257) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x713 = INT8_MIN;
	int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MIN;
	int32_t t151 = 55822;

    t151 = ((x713-x714)^(x715!=x716));

    if (t151 != 2147483521) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x717 = 0;
	int64_t x718 = -1LL;
	int8_t x719 = -1;
	static int64_t x720 = INT64_MAX;
	static volatile int64_t t152 = -203148633LL;

    t152 = ((x717-x718)^(x719!=x720));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x721 = INT32_MIN;
	int8_t x724 = -3;
	static int32_t t153 = 1923;

    t153 = ((x721-x722)^(x723!=x724));

    if (t153 != -2147450879) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x725 = 442007631U;
	int64_t x726 = -1LL;
	int8_t x727 = -1;
	volatile int64_t t154 = -12733375012785641LL;

    t154 = ((x725-x726)^(x727!=x728));

    if (t154 != 442007633LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint64_t x730 = 7436336LLU;
	int8_t x732 = INT8_MAX;
	volatile uint64_t t155 = 0LLU;

    t155 = ((x729-x730)^(x731!=x732));

    if (t155 != 18446744071554631633LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x737 = -1;
	uint8_t x738 = UINT8_MAX;
	int32_t x739 = INT32_MIN;
	int8_t x740 = -1;
	static int32_t t156 = -29315;

    t156 = ((x737-x738)^(x739!=x740));

    if (t156 != -255) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x741 = INT8_MAX;
	int32_t x742 = 1;
	int16_t x743 = -1;
	uint64_t x744 = 260714506LLU;
	static volatile int32_t t157 = -57647;

    t157 = ((x741-x742)^(x743!=x744));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x746 = -856271196;
	static volatile uint64_t x747 = 7599LLU;
	volatile int32_t t158 = -4005965;

    t158 = ((x745-x746)^(x747!=x748));

    if (t158 != 856271194) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x749 = 2526LLU;
	volatile uint16_t x750 = 1U;
	static int64_t x751 = -29960LL;
	static int16_t x752 = INT16_MIN;
	uint64_t t159 = 3617LLU;

    t159 = ((x749-x750)^(x751!=x752));

    if (t159 != 2524LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x753 = INT32_MAX;
	volatile uint64_t x754 = 9133505LLU;
	static int8_t x755 = INT8_MIN;
	volatile uint64_t t160 = 1146LLU;

    t160 = ((x753-x754)^(x755!=x756));

    if (t160 != 2138350143LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x761 = -1;
	int8_t x763 = INT8_MIN;
	static volatile int8_t x764 = 0;
	volatile int32_t t161 = -2990351;

    t161 = ((x761-x762)^(x763!=x764));

    if (t161 != 126) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x765 = -8;
	static int32_t x767 = INT32_MAX;
	uint64_t x768 = UINT64_MAX;

    t162 = ((x765-x766)^(x767!=x768));

    if (t162 != -264) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x769 = -1LL;
	volatile int32_t x770 = INT32_MAX;
	int32_t x772 = -1;
	int64_t t163 = 1673932LL;

    t163 = ((x769-x770)^(x771!=x772));

    if (t163 != -2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x773 = INT16_MIN;
	int8_t x775 = -53;
	int32_t x776 = -1;

    t164 = ((x773-x774)^(x775!=x776));

    if (t164 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = -1;
	volatile uint32_t x778 = 760536036U;
	int64_t x779 = -1LL;
	static volatile int32_t x780 = INT32_MIN;
	volatile uint32_t t165 = 19203U;

    t165 = ((x777-x778)^(x779!=x780));

    if (t165 != 3534431258U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x781 = INT32_MIN;
	static volatile uint32_t x782 = 251340790U;
	uint32_t x783 = UINT32_MAX;
	volatile uint32_t t166 = 10U;

    t166 = ((x781-x782)^(x783!=x784));

    if (t166 != 1896142859U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x789 = -1;
	static uint32_t x791 = UINT32_MAX;
	uint32_t t167 = 25751U;

    t167 = ((x789-x790)^(x791!=x792));

    if (t167 != 4294740213U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x793 = 237734U;
	int64_t x794 = 8LL;
	int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MIN;

    t168 = ((x793-x794)^(x795!=x796));

    if (t168 != 237727LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x797 = INT16_MAX;
	volatile uint16_t x798 = UINT16_MAX;
	uint32_t x799 = UINT32_MAX;
	static uint64_t x800 = UINT64_MAX;
	static int32_t t169 = 15;

    t169 = ((x797-x798)^(x799!=x800));

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x801 = 2948686275716053519LLU;
	int8_t x802 = INT8_MIN;
	int16_t x803 = -132;
	static int32_t x804 = INT32_MIN;
	volatile uint64_t t170 = 7383700484298LLU;

    t170 = ((x801-x802)^(x803!=x804));

    if (t170 != 2948686275716053646LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x806 = -3;
	static int16_t x807 = -4;
	int32_t x808 = -1;
	volatile int64_t t171 = -937844LL;

    t171 = ((x805-x806)^(x807!=x808));

    if (t171 != 3LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x809 = INT8_MIN;
	uint16_t x812 = 16121U;
	volatile int64_t t172 = 768072985067LL;

    t172 = ((x809-x810)^(x811!=x812));

    if (t172 != 199513719334LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x813 = -13;
	static int32_t x815 = INT32_MIN;
	volatile int8_t x816 = 48;
	volatile int32_t t173 = -15400;

    t173 = ((x813-x814)^(x815!=x816));

    if (t173 != -5076) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x817 = -2;
	int64_t x819 = INT64_MIN;
	static int64_t x820 = -1265LL;
	int64_t t174 = 135552315416LL;

    t174 = ((x817-x818)^(x819!=x820));

    if (t174 != 62810LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = -58;
	int32_t x823 = INT32_MAX;
	static uint8_t x824 = 43U;
	volatile int32_t t175 = -29;

    t175 = ((x821-x822)^(x823!=x824));

    if (t175 != -2147483589) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x826 = INT64_MIN;
	int32_t x827 = -1;
	uint8_t x828 = UINT8_MAX;
	volatile uint64_t t176 = 5190336676LLU;

    t176 = ((x825-x826)^(x827!=x828));

    if (t176 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x829 = 198LLU;
	int16_t x830 = 9843;
	int64_t x831 = INT64_MAX;
	static int32_t x832 = INT32_MIN;
	static volatile uint64_t t177 = 5341934199701238818LLU;

    t177 = ((x829-x830)^(x831!=x832));

    if (t177 != 18446744073709541970LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x833 = 48U;
	int32_t x834 = -8024;
	uint8_t x836 = UINT8_MAX;
	int32_t t178 = -21940293;

    t178 = ((x833-x834)^(x835!=x836));

    if (t178 != 8073) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x837 = -1;
	volatile int8_t x839 = INT8_MIN;
	uint32_t x840 = UINT32_MAX;
	volatile int32_t t179 = -135356;

    t179 = ((x837-x838)^(x839!=x840));

    if (t179 != 5) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x841 = INT8_MAX;
	volatile int64_t x843 = INT64_MIN;
	int16_t x844 = INT16_MIN;
	volatile int32_t t180 = -29415;

    t180 = ((x841-x842)^(x843!=x844));

    if (t180 != -858) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x845 = -2140;
	int32_t x847 = 4201;
	int16_t x848 = INT16_MIN;

    t181 = ((x845-x846)^(x847!=x848));

    if (t181 != -388415867) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x849 = UINT16_MAX;
	uint8_t x851 = 5U;
	volatile int64_t t182 = 246021369538372LL;

    t182 = ((x849-x850)^(x851!=x852));

    if (t182 != -2240194LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x853 = 2;
	int16_t x854 = -1;
	uint16_t x855 = UINT16_MAX;
	int32_t x856 = INT32_MIN;
	volatile int32_t t183 = -114195505;

    t183 = ((x853-x854)^(x855!=x856));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x861 = 37;
	volatile int64_t x862 = INT64_MAX;
	uint64_t x863 = UINT64_MAX;
	int8_t x864 = -1;
	int64_t t184 = -2277875700LL;

    t184 = ((x861-x862)^(x863!=x864));

    if (t184 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x866 = UINT64_MAX;
	volatile int16_t x867 = INT16_MAX;
	uint16_t x868 = UINT16_MAX;

    t185 = ((x865-x866)^(x867!=x868));

    if (t185 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x869 = INT8_MAX;
	int8_t x870 = INT8_MIN;
	int16_t x872 = INT16_MIN;
	int32_t t186 = -426546967;

    t186 = ((x869-x870)^(x871!=x872));

    if (t186 != 254) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x873 = 14U;
	uint64_t x874 = 22217620840763900LLU;
	static volatile int64_t x876 = INT64_MIN;

    t187 = ((x873-x874)^(x875!=x876));

    if (t187 != 18424526452868787731LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x877 = INT16_MIN;
	int64_t x879 = INT64_MIN;
	int8_t x880 = INT8_MAX;

    t188 = ((x877-x878)^(x879!=x880));

    if (t188 != 421660) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x881 = -1;
	static uint32_t x882 = 17U;
	volatile uint8_t x884 = UINT8_MAX;
	uint32_t t189 = 5626553U;

    t189 = ((x881-x882)^(x883!=x884));

    if (t189 != 4294967279U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x885 = -69752760LL;
	int64_t x888 = 1451578LL;

    t190 = ((x885-x886)^(x887!=x888));

    if (t190 != -87549389LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x889 = INT8_MAX;
	int8_t x890 = -23;
	int16_t x891 = 277;
	uint32_t x892 = 472345092U;
	int32_t t191 = 1;

    t191 = ((x889-x890)^(x891!=x892));

    if (t191 != 151) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x894 = 20U;
	int16_t x895 = 0;

    t192 = ((x893-x894)^(x895!=x896));

    if (t192 != 4565) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x897 = -16;

    t193 = ((x897-x898)^(x899!=x900));

    if (t193 != -72) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x901 = 1;
	int32_t x902 = 487;
	static int8_t x903 = INT8_MAX;
	static volatile int64_t x904 = 3364874LL;

    t194 = ((x901-x902)^(x903!=x904));

    if (t194 != -485) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x906 = 9251860;
	int32_t x907 = INT32_MIN;
	int8_t x908 = INT8_MAX;

    t195 = ((x905-x906)^(x907!=x908));

    if (t195 != -9284627) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x909 = INT64_MIN;
	volatile int16_t x910 = -1;
	int64_t x911 = -4195LL;
	static int64_t t196 = INT64_MIN;

    t196 = ((x909-x910)^(x911!=x912));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x913 = -201;
	volatile int16_t x914 = INT16_MIN;
	int16_t x915 = -1;
	uint16_t x916 = 0U;
	static int32_t t197 = 500502416;

    t197 = ((x913-x914)^(x915!=x916));

    if (t197 != 32566) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x917 = 36U;
	int64_t x918 = INT64_MAX;
	int8_t x919 = -1;
	volatile int32_t x920 = -18;
	volatile int64_t t198 = -1276123617753901LL;

    t198 = ((x917-x918)^(x919!=x920));

    if (t198 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x922 = -54539017LL;
	int32_t x923 = INT32_MIN;
	int8_t x924 = INT8_MIN;
	int64_t t199 = 727812876660LL;

    t199 = ((x921-x922)^(x923!=x924));

    if (t199 != 54539145LL) { NG(); } else { ; }
	
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

