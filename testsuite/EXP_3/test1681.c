
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

uint16_t x1 = 4U;
int16_t x2 = 93;
static int32_t x3 = -9;
volatile int16_t x5 = 12;
int32_t t1 = -25;
int32_t x13 = INT32_MIN;
volatile int32_t t5 = 326905794;
int8_t x30 = -4;
int8_t x33 = INT8_MAX;
int16_t x44 = 20;
int64_t x46 = INT64_MIN;
uint32_t x51 = UINT32_MAX;
uint8_t x54 = 3U;
volatile int64_t x55 = -4705LL;
static int64_t x56 = -64048088019429959LL;
uint32_t x57 = UINT32_MAX;
static int32_t x61 = 810;
int16_t x65 = INT16_MAX;
static int32_t t16 = 85177;
int64_t x88 = 1088LL;
static volatile uint8_t x94 = 4U;
static int64_t x96 = INT64_MIN;
int8_t x100 = INT8_MIN;
int32_t t25 = 381598;
static volatile int32_t t26 = 839950;
volatile int8_t x109 = -20;
int32_t x121 = 2;
volatile uint16_t x122 = UINT16_MAX;
int32_t t30 = -21944;
static uint64_t x129 = UINT64_MAX;
int16_t x137 = 1;
int32_t x146 = INT32_MIN;
int32_t t36 = -380;
int8_t x149 = INT8_MIN;
static int16_t x152 = -12;
static volatile int64_t x154 = INT64_MAX;
int32_t t39 = -1;
static int8_t x166 = INT8_MAX;
static uint16_t x175 = 1U;
int8_t x177 = 34;
static uint32_t x178 = UINT32_MAX;
int32_t x179 = -13810865;
int32_t x180 = 8190;
volatile int32_t t44 = -1;
volatile int64_t x190 = -1132532733734853455LL;
static volatile int64_t x191 = INT64_MAX;
volatile int8_t x195 = -2;
static uint32_t x207 = 498U;
int32_t t51 = 13088097;
uint8_t x216 = 53U;
volatile int32_t t54 = 115096;
static volatile int32_t x241 = INT32_MAX;
volatile int64_t x251 = INT64_MIN;
volatile int32_t t62 = 4;
volatile int64_t x255 = INT64_MAX;
uint8_t x258 = 29U;
int32_t x271 = INT32_MIN;
int64_t x272 = 310357312214LL;
volatile int32_t t67 = -5538;
static int32_t x278 = INT32_MIN;
int16_t x284 = INT16_MIN;
static volatile int32_t t70 = -1016;
uint32_t x287 = UINT32_MAX;
uint16_t x288 = 1396U;
volatile uint64_t x290 = 355716038832LLU;
int16_t x291 = 4479;
static int64_t x292 = -12972333017900961LL;
static int32_t x295 = -1;
int32_t t77 = -23608159;
int64_t x316 = -236260391118296892LL;
volatile int8_t x329 = -3;
static int8_t x331 = -2;
int32_t t82 = -998358810;
uint32_t x333 = UINT32_MAX;
static volatile uint32_t x336 = 15U;
int32_t t84 = -3;
int32_t x350 = 44;
volatile uint16_t x352 = 210U;
int64_t x354 = INT64_MIN;
static int16_t x356 = INT16_MIN;
uint8_t x357 = 0U;
int32_t t91 = -2303;
static int32_t x372 = -1;
int32_t t92 = 45318;
int64_t x389 = INT64_MIN;
uint32_t x392 = UINT32_MAX;
int16_t x398 = -1;
uint64_t x408 = 19388022947LLU;
uint16_t x410 = UINT16_MAX;
static int32_t t105 = 12808;
int8_t x426 = INT8_MIN;
int32_t x427 = INT32_MIN;
int16_t x429 = INT16_MAX;
int16_t x430 = INT16_MIN;
int32_t x437 = -1;
int16_t x440 = 3579;
volatile int32_t t109 = -831371;
int16_t x441 = INT16_MIN;
int16_t x442 = INT16_MAX;
uint16_t x444 = UINT16_MAX;
int32_t t110 = -1;
uint16_t x450 = UINT16_MAX;
volatile uint64_t x454 = UINT64_MAX;
volatile uint64_t x457 = 201027LLU;
int16_t x458 = -6;
static volatile int64_t x462 = -356067394LL;
int32_t t115 = 23949013;
int32_t t117 = 1415;
volatile int32_t t119 = 5327496;
int64_t x482 = INT64_MIN;
uint64_t x489 = 581030586071832848LLU;
static int64_t x490 = INT64_MIN;
static uint16_t x491 = 2U;
int16_t x494 = INT16_MAX;
static int16_t x500 = INT16_MAX;
uint64_t x503 = 17419190423861LLU;
volatile int32_t t125 = 27;
volatile int32_t t127 = 5347;
volatile int32_t x514 = -211730;
uint32_t x519 = 430392828U;
int64_t x523 = INT64_MIN;
int16_t x525 = INT16_MIN;
volatile int8_t x529 = INT8_MIN;
int64_t x530 = INT64_MIN;
int32_t t132 = -2023;
static int32_t t134 = -1;
volatile int64_t x549 = INT64_MIN;
volatile int32_t x552 = INT32_MIN;
volatile int32_t t137 = -121;
int32_t x556 = -1;
volatile int8_t x557 = INT8_MIN;
int64_t x560 = -45LL;
static volatile uint16_t x564 = 13U;
int64_t x565 = -1785520984495944LL;
uint16_t x566 = UINT16_MAX;
static uint64_t x570 = UINT64_MAX;
uint8_t x578 = 1U;
static int8_t x580 = INT8_MAX;
static uint32_t x587 = UINT32_MAX;
static volatile int32_t t146 = -19;
uint16_t x592 = UINT16_MAX;
volatile uint32_t x593 = 1540480226U;
volatile int16_t x594 = -1;
int64_t x595 = -1LL;
int16_t x597 = INT16_MAX;
uint64_t x599 = 1148075576404LLU;
int32_t t149 = -174;
int8_t x602 = 12;
int64_t x603 = -9912443232LL;
volatile uint32_t x608 = 1358917U;
int64_t x613 = INT64_MIN;
int32_t x616 = 28;
int32_t x617 = INT32_MAX;
uint32_t x619 = 1136160251U;
int8_t x623 = INT8_MIN;
volatile uint8_t x625 = UINT8_MAX;
volatile uint32_t x627 = UINT32_MAX;
uint32_t x628 = 42630788U;
volatile int32_t t156 = -4;
int16_t x632 = -1;
volatile int32_t t157 = 520558;
int32_t x634 = -209;
int32_t t158 = 111;
int32_t x637 = INT32_MAX;
volatile int32_t x642 = INT32_MIN;
uint8_t x648 = 4U;
int32_t t165 = -32919079;
uint8_t x665 = UINT8_MAX;
int16_t x666 = INT16_MIN;
int16_t x669 = 32;
static volatile int32_t t167 = -13;
int32_t t168 = 4;
volatile int8_t x678 = INT8_MIN;
volatile int16_t x684 = INT16_MAX;
volatile int32_t t170 = 287;
volatile uint64_t x688 = 10833LLU;
static uint64_t x693 = 150016157038LLU;
static int64_t x700 = -2620LL;
int32_t t174 = 166289787;
int32_t t176 = 3262454;
uint32_t x709 = 302U;
int16_t x713 = -1;
uint64_t x714 = 11LLU;
static int32_t t179 = 19953227;
int16_t x722 = 6;
uint32_t x723 = 57569U;
uint32_t x727 = UINT32_MAX;
volatile int32_t x731 = INT32_MIN;
volatile int8_t x732 = -1;
int32_t x736 = INT32_MIN;
volatile int32_t t183 = 34555358;
uint32_t x746 = 876630U;
static uint32_t x747 = UINT32_MAX;
int64_t x754 = -1LL;
int16_t x759 = 2;
static int32_t x762 = INT32_MIN;
int8_t x763 = -1;
volatile int32_t t190 = -235767406;
uint8_t x772 = UINT8_MAX;
int32_t x773 = INT32_MAX;
uint64_t x774 = 24LLU;
int8_t x780 = -1;
volatile int32_t t194 = -1;
int64_t x782 = INT64_MIN;
int64_t x788 = -1LL;
int32_t x795 = INT32_MIN;
int8_t x797 = INT8_MIN;
static int64_t x798 = -1LL;
volatile int32_t t199 = -1832;


