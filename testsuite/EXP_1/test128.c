#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x2 = 126U;
static volatile int32_t x6 = -1;
int64_t x7 = -1LL;
int32_t x11 = 0;
volatile int32_t t2 = -22444;
int8_t x21 = INT8_MIN;
int32_t t6 = 3;
volatile int8_t x30 = INT8_MIN;
volatile uint16_t x32 = UINT16_MAX;
int32_t x55 = -1;
static int16_t x56 = -1;
uint64_t x57 = 66853848246504612LLU;
int8_t x59 = -1;
uint32_t x64 = UINT32_MAX;
int16_t x65 = INT16_MAX;
int32_t t15 = -56814337;
uint16_t x70 = 412U;
int16_t x71 = -1;
static volatile int32_t x74 = 562521;
int16_t x75 = -1;
int8_t x76 = INT8_MIN;
volatile int64_t x83 = 117433578872981570LL;
static int8_t x90 = 9;
volatile int32_t x93 = 0;
int32_t x99 = INT32_MAX;
static uint8_t x106 = UINT8_MAX;
uint32_t x107 = UINT32_MAX;
volatile int64_t t24 = 406640265628LL;
int64_t x112 = 10276082306079LL;
uint8_t x117 = 0U;
volatile int8_t x123 = INT8_MIN;
volatile int64_t t28 = -354761LL;
int16_t x130 = INT16_MIN;
int64_t x132 = -1LL;
volatile int64_t t30 = 42790LL;
int64_t x140 = INT64_MAX;
uint64_t x142 = UINT64_MAX;
int32_t t33 = 49080452;
volatile int8_t x149 = INT8_MAX;
int32_t t35 = 1786757;
int64_t x157 = -682165LL;
volatile uint64_t x165 = 68LLU;
static int64_t x166 = INT64_MAX;
volatile int32_t x172 = INT32_MIN;
uint32_t x174 = 1798923285U;
static int32_t t41 = 4003;
uint16_t x180 = 9892U;
uint8_t x192 = UINT8_MAX;
static int32_t t43 = 252008;
int16_t x193 = 901;
volatile int16_t x202 = -990;
uint16_t x204 = UINT16_MAX;
int32_t x232 = INT32_MIN;
int32_t t51 = 61;
volatile int8_t x236 = INT8_MIN;
int8_t x237 = -1;
volatile int32_t t53 = -1972173;
int32_t t54 = 12493;
int64_t x247 = 10610946364LL;
int32_t x248 = INT32_MIN;
volatile int32_t t55 = -995918747;
volatile int16_t x250 = -959;
int32_t x253 = INT32_MIN;
volatile int64_t x262 = -1LL;
static uint64_t x267 = 15962LLU;
int8_t x273 = -1;
static int16_t x281 = -1;
int16_t x282 = INT16_MIN;
int32_t t64 = -1213;
uint16_t x291 = 23411U;
int32_t x305 = -1;
static volatile int64_t x307 = INT64_MIN;
int32_t t69 = 3270571;
int16_t x310 = INT16_MAX;
static volatile int64_t x312 = INT64_MIN;
volatile int64_t t70 = 685LL;
int32_t t71 = 24193479;
int8_t x317 = -1;
int8_t x321 = INT8_MIN;
int32_t x322 = -25944704;
volatile uint64_t t73 = 21130045116167LLU;
volatile uint32_t x328 = 48356222U;
volatile uint32_t x330 = 171U;
static uint8_t x332 = UINT8_MAX;
int64_t x339 = -1603275635LL;
static int64_t x342 = -1LL;
volatile int16_t x343 = INT16_MAX;
static int32_t x346 = INT32_MIN;
static uint32_t x347 = UINT32_MAX;
volatile int32_t t78 = -227;
uint32_t x350 = 30667U;
int8_t x358 = INT8_MAX;
static uint16_t x361 = UINT16_MAX;
uint32_t x367 = 240153U;
volatile int32_t t84 = 1;
static volatile int32_t x373 = -1;
int32_t x377 = -343328320;
int8_t x381 = INT8_MIN;
volatile uint64_t t87 = 22881008108482LLU;
int64_t t88 = 2LL;
int16_t x402 = INT16_MIN;
int32_t x405 = INT32_MAX;
uint32_t x408 = UINT32_MAX;
int16_t x420 = INT16_MIN;
volatile int32_t t95 = 183206;
volatile int64_t x430 = -1LL;
int16_t x433 = INT16_MIN;
static volatile int64_t x435 = INT64_MIN;
volatile uint32_t t99 = 1155873U;


