
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

static uint32_t x6 = UINT32_MAX;
int32_t t1 = 797;
int16_t x12 = INT16_MIN;
int64_t t3 = -30708474529025LL;
int8_t x21 = INT8_MIN;
volatile int8_t x30 = INT8_MAX;
int64_t x31 = -13935105LL;
volatile uint32_t x41 = UINT32_MAX;
uint16_t x42 = 19165U;
int32_t x49 = 45445;
static int8_t x51 = 18;
volatile int32_t x55 = -2864815;
static volatile uint32_t x56 = 690U;
uint32_t t11 = 14U;
uint64_t x59 = 980023435473262977LLU;
int32_t t12 = 870;
static uint16_t x61 = 81U;
int64_t x68 = INT64_MIN;
int64_t x71 = 1LL;
int32_t x72 = -18948;
int32_t t15 = -881808886;
static uint64_t x74 = 986178264088238LLU;
volatile uint16_t x77 = 7U;
uint16_t x91 = 50U;
volatile int32_t t22 = -441072008;
int8_t x108 = INT8_MIN;
uint64_t x114 = 6620245LLU;
int16_t x117 = INT16_MIN;
volatile uint64_t x119 = 226856251814035LLU;
int32_t x127 = INT32_MIN;
static volatile uint64_t t29 = 32565LLU;
int32_t x131 = 117598;
uint64_t x140 = 3895237535LLU;
volatile int32_t x143 = INT32_MIN;
volatile int64_t t33 = -1LL;
int64_t x148 = 34414403224434LL;
static int8_t x151 = -1;
volatile int16_t x154 = INT16_MIN;
uint64_t x161 = 446LLU;
int32_t x166 = INT32_MIN;
int16_t x169 = -10023;
int8_t x171 = -1;
volatile int64_t x176 = -1LL;
int64_t x180 = INT64_MIN;
int16_t x183 = INT16_MAX;
static int8_t x189 = 4;
static int32_t t45 = -667813333;
int64_t x194 = INT64_MAX;
int32_t t47 = -536487487;
int32_t x204 = INT32_MIN;
volatile int32_t x205 = -86243;
uint32_t x209 = UINT32_MAX;
volatile uint32_t x212 = UINT32_MAX;
int32_t t51 = -1341697;
int16_t x217 = INT16_MIN;
uint32_t x218 = 640U;
volatile int8_t x224 = -1;
uint16_t x233 = 1399U;
int32_t x234 = INT32_MAX;
static int64_t t56 = -10LL;
int64_t x238 = -1LL;
int8_t x246 = INT8_MIN;
uint32_t x248 = UINT32_MAX;
static volatile uint32_t t59 = 7751U;
int32_t x265 = INT32_MIN;
static uint16_t x268 = UINT16_MAX;
volatile int64_t t65 = -58076552346LL;
int64_t x274 = -440LL;
static volatile int32_t x277 = INT32_MIN;
uint16_t x285 = 87U;
int32_t t69 = 55;
int32_t t70 = -3928;
int32_t x293 = INT32_MAX;
int64_t x295 = INT64_MIN;
uint32_t x297 = 3U;
uint32_t x299 = UINT32_MAX;
volatile int32_t t72 = -216282;
int64_t x304 = INT64_MIN;
int64_t t73 = 390LL;
int32_t x318 = 11890;
uint32_t x320 = UINT32_MAX;
int16_t x324 = 2;
int64_t x325 = INT64_MIN;
uint16_t x332 = 7U;
uint32_t x348 = UINT32_MAX;
int64_t t83 = -193LL;
volatile int8_t x361 = -1;
static volatile int32_t t86 = -59;
int16_t x380 = -938;
static volatile int32_t x387 = INT32_MAX;
uint16_t x388 = UINT16_MAX;
volatile int32_t t92 = 10667;
int32_t t95 = 904662180;
int8_t x404 = INT8_MAX;
int8_t x405 = 4;
volatile uint32_t t97 = 329001959U;
int32_t x413 = -1;
static volatile int16_t x418 = -1;
int8_t x420 = 1;
volatile int32_t t100 = 3858;
uint8_t x421 = 2U;
volatile uint64_t t101 = 35642932827LLU;
int32_t x428 = INT32_MIN;
static int32_t x432 = INT32_MAX;
static volatile int32_t t103 = -141075;
int32_t x436 = 26674;
int32_t t104 = 47460;
int32_t x440 = -37;
int64_t x451 = -2101510772583LL;
static volatile int32_t t108 = 3906925;
int8_t x456 = INT8_MAX;
static volatile int32_t t109 = 2416;
int8_t x459 = 1;
static volatile uint32_t x462 = 28U;
int32_t x472 = INT32_MIN;
uint64_t x476 = UINT64_MAX;
volatile uint64_t t115 = 2719310521LLU;
static int32_t t116 = -3804163;
uint64_t x487 = UINT64_MAX;
static volatile int64_t x488 = INT64_MIN;
uint32_t x490 = UINT32_MAX;
int8_t x494 = INT8_MIN;
int8_t x496 = INT8_MAX;
int32_t x505 = 28571;
int8_t x506 = INT8_MIN;
int16_t x514 = -1;
static uint8_t x520 = UINT8_MAX;
volatile int64_t x521 = INT64_MIN;
int16_t x524 = -32;
volatile int32_t t126 = 19604075;
uint64_t x529 = 88342755814491LLU;
volatile uint32_t x530 = 28U;
volatile uint8_t x541 = UINT8_MAX;
uint64_t x543 = UINT64_MAX;
static volatile int64_t x546 = INT64_MIN;
volatile uint32_t t132 = 2060524U;
volatile int32_t x550 = -7038;
int64_t x554 = -16963715557544LL;
uint32_t x558 = 1U;
volatile uint32_t x562 = 26U;
volatile int32_t t137 = -118134;
int8_t x588 = INT8_MAX;
int16_t x592 = INT16_MAX;
volatile int16_t x594 = INT16_MIN;
uint16_t x595 = 20U;
int32_t x600 = INT32_MAX;
int32_t t147 = -4624;
static volatile int32_t t148 = 6;
static uint32_t x618 = 6614U;
volatile int32_t t149 = -56867;
volatile int64_t t153 = -803681083250703057LL;
uint8_t x641 = 11U;
volatile uint64_t x642 = UINT64_MAX;
uint64_t x643 = 5040641393LLU;
int64_t x648 = INT64_MIN;
static int32_t x651 = -1;
static volatile int32_t t157 = 14441;
uint8_t x654 = 9U;
int32_t x658 = INT32_MIN;
volatile int32_t t159 = -2006;
int8_t x662 = INT8_MAX;
volatile int32_t t161 = -91806;
static int64_t x672 = INT64_MAX;
volatile int32_t x673 = INT32_MIN;
static volatile int32_t t164 = 242430;
volatile uint32_t t165 = 14779U;
uint8_t x693 = 0U;
uint8_t x694 = 0U;
int32_t x696 = INT32_MIN;
static uint8_t x699 = UINT8_MAX;
static int8_t x709 = INT8_MIN;
int16_t x724 = -131;
static int64_t x725 = INT64_MIN;
uint16_t x731 = 17289U;
static volatile int64_t t177 = -2033171306409LL;
uint16_t x739 = UINT16_MAX;
int16_t x741 = INT16_MAX;
volatile int64_t x744 = -1LL;
volatile int64_t x745 = -303713686798780LL;
static volatile int32_t t180 = 0;
volatile int8_t x749 = -1;
uint32_t x751 = UINT32_MAX;
uint8_t x753 = UINT8_MAX;
int32_t x760 = 237;
int64_t x764 = INT64_MIN;
int32_t t185 = 0;
int32_t t186 = -1;
static volatile uint16_t x773 = 27159U;
int16_t x778 = 28;
int64_t x779 = INT64_MIN;
int32_t x780 = -1;
int32_t t188 = -52453981;
int32_t t189 = 1672;
uint64_t x787 = UINT64_MAX;
volatile uint32_t t190 = 11094907U;
static int8_t x794 = -6;
uint64_t x797 = UINT64_MAX;
int32_t x806 = 47113;
int64_t x807 = -148440301268049LL;
uint64_t x812 = 282096261LLU;
uint8_t x814 = 27U;
int16_t x816 = -4;
static int8_t x817 = -1;
volatile uint64_t x819 = 459580616LLU;
int8_t x820 = INT8_MIN;
int32_t t199 = -44066;


