#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 64LLU;
volatile uint64_t x5 = UINT64_MAX;
uint64_t x16 = UINT64_MAX;
int32_t t4 = 353676;
int64_t x24 = INT64_MIN;
int32_t x28 = -1;
uint16_t x35 = 6U;
static int8_t x37 = -1;
int8_t x44 = 2;
int32_t x45 = INT32_MIN;
static int8_t x47 = 1;
int32_t t13 = -14687023;
uint64_t x64 = 242403291LLU;
volatile int32_t t17 = 2;
int32_t x79 = -179093;
int16_t x83 = INT16_MAX;
static int16_t x84 = 9;
int16_t x87 = 320;
static int16_t x97 = INT16_MIN;
int8_t x99 = -10;
static int32_t x100 = INT32_MIN;
static uint16_t x101 = 2976U;
volatile uint16_t x108 = 3U;
uint8_t x115 = 0U;
volatile int8_t x117 = -1;
int32_t x119 = INT32_MIN;
volatile int64_t x123 = -14601584787010LL;
int32_t t30 = 2258;
int16_t x125 = -2;
static volatile int32_t t32 = 69591;
int16_t x135 = -1;
static uint64_t x143 = UINT64_MAX;
uint8_t x147 = UINT8_MAX;
int16_t x156 = -1;
static uint64_t x157 = 1LLU;
int8_t x158 = INT8_MIN;
int64_t x167 = -1LL;
int8_t x168 = INT8_MIN;
uint8_t x169 = 0U;
static uint8_t x170 = 11U;
int32_t x173 = -121976239;
volatile int32_t t45 = -16140920;
int16_t x185 = -1;
uint32_t x190 = 25231532U;
uint8_t x193 = 55U;
int16_t x199 = INT16_MIN;
volatile int64_t x210 = INT64_MIN;
static volatile int64_t x213 = INT64_MIN;
static uint32_t x219 = 15713604U;
volatile uint16_t x227 = 7940U;
int32_t x233 = INT32_MIN;
uint16_t x234 = 0U;
int8_t x244 = INT8_MIN;
int32_t t60 = -4580;
static int64_t x248 = 596026075468614LL;
static int16_t x249 = -7;
int32_t t62 = -31;
static int32_t t63 = -351;
volatile int8_t x257 = INT8_MIN;
static int16_t x262 = INT16_MIN;
int8_t x267 = 1;
int8_t x273 = INT8_MIN;
int8_t x276 = INT8_MIN;
int32_t t69 = -1;
uint16_t x281 = 568U;
int16_t x283 = INT16_MIN;
static volatile int32_t t72 = 376333;
int32_t t74 = -3568;
uint64_t x302 = 31720909509717LLU;
static uint8_t x304 = UINT8_MAX;
int32_t t76 = -134;
int8_t x318 = INT8_MAX;
uint64_t x319 = UINT64_MAX;
uint64_t x328 = 24097520343LLU;
volatile int8_t x329 = INT8_MIN;
static uint64_t x331 = 1425LLU;
int8_t x332 = INT8_MIN;
volatile int32_t t83 = -94673281;
static int8_t x338 = -1;
int8_t x341 = INT8_MIN;
int32_t t88 = -205769;
int16_t x362 = -1;
int16_t x365 = 1;
volatile int32_t t91 = -1;
volatile int8_t x371 = -1;
static int16_t x378 = INT16_MAX;
static uint16_t x381 = 1U;
volatile int32_t t95 = 37346253;
uint16_t x386 = UINT16_MAX;
int64_t x390 = -1LL;
static volatile uint32_t x392 = 708U;
volatile int16_t x394 = -1;
int32_t x396 = 60;
int32_t x397 = INT32_MIN;
int32_t t99 = 12;


