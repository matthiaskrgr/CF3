
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

volatile int32_t x1 = INT32_MIN;
static int32_t x7 = 1419;
uint32_t x10 = UINT32_MAX;
volatile int8_t x16 = INT8_MAX;
volatile int8_t x17 = -8;
static int16_t x22 = INT16_MAX;
int64_t x23 = -1LL;
static int8_t x28 = INT8_MAX;
int32_t t6 = -211563775;
int64_t x31 = INT64_MIN;
static volatile int64_t t7 = -12LL;
int8_t x33 = INT8_MIN;
volatile int64_t x35 = INT64_MIN;
int16_t x36 = INT16_MIN;
static volatile int8_t x45 = INT8_MIN;
int32_t t11 = 5345503;
uint16_t x49 = 39U;
volatile int64_t t13 = -378LL;
static int64_t x58 = 10LL;
uint64_t x66 = 318821276872LLU;
static uint16_t x77 = 7U;
uint32_t x79 = UINT32_MAX;
static uint64_t x91 = UINT64_MAX;
volatile int64_t x98 = 6294331557988069LL;
static uint64_t x99 = 26533459542489LLU;
static uint16_t x122 = 1U;
volatile uint8_t x124 = UINT8_MAX;
volatile int32_t x125 = 303600;
static uint16_t x135 = 115U;
volatile int32_t t34 = -9757;
uint8_t x141 = 5U;
static int16_t x144 = 0;
volatile int32_t t35 = 17711633;
volatile uint16_t x147 = 101U;
uint16_t x148 = UINT16_MAX;
int16_t x151 = -126;
int32_t x154 = -419523154;
static int16_t x159 = INT16_MAX;
int64_t x175 = -561564484299LL;
static volatile uint64_t x177 = 2756LLU;
int16_t x183 = INT16_MIN;
int64_t x191 = -1029614099632LL;
uint16_t x192 = UINT16_MAX;
volatile int32_t t47 = -824933221;
volatile int16_t x196 = INT16_MIN;
int64_t x200 = INT64_MAX;
volatile int64_t x202 = INT64_MIN;
int8_t x207 = -1;
int64_t x212 = INT64_MIN;
int16_t x215 = -13493;
int32_t x223 = -1;
volatile int32_t t56 = -1407;
int8_t x229 = INT8_MIN;
static int32_t t57 = -48656;
volatile int64_t x244 = INT64_MAX;
volatile int64_t t60 = INT64_MAX;
uint16_t x253 = 368U;
static int8_t x254 = 13;
int32_t t63 = 2;
int32_t x262 = -1;
static uint32_t x263 = 194564U;
volatile int64_t t66 = 136564241528437899LL;
int32_t x275 = INT32_MIN;
int64_t x277 = INT64_MIN;
int64_t x279 = INT64_MAX;
static volatile int32_t t70 = 124778;
uint64_t x286 = 283404LLU;
static volatile int32_t x287 = INT32_MIN;
volatile int16_t x296 = INT16_MIN;
uint32_t t73 = 7929U;
uint16_t x299 = UINT16_MAX;
volatile int32_t x300 = INT32_MAX;
int64_t x301 = 126LL;
int64_t t75 = 2788468LL;
int16_t x305 = -1;
uint16_t x308 = 107U;
static uint64_t x313 = 25698134157471099LLU;
int8_t x315 = INT8_MIN;
uint64_t t78 = 11523565LLU;
uint16_t x324 = UINT16_MAX;
volatile int64_t t80 = INT64_MAX;
volatile int16_t x327 = INT16_MIN;
uint32_t x330 = UINT32_MAX;
int8_t x331 = 3;
volatile int64_t t82 = 7LL;
static int16_t x333 = 1;
volatile int16_t x354 = INT16_MAX;
volatile int8_t x356 = 17;
volatile int32_t x358 = INT32_MIN;
volatile int64_t t90 = 963536LL;
int64_t x370 = -4640869095697063LL;
uint32_t x372 = UINT32_MAX;
uint32_t t92 = UINT32_MAX;
int8_t x373 = INT8_MIN;
static volatile int64_t t93 = 4156LL;
uint64_t x382 = UINT64_MAX;
volatile uint64_t x384 = UINT64_MAX;
volatile uint32_t t98 = 35136U;
uint32_t x398 = UINT32_MAX;
uint32_t x401 = UINT32_MAX;
uint16_t x402 = 16U;
int32_t x412 = -1;
uint64_t t104 = 136126479504237LLU;
int32_t x424 = INT32_MIN;
uint32_t x426 = 33188U;
int32_t x430 = INT32_MIN;
uint8_t x435 = UINT8_MAX;
uint64_t x437 = UINT64_MAX;
uint8_t x440 = UINT8_MAX;
uint64_t x443 = UINT64_MAX;
uint64_t x448 = UINT64_MAX;
volatile int8_t x451 = INT8_MIN;
int64_t x455 = -1LL;
int32_t x460 = -19494356;
static int8_t x462 = INT8_MIN;
volatile uint64_t x465 = 2LLU;
uint16_t x477 = 362U;
int8_t x478 = 52;
volatile uint32_t t119 = UINT32_MAX;
uint32_t x484 = 2309U;
int16_t x498 = INT16_MIN;
static volatile int64_t x499 = -1LL;
volatile uint64_t t124 = 2LLU;
static int32_t x508 = INT32_MIN;
volatile int32_t t126 = -4647994;
uint32_t x512 = 99820932U;
volatile int8_t x513 = INT8_MAX;
int32_t x514 = -1;
int16_t x516 = INT16_MIN;
int16_t x518 = INT16_MIN;
static int16_t x520 = 13;
uint32_t t129 = 233178U;
int8_t x526 = -19;
volatile int64_t t131 = -107390789735LL;
int32_t x534 = -2243;
int16_t x540 = 146;
int32_t x546 = INT32_MAX;
int64_t x547 = INT64_MAX;
int64_t x548 = INT64_MIN;
uint16_t x551 = UINT16_MAX;
static volatile uint32_t t137 = 1931071U;
uint32_t x556 = 57660U;
volatile uint32_t t138 = 606U;
uint8_t x561 = 38U;
volatile uint64_t x563 = UINT64_MAX;
volatile int64_t t141 = 63LL;
static volatile int32_t x574 = -42;
static uint16_t x575 = 253U;
volatile uint64_t t143 = UINT64_MAX;
static int64_t x577 = -1LL;
int16_t x579 = INT16_MIN;
int64_t t148 = -97592022581745208LL;
static uint16_t x597 = 1U;
int32_t x605 = INT32_MIN;
volatile int32_t t151 = -6998;
int32_t t152 = -28;
uint8_t x614 = 32U;
int16_t x616 = INT16_MIN;
uint32_t x619 = 62U;
uint64_t x621 = 1132LLU;
uint64_t x635 = 110917953LLU;
static int32_t t158 = 14051763;
uint8_t x641 = 29U;
static volatile uint8_t x644 = 20U;
volatile int32_t t161 = 85668;
uint16_t x653 = 124U;
volatile uint8_t x662 = 41U;
static uint8_t x667 = 1U;
volatile int16_t x671 = -12;
uint8_t x672 = 10U;
uint8_t x674 = 23U;
int8_t x677 = -1;
volatile int32_t x681 = -1;
int8_t x689 = -1;
uint32_t x695 = 497731U;
volatile int64_t x697 = -191111987LL;
static int32_t x699 = -1;
int16_t x701 = -1;
int32_t x712 = INT32_MIN;
int8_t x717 = -1;
volatile int64_t x719 = INT64_MAX;
volatile uint8_t x720 = UINT8_MAX;
int32_t x722 = INT32_MIN;
uint16_t x724 = 17U;
static uint64_t x731 = UINT64_MAX;
int64_t x733 = INT64_MAX;
volatile int32_t t184 = 0;
static int32_t x742 = -11;
int8_t x745 = 8;
volatile int16_t x759 = -389;
int16_t x764 = INT16_MAX;
int8_t x767 = -1;
static volatile uint32_t x769 = 101285970U;
volatile uint32_t t192 = 108U;
int16_t x776 = INT16_MIN;
int32_t x782 = 1;
int64_t x791 = 1244LL;
int8_t x792 = INT8_MAX;
int16_t x796 = 220;