void f0(void) {
    	static volatile int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	static int8_t x3 = INT8_MAX;
	int32_t x4 = -629;
	volatile int32_t t0 = -974409460;

    t0 = ((x1==(x2^x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;

    t1 = ((x5==(x6^x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 288586826;
	static int8_t x10 = -1;
	int64_t x11 = -1LL;
	int32_t t2 = 0;

    t2 = ((x9==(x10^x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 60;
	int32_t x14 = -2657;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;

    t3 = ((x13==(x14^x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -44603908LL;
	int32_t x18 = -11780671;
	int32_t x19 = -2926996;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = 9429823;

    t4 = ((x17==(x18^x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = 14;
	static int32_t t5 = 105840848;

    t5 = ((x21==(x22^x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	static int32_t x32 = INT32_MIN;
	int32_t t6 = 14145;

    t6 = ((x29==(x30^x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = 3;
	static uint32_t x35 = 655843961U;
	int8_t x36 = 5;
	int32_t t7 = 440576;

    t7 = ((x33==(x34^x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -389;
	uint64_t x38 = UINT64_MAX;
	volatile int64_t x39 = INT64_MIN;
	int16_t x40 = -1;
	int32_t t8 = 9175;

    t8 = ((x37==(x38^x39))/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x43 = -1LL;
	static uint8_t x44 = 103U;
	static volatile int32_t t9 = -29;

    t9 = ((x41==(x42^x43))/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x50 = INT16_MIN;
	uint16_t x52 = 618U;
	static int32_t t10 = 3044;

    t10 = ((x49==(x50^x51))/x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = INT8_MIN;

    t11 = ((x53==(x54^x55))/x56);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 15LLU;
	int64_t x58 = 841534152889494LL;
	static int16_t x60 = INT16_MAX;

    t12 = ((x57==(x58^x59))/x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x62 = 34LLU;
	int32_t x63 = -1;
	uint64_t x64 = 61LLU;
	static volatile uint64_t t13 = 226901848LLU;

    t13 = ((x61==(x62^x63))/x64);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x65 = INT32_MAX;
	static uint32_t x66 = 2025816U;
	int64_t x67 = -15LL;
	volatile int64_t t14 = -7894827LL;

    t14 = ((x65==(x66^x67))/x68);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MAX;
	int32_t x70 = INT32_MIN;

    t15 = ((x69==(x70^x71))/x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x73 = 1U;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = -1;
	volatile int32_t t16 = -51055;

    t16 = ((x73==(x74^x75))/x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x78 = 3432U;
	int32_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile int32_t t17 = -291;

    t17 = ((x77==(x78^x79))/x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MIN;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = 1589U;
	static volatile int64_t x84 = INT64_MIN;
	int64_t t18 = 170LL;

    t18 = ((x81==(x82^x83))/x84);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 53096533820LL;
	uint64_t x86 = 1225776353LLU;
	static volatile uint8_t x87 = 91U;
	uint8_t x88 = 10U;
	int32_t t19 = 464213;

    t19 = ((x85==(x86^x87))/x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = INT32_MAX;
	static int64_t x90 = INT64_MIN;
	volatile int8_t x92 = 15;
	volatile int32_t t20 = 3281491;

    t20 = ((x89==(x90^x91))/x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x93 = INT16_MIN;
	volatile int64_t x94 = 1152LL;
	uint16_t x95 = 11042U;
	uint16_t x96 = 133U;
	int32_t t21 = -653;

    t21 = ((x93==(x94^x95))/x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x98 = 16876LL;
	int64_t x99 = INT64_MIN;
	int8_t x100 = -43;

    t22 = ((x97==(x98^x99))/x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x101 = 30;
	uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 118400LLU;
	static int64_t x104 = INT64_MIN;
	int64_t t23 = 2567058458LL;

    t23 = ((x101==(x102^x103))/x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 8256257LLU;
	volatile int16_t x107 = INT16_MAX;
	int32_t t24 = -514448984;

    t24 = ((x105==(x106^x107))/x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x109 = 7504U;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;
	static uint32_t x112 = 317804357U;
	uint32_t t25 = 2950612U;

    t25 = ((x109==(x110^x111))/x112);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x113 = UINT16_MAX;
	int8_t x115 = 0;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t26 = -511LL;

    t26 = ((x113==(x114^x115))/x116);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x118 = 107U;
	int16_t x120 = INT16_MIN;
	int32_t t27 = 2;

    t27 = ((x117==(x118^x119))/x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -32;
	int16_t x122 = 436;
	static int16_t x123 = 2457;
	static int64_t x124 = -1LL;
	volatile int64_t t28 = -8181572LL;

    t28 = ((x121==(x122^x123))/x124);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x125 = 3114;
	static volatile int8_t x126 = INT8_MAX;
	uint64_t x128 = 75177384517LLU;

    t29 = ((x125==(x126^x127))/x128);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t30 = -464050533;

    t30 = ((x129==(x130^x131))/x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -1LL;
	static int32_t x134 = 109553082;
	static uint16_t x135 = UINT16_MAX;
	int8_t x136 = -55;
	int32_t t31 = 1;

    t31 = ((x133==(x134^x135))/x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x137 = 83U;
	int8_t x138 = INT8_MAX;
	int64_t x139 = INT64_MIN;
	uint64_t t32 = 184712LLU;

    t32 = ((x137==(x138^x139))/x140);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -7;
	int32_t x142 = 1269870;
	int64_t x144 = -1LL;

    t33 = ((x141==(x142^x143))/x144);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x145 = 871911U;
	static uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 1U;
	static int64_t t34 = -645249934LL;

    t34 = ((x145==(x146^x147))/x148);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = 5757U;
	uint16_t x150 = 5U;
	static int16_t x152 = INT16_MIN;
	static int32_t t35 = 312;

    t35 = ((x149==(x150^x151))/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x153 = UINT32_MAX;
	int32_t x155 = 10358386;
	int64_t x156 = -487187805896865LL;
	int64_t t36 = -6830692981LL;

    t36 = ((x153==(x154^x155))/x156);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = 0;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	int32_t t37 = 14;

    t37 = ((x157==(x158^x159))/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x162 = 10U;
	uint64_t x163 = 9LLU;
	uint32_t x164 = 2908U;
	volatile uint32_t t38 = 770865U;

    t38 = ((x161==(x162^x163))/x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x167 = 6278503695159292LLU;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t39 = 19;

    t39 = ((x165==(x166^x167))/x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x170 = 0U;
	int16_t x172 = INT16_MIN;
	int32_t t40 = 25775;

    t40 = ((x169==(x170^x171))/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = -1;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -54;
	int64_t t41 = 5160772LL;

    t41 = ((x173==(x174^x175))/x176);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = 1;
	volatile int64_t x179 = 539730490801226LL;
	volatile int64_t t42 = -13LL;

    t42 = ((x177==(x178^x179))/x180);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = 822733U;
	int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	static int64_t t43 = -1640155182711LL;

    t43 = ((x181==(x182^x183))/x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x185 = -1;
	uint16_t x186 = 43U;
	uint8_t x187 = 101U;
	static int16_t x188 = 679;
	int32_t t44 = -727;

    t44 = ((x185==(x186^x187))/x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x190 = 0;
	volatile int8_t x191 = -40;
	int8_t x192 = INT8_MAX;

    t45 = ((x189==(x190^x191))/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = INT16_MIN;
	int32_t x195 = -1;
	uint32_t x196 = UINT32_MAX;
	static volatile uint32_t t46 = 1402460312U;

    t46 = ((x193==(x194^x195))/x196);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 19;
	int32_t x198 = INT32_MIN;
	int8_t x199 = -3;
	volatile uint16_t x200 = 66U;

    t47 = ((x197==(x198^x199))/x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	static volatile uint16_t x203 = 243U;
	volatile int32_t t48 = 23522;

    t48 = ((x201==(x202^x203))/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = INT64_MIN;
	int16_t x207 = 31;
	int32_t x208 = INT32_MAX;
	int32_t t49 = -1729423;

    t49 = ((x205==(x206^x207))/x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x210 = UINT16_MAX;
	volatile uint64_t x211 = 1664LLU;
	volatile uint32_t t50 = 127U;

    t50 = ((x209==(x210^x211))/x212);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MAX;
	volatile uint64_t x214 = 202LLU;
	volatile uint64_t x215 = UINT64_MAX;
	volatile uint8_t x216 = UINT8_MAX;

    t51 = ((x213==(x214^x215))/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x219 = -1;
	uint8_t x220 = 19U;
	static int32_t t52 = 455270672;

    t52 = ((x217==(x218^x219))/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x221 = 1;
	int32_t x222 = INT32_MAX;
	volatile int8_t x223 = INT8_MIN;
	int32_t t53 = -1;

    t53 = ((x221==(x222^x223))/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = -23713144049108LL;
	uint16_t x226 = UINT16_MAX;
	static int16_t x227 = INT16_MIN;
	static volatile int64_t x228 = -4144160LL;
	volatile int64_t t54 = 6217671LL;

    t54 = ((x225==(x226^x227))/x228);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = 1485621460552267768LLU;
	int8_t x230 = INT8_MAX;
	static int32_t x231 = -1;
	static uint64_t x232 = 1650LLU;
	volatile uint64_t t55 = 54031299710262LLU;

    t55 = ((x229==(x230^x231))/x232);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x235 = INT8_MIN;
	static int64_t x236 = -42567700238209287LL;

    t56 = ((x233==(x234^x235))/x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = UINT64_MAX;
	uint32_t x239 = 88103U;
	int32_t x240 = 235701253;
	int32_t t57 = -19836;

    t57 = ((x237==(x238^x239))/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MIN;
	static volatile int8_t x242 = 0;
	uint64_t x243 = 1643206474618250LLU;
	static volatile int64_t x244 = INT64_MIN;
	int64_t t58 = -31473LL;

    t58 = ((x241==(x242^x243))/x244);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MIN;
	static uint8_t x247 = 15U;

    t59 = ((x245==(x246^x247))/x248);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = INT8_MIN;
	volatile int16_t x250 = -1;
	uint64_t x251 = 3449721185264609693LLU;
	int32_t x252 = 54205;
	int32_t t60 = -47864128;

    t60 = ((x249==(x250^x251))/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x253 = 0U;
	static int32_t x254 = 218;
	int16_t x255 = 1717;
	int8_t x256 = INT8_MIN;
	int32_t t61 = -127615672;

    t61 = ((x253==(x254^x255))/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x257 = -1LL;
	int32_t x258 = -1;
	static int8_t x259 = 11;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t62 = 237U;

    t62 = ((x257==(x258^x259))/x260);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x261 = 4360920456752LLU;
	int32_t x262 = INT32_MIN;
	int8_t x263 = 12;
	uint32_t x264 = 22U;
	static uint32_t t63 = 610U;

    t63 = ((x261==(x262^x263))/x264);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MIN;
	int32_t t64 = -34727;

    t64 = ((x265==(x266^x267))/x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x269 = 207LLU;
	static uint64_t x270 = UINT64_MAX;
	static int16_t x271 = INT16_MIN;
	volatile int64_t x272 = 7122LL;

    t65 = ((x269==(x270^x271))/x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = 0;
	uint16_t x275 = 127U;
	uint8_t x276 = UINT8_MAX;
	int32_t t66 = 30288703;

    t66 = ((x273==(x274^x275))/x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x278 = INT8_MAX;
	uint32_t x279 = 14207554U;
	volatile int16_t x280 = INT16_MAX;
	volatile int32_t t67 = 3624022;

    t67 = ((x277==(x278^x279))/x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = -1;
	volatile uint8_t x282 = 0U;
	uint32_t x283 = 13641989U;
	static int8_t x284 = -43;
	int32_t t68 = -13;

    t68 = ((x281==(x282^x283))/x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x286 = 122;
	static int64_t x287 = 7LL;
	volatile int8_t x288 = -1;

    t69 = ((x285==(x286^x287))/x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	volatile int8_t x291 = -1;
	int8_t x292 = INT8_MIN;

    t70 = ((x289==(x290^x291))/x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x294 = 224380329LLU;
	int32_t x296 = 2801;
	volatile int32_t t71 = 127921;

    t71 = ((x293==(x294^x295))/x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x298 = 784320171090037LLU;
	volatile int8_t x300 = -1;

    t72 = ((x297==(x298^x299))/x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x301 = 51856;
	uint32_t x302 = 1U;
	int64_t x303 = -104523LL;

    t73 = ((x301==(x302^x303))/x304);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = 27U;
	uint64_t x308 = 480155141111720460LLU;
	uint64_t t74 = 3716557LLU;

    t74 = ((x305==(x306^x307))/x308);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x315 = -348;
	static uint32_t x316 = 68U;
	volatile uint32_t t75 = 1374337U;

    t75 = ((x313==(x314^x315))/x316);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = -233972;
	int16_t x319 = INT16_MIN;
	static volatile uint32_t t76 = 948U;

    t76 = ((x317==(x318^x319))/x320);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x321 = -1;
	static int32_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	static int32_t t77 = 7448;

    t77 = ((x321==(x322^x323))/x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x326 = INT16_MIN;
	uint64_t x327 = 2LLU;
	int32_t x328 = -1;
	volatile int32_t t78 = 1252393;

    t78 = ((x325==(x326^x327))/x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = INT32_MAX;
	volatile uint8_t x330 = 14U;
	volatile int32_t x331 = INT32_MIN;
	int32_t t79 = 12;

    t79 = ((x329==(x330^x331))/x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x333 = -1LL;
	int64_t x334 = INT64_MAX;
	volatile int16_t x335 = 7544;
	uint8_t x336 = 42U;
	int32_t t80 = 1940;

    t80 = ((x333==(x334^x335))/x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = -45242541804621LL;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 14U;
	uint32_t x340 = 116U;
	volatile uint32_t t81 = 9U;

    t81 = ((x337==(x338^x339))/x340);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x345 = 69U;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	uint32_t t82 = 11000447U;

    t82 = ((x345==(x346^x347))/x348);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x349 = 14U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	volatile int64_t x352 = 4054592778LL;

    t83 = ((x349==(x350^x351))/x352);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = 1397239601716973LL;
	volatile int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = 739;
	int32_t t84 = 26;

    t84 = ((x353==(x354^x355))/x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = -1LL;
	volatile int8_t x360 = -1;
	static volatile int32_t t85 = 0;

    t85 = ((x357==(x358^x359))/x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x362 = -42;
	uint16_t x363 = 44U;
	int32_t x364 = INT32_MIN;

    t86 = ((x361==(x362^x363))/x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x365 = 1604134100371186LLU;
	int64_t x366 = -1LL;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = -436098LL;
	static int64_t t87 = 69790LL;

    t87 = ((x365==(x366^x367))/x368);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x369 = INT8_MAX;
	uint32_t x370 = 1U;
	int32_t x371 = INT32_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	static volatile int32_t t88 = 461;

    t88 = ((x369==(x370^x371))/x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x373 = 26095U;
	int32_t x374 = -1;
	uint64_t x375 = 33876676875LLU;
	uint32_t x376 = 6902U;
	uint32_t t89 = 1019U;

    t89 = ((x373==(x374^x375))/x376);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = INT16_MIN;
	int32_t t90 = 212;

    t90 = ((x377==(x378^x379))/x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x381 = 11U;
	volatile int32_t x382 = INT32_MIN;
	static uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;
	int32_t t91 = 735460;

    t91 = ((x381==(x382^x383))/x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MIN;
	volatile uint8_t x386 = 6U;

    t92 = ((x385==(x386^x387))/x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x389 = INT64_MAX;
	volatile int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t93 = 151;

    t93 = ((x389==(x390^x391))/x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x393 = 24U;
	volatile uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	int16_t x396 = 951;
	int32_t t94 = 20973;

    t94 = ((x393==(x394^x395))/x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x397 = 4;
	static int16_t x398 = -15;
	uint32_t x399 = UINT32_MAX;
	static int16_t x400 = 13;

    t95 = ((x397==(x398^x399))/x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x401 = UINT8_MAX;
	static uint64_t x402 = 122140013726LLU;
	volatile int16_t x403 = -1;
	int32_t t96 = -1;

    t96 = ((x401==(x402^x403))/x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x406 = 0U;
	volatile uint64_t x407 = 267040646LLU;
	uint32_t x408 = UINT32_MAX;

    t97 = ((x405==(x406^x407))/x408);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x409 = 83U;
	int16_t x410 = -3076;
	uint16_t x411 = 21U;
	static int32_t x412 = -629721;
	static volatile int32_t t98 = -44988;

    t98 = ((x409==(x410^x411))/x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x414 = UINT64_MAX;
	int64_t x415 = INT64_MAX;
	volatile int64_t x416 = INT64_MIN;
	int64_t t99 = -14973860131LL;

    t99 = ((x413==(x414^x415))/x416);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = INT64_MIN;
	int16_t x419 = -1;

    t100 = ((x417==(x418^x419))/x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x422 = -1;
	int16_t x423 = -1;
	uint64_t x424 = 862828879258LLU;

    t101 = ((x421==(x422^x423))/x424);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x425 = 13674;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	volatile int32_t t102 = -493859562;

    t102 = ((x425==(x426^x427))/x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = -1;
	int8_t x430 = 0;
	volatile uint8_t x431 = UINT8_MAX;

    t103 = ((x429==(x430^x431))/x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x433 = -1;
	static uint16_t x434 = 9528U;
	int64_t x435 = -3916582199LL;

    t104 = ((x433==(x434^x435))/x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x437 = 60855;
	uint64_t x438 = 26367997298650540LLU;
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t t105 = -576269;

    t105 = ((x437==(x438^x439))/x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x441 = 25U;
	int64_t x442 = -1LL;
	volatile int32_t x443 = INT32_MIN;
	int8_t x444 = 2;
	volatile int32_t t106 = 44;

    t106 = ((x441==(x442^x443))/x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x445 = -1;
	int64_t x446 = -792LL;
	uint8_t x447 = 14U;
	int64_t x448 = INT64_MAX;
	volatile int64_t t107 = 3479298381956LL;

    t107 = ((x445==(x446^x447))/x448);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x449 = 51135083;
	uint64_t x450 = 300271965LLU;
	static uint8_t x452 = UINT8_MAX;

    t108 = ((x449==(x450^x451))/x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = 1;
	static uint64_t x454 = 8388698514879996464LLU;
	int8_t x455 = 0;

    t109 = ((x453==(x454^x455))/x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x457 = -1;
	static volatile uint16_t x458 = 48U;
	int32_t x460 = INT32_MIN;
	int32_t t110 = -16059;

    t110 = ((x457==(x458^x459))/x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x461 = 0LL;
	uint64_t x463 = UINT64_MAX;
	int32_t x464 = 586;
	int32_t t111 = 67897708;

    t111 = ((x461==(x462^x463))/x464);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x465 = INT32_MIN;
	static uint8_t x466 = UINT8_MAX;
	int8_t x467 = -1;
	int64_t x468 = -397615855385LL;
	volatile int64_t t112 = -2086966LL;

    t112 = ((x465==(x466^x467))/x468);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x469 = 0U;
	volatile int16_t x470 = -1;
	static uint32_t x471 = UINT32_MAX;
	volatile int32_t t113 = 455;

    t113 = ((x469==(x470^x471))/x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int32_t x475 = INT32_MIN;
	volatile uint64_t t114 = 42558865159LLU;

    t114 = ((x473==(x474^x475))/x476);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x477 = INT8_MIN;
	static int8_t x478 = INT8_MAX;
	uint64_t x479 = 44LLU;
	static uint64_t x480 = UINT64_MAX;

    t115 = ((x477==(x478^x479))/x480);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MIN;
	volatile int32_t x482 = 1;
	int64_t x483 = INT64_MAX;
	uint16_t x484 = 4479U;

    t116 = ((x481==(x482^x483))/x484);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = INT8_MAX;
	static int32_t x486 = INT32_MIN;
	volatile int64_t t117 = 3079181003604853470LL;

    t117 = ((x485==(x486^x487))/x488);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x489 = INT8_MIN;
	static uint16_t x491 = UINT16_MAX;
	volatile int8_t x492 = INT8_MAX;
	int32_t t118 = 1093;

    t118 = ((x489==(x490^x491))/x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x493 = -1;
	static volatile uint32_t x495 = 19U;
	volatile int32_t t119 = -223388;

    t119 = ((x493==(x494^x495))/x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = 271;
	volatile uint32_t x498 = 351167344U;
	int32_t x499 = INT32_MIN;
	volatile int64_t x500 = -1LL;
	volatile int64_t t120 = -29068531379LL;

    t120 = ((x497==(x498^x499))/x500);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x501 = -3;
	int8_t x502 = INT8_MIN;
	int32_t x503 = -216751;
	volatile uint8_t x504 = 82U;
	volatile int32_t t121 = 907059;

    t121 = ((x501==(x502^x503))/x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MIN;
	int32_t t122 = 1566;

    t122 = ((x505==(x506^x507))/x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x510 = -16;
	static int8_t x511 = 1;
	uint64_t x512 = UINT64_MAX;
	uint64_t t123 = 123204255832LLU;

    t123 = ((x509==(x510^x511))/x512);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x513 = UINT16_MAX;
	int32_t x515 = 1;
	int32_t x516 = -1;
	static int32_t t124 = -7;

    t124 = ((x513==(x514^x515))/x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = -24;
	int16_t x519 = INT16_MIN;
	volatile int32_t t125 = -160847982;

    t125 = ((x517==(x518^x519))/x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x522 = 104U;
	int32_t x523 = INT32_MAX;

    t126 = ((x521==(x522^x523))/x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x525 = 40U;
	static int64_t x526 = INT64_MIN;
	volatile int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;
	volatile int32_t t127 = 46799;

    t127 = ((x525==(x526^x527))/x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x531 = -12002LL;
	int32_t x532 = INT32_MAX;
	volatile int32_t t128 = 29060;

    t128 = ((x529==(x530^x531))/x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x533 = 353;
	volatile int16_t x534 = 87;
	int64_t x535 = INT64_MIN;
	volatile int64_t x536 = INT64_MIN;
	static int64_t t129 = 2513661313LL;

    t129 = ((x533==(x534^x535))/x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x537 = 11727124682959574LLU;
	static int64_t x538 = 1059675LL;
	int8_t x539 = INT8_MAX;
	int32_t x540 = INT32_MAX;
	volatile int32_t t130 = -2;

    t130 = ((x537==(x538^x539))/x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x542 = -1;
	volatile uint64_t x544 = 80744011LLU;
	uint64_t t131 = 4240422233032640LLU;

    t131 = ((x541==(x542^x543))/x544);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x545 = 73523208U;
	static int16_t x547 = INT16_MAX;
	uint32_t x548 = UINT32_MAX;

    t132 = ((x545==(x546^x547))/x548);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = 0;
	uint64_t x551 = 303760LLU;
	int32_t x552 = INT32_MIN;
	int32_t t133 = 1837;

    t133 = ((x549==(x550^x551))/x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = 0LLU;
	uint16_t x555 = UINT16_MAX;
	volatile int32_t x556 = INT32_MIN;
	int32_t t134 = 124539;

    t134 = ((x553==(x554^x555))/x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x557 = 6926;
	uint16_t x559 = 2650U;
	int64_t x560 = INT64_MIN;
	volatile int64_t t135 = 1352481218LL;

    t135 = ((x557==(x558^x559))/x560);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = -8;
	static uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 35U;
	uint32_t t136 = 595346064U;

    t136 = ((x561==(x562^x563))/x564);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x565 = 3U;
	static int64_t x566 = 3477018308998019465LL;
	int32_t x567 = INT32_MIN;
	static int16_t x568 = INT16_MIN;

    t137 = ((x565==(x566^x567))/x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x569 = INT64_MAX;
	static uint8_t x570 = 33U;
	volatile int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t138 = 7;

    t138 = ((x569==(x570^x571))/x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = INT32_MIN;
	static volatile int64_t x574 = INT64_MIN;
	int8_t x575 = 1;
	uint32_t x576 = 164U;
	volatile uint32_t t139 = 1912333U;

    t139 = ((x573==(x574^x575))/x576);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = -83570874747254LL;
	static int32_t x582 = -1;
	static int64_t x583 = INT64_MIN;
	volatile int16_t x584 = INT16_MIN;
	static int32_t t140 = 5644;

    t140 = ((x581==(x582^x583))/x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x585 = 29567U;
	static int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MAX;
	volatile int32_t t141 = 388606630;

    t141 = ((x585==(x586^x587))/x588);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = 13;
	static uint8_t x591 = 0U;
	volatile int32_t t142 = 2834907;

    t142 = ((x589==(x590^x591))/x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MIN;
	volatile uint8_t x596 = UINT8_MAX;
	static volatile int32_t t143 = -631;

    t143 = ((x593==(x594^x595))/x596);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x597 = 1003366LLU;
	uint32_t x598 = 16505U;
	volatile int16_t x599 = 123;
	volatile int32_t t144 = -2253431;

    t144 = ((x597==(x598^x599))/x600);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x601 = 25352U;
	static uint8_t x602 = UINT8_MAX;
	uint8_t x603 = 25U;
	volatile int64_t x604 = -902339420724804LL;
	volatile int64_t t145 = -175089898207899259LL;

    t145 = ((x601==(x602^x603))/x604);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x605 = INT64_MIN;
	static volatile int64_t x606 = INT64_MIN;
	int64_t x607 = INT64_MIN;
	int16_t x608 = -1;
	int32_t t146 = -123859;

    t146 = ((x605==(x606^x607))/x608);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = INT16_MAX;
	int16_t x610 = 15;
	uint16_t x611 = 8875U;
	int32_t x612 = 28977;

    t147 = ((x609==(x610^x611))/x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x613 = INT64_MIN;
	uint8_t x614 = 2U;
	static int32_t x615 = 0;
	uint16_t x616 = 6066U;

    t148 = ((x613==(x614^x615))/x616);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x617 = 3U;
	uint16_t x619 = UINT16_MAX;
	static volatile int8_t x620 = -32;

    t149 = ((x617==(x618^x619))/x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x622 = INT8_MIN;
	int32_t x623 = INT32_MIN;
	uint16_t x624 = UINT16_MAX;
	static volatile int32_t t150 = -2634;

    t150 = ((x621==(x622^x623))/x624);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x625 = 621U;
	static volatile uint32_t x626 = UINT32_MAX;
	int8_t x627 = INT8_MIN;
	static volatile int32_t x628 = 385243396;
	volatile int32_t t151 = 30295322;

    t151 = ((x625==(x626^x627))/x628);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x630 = -106;
	volatile uint32_t x631 = UINT32_MAX;
	uint64_t x632 = 36468047100746232LLU;
	uint64_t t152 = 5194848LLU;

    t152 = ((x629==(x630^x631))/x632);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x633 = 0;
	uint16_t x634 = 1064U;
	int32_t x635 = -55464;
	static int64_t x636 = -14429271553751LL;

    t153 = ((x633==(x634^x635))/x636);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x637 = INT32_MIN;
	volatile uint16_t x638 = 26U;
	int32_t x639 = 26260506;
	volatile uint16_t x640 = UINT16_MAX;
	int32_t t154 = 33237869;

    t154 = ((x637==(x638^x639))/x640);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x644 = INT32_MAX;
	volatile int32_t t155 = -372;

    t155 = ((x641==(x642^x643))/x644);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x645 = 48U;
	uint16_t x646 = UINT16_MAX;
	static uint32_t x647 = 16127420U;
	int64_t t156 = 2LL;

    t156 = ((x645==(x646^x647))/x648);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x649 = 15731U;
	static volatile uint8_t x650 = UINT8_MAX;
	volatile int16_t x652 = -1;

    t157 = ((x649==(x650^x651))/x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = -60901800;
	int16_t x655 = 0;
	uint8_t x656 = 14U;
	int32_t t158 = -1;

    t158 = ((x653==(x654^x655))/x656);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x657 = INT16_MIN;
	int8_t x659 = 8;
	static volatile uint16_t x660 = 498U;

    t159 = ((x657==(x658^x659))/x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x663 = 1U;
	volatile uint16_t x664 = 15639U;
	volatile int32_t t160 = 3552006;

    t160 = ((x661==(x662^x663))/x664);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint64_t x665 = UINT64_MAX;
	int8_t x666 = -1;
	volatile int8_t x667 = -1;
	int32_t x668 = INT32_MIN;

    t161 = ((x665==(x666^x667))/x668);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x669 = UINT64_MAX;
	uint32_t x670 = 2169531U;
	int16_t x671 = INT16_MIN;
	int64_t t162 = -7261560766575LL;

    t162 = ((x669==(x670^x671))/x672);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x674 = -1;
	int8_t x675 = INT8_MIN;
	int32_t x676 = INT32_MIN;
	volatile int32_t t163 = 5616900;

    t163 = ((x673==(x674^x675))/x676);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x677 = INT64_MIN;
	volatile int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	int16_t x680 = INT16_MIN;

    t164 = ((x677==(x678^x679))/x680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x681 = 1948U;
	static int64_t x682 = 6683111815659LL;
	int64_t x683 = 366545LL;
	uint32_t x684 = UINT32_MAX;

    t165 = ((x681==(x682^x683))/x684);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x685 = 331147489391917LLU;
	uint16_t x686 = 6025U;
	static int32_t x687 = 6087818;
	uint8_t x688 = 27U;
	volatile int32_t t166 = -9684915;

    t166 = ((x685==(x686^x687))/x688);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x689 = INT8_MAX;
	int32_t x690 = INT32_MIN;
	int16_t x691 = 854;
	static int64_t x692 = -398878215LL;
	static int64_t t167 = -525850986993LL;

    t167 = ((x689==(x690^x691))/x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x695 = INT32_MIN;
	volatile int32_t t168 = 4952610;

    t168 = ((x693==(x694^x695))/x696);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x697 = 23346LLU;
	int64_t x698 = INT64_MAX;
	uint32_t x700 = 1125U;
	uint32_t t169 = 3U;

    t169 = ((x697==(x698^x699))/x700);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MAX;
	int64_t x702 = -2402351LL;
	int32_t x703 = -1;
	uint32_t x704 = 5678U;
	volatile uint32_t t170 = 161759U;

    t170 = ((x701==(x702^x703))/x704);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = -1;
	uint16_t x706 = 0U;
	int8_t x707 = -1;
	static int16_t x708 = -1;
	int32_t t171 = -9913635;

    t171 = ((x705==(x706^x707))/x708);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x710 = 4338;
	int8_t x711 = -1;
	static int16_t x712 = -15365;
	int32_t t172 = -218;

    t172 = ((x709==(x710^x711))/x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x713 = INT16_MIN;
	int16_t x714 = 0;
	int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MAX;
	volatile int32_t t173 = 1;

    t173 = ((x713==(x714^x715))/x716);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x717 = 2582U;
	uint64_t x718 = 3211442LLU;
	static int8_t x719 = INT8_MAX;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t174 = -97237;

    t174 = ((x717==(x718^x719))/x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = INT32_MIN;
	volatile int32_t x722 = 1;
	int64_t x723 = -1LL;
	static int32_t t175 = -1837;

    t175 = ((x721==(x722^x723))/x724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x726 = 742834LL;
	int32_t x727 = -1;
	int32_t x728 = INT32_MIN;
	volatile int32_t t176 = -538491984;

    t176 = ((x725==(x726^x727))/x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x729 = -19389;
	uint8_t x730 = 1U;
	int64_t x732 = -2131258672820LL;

    t177 = ((x729==(x730^x731))/x732);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x737 = INT16_MAX;
	static uint32_t x738 = UINT32_MAX;
	uint8_t x740 = 61U;
	static int32_t t178 = 10664;

    t178 = ((x737==(x738^x739))/x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x742 = 11121580934536LL;
	uint64_t x743 = 6061927735003670943LLU;
	volatile int64_t t179 = -547056434996331LL;

    t179 = ((x741==(x742^x743))/x744);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x746 = INT64_MIN;
	volatile int32_t x747 = INT32_MIN;
	volatile int16_t x748 = INT16_MIN;

    t180 = ((x745==(x746^x747))/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x750 = 15LLU;
	int64_t x752 = -1LL;
	int64_t t181 = 1308228808396959417LL;

    t181 = ((x749==(x750^x751))/x752);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x754 = 1;
	static volatile int64_t x755 = -5472301538824LL;
	int8_t x756 = -16;
	int32_t t182 = 6684;

    t182 = ((x753==(x754^x755))/x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x757 = 14;
	int32_t x758 = 30;
	int8_t x759 = 47;
	volatile int32_t t183 = 1;

    t183 = ((x757==(x758^x759))/x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x761 = INT16_MIN;
	int8_t x762 = 1;
	int8_t x763 = 1;
	volatile int64_t t184 = 15016792LL;

    t184 = ((x761==(x762^x763))/x764);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = -1;
	uint64_t x766 = 6257LLU;
	uint8_t x767 = UINT8_MAX;
	static volatile int32_t x768 = INT32_MAX;

    t185 = ((x765==(x766^x767))/x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x769 = 2;
	static uint64_t x770 = 2264LLU;
	uint16_t x771 = 7U;
	int32_t x772 = INT32_MAX;

    t186 = ((x769==(x770^x771))/x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x774 = INT8_MAX;
	volatile int32_t x775 = INT32_MIN;
	int8_t x776 = 41;
	volatile int32_t t187 = -2;

    t187 = ((x773==(x774^x775))/x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x777 = 22U;

    t188 = ((x777==(x778^x779))/x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = INT32_MIN;
	static uint16_t x782 = 26191U;
	uint64_t x783 = 23846110LLU;
	static int8_t x784 = INT8_MIN;

    t189 = ((x781==(x782^x783))/x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x785 = INT32_MAX;
	static volatile uint16_t x786 = 242U;
	volatile uint32_t x788 = 395563U;

    t190 = ((x785==(x786^x787))/x788);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x789 = UINT32_MAX;
	static uint64_t x790 = 61LLU;
	uint16_t x791 = UINT16_MAX;
	static int32_t x792 = 3671;
	static int32_t t191 = -124757;

    t191 = ((x789==(x790^x791))/x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x793 = 3461U;
	volatile uint8_t x795 = 1U;
	int16_t x796 = INT16_MIN;
	int32_t t192 = -20;

    t192 = ((x793==(x794^x795))/x796);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x798 = INT16_MIN;
	uint16_t x799 = UINT16_MAX;
	int16_t x800 = -1;
	int32_t t193 = 32;

    t193 = ((x797==(x798^x799))/x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = -907;
	uint64_t x802 = 1LLU;
	static int32_t x803 = INT32_MAX;
	int32_t x804 = -1;
	volatile int32_t t194 = 742103;

    t194 = ((x801==(x802^x803))/x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x808 = -1;
	int32_t t195 = 170588539;

    t195 = ((x805==(x806^x807))/x808);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	uint32_t x810 = UINT32_MAX;
	int8_t x811 = 3;
	uint64_t t196 = 163252036454313884LLU;

    t196 = ((x809==(x810^x811))/x812);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x813 = 1635714204U;
	static int32_t x815 = -1;
	int32_t t197 = -4534;

    t197 = ((x813==(x814^x815))/x816);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x818 = INT32_MIN;
	static volatile int32_t t198 = 82075;

    t198 = ((x817==(x818^x819))/x820);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = INT32_MIN;
	uint8_t x822 = UINT8_MAX;
	uint16_t x823 = 176U;
	volatile int16_t x824 = INT16_MIN;

    t199 = ((x821==(x822^x823))/x824);

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

