#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 127608893771LLU;
int64_t x9 = INT64_MAX;
static volatile int32_t t2 = 745629;
int32_t x22 = INT32_MIN;
volatile uint32_t x28 = 133U;
uint16_t x29 = UINT16_MAX;
volatile int32_t x31 = -1;
int32_t x34 = -1;
int16_t x42 = -1208;
int8_t x55 = 1;
volatile int16_t x60 = -1;
volatile uint32_t x63 = UINT32_MAX;
volatile uint32_t t15 = UINT32_MAX;
int32_t t16 = 5701;
volatile int32_t x75 = -1;
int64_t x82 = -723438109795LL;
int8_t x83 = -1;
volatile int32_t t20 = -356899;
int8_t x94 = INT8_MIN;
uint8_t x99 = 30U;
static int16_t x102 = -541;
static int8_t x103 = INT8_MIN;
volatile int64_t t25 = 2315668957LL;
uint32_t x108 = 436061U;
static int32_t x111 = -1;
int8_t x112 = -1;
int32_t t27 = -1;
int64_t x129 = -1LL;
static int8_t x135 = -62;
uint64_t t34 = UINT64_MAX;
int32_t x141 = -729673;
volatile int32_t t37 = 29;
int64_t x162 = 887238137167LL;
static volatile int64_t t40 = -156LL;
int8_t x170 = -2;
int32_t x171 = INT32_MIN;
int8_t x174 = INT8_MAX;
uint32_t x176 = UINT32_MAX;
int8_t x180 = -1;
static volatile int32_t t44 = -2786;
int16_t x184 = INT16_MIN;
uint16_t x186 = UINT16_MAX;
volatile uint32_t x195 = UINT32_MAX;
volatile uint32_t t48 = UINT32_MAX;
int32_t t49 = -1128203;
static int16_t x205 = INT16_MIN;
uint8_t x218 = 29U;
uint8_t x222 = 52U;
static int32_t t55 = 64165;
volatile int16_t x232 = INT16_MAX;
uint32_t x234 = UINT32_MAX;
static uint64_t x242 = 15LLU;
static uint32_t x248 = 8351586U;
uint32_t t61 = 403U;
int32_t x249 = -1;
volatile uint64_t t62 = 2841395201LLU;
int64_t x253 = INT64_MIN;
int16_t x254 = INT16_MAX;
uint16_t x257 = 849U;
int8_t x260 = -1;
int8_t x263 = INT8_MAX;
int8_t x266 = -1;
volatile int32_t t66 = -1794;
volatile int64_t x274 = INT64_MIN;
int16_t x290 = INT16_MIN;
int16_t x292 = -721;
int8_t x295 = -1;
volatile int32_t x300 = INT32_MIN;
int16_t x306 = 2;
int16_t x316 = INT16_MAX;
volatile int32_t t78 = -2;
static int64_t x317 = -1LL;
int64_t t80 = INT64_MAX;
int16_t x340 = INT16_MIN;
volatile int64_t x341 = INT64_MIN;
int32_t x347 = -1;
int8_t x348 = 7;
int32_t t87 = -2096;
int64_t x353 = INT64_MIN;
int16_t x354 = -1;
volatile uint64_t t88 = 531LLU;
static volatile int32_t x360 = INT32_MIN;
volatile int8_t x369 = INT8_MIN;
uint8_t x371 = 8U;
volatile uint64_t x377 = 759024316LLU;
volatile int32_t x382 = INT32_MIN;
static int8_t x383 = -14;
volatile uint32_t x385 = UINT32_MAX;
uint64_t x391 = 32444438606125158LLU;
static volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	uint8_t x2 = UINT8_MAX;
	uint64_t x3 = 407647129310LLU;
	int16_t x4 = 206;

	t0 = (((x1<=x2)^x3)|x4);

	if (t0 != 407647129310LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 0LL;
	uint64_t x6 = 1240709640770950352LLU;
	static uint16_t x7 = UINT16_MAX;
	static volatile int64_t x8 = -1LL;
	static volatile int64_t t1 = 60368513527048007LL;

	t1 = (((x5<=x6)^x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;

	t2 = (((x9<=x10)^x11)|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = 681738402LL;
	static int16_t x15 = -53;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -1624377;

	t3 = (((x13<=x14)^x15)|x16);

	if (t3 != -54) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -53;
	int16_t x18 = 1;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -6360862979705501LL;

	t4 = (((x17<=x18)^x19)|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 6822U;
	uint8_t x23 = 41U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -2;

	t5 = (((x21<=x22)^x23)|x24);

	if (t5 != -87) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint8_t x26 = 12U;
	int8_t x27 = 5;
	uint32_t t6 = 3633U;

	t6 = (((x25<=x26)^x27)|x28);

	if (t6 != 133U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	uint64_t x32 = 1888675098LLU;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x29<=x30)^x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int8_t x35 = -1;
	static int8_t x36 = 0;
	volatile int32_t t8 = 26;

	t8 = (((x33<=x34)^x35)|x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = -3;
	static int16_t x40 = -1;
	int32_t t9 = -1201906;

	t9 = (((x37<=x38)^x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 183830;
	static int8_t x43 = INT8_MIN;
	int8_t x44 = -3;
	int32_t t10 = -2;

	t10 = (((x41<=x42)^x43)|x44);

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = UINT8_MAX;
	static volatile uint16_t x46 = 72U;
	uint8_t x47 = 1U;
	int64_t x48 = -1276210404598LL;
	static int64_t t11 = 0LL;

	t11 = (((x45<=x46)^x47)|x48);

	if (t11 != -1276210404597LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -6;
	volatile int64_t x50 = INT64_MIN;
	static int16_t x51 = -72;
	static uint8_t x52 = 0U;
	volatile int32_t t12 = 73491381;

	t12 = (((x49<=x50)^x51)|x52);

	if (t12 != -72) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x53 = UINT8_MAX;
	int16_t x54 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 64283;

	t13 = (((x53<=x54)^x55)|x56);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	volatile int64_t t14 = -98151805811074LL;

	t14 = (((x57<=x58)^x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 13;
	int64_t x62 = -1LL;
	static int32_t x64 = -1;

	t15 = (((x61<=x62)^x63)|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	volatile uint8_t x67 = 7U;
	int8_t x68 = -1;

	t16 = (((x65<=x66)^x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 6321665;
	static uint64_t x70 = UINT64_MAX;
	int16_t x71 = 33;
	int8_t x72 = -1;
	volatile int32_t t17 = 922;

	t17 = (((x69<=x70)^x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MAX;
	static volatile int64_t x76 = 2LL;
	volatile int64_t t18 = 524870510LL;

	t18 = (((x73<=x74)^x75)|x76);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = 7;
	int32_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -55461613;

	t19 = (((x77<=x78)^x79)|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1456518131578959337LL;
	int16_t x84 = INT16_MAX;

	t20 = (((x81<=x82)^x83)|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MIN;
	int64_t t21 = -449438641662208LL;

	t21 = (((x85<=x86)^x87)|x88);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 868LLU;
	volatile int64_t x92 = -1396LL;
	static uint64_t t22 = 6097157LLU;

	t22 = (((x89<=x90)^x91)|x92);

	if (t22 != 18446744073709550572LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 11;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 131U;
	volatile int32_t t23 = 3685448;

	t23 = (((x93<=x94)^x95)|x96);

	if (t23 != -2147483517) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -5;
	int8_t x98 = INT8_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x97<=x98)^x99)|x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	int64_t x104 = -1LL;

	t25 = (((x101<=x102)^x103)|x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -361898LL;
	uint8_t x106 = 2U;
	volatile int64_t x107 = 14284931711LL;
	static int64_t t26 = -137450200754LL;

	t26 = (((x105<=x106)^x107)|x108);

	if (t26 != 14285203327LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int64_t x110 = INT64_MIN;

	t27 = (((x109<=x110)^x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 110U;
	int64_t x114 = -1LL;
	uint16_t x115 = 205U;
	int16_t x116 = -24;
	static volatile int32_t t28 = 58485658;

	t28 = (((x113<=x114)^x115)|x116);

	if (t28 != -19) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 15U;
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	static volatile int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -75848000231LL;

	t29 = (((x117<=x118)^x119)|x120);

	if (t29 != -32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 119U;
	int16_t x122 = -1;
	int32_t x123 = -1;
	int16_t x124 = -1;
	static int32_t t30 = 29;

	t30 = (((x121<=x122)^x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -359;
	static int32_t x126 = INT32_MIN;
	volatile int64_t x127 = -7182971169432LL;
	static uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = 90837171560518LL;

	t31 = (((x125<=x126)^x127)|x128);

	if (t31 != -7182971109377LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MIN;
	uint16_t x131 = 1252U;
	uint8_t x132 = 0U;
	volatile int32_t t32 = 458738;

	t32 = (((x129<=x130)^x131)|x132);

	if (t32 != 1252) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int16_t x134 = INT16_MIN;
	int16_t x136 = -1;
	int32_t t33 = 36808;

	t33 = (((x133<=x134)^x135)|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	uint64_t x139 = UINT64_MAX;
	static volatile int8_t x140 = INT8_MIN;

	t34 = (((x137<=x138)^x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x142 = INT16_MAX;
	int64_t x143 = INT64_MAX;
	uint32_t x144 = 222U;
	int64_t t35 = -31752LL;

	t35 = (((x141<=x142)^x143)|x144);

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 3495359271LLU;
	static int64_t x146 = -229751230818409LL;
	int32_t x147 = INT32_MIN;
	volatile uint16_t x148 = 1915U;
	int32_t t36 = -1331849;

	t36 = (((x145<=x146)^x147)|x148);

	if (t36 != -2147481733) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 0;
	int32_t x150 = INT32_MIN;
	static int8_t x151 = -1;
	int32_t x152 = 1;

	t37 = (((x149<=x150)^x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	volatile int16_t x154 = -2739;
	int8_t x155 = -1;
	uint32_t x156 = 41881U;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x153<=x154)^x155)|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	int8_t x159 = INT8_MAX;
	int16_t x160 = -1;
	volatile int32_t t39 = 256235;

	t39 = (((x157<=x158)^x159)|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 5902U;
	int32_t x163 = -1;
	volatile int64_t x164 = INT64_MIN;

	t40 = (((x161<=x162)^x163)|x164);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = -366;
	volatile int32_t t41 = -85;

	t41 = (((x165<=x166)^x167)|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -6;
	static int64_t x172 = -3LL;
	volatile int64_t t42 = 2898943310309171092LL;

	t42 = (((x169<=x170)^x171)|x172);

	if (t42 != -3LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 7765676089738LLU;
	int32_t x175 = INT32_MIN;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (((x173<=x174)^x175)|x176);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	int8_t x178 = -11;
	static int16_t x179 = INT16_MAX;

	t44 = (((x177<=x178)^x179)|x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 27;
	static int8_t x182 = -1;
	int8_t x183 = INT8_MAX;
	static int32_t t45 = 2147542;

	t45 = (((x181<=x182)^x183)|x184);

	if (t45 != -32641) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int8_t x187 = 3;
	uint8_t x188 = 12U;
	int32_t t46 = 170509136;

	t46 = (((x185<=x186)^x187)|x188);

	if (t46 != 14) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -1LL;
	uint64_t x190 = 369808157313LLU;
	int64_t x191 = -1LL;
	uint64_t x192 = 141752LLU;
	uint64_t t47 = UINT64_MAX;

	t47 = (((x189<=x190)^x191)|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = 533333806717167LL;
	int8_t x196 = -5;

	t48 = (((x193<=x194)^x195)|x196);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 7U;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	static int8_t x200 = INT8_MAX;

	t49 = (((x197<=x198)^x199)|x200);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 1;
	int64_t x202 = -30294LL;
	volatile uint8_t x203 = 79U;
	static int64_t x204 = 105277082LL;
	int64_t t50 = 756764LL;

	t50 = (((x201<=x202)^x203)|x204);

	if (t50 != 105277151LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 47359LLU;
	static int8_t x207 = INT8_MAX;
	int32_t x208 = -289180540;
	int32_t t51 = 10;

	t51 = (((x205<=x206)^x207)|x208);

	if (t51 != -289180417) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 77;
	uint32_t x210 = 222127U;
	int8_t x211 = -11;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 51312;

	t52 = (((x209<=x210)^x211)|x212);

	if (t52 != -12) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 119U;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 7U;
	int32_t t53 = 1;

	t53 = (((x213<=x214)^x215)|x216);

	if (t53 != -32761) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 0;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 160153086U;
	volatile int64_t t54 = -8378560111898375LL;

	t54 = (((x217<=x218)^x219)|x220);

	if (t54 != -9223372036694622721LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 5U;
	int8_t x223 = -1;
	int16_t x224 = INT16_MIN;

	t55 = (((x221<=x222)^x223)|x224);

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 23U;
	static volatile uint16_t x226 = 9414U;
	static int8_t x227 = -1;
	int8_t x228 = -1;
	static int32_t t56 = -70919718;

	t56 = (((x225<=x226)^x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int32_t x230 = 14;
	int64_t x231 = INT64_MIN;
	int64_t t57 = 829804608329LL;

	t57 = (((x229<=x230)^x231)|x232);

	if (t57 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile int16_t x235 = INT16_MAX;
	int64_t x236 = 1964841942LL;
	int64_t t58 = 2136956526LL;

	t58 = (((x233<=x234)^x235)|x236);

	if (t58 != 1964867582LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MIN;
	static volatile int8_t x239 = -1;
	static int32_t x240 = INT32_MAX;
	volatile int32_t t59 = -109794147;

	t59 = (((x237<=x238)^x239)|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x243 = 59U;
	volatile int32_t x244 = -630;
	int32_t t60 = 79250005;

	t60 = (((x241<=x242)^x243)|x244);

	if (t60 != -581) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 1854730;
	uint64_t x246 = UINT64_MAX;
	static volatile int32_t x247 = INT32_MIN;

	t61 = (((x245<=x246)^x247)|x248);

	if (t61 != 2155835235U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	static volatile uint64_t x252 = 2211016547485891288LLU;

	t62 = (((x249<=x250)^x251)|x252);

	if (t62 != 2211016547485891326LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x255 = INT8_MIN;
	int8_t x256 = -1;
	static int32_t t63 = 237;

	t63 = (((x253<=x254)^x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -1LL;
	int16_t x259 = -15204;
	volatile int32_t t64 = -118;

	t64 = (((x257<=x258)^x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 2LL;
	volatile uint8_t x262 = UINT8_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t65 = 438LL;

	t65 = (((x261<=x262)^x263)|x264);

	if (t65 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	volatile uint16_t x267 = 3348U;
	static uint16_t x268 = 61U;

	t66 = (((x265<=x266)^x267)|x268);

	if (t66 != 3389) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -1LL;

	t67 = (((x269<=x270)^x271)|x272);

	if (t67 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	volatile int16_t x275 = 2256;
	int16_t x276 = -1;
	static volatile int32_t t68 = -66038557;

	t68 = (((x273<=x274)^x275)|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -15696230492LL;
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -1152921LL;
	static int64_t t69 = 11845482039312LL;

	t69 = (((x277<=x278)^x279)|x280);

	if (t69 != -1152921LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 8U;
	uint64_t x282 = 47952124470LLU;
	uint16_t x283 = 22U;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = 834747468065156LL;

	t70 = (((x281<=x282)^x283)|x284);

	if (t70 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	static volatile uint32_t x286 = 247233215U;
	int64_t x287 = -2LL;
	int8_t x288 = INT8_MAX;
	static volatile int64_t t71 = -3934880637LL;

	t71 = (((x285<=x286)^x287)|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 22U;
	static uint32_t x291 = 0U;
	uint32_t t72 = 6924U;

	t72 = (((x289<=x290)^x291)|x292);

	if (t72 != 4294966575U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = 0U;
	static int64_t x296 = -1LL;
	int64_t t73 = 406157806280229684LL;

	t73 = (((x293<=x294)^x295)|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = INT16_MIN;
	volatile int32_t t74 = -498;

	t74 = (((x297<=x298)^x299)|x300);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile int8_t x302 = -1;
	uint64_t x303 = 3416LLU;
	int32_t x304 = -1;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x301<=x302)^x303)|x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = 9;
	uint32_t x307 = UINT32_MAX;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t76 = 65914789362LL;

	t76 = (((x305<=x306)^x307)|x308);

	if (t76 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 0U;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 1069709U;
	static int64_t x312 = INT64_MIN;
	int64_t t77 = -265787551920217LL;

	t77 = (((x309<=x310)^x311)|x312);

	if (t77 != -9223372036853706099LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 5U;
	int64_t x314 = INT64_MIN;
	static int32_t x315 = 24;

	t78 = (((x313<=x314)^x315)|x316);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = 22827788U;
	uint32_t x319 = 380933548U;
	volatile int32_t x320 = 255352333;
	volatile uint32_t t79 = 57279967U;

	t79 = (((x317<=x318)^x319)|x320);

	if (t79 != 532471725U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 3019917;
	static volatile int8_t x322 = INT8_MIN;
	static int32_t x323 = 8589006;
	volatile int64_t x324 = INT64_MAX;

	t80 = (((x321<=x322)^x323)|x324);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 0U;
	static uint16_t x326 = 7967U;
	uint32_t x327 = 304387042U;
	static uint64_t x328 = 1166226955LLU;
	static volatile uint64_t t81 = 373181060717LLU;

	t81 = (((x325<=x326)^x327)|x328);

	if (t81 != 1470609387LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = -1;
	volatile uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 1011159372LLU;
	uint32_t x332 = UINT32_MAX;
	static volatile uint64_t t82 = 3411349421393730LLU;

	t82 = (((x329<=x330)^x331)|x332);

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int16_t x334 = INT16_MAX;
	int32_t x335 = -3;
	int32_t x336 = 15497;
	static int32_t t83 = 975542937;

	t83 = (((x333<=x334)^x335)|x336);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 127560832948344304LL;
	int64_t x338 = INT64_MIN;
	uint16_t x339 = 68U;
	volatile int32_t t84 = 426915822;

	t84 = (((x337<=x338)^x339)|x340);

	if (t84 != -32700) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	static volatile int16_t x343 = INT16_MIN;
	int32_t x344 = -493;
	static volatile int32_t t85 = 336;

	t85 = (((x341<=x342)^x343)|x344);

	if (t85 != -493) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int64_t x346 = -1LL;
	int32_t t86 = -1041805;

	t86 = (((x345<=x346)^x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -379;
	uint8_t x350 = 7U;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MAX;

	t87 = (((x349<=x350)^x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x355 = 1868842414746212LLU;
	int8_t x356 = 58;

	t88 = (((x353<=x354)^x355)|x356);

	if (t88 != 1868842414746239LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MAX;
	uint32_t x358 = 7U;
	uint16_t x359 = 354U;
	int32_t t89 = 55454258;

	t89 = (((x357<=x358)^x359)|x360);

	if (t89 != -2147483294) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 8122U;
	volatile uint64_t x362 = 3429LLU;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	static volatile int32_t t90 = 1670031;

	t90 = (((x361<=x362)^x363)|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MAX;
	volatile uint32_t x367 = 10U;
	int64_t x368 = INT64_MIN;
	volatile int64_t t91 = 6707644002LL;

	t91 = (((x365<=x366)^x367)|x368);

	if (t91 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -63566652;

	t92 = (((x369<=x370)^x371)|x372);

	if (t92 != -2147483640) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = 12184U;
	uint32_t x374 = 8196966U;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t93 = -15177226679032LL;

	t93 = (((x373<=x374)^x375)|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = -1;
	volatile int64_t x380 = -1LL;
	int64_t t94 = -124985123806901300LL;

	t94 = (((x377<=x378)^x379)|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 452U;
	int64_t x384 = INT64_MIN;
	static int64_t t95 = -196292093744285LL;

	t95 = (((x381<=x382)^x383)|x384);

	if (t95 != -14LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 26U;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x385<=x386)^x387)|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MAX;
	static int16_t x392 = -265;
	static volatile uint64_t t97 = 7LLU;

	t97 = (((x389<=x390)^x391)|x392);

	if (t97 != 18446744073709551351LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MIN;
	uint8_t x394 = 1U;
	volatile uint64_t x395 = 23721290LLU;
	int64_t x396 = -674357609676060791LL;
	volatile uint64_t t98 = 6021LLU;

	t98 = (((x393<=x394)^x395)|x396);

	if (t98 != 17772386464037730251LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 1U;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = 461630;

	t99 = (((x397<=x398)^x399)|x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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
