#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 185U;
int64_t x29 = -1LL;
volatile int64_t t6 = -7173445902LL;
volatile uint8_t x36 = UINT8_MAX;
volatile uint8_t x40 = 48U;
int64_t x41 = 891869268390901LL;
uint16_t x44 = UINT16_MAX;
uint32_t x50 = 5541U;
uint8_t x60 = 6U;
int32_t x61 = 4290105;
static uint8_t x65 = UINT8_MAX;
int64_t x67 = 0LL;
static uint8_t x81 = 3U;
static int8_t x87 = -16;
static volatile uint32_t x101 = 17159471U;
int32_t x102 = INT32_MAX;
uint16_t x103 = 52U;
static int16_t x106 = 32;
uint64_t x109 = UINT64_MAX;
static volatile int64_t x117 = INT64_MAX;
static int32_t x118 = 127;
int32_t x124 = -3;
int64_t t27 = -3671299815388LL;
uint16_t x125 = UINT16_MAX;
int64_t x138 = 1LL;
uint32_t x143 = 14U;
int16_t x151 = -1;
uint16_t x157 = 22665U;
int8_t x161 = -1;
uint64_t x162 = 2008939939268LLU;
int64_t x166 = INT64_MAX;
static int64_t t38 = 0LL;
uint8_t x177 = 13U;
int64_t x181 = -195197776282LL;
uint16_t x182 = UINT16_MAX;
static volatile int64_t x190 = -1LL;
int32_t x191 = INT32_MAX;
volatile int64_t t45 = -438270786871100LL;
int16_t x212 = INT16_MAX;
static volatile int32_t x217 = INT32_MIN;
int16_t x220 = 2;
volatile int32_t t50 = 13352;
int32_t x229 = INT32_MIN;
volatile int64_t t53 = -1961256656509933809LL;
int16_t x253 = -1;
volatile uint64_t t58 = 8LLU;
volatile uint64_t t60 = 40LLU;
static volatile int16_t x269 = 1;
volatile int16_t x276 = INT16_MAX;
int32_t x278 = INT32_MIN;
static uint8_t x279 = 27U;
uint64_t t63 = 700096658895730LLU;
int16_t x281 = -1;
int32_t x292 = INT32_MIN;
static uint64_t x293 = 24859LLU;
uint8_t x298 = 3U;
int16_t x299 = -4166;
static uint16_t x308 = UINT16_MAX;
int8_t x313 = -1;
int16_t x315 = 1662;
int8_t x316 = INT8_MAX;
uint32_t t72 = 3347U;
int64_t t74 = 168780921LL;
int64_t x328 = INT64_MAX;
static uint64_t t75 = 27132775LLU;
static volatile uint64_t t76 = 93026780LLU;
volatile uint8_t x333 = 6U;
int16_t x339 = INT16_MAX;
int8_t x349 = INT8_MIN;
int64_t x351 = 2330390769LL;
volatile int64_t t81 = -16238911614375LL;
volatile int32_t x354 = -1;
uint64_t x355 = 1961043202059LLU;
int64_t t83 = INT64_MAX;
static uint16_t x361 = 2157U;
int64_t x371 = INT64_MAX;
static int32_t x373 = INT32_MAX;
volatile int8_t x376 = 4;
uint32_t x378 = 7414U;
uint64_t x379 = 3371117724556LLU;
static uint8_t x383 = 0U;
uint32_t x384 = 7040233U;
volatile int64_t t89 = -843LL;
volatile int8_t x395 = INT8_MIN;
int64_t x398 = -14514898993LL;
uint32_t x399 = 35778U;
int64_t t91 = -536854736364858621LL;
uint16_t x407 = 927U;
static volatile int16_t x412 = -14784;
int64_t x417 = -19123253241864720LL;
static volatile int8_t x423 = 6;
volatile uint64_t x433 = 4844309LLU;


