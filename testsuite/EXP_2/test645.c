#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int16_t x2 = INT16_MIN;
int64_t x14 = INT64_MIN;
static int16_t x17 = INT16_MIN;
int16_t x21 = -53;
int8_t x26 = INT8_MAX;
volatile int8_t x32 = -12;
int16_t x33 = 1;
int8_t x37 = 12;
static volatile uint16_t x41 = 7U;
int16_t x43 = -1;
int32_t x60 = INT32_MIN;
volatile int32_t x61 = INT32_MIN;
volatile int32_t x63 = INT32_MAX;
static uint32_t x79 = UINT32_MAX;
int64_t x87 = -1LL;
static int64_t x92 = -524LL;
uint16_t x96 = UINT16_MAX;
uint8_t x104 = UINT8_MAX;
volatile int32_t t23 = 58;
volatile int32_t t26 = 3290531;
int64_t x121 = INT64_MAX;
volatile int64_t x132 = 298159623LL;
uint16_t x133 = 7U;
volatile int32_t t30 = 24;
static int32_t x138 = INT32_MAX;
uint16_t x140 = UINT16_MAX;
int32_t t32 = -882641287;
volatile int16_t x154 = -27;
uint64_t x155 = 8127666199687406LLU;
int16_t x171 = -1;
int8_t x184 = INT8_MAX;
int8_t x187 = 24;
static uint16_t x188 = 3U;
volatile int32_t t43 = 5045359;
static volatile int32_t x196 = -9;
int16_t x197 = -29;
int32_t x198 = -286473682;
volatile int32_t t45 = 132773334;
uint16_t x202 = UINT16_MAX;
volatile int8_t x208 = 0;
uint8_t x210 = 17U;
uint64_t x212 = 1565869LLU;
int32_t x220 = INT32_MIN;
int8_t x224 = -15;
uint16_t x229 = 0U;
static int32_t t54 = -17479;
int64_t x243 = INT64_MIN;
int16_t x244 = -2;
int32_t x249 = 296796;
int32_t t60 = 306;
int8_t x263 = INT8_MAX;
static uint64_t x269 = 968568537273643046LLU;
static int8_t x271 = INT8_MAX;
static int8_t x274 = INT8_MIN;
uint32_t x279 = UINT32_MAX;
static uint8_t x282 = 7U;
static volatile int16_t x283 = INT16_MIN;
volatile uint32_t x284 = UINT32_MAX;
static volatile int32_t t65 = -210342;
int32_t x285 = INT32_MIN;
volatile int32_t t67 = -1;
volatile int64_t x294 = -1LL;
uint8_t x301 = UINT8_MAX;
int32_t x305 = 0;
uint8_t x318 = 1U;
volatile int32_t t75 = -16;
static int16_t x327 = -1;
int64_t x329 = INT64_MIN;
int32_t x335 = INT32_MIN;
static volatile uint8_t x343 = 26U;
int8_t x347 = -1;
int8_t x354 = -11;
int16_t x361 = -1;
int8_t x363 = INT8_MIN;
uint64_t x374 = 125331857906LLU;
int16_t x378 = INT16_MIN;
int32_t x400 = INT32_MIN;
static int32_t x401 = -17000;
int64_t x404 = INT64_MIN;
int32_t t96 = -1;
uint16_t x409 = 36U;
int8_t x411 = 1;
uint64_t x420 = UINT64_MAX;
int8_t x423 = -1;
int32_t x424 = INT32_MIN;


