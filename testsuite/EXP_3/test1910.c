#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int32_t x3 = INT32_MIN;
uint8_t x14 = 125U;
volatile int8_t x25 = -1;
static uint32_t x33 = 417121U;
int16_t x37 = -214;
static int64_t x38 = INT64_MIN;
volatile uint64_t t8 = 4LLU;
static uint64_t x50 = 1018LLU;
static int16_t x52 = INT16_MAX;
volatile uint32_t x63 = 78501377U;
uint32_t t11 = 12U;
volatile int64_t x68 = -4095721103476612LL;
uint64_t x73 = 55606462426136047LLU;
static int64_t x74 = -54LL;
uint16_t x85 = 3U;
uint8_t x86 = 10U;
int32_t x91 = 4630;
volatile uint32_t t19 = UINT32_MAX;
int64_t x97 = INT64_MAX;
volatile uint64_t t20 = 387567797204LLU;
volatile int32_t t21 = -222306542;
uint8_t x107 = 3U;
int32_t x109 = -1;
uint8_t x111 = 0U;
static uint32_t t23 = 502U;
int16_t x114 = INT16_MIN;
int8_t x126 = -1;
int8_t x129 = INT8_MIN;
uint64_t x131 = 683421303LLU;
volatile uint64_t x132 = 18108578148153LLU;
static int16_t x142 = INT16_MIN;
static volatile int8_t x143 = -1;
volatile int32_t x149 = INT32_MIN;
static volatile int32_t x154 = INT32_MIN;
int8_t x159 = -1;
volatile int64_t t36 = 262200582875300101LL;
uint16_t x168 = 3U;
static int32_t t41 = 890771501;
uint16_t x189 = 2734U;
int64_t x198 = 2201379LL;
uint16_t x205 = UINT16_MAX;
int8_t x206 = INT8_MAX;
int16_t x207 = INT16_MAX;
volatile uint8_t x216 = 1U;
uint64_t t50 = UINT64_MAX;
int8_t x226 = INT8_MIN;
static volatile uint64_t x232 = 572018744LLU;
uint64_t t53 = 401134LLU;
int32_t x233 = 439975016;
volatile int8_t x235 = INT8_MIN;
int64_t x249 = INT64_MAX;
volatile uint16_t x255 = 201U;
int64_t x263 = INT64_MIN;
int64_t t62 = 2933LL;
static int64_t x291 = 29295341697LL;
volatile int64_t t66 = 25253951837LL;
uint8_t x294 = 1U;
volatile int8_t x295 = INT8_MIN;
int16_t x296 = -1;
static uint8_t x298 = UINT8_MAX;
uint64_t x300 = 14540118731LLU;
int32_t x304 = INT32_MAX;
static int64_t x307 = INT64_MIN;
int32_t x312 = INT32_MIN;
int8_t x318 = 2;
uint64_t x319 = 1436143160LLU;
uint64_t t73 = 411LLU;
int8_t x323 = INT8_MIN;
int8_t x324 = INT8_MAX;
uint64_t t74 = UINT64_MAX;
int32_t x327 = INT32_MIN;
volatile int16_t x331 = INT16_MIN;
int16_t x334 = INT16_MIN;
uint16_t x336 = 1U;
int16_t x339 = 3640;
int16_t x343 = INT16_MAX;
volatile uint32_t t80 = 6U;
uint32_t x352 = UINT32_MAX;
static int64_t x354 = -1LL;
static int64_t t82 = 4149755LL;
volatile uint8_t x357 = 81U;
int32_t t83 = -2739;
volatile uint8_t x366 = UINT8_MAX;
volatile int32_t x379 = 5839892;
int32_t x381 = INT32_MIN;
uint64_t x388 = 101336571125LLU;
volatile int64_t x389 = -2482785158339979624LL;
int64_t x390 = INT64_MIN;
uint32_t x391 = 79U;
int8_t x397 = INT8_MAX;
uint32_t x400 = 3183U;
uint16_t x405 = UINT16_MAX;
volatile int8_t x412 = INT8_MIN;
volatile int64_t t96 = -48191LL;
uint64_t x421 = 84008LLU;


