#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x11 = UINT64_MAX;
int8_t x15 = INT8_MIN;
int8_t x16 = 1;
uint64_t t2 = 241LLU;
int32_t x17 = INT32_MAX;
static uint16_t x18 = 3442U;
int32_t x24 = INT32_MIN;
volatile int32_t t5 = 417924;
int32_t x29 = INT32_MIN;
static int32_t t6 = 343391210;
volatile int64_t t7 = 13499633372291715LL;
volatile int64_t x40 = -1LL;
uint8_t x47 = 6U;
int64_t x61 = -7587LL;
int16_t x64 = 62;
int8_t x69 = -1;
int32_t x73 = -1;
int32_t t16 = -14;
static int16_t x83 = INT16_MIN;
volatile int32_t t17 = 3;
int64_t x87 = INT64_MAX;
int32_t x89 = INT32_MIN;
volatile int32_t x92 = -1;
static int32_t x99 = INT32_MIN;
volatile int16_t x104 = INT16_MAX;
static int16_t x107 = 122;
int8_t x110 = -1;
int64_t x111 = INT64_MAX;
int8_t x112 = -1;
static int32_t t24 = 1;
uint64_t x124 = 1551LLU;
static volatile int32_t x125 = -94752;
int32_t t29 = 195788;
uint32_t x133 = 454U;
int8_t x140 = -1;
uint32_t x141 = 0U;
uint64_t x142 = 43869416LLU;
int8_t x148 = INT8_MIN;
int64_t x149 = -1LL;
static uint8_t x156 = UINT8_MAX;
int32_t t35 = 600113;
uint32_t x163 = UINT32_MAX;
int64_t x167 = INT64_MIN;
static int64_t x170 = INT64_MIN;
int8_t x172 = -1;
volatile int32_t x176 = INT32_MAX;
static volatile int32_t t40 = 4179718;
int32_t t41 = -1252;
uint64_t x185 = 252249LLU;
static int8_t x193 = -1;
uint8_t x200 = UINT8_MAX;
volatile int32_t t45 = -6;
static uint8_t x206 = 16U;
static int8_t x209 = 2;
static volatile int8_t x213 = -1;
uint8_t x216 = UINT8_MAX;
int16_t x217 = 261;
uint8_t x220 = 103U;
volatile int32_t x221 = INT32_MIN;
int32_t x222 = -9466153;
volatile int32_t x224 = -822623630;
uint64_t x228 = 46735LLU;
volatile uint8_t x230 = UINT8_MAX;
volatile uint16_t x234 = 7U;
int32_t t54 = 16;
volatile int32_t x239 = -1;
static int8_t x241 = INT8_MAX;
int16_t x242 = -1;
int16_t x244 = INT16_MIN;
volatile int64_t t57 = INT64_MIN;
int16_t x249 = INT16_MAX;
int32_t t59 = 2404193;
static uint64_t x261 = UINT64_MAX;
int8_t x262 = INT8_MIN;
int64_t x267 = INT64_MIN;
int64_t t62 = -78LL;
int64_t x269 = INT64_MAX;
volatile int16_t x272 = INT16_MIN;
uint8_t x274 = 4U;
uint32_t x282 = 16347U;
int32_t t65 = 1908510;
uint32_t x285 = 4205225U;
static uint32_t x293 = 18369086U;
uint32_t x295 = UINT32_MAX;
int32_t x296 = INT32_MIN;
int32_t t70 = INT32_MIN;
int64_t x306 = INT64_MIN;
volatile uint16_t x307 = UINT16_MAX;
volatile int32_t x310 = -1;
static uint8_t x313 = 15U;
int32_t t75 = -49;
int32_t t76 = INT32_MIN;
volatile int16_t x333 = 25;
volatile int32_t x336 = -1;
uint64_t x338 = 1858594LLU;
int64_t x342 = INT64_MAX;
uint32_t x344 = UINT32_MAX;
uint32_t x348 = 3U;
static int32_t t82 = 1203623;
int16_t x353 = 1302;
int64_t x369 = INT64_MIN;
int64_t t87 = 2360602761138401998LL;
uint8_t x373 = UINT8_MAX;
int64_t x374 = INT64_MIN;
static volatile int32_t x375 = INT32_MAX;
uint64_t x376 = 91489424639LLU;
static volatile uint32_t t89 = 112117236U;
volatile uint64_t x382 = 259376897LLU;
uint32_t x391 = 184111310U;
int8_t x400 = -15;
int32_t t95 = -26586;
int32_t x405 = INT32_MIN;
uint16_t x406 = UINT16_MAX;
static uint16_t x412 = UINT16_MAX;
int8_t x413 = INT8_MAX;
volatile int32_t t98 = 254068945;
int16_t x417 = -1072;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = 23;
	int8_t x3 = 1;
	uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = -27LL;

	t0 = (x1*((x2%x3)<x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 158774815LLU;
	int16_t x10 = 3;
	volatile int8_t x12 = -52;
	uint64_t t1 = 330262706LLU;

	t1 = (x9*((x10%x11)<x12));

	if (t1 != 158774815LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x13 = 191259888550LLU;
	int16_t x14 = -1;

	t2 = (x13*((x14%x15)<x16));

	if (t2 != 191259888550LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x19 = -1;
	uint64_t x20 = 2420668507132LLU;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x17*((x18%x19)<x20));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 46U;
	int16_t x22 = 1;
	uint64_t x23 = UINT64_MAX;
	static volatile int32_t t4 = 30;

	t4 = (x21*((x22%x23)<x24));

	if (t4 != 46) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -2571;
	int32_t x26 = -1;
	volatile uint32_t x27 = 766745185U;
	int32_t x28 = INT32_MIN;

	t5 = (x25*((x26%x27)<x28));

	if (t5 != -2571) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -1;
	int16_t x31 = INT16_MAX;
	uint64_t x32 = 2LLU;

	t6 = (x29*((x30%x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 59847390285LL;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = 8264;
	int8_t x36 = 56;

	t7 = (x33*((x34%x35)<x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MAX;
	volatile int64_t x38 = INT64_MIN;
	int16_t x39 = -1;
	int32_t t8 = 419492117;

	t8 = (x37*((x38%x39)<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -1;
	static int32_t x46 = -1;
	volatile int16_t x48 = INT16_MAX;
	int32_t t9 = -3365;

	t9 = (x45*((x46%x47)<x48));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	static volatile int8_t x50 = INT8_MIN;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t10 = 575823874;

	t10 = (x49*((x50%x51)<x52));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 3U;
	volatile uint64_t x54 = 28678899339798053LLU;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t11 = 1067;

	t11 = (x53*((x54%x55)<x56));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	int16_t x58 = 317;
	volatile int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	int32_t t12 = 347184;

	t12 = (x57*((x58%x59)<x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 1U;
	int32_t x63 = INT32_MIN;
	volatile int64_t t13 = 4873LL;

	t13 = (x61*((x62%x63)<x64));

	if (t13 != -7587LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	volatile int64_t x66 = INT64_MIN;
	static int64_t x67 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;
	static int32_t t14 = -76;

	t14 = (x65*((x66%x67)<x68));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -11601879372016219LL;
	volatile int16_t x71 = -190;
	int16_t x72 = 504;
	volatile int32_t t15 = 0;

	t15 = (x69*((x70%x71)<x72));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x74 = UINT8_MAX;
	static uint32_t x75 = 670U;
	uint32_t x76 = UINT32_MAX;

	t16 = (x73*((x74%x75)<x76));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	static volatile int8_t x84 = INT8_MAX;

	t17 = (x81*((x82%x83)<x84));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x85 = 0U;
	static uint16_t x86 = 103U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t18 = 434076315;

	t18 = (x85*((x86%x87)<x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MAX;
	volatile int64_t x91 = -100051891597929642LL;
	int32_t t19 = -14427479;

	t19 = (x89*((x90%x91)<x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -31;
	int8_t x94 = INT8_MAX;
	uint32_t x95 = 384793211U;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t20 = -3;

	t20 = (x93*((x94%x95)<x96));

	if (t20 != -31) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 1;
	volatile uint8_t x98 = 1U;
	int32_t x100 = INT32_MAX;
	volatile int32_t t21 = 0;

	t21 = (x97*((x98%x99)<x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MAX;
	uint64_t x102 = UINT64_MAX;
	static volatile int64_t x103 = INT64_MIN;
	volatile int32_t t22 = 657498;

	t22 = (x101*((x102%x103)<x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	volatile uint16_t x106 = 3013U;
	int16_t x108 = INT16_MAX;
	static int64_t t23 = INT64_MIN;

	t23 = (x105*((x106%x107)<x108));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = 11;

	t24 = (x109*((x110%x111)<x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x113 = INT32_MIN;
	int64_t x114 = -1808339011489601LL;
	int8_t x115 = 28;
	volatile uint8_t x116 = 5U;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x113*((x114%x115)<x116));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 1U;
	static volatile int32_t x118 = INT32_MIN;
	uint32_t x119 = 308114U;
	static uint8_t x120 = 109U;
	volatile uint32_t t26 = 191U;

	t26 = (x117*((x118%x119)<x120));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 7962136U;
	int16_t x122 = INT16_MIN;
	volatile int8_t x123 = INT8_MAX;
	static volatile uint32_t t27 = 7991024U;

	t27 = (x121*((x122%x123)<x124));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x126 = 1U;
	int8_t x127 = INT8_MIN;
	static uint32_t x128 = 0U;
	int32_t t28 = 6;

	t28 = (x125*((x126%x127)<x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -4261;
	uint64_t x130 = UINT64_MAX;
	static uint64_t x131 = 46LLU;
	uint16_t x132 = 7966U;

	t29 = (x129*((x130%x131)<x132));

	if (t29 != -4261) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = -1LL;
	uint32_t x135 = 1387625755U;
	int8_t x136 = INT8_MAX;
	static volatile uint32_t t30 = 2U;

	t30 = (x133*((x134%x135)<x136));

	if (t30 != 454U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	volatile int64_t x138 = INT64_MAX;
	static uint64_t x139 = 10509622998LLU;
	volatile int32_t t31 = 115;

	t31 = (x137*((x138%x139)<x140));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x143 = INT64_MAX;
	static int32_t x144 = 0;
	volatile uint32_t t32 = 174603U;

	t32 = (x141*((x142%x143)<x144));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	static volatile int8_t x147 = INT8_MAX;
	volatile int64_t t33 = 23105420178088LL;

	t33 = (x145*((x146%x147)<x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x150 = 9U;
	int64_t x151 = -93434LL;
	uint8_t x152 = 24U;
	int64_t t34 = -644730528LL;

	t34 = (x149*((x150%x151)<x152));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = 135;
	int8_t x154 = INT8_MAX;
	volatile int64_t x155 = INT64_MIN;

	t35 = (x153*((x154%x155)<x156));

	if (t35 != 135) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = 21;
	int16_t x159 = 3;
	int64_t x160 = 252LL;
	int32_t t36 = INT32_MAX;

	t36 = (x157*((x158%x159)<x160));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x161 = INT8_MIN;
	uint32_t x162 = 10U;
	uint16_t x164 = 13556U;
	int32_t t37 = 322486048;

	t37 = (x161*((x162%x163)<x164));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	static int32_t x166 = INT32_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t38 = -3588;

	t38 = (x165*((x166%x167)<x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	volatile uint8_t x171 = 10U;
	int32_t t39 = 30381365;

	t39 = (x169*((x170%x171)<x172));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 19045;
	static int16_t x174 = 731;
	volatile int64_t x175 = -1LL;

	t40 = (x173*((x174%x175)<x176));

	if (t40 != 19045) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 29U;
	int16_t x182 = INT16_MAX;
	int16_t x183 = -4;
	uint64_t x184 = UINT64_MAX;

	t41 = (x181*((x182%x183)<x184));

	if (t41 != 29) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = 105;
	int8_t x188 = -2;
	volatile uint64_t t42 = 1201334LLU;

	t42 = (x185*((x186%x187)<x188));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -12;
	volatile int8_t x190 = -1;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t43 = 655601;

	t43 = (x189*((x190%x191)<x192));

	if (t43 != -12) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x194 = 208;
	volatile int16_t x195 = -937;
	volatile int32_t x196 = -8388565;
	int32_t t44 = 32;

	t44 = (x193*((x194%x195)<x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 3566U;
	uint64_t x198 = 1LLU;
	volatile int64_t x199 = INT64_MIN;

	t45 = (x197*((x198%x199)<x200));

	if (t45 != 3566) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = -1;
	volatile int32_t x202 = INT32_MIN;
	static uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = -1;
	static volatile int32_t t46 = 416172;

	t46 = (x201*((x202%x203)<x204));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 380558983431518LLU;
	int32_t t47 = -1;

	t47 = (x205*((x206%x207)<x208));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x210 = 5860LL;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = 13667618U;
	volatile int32_t t48 = 6742;

	t48 = (x209*((x210%x211)<x212));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	int32_t t49 = 870246;

	t49 = (x213*((x214%x215)<x216));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x218 = 0U;
	static int16_t x219 = INT16_MIN;
	int32_t t50 = 218390156;

	t50 = (x217*((x218%x219)<x220));

	if (t50 != 261) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x223 = 10404967U;
	int32_t t51 = INT32_MIN;

	t51 = (x221*((x222%x223)<x224));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MAX;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	volatile int32_t t52 = -68;

	t52 = (x225*((x226%x227)<x228));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x229 = INT16_MIN;
	int8_t x231 = -1;
	uint8_t x232 = 3U;
	int32_t t53 = 11425288;

	t53 = (x229*((x230%x231)<x232));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -30;

	t54 = (x233*((x234%x235)<x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 5U;
	static volatile uint16_t x238 = UINT16_MAX;
	int8_t x240 = 11;
	uint32_t t55 = 94U;

	t55 = (x237*((x238%x239)<x240));

	if (t55 != 5U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x243 = -1;
	int32_t t56 = 171207;

	t56 = (x241*((x242%x243)<x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	int8_t x247 = 7;
	volatile uint8_t x248 = 5U;

	t57 = (x245*((x246%x247)<x248));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = 44251444;
	volatile int8_t x251 = -15;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t58 = 0;

	t58 = (x249*((x250%x251)<x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -1883500;
	uint16_t x254 = 3U;
	int32_t x255 = -12;
	int16_t x256 = -25;

	t59 = (x253*((x254%x255)<x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = 4093198760056030274LL;
	int8_t x258 = -1;
	uint16_t x259 = 4U;
	volatile int32_t x260 = -484571;
	volatile int64_t t60 = -370LL;

	t60 = (x257*((x258%x259)<x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x263 = -1;
	int32_t x264 = -2096145;
	static volatile uint64_t t61 = 7267462900070093LLU;

	t61 = (x261*((x262%x263)<x264));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -904LL;
	int16_t x266 = 493;
	volatile int8_t x268 = INT8_MAX;

	t62 = (x265*((x266%x267)<x268));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x270 = INT8_MAX;
	int16_t x271 = -1;
	int64_t t63 = -1793LL;

	t63 = (x269*((x270%x271)<x272));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = 27;
	int16_t x275 = INT16_MAX;
	static int32_t x276 = -23236244;
	volatile int32_t t64 = 0;

	t64 = (x273*((x274%x275)<x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	volatile int8_t x283 = -54;
	int16_t x284 = 2235;

	t65 = (x281*((x282%x283)<x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = 18U;
	int8_t x287 = INT8_MIN;
	uint32_t x288 = 757901176U;
	uint32_t t66 = 18371596U;

	t66 = (x285*((x286%x287)<x288));

	if (t66 != 4205225U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = INT32_MAX;
	static volatile int32_t x290 = 185556;
	static int8_t x291 = INT8_MIN;
	volatile int8_t x292 = 23;
	static int32_t t67 = 36252851;

	t67 = (x289*((x290%x291)<x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x294 = 6U;
	uint32_t t68 = 2U;

	t68 = (x293*((x294%x295)<x296));

	if (t68 != 18369086U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x297 = INT32_MAX;
	int64_t x298 = 3LL;
	int64_t x299 = 63LL;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t69 = 1410;

	t69 = (x297*((x298%x299)<x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x302 = INT16_MIN;
	static volatile int8_t x303 = -1;
	int8_t x304 = INT8_MAX;

	t70 = (x301*((x302%x303)<x304));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1;
	static volatile uint8_t x308 = 2U;
	static volatile int32_t t71 = -1;

	t71 = (x305*((x306%x307)<x308));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x309 = -1;
	volatile int8_t x311 = INT8_MIN;
	int16_t x312 = 1134;
	static volatile int32_t t72 = 2532024;

	t72 = (x309*((x310%x311)<x312));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x314 = INT8_MIN;
	static int16_t x315 = -2738;
	int16_t x316 = -1;
	volatile int32_t t73 = -155;

	t73 = (x313*((x314%x315)<x316));

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x318 = -113170;
	int32_t x319 = -1063;
	static uint64_t x320 = UINT64_MAX;
	int64_t t74 = INT64_MIN;

	t74 = (x317*((x318%x319)<x320));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 1558U;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = 1;
	int8_t x324 = -1;

	t75 = (x321*((x322%x323)<x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = 0;
	int16_t x327 = -13049;
	uint32_t x328 = UINT32_MAX;

	t76 = (x325*((x326%x327)<x328));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 7;
	int16_t x330 = INT16_MIN;
	int64_t x331 = 221846LL;
	int64_t x332 = INT64_MAX;
	int32_t t77 = -873195071;

	t77 = (x329*((x330%x331)<x332));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x334 = 3;
	volatile int16_t x335 = INT16_MIN;
	int32_t t78 = 7434292;

	t78 = (x333*((x334%x335)<x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x337 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t79 = -8078114;

	t79 = (x337*((x338%x339)<x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = 10;
	uint16_t x343 = UINT16_MAX;
	int32_t t80 = 49;

	t80 = (x341*((x342%x343)<x344));

	if (t80 != 10) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = -1;
	int16_t x347 = -1;
	volatile int32_t t81 = 20;

	t81 = (x345*((x346%x347)<x348));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 3U;
	int8_t x350 = INT8_MAX;
	int8_t x351 = 1;
	static int64_t x352 = INT64_MAX;

	t82 = (x349*((x350%x351)<x352));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = 43;
	volatile int8_t x355 = INT8_MIN;
	static int64_t x356 = INT64_MIN;
	static int32_t t83 = 1;

	t83 = (x353*((x354%x355)<x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x358 = 1;
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t84 = 512262965048LLU;

	t84 = (x357*((x358%x359)<x360));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x361 = 0;
	int16_t x362 = -1;
	int16_t x363 = -29;
	int8_t x364 = INT8_MIN;
	int32_t t85 = -263132;

	t85 = (x361*((x362%x363)<x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x365 = 6107914;
	static int8_t x366 = 1;
	uint8_t x367 = 1U;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t86 = -4;

	t86 = (x365*((x366%x367)<x368));

	if (t86 != 6107914) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x370 = -1;
	int8_t x371 = -9;
	int64_t x372 = INT64_MIN;

	t87 = (x369*((x370%x371)<x372));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t t88 = 58;

	t88 = (x373*((x374%x375)<x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 44U;
	static uint16_t x378 = 0U;
	volatile uint8_t x379 = 11U;
	int64_t x380 = 1158027613LL;

	t89 = (x377*((x378%x379)<x380));

	if (t89 != 44U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x381 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t90 = -5175815;

	t90 = (x381*((x382%x383)<x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = 1LL;
	static volatile uint64_t x386 = 7963501163LLU;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 129060434520690392LLU;
	int64_t t91 = -20598151038LL;

	t91 = (x385*((x386%x387)<x388));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = -5;
	uint64_t x390 = 3LLU;
	uint32_t x392 = 1U;
	static volatile int32_t t92 = 1;

	t92 = (x389*((x390%x391)<x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = UINT16_MAX;
	volatile int64_t x395 = -1LL;
	uint64_t x396 = 3166LLU;
	static volatile int64_t t93 = INT64_MIN;

	t93 = (x393*((x394%x395)<x396));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = -1;
	int64_t x398 = 95039938299LL;
	int32_t x399 = -1;
	static int32_t t94 = 64;

	t94 = (x397*((x398%x399)<x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = INT8_MIN;
	int32_t x402 = -3;
	int32_t x403 = -1;
	static int32_t x404 = INT32_MIN;

	t95 = (x401*((x402%x403)<x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x407 = 18;
	static uint8_t x408 = 2U;
	int32_t t96 = 12032388;

	t96 = (x405*((x406%x407)<x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 7206U;
	int16_t x411 = -1;
	int32_t t97 = -8645464;

	t97 = (x409*((x410%x411)<x412));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = INT16_MIN;
	int8_t x415 = 1;
	int16_t x416 = INT16_MIN;

	t98 = (x413*((x414%x415)<x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x418 = UINT16_MAX;
	int32_t x419 = INT32_MIN;
	int64_t x420 = -1LL;
	volatile int32_t t99 = 168012595;

	t99 = (x417*((x418%x419)<x420));

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
