#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int16_t x7 = INT16_MIN;
static uint64_t x8 = 6LLU;
uint64_t t1 = 259117795630604LLU;
static volatile int32_t x12 = INT32_MAX;
uint64_t t2 = 11735113LLU;
int16_t x23 = INT16_MAX;
static int64_t x27 = -30340384016LL;
int32_t x32 = -1;
volatile uint32_t t7 = 95757048U;
uint32_t x36 = 35944603U;
int8_t x43 = INT8_MIN;
volatile int32_t x44 = 957154;
int64_t x50 = -8061926LL;
int32_t x65 = INT32_MIN;
uint32_t t13 = 94168U;
static int16_t x71 = -1;
volatile uint64_t t15 = 122142881163457850LLU;
static uint64_t x84 = 9623LLU;
int32_t x86 = INT32_MIN;
volatile int64_t t19 = 472082LL;
int64_t x111 = INT64_MIN;
int16_t x116 = -4980;
uint16_t x124 = 7U;
int16_t x126 = INT16_MAX;
int16_t x127 = INT16_MIN;
int32_t x175 = INT32_MIN;
volatile int8_t x176 = -7;
volatile int8_t x178 = INT8_MIN;
uint8_t x190 = UINT8_MAX;
int32_t x191 = 26;
int32_t x193 = INT32_MIN;
int64_t x202 = 1104347951916086821LL;
uint32_t x205 = UINT32_MAX;
int16_t x207 = 991;
volatile int64_t x216 = -1060292558210129LL;
volatile int32_t x218 = INT32_MIN;
uint32_t x229 = 28U;
volatile int8_t x230 = 2;
int8_t x232 = -1;
uint32_t t44 = 893121512U;
uint64_t x234 = UINT64_MAX;
int8_t x235 = 0;
volatile int32_t t47 = -37;
uint32_t x248 = UINT32_MAX;
volatile int64_t x249 = -1LL;
int8_t x251 = INT8_MAX;
int8_t x262 = 1;
volatile int8_t x263 = -1;
volatile int32_t t51 = 3;
int16_t x277 = -1;
static uint16_t x279 = UINT16_MAX;
static int64_t x281 = -29LL;
int8_t x285 = INT8_MIN;
int16_t x286 = 5838;
int32_t x289 = 25228;
int64_t x293 = -627711870LL;
uint16_t x301 = 26026U;
static int8_t x312 = -1;
volatile uint32_t x317 = UINT32_MAX;
volatile int64_t x318 = INT64_MIN;
int8_t x319 = 7;
volatile uint16_t x321 = 39U;
volatile uint32_t t64 = 22313647U;
static uint8_t x332 = UINT8_MAX;
uint8_t x333 = 35U;
uint32_t x339 = 120U;
static volatile int64_t t67 = 374435LL;
int16_t x342 = INT16_MIN;
uint8_t x343 = 1U;
int32_t x346 = INT32_MIN;
static volatile uint32_t t69 = 511761634U;
int64_t x356 = -1LL;
int16_t x357 = -14;
int64_t x362 = -1LL;
uint64_t x363 = 0LLU;
int64_t x366 = INT64_MAX;
uint8_t x368 = UINT8_MAX;
volatile int32_t x371 = -504556;
uint32_t t75 = 12U;
static uint32_t t76 = 8255774U;
volatile uint8_t x378 = UINT8_MAX;
volatile int8_t x382 = INT8_MIN;
volatile int64_t x385 = INT64_MAX;
uint64_t x390 = 90548171888874LLU;
int8_t x391 = -13;
int8_t x394 = INT8_MIN;
int32_t x397 = INT32_MIN;
uint32_t x400 = 1U;
int32_t x402 = INT32_MIN;
static int64_t x403 = INT64_MIN;
uint8_t x406 = 49U;
int16_t x417 = -1;
int32_t x418 = INT32_MAX;
volatile uint32_t x420 = 9412968U;
int32_t x421 = 3;
static int64_t x425 = INT64_MAX;
static uint64_t x434 = UINT64_MAX;
uint64_t t90 = 19788880486995LLU;
int16_t x451 = -490;
uint16_t x454 = 2495U;
int8_t x464 = -1;
int32_t x467 = INT32_MIN;
static int16_t x468 = INT16_MAX;
static int16_t x475 = INT16_MAX;
int16_t x478 = INT16_MIN;
int8_t x479 = INT8_MIN;