void f0(void) {
    	int16_t x2 = 502;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -348;

    t0 = (x1|((x2>x3)|x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 3;
	static int8_t x6 = INT8_MIN;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

    t1 = (x5|((x6>x7)|x8));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 91U;
	static int16_t x11 = -6084;
	int64_t x12 = 7LL;
	int64_t t2 = -214835869248190LL;

    t2 = (x9|((x10>x11)|x12));

    if (t2 != 95LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	uint8_t x14 = 13U;
	uint32_t x15 = 469850U;
	volatile int64_t t3 = INT64_MAX;

    t3 = (x13|((x14>x15)|x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = UINT64_MAX;
	volatile int16_t x19 = -13;
	int32_t x20 = -13271;
	int32_t t4 = 31;

    t4 = (x17|((x18>x19)|x20));

    if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 4;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -2670082;

    t5 = (x21|((x22>x23)|x24));

    if (t5 != -32763) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1006;
	volatile uint16_t x26 = UINT16_MAX;
	static int32_t x27 = 113547511;

    t6 = (x25|((x26>x27)|x28));

    if (t6 != -897) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint16_t x30 = 2U;
	uint16_t x32 = UINT16_MAX;

    t7 = (x29|((x30>x31)|x32));

    if (t7 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = INT16_MIN;
	int32_t t8 = -4759207;

    t8 = (x33|((x34>x35)|x36));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = 169810994;
	int32_t x38 = -1;
	int32_t x39 = -1;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 558;

    t9 = (x37|((x38>x39)|x40));

    if (t9 != -78) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = -1933;
	int8_t x44 = -37;
	int32_t t10 = 274;

    t10 = (x41|((x42>x43)|x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 66U;
	volatile int64_t x47 = INT64_MIN;
	static uint16_t x48 = 1U;

    t11 = (x45|((x46>x47)|x48));

    if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x50 = UINT16_MAX;
	volatile int64_t x51 = INT64_MIN;
	uint8_t x52 = 25U;
	int32_t t12 = -29945;

    t12 = (x49|((x50>x51)|x52));

    if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = 1;
	int32_t x55 = -1;
	uint8_t x56 = UINT8_MAX;

    t13 = (x53|((x54>x55)|x56));

    if (t13 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = 1099591;

    t14 = (x57|((x58>x59)|x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	volatile int64_t x62 = INT64_MIN;
	uint8_t x63 = 0U;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 25942144;

    t15 = (x61|((x62>x63)|x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 0;
	uint64_t x67 = 2LLU;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 7;

    t16 = (x65|((x66>x67)|x68));

    if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static uint32_t x70 = 2370533U;
	uint8_t x71 = 118U;
	static int64_t x72 = 944193597466840LL;
	volatile int64_t t17 = 5863468205789LL;

    t17 = (x69|((x70>x71)|x72));

    if (t17 != -9222427843257308967LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 27536176105LLU;
	volatile uint64_t t18 = 589766166498LLU;

    t18 = (x73|((x74>x75)|x76));

    if (t18 != 30064771071LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x78 = INT64_MIN;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -48;

    t19 = (x77|((x78>x79)|x80));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -58;
	static uint8_t x82 = 13U;
	int32_t x83 = -1;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = -278304;

    t20 = (x81|((x82>x83)|x84));

    if (t20 != -57) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = 167U;
	volatile int8_t x88 = INT8_MIN;
	volatile int64_t t21 = 8370LL;

    t21 = (x85|((x86>x87)|x88));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x89 = INT16_MAX;
	volatile int16_t x90 = INT16_MAX;
	int64_t x92 = -804009LL;
	int64_t t22 = -1334990LL;

    t22 = (x89|((x90>x91)|x92));

    if (t22 != -786433LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = 9718096611810LLU;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	volatile int64_t t23 = 102508LL;

    t23 = (x93|((x94>x95)|x96));

    if (t23 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = 13;
	int16_t x100 = 5172;
	volatile int32_t t24 = -29141781;

    t24 = (x97|((x98>x99)|x100));

    if (t24 != 5181) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = -113051316;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = INT8_MIN;
	int8_t x104 = -1;
	int32_t t25 = 43384636;

    t25 = (x101|((x102>x103)|x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int32_t x106 = INT32_MIN;
	int64_t x107 = -681LL;
	int16_t x108 = INT16_MIN;
	int32_t t26 = -27298931;

    t26 = (x105|((x106>x107)|x108));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	static int16_t x110 = -1;
	int64_t x111 = INT64_MAX;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = -21281LL;

    t27 = (x109|((x110>x111)|x112));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int32_t x114 = INT32_MIN;
	volatile int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t28 = 3628241706312806LL;

    t28 = (x113|((x114>x115)|x116));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 6U;
	volatile int16_t x118 = INT16_MIN;
	static int32_t x119 = INT32_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -153114;

    t29 = (x117|((x118>x119)|x120));

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	static int32_t x123 = INT32_MIN;
	int32_t t30 = 82859757;

    t30 = (x121|((x122>x123)|x124));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x126 = 11580152684LL;
	static int64_t x127 = INT64_MIN;
	uint16_t x128 = 0U;
	volatile int32_t t31 = -83100776;

    t31 = (x125|((x126>x127)|x128));

    if (t31 != 303601) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -1223;
	int16_t x130 = 32;
	int64_t x131 = INT64_MIN;
	static volatile int32_t x132 = 677818;
	int32_t t32 = -273323;

    t32 = (x129|((x130>x131)|x132));

    if (t32 != -69) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 9U;
	uint16_t x134 = 0U;
	volatile int16_t x136 = -1;
	volatile int32_t t33 = 161;

    t33 = (x133|((x134>x135)|x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	volatile uint16_t x140 = UINT16_MAX;

    t34 = (x137|((x138>x139)|x140));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MIN;
	int16_t x143 = 416;

    t35 = (x141|((x142>x143)|x144));

    if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static volatile uint64_t x146 = UINT64_MAX;
	int32_t t36 = -28;

    t36 = (x145|((x146>x147)|x148));

    if (t36 != -2147418113) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint16_t x150 = 3U;
	volatile int8_t x152 = INT8_MIN;
	int32_t t37 = -60;

    t37 = (x149|((x150>x151)|x152));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	static volatile uint64_t t38 = UINT64_MAX;

    t38 = (x153|((x154>x155)|x156));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -208140;

    t39 = (x157|((x158>x159)|x160));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -151840091519LL;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int64_t x164 = INT64_MAX;
	static int64_t t40 = -120LL;

    t40 = (x161|((x162>x163)|x164));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	int64_t x168 = 4401LL;
	uint64_t t41 = UINT64_MAX;

    t41 = (x165|((x166>x167)|x168));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int32_t x170 = -7659916;
	int16_t x171 = INT16_MIN;
	static uint16_t x172 = 961U;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = (x169|((x170>x171)|x172));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = 15797U;
	volatile int16_t x174 = INT16_MAX;
	int8_t x176 = INT8_MIN;
	static uint32_t t43 = 2377635U;

    t43 = (x173|((x174>x175)|x176));

    if (t43 != 4294967221U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x178 = UINT16_MAX;
	int8_t x179 = -43;
	uint32_t x180 = UINT32_MAX;
	static uint64_t t44 = 2694304573101357LLU;

    t44 = (x177|((x178>x179)|x180));

    if (t44 != 4294967295LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	int64_t x182 = 1627087LL;
	uint64_t x184 = 116318213951281702LLU;
	uint64_t t45 = UINT64_MAX;

    t45 = (x181|((x182>x183)|x184));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 1U;
	int64_t x186 = 513428391184413039LL;
	int16_t x187 = 24;
	int16_t x188 = 6;
	static volatile int32_t t46 = -921;

    t46 = (x185|((x186>x187)|x188));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 4U;
	int64_t x190 = -1LL;

    t47 = (x189|((x190>x191)|x192));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	int32_t x194 = -2;
	static volatile int64_t x195 = INT64_MIN;
	static int32_t t48 = -61;

    t48 = (x193|((x194>x195)|x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	static uint32_t x198 = 13077379U;
	uint32_t x199 = 31U;
	volatile int64_t t49 = 148668024210090877LL;

    t49 = (x197|((x198>x199)|x200));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 48U;
	int64_t x203 = INT64_MIN;
	volatile int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = 5;

    t50 = (x201|((x202>x203)|x204));

    if (t50 != -2147483600) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static volatile int32_t x206 = INT32_MIN;
	int64_t x208 = 552LL;
	volatile int64_t t51 = 171761LL;

    t51 = (x205|((x206>x207)|x208));

    if (t51 != -9223372036854775256LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = 0U;
	static volatile uint64_t x210 = 24870296799LLU;
	int16_t x211 = INT16_MAX;
	volatile int64_t t52 = 3631703388942598282LL;

    t52 = (x209|((x210>x211)|x212));

    if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 13U;
	static int32_t x214 = -397598;
	static uint16_t x216 = 34U;
	int32_t t53 = -232501750;

    t53 = (x213|((x214>x215)|x216));

    if (t53 != 47) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 201783829U;
	int8_t x218 = 1;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t54 = 414U;

    t54 = (x217|((x218>x219)|x220));

    if (t54 != 2349267477U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = -1;
	int32_t x224 = 7371;
	static int32_t t55 = -1794247;

    t55 = (x221|((x222>x223)|x224));

    if (t55 != 7423) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1;
	int16_t x226 = -13;
	static volatile int8_t x227 = INT8_MAX;
	int32_t x228 = 24139939;

    t56 = (x225|((x226>x227)|x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = -384;
	uint32_t x231 = 115075004U;
	static volatile uint16_t x232 = 1201U;

    t57 = (x229|((x230>x231)|x232));

    if (t57 != -79) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MAX;
	static int32_t x235 = INT32_MIN;
	static uint32_t x236 = 0U;
	static uint32_t t58 = 1U;

    t58 = (x233|((x234>x235)|x236));

    if (t58 != 4294934529U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	volatile int32_t x238 = -23;
	int16_t x239 = 1;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t59 = INT64_MIN;

    t59 = (x237|((x238>x239)|x240));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MAX;
	int32_t x242 = -271;
	uint64_t x243 = 20187462LLU;

    t60 = (x241|((x242>x243)|x244));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -5;
	static int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	static int64_t x248 = INT64_MIN;
	int64_t t61 = 0LL;

    t61 = (x245|((x246>x247)|x248));

    if (t61 != -5LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 79U;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = -490011;

    t62 = (x249|((x250>x251)|x252));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x255 = 2U;
	uint16_t x256 = UINT16_MAX;

    t63 = (x253|((x254>x255)|x256));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 26761583433291LLU;
	volatile int16_t x258 = -1;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = 4;
	static uint64_t t64 = 31792921LLU;

    t64 = (x257|((x258>x259)|x260));

    if (t64 != 26761583433295LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 394U;
	int8_t x264 = -1;
	volatile int32_t t65 = -1;

    t65 = (x261|((x262>x263)|x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -3LL;
	int16_t x266 = INT16_MIN;
	static volatile int64_t x267 = INT64_MIN;
	int16_t x268 = -1951;

    t66 = (x265|((x266>x267)|x268));

    if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	volatile uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1;
	volatile int32_t t67 = 424;

    t67 = (x269|((x270>x271)|x272));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = 4075;
	static volatile uint16_t x274 = 181U;
	int8_t x276 = 25;
	volatile int32_t t68 = 1;

    t68 = (x273|((x274>x275)|x276));

    if (t68 != 4091) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = 1;
	uint16_t x280 = 3U;
	int64_t t69 = 250LL;

    t69 = (x277|((x278>x279)|x280));

    if (t69 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 3U;
	static uint8_t x282 = UINT8_MAX;
	int16_t x283 = -3057;
	static volatile int16_t x284 = 204;

    t70 = (x281|((x282>x283)|x284));

    if (t70 != 207) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 988297649509058LL;
	volatile int16_t x288 = -1;
	volatile int64_t t71 = -26LL;

    t71 = (x285|((x286>x287)|x288));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int16_t x290 = -3;
	int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = -96;

    t72 = (x289|((x290>x291)|x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 4297U;
	int16_t x294 = -1;
	int64_t x295 = -4143457301652LL;

    t73 = (x293|((x294>x295)|x296));

    if (t73 != 4294938825U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 0U;
	static int64_t x298 = 1907326525359455687LL;
	static int32_t t74 = INT32_MAX;

    t74 = (x297|((x298>x299)|x300));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x302 = 26U;
	uint8_t x303 = 5U;
	int32_t x304 = 336146261;

    t75 = (x301|((x302>x303)|x304));

    if (t75 != 336146303LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = 25;
	static int16_t x307 = -1;
	static int32_t t76 = -15028;

    t76 = (x305|((x306>x307)|x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	volatile int64_t x311 = 59026228LL;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 7;

    t77 = (x309|((x310>x311)|x312));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x314 = UINT64_MAX;
	int16_t x316 = INT16_MIN;

    t78 = (x313|((x314>x315)|x316));

    if (t78 != 18446744073709530491LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	volatile int64_t x320 = 50827044314964LL;
	int64_t t79 = 483LL;

    t79 = (x317|((x318>x319)|x320));

    if (t79 != -8364LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = INT64_MAX;
	int32_t x322 = 1417;
	static volatile int16_t x323 = INT16_MIN;

    t80 = (x321|((x322>x323)|x324));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	volatile int64_t x326 = INT64_MAX;
	static int8_t x328 = -1;
	volatile int32_t t81 = 61971446;

    t81 = (x325|((x326>x327)|x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x332 = INT64_MAX;

    t82 = (x329|((x330>x331)|x332));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MAX;
	volatile int16_t x335 = INT16_MAX;
	static int64_t x336 = INT64_MIN;
	static volatile int64_t t83 = -975LL;

    t83 = (x333|((x334>x335)|x336));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 0U;
	int8_t x338 = -2;
	int16_t x339 = INT16_MAX;
	int16_t x340 = -1;
	int32_t t84 = 10;

    t84 = (x337|((x338>x339)|x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -16;
	int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	int64_t x344 = -1LL;
	volatile int64_t t85 = 1026460874047455LL;

    t85 = (x341|((x342>x343)|x344));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 30124375;
	int32_t x346 = -217632;
	uint64_t x347 = 2839615LLU;
	int64_t x348 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

    t86 = (x345|((x346>x347)|x348));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	static int32_t x350 = -1;
	uint64_t x351 = 5LLU;
	volatile int64_t x352 = INT64_MIN;
	static volatile int64_t t87 = -15314LL;

    t87 = (x349|((x350>x351)|x352));

    if (t87 != -2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	static int64_t x355 = -1LL;
	int64_t t88 = INT64_MAX;

    t88 = (x353|((x354>x355)|x356));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = UINT8_MAX;
	volatile int8_t x359 = INT8_MAX;
	static int64_t x360 = INT64_MIN;
	int64_t t89 = 1716942LL;

    t89 = (x357|((x358>x359)|x360));

    if (t89 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = -2561688955LL;
	volatile uint64_t x362 = UINT64_MAX;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = -1LL;

    t90 = (x361|((x362>x363)|x364));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	int64_t x366 = -59992219399LL;
	int16_t x367 = -1611;
	int32_t x368 = 1651;
	volatile int32_t t91 = 17127242;

    t91 = (x365|((x366>x367)|x368));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MIN;
	volatile uint16_t x371 = UINT16_MAX;

    t92 = (x369|((x370>x371)|x372));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x374 = INT64_MIN;
	int64_t x375 = 4272237095LL;
	int64_t x376 = -727311123174847LL;

    t93 = (x373|((x374>x375)|x376));

    if (t93 != -63LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MAX;
	static int8_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int16_t x380 = INT16_MIN;
	int64_t t94 = -2970053326270584239LL;

    t94 = (x377|((x378>x379)|x380));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -28;
	static int64_t x383 = -1LL;
	uint64_t t95 = UINT64_MAX;

    t95 = (x381|((x382>x383)|x384));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 47997U;
	uint8_t x386 = 32U;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = 7U;
	static uint32_t t96 = 64129040U;

    t96 = (x385|((x386>x387)|x388));

    if (t96 != 47999U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	volatile int32_t x390 = INT32_MAX;
	volatile int32_t x391 = -1;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = 27255;

    t97 = (x389|((x390>x391)|x392));

    if (t97 != -32513) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 573308781U;
	int16_t x394 = INT16_MIN;
	int64_t x395 = 1926LL;
	volatile int32_t x396 = 1677;

    t98 = (x393|((x394>x395)|x396));

    if (t98 != 573308909U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MAX;
	volatile int64_t x399 = 6LL;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

    t99 = (x397|((x398>x399)|x400));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x403 = 0U;
	uint32_t x404 = 257945051U;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = (x401|((x402>x403)|x404));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = INT32_MIN;
	static int32_t x406 = 2886;
	int64_t x407 = INT64_MAX;
	static int16_t x408 = -1;
	int32_t t101 = 18482229;

    t101 = (x405|((x406>x407)|x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MIN;
	int32_t x411 = -1;
	int32_t t102 = -8027783;

    t102 = (x409|((x410>x411)|x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 1U;
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = 1;
	static int32_t t103 = 315550;

    t103 = (x413|((x414>x415)|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x417 = 52LLU;
	int64_t x418 = -11113691068LL;
	int64_t x419 = -181498LL;
	int64_t x420 = 1LL;

    t104 = (x417|((x418>x419)|x420));

    if (t104 != 53LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 9931;
	int16_t x422 = INT16_MIN;
	uint32_t x423 = UINT32_MAX;
	int32_t t105 = -2555;

    t105 = (x421|((x422>x423)|x424));

    if (t105 != -2147473717) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -29852;
	static uint32_t x427 = 663249897U;
	volatile int32_t x428 = -1;
	int32_t t106 = 11009195;

    t106 = (x425|((x426>x427)|x428));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 6U;
	int16_t x431 = 2;
	int16_t x432 = -1197;
	volatile int32_t t107 = 61326324;

    t107 = (x429|((x430>x431)|x432));

    if (t107 != -1193) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x433 = -1;
	uint64_t x434 = UINT64_MAX;
	int64_t x436 = INT64_MIN;
	static int64_t t108 = -4162084630LL;

    t108 = (x433|((x434>x435)|x436));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = UINT32_MAX;
	static volatile int64_t x439 = 3076999989LL;
	uint64_t t109 = UINT64_MAX;

    t109 = (x437|((x438>x439)|x440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	static int64_t x444 = INT64_MAX;
	volatile int64_t t110 = INT64_MAX;

    t110 = (x441|((x442>x443)|x444));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	static int8_t x446 = INT8_MAX;
	int16_t x447 = -1;
	static volatile uint64_t t111 = UINT64_MAX;

    t111 = (x445|((x446>x447)|x448));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MAX;
	int16_t x450 = -1;
	uint32_t x452 = 21U;
	uint32_t t112 = 187U;

    t112 = (x449|((x450>x451)|x452));

    if (t112 != 127U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	static int32_t x454 = 59;
	int16_t x456 = -1;
	volatile int32_t t113 = 34321;

    t113 = (x453|((x454>x455)|x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 23819210LLU;
	int16_t x458 = INT16_MAX;
	uint32_t x459 = 1482149086U;
	uint64_t t114 = 8LLU;

    t114 = (x457|((x458>x459)|x460));

    if (t114 != 18446744073709550574LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	static int8_t x463 = -1;
	int8_t x464 = 1;
	volatile int32_t t115 = 894293;

    t115 = (x461|((x462>x463)|x464));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = INT16_MIN;
	uint8_t x467 = 12U;
	int32_t x468 = -1;
	uint64_t t116 = UINT64_MAX;

    t116 = (x465|((x466>x467)|x468));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = -163365468508346LL;
	int16_t x470 = -1;
	int16_t x471 = -1;
	int8_t x472 = -25;
	volatile int64_t t117 = -471581LL;

    t117 = (x469|((x470>x471)|x472));

    if (t117 != -25LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -13;
	static volatile int64_t x474 = INT64_MIN;
	uint64_t x475 = 432LLU;
	int64_t x476 = INT64_MIN;
	int64_t t118 = -26928345299815LL;

    t118 = (x473|((x474>x475)|x476));

    if (t118 != -13LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x479 = 3U;
	static volatile uint32_t x480 = UINT32_MAX;

    t119 = (x477|((x478>x479)|x480));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 22;
	static int64_t x482 = -998031502855273912LL;
	int16_t x483 = INT16_MIN;
	volatile uint32_t t120 = 266985U;

    t120 = (x481|((x482>x483)|x484));

    if (t120 != 2327U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	volatile uint16_t x486 = 22U;
	uint32_t x487 = 92625971U;
	static uint32_t x488 = UINT32_MAX;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = (x485|((x486>x487)|x488));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 46U;
	volatile int16_t x490 = INT16_MIN;
	int8_t x491 = INT8_MIN;
	static uint64_t x492 = 0LLU;
	uint64_t t122 = 44317231LLU;

    t122 = (x489|((x490>x491)|x492));

    if (t122 != 46LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	volatile int64_t x494 = -15779LL;
	uint32_t x495 = 33624446U;
	int16_t x496 = INT16_MIN;
	int32_t t123 = -2;

    t123 = (x493|((x494>x495)|x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 30930110599512322LLU;
	static int16_t x500 = -212;

    t124 = (x497|((x498>x499)|x500));

    if (t124 != 18446744073709551406LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 190U;
	static int64_t x502 = INT64_MIN;
	static int64_t x503 = 1005539877638271005LL;
	static uint64_t x504 = UINT64_MAX;
	uint64_t t125 = UINT64_MAX;

    t125 = (x501|((x502>x503)|x504));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = -1;
	uint16_t x506 = 14286U;
	int16_t x507 = -3;

    t126 = (x505|((x506>x507)|x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	int64_t x510 = -1LL;
	int64_t x511 = INT64_MIN;
	static int64_t t127 = INT64_MAX;

    t127 = (x509|((x510>x511)|x512));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x515 = INT64_MIN;
	int32_t t128 = 2697378;

    t128 = (x513|((x514>x515)|x516));

    if (t128 != -32641) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = 8774U;
	int32_t x519 = INT32_MAX;

    t129 = (x517|((x518>x519)|x520));

    if (t129 != 8783U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	static int8_t x522 = -20;
	int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MIN;
	volatile int32_t t130 = -971385;

    t130 = (x521|((x522>x523)|x524));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	static int16_t x527 = INT16_MAX;
	volatile int32_t x528 = INT32_MIN;

    t131 = (x525|((x526>x527)|x528));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	static int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MIN;
	int64_t x532 = 3467987052878612LL;
	int64_t t132 = -36686448LL;

    t132 = (x529|((x530>x531)|x532));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	int64_t x535 = 8796145842259158LL;
	int64_t x536 = INT64_MIN;
	volatile int64_t t133 = 471393436132574056LL;

    t133 = (x533|((x534>x535)|x536));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x538 = 97536031;
	volatile int8_t x539 = -57;
	int32_t t134 = 6614548;

    t134 = (x537|((x538>x539)|x540));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	int16_t x543 = -97;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = -54;

    t135 = (x541|((x542>x543)|x544));

    if (t135 != -2147483521) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -1LL;
	int64_t t136 = -3LL;

    t136 = (x545|((x546>x547)|x548));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	static uint64_t x550 = 410408177020564LLU;
	uint32_t x552 = 710707U;

    t137 = (x549|((x550>x551)|x552));

    if (t137 != 710911U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x553 = 1356519431U;
	int64_t x554 = INT64_MAX;
	uint16_t x555 = 757U;

    t138 = (x553|((x554>x555)|x556));

    if (t138 != 1356527935U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 121LLU;
	volatile int8_t x558 = 1;
	int8_t x559 = 0;
	uint64_t x560 = UINT64_MAX;
	uint64_t t139 = UINT64_MAX;

    t139 = (x557|((x558>x559)|x560));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -1;
	uint64_t x564 = 43739066532399760LLU;
	static uint64_t t140 = 7154834550661496960LLU;

    t140 = (x561|((x562>x563)|x564));

    if (t140 != 43739066532399798LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = UINT16_MAX;
	static uint32_t x567 = UINT32_MAX;
	int64_t x568 = INT64_MAX;

    t141 = (x565|((x566>x567)|x568));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	uint32_t x570 = 37U;
	int8_t x571 = 24;
	uint64_t x572 = 659367733LLU;
	uint64_t t142 = UINT64_MAX;

    t142 = (x569|((x570>x571)|x572));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 6665843436317425090LLU;
	int64_t x576 = -1LL;

    t143 = (x573|((x574>x575)|x576));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = INT16_MAX;
	int64_t x580 = INT64_MIN;
	static volatile int64_t t144 = -372935569234567LL;

    t144 = (x577|((x578>x579)|x580));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	volatile int8_t x582 = 0;
	int32_t x583 = -1;
	int8_t x584 = INT8_MIN;
	static volatile int32_t t145 = 372;

    t145 = (x581|((x582>x583)|x584));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -16LL;
	static volatile int64_t x586 = 48175221245365LL;
	volatile int64_t x587 = INT64_MIN;
	volatile int32_t x588 = -1;
	volatile int64_t t146 = 3306322191570754LL;

    t146 = (x585|((x586>x587)|x588));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint64_t x590 = UINT64_MAX;
	int8_t x591 = -1;
	static int8_t x592 = INT8_MIN;
	static int32_t t147 = 0;

    t147 = (x589|((x590>x591)|x592));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -36574402748035190LL;
	int8_t x594 = INT8_MAX;
	static int64_t x595 = INT64_MIN;
	volatile int8_t x596 = INT8_MIN;

    t148 = (x593|((x594>x595)|x596));

    if (t148 != -117LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = 2;
	uint64_t x599 = 26LLU;
	int32_t x600 = 1;
	int32_t t149 = -168379075;

    t149 = (x597|((x598>x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	static uint8_t x603 = UINT8_MAX;
	int64_t x604 = -1LL;
	int64_t t150 = 126289LL;

    t150 = (x601|((x602>x603)|x604));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x606 = -1LL;
	volatile uint8_t x607 = 122U;
	int8_t x608 = 1;

    t151 = (x605|((x606>x607)|x608));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 134337601;
	uint8_t x610 = UINT8_MAX;
	int64_t x611 = -1LL;
	int8_t x612 = INT8_MIN;

    t152 = (x609|((x610>x611)|x612));

    if (t152 != -63) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -13;
	static int8_t x615 = 38;
	int32_t t153 = 147;

    t153 = (x613|((x614>x615)|x616));

    if (t153 != -13) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = 5768;
	int8_t x618 = INT8_MAX;
	static int16_t x620 = -1;
	static int32_t t154 = -664;

    t154 = (x617|((x618>x619)|x620));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MAX;
	int8_t x623 = INT8_MAX;
	uint8_t x624 = 1U;
	static uint64_t t155 = 1038667862LLU;

    t155 = (x621|((x622>x623)|x624));

    if (t155 != 1133LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 19U;
	volatile int8_t x626 = -1;
	uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t156 = 119;

    t156 = (x625|((x626>x627)|x628));

    if (t156 != -2147483629) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = 4;
	uint16_t x630 = 764U;
	static int32_t x631 = INT32_MAX;
	int8_t x632 = INT8_MIN;
	static volatile int32_t t157 = 5;

    t157 = (x629|((x630>x631)|x632));

    if (t157 != -124) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 98U;
	static int32_t x634 = INT32_MIN;
	volatile uint16_t x636 = 2U;

    t158 = (x633|((x634>x635)|x636));

    if (t158 != 99) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 11019;
	static volatile int32_t x638 = -2838521;
	int8_t x639 = -1;
	int32_t x640 = INT32_MIN;
	volatile int32_t t159 = -3380;

    t159 = (x637|((x638>x639)|x640));

    if (t159 != -2147472629) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x642 = -428;
	int8_t x643 = INT8_MIN;
	int32_t t160 = -35233676;

    t160 = (x641|((x642>x643)|x644));

    if (t160 != 29) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = -1;
	volatile uint32_t x646 = 89317971U;
	int16_t x647 = INT16_MIN;
	int32_t x648 = INT32_MAX;

    t161 = (x645|((x646>x647)|x648));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x649 = UINT8_MAX;
	int16_t x650 = 59;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t162 = -5;

    t162 = (x649|((x650>x651)|x652));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = INT16_MIN;
	volatile uint32_t x655 = 716999699U;
	int32_t x656 = 83;
	int32_t t163 = 59;

    t163 = (x653|((x654>x655)|x656));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = -9271;
	int8_t x659 = INT8_MIN;
	uint16_t x660 = 58U;
	volatile int32_t t164 = -1341;

    t164 = (x657|((x658>x659)|x660));

    if (t164 != -70) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	int64_t x663 = INT64_MAX;
	uint32_t x664 = 518522U;
	volatile int64_t t165 = 112946LL;

    t165 = (x661|((x662>x663)|x664));

    if (t165 != -9223372036854257286LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x666 = -93516446295LL;
	int16_t x668 = -4;
	volatile int32_t t166 = 172;

    t166 = (x665|((x666>x667)|x668));

    if (t166 != -4) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 8229U;
	volatile int64_t x670 = INT64_MAX;
	uint32_t t167 = 18U;

    t167 = (x669|((x670>x671)|x672));

    if (t167 != 8239U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x673 = UINT64_MAX;
	volatile int64_t x675 = -1LL;
	uint64_t x676 = 5226059806047767LLU;
	static uint64_t t168 = UINT64_MAX;

    t168 = (x673|((x674>x675)|x676));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x678 = 357U;
	volatile int64_t x679 = -1LL;
	static int32_t x680 = INT32_MIN;
	int32_t t169 = 49;

    t169 = (x677|((x678>x679)|x680));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x682 = 27U;
	uint64_t x683 = UINT64_MAX;
	uint16_t x684 = 20U;
	int32_t t170 = -181;

    t170 = (x681|((x682>x683)|x684));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MIN;
	int8_t x686 = -3;
	static int16_t x687 = INT16_MAX;
	int16_t x688 = INT16_MAX;
	volatile int64_t t171 = -11581657026247LL;

    t171 = (x685|((x686>x687)|x688));

    if (t171 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MIN;
	int8_t x691 = -1;
	int64_t x692 = INT64_MIN;
	volatile int64_t t172 = 0LL;

    t172 = (x689|((x690>x691)|x692));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x693 = 29;
	int8_t x694 = -4;
	static uint32_t x696 = UINT32_MAX;
	static uint32_t t173 = UINT32_MAX;

    t173 = (x693|((x694>x695)|x696));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	static int16_t x700 = INT16_MIN;
	volatile int64_t t174 = 32656051533056LL;

    t174 = (x697|((x698>x699)|x700));

    if (t174 != -9011LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = 4702884U;
	int16_t x703 = -1;
	int8_t x704 = INT8_MIN;
	static int32_t t175 = -504;

    t175 = (x701|((x702>x703)|x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = INT16_MIN;
	int32_t x707 = -332883;
	static uint64_t x708 = 2449816886630LLU;
	uint64_t t176 = 185918LLU;

    t176 = (x705|((x706>x707)|x708));

    if (t176 != 18446744073247595879LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = INT16_MIN;
	int32_t x711 = INT32_MAX;
	static int64_t t177 = 51924324980470123LL;

    t177 = (x709|((x710>x711)|x712));

    if (t177 != -2147483648LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = INT16_MAX;
	uint16_t x714 = 0U;
	static int8_t x715 = INT8_MAX;
	int16_t x716 = -49;
	int32_t t178 = 8;

    t178 = (x713|((x714>x715)|x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x718 = 552153937879372LLU;
	int32_t t179 = -14;

    t179 = (x717|((x718>x719)|x720));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1990LLU;
	static int16_t x723 = INT16_MIN;
	static uint64_t t180 = 94675697790606943LLU;

    t180 = (x721|((x722>x723)|x724));

    if (t180 != 2007LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	uint64_t x726 = 112240958782LLU;
	int16_t x727 = INT16_MIN;
	volatile int8_t x728 = 1;
	volatile int32_t t181 = -483841266;

    t181 = (x725|((x726>x727)|x728));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = -1250;
	int64_t x730 = INT64_MIN;
	int64_t x732 = INT64_MAX;
	int64_t t182 = 1916073004202589LL;

    t182 = (x729|((x730>x731)|x732));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MAX;
	static uint64_t x735 = 25730439549068420LLU;
	uint32_t x736 = 6U;
	volatile int64_t t183 = INT64_MAX;

    t183 = (x733|((x734>x735)|x736));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	static int8_t x738 = INT8_MAX;
	volatile int8_t x739 = -19;
	uint8_t x740 = 1U;

    t184 = (x737|((x738>x739)|x740));

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	int64_t x743 = -171LL;
	int8_t x744 = -1;
	static volatile int32_t t185 = -5391950;

    t185 = (x741|((x742>x743)|x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = -1;
	int16_t x747 = 1;
	int32_t x748 = INT32_MAX;
	volatile int32_t t186 = INT32_MAX;

    t186 = (x745|((x746>x747)|x748));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	int8_t x750 = INT8_MIN;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = INT32_MIN;
	volatile int64_t t187 = -1710517444640516097LL;

    t187 = (x749|((x750>x751)|x752));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MAX;
	int32_t x754 = INT32_MIN;
	static volatile int64_t x755 = INT64_MAX;
	uint16_t x756 = 0U;
	volatile int32_t t188 = INT32_MAX;

    t188 = (x753|((x754>x755)|x756));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = 0LL;
	static int64_t x758 = 244285392651LL;
	uint32_t x760 = 520002U;
	volatile int64_t t189 = -14234922LL;

    t189 = (x757|((x758>x759)|x760));

    if (t189 != 520003LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -3027461012748624293LL;
	int8_t x762 = -1;
	int8_t x763 = INT8_MAX;
	static int64_t t190 = -1675LL;

    t190 = (x761|((x762>x763)|x764));

    if (t190 != -3027461012748599297LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	uint32_t x766 = 38690U;
	volatile int16_t x768 = -31;
	static int64_t t191 = 49994361247898LL;

    t191 = (x765|((x766>x767)|x768));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x770 = INT16_MIN;
	static int8_t x771 = INT8_MIN;
	static int16_t x772 = 1;

    t192 = (x769|((x770>x771)|x772));

    if (t192 != 101285971U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x773 = 14142035976315795LLU;
	uint32_t x774 = 1863U;
	int8_t x775 = -1;
	uint64_t t193 = 59417784LLU;

    t193 = (x773|((x774>x775)|x776));

    if (t193 != 18446744073709544339LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	uint8_t x778 = UINT8_MAX;
	int8_t x779 = -7;
	uint8_t x780 = 5U;
	volatile int64_t t194 = -445272592LL;

    t194 = (x777|((x778>x779)|x780));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = INT16_MAX;
	static uint16_t x783 = UINT16_MAX;
	int16_t x784 = -10;
	int32_t t195 = 134158075;

    t195 = (x781|((x782>x783)|x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 455U;
	uint64_t x786 = 1912347139337557LLU;
	int32_t x787 = -3211;
	int32_t x788 = INT32_MIN;
	volatile uint32_t t196 = 832U;

    t196 = (x785|((x786>x787)|x788));

    if (t196 != 2147484103U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 10U;
	int32_t x790 = INT32_MAX;
	int32_t t197 = -25220;

    t197 = (x789|((x790>x791)|x792));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	static int32_t x794 = -6721;
	volatile uint16_t x795 = 7U;
	static uint64_t t198 = UINT64_MAX;

    t198 = (x793|((x794>x795)|x796));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = -16202573296333LL;
	uint16_t x798 = UINT16_MAX;
	uint32_t x799 = 198082672U;
	volatile int32_t x800 = INT32_MIN;
	int64_t t199 = -1LL;

    t199 = (x797|((x798>x799)|x800));

    if (t199 != -1956655821LL) { NG(); } else { ; }
	
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

