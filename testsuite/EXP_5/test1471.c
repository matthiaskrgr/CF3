#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x3 = 1U;
int32_t x4 = INT32_MIN;
volatile int32_t t0 = INT32_MIN;
static int8_t x6 = -1;
int8_t x12 = INT8_MIN;
static int32_t x13 = INT32_MIN;
int64_t x16 = -1LL;
volatile int32_t x23 = -62;
volatile int32_t t6 = 392;
int32_t x29 = 2857247;
volatile uint32_t x30 = UINT32_MAX;
uint8_t x32 = 7U;
static volatile int64_t x33 = INT64_MIN;
int16_t x35 = INT16_MIN;
int8_t x37 = 1;
int32_t x41 = -12258872;
int64_t x43 = INT64_MAX;
int64_t x44 = -1LL;
volatile int64_t x45 = -1LL;
static int8_t x46 = 7;
volatile int64_t t11 = 5043468LL;
volatile int8_t x57 = INT8_MIN;
uint32_t x60 = 2U;
int32_t t14 = -4;
int32_t x65 = -1;
uint32_t x66 = 206722U;
int8_t x68 = INT8_MIN;
int64_t x69 = -1LL;
int16_t x80 = INT16_MIN;
volatile int32_t t19 = 116;
int64_t x81 = 122924398LL;
static volatile int64_t x84 = -1LL;
int32_t x89 = INT32_MAX;
int64_t x90 = 2071197978LL;
int32_t x95 = INT32_MIN;
static int64_t x97 = INT64_MIN;
volatile int32_t x100 = -1;
static volatile int16_t x102 = INT16_MIN;
int64_t t25 = INT64_MIN;
volatile int8_t x107 = INT8_MAX;
static volatile int32_t t26 = 5208801;
int64_t x112 = INT64_MIN;
static int8_t x113 = -1;
uint16_t x117 = UINT16_MAX;
static uint16_t x118 = 1989U;
volatile int32_t t29 = 532709019;
uint16_t x122 = UINT16_MAX;
volatile uint8_t x126 = 12U;
int8_t x132 = -1;
int32_t x148 = INT32_MAX;
int16_t x155 = 1607;
volatile uint64_t t38 = 1767082LLU;
uint32_t x157 = 4896U;
volatile uint32_t t39 = 808U;
static int8_t x168 = -3;
int16_t x170 = INT16_MIN;
int16_t x172 = 13;
int32_t t42 = 282;
int32_t x179 = -1;
volatile int32_t t44 = -371698;
int64_t x184 = INT64_MIN;
static volatile int32_t x191 = INT32_MAX;
int32_t x192 = -1;
static volatile int64_t t48 = -7LL;
static uint8_t x201 = 81U;
int32_t t49 = 0;
int32_t x205 = -1;
int32_t x207 = -1;
int64_t x208 = INT64_MIN;
uint8_t x211 = UINT8_MAX;
int32_t x212 = -1;
volatile uint64_t t51 = UINT64_MAX;
volatile uint32_t x214 = UINT32_MAX;
volatile int32_t t53 = 13999550;
static int32_t t54 = 92733;
int16_t x225 = INT16_MIN;
static int32_t t55 = 1;
static int32_t x231 = 10;
int64_t x250 = INT64_MIN;
volatile uint32_t x252 = 19730U;
static volatile int32_t t64 = -272;
static int8_t x280 = INT8_MIN;
int8_t x282 = 0;
static int64_t x283 = INT64_MAX;
int16_t x284 = INT16_MIN;
int64_t x286 = -1LL;
uint32_t x287 = 8502U;
uint32_t x291 = UINT32_MAX;
int32_t x294 = -1;
int16_t x295 = INT16_MIN;
static volatile uint8_t x297 = 29U;
static volatile int64_t x311 = INT64_MAX;
static int8_t x317 = INT8_MAX;
volatile int64_t x320 = INT64_MIN;
uint8_t x329 = UINT8_MAX;
volatile uint16_t x332 = UINT16_MAX;
volatile uint32_t x333 = 459U;
int8_t x334 = INT8_MIN;
int16_t x336 = INT16_MIN;
int16_t x337 = INT16_MAX;
int32_t x344 = -2;
volatile uint32_t x346 = 24U;
volatile int8_t x347 = -1;
int8_t x351 = -6;
volatile int32_t t85 = 9349;
int8_t x355 = 1;
int16_t x357 = 946;
int16_t x358 = -3;
uint16_t x360 = UINT16_MAX;
int32_t x365 = INT32_MIN;
volatile uint16_t x367 = 782U;
static volatile int32_t t89 = INT32_MIN;
int8_t x372 = -1;
static int16_t x373 = -1;
static int32_t x379 = -19529;
volatile uint32_t x380 = 1474253U;
int32_t x383 = INT32_MIN;
int8_t x386 = 1;
uint8_t x388 = 2U;
static uint32_t x390 = 10764U;
volatile uint8_t x394 = UINT8_MAX;
int64_t x397 = 773LL;
uint32_t x398 = 203855U;
static volatile int64_t x401 = -1LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;

	t0 = (x1-((x2<x3)<=x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	uint32_t x7 = 114716299U;
	volatile int16_t x8 = -16;
	static volatile int32_t t1 = INT32_MIN;

	t1 = (x5-((x6<x7)<=x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int64_t x10 = INT64_MIN;
	static int16_t x11 = 7750;
	int64_t t2 = 111481450164LL;

	t2 = (x9-((x10<x11)<=x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x14 = 2U;
	int8_t x15 = INT8_MAX;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x13-((x14<x15)<=x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 60;
	static uint16_t x18 = 7659U;
	uint64_t x19 = 3704LLU;
	static int32_t x20 = -1;
	volatile int32_t t4 = -713;

	t4 = (x17-((x18<x19)<=x20));

	if (t4 != 60) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	uint64_t x22 = 806754LLU;
	int32_t x24 = -1;
	volatile int64_t t5 = 0LL;

	t5 = (x21-((x22<x23)<=x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	volatile int8_t x26 = 11;
	int8_t x27 = 1;
	static volatile uint16_t x28 = UINT16_MAX;

	t6 = (x25-((x26<x27)<=x28));

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = INT32_MIN;
	static int32_t t7 = 53;

	t7 = (x29-((x30<x31)<=x32));

	if (t7 != 2857246) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1949499907186969LL;
	int32_t x36 = -37602;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33-((x34<x35)<=x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 12532847670LL;
	volatile uint8_t x39 = UINT8_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 1580;

	t9 = (x37-((x38<x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	volatile int32_t t10 = 1;

	t10 = (x41-((x42<x43)<=x44));

	if (t10 != -12258872) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x47 = UINT64_MAX;
	volatile int64_t x48 = 1762204345LL;

	t11 = (x45-((x46<x47)<=x48));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -4798;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 25709086535249LLU;
	int32_t t12 = 82791;

	t12 = (x49-((x50<x51)<=x52));

	if (t12 != -4799) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	static uint8_t x54 = UINT8_MAX;
	static volatile int64_t x55 = INT64_MAX;
	static int64_t x56 = INT64_MIN;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53-((x54<x55)<=x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 496U;
	int16_t x59 = INT16_MAX;

	t14 = (x57-((x58<x59)<=x60));

	if (t14 != -129) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -42LL;
	static volatile uint64_t x62 = 136478462718798050LLU;
	uint64_t x63 = 30977LLU;
	uint16_t x64 = 2348U;
	volatile int64_t t15 = 132110LL;

	t15 = (x61-((x62<x63)<=x64));

	if (t15 != -43LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x67 = INT64_MAX;
	static volatile int32_t t16 = 16;

	t16 = (x65-((x66<x67)<=x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = -61050750272LL;
	int16_t x71 = INT16_MIN;
	static int32_t x72 = INT32_MIN;
	int64_t t17 = 38LL;

	t17 = (x69-((x70<x71)<=x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -974;
	static uint32_t x74 = UINT32_MAX;
	static uint8_t x75 = UINT8_MAX;
	volatile int8_t x76 = 1;
	volatile int32_t t18 = -7;

	t18 = (x73-((x74<x75)<=x76));

	if (t18 != -975) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	static int32_t x78 = -420866;
	int8_t x79 = INT8_MIN;

	t19 = (x77-((x78<x79)<=x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;
	volatile int64_t t20 = 222835402077LL;

	t20 = (x81-((x82<x83)<=x84));

	if (t20 != 122924398LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	static volatile int64_t x88 = INT64_MAX;
	volatile int32_t t21 = -127;

	t21 = (x85-((x86<x87)<=x88));

	if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = 28722354186LL;
	int32_t x92 = INT32_MAX;
	static int32_t t22 = 7;

	t22 = (x89-((x90<x91)<=x92));

	if (t22 != 2147483646) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MIN;
	uint32_t x96 = 0U;
	uint64_t t23 = 33406852004994LLU;

	t23 = (x93-((x94<x95)<=x96));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97-((x98<x99)<=x100));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x103 = INT8_MIN;
	int8_t x104 = -1;

	t25 = (x101-((x102<x103)<=x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 39U;
	uint8_t x106 = 24U;
	uint16_t x108 = 2U;

	t26 = (x105-((x106<x107)<=x108));

	if (t26 != 38) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -4262176692799LL;
	uint64_t x110 = UINT64_MAX;
	volatile uint32_t x111 = 5061U;
	int64_t t27 = 86325LL;

	t27 = (x109-((x110<x111)<=x112));

	if (t27 != -4262176692799LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x114 = 6U;
	volatile uint8_t x115 = 117U;
	int8_t x116 = -1;
	volatile int32_t t28 = 100784;

	t28 = (x113-((x114<x115)<=x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = -1;
	int16_t x120 = -12573;

	t29 = (x117-((x118<x119)<=x120));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static uint32_t x123 = 0U;
	static int32_t x124 = INT32_MAX;
	int32_t t30 = -49422;

	t30 = (x121-((x122<x123)<=x124));

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 58U;
	static volatile int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -6;

	t31 = (x125-((x126<x127)<=x128));

	if (t31 != 58) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 0U;
	volatile uint8_t x131 = 28U;
	int32_t t32 = INT32_MIN;

	t32 = (x129-((x130<x131)<=x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 14U;
	uint64_t x134 = 254208184574928LLU;
	static int8_t x135 = 0;
	uint32_t x136 = 2316414U;
	volatile int32_t t33 = -101;

	t33 = (x133-((x134<x135)<=x136));

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 93U;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MAX;
	uint16_t x140 = 1582U;
	volatile int32_t t34 = 164;

	t34 = (x137-((x138<x139)<=x140));

	if (t34 != 92) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 29146;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -3006432;

	t35 = (x141-((x142<x143)<=x144));

	if (t35 != 29146) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	int32_t t36 = 101512771;

	t36 = (x145-((x146<x147)<=x148));

	if (t36 != -32769) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 40U;
	int8_t x150 = 1;
	static volatile uint64_t x151 = 1280148169494087LLU;
	int8_t x152 = 62;
	volatile int32_t t37 = 0;

	t37 = (x149-((x150<x151)<=x152));

	if (t37 != 39) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 30955654146LLU;
	uint32_t x154 = UINT32_MAX;
	uint32_t x156 = 388769U;

	t38 = (x153-((x154<x155)<=x156));

	if (t38 != 30955654145LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	static int64_t x160 = INT64_MIN;

	t39 = (x157-((x158<x159)<=x160));

	if (t39 != 4896U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint16_t x162 = 179U;
	uint64_t x163 = 68439009353LLU;
	uint8_t x164 = 4U;
	volatile int32_t t40 = 211892;

	t40 = (x161-((x162<x163)<=x164));

	if (t40 != -32769) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	static int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	int32_t t41 = -176266080;

	t41 = (x165-((x166<x167)<=x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 3U;
	int16_t x171 = INT16_MIN;

	t42 = (x169-((x170<x171)<=x172));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	uint32_t x175 = 1009766588U;
	static int32_t x176 = INT32_MIN;
	int32_t t43 = INT32_MIN;

	t43 = (x173-((x174<x175)<=x176));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MAX;
	int64_t x180 = -1LL;

	t44 = (x177-((x178<x179)<=x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	static int8_t x182 = INT8_MIN;
	int16_t x183 = 21;
	int32_t t45 = 159849;

	t45 = (x181-((x182<x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 206574;
	int8_t x190 = -2;
	int32_t t46 = 2044520;

	t46 = (x189-((x190<x191)<=x192));

	if (t46 != 206574) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	static int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	volatile uint32_t x196 = 0U;
	volatile int32_t t47 = 0;

	t47 = (x193-((x194<x195)<=x196));

	if (t47 != 2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -348601820165701183LL;
	uint64_t x198 = 7011LLU;
	static uint16_t x199 = 9507U;
	int32_t x200 = INT32_MIN;

	t48 = (x197-((x198<x199)<=x200));

	if (t48 != -348601820165701183LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x202 = 22U;
	int32_t x203 = INT32_MAX;
	volatile uint8_t x204 = UINT8_MAX;

	t49 = (x201-((x202<x203)<=x204));

	if (t49 != 80) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x206 = -59291LL;
	volatile int32_t t50 = -13;

	t50 = (x205-((x206<x207)<=x208));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = -1;

	t51 = (x209-((x210<x211)<=x212));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x215 = 176U;
	uint8_t x216 = 15U;
	int32_t t52 = -18447;

	t52 = (x213-((x214<x215)<=x216));

	if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1154;
	int8_t x218 = 1;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;

	t53 = (x217-((x218<x219)<=x220));

	if (t53 != -1154) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	uint32_t x222 = 29059995U;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MAX;

	t54 = (x221-((x222<x223)<=x224));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	volatile int64_t x228 = INT64_MIN;

	t55 = (x225-((x226<x227)<=x228));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 48U;
	static uint8_t x230 = 19U;
	volatile uint16_t x232 = 18728U;
	volatile int32_t t56 = 53759458;

	t56 = (x229-((x230<x231)<=x232));

	if (t56 != 47) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 0U;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 124U;
	volatile int64_t x236 = INT64_MAX;
	static volatile uint32_t t57 = UINT32_MAX;

	t57 = (x233-((x234<x235)<=x236));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x237 = INT64_MIN;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x237-((x238<x239)<=x240));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	int16_t x242 = -1;
	int64_t x243 = 2765278216LL;
	int16_t x244 = -1;
	volatile int64_t t59 = -31615LL;

	t59 = (x241-((x242<x243)<=x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	static volatile int64_t x246 = -1LL;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = 16;
	int32_t t60 = 244770;

	t60 = (x245-((x246<x247)<=x248));

	if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x251 = 1838308U;
	volatile int32_t t61 = -14390451;

	t61 = (x249-((x250<x251)<=x252));

	if (t61 != -32769) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 372534182960259446LLU;
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MIN;
	static volatile int16_t x256 = -1;
	volatile uint64_t t62 = 5016423147608LLU;

	t62 = (x253-((x254<x255)<=x256));

	if (t62 != 372534182960259446LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	static uint8_t x258 = 99U;
	uint16_t x259 = 72U;
	volatile int16_t x260 = 2467;
	volatile int32_t t63 = -189894227;

	t63 = (x257-((x258<x259)<=x260));

	if (t63 != 2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	static int32_t x267 = 359601718;
	volatile int16_t x268 = INT16_MIN;

	t64 = (x265-((x266<x267)<=x268));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = -1;
	int64_t x270 = -1992750603LL;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	int32_t t65 = 31317816;

	t65 = (x269-((x270<x271)<=x272));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 607;
	int32_t x274 = INT32_MIN;
	static int32_t x275 = 381204136;
	int64_t x276 = INT64_MIN;
	int32_t t66 = -54149996;

	t66 = (x273-((x274<x275)<=x276));

	if (t66 != 607) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 737273449U;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = UINT8_MAX;
	static uint32_t t67 = 1U;

	t67 = (x277-((x278<x279)<=x280));

	if (t67 != 737273449U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x281 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x281-((x282<x283)<=x284));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (x285-((x286<x287)<=x288));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -1LL;
	volatile int32_t x290 = -65223;
	uint32_t x292 = 484648655U;
	int64_t t70 = 10073LL;

	t70 = (x289-((x290<x291)<=x292));

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = INT16_MAX;
	static uint16_t x296 = 13850U;
	int32_t t71 = 899670490;

	t71 = (x293-((x294<x295)<=x296));

	if (t71 != 32766) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x298 = 181595U;
	int8_t x299 = 54;
	volatile uint8_t x300 = 3U;
	int32_t t72 = 351056;

	t72 = (x297-((x298<x299)<=x300));

	if (t72 != 28) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 7U;
	static uint32_t x302 = 108U;
	uint16_t x303 = 435U;
	int64_t x304 = 557444714610031815LL;
	static volatile int32_t t73 = -199370;

	t73 = (x301-((x302<x303)<=x304));

	if (t73 != 6) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 81U;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = 0;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t74 = -607;

	t74 = (x305-((x306<x307)<=x308));

	if (t74 != 80) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 1U;
	static uint32_t x310 = 122U;
	volatile int8_t x312 = INT8_MIN;
	int32_t t75 = 5898;

	t75 = (x309-((x310<x311)<=x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MAX;
	static int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MIN;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t76 = 0;

	t76 = (x313-((x314<x315)<=x316));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x318 = 0;
	int64_t x319 = INT64_MIN;
	int32_t t77 = -55;

	t77 = (x317-((x318<x319)<=x320));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	static int8_t x322 = INT8_MAX;
	volatile int8_t x323 = -1;
	static uint64_t x324 = 18287716550991LLU;
	int32_t t78 = 1731208;

	t78 = (x321-((x322<x323)<=x324));

	if (t78 != -32769) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 86U;
	volatile uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = -1;
	int32_t t79 = -22775038;

	t79 = (x325-((x326<x327)<=x328));

	if (t79 != 86) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -1LL;
	int32_t t80 = 148681656;

	t80 = (x329-((x330<x331)<=x332));

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x335 = -1;
	uint32_t t81 = 39U;

	t81 = (x333-((x334<x335)<=x336));

	if (t81 != 459U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = 0;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	static int32_t t82 = 3;

	t82 = (x337-((x338<x339)<=x340));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 870;
	int32_t x342 = 151371636;
	int8_t x343 = -1;
	int32_t t83 = -232441856;

	t83 = (x341-((x342<x343)<=x344));

	if (t83 != 870) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x345 = -6LL;
	int16_t x348 = 16;
	volatile int64_t t84 = 666996022LL;

	t84 = (x345-((x346<x347)<=x348));

	if (t84 != -7LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = 27;
	volatile uint64_t x352 = 66767544807772450LLU;

	t85 = (x349-((x350<x351)<=x352));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 540U;
	static volatile int8_t x354 = 1;
	volatile int8_t x356 = -1;
	int32_t t86 = 9091;

	t86 = (x353-((x354<x355)<=x356));

	if (t86 != 540) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x359 = -109947111393062LL;
	volatile int32_t t87 = -751;

	t87 = (x357-((x358<x359)<=x360));

	if (t87 != 945) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	volatile uint64_t x363 = 426046LLU;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t88 = -61;

	t88 = (x361-((x362<x363)<=x364));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = -14;
	int64_t x368 = INT64_MIN;

	t89 = (x365-((x366<x367)<=x368));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -8;
	uint8_t x370 = UINT8_MAX;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t t90 = -124042118;

	t90 = (x369-((x370<x371)<=x372));

	if (t90 != -8) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x374 = -1;
	volatile int8_t x375 = -45;
	static uint16_t x376 = UINT16_MAX;
	int32_t t91 = -3786;

	t91 = (x373-((x374<x375)<=x376));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = -1;
	static volatile uint32_t x378 = 205159861U;
	int32_t t92 = -1;

	t92 = (x377-((x378<x379)<=x380));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MAX;
	uint8_t x384 = 1U;
	volatile int32_t t93 = 3;

	t93 = (x381-((x382<x383)<=x384));

	if (t93 != -129) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x385 = INT32_MAX;
	volatile int64_t x387 = 5542933104454366LL;
	volatile int32_t t94 = -13980;

	t94 = (x385-((x386<x387)<=x388));

	if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = 933U;
	static volatile int64_t x391 = -1LL;
	int8_t x392 = 0;
	volatile uint32_t t95 = 546856U;

	t95 = (x389-((x390<x391)<=x392));

	if (t95 != 932U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = -1;
	uint64_t x395 = 57934404834066061LLU;
	int16_t x396 = -67;
	int32_t t96 = 5538;

	t96 = (x393-((x394<x395)<=x396));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x399 = 28962U;
	uint16_t x400 = UINT16_MAX;
	int64_t t97 = 109LL;

	t97 = (x397-((x398<x399)<=x400));

	if (t97 != 772LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	int8_t x404 = -1;
	int64_t t98 = -1179177925LL;

	t98 = (x401-((x402<x403)<=x404));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = -809674;
	uint8_t x406 = UINT8_MAX;
	int32_t x407 = -546406505;
	static int16_t x408 = INT16_MIN;
	static volatile int32_t t99 = 73916431;

	t99 = (x405-((x406<x407)<=x408));

	if (t99 != -809674) { NG(); } else { ; }
	
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


    return 0;
}
