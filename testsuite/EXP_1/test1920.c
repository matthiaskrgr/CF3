
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

int16_t x11 = INT16_MIN;
int16_t x13 = INT16_MAX;
int8_t x30 = -1;
uint16_t x36 = 0U;
static int32_t t8 = -1238099;
static volatile uint32_t t9 = 226390624U;
static int16_t x48 = INT16_MIN;
int32_t t11 = -4804;
int16_t x57 = 1452;
int32_t x65 = INT32_MIN;
int32_t t16 = 1902910;
int64_t x73 = INT64_MIN;
int16_t x82 = INT16_MAX;
static int8_t x90 = 1;
int64_t x102 = 214637831LL;
volatile uint8_t x120 = 0U;
volatile int32_t x128 = INT32_MIN;
static uint32_t t31 = 5925U;
uint16_t x144 = UINT16_MAX;
volatile int32_t t34 = -8662789;
int32_t x148 = 34174;
uint32_t x152 = 844873U;
static int32_t x155 = INT32_MIN;
int32_t x156 = INT32_MAX;
volatile uint64_t x157 = UINT64_MAX;
volatile int32_t x161 = 1492914;
int8_t x163 = INT8_MIN;
volatile int64_t t39 = -19552276LL;
volatile int8_t x166 = -1;
volatile int16_t x167 = INT16_MIN;
static uint32_t x168 = UINT32_MAX;
int64_t x185 = INT64_MIN;
uint64_t t46 = 465592217LLU;
int32_t x215 = INT32_MIN;
int32_t t51 = 21823602;
uint16_t x227 = 9U;
int32_t x241 = INT32_MAX;
static volatile int64_t t58 = 4251697540LL;
int16_t x248 = INT16_MIN;
static int64_t t59 = -5348LL;
int8_t x253 = INT8_MAX;
static int32_t x254 = INT32_MIN;
volatile int32_t t61 = 21;
static int8_t x268 = 0;
static int64_t x270 = -1LL;
uint64_t x271 = 43LLU;
volatile int64_t x272 = INT64_MIN;
static volatile uint64_t t65 = 10067018426514LLU;
int32_t x276 = -86311;
static uint8_t x278 = 2U;
volatile int32_t t67 = -412;
int32_t t68 = -5720;
int32_t x288 = -1;
int8_t x292 = INT8_MAX;
int8_t x295 = INT8_MIN;
int64_t x296 = -1LL;
int16_t x297 = 15647;
uint64_t t72 = 1927947LLU;
int32_t x301 = -1;
static int8_t x302 = INT8_MAX;
int8_t x303 = INT8_MIN;
int64_t x305 = -1LL;
int8_t x306 = 22;
int32_t t74 = -2059905;
static volatile int8_t x310 = INT8_MIN;
static int64_t t76 = -38494326015578070LL;
int64_t x319 = INT64_MIN;
volatile uint8_t x322 = 106U;
static int8_t x331 = INT8_MIN;
int8_t x342 = INT8_MIN;
int16_t x344 = INT16_MIN;
uint64_t x346 = 2024LLU;
int64_t x347 = -3840842109424122LL;
int64_t t83 = -204716754983625LL;
volatile uint16_t x353 = UINT16_MAX;
int8_t x358 = INT8_MIN;
int32_t t86 = 121;
volatile int16_t x365 = INT16_MIN;
volatile uint64_t x366 = UINT64_MAX;
volatile int16_t x368 = -1;
int8_t x374 = INT8_MIN;
volatile int32_t t90 = 163;
int32_t x378 = INT32_MIN;
volatile int64_t t91 = -343767537LL;
static uint64_t x396 = 14LLU;
int16_t x400 = INT16_MAX;
uint32_t t95 = 294U;
uint32_t x401 = 0U;
uint32_t x404 = 13673899U;
int16_t x407 = INT16_MIN;
uint8_t x416 = 113U;
int64_t t99 = 82590212735952449LL;
int64_t x423 = INT64_MAX;
int8_t x426 = -2;
int8_t x432 = 6;
volatile int32_t t102 = 0;
uint16_t x433 = 223U;
uint64_t x434 = UINT64_MAX;
volatile int64_t x435 = 1183695LL;
uint16_t x436 = 2U;
int64_t x441 = INT64_MIN;
int64_t t104 = -222725380359386LL;
int16_t x447 = INT16_MIN;
uint8_t x456 = UINT8_MAX;
uint64_t t107 = 3340902LLU;
int64_t x457 = -1LL;
volatile uint8_t x461 = UINT8_MAX;
volatile int8_t x476 = INT8_MAX;
volatile uint64_t t111 = 54577LLU;
volatile uint64_t x481 = UINT64_MAX;
int32_t x482 = INT32_MIN;
static uint32_t x485 = 439400U;
uint8_t x488 = UINT8_MAX;
int32_t t114 = -263367826;
int16_t x490 = -3;
volatile uint32_t t115 = 342U;
static volatile int64_t x495 = 930329765353LL;
int32_t x499 = INT32_MAX;
static int64_t x502 = -83635110567413506LL;
static volatile int32_t x504 = INT32_MAX;
uint16_t x508 = 11U;
uint16_t x509 = UINT16_MAX;
volatile int64_t x516 = 3962373660311LL;
static uint64_t x524 = 656827LLU;
volatile uint64_t t123 = 585065426LLU;
int64_t x530 = -1LL;
volatile uint32_t t125 = 9158U;
uint32_t x536 = 0U;
uint32_t t126 = 471902664U;
uint16_t x541 = UINT16_MAX;
int64_t x544 = -1LL;
uint8_t x547 = 7U;
static volatile int64_t t131 = -2043LL;
static int32_t x563 = INT32_MAX;
static int64_t x570 = INT64_MIN;
int64_t x577 = -26734046994LL;
static int8_t x578 = -1;
static int32_t x579 = INT32_MAX;
uint64_t x581 = 1991653641LLU;
uint8_t x593 = 11U;
int16_t x597 = -2337;
uint16_t x599 = 11203U;
volatile int8_t x600 = -1;
static int32_t t142 = -137;
static uint32_t x606 = 4948U;
int8_t x608 = -1;
int8_t x615 = -1;
int32_t t145 = -10719873;
int64_t x624 = -189144526LL;
int32_t x630 = INT32_MIN;
static int8_t x631 = -61;
volatile int8_t x633 = INT8_MAX;
volatile int32_t t149 = 458651;
int16_t x639 = INT16_MAX;
int8_t x640 = 0;
static int32_t t150 = 621598;
static int64_t x646 = INT64_MIN;
volatile int64_t t152 = 8766440176691224LL;
int16_t x653 = 60;
int64_t x658 = -1LL;
uint8_t x664 = UINT8_MAX;
volatile int32_t t156 = 8;
int8_t x665 = -13;
uint32_t x666 = 0U;
static int64_t t159 = -149058700669221LL;
static volatile uint32_t x678 = 313423660U;
static int16_t x689 = -10;
volatile int8_t x691 = -1;
uint16_t x697 = 0U;
static uint16_t x698 = UINT16_MAX;
volatile int16_t x716 = -1;
static uint32_t x720 = 5014365U;
static volatile int16_t x721 = INT16_MAX;
volatile int64_t t172 = -55LL;
int64_t t173 = 56570057LL;
static int8_t x738 = INT8_MAX;
int64_t x741 = INT64_MIN;
static int16_t x756 = -1;
volatile int32_t t178 = -103617;
int64_t t181 = 138545290994269203LL;
volatile uint32_t x775 = 1513910U;
static uint32_t x778 = 140U;
uint8_t x784 = 49U;
int64_t x803 = 118317100LL;
volatile int32_t x814 = INT32_MIN;
volatile int16_t x823 = 8905;
uint8_t x825 = 78U;
static uint64_t x829 = 11643579795961954LLU;
uint8_t x830 = 15U;
uint64_t x841 = 2031296266012LLU;


