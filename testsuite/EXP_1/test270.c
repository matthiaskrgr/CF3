#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = UINT32_MAX;
volatile int32_t t0 = 3328594;
int64_t x8 = INT64_MIN;
volatile int32_t t1 = -10538;
volatile int16_t x13 = INT16_MIN;
static int8_t x15 = INT8_MIN;
int32_t t3 = 11248;
volatile uint16_t x18 = 13430U;
static int8_t x29 = INT8_MIN;
int32_t t6 = 26419;
static uint8_t x33 = UINT8_MAX;
volatile int16_t x34 = INT16_MAX;
int32_t x36 = INT32_MAX;
int32_t t8 = 1022792686;
uint32_t x42 = UINT32_MAX;
int64_t x44 = -1LL;
static volatile int32_t t9 = -2974;
int16_t x48 = INT16_MIN;
static uint8_t x50 = 12U;
uint64_t x56 = 130645708078647LLU;
int32_t t13 = -570459;
int32_t t15 = -27860537;
int8_t x69 = -1;
int64_t x72 = -55239LL;
int32_t t16 = 36484;
volatile uint8_t x79 = 17U;
int16_t x97 = INT16_MAX;
int32_t x99 = INT32_MIN;
uint64_t x102 = 194LLU;
volatile int32_t x104 = -1;
volatile int8_t x105 = -1;
static uint32_t x117 = 198U;
int16_t x122 = 0;
int32_t x124 = INT32_MAX;
uint16_t x127 = 1944U;
uint32_t x128 = UINT32_MAX;
int32_t x130 = 39609778;
int32_t x132 = -362;
uint16_t x133 = UINT16_MAX;
int32_t t29 = -2;
static uint16_t x141 = UINT16_MAX;
uint16_t x142 = 2896U;
static int16_t x146 = -179;
int16_t x149 = -1200;
int32_t x150 = 5;
int32_t t33 = -1;
volatile uint64_t x155 = 132784174608LLU;
static int32_t t34 = -1;
int8_t x157 = -1;
uint64_t x160 = UINT64_MAX;
int32_t t36 = -1;
uint16_t x165 = 21319U;
int64_t x170 = INT64_MIN;
volatile int64_t x173 = -2662LL;
int32_t t39 = -17;
uint8_t x180 = 13U;
int64_t x190 = 58196536819LL;
static int32_t t45 = -1;
uint16_t x209 = 26001U;
uint8_t x210 = 3U;
static int16_t x213 = -1;
int16_t x216 = INT16_MIN;
int16_t x218 = 206;
int8_t x220 = 15;
volatile int32_t t50 = -1;
int8_t x223 = 0;
uint64_t x226 = UINT64_MAX;
int32_t x227 = 2;
int8_t x238 = -1;
uint64_t x239 = 860120171LLU;
static uint64_t x240 = 1248798876962353419LLU;
int8_t x242 = INT8_MAX;
int8_t x252 = INT8_MIN;
int8_t x253 = -19;
volatile int16_t x273 = INT16_MAX;
static uint16_t x274 = 419U;
static int32_t x277 = -1;
int16_t x280 = INT16_MIN;
int32_t t64 = 102580;
int64_t x286 = -4486548858543448294LL;
int32_t x291 = -1;
volatile int32_t t68 = 29;
int32_t x310 = -1;
volatile int8_t x311 = -1;
int32_t t70 = 17;
int64_t x323 = 31289475055923LL;
static int32_t t74 = 889;
uint64_t x331 = 493800682580LLU;
uint64_t x332 = 453263436LLU;
int16_t x343 = INT16_MAX;
int64_t x344 = INT64_MIN;
static volatile int32_t t76 = 6898;
volatile int64_t x345 = -2037263575LL;
int8_t x349 = -1;
int16_t x351 = INT16_MIN;
int64_t x353 = INT64_MAX;
uint32_t x355 = UINT32_MAX;
int64_t x356 = INT64_MIN;
static volatile int32_t t79 = -251302;
int8_t x365 = INT8_MIN;
static volatile int8_t x369 = -1;
static int16_t x376 = -1;
int32_t t84 = 25495523;
int8_t x399 = -1;
static uint16_t x406 = 25730U;
int64_t x413 = 1724LL;
uint8_t x415 = UINT8_MAX;
int32_t t90 = -2;
uint8_t x418 = 0U;
static int8_t x425 = INT8_MIN;
static int16_t x431 = -7022;
int64_t x432 = INT64_MIN;
static int32_t x436 = INT32_MIN;
uint16_t x437 = UINT16_MAX;
int64_t x439 = INT64_MIN;
volatile int32_t t95 = 290;
int64_t x448 = INT64_MIN;
int32_t t97 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MIN;
	int64_t x4 = 49787150806469138LL;

	t0 = (((x1-x2)==x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x6 = 38475738802748LL;
	int64_t x7 = INT64_MIN;

	t1 = (((x5-x6)==x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x10 = -7;
	uint16_t x11 = 1U;
	uint8_t x12 = 6U;
	int32_t t2 = -580374010;

	t2 = (((x9-x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (((x13-x14)==x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int32_t x19 = 8022;
	volatile int64_t x20 = INT64_MIN;
	int32_t t4 = -3993;

	t4 = (((x17-x18)==x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 227LLU;
	volatile uint32_t x26 = 480U;
	static volatile int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	static int32_t t5 = -23779356;

	t5 = (((x25-x26)==x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x30 = UINT64_MAX;
	static int32_t x31 = 14789977;
	int32_t x32 = INT32_MIN;

	t6 = (((x29-x30)==x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = INT16_MIN;
	int32_t t7 = 1;

	t7 = (((x33-x34)==x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 27416618U;
	volatile int64_t x38 = -3958060630061LL;
	int64_t x39 = -1LL;
	int8_t x40 = -1;

	t8 = (((x37-x38)==x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int64_t x43 = INT64_MAX;

	t9 = (((x41-x42)==x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = -12624;
	int32_t x46 = 792;
	uint64_t x47 = 20535815914824LLU;
	int32_t t10 = 10476860;

	t10 = (((x45-x46)==x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 791U;
	int16_t x51 = 431;
	static uint64_t x52 = 51673208422457LLU;
	int32_t t11 = 898;

	t11 = (((x49-x50)==x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 9402682LLU;
	int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = 1864LLU;
	int32_t t12 = 1;

	t12 = (((x53-x54)==x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 140883492U;
	static volatile int64_t x58 = -1LL;
	uint16_t x59 = 252U;
	int16_t x60 = INT16_MIN;

	t13 = (((x57-x58)==x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x61 = 895LLU;
	int64_t x62 = -23603LL;
	int16_t x63 = -18;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t14 = 1225505;

	t14 = (((x61-x62)==x63)<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 0;
	uint16_t x66 = 92U;
	static int16_t x67 = 1;
	static uint64_t x68 = 122170160833488LLU;

	t15 = (((x65-x66)==x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -1;
	static uint8_t x71 = 6U;

	t16 = (((x69-x70)==x71)<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 27U;
	int16_t x78 = -1;
	int64_t x80 = INT64_MAX;
	volatile int32_t t17 = 489;

	t17 = (((x77-x78)==x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	volatile uint16_t x82 = 463U;
	int16_t x83 = 463;
	static volatile int32_t x84 = INT32_MAX;
	int32_t t18 = 10384;

	t18 = (((x81-x82)==x83)<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 3;
	volatile int32_t x90 = -2535754;
	volatile int64_t x91 = INT64_MAX;
	int8_t x92 = 3;
	volatile int32_t t19 = -908;

	t19 = (((x89-x90)==x91)<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -92LL;
	int16_t x94 = -1;
	int8_t x95 = 1;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t20 = 4095;

	t20 = (((x93-x94)==x95)<=x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x98 = INT16_MIN;
	int32_t x100 = -4902802;
	static int32_t t21 = -36529;

	t21 = (((x97-x98)==x99)<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x103 = -1;
	int32_t t22 = 0;

	t22 = (((x101-x102)==x103)<=x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = 2614540LLU;
	volatile uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 3140314012663577LLU;
	volatile int32_t t23 = 363;

	t23 = (((x105-x106)==x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = 911393;
	static volatile uint64_t x115 = UINT64_MAX;
	uint8_t x116 = UINT8_MAX;
	static int32_t t24 = -166;

	t24 = (((x113-x114)==x115)<=x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x118 = INT32_MAX;
	uint64_t x119 = 824LLU;
	int32_t x120 = INT32_MAX;
	volatile int32_t t25 = 98837381;

	t25 = (((x117-x118)==x119)<=x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 19U;
	uint16_t x123 = 2614U;
	int32_t t26 = -4048;

	t26 = (((x121-x122)==x123)<=x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	volatile int32_t x126 = INT32_MIN;
	volatile int32_t t27 = -14455073;

	t27 = (((x125-x126)==x127)<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = INT32_MAX;
	uint32_t x131 = UINT32_MAX;
	int32_t t28 = 123815;

	t28 = (((x129-x130)==x131)<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = INT16_MIN;
	uint8_t x135 = 54U;
	uint32_t x136 = 1404862U;

	t29 = (((x133-x134)==x135)<=x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = INT16_MAX;
	int8_t x139 = -33;
	uint8_t x140 = 1U;
	static volatile int32_t t30 = -1853514;

	t30 = (((x137-x138)==x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x143 = INT8_MAX;
	int16_t x144 = 8;
	int32_t t31 = -227778;

	t31 = (((x141-x142)==x143)<=x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 5;
	int8_t x147 = -23;
	uint32_t x148 = 12U;
	volatile int32_t t32 = -63;

	t32 = (((x145-x146)==x147)<=x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x151 = 21U;
	uint8_t x152 = 5U;

	t33 = (((x149-x150)==x151)<=x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	int8_t x156 = -1;

	t34 = (((x153-x154)==x155)<=x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x158 = UINT32_MAX;
	static int64_t x159 = INT64_MAX;
	volatile int32_t t35 = -7305471;

	t35 = (((x157-x158)==x159)<=x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -44468;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 8704626U;
	int32_t x164 = -1;

	t36 = (((x161-x162)==x163)<=x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x166 = 32U;
	static int64_t x167 = INT64_MIN;
	static int16_t x168 = INT16_MIN;
	int32_t t37 = 408;

	t37 = (((x165-x166)==x167)<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MAX;
	static volatile int32_t t38 = -5206854;

	t38 = (((x169-x170)==x171)<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x174 = 124U;
	volatile uint32_t x175 = 873601U;
	uint16_t x176 = 0U;

	t39 = (((x173-x174)==x175)<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = 27;
	volatile int32_t x179 = INT32_MAX;
	int32_t t40 = -65869;

	t40 = (((x177-x178)==x179)<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 4;
	int8_t x182 = -23;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t41 = 310;

	t41 = (((x181-x182)==x183)<=x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = 2074069U;
	uint8_t x186 = UINT8_MAX;
	volatile uint16_t x187 = UINT16_MAX;
	int64_t x188 = 2090729769164LL;
	volatile int32_t t42 = 985624848;

	t42 = (((x185-x186)==x187)<=x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = 212432533LL;
	static int64_t x191 = 102671488720306LL;
	int8_t x192 = -12;
	volatile int32_t t43 = -1290020;

	t43 = (((x189-x190)==x191)<=x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x193 = -1;
	int32_t x194 = -1;
	int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MIN;
	int32_t t44 = 630;

	t44 = (((x193-x194)==x195)<=x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	static int64_t x199 = -2962LL;
	static int32_t x200 = -5203;

	t45 = (((x197-x198)==x199)<=x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = -58LL;
	int8_t x202 = -2;
	volatile int16_t x203 = INT16_MIN;
	uint32_t x204 = 47256332U;
	int32_t t46 = 3;

	t46 = (((x201-x202)==x203)<=x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	static volatile uint64_t x206 = 185530459LLU;
	int8_t x207 = INT8_MIN;
	static volatile uint32_t x208 = 2650933U;
	volatile int32_t t47 = -486085890;

	t47 = (((x205-x206)==x207)<=x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x211 = UINT16_MAX;
	volatile int8_t x212 = -1;
	volatile int32_t t48 = -7466258;

	t48 = (((x209-x210)==x211)<=x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x214 = INT64_MIN;
	static volatile uint16_t x215 = 6867U;
	volatile int32_t t49 = 11517272;

	t49 = (((x213-x214)==x215)<=x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MAX;
	int8_t x219 = INT8_MAX;

	t50 = (((x217-x218)==x219)<=x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x221 = 4614U;
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t51 = 19606451;

	t51 = (((x221-x222)==x223)<=x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = 5339U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t52 = 322943147;

	t52 = (((x225-x226)==x227)<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 55U;
	volatile uint16_t x234 = 476U;
	int32_t x235 = 62171354;
	static int32_t x236 = INT32_MAX;
	volatile int32_t t53 = 48373270;

	t53 = (((x233-x234)==x235)<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	int32_t t54 = 237721604;

	t54 = (((x237-x238)==x239)<=x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = 1699;
	volatile int64_t x243 = INT64_MAX;
	static volatile int64_t x244 = INT64_MIN;
	int32_t t55 = 5864;

	t55 = (((x241-x242)==x243)<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 1U;
	static uint32_t x247 = 241U;
	int8_t x248 = INT8_MIN;
	int32_t t56 = -6333;

	t56 = (((x245-x246)==x247)<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x249 = INT32_MAX;
	uint8_t x250 = UINT8_MAX;
	static volatile int32_t x251 = INT32_MIN;
	static int32_t t57 = -56074;

	t57 = (((x249-x250)==x251)<=x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x254 = 2U;
	int8_t x255 = -61;
	int64_t x256 = -1LL;
	volatile int32_t t58 = 39980;

	t58 = (((x253-x254)==x255)<=x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile uint64_t x258 = 50874636758268LLU;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	volatile int32_t t59 = 2;

	t59 = (((x257-x258)==x259)<=x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = -1LL;
	static volatile int8_t x263 = INT8_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t60 = -2;

	t60 = (((x261-x262)==x263)<=x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x269 = 178;
	volatile int64_t x270 = -38115333300609LL;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	int32_t t61 = -2315111;

	t61 = (((x269-x270)==x271)<=x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x275 = -1;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t62 = -4;

	t62 = (((x273-x274)==x275)<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x278 = 96U;
	int8_t x279 = 51;
	volatile int32_t t63 = 1;

	t63 = (((x277-x278)==x279)<=x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = INT8_MAX;
	static uint8_t x282 = UINT8_MAX;
	volatile int16_t x283 = 0;
	uint32_t x284 = UINT32_MAX;

	t64 = (((x281-x282)==x283)<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x285 = -1LL;
	int8_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t65 = -1602766;

	t65 = (((x285-x286)==x287)<=x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = 5;
	uint64_t x290 = UINT64_MAX;
	uint8_t x292 = 3U;
	int32_t t66 = 148016612;

	t66 = (((x289-x290)==x291)<=x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = -1;
	static uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	static int64_t x300 = INT64_MIN;
	int32_t t67 = -2256328;

	t67 = (((x297-x298)==x299)<=x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = 343U;
	int64_t x302 = INT64_MAX;
	static int32_t x303 = -818;
	static int32_t x304 = 21948;

	t68 = (((x301-x302)==x303)<=x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 164U;
	int64_t x306 = -1LL;
	uint32_t x307 = 1330U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t69 = 219734;

	t69 = (((x305-x306)==x307)<=x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = 508168LLU;
	uint64_t x312 = 15LLU;

	t70 = (((x309-x310)==x311)<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = -1;
	uint64_t x314 = 1LLU;
	static volatile int8_t x315 = -1;
	static uint32_t x316 = 107931157U;
	volatile int32_t t71 = 484;

	t71 = (((x313-x314)==x315)<=x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = -357;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 30LLU;
	int64_t x320 = INT64_MIN;
	volatile int32_t t72 = -577;

	t72 = (((x317-x318)==x319)<=x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = -1;
	uint32_t x322 = 12U;
	volatile int64_t x324 = INT64_MIN;
	int32_t t73 = 391;

	t73 = (((x321-x322)==x323)<=x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 3647282844560LLU;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;

	t74 = (((x325-x326)==x327)<=x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = -1;
	int32_t x330 = -5;
	volatile int32_t t75 = 1134;

	t75 = (((x329-x330)==x331)<=x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = UINT8_MAX;
	volatile uint16_t x342 = 1267U;

	t76 = (((x341-x342)==x343)<=x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x346 = -1;
	int8_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	int32_t t77 = 1;

	t77 = (((x345-x346)==x347)<=x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x350 = -1;
	static int64_t x352 = 99123987LL;
	int32_t t78 = -39343;

	t78 = (((x349-x350)==x351)<=x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x354 = 168U;

	t79 = (((x353-x354)==x355)<=x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -3;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = 1558;
	volatile int16_t x360 = -1;
	int32_t t80 = 967;

	t80 = (((x357-x358)==x359)<=x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = INT32_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t81 = 3016356;

	t81 = (((x365-x366)==x367)<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x370 = 4U;
	uint16_t x371 = 12807U;
	int64_t x372 = -264362310465712LL;
	static volatile int32_t t82 = 100551709;

	t82 = (((x369-x370)==x371)<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = 1503494LL;
	volatile int16_t x375 = -236;
	static int32_t t83 = 3;

	t83 = (((x373-x374)==x375)<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x381 = -45124;
	uint16_t x382 = 82U;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = 7U;

	t84 = (((x381-x382)==x383)<=x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x385 = UINT8_MAX;
	uint16_t x386 = 67U;
	int32_t x387 = -41985;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t85 = 6019;

	t85 = (((x385-x386)==x387)<=x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = -211490348;
	int64_t x390 = -19772LL;
	static int8_t x391 = 0;
	int16_t x392 = 1335;
	volatile int32_t t86 = 20458936;

	t86 = (((x389-x390)==x391)<=x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MAX;
	uint32_t x398 = 403332U;
	int32_t x400 = INT32_MIN;
	int32_t t87 = 564968712;

	t87 = (((x397-x398)==x399)<=x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = UINT32_MAX;
	int8_t x402 = 1;
	static volatile int16_t x403 = -29;
	int16_t x404 = -34;
	volatile int32_t t88 = -1;

	t88 = (((x401-x402)==x403)<=x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = 1;
	volatile int16_t x407 = -1798;
	int16_t x408 = -1;
	static volatile int32_t t89 = 840641625;

	t89 = (((x405-x406)==x407)<=x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x414 = INT8_MIN;
	int16_t x416 = INT16_MIN;

	t90 = (((x413-x414)==x415)<=x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = 1024027640;
	int8_t x419 = INT8_MIN;
	volatile int16_t x420 = -1;
	static int32_t t91 = 30101943;

	t91 = (((x417-x418)==x419)<=x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x426 = -1;
	uint8_t x427 = 1U;
	volatile int16_t x428 = -1;
	int32_t t92 = 709;

	t92 = (((x425-x426)==x427)<=x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = 1474354829876727316LL;
	static uint64_t x430 = 1668557LLU;
	volatile int32_t t93 = 6472;

	t93 = (((x429-x430)==x431)<=x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x433 = UINT16_MAX;
	int16_t x434 = 5;
	int32_t x435 = 0;
	volatile int32_t t94 = 8859091;

	t94 = (((x433-x434)==x435)<=x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x438 = UINT64_MAX;
	volatile int8_t x440 = -1;

	t95 = (((x437-x438)==x439)<=x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MIN;
	static int8_t x443 = INT8_MAX;
	int16_t x444 = INT16_MAX;
	int32_t t96 = -55314;

	t96 = (((x441-x442)==x443)<=x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x445 = 0U;
	static uint16_t x446 = 11U;
	int64_t x447 = -1LL;

	t97 = (((x445-x446)==x447)<=x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x449 = 42067448961LLU;
	int16_t x450 = INT16_MIN;
	int8_t x451 = 2;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t98 = -100;

	t98 = (((x449-x450)==x451)<=x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = -1;
	int8_t x454 = INT8_MIN;
	static uint16_t x455 = 24402U;
	uint16_t x456 = 175U;
	int32_t t99 = 0;

	t99 = (((x453-x454)==x455)<=x456);

	if (t99 != 1) { NG(); } else { ; }
	
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
