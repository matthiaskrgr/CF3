
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

uint32_t x5 = 42078U;
int64_t x20 = INT64_MIN;
volatile int64_t t4 = INT64_MIN;
static volatile int64_t x21 = -1LL;
static volatile int64_t t5 = INT64_MIN;
uint64_t x25 = UINT64_MAX;
volatile int16_t x26 = 3804;
uint8_t x28 = UINT8_MAX;
int32_t x30 = -1;
int64_t x32 = INT64_MAX;
uint64_t x37 = UINT64_MAX;
int64_t t10 = -11478499381115LL;
uint16_t x52 = 23U;
volatile int32_t t12 = -26550;
int64_t x54 = -825134LL;
uint64_t x56 = 1521844285LLU;
volatile uint64_t t13 = 561574290LLU;
static int32_t t16 = -268;
int16_t x75 = INT16_MAX;
int64_t x80 = -1LL;
volatile int64_t x86 = INT64_MIN;
int16_t x93 = 2206;
uint8_t x94 = 1U;
static int32_t x95 = -1;
static volatile int16_t x99 = INT16_MIN;
static uint64_t t26 = 265150257LLU;
volatile uint32_t x112 = 30U;
volatile uint32_t t27 = 138288728U;
static uint8_t x117 = UINT8_MAX;
int8_t x119 = INT8_MAX;
int32_t x121 = -1;
volatile int8_t x125 = -1;
uint32_t x128 = 98316582U;
uint16_t x130 = 19635U;
uint16_t x137 = UINT16_MAX;
int64_t x138 = INT64_MIN;
int16_t x141 = -6897;
static volatile uint64_t t37 = 5249478983LLU;
volatile int64_t x161 = INT64_MIN;
int16_t x163 = -5;
uint16_t x164 = 1771U;
uint32_t x166 = 1129U;
int8_t x169 = INT8_MIN;
static volatile int32_t x173 = INT32_MIN;
volatile int64_t x174 = INT64_MIN;
static int64_t x175 = 252070267332417LL;
int32_t x177 = -5967;
volatile uint32_t x180 = UINT32_MAX;
volatile int16_t x183 = INT16_MIN;
uint8_t x184 = 1U;
uint64_t x188 = 99728314103016LLU;
volatile uint64_t t46 = 2061635643LLU;
volatile int16_t x191 = INT16_MIN;
int16_t x198 = INT16_MIN;
uint64_t t49 = 12364799413443LLU;
int64_t x213 = -1123896LL;
int32_t x216 = -1;
uint32_t x217 = UINT32_MAX;
uint64_t t54 = 25752LLU;
uint16_t x221 = UINT16_MAX;
int8_t x223 = 1;
static int32_t x226 = INT32_MAX;
uint8_t x235 = 4U;
uint64_t x244 = UINT64_MAX;
static int8_t x245 = INT8_MIN;
static int64_t x246 = -2043LL;
int8_t x247 = INT8_MAX;
int8_t x249 = INT8_MIN;
volatile uint16_t x252 = UINT16_MAX;
uint64_t x255 = UINT64_MAX;
int64_t x258 = INT64_MAX;
int32_t x260 = INT32_MAX;
static int64_t x263 = INT64_MIN;
int32_t t65 = -5;
int64_t x274 = -15140399431LL;
int8_t x282 = 7;
int32_t t71 = 3651721;
int8_t x289 = INT8_MIN;
int16_t x304 = INT16_MIN;
int64_t x313 = INT64_MIN;
uint8_t x317 = 4U;
static int16_t x321 = INT16_MIN;
static int16_t x327 = INT16_MIN;
int16_t x328 = 256;
static int16_t x331 = INT16_MIN;
uint8_t x337 = UINT8_MAX;
uint32_t x339 = 96U;
static int32_t t85 = -144379089;
int32_t x352 = INT32_MIN;
int32_t x356 = INT32_MIN;
int64_t x357 = -1LL;
int32_t x365 = -1;
static volatile int8_t x371 = -1;
int32_t x377 = INT32_MIN;
int64_t x378 = INT64_MIN;
static int32_t x382 = 7870650;
int16_t x383 = INT16_MIN;
int64_t x386 = INT64_MIN;
uint8_t x393 = 1U;
uint16_t x405 = 242U;
static uint64_t x408 = 24907737076940LLU;
volatile int32_t t102 = -32624;
uint16_t x413 = UINT16_MAX;
volatile int64_t x414 = INT64_MIN;
int32_t t103 = 12;
static int8_t x417 = INT8_MIN;
int8_t x420 = -1;
int64_t x421 = INT64_MIN;
int16_t x427 = INT16_MAX;
int16_t x434 = INT16_MAX;
int32_t x441 = INT32_MIN;
int16_t x445 = INT16_MAX;
volatile int16_t x454 = -1;
uint16_t x464 = 22U;
volatile int32_t t118 = -3326324;
int64_t x478 = INT64_MIN;
volatile uint64_t t119 = 35532LLU;
int16_t x483 = -1;
int32_t t120 = 5578;
int64_t x488 = -1LL;
int64_t t121 = -35095910522555LL;
int8_t x498 = 1;
uint8_t x504 = 1U;
static uint8_t x507 = 21U;
int64_t x515 = INT64_MIN;
int64_t x518 = INT64_MIN;
uint64_t x521 = 117478635621LLU;
uint8_t x524 = 10U;
int32_t x532 = -252298802;
volatile int32_t x534 = 9990;
int32_t t133 = 28;
int32_t x542 = INT32_MIN;
static uint16_t x547 = 236U;
static int32_t t136 = 883595373;
volatile uint8_t x549 = UINT8_MAX;
static int8_t x550 = -1;
volatile uint16_t x562 = UINT16_MAX;
int16_t x569 = 6980;
uint16_t x571 = 3U;
int16_t x581 = -1;
volatile int32_t t145 = -67835;
volatile int32_t t146 = 878962;
static int32_t x589 = -1;
int32_t x607 = -1;
static volatile int64_t x610 = 986036LL;
static volatile int64_t x617 = 13LL;
static volatile uint8_t x621 = UINT8_MAX;
int8_t x622 = -1;
int64_t x626 = INT64_MIN;
volatile int32_t t156 = -6089;
int64_t x630 = 3LL;
static uint64_t x638 = UINT64_MAX;
static int16_t x644 = INT16_MIN;
static int32_t t160 = -10049427;
static uint64_t x646 = 2765950925133086LLU;
volatile uint64_t x647 = 4580790736680036869LLU;
static int16_t x650 = INT16_MIN;
int64_t x660 = -1887319862604860LL;
uint16_t x661 = 344U;
int32_t x662 = -1;
int32_t x663 = INT32_MAX;
volatile uint64_t t165 = 1821985608405LLU;
int64_t x682 = -1LL;
uint32_t x684 = UINT32_MAX;
static int16_t x689 = -3;
volatile int32_t x702 = -1;
int32_t x704 = INT32_MIN;
int8_t x709 = INT8_MAX;
volatile uint32_t x712 = UINT32_MAX;
volatile uint32_t t177 = UINT32_MAX;
static int32_t t178 = 1700;
volatile int64_t x717 = -1LL;
static int8_t x723 = -1;
int32_t t180 = -385;
int8_t x725 = 13;
volatile uint64_t x726 = UINT64_MAX;
int32_t x730 = INT32_MAX;
static volatile int64_t t182 = -262636LL;
int8_t x734 = INT8_MIN;
int8_t x736 = INT8_MAX;
static uint64_t x738 = UINT64_MAX;
int32_t x750 = INT32_MIN;
uint8_t x751 = 27U;
volatile uint64_t t187 = 30040931348288240LLU;
uint8_t x753 = 7U;
volatile uint8_t x754 = 1U;
static volatile int64_t x758 = INT64_MAX;
int32_t t189 = -949;
static uint16_t x762 = UINT16_MAX;
int64_t x763 = INT64_MIN;
static int32_t x773 = -11183;
int64_t x779 = -1LL;
uint32_t x781 = 53979069U;
int32_t x786 = INT32_MIN;
int64_t x787 = INT64_MAX;
int32_t x788 = -717;
volatile int64_t x790 = 16825977165668290LL;
volatile int32_t t199 = 462;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int16_t x2 = -1;
	static uint16_t x3 = 542U;
	int32_t x4 = 1;
	volatile int32_t t0 = -1;

    t0 = ((x1==(x2>x3))|x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x6 = 14U;
	uint16_t x7 = 3U;
	uint64_t x8 = 16922637118861LLU;
	uint64_t t1 = 974677385683808LLU;

    t1 = ((x5==(x6>x7))|x8);

    if (t1 != 16922637118861LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static int32_t x10 = 6;
	int32_t x11 = -1247230;
	volatile int64_t x12 = -1LL;
	static volatile int64_t t2 = -5949LL;

    t2 = ((x9==(x10>x11))|x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 118U;
	int8_t x14 = 57;
	int32_t x15 = INT32_MIN;
	static uint32_t x16 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

    t3 = ((x13==(x14>x15))|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -29573;
	uint16_t x18 = 6143U;
	int32_t x19 = 12;

    t4 = ((x17==(x18>x19))|x20);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x22 = -1LL;
	volatile int32_t x23 = -3099897;
	int64_t x24 = INT64_MIN;

    t5 = ((x21==(x22>x23))|x24);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x27 = 666;
	static volatile int32_t t6 = 24;

    t6 = ((x25==(x26>x27))|x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int32_t x31 = INT32_MAX;
	int64_t t7 = INT64_MAX;

    t7 = ((x29==(x30>x31))|x32);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	uint16_t x34 = 224U;
	uint16_t x35 = 16922U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 54885;

    t8 = ((x33==(x34>x35))|x36);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x38 = 5U;
	static int8_t x39 = -31;
	static volatile uint16_t x40 = 171U;
	volatile int32_t t9 = 1;

    t9 = ((x37==(x38>x39))|x40);

    if (t9 != 171) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x41 = 29U;
	uint64_t x42 = UINT64_MAX;
	static volatile int32_t x43 = INT32_MIN;
	int64_t x44 = 229023LL;

    t10 = ((x41==(x42>x43))|x44);

    if (t10 != 229023LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 30703445;
	uint16_t x46 = 60U;
	static volatile int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	volatile int64_t t11 = -2502LL;

    t11 = ((x45==(x46>x47))|x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 97442386546058LLU;
	uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 25555U;

    t12 = ((x49==(x50>x51))|x52);

    if (t12 != 23) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	int16_t x55 = -1;

    t13 = ((x53==(x54>x55))|x56);

    if (t13 != 1521844285LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -14;
	uint8_t x58 = 26U;
	int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 1;

    t14 = ((x57==(x58>x59))|x60);

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int16_t x62 = 1;
	int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 3;

    t15 = ((x61==(x62>x63))|x64);

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 1;
	int8_t x66 = -1;
	int8_t x67 = -1;
	int16_t x68 = -1;

    t16 = ((x65==(x66>x67))|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = 1;
	volatile uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = -1LL;
	volatile int64_t t17 = 3237LL;

    t17 = ((x69==(x70>x71))|x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = 14U;
	volatile int8_t x74 = -1;
	static uint8_t x76 = 14U;
	volatile int32_t t18 = -4;

    t18 = ((x73==(x74>x75))|x76);

    if (t18 != 14) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 47U;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MAX;
	static int64_t t19 = -777LL;

    t19 = ((x77==(x78>x79))|x80);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 16188U;
	int32_t x82 = -1888404;
	uint16_t x83 = 137U;
	static volatile uint8_t x84 = 2U;
	volatile int32_t t20 = 6;

    t20 = ((x81==(x82>x83))|x84);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	static volatile int16_t x87 = INT16_MIN;
	volatile int64_t x88 = -1LL;
	volatile int64_t t21 = 15226547LL;

    t21 = ((x85==(x86>x87))|x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = 153U;
	static uint16_t x92 = 48U;
	volatile int32_t t22 = -4990;

    t22 = ((x89==(x90>x91))|x92);

    if (t22 != 48) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -20;

    t23 = ((x93==(x94>x95))|x96);

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 95;
	static int32_t x98 = -1;
	int32_t x100 = INT32_MIN;
	static int32_t t24 = INT32_MIN;

    t24 = ((x97==(x98>x99))|x100);

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = -1;
	volatile int32_t t25 = -7;

    t25 = ((x101==(x102>x103))|x104);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	static int16_t x106 = INT16_MIN;
	uint64_t x107 = 15364723455413062LLU;
	uint64_t x108 = 677037LLU;

    t26 = ((x105==(x106>x107))|x108);

    if (t26 != 677037LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 1703158208161267471LLU;
	uint16_t x110 = UINT16_MAX;
	volatile uint64_t x111 = 136614915LLU;

    t27 = ((x109==(x110>x111))|x112);

    if (t27 != 30U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	volatile uint64_t x114 = UINT64_MAX;
	int8_t x115 = 3;
	int64_t x116 = INT64_MIN;
	int64_t t28 = INT64_MIN;

    t28 = ((x113==(x114>x115))|x116);

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x118 = -7;
	int64_t x120 = 46363543004LL;
	int64_t t29 = 16615544746363304LL;

    t29 = ((x117==(x118>x119))|x120);

    if (t29 != 46363543004LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x122 = 249341757880LLU;
	uint16_t x123 = 2U;
	static int16_t x124 = INT16_MAX;
	volatile int32_t t30 = 968;

    t30 = ((x121==(x122>x123))|x124);

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x126 = 1030U;
	int32_t x127 = INT32_MIN;
	uint32_t t31 = 19685U;

    t31 = ((x125==(x126>x127))|x128);

    if (t31 != 98316582U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = 1U;
	int16_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -1LL;

    t32 = ((x129==(x130>x131))|x132);

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -54;
	static int16_t x134 = -112;
	int8_t x135 = -1;
	static int64_t x136 = INT64_MIN;
	static int64_t t33 = INT64_MIN;

    t33 = ((x133==(x134>x135))|x136);

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x139 = INT8_MIN;
	int16_t x140 = -2227;
	int32_t t34 = -28977138;

    t34 = ((x137==(x138>x139))|x140);

    if (t34 != -2227) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x142 = 1U;
	int16_t x143 = -1;
	uint32_t x144 = 9809U;
	static volatile uint32_t t35 = 1U;

    t35 = ((x141==(x142>x143))|x144);

    if (t35 != 9809U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = 1;
	uint16_t x146 = 1U;
	static volatile uint64_t x147 = 801618LLU;
	static int16_t x148 = INT16_MAX;
	int32_t t36 = 2000720;

    t36 = ((x145==(x146>x147))|x148);

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	uint16_t x150 = 4U;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 50459214765786946LLU;

    t37 = ((x149==(x150>x151))|x152);

    if (t37 != 50459214765786946LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 15U;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = INT32_MAX;
	int32_t t38 = INT32_MAX;

    t38 = ((x153==(x154>x155))|x156);

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	static int32_t x158 = INT32_MIN;
	static int64_t x159 = INT64_MIN;
	uint8_t x160 = 81U;
	volatile int32_t t39 = -95193775;

    t39 = ((x157==(x158>x159))|x160);

    if (t39 != 81) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = 0;
	int32_t t40 = -17562070;

    t40 = ((x161==(x162>x163))|x164);

    if (t40 != 1771) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 46987;
	int32_t x167 = INT32_MIN;
	int8_t x168 = 1;
	static int32_t t41 = 826992;

    t41 = ((x165==(x166>x167))|x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = INT32_MIN;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 0U;
	volatile int32_t t42 = 28101157;

    t42 = ((x169==(x170>x171))|x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x176 = 291;
	static int32_t t43 = 7600512;

    t43 = ((x173==(x174>x175))|x176);

    if (t43 != 291) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	static volatile uint32_t t44 = UINT32_MAX;

    t44 = ((x177==(x178>x179))|x180);

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 986223U;
	volatile uint16_t x182 = 1290U;
	volatile int32_t t45 = 108210;

    t45 = ((x181==(x182>x183))|x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;

    t46 = ((x185==(x186>x187))|x188);

    if (t46 != 99728314103016LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 1136496224381488751LL;
	uint32_t x190 = 7728672U;
	uint16_t x192 = 3U;
	static int32_t t47 = 14686;

    t47 = ((x189==(x190>x191))|x192);

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -1;
	int16_t x194 = -1;
	volatile int8_t x195 = -1;
	int64_t x196 = -1LL;
	volatile int64_t t48 = -78LL;

    t48 = ((x193==(x194>x195))|x196);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	int8_t x199 = -1;
	uint64_t x200 = 2618130589212252LLU;

    t49 = ((x197==(x198>x199))|x200);

    if (t49 != 2618130589212252LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = 0;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = -13559532158435LL;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -25532;

    t50 = ((x201==(x202>x203))|x204);

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MIN;
	volatile int64_t x207 = -1LL;
	uint64_t x208 = 3764278329024535LLU;
	uint64_t t51 = 10797641682517842LLU;

    t51 = ((x205==(x206>x207))|x208);

    if (t51 != 3764278329024535LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -5;
	int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t52 = 8294845;

    t52 = ((x209==(x210>x211))|x212);

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = 4713;
	int32_t x215 = INT32_MIN;
	int32_t t53 = 3130267;

    t53 = ((x213==(x214>x215))|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x218 = UINT8_MAX;
	int64_t x219 = 14LL;
	uint64_t x220 = 30698498194LLU;

    t54 = ((x217==(x218>x219))|x220);

    if (t54 != 30698498194LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t55 = INT32_MAX;

    t55 = ((x221==(x222>x223))|x224);

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = UINT8_MAX;
	static int32_t x227 = INT32_MIN;
	static uint64_t x228 = 220LLU;
	uint64_t t56 = 925LLU;

    t56 = ((x225==(x226>x227))|x228);

    if (t56 != 220LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 5774942;

    t57 = ((x229==(x230>x231))|x232);

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = 23;
	volatile uint32_t x234 = 253U;
	uint64_t x236 = 38311924148LLU;
	uint64_t t58 = 122915437LLU;

    t58 = ((x233==(x234>x235))|x236);

    if (t58 != 38311924148LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 226U;
	volatile int16_t x238 = INT16_MIN;
	uint64_t x239 = 200925785LLU;
	int16_t x240 = INT16_MAX;
	static volatile int32_t t59 = 18378594;

    t59 = ((x237==(x238>x239))|x240);

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	uint16_t x242 = 5U;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = ((x241==(x242>x243))|x244);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x248 = 5681151707883964LL;
	int64_t t61 = -1414887971843LL;

    t61 = ((x245==(x246>x247))|x248);

    if (t61 != 5681151707883964LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x250 = 3594328794LLU;
	int8_t x251 = INT8_MIN;
	volatile int32_t t62 = -75;

    t62 = ((x249==(x250>x251))|x252);

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 25451U;
	uint8_t x254 = 0U;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t63 = INT32_MAX;

    t63 = ((x253==(x254>x255))|x256);

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	uint8_t x259 = UINT8_MAX;
	int32_t t64 = INT32_MAX;

    t64 = ((x257==(x258>x259))|x260);

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 0U;
	static uint16_t x262 = UINT16_MAX;
	int16_t x264 = INT16_MAX;

    t65 = ((x261==(x262>x263))|x264);

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = -1;
	int64_t x266 = 205596136663386463LL;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = -1;
	volatile int32_t t66 = -15688678;

    t66 = ((x265==(x266>x267))|x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = UINT8_MAX;
	static int16_t x270 = -113;
	int16_t x271 = 1245;
	uint32_t x272 = 408689051U;
	uint32_t t67 = 3210277U;

    t67 = ((x269==(x270>x271))|x272);

    if (t67 != 408689051U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 12752U;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = 6696799796732151LLU;
	static uint64_t t68 = 12068577807LLU;

    t68 = ((x273==(x274>x275))|x276);

    if (t68 != 6696799796732151LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x277 = 18U;
	int8_t x278 = INT8_MAX;
	volatile int32_t x279 = -1;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 0;

    t69 = ((x277==(x278>x279))|x280);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	static int16_t x283 = 6;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = ((x281==(x282>x283))|x284);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 46U;
	int16_t x286 = -554;
	int64_t x287 = INT64_MIN;
	static int8_t x288 = INT8_MAX;

    t71 = ((x285==(x286>x287))|x288);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x290 = -1LL;
	volatile uint16_t x291 = 854U;
	static int16_t x292 = -1;
	static int32_t t72 = 195387710;

    t72 = ((x289==(x290>x291))|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 45U;
	volatile int16_t x294 = INT16_MAX;
	uint8_t x295 = 0U;
	volatile int64_t x296 = -1LL;
	volatile int64_t t73 = -627372941728LL;

    t73 = ((x293==(x294>x295))|x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	int32_t x298 = 2927288;
	static int64_t x299 = 605046LL;
	int64_t x300 = 115LL;
	static volatile int64_t t74 = -11820147460848144LL;

    t74 = ((x297==(x298>x299))|x300);

    if (t74 != 115LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -9;
	static volatile uint16_t x302 = UINT16_MAX;
	uint32_t x303 = 748860425U;
	int32_t t75 = -17296;

    t75 = ((x301==(x302>x303))|x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = -1;
	int16_t x306 = -363;
	int8_t x307 = -4;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = INT32_MIN;

    t76 = ((x305==(x306>x307))|x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	uint16_t x311 = 252U;
	uint8_t x312 = 51U;
	int32_t t77 = 85197832;

    t77 = ((x309==(x310>x311))|x312);

    if (t77 != 51) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = 3;
	uint8_t x315 = 58U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -145725;

    t78 = ((x313==(x314>x315))|x316);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = 800U;
	int16_t x319 = -1;
	int64_t x320 = -6LL;
	volatile int64_t t79 = 152340052LL;

    t79 = ((x317==(x318>x319))|x320);

    if (t79 != -6LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 1U;
	uint32_t t80 = 17134U;

    t80 = ((x321==(x322>x323))|x324);

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 370837U;
	static int64_t x326 = 58500896280752LL;
	int32_t t81 = 492631082;

    t81 = ((x325==(x326>x327))|x328);

    if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	static int32_t x330 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t82 = 123631;

    t82 = ((x329==(x330>x331))|x332);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 915539646239LLU;
	uint16_t x334 = UINT16_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t83 = INT64_MIN;

    t83 = ((x333==(x334>x335))|x336);

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x338 = -28;
	volatile uint64_t x340 = 1087LLU;
	static uint64_t t84 = 417664959LLU;

    t84 = ((x337==(x338>x339))|x340);

    if (t84 != 1087LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 376714;
	uint32_t x342 = 3901U;
	int8_t x343 = 49;
	uint16_t x344 = 6286U;

    t85 = ((x341==(x342>x343))|x344);

    if (t85 != 6286) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 356418;
	int32_t x346 = 104101044;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 0LLU;
	uint64_t t86 = 22072LLU;

    t86 = ((x345==(x346>x347))|x348);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MAX;
	int64_t x350 = -2LL;
	volatile int8_t x351 = INT8_MIN;
	static volatile int32_t t87 = INT32_MIN;

    t87 = ((x349==(x350>x351))|x352);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	volatile int32_t x354 = INT32_MAX;
	static int32_t x355 = -6719;
	static volatile int32_t t88 = INT32_MIN;

    t88 = ((x353==(x354>x355))|x356);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x358 = 922033U;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 27U;
	static uint32_t t89 = 1784181299U;

    t89 = ((x357==(x358>x359))|x360);

    if (t89 != 27U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 2978LLU;
	int64_t x363 = INT64_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 798;

    t90 = ((x361==(x362>x363))|x364);

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x366 = INT64_MAX;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 437659943U;
	volatile uint32_t t91 = 690U;

    t91 = ((x365==(x366>x367))|x368);

    if (t91 != 437659943U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t92 = INT64_MIN;

    t92 = ((x369==(x370>x371))|x372);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 282549148723016258LLU;
	static volatile int16_t x374 = INT16_MAX;
	uint64_t x375 = 33123951040967LLU;
	volatile int8_t x376 = -19;
	volatile int32_t t93 = 247041058;

    t93 = ((x373==(x374>x375))|x376);

    if (t93 != -19) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x379 = INT8_MAX;
	int8_t x380 = -1;
	static volatile int32_t t94 = -3632;

    t94 = ((x377==(x378>x379))|x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	static uint16_t x384 = 409U;
	volatile int32_t t95 = -54640328;

    t95 = ((x381==(x382>x383))|x384);

    if (t95 != 409) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 29LL;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MAX;
	volatile int32_t t96 = 333816;

    t96 = ((x385==(x386>x387))|x388);

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MAX;
	static uint32_t x391 = 670U;
	uint16_t x392 = 38U;
	volatile int32_t t97 = -1546771;

    t97 = ((x389==(x390>x391))|x392);

    if (t97 != 38) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 11U;
	static volatile uint32_t t98 = 14466651U;

    t98 = ((x393==(x394>x395))|x396);

    if (t98 != 11U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	static uint8_t x398 = 29U;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -227;
	volatile int32_t t99 = -41;

    t99 = ((x397==(x398>x399))|x400);

    if (t99 != -227) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 0U;
	int8_t x402 = INT8_MIN;
	volatile int32_t x403 = 2047310;
	uint64_t x404 = 17303LLU;
	uint64_t t100 = 683158006855126604LLU;

    t100 = ((x401==(x402>x403))|x404);

    if (t100 != 17303LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x406 = INT32_MIN;
	int32_t x407 = -1;
	uint64_t t101 = 6865439LLU;

    t101 = ((x405==(x406>x407))|x408);

    if (t101 != 24907737076940LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = 104761088LLU;
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MAX;

    t102 = ((x409==(x410>x411))|x412);

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x415 = 1969U;
	int8_t x416 = INT8_MIN;

    t103 = ((x413==(x414>x415))|x416);

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	int32_t t104 = -40;

    t104 = ((x417==(x418>x419))|x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 44214388U;
	int16_t x423 = INT16_MIN;
	static uint8_t x424 = 108U;
	volatile int32_t t105 = 22;

    t105 = ((x421==(x422>x423))|x424);

    if (t105 != 108) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = -149;
	uint16_t x428 = 32716U;
	int32_t t106 = 9301705;

    t106 = ((x425==(x426>x427))|x428);

    if (t106 != 32716) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -60258;
	static volatile int16_t x430 = -50;
	int32_t x431 = INT32_MIN;
	int8_t x432 = -1;
	static volatile int32_t t107 = -66205;

    t107 = ((x429==(x430>x431))|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	static int32_t x435 = INT32_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t108 = -1070347795;

    t108 = ((x433==(x434>x435))|x436);

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile int16_t x438 = INT16_MIN;
	static uint16_t x439 = 472U;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t109 = 3202;

    t109 = ((x437==(x438>x439))|x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x442 = INT64_MIN;
	int8_t x443 = -1;
	volatile int16_t x444 = -10;
	int32_t t110 = -875334;

    t110 = ((x441==(x442>x443))|x444);

    if (t110 != -10) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x446 = UINT16_MAX;
	static int64_t x447 = -5075174565LL;
	uint8_t x448 = 7U;
	int32_t t111 = -1;

    t111 = ((x445==(x446>x447))|x448);

    if (t111 != 7) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x449 = -1;
	int64_t x450 = -1LL;
	int32_t x451 = 13;
	static volatile int8_t x452 = -1;
	int32_t t112 = 7923497;

    t112 = ((x449==(x450>x451))|x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 17295U;
	uint8_t x455 = 0U;
	volatile uint64_t x456 = 14159466LLU;
	volatile uint64_t t113 = 680LLU;

    t113 = ((x453==(x454>x455))|x456);

    if (t113 != 14159466LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -1;
	int16_t x458 = INT16_MAX;
	static int8_t x459 = INT8_MIN;
	volatile int16_t x460 = 552;
	volatile int32_t t114 = 506624;

    t114 = ((x457==(x458>x459))|x460);

    if (t114 != 552) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = 2510LL;
	static uint32_t x463 = 35288U;
	int32_t t115 = 11;

    t115 = ((x461==(x462>x463))|x464);

    if (t115 != 22) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	uint8_t x466 = 17U;
	uint32_t x467 = 82626U;
	volatile int32_t x468 = INT32_MAX;
	int32_t t116 = INT32_MAX;

    t116 = ((x465==(x466>x467))|x468);

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = INT64_MIN;
	int64_t x470 = -1LL;
	static int64_t x471 = -1LL;
	int16_t x472 = INT16_MIN;
	int32_t t117 = -21490079;

    t117 = ((x469==(x470>x471))|x472);

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	int8_t x474 = INT8_MIN;
	volatile int64_t x475 = -11220393659135980LL;
	int8_t x476 = -1;

    t118 = ((x473==(x474>x475))|x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = 179816269696LL;
	volatile int32_t x479 = -1;
	volatile uint64_t x480 = 32266900740850LLU;

    t119 = ((x477==(x478>x479))|x480);

    if (t119 != 32266900740850LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = -1;
	int32_t x482 = -868;
	static int16_t x484 = INT16_MIN;

    t120 = ((x481==(x482>x483))|x484);

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x485 = -14650121LL;
	static int8_t x486 = INT8_MAX;
	int8_t x487 = INT8_MAX;

    t121 = ((x485==(x486>x487))|x488);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	int64_t x490 = INT64_MIN;
	uint16_t x491 = UINT16_MAX;
	static int32_t x492 = 54504377;
	int32_t t122 = 122751;

    t122 = ((x489==(x490>x491))|x492);

    if (t122 != 54504377) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	uint32_t x494 = 182517U;
	uint64_t x495 = 487799917627807LLU;
	int16_t x496 = INT16_MIN;
	volatile int32_t t123 = 1080954;

    t123 = ((x493==(x494>x495))|x496);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -4;
	static uint64_t x499 = 155782429LLU;
	uint16_t x500 = 2U;
	static volatile int32_t t124 = 78;

    t124 = ((x497==(x498>x499))|x500);

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	int32_t x502 = INT32_MIN;
	uint8_t x503 = UINT8_MAX;
	volatile int32_t t125 = -17779;

    t125 = ((x501==(x502>x503))|x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = UINT16_MAX;
	volatile int32_t x506 = 1;
	static uint16_t x508 = UINT16_MAX;
	volatile int32_t t126 = -80;

    t126 = ((x505==(x506>x507))|x508);

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	static uint16_t x510 = 25U;
	int64_t x511 = -1453638455194507465LL;
	uint64_t x512 = UINT64_MAX;
	static uint64_t t127 = UINT64_MAX;

    t127 = ((x509==(x510>x511))|x512);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x513 = 151167LLU;
	int16_t x514 = -1;
	uint16_t x516 = 10U;
	static int32_t t128 = -977;

    t128 = ((x513==(x514>x515))|x516);

    if (t128 != 10) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = INT64_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	static uint64_t x520 = 780367030444101016LLU;
	uint64_t t129 = 17966669601763509LLU;

    t129 = ((x517==(x518>x519))|x520);

    if (t129 != 780367030444101016LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = -1;
	int8_t x523 = INT8_MAX;
	int32_t t130 = 520305;

    t130 = ((x521==(x522>x523))|x524);

    if (t130 != 10) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	int64_t x526 = INT64_MIN;
	int8_t x527 = INT8_MAX;
	int8_t x528 = -1;
	int32_t t131 = -362442665;

    t131 = ((x525==(x526>x527))|x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	volatile int16_t x530 = 349;
	int32_t x531 = INT32_MIN;
	int32_t t132 = -124;

    t132 = ((x529==(x530>x531))|x532);

    if (t132 != -252298802) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 833748850891143LLU;
	int16_t x535 = INT16_MAX;
	uint16_t x536 = 26163U;

    t133 = ((x533==(x534>x535))|x536);

    if (t133 != 26163) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -28777;
	int32_t x538 = INT32_MIN;
	volatile uint32_t x539 = UINT32_MAX;
	volatile int8_t x540 = 9;
	volatile int32_t t134 = -14;

    t134 = ((x537==(x538>x539))|x540);

    if (t134 != 9) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 21552301355LL;
	int32_t x543 = 452958;
	int16_t x544 = INT16_MAX;
	volatile int32_t t135 = 157569;

    t135 = ((x541==(x542>x543))|x544);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -11042LL;
	uint32_t x546 = UINT32_MAX;
	volatile uint16_t x548 = 206U;

    t136 = ((x545==(x546>x547))|x548);

    if (t136 != 206) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x551 = INT8_MAX;
	uint64_t x552 = 558197894849856298LLU;
	volatile uint64_t t137 = 164138LLU;

    t137 = ((x549==(x550>x551))|x552);

    if (t137 != 558197894849856298LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	int16_t x554 = INT16_MAX;
	static int64_t x555 = -15LL;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 0;

    t138 = ((x553==(x554>x555))|x556);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	static int16_t x558 = 1;
	uint16_t x559 = 6U;
	static int64_t x560 = INT64_MIN;
	int64_t t139 = INT64_MIN;

    t139 = ((x557==(x558>x559))|x560);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x561 = 26919U;
	static uint16_t x563 = UINT16_MAX;
	volatile int32_t x564 = 56;
	volatile int32_t t140 = -209189120;

    t140 = ((x561==(x562>x563))|x564);

    if (t140 != 56) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -29;
	uint16_t x566 = UINT16_MAX;
	int8_t x567 = -14;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t141 = -8953;

    t141 = ((x565==(x566>x567))|x568);

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x570 = INT32_MIN;
	int64_t x572 = 12757163051193LL;
	volatile int64_t t142 = 1681730835342LL;

    t142 = ((x569==(x570>x571))|x572);

    if (t142 != 12757163051193LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 175420699025571LLU;
	uint64_t t143 = 593LLU;

    t143 = ((x573==(x574>x575))|x576);

    if (t143 != 175420699025571LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x577 = 22U;
	uint64_t x578 = UINT64_MAX;
	int32_t x579 = -1;
	int8_t x580 = INT8_MAX;
	int32_t t144 = 1;

    t144 = ((x577==(x578>x579))|x580);

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x582 = INT8_MIN;
	uint32_t x583 = 19866U;
	uint16_t x584 = 750U;

    t145 = ((x581==(x582>x583))|x584);

    if (t145 != 750) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = UINT16_MAX;
	uint64_t x586 = 5597796LLU;
	volatile int8_t x587 = INT8_MAX;
	int32_t x588 = -951938789;

    t146 = ((x585==(x586>x587))|x588);

    if (t146 != -951938789) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x590 = -1;
	uint8_t x591 = 15U;
	volatile int32_t x592 = 4580;
	volatile int32_t t147 = 775113066;

    t147 = ((x589==(x590>x591))|x592);

    if (t147 != 4580) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = INT32_MAX;
	int8_t x594 = -6;
	volatile int64_t x595 = INT64_MIN;
	int64_t x596 = -1LL;
	static int64_t t148 = -1630703250052173LL;

    t148 = ((x593==(x594>x595))|x596);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = INT8_MIN;
	static uint8_t x598 = UINT8_MAX;
	int16_t x599 = -1;
	volatile int64_t x600 = INT64_MAX;
	int64_t t149 = INT64_MAX;

    t149 = ((x597==(x598>x599))|x600);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	static uint8_t x602 = 8U;
	int32_t x603 = 1380848;
	uint8_t x604 = 0U;
	volatile int32_t t150 = -35019;

    t150 = ((x601==(x602>x603))|x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	uint16_t x606 = 3409U;
	static int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 717487242;

    t151 = ((x605==(x606>x607))|x608);

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MAX;
	int16_t x611 = INT16_MIN;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t152 = -7;

    t152 = ((x609==(x610>x611))|x612);

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	volatile int8_t x614 = INT8_MAX;
	uint16_t x615 = UINT16_MAX;
	static int8_t x616 = 10;
	int32_t t153 = -4947040;

    t153 = ((x613==(x614>x615))|x616);

    if (t153 != 10) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = UINT64_MAX;
	volatile uint16_t x619 = 1292U;
	volatile int16_t x620 = INT16_MAX;
	int32_t t154 = -232689312;

    t154 = ((x617==(x618>x619))|x620);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x623 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;
	int32_t t155 = 23637113;

    t155 = ((x621==(x622>x623))|x624);

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x625 = 2601584936272803089LLU;
	volatile int32_t x627 = -1;
	int8_t x628 = INT8_MAX;

    t156 = ((x625==(x626>x627))|x628);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	static int16_t x631 = INT16_MIN;
	uint64_t x632 = 3556284LLU;
	uint64_t t157 = 861593634446891630LLU;

    t157 = ((x629==(x630>x631))|x632);

    if (t157 != 3556284LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = 762928496443LL;
	static uint64_t x634 = 10268299150020LLU;
	int8_t x635 = -20;
	uint32_t x636 = 5880U;
	uint32_t t158 = 184U;

    t158 = ((x633==(x634>x635))|x636);

    if (t158 != 5880U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -14;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = 471190U;
	uint32_t t159 = 6U;

    t159 = ((x637==(x638>x639))|x640);

    if (t159 != 471190U) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x641 = -6945;
	uint16_t x642 = 523U;
	uint8_t x643 = UINT8_MAX;

    t160 = ((x641==(x642>x643))|x644);

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = INT64_MIN;
	int32_t x648 = INT32_MIN;
	int32_t t161 = INT32_MIN;

    t161 = ((x645==(x646>x647))|x648);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	static volatile int8_t x651 = INT8_MIN;
	int8_t x652 = INT8_MAX;
	static int32_t t162 = 1;

    t162 = ((x649==(x650>x651))|x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = -1LL;
	static uint32_t x654 = UINT32_MAX;
	int32_t x655 = 6;
	int8_t x656 = -1;
	int32_t t163 = -408;

    t163 = ((x653==(x654>x655))|x656);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 7173U;
	static int64_t x658 = 2227373171655944245LL;
	int16_t x659 = INT16_MAX;
	int64_t t164 = -1314662202325778LL;

    t164 = ((x657==(x658>x659))|x660);

    if (t164 != -1887319862604860LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x664 = 1448302258568LLU;

    t165 = ((x661==(x662>x663))|x664);

    if (t165 != 1448302258568LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	uint64_t x666 = UINT64_MAX;
	int16_t x667 = INT16_MIN;
	int32_t x668 = -1;
	int32_t t166 = -25621981;

    t166 = ((x665==(x666>x667))|x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	int32_t x670 = INT32_MIN;
	uint64_t x671 = 2LLU;
	volatile int64_t x672 = INT64_MIN;
	volatile int64_t t167 = INT64_MIN;

    t167 = ((x669==(x670>x671))|x672);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -56;
	int32_t x674 = INT32_MIN;
	uint32_t x675 = 451615679U;
	int32_t x676 = -11237001;
	int32_t t168 = 1964;

    t168 = ((x673==(x674>x675))|x676);

    if (t168 != -11237001) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	int8_t x678 = INT8_MAX;
	uint64_t x679 = 2880418246846LLU;
	static uint64_t x680 = UINT64_MAX;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = ((x677==(x678>x679))|x680);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	uint64_t x683 = 326256796LLU;
	static volatile uint32_t t170 = UINT32_MAX;

    t170 = ((x681==(x682>x683))|x684);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 49U;
	volatile uint32_t x686 = 27205313U;
	int32_t x687 = INT32_MAX;
	static uint32_t x688 = 570774499U;
	static uint32_t t171 = 2U;

    t171 = ((x685==(x686>x687))|x688);

    if (t171 != 570774499U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 0U;
	volatile uint64_t x691 = UINT64_MAX;
	uint64_t x692 = 1LLU;
	uint64_t t172 = 484744274611239LLU;

    t172 = ((x689==(x690>x691))|x692);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 325420U;
	int64_t x694 = INT64_MAX;
	uint64_t x695 = 6533LLU;
	uint32_t x696 = UINT32_MAX;
	uint32_t t173 = UINT32_MAX;

    t173 = ((x693==(x694>x695))|x696);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int64_t x698 = INT64_MIN;
	volatile int16_t x699 = INT16_MAX;
	uint8_t x700 = UINT8_MAX;
	static volatile int32_t t174 = -815401;

    t174 = ((x697==(x698>x699))|x700);

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = 1741108LL;
	int8_t x703 = -1;
	volatile int32_t t175 = INT32_MIN;

    t175 = ((x701==(x702>x703))|x704);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -1;
	volatile int32_t x706 = -65;
	uint32_t x707 = 38249U;
	static uint16_t x708 = 11U;
	int32_t t176 = -2248848;

    t176 = ((x705==(x706>x707))|x708);

    if (t176 != 11) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = -15;
	int32_t x711 = -1;

    t177 = ((x709==(x710>x711))|x712);

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = 36LL;
	static uint16_t x714 = UINT16_MAX;
	volatile uint16_t x715 = 26U;
	int16_t x716 = -4;

    t178 = ((x713==(x714>x715))|x716);

    if (t178 != -4) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;
	uint32_t x720 = 843796105U;
	uint32_t t179 = 31900848U;

    t179 = ((x717==(x718>x719))|x720);

    if (t179 != 843796105U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 12589U;
	static uint32_t x722 = 51008U;
	static int16_t x724 = INT16_MIN;

    t180 = ((x721==(x722>x723))|x724);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x727 = 5;
	int8_t x728 = 6;
	volatile int32_t t181 = 3619;

    t181 = ((x725==(x726>x727))|x728);

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	static volatile int64_t x732 = -1LL;

    t182 = ((x729==(x730>x731))|x732);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint8_t x735 = 2U;
	int32_t t183 = 0;

    t183 = ((x733==(x734>x735))|x736);

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	static int64_t x739 = 22460288745804LL;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = 132924431;

    t184 = ((x737==(x738>x739))|x740);

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	static volatile int32_t x742 = INT32_MAX;
	volatile uint8_t x743 = UINT8_MAX;
	static uint16_t x744 = 295U;
	volatile int32_t t185 = -1873096;

    t185 = ((x741==(x742>x743))|x744);

    if (t185 != 295) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = 0U;
	int16_t x746 = INT16_MIN;
	uint8_t x747 = UINT8_MAX;
	uint32_t x748 = UINT32_MAX;
	static uint32_t t186 = UINT32_MAX;

    t186 = ((x745==(x746>x747))|x748);

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = -38;
	static uint64_t x752 = 1312231483707LLU;

    t187 = ((x749==(x750>x751))|x752);

    if (t187 != 1312231483707LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x755 = 11624U;
	static int64_t x756 = INT64_MIN;
	int64_t t188 = INT64_MIN;

    t188 = ((x753==(x754>x755))|x756);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = -1LL;
	volatile int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MAX;

    t189 = ((x757==(x758>x759))|x760);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -1LL;
	static int8_t x764 = 1;
	volatile int32_t t190 = 3740;

    t190 = ((x761==(x762>x763))|x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	int8_t x766 = -1;
	int64_t x767 = -1LL;
	int8_t x768 = INT8_MAX;
	int32_t t191 = 152;

    t191 = ((x765==(x766>x767))|x768);

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MIN;
	int64_t x772 = INT64_MAX;
	static volatile int64_t t192 = INT64_MAX;

    t192 = ((x769==(x770>x771))|x772);

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x774 = -64;
	static uint32_t x775 = UINT32_MAX;
	uint64_t x776 = UINT64_MAX;
	uint64_t t193 = UINT64_MAX;

    t193 = ((x773==(x774>x775))|x776);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -10812;
	uint16_t x778 = 1459U;
	int64_t x780 = 131011431741012LL;
	static volatile int64_t t194 = -1LL;

    t194 = ((x777==(x778>x779))|x780);

    if (t194 != 131011431741012LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x782 = -443047148;
	uint32_t x783 = UINT32_MAX;
	int32_t x784 = -87963583;
	volatile int32_t t195 = 59;

    t195 = ((x781==(x782>x783))|x784);

    if (t195 != -87963583) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x785 = 1U;
	int32_t t196 = -53194628;

    t196 = ((x785==(x786>x787))|x788);

    if (t196 != -717) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = -7825539948LL;
	int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MIN;
	int32_t t197 = -1;

    t197 = ((x789==(x790>x791))|x792);

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 1U;
	volatile uint16_t x794 = 395U;
	int16_t x795 = INT16_MIN;
	static int8_t x796 = -1;
	volatile int32_t t198 = -543;

    t198 = ((x793==(x794>x795))|x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	static int8_t x798 = -1;
	int8_t x799 = INT8_MAX;
	int16_t x800 = INT16_MIN;

    t199 = ((x797==(x798>x799))|x800);

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

