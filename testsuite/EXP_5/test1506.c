
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

int8_t x1 = INT8_MIN;
int16_t x2 = -1;
volatile int32_t x8 = INT32_MIN;
int64_t x11 = INT64_MIN;
int8_t x14 = -26;
uint16_t x17 = 4U;
static int16_t x20 = INT16_MIN;
uint16_t x21 = 8U;
int32_t x31 = INT32_MIN;
uint32_t x33 = 29486U;
static int64_t x43 = 5723LL;
int64_t x54 = INT64_MIN;
uint16_t x55 = UINT16_MAX;
static uint8_t x61 = 6U;
int32_t x62 = INT32_MIN;
int8_t x71 = -10;
int16_t x77 = INT16_MIN;
uint64_t x78 = 41064679720LLU;
volatile int64_t x79 = 700521843655LL;
int16_t x81 = INT16_MIN;
volatile int32_t x83 = -1;
volatile uint8_t x88 = 1U;
uint32_t x89 = UINT32_MAX;
volatile int32_t t22 = -1536;
volatile int16_t x93 = -1;
int64_t x105 = INT64_MIN;
int64_t x106 = -46572LL;
static volatile int32_t t26 = 237;
uint8_t x110 = UINT8_MAX;
static int32_t t27 = 1;
int8_t x114 = 0;
int64_t x116 = 4395401593443127782LL;
static volatile int32_t t29 = -96;
int16_t x127 = -1;
int32_t x128 = INT32_MIN;
volatile int32_t t32 = 414601072;
int32_t t33 = 1;
static uint8_t x137 = 0U;
volatile int8_t x142 = INT8_MIN;
int32_t t37 = -372;
volatile int32_t x155 = INT32_MIN;
int32_t x163 = 11071;
int8_t x164 = INT8_MAX;
volatile int16_t x165 = INT16_MIN;
volatile int64_t x168 = INT64_MAX;
int32_t t41 = -13331150;
int64_t x169 = INT64_MAX;
int8_t x173 = INT8_MIN;
uint32_t x181 = 8U;
volatile uint8_t x190 = 9U;
volatile int32_t x191 = -1;
volatile int32_t t50 = -1925481;
int16_t x205 = 337;
int32_t t51 = -58607240;
int64_t x209 = -5LL;
uint16_t x211 = 763U;
static int32_t x214 = -254673460;
static int64_t x216 = -4125833035LL;
volatile int64_t x217 = INT64_MIN;
int32_t t55 = 503000760;
uint64_t x225 = 8124285306524669LLU;
volatile uint8_t x226 = UINT8_MAX;
int64_t x228 = -33239370068682523LL;
static int32_t t56 = 171;
int32_t t57 = 0;
int32_t x235 = INT32_MAX;
static int32_t t59 = -102;
uint64_t x250 = 66641510444LLU;
volatile int16_t x251 = -1;
int32_t t62 = 31596;
uint16_t x253 = UINT16_MAX;
static volatile int16_t x271 = 30;
volatile int32_t t67 = 1604;
volatile uint16_t x286 = 0U;
int16_t x293 = INT16_MAX;
static int8_t x300 = INT8_MIN;
int16_t x310 = -1;
uint64_t x313 = 14LLU;
uint8_t x317 = 87U;
uint64_t x318 = 1552723659300LLU;
int32_t t79 = -1;
int16_t x321 = -385;
volatile int32_t x326 = -22;
int32_t x327 = INT32_MIN;
int32_t t81 = -1386;
int32_t t82 = -19703;
uint16_t x341 = UINT16_MAX;
uint32_t x345 = 3789U;
volatile int32_t t86 = -11165;
volatile int8_t x349 = -1;
static int8_t x350 = INT8_MIN;
volatile int32_t t87 = 7;
static volatile int32_t t88 = -52;
int32_t x361 = -1;
uint64_t x365 = 73711532479966152LLU;
static int8_t x369 = 40;
static int64_t x370 = -334526255613LL;
uint32_t x372 = UINT32_MAX;
int32_t t92 = 4692;
uint64_t x375 = UINT64_MAX;
int32_t x382 = INT32_MAX;
int8_t x385 = INT8_MIN;
uint8_t x400 = UINT8_MAX;
volatile int32_t t99 = 12;
int16_t x405 = -75;
static volatile int16_t x408 = INT16_MIN;
uint8_t x410 = 122U;
int8_t x411 = -6;
static int64_t x413 = INT64_MAX;
static int32_t t103 = 3788620;
static int16_t x419 = -1;
volatile int32_t t104 = -5330;
uint64_t x423 = 2520475352253314LLU;
int16_t x429 = INT16_MIN;
int16_t x430 = -1;
uint64_t x437 = UINT64_MAX;
volatile uint64_t x440 = UINT64_MAX;
volatile int8_t x441 = -5;
volatile int64_t x442 = INT64_MAX;
int16_t x443 = INT16_MAX;
volatile uint16_t x445 = 9U;
static int32_t x446 = INT32_MIN;
int64_t x449 = INT64_MIN;
int16_t x451 = INT16_MIN;
volatile int32_t t112 = 169628985;
int8_t x454 = INT8_MIN;
int32_t x464 = 8043;
volatile int16_t x470 = -4;
static int32_t t118 = -47447;
int8_t x483 = INT8_MIN;
volatile int32_t t122 = -2801204;
volatile int64_t x497 = 1LL;
volatile int32_t t124 = -1;
uint64_t x502 = 106707427641343LLU;
static int64_t x506 = INT64_MIN;
int64_t x507 = -4943LL;
volatile int32_t x508 = INT32_MAX;
int32_t t126 = 35;
uint8_t x509 = 37U;
static int32_t t127 = -52727580;
uint8_t x521 = 5U;
int8_t x522 = 4;
volatile int8_t x526 = -1;
int8_t x527 = INT8_MIN;
uint64_t x529 = 76316281LLU;
int16_t x530 = INT16_MAX;
static int8_t x531 = -1;
int32_t x532 = INT32_MIN;
static uint64_t x535 = 1613549383251LLU;
static int32_t t133 = 0;
int16_t x544 = -78;
int16_t x552 = -1;
static int32_t t139 = 424;
volatile int32_t x568 = INT32_MIN;
int32_t t141 = 1;
volatile int16_t x569 = -234;
static volatile int32_t t142 = -36;
int32_t t143 = 2366;
static int32_t t145 = 21988816;
int16_t x588 = 247;
int16_t x591 = INT16_MAX;
int32_t t148 = -619458875;
int64_t x605 = -6868LL;
volatile int32_t x609 = INT32_MIN;
uint64_t x613 = 256361305557LLU;
static volatile uint64_t x614 = UINT64_MAX;
static int8_t x615 = INT8_MAX;
int32_t t153 = -43275;
static int16_t x618 = INT16_MAX;
int64_t x622 = INT64_MAX;
static volatile uint64_t x626 = UINT64_MAX;
int32_t x627 = INT32_MIN;
static int64_t x631 = -40406178756950819LL;
uint32_t x639 = UINT32_MAX;
int64_t x645 = INT64_MAX;
uint8_t x648 = UINT8_MAX;
uint8_t x652 = 7U;
static int16_t x653 = -1;
uint8_t x660 = 6U;
static int32_t t165 = 4946;
int16_t x667 = INT16_MIN;
int8_t x668 = INT8_MIN;
volatile int16_t x669 = 1;
int8_t x681 = -1;
int16_t x684 = INT16_MAX;
static int32_t t170 = 104816;
uint16_t x695 = UINT16_MAX;
volatile int64_t x697 = -1LL;
volatile int8_t x698 = 1;
int16_t x699 = INT16_MIN;
static int16_t x702 = INT16_MIN;
uint64_t x705 = UINT64_MAX;
volatile int32_t t176 = -407;
int8_t x709 = INT8_MIN;
static uint16_t x712 = UINT16_MAX;
volatile int8_t x720 = -2;
volatile int64_t x721 = -2481LL;
uint16_t x724 = UINT16_MAX;
uint32_t x725 = 910333U;
int64_t x732 = -1LL;
int64_t x738 = INT64_MIN;
int16_t x739 = INT16_MAX;
volatile int64_t x741 = INT64_MIN;
static int8_t x748 = -1;
int32_t t186 = -1980304;
uint64_t x749 = UINT64_MAX;
uint32_t x750 = UINT32_MAX;
int16_t x755 = -1;
int32_t t188 = 249457419;
static volatile int32_t t189 = 12;
volatile int32_t t190 = -883669;
volatile uint16_t x775 = 8U;
static volatile int32_t t193 = -110699;
uint32_t x779 = 17869700U;
static volatile int32_t t194 = -1;
static uint64_t x792 = UINT64_MAX;
static volatile int32_t t197 = 77305;
int8_t x797 = -1;
uint32_t x800 = UINT32_MAX;
int32_t t199 = -37519750;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -2221245;

    t0 = (x1==((x2==x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 162;
	int64_t x6 = -1LL;
	uint32_t x7 = 88095U;
	static volatile int32_t t1 = 629235193;

    t1 = (x5==((x6==x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile int64_t x10 = -1790626550312113LL;
	static int8_t x12 = INT8_MIN;
	static int32_t t2 = 330;

    t2 = (x9==((x10==x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint64_t x15 = 9733824853LLU;
	uint32_t x16 = 1647507U;
	volatile int32_t t3 = 450;

    t3 = (x13==((x14==x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -95606934159533LL;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t t4 = 150413;

    t4 = (x17==((x18==x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 56;
	int8_t x23 = 3;
	volatile int64_t x24 = -193479967445211192LL;
	int32_t t5 = -1;

    t5 = (x21==((x22==x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int64_t x26 = INT64_MAX;
	int64_t x27 = 3445976LL;
	volatile int64_t x28 = INT64_MIN;
	static int32_t t6 = 9019205;

    t6 = (x25==((x26==x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x29 = 161269689346932341LLU;
	static uint16_t x30 = UINT16_MAX;
	uint64_t x32 = UINT64_MAX;
	int32_t t7 = -525445466;

    t7 = (x29==((x30==x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	static int64_t x36 = INT64_MIN;
	int32_t t8 = 103;

    t8 = (x33==((x34==x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 52030513451899837LLU;
	static uint64_t x38 = 40272345LLU;
	int64_t x39 = INT64_MIN;
	int32_t x40 = 317;
	volatile int32_t t9 = -454;

    t9 = (x37==((x38==x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 85641567608543774LLU;
	volatile int32_t x42 = -1;
	static int8_t x44 = -1;
	static int32_t t10 = 147820559;

    t10 = (x41==((x42==x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int16_t x46 = -281;
	uint32_t x47 = 80223U;
	uint16_t x48 = 687U;
	volatile int32_t t11 = -62552258;

    t11 = (x45==((x46==x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -3304LL;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = 155;
	uint64_t x52 = 1025LLU;
	volatile int32_t t12 = 933387;

    t12 = (x49==((x50==x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 3429110;

    t13 = (x53==((x54==x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 3479349647885LL;
	static uint16_t x58 = 240U;
	volatile uint32_t x59 = UINT32_MAX;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 47631;

    t14 = (x57==((x58==x59)<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x63 = UINT32_MAX;
	static int8_t x64 = INT8_MIN;
	static int32_t t15 = -1835;

    t15 = (x61==((x62==x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x65 = 121306751995904601LLU;
	static int16_t x66 = INT16_MAX;
	static uint8_t x67 = 5U;
	static volatile int32_t x68 = -54;
	int32_t t16 = -4507;

    t16 = (x65==((x66==x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 1493170529036810LLU;
	volatile int32_t x70 = 568651;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 9291275;

    t17 = (x69==((x70==x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 464002LLU;
	static int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;
	static uint32_t x76 = 55U;
	volatile int32_t t18 = 1;

    t18 = (x73==((x74==x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x80 = 846861621U;
	static int32_t t19 = 25170795;

    t19 = (x77==((x78==x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = -1;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = 12;

    t20 = (x81==((x82==x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 5U;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = 56U;
	static int32_t t21 = 472065;

    t21 = (x85==((x86==x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = 49;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;

    t22 = (x89==((x90==x91)<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x94 = 5U;
	int32_t x95 = 257928;
	static uint32_t x96 = 2115642U;
	volatile int32_t t23 = 1005998;

    t23 = (x93==((x94==x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 471;
	int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = -1;
	int32_t t24 = -116870;

    t24 = (x97==((x98==x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 65U;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 0U;
	volatile int64_t x104 = 989631847LL;
	static int32_t t25 = 44103;

    t25 = (x101==((x102==x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x107 = INT32_MIN;
	uint64_t x108 = 1LLU;

    t26 = (x105==((x106==x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 322;
	int32_t x111 = -30;
	uint32_t x112 = UINT32_MAX;

    t27 = (x109==((x110==x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	int32_t t28 = -280;

    t28 = (x113==((x114==x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	volatile int8_t x119 = -1;
	int8_t x120 = INT8_MIN;

    t29 = (x117==((x118==x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int64_t x122 = -1LL;
	static int32_t x123 = 1794;
	uint32_t x124 = 326U;
	volatile int32_t t30 = 30535179;

    t30 = (x121==((x122==x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -12;
	uint32_t x126 = 5289U;
	volatile int32_t t31 = 99;

    t31 = (x125==((x126==x127)<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -6;
	static volatile int64_t x130 = INT64_MIN;
	volatile uint64_t x131 = 0LLU;
	int64_t x132 = INT64_MIN;

    t32 = (x129==((x130==x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1952U;
	int32_t x134 = 6726;
	uint64_t x135 = UINT64_MAX;
	volatile int16_t x136 = INT16_MIN;

    t33 = (x133==((x134==x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	static uint16_t x139 = 21U;
	static int32_t x140 = -1;
	int32_t t34 = 8214858;

    t34 = (x137==((x138==x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 116U;
	uint8_t x143 = 6U;
	uint32_t x144 = 1157U;
	volatile int32_t t35 = 1894;

    t35 = (x141==((x142==x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 1298241LLU;
	volatile int32_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int32_t x148 = -1;
	volatile int32_t t36 = -733;

    t36 = (x145==((x146==x147)<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x149 = 1;
	uint8_t x150 = 3U;
	int64_t x151 = 1LL;
	uint16_t x152 = UINT16_MAX;

    t37 = (x149==((x150==x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	volatile uint64_t x154 = 9200578LLU;
	int16_t x156 = 1;
	int32_t t38 = 1164;

    t38 = (x153==((x154==x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 2U;
	static int8_t x158 = -48;
	volatile int64_t x159 = INT64_MIN;
	static volatile int8_t x160 = -1;
	volatile int32_t t39 = -5033426;

    t39 = (x157==((x158==x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 29;
	int8_t x162 = INT8_MIN;
	static int32_t t40 = -22924129;

    t40 = (x161==((x162==x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 49U;

    t41 = (x165==((x166==x167)<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MAX;
	int32_t t42 = -17189798;

    t42 = (x169==((x170==x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = -1LL;
	uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 13900751U;
	int32_t t43 = -24745907;

    t43 = (x173==((x174==x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 272U;
	int32_t x178 = INT32_MIN;
	static volatile int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 6;

    t44 = (x177==((x178==x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x182 = UINT64_MAX;
	volatile int16_t x183 = -1;
	int8_t x184 = 22;
	volatile int32_t t45 = 95;

    t45 = (x181==((x182==x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 1;
	int8_t x186 = INT8_MIN;
	volatile int32_t x187 = INT32_MIN;
	uint8_t x188 = 2U;
	int32_t t46 = 0;

    t46 = (x185==((x186==x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 0;
	volatile int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = -186;

    t47 = (x189==((x190==x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -2513229833952LL;
	int16_t x195 = -1;
	volatile uint16_t x196 = 35U;
	volatile int32_t t48 = -10;

    t48 = (x193==((x194==x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 794LLU;
	int32_t x198 = -8;
	uint64_t x199 = 24865LLU;
	static int8_t x200 = -1;
	volatile int32_t t49 = 1044873;

    t49 = (x197==((x198==x199)<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = 390U;
	int64_t x204 = INT64_MIN;

    t50 = (x201==((x202==x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x206 = 3547U;
	int64_t x207 = INT64_MAX;
	int16_t x208 = 1;

    t51 = (x205==((x206==x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = -14;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = 952317;

    t52 = (x209==((x210==x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int64_t x215 = INT64_MIN;
	volatile int32_t t53 = -1;

    t53 = (x213==((x214==x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = INT32_MIN;
	int16_t x219 = 6;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t54 = 13022970;

    t54 = (x217==((x218==x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = 6253;
	volatile uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 481565U;
	int64_t x224 = 11664930314763LL;

    t55 = (x221==((x222==x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x227 = INT16_MIN;

    t56 = (x225==((x226==x227)<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 15824048LLU;
	volatile int16_t x230 = INT16_MAX;
	int8_t x231 = INT8_MIN;
	static int32_t x232 = INT32_MIN;

    t57 = (x229==((x230==x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = 42;
	int8_t x234 = INT8_MIN;
	int64_t x236 = 34581231737750182LL;
	int32_t t58 = -2115402;

    t58 = (x233==((x234==x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MAX;

    t59 = (x237==((x238==x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 86U;
	int16_t x242 = INT16_MAX;
	int64_t x243 = 4426444236081958671LL;
	uint16_t x244 = 15U;
	int32_t t60 = -3;

    t60 = (x241==((x242==x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 5U;
	static int16_t x246 = -1;
	uint16_t x247 = 177U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 15;

    t61 = (x245==((x246==x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 0U;
	int16_t x252 = INT16_MIN;

    t62 = (x249==((x250==x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = INT32_MAX;
	int64_t x255 = -1LL;
	int64_t x256 = -1LL;
	volatile int32_t t63 = 178147300;

    t63 = (x253==((x254==x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = UINT16_MAX;
	int32_t x258 = -195401;
	int16_t x259 = 5;
	volatile int32_t x260 = INT32_MAX;
	int32_t t64 = -137684;

    t64 = (x257==((x258==x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = 6;
	static int16_t x262 = INT16_MAX;
	volatile int8_t x263 = INT8_MIN;
	volatile int8_t x264 = -1;
	volatile int32_t t65 = 600907;

    t65 = (x261==((x262==x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = 145U;
	static int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	int8_t x268 = 4;
	int32_t t66 = 4184154;

    t66 = (x265==((x266==x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	volatile int64_t x270 = -1LL;
	static int32_t x272 = INT32_MAX;

    t67 = (x269==((x270==x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = 3381;
	static volatile int64_t x274 = INT64_MIN;
	static uint16_t x275 = 0U;
	volatile int8_t x276 = INT8_MIN;
	int32_t t68 = 343;

    t68 = (x273==((x274==x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	uint16_t x278 = 2U;
	static uint32_t x279 = UINT32_MAX;
	int64_t x280 = INT64_MAX;
	static int32_t t69 = -136;

    t69 = (x277==((x278==x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 577337LLU;
	volatile uint64_t x282 = UINT64_MAX;
	static volatile uint64_t x283 = 1LLU;
	static int16_t x284 = 3657;
	int32_t t70 = -1;

    t70 = (x281==((x282==x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x285 = 226U;
	static int16_t x287 = INT16_MAX;
	int64_t x288 = 2LL;
	int32_t t71 = 5;

    t71 = (x285==((x286==x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int32_t x290 = INT32_MIN;
	uint32_t x291 = UINT32_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -20;

    t72 = (x289==((x290==x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = 15465013949289LLU;
	int32_t t73 = -2587;

    t73 = (x293==((x294==x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	static uint16_t x298 = 21U;
	int16_t x299 = INT16_MIN;
	int32_t t74 = 12;

    t74 = (x297==((x298==x299)<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	int64_t x302 = -146207LL;
	int32_t x303 = 0;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 75489829;

    t75 = (x301==((x302==x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -4386940153606582LL;
	static volatile int64_t x306 = 285799510803104651LL;
	static uint16_t x307 = UINT16_MAX;
	uint16_t x308 = 9U;
	static int32_t t76 = -85327;

    t76 = (x305==((x306==x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = -1LL;
	int16_t x311 = 0;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = -73;

    t77 = (x309==((x310==x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MAX;
	int32_t x315 = INT32_MIN;
	int64_t x316 = -925133665469987205LL;
	int32_t t78 = -2660;

    t78 = (x313==((x314==x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;

    t79 = (x317==((x318==x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MAX;
	uint32_t x323 = 948988U;
	int16_t x324 = INT16_MIN;
	int32_t t80 = 720;

    t80 = (x321==((x322==x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 777093611108LL;
	uint32_t x328 = 87494U;

    t81 = (x325==((x326==x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = -87745907LL;
	int32_t x331 = -17;
	uint16_t x332 = UINT16_MAX;

    t82 = (x329==((x330==x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	static uint32_t x334 = UINT32_MAX;
	int16_t x335 = -13;
	volatile int32_t x336 = INT32_MIN;
	int32_t t83 = -5710486;

    t83 = (x333==((x334==x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 452534U;
	int16_t x338 = 5;
	int16_t x339 = 318;
	int16_t x340 = 5046;
	static volatile int32_t t84 = 0;

    t84 = (x337==((x338==x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = 4750;
	uint16_t x343 = 6U;
	int64_t x344 = INT64_MAX;
	int32_t t85 = 135759;

    t85 = (x341==((x342==x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	int32_t x348 = 1;

    t86 = (x345==((x346==x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x351 = UINT32_MAX;
	static int32_t x352 = -113;

    t87 = (x349==((x350==x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -66338712997LL;
	static volatile int64_t x354 = INT64_MIN;
	volatile uint64_t x355 = 104831LLU;
	int64_t x356 = INT64_MIN;

    t88 = (x353==((x354==x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	int8_t x358 = -1;
	volatile int32_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	int32_t t89 = -839822454;

    t89 = (x357==((x358==x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x362 = 31648U;
	static uint8_t x363 = 0U;
	int32_t x364 = INT32_MIN;
	int32_t t90 = -633311154;

    t90 = (x361==((x362==x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x366 = -1;
	int16_t x367 = 43;
	int64_t x368 = -394LL;
	int32_t t91 = -4304;

    t91 = (x365==((x366==x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x371 = 102366246934887669LLU;

    t92 = (x369==((x370==x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MIN;
	int64_t x374 = -11988LL;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = -6774;

    t93 = (x373==((x374==x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int8_t x378 = -1;
	int32_t x379 = INT32_MAX;
	uint32_t x380 = 20982U;
	static volatile int32_t t94 = -684773;

    t94 = (x377==((x378==x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	volatile uint16_t x383 = 1U;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t95 = -3702;

    t95 = (x381==((x382==x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	volatile int32_t x388 = INT32_MAX;
	static volatile int32_t t96 = 70846083;

    t96 = (x385==((x386==x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 67LLU;
	static int8_t x390 = 14;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = 1421367U;
	volatile int32_t t97 = -3966;

    t97 = (x389==((x390==x391)<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = -1;
	uint8_t x396 = 2U;
	int32_t t98 = -11400;

    t98 = (x393==((x394==x395)<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint8_t x398 = UINT8_MAX;
	int64_t x399 = -1LL;

    t99 = (x397==((x398==x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 3248531568153419LLU;
	static uint64_t x402 = UINT64_MAX;
	uint8_t x403 = 1U;
	int64_t x404 = -1LL;
	volatile int32_t t100 = 3293;

    t100 = (x401==((x402==x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = 1359957329U;
	uint32_t x407 = 287003U;
	int32_t t101 = 16;

    t101 = (x405==((x406==x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 23U;
	static int32_t x412 = -37;
	volatile int32_t t102 = -28177300;

    t102 = (x409==((x410==x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x414 = 84430U;
	static int16_t x415 = 0;
	uint32_t x416 = UINT32_MAX;

    t103 = (x413==((x414==x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MAX;
	static int16_t x420 = -1;

    t104 = (x417==((x418==x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = -1;
	int8_t x422 = -1;
	uint16_t x424 = 2254U;
	int32_t t105 = 37041;

    t105 = (x421==((x422==x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	static int8_t x426 = -1;
	int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -914083669;

    t106 = (x425==((x426==x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x431 = -297676LL;
	volatile int64_t x432 = -1LL;
	int32_t t107 = -9182;

    t107 = (x429==((x430==x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -568218643246424LL;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	static volatile int64_t x436 = INT64_MAX;
	int32_t t108 = -7047713;

    t108 = (x433==((x434==x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 15504947475205LLU;
	uint32_t x439 = 1217U;
	int32_t t109 = 130;

    t109 = (x437==((x438==x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x444 = 92275U;
	int32_t t110 = -725;

    t110 = (x441==((x442==x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x447 = INT64_MAX;
	static int16_t x448 = -8046;
	int32_t t111 = -3;

    t111 = (x445==((x446==x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x450 = UINT64_MAX;
	uint16_t x452 = 24875U;

    t112 = (x449==((x450==x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 95247;
	uint8_t x455 = 23U;
	int64_t x456 = -285854602398633942LL;
	int32_t t113 = 122045;

    t113 = (x453==((x454==x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -1;
	int8_t x458 = INT8_MIN;
	uint16_t x459 = 1U;
	volatile int64_t x460 = INT64_MIN;
	int32_t t114 = 206496;

    t114 = (x457==((x458==x459)<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 1U;
	int64_t x462 = INT64_MIN;
	volatile int32_t x463 = -102878;
	static int32_t t115 = -1656078;

    t115 = (x461==((x462==x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 470U;
	uint16_t x466 = UINT16_MAX;
	volatile int32_t x467 = 217701;
	static uint32_t x468 = 468722U;
	int32_t t116 = 0;

    t116 = (x465==((x466==x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	uint16_t x471 = UINT16_MAX;
	int64_t x472 = INT64_MIN;
	int32_t t117 = 3612;

    t117 = (x469==((x470==x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	int64_t x474 = 29233LL;
	int64_t x475 = INT64_MIN;
	int32_t x476 = -239667587;

    t118 = (x473==((x474==x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MIN;
	volatile uint64_t x478 = 69654325965330LLU;
	int16_t x479 = -906;
	int32_t x480 = -1;
	int32_t t119 = 3;

    t119 = (x477==((x478==x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	uint64_t x482 = UINT64_MAX;
	int64_t x484 = -1LL;
	static int32_t t120 = -101;

    t120 = (x481==((x482==x483)<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 6U;
	int64_t x486 = INT64_MIN;
	uint32_t x487 = 26937681U;
	static uint64_t x488 = UINT64_MAX;
	int32_t t121 = 1;

    t121 = (x485==((x486==x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = INT32_MIN;
	static uint64_t x490 = 17804LLU;
	static int16_t x491 = INT16_MAX;
	int32_t x492 = INT32_MIN;

    t122 = (x489==((x490==x491)<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MAX;
	volatile int8_t x494 = -1;
	int64_t x495 = -29837981804LL;
	uint32_t x496 = 3U;
	int32_t t123 = 829081;

    t123 = (x493==((x494==x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = INT32_MAX;
	volatile int8_t x499 = -1;
	uint8_t x500 = 30U;

    t124 = (x497==((x498==x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = 33226759LLU;
	volatile uint32_t x503 = UINT32_MAX;
	uint16_t x504 = 8117U;
	int32_t t125 = -153;

    t125 = (x501==((x502==x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;

    t126 = (x505==((x506==x507)<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 62462347U;
	int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;

    t127 = (x509==((x510==x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int64_t x514 = INT64_MAX;
	static int16_t x515 = INT16_MAX;
	int16_t x516 = 3590;
	int32_t t128 = -1;

    t128 = (x513==((x514==x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = 3;
	uint32_t x518 = UINT32_MAX;
	int32_t x519 = -1;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = 56085;

    t129 = (x517==((x518==x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x523 = 301708407LL;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t130 = 24;

    t130 = (x521==((x522==x523)<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 0;
	volatile int16_t x528 = INT16_MAX;
	volatile int32_t t131 = -133969349;

    t131 = (x525==((x526==x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t t132 = -579927;

    t132 = (x529==((x530==x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	static volatile int8_t x534 = 1;
	int32_t x536 = -31284;

    t133 = (x533==((x534==x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = 3182;
	volatile int8_t x538 = -1;
	int8_t x539 = 27;
	static int8_t x540 = INT8_MAX;
	volatile int32_t t134 = -336664301;

    t134 = (x537==((x538==x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -4;
	int8_t x542 = -1;
	int16_t x543 = -1;
	volatile int32_t t135 = -121841925;

    t135 = (x541==((x542==x543)<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	volatile int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MIN;
	volatile uint32_t x548 = 1854443U;
	int32_t t136 = -46000;

    t136 = (x545==((x546==x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 2;
	int32_t x550 = -644559;
	int16_t x551 = INT16_MAX;
	static int32_t t137 = 0;

    t137 = (x549==((x550==x551)<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	int64_t x554 = INT64_MIN;
	uint16_t x555 = UINT16_MAX;
	int64_t x556 = INT64_MAX;
	int32_t t138 = 57;

    t138 = (x553==((x554==x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 75870U;
	volatile int64_t x558 = INT64_MIN;
	int16_t x559 = -60;
	int8_t x560 = INT8_MAX;

    t139 = (x557==((x558==x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x562 = -1104358;
	volatile int8_t x563 = INT8_MIN;
	volatile uint64_t x564 = 5182823898LLU;
	volatile int32_t t140 = -15336;

    t140 = (x561==((x562==x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 54;
	static volatile int8_t x566 = INT8_MAX;
	int64_t x567 = INT64_MAX;

    t141 = (x565==((x566==x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x570 = -18;
	int8_t x571 = INT8_MIN;
	volatile int8_t x572 = -1;

    t142 = (x569==((x570==x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 5424829012724LLU;
	uint64_t x574 = 3LLU;
	int32_t x575 = INT32_MIN;
	uint32_t x576 = UINT32_MAX;

    t143 = (x573==((x574==x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	int32_t x578 = -1;
	volatile int8_t x579 = -1;
	volatile uint16_t x580 = 2U;
	int32_t t144 = 1;

    t144 = (x577==((x578==x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 1U;
	uint32_t x582 = 9498U;
	uint8_t x583 = 0U;
	volatile int32_t x584 = INT32_MIN;

    t145 = (x581==((x582==x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	static int16_t x586 = INT16_MAX;
	int32_t x587 = INT32_MIN;
	volatile int32_t t146 = -8399240;

    t146 = (x585==((x586==x587)<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MIN;
	uint64_t x592 = 5234645540039LLU;
	int32_t t147 = 2;

    t147 = (x589==((x590==x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint64_t x594 = 1LLU;
	static uint16_t x595 = 492U;
	volatile int16_t x596 = 101;

    t148 = (x593==((x594==x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 5481U;
	int32_t x598 = 7742;
	uint8_t x599 = 0U;
	static volatile int8_t x600 = INT8_MIN;
	static int32_t t149 = -677785;

    t149 = (x597==((x598==x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	volatile int64_t x602 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	static volatile int8_t x604 = INT8_MAX;
	volatile int32_t t150 = -9;

    t150 = (x601==((x602==x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x606 = -1;
	static volatile uint16_t x607 = UINT16_MAX;
	int16_t x608 = INT16_MIN;
	int32_t t151 = -1;

    t151 = (x605==((x606==x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -1LL;
	static int16_t x611 = INT16_MIN;
	uint64_t x612 = 55813812569392395LLU;
	volatile int32_t t152 = 15582250;

    t152 = (x609==((x610==x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x616 = 20U;

    t153 = (x613==((x614==x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -3;
	static uint32_t x619 = 295131U;
	static uint32_t x620 = UINT32_MAX;
	int32_t t154 = 21015099;

    t154 = (x617==((x618==x619)<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -2;
	int16_t x623 = -100;
	uint8_t x624 = 2U;
	int32_t t155 = -1503;

    t155 = (x621==((x622==x623)<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -1;
	volatile uint16_t x628 = UINT16_MAX;
	int32_t t156 = -1286;

    t156 = (x625==((x626==x627)<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MAX;
	static uint64_t x630 = 38830LLU;
	uint16_t x632 = 3904U;
	int32_t t157 = 300489;

    t157 = (x629==((x630==x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	uint32_t x634 = UINT32_MAX;
	int16_t x635 = 201;
	static volatile int64_t x636 = INT64_MIN;
	int32_t t158 = -319333702;

    t158 = (x633==((x634==x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x638 = -1LL;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = -4;

    t159 = (x637==((x638==x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -180;
	uint64_t x642 = 1245758337LLU;
	int64_t x643 = -451LL;
	int8_t x644 = 0;
	int32_t t160 = -569063882;

    t160 = (x641==((x642==x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x646 = 7327LLU;
	int16_t x647 = 9813;
	int32_t t161 = -198918;

    t161 = (x645==((x646==x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	int32_t x650 = 335;
	uint64_t x651 = 943093261407634LLU;
	volatile int32_t t162 = 30225;

    t162 = (x649==((x650==x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = -1908;
	static int16_t x655 = 1386;
	int64_t x656 = INT64_MIN;
	int32_t t163 = 182;

    t163 = (x653==((x654==x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = 1;
	volatile int64_t x658 = -4098874355LL;
	uint16_t x659 = UINT16_MAX;
	volatile int32_t t164 = 0;

    t164 = (x657==((x658==x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -1;
	int8_t x662 = -9;
	int64_t x663 = INT64_MAX;
	int64_t x664 = INT64_MIN;

    t165 = (x661==((x662==x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 3607U;
	volatile uint16_t x666 = 2894U;
	int32_t t166 = 1;

    t166 = (x665==((x666==x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = -1LL;
	int16_t x671 = INT16_MAX;
	int8_t x672 = INT8_MAX;
	volatile int32_t t167 = -1533348;

    t167 = (x669==((x670==x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 12U;
	int64_t x674 = -1LL;
	int8_t x675 = INT8_MIN;
	int16_t x676 = -1;
	volatile int32_t t168 = -1075;

    t168 = (x673==((x674==x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -21;
	int8_t x678 = 6;
	int16_t x679 = INT16_MIN;
	static uint16_t x680 = 20U;
	static volatile int32_t t169 = -9;

    t169 = (x677==((x678==x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x682 = 8U;
	uint64_t x683 = UINT64_MAX;

    t170 = (x681==((x682==x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -10962336LL;
	uint16_t x686 = 999U;
	uint8_t x687 = UINT8_MAX;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = 7;

    t171 = (x685==((x686==x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int16_t x690 = -1;
	int32_t x691 = -112470933;
	uint64_t x692 = 28809418LLU;
	int32_t t172 = -4;

    t172 = (x689==((x690==x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	static uint8_t x694 = UINT8_MAX;
	volatile uint32_t x696 = UINT32_MAX;
	static volatile int32_t t173 = -212;

    t173 = (x693==((x694==x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x700 = 1034802284U;
	volatile int32_t t174 = 6607532;

    t174 = (x697==((x698==x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MIN;
	int8_t x703 = INT8_MIN;
	static int16_t x704 = INT16_MIN;
	int32_t t175 = 1873633;

    t175 = (x701==((x702==x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = -128;
	int16_t x707 = INT16_MAX;
	volatile int16_t x708 = -38;

    t176 = (x705==((x706==x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = 35;
	volatile int32_t x711 = INT32_MAX;
	static volatile int32_t t177 = -610085720;

    t177 = (x709==((x710==x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MIN;
	int32_t x714 = INT32_MAX;
	int32_t x715 = -14;
	int32_t x716 = -1;
	int32_t t178 = -90800325;

    t178 = (x713==((x714==x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	uint32_t x718 = 12U;
	uint16_t x719 = 0U;
	int32_t t179 = -30;

    t179 = (x717==((x718==x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = 2404112335LLU;
	volatile int64_t x723 = -1LL;
	volatile int32_t t180 = 296;

    t180 = (x721==((x722==x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x726 = 1LLU;
	int32_t x727 = -418189;
	int32_t x728 = INT32_MIN;
	int32_t t181 = 2;

    t181 = (x725==((x726==x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	static uint64_t x730 = UINT64_MAX;
	int32_t x731 = INT32_MIN;
	int32_t t182 = -3;

    t182 = (x729==((x730==x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -20;
	static volatile uint32_t x734 = 66U;
	uint32_t x735 = 230948216U;
	int64_t x736 = -9032016361415095LL;
	static int32_t t183 = 1331;

    t183 = (x733==((x734==x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	int8_t x740 = -1;
	volatile int32_t t184 = 9;

    t184 = (x737==((x738==x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = -1;
	int16_t x743 = -7;
	static int8_t x744 = INT8_MIN;
	int32_t t185 = 583;

    t185 = (x741==((x742==x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 11;
	int8_t x746 = INT8_MAX;
	int32_t x747 = INT32_MIN;

    t186 = (x745==((x746==x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x751 = 6U;
	int64_t x752 = INT64_MIN;
	int32_t t187 = 116945;

    t187 = (x749==((x750==x751)<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	uint32_t x754 = 486099635U;
	volatile int8_t x756 = INT8_MAX;

    t188 = (x753==((x754==x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 3U;
	int64_t x758 = INT64_MIN;
	static volatile int16_t x759 = INT16_MAX;
	int16_t x760 = INT16_MIN;

    t189 = (x757==((x758==x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x761 = 2U;
	uint8_t x762 = 2U;
	int64_t x763 = INT64_MAX;
	int16_t x764 = INT16_MIN;

    t190 = (x761==((x762==x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	int16_t x766 = INT16_MIN;
	uint8_t x767 = UINT8_MAX;
	static volatile int32_t x768 = -929;
	int32_t t191 = 6806;

    t191 = (x765==((x766==x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -1;
	uint32_t x770 = UINT32_MAX;
	static int32_t x771 = -1;
	int64_t x772 = INT64_MAX;
	int32_t t192 = -379771;

    t192 = (x769==((x770==x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = UINT8_MAX;
	int32_t x774 = 1;
	uint16_t x776 = 3U;

    t193 = (x773==((x774==x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -604;
	int32_t x778 = -459349;
	uint16_t x780 = UINT16_MAX;

    t194 = (x777==((x778==x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	volatile int32_t x782 = -8283;
	volatile int64_t x783 = 3275767346705LL;
	int32_t x784 = INT32_MAX;
	volatile int32_t t195 = -889690;

    t195 = (x781==((x782==x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile uint16_t x786 = 13U;
	uint8_t x787 = UINT8_MAX;
	int64_t x788 = -7948042464009180LL;
	volatile int32_t t196 = -38;

    t196 = (x785==((x786==x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 1;
	static uint8_t x790 = UINT8_MAX;
	int32_t x791 = INT32_MAX;

    t197 = (x789==((x790==x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	static uint32_t x794 = 928688205U;
	static uint32_t x795 = 42U;
	volatile uint16_t x796 = 4067U;
	static volatile int32_t t198 = 448936508;

    t198 = (x793==((x794==x795)<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = 1U;
	static int8_t x799 = INT8_MIN;

    t199 = (x797==((x798==x799)<=x800));

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

