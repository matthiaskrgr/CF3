#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 6038U;
static int32_t t2 = 369405332;
uint8_t x16 = 0U;
static volatile int16_t x17 = -1;
uint16_t x22 = 64U;
uint32_t t5 = 20434U;
int8_t x29 = INT8_MIN;
int32_t t7 = 427447;
uint16_t x33 = 14419U;
static uint64_t x37 = 55424458124051934LLU;
static uint64_t t9 = 97196756410260LLU;
int32_t x54 = INT32_MIN;
int8_t x55 = INT8_MIN;
volatile uint16_t x56 = 143U;
static int8_t x59 = INT8_MIN;
uint64_t t15 = 32793006789407649LLU;
int32_t x66 = -1;
int32_t x68 = -3451039;
int64_t t16 = INT64_MAX;
int32_t t17 = -126827649;
uint32_t x73 = UINT32_MAX;
int8_t x89 = INT8_MIN;
int16_t x90 = 6;
static uint8_t x95 = UINT8_MAX;
uint32_t x96 = 3616189U;
volatile uint64_t t23 = 13405337837771LLU;
uint32_t x105 = 708293033U;
uint32_t t26 = 0U;
static uint64_t x113 = 6103LLU;
int32_t x117 = 6;
int16_t x118 = INT16_MIN;
uint32_t x119 = 869U;
static int8_t x126 = INT8_MIN;
int8_t x127 = INT8_MAX;
int64_t t32 = INT64_MIN;
static uint32_t x135 = 45U;
int32_t t34 = -51624;
static volatile int32_t x146 = -392;
volatile int32_t t36 = 22859;
int32_t x156 = INT32_MAX;
static uint64_t x161 = UINT64_MAX;
int16_t x163 = INT16_MIN;
int8_t x164 = INT8_MAX;
int64_t x169 = INT64_MIN;
uint16_t x172 = UINT16_MAX;
volatile uint64_t x175 = UINT64_MAX;
volatile int8_t x179 = INT8_MAX;
uint64_t x188 = 589299913039846LLU;
uint64_t t46 = 205750LLU;
static uint16_t x190 = UINT16_MAX;
int64_t t48 = 995207894LL;
volatile int32_t t49 = -5914103;
static uint16_t x202 = 52U;
uint64_t t50 = 63874138151LLU;
static int8_t x208 = INT8_MAX;
volatile int32_t t51 = 271124;
int64_t x212 = INT64_MAX;
volatile int64_t x215 = -345897184450209LL;
int32_t x233 = -1365710;
uint16_t x234 = 1455U;
static volatile int32_t t58 = -12;
int8_t x242 = -1;
int16_t x250 = INT16_MAX;
int64_t t62 = 26498912645807LL;
int32_t x262 = INT32_MIN;
int16_t x265 = -1;
int64_t t66 = 32665752878LL;
int64_t x269 = -429714626955LL;
volatile uint32_t x275 = 75U;
int32_t x279 = INT32_MIN;
int32_t x282 = -1;
uint64_t t70 = 46354928265LLU;
static int16_t x286 = INT16_MIN;
int16_t x287 = INT16_MIN;
int64_t x289 = -62674856303954LL;
int8_t x290 = INT8_MIN;
volatile int64_t t72 = 27780006LL;
int16_t x294 = INT16_MAX;
uint8_t x296 = 2U;
int16_t x300 = -1;
int64_t x303 = INT64_MIN;
uint32_t x305 = 66248749U;
int16_t x316 = INT16_MIN;
int16_t x319 = INT16_MIN;
int16_t x321 = INT16_MIN;
uint32_t x329 = 53809U;
static uint64_t x333 = 5191LLU;
volatile uint32_t x336 = 221612U;
int32_t x342 = INT32_MIN;
int64_t x344 = 4451405270LL;
int16_t x350 = -1;
uint8_t x354 = 0U;
int8_t x369 = 36;
static volatile int64_t t93 = -44300989833223LL;
static int32_t x382 = INT32_MAX;
int16_t x387 = -1;
int32_t x392 = INT32_MAX;
int8_t x393 = INT8_MAX;
int8_t x394 = -1;
static int64_t x395 = -1LL;
int32_t x400 = -1;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = 7U;
	volatile int32_t t0 = -4349;

	t0 = (x1*((x2<x3)&x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint8_t x6 = 17U;
	volatile uint8_t x8 = 1U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5*((x6<x7)&x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 2;
	int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	static uint16_t x12 = UINT16_MAX;

	t2 = (x9*((x10<x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint16_t x14 = 33U;
	uint64_t x15 = 2557006637506843368LLU;
	volatile int32_t t3 = 0;

	t3 = (x13*((x14<x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = 106934098281LL;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -20;

	t4 = (x17*((x18<x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -9;
	int32_t x23 = -1;
	uint32_t x24 = 117099U;

	t5 = (x21*((x22<x23)&x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -1LL;
	static volatile int64_t t6 = -120771312LL;

	t6 = (x25*((x26<x27)&x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MAX;
	volatile int8_t x31 = INT8_MAX;
	static int8_t x32 = 30;

	t7 = (x29*((x30<x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -4155;

	t8 = (x33*((x34<x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	uint32_t x39 = 1851976766U;
	volatile int8_t x40 = INT8_MIN;

	t9 = (x37*((x38<x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 45U;
	uint32_t x42 = UINT32_MAX;
	static int64_t x43 = INT64_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = -315;

	t10 = (x41*((x42<x43)&x44));

	if (t10 != 45) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	uint64_t x46 = UINT64_MAX;
	static int8_t x47 = INT8_MAX;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -3;

	t11 = (x45*((x46<x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 133;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	volatile int64_t t12 = 126062434LL;

	t12 = (x49*((x50<x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t t13 = 596880985;

	t13 = (x53*((x54<x55)&x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -1LL;
	static volatile uint8_t x58 = 105U;
	uint32_t x60 = UINT32_MAX;
	int64_t t14 = 3656805465603LL;

	t14 = (x57*((x58<x59)&x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	int32_t x62 = -1;
	uint32_t x63 = 391U;
	volatile uint64_t x64 = UINT64_MAX;

	t15 = (x61*((x62<x63)&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	uint16_t x67 = 1U;

	t16 = (x65*((x66<x67)&x68));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int8_t x70 = INT8_MAX;
	int16_t x71 = -1;
	static volatile uint16_t x72 = UINT16_MAX;

	t17 = (x69*((x70<x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -3046205;
	static volatile int16_t x75 = -5;
	volatile uint64_t x76 = 422LLU;
	uint64_t t18 = 418466553954LLU;

	t18 = (x73*((x74<x75)&x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int16_t x78 = -1;
	int32_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	static int32_t t19 = -36;

	t19 = (x77*((x78<x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 13U;
	uint64_t x82 = 702323467LLU;
	uint64_t x83 = UINT64_MAX;
	static volatile uint64_t x84 = 87LLU;
	uint64_t t20 = 140035LLU;

	t20 = (x81*((x82<x83)&x84));

	if (t20 != 13LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -19;
	int64_t x86 = 360350490261866157LL;
	uint64_t x87 = 452813256860LLU;
	volatile int32_t x88 = INT32_MAX;
	int32_t t21 = 1;

	t21 = (x85*((x86<x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x91 = 37U;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -114648;

	t22 = (x89*((x90<x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 76077362998097514LLU;
	static uint16_t x94 = 222U;

	t23 = (x93*((x94<x95)&x96));

	if (t23 != 76077362998097514LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 205989094;
	int8_t x98 = -1;
	int16_t x99 = INT16_MIN;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -17873050;

	t24 = (x97*((x98<x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	volatile int64_t x102 = INT64_MIN;
	static int16_t x103 = INT16_MAX;
	volatile int64_t x104 = -1LL;
	static int64_t t25 = 84676LL;

	t25 = (x101*((x102<x103)&x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 14115U;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = 1;

	t26 = (x105*((x106<x107)&x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MIN;
	volatile int32_t x111 = INT32_MAX;
	static int64_t x112 = -1LL;
	int64_t t27 = -113078LL;

	t27 = (x109*((x110<x111)&x112));

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x114 = 40U;
	volatile int64_t x115 = 752777641004LL;
	int64_t x116 = -113756187LL;
	volatile uint64_t t28 = 3462210827278LLU;

	t28 = (x113*((x114<x115)&x116));

	if (t28 != 6103LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x120 = -7;
	int32_t t29 = 19426382;

	t29 = (x117*((x118<x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	volatile int32_t x123 = -1661;
	int8_t x124 = INT8_MIN;
	static uint32_t t30 = 11577U;

	t30 = (x121*((x122<x123)&x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	uint64_t x128 = 14238637015LLU;
	static uint64_t t31 = 938944LLU;

	t31 = (x125*((x126<x127)&x128));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = 107028331597173818LLU;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -1;

	t32 = (x129*((x130<x131)&x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 120497519312350LLU;
	volatile int16_t x134 = INT16_MIN;
	volatile int16_t x136 = -1;
	static uint64_t t33 = 15881256546LLU;

	t33 = (x133*((x134<x135)&x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = 2U;
	int32_t x139 = 513960;
	int16_t x140 = -1;

	t34 = (x137*((x138<x139)&x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 41U;
	volatile uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 12U;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = 121021;

	t35 = (x141*((x142<x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	uint32_t x147 = 333494U;
	volatile int16_t x148 = INT16_MIN;

	t36 = (x145*((x146<x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 1U;
	static uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 59691704913638LLU;
	volatile uint64_t t37 = 235LLU;

	t37 = (x149*((x150<x151)&x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 466LL;
	volatile int32_t t38 = -21006146;

	t38 = (x153*((x154<x155)&x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MAX;
	static int8_t x158 = -5;
	uint64_t x159 = 3906012591915131LLU;
	int64_t x160 = -13LL;
	int64_t t39 = -98454LL;

	t39 = (x157*((x158<x159)&x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -183551LL;
	uint64_t t40 = UINT64_MAX;

	t40 = (x161*((x162<x163)&x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 5U;
	volatile uint8_t x167 = UINT8_MAX;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = -2693954;

	t41 = (x165*((x166<x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = INT32_MAX;
	static int32_t x171 = -1;
	volatile int64_t t42 = 65878807297LL;

	t42 = (x169*((x170<x171)&x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 118088408;
	volatile int16_t x174 = INT16_MAX;
	static int8_t x176 = 30;
	int32_t t43 = 415;

	t43 = (x173*((x174<x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MIN;
	uint8_t x180 = 63U;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177*((x178<x179)&x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -1;
	int32_t x184 = 35971;
	int32_t t45 = 18;

	t45 = (x181*((x182<x183)&x184));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	volatile uint32_t x186 = 2U;
	volatile uint64_t x187 = 452LLU;

	t46 = (x185*((x186<x187)&x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -2763868466738145195LL;
	uint32_t x191 = 759650477U;
	int64_t x192 = -2020123LL;
	int64_t t47 = -28088141585006LL;

	t47 = (x189*((x190<x191)&x192));

	if (t47 != -2763868466738145195LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 80901;
	static volatile uint64_t x194 = 671684LLU;
	uint32_t x195 = UINT32_MAX;
	static int64_t x196 = 208708LL;

	t48 = (x193*((x194<x195)&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	int64_t x199 = -1516620377723256LL;
	uint16_t x200 = 822U;

	t49 = (x197*((x198<x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 13545500802LLU;
	int8_t x203 = -13;
	volatile uint64_t x204 = UINT64_MAX;

	t50 = (x201*((x202<x203)&x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 14823;
	volatile int64_t x206 = INT64_MIN;
	uint8_t x207 = 12U;

	t51 = (x205*((x206<x207)&x208));

	if (t51 != 14823) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -429268635LL;
	static int64_t x210 = -50LL;
	static volatile uint32_t x211 = 40262U;
	int64_t t52 = -229804437574LL;

	t52 = (x209*((x210<x211)&x212));

	if (t52 != -429268635LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	volatile int32_t x216 = -1;
	volatile int32_t t53 = -53448838;

	t53 = (x213*((x214<x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -1900;
	static int64_t x219 = -2105587466626110186LL;
	int16_t x220 = -2282;
	volatile int32_t t54 = 24;

	t54 = (x217*((x218<x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	static int64_t x222 = INT64_MAX;
	static int32_t x223 = INT32_MIN;
	uint16_t x224 = 97U;
	volatile int32_t t55 = -61895;

	t55 = (x221*((x222<x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1985;
	uint16_t x226 = UINT16_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	int8_t x228 = -48;
	volatile int32_t t56 = 1958040;

	t56 = (x225*((x226<x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = UINT32_MAX;
	static int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	static uint64_t x232 = 1767308661049LLU;
	volatile uint64_t t57 = 1903295233511291LLU;

	t57 = (x229*((x230<x231)&x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x235 = 199269289;
	int16_t x236 = -1;

	t58 = (x233*((x234<x235)&x236));

	if (t58 != -1365710) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 45U;
	volatile uint16_t x238 = 0U;
	static int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = -247349035;

	t59 = (x237*((x238<x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 4971U;
	volatile int32_t t60 = -248;

	t60 = (x241*((x242<x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = UINT8_MAX;
	static uint8_t x248 = UINT8_MAX;
	int32_t t61 = -630424145;

	t61 = (x245*((x246<x247)&x248));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	volatile uint8_t x252 = 0U;

	t62 = (x249*((x250<x251)&x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	volatile int64_t x254 = -706250079170LL;
	int8_t x255 = -1;
	int32_t x256 = -1;
	int32_t t63 = 918;

	t63 = (x253*((x254<x255)&x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 34;
	int8_t x258 = -1;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = 37500LLU;
	uint64_t t64 = 32LLU;

	t64 = (x257*((x258<x259)&x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	int8_t x263 = -1;
	volatile int32_t x264 = 975;
	int64_t t65 = INT64_MIN;

	t65 = (x261*((x262<x263)&x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x266 = 1U;
	volatile int16_t x267 = 8;
	int64_t x268 = -31LL;

	t66 = (x265*((x266<x267)&x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x270 = 2;
	static int32_t x271 = INT32_MIN;
	static int8_t x272 = INT8_MIN;
	volatile int64_t t67 = 9674174LL;

	t67 = (x269*((x270<x271)&x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	static int32_t x274 = INT32_MIN;
	static volatile int8_t x276 = INT8_MAX;
	volatile int64_t t68 = 11941LL;

	t68 = (x273*((x274<x275)&x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MAX;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t69 = -5950;

	t69 = (x277*((x278<x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = 3;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = UINT64_MAX;

	t70 = (x281*((x282<x283)&x284));

	if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 0U;
	volatile uint16_t x288 = 20564U;
	volatile int32_t t71 = 282701260;

	t71 = (x285*((x286<x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = INT8_MAX;
	volatile int32_t x292 = -1;

	t72 = (x289*((x290<x291)&x292));

	if (t72 != -62674856303954LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int16_t x295 = INT16_MAX;
	int32_t t73 = -237654;

	t73 = (x293*((x294<x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 0U;
	int32_t x298 = -1;
	static uint8_t x299 = 0U;
	volatile int32_t t74 = -9755015;

	t74 = (x297*((x298<x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -2047;
	int32_t x302 = INT32_MIN;
	uint8_t x304 = 21U;
	volatile int32_t t75 = 792439;

	t75 = (x301*((x302<x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x306 = INT8_MAX;
	volatile int32_t x307 = -1;
	static uint8_t x308 = 71U;
	uint32_t t76 = 174U;

	t76 = (x305*((x306<x307)&x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = 846U;
	volatile int32_t x312 = INT32_MAX;
	int32_t t77 = -1;

	t77 = (x309*((x310<x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	static volatile int64_t x314 = INT64_MIN;
	static int32_t x315 = -21155;
	int32_t t78 = -553904096;

	t78 = (x313*((x314<x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 44U;
	volatile int32_t x318 = INT32_MAX;
	int32_t x320 = INT32_MAX;
	volatile int32_t t79 = -3075777;

	t79 = (x317*((x318<x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = -1;
	uint16_t x323 = 7U;
	int64_t x324 = 2433277735660391LL;
	int64_t t80 = -23944LL;

	t80 = (x321*((x322<x323)&x324));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MAX;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int64_t t81 = INT64_MIN;

	t81 = (x325*((x326<x327)&x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 1U;
	volatile int64_t x331 = 5526LL;
	int64_t x332 = 464644167LL;
	volatile int64_t t82 = 115517098808776540LL;

	t82 = (x329*((x330<x331)&x332));

	if (t82 != 53809LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 59638326LL;
	static uint64_t x335 = 253930764782334474LLU;
	volatile uint64_t t83 = 314352079135854LLU;

	t83 = (x333*((x334<x335)&x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 1343LL;
	int64_t x338 = -18323LL;
	static int8_t x339 = 0;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -269684317751LL;

	t84 = (x337*((x338<x339)&x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t t85 = -692882644536370718LL;

	t85 = (x341*((x342<x343)&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 392U;
	int8_t x346 = INT8_MIN;
	volatile int64_t x347 = INT64_MIN;
	static int32_t x348 = 7;
	static int32_t t86 = -450;

	t86 = (x345*((x346<x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	volatile uint16_t x351 = UINT16_MAX;
	volatile uint64_t x352 = 120166LLU;
	static volatile uint64_t t87 = 823966LLU;

	t87 = (x349*((x350<x351)&x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -37448;
	volatile uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 48;

	t88 = (x353*((x354<x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 6U;
	uint32_t x358 = 2U;
	int8_t x359 = -51;
	volatile uint64_t x360 = 1057479803215LLU;
	volatile uint64_t t89 = 64839048950285038LLU;

	t89 = (x357*((x358<x359)&x360));

	if (t89 != 6LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 10810U;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	static volatile uint8_t x364 = 1U;
	int32_t t90 = -20484472;

	t90 = (x361*((x362<x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = 272062257U;
	int16_t x368 = INT16_MIN;
	uint32_t t91 = 83205938U;

	t91 = (x365*((x366<x367)&x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = INT16_MIN;
	static uint32_t x371 = 329U;
	static volatile int64_t x372 = 228LL;
	volatile int64_t t92 = 22LL;

	t92 = (x369*((x370<x371)&x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -56391604528568LL;
	volatile uint8_t x374 = 1U;
	uint64_t x375 = 68922214900933LLU;
	static uint16_t x376 = 430U;

	t93 = (x373*((x374<x375)&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 184695U;
	volatile uint8_t x378 = 1U;
	uint8_t x379 = 1U;
	int8_t x380 = INT8_MIN;
	volatile uint32_t t94 = 24U;

	t94 = (x377*((x378<x379)&x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	uint16_t x383 = 693U;
	static uint16_t x384 = 30058U;
	static volatile int32_t t95 = -12267608;

	t95 = (x381*((x382<x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t96 = 1944987;

	t96 = (x385*((x386<x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int8_t x390 = -17;
	int16_t x391 = -11;
	volatile int32_t t97 = -16;

	t97 = (x389*((x390<x391)&x392));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x396 = 13U;
	static int32_t t98 = -8;

	t98 = (x393*((x394<x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	static volatile int32_t t99 = -8666594;

	t99 = (x397*((x398<x399)&x400));

	if (t99 != 255) { NG(); } else { ; }
	
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