void f0(void) {
	int64_t x1 = 197890600227LL;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = -2741;
	volatile uint64_t t0 = 173452653977018LLU;

	t0 = (((x1/x2)-x3)^x4);

	if (t0 != 6040791LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -504;
	volatile int8_t x6 = -20;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;

	t1 = (((x5/x6)-x7)^x8);

	if (t1 != 4294934554U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x13 = 8610475299049277642LLU;
	volatile int16_t x14 = INT16_MAX;
	int16_t x15 = -1;
	int8_t x16 = 0;
	uint64_t t2 = 7451250509869593188LLU;

	t2 = (((x13/x14)-x15)^x16);

	if (t2 != 262778872006876LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static int32_t x18 = INT32_MIN;
	int8_t x19 = 2;
	int8_t x20 = -25;
	int32_t t3 = 1884463;

	t3 = (((x17/x18)-x19)^x20);

	if (t3 != 25) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	int32_t x22 = 18386;
	uint32_t x23 = 2742U;
	int32_t x24 = -543;
	int64_t t4 = -32013LL;

	t4 = (((x21/x22)-x23)^x24);

	if (t4 != 501651911067995LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = 4034134232774028207LL;
	static uint32_t x26 = UINT32_MAX;
	int64_t x27 = 4509990LL;
	static uint8_t x28 = UINT8_MAX;
	static int64_t t5 = 15LL;

	t5 = (((x25/x26)-x27)^x28);

	if (t5 != 934760047LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x30 = 334829892U;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = 15140U;

	t6 = (((x29/x30)-x31)^x32);

	if (t6 != -17627LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	static uint64_t x34 = 227LLU;
	uint64_t x35 = 2367006882LLU;
	uint64_t t7 = 27821617441LLU;

	t7 = (((x33/x34)-x35)^x36);

	if (t7 != 18446744071361465137LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 15903003U;
	volatile uint32_t x38 = 1601U;
	uint32_t x39 = 4347U;
	volatile uint32_t t8 = 319144U;

	t8 = (((x37/x38)-x39)^x40);

	if (t8 != 5602U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x42 = 855U;
	volatile int8_t x43 = INT8_MIN;
	int64_t t9 = 43040186635251LL;

	t9 = (((x41/x42)-x43)^x44);

	if (t9 != 1043121909017LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x49 = INT16_MIN;
	int8_t x51 = -1;
	int64_t x52 = INT64_MAX;
	static int64_t t10 = 1LL;

	t10 = (((x49/x50)-x51)^x52);

	if (t10 != 9223372036854000687LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -2822974;
	static uint64_t x54 = UINT64_MAX;
	volatile uint64_t x55 = 32218LLU;
	int32_t x56 = 739123;
	uint64_t t11 = 2230443202567168102LLU;

	t11 = (((x53/x54)-x55)^x56);

	if (t11 != 18446744073708815637LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -4;
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 3U;
	volatile uint64_t t12 = 17823810LLU;

	t12 = (((x57/x58)-x59)^x60);

	if (t12 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x62 = -827099130;
	int64_t x63 = 946704LL;
	static int32_t x64 = -1;
	int64_t t13 = 25073035078LL;

	t13 = (((x61/x62)-x63)^x64);

	if (t13 != 946703LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x66 = INT32_MIN;
	volatile uint32_t x68 = 38170U;
	int64_t t14 = -1263648LL;

	t14 = (((x65/x66)-x67)^x68);

	if (t14 != 38170LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	volatile uint8_t x72 = 90U;
	int64_t t15 = -39926845864LL;

	t15 = (((x69/x70)-x71)^x72);

	if (t15 != -32677LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = INT32_MIN;
	int16_t x79 = -14751;
	int8_t x80 = -54;
	int32_t t16 = -1040012;

	t16 = (((x77/x78)-x79)^x80);

	if (t16 != -14763) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x82 = 3528;
	static volatile int8_t x83 = INT8_MIN;
	static uint16_t x84 = 25578U;
	static int32_t t17 = 1551873;

	t17 = (((x81/x82)-x83)^x84);

	if (t17 != 25450) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 3;
	int8_t x86 = 34;
	int8_t x88 = INT8_MAX;
	volatile int32_t t18 = 1;

	t18 = (((x85/x86)-x87)^x88);

	if (t18 != 111) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = 548054355LLU;
	int32_t x91 = INT32_MIN;
	int16_t x92 = 3;
	volatile uint64_t t19 = 417LLU;

	t19 = (((x89/x90)-x91)^x92);

	if (t19 != 2147483651LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -1LL;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MIN;
	int64_t t20 = 312LL;

	t20 = (((x93/x94)-x95)^x96);

	if (t20 != 4294901761LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	static int16_t x98 = 93;
	int32_t x99 = INT32_MIN;
	uint64_t x100 = 2997LLU;
	volatile uint64_t t21 = 1094926LLU;

	t21 = (((x97/x98)-x99)^x100);

	if (t21 != 99176045554527213LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x104 = 500LLU;
	uint64_t t22 = 17LLU;

	t22 = (((x101/x102)-x103)^x104);

	if (t22 != 4294966840LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	static int16_t x107 = 550;
	uint16_t x108 = 12U;
	int32_t t23 = -235761825;

	t23 = (((x105/x106)-x107)^x108);

	if (t23 != -554) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x110 = 100794698U;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	volatile uint64_t t24 = 1371770LLU;

	t24 = (((x109/x110)-x111)^x112);

	if (t24 != 183013056869LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 1U;
	uint32_t x114 = 143999U;
	static uint64_t x115 = UINT64_MAX;
	volatile int8_t x116 = -1;
	volatile uint64_t t25 = 111130499LLU;

	t25 = (((x113/x114)-x115)^x116);

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x119 = INT32_MIN;
	int8_t x120 = INT8_MIN;
	int64_t t26 = 243695755LL;

	t26 = (((x117/x118)-x119)^x120);

	if (t26 != -72624978815631615LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 316U;
	int64_t x122 = INT64_MIN;
	static uint8_t x123 = 1U;

	t27 = (((x121/x122)-x123)^x124);

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x126 = 31U;
	int64_t x127 = INT64_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t28 = 866528361004LLU;

	t28 = (((x125/x126)-x127)^x128);

	if (t28 != 9223372036854773692LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 16417623875LL;
	volatile int8_t x130 = 1;
	int64_t x131 = -39804LL;
	int8_t x132 = 4;
	volatile int64_t t29 = 1004420841LL;

	t29 = (((x129/x130)-x131)^x132);

	if (t29 != 16417663675LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	uint8_t x135 = 15U;
	int64_t x136 = -7802766490764LL;
	int64_t t30 = 2886086LL;

	t30 = (((x133/x134)-x135)^x136);

	if (t30 != 7802749581469LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x139 = INT32_MAX;
	uint32_t x140 = 97191572U;
	static volatile int64_t t31 = -17150070LL;

	t31 = (((x137/x138)-x139)^x140);

	if (t31 != 2244675220LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	volatile int64_t x142 = 1713866497316448578LL;
	int8_t x144 = INT8_MIN;
	int64_t t32 = -6762410612746737LL;

	t32 = (((x141/x142)-x143)^x144);

	if (t32 != 109LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MAX;
	static int16_t x148 = -3663;
	int32_t t33 = 2309;

	t33 = (((x145/x146)-x147)^x148);

	if (t33 != 29104) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 1224LLU;
	int16_t x152 = 2;
	volatile uint64_t t34 = 6089379546095872LLU;

	t34 = (((x149/x150)-x151)^x152);

	if (t34 != 15070869341265972LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = 245;
	static int16_t x154 = INT16_MIN;
	int16_t x155 = -24;
	static uint32_t x156 = 114598U;
	uint32_t t35 = 6946383U;

	t35 = (((x153/x154)-x155)^x156);

	if (t35 != 114622U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t36 = -46504013;

	t36 = (((x157/x158)-x159)^x160);

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = 31;
	uint64_t t37 = 611208LLU;

	t37 = (((x161/x162)-x163)^x164);

	if (t37 != 9116775LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x165 = INT8_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 18U;

	t38 = (((x165/x166)-x167)^x168);

	if (t38 != -65517LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MAX;
	volatile int32_t x171 = -86;
	int8_t x172 = INT8_MIN;
	static int32_t t39 = -217055;

	t39 = (((x169/x170)-x171)^x172);

	if (t39 != -550) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x173 = 66LLU;
	int32_t x174 = INT32_MAX;
	int32_t x175 = 342;
	static volatile int32_t x176 = INT32_MIN;
	volatile uint64_t t40 = 6278LLU;

	t40 = (((x173/x174)-x175)^x176);

	if (t40 != 2147483306LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = 3;
	static int16_t x179 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t41 = 139086189U;

	t41 = (((x177/x178)-x179)^x180);

	if (t41 != 4294934523U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x183 = INT64_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t42 = 87LLU;

	t42 = (((x181/x182)-x183)^x184);

	if (t42 != 9223372036857754334LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = -1LL;
	uint32_t x187 = 30193770U;
	int16_t x188 = INT16_MIN;
	volatile int64_t t43 = 4776349928139406LL;

	t43 = (((x185/x186)-x187)^x188);

	if (t43 != 2177681303LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -254018406;
	uint32_t x192 = 84U;
	volatile int64_t t44 = -2332209842451359675LL;

	t44 = (((x189/x190)-x191)^x192);

	if (t44 != -1893465293LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MAX;
	static int8_t x195 = -1;
	static volatile int64_t x196 = -1LL;

	t45 = (((x193/x194)-x195)^x196);

	if (t45 != 256LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x197 = 36492754U;
	int32_t x198 = -1;
	uint64_t x199 = 2LLU;
	volatile uint8_t x200 = 60U;
	static uint64_t t46 = 606872LLU;

	t46 = (((x197/x198)-x199)^x200);

	if (t46 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 2U;
	uint8_t x206 = 2U;
	int32_t x207 = 59;
	volatile int64_t x208 = INT64_MIN;
	int64_t t47 = -334968077601016LL;

	t47 = (((x205/x206)-x207)^x208);

	if (t47 != 9223372036854775750LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 8U;
	int32_t x210 = INT32_MAX;
	int8_t x211 = 1;
	volatile int32_t t48 = -1;

	t48 = (((x209/x210)-x211)^x212);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = -1;
	uint64_t x215 = 3006034LLU;
	static int16_t x216 = INT16_MIN;
	static uint64_t t49 = 30266670LLU;

	t49 = (((x213/x214)-x215)^x216);

	if (t49 != 2957742LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x218 = 6U;
	uint8_t x219 = UINT8_MAX;

	t50 = (((x217/x218)-x219)^x220);

	if (t50 != -357914194) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = -2603;
	static volatile int16_t x223 = -1641;
	static int8_t x224 = INT8_MIN;
	volatile int64_t t51 = -1223LL;

	t51 = (((x221/x222)-x223)^x224);

	if (t51 != -3543362288459041LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = 10U;
	static int8_t x227 = -12;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t52 = 8498327670755015047LLU;

	t52 = (((x225/x226)-x227)^x228);

	if (t52 != 922337203685477567LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x230 = 17361U;
	static int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;

	t53 = (((x229/x230)-x231)^x232);

	if (t53 != 9223372036854652114LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = 9;
	volatile int32_t x238 = -1;
	volatile int16_t x239 = -71;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t54 = 342945;

	t54 = (((x237/x238)-x239)^x240);

	if (t54 != -32706) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = 189U;
	uint32_t x246 = 2729U;
	volatile int8_t x247 = 0;
	int64_t x248 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = (((x245/x246)-x247)^x248);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x249 = -1LL;
	int64_t x250 = INT64_MAX;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	volatile int64_t t56 = -8910687629LL;

	t56 = (((x249/x250)-x251)^x252);

	if (t56 != -2147483520LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = -1;
	int32_t t57 = -1;

	t57 = (((x253/x254)-x255)^x256);

	if (t57 != 65533) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 0U;
	int32_t x258 = 256911656;
	uint8_t x259 = 104U;
	volatile uint64_t x260 = UINT64_MAX;

	t58 = (((x257/x258)-x259)^x260);

	if (t58 != 103LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = INT32_MIN;
	int8_t x262 = -3;
	int64_t x263 = INT64_MAX;
	uint16_t x264 = 3U;
	int64_t t59 = -49921260LL;

	t59 = (((x261/x262)-x263)^x264);

	if (t59 != -9223372036138947928LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x265 = UINT64_MAX;
	static volatile int32_t x266 = -1;
	int8_t x267 = -1;
	uint32_t x268 = 215U;

	t60 = (((x265/x266)-x267)^x268);

	if (t60 != 213LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x270 = -1;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = 1;
	static int32_t t61 = -393209;

	t61 = (((x269/x270)-x271)^x272);

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = -1LL;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t t62 = 110868916877LL;

	t62 = (((x273/x274)-x275)^x276);

	if (t62 != -4294999811LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x277 = 7663595374356498621LLU;
	int8_t x280 = -3;

	t63 = (((x277/x278)-x279)^x280);

	if (t63 != 24LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x282 = INT8_MIN;
	int64_t x283 = -1LL;
	volatile int16_t x284 = -1;
	static int64_t t64 = -36LL;

	t64 = (((x281/x282)-x283)^x284);

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MAX;
	int16_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 67U;
	static uint64_t t65 = 482176307LLU;

	t65 = (((x285/x286)-x287)^x288);

	if (t65 != 18446744073709518913LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = 179406102;
	int8_t x291 = -12;
	int32_t t66 = 88;

	t66 = (((x289/x290)-x291)^x292);

	if (t66 != -2147483636) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x294 = INT64_MIN;
	uint8_t x295 = 18U;
	int32_t x296 = 5270;
	uint64_t t67 = 1598958818466485825LLU;

	t67 = (((x293/x294)-x295)^x296);

	if (t67 != 18446744073709546360LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = INT16_MAX;
	static uint8_t x300 = 95U;
	volatile int32_t t68 = 5;

	t68 = (((x297/x298)-x299)^x300);

	if (t68 != 15023) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = UINT64_MAX;
	static int16_t x302 = -1;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	uint64_t t69 = 13356299LLU;

	t69 = (((x301/x302)-x303)^x304);

	if (t69 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x305 = 29382216U;
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	volatile uint32_t t70 = 251751U;

	t70 = (((x305/x306)-x307)^x308);

	if (t70 != 2147549183U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -71;
	int64_t x311 = INT64_MAX;
	int32_t x312 = 7620844;
	static volatile int64_t t71 = -59LL;

	t71 = (((x309/x310)-x311)^x312);

	if (t71 != -9223372036847154962LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x314 = 159323U;

	t72 = (((x313/x314)-x315)^x316);

	if (t72 != 25264U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x317 = 24107585;
	int32_t x318 = -1;
	uint32_t x319 = 79U;
	static uint16_t x320 = 0U;
	volatile uint32_t t73 = 7942U;

	t73 = (((x317/x318)-x319)^x320);

	if (t73 != 4270859632U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = 9106;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MAX;

	t74 = (((x321/x322)-x323)^x324);

	if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x325 = 5;
	static uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;

	t75 = (((x325/x326)-x327)^x328);

	if (t75 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x329 = 63145LLU;
	volatile int8_t x330 = -1;
	static uint32_t x331 = UINT32_MAX;
	volatile uint64_t x332 = UINT64_MAX;

	t76 = (((x329/x330)-x331)^x332);

	if (t76 != 4294967294LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x334 = 8228918733181LLU;
	uint8_t x335 = 90U;
	int32_t x336 = 0;
	volatile uint64_t t77 = 15586LLU;

	t77 = (((x333/x334)-x335)^x336);

	if (t77 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MAX;
	static int16_t x338 = INT16_MIN;
	static uint32_t x340 = 30440U;
	uint32_t t78 = 1984146U;

	t78 = (((x337/x338)-x339)^x340);

	if (t78 != 4294964969U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 58U;
	int8_t x342 = 1;
	int64_t x343 = 52540480817556932LL;
	static uint32_t x344 = 112191715U;
	int64_t t79 = -906LL;

	t79 = (((x341/x342)-x343)^x344);

	if (t79 != -52540480723518827LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 192U;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MAX;
	int16_t x348 = -1;
	int64_t t80 = 186225235145225LL;

	t80 = (((x345/x346)-x347)^x348);

	if (t80 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x350 = -1;
	volatile int32_t x352 = -1;

	t81 = (((x349/x350)-x351)^x352);

	if (t81 != 2330390640LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = 13071;
	uint16_t x356 = 30847U;
	uint64_t t82 = 29065LLU;

	t82 = (((x353/x354)-x355)^x356);

	if (t82 != 18446742112666338457LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x357 = INT16_MIN;
	static uint16_t x358 = UINT16_MAX;
	static uint8_t x359 = 1U;
	int64_t x360 = INT64_MIN;

	t83 = (((x357/x358)-x359)^x360);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = -1;
	int8_t x364 = 47;
	static volatile int32_t t84 = -3777;

	t84 = (((x361/x362)-x363)^x364);

	if (t84 != 46) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x369 = 1;
	static int16_t x370 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile int64_t t85 = -4297LL;

	t85 = (((x369/x370)-x371)^x372);

	if (t85 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x374 = UINT8_MAX;
	static int16_t x375 = INT16_MIN;
	int32_t t86 = 99298778;

	t86 = (((x373/x374)-x375)^x376);

	if (t86 != 8454276) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = -1;
	volatile int32_t x380 = -1;
	volatile uint64_t t87 = 1718205178LLU;

	t87 = (((x377/x378)-x379)^x380);

	if (t87 != 3371117145250LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x382 = 5U;
	static volatile int64_t t88 = 78412058033LL;

	t88 = (((x381/x382)-x383)^x384);

	if (t88 != 1844674407376811376LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x385 = INT32_MIN;
	volatile int64_t x386 = -781442544059LL;
	int16_t x387 = -1;
	int32_t x388 = INT32_MAX;

	t89 = (((x385/x386)-x387)^x388);

	if (t89 != 2147483646LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 19U;
	uint16_t x394 = 236U;
	int16_t x396 = -185;
	volatile int32_t t90 = -20646702;

	t90 = (((x393/x394)-x395)^x396);

	if (t90 != -57) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 982U;
	int8_t x400 = INT8_MIN;

	t91 = (((x397/x398)-x399)^x400);

	if (t91 != 35774LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = -1;
	static int32_t x402 = -279785;
	volatile uint16_t x403 = 979U;
	uint8_t x404 = UINT8_MAX;
	int32_t t92 = -90023;

	t92 = (((x401/x402)-x403)^x404);

	if (t92 != -814) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = INT64_MIN;
	volatile uint32_t x406 = 4782U;
	int16_t x408 = -221;
	int64_t t93 = -124628181LL;

	t93 = (((x405/x406)-x407)^x408);

	if (t93 != 1928768723726143LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x409 = 0U;
	int16_t x410 = INT16_MAX;
	int32_t x411 = INT32_MIN;
	static volatile uint32_t t94 = 478U;

	t94 = (((x409/x410)-x411)^x412);

	if (t94 != 2147468864U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -389173200;
	int64_t x414 = INT64_MIN;
	static volatile int8_t x415 = INT8_MAX;
	static int8_t x416 = INT8_MIN;
	static volatile int64_t t95 = -564614636007658LL;

	t95 = (((x413/x414)-x415)^x416);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x418 = 686793U;
	int8_t x419 = -2;
	static int32_t x420 = INT32_MIN;
	volatile int64_t t96 = 118754837217622LL;

	t96 = (((x417/x418)-x419)^x420);

	if (t96 != 25842816083LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x421 = 0U;
	int16_t x422 = INT16_MAX;
	uint16_t x424 = 64U;
	int32_t t97 = 0;

	t97 = (((x421/x422)-x423)^x424);

	if (t97 != -70) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = 312LL;
	int16_t x427 = -957;
	int16_t x428 = -1;
	int64_t t98 = 62372352173524709LL;

	t98 = (((x425/x426)-x427)^x428);

	if (t98 != 29562089861713067LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x434 = INT8_MIN;
	static uint64_t x435 = 132770676328LLU;
	uint16_t x436 = UINT16_MAX;
	static uint64_t t99 = 1292904226635164558LLU;

	t99 = (((x433/x434)-x435)^x436);

	if (t99 != 18446743940938907239LLU) { NG(); } else { ; }
	
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