void f0(void) {
	uint16_t x1 = 712U;
	uint64_t x4 = 97063543874742LLU;
	uint64_t t0 = 719955289678LLU;

	t0 = ((x1/x2)|(x3|x4));

	if (t0 != 18446744073140020407LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 17;
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = -4;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -206115;

	t1 = ((x5/x6)|(x7|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x9/x10)|(x11|x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 29U;
	uint64_t x15 = 3LLU;
	volatile int64_t x16 = INT64_MAX;
	static uint64_t t3 = 490291823600907LLU;

	t3 = ((x13/x14)|(x15|x16));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	static int32_t x19 = 242906763;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = ((x17/x18)|(x19|x20));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = INT64_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x25/x26)|(x27|x28));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 5542U;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -1050697LL;
	int16_t x32 = -1;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x29/x30)|(x31|x32));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 126U;
	int16_t x35 = INT16_MIN;
	volatile uint64_t x36 = 44LLU;
	volatile uint64_t t7 = 32109198611LLU;

	t7 = ((x33/x34)|(x35|x36));

	if (t7 != 18446744073709522158LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x39 = 167;
	volatile uint64_t x40 = 465LLU;

	t8 = ((x37/x38)|(x39|x40));

	if (t8 != 503LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 47U;
	int64_t x51 = INT64_MAX;
	uint64_t t9 = 113461423LLU;

	t9 = ((x49/x50)|(x51|x52));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = 123;
	volatile int8_t x56 = INT8_MIN;
	volatile uint64_t t10 = 7044578LLU;

	t10 = ((x53/x54)|(x55|x56));

	if (t10 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 3U;
	volatile uint16_t x62 = 40U;
	uint16_t x64 = 60U;

	t11 = ((x61/x62)|(x63|x64));

	if (t11 != 78501437U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MAX;
	uint8_t x66 = 2U;
	int8_t x67 = -29;
	volatile int64_t t12 = 65009559941LL;

	t12 = ((x65/x66)|(x67|x68));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 18;
	static int8_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	volatile int16_t x72 = -1;
	int32_t t13 = 2934384;

	t13 = ((x69/x70)|(x71|x72));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x75 = 116U;
	uint64_t x76 = 28259LLU;
	static volatile uint64_t t14 = 1798768LLU;

	t14 = ((x73/x74)|(x75|x76));

	if (t14 != 28279LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	volatile uint32_t x78 = 49513799U;
	int32_t x79 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	int64_t t15 = -35589956LL;

	t15 = ((x77/x78)|(x79|x80));

	if (t15 != -552206337LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	static volatile uint32_t x82 = 70U;
	volatile int64_t x83 = 3LL;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x81/x82)|(x83|x84));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x87 = 4493066U;
	uint8_t x88 = 2U;
	uint32_t t17 = 1697433324U;

	t17 = ((x85/x86)|(x87|x88));

	if (t17 != 4493066U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = -1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t18 = 53;

	t18 = ((x89/x90)|(x91|x92));

	if (t18 != -60905) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x93 = 0U;
	uint8_t x94 = 47U;
	uint32_t x95 = UINT32_MAX;
	uint8_t x96 = 2U;

	t19 = ((x93/x94)|(x95|x96));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x98 = 126362362119472LLU;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -5465023;

	t20 = ((x97/x98)|(x99|x100));

	if (t20 != 18446744073709526367LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 0U;
	int8_t x102 = -47;
	static int32_t x103 = 7981972;
	static int16_t x104 = INT16_MIN;

	t21 = ((x101/x102)|(x103|x104));

	if (t21 != -13420) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x105 = INT64_MIN;
	uint32_t x106 = 4224135U;
	uint32_t x108 = 106070U;
	int64_t t22 = 284909948LL;

	t22 = ((x105/x106)|(x107|x108));

	if (t22 != -2183493599489LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x110 = -490;
	volatile uint32_t x112 = 8244U;

	t23 = ((x109/x110)|(x111|x112));

	if (t23 != 8244U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x113 = 2810507565065LLU;
	uint8_t x115 = UINT8_MAX;
	static int16_t x116 = 8255;
	static uint64_t t24 = 1LLU;

	t24 = ((x113/x114)|(x115|x116));

	if (t24 != 8447LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x117 = 167622269866LLU;
	int8_t x118 = INT8_MIN;
	static volatile uint8_t x119 = 1U;
	int64_t x120 = -970666455LL;
	uint64_t t25 = 7558820665898724LLU;

	t25 = ((x117/x118)|(x119|x120));

	if (t25 != 18446744072738885161LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = 22U;
	uint16_t x124 = 3U;
	volatile int64_t t26 = -7351216LL;

	t26 = ((x121/x122)|(x123|x124));

	if (t26 != 23LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 15U;
	volatile int64_t x127 = -4035658336794121707LL;
	uint8_t x128 = 7U;
	int64_t t27 = -433431272806809LL;

	t27 = ((x125/x126)|(x127|x128));

	if (t27 != -9LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = INT8_MIN;
	uint64_t t28 = 2455LLU;

	t28 = ((x129/x130)|(x131|x132));

	if (t28 != 18108588633983LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = 43LLU;
	uint64_t x134 = 4548707058145738815LLU;
	volatile uint32_t x135 = UINT32_MAX;
	static int16_t x136 = -1;
	static uint64_t t29 = 126918610LLU;

	t29 = ((x133/x134)|(x135|x136));

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static uint8_t x139 = 1U;
	int64_t x140 = -8511730905513730LL;
	volatile int64_t t30 = -57LL;

	t30 = ((x137/x138)|(x139|x140));

	if (t30 != -8511730905513729LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = -1;
	volatile int8_t x144 = INT8_MIN;
	int32_t t31 = 449;

	t31 = ((x141/x142)|(x143|x144));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 3;
	int64_t x146 = -1LL;
	volatile uint16_t x147 = 5017U;
	int8_t x148 = INT8_MIN;
	volatile int64_t t32 = -28523LL;

	t32 = ((x145/x146)|(x147|x148));

	if (t32 != -3LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x150 = -62;
	int32_t x151 = INT32_MAX;
	int32_t x152 = 10;
	int32_t t33 = INT32_MAX;

	t33 = ((x149/x150)|(x151|x152));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile uint32_t x155 = UINT32_MAX;
	uint32_t x156 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x153/x154)|(x155|x156));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = -24;
	uint8_t x158 = 11U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x157/x158)|(x159|x160));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = 2U;
	int32_t x164 = -1558;

	t36 = ((x161/x162)|(x163|x164));

	if (t36 != -1558LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	static int16_t x166 = INT16_MIN;
	int8_t x167 = 0;
	volatile int32_t t37 = 826;

	t37 = ((x165/x166)|(x167|x168));

	if (t37 != -65533) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static volatile int32_t x170 = -46797099;
	uint16_t x171 = 1U;
	int64_t x172 = 55LL;
	static int64_t t38 = -2633LL;

	t38 = ((x169/x170)|(x171|x172));

	if (t38 != 55LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 45177U;
	uint64_t x175 = 9LLU;
	volatile uint64_t x176 = 6137879LLU;
	volatile uint64_t t39 = 353061994578LLU;

	t39 = ((x173/x174)|(x175|x176));

	if (t39 != 6159199LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x177 = -81328056131585565LL;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MAX;
	volatile int8_t x180 = -1;
	static int64_t t40 = 2688525613652569692LL;

	t40 = ((x177/x178)|(x179|x180));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 295U;
	volatile uint16_t x182 = UINT16_MAX;
	int32_t x183 = -1;
	volatile int32_t x184 = INT32_MIN;

	t41 = ((x181/x182)|(x183|x184));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = -1LL;
	int64_t t42 = -229LL;

	t42 = ((x185/x186)|(x187|x188));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = -721445199;
	uint64_t x191 = 0LLU;
	static int8_t x192 = INT8_MIN;
	static volatile uint64_t t43 = 1280566LLU;

	t43 = ((x189/x190)|(x191|x192));

	if (t43 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 11U;
	static uint16_t x194 = 1532U;
	volatile int8_t x195 = 1;
	volatile int8_t x196 = -1;
	static volatile int32_t t44 = 854372;

	t44 = ((x193/x194)|(x195|x196));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	int64_t x199 = INT64_MIN;
	static int64_t x200 = INT64_MAX;
	volatile int64_t t45 = -54667727790LL;

	t45 = ((x197/x198)|(x199|x200));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MAX;
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MAX;
	uint64_t x204 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x201/x202)|(x203|x204));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x208 = UINT8_MAX;
	int32_t t47 = 1;

	t47 = ((x205/x206)|(x207|x208));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	volatile uint64_t x210 = 35133513LLU;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = 16482568913725843LLU;
	volatile uint64_t t48 = 46507438888174089LLU;

	t48 = ((x209/x210)|(x211|x212));

	if (t48 != 16482776664506367LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = 0U;
	volatile int32_t x214 = -3;
	int16_t x215 = INT16_MAX;
	int32_t t49 = 4148778;

	t49 = ((x213/x214)|(x215|x216));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x217 = 13U;
	volatile uint64_t x218 = 1608013207LLU;
	int32_t x219 = INT32_MAX;
	int8_t x220 = -1;

	t50 = ((x217/x218)|(x219|x220));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = INT32_MIN;
	volatile uint16_t x222 = 4U;
	int32_t x223 = INT32_MIN;
	int32_t x224 = 138;
	static volatile int32_t t51 = -47943630;

	t51 = ((x221/x222)|(x223|x224));

	if (t51 != -536870774) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1;
	uint64_t x227 = UINT64_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x225/x226)|(x227|x228));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = -1898;
	static int8_t x231 = INT8_MIN;

	t53 = ((x229/x230)|(x231|x232));

	if (t53 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x234 = 4U;
	uint8_t x236 = UINT8_MAX;
	int32_t t54 = -967875;

	t54 = ((x233/x234)|(x235|x236));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = 1098;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = UINT64_MAX;
	volatile int32_t x240 = -1;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x237/x238)|(x239|x240));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x245 = -1LL;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 43LLU;
	uint32_t x248 = 160186U;
	uint64_t t56 = 5LLU;

	t56 = ((x245/x246)|(x247|x248));

	if (t56 != 160187LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = -1LL;
	int64_t x251 = 34LL;
	static int32_t x252 = -1;
	volatile int64_t t57 = 53LL;

	t57 = ((x249/x250)|(x251|x252));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = -1;
	int64_t x256 = -1LL;
	static volatile int64_t t58 = -54LL;

	t58 = ((x253/x254)|(x255|x256));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 0;
	uint64_t x258 = 6221169602LLU;
	uint64_t x259 = 44LLU;
	int16_t x260 = -8788;
	volatile uint64_t t59 = 561535472LLU;

	t59 = ((x257/x258)|(x259|x260));

	if (t59 != 18446744073709542828LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = INT8_MIN;
	static int8_t x264 = -24;
	static volatile int64_t t60 = 155122927898LL;

	t60 = ((x261/x262)|(x263|x264));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x266 = 58120080U;
	int32_t x267 = INT32_MAX;
	uint32_t x268 = 478405U;
	uint32_t t61 = 18539722U;

	t61 = ((x265/x266)|(x267|x268));

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x269 = INT64_MAX;
	uint8_t x270 = UINT8_MAX;
	static int32_t x271 = INT32_MAX;
	uint32_t x272 = UINT32_MAX;

	t62 = ((x269/x270)|(x271|x272));

	if (t62 != 36170088558100479LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x273 = -6;
	uint64_t x274 = 623579529LLU;
	int32_t x275 = -1;
	int32_t x276 = INT32_MIN;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x273/x274)|(x275|x276));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	uint16_t x278 = 19U;
	int8_t x279 = -1;
	uint16_t x280 = 6514U;
	int32_t t64 = 140944;

	t64 = ((x277/x278)|(x279|x280));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MAX;
	static uint64_t x287 = 3508642014726991132LLU;
	volatile int64_t x288 = -1LL;
	static volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x285/x286)|(x287|x288));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MAX;
	static int64_t x290 = INT64_MIN;
	int8_t x292 = 4;

	t66 = ((x289/x290)|(x291|x292));

	if (t66 != 29295341701LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	int32_t t67 = -673799948;

	t67 = ((x293/x294)|(x295|x296));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = -9;
	int16_t x299 = INT16_MIN;
	volatile uint64_t t68 = 318117648LLU;

	t68 = ((x297/x298)|(x299|x300));

	if (t68 != 18446744073709525707LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x301 = 4017552LLU;
	static int32_t x302 = -27646847;
	uint8_t x303 = 116U;
	static volatile uint64_t t69 = 99398838LLU;

	t69 = ((x301/x302)|(x303|x304));

	if (t69 != 2147483647LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x305 = -1;
	volatile int64_t x306 = -1LL;
	int8_t x308 = -23;
	volatile int64_t t70 = -288899LL;

	t70 = ((x305/x306)|(x307|x308));

	if (t70 != -23LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = UINT32_MAX;
	volatile int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MIN;
	int64_t t71 = 829LL;

	t71 = ((x309/x310)|(x311|x312));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x313 = 23914U;
	volatile int8_t x314 = 43;
	int64_t x315 = INT64_MAX;
	static uint16_t x316 = 7256U;
	int64_t t72 = INT64_MAX;

	t72 = ((x313/x314)|(x315|x316));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x317 = 53U;
	int16_t x320 = INT16_MIN;

	t73 = ((x317/x318)|(x319|x320));

	if (t73 != 18446744073709538874LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -5;
	static uint64_t x322 = 20811900603849888LLU;

	t74 = ((x321/x322)|(x323|x324));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MAX;
	uint32_t x328 = 353654U;
	int64_t t75 = -215344126288100036LL;

	t75 = ((x325/x326)|(x327|x328));

	if (t75 != 2147837302LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x329 = 17670U;
	int8_t x330 = INT8_MAX;
	static int32_t x332 = 31830139;
	static volatile int32_t t76 = 1;

	t76 = ((x329/x330)|(x331|x332));

	if (t76 != -20229) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t t77 = -658;

	t77 = ((x333/x334)|(x335|x336));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MAX;
	static int64_t x338 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	int64_t t78 = -65LL;

	t78 = ((x337/x338)|(x339|x340));

	if (t78 != -29128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -4521689040LL;
	int16_t x342 = INT16_MIN;
	volatile int16_t x344 = -1;
	volatile int64_t t79 = 60787LL;

	t79 = ((x341/x342)|(x343|x344));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile int32_t x346 = 21785427;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = 1;

	t80 = ((x345/x346)|(x347|x348));

	if (t80 != 4294967237U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x349 = UINT8_MAX;
	uint16_t x350 = 2990U;
	int8_t x351 = INT8_MIN;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = ((x349/x350)|(x351|x352));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x353 = 267U;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;

	t82 = ((x353/x354)|(x355|x356));

	if (t82 != -267LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x358 = 3U;
	int32_t x359 = -1;
	uint8_t x360 = 62U;

	t83 = ((x357/x358)|(x359|x360));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	static int32_t x362 = 303861459;
	int16_t x363 = 64;
	volatile int32_t x364 = INT32_MIN;
	static int32_t t84 = -2;

	t84 = ((x361/x362)|(x363|x364));

	if (t84 != -7) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MIN;
	int64_t x367 = -8465240499LL;
	volatile int64_t x368 = 8513355512LL;
	static volatile int64_t t85 = 17260120920207433LL;

	t85 = ((x365/x366)|(x367|x368));

	if (t85 != -3LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MAX;
	static int8_t x370 = INT8_MAX;
	static int64_t x371 = -1035605LL;
	static int8_t x372 = INT8_MIN;
	volatile int64_t t86 = -3020451283LL;

	t86 = ((x369/x370)|(x371|x372));

	if (t86 != -85LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x373 = 31266864LLU;
	uint64_t x374 = 95LLU;
	int8_t x375 = -3;
	uint64_t x376 = 5996826701338771746LLU;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x373/x374)|(x375|x376));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x378 = -52LL;
	static volatile int32_t x380 = INT32_MAX;
	static int64_t t88 = -7871528944840LL;

	t88 = ((x377/x378)|(x379|x380));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = INT8_MIN;
	uint8_t x383 = 1U;
	int32_t x384 = INT32_MAX;
	int32_t t89 = INT32_MAX;

	t89 = ((x381/x382)|(x383|x384));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = INT8_MIN;
	uint8_t x386 = 30U;
	int32_t x387 = INT32_MAX;
	static volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x385/x386)|(x387|x388));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x392 = -1;
	volatile int64_t t91 = 6044611110LL;

	t91 = ((x389/x390)|(x391|x392));

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x393 = INT32_MIN;
	volatile uint32_t x394 = 62U;
	int32_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t92 = 113844009873549LL;

	t92 = ((x393/x394)|(x395|x396));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x398 = -53;
	static int32_t x399 = INT32_MIN;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x397/x398)|(x399|x400));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	uint8_t x403 = 2U;
	int8_t x404 = -1;
	volatile int32_t t94 = -533032752;

	t94 = ((x401/x402)|(x403|x404));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = INT16_MAX;
	int8_t x408 = -1;
	volatile int32_t t95 = 7;

	t95 = ((x405/x406)|(x407|x408));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x409 = 19972374U;
	static int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MIN;

	t96 = ((x409/x410)|(x411|x412));

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = 1U;
	uint32_t x415 = 7448861U;
	int64_t x416 = INT64_MIN;
	int64_t t97 = 188145838111459LL;

	t97 = ((x413/x414)|(x415|x416));

	if (t97 != -9223372036847326947LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = 545334020644599523LLU;
	uint16_t x418 = 15U;
	int32_t x419 = -1;
	static int8_t x420 = 29;
	static uint64_t t98 = UINT64_MAX;

	t98 = ((x417/x418)|(x419|x420));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x422 = 26438266U;
	int32_t x423 = -39061;
	uint8_t x424 = 0U;
	uint64_t t99 = 95572886LLU;

	t99 = ((x421/x422)|(x423|x424));

	if (t99 != 18446744073709512555LLU) { NG(); } else { ; }
	
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