void f0(void) {
    	int16_t x1 = -7;
	int32_t x2 = 0;
	int32_t x3 = -27;
	volatile int16_t x4 = -1764;
	int32_t t0 = -37964;

    t0 = (((x1<=x2)&x3)-x4);

    if (t0 != 1765) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -11738;
	volatile uint16_t x6 = 745U;
	static volatile int64_t x7 = -1LL;
	int16_t x8 = -1;
	static volatile int64_t t1 = -8LL;

    t1 = (((x5<=x6)&x7)-x8);

    if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = 0;
	uint64_t x12 = 34381LLU;
	volatile uint64_t t2 = 15697790330LLU;

    t2 = (((x9<=x10)&x11)-x12);

    if (t2 != 18446744073709517235LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x14 = 63928714U;
	int8_t x15 = 28;
	int16_t x16 = -22;
	static volatile int32_t t3 = 238013;

    t3 = (((x13<=x14)&x15)-x16);

    if (t3 != 22) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1LL;
	int16_t x18 = INT16_MAX;
	static int64_t x19 = -1LL;
	uint16_t x20 = 12494U;
	volatile int64_t t4 = -25043LL;

    t4 = (((x17<=x18)&x19)-x20);

    if (t4 != -12493LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	uint16_t x22 = 1U;
	volatile uint32_t x23 = UINT32_MAX;
	static uint16_t x24 = UINT16_MAX;
	volatile uint32_t t5 = 585219U;

    t5 = (((x21<=x22)&x23)-x24);

    if (t5 != 4294901761U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	static int8_t x28 = INT8_MAX;
	volatile uint64_t t6 = 86LLU;

    t6 = (((x25<=x26)&x27)-x28);

    if (t6 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static uint64_t x31 = UINT64_MAX;
	volatile int8_t x32 = -1;
	volatile uint64_t t7 = 29834649901209LLU;

    t7 = (((x29<=x30)&x31)-x32);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	volatile int16_t x34 = INT16_MAX;
	volatile int8_t x35 = 60;

    t8 = (((x33<=x34)&x35)-x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	static int32_t x38 = -1;
	uint32_t x39 = 24292U;
	int8_t x40 = -1;

    t9 = (((x37<=x38)&x39)-x40);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint16_t x42 = 1988U;
	static uint32_t x43 = 202215U;
	int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 16272570U;

    t10 = (((x41<=x42)&x43)-x44);

    if (t10 != 129U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x47 = -16;

    t11 = (((x45<=x46)&x47)-x48);

    if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 142182457628978485LLU;
	uint8_t x50 = 74U;
	int8_t x51 = -1;
	static int32_t x52 = -1;
	volatile int32_t t12 = 1;

    t12 = (((x49<=x50)&x51)-x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 12959U;
	int64_t x54 = INT64_MIN;
	static uint16_t x55 = 0U;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 4;

    t13 = (((x53<=x54)&x55)-x56);

    if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	uint64_t x59 = 1838030601LLU;
	uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t14 = 1766LLU;

    t14 = (((x57<=x58)&x59)-x60);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile int16_t x62 = 0;
	volatile uint64_t x63 = UINT64_MAX;
	static uint64_t x64 = 792888426647414285LLU;
	static volatile uint64_t t15 = 29926259LLU;

    t15 = (((x61<=x62)&x63)-x64);

    if (t15 != 17653855647062137331LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = 51U;

    t16 = (((x65<=x66)&x67)-x68);

    if (t16 != -51) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int8_t x70 = -1;
	uint8_t x71 = 1U;
	uint16_t x72 = 15742U;
	volatile int32_t t17 = 20118;

    t17 = (((x69<=x70)&x71)-x72);

    if (t17 != -15742) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = 25;
	uint32_t t18 = 122703U;

    t18 = (((x73<=x74)&x75)-x76);

    if (t18 != 4294967272U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -63;
	int16_t x83 = INT16_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t19 = 937761234;

    t19 = (((x81<=x82)&x83)-x84);

    if (t19 != -255) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 3;
	uint8_t x86 = 1U;
	int64_t x87 = INT64_MAX;
	uint64_t x88 = 172415888251LLU;
	static volatile uint64_t t20 = 7088LLU;

    t20 = (((x85<=x86)&x87)-x88);

    if (t20 != 18446743901293663365LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = 22;
	int32_t x91 = -3086551;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t21 = 41;

    t21 = (((x89<=x90)&x91)-x92);

    if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = 6102996;
	uint8_t x94 = 15U;
	static int32_t x95 = -1;
	volatile int16_t x96 = -1;
	volatile int32_t t22 = 9300123;

    t22 = (((x93<=x94)&x95)-x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 0U;
	int32_t x98 = 297232571;
	volatile int8_t x99 = INT8_MIN;
	static volatile uint64_t x100 = 22619563572LLU;
	uint64_t t23 = 178259LLU;

    t23 = (((x97<=x98)&x99)-x100);

    if (t23 != 18446744051089988044LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = -1;
	uint32_t x103 = UINT32_MAX;
	static uint64_t x104 = 5654571095381105LLU;
	volatile uint64_t t24 = 47265681845537312LLU;

    t24 = (((x101<=x102)&x103)-x104);

    if (t24 != 18441089502614170512LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	int8_t x106 = 3;
	volatile int32_t x107 = -1;
	uint64_t x108 = 261267742577717LLU;
	uint64_t t25 = 246LLU;

    t25 = (((x105<=x106)&x107)-x108);

    if (t25 != 18446482805966973900LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = INT64_MAX;
	int32_t x111 = 209;
	uint16_t x112 = 743U;
	volatile int32_t t26 = -947088008;

    t26 = (((x109<=x110)&x111)-x112);

    if (t26 != -742) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x113 = 3503U;
	static int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = 1U;
	volatile int32_t t27 = -268723;

    t27 = (((x113<=x114)&x115)-x116);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -9239;
	int32_t t28 = -10771875;

    t28 = (((x117<=x118)&x119)-x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	int16_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	static int32_t t29 = 243444;

    t29 = (((x121<=x122)&x123)-x124);

    if (t29 != 129) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 99006020322LLU;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = INT64_MIN;
	int64_t t30 = -25705830638890LL;

    t30 = (((x125<=x126)&x127)-x128);

    if (t30 != 2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 101089860339466733LL;
	volatile uint64_t x130 = 612495253586LLU;
	int32_t x131 = INT32_MIN;
	volatile uint32_t x132 = 267742U;

    t31 = (((x129<=x130)&x131)-x132);

    if (t31 != 4294699554U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = -7877297599377072LL;
	int32_t x134 = INT32_MIN;
	int32_t x135 = -1;
	int32_t x136 = INT32_MAX;
	int32_t t32 = -96;

    t32 = (((x133<=x134)&x135)-x136);

    if (t32 != -2147483646) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = -105590LL;
	int32_t x139 = -1;
	static uint32_t x140 = UINT32_MAX;
	uint32_t t33 = 23324261U;

    t33 = (((x137<=x138)&x139)-x140);

    if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;

    t34 = (((x141<=x142)&x143)-x144);

    if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 1623005945LLU;
	uint32_t x146 = 7U;
	static uint8_t x147 = UINT8_MAX;
	int32_t t35 = 766205024;

    t35 = (((x145<=x146)&x147)-x148);

    if (t35 != -34174) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	uint32_t t36 = 1664739346U;

    t36 = (((x149<=x150)&x151)-x152);

    if (t36 != 4294122423U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x153 = 7661U;
	static int64_t x154 = INT64_MAX;
	static int32_t t37 = -425;

    t37 = (((x153<=x154)&x155)-x156);

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t38 = 59128464221870186LLU;

    t38 = (((x157<=x158)&x159)-x160);

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x162 = INT32_MAX;
	static int64_t x164 = -467572765735LL;

    t39 = (((x161<=x162)&x163)-x164);

    if (t39 != 467572765735LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x165 = INT8_MIN;
	uint32_t t40 = 32374089U;

    t40 = (((x165<=x166)&x167)-x168);

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 22447U;
	static int8_t x170 = -1;
	uint8_t x171 = 4U;
	int64_t x172 = -1LL;
	volatile int64_t t41 = 2105890134442249LL;

    t41 = (((x169<=x170)&x171)-x172);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x173 = UINT8_MAX;
	static volatile int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = 81U;
	volatile int64_t t42 = 3877LL;

    t42 = (((x173<=x174)&x175)-x176);

    if (t42 != -81LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 5U;
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t43 = -3799614;

    t43 = (((x177<=x178)&x179)-x180);

    if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = 3U;
	volatile int16_t x182 = -1198;
	uint8_t x183 = 31U;
	static uint8_t x184 = 116U;
	int32_t t44 = -448;

    t44 = (((x181<=x182)&x183)-x184);

    if (t44 != -116) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x186 = -36;
	volatile int32_t x187 = 6;
	static uint64_t x188 = 2131461981191LLU;
	volatile uint64_t t45 = 86153209774LLU;

    t45 = (((x185<=x186)&x187)-x188);

    if (t45 != 18446741942247570425LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x193 = 9U;
	int16_t x194 = 617;
	static volatile uint16_t x195 = 1968U;
	uint64_t x196 = 2186828750LLU;

    t46 = (((x193<=x194)&x195)-x196);

    if (t46 != 18446744071522722866LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 3586U;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = -129;
	int8_t x200 = -1;
	int32_t t47 = 893597;

    t47 = (((x197<=x198)&x199)-x200);

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x201 = UINT32_MAX;
	int32_t x202 = -1020816;
	int32_t x203 = INT32_MIN;
	static int8_t x204 = -3;
	int32_t t48 = -50832851;

    t48 = (((x201<=x202)&x203)-x204);

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x205 = 723445LLU;
	int8_t x206 = -1;
	static int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t49 = -102501764LL;

    t49 = (((x205<=x206)&x207)-x208);

    if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = INT8_MAX;
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MAX;
	int64_t t50 = 2714LL;

    t50 = (((x209<=x210)&x211)-x212);

    if (t50 != -32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -122814850665420194LL;
	static uint8_t x214 = UINT8_MAX;
	uint16_t x216 = 32479U;

    t51 = (((x213<=x214)&x215)-x216);

    if (t51 != -32479) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = 88454084U;
	int64_t x218 = -51711368276LL;
	int16_t x219 = 62;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = 5583;

    t52 = (((x217<=x218)&x219)-x220);

    if (t52 != -65535) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 1199LLU;
	int8_t x222 = 0;
	int8_t x223 = -1;
	volatile uint32_t x224 = 658112185U;
	volatile uint32_t t53 = 199U;

    t53 = (((x221<=x222)&x223)-x224);

    if (t53 != 3636855111U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	int64_t x228 = -11716LL;
	volatile int64_t t54 = -17091LL;

    t54 = (((x225<=x226)&x227)-x228);

    if (t54 != 11716LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 2435097249292LL;
	volatile uint8_t x230 = 103U;
	uint32_t x231 = 769829944U;
	int16_t x232 = 80;
	static uint32_t t55 = 44201U;

    t55 = (((x229<=x230)&x231)-x232);

    if (t55 != 4294967216U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = INT32_MAX;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = 14;
	uint64_t x236 = 1038402LLU;
	static uint64_t t56 = 5LLU;

    t56 = (((x233<=x234)&x235)-x236);

    if (t56 != 18446744073708513214LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = 0;
	volatile int32_t x238 = 1;
	volatile int16_t x239 = INT16_MAX;
	uint8_t x240 = 23U;
	int32_t t57 = -512906;

    t57 = (((x237<=x238)&x239)-x240);

    if (t57 != -22) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x242 = 161U;
	int64_t x243 = 423350LL;
	int16_t x244 = INT16_MAX;

    t58 = (((x241<=x242)&x243)-x244);

    if (t58 != -32767LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MAX;
	static int16_t x246 = INT16_MIN;
	static int64_t x247 = -8130LL;

    t59 = (((x245<=x246)&x247)-x248);

    if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = INT8_MIN;
	uint16_t x250 = UINT16_MAX;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = -972588;
	volatile int32_t t60 = 105;

    t60 = (((x249<=x250)&x251)-x252);

    if (t60 != 972589) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x255 = -161;
	int16_t x256 = -3;

    t61 = (((x253<=x254)&x255)-x256);

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 1221662127384866LLU;
	static int8_t x258 = INT8_MIN;
	volatile int64_t x259 = INT64_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t62 = -3862LL;

    t62 = (((x257<=x258)&x259)-x260);

    if (t62 != 2147483649LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x261 = INT8_MAX;
	static uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MAX;
	int16_t x264 = 2;
	volatile int32_t t63 = 873478551;

    t63 = (((x261<=x262)&x263)-x264);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x265 = -30;
	int64_t x266 = -1LL;
	int64_t x267 = -1LL;
	static int64_t t64 = 91019LL;

    t64 = (((x265<=x266)&x267)-x268);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x269 = -16325230;

    t65 = (((x269<=x270)&x271)-x272);

    if (t65 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 9U;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	volatile int32_t t66 = 34;

    t66 = (((x273<=x274)&x275)-x276);

    if (t66 != 86311) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = 41611236492865LL;
	int8_t x279 = INT8_MAX;
	uint16_t x280 = 5119U;

    t67 = (((x277<=x278)&x279)-x280);

    if (t67 != -5119) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = -1;
	uint16_t x282 = 4U;
	uint8_t x283 = 11U;
	int16_t x284 = -212;

    t68 = (((x281<=x282)&x283)-x284);

    if (t68 != 213) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = UINT16_MAX;
	static int64_t x286 = INT64_MAX;
	static uint64_t x287 = 892LLU;
	volatile uint64_t t69 = 4573516498316076805LLU;

    t69 = (((x285<=x286)&x287)-x288);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MAX;
	int32_t x290 = 241;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t70 = -295615465;

    t70 = (((x289<=x290)&x291)-x292);

    if (t70 != -126) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 2U;
	static uint8_t x294 = 109U;
	int64_t t71 = 3679939867860189345LL;

    t71 = (((x293<=x294)&x295)-x296);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 4462186685353914LLU;
	int64_t x300 = INT64_MAX;

    t72 = (((x297<=x298)&x299)-x300);

    if (t72 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x304 = 3;
	static volatile int32_t t73 = -314783;

    t73 = (((x301<=x302)&x303)-x304);

    if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x307 = INT32_MIN;
	uint16_t x308 = 1086U;

    t74 = (((x305<=x306)&x307)-x308);

    if (t74 != -1086) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = INT16_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	volatile uint16_t x312 = 1U;
	uint32_t t75 = 410U;

    t75 = (((x309<=x310)&x311)-x312);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -145086937972317LL;

    t76 = (((x313<=x314)&x315)-x316);

    if (t76 != 145086937972317LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -306111;
	uint8_t x318 = UINT8_MAX;
	uint64_t x320 = 13815297093LLU;
	uint64_t t77 = 1LLU;

    t77 = (((x317<=x318)&x319)-x320);

    if (t77 != 18446744059894254523LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = INT32_MAX;
	static int32_t x323 = 7435932;
	int16_t x324 = INT16_MIN;
	volatile int32_t t78 = 6387406;

    t78 = (((x321<=x322)&x323)-x324);

    if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	int8_t x327 = -1;
	uint32_t x328 = 4474966U;
	volatile uint32_t t79 = 738794U;

    t79 = (((x325<=x326)&x327)-x328);

    if (t79 != 4290492331U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -1;
	uint16_t x330 = UINT16_MAX;
	int16_t x332 = INT16_MIN;
	static int32_t t80 = -37;

    t80 = (((x329<=x330)&x331)-x332);

    if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = -3;
	volatile int64_t x339 = -381647722LL;
	static uint16_t x340 = UINT16_MAX;
	int64_t t81 = 35118875483337LL;

    t81 = (((x337<=x338)&x339)-x340);

    if (t81 != -65535LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x341 = INT8_MIN;
	static int8_t x343 = 1;
	static volatile int32_t t82 = -113;

    t82 = (((x341<=x342)&x343)-x344);

    if (t82 != 32769) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MAX;
	uint8_t x348 = 8U;

    t83 = (((x345<=x346)&x347)-x348);

    if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x349 = INT32_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 121U;
	volatile int64_t x352 = 25938876333813790LL;
	volatile int64_t t84 = -1331758770LL;

    t84 = (((x349<=x350)&x351)-x352);

    if (t84 != -25938876333813789LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x354 = INT64_MAX;
	volatile int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t85 = -1;

    t85 = (((x353<=x354)&x355)-x356);

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = 1562U;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 1404U;

    t86 = (((x357<=x358)&x359)-x360);

    if (t86 != -1404) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x361 = INT16_MIN;
	volatile uint16_t x362 = 24382U;
	int64_t x363 = INT64_MAX;
	int16_t x364 = 14561;
	volatile int64_t t87 = 447187720LL;

    t87 = (((x361<=x362)&x363)-x364);

    if (t87 != -14560LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x367 = 22499U;
	volatile int32_t t88 = 0;

    t88 = (((x365<=x366)&x367)-x368);

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x369 = INT8_MIN;
	volatile int64_t x370 = 27553838LL;
	static volatile int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t89 = 0;

    t89 = (((x369<=x370)&x371)-x372);

    if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x373 = INT8_MIN;
	int8_t x375 = -1;
	uint8_t x376 = 71U;

    t90 = (((x373<=x374)&x375)-x376);

    if (t90 != -70) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = 0;
	int32_t x379 = INT32_MIN;
	static volatile int64_t x380 = INT64_MAX;

    t91 = (((x377<=x378)&x379)-x380);

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	int64_t x383 = 390LL;
	volatile uint16_t x384 = 2012U;
	volatile int64_t t92 = -122LL;

    t92 = (((x381<=x382)&x383)-x384);

    if (t92 != -2012LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile int8_t x386 = 1;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	volatile int32_t t93 = -45564276;

    t93 = (((x385<=x386)&x387)-x388);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MAX;
	volatile uint64_t t94 = 678546833966678135LLU;

    t94 = (((x393<=x394)&x395)-x396);

    if (t94 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = 11727;
	int64_t x398 = -1LL;
	static uint32_t x399 = 32641624U;

    t95 = (((x397<=x398)&x399)-x400);

    if (t95 != 4294934529U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t t96 = 1LLU;

    t96 = (((x401<=x402)&x403)-x404);

    if (t96 != 18446744073695877718LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x405 = INT64_MIN;
	int8_t x406 = 19;
	volatile int64_t x408 = 1033220LL;
	int64_t t97 = 900509849928LL;

    t97 = (((x405<=x406)&x407)-x408);

    if (t97 != -1033220LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x413 = 2U;
	volatile uint64_t x414 = 259029LLU;
	int32_t x415 = INT32_MIN;
	int32_t t98 = -13905;

    t98 = (((x413<=x414)&x415)-x416);

    if (t98 != -113) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = -10;
	static int32_t x418 = INT32_MAX;
	int64_t x419 = INT64_MAX;
	int16_t x420 = 845;

    t99 = (((x417<=x418)&x419)-x420);

    if (t99 != -844LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x421 = 0;
	volatile int32_t x422 = -93406;
	static uint32_t x424 = 0U;
	volatile int64_t t100 = -16681931142LL;

    t100 = (((x421<=x422)&x423)-x424);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x427 = -1;
	int8_t x428 = 1;
	volatile int32_t t101 = 162658;

    t101 = (((x425<=x426)&x427)-x428);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = -64161;
	int64_t x430 = -208520LL;
	uint8_t x431 = UINT8_MAX;

    t102 = (((x429<=x430)&x431)-x432);

    if (t102 != -6) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t t103 = -696578802458319573LL;

    t103 = (((x433<=x434)&x435)-x436);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x442 = -15289;
	static int8_t x443 = -1;
	static int64_t x444 = 388LL;

    t104 = (((x441<=x442)&x443)-x444);

    if (t104 != -387LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x445 = INT16_MIN;
	uint32_t x446 = 3114221U;
	int32_t x448 = -1;
	volatile int32_t t105 = 6863;

    t105 = (((x445<=x446)&x447)-x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x449 = 254228635U;
	volatile int16_t x450 = -1;
	volatile uint64_t x451 = 5331653503062559219LLU;
	volatile int16_t x452 = INT16_MAX;
	static uint64_t t106 = 3745740794542195378LLU;

    t106 = (((x449<=x450)&x451)-x452);

    if (t106 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x453 = 3617U;
	static volatile int32_t x454 = -1;
	uint64_t x455 = 46955809068LLU;

    t107 = (((x453<=x454)&x455)-x456);

    if (t107 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x458 = 0U;
	uint8_t x459 = 3U;
	static uint32_t x460 = UINT32_MAX;
	uint32_t t108 = 892107U;

    t108 = (((x457<=x458)&x459)-x460);

    if (t108 != 2U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x462 = -1;
	volatile int8_t x463 = -1;
	int64_t x464 = INT64_MAX;
	volatile int64_t t109 = 28276125209263LL;

    t109 = (((x461<=x462)&x463)-x464);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x465 = 13936078338942712LLU;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MIN;
	int32_t t110 = 2587;

    t110 = (((x465<=x466)&x467)-x468);

    if (t110 != 32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x473 = INT8_MIN;
	uint64_t x474 = 467690646680720LLU;
	volatile uint64_t x475 = 8745880180326156228LLU;

    t111 = (((x473<=x474)&x475)-x476);

    if (t111 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x477 = 21U;
	int64_t x478 = INT64_MAX;
	static int32_t x479 = 5795;
	int64_t x480 = 183777LL;
	static int64_t t112 = -16LL;

    t112 = (((x477<=x478)&x479)-x480);

    if (t112 != -183776LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x483 = INT8_MIN;
	uint64_t x484 = 1449411183662LLU;
	static uint64_t t113 = 3305177LLU;

    t113 = (((x481<=x482)&x483)-x484);

    if (t113 != 18446742624298367954LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x486 = INT64_MIN;
	static int16_t x487 = INT16_MAX;

    t114 = (((x485<=x486)&x487)-x488);

    if (t114 != -255) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x489 = 34058203472LL;
	static volatile uint32_t x491 = 54988U;
	int16_t x492 = INT16_MIN;

    t115 = (((x489<=x490)&x491)-x492);

    if (t115 != 32768U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x493 = UINT8_MAX;
	uint32_t x494 = 937611U;
	uint32_t x496 = UINT32_MAX;
	int64_t t116 = 14473256LL;

    t116 = (((x493<=x494)&x495)-x496);

    if (t116 != -4294967294LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x497 = -1;
	uint8_t x498 = 53U;
	volatile int8_t x500 = -1;
	int32_t t117 = -435468;

    t117 = (((x497<=x498)&x499)-x500);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x501 = 3;
	uint64_t x503 = UINT64_MAX;
	uint64_t t118 = 88350LLU;

    t118 = (((x501<=x502)&x503)-x504);

    if (t118 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = -1;
	int8_t x506 = -1;
	uint8_t x507 = 3U;
	int32_t t119 = 124312;

    t119 = (((x505<=x506)&x507)-x508);

    if (t119 != -10) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x510 = 3267LLU;
	static volatile int64_t x511 = INT64_MIN;
	static int64_t x512 = -1LL;
	volatile int64_t t120 = 2481733541088342824LL;

    t120 = (((x509<=x510)&x511)-x512);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = 5334;
	uint64_t x514 = 3504717216598890275LLU;
	int32_t x515 = -1;
	int64_t t121 = -492519415582963654LL;

    t121 = (((x513<=x514)&x515)-x516);

    if (t121 != -3962373660310LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x517 = -1LL;
	int64_t x518 = 109065679622117LL;
	int64_t x519 = INT64_MAX;
	int8_t x520 = -1;
	int64_t t122 = 675096652LL;

    t122 = (((x517<=x518)&x519)-x520);

    if (t122 != 2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x521 = 1;
	uint32_t x522 = 2649U;
	int32_t x523 = 224619376;

    t123 = (((x521<=x522)&x523)-x524);

    if (t123 != 18446744073708894789LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	int16_t x526 = 1;
	static uint8_t x527 = 3U;
	static int64_t x528 = INT64_MAX;
	static int64_t t124 = -26677843811089558LL;

    t124 = (((x525<=x526)&x527)-x528);

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x529 = 5742982058LLU;
	uint8_t x531 = UINT8_MAX;
	static uint32_t x532 = UINT32_MAX;

    t125 = (((x529<=x530)&x531)-x532);

    if (t125 != 2U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -6284;
	volatile int32_t x534 = INT32_MAX;
	int16_t x535 = INT16_MIN;

    t126 = (((x533<=x534)&x535)-x536);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MAX;
	volatile int64_t x539 = 8201470338435LL;
	int8_t x540 = INT8_MAX;
	volatile int64_t t127 = 25468187719775222LL;

    t127 = (((x537<=x538)&x539)-x540);

    if (t127 != -126LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x542 = 25503U;
	static int16_t x543 = -3045;
	int64_t t128 = -847993LL;

    t128 = (((x541<=x542)&x543)-x544);

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x546 = INT16_MIN;
	int32_t x548 = 13213044;
	static int32_t t129 = 7975;

    t129 = (((x545<=x546)&x547)-x548);

    if (t129 != -13213043) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x549 = -355LL;
	int64_t x550 = INT64_MIN;
	uint32_t x551 = 361893U;
	static int32_t x552 = 322379;
	uint32_t t130 = 1119032062U;

    t130 = (((x549<=x550)&x551)-x552);

    if (t130 != 4294644917U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = 10165;
	volatile uint64_t x554 = UINT64_MAX;
	int64_t x555 = -935558294LL;
	uint8_t x556 = 42U;

    t131 = (((x553<=x554)&x555)-x556);

    if (t131 != -42LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x557 = 3270100298769937LLU;
	static int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MAX;
	uint64_t x560 = UINT64_MAX;
	static uint64_t t132 = 6514098727964900063LLU;

    t132 = (((x557<=x558)&x559)-x560);

    if (t132 != 2LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x561 = 9U;
	static int8_t x562 = -1;
	uint32_t x564 = 7755U;
	uint32_t t133 = 26987792U;

    t133 = (((x561<=x562)&x563)-x564);

    if (t133 != 4294959541U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x565 = INT32_MIN;
	static int64_t x566 = INT64_MIN;
	static volatile uint64_t x567 = 427392659622917LLU;
	uint16_t x568 = 2273U;
	uint64_t t134 = 5015247712428LLU;

    t134 = (((x565<=x566)&x567)-x568);

    if (t134 != 18446744073709549343LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x569 = INT16_MIN;
	uint8_t x571 = 6U;
	static volatile int64_t x572 = -3LL;
	volatile int64_t t135 = 0LL;

    t135 = (((x569<=x570)&x571)-x572);

    if (t135 != 3LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x573 = 5235976LLU;
	static volatile uint32_t x574 = 55U;
	int16_t x575 = -1;
	uint16_t x576 = 27U;
	int32_t t136 = 369134543;

    t136 = (((x573<=x574)&x575)-x576);

    if (t136 != -27) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x580 = 25U;
	volatile int32_t t137 = -71783;

    t137 = (((x577<=x578)&x579)-x580);

    if (t137 != -24) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x582 = UINT32_MAX;
	int32_t x583 = INT32_MIN;
	int16_t x584 = -650;
	static volatile int32_t t138 = -267594606;

    t138 = (((x581<=x582)&x583)-x584);

    if (t138 != 650) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = INT8_MIN;
	static volatile uint8_t x590 = UINT8_MAX;
	uint16_t x591 = UINT16_MAX;
	volatile uint64_t x592 = 127872698199LLU;
	static uint64_t t139 = 4616811212724026LLU;

    t139 = (((x589<=x590)&x591)-x592);

    if (t139 != 18446743945836853418LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x594 = INT16_MIN;
	volatile int32_t x595 = INT32_MIN;
	static int8_t x596 = -1;
	static int32_t t140 = 385;

    t140 = (((x593<=x594)&x595)-x596);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x598 = 0;
	static int32_t t141 = -97845619;

    t141 = (((x597<=x598)&x599)-x600);

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x601 = 2781U;
	static int64_t x602 = -15328026438LL;
	static int32_t x603 = INT32_MIN;
	uint8_t x604 = 15U;

    t142 = (((x601<=x602)&x603)-x604);

    if (t142 != -15) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x605 = -1;
	int32_t x607 = -1;
	int32_t t143 = 32729919;

    t143 = (((x605<=x606)&x607)-x608);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x609 = INT16_MAX;
	static uint64_t x610 = 33LLU;
	uint8_t x611 = 114U;
	static uint64_t x612 = 109213133630194LLU;
	volatile uint64_t t144 = 18797627134775026LLU;

    t144 = (((x609<=x610)&x611)-x612);

    if (t144 != 18446634860575921422LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x613 = INT8_MIN;
	uint64_t x614 = 25236LLU;
	uint16_t x616 = 18800U;

    t145 = (((x613<=x614)&x615)-x616);

    if (t145 != -18800) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x621 = INT16_MAX;
	uint16_t x622 = 30U;
	int16_t x623 = -1;
	int64_t t146 = -12LL;

    t146 = (((x621<=x622)&x623)-x624);

    if (t146 != 189144526LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x625 = 7199;
	uint32_t x626 = 671175U;
	static int64_t x627 = 882708084248633LL;
	int16_t x628 = INT16_MIN;
	volatile int64_t t147 = 62969LL;

    t147 = (((x625<=x626)&x627)-x628);

    if (t147 != 32769LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x629 = UINT8_MAX;
	uint16_t x632 = 11890U;
	volatile int32_t t148 = 30564;

    t148 = (((x629<=x630)&x631)-x632);

    if (t148 != -11890) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x634 = 6LLU;
	uint16_t x635 = 93U;
	uint8_t x636 = 0U;

    t149 = (((x633<=x634)&x635)-x636);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x637 = INT64_MAX;
	int64_t x638 = INT64_MIN;

    t150 = (((x637<=x638)&x639)-x640);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x641 = -1;
	uint16_t x642 = 1U;
	uint32_t x643 = 25319U;
	int16_t x644 = INT16_MIN;
	static volatile uint32_t t151 = 121175223U;

    t151 = (((x641<=x642)&x643)-x644);

    if (t151 != 32769U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x645 = -1LL;
	volatile int64_t x647 = INT64_MAX;
	int32_t x648 = INT32_MIN;

    t152 = (((x645<=x646)&x647)-x648);

    if (t152 != 2147483648LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x649 = INT8_MAX;
	volatile int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MAX;
	static uint16_t x652 = 15794U;
	volatile int64_t t153 = -1118699527LL;

    t153 = (((x649<=x650)&x651)-x652);

    if (t153 != -15794LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x654 = INT16_MAX;
	int32_t x655 = 90996535;
	int32_t x656 = INT32_MAX;
	static int32_t t154 = 29;

    t154 = (((x653<=x654)&x655)-x656);

    if (t154 != -2147483646) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x657 = 7301U;
	int16_t x659 = INT16_MAX;
	uint32_t x660 = 509U;
	volatile uint32_t t155 = 10673U;

    t155 = (((x657<=x658)&x659)-x660);

    if (t155 != 4294966787U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x661 = 5046375075346130LLU;
	uint16_t x662 = 20U;
	int32_t x663 = 23;

    t156 = (((x661<=x662)&x663)-x664);

    if (t156 != -255) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x667 = UINT64_MAX;
	int8_t x668 = -8;
	volatile uint64_t t157 = 101695LLU;

    t157 = (((x665<=x666)&x667)-x668);

    if (t157 != 8LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x669 = INT32_MAX;
	int32_t x670 = 20243317;
	static volatile int8_t x671 = INT8_MIN;
	static uint8_t x672 = UINT8_MAX;
	int32_t t158 = 0;

    t158 = (((x669<=x670)&x671)-x672);

    if (t158 != -255) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = INT8_MIN;
	uint32_t x675 = UINT32_MAX;
	static int64_t x676 = INT64_MAX;

    t159 = (((x673<=x674)&x675)-x676);

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x677 = 63U;
	int8_t x679 = -1;
	uint32_t x680 = 721469U;
	volatile uint32_t t160 = 19U;

    t160 = (((x677<=x678)&x679)-x680);

    if (t160 != 4294245828U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x681 = 5;
	int8_t x682 = INT8_MAX;
	static int32_t x683 = -1;
	static volatile uint8_t x684 = UINT8_MAX;
	int32_t t161 = 20211788;

    t161 = (((x681<=x682)&x683)-x684);

    if (t161 != -254) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x685 = UINT64_MAX;
	uint64_t x686 = 6043494317095127LLU;
	int64_t x687 = INT64_MAX;
	int32_t x688 = -1;
	volatile int64_t t162 = -10LL;

    t162 = (((x685<=x686)&x687)-x688);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x690 = 174632951473593407LLU;
	int64_t x692 = 40LL;
	int64_t t163 = 4974766LL;

    t163 = (((x689<=x690)&x691)-x692);

    if (t163 != -40LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x693 = UINT8_MAX;
	int32_t x694 = INT32_MIN;
	static uint8_t x695 = UINT8_MAX;
	int16_t x696 = INT16_MIN;
	int32_t t164 = -14150;

    t164 = (((x693<=x694)&x695)-x696);

    if (t164 != 32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x699 = INT16_MIN;
	static uint64_t x700 = 1543571LLU;
	static uint64_t t165 = 6437634684712LLU;

    t165 = (((x697<=x698)&x699)-x700);

    if (t165 != 18446744073708008045LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x701 = 3U;
	volatile int32_t x702 = 114;
	int64_t x703 = INT64_MAX;
	uint16_t x704 = UINT16_MAX;
	int64_t t166 = 396991865035714LL;

    t166 = (((x701<=x702)&x703)-x704);

    if (t166 != -65534LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = INT8_MIN;
	static int8_t x706 = INT8_MAX;
	int64_t x707 = INT64_MIN;
	volatile int32_t x708 = 668;
	volatile int64_t t167 = 430188385693451149LL;

    t167 = (((x705<=x706)&x707)-x708);

    if (t167 != -668LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x709 = 0;
	static int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	int16_t x712 = -1119;
	volatile int64_t t168 = -63393845316LL;

    t168 = (((x709<=x710)&x711)-x712);

    if (t168 != 1119LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x713 = UINT32_MAX;
	volatile uint16_t x714 = 50U;
	volatile uint8_t x715 = UINT8_MAX;
	volatile int32_t t169 = -403118415;

    t169 = (((x713<=x714)&x715)-x716);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = 2225U;
	int8_t x719 = INT8_MAX;
	static volatile uint32_t t170 = 7565U;

    t170 = (((x717<=x718)&x719)-x720);

    if (t170 != 4289952932U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x722 = INT32_MIN;
	volatile int8_t x723 = INT8_MIN;
	volatile uint16_t x724 = UINT16_MAX;
	static volatile int32_t t171 = 8352;

    t171 = (((x721<=x722)&x723)-x724);

    if (t171 != -65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MAX;
	int64_t x731 = 15836445834435LL;
	int8_t x732 = -1;

    t172 = (((x729<=x730)&x731)-x732);

    if (t172 != 2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x733 = 60;
	uint16_t x734 = 8362U;
	int64_t x735 = INT64_MAX;
	int8_t x736 = INT8_MAX;

    t173 = (((x733<=x734)&x735)-x736);

    if (t173 != -126LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = -1;
	volatile int64_t x739 = INT64_MIN;
	volatile int32_t x740 = INT32_MIN;
	int64_t t174 = 4208617775LL;

    t174 = (((x737<=x738)&x739)-x740);

    if (t174 != 2147483648LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x742 = INT32_MIN;
	int8_t x743 = 25;
	volatile int16_t x744 = INT16_MIN;
	static volatile int32_t t175 = -398044;

    t175 = (((x741<=x742)&x743)-x744);

    if (t175 != 32769) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x745 = 6U;
	uint8_t x746 = UINT8_MAX;
	int64_t x747 = INT64_MAX;
	int64_t x748 = -1LL;
	volatile int64_t t176 = 3228341526LL;

    t176 = (((x745<=x746)&x747)-x748);

    if (t176 != 2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x749 = INT64_MIN;
	uint8_t x750 = 1U;
	int8_t x751 = INT8_MAX;
	int8_t x752 = INT8_MAX;
	static volatile int32_t t177 = -840567524;

    t177 = (((x749<=x750)&x751)-x752);

    if (t177 != -126) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x753 = INT32_MIN;
	uint16_t x754 = UINT16_MAX;
	uint8_t x755 = 11U;

    t178 = (((x753<=x754)&x755)-x756);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x757 = 5U;
	static int64_t x758 = INT64_MIN;
	uint16_t x759 = 3340U;
	uint16_t x760 = 2580U;
	volatile int32_t t179 = 516074372;

    t179 = (((x757<=x758)&x759)-x760);

    if (t179 != -2580) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x761 = 0;
	volatile int64_t x762 = -1LL;
	static int16_t x763 = INT16_MAX;
	static int16_t x764 = INT16_MIN;
	int32_t t180 = -2703908;

    t180 = (((x761<=x762)&x763)-x764);

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x765 = 3575U;
	int8_t x766 = 1;
	volatile uint8_t x767 = 12U;
	int64_t x768 = -1LL;

    t181 = (((x765<=x766)&x767)-x768);

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x773 = INT32_MIN;
	static volatile int8_t x774 = INT8_MIN;
	int16_t x776 = INT16_MAX;
	uint32_t t182 = 22U;

    t182 = (((x773<=x774)&x775)-x776);

    if (t182 != 4294934529U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x777 = -5808;
	int32_t x779 = 851;
	volatile uint16_t x780 = 1835U;
	int32_t t183 = 7;

    t183 = (((x777<=x778)&x779)-x780);

    if (t183 != -1835) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x781 = -2191LL;
	uint64_t x782 = UINT64_MAX;
	uint16_t x783 = 1016U;
	volatile int32_t t184 = -118;

    t184 = (((x781<=x782)&x783)-x784);

    if (t184 != -49) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x785 = INT32_MAX;
	static int16_t x786 = INT16_MIN;
	static uint32_t x787 = 42478716U;
	int8_t x788 = INT8_MAX;
	volatile uint32_t t185 = 3596408U;

    t185 = (((x785<=x786)&x787)-x788);

    if (t185 != 4294967169U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x789 = 1323726U;
	static int8_t x790 = -1;
	int16_t x791 = -1759;
	uint32_t x792 = 1U;
	uint32_t t186 = 452655021U;

    t186 = (((x789<=x790)&x791)-x792);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x797 = -1;
	static int16_t x798 = INT16_MIN;
	uint32_t x799 = 32784666U;
	uint64_t x800 = 135746LLU;
	uint64_t t187 = 6LLU;

    t187 = (((x797<=x798)&x799)-x800);

    if (t187 != 18446744073709415870LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x801 = 0U;
	int32_t x802 = INT32_MIN;
	volatile int16_t x804 = -275;
	volatile int64_t t188 = -73340LL;

    t188 = (((x801<=x802)&x803)-x804);

    if (t188 != 275LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x809 = 1472103LLU;
	int8_t x810 = -17;
	int8_t x811 = INT8_MIN;
	volatile int16_t x812 = -1;
	int32_t t189 = -233171;

    t189 = (((x809<=x810)&x811)-x812);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x813 = 125U;
	uint16_t x815 = 1U;
	int8_t x816 = -3;
	int32_t t190 = -7;

    t190 = (((x813<=x814)&x815)-x816);

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x817 = INT16_MIN;
	volatile uint64_t x818 = 7LLU;
	int64_t x819 = INT64_MIN;
	int64_t x820 = 1037098054810102511LL;
	static volatile int64_t t191 = -3856LL;

    t191 = (((x817<=x818)&x819)-x820);

    if (t191 != -1037098054810102511LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x821 = 1;
	int32_t x822 = INT32_MAX;
	uint16_t x824 = 1U;
	volatile int32_t t192 = -680339433;

    t192 = (((x821<=x822)&x823)-x824);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x826 = INT8_MAX;
	int16_t x827 = INT16_MIN;
	int32_t x828 = -1;
	volatile int32_t t193 = -544922518;

    t193 = (((x825<=x826)&x827)-x828);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x831 = INT8_MIN;
	int16_t x832 = INT16_MIN;
	int32_t t194 = -8343764;

    t194 = (((x829<=x830)&x831)-x832);

    if (t194 != 32768) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x837 = -52;
	int32_t x838 = INT32_MIN;
	uint8_t x839 = 52U;
	static int8_t x840 = 0;
	volatile int32_t t195 = 245;

    t195 = (((x837<=x838)&x839)-x840);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x842 = -3875;
	int8_t x843 = -17;
	int8_t x844 = 10;
	static volatile int32_t t196 = 274;

    t196 = (((x841<=x842)&x843)-x844);

    if (t196 != -9) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x853 = -1;
	uint32_t x854 = 23U;
	int8_t x855 = -1;
	uint32_t x856 = 90U;
	uint32_t t197 = 1U;

    t197 = (((x853<=x854)&x855)-x856);

    if (t197 != 4294967206U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x857 = 309U;
	static int32_t x858 = -1;
	int64_t x859 = -529784206971698LL;
	uint16_t x860 = 3393U;
	volatile int64_t t198 = 1657903LL;

    t198 = (((x857<=x858)&x859)-x860);

    if (t198 != -3393LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x861 = 2;
	static uint8_t x862 = 1U;
	uint64_t x863 = 6285764199645LLU;
	volatile uint32_t x864 = 119330U;
	uint64_t t199 = 517987LLU;

    t199 = (((x861<=x862)&x863)-x864);

    if (t199 != 18446744073709432286LLU) { NG(); } else { ; }
	
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