void f0(void) {
	volatile int16_t x2 = -1;
	int8_t x3 = INT8_MIN;
	volatile int64_t x4 = 106323LL;
	volatile int64_t t0 = 16469956577LL;

	t0 = (((x1/x2)*x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x6 = UINT16_MAX;

	t1 = (((x5/x6)*x7)/x8);

	if (t1 != 3074457345439301632LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -124994981966688754LL;
	volatile uint64_t x10 = 249209610803644LLU;
	int32_t x11 = INT32_MIN;

	t2 = (((x9/x10)*x11)/x12);

	if (t2 != 8589861076LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int8_t x14 = INT8_MIN;
	static int32_t x15 = -1;
	int32_t x16 = 2996467;
	volatile int32_t t3 = -1;

	t3 = (((x13/x14)*x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -9150378171566LL;

	t4 = (((x17/x18)*x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = 1;

	t5 = (((x21/x22)*x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	static int32_t x28 = -1;
	volatile int64_t t6 = -65631605492LL;

	t6 = (((x25/x26)*x27)/x28);

	if (t6 != -1988357066488560LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 15U;
	int8_t x30 = -8;
	volatile int32_t x31 = INT32_MIN;

	t7 = (((x29/x30)*x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -127LL;
	int8_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	volatile int64_t t8 = 914675019271592812LL;

	t8 = (((x33/x34)*x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	volatile uint64_t t9 = 6599LLU;

	t9 = (((x41/x42)*x43)/x44);

	if (t9 != 19272493322610LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 0U;
	uint32_t x46 = 88U;
	volatile int32_t x47 = -1;
	uint16_t x48 = 13U;
	uint32_t t10 = 632677090U;

	t10 = (((x45/x46)*x47)/x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	uint16_t x51 = 223U;
	volatile int16_t x52 = INT16_MAX;
	volatile int64_t t11 = 14362205180938639LL;

	t11 = (((x49/x50)*x51)/x52);

	if (t11 != -7786084295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 2;
	uint8_t x58 = UINT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MAX;
	uint64_t t12 = 141007684LLU;

	t12 = (((x57/x58)*x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 856588653U;
	volatile int32_t x67 = INT32_MAX;
	int8_t x68 = -1;

	t13 = (((x65/x66)*x67)/x68);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 707LLU;
	uint32_t x70 = 550532U;
	uint32_t x72 = UINT32_MAX;
	uint64_t t14 = 515599LLU;

	t14 = (((x69/x70)*x71)/x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x77 = UINT16_MAX;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 109763186017385LLU;

	t15 = (((x77/x78)*x79)/x80);

	if (t15 != 168059LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 114U;
	int32_t x82 = 65066;
	int8_t x83 = -58;
	uint64_t t16 = 71LLU;

	t16 = (((x81/x82)*x83)/x84);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -1;
	static int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t17 = -1;

	t17 = (((x85/x86)*x87)/x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = INT32_MIN;
	static volatile int8_t x95 = 58;
	int64_t x96 = INT64_MAX;
	int64_t t18 = -7635LL;

	t18 = (((x93/x94)*x95)/x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MAX;
	uint16_t x102 = 464U;
	volatile int16_t x103 = -1;
	int64_t x104 = -219926128748LL;

	t19 = (((x101/x102)*x103)/x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x106 = 144001676413LLU;
	uint32_t x107 = 41U;
	int32_t x108 = INT32_MIN;
	uint64_t t20 = 4071LLU;

	t20 = (((x105/x106)*x107)/x108);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	volatile int64_t x110 = INT64_MIN;
	volatile uint32_t x112 = 765607347U;
	static volatile int64_t t21 = 369LL;

	t21 = (((x109/x110)*x111)/x112);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t t22 = 1203LLU;

	t22 = (((x113/x114)*x115)/x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = 108994LL;
	static volatile int8_t x119 = 0;
	static int32_t x120 = 53667651;
	int64_t t23 = 244435480476972747LL;

	t23 = (((x117/x118)*x119)/x120);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x121 = 8U;
	uint8_t x122 = 127U;
	int8_t x123 = INT8_MIN;
	int32_t t24 = -198;

	t24 = (((x121/x122)*x123)/x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = 1;
	int32_t x128 = -1;
	int32_t t25 = 758356;

	t25 = (((x125/x126)*x127)/x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	static int32_t x132 = -1;
	static volatile int32_t t26 = -26399463;

	t26 = (((x129/x130)*x131)/x132);

	if (t26 != 4194304) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x141 = -1;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	uint32_t x144 = UINT32_MAX;
	static int64_t t27 = 2674433502942LL;

	t27 = (((x141/x142)*x143)/x144);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 6889U;
	static int16_t x146 = INT16_MIN;
	uint16_t x147 = 1890U;
	static int64_t x148 = 782LL;
	static int64_t t28 = -63272684829237088LL;

	t28 = (((x145/x146)*x147)/x148);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = -1LL;
	int32_t x158 = -1;
	static int8_t x159 = 4;
	int8_t x160 = INT8_MIN;
	int64_t t29 = -218LL;

	t29 = (((x157/x158)*x159)/x160);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MIN;
	volatile int8_t x168 = INT8_MAX;
	uint32_t t30 = 57465U;

	t30 = (((x165/x166)*x167)/x168);

	if (t30 != 33818639U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x169 = UINT64_MAX;
	volatile int32_t x170 = INT32_MIN;
	uint16_t x171 = 62U;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t31 = 4275LLU;

	t31 = (((x169/x170)*x171)/x172);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 10800666U;
	uint64_t t32 = 1258112LLU;

	t32 = (((x173/x174)*x175)/x176);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 6;
	int64_t x179 = -1LL;
	int16_t x180 = -1;
	int64_t t33 = -7976165180796836LL;

	t33 = (((x177/x178)*x179)/x180);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MAX;
	volatile int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t34 = 206000808431521549LLU;

	t34 = (((x181/x182)*x183)/x184);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	static volatile uint32_t x186 = 95518672U;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	uint32_t t35 = 1230025760U;

	t35 = (((x185/x186)*x187)/x188);

	if (t35 != 16837354U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 3U;
	volatile int32_t x192 = INT32_MIN;
	static int32_t t36 = 0;

	t36 = (((x189/x190)*x191)/x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = 102299U;
	volatile uint32_t t37 = 9U;

	t37 = (((x193/x194)*x195)/x196);

	if (t37 != 20992U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = 57278319U;
	static int64_t x198 = 12259042391LL;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = 509LL;
	volatile int64_t t38 = 56770296765181LL;

	t38 = (((x197/x198)*x199)/x200);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 52U;
	static uint8_t x203 = 30U;
	volatile int64_t x204 = INT64_MAX;
	int64_t t39 = -3741833136962064506LL;

	t39 = (((x201/x202)*x203)/x204);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x206 = INT64_MAX;
	int64_t x208 = 2970101590080677LL;
	int64_t t40 = -1515839LL;

	t40 = (((x205/x206)*x207)/x208);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x213 = 17247328;
	int16_t x214 = INT16_MAX;
	int32_t x215 = -1;
	volatile int64_t t41 = -642088LL;

	t41 = (((x213/x214)*x215)/x216);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 45U;
	volatile int8_t x219 = 0;
	uint32_t x220 = 12940U;
	volatile uint32_t t42 = 1U;

	t42 = (((x217/x218)*x219)/x220);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x225 = -15;
	static uint16_t x226 = 13955U;
	int64_t x227 = -1LL;
	int64_t x228 = 162LL;
	volatile int64_t t43 = -21LL;

	t43 = (((x225/x226)*x227)/x228);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x231 = 0U;

	t44 = (((x229/x230)*x231)/x232);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -32410LL;
	volatile uint8_t x236 = 35U;
	static volatile uint64_t t45 = 2302293493593312723LLU;

	t45 = (((x233/x234)*x235)/x236);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x237 = UINT16_MAX;
	static uint32_t x238 = 36639U;
	int32_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	uint32_t t46 = 131623973U;

	t46 = (((x237/x238)*x239)/x240);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = INT16_MIN;
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;

	t47 = (((x241/x242)*x243)/x244);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = 432250645LL;
	volatile int64_t t48 = 458LL;

	t48 = (((x245/x246)*x247)/x248);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x250 = 7U;
	static int32_t x252 = INT32_MIN;
	static volatile int64_t t49 = -178LL;

	t49 = (((x249/x250)*x251)/x252);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x257 = -6777;
	int32_t x258 = -7964;
	int64_t x259 = -22310145LL;
	int16_t x260 = -1;
	int64_t t50 = 7253539850309LL;

	t50 = (((x257/x258)*x259)/x260);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x261 = 1856844;
	static uint16_t x264 = UINT16_MAX;

	t51 = (((x261/x262)*x263)/x264);

	if (t51 != -28) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = 30874U;
	static int32_t x271 = 0;
	int32_t x272 = -21386777;
	volatile uint32_t t52 = 15314U;

	t52 = (((x269/x270)*x271)/x272);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = INT8_MAX;
	volatile int32_t x274 = INT32_MIN;
	uint8_t x275 = 1U;
	int8_t x276 = INT8_MAX;
	int32_t t53 = 3;

	t53 = (((x273/x274)*x275)/x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x278 = UINT64_MAX;
	int64_t x280 = -1LL;
	static volatile uint64_t t54 = 272297021793266945LLU;

	t54 = (((x277/x278)*x279)/x280);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x282 = 1707U;
	int16_t x283 = 177;
	volatile int64_t x284 = -1LL;
	int64_t t55 = -31029LL;

	t55 = (((x281/x282)*x283)/x284);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x287 = INT8_MAX;
	uint64_t x288 = 23403949891132LLU;
	volatile uint64_t t56 = 1845618793161108LLU;

	t56 = (((x285/x286)*x287)/x288);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x290 = UINT16_MAX;
	uint16_t x291 = UINT16_MAX;
	uint32_t x292 = 3139U;
	volatile uint32_t t57 = 1742109U;

	t57 = (((x289/x290)*x291)/x292);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x294 = INT32_MIN;
	static int64_t x295 = INT64_MIN;
	volatile int64_t x296 = -1LL;
	int64_t t58 = 1LL;

	t58 = (((x293/x294)*x295)/x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x302 = -671535LL;
	int32_t x303 = 56;
	int64_t x304 = 6559893809375935LL;
	static int64_t t59 = -1252368LL;

	t59 = (((x301/x302)*x303)/x304);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -116589;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 62894U;
	int8_t x308 = -1;
	volatile uint32_t t60 = 3U;

	t60 = (((x305/x306)*x307)/x308);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	static uint32_t x310 = 225364U;
	uint64_t x311 = UINT64_MAX;
	uint64_t t61 = 217699218001200238LLU;

	t61 = (((x309/x310)*x311)/x312);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int64_t x314 = INT64_MIN;
	volatile int8_t x315 = INT8_MIN;
	volatile uint64_t x316 = 6382132077568LLU;
	volatile uint64_t t62 = 6217097379155LLU;

	t62 = (((x313/x314)*x315)/x316);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x320 = 1;
	int64_t t63 = -218978LL;

	t63 = (((x317/x318)*x319)/x320);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x322 = 946U;
	int32_t x323 = -1;
	uint32_t x324 = 342578173U;

	t64 = (((x321/x322)*x323)/x324);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = -1;
	static volatile uint8_t x330 = 40U;
	int16_t x331 = -1;
	volatile int32_t t65 = 3741;

	t65 = (((x329/x330)*x331)/x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x334 = -1;
	volatile int16_t x335 = -300;
	static volatile int8_t x336 = -28;
	int32_t t66 = -653;

	t66 = (((x333/x334)*x335)/x336);

	if (t66 != -375) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x337 = 5U;
	static uint16_t x338 = 126U;
	volatile int64_t x340 = -372351LL;

	t67 = (((x337/x338)*x339)/x340);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x341 = -1LL;
	static volatile uint32_t x344 = UINT32_MAX;
	static volatile int64_t t68 = -4744211LL;

	t68 = (((x341/x342)*x343)/x344);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x347 = 0U;
	static uint32_t x348 = UINT32_MAX;

	t69 = (((x345/x346)*x347)/x348);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x349 = 12LLU;
	volatile int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MAX;
	volatile uint64_t t70 = 960673LLU;

	t70 = (((x349/x350)*x351)/x352);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x353 = 10U;
	volatile int64_t x354 = INT64_MAX;
	volatile int8_t x355 = INT8_MIN;
	int64_t t71 = 670175346261745LL;

	t71 = (((x353/x354)*x355)/x356);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x358 = 197039U;
	static int64_t x359 = -1LL;
	uint16_t x360 = 4609U;
	volatile int64_t t72 = -170821255876613LL;

	t72 = (((x357/x358)*x359)/x360);

	if (t72 != -4LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile uint32_t x364 = 787226U;
	uint64_t t73 = 13413LLU;

	t73 = (((x361/x362)*x363)/x364);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int64_t x367 = 2660LL;
	static volatile int64_t t74 = 3044198LL;

	t74 = (((x365/x366)*x367)/x368);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x369 = 6371371U;
	int8_t x370 = INT8_MIN;
	int16_t x372 = INT16_MIN;

	t75 = (((x369/x370)*x371)/x372);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x373 = -1;
	volatile int16_t x374 = -14495;
	uint32_t x375 = UINT32_MAX;
	static int16_t x376 = -13884;

	t76 = (((x373/x374)*x375)/x376);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = INT64_MAX;
	static volatile int64_t x379 = -1LL;
	volatile int8_t x380 = -1;
	int64_t t77 = -29550515260472LL;

	t77 = (((x377/x378)*x379)/x380);

	if (t77 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x381 = INT64_MIN;
	int8_t x383 = INT8_MAX;
	int16_t x384 = -1;
	int64_t t78 = 247152LL;

	t78 = (((x381/x382)*x383)/x384);

	if (t78 != -9151314442816847872LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MIN;
	volatile int64_t x388 = -388471LL;
	volatile int64_t t79 = 453813429LL;

	t79 = (((x385/x386)*x387)/x388);

	if (t79 != 11871558979293LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x389 = 173U;
	uint16_t x392 = 2081U;
	uint64_t t80 = 133851548925595783LLU;

	t80 = (((x389/x390)*x391)/x392);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x393 = 1;
	static volatile int32_t x395 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	uint32_t t81 = 0U;

	t81 = (((x393/x394)*x395)/x396);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x398 = 580829374U;
	uint16_t x399 = 3331U;
	static volatile uint32_t t82 = 2U;

	t82 = (((x397/x398)*x399)/x400);

	if (t82 != 9993U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x401 = INT8_MIN;
	int8_t x404 = -3;
	volatile int64_t t83 = -101385LL;

	t83 = (((x401/x402)*x403)/x404);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x405 = 120LLU;
	int32_t x407 = INT32_MIN;
	volatile int32_t x408 = 103;
	uint64_t t84 = 2187129289043LLU;

	t84 = (((x405/x406)*x407)/x408);

	if (t84 != 179094602615675575LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x419 = INT32_MAX;
	uint32_t t85 = 28U;

	t85 = (((x417/x418)*x419)/x420);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x422 = 13026U;
	volatile int8_t x423 = INT8_MIN;
	static int8_t x424 = INT8_MIN;
	volatile uint32_t t86 = 1956429854U;

	t86 = (((x421/x422)*x423)/x424);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x426 = INT64_MIN;
	volatile int16_t x427 = INT16_MAX;
	int32_t x428 = -20081;
	int64_t t87 = 64340266179421LL;

	t87 = (((x425/x426)*x427)/x428);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = -41;
	int16_t x430 = -1;
	int8_t x431 = -1;
	int16_t x432 = INT16_MAX;
	volatile int32_t t88 = 12330;

	t88 = (((x429/x430)*x431)/x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x433 = INT16_MAX;
	int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MAX;
	uint64_t t89 = 3706569230249651LLU;

	t89 = (((x433/x434)*x435)/x436);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x441 = 4158190090LLU;
	volatile int64_t x442 = -1LL;
	uint32_t x443 = 870U;
	int8_t x444 = INT8_MIN;

	t90 = (((x441/x442)*x443)/x444);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = -34;
	static int32_t x446 = INT32_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	static int64_t x448 = 3145033108LL;
	int64_t t91 = -1761924LL;

	t91 = (((x445/x446)*x447)/x448);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x449 = -25;
	uint16_t x450 = UINT16_MAX;
	int64_t x452 = -1LL;
	volatile int64_t t92 = 13062071206196203LL;

	t92 = (((x449/x450)*x451)/x452);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x453 = -4690;
	static int64_t x455 = -124517288990562517LL;
	static uint64_t x456 = 6845991980205LLU;
	volatile uint64_t t93 = 29482LLU;

	t93 = (((x453/x454)*x455)/x456);

	if (t93 != 18188LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = 2888;
	volatile uint16_t x459 = UINT16_MAX;
	volatile uint8_t x460 = UINT8_MAX;
	volatile int32_t t94 = -4115571;

	t94 = (((x457/x458)*x459)/x460);

	if (t94 != -2827) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = -1LL;
	int32_t x463 = -1;
	volatile int64_t t95 = 0LL;

	t95 = (((x461/x462)*x463)/x464);

	if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = -1537;
	static int32_t x466 = -34427;
	int32_t t96 = -4652;

	t96 = (((x465/x466)*x467)/x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x469 = 30221985586296LLU;
	int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MAX;
	int8_t x472 = INT8_MIN;
	volatile uint64_t t97 = 56326305794LLU;

	t97 = (((x469/x470)*x471)/x472);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = INT64_MIN;
	uint16_t x474 = UINT16_MAX;
	uint16_t x476 = 17474U;
	volatile int64_t t98 = -67091014955076185LL;

	t98 = (((x473/x474)*x475)/x476);

	if (t98 != -263912993510898LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x477 = INT32_MIN;
	int64_t x480 = -1LL;
	static int64_t t99 = -92083939LL;

	t99 = (((x477/x478)*x479)/x480);

	if (t99 != 8388608LL) { NG(); } else { ; }
	
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