void f0(void) {
	uint8_t x3 = 22U;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 13028374;

	t0 = ((x1&(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int8_t x6 = -1;
	static int32_t x7 = -1537;
	int16_t x8 = -5;
	volatile int32_t t1 = 20068035;

	t1 = ((x5&(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int16_t x15 = -4;
	uint64_t x16 = 17LLU;
	int32_t t2 = 694;

	t2 = ((x13&(x14/x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	volatile int64_t x19 = -1LL;
	uint16_t x20 = 3495U;
	volatile int32_t t3 = -13700207;

	t3 = ((x17&(x18/x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t4 = 303009;

	t4 = ((x21&(x22/x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 33059630U;
	int16_t x27 = 1;
	static int32_t x28 = -1;
	volatile int32_t t5 = 114833922;

	t5 = ((x25&(x26/x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 88502LLU;
	volatile int16_t x30 = 2526;
	int32_t x31 = INT32_MIN;
	int32_t t6 = 148;

	t6 = ((x29&(x30/x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MAX;
	static volatile int8_t x35 = -21;
	static int64_t x36 = INT64_MAX;
	int32_t t7 = 246;

	t7 = ((x33&(x34/x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x38 = INT32_MAX;
	static uint16_t x39 = 27U;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = 28113;

	t8 = ((x37&(x38/x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -476528737LL;
	uint16_t x44 = 0U;
	volatile int32_t t9 = -791649008;

	t9 = ((x41&(x42/x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = -5;
	int32_t t10 = -15222255;

	t10 = ((x45&(x46/x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -55LL;
	static int16_t x50 = 1;
	static int64_t x51 = 383540238753177158LL;
	uint32_t x52 = 11332U;
	volatile int32_t t11 = 1890241;

	t11 = ((x49&(x50/x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = 5550711315674959756LLU;
	static volatile int32_t t12 = 26021799;

	t12 = ((x57&(x58/x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x62 = INT8_MIN;
	uint8_t x64 = 2U;
	volatile int32_t t13 = -624;

	t13 = ((x61&(x62/x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	volatile int64_t x66 = INT64_MIN;
	static uint8_t x67 = 2U;
	int32_t x68 = -3;
	int32_t t14 = -57;

	t14 = ((x65&(x66/x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = -28017884;
	static volatile uint64_t x75 = 69667524328454LLU;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t15 = 11;

	t15 = ((x73&(x74/x75))==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MIN;
	volatile int64_t x80 = 4608919289656346LL;
	volatile int32_t t16 = -3951817;

	t16 = ((x77&(x78/x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 10U;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	static volatile uint64_t x84 = 1799655124384474910LLU;
	volatile int32_t t17 = 3;

	t17 = ((x81&(x82/x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 23U;
	int16_t x86 = INT16_MIN;
	int64_t x88 = 65LL;
	volatile int32_t t18 = 35;

	t18 = ((x85&(x86/x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 28LL;
	static volatile uint16_t x90 = 2U;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t t19 = 4;

	t19 = ((x89&(x90/x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = 47;
	static volatile int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	static volatile int32_t t20 = 77890489;

	t20 = ((x93&(x94/x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = 26561100U;
	static volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t21 = 654027829;

	t21 = ((x97&(x98/x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MIN;
	int16_t x102 = -3255;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t t22 = 123110;

	t22 = ((x101&(x102/x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile int32_t x108 = INT32_MIN;

	t23 = ((x105&(x106/x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 5U;
	int64_t x110 = -1LL;
	uint32_t x111 = 569240U;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t24 = 56;

	t24 = ((x109&(x110/x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	static volatile uint16_t x114 = 1834U;
	int32_t x115 = -22356648;
	int32_t x116 = INT32_MIN;
	int32_t t25 = 42;

	t25 = ((x113&(x114/x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 8;
	volatile int16_t x118 = 0;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;

	t26 = ((x117&(x118/x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	static volatile int8_t x124 = INT8_MIN;
	volatile int32_t t27 = 44414234;

	t27 = ((x121&(x122/x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = -1LL;
	int64_t x128 = INT64_MIN;
	volatile int32_t t28 = 285038;

	t28 = ((x125&(x126/x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1893024LL;
	uint16_t x130 = UINT16_MAX;
	volatile uint32_t x131 = UINT32_MAX;
	int32_t t29 = -2371750;

	t29 = ((x129&(x130/x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x134 = 55226719U;
	static volatile int64_t x135 = INT64_MIN;
	static int32_t x136 = INT32_MIN;

	t30 = ((x133&(x134/x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 6U;
	uint8_t x139 = 34U;
	int32_t t31 = 101865;

	t31 = ((x137&(x138/x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MAX;

	t32 = ((x141&(x142/x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 17433696U;
	int32_t x148 = -1;
	static volatile int32_t t33 = 128042829;

	t33 = ((x145&(x146/x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 30U;
	int16_t x150 = 6;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t34 = -27496;

	t34 = ((x149&(x150/x151))==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MAX;
	uint64_t x156 = 27LLU;
	static int32_t t35 = 311406508;

	t35 = ((x153&(x154/x155))==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = -1;
	volatile uint64_t x158 = 0LLU;
	int32_t x159 = 21;
	int16_t x160 = INT16_MAX;
	static int32_t t36 = 12402;

	t36 = ((x157&(x158/x159))==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = -13;
	static int32_t x163 = -28;
	int64_t x164 = 27565083797LL;
	int32_t t37 = -306341359;

	t37 = ((x161&(x162/x163))==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = UINT64_MAX;
	int64_t x170 = -4008832LL;
	uint8_t x172 = 124U;
	int32_t t38 = 986009;

	t38 = ((x169&(x170/x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = INT64_MIN;
	volatile int64_t x174 = INT64_MIN;
	volatile uint16_t x175 = 235U;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t39 = -54;

	t39 = ((x173&(x174/x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	volatile uint32_t x179 = 3585U;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t40 = -11;

	t40 = ((x177&(x178/x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	static uint16_t x183 = UINT16_MAX;
	static volatile int32_t t41 = 4380;

	t41 = ((x181&(x182/x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	uint32_t x186 = 450384697U;
	int32_t t42 = 964;

	t42 = ((x185&(x186/x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = 5361;
	int64_t x190 = -11250LL;
	static int8_t x191 = INT8_MIN;
	volatile int64_t x192 = 385018LL;

	t43 = ((x189&(x190/x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -1LL;
	uint16_t x195 = 1974U;
	static volatile int32_t t44 = -193;

	t44 = ((x193&(x194/x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x199 = UINT16_MAX;
	static uint32_t x200 = 524158U;

	t45 = ((x197&(x198/x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	static int32_t t46 = 0;

	t46 = ((x201&(x202/x203))==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	static volatile int16_t x206 = INT16_MAX;
	uint8_t x207 = 4U;
	volatile int32_t t47 = 61324;

	t47 = ((x205&(x206/x207))==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 21U;
	int32_t x211 = 212637583;
	volatile int32_t t48 = -10946;

	t48 = ((x209&(x210/x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = 5376;
	int32_t x215 = 1;
	volatile int64_t x216 = -1LL;
	int32_t t49 = 0;

	t49 = ((x213&(x214/x215))==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = 3;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = 649296;
	volatile int32_t t50 = -488080874;

	t50 = ((x217&(x218/x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x221 = 41106U;
	volatile int64_t x222 = 22LL;
	uint8_t x223 = UINT8_MAX;
	int32_t t51 = 148663672;

	t51 = ((x221&(x222/x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 53U;
	int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int16_t x228 = 0;
	volatile int32_t t52 = -576444157;

	t52 = ((x225&(x226/x227))==x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = INT64_MAX;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = 14;
	int32_t t53 = 9148210;

	t53 = ((x229&(x230/x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MAX;
	uint32_t x234 = 11968245U;
	volatile int8_t x235 = INT8_MAX;
	static int16_t x236 = INT16_MIN;

	t54 = ((x233&(x234/x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	volatile int64_t x238 = -10112738081LL;
	int16_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t55 = 1810006;

	t55 = ((x237&(x238/x239))==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	uint16_t x242 = 17U;
	volatile int32_t t56 = 56;

	t56 = ((x241&(x242/x243))==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x245 = 12;
	uint32_t x246 = 238U;
	static int32_t x247 = 19;
	int8_t x248 = -1;
	volatile int32_t t57 = 1481;

	t57 = ((x245&(x246/x247))==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x250 = -6;
	int64_t x251 = INT64_MAX;
	int64_t x252 = -8897LL;
	static volatile int32_t t58 = 276;

	t58 = ((x249&(x250/x251))==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t59 = -57163040;

	t59 = ((x253&(x254/x255))==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	int16_t x258 = -139;
	int8_t x259 = -3;
	uint32_t x260 = 8729630U;

	t60 = ((x257&(x258/x259))==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MAX;
	static int32_t x262 = 0;
	int16_t x264 = -1;
	static volatile int32_t t61 = -111148792;

	t61 = ((x261&(x262/x263))==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x270 = 22;
	uint8_t x272 = 0U;
	static int32_t t62 = 462;

	t62 = ((x269&(x270/x271))==x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	static volatile int16_t x276 = -1;
	static int32_t t63 = 251755;

	t63 = ((x273&(x274/x275))==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 1U;
	int8_t x278 = INT8_MIN;
	volatile int16_t x280 = 10;
	int32_t t64 = -933174160;

	t64 = ((x277&(x278/x279))==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -1LL;

	t65 = ((x281&(x282/x283))==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x286 = -6225;
	static int8_t x287 = -4;
	int32_t x288 = 1094;
	int32_t t66 = -3192;

	t66 = ((x285&(x286/x287))==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x289 = 16U;
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;

	t67 = ((x289&(x290/x291))==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = 31;
	static volatile int64_t x295 = INT64_MIN;
	static volatile int8_t x296 = INT8_MIN;
	int32_t t68 = -30183;

	t68 = ((x293&(x294/x295))==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t69 = -6;

	t69 = ((x297&(x298/x299))==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = INT32_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 3655LLU;
	volatile int32_t t70 = -37;

	t70 = ((x301&(x302/x303))==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = -339;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = 1U;
	volatile int32_t t71 = 3383141;

	t71 = ((x305&(x306/x307))==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 53U;
	int16_t x310 = 1;
	volatile int32_t x311 = INT32_MIN;
	uint16_t x312 = 470U;
	volatile int32_t t72 = -446;

	t72 = ((x309&(x310/x311))==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -2;
	int32_t x314 = -1;
	int64_t x315 = -1LL;
	int16_t x316 = 2;
	int32_t t73 = -72708;

	t73 = ((x313&(x314/x315))==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x317 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	int64_t x320 = 410741LL;
	volatile int32_t t74 = 1878414;

	t74 = ((x317&(x318/x319))==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 38;
	uint16_t x322 = UINT16_MAX;
	static int32_t x323 = INT32_MIN;
	uint16_t x324 = 37U;

	t75 = ((x321&(x322/x323))==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 19212801555627031LLU;
	static volatile int8_t x326 = INT8_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t76 = 496805737;

	t76 = ((x325&(x326/x327))==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = -4753;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -102618;
	int32_t t77 = 370753;

	t77 = ((x329&(x330/x331))==x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	static int16_t x336 = 650;
	int32_t t78 = 29222;

	t78 = ((x333&(x334/x335))==x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x337 = -199293731281LL;
	uint8_t x338 = 0U;
	int8_t x339 = -1;
	volatile int8_t x340 = -1;
	static int32_t t79 = -82302;

	t79 = ((x337&(x338/x339))==x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = 3U;
	static int8_t x342 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t80 = -559;

	t80 = ((x341&(x342/x343))==x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = -14;
	int8_t x348 = 16;
	static volatile int32_t t81 = 7;

	t81 = ((x345&(x346/x347))==x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x349 = INT64_MIN;
	uint64_t x350 = 233606468LLU;
	uint16_t x351 = 2084U;
	int8_t x352 = INT8_MIN;
	int32_t t82 = -6388;

	t82 = ((x349&(x350/x351))==x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 86585LLU;
	int64_t x355 = INT64_MIN;
	int16_t x356 = 44;
	int32_t t83 = 4605;

	t83 = ((x353&(x354/x355))==x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x357 = 1U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t84 = -7325;

	t84 = ((x357&(x358/x359))==x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x362 = UINT16_MAX;
	static uint8_t x364 = 68U;
	volatile int32_t t85 = -59;

	t85 = ((x361&(x362/x363))==x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -1;
	static int64_t x366 = 7922987449114243LL;
	volatile uint16_t x367 = UINT16_MAX;
	static uint16_t x368 = 25311U;
	static volatile int32_t t86 = -205554259;

	t86 = ((x365&(x366/x367))==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MAX;
	static int8_t x370 = 25;
	volatile uint16_t x371 = 3U;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t87 = 3455068;

	t87 = ((x369&(x370/x371))==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	int32_t t88 = -4;

	t88 = ((x373&(x374/x375))==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = -30;
	int32_t x379 = -1;
	volatile uint32_t x380 = 568U;
	int32_t t89 = 1;

	t89 = ((x377&(x378/x379))==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = -13;
	uint64_t x382 = 12816761458LLU;
	int32_t x383 = 2393;
	int64_t x384 = -1LL;
	volatile int32_t t90 = -558677555;

	t90 = ((x381&(x382/x383))==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MAX;
	uint16_t x388 = UINT16_MAX;
	int32_t t91 = 3;

	t91 = ((x385&(x386/x387))==x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 2U;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = 1;
	int32_t t92 = 5968;

	t92 = ((x389&(x390/x391))==x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x393 = 52U;
	volatile int64_t x394 = -256715842483366320LL;
	static int8_t x395 = -1;
	int64_t x396 = -20743304085381379LL;
	static int32_t t93 = -766356694;

	t93 = ((x393&(x394/x395))==x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = 1167092738693LLU;
	uint8_t x398 = 6U;
	int8_t x399 = -1;
	int32_t t94 = -78651;

	t94 = ((x397&(x398/x399))==x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x402 = INT8_MIN;
	int64_t x403 = -36772LL;
	volatile int32_t t95 = 250346718;

	t95 = ((x401&(x402/x403))==x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = -1453373032LL;
	uint64_t x407 = 15164949868877LLU;
	int32_t x408 = 0;

	t96 = ((x405&(x406/x407))==x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x410 = 4U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t97 = -199194756;

	t97 = ((x409&(x410/x411))==x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = -1;
	volatile int64_t x418 = -111LL;
	int64_t x419 = INT64_MIN;
	int32_t t98 = 1378;

	t98 = ((x417&(x418/x419))==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x421 = UINT8_MAX;
	uint16_t x422 = 242U;
	int32_t t99 = -1854657;

	t99 = ((x421&(x422/x423))==x424);

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
