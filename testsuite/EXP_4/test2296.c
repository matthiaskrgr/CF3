
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

int16_t x16 = -40;
volatile int32_t t3 = -2;
int32_t t4 = 1;
int64_t x27 = INT64_MAX;
static int32_t x29 = -106;
int16_t x30 = INT16_MIN;
int32_t x36 = 9009;
uint16_t x38 = UINT16_MAX;
int64_t x43 = 33LL;
int32_t x50 = -1;
static int8_t x52 = 1;
volatile int16_t x55 = -1;
uint8_t x57 = 11U;
int64_t x64 = -34274536106639723LL;
int16_t x67 = INT16_MIN;
int32_t t16 = -509642901;
volatile int64_t x70 = -1LL;
static int16_t x77 = INT16_MAX;
int32_t t19 = 4077478;
uint16_t x82 = 30983U;
uint32_t x83 = 6455313U;
uint32_t x89 = 46173U;
uint64_t x93 = 8202909460468520LLU;
int64_t x104 = -1LL;
int16_t x108 = INT16_MIN;
static int32_t x109 = -1;
int32_t t27 = 0;
static int64_t x116 = -1LL;
int32_t x125 = INT32_MIN;
volatile int32_t t31 = -28347799;
int32_t x131 = -1;
int64_t x140 = INT64_MIN;
int32_t x145 = -16155;
int64_t x154 = 2250LL;
int32_t x156 = -1;
volatile int32_t t38 = -4967;
int64_t x162 = -1LL;
volatile int8_t x164 = -15;
static volatile int64_t t40 = INT64_MIN;
int64_t x169 = INT64_MAX;
uint32_t x171 = 893994U;
static int16_t x172 = -6622;
int64_t t43 = -1027379016325LL;
int32_t t44 = INT32_MIN;
int32_t t45 = -11184;
int32_t x186 = INT32_MIN;
uint64_t x199 = UINT64_MAX;
volatile int32_t t49 = -229023;
volatile uint16_t x207 = UINT16_MAX;
uint8_t x212 = 29U;
volatile int8_t x213 = -10;
static volatile int16_t x216 = -1;
int32_t t53 = 42532;
uint16_t x220 = UINT16_MAX;
int8_t x221 = -1;
int8_t x222 = INT8_MIN;
int8_t x230 = INT8_MIN;
uint8_t x237 = 0U;
volatile int32_t t59 = 1;
int8_t x243 = INT8_MIN;
static int8_t x248 = 2;
volatile int32_t x255 = -255978;
uint32_t x259 = 530633628U;
volatile int16_t x261 = 1381;
int32_t x263 = -1;
int32_t t65 = 302265376;
uint16_t x269 = 26U;
uint32_t x270 = 4U;
int64_t x271 = INT64_MIN;
int8_t x272 = -8;
int16_t x277 = -1;
uint8_t x278 = 26U;
int8_t x282 = -1;
volatile int32_t x289 = INT32_MIN;
volatile int8_t x290 = -1;
int64_t t73 = -821200LL;
static int64_t x298 = -1023384206LL;
volatile uint64_t x299 = UINT64_MAX;
int64_t x315 = INT64_MAX;
int64_t t78 = 691436687353LL;
int8_t x319 = INT8_MIN;
static volatile uint64_t x324 = 1LLU;
volatile int32_t t80 = -14;
volatile int32_t x329 = INT32_MIN;
int16_t x334 = -12105;
static uint16_t x336 = 222U;
volatile int32_t t83 = 22;
static uint8_t x337 = UINT8_MAX;
volatile int8_t x339 = INT8_MIN;
volatile int32_t x341 = -790221;
int16_t x343 = INT16_MAX;
int64_t x346 = 54944106467LL;
uint64_t x349 = 1715752984694LLU;
int64_t x351 = INT64_MIN;
static int8_t x356 = -1;
int32_t x361 = INT32_MAX;
uint16_t x364 = 2890U;
int32_t x365 = 43;
uint8_t x367 = 14U;
int8_t x376 = INT8_MAX;
static uint32_t t93 = UINT32_MAX;
int8_t x377 = INT8_MIN;
static int16_t x379 = INT16_MIN;
static int64_t x380 = -1LL;
static uint16_t x382 = UINT16_MAX;
int16_t x383 = INT16_MIN;
int16_t x388 = INT16_MIN;
int32_t t98 = -14170018;
int32_t t99 = INT32_MAX;
int32_t t100 = 111;
int16_t x408 = INT16_MAX;
static uint64_t x417 = 29LLU;
volatile int64_t x424 = -1LL;
int64_t x434 = -168157772987313LL;
int16_t x439 = -9759;
int16_t x441 = -218;
int64_t x454 = INT64_MIN;
int64_t x456 = INT64_MIN;
int32_t x461 = -1;
static volatile int32_t t115 = 454;
volatile int8_t x468 = 1;
int16_t x469 = INT16_MIN;
uint16_t x470 = UINT16_MAX;
int8_t x473 = -11;
int32_t x474 = -335;
int64_t x476 = 465216082LL;
int64_t x478 = INT64_MIN;
uint8_t x483 = UINT8_MAX;
int8_t x485 = -5;
static uint8_t x493 = 1U;
int64_t x503 = INT64_MAX;
int64_t x507 = -1LL;
uint8_t x513 = UINT8_MAX;
uint8_t x516 = 3U;
int8_t x517 = -1;
int8_t x518 = INT8_MAX;
static uint16_t x524 = 894U;
int8_t x525 = -3;
int64_t x526 = INT64_MAX;
static int16_t x531 = 9;
int32_t t132 = 16512;
int8_t x538 = INT8_MIN;
int64_t x539 = INT64_MIN;
uint16_t x541 = 30216U;
volatile uint8_t x550 = 15U;
uint8_t x551 = 1U;
int32_t t138 = -127;
static volatile int64_t x557 = -1LL;
int8_t x567 = -5;
int8_t x573 = -1;
volatile int32_t x576 = -1;
static uint16_t x582 = UINT16_MAX;
volatile int64_t x585 = INT64_MIN;
int64_t t146 = 34242792LL;
int32_t x589 = INT32_MAX;
uint64_t x590 = 7988490904132861LLU;
static int64_t x594 = INT64_MIN;
int64_t x606 = 1068514480LL;
static int16_t x612 = INT16_MIN;
volatile uint8_t x614 = 0U;
int32_t t153 = -5152511;
static uint8_t x618 = 7U;
volatile uint32_t x629 = 581U;
volatile int32_t x634 = -1;
uint8_t x643 = 16U;
int32_t x645 = 0;
volatile int32_t x650 = INT32_MIN;
int8_t x653 = -29;
volatile int32_t t165 = -7755;
uint32_t x667 = 388877U;
uint32_t x672 = UINT32_MAX;
int32_t x678 = 140;
uint64_t x684 = UINT64_MAX;
int16_t x685 = -29;
uint16_t x688 = 37U;
static int8_t x691 = INT8_MAX;
int64_t x693 = 596212037LL;
int8_t x694 = 23;
int64_t x698 = -1LL;
volatile int32_t t174 = -197;
int16_t x708 = INT16_MIN;
volatile uint16_t x710 = UINT16_MAX;
static uint32_t x713 = 127931U;
static volatile uint32_t t178 = 3U;
int16_t x719 = 1499;
uint16_t x720 = 337U;
int16_t x722 = 15;
volatile uint64_t x732 = 8051808LLU;
uint8_t x736 = 0U;
int64_t t183 = INT64_MIN;
static volatile int32_t x738 = INT32_MIN;
static int16_t x741 = -1;
int16_t x752 = INT16_MIN;
volatile int32_t t187 = -20400;
int16_t x756 = -1;
static uint16_t x757 = UINT16_MAX;
static volatile int32_t x762 = INT32_MAX;
static int16_t x765 = INT16_MIN;
static int64_t x773 = -68878LL;
volatile int32_t x779 = INT32_MIN;
uint32_t x780 = 552U;
volatile int32_t x783 = 3968427;
uint8_t x785 = 2U;
static volatile int16_t x786 = INT16_MIN;
uint8_t x788 = UINT8_MAX;
static int32_t t196 = -770209019;
int64_t x794 = INT64_MIN;
uint32_t t199 = UINT32_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	volatile int32_t x3 = -1;
	int8_t x4 = 6;
	volatile int64_t t0 = INT64_MAX;

    t0 = (x1^(x2<=(x3&x4)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	uint64_t x6 = 48236140376LLU;
	int64_t x7 = INT64_MIN;
	static int64_t x8 = 1008639661367LL;
	int32_t t1 = -65872545;

    t1 = (x5^(x6<=(x7&x8)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int16_t x10 = -2738;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -3769679;

    t2 = (x9^(x10<=(x11&x12)));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 6762278;
	volatile uint16_t x14 = 56U;
	int64_t x15 = -153055456347LL;

    t3 = (x13^(x14<=(x15&x16)));

    if (t3 != 6762278) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 107U;
	static volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	static int16_t x20 = -1;

    t4 = (x17^(x18<=(x19&x20)));

    if (t4 != 106) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MAX;
	int8_t x24 = -1;
	static volatile uint32_t t5 = 25886051U;

    t5 = (x21^(x22<=(x23&x24)));

    if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x25 = -1;
	uint64_t x26 = 406813390LLU;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 992345085;

    t6 = (x25^(x26<=(x27&x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x31 = INT64_MIN;
	static volatile int8_t x32 = 3;
	int32_t t7 = -18105;

    t7 = (x29^(x30<=(x31&x32)));

    if (t7 != -105) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint64_t x34 = 59125LLU;
	int64_t x35 = -11922227LL;
	int32_t t8 = 2461354;

    t8 = (x33^(x34<=(x35&x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int64_t t9 = -4209534648LL;

    t9 = (x37^(x38<=(x39&x40)));

    if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	int16_t x44 = -223;
	static volatile int32_t t10 = 73086;

    t10 = (x41^(x42<=(x43&x44)));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 12835558;
	static uint64_t x46 = 342579392633916044LLU;
	int16_t x47 = -121;
	int16_t x48 = -3891;
	volatile int32_t t11 = -61649;

    t11 = (x45^(x46<=(x47&x48)));

    if (t11 != 12835559) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	int32_t t12 = -38883;

    t12 = (x49^(x50<=(x51&x52)));

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 7945U;
	volatile uint32_t x54 = 39U;
	volatile int16_t x56 = INT16_MAX;
	int32_t t13 = 138;

    t13 = (x53^(x54<=(x55&x56)));

    if (t13 != 7944) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	volatile uint32_t x60 = 621U;
	int32_t t14 = -336;

    t14 = (x57^(x58<=(x59&x60)));

    if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 1635980;
	static uint8_t x62 = 114U;
	static int8_t x63 = INT8_MIN;
	volatile int32_t t15 = -1;

    t15 = (x61^(x62<=(x63&x64)));

    if (t15 != 1635980) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = -76;
	int64_t x66 = 7086LL;
	int32_t x68 = INT32_MAX;

    t16 = (x65^(x66<=(x67&x68)));

    if (t16 != -75) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 18U;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = -1;
	static volatile int32_t t17 = 2887;

    t17 = (x69^(x70<=(x71&x72)));

    if (t17 != 18) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = 0U;
	uint8_t x74 = 1U;
	volatile uint8_t x75 = 3U;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 88801065;

    t18 = (x73^(x74<=(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MIN;
	int64_t x79 = -548461246043380LL;
	int32_t x80 = INT32_MIN;

    t19 = (x77^(x78<=(x79&x80)));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -5;
	uint64_t x84 = 595200250LLU;
	volatile int32_t t20 = -701;

    t20 = (x81^(x82<=(x83&x84)));

    if (t20 != -6) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 0;
	uint8_t x86 = UINT8_MAX;
	volatile int16_t x87 = -32;
	static int32_t x88 = -1;
	int32_t t21 = 2244136;

    t21 = (x85^(x86<=(x87&x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -1;
	static int16_t x91 = 221;
	int32_t x92 = 9278;
	uint32_t t22 = 2834U;

    t22 = (x89^(x90<=(x91&x92)));

    if (t22 != 46172U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = UINT8_MAX;
	static int32_t x95 = -3241;
	volatile int64_t x96 = -19363867139923449LL;
	uint64_t t23 = 6554386LLU;

    t23 = (x93^(x94<=(x95&x96)));

    if (t23 != 8202909460468520LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = -1;
	uint32_t x98 = 21500971U;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = -1530472;

    t24 = (x97^(x98<=(x99&x100)));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -13778LL;
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile int64_t t25 = 3288789LL;

    t25 = (x101^(x102<=(x103&x104)));

    if (t25 != -13777LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	volatile int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t t26 = -470956;

    t26 = (x105^(x106<=(x107&x108)));

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;

    t27 = (x109^(x110<=(x111&x112)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = 221767;
	static int8_t x114 = 0;
	static uint8_t x115 = 41U;
	volatile int32_t t28 = -6609;

    t28 = (x113^(x114<=(x115&x116)));

    if (t28 != 221766) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 187U;
	int64_t x118 = INT64_MAX;
	int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MAX;
	static volatile int32_t t29 = 1;

    t29 = (x117^(x118<=(x119&x120)));

    if (t29 != 187) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 3U;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = INT32_MIN;
	int16_t x124 = -4187;
	static volatile int32_t t30 = -90;

    t30 = (x121^(x122<=(x123&x124)));

    if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = 17;
	volatile int64_t x127 = -2LL;
	int32_t x128 = 38;

    t31 = (x125^(x126<=(x127&x128)));

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int32_t x130 = -4313778;
	volatile int16_t x132 = 10;
	int32_t t32 = -1;

    t32 = (x129^(x130<=(x131&x132)));

    if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static volatile uint64_t x136 = 35926722263LLU;
	int32_t t33 = -3348;

    t33 = (x133^(x134<=(x135&x136)));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 2140605128890064834LL;
	uint32_t x138 = UINT32_MAX;
	static int32_t x139 = INT32_MAX;
	volatile int64_t t34 = -53792663194836908LL;

    t34 = (x137^(x138<=(x139&x140)));

    if (t34 != 2140605128890064834LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x141 = 405046554677112304LLU;
	int16_t x142 = INT16_MAX;
	uint64_t x143 = 25791LLU;
	volatile uint16_t x144 = 5003U;
	static uint64_t t35 = 1272855LLU;

    t35 = (x141^(x142<=(x143&x144)));

    if (t35 != 405046554677112304LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = 174;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = -100;
	volatile int32_t t36 = 327;

    t36 = (x145^(x146<=(x147&x148)));

    if (t36 != -16155) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	static uint32_t x150 = 4U;
	volatile int8_t x151 = 12;
	uint32_t x152 = 132696382U;
	volatile int32_t t37 = -75257;

    t37 = (x149^(x150<=(x151&x152)));

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	static uint64_t x155 = UINT64_MAX;

    t38 = (x153^(x154<=(x155&x156)));

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = 262;
	int16_t x158 = -3721;
	int64_t x159 = -1LL;
	static int32_t x160 = INT32_MIN;
	int32_t t39 = -226;

    t39 = (x157^(x158<=(x159&x160)));

    if (t39 != 262) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	int16_t x163 = INT16_MIN;

    t40 = (x161^(x162<=(x163&x164)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = INT8_MAX;
	int64_t x166 = -92327194366638LL;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -1044604863;

    t41 = (x165^(x166<=(x167&x168)));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MAX;
	int64_t t42 = -6642535LL;

    t42 = (x169^(x170<=(x171&x172)));

    if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	static int64_t x174 = -198LL;
	int32_t x175 = -1;
	uint32_t x176 = UINT32_MAX;

    t43 = (x173^(x174<=(x175&x176)));

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	static int64_t x178 = 16291717822284249LL;
	int16_t x179 = INT16_MIN;
	static int32_t x180 = INT32_MAX;

    t44 = (x177^(x178<=(x179&x180)));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint32_t x182 = 3U;
	int8_t x183 = -1;
	static uint16_t x184 = 1U;

    t45 = (x181^(x182<=(x183&x184)));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -7872;

    t46 = (x185^(x186<=(x187&x188)));

    if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 55U;
	uint64_t x190 = 141292475216698049LLU;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 209U;
	int32_t t47 = 216774;

    t47 = (x189^(x190<=(x191&x192)));

    if (t47 != 55) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	volatile int32_t x194 = 0;
	int8_t x195 = 0;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 8127;

    t48 = (x193^(x194<=(x195&x196)));

    if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int8_t x200 = 15;

    t49 = (x197^(x198<=(x199&x200)));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	int64_t x204 = 8768944373387147LL;
	static int64_t t50 = -505964831634853LL;

    t50 = (x201^(x202<=(x203&x204)));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int8_t x206 = INT8_MAX;
	uint32_t x208 = 3313008U;
	volatile uint64_t t51 = 921765253785LLU;

    t51 = (x205^(x206<=(x207&x208)));

    if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	static int32_t x211 = -1;
	volatile int32_t t52 = 1719841;

    t52 = (x209^(x210<=(x211&x212)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x214 = -56;
	uint8_t x215 = 1U;

    t53 = (x213^(x214<=(x215&x216)));

    if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	int16_t x218 = 208;
	uint16_t x219 = 10U;
	int64_t t54 = 6LL;

    t54 = (x217^(x218<=(x219&x220)));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -6991;

    t55 = (x221^(x222<=(x223&x224)));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 29588U;
	int64_t x228 = -61119357068975LL;
	volatile int64_t t56 = -579866331481496874LL;

    t56 = (x225^(x226<=(x227&x228)));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = -1;
	volatile int16_t x231 = INT16_MAX;
	uint64_t x232 = 116947LLU;
	static volatile int32_t t57 = 0;

    t57 = (x229^(x230<=(x231&x232)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	int64_t t58 = 6503635869LL;

    t58 = (x233^(x234<=(x235&x236)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MIN;
	int8_t x239 = 11;
	int8_t x240 = INT8_MAX;

    t59 = (x237^(x238<=(x239&x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = -1;
	volatile uint16_t x242 = 145U;
	int32_t x244 = 12;
	static int32_t t60 = 1;

    t60 = (x241^(x242<=(x243&x244)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	uint16_t x246 = 32474U;
	volatile int64_t x247 = INT64_MAX;
	int64_t t61 = INT64_MIN;

    t61 = (x245^(x246<=(x247&x248)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x249 = 3U;
	int16_t x250 = -3700;
	uint64_t x251 = 278502897781316LLU;
	int64_t x252 = -1LL;
	volatile int32_t t62 = -21532852;

    t62 = (x249^(x250<=(x251&x252)));

    if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = 81;
	int32_t x254 = -200924;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 14185;

    t63 = (x253^(x254<=(x255&x256)));

    if (t63 != 81) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	static uint64_t x258 = 1647670230LLU;
	int8_t x260 = -1;
	volatile int32_t t64 = INT32_MIN;

    t64 = (x257^(x258<=(x259&x260)));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	static uint32_t x264 = 4U;

    t65 = (x261^(x262<=(x263&x264)));

    if (t65 != 1381) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -26;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = 14066539842942191LLU;
	volatile int32_t x268 = 949920403;
	static int32_t t66 = 699036828;

    t66 = (x265^(x266<=(x267&x268)));

    if (t66 != -25) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t t67 = -7658;

    t67 = (x269^(x270<=(x271&x272)));

    if (t67 != 26) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 5504;
	uint16_t x274 = 0U;
	static volatile int32_t x275 = INT32_MIN;
	int8_t x276 = -6;
	volatile int32_t t68 = -149616;

    t68 = (x273^(x274<=(x275&x276)));

    if (t68 != 5504) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x279 = 28;
	uint32_t x280 = UINT32_MAX;
	static int32_t t69 = 563160898;

    t69 = (x277^(x278<=(x279&x280)));

    if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	int8_t x283 = INT8_MIN;
	static uint16_t x284 = 711U;
	int32_t t70 = 582135;

    t70 = (x281^(x282<=(x283&x284)));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 0U;
	uint32_t x286 = 454372891U;
	uint64_t x287 = 1124346286042567899LLU;
	int32_t x288 = INT32_MIN;
	int32_t t71 = 1;

    t71 = (x285^(x286<=(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x291 = 4U;
	volatile uint64_t x292 = 1491721699045017LLU;
	int32_t t72 = INT32_MIN;

    t72 = (x289^(x290<=(x291&x292)));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	int16_t x294 = -1;
	static volatile int8_t x295 = INT8_MIN;
	uint8_t x296 = 0U;

    t73 = (x293^(x294<=(x295&x296)));

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 1408U;
	int8_t x300 = INT8_MIN;
	uint32_t t74 = 1077851971U;

    t74 = (x297^(x298<=(x299&x300)));

    if (t74 != 1409U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	static int32_t x302 = INT32_MIN;
	static volatile int64_t x303 = INT64_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 16605467;

    t75 = (x301^(x302<=(x303&x304)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = 2041641612U;
	static uint64_t x306 = 16641346469610LLU;
	int64_t x307 = INT64_MAX;
	uint64_t x308 = 6601065833LLU;
	volatile uint32_t t76 = 783U;

    t76 = (x305^(x306<=(x307&x308)));

    if (t76 != 2041641612U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 33U;
	int32_t x310 = INT32_MIN;
	static int8_t x311 = INT8_MIN;
	volatile uint32_t x312 = 182U;
	int32_t t77 = -21;

    t77 = (x309^(x310<=(x311&x312)));

    if (t77 != 33) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = INT64_MIN;
	int32_t x314 = -522;
	int8_t x316 = -1;

    t78 = (x313^(x314<=(x315&x316)));

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 11880LLU;
	int16_t x318 = -26;
	uint16_t x320 = 284U;
	uint64_t t79 = 5966059LLU;

    t79 = (x317^(x318<=(x319&x320)));

    if (t79 != 11881LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 5142;
	volatile uint8_t x322 = 7U;
	int64_t x323 = INT64_MIN;

    t80 = (x321^(x322<=(x323&x324)));

    if (t80 != 5142) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	int64_t x326 = -4238648272713088LL;
	static uint16_t x327 = UINT16_MAX;
	static uint8_t x328 = 39U;
	int32_t t81 = -7789722;

    t81 = (x325^(x326<=(x327&x328)));

    if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = INT32_MIN;

    t82 = (x329^(x330<=(x331&x332)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 1459;
	static volatile int8_t x335 = 1;

    t83 = (x333^(x334<=(x335&x336)));

    if (t83 != 1458) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	int16_t x340 = -1;
	volatile int32_t t84 = 106;

    t84 = (x337^(x338<=(x339&x340)));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = -1;
	static int8_t x344 = 2;
	static volatile int32_t t85 = 1140;

    t85 = (x341^(x342<=(x343&x344)));

    if (t85 != -790222) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static int64_t x347 = -1LL;
	int32_t x348 = -1;
	static volatile int32_t t86 = 127116802;

    t86 = (x345^(x346<=(x347&x348)));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x350 = INT8_MAX;
	uint64_t x352 = 34256262LLU;
	volatile uint64_t t87 = 6719LLU;

    t87 = (x349^(x350<=(x351&x352)));

    if (t87 != 1715752984694LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = -6;
	static int8_t x355 = INT8_MAX;
	int32_t t88 = -66;

    t88 = (x353^(x354<=(x355&x356)));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -883834041;
	int32_t x358 = -1;
	uint32_t x359 = 11U;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -2062518;

    t89 = (x357^(x358<=(x359&x360)));

    if (t89 != -883834041) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	int32_t t90 = 687;

    t90 = (x361^(x362<=(x363&x364)));

    if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint32_t x366 = 58U;
	int32_t x368 = 0;
	int32_t t91 = 21445;

    t91 = (x365^(x366<=(x367&x368)));

    if (t91 != 43) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -2;
	static int32_t x370 = INT32_MIN;
	volatile int32_t x371 = 1;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -2;

    t92 = (x369^(x370<=(x371&x372)));

    if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int32_t x374 = 38022;
	int8_t x375 = -1;

    t93 = (x373^(x374<=(x375&x376)));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = 3;
	volatile int32_t t94 = -38;

    t94 = (x377^(x378<=(x379&x380)));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = 8248430LLU;
	uint32_t x384 = UINT32_MAX;
	volatile uint64_t t95 = 3896270409837750348LLU;

    t95 = (x381^(x382<=(x383&x384)));

    if (t95 != 8248431LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = 15076;
	volatile int16_t x386 = INT16_MIN;
	static int32_t x387 = 0;
	volatile int32_t t96 = -231598;

    t96 = (x385^(x386<=(x387&x388)));

    if (t96 != 15077) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = 56;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = UINT16_MAX;
	volatile int16_t x392 = INT16_MIN;
	int32_t t97 = -7255;

    t97 = (x389^(x390<=(x391&x392)));

    if (t97 != 57) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int8_t x394 = -3;
	int16_t x395 = INT16_MAX;
	uint32_t x396 = 331870692U;

    t98 = (x393^(x394<=(x395&x396)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	volatile int32_t x398 = INT32_MAX;
	static int16_t x399 = INT16_MAX;
	int32_t x400 = -1;

    t99 = (x397^(x398<=(x399&x400)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 25762U;

    t100 = (x401^(x402<=(x403&x404)));

    if (t100 != 65534) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	static uint64_t x406 = UINT64_MAX;
	volatile int16_t x407 = INT16_MAX;
	int32_t t101 = 46;

    t101 = (x405^(x406<=(x407&x408)));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 2057692;
	int64_t x410 = 14032779467086LL;
	int8_t x411 = -7;
	static int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 50401475;

    t102 = (x409^(x410<=(x411&x412)));

    if (t102 != 2057692) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = UINT32_MAX;
	static volatile int32_t t103 = 395;

    t103 = (x413^(x414<=(x415&x416)));

    if (t103 != -2) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = 119902;
	static uint8_t x419 = 34U;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t104 = 4LLU;

    t104 = (x417^(x418<=(x419&x420)));

    if (t104 != 29LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 2;
	int32_t x422 = -10;
	volatile int64_t x423 = INT64_MIN;
	volatile int32_t t105 = -308859467;

    t105 = (x421^(x422<=(x423&x424)));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 1U;
	static uint64_t x426 = UINT64_MAX;
	int16_t x427 = -1;
	uint64_t x428 = 120LLU;
	volatile int32_t t106 = 860654;

    t106 = (x425^(x426<=(x427&x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	uint16_t x430 = 1U;
	static int32_t x431 = -1;
	uint32_t x432 = 3288U;
	volatile int32_t t107 = -6;

    t107 = (x429^(x430<=(x431&x432)));

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MIN;
	int16_t x435 = -58;
	uint8_t x436 = 70U;
	static volatile int32_t t108 = -281789;

    t108 = (x433^(x434<=(x435&x436)));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 6846U;
	int8_t x438 = -1;
	int32_t x440 = 88706023;
	int32_t t109 = 44573;

    t109 = (x437^(x438<=(x439&x440)));

    if (t109 != 6847) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x442 = -1;
	int8_t x443 = -1;
	int16_t x444 = -13;
	int32_t t110 = -3630;

    t110 = (x441^(x442<=(x443&x444)));

    if (t110 != -218) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -192560LL;
	volatile int16_t x446 = 423;
	int32_t x447 = INT32_MIN;
	static int16_t x448 = INT16_MIN;
	int64_t t111 = -7143LL;

    t111 = (x445^(x446<=(x447&x448)));

    if (t111 != -192560LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x450 = -186;
	int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MIN;
	volatile int64_t t112 = INT64_MIN;

    t112 = (x449^(x450<=(x451&x452)));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 31691U;
	uint32_t x455 = UINT32_MAX;
	int32_t t113 = 56544;

    t113 = (x453^(x454<=(x455&x456)));

    if (t113 != 31690) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = 905LL;
	uint8_t x458 = 9U;
	int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MAX;
	volatile int64_t t114 = 910525582926291LL;

    t114 = (x457^(x458<=(x459&x460)));

    if (t114 != 905LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x462 = UINT16_MAX;
	int32_t x463 = INT32_MIN;
	volatile int64_t x464 = 278971795628408501LL;

    t115 = (x461^(x462<=(x463&x464)));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	uint64_t x466 = UINT64_MAX;
	volatile int8_t x467 = -14;
	volatile int64_t t116 = 73LL;

    t116 = (x465^(x466<=(x467&x468)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x471 = 41293LL;
	int64_t x472 = -1LL;
	volatile int32_t t117 = 564136772;

    t117 = (x469^(x470<=(x471&x472)));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x475 = INT16_MIN;
	volatile int32_t t118 = -1;

    t118 = (x473^(x474<=(x475&x476)));

    if (t118 != -12) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile int64_t x479 = INT64_MIN;
	int32_t x480 = 31361;
	uint64_t t119 = 568482155167406746LLU;

    t119 = (x477^(x478<=(x479&x480)));

    if (t119 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MAX;
	uint16_t x482 = UINT16_MAX;
	volatile int8_t x484 = 2;
	volatile int32_t t120 = 23634;

    t120 = (x481^(x482<=(x483&x484)));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	uint16_t x488 = 21U;
	int32_t t121 = -10283585;

    t121 = (x485^(x486<=(x487&x488)));

    if (t121 != -6) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x489 = 10U;
	int16_t x490 = INT16_MIN;
	static uint64_t x491 = 118353366LLU;
	int16_t x492 = -1546;
	uint32_t t122 = 236U;

    t122 = (x489^(x490<=(x491&x492)));

    if (t122 != 10U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x494 = UINT8_MAX;
	static uint64_t x495 = 3LLU;
	static int64_t x496 = -12LL;
	volatile int32_t t123 = 2495411;

    t123 = (x493^(x494<=(x495&x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 423506011458514LLU;
	volatile int32_t x498 = INT32_MIN;
	int8_t x499 = 0;
	uint16_t x500 = 2073U;
	volatile uint64_t t124 = 56053518683LLU;

    t124 = (x497^(x498<=(x499&x500)));

    if (t124 != 423506011458515LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MAX;
	static volatile uint8_t x502 = UINT8_MAX;
	static uint32_t x504 = 2U;
	int32_t t125 = 1;

    t125 = (x501^(x502<=(x503&x504)));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	volatile int32_t x506 = -841;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t126 = 0;

    t126 = (x505^(x506<=(x507&x508)));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 24;
	volatile int64_t x510 = 3756444569633294303LL;
	uint16_t x511 = 28301U;
	uint32_t x512 = 3883U;
	int32_t t127 = 197;

    t127 = (x509^(x510<=(x511&x512)));

    if (t127 != 24) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x514 = -7827;
	int64_t x515 = INT64_MIN;
	int32_t t128 = 1;

    t128 = (x513^(x514<=(x515&x516)));

    if (t128 != 254) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x519 = -47;
	volatile int32_t x520 = INT32_MIN;
	int32_t t129 = 14191;

    t129 = (x517^(x518<=(x519&x520)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 1671225;
	static int64_t x522 = INT64_MIN;
	static volatile int8_t x523 = -1;
	int32_t t130 = 24;

    t130 = (x521^(x522<=(x523&x524)));

    if (t130 != 1671224) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x527 = 1929635559U;
	volatile int16_t x528 = -1;
	volatile int32_t t131 = 9973648;

    t131 = (x525^(x526<=(x527&x528)));

    if (t131 != -3) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	int8_t x530 = -1;
	int32_t x532 = INT32_MIN;

    t132 = (x529^(x530<=(x531&x532)));

    if (t132 != 2147483646) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	volatile uint32_t x534 = 5641U;
	static volatile int32_t x535 = INT32_MIN;
	int8_t x536 = -1;
	int32_t t133 = -1;

    t133 = (x533^(x534<=(x535&x536)));

    if (t133 != 2147483646) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MIN;
	uint16_t x540 = UINT16_MAX;
	int32_t t134 = -134288808;

    t134 = (x537^(x538<=(x539&x540)));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = INT8_MAX;
	volatile int8_t x543 = INT8_MAX;
	uint16_t x544 = 10388U;
	int32_t t135 = -516561;

    t135 = (x541^(x542<=(x543&x544)));

    if (t135 != 30216) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	static uint16_t x546 = UINT16_MAX;
	uint64_t x547 = 118582LLU;
	uint8_t x548 = 10U;
	int64_t t136 = INT64_MIN;

    t136 = (x545^(x546<=(x547&x548)));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 1U;
	int64_t x552 = -1LL;
	volatile int32_t t137 = -60;

    t137 = (x549^(x550<=(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = -1;
	int64_t x554 = 513595299593965LL;
	int8_t x555 = INT8_MAX;
	int64_t x556 = -1LL;

    t138 = (x553^(x554<=(x555&x556)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = -1;
	volatile int32_t x559 = -7784737;
	int32_t x560 = -70;
	int64_t t139 = 41937597LL;

    t139 = (x557^(x558<=(x559&x560)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	uint32_t x562 = 1751847U;
	static int16_t x563 = -1;
	static int32_t x564 = 2075351;
	volatile int32_t t140 = 10454061;

    t140 = (x561^(x562<=(x563&x564)));

    if (t140 != 32766) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = -1;
	static volatile uint32_t x566 = UINT32_MAX;
	static int8_t x568 = 1;
	volatile int32_t t141 = 1;

    t141 = (x565^(x566<=(x567&x568)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MAX;
	int16_t x570 = 0;
	static int16_t x571 = INT16_MIN;
	int16_t x572 = 1;
	volatile int32_t t142 = -1633958;

    t142 = (x569^(x570<=(x571&x572)));

    if (t142 != 32766) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x574 = -2;
	int16_t x575 = INT16_MIN;
	static int32_t t143 = 179;

    t143 = (x573^(x574<=(x575&x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 1LLU;
	static int64_t x578 = 411276725LL;
	int8_t x579 = -47;
	int8_t x580 = -1;
	volatile uint64_t t144 = 24LLU;

    t144 = (x577^(x578<=(x579&x580)));

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 5U;
	volatile int64_t x583 = INT64_MIN;
	int64_t x584 = 17622007636410935LL;
	volatile uint32_t t145 = 29998020U;

    t145 = (x581^(x582<=(x583&x584)));

    if (t145 != 5U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = INT16_MIN;
	static volatile int16_t x587 = INT16_MIN;
	uint64_t x588 = UINT64_MAX;

    t146 = (x585^(x586<=(x587&x588)));

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x591 = 199869876721108860LLU;
	uint64_t x592 = 158060119511980LLU;
	int32_t t147 = INT32_MAX;

    t147 = (x589^(x590<=(x591&x592)));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	int16_t x595 = INT16_MAX;
	int32_t x596 = INT32_MIN;
	volatile int64_t t148 = -4LL;

    t148 = (x593^(x594<=(x595&x596)));

    if (t148 != -2LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = 0;
	uint16_t x598 = 496U;
	static int8_t x599 = -1;
	uint16_t x600 = UINT16_MAX;
	volatile int32_t t149 = 7226178;

    t149 = (x597^(x598<=(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 526044857U;
	int8_t x602 = -1;
	static int32_t x603 = INT32_MIN;
	static volatile int32_t x604 = 550;
	uint32_t t150 = 1151739U;

    t150 = (x601^(x602<=(x603&x604)));

    if (t150 != 526044856U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	static uint16_t x607 = 4U;
	int16_t x608 = -1;
	static volatile int32_t t151 = INT32_MAX;

    t151 = (x605^(x606<=(x607&x608)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 23U;
	int8_t x610 = INT8_MAX;
	int16_t x611 = INT16_MAX;
	volatile int32_t t152 = 530785242;

    t152 = (x609^(x610<=(x611&x612)));

    if (t152 != 23) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	static volatile uint8_t x615 = UINT8_MAX;
	uint32_t x616 = 208280U;

    t153 = (x613^(x614<=(x615&x616)));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -24;
	int16_t x619 = INT16_MIN;
	uint32_t x620 = UINT32_MAX;
	static int32_t t154 = 16400154;

    t154 = (x617^(x618<=(x619&x620)));

    if (t154 != -23) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 8U;
	int16_t x622 = INT16_MAX;
	int8_t x623 = -1;
	int16_t x624 = -1;
	static volatile int32_t t155 = 2;

    t155 = (x621^(x622<=(x623&x624)));

    if (t155 != 8) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 2U;
	int8_t x626 = INT8_MIN;
	static int16_t x627 = INT16_MIN;
	static int64_t x628 = 366145545LL;
	volatile int32_t t156 = 363;

    t156 = (x625^(x626<=(x627&x628)));

    if (t156 != 3) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = INT64_MIN;
	uint8_t x631 = 8U;
	static uint64_t x632 = 445451345057914LLU;
	uint32_t t157 = 2U;

    t157 = (x629^(x630<=(x631&x632)));

    if (t157 != 581U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 100U;
	int64_t x635 = 900172151LL;
	uint64_t x636 = 44059051LLU;
	int32_t t158 = 387;

    t158 = (x633^(x634<=(x635&x636)));

    if (t158 != 100) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -2770501130LL;
	uint32_t x638 = 5431270U;
	int64_t x639 = INT64_MIN;
	static int32_t x640 = -1;
	int64_t t159 = 232947191298LL;

    t159 = (x637^(x638<=(x639&x640)));

    if (t159 != -2770501130LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MIN;
	volatile uint16_t x644 = 21U;
	int64_t t160 = 98LL;

    t160 = (x641^(x642<=(x643&x644)));

    if (t160 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = 38274051;
	int64_t x647 = INT64_MIN;
	volatile int32_t x648 = INT32_MAX;
	static volatile int32_t t161 = -2407268;

    t161 = (x645^(x646<=(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = -1;
	volatile int8_t x651 = -1;
	volatile int8_t x652 = -29;
	volatile int32_t t162 = 8331;

    t162 = (x649^(x650<=(x651&x652)));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x654 = -13634;
	static int32_t x655 = INT32_MIN;
	uint64_t x656 = UINT64_MAX;
	volatile int32_t t163 = -111468678;

    t163 = (x653^(x654<=(x655&x656)));

    if (t163 != -29) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 1U;
	int8_t x658 = 1;
	static int64_t x659 = -71829LL;
	int16_t x660 = INT16_MAX;
	volatile int32_t t164 = 232691402;

    t164 = (x657^(x658<=(x659&x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = INT32_MAX;
	int16_t x662 = 6;
	uint32_t x663 = UINT32_MAX;
	int8_t x664 = INT8_MIN;

    t165 = (x661^(x662<=(x663&x664)));

    if (t165 != 2147483646) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x665 = -1;
	volatile uint16_t x666 = UINT16_MAX;
	volatile uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = 8065;

    t166 = (x665^(x666<=(x667&x668)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = 1;
	int16_t x670 = INT16_MIN;
	int8_t x671 = -46;
	volatile int32_t t167 = 22;

    t167 = (x669^(x670<=(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = 0;
	int64_t x674 = INT64_MIN;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = -44;
	int32_t t168 = -264687901;

    t168 = (x673^(x674<=(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x679 = INT64_MIN;
	int8_t x680 = 11;
	volatile int32_t t169 = 46410;

    t169 = (x677^(x678<=(x679&x680)));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 37;
	static uint32_t x682 = UINT32_MAX;
	int8_t x683 = 0;
	volatile int32_t t170 = -218;

    t170 = (x681^(x682<=(x683&x684)));

    if (t170 != 37) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x686 = INT64_MIN;
	uint16_t x687 = UINT16_MAX;
	static volatile int32_t t171 = -3425;

    t171 = (x685^(x686<=(x687&x688)));

    if (t171 != -30) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int32_t x690 = -38259;
	int8_t x692 = INT8_MAX;
	uint64_t t172 = 5722356LLU;

    t172 = (x689^(x690<=(x691&x692)));

    if (t172 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x695 = INT16_MIN;
	int64_t x696 = -1LL;
	volatile int64_t t173 = -86798821808LL;

    t173 = (x693^(x694<=(x695&x696)));

    if (t173 != 596212037LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	static int8_t x699 = -1;
	int64_t x700 = INT64_MIN;

    t174 = (x697^(x698<=(x699&x700)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 100U;
	static uint32_t x702 = 23694096U;
	int8_t x703 = -1;
	uint32_t x704 = 1165U;
	int32_t t175 = 31;

    t175 = (x701^(x702<=(x703&x704)));

    if (t175 != 100) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int32_t x706 = 1;
	int64_t x707 = INT64_MIN;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (x705^(x706<=(x707&x708)));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 3810U;
	static int16_t x711 = 138;
	int64_t x712 = 93538944217LL;
	volatile int32_t t177 = -36436644;

    t177 = (x709^(x710<=(x711&x712)));

    if (t177 != 3810) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x714 = 6841U;
	volatile int16_t x715 = INT16_MIN;
	uint16_t x716 = 19417U;

    t178 = (x713^(x714<=(x715&x716)));

    if (t178 != 127931U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint64_t x718 = 232LLU;
	static int32_t t179 = 66;

    t179 = (x717^(x718<=(x719&x720)));

    if (t179 != 32766) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x721 = 22U;
	volatile int8_t x723 = 6;
	int8_t x724 = INT8_MAX;
	int32_t t180 = -1;

    t180 = (x721^(x722<=(x723&x724)));

    if (t180 != 22) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int64_t x726 = INT64_MIN;
	int64_t x727 = 12309LL;
	uint64_t x728 = 97LLU;
	volatile int32_t t181 = 195996;

    t181 = (x725^(x726<=(x727&x728)));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 59U;
	volatile int8_t x730 = INT8_MAX;
	uint64_t x731 = UINT64_MAX;
	int32_t t182 = -13610009;

    t182 = (x729^(x730<=(x731&x732)));

    if (t182 != 58) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	uint16_t x734 = UINT16_MAX;
	int32_t x735 = 28700;

    t183 = (x733^(x734<=(x735&x736)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	int64_t x739 = -625782LL;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = 1418498;

    t184 = (x737^(x738<=(x739&x740)));

    if (t184 != -2) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = INT8_MAX;
	static uint16_t x743 = 5U;
	int8_t x744 = INT8_MIN;
	static int32_t t185 = -14756;

    t185 = (x741^(x742<=(x743&x744)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MIN;
	volatile uint8_t x747 = 8U;
	int8_t x748 = -11;
	int32_t t186 = 433;

    t186 = (x745^(x746<=(x747&x748)));

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 78U;
	int16_t x750 = -13;
	int8_t x751 = -1;

    t187 = (x749^(x750<=(x751&x752)));

    if (t187 != 78) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	int16_t x754 = -465;
	static uint32_t x755 = UINT32_MAX;
	int32_t t188 = 100437448;

    t188 = (x753^(x754<=(x755&x756)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x758 = 1U;
	volatile int64_t x759 = -1LL;
	int32_t x760 = INT32_MIN;
	int32_t t189 = 676112141;

    t189 = (x757^(x758<=(x759&x760)));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int8_t x763 = -55;
	static int16_t x764 = 220;
	int32_t t190 = 1941692;

    t190 = (x761^(x762<=(x763&x764)));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x766 = 32014586U;
	uint16_t x767 = 31091U;
	int64_t x768 = INT64_MAX;
	volatile int32_t t191 = 939;

    t191 = (x765^(x766<=(x767&x768)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 16099602LL;
	uint64_t x770 = 470160670428LLU;
	static uint16_t x771 = 137U;
	int64_t x772 = -1LL;
	volatile int64_t t192 = -1LL;

    t192 = (x769^(x770<=(x771&x772)));

    if (t192 != 16099602LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MIN;
	int32_t x775 = 22032189;
	static int64_t x776 = INT64_MIN;
	int64_t t193 = 844560229905LL;

    t193 = (x773^(x774<=(x775&x776)));

    if (t193 != -68877LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MAX;
	int8_t x778 = -1;
	volatile int32_t t194 = 610;

    t194 = (x777^(x778<=(x779&x780)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 6612640285LL;
	int32_t x782 = -79;
	int32_t x784 = INT32_MIN;
	int64_t t195 = -5368530LL;

    t195 = (x781^(x782<=(x783&x784)));

    if (t195 != 6612640284LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x787 = UINT64_MAX;

    t196 = (x785^(x786<=(x787&x788)));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = -1;
	volatile int32_t x790 = -1;
	int16_t x791 = INT16_MAX;
	volatile int8_t x792 = -30;
	volatile int32_t t197 = -444;

    t197 = (x789^(x790<=(x791&x792)));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 22562LLU;
	int64_t x795 = -1LL;
	uint32_t x796 = UINT32_MAX;
	uint64_t t198 = 250159322LLU;

    t198 = (x793^(x794<=(x795&x796)));

    if (t198 != 22563LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x797 = UINT32_MAX;
	static uint64_t x798 = 2524681LLU;
	int8_t x799 = INT8_MAX;
	int32_t x800 = -5004427;

    t199 = (x797^(x798<=(x799&x800)));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

