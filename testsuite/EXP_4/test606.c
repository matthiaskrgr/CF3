
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

uint8_t x7 = 49U;
int32_t x16 = INT32_MIN;
int16_t x25 = INT16_MIN;
volatile uint16_t x26 = 924U;
uint16_t x32 = UINT16_MAX;
static volatile uint32_t x34 = 253U;
int64_t x41 = INT64_MIN;
int8_t x46 = 2;
volatile int32_t t10 = -65916;
int16_t x61 = INT16_MIN;
uint64_t t13 = 3990021265234638436LLU;
static int64_t x71 = INT64_MAX;
int8_t x75 = INT8_MAX;
uint64_t t16 = 6470347749LLU;
volatile int64_t x79 = INT64_MIN;
int32_t x81 = -1;
volatile int32_t t18 = 87;
int16_t x94 = 696;
int8_t x96 = INT8_MIN;
volatile int32_t t21 = 1446154;
volatile int64_t x103 = -47218900002328343LL;
static int64_t t23 = 6369943369580592LL;
volatile uint32_t t25 = 15137936U;
int8_t x118 = -1;
uint64_t t27 = 45275879LLU;
uint32_t x125 = 1582U;
int16_t x129 = -1;
int32_t x135 = -43;
static volatile uint16_t x139 = 901U;
int16_t x143 = INT16_MIN;
int16_t x148 = INT16_MIN;
static int32_t x155 = -1;
volatile uint16_t x159 = 85U;
volatile uint32_t t38 = 38U;
int8_t x169 = -1;
uint64_t x175 = UINT64_MAX;
volatile uint64_t t41 = 0LLU;
uint64_t x180 = UINT64_MAX;
volatile uint32_t x188 = UINT32_MAX;
uint16_t x189 = UINT16_MAX;
volatile int32_t x195 = 9831989;
uint64_t t47 = 1610138LLU;
int8_t x210 = 8;
static volatile int64_t t49 = 1449780294LL;
uint64_t t50 = 3865362261225115LLU;
static uint64_t t51 = 12277019501LLU;
int64_t t52 = 2581359797LL;
int64_t x234 = -59145131975LL;
volatile int8_t x236 = INT8_MIN;
static uint32_t x238 = 4U;
int16_t x239 = INT16_MIN;
int16_t x240 = -1;
int64_t x242 = INT64_MIN;
static int16_t x248 = INT16_MIN;
int32_t x249 = INT32_MAX;
uint8_t x255 = UINT8_MAX;
static int8_t x258 = 56;
int64_t x262 = INT64_MAX;
uint64_t x266 = 76810170507LLU;
int32_t x273 = INT32_MIN;
int32_t x284 = -1;
static uint64_t x286 = UINT64_MAX;
int64_t x296 = INT64_MAX;
static int16_t x299 = INT16_MIN;
int64_t x302 = INT64_MIN;
static int16_t x308 = INT16_MAX;
int64_t x309 = -111585391138512LL;
static int16_t x319 = INT16_MIN;
static int64_t t77 = -33252457359324LL;
int64_t x329 = INT64_MIN;
static volatile int64_t t79 = 876081591528475LL;
volatile int8_t x340 = INT8_MIN;
uint8_t x341 = UINT8_MAX;
volatile uint8_t x346 = 38U;
int32_t x351 = 0;
int32_t x353 = INT32_MIN;
uint64_t x354 = UINT64_MAX;
int8_t x355 = -1;
int32_t x357 = INT32_MIN;
uint16_t x358 = 3U;
volatile uint64_t x359 = 6925406434873LLU;
int8_t x360 = INT8_MIN;
volatile uint64_t t85 = 110480LLU;
int64_t x363 = -1LL;
volatile int64_t x369 = INT64_MAX;
volatile int64_t t88 = -254271042LL;
static volatile uint16_t x373 = 5U;
static int64_t x376 = -1569146001LL;
int64_t x384 = 1296LL;
uint32_t x385 = UINT32_MAX;
int16_t x395 = INT16_MIN;
static int32_t x398 = -1;
volatile int32_t t93 = -19;
int8_t x407 = INT8_MAX;
int8_t x409 = INT8_MIN;
static int16_t x414 = INT16_MAX;
int8_t x417 = -61;
int32_t x427 = -1;
int32_t x441 = INT32_MIN;
int16_t x454 = -1;
volatile int64_t t105 = 1356567418LL;
int64_t t107 = 88328639294103LL;
int64_t x471 = INT64_MAX;
static int64_t x476 = INT64_MIN;
int16_t x486 = -1;
static int64_t x488 = -144LL;
uint32_t x492 = 1334078138U;
uint64_t t113 = 16857617330LLU;
uint32_t x494 = 2075443701U;
int64_t t114 = 958LL;
int32_t x497 = INT32_MIN;
volatile int64_t x499 = 21LL;
uint8_t x501 = 6U;
volatile int64_t x503 = 35LL;
int8_t x508 = INT8_MIN;
uint16_t x513 = 3U;
int32_t x522 = INT32_MIN;
int32_t x523 = -89458561;
volatile int32_t t120 = 10374;
int16_t x529 = INT16_MAX;
int16_t x539 = -23;
uint16_t x547 = 2889U;
int64_t x548 = 927780LL;
static int8_t x551 = INT8_MIN;
uint16_t x557 = UINT16_MAX;
int8_t x558 = INT8_MAX;
int32_t t131 = -13761517;
int64_t x571 = INT64_MIN;
uint64_t t134 = 170LLU;
uint16_t x589 = 6919U;
uint16_t x590 = 27U;
volatile uint64_t x593 = UINT64_MAX;
volatile int16_t x598 = INT16_MIN;
uint16_t x599 = UINT16_MAX;
int8_t x602 = -28;
static int8_t x606 = INT8_MIN;
static uint8_t x610 = 66U;
int8_t x616 = -62;
static volatile int16_t x618 = 448;
uint16_t x619 = 1U;
static volatile int32_t x621 = INT32_MAX;
int32_t x626 = INT32_MAX;
int64_t x642 = INT64_MIN;
int32_t x644 = -1;
volatile uint64_t t146 = 2165186896LLU;
uint32_t x653 = 110094839U;
volatile uint32_t t148 = 297005U;
uint32_t x660 = UINT32_MAX;
uint32_t t149 = 3501U;
volatile uint32_t t150 = 10U;
uint16_t x665 = 143U;
int16_t x667 = INT16_MIN;
int8_t x681 = INT8_MIN;
uint32_t x683 = UINT32_MAX;
int16_t x684 = -1;
uint32_t x688 = 458955U;
int8_t x693 = -1;
static volatile uint64_t t158 = 3418330LLU;
int8_t x699 = -1;
static int16_t x701 = -6288;
static int8_t x702 = INT8_MAX;
int32_t x704 = INT32_MAX;
uint32_t x707 = 795120U;
static int64_t x709 = INT64_MIN;
uint8_t x716 = UINT8_MAX;
int32_t x717 = -125;
int32_t x720 = INT32_MIN;
int64_t x735 = 8331994LL;
int64_t t167 = -4376992996848977445LL;
int32_t x739 = -103550;
static int64_t x742 = 211LL;
int64_t t170 = 3777716LL;
int16_t x750 = INT16_MIN;
volatile uint32_t t171 = 1237385092U;
static int8_t x755 = INT8_MIN;
int64_t x757 = INT64_MIN;
int64_t x758 = 19997LL;
int32_t x759 = -2;
static int8_t x765 = -1;
volatile int16_t x769 = -4411;
int64_t x771 = -90LL;
int32_t x773 = INT32_MIN;
int8_t x774 = -1;
static int8_t x775 = 42;
volatile uint64_t t178 = 24059LLU;
uint16_t x782 = 7043U;
static volatile uint32_t x792 = 13977U;
volatile int32_t x804 = 507;
volatile int64_t x807 = INT64_MIN;
volatile uint64_t t185 = 1LLU;
volatile int16_t x817 = -1;
volatile uint8_t x818 = 6U;
uint32_t x821 = UINT32_MAX;
uint32_t x822 = 239513U;
uint32_t t189 = 502929U;
volatile int32_t t190 = -31;
int64_t x832 = -10775758277LL;
static int8_t x842 = 0;
volatile uint64_t t194 = 5492LLU;
int16_t x846 = INT16_MAX;
int8_t x847 = INT8_MIN;
uint8_t x854 = 1U;
int8_t x865 = INT8_MIN;
volatile uint32_t t199 = 2970U;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	volatile int8_t x3 = -1;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -27;

    t0 = (x1/(x2-(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint8_t x6 = 8U;
	int32_t x8 = -33095743;
	int64_t t1 = 240539474256118LL;

    t1 = (x5/(x6-(x7/x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	static uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	uint64_t t2 = 29633744LLU;

    t2 = (x13/(x14-(x15/x16)));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = -894;
	int8_t x18 = -38;
	uint32_t x19 = 1U;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 31027706LL;

    t3 = (x17/(x18-(x19/x20)));

    if (t3 != 23LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = INT32_MAX;
	static uint8_t x22 = 9U;
	static int32_t x23 = -2896437;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 102088;

    t4 = (x21/(x22-(x23/x24)));

    if (t4 != -27183337) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x27 = INT32_MIN;
	int8_t x28 = 6;
	volatile int32_t t5 = 27074;

    t5 = (x25/(x26-(x27/x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 14LL;
	int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MIN;
	int64_t t6 = -2828644516218309329LL;

    t6 = (x29/(x30-(x31/x32)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = INT32_MIN;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 1301278855861LLU;
	static volatile uint64_t t7 = 13317LLU;

    t7 = (x33/(x34-(x35/x36)));

    if (t7 != 72912031903407383LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x42 = INT32_MIN;
	static uint8_t x43 = 56U;
	static volatile int32_t x44 = INT32_MIN;
	int64_t t8 = 17349476107716LL;

    t8 = (x41/(x42-(x43/x44)));

    if (t8 != 4294967296LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 1101U;
	static int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	static volatile uint32_t t9 = 93U;

    t9 = (x45/(x46-(x47/x48)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	static int8_t x50 = INT8_MIN;
	volatile int32_t x51 = INT32_MAX;
	int16_t x52 = -3;

    t10 = (x49/(x50-(x51/x52)));

    if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MIN;
	uint16_t x54 = 2652U;
	int32_t x55 = -22725;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t11 = -14129;

    t11 = (x53/(x54-(x55/x56)));

    if (t11 != -809760) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 3720292420540719416LLU;
	int16_t x58 = -1;
	int8_t x59 = INT8_MAX;
	volatile int64_t x60 = 16412113675693660LL;
	volatile uint64_t t12 = 1669759058004595LLU;

    t12 = (x57/(x58-(x59/x60)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x62 = -1LL;
	uint64_t x63 = 866LLU;
	int16_t x64 = -1;

    t13 = (x61/(x62-(x63/x64)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = UINT8_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = 2405523;
	uint16_t x68 = 7005U;
	uint64_t t14 = 807143524023897LLU;

    t14 = (x65/(x66-(x67/x68)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	static int16_t x70 = INT16_MAX;
	static int32_t x72 = INT32_MAX;
	int64_t t15 = -44182398628LL;

    t15 = (x69/(x70-(x71/x72)));

    if (t15 != -2147500030LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x73 = INT8_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile int64_t x76 = -24570299098746LL;

    t16 = (x73/(x74-(x75/x76)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -6;
	uint8_t x78 = 6U;
	int64_t x80 = INT64_MIN;
	int64_t t17 = -459258994LL;

    t17 = (x77/(x78-(x79/x80)));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x82 = INT16_MAX;
	uint8_t x83 = 103U;
	int8_t x84 = INT8_MIN;

    t18 = (x81/(x82-(x83/x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MAX;
	uint32_t x86 = 917000U;
	uint32_t x87 = 66715U;
	static uint8_t x88 = UINT8_MAX;
	volatile uint32_t t19 = 0U;

    t19 = (x85/(x86-(x87/x88)));

    if (t19 != 2342U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint8_t x90 = 24U;
	static volatile int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 2409074;

    t20 = (x89/(x90-(x91/x92)));

    if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = UINT8_MAX;
	uint16_t x95 = 7655U;

    t21 = (x93/(x94-(x95/x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	int16_t x99 = -1;
	int32_t x100 = 205;
	int32_t t22 = 12;

    t22 = (x97/(x98-(x99/x100)));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = UINT32_MAX;
	static uint32_t x102 = UINT32_MAX;
	int8_t x104 = -1;

    t23 = (x101/(x102-(x103/x104)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -35393917LL;
	int32_t x106 = INT32_MAX;
	static volatile int16_t x107 = INT16_MIN;
	int32_t x108 = 1005363;
	volatile int64_t t24 = -229053970107LL;

    t24 = (x105/(x106-(x107/x108)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x109 = UINT16_MAX;
	volatile uint32_t x110 = 91U;
	int16_t x111 = INT16_MIN;
	static volatile int16_t x112 = 48;

    t25 = (x109/(x110-(x111/x112)));

    if (t25 != 84U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = 27797244496LL;
	int8_t x114 = INT8_MAX;
	int8_t x115 = -1;
	volatile uint64_t x116 = 417514392510775016LLU;
	uint64_t t26 = 861LLU;

    t26 = (x113/(x114-(x115/x116)));

    if (t26 != 334906560LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 3249441LLU;
	int64_t x119 = -3894076LL;
	uint32_t x120 = UINT32_MAX;

    t27 = (x117/(x118-(x119/x120)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	static uint64_t x122 = 20905394LLU;
	volatile int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	uint64_t t28 = 295499998844705718LLU;

    t28 = (x121/(x122-(x123/x124)));

    if (t28 != 882391600641LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -57;
	static int8_t x128 = -29;
	static uint32_t t29 = 11U;

    t29 = (x125/(x126-(x127/x128)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x130 = 58U;
	volatile uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t30 = -827;

    t30 = (x129/(x130-(x131/x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MAX;
	uint8_t x134 = 87U;
	uint32_t x136 = 3802641U;
	uint32_t t31 = 1U;

    t31 = (x133/(x134-(x135/x136)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = -214630991;
	volatile uint16_t x138 = 23U;
	uint32_t x140 = UINT32_MAX;
	uint32_t t32 = 28U;

    t32 = (x137/(x138-(x139/x140)));

    if (t32 != 177405926U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x141 = -1;
	int8_t x142 = INT8_MIN;
	int32_t x144 = -84;
	int32_t t33 = 90524146;

    t33 = (x141/(x142-(x143/x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -1LL;
	volatile uint8_t x146 = 23U;
	uint64_t x147 = 7LLU;
	volatile uint64_t t34 = 1LLU;

    t34 = (x145/(x146-(x147/x148)));

    if (t34 != 802032351030850070LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	uint64_t x151 = 2297564830881LLU;
	volatile int32_t x152 = 30;
	uint64_t t35 = 1094957234720LLU;

    t35 = (x149/(x150-(x151/x152)));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x153 = INT32_MAX;
	volatile int32_t x154 = -6847;
	int8_t x156 = INT8_MAX;
	int32_t t36 = -5357;

    t36 = (x153/(x154-(x155/x156)));

    if (t36 != -313638) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MAX;
	int64_t x158 = -4002LL;
	static uint32_t x160 = 1275052513U;
	volatile int64_t t37 = -37570683144893LL;

    t37 = (x157/(x158-(x159/x160)));

    if (t37 != -2304690663881753LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	static int8_t x162 = -28;
	int8_t x163 = INT8_MAX;
	volatile int32_t x164 = 1;

    t38 = (x161/(x162-(x163/x164)));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	static uint64_t x166 = UINT64_MAX;
	int8_t x167 = 27;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t39 = 24272061LLU;

    t39 = (x165/(x166-(x167/x168)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x170 = -8268;
	int8_t x171 = INT8_MIN;
	int64_t x172 = 15299LL;
	volatile int64_t t40 = 3269LL;

    t40 = (x169/(x170-(x171/x172)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -458403322;
	int32_t x174 = INT32_MAX;
	int8_t x176 = INT8_MIN;

    t41 = (x173/(x174-(x175/x176)));

    if (t41 != 8589934599LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile uint32_t x179 = 119891U;
	static uint64_t t42 = 13709168280586794LLU;

    t42 = (x177/(x178-(x179/x180)));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = 4202369581LLU;
	uint32_t x186 = 1U;
	static uint32_t x187 = 60194236U;
	volatile uint64_t t43 = 29382694LLU;

    t43 = (x185/(x186-(x187/x188)));

    if (t43 != 4202369581LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x190 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MAX;
	uint32_t t44 = 42U;

    t44 = (x189/(x190-(x191/x192)));

    if (t44 != 255U) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint64_t x193 = 13811546373LLU;
	int16_t x194 = -3;
	uint8_t x196 = 1U;
	uint64_t t45 = 9575434463832LLU;

    t45 = (x193/(x194-(x195/x196)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x197 = 10757775LLU;
	volatile int16_t x198 = 13955;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t46 = 18812918047LLU;

    t46 = (x197/(x198-(x199/x200)));

    if (t46 != 785LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x201 = 6713LLU;
	volatile int64_t x202 = INT64_MAX;
	static int16_t x203 = 103;
	uint64_t x204 = UINT64_MAX;

    t47 = (x201/(x202-(x203/x204)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = -1;
	static int16_t x206 = INT16_MAX;
	uint16_t x207 = 479U;
	int16_t x208 = INT16_MIN;
	int32_t t48 = -20142;

    t48 = (x205/(x206-(x207/x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = -18;
	static int8_t x211 = -1;
	volatile int64_t x212 = -1LL;

    t49 = (x209/(x210-(x211/x212)));

    if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x213 = 13108387LL;
	volatile uint64_t x214 = 251783671324LLU;
	static int16_t x215 = INT16_MAX;
	volatile uint16_t x216 = 53U;

    t50 = (x213/(x214-(x215/x216)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x217 = INT64_MIN;
	uint32_t x218 = UINT32_MAX;
	uint8_t x219 = 3U;
	uint64_t x220 = UINT64_MAX;

    t51 = (x217/(x218-(x219/x220)));

    if (t51 != 2147483648LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x221 = INT16_MAX;
	static int16_t x222 = 86;
	int16_t x223 = 78;
	volatile int64_t x224 = -454LL;

    t52 = (x221/(x222-(x223/x224)));

    if (t52 != 381LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = 1U;
	volatile int64_t x226 = INT64_MAX;
	volatile int16_t x227 = INT16_MIN;
	volatile uint32_t x228 = 1U;
	volatile int64_t t53 = 286881609004953516LL;

    t53 = (x225/(x226-(x227/x228)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x229 = 0;
	int32_t x230 = INT32_MIN;
	int8_t x231 = 47;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t54 = 3713055078LLU;

    t54 = (x229/(x230-(x231/x232)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x233 = UINT64_MAX;
	int8_t x235 = -1;
	volatile uint64_t t55 = 432106194816LLU;

    t55 = (x233/(x234-(x235/x236)));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x237 = 5101512806LLU;
	static volatile uint64_t t56 = 16730353302523LLU;

    t56 = (x237/(x238-(x239/x240)));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x241 = 2330LLU;
	uint8_t x243 = 13U;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t57 = 845LLU;

    t57 = (x241/(x242-(x243/x244)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = INT16_MIN;
	static volatile uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	volatile int32_t t58 = -4789378;

    t58 = (x245/(x246-(x247/x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x250 = 1U;
	int8_t x251 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t59 = INT32_MAX;

    t59 = (x249/(x250-(x251/x252)));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x253 = UINT64_MAX;
	static uint8_t x254 = 26U;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t60 = 214497996LLU;

    t60 = (x253/(x254-(x255/x256)));

    if (t60 != 709490156681136600LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	volatile int32_t x259 = INT32_MAX;
	static volatile uint16_t x260 = 17U;
	volatile int32_t t61 = -236;

    t61 = (x257/(x258-(x259/x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x261 = INT64_MAX;
	volatile uint16_t x263 = 1U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t62 = 1414LL;

    t62 = (x261/(x262-(x263/x264)));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x265 = -2;
	int8_t x267 = 1;
	uint64_t x268 = 37586549338100199LLU;
	volatile uint64_t t63 = 28017163141832LLU;

    t63 = (x265/(x266-(x267/x268)));

    if (t63 != 240160176LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	int64_t x270 = 3LL;
	uint64_t x271 = 16347305095LLU;
	static int64_t x272 = -1LL;
	uint64_t t64 = 15LLU;

    t64 = (x269/(x270-(x271/x272)));

    if (t64 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x274 = 2640U;
	int16_t x275 = -1;
	volatile int8_t x276 = -16;
	volatile uint32_t t65 = 9U;

    t65 = (x273/(x274-(x275/x276)));

    if (t65 != 813440U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x277 = 0;
	static uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 1278945428U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t66 = 5079893305288488648LLU;

    t66 = (x277/(x278-(x279/x280)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = INT32_MAX;
	static volatile int64_t x282 = -1LL;
	int32_t x283 = 65;
	static int64_t t67 = -12904651990175381LL;

    t67 = (x281/(x282-(x283/x284)));

    if (t67 != 33554431LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MAX;
	int64_t x287 = -1LL;
	static uint8_t x288 = UINT8_MAX;
	static volatile uint64_t t68 = 68001456490LLU;

    t68 = (x285/(x286-(x287/x288)));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = -1;
	int8_t x290 = -1;
	int32_t x291 = -165881959;
	uint32_t x292 = 22074U;
	uint32_t t69 = 57483U;

    t69 = (x289/(x290-(x291/x292)));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MAX;
	static int16_t x295 = 5509;
	volatile uint64_t t70 = 469000846093LLU;

    t70 = (x293/(x294-(x295/x296)));

    if (t70 != 8589934596LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	volatile int32_t x300 = INT32_MAX;
	volatile int64_t t71 = -5323LL;

    t71 = (x297/(x298-(x299/x300)));

    if (t71 != 128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x301 = 106U;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	volatile int64_t t72 = -22732792LL;

    t72 = (x301/(x302-(x303/x304)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x305 = INT64_MAX;
	volatile int16_t x306 = INT16_MIN;
	uint8_t x307 = 21U;
	static int64_t t73 = 3023266269LL;

    t73 = (x305/(x306-(x307/x308)));

    if (t73 != -281474976710655LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x310 = 3;
	uint64_t x311 = 3LLU;
	static volatile int32_t x312 = INT32_MAX;
	uint64_t t74 = 45305680954718LLU;

    t74 = (x309/(x310-(x311/x312)));

    if (t74 != 6148877496106137701LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -1;
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	int8_t x316 = INT8_MAX;
	int64_t t75 = -239844315708428LL;

    t75 = (x313/(x314-(x315/x316)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = -1;
	volatile uint16_t x318 = UINT16_MAX;
	volatile uint16_t x320 = 10U;
	volatile int32_t t76 = -749510;

    t76 = (x317/(x318-(x319/x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x321 = -1;
	static volatile int64_t x322 = INT64_MIN;
	int16_t x323 = 8219;
	int8_t x324 = -1;

    t77 = (x321/(x322-(x323/x324)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = INT32_MIN;
	static uint64_t x326 = 13237LLU;
	static uint32_t x327 = 13662U;
	uint64_t x328 = 1LLU;
	volatile uint64_t t78 = 563515LLU;

    t78 = (x325/(x326-(x327/x328)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x330 = 1748LL;
	int16_t x331 = 30;
	static int8_t x332 = -1;

    t79 = (x329/(x330-(x331/x332)));

    if (t79 != -5187498333439131LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x337 = -1LL;
	volatile int8_t x338 = -1;
	int8_t x339 = 2;
	volatile int64_t t80 = -1LL;

    t80 = (x337/(x338-(x339/x340)));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x342 = INT8_MAX;
	int64_t x343 = 49065074951LL;
	volatile int32_t x344 = INT32_MIN;
	int64_t t81 = -71428879LL;

    t81 = (x341/(x342-(x343/x344)));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = -53893022;
	static int64_t x347 = INT64_MIN;
	volatile uint64_t x348 = 73LLU;
	uint64_t t82 = 808374LLU;

    t82 = (x345/(x346-(x347/x348)));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = 1LL;
	int64_t x350 = -1LL;
	static volatile int32_t x352 = -8206269;
	int64_t t83 = -1118301325LL;

    t83 = (x349/(x350-(x351/x352)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x356 = INT16_MIN;
	volatile uint64_t t84 = 39140095156512LLU;

    t84 = (x353/(x354-(x355/x356)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    

    t85 = (x357/(x358-(x359/x360)));

    if (t85 != 6148914690520689322LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	uint16_t x364 = 11831U;
	volatile int64_t t86 = -667049LL;

    t86 = (x361/(x362-(x363/x364)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x365 = UINT32_MAX;
	volatile int32_t x366 = 9131;
	static uint8_t x367 = 114U;
	int16_t x368 = 7460;
	uint32_t t87 = 1162U;

    t87 = (x365/(x366-(x367/x368)));

    if (t87 != 470372U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x370 = 30U;
	int16_t x371 = -1237;
	static uint8_t x372 = 47U;

    t88 = (x369/(x370-(x371/x372)));

    if (t88 != 164703072086692425LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x374 = INT64_MAX;
	volatile int8_t x375 = INT8_MIN;
	static volatile int64_t t89 = 0LL;

    t89 = (x373/(x374-(x375/x376)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	int8_t x383 = 0;
	int64_t t90 = 485610623714089103LL;

    t90 = (x381/(x382-(x383/x384)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x386 = UINT8_MAX;
	static int8_t x387 = INT8_MIN;
	volatile int8_t x388 = INT8_MIN;
	uint32_t t91 = 12997U;

    t91 = (x385/(x386-(x387/x388)));

    if (t91 != 16909320U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x393 = INT32_MAX;
	uint16_t x394 = 1U;
	int64_t x396 = 635115191489219527LL;
	int64_t t92 = 69422849446LL;

    t92 = (x393/(x394-(x395/x396)));

    if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x397 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	static int16_t x400 = INT16_MAX;

    t93 = (x397/(x398-(x399/x400)));

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x401 = 900998351582927LLU;
	int32_t x402 = 36;
	static volatile int16_t x403 = 11;
	volatile uint16_t x404 = UINT16_MAX;
	uint64_t t94 = 451750LLU;

    t94 = (x401/(x402-(x403/x404)));

    if (t94 != 25027731988414LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x405 = INT16_MAX;
	int32_t x406 = -650;
	int16_t x408 = -3988;
	volatile int32_t t95 = 308903;

    t95 = (x405/(x406-(x407/x408)));

    if (t95 != -50) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = -1;
	uint8_t x412 = UINT8_MAX;
	int32_t t96 = -22;

    t96 = (x409/(x410-(x411/x412)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x413 = 4U;
	static int16_t x415 = 0;
	int32_t x416 = INT32_MAX;
	volatile int32_t t97 = -262717975;

    t97 = (x413/(x414-(x415/x416)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x418 = 24;
	int32_t x419 = -1;
	int8_t x420 = 4;
	volatile int32_t t98 = 2162;

    t98 = (x417/(x418-(x419/x420)));

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x425 = 1603U;
	static int64_t x426 = -2783LL;
	int64_t x428 = 473383808058LL;
	int64_t t99 = 9207242779456LL;

    t99 = (x425/(x426-(x427/x428)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x429 = INT64_MIN;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = -48;
	int64_t x432 = -1LL;
	uint64_t t100 = 7882234LLU;

    t100 = (x429/(x430-(x431/x432)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = -1;
	static uint32_t x434 = 1133U;
	static uint16_t x435 = 135U;
	volatile uint8_t x436 = 10U;
	uint32_t t101 = 2U;

    t101 = (x433/(x434-(x435/x436)));

    if (t101 != 3834792U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = 56U;
	volatile int32_t t102 = 79;

    t102 = (x437/(x438-(x439/x440)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	uint64_t x444 = 65504800532335LLU;
	uint64_t t103 = 15731681LLU;

    t103 = (x441/(x442-(x443/x444)));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint64_t x450 = 5LLU;
	uint32_t x451 = 26U;
	int8_t x452 = INT8_MIN;
	uint64_t t104 = 0LLU;

    t104 = (x449/(x450-(x451/x452)));

    if (t104 != 3689348814741910297LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = INT32_MIN;
	static int64_t x455 = -2296270LL;
	int16_t x456 = INT16_MIN;

    t105 = (x453/(x454-(x455/x456)));

    if (t105 != 30246248LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x457 = UINT8_MAX;
	int32_t x458 = -1;
	int64_t x459 = 2957555912277LL;
	int64_t x460 = INT64_MIN;
	volatile int64_t t106 = -1016920362495112LL;

    t106 = (x457/(x458-(x459/x460)));

    if (t106 != -255LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x461 = -9;
	volatile uint8_t x462 = 13U;
	uint16_t x463 = 0U;
	int64_t x464 = INT64_MIN;

    t107 = (x461/(x462-(x463/x464)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x469 = 2U;
	static volatile uint16_t x470 = 6U;
	static uint32_t x472 = 1U;
	static int64_t t108 = 474LL;

    t108 = (x469/(x470-(x471/x472)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	int8_t x474 = INT8_MAX;
	uint16_t x475 = 14919U;
	uint64_t t109 = 1LLU;

    t109 = (x473/(x474-(x475/x476)));

    if (t109 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint8_t x478 = 60U;
	int64_t x479 = -112280406220LL;
	int32_t x480 = -1;
	volatile uint64_t t110 = 489675590958LLU;

    t110 = (x477/(x478-(x479/x480)));

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x481 = -1;
	int16_t x482 = INT16_MAX;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;
	int32_t t111 = 127136815;

    t111 = (x481/(x482-(x483/x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x485 = 25U;
	static int8_t x487 = INT8_MAX;
	static volatile int64_t t112 = -1121606LL;

    t112 = (x485/(x486-(x487/x488)));

    if (t112 != -25LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x489 = 18416958766532685LLU;
	int8_t x490 = INT8_MIN;
	static uint16_t x491 = 81U;

    t113 = (x489/(x490-(x491/x492)));

    if (t113 != 4288032LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x493 = -328;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MAX;

    t114 = (x493/(x494-(x495/x496)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x498 = UINT32_MAX;
	int16_t x500 = INT16_MAX;
	volatile int64_t t115 = -529341043297166LL;

    t115 = (x497/(x498-(x499/x500)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x502 = INT8_MAX;
	int16_t x504 = -1;
	int64_t t116 = 244912113LL;

    t116 = (x501/(x502-(x503/x504)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = -1;
	static int32_t x506 = 112939537;
	uint16_t x507 = UINT16_MAX;
	int32_t t117 = 478;

    t117 = (x505/(x506-(x507/x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x514 = -1;
	static uint32_t x515 = 2U;
	static int32_t x516 = -1;
	uint32_t t118 = 1803U;

    t118 = (x513/(x514-(x515/x516)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x517 = 6U;
	uint16_t x518 = 1U;
	int64_t x519 = -1374566859LL;
	uint8_t x520 = UINT8_MAX;
	int64_t t119 = 19LL;

    t119 = (x517/(x518-(x519/x520)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x521 = 2824U;
	int32_t x524 = INT32_MIN;

    t120 = (x521/(x522-(x523/x524)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x525 = UINT32_MAX;
	static volatile int32_t x526 = INT32_MIN;
	int16_t x527 = INT16_MIN;
	static uint8_t x528 = 2U;
	volatile uint32_t t121 = 225576694U;

    t121 = (x525/(x526-(x527/x528)));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x530 = 27;
	int16_t x531 = INT16_MIN;
	int64_t x532 = -1LL;
	int64_t t122 = 1358074698LL;

    t122 = (x529/(x530-(x531/x532)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x533 = -1LL;
	static uint32_t x534 = 128U;
	uint64_t x535 = 2117895564854877226LLU;
	int16_t x536 = INT16_MIN;
	volatile uint64_t t123 = 7052111629972LLU;

    t123 = (x533/(x534-(x535/x536)));

    if (t123 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x537 = -3;
	int32_t x538 = 79;
	volatile int16_t x540 = 291;
	static volatile int32_t t124 = 877478280;

    t124 = (x537/(x538-(x539/x540)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x541 = INT32_MIN;
	static int64_t x542 = 1LL;
	int16_t x543 = -1;
	uint16_t x544 = 3U;
	volatile int64_t t125 = -52180LL;

    t125 = (x541/(x542-(x543/x544)));

    if (t125 != -2147483648LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x545 = -1LL;
	volatile uint32_t x546 = 417799U;
	volatile int64_t t126 = -1LL;

    t126 = (x545/(x546-(x547/x548)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x549 = -1;
	static int8_t x550 = INT8_MAX;
	int8_t x552 = -1;
	int32_t t127 = -8773101;

    t127 = (x549/(x550-(x551/x552)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x553 = INT64_MIN;
	uint32_t x554 = 37478U;
	int32_t x555 = 10591;
	uint8_t x556 = UINT8_MAX;
	int64_t t128 = 4590713905781598912LL;

    t128 = (x553/(x554-(x555/x556)));

    if (t128 != -246370490072782LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x559 = UINT32_MAX;
	volatile int64_t x560 = -1421LL;
	int64_t t129 = 615836714159030089LL;

    t129 = (x557/(x558-(x559/x560)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x561 = UINT32_MAX;
	static int64_t x562 = -1673799168410002706LL;
	volatile int32_t x563 = 29;
	static int64_t x564 = 1LL;
	static volatile int64_t t130 = -939593826944354LL;

    t130 = (x561/(x562-(x563/x564)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x565 = 1U;
	volatile int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MIN;
	uint8_t x568 = 54U;

    t131 = (x565/(x566-(x567/x568)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x569 = 188U;
	int16_t x570 = INT16_MIN;
	static int32_t x572 = INT32_MAX;
	int64_t t132 = 12453900460108LL;

    t132 = (x569/(x570-(x571/x572)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x581 = INT8_MAX;
	int16_t x582 = -1;
	static volatile int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MIN;
	volatile int64_t t133 = 260304850740766832LL;

    t133 = (x581/(x582-(x583/x584)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x585 = 29;
	int16_t x586 = 5;
	uint64_t x587 = UINT64_MAX;
	int8_t x588 = INT8_MIN;

    t134 = (x585/(x586-(x587/x588)));

    if (t134 != 7LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x591 = -1;
	int16_t x592 = INT16_MIN;
	int32_t t135 = 3;

    t135 = (x589/(x590-(x591/x592)));

    if (t135 != 256) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x594 = 1LL;
	static uint32_t x595 = 57001U;
	int32_t x596 = -1;
	uint64_t t136 = UINT64_MAX;

    t136 = (x593/(x594-(x595/x596)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x597 = UINT16_MAX;
	static uint32_t x600 = UINT32_MAX;
	volatile uint32_t t137 = 208824U;

    t137 = (x597/(x598-(x599/x600)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x601 = 10U;
	static int16_t x603 = -1;
	int8_t x604 = -1;
	volatile int32_t t138 = -51;

    t138 = (x601/(x602-(x603/x604)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x605 = 1075892807252LLU;
	volatile uint64_t x607 = UINT64_MAX;
	static uint32_t x608 = 4202U;
	uint64_t t139 = 11826530621LLU;

    t139 = (x605/(x606-(x607/x608)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x609 = 12155831;
	volatile int16_t x611 = INT16_MIN;
	uint8_t x612 = 2U;
	volatile int32_t t140 = -2;

    t140 = (x609/(x610-(x611/x612)));

    if (t140 != 738) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x613 = 475U;
	uint32_t x614 = UINT32_MAX;
	static int64_t x615 = -971018887101607630LL;
	static int64_t t141 = -2822190978095324486LL;

    t141 = (x613/(x614-(x615/x616)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x617 = 692U;
	int64_t x620 = 2553759418LL;
	int64_t t142 = -98568753LL;

    t142 = (x617/(x618-(x619/x620)));

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x622 = UINT16_MAX;
	volatile int16_t x623 = INT16_MIN;
	int16_t x624 = -9135;
	static int32_t t143 = -434062;

    t143 = (x621/(x622-(x623/x624)));

    if (t143 != 32770) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x625 = INT16_MAX;
	int8_t x627 = INT8_MIN;
	volatile uint32_t x628 = UINT32_MAX;
	uint32_t t144 = 301128686U;

    t144 = (x625/(x626-(x627/x628)));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x633 = INT64_MAX;
	static uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	volatile uint8_t x636 = 2U;
	uint64_t t145 = 9713903713LLU;

    t145 = (x633/(x634-(x635/x636)));

    if (t145 != 2LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x641 = UINT8_MAX;
	uint64_t x643 = 2825028456460250LLU;

    t146 = (x641/(x642-(x643/x644)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x649 = INT16_MIN;
	volatile int32_t x650 = INT32_MAX;
	static int16_t x651 = INT16_MIN;
	volatile uint64_t x652 = 313115983523LLU;
	volatile uint64_t t147 = 3190846151LLU;

    t147 = (x649/(x650-(x651/x652)));

    if (t147 != 8832235625LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x654 = 26U;
	int8_t x655 = INT8_MIN;
	int8_t x656 = -1;

    t148 = (x653/(x654-(x655/x656)));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x657 = INT32_MIN;
	static uint32_t x658 = 3848751U;
	volatile int8_t x659 = INT8_MIN;

    t149 = (x657/(x658-(x659/x660)));

    if (t149 != 557U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x661 = 12492848U;
	static int16_t x662 = INT16_MIN;
	int32_t x663 = -1;
	int8_t x664 = INT8_MIN;

    t150 = (x661/(x662-(x663/x664)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x666 = UINT16_MAX;
	uint32_t x668 = 152405U;
	volatile uint32_t t151 = 0U;

    t151 = (x665/(x666-(x667/x668)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x669 = INT64_MAX;
	static volatile int16_t x670 = 15514;
	int8_t x671 = INT8_MAX;
	static int64_t x672 = -291769743LL;
	volatile int64_t t152 = -41LL;

    t152 = (x669/(x670-(x671/x672)));

    if (t152 != 594519275290368LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x673 = 12;
	volatile int8_t x674 = 49;
	int32_t x675 = INT32_MIN;
	int16_t x676 = 165;
	volatile int32_t t153 = -9093079;

    t153 = (x673/(x674-(x675/x676)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x677 = 4LL;
	int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MAX;
	uint32_t x680 = 9U;
	int64_t t154 = 163LL;

    t154 = (x677/(x678-(x679/x680)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x682 = INT16_MAX;
	volatile uint32_t t155 = 7016545U;

    t155 = (x681/(x682-(x683/x684)));

    if (t155 != 131079U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x685 = 0;
	static uint8_t x686 = 18U;
	int16_t x687 = INT16_MIN;
	static uint32_t t156 = 19317U;

    t156 = (x685/(x686-(x687/x688)));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x689 = 1LL;
	static int16_t x690 = INT16_MAX;
	uint8_t x691 = 0U;
	static uint8_t x692 = 3U;
	volatile int64_t t157 = -8517966232LL;

    t157 = (x689/(x690-(x691/x692)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x694 = 1500373365806LLU;
	int8_t x695 = INT8_MIN;
	uint32_t x696 = UINT32_MAX;

    t158 = (x693/(x694-(x695/x696)));

    if (t158 != 12294769LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x697 = INT64_MIN;
	static int16_t x698 = -30;
	int16_t x700 = INT16_MAX;
	static volatile int64_t t159 = -2LL;

    t159 = (x697/(x698-(x699/x700)));

    if (t159 != 307445734561825860LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x703 = -1;
	volatile int32_t t160 = -128;

    t160 = (x701/(x702-(x703/x704)));

    if (t160 != -49) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x705 = 2U;
	volatile int16_t x706 = -1;
	int64_t x708 = -1LL;
	int64_t t161 = 3500595475895758LL;

    t161 = (x705/(x706-(x707/x708)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x710 = 1LL;
	volatile int16_t x711 = 1;
	int64_t x712 = INT64_MIN;
	static volatile int64_t t162 = INT64_MIN;

    t162 = (x709/(x710-(x711/x712)));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = -1;
	int32_t x714 = INT32_MIN;
	uint8_t x715 = 9U;
	int32_t t163 = -402165041;

    t163 = (x713/(x714-(x715/x716)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x718 = -266;
	static volatile int8_t x719 = INT8_MIN;
	volatile int32_t t164 = -174161;

    t164 = (x717/(x718-(x719/x720)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x725 = INT32_MAX;
	int16_t x726 = INT16_MAX;
	static int8_t x727 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t165 = -50671;

    t165 = (x725/(x726-(x727/x728)));

    if (t165 != 65538) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x729 = -1;
	int16_t x730 = 35;
	int16_t x731 = INT16_MAX;
	int8_t x732 = 47;
	static volatile int32_t t166 = 73;

    t166 = (x729/(x730-(x731/x732)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = INT16_MAX;
	volatile int64_t x734 = INT64_MIN;
	int64_t x736 = INT64_MIN;

    t167 = (x733/(x734-(x735/x736)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x737 = 1;
	int16_t x738 = INT16_MIN;
	static volatile int16_t x740 = -3986;
	volatile int32_t t168 = -21792;

    t168 = (x737/(x738-(x739/x740)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = INT64_MIN;
	static int32_t x743 = -20;
	uint8_t x744 = UINT8_MAX;
	int64_t t169 = 26752325LL;

    t169 = (x741/(x742-(x743/x744)));

    if (t169 != -43712663681776188LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x745 = 7LL;
	int8_t x746 = INT8_MIN;
	static int64_t x747 = -1LL;
	uint8_t x748 = 16U;

    t170 = (x745/(x746-(x747/x748)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x749 = 348141462;
	int32_t x751 = INT32_MIN;
	static uint32_t x752 = 1287342U;

    t171 = (x749/(x750-(x751/x752)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x753 = 6U;
	static int8_t x754 = 0;
	static int8_t x756 = -1;
	static int32_t t172 = -15;

    t172 = (x753/(x754-(x755/x756)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x760 = -1LL;
	static int64_t t173 = 559LL;

    t173 = (x757/(x758-(x759/x760)));

    if (t173 != -461283922823444LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = -1LL;
	int32_t x763 = -1;
	uint16_t x764 = 151U;
	int64_t t174 = 2053147555282LL;

    t174 = (x761/(x762-(x763/x764)));

    if (t174 != 32768LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x766 = INT32_MAX;
	static int16_t x767 = -1;
	int32_t x768 = 5;
	int32_t t175 = 368978;

    t175 = (x765/(x766-(x767/x768)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x770 = 656U;
	int64_t x772 = -1LL;
	int64_t t176 = -15802943437771LL;

    t176 = (x769/(x770-(x771/x772)));

    if (t176 != -7LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x776 = -1;
	int32_t t177 = 72161004;

    t177 = (x773/(x774-(x775/x776)));

    if (t177 != -52377649) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x777 = 2LLU;
	volatile int16_t x778 = -1;
	volatile int64_t x779 = INT64_MAX;
	int32_t x780 = INT32_MIN;

    t178 = (x777/(x778-(x779/x780)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x781 = -47;
	static uint8_t x783 = 13U;
	int32_t x784 = INT32_MAX;
	volatile int32_t t179 = -64269723;

    t179 = (x781/(x782-(x783/x784)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x785 = 2U;
	uint64_t x786 = 6672390060387LLU;
	int32_t x787 = -180610;
	int8_t x788 = 14;
	uint64_t t180 = 3LLU;

    t180 = (x785/(x786-(x787/x788)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x789 = INT16_MIN;
	volatile int16_t x790 = INT16_MIN;
	uint16_t x791 = 3U;
	volatile uint32_t t181 = 6U;

    t181 = (x789/(x790-(x791/x792)));

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x793 = INT64_MAX;
	static int64_t x794 = -818621652952LL;
	uint32_t x795 = 36245U;
	int32_t x796 = INT32_MIN;
	volatile int64_t t182 = -555184192371576LL;

    t182 = (x793/(x794-(x795/x796)));

    if (t182 != -11266953LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x797 = UINT8_MAX;
	volatile int64_t x798 = -1LL;
	int8_t x799 = 1;
	uint32_t x800 = 234U;
	static int64_t t183 = -123268669152424LL;

    t183 = (x797/(x798-(x799/x800)));

    if (t183 != -255LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x801 = -1LL;
	uint32_t x802 = 2934U;
	uint8_t x803 = UINT8_MAX;
	static int64_t t184 = -6200LL;

    t184 = (x801/(x802-(x803/x804)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x805 = INT32_MAX;
	volatile uint64_t x806 = 42902806715506717LLU;
	volatile int8_t x808 = INT8_MIN;

    t185 = (x805/(x806-(x807/x808)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x809 = 0;
	int16_t x810 = INT16_MAX;
	int16_t x811 = 174;
	static int8_t x812 = INT8_MIN;
	static int32_t t186 = -96902115;

    t186 = (x809/(x810-(x811/x812)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x813 = 124393089LLU;
	int8_t x814 = INT8_MIN;
	static uint32_t x815 = UINT32_MAX;
	int8_t x816 = -1;
	volatile uint64_t t187 = 1804LLU;

    t187 = (x813/(x814-(x815/x816)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x819 = 1U;
	static volatile int8_t x820 = INT8_MAX;
	int32_t t188 = 923728;

    t188 = (x817/(x818-(x819/x820)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x823 = -1;
	int32_t x824 = -8185358;

    t189 = (x821/(x822-(x823/x824)));

    if (t189 != 17932U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x825 = -1;
	int16_t x826 = INT16_MAX;
	int16_t x827 = -601;
	static volatile int16_t x828 = -2241;

    t190 = (x825/(x826-(x827/x828)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x829 = INT64_MAX;
	volatile uint8_t x830 = 26U;
	int8_t x831 = -1;
	int64_t t191 = 855023795LL;

    t191 = (x829/(x830-(x831/x832)));

    if (t191 != 354745078340568300LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x833 = 5735U;
	int32_t x834 = INT32_MAX;
	volatile int64_t x835 = INT64_MAX;
	int8_t x836 = INT8_MAX;
	int64_t t192 = -50565986LL;

    t192 = (x833/(x834-(x835/x836)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x837 = INT16_MAX;
	static uint32_t x838 = UINT32_MAX;
	volatile int8_t x839 = INT8_MIN;
	uint64_t x840 = UINT64_MAX;
	uint64_t t193 = 258386LLU;

    t193 = (x837/(x838-(x839/x840)));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x841 = INT32_MIN;
	static uint64_t x843 = 8273625LLU;
	static int16_t x844 = INT16_MAX;

    t194 = (x841/(x842-(x843/x844)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x845 = 38954895166LL;
	volatile uint8_t x848 = 31U;
	volatile int64_t t195 = 82979131522LL;

    t195 = (x845/(x846-(x847/x848)));

    if (t195 != 1188700LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x853 = 7;
	uint32_t x855 = 10310586U;
	static int64_t x856 = INT64_MIN;
	int64_t t196 = -636927013LL;

    t196 = (x853/(x854-(x855/x856)));

    if (t196 != 7LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x857 = 1U;
	uint32_t x858 = UINT32_MAX;
	int16_t x859 = INT16_MIN;
	int8_t x860 = INT8_MAX;
	volatile uint32_t t197 = 7055U;

    t197 = (x857/(x858-(x859/x860)));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x861 = UINT32_MAX;
	int8_t x862 = -1;
	int8_t x863 = INT8_MIN;
	static uint64_t x864 = 247374LLU;
	static volatile uint64_t t198 = 2033755956503LLU;

    t198 = (x861/(x862-(x863/x864)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x866 = INT32_MIN;
	volatile uint32_t x867 = 48U;
	uint16_t x868 = 9857U;

    t199 = (x865/(x866-(x867/x868)));

    if (t199 != 1U) { NG(); } else { ; }
	
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