void f0(void) {
	static int8_t x2 = -1;
	static volatile int16_t x3 = INT16_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 295;

	t0 = ((x1<x2)&(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	static int64_t x7 = -1LL;
	uint32_t x8 = 35980140U;
	volatile int32_t t1 = 0;

	t1 = ((x5<x6)&(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 0U;
	int32_t x11 = -1;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -133486970;

	t2 = ((x9<x10)&(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	uint8_t x14 = 2U;
	int8_t x15 = INT8_MIN;
	int32_t t3 = 867;

	t3 = ((x13<x14)&(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 227316134468736LLU;
	static uint16_t x18 = 1160U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = 0;

	t4 = ((x17<x18)&(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = -3;
	int32_t x23 = INT32_MIN;
	int32_t t5 = 1;

	t5 = ((x21<x22)&(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 27U;
	int32_t x26 = 4173493;
	static int16_t x27 = INT16_MAX;
	volatile int32_t t6 = 1;

	t6 = ((x25<x26)&(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile uint16_t x30 = 55U;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 1039743U;
	int32_t t7 = 0;

	t7 = ((x29<x30)&(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 2033487U;
	static int16_t x34 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 1;

	t8 = ((x33<x34)&(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MAX;
	uint32_t x39 = 0U;
	int64_t x40 = -1LL;
	int32_t t9 = 18;

	t9 = ((x37<x38)&(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = -560;
	uint8_t x43 = 12U;
	volatile int32_t t10 = -1;

	t10 = ((x41<x42)&(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	uint8_t x48 = 0U;
	int32_t t11 = -10;

	t11 = ((x45<x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	static int32_t x50 = -144;
	int8_t x51 = -1;
	static int8_t x52 = 14;
	volatile int32_t t12 = 369;

	t12 = ((x49<x50)&(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 767U;
	int64_t x55 = 2048305LL;
	uint8_t x56 = UINT8_MAX;

	t13 = ((x53<x54)&(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 51U;
	static volatile uint8_t x58 = 88U;
	uint32_t x59 = 30036536U;
	uint32_t x60 = 5490394U;
	int32_t t14 = 105;

	t14 = ((x57<x58)&(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint16_t x62 = 381U;
	int32_t x63 = INT32_MAX;
	int32_t t15 = -2046131;

	t15 = ((x61<x62)&(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	uint32_t x66 = 1U;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	static int32_t t16 = -1345222;

	t16 = ((x65<x66)&(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MAX;
	int64_t x71 = -1LL;
	uint8_t x72 = 3U;

	t17 = ((x69<x70)&(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = 0;
	int8_t x75 = 0;
	int32_t x76 = -38892;
	volatile int32_t t18 = 862677404;

	t18 = ((x73<x74)&(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	static int8_t x78 = -35;
	volatile uint8_t x80 = 3U;
	int32_t t19 = 988284;

	t19 = ((x77<x78)&(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	int8_t x82 = INT8_MAX;
	volatile int32_t t20 = 470765;

	t20 = ((x81<x82)&(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	volatile uint8_t x86 = 2U;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 2;

	t21 = ((x85<x86)&(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	uint32_t x91 = 11U;
	static int32_t x92 = 531261274;
	static int32_t t22 = -1021;

	t22 = ((x89<x90)&(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = 4;
	int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MAX;
	volatile int16_t x96 = 1632;
	static int32_t t23 = -263951;

	t23 = ((x93<x94)&(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x98 = INT8_MIN;
	volatile int32_t t24 = 35003;

	t24 = ((x97<x98)&(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	int64_t x104 = -1109768428291870427LL;
	int32_t t25 = 111799579;

	t25 = ((x101<x102)&(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1926342U;
	static int32_t x106 = -13167360;
	int64_t x107 = INT64_MIN;
	int32_t t26 = 3421;

	t26 = ((x105<x106)&(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 973;

	t27 = ((x109<x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int64_t x114 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 6;

	t28 = ((x113<x114)&(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 0U;
	int8_t x120 = 3;
	volatile int32_t t29 = 234413276;

	t29 = ((x117<x118)&(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	volatile int64_t x124 = 1100LL;

	t30 = ((x121<x122)&(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile uint32_t x128 = UINT32_MAX;
	int32_t t31 = 6096;

	t31 = ((x125<x126)&(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 0U;
	uint8_t x130 = 39U;
	int32_t x131 = -1;
	uint8_t x132 = 2U;

	t32 = ((x129<x130)&(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	volatile int32_t x134 = 8;
	static int8_t x136 = -1;
	int32_t t33 = 56744803;

	t33 = ((x133<x134)&(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = 6;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t34 = -968;

	t34 = ((x137<x138)&(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	volatile int16_t x142 = -233;
	int8_t x144 = -1;
	int32_t t35 = -755309;

	t35 = ((x141<x142)&(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 33LLU;
	int16_t x146 = 42;
	uint64_t x148 = 2183970838102892711LLU;
	int32_t t36 = 120;

	t36 = ((x145<x146)&(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	uint16_t x150 = 2U;
	static int16_t x151 = INT16_MAX;
	uint8_t x152 = 4U;
	volatile int32_t t37 = 85639888;

	t37 = ((x149<x150)&(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 77229481518LLU;
	uint16_t x155 = 3U;
	volatile int32_t t38 = -297;

	t38 = ((x153<x154)&(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x159 = 4743471218LLU;
	volatile int8_t x160 = -1;
	volatile int32_t t39 = 4;

	t39 = ((x157<x158)&(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 133;
	uint16_t x162 = 924U;
	int8_t x163 = INT8_MIN;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 2;

	t40 = ((x161<x162)&(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 47U;
	volatile int8_t x166 = INT8_MIN;
	static volatile int32_t t41 = -16820686;

	t41 = ((x165<x166)&(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x171 = INT64_MAX;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 25;

	t42 = ((x169<x170)&(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x174 = INT32_MIN;
	static volatile int8_t x175 = INT8_MIN;
	int64_t x176 = 71LL;
	static volatile int32_t t43 = 4027044;

	t43 = ((x173<x174)&(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 63U;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = -113;
	int8_t x180 = -14;
	volatile int32_t t44 = -23598;

	t44 = ((x177<x178)&(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	static volatile uint8_t x182 = 34U;
	uint32_t x183 = 3304U;
	volatile uint64_t x184 = UINT64_MAX;

	t45 = ((x181<x182)&(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -2404939458970LL;
	uint8_t x187 = 3U;
	static int64_t x188 = -31LL;
	static int32_t t46 = -1283993;

	t46 = ((x185<x186)&(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = 230U;
	uint8_t x191 = 31U;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 240664815;

	t47 = ((x189<x190)&(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 57;
	static int64_t x195 = INT64_MIN;
	uint32_t x196 = 54574694U;
	volatile int32_t t48 = -721080;

	t48 = ((x193<x194)&(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint64_t x198 = 2228637779LLU;
	uint64_t x200 = 47067119635697751LLU;
	volatile int32_t t49 = -13;

	t49 = ((x197<x198)&(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int16_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t50 = -87526;

	t50 = ((x201<x202)&(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 401459872074LLU;
	volatile int64_t x206 = -1LL;
	uint16_t x207 = 15405U;
	volatile int16_t x208 = INT16_MIN;
	int32_t t51 = -13369;

	t51 = ((x205<x206)&(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint32_t x211 = 3U;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 3430;

	t52 = ((x209<x210)&(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x214 = -1;
	static uint8_t x215 = 7U;
	static int8_t x216 = INT8_MAX;
	static volatile int32_t t53 = -775252255;

	t53 = ((x213<x214)&(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	uint32_t x220 = 3853496U;
	int32_t t54 = -1;

	t54 = ((x217<x218)&(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = 1683LL;
	int32_t x222 = INT32_MAX;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -1407;

	t55 = ((x221<x222)&(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static int8_t x226 = -1;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = -471208809;

	t56 = ((x225<x226)&(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	uint16_t x231 = UINT16_MAX;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t57 = -40;

	t57 = ((x229<x230)&(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x235 = -33457578590548980LL;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t58 = 276;

	t58 = ((x233<x234)&(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x238 = 0;
	volatile int32_t x239 = 18493;
	static volatile int16_t x240 = -11203;
	int32_t t59 = 5776041;

	t59 = ((x237<x238)&(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -14394246;
	static volatile int32_t x242 = -1;
	int64_t x243 = INT64_MIN;

	t60 = ((x241<x242)&(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile uint16_t x246 = 152U;
	volatile int64_t x247 = -12153658LL;
	static int32_t t61 = 84401674;

	t61 = ((x245<x246)&(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	static int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;

	t62 = ((x249<x250)&(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int32_t x255 = INT32_MIN;
	volatile int8_t x256 = INT8_MIN;

	t63 = ((x253<x254)&(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = -1;
	int16_t x259 = -7474;
	int16_t x260 = -1;
	static volatile int32_t t64 = 1;

	t64 = ((x257<x258)&(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 11106050;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -161654;

	t65 = ((x261<x262)&(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 621700LL;
	int16_t x266 = -21;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 294942154;

	t66 = ((x265<x266)&(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 118U;
	uint32_t x270 = 4U;
	int8_t x271 = -8;
	static int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = 2;

	t67 = ((x269<x270)&(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -1;
	int8_t x275 = 0;
	volatile int32_t t68 = -23;

	t68 = ((x273<x274)&(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -20;
	static int8_t x279 = 3;
	static uint32_t x280 = UINT32_MAX;

	t69 = ((x277<x278)&(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 247;
	int32_t x284 = -2024565;
	volatile int32_t t70 = 7498;

	t70 = ((x281<x282)&(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = UINT64_MAX;
	static uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 19334;

	t71 = ((x285<x286)&(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = UINT16_MAX;
	static uint32_t x292 = 102U;

	t72 = ((x289<x290)&(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 67U;
	static volatile int8_t x294 = INT8_MIN;
	uint64_t x295 = 0LLU;
	int8_t x296 = INT8_MAX;
	int32_t t73 = 1012860;

	t73 = ((x293<x294)&(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	static int8_t x298 = INT8_MIN;
	int8_t x299 = 1;
	volatile int16_t x300 = INT16_MIN;

	t74 = ((x297<x298)&(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int16_t x303 = -1;
	volatile int32_t t75 = -1;

	t75 = ((x301<x302)&(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	uint16_t x306 = 399U;
	static volatile int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;

	t76 = ((x305<x306)&(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 14751LLU;
	volatile int8_t x310 = -1;
	volatile int8_t x311 = -12;
	int32_t x312 = -1;
	volatile int32_t t77 = 3;

	t77 = ((x309<x310)&(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 0U;
	int16_t x314 = -1;
	static int32_t x315 = 44076;
	int64_t x316 = INT64_MAX;
	int32_t t78 = 0;

	t78 = ((x313<x314)&(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 0;

	t79 = ((x317<x318)&(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -3682;
	static int64_t x322 = 917263826290397LL;
	int64_t x323 = 9808260946368LL;
	static volatile uint16_t x324 = 30U;
	volatile int32_t t80 = 41325687;

	t80 = ((x321<x322)&(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	volatile int8_t x326 = -21;
	uint64_t x327 = UINT64_MAX;
	int32_t t81 = -31580856;

	t81 = ((x325<x326)&(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x330 = 0U;
	volatile int32_t t82 = 22735175;

	t82 = ((x329<x330)&(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 999379U;
	int32_t x335 = -1;
	uint8_t x336 = UINT8_MAX;

	t83 = ((x333<x334)&(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	volatile int32_t t84 = 317;

	t84 = ((x337<x338)&(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MAX;
	int32_t x344 = -1;
	volatile int32_t t85 = -122;

	t85 = ((x341<x342)&(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = 7555;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = 77;
	volatile int32_t t86 = 176;

	t86 = ((x345<x346)&(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 94408086U;
	static int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 1922;

	t87 = ((x349<x350)&(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MAX;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = 19977033;

	t88 = ((x353<x354)&(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int16_t x358 = -3;
	uint8_t x359 = 5U;
	static uint16_t x360 = 646U;
	volatile int32_t t89 = -5480;

	t89 = ((x357<x358)&(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MAX;
	volatile int32_t t90 = 640264;

	t90 = ((x361<x362)&(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x366 = 11414U;
	int64_t x367 = INT64_MIN;
	static uint32_t x368 = UINT32_MAX;

	t91 = ((x365<x366)&(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	volatile uint16_t x370 = 614U;
	int32_t x372 = INT32_MAX;
	int32_t t92 = -2021;

	t92 = ((x369<x370)&(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -123;
	static uint64_t x374 = 731208734801248LLU;
	uint64_t x375 = 1LLU;
	static uint64_t x376 = 8456LLU;
	static int32_t t93 = -1346938;

	t93 = ((x373<x374)&(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x379 = 4;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -8544976;

	t94 = ((x377<x378)&(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x382 = INT8_MIN;
	int64_t x383 = -56668123LL;
	int32_t x384 = -4414328;

	t95 = ((x381<x382)&(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1739635144924147744LL;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = -1;
	volatile int32_t t96 = 943784450;

	t96 = ((x385<x386)&(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 3481770U;
	volatile uint8_t x391 = UINT8_MAX;
	int32_t t97 = 3331;

	t97 = ((x389<x390)&(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	int32_t x395 = INT32_MIN;
	volatile int32_t t98 = -548152275;

	t98 = ((x393<x394)&(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x398 = 87808270;
	int64_t x399 = -3307LL;
	int64_t x400 = 1062LL;

	t99 = ((x397<x398)&(x399==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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
