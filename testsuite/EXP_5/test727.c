#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 170LLU;
uint64_t x13 = UINT64_MAX;
volatile uint64_t t3 = UINT64_MAX;
static uint16_t x33 = 1787U;
int8_t x35 = INT8_MIN;
int64_t x37 = -300363576LL;
uint8_t x38 = 1U;
uint16_t x39 = 2U;
int8_t x40 = INT8_MIN;
volatile int64_t x45 = -1LL;
int64_t x55 = 3LL;
static volatile int32_t x56 = 2;
int64_t t13 = -6909292057615973LL;
static volatile int32_t x69 = -1;
int64_t x70 = 61113291351988112LL;
static volatile int8_t x71 = INT8_MIN;
volatile int16_t x75 = INT16_MIN;
static volatile int64_t t18 = -2266832554987319186LL;
uint8_t x78 = UINT8_MAX;
volatile uint64_t x82 = 7061LLU;
int64_t x84 = -18164607838134LL;
static int32_t x88 = -1;
int16_t x89 = -1;
int32_t x90 = 273;
int64_t x91 = 2688436273712691LL;
uint64_t x93 = 387422788LLU;
volatile uint64_t t23 = 0LLU;
volatile uint64_t x97 = UINT64_MAX;
int32_t x98 = -11956847;
volatile uint32_t x100 = 47U;
uint64_t x105 = 215257390548LLU;
static uint64_t x111 = 7685505LLU;
volatile uint64_t t27 = UINT64_MAX;
static int32_t x118 = INT32_MIN;
static volatile uint16_t x128 = UINT16_MAX;
volatile int64_t t32 = -101284647674LL;
int8_t x138 = INT8_MIN;
int8_t x139 = INT8_MAX;
volatile int64_t t34 = INT64_MAX;
static uint16_t x150 = 1U;
volatile uint16_t x151 = 9373U;
static uint32_t x152 = UINT32_MAX;
int8_t x155 = INT8_MIN;
static volatile int64_t t37 = 2090321465543LL;
int8_t x158 = INT8_MAX;
int16_t x161 = 284;
volatile uint64_t t39 = 0LLU;
int32_t x165 = -229655616;
static int64_t x177 = -1LL;
int8_t x178 = -1;
volatile uint8_t x193 = 8U;
uint64_t x195 = 319484LLU;
static int16_t x205 = -1;
int64_t x207 = INT64_MIN;
static volatile int32_t t50 = 1764496;
uint8_t x219 = 98U;
uint16_t x233 = UINT16_MAX;
volatile uint64_t t56 = 213371412077449650LLU;
static uint64_t x239 = 427866LLU;
volatile int32_t x241 = 4397810;
volatile int64_t x247 = INT64_MIN;
static int8_t x258 = 3;
int64_t x276 = 15579LL;
static int64_t x278 = -1LL;
volatile uint16_t x280 = 17961U;
uint8_t x289 = 12U;
volatile int64_t x290 = -3675672LL;
volatile int64_t t69 = -13LL;
uint8_t x299 = UINT8_MAX;
int64_t x301 = -1LL;
static uint64_t t71 = UINT64_MAX;
int32_t x307 = INT32_MIN;
int64_t x308 = 420619942LL;
static uint64_t x321 = 1311LLU;
int64_t x322 = INT64_MAX;
int32_t x323 = INT32_MIN;
static int8_t x331 = -1;
int16_t x333 = -20;
static int32_t x338 = INT32_MAX;
static int16_t x355 = INT16_MIN;
int8_t x356 = INT8_MAX;
static volatile int64_t t83 = -7298546146LL;
uint64_t x367 = UINT64_MAX;
int8_t x368 = -4;
int8_t x369 = INT8_MIN;
uint32_t t89 = 155520U;
volatile uint32_t x382 = 26U;
int16_t x388 = INT16_MIN;
volatile int64_t t91 = -32LL;
volatile int8_t x394 = INT8_MIN;
int16_t x395 = INT16_MIN;
int8_t x418 = 1;
volatile int32_t t97 = 8335;
volatile uint16_t x428 = 46U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int16_t x2 = -1;
	static volatile uint32_t x3 = UINT32_MAX;
	volatile uint64_t t0 = 134862108609LLU;

	t0 = (x1|((x2%x3)/x4));

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x6 = INT64_MAX;
	int8_t x7 = 1;
	static int32_t x8 = INT32_MIN;
	int64_t t1 = -213787927475422LL;

	t1 = (x5|((x6%x7)/x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	static uint16_t x10 = 28U;
	uint8_t x11 = 55U;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = -599770753;

	t2 = (x9|((x10%x11)/x12));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int32_t x15 = INT32_MAX;
	int32_t x16 = 1;

	t3 = (x13|((x14%x15)/x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -299;
	uint8_t x18 = 15U;
	int8_t x19 = INT8_MIN;
	volatile int64_t x20 = -1LL;
	volatile int64_t t4 = 419399412782LL;

	t4 = (x17|((x18%x19)/x20));

	if (t4 != -11LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static uint16_t x22 = UINT16_MAX;
	int16_t x23 = -3;
	int64_t x24 = -2092450762895LL;
	int64_t t5 = 19502549LL;

	t5 = (x21|((x22%x23)/x24));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int16_t x26 = -31;
	static int64_t x27 = 30674373LL;
	volatile int32_t x28 = INT32_MAX;
	volatile int64_t t6 = -630099LL;

	t6 = (x25|((x26%x27)/x28));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 46U;
	int32_t x30 = INT32_MIN;
	static int8_t x31 = 2;
	volatile int32_t x32 = -130868927;
	uint32_t t7 = 342468353U;

	t7 = (x29|((x30%x31)/x32));

	if (t7 != 46U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	uint32_t x36 = UINT32_MAX;
	uint64_t t8 = 12031262803876LLU;

	t8 = (x33|((x34%x35)/x36));

	if (t8 != 1787LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t t9 = -1371121779LL;

	t9 = (x37|((x38%x39)/x40));

	if (t9 != -300363576LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 1070962412;
	int64_t x42 = 79679656128LL;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = 24327328;
	volatile int64_t t10 = -5348LL;

	t10 = (x41|((x42%x43)/x44));

	if (t10 != 1070962412LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	int16_t x47 = -148;
	static int16_t x48 = INT16_MIN;
	volatile int64_t t11 = 753633839148782172LL;

	t11 = (x45|((x46%x47)/x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 126U;
	int8_t x50 = -1;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -1;

	t12 = (x49|((x50%x51)/x52));

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile uint32_t x54 = 228U;

	t13 = (x53|((x54%x55)/x56));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 165U;
	static int64_t x58 = 1043535LL;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 155U;
	int64_t t14 = 1548857765LL;

	t14 = (x57|((x58%x59)/x60));

	if (t14 != 183LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 20004U;
	static volatile int8_t x62 = 6;
	uint16_t x63 = 2106U;
	int64_t x64 = -1LL;
	volatile int64_t t15 = -97105912732LL;

	t15 = (x61|((x62%x63)/x64));

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1063548;
	volatile int16_t x66 = INT16_MAX;
	static volatile int32_t x67 = INT32_MIN;
	int16_t x68 = -1;
	volatile int32_t t16 = -6083;

	t16 = (x65|((x66%x67)/x68));

	if (t16 != -14971) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x72 = 7308584533074894483LLU;
	static uint64_t t17 = UINT64_MAX;

	t17 = (x69|((x70%x71)/x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 2U;
	int8_t x74 = -1;
	int64_t x76 = -81711862812402342LL;

	t18 = (x73|((x74%x75)/x76));

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	uint32_t t19 = UINT32_MAX;

	t19 = (x77|((x78%x79)/x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -17;
	int8_t x83 = INT8_MAX;
	volatile uint64_t t20 = 62103LLU;

	t20 = (x81|((x82%x83)/x84));

	if (t20 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static volatile int32_t x86 = -891590429;
	uint8_t x87 = 9U;
	uint32_t t21 = UINT32_MAX;

	t21 = (x85|((x86%x87)/x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x92 = 2U;
	volatile int64_t t22 = -2085411667463140LL;

	t22 = (x89|((x90%x91)/x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = 2U;
	volatile int64_t x95 = INT64_MIN;
	volatile int8_t x96 = 5;

	t23 = (x93|((x94%x95)/x96));

	if (t23 != 387422788LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x99 = -4;
	static volatile uint64_t t24 = UINT64_MAX;

	t24 = (x97|((x98%x99)/x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MAX;
	static volatile uint32_t x102 = 7037U;
	int32_t x103 = -38850;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -5261128012LL;

	t25 = (x101|((x102%x103)/x104));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = -1;
	int8_t x107 = -1;
	uint8_t x108 = 22U;
	static uint64_t t26 = 580087LLU;

	t26 = (x105|((x106%x107)/x108));

	if (t26 != 215257390548LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile int16_t x112 = INT16_MIN;

	t27 = (x109|((x110%x111)/x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int8_t x119 = -1;
	static int16_t x120 = INT16_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x117|((x118%x119)/x120));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 14923U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x121|((x122%x123)/x124));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MAX;
	int16_t x126 = -1;
	static uint32_t x127 = UINT32_MAX;
	int64_t t30 = INT64_MAX;

	t30 = (x125|((x126%x127)/x128));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = INT32_MAX;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 140U;
	static int16_t x132 = -1;
	uint32_t t31 = 30294U;

	t31 = (x129|((x130%x131)/x132));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int64_t x134 = -8373849403582870LL;
	uint32_t x135 = 206U;
	static int16_t x136 = INT16_MIN;

	t32 = (x133|((x134%x135)/x136));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 0;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t33 = -41LL;

	t33 = (x137|((x138%x139)/x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MAX;
	volatile int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = 1146334214U;

	t34 = (x141|((x142%x143)/x144));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	int16_t x146 = 5;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = -1917806;
	static volatile int32_t t35 = -55500776;

	t35 = (x145|((x146%x147)/x148));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x149|((x150%x151)/x152));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MIN;
	int64_t x154 = -14045298293899765LL;
	int64_t x156 = INT64_MIN;

	t37 = (x153|((x154%x155)/x156));

	if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MAX;
	int8_t x159 = 21;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t38 = -1915992;

	t38 = (x157|((x158%x159)/x160));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x162 = 14209980;
	static uint8_t x163 = 17U;
	uint64_t x164 = 3800069LLU;

	t39 = (x161|((x162%x163)/x164));

	if (t39 != 284LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x166 = INT8_MAX;
	int8_t x167 = INT8_MAX;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t40 = -109416;

	t40 = (x165|((x166%x167)/x168));

	if (t40 != -229655616) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MAX;
	int16_t x171 = -1;
	static uint32_t x172 = 404459462U;
	uint32_t t41 = 137U;

	t41 = (x169|((x170%x171)/x172));

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = UINT64_MAX;
	static int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	static volatile int32_t x176 = 44520855;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x173|((x174%x175)/x176));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x179 = 1LL;
	int16_t x180 = INT16_MIN;
	int64_t t43 = -294722131LL;

	t43 = (x177|((x178%x179)/x180));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = -8;
	int32_t x182 = -99286;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = 26500U;
	uint32_t t44 = 484886U;

	t44 = (x181|((x182%x183)/x184));

	if (t44 != 4294967290U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = 134708123718432429LL;
	static int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	int64_t t45 = INT64_MIN;

	t45 = (x189|((x190%x191)/x192));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = 6222142848LL;
	static uint64_t x196 = 8801550LLU;
	static uint64_t t46 = 8187335051599465LLU;

	t46 = (x193|((x194%x195)/x196));

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = UINT16_MAX;
	static int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MAX;
	int64_t x200 = -1LL;
	int64_t t47 = -361056LL;

	t47 = (x197|((x198%x199)/x200));

	if (t47 != 65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = 615976798;
	volatile int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = 12791624005876LLU;
	uint64_t t48 = 10LLU;

	t48 = (x201|((x202%x203)/x204));

	if (t48 != 615976798LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x206 = -1486;
	volatile int16_t x208 = INT16_MAX;
	static volatile int64_t t49 = 313037492LL;

	t49 = (x205|((x206%x207)/x208));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 52U;
	int16_t x210 = 1653;
	static int8_t x211 = INT8_MAX;
	volatile int32_t x212 = -1;

	t50 = (x209|((x210%x211)/x212));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = -1LL;
	int8_t x214 = -18;
	static int64_t x215 = -1LL;
	volatile uint16_t x216 = 573U;
	int64_t t51 = 11291LL;

	t51 = (x213|((x214%x215)/x216));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t52 = 27887;

	t52 = (x217|((x218%x219)/x220));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = 236644;
	volatile int64_t x222 = -5397124224LL;
	int64_t x223 = -1LL;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int64_t t53 = -215665LL;

	t53 = (x221|((x222%x223)/x224));

	if (t53 != 236644LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = -1;
	int32_t x227 = -1;
	volatile uint32_t x228 = 17055U;
	volatile uint32_t t54 = 9609489U;

	t54 = (x225|((x226%x227)/x228));

	if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = -55;
	static uint16_t x231 = UINT16_MAX;
	static int64_t x232 = INT64_MIN;
	int64_t t55 = 574823618778077292LL;

	t55 = (x229|((x230%x231)/x232));

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x234 = INT32_MAX;
	volatile uint64_t x235 = 2064669LLU;
	uint8_t x236 = 2U;

	t56 = (x233|((x234%x235)/x236));

	if (t56 != 131071LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 27336774LLU;
	volatile uint64_t x238 = 1220435063931LLU;
	int16_t x240 = 90;
	volatile uint64_t t57 = 331263739LLU;

	t57 = (x237|((x238%x239)/x240));

	if (t57 != 27340646LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x242 = INT16_MAX;
	static int8_t x243 = INT8_MIN;
	static uint16_t x244 = 4744U;
	int32_t t58 = -64;

	t58 = (x241|((x242%x243)/x244));

	if (t58 != 4397810) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 14169LLU;
	int16_t x246 = INT16_MAX;
	int64_t x248 = -49121875LL;
	volatile uint64_t t59 = 14275872LLU;

	t59 = (x245|((x246%x247)/x248));

	if (t59 != 14169LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 0U;
	volatile uint32_t x250 = 444U;
	uint8_t x251 = 21U;
	volatile uint8_t x252 = 117U;
	volatile uint32_t t60 = 120U;

	t60 = (x249|((x250%x251)/x252));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = 392644299016LL;
	uint32_t x254 = 199U;
	int32_t x255 = INT32_MIN;
	static uint8_t x256 = UINT8_MAX;
	volatile int64_t t61 = -7841220LL;

	t61 = (x253|((x254%x255)/x256));

	if (t61 != 392644299016LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	static volatile int64_t x259 = INT64_MIN;
	volatile int8_t x260 = INT8_MAX;
	volatile int64_t t62 = 762493LL;

	t62 = (x257|((x258%x259)/x260));

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 23;
	static uint16_t x262 = UINT16_MAX;
	uint8_t x263 = 15U;
	static uint8_t x264 = 54U;
	int32_t t63 = -1;

	t63 = (x261|((x262%x263)/x264));

	if (t63 != 23) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = 4;
	uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t64 = -3;

	t64 = (x265|((x266%x267)/x268));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = -14825;
	volatile uint16_t x271 = 954U;
	static volatile int64_t x272 = INT64_MAX;
	volatile int64_t t65 = -7358LL;

	t65 = (x269|((x270%x271)/x272));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = 0;
	uint64_t x275 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (x273|((x274%x275)/x276));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	volatile int8_t x279 = -2;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x277|((x278%x279)/x280));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x285 = 5419146LLU;
	static uint64_t x286 = 1676172651687850554LLU;
	int8_t x287 = INT8_MAX;
	int32_t x288 = -1;
	static volatile uint64_t t68 = 47404622198822LLU;

	t68 = (x285|((x286%x287)/x288));

	if (t68 != 5419146LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MAX;

	t69 = (x289|((x290%x291)/x292));

	if (t69 != -36LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MAX;
	uint16_t x300 = UINT16_MAX;
	int32_t t70 = 708592918;

	t70 = (x297|((x298%x299)/x300));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x302 = 2263634LLU;
	int32_t x303 = -11439;
	uint16_t x304 = 1758U;

	t71 = (x301|((x302%x303)/x304));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MAX;
	static int32_t x306 = 23852;
	int64_t t72 = -3LL;

	t72 = (x305|((x306%x307)/x308));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x309 = UINT32_MAX;
	uint32_t x310 = UINT32_MAX;
	static int64_t x311 = INT64_MAX;
	static uint32_t x312 = UINT32_MAX;
	static int64_t t73 = 162826020774253200LL;

	t73 = (x309|((x310%x311)/x312));

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = 12246715U;
	uint8_t x320 = 27U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x317|((x318%x319)/x320));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x324 = 19LLU;
	uint64_t t75 = 1923474LLU;

	t75 = (x321|((x322%x323)/x324));

	if (t75 != 113026495LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	static int64_t x327 = INT64_MAX;
	int32_t x328 = 7043;
	volatile int64_t t76 = 0LL;

	t76 = (x325|((x326%x327)/x328));

	if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MAX;
	static int8_t x330 = INT8_MIN;
	int64_t x332 = -1LL;
	int64_t t77 = 107946087LL;

	t77 = (x329|((x330%x331)/x332));

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x334 = UINT32_MAX;
	int32_t x335 = -5650594;
	volatile uint32_t x336 = UINT32_MAX;
	volatile uint32_t t78 = 1342121U;

	t78 = (x333|((x334%x335)/x336));

	if (t78 != 4294967276U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int8_t x339 = INT8_MIN;
	int32_t x340 = -4079629;
	uint64_t t79 = UINT64_MAX;

	t79 = (x337|((x338%x339)/x340));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -25;
	uint32_t x342 = 11102U;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = 1;
	uint32_t t80 = UINT32_MAX;

	t80 = (x341|((x342%x343)/x344));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 3U;
	volatile uint16_t x346 = 85U;
	int16_t x347 = INT16_MIN;
	volatile uint32_t x348 = UINT32_MAX;
	volatile uint32_t t81 = 1520216972U;

	t81 = (x345|((x346%x347)/x348));

	if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x349 = INT64_MAX;
	uint32_t x350 = 6185U;
	volatile uint32_t x351 = 203U;
	static int32_t x352 = -8496;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x349|((x350%x351)/x352));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = 10582U;
	volatile int64_t x354 = -1LL;

	t83 = (x353|((x354%x355)/x356));

	if (t83 != 10582LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = INT64_MIN;
	static int8_t x358 = 6;
	volatile int8_t x359 = -1;
	static uint32_t x360 = UINT32_MAX;
	int64_t t84 = INT64_MIN;

	t84 = (x357|((x358%x359)/x360));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	static uint16_t x363 = 24U;
	int8_t x364 = INT8_MAX;
	volatile int64_t t85 = 7891LL;

	t85 = (x361|((x362%x363)/x364));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = 16962310817LL;
	int8_t x366 = 20;
	static volatile uint64_t t86 = 6660131LLU;

	t86 = (x365|((x366%x367)/x368));

	if (t86 != 16962310817LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x370 = -7LL;
	int16_t x371 = 6456;
	int16_t x372 = 5;
	volatile int64_t t87 = 0LL;

	t87 = (x369|((x370%x371)/x372));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = UINT16_MAX;
	volatile int16_t x374 = -15263;
	static uint64_t x375 = 2303932089052462211LLU;
	static volatile int16_t x376 = INT16_MAX;
	volatile uint64_t t88 = 2LLU;

	t88 = (x373|((x374%x375)/x376));

	if (t88 != 466547507199LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile uint16_t x378 = 1896U;
	static uint32_t x379 = UINT32_MAX;
	uint16_t x380 = UINT16_MAX;

	t89 = (x377|((x378%x379)/x380));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MIN;
	int16_t x383 = -1;
	uint8_t x384 = 20U;
	int64_t t90 = 2078325083170154155LL;

	t90 = (x381|((x382%x383)/x384));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = INT32_MIN;

	t91 = (x385|((x386%x387)/x388));

	if (t91 != 255LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MIN;
	volatile uint64_t x390 = 4143926417269LLU;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	uint64_t t92 = 26752994005068LLU;

	t92 = (x389|((x390%x391)/x392));

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t93 = -35;

	t93 = (x393|((x394%x395)/x396));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = 9U;
	int64_t x402 = INT64_MAX;
	static volatile int64_t x403 = INT64_MIN;
	int64_t x404 = -1LL;
	int64_t t94 = -13555LL;

	t94 = (x401|((x402%x403)/x404));

	if (t94 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x405 = 0LL;
	int8_t x406 = 1;
	uint16_t x407 = 11U;
	int32_t x408 = -1;
	volatile int64_t t95 = 259LL;

	t95 = (x405|((x406%x407)/x408));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x413 = 9;
	static int16_t x414 = 27;
	static int8_t x415 = -7;
	int64_t x416 = INT64_MIN;
	volatile int64_t t96 = 10533509LL;

	t96 = (x413|((x414%x415)/x416));

	if (t96 != 9LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = UINT8_MAX;
	static int32_t x419 = -1;
	static int16_t x420 = INT16_MIN;

	t97 = (x417|((x418%x419)/x420));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = -1;
	int16_t x422 = 185;
	static uint64_t x423 = UINT64_MAX;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x421|((x422%x423)/x424));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x425 = 15786;
	int16_t x426 = -2;
	int32_t x427 = 11;
	int32_t t99 = -423550;

	t99 = (x425|((x426%x427)/x428));

	if (t99 != 15786) { NG(); } else { ; }
	
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