void f0(void) {
	uint64_t x1 = 15626504392LLU;
	int64_t x3 = INT64_MIN;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 3270;

	t0 = (((x1+x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = UINT64_MAX;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 7184219;

	t1 = (((x5+x6)<=x7)&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static int8_t x10 = -1;
	int32_t x12 = INT32_MIN;

	t2 = (((x9+x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 2522891LLU;

	t3 = (((x13+x14)<=x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -69745648232457995LL;
	uint32_t x18 = UINT32_MAX;
	static int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MAX;
	int32_t t4 = -306;

	t4 = (((x17+x18)<=x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = 9U;
	int16_t x23 = -1;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 111720434;

	t5 = (((x21+x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	int8_t x26 = 7;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;

	t6 = (((x25+x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 434U;
	int8_t x31 = INT8_MIN;
	int32_t t7 = -15;

	t7 = (((x29+x30)<=x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 15U;
	uint16_t x34 = 3U;
	volatile int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = -6269271;

	t8 = (((x33+x34)<=x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -10;
	uint32_t x38 = 834322331U;
	volatile int32_t x39 = -1;
	int64_t x40 = INT64_MAX;
	int64_t t9 = -37LL;

	t9 = (((x37+x38)<=x39)&x40);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile int8_t x42 = -7;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = -1LL;
	static int64_t t10 = -69660386203LL;

	t10 = (((x41+x42)<=x43)&x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 4U;
	int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = 27U;
	volatile int32_t t11 = 756426965;

	t11 = (((x49+x50)<=x51)&x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MIN;
	volatile int32_t t12 = 2;

	t12 = (((x53+x54)<=x55)&x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = 24;
	static volatile uint8_t x60 = UINT8_MAX;
	static int32_t t13 = -501154;

	t13 = (((x57+x58)<=x59)&x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 1;
	static uint64_t x62 = 1048107849645274464LLU;
	static uint8_t x63 = 1U;
	volatile uint32_t t14 = 4074271U;

	t14 = (((x61+x62)<=x63)&x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	int32_t x68 = -1;

	t15 = (((x65+x66)<=x67)&x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t16 = 25LL;

	t16 = (((x69+x70)<=x71)&x72);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 28;
	int32_t t17 = 147;

	t17 = (((x73+x74)<=x75)&x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 215462U;
	int64_t x82 = INT64_MIN;
	static int8_t x84 = INT8_MAX;
	static volatile int32_t t18 = 88;

	t18 = (((x81+x82)<=x83)&x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	static int64_t x86 = -1LL;
	volatile int64_t x87 = 248577061890LL;
	volatile int32_t x88 = -356;
	static int32_t t19 = 125328205;

	t19 = (((x85+x86)<=x87)&x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = -1LL;
	volatile int32_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t20 = 6;

	t20 = (((x89+x90)<=x91)&x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x94 = 1217634310LLU;
	static int32_t x95 = 8229004;
	volatile int32_t x96 = 64095;
	volatile int32_t t21 = 16714;

	t21 = (((x93+x94)<=x95)&x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x98 = 0U;
	static int8_t x100 = -1;
	static volatile int32_t t22 = 2781727;

	t22 = (((x97+x98)<=x99)&x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	int16_t x102 = INT16_MAX;
	static volatile int32_t x103 = INT32_MIN;
	static uint64_t x104 = 95196LLU;
	volatile uint64_t t23 = 318018525968755460LLU;

	t23 = (((x101+x102)<=x103)&x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x108 = -205LL;

	t24 = (((x105+x106)<=x107)&x108);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 3U;
	uint16_t x111 = 1U;
	int64_t t25 = 58855984051914LL;

	t25 = (((x109+x110)<=x111)&x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 427285LL;
	int16_t x114 = INT16_MIN;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	int32_t t26 = 2234;

	t26 = (((x113+x114)<=x115)&x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x118 = 69047708400335LLU;
	volatile uint32_t x119 = 214U;
	int16_t x120 = 15904;
	int32_t t27 = -7969;

	t27 = (((x117+x118)<=x119)&x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = INT64_MIN;
	int64_t x122 = 2918701768448360LL;
	int64_t x124 = INT64_MIN;

	t28 = (((x121+x122)<=x123)&x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -65;
	static int32_t x126 = 372396978;
	int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t29 = -1;

	t29 = (((x125+x126)<=x127)&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -47522LL;
	uint64_t x131 = 615184LLU;

	t30 = (((x129+x130)<=x131)&x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 48U;
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 2112492510919511994LLU;
	static volatile int8_t x136 = 0;
	int32_t t31 = -938284674;

	t31 = (((x133+x134)<=x135)&x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 2U;
	uint64_t x138 = 2LLU;
	static uint16_t x139 = UINT16_MAX;
	int64_t t32 = -3632781108LL;

	t32 = (((x137+x138)<=x139)&x140);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int64_t x143 = -116481815LL;
	int16_t x144 = -178;

	t33 = (((x141+x142)<=x143)&x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	volatile int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -15988;
	int32_t t34 = 96;

	t34 = (((x145+x146)<=x147)&x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	int8_t x152 = -6;

	t35 = (((x149+x150)<=x151)&x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 4379758129220LLU;
	int16_t x155 = INT16_MAX;
	volatile int32_t x156 = INT32_MIN;
	int32_t t36 = 251326;

	t36 = (((x153+x154)<=x155)&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x158 = INT64_MAX;
	volatile int64_t x159 = 605759345LL;
	uint8_t x160 = 35U;
	int32_t t37 = -111002417;

	t37 = (((x157+x158)<=x159)&x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = INT32_MIN;
	int8_t x162 = 47;
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t38 = 102747;

	t38 = (((x161+x162)<=x163)&x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x167 = INT8_MAX;
	int8_t x168 = -2;
	int32_t t39 = -1508528;

	t39 = (((x165+x166)<=x167)&x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x169 = 31581U;
	volatile uint64_t x170 = 4128643683LLU;
	static volatile uint64_t x171 = 1LLU;
	int32_t t40 = -372;

	t40 = (((x169+x170)<=x171)&x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 797U;
	int32_t x175 = INT32_MIN;
	int8_t x176 = 5;

	t41 = (((x173+x174)<=x175)&x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 20720U;
	int64_t x178 = INT64_MIN;
	uint8_t x179 = 57U;
	int32_t t42 = -1;

	t42 = (((x177+x178)<=x179)&x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -1;
	uint64_t x190 = 1947300928925089150LLU;
	int8_t x191 = INT8_MIN;

	t43 = (((x189+x190)<=x191)&x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = INT8_MIN;
	static int8_t x195 = -5;
	int64_t x196 = INT64_MIN;
	volatile int64_t t44 = 4LL;

	t44 = (((x193+x194)<=x195)&x196);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	int64_t x203 = INT64_MIN;
	volatile int32_t t45 = 12132932;

	t45 = (((x201+x202)<=x203)&x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = UINT64_MAX;
	volatile uint32_t x206 = 15009884U;
	static uint32_t x207 = 1120533815U;
	int32_t x208 = -2;
	int32_t t46 = 369461606;

	t46 = (((x205+x206)<=x207)&x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t47 = 4425;

	t47 = (((x213+x214)<=x215)&x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x217 = INT8_MAX;
	int32_t x218 = INT32_MIN;
	int32_t x219 = -1;
	static int8_t x220 = -8;
	volatile int32_t t48 = 493368137;

	t48 = (((x217+x218)<=x219)&x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	uint8_t x222 = 86U;
	int64_t x223 = INT64_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t49 = -2117;

	t49 = (((x221+x222)<=x223)&x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -25;
	int64_t x226 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 480U;
	volatile int32_t t50 = 94448417;

	t50 = (((x225+x226)<=x227)&x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = -23955631;
	int16_t x230 = INT16_MIN;
	static volatile int16_t x231 = 1;

	t51 = (((x229+x230)<=x231)&x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -1LL;
	volatile int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	static int32_t t52 = 791;

	t52 = (((x233+x234)<=x235)&x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x238 = 450023257961230LLU;
	static volatile uint16_t x239 = 4477U;
	volatile int16_t x240 = INT16_MIN;

	t53 = (((x237+x238)<=x239)&x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x241 = -1;
	static uint8_t x242 = UINT8_MAX;
	int16_t x243 = 30;
	static uint8_t x244 = UINT8_MAX;

	t54 = (((x241+x242)<=x243)&x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;

	t55 = (((x245+x246)<=x247)&x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x251 = 31U;
	int16_t x252 = -1;
	volatile int32_t t56 = -13;

	t56 = (((x249+x250)<=x251)&x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = 6819;
	int16_t x255 = INT16_MAX;
	uint8_t x256 = 53U;
	volatile int32_t t57 = -905;

	t57 = (((x253+x254)<=x255)&x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -671534071878LL;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	static int16_t x260 = 1974;
	int32_t t58 = 13;

	t58 = (((x257+x258)<=x259)&x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x261 = 1252462026U;
	volatile int64_t x263 = 1517LL;
	volatile uint32_t x264 = UINT32_MAX;
	uint32_t t59 = 1021923480U;

	t59 = (((x261+x262)<=x263)&x264);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = 2U;
	static int16_t x268 = -1520;
	int32_t t60 = -2290;

	t60 = (((x265+x266)<=x267)&x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = INT8_MAX;
	static int64_t x275 = 0LL;
	int64_t x276 = INT64_MIN;
	static int64_t t61 = 4353611306451LL;

	t61 = (((x273+x274)<=x275)&x276);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x277 = 7LLU;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t62 = 3397;

	t62 = (((x277+x278)<=x279)&x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t63 = 3LL;

	t63 = (((x281+x282)<=x283)&x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x285 = INT64_MIN;
	volatile int16_t x286 = INT16_MAX;
	int64_t x287 = -1LL;
	uint16_t x288 = 3423U;

	t64 = (((x285+x286)<=x287)&x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = 172;
	int32_t x290 = -1;
	static volatile uint16_t x292 = 4U;
	volatile int32_t t65 = -488;

	t65 = (((x289+x290)<=x291)&x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 31722115792LLU;
	int64_t x295 = INT64_MIN;
	uint32_t x296 = UINT32_MAX;
	static uint32_t t66 = 4U;

	t66 = (((x293+x294)<=x295)&x296);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MAX;
	int8_t x299 = -19;
	static int64_t x300 = INT64_MIN;
	int64_t t67 = -3168LL;

	t67 = (((x297+x298)<=x299)&x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -1;
	uint64_t x302 = 1204928964LLU;
	uint32_t x303 = 1330U;
	static volatile uint16_t x304 = UINT16_MAX;
	int32_t t68 = 7167741;

	t68 = (((x301+x302)<=x303)&x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x306 = UINT8_MAX;
	uint8_t x308 = UINT8_MAX;

	t69 = (((x305+x306)<=x307)&x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x309 = INT8_MAX;
	static int32_t x311 = INT32_MIN;

	t70 = (((x309+x310)<=x311)&x312);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x313 = 157180;
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -8164;

	t71 = (((x313+x314)<=x315)&x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 19U;
	int64_t x320 = INT64_MAX;
	int64_t t72 = 739LL;

	t72 = (((x317+x318)<=x319)&x320);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x323 = INT64_MAX;
	volatile uint64_t x324 = UINT64_MAX;

	t73 = (((x321+x322)<=x323)&x324);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	static volatile uint16_t x326 = 1859U;
	int64_t x327 = 1LL;
	static uint32_t t74 = 285U;

	t74 = (((x325+x326)<=x327)&x328);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 13U;
	int32_t x331 = 286372090;
	int32_t t75 = -336002;

	t75 = (((x329+x330)<=x331)&x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = INT32_MIN;
	volatile uint32_t x338 = UINT32_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t76 = 31;

	t76 = (((x337+x338)<=x339)&x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x341 = UINT32_MAX;
	int16_t x344 = 270;
	volatile int32_t t77 = 5184;

	t77 = (((x341+x342)<=x343)&x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x345 = INT8_MAX;
	uint8_t x348 = 0U;

	t78 = (((x345+x346)<=x347)&x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = -66478863383LL;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MIN;
	int64_t t79 = -7927333660622LL;

	t79 = (((x349+x350)<=x351)&x352);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = 15701468U;
	static uint16_t x354 = 273U;
	static int16_t x355 = INT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	static int32_t t80 = -156200460;

	t80 = (((x353+x354)<=x355)&x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = UINT8_MAX;
	static uint8_t x359 = 13U;
	volatile uint8_t x360 = 54U;
	int32_t t81 = 1539278;

	t81 = (((x357+x358)<=x359)&x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 421290LLU;
	uint64_t x364 = 3LLU;
	static uint64_t t82 = 154947212LLU;

	t82 = (((x361+x362)<=x363)&x364);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MAX;
	int8_t x368 = 0;
	volatile int32_t t83 = -6;

	t83 = (((x365+x366)<=x367)&x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = INT16_MAX;
	int32_t x370 = 50;
	uint16_t x371 = 2068U;
	int16_t x372 = -95;

	t84 = (((x369+x370)<=x371)&x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = -1LL;
	static uint64_t x376 = UINT64_MAX;
	volatile uint64_t t85 = 3138145LLU;

	t85 = (((x373+x374)<=x375)&x376);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = -2;
	int16_t x379 = 1;
	uint32_t x380 = 1U;
	volatile uint32_t t86 = 1101U;

	t86 = (((x377+x378)<=x379)&x380);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x382 = -971;
	static int16_t x383 = 955;
	uint64_t x384 = 17019909LLU;

	t87 = (((x381+x382)<=x383)&x384);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MAX;
	int64_t x388 = -1060LL;

	t88 = (((x385+x386)<=x387)&x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 1494624809722782LLU;
	int64_t x394 = -1LL;
	volatile int64_t x395 = 155846LL;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t89 = 376657800;

	t89 = (((x393+x394)<=x395)&x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = -1;
	int16_t x398 = 421;
	volatile int8_t x399 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t90 = 1U;

	t90 = (((x397+x398)<=x399)&x400);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = 362;
	volatile int16_t x403 = 60;
	volatile int64_t x404 = INT64_MAX;
	int64_t t91 = 16539207727934602LL;

	t91 = (((x401+x402)<=x403)&x404);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x406 = -1;
	uint32_t x407 = 45520407U;
	uint32_t t92 = 7U;

	t92 = (((x405+x406)<=x407)&x408);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x413 = 260422610885008367LLU;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	int64_t x416 = -1LL;
	int64_t t93 = -596LL;

	t93 = (((x413+x414)<=x415)&x416);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	int32_t x418 = 62;
	uint8_t x419 = UINT8_MAX;
	int32_t t94 = -124917;

	t94 = (((x417+x418)<=x419)&x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	volatile uint8_t x423 = 97U;
	int32_t x424 = -22334545;

	t95 = (((x421+x422)<=x423)&x424);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	int32_t x427 = INT32_MIN;
	int16_t x428 = -1;
	static int32_t t96 = -1271;

	t96 = (((x425+x426)<=x427)&x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 34U;
	uint8_t x431 = 0U;
	volatile uint16_t x432 = 3U;
	static int32_t t97 = 15946;

	t97 = (((x429+x430)<=x431)&x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x434 = 24793020066433139LLU;
	uint8_t x436 = UINT8_MAX;
	int32_t t98 = 35458891;

	t98 = (((x433+x434)<=x435)&x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x437 = 1U;
	int64_t x438 = INT64_MIN;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = 0U;

	t99 = (((x437+x438)<=x439)&x440);

	if (t99 != 0U) { NG(); } else { ; }
	
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
