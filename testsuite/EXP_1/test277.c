#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 6445;
uint16_t x12 = UINT16_MAX;
static int32_t x13 = -1;
static int8_t x19 = INT8_MIN;
volatile int32_t t5 = 119289498;
int64_t x26 = INT64_MAX;
int32_t x27 = -14032558;
int32_t t8 = -56131;
int32_t t9 = -732559613;
int32_t t10 = 0;
int32_t x51 = INT32_MAX;
int32_t t12 = 1823507;
int32_t x57 = INT32_MIN;
int32_t t13 = 29;
volatile int32_t t14 = -2499566;
int64_t x81 = INT64_MAX;
int64_t x85 = INT64_MAX;
int64_t x89 = -4112592578LL;
static int8_t x94 = INT8_MIN;
static uint8_t x95 = UINT8_MAX;
volatile uint64_t x103 = UINT64_MAX;
int32_t t21 = -141;
int32_t x111 = -1;
uint16_t x115 = UINT16_MAX;
int64_t x120 = INT64_MIN;
int32_t t26 = -11712;
volatile int16_t x129 = INT16_MIN;
int64_t t27 = -496905LL;
static volatile int32_t x136 = INT32_MAX;
int8_t x137 = -5;
int32_t x138 = 3;
volatile int16_t x158 = 41;
volatile int32_t x160 = -50235879;
volatile int64_t x161 = INT64_MIN;
static int64_t x163 = 12LL;
int32_t t36 = -3;
int64_t x169 = -1LL;
int64_t x172 = -1LL;
volatile int64_t x184 = INT64_MIN;
int64_t t38 = -9LL;
static int8_t x191 = -6;
volatile int32_t t40 = -44322562;
int32_t x197 = -1;
volatile uint8_t x200 = UINT8_MAX;
int8_t x203 = -1;
int64_t t43 = 104965027251LL;
int16_t x205 = INT16_MIN;
int32_t t44 = -10499;
int16_t x211 = INT16_MIN;
volatile uint64_t x213 = 51430LLU;
uint8_t x214 = 4U;
int32_t t49 = 0;
static int8_t x238 = -1;
int8_t x239 = INT8_MAX;
volatile int32_t x251 = -2;
volatile int32_t t52 = 12035;
uint64_t x253 = 2229403677945364LLU;
volatile int32_t x254 = INT32_MAX;
volatile int32_t x268 = INT32_MIN;
static int16_t x290 = -1;
uint64_t t57 = 28536675095211LLU;
volatile int8_t x297 = INT8_MIN;
uint16_t x300 = 8U;
volatile int32_t t59 = 14734;
int16_t x309 = -1;
volatile uint8_t x310 = 3U;
int32_t x311 = INT32_MIN;
volatile int32_t t62 = 13056;
static int16_t x314 = INT16_MIN;
static int16_t x318 = 20;
int16_t x319 = INT16_MAX;
static volatile int32_t t64 = 1;
uint8_t x323 = 5U;
int64_t x329 = INT64_MAX;
int32_t x331 = INT32_MIN;
volatile int32_t t68 = 745882072;
static volatile int8_t x339 = -1;
volatile int64_t t69 = -4358LL;
int8_t x345 = INT8_MAX;
uint8_t x346 = 3U;
int32_t x353 = INT32_MIN;
volatile int8_t x355 = INT8_MIN;
static uint8_t x359 = UINT8_MAX;
int16_t x363 = -1;
int16_t x365 = INT16_MIN;
int64_t x372 = INT64_MIN;
volatile uint8_t x377 = 45U;
int16_t x380 = INT16_MAX;
int32_t t77 = 6850502;
int32_t t78 = -917851358;
uint8_t x385 = 1U;
static int64_t x387 = -1LL;
uint8_t x391 = 3U;
uint16_t x394 = 4U;
int8_t x395 = 0;
uint64_t x397 = 101692176LLU;
volatile int64_t t82 = -1928319864LL;
uint32_t x402 = 4857864U;
volatile int32_t t83 = 155;
uint8_t x409 = 2U;
volatile int16_t x413 = INT16_MAX;
int64_t x414 = INT64_MAX;
int64_t x417 = INT64_MIN;
int32_t x420 = INT32_MAX;
int32_t x421 = INT32_MIN;
uint64_t x424 = UINT64_MAX;
int16_t x427 = INT16_MIN;
int32_t x428 = INT32_MIN;
int32_t t89 = 1;
int16_t x433 = 274;
uint64_t x437 = UINT64_MAX;
uint32_t x438 = 11192307U;
static uint16_t x446 = 2070U;
uint64_t x449 = 3298922LLU;
volatile uint64_t t93 = 126667LLU;
static volatile int64_t x453 = -1LL;
static int16_t x462 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint16_t x2 = 94U;
	volatile int64_t x3 = 14307015746523950LL;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -991579523;

	t0 = (((x1-x2)<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static uint16_t x6 = UINT16_MAX;
	uint64_t x7 = 3340840015642LLU;
	static uint16_t x8 = UINT16_MAX;

	t1 = (((x5-x6)<x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = 48;
	volatile int32_t t2 = -227;

	t2 = (((x9-x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	volatile uint64_t x16 = 11LLU;
	uint64_t t3 = 195131484128200811LLU;

	t3 = (((x13-x14)<x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	static volatile int32_t x18 = 140988;
	int64_t x20 = -130924150162154434LL;
	static volatile int64_t t4 = 290255373653706456LL;

	t4 = (((x17-x18)<x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 55;
	static uint16_t x23 = 18244U;
	uint16_t x24 = UINT16_MAX;

	t5 = (((x21-x22)<x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = -717LL;

	t6 = (((x25-x26)<x27)/x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	int8_t x35 = -5;
	static int16_t x36 = -1;
	volatile int32_t t7 = -859;

	t7 = (((x33-x34)<x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static uint16_t x38 = 0U;
	int8_t x39 = 1;
	int8_t x40 = -34;

	t8 = (((x37-x38)<x39)/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 1U;
	int16_t x44 = INT16_MIN;

	t9 = (((x41-x42)<x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = -162145;
	uint32_t x47 = 5U;
	static int8_t x48 = 1;

	t10 = (((x45-x46)<x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 28370302U;
	volatile int32_t x50 = -1;
	int8_t x52 = 1;
	int32_t t11 = 43840001;

	t11 = (((x49-x50)<x51)/x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	uint8_t x55 = 118U;
	int32_t x56 = -1;

	t12 = (((x53-x54)<x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x58 = INT16_MIN;
	static int16_t x59 = -1;
	int16_t x60 = INT16_MAX;

	t13 = (((x57-x58)<x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = -1;
	volatile int64_t x62 = 1LL;
	volatile int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MIN;

	t14 = (((x61-x62)<x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	static int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	int8_t x80 = -5;
	static volatile int32_t t15 = 0;

	t15 = (((x77-x78)<x79)/x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x82 = UINT8_MAX;
	int32_t x83 = 76089;
	int16_t x84 = 2;
	int32_t t16 = 2400;

	t16 = (((x81-x82)<x83)/x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = UINT16_MAX;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = -508;
	volatile int32_t t17 = -164319;

	t17 = (((x85-x86)<x87)/x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = UINT8_MAX;
	static volatile int64_t x91 = INT64_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t18 = -4317;

	t18 = (((x89-x90)<x91)/x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t19 = 569U;

	t19 = (((x93-x94)<x95)/x96);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = -12268748;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t20 = -717700000;

	t20 = (((x97-x98)<x99)/x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x101 = INT16_MIN;
	static int16_t x102 = INT16_MIN;
	int16_t x104 = -1;

	t21 = (((x101-x102)<x103)/x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	int32_t x106 = -13312;
	int16_t x107 = -1;
	int8_t x108 = INT8_MAX;
	volatile int32_t t22 = 23531;

	t22 = (((x105-x106)<x107)/x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 1372U;
	static int16_t x110 = INT16_MIN;
	static volatile int64_t x112 = -803267214157LL;
	volatile int64_t t23 = -118197457345877LL;

	t23 = (((x109-x110)<x111)/x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 233697670651LL;
	static int8_t x114 = 30;
	int32_t x116 = INT32_MAX;
	volatile int32_t t24 = -2;

	t24 = (((x113-x114)<x115)/x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = 58;
	volatile int8_t x118 = -5;
	int32_t x119 = -186861;
	int64_t t25 = -22391497734347LL;

	t25 = (((x117-x118)<x119)/x120);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	static int8_t x122 = INT8_MIN;
	volatile int32_t x123 = 7981;
	volatile int16_t x124 = INT16_MIN;

	t26 = (((x121-x122)<x123)/x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x130 = 35112173392830834LLU;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -200046061254486LL;

	t27 = (((x129-x130)<x131)/x132);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;
	static int32_t t28 = 6399;

	t28 = (((x133-x134)<x135)/x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x139 = 46868020652193LL;
	int64_t x140 = -16273521LL;
	static int64_t t29 = -68565256LL;

	t29 = (((x137-x138)<x139)/x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 1761LLU;
	int16_t x142 = -1;
	int16_t x143 = 2535;
	int64_t x144 = -1LL;
	int64_t t30 = -54170356893841LL;

	t30 = (((x141-x142)<x143)/x144);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = 1394672U;
	int64_t x147 = -1LL;
	int8_t x148 = -7;
	static int32_t t31 = -304755;

	t31 = (((x145-x146)<x147)/x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = -1;
	uint8_t x150 = 2U;
	static int32_t x151 = 1013231;
	uint8_t x152 = 2U;
	volatile int32_t t32 = -15;

	t32 = (((x149-x150)<x151)/x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 1943U;
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t33 = -40347580;

	t33 = (((x153-x154)<x155)/x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = -2687747;
	static uint8_t x159 = 18U;
	int32_t t34 = 2070;

	t34 = (((x157-x158)<x159)/x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x162 = INT64_MIN;
	uint16_t x164 = UINT16_MAX;
	int32_t t35 = -3;

	t35 = (((x161-x162)<x163)/x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = 153137512U;
	volatile int16_t x166 = -6316;
	int16_t x167 = -1;
	int16_t x168 = INT16_MAX;

	t36 = (((x165-x166)<x167)/x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = 35533111187820LL;
	volatile int64_t t37 = 392LL;

	t37 = (((x169-x170)<x171)/x172);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x181 = 74U;
	static int16_t x182 = INT16_MAX;
	static volatile int32_t x183 = -1;

	t38 = (((x181-x182)<x183)/x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = 3;
	volatile uint64_t x186 = UINT64_MAX;
	static int16_t x187 = -1549;
	static volatile int64_t x188 = INT64_MIN;
	int64_t t39 = 105659877460LL;

	t39 = (((x185-x186)<x187)/x188);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MAX;
	int16_t x192 = 4239;

	t40 = (((x189-x190)<x191)/x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x193 = UINT64_MAX;
	volatile int16_t x194 = -29;
	int8_t x195 = -20;
	int8_t x196 = -1;
	int32_t t41 = -25751837;

	t41 = (((x193-x194)<x195)/x196);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x198 = 45842384153796944LLU;
	static uint16_t x199 = 76U;
	int32_t t42 = 50511;

	t42 = (((x197-x198)<x199)/x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 34U;
	int16_t x202 = -1;
	static int64_t x204 = INT64_MAX;

	t43 = (((x201-x202)<x203)/x204);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x206 = -1LL;
	uint32_t x207 = 11544U;
	int16_t x208 = -23;

	t44 = (((x205-x206)<x207)/x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x209 = 6U;
	static int64_t x210 = -15709LL;
	int16_t x212 = INT16_MAX;
	volatile int32_t t45 = -903676966;

	t45 = (((x209-x210)<x211)/x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x215 = INT16_MAX;
	uint64_t x216 = 333LLU;
	volatile uint64_t t46 = 3359637642LLU;

	t46 = (((x213-x214)<x215)/x216);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = -2975424;
	int16_t x218 = INT16_MAX;
	int16_t x219 = 2577;
	volatile uint32_t x220 = 1596U;
	volatile uint32_t t47 = 148089698U;

	t47 = (((x217-x218)<x219)/x220);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = 7286;
	uint8_t x230 = UINT8_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	int16_t x232 = -1;
	int32_t t48 = -53768775;

	t48 = (((x229-x230)<x231)/x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	static int16_t x234 = -1;
	volatile int32_t x235 = INT32_MIN;
	uint8_t x236 = 19U;

	t49 = (((x233-x234)<x235)/x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = 48;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t50 = 45839059LL;

	t50 = (((x237-x238)<x239)/x240);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x245 = 247U;
	int32_t x246 = -183;
	static uint64_t x247 = 4467901159716250629LLU;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t51 = -4900;

	t51 = (((x245-x246)<x247)/x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 5LL;
	int16_t x250 = -1365;
	uint8_t x252 = 2U;

	t52 = (((x249-x250)<x251)/x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x255 = 14821562320947LLU;
	uint16_t x256 = 12U;
	int32_t t53 = 5434849;

	t53 = (((x253-x254)<x255)/x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int8_t x266 = -1;
	uint16_t x267 = 14354U;
	volatile int32_t t54 = 42643;

	t54 = (((x265-x266)<x267)/x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1775225;
	static int32_t t55 = -4110889;

	t55 = (((x277-x278)<x279)/x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x285 = -1LL;
	uint32_t x286 = 1655702U;
	uint64_t x287 = 136587882915615LLU;
	static volatile int16_t x288 = INT16_MIN;
	int32_t t56 = -34479;

	t56 = (((x285-x286)<x287)/x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MAX;
	uint16_t x291 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;

	t57 = (((x289-x290)<x291)/x292);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x293 = INT64_MIN;
	volatile int32_t x294 = -4042882;
	int64_t x295 = INT64_MAX;
	volatile int32_t x296 = INT32_MAX;
	volatile int32_t t58 = -8819;

	t58 = (((x293-x294)<x295)/x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x298 = 0;
	int8_t x299 = INT8_MIN;

	t59 = (((x297-x298)<x299)/x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x301 = 49U;
	int32_t x302 = 415443;
	int16_t x303 = 10701;
	uint16_t x304 = 444U;
	int32_t t60 = 0;

	t60 = (((x301-x302)<x303)/x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = -1;
	static int8_t x306 = -1;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t61 = -4986;

	t61 = (((x305-x306)<x307)/x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x312 = INT32_MIN;

	t62 = (((x309-x310)<x311)/x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x313 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 1U;
	static int32_t t63 = -943278148;

	t63 = (((x313-x314)<x315)/x316);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x317 = 208046234U;
	static int8_t x320 = -1;

	t64 = (((x317-x318)<x319)/x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 13U;
	int8_t x324 = INT8_MAX;
	volatile int32_t t65 = -1;

	t65 = (((x321-x322)<x323)/x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x325 = -1;
	int16_t x326 = 0;
	uint16_t x327 = 8U;
	static volatile int16_t x328 = INT16_MIN;
	static volatile int32_t t66 = 0;

	t66 = (((x325-x326)<x327)/x328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x330 = INT32_MAX;
	int8_t x332 = -1;
	int32_t t67 = 103;

	t67 = (((x329-x330)<x331)/x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile uint16_t x334 = 797U;
	static uint32_t x335 = 1049584175U;
	int16_t x336 = INT16_MIN;

	t68 = (((x333-x334)<x335)/x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x337 = UINT32_MAX;
	uint16_t x338 = UINT16_MAX;
	int64_t x340 = -30036821LL;

	t69 = (((x337-x338)<x339)/x340);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x347 = 196U;
	int8_t x348 = INT8_MIN;
	int32_t t70 = -1;

	t70 = (((x345-x346)<x347)/x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t71 = -190;

	t71 = (((x349-x350)<x351)/x352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x354 = -1;
	volatile uint16_t x356 = 67U;
	int32_t t72 = -559;

	t72 = (((x353-x354)<x355)/x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x357 = INT16_MIN;
	uint64_t x358 = 376137114266LLU;
	volatile int8_t x360 = INT8_MIN;
	int32_t t73 = 5197449;

	t73 = (((x357-x358)<x359)/x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x361 = INT8_MIN;
	static uint64_t x362 = 7068086477574LLU;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t74 = 290029515;

	t74 = (((x361-x362)<x363)/x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x366 = UINT32_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;
	volatile int32_t t75 = -90;

	t75 = (((x365-x366)<x367)/x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x369 = UINT64_MAX;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = -189360LL;
	static int64_t t76 = 970LL;

	t76 = (((x369-x370)<x371)/x372);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x378 = 56;
	int64_t x379 = INT64_MIN;

	t77 = (((x377-x378)<x379)/x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = -87;
	int32_t x384 = -10492;

	t78 = (((x381-x382)<x383)/x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x386 = -1;
	static uint16_t x388 = 23U;
	volatile int32_t t79 = -61672;

	t79 = (((x385-x386)<x387)/x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x389 = 1940LLU;
	static int8_t x390 = INT8_MIN;
	int64_t x392 = 116669727LL;
	static int64_t t80 = -378839297694616LL;

	t80 = (((x389-x390)<x391)/x392);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x393 = 2630328U;
	volatile int32_t x396 = INT32_MAX;
	static volatile int32_t t81 = -296;

	t81 = (((x393-x394)<x395)/x396);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MAX;
	static int64_t x400 = INT64_MIN;

	t82 = (((x397-x398)<x399)/x400);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x401 = -361LL;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = -6156;

	t83 = (((x401-x402)<x403)/x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x410 = -1;
	int32_t x411 = INT32_MIN;
	int64_t x412 = INT64_MAX;
	volatile int64_t t84 = -142631LL;

	t84 = (((x409-x410)<x411)/x412);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x415 = INT64_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t85 = 601312399392039LLU;

	t85 = (((x413-x414)<x415)/x416);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x418 = 305849971LLU;
	int8_t x419 = -19;
	volatile int32_t t86 = -496376;

	t86 = (((x417-x418)<x419)/x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x422 = -1;
	int8_t x423 = INT8_MIN;
	uint64_t t87 = 5727648681LLU;

	t87 = (((x421-x422)<x423)/x424);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = INT32_MIN;
	static int32_t x426 = INT32_MIN;
	volatile int32_t t88 = 13940;

	t88 = (((x425-x426)<x427)/x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x429 = 896562696239062LLU;
	volatile int8_t x430 = INT8_MIN;
	static int16_t x431 = INT16_MIN;
	int8_t x432 = 9;

	t89 = (((x429-x430)<x431)/x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x434 = 1U;
	int8_t x435 = -1;
	int64_t x436 = 81722512860203LL;
	int64_t t90 = -7075714186891295LL;

	t90 = (((x433-x434)<x435)/x436);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x439 = INT16_MIN;
	static uint8_t x440 = 98U;
	static volatile int32_t t91 = 0;

	t91 = (((x437-x438)<x439)/x440);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = 0;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -475;
	volatile int32_t t92 = 30;

	t92 = (((x445-x446)<x447)/x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x450 = 1;
	volatile uint32_t x451 = 77283466U;
	uint64_t x452 = 2473LLU;

	t93 = (((x449-x450)<x451)/x452);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x454 = 47;
	int8_t x455 = INT8_MIN;
	int16_t x456 = -2642;
	int32_t t94 = -335;

	t94 = (((x453-x454)<x455)/x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x457 = 12390U;
	volatile int8_t x458 = -1;
	int32_t x459 = INT32_MIN;
	uint8_t x460 = 78U;
	int32_t t95 = 10;

	t95 = (((x457-x458)<x459)/x460);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = -1;
	volatile int64_t x463 = 0LL;
	volatile int8_t x464 = INT8_MIN;
	volatile int32_t t96 = -179365;

	t96 = (((x461-x462)<x463)/x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = -1LL;
	int32_t x468 = 299;
	volatile int32_t t97 = 1574;

	t97 = (((x465-x466)<x467)/x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x469 = 6;
	volatile uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	int32_t t98 = -2888040;

	t98 = (((x469-x470)<x471)/x472);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = -1;
	int32_t x474 = -1;
	volatile uint32_t x475 = UINT32_MAX;
	int32_t x476 = 106532962;
	static volatile int32_t t99 = 307;

	t99 = (((x473-x474)<x475)/x476);

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