void f0(void) {
    	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -1207420;

    t0 = ((x1>x2)+(x3>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x6 = UINT32_MAX;
	int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = 30U;

    t1 = ((x5>x6)+(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 504;
	int64_t x10 = 432LL;
	volatile int16_t x11 = 102;
	uint8_t x12 = 20U;
	volatile int32_t t2 = 42;

    t2 = ((x9>x10)+(x11>x12));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x14 = INT64_MAX;
	int16_t x15 = -1;
	int32_t x16 = 15205;
	int32_t t3 = -63287;

    t3 = ((x13>x14)+(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 26964LLU;
	int32_t x18 = INT32_MAX;
	uint64_t x19 = 2308LLU;
	int32_t x20 = 1;
	int32_t t4 = -5;

    t4 = ((x17>x18)+(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 6U;
	volatile int8_t x22 = -27;
	static int64_t x23 = INT64_MIN;
	int16_t x24 = -1;

    t5 = ((x21>x22)+(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 1U;
	uint8_t x26 = 41U;
	int64_t x27 = 99LL;
	int32_t x28 = -52655278;
	volatile int32_t t6 = 32;

    t6 = ((x25>x26)+(x27>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	static int64_t x31 = INT64_MAX;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 2306241;

    t7 = ((x29>x30)+(x31>x32));

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x34 = 27U;
	int32_t x35 = 147654;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -2334321;

    t8 = ((x33>x34)+(x35>x36));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 195608LL;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 2U;
	static uint16_t x40 = UINT16_MAX;
	int32_t t9 = 2899044;

    t9 = ((x37>x38)+(x39>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	volatile int8_t x42 = -4;
	int32_t x43 = 1;
	int32_t t10 = -29;

    t10 = ((x41>x42)+(x43>x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	uint64_t x47 = 2316012906979518LLU;
	int8_t x48 = -57;
	int32_t t11 = 101;

    t11 = ((x45>x46)+(x47>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	uint16_t x52 = 3U;
	volatile int32_t t12 = 1022307734;

    t12 = ((x49>x50)+(x51>x52));

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	static int32_t t13 = 119778863;

    t13 = ((x53>x54)+(x55>x56));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 1166LLU;
	static int32_t t14 = -24201;

    t14 = ((x57>x58)+(x59>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = 5621U;
	volatile int32_t t15 = 494689502;

    t15 = ((x61>x62)+(x63>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	volatile uint64_t x68 = UINT64_MAX;

    t16 = ((x65>x66)+(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	volatile int64_t x70 = 17741LL;
	static uint16_t x71 = UINT16_MAX;
	int32_t x72 = 1502;
	int32_t t17 = 248;

    t17 = ((x69>x70)+(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	int16_t x75 = -52;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -29356087;

    t18 = ((x73>x74)+(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	int8_t x78 = INT8_MIN;
	volatile int32_t x79 = -39;
	int32_t x80 = -1;
	int32_t t19 = -119714;

    t19 = ((x77>x78)+(x79>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	uint64_t x82 = 1416766LLU;
	static int16_t x83 = 102;
	int16_t x84 = 3310;
	volatile int32_t t20 = -1;

    t20 = ((x81>x82)+(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -7;
	static volatile int32_t x86 = -19898066;
	int64_t x87 = INT64_MIN;
	int32_t t21 = 717262956;

    t21 = ((x85>x86)+(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	volatile uint64_t x91 = UINT64_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 4561;

    t22 = ((x89>x90)+(x91>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	uint8_t x95 = 90U;
	int32_t t23 = -1883731;

    t23 = ((x93>x94)+(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = -1;
	int8_t x99 = 2;
	volatile int32_t t24 = 3091923;

    t24 = ((x97>x98)+(x99>x100));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	uint16_t x102 = UINT16_MAX;
	int64_t x103 = INT64_MIN;
	uint16_t x104 = 1633U;

    t25 = ((x101>x102)+(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	static int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -1LL;

    t26 = ((x105>x106)+(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = -1;
	static int32_t t27 = -552173164;

    t27 = ((x109>x110)+(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 14U;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = 18;
	int32_t x116 = -1;
	int32_t t28 = -94727813;

    t28 = ((x113>x114)+(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x117 = -2380;
	static uint8_t x118 = 7U;
	int16_t x119 = -1;
	volatile int16_t x120 = INT16_MAX;
	int32_t t29 = 3940054;

    t29 = ((x117>x118)+(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x123 = UINT64_MAX;
	volatile int8_t x124 = -1;

    t30 = ((x121>x122)+(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x125 = 2545U;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile uint16_t x128 = 1U;
	volatile int32_t t31 = 60591;

    t31 = ((x125>x126)+(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x130 = 2;
	int8_t x131 = -13;
	uint16_t x132 = 1U;
	int32_t t32 = 12110;

    t32 = ((x129>x130)+(x131>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 2U;
	static volatile uint8_t x136 = UINT8_MAX;
	int32_t t33 = -1;

    t33 = ((x133>x134)+(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = -742049917887LL;
	int16_t x139 = -2;
	static uint32_t x140 = 37U;
	static int32_t t34 = -29902;

    t34 = ((x137>x138)+(x139>x140));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 11;
	static int16_t x142 = INT16_MAX;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	static int32_t t35 = 0;

    t35 = ((x141>x142)+(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = 242U;
	static int16_t x147 = -1886;
	static uint16_t x148 = 2919U;

    t36 = ((x145>x146)+(x147>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = UINT32_MAX;
	int64_t x151 = -1LL;
	int32_t t37 = 0;

    t37 = ((x149>x150)+(x151>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	static int16_t x155 = INT16_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	static int32_t t38 = 12920886;

    t38 = ((x153>x154)+(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int16_t x158 = 0;
	static volatile int8_t x159 = -34;
	uint64_t x160 = UINT64_MAX;

    t39 = ((x157>x158)+(x159>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	static int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	static int32_t x164 = INT32_MAX;
	int32_t t40 = -42;

    t40 = ((x161>x162)+(x163>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint8_t x167 = 0U;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -82539084;

    t41 = ((x165>x166)+(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	uint16_t x170 = UINT16_MAX;
	static int16_t x171 = 3621;
	uint32_t x172 = 475210056U;
	static volatile int32_t t42 = -1360;

    t42 = ((x169>x170)+(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -455805909;
	int8_t x174 = -1;
	uint16_t x176 = 1U;
	int32_t t43 = 132168363;

    t43 = ((x173>x174)+(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    

    t44 = ((x177>x178)+(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -162882;
	uint8_t x182 = 56U;
	volatile int32_t x183 = INT32_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	int32_t t45 = -111;

    t45 = ((x181>x182)+(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = -1LL;
	volatile int8_t x186 = 3;
	int64_t x187 = -6630621100369826LL;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -1;

    t46 = ((x185>x186)+(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = 23;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -121160;

    t47 = ((x189>x190)+(x191>x192));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 3721LLU;
	uint32_t x194 = 106817U;
	static volatile int16_t x196 = -1;
	static volatile int32_t t48 = -28701632;

    t48 = ((x193>x194)+(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x197 = 5U;
	int16_t x198 = -885;
	static int8_t x199 = 0;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = -290434;

    t49 = ((x197>x198)+(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1081235118LL;
	volatile int16_t x202 = INT16_MAX;
	int8_t x203 = 19;
	int32_t x204 = INT32_MAX;
	volatile int32_t t50 = 171;

    t50 = ((x201>x202)+(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int64_t x206 = -887792LL;
	static int64_t x208 = INT64_MIN;

    t51 = ((x205>x206)+(x207>x208));

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	volatile int16_t x210 = INT16_MIN;
	volatile int64_t x211 = 245973357474025LL;
	uint8_t x212 = 3U;
	int32_t t52 = 1864895;

    t52 = ((x209>x210)+(x211>x212));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = 4444;
	volatile int32_t t53 = -18109;

    t53 = ((x213>x214)+(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = UINT8_MAX;
	int64_t x218 = -69000718LL;
	int32_t x219 = -1;
	uint32_t x220 = 60U;

    t54 = ((x217>x218)+(x219>x220));

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 238443U;
	volatile uint16_t x222 = 379U;
	int64_t x223 = INT64_MAX;
	uint32_t x224 = 473U;
	volatile int32_t t55 = -3361817;

    t55 = ((x221>x222)+(x223>x224));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	volatile int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = -1;
	volatile int32_t t56 = -30620;

    t56 = ((x225>x226)+(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -5;
	int8_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t57 = 6;

    t57 = ((x229>x230)+(x231>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 121;
	int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MAX;
	int8_t x236 = -1;
	volatile int32_t t58 = 244189;

    t58 = ((x233>x234)+(x235>x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = 41U;
	int32_t t59 = -1;

    t59 = ((x237>x238)+(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x242 = INT16_MIN;
	volatile uint32_t x243 = 1549U;
	int64_t x244 = INT64_MAX;
	int32_t t60 = 7153301;

    t60 = ((x241>x242)+(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -5432288;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 14779494U;
	volatile uint16_t x248 = 675U;
	int32_t t61 = 8535470;

    t61 = ((x245>x246)+(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	static uint8_t x252 = 21U;

    t62 = ((x249>x250)+(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static uint64_t x254 = 3LLU;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 83255;

    t63 = ((x253>x254)+(x255>x256));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 1U;
	static int8_t x259 = INT8_MAX;
	uint16_t x260 = 256U;
	volatile int32_t t64 = -1085304;

    t64 = ((x257>x258)+(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int16_t x262 = -3702;
	static int16_t x263 = 11462;
	volatile uint32_t x264 = UINT32_MAX;
	static int32_t t65 = 2;

    t65 = ((x261>x262)+(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 5U;
	uint32_t x266 = 946796708U;
	uint8_t x267 = 28U;
	volatile uint16_t x268 = 268U;
	volatile int32_t t66 = -1;

    t66 = ((x265>x266)+(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x270 = 155;

    t67 = ((x269>x270)+(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	volatile int32_t t68 = -674789331;

    t68 = ((x273>x274)+(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 3704;
	static int8_t x279 = INT8_MAX;
	uint16_t x280 = 14488U;
	volatile int32_t t69 = 1692;

    t69 = ((x277>x278)+(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	static int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;

    t70 = ((x281>x282)+(x283>x284));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 18332U;
	int32_t x286 = INT32_MIN;
	volatile int32_t t71 = -162592271;

    t71 = ((x285>x286)+(x287>x288));

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	static int32_t t72 = -5;

    t72 = ((x289>x290)+(x291>x292));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	static volatile int32_t x296 = INT32_MIN;
	static int32_t t73 = 298326292;

    t73 = ((x293>x294)+(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	volatile int16_t x298 = -10;
	volatile int8_t x299 = INT8_MAX;
	static volatile uint64_t x300 = UINT64_MAX;
	int32_t t74 = 29944766;

    t74 = ((x297>x298)+(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	uint8_t x302 = UINT8_MAX;
	static int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	int32_t t75 = 958632411;

    t75 = ((x301>x302)+(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	static int16_t x306 = -1;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = -305700253;

    t76 = ((x305>x306)+(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;

    t77 = ((x309>x310)+(x311>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 7U;
	volatile int64_t x314 = INT64_MIN;
	uint64_t x315 = 134955LLU;
	static volatile int32_t t78 = -120469435;

    t78 = ((x313>x314)+(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	int32_t x320 = 174288;
	static volatile int32_t t79 = 3539560;

    t79 = ((x317>x318)+(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	static uint64_t x324 = UINT64_MAX;
	volatile int32_t t80 = 721471609;

    t80 = ((x321>x322)+(x323>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = UINT8_MAX;
	static int32_t x326 = -27520;
	int64_t x327 = -45667967089881LL;
	uint32_t x328 = 134550U;
	static int32_t t81 = 1;

    t81 = ((x325>x326)+(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x330 = -249;
	volatile int16_t x332 = -24;

    t82 = ((x329>x330)+(x331>x332));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x334 = -6475191908926581LL;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t83 = 1097646;

    t83 = ((x333>x334)+(x335>x336));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 22993U;
	volatile int32_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = -5;

    t84 = ((x337>x338)+(x339>x340));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 28733224LL;
	int8_t x342 = -1;
	static volatile uint64_t x343 = 4LLU;
	int16_t x344 = 1;
	int32_t t85 = 1;

    t85 = ((x341>x342)+(x343>x344));

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MAX;
	static uint16_t x347 = 114U;
	int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 418776;

    t86 = ((x345>x346)+(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	int32_t t87 = 1044376;

    t87 = ((x349>x350)+(x351>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = 4;
	uint16_t x355 = 3823U;
	int32_t t88 = 31;

    t88 = ((x353>x354)+(x355>x356));

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = -12LL;
	int32_t t89 = -1;

    t89 = ((x357>x358)+(x359>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 7U;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = 107U;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 6894072;

    t90 = ((x361>x362)+(x363>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	uint8_t x366 = 4U;
	int16_t x367 = 27;
	uint16_t x368 = 443U;

    t91 = ((x365>x366)+(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x369 = 7199LLU;
	volatile int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;

    t92 = ((x369>x370)+(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	static uint16_t x374 = UINT16_MAX;
	static int32_t x375 = -153;
	static int16_t x376 = INT16_MIN;
	int32_t t93 = -118;

    t93 = ((x373>x374)+(x375>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	static volatile uint8_t x378 = 1U;
	int16_t x379 = 13;
	int8_t x380 = -1;
	int32_t t94 = -1783130;

    t94 = ((x377>x378)+(x379>x380));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	static int16_t x383 = 13;
	int64_t x384 = INT64_MAX;
	volatile int32_t t95 = 4;

    t95 = ((x381>x382)+(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -2;
	int32_t x386 = 62302;
	static int64_t x387 = INT64_MIN;
	volatile uint32_t x388 = 207U;
	volatile int32_t t96 = -1;

    t96 = ((x385>x386)+(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x390 = 65523U;
	uint64_t x391 = 49759481LLU;
	int32_t t97 = 5783485;

    t97 = ((x389>x390)+(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = 1448;
	int32_t x395 = INT32_MIN;
	int32_t x396 = 36;
	volatile int32_t t98 = -52;

    t98 = ((x393>x394)+(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	uint8_t x399 = 0U;
	uint32_t x400 = 3148929U;
	volatile int32_t t99 = 51;

    t99 = ((x397>x398)+(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	uint8_t x402 = 12U;
	volatile int16_t x403 = -1;
	int64_t x404 = INT64_MIN;
	int32_t t100 = 15;

    t100 = ((x401>x402)+(x403>x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -107703;
	static volatile int32_t x406 = 1797;
	int32_t x407 = INT32_MIN;
	volatile int32_t t101 = -1;

    t101 = ((x405>x406)+(x407>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 483;
	static volatile int64_t x411 = INT64_MIN;
	uint32_t x412 = UINT32_MAX;
	static volatile int32_t t102 = 3;

    t102 = ((x409>x410)+(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 3;
	int32_t x414 = -1;
	int32_t x415 = 343745614;
	int16_t x416 = -1;
	volatile int32_t t103 = -2322;

    t103 = ((x413>x414)+(x415>x416));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x417 = 374461LLU;
	int8_t x418 = INT8_MIN;
	static int64_t x419 = INT64_MIN;
	int32_t x420 = 1501797;
	int32_t t104 = -3696677;

    t104 = ((x417>x418)+(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	uint64_t x422 = 690397954103282000LLU;
	static uint16_t x423 = UINT16_MAX;
	static int32_t x424 = INT32_MIN;

    t105 = ((x421>x422)+(x423>x424));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 1309U;
	uint64_t x428 = 3LLU;
	int32_t t106 = 2;

    t106 = ((x425>x426)+(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x431 = 86U;
	int8_t x432 = 1;
	volatile int32_t t107 = 2194;

    t107 = ((x429>x430)+(x431>x432));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -2507;
	int64_t x434 = INT64_MAX;
	volatile uint32_t x435 = UINT32_MAX;
	int32_t x436 = -21197;
	volatile int32_t t108 = 61046242;

    t108 = ((x433>x434)+(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = -1;
	int64_t x439 = -1LL;

    t109 = ((x437>x438)+(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x443 = 161U;

    t110 = ((x441>x442)+(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MAX;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = 12443134799034793LL;
	volatile int8_t x448 = INT8_MIN;
	int32_t t111 = 3331;

    t111 = ((x445>x446)+(x447>x448));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 14;
	static uint16_t x451 = 1U;
	int64_t x452 = 0LL;
	volatile int32_t t112 = 10;

    t112 = ((x449>x450)+(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	int64_t x455 = -24628LL;
	int32_t x456 = INT32_MAX;
	int32_t t113 = -907385;

    t113 = ((x453>x454)+(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x459 = 75U;
	static int32_t x460 = INT32_MAX;
	static int32_t t114 = -17944940;

    t114 = ((x457>x458)+(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = -1;
	volatile int32_t x463 = INT32_MAX;
	int64_t x464 = INT64_MAX;

    t115 = ((x461>x462)+(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	static uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MAX;
	uint64_t x468 = 484079578655LLU;
	int32_t t116 = -495430736;

    t116 = ((x465>x466)+(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -1;
	int16_t x470 = -2;
	static volatile int32_t x471 = -1;
	uint64_t x472 = 660459LLU;

    t117 = ((x469>x470)+(x471>x472));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	uint32_t x474 = UINT32_MAX;
	int64_t x475 = INT64_MAX;
	volatile int32_t x476 = INT32_MIN;
	int32_t t118 = -97376198;

    t118 = ((x473>x474)+(x475>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 27126914224LLU;
	int16_t x478 = INT16_MAX;
	int32_t x479 = -1;
	uint64_t x480 = 354LLU;

    t119 = ((x477>x478)+(x479>x480));

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -189539LL;
	static int16_t x483 = INT16_MIN;
	uint16_t x484 = 4U;
	static volatile int32_t t120 = 122212;

    t120 = ((x481>x482)+(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MIN;
	int8_t x487 = INT8_MAX;
	volatile uint16_t x488 = 1U;
	int32_t t121 = 3678;

    t121 = ((x485>x486)+(x487>x488));

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x492 = INT16_MAX;
	int32_t t122 = 686741;

    t122 = ((x489>x490)+(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -1;
	int16_t x495 = INT16_MAX;
	int32_t x496 = -1423;
	int32_t t123 = -12005;

    t123 = ((x493>x494)+(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = 229236774476LLU;
	volatile int8_t x498 = INT8_MIN;
	int8_t x499 = INT8_MAX;
	volatile int32_t t124 = 75;

    t124 = ((x497>x498)+(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = -504087031149989298LL;
	int64_t x502 = -1LL;
	int16_t x504 = -1;

    t125 = ((x501>x502)+(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	int64_t x506 = -499176993677LL;
	static uint16_t x507 = 54U;
	volatile int64_t x508 = INT64_MAX;
	static int32_t t126 = -1337287;

    t126 = ((x505>x506)+(x507>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	uint32_t x510 = 4U;
	uint8_t x511 = UINT8_MAX;
	int64_t x512 = 1978184641713885LL;

    t127 = ((x509>x510)+(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 519U;
	int64_t x515 = -689365617653LL;
	int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -4;

    t128 = ((x513>x514)+(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1270LL;
	int16_t x518 = -2;
	int16_t x520 = INT16_MAX;
	static volatile int32_t t129 = 709189;

    t129 = ((x517>x518)+(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = 60666;
	int8_t x524 = -1;
	volatile int32_t t130 = 1999828;

    t130 = ((x521>x522)+(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x526 = INT32_MIN;
	static volatile uint16_t x527 = 26U;
	int64_t x528 = INT64_MIN;
	int32_t t131 = -252;

    t131 = ((x525>x526)+(x527>x528));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x531 = INT16_MIN;
	uint64_t x532 = 581732LLU;

    t132 = ((x529>x530)+(x531>x532));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -1;
	uint16_t x534 = 31385U;
	int64_t x535 = -7LL;
	static int8_t x536 = INT8_MIN;
	static volatile int32_t t133 = -2048527;

    t133 = ((x533>x534)+(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 49U;
	uint32_t x538 = 6233594U;
	volatile int64_t x539 = -1LL;
	uint32_t x540 = UINT32_MAX;

    t134 = ((x537>x538)+(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	uint16_t x542 = 2U;
	int8_t x543 = INT8_MIN;
	int64_t x544 = INT64_MAX;
	static volatile int32_t t135 = 2938843;

    t135 = ((x541>x542)+(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MIN;
	static volatile uint8_t x548 = 31U;
	static volatile int32_t t136 = -34803;

    t136 = ((x545>x546)+(x547>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x550 = -1682;
	int32_t x551 = 1;

    t137 = ((x549>x550)+(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -23177776636347LL;
	volatile uint64_t x554 = 887389LLU;
	int64_t x555 = INT64_MIN;
	volatile int32_t t138 = -73;

    t138 = ((x553>x554)+(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x558 = 12511U;
	uint64_t x559 = 218LLU;
	int32_t t139 = 516663991;

    t139 = ((x557>x558)+(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 253282495371015LLU;
	uint32_t x562 = 508454697U;
	static int16_t x563 = INT16_MAX;
	int32_t t140 = -1;

    t140 = ((x561>x562)+(x563>x564));

    if (t140 != 2) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x567 = UINT16_MAX;
	int8_t x568 = INT8_MAX;
	volatile int32_t t141 = -191392;

    t141 = ((x565>x566)+(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -3526085240714693LL;
	uint32_t x571 = UINT32_MAX;
	volatile int8_t x572 = INT8_MIN;
	int32_t t142 = -130168;

    t142 = ((x569>x570)+(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = UINT8_MAX;
	uint64_t x574 = 3753364602LLU;
	int8_t x575 = 0;
	uint16_t x576 = 3U;
	volatile int32_t t143 = -52403358;

    t143 = ((x573>x574)+(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 0U;
	static uint32_t x579 = UINT32_MAX;
	static int32_t t144 = 1217;

    t144 = ((x577>x578)+(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x581 = INT64_MIN;
	static int8_t x582 = INT8_MIN;
	static int64_t x583 = INT64_MIN;
	uint32_t x584 = UINT32_MAX;
	static int32_t t145 = -1914812;

    t145 = ((x581>x582)+(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MAX;
	int32_t x588 = INT32_MAX;

    t146 = ((x585>x586)+(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 1LLU;
	int64_t x590 = -1LL;
	int64_t x591 = 147393073458545703LL;
	static volatile int32_t t147 = 105105746;

    t147 = ((x589>x590)+(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x596 = -1;
	static volatile int32_t t148 = 1;

    t148 = ((x593>x594)+(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MAX;
	static int64_t x600 = -1LL;

    t149 = ((x597>x598)+(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 27U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = 3;

    t150 = ((x601>x602)+(x603>x604));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = 2375713206558423LLU;
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MAX;
	volatile int32_t t151 = 226;

    t151 = ((x605>x606)+(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 2707LLU;
	int16_t x610 = -1;
	int32_t x611 = -122305509;
	static volatile uint16_t x612 = 94U;
	volatile int32_t t152 = -7291;

    t152 = ((x609>x610)+(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = 4674702LLU;
	int32_t x615 = -24030;
	int32_t t153 = -20;

    t153 = ((x613>x614)+(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x618 = -158;
	static uint16_t x620 = 1U;
	int32_t t154 = -13608923;

    t154 = ((x617>x618)+(x619>x620));

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -3;
	volatile int64_t x622 = -1LL;
	uint32_t x624 = 3673819U;
	volatile int32_t t155 = 92;

    t155 = ((x621>x622)+(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MIN;

    t156 = ((x625>x626)+(x627>x628));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 7U;
	int16_t x630 = -1;
	int16_t x631 = INT16_MIN;

    t157 = ((x629>x630)+(x631>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 1;
	uint16_t x635 = UINT16_MAX;
	static volatile int32_t x636 = INT32_MAX;

    t158 = ((x633>x634)+(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x638 = INT8_MAX;
	int16_t x639 = -1;
	volatile int64_t x640 = INT64_MIN;
	int32_t t159 = -190;

    t159 = ((x637>x638)+(x639>x640));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = -148;
	volatile uint16_t x643 = 6084U;
	int16_t x644 = INT16_MAX;
	int32_t t160 = 35951800;

    t160 = ((x641>x642)+(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	uint32_t x646 = 888928U;
	int64_t x647 = -63986884758024181LL;
	int32_t t161 = -21947;

    t161 = ((x645>x646)+(x647>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 14U;
	volatile int8_t x650 = -1;
	uint32_t x651 = UINT32_MAX;
	uint8_t x652 = 7U;
	static volatile int32_t t162 = -1;

    t162 = ((x649>x650)+(x651>x652));

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	static int64_t x654 = INT64_MIN;
	volatile int8_t x655 = 14;
	int32_t x656 = -1;
	static int32_t t163 = -1262557;

    t163 = ((x653>x654)+(x655>x656));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 176U;
	uint32_t x658 = UINT32_MAX;
	static int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MAX;
	int32_t t164 = 474;

    t164 = ((x657>x658)+(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int16_t x662 = -1;
	volatile int8_t x663 = INT8_MIN;
	static int32_t x664 = INT32_MAX;

    t165 = ((x661>x662)+(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x667 = -3630;
	volatile int32_t x668 = -9947335;
	volatile int32_t t166 = 19;

    t166 = ((x665>x666)+(x667>x668));

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MAX;
	int64_t x671 = -23887418479LL;
	int32_t x672 = -1;

    t167 = ((x669>x670)+(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	uint64_t x674 = UINT64_MAX;
	volatile int8_t x675 = INT8_MIN;
	uint64_t x676 = 43423LLU;

    t168 = ((x673>x674)+(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -4918589LL;
	uint16_t x679 = UINT16_MAX;
	static int32_t x680 = -1;
	static int32_t t169 = 910528661;

    t169 = ((x677>x678)+(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	uint16_t x682 = UINT16_MAX;
	static int32_t x683 = INT32_MAX;

    t170 = ((x681>x682)+(x683>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = UINT32_MAX;
	int32_t x686 = INT32_MAX;
	volatile int8_t x687 = INT8_MIN;
	volatile int32_t t171 = 996;

    t171 = ((x685>x686)+(x687>x688));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 1LL;
	uint64_t x690 = 20721260LLU;
	uint8_t x691 = 14U;
	static volatile int8_t x692 = -24;
	static volatile int32_t t172 = 251883;

    t172 = ((x689>x690)+(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = INT32_MAX;
	static int64_t x695 = -45281617330LL;
	int32_t x696 = INT32_MIN;
	int32_t t173 = -1858524;

    t173 = ((x693>x694)+(x695>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 9U;
	volatile int64_t x698 = INT64_MIN;
	uint16_t x699 = 110U;

    t174 = ((x697>x698)+(x699>x700));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 197705LLU;
	volatile uint8_t x702 = 65U;
	int16_t x703 = -1;
	int64_t x704 = 28591051478LL;
	volatile int32_t t175 = -485560152;

    t175 = ((x701>x702)+(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = INT64_MIN;
	uint16_t x707 = UINT16_MAX;
	int32_t x708 = INT32_MAX;

    t176 = ((x705>x706)+(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x710 = 189838983U;
	static int8_t x711 = -6;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = 8254529;

    t177 = ((x709>x710)+(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x715 = INT8_MIN;
	uint8_t x716 = 5U;
	int32_t t178 = 39;

    t178 = ((x713>x714)+(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = UINT32_MAX;
	volatile int8_t x718 = INT8_MAX;
	int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;

    t179 = ((x717>x718)+(x719>x720));

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	volatile uint16_t x724 = UINT16_MAX;
	volatile int32_t t180 = -64263;

    t180 = ((x721>x722)+(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	static volatile int16_t x726 = -1573;
	int16_t x728 = INT16_MIN;
	volatile int32_t t181 = 54;

    t181 = ((x725>x726)+(x727>x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	static int16_t x730 = INT16_MIN;
	int32_t t182 = -25718044;

    t182 = ((x729>x730)+(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MIN;
	static int32_t x734 = -1;
	static volatile int8_t x735 = INT8_MIN;

    t183 = ((x733>x734)+(x735>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int64_t x738 = -1LL;
	int32_t x739 = INT32_MIN;
	volatile int8_t x740 = -3;
	int32_t t184 = -181;

    t184 = ((x737>x738)+(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 0;
	int8_t x742 = 1;
	int32_t x743 = 170838027;
	int64_t x744 = -15308027871669LL;
	volatile int32_t t185 = -2083030;

    t185 = ((x741>x742)+(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 19234U;
	uint64_t x748 = 84664LLU;
	volatile int32_t t186 = 47349;

    t186 = ((x745>x746)+(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	static int16_t x750 = INT16_MIN;
	int32_t x751 = -1305;
	volatile uint32_t x752 = 3U;
	int32_t t187 = 57620;

    t187 = ((x749>x750)+(x751>x752));

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = INT64_MIN;
	uint16_t x755 = 5096U;
	uint64_t x756 = 54889771319LLU;
	int32_t t188 = 1652;

    t188 = ((x753>x754)+(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 1U;
	static uint8_t x758 = 54U;
	uint16_t x760 = UINT16_MAX;
	int32_t t189 = 0;

    t189 = ((x757>x758)+(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	uint64_t x764 = 33391LLU;

    t190 = ((x761>x762)+(x763>x764));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	static uint32_t x766 = UINT32_MAX;
	int8_t x767 = -1;
	uint8_t x768 = UINT8_MAX;
	static volatile int32_t t191 = -1;

    t191 = ((x765>x766)+(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	uint8_t x770 = 3U;
	int64_t x771 = INT64_MIN;
	int32_t t192 = 36772325;

    t192 = ((x769>x770)+(x771>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x775 = 86U;
	static int32_t x776 = -1;
	int32_t t193 = 1934769;

    t193 = ((x773>x774)+(x775>x776));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MAX;
	static int64_t x778 = INT64_MAX;
	uint16_t x779 = UINT16_MAX;

    t194 = ((x777>x778)+(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	static int8_t x783 = -1;
	static int64_t x784 = INT64_MIN;
	volatile int32_t t195 = 2;

    t195 = ((x781>x782)+(x783>x784));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -15;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int32_t t196 = -43;

    t196 = ((x785>x786)+(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -24;
	int8_t x790 = INT8_MAX;
	volatile int16_t x791 = INT16_MIN;
	int16_t x792 = INT16_MIN;
	int32_t t197 = -3;

    t197 = ((x789>x790)+(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = UINT8_MAX;
	int16_t x794 = INT16_MAX;
	int16_t x796 = 1927;
	int32_t t198 = 22942420;

    t198 = ((x793>x794)+(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x799 = -1LL;
	uint16_t x800 = 4484U;

    t199 = ((x797>x798)+(x799>x800));

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

