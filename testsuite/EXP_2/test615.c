#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
uint32_t x6 = 57U;
int16_t x15 = 3775;
int8_t x26 = INT8_MIN;
int8_t x29 = INT8_MIN;
static int8_t x32 = -1;
uint32_t x33 = 390827042U;
uint64_t x36 = 27736409621740329LLU;
volatile int32_t x40 = INT32_MIN;
uint16_t x58 = 175U;
static volatile int32_t t14 = -2025;
static volatile int64_t x61 = INT64_MIN;
int32_t x66 = -12;
int16_t x67 = 11;
int8_t x75 = -1;
uint64_t x85 = 168054526923LLU;
volatile int16_t x87 = -56;
int8_t x90 = -19;
static volatile int32_t x91 = -1;
volatile int32_t t22 = 31;
int64_t x102 = INT64_MIN;
uint64_t x105 = UINT64_MAX;
uint8_t x111 = 3U;
volatile int64_t t27 = -227968LL;
int64_t x130 = INT64_MAX;
int64_t x133 = INT64_MIN;
volatile uint8_t x135 = 22U;
volatile int32_t t32 = -15;
int64_t x144 = INT64_MAX;
static int32_t x147 = INT32_MIN;
int16_t x153 = INT16_MIN;
int32_t x154 = INT32_MIN;
uint32_t x169 = UINT32_MAX;
int32_t x174 = -54;
uint8_t x175 = 35U;
int16_t x176 = INT16_MIN;
volatile int32_t t42 = -310;
uint8_t x191 = 30U;
volatile int32_t t46 = -2536;
static uint16_t x202 = 700U;
static int8_t x204 = INT8_MIN;
int32_t x208 = 2895;
int16_t x217 = INT16_MIN;
uint16_t x220 = 2U;
int32_t t52 = -227366;
uint32_t t53 = 10321U;
static uint32_t x232 = 2U;
uint8_t x238 = UINT8_MAX;
int64_t x245 = 1087105LL;
int8_t x250 = -1;
int16_t x251 = INT16_MAX;
uint8_t x257 = 1U;
int16_t x268 = INT16_MAX;
volatile int32_t t64 = -4;
uint16_t x272 = 387U;
volatile int32_t t70 = -211276;
static int16_t x295 = 15;
uint32_t x297 = 0U;
int16_t x300 = INT16_MIN;
uint16_t x304 = UINT16_MAX;
volatile int32_t x308 = 51211853;
int32_t t74 = 112426445;
static volatile int32_t t75 = 395082;
int16_t x316 = -361;
volatile int32_t t76 = -50838;
uint16_t x317 = 0U;
volatile uint64_t x327 = 201869280LLU;
volatile int32_t t79 = -16103;
static int8_t x350 = 1;
static uint32_t x351 = UINT32_MAX;
int64_t x352 = -228350223812822LL;
int64_t t82 = 738377LL;
int32_t x355 = INT32_MIN;
volatile int32_t t83 = 58302;
static volatile int32_t t84 = 16764;
volatile int64_t x370 = -61967LL;
volatile int16_t x372 = INT16_MIN;
volatile int64_t x378 = INT64_MAX;
int8_t x382 = -1;
static int64_t x387 = 223338827242094450LL;
int32_t x391 = INT32_MAX;
volatile int32_t x392 = INT32_MIN;
volatile int64_t x398 = INT64_MAX;
int16_t x400 = INT16_MIN;
int32_t t93 = 16902763;
int64_t x421 = INT64_MIN;
uint8_t x423 = 2U;
int16_t x424 = -1;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint16_t x2 = UINT16_MAX;
	uint16_t x3 = 25U;
	int8_t x4 = -8;
	static volatile int32_t t0 = 215;

	t0 = ((x1<(x2/x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 375278492;

	t1 = ((x5<(x6/x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = 54LL;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int16_t x12 = -280;
	static volatile int32_t t2 = 354077;

	t2 = ((x9<(x10/x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -5061591600658523LL;
	uint16_t x14 = UINT16_MAX;
	int32_t x16 = -139921941;
	volatile int32_t t3 = -402899;

	t3 = ((x13<(x14/x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 491U;
	int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 3086U;
	int32_t t4 = -1498;

	t4 = ((x17<(x18/x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = 244607160048860LLU;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 18;

	t5 = ((x21<(x22/x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -86;
	static int16_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = -7996639;

	t6 = ((x25<(x26/x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MAX;
	int32_t t7 = 24639;

	t7 = ((x29<(x30/x31))/x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = 2;
	static int16_t x35 = -528;
	uint64_t t8 = 31735LLU;

	t8 = ((x33<(x34/x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = 7330;
	uint8_t x39 = 4U;
	static int32_t t9 = -44;

	t9 = ((x37<(x38/x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 2871930577LLU;
	volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 8273496424963LLU;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 16204;

	t10 = ((x41<(x42/x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static volatile int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -6414256;

	t11 = ((x45<(x46/x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = -782;
	volatile int32_t x51 = -1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 8448528;

	t12 = ((x49<(x50/x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 1;
	int32_t x54 = -1;
	uint32_t x55 = 254U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 271645LLU;

	t13 = ((x53<(x54/x55))/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 30288550U;
	int32_t x59 = -465618595;
	int8_t x60 = INT8_MAX;

	t14 = ((x57<(x58/x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MAX;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 130823;

	t15 = ((x61<(x62/x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 10U;
	int64_t x68 = 24575LL;
	int64_t t16 = 6481LL;

	t16 = ((x65<(x66/x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MAX;
	int16_t x71 = 32;
	int64_t x72 = INT64_MIN;
	int64_t t17 = -289534472087LL;

	t17 = ((x69<(x70/x71))/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 0U;
	uint16_t x74 = 147U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 7107969;

	t18 = ((x73<(x74/x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = 36;
	volatile int64_t x78 = INT64_MIN;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 16101;

	t19 = ((x77<(x78/x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 3166;
	uint16_t x82 = 0U;
	volatile int16_t x83 = 3771;
	int8_t x84 = -63;
	int32_t t20 = 16800;

	t20 = ((x81<(x82/x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 0;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -27269;

	t21 = ((x85<(x86/x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1183439;
	int8_t x92 = 5;

	t22 = ((x89<(x90/x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 7839U;
	volatile int16_t x94 = 1859;
	int8_t x95 = 3;
	static volatile int16_t x96 = 6355;
	volatile int32_t t23 = 241;

	t23 = ((x93<(x94/x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 27281693038231485LLU;
	int64_t x103 = INT64_MAX;
	volatile int32_t x104 = 7;
	static int32_t t24 = 104307645;

	t24 = ((x101<(x102/x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x106 = INT32_MAX;
	static volatile int64_t x107 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = 1;

	t25 = ((x105<(x106/x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 2147U;
	int64_t x110 = 29405431LL;
	int16_t x112 = INT16_MAX;
	volatile int32_t t26 = 1;

	t26 = ((x109<(x110/x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x113 = 846123U;
	int8_t x114 = 20;
	static int8_t x115 = 18;
	volatile int64_t x116 = INT64_MAX;

	t27 = ((x113<(x114/x115))/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = INT64_MAX;
	uint64_t x118 = 1070LLU;
	int64_t x119 = -1LL;
	volatile uint8_t x120 = 1U;
	int32_t t28 = 26;

	t28 = ((x117<(x118/x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = 424;
	uint8_t x122 = 96U;
	static volatile int64_t x123 = INT64_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t29 = -27;

	t29 = ((x121<(x122/x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	volatile int8_t x126 = INT8_MIN;
	int32_t x127 = 641950273;
	int16_t x128 = 4;
	volatile int32_t t30 = -38147418;

	t30 = ((x125<(x126/x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = -39019LL;
	static int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t31 = 490737;

	t31 = ((x129<(x130/x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x134 = UINT8_MAX;
	int16_t x136 = INT16_MIN;

	t32 = ((x133<(x134/x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 676409844089078LLU;
	int16_t x139 = -1;
	static int16_t x140 = -6751;
	int32_t t33 = -358;

	t33 = ((x137<(x138/x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int16_t x142 = -4545;
	int8_t x143 = -1;
	int64_t t34 = -8351LL;

	t34 = ((x141<(x142/x143))/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 314U;
	uint8_t x148 = UINT8_MAX;
	int32_t t35 = -44;

	t35 = ((x145<(x146/x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	uint16_t x150 = 5U;
	static int64_t x151 = INT64_MAX;
	static volatile uint16_t x152 = 24U;
	volatile int32_t t36 = -55782;

	t36 = ((x149<(x150/x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x155 = 7U;
	int64_t x156 = -9816LL;
	int64_t t37 = -30015835155226LL;

	t37 = ((x153<(x154/x155))/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -636LL;
	volatile uint16_t x158 = 44U;
	int16_t x159 = INT16_MIN;
	int32_t x160 = -1;
	volatile int32_t t38 = 1544;

	t38 = ((x157<(x158/x159))/x160);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 2231247086015316LL;
	static uint8_t x162 = UINT8_MAX;
	int32_t x163 = -1047943061;
	uint64_t x164 = 1LLU;
	volatile uint64_t t39 = 26237346816671LLU;

	t39 = ((x161<(x162/x163))/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 8391U;
	int8_t x166 = INT8_MIN;
	uint8_t x167 = 1U;
	volatile int16_t x168 = -1;
	int32_t t40 = -182;

	t40 = ((x165<(x166/x167))/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = INT32_MIN;
	int64_t x171 = 1215793049197914327LL;
	uint64_t x172 = UINT64_MAX;
	uint64_t t41 = 62986512003933495LLU;

	t41 = ((x169<(x170/x171))/x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -770841;

	t42 = ((x173<(x174/x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 293U;
	uint16_t x178 = UINT16_MAX;
	static int64_t x179 = 3716LL;
	volatile int64_t x180 = INT64_MIN;
	volatile int64_t t43 = 82717394048499LL;

	t43 = ((x177<(x178/x179))/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 492112906U;
	volatile int16_t x182 = 1;
	volatile uint16_t x183 = UINT16_MAX;
	int32_t x184 = 792558;
	volatile int32_t t44 = -143988;

	t44 = ((x181<(x182/x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	uint64_t x192 = 263792879LLU;
	volatile uint64_t t45 = 6172923249980LLU;

	t45 = ((x189<(x190/x191))/x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x193 = UINT32_MAX;
	uint8_t x194 = 3U;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = INT16_MIN;

	t46 = ((x193<(x194/x195))/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 3U;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = -10;
	uint16_t x200 = 22U;
	volatile int32_t t47 = 22740;

	t47 = ((x197<(x198/x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	volatile int32_t t48 = 4115;

	t48 = ((x201<(x202/x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = -131097451;
	static int16_t x207 = 11904;
	volatile int32_t t49 = 13574491;

	t49 = ((x205<(x206/x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 25374522U;
	uint16_t x210 = 36U;
	int64_t x211 = -12131049304700LL;
	int16_t x212 = INT16_MIN;
	static int32_t t50 = 3;

	t50 = ((x209<(x210/x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x213 = 9LLU;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t51 = 1486;

	t51 = ((x213<(x214/x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x218 = INT64_MIN;
	volatile int64_t x219 = 2LL;

	t52 = ((x217<(x218/x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = 5104289;
	int64_t x223 = -1LL;
	volatile uint32_t x224 = 151224U;

	t53 = ((x221<(x222/x223))/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x225 = 17U;
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = 23U;
	volatile int64_t x228 = INT64_MAX;
	static int64_t t54 = 76785LL;

	t54 = ((x225<(x226/x227))/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	static int16_t x231 = -3130;
	volatile uint32_t t55 = 1291503349U;

	t55 = ((x229<(x230/x231))/x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = 570;
	int16_t x234 = 1;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	int32_t t56 = 0;

	t56 = ((x233<(x234/x235))/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = -1;
	uint16_t x239 = 3851U;
	uint8_t x240 = 10U;
	static volatile int32_t t57 = -2925;

	t57 = ((x237<(x238/x239))/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	static uint16_t x242 = UINT16_MAX;
	int16_t x243 = 3433;
	static int64_t x244 = -26644432090LL;
	volatile int64_t t58 = 0LL;

	t58 = ((x241<(x242/x243))/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x246 = -815241666;
	int64_t x247 = -19127LL;
	int16_t x248 = INT16_MIN;
	volatile int32_t t59 = 46341;

	t59 = ((x245<(x246/x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x249 = 53607805723LL;
	volatile int16_t x252 = INT16_MIN;
	int32_t t60 = 1;

	t60 = ((x249<(x250/x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = 1891475LLU;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	volatile int32_t x256 = -1;
	volatile int32_t t61 = -21;

	t61 = ((x253<(x254/x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x258 = 634LLU;
	static int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t62 = -4;

	t62 = ((x257<(x258/x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = INT64_MIN;
	volatile uint16_t x263 = 2227U;
	volatile int32_t x264 = 1074;
	int32_t t63 = 121;

	t63 = ((x261<(x262/x263))/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = UINT16_MAX;
	int16_t x267 = -1;

	t64 = ((x265<(x266/x267))/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static int32_t t65 = -129;

	t65 = ((x269<(x270/x271))/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -7451035;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MAX;
	static int8_t x276 = INT8_MAX;
	volatile int32_t t66 = 929012;

	t66 = ((x273<(x274/x275))/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = -1;
	uint16_t x278 = 0U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t67 = -29103;

	t67 = ((x277<(x278/x279))/x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = 165980355047LL;
	int8_t x283 = 59;
	int32_t x284 = INT32_MAX;
	volatile int32_t t68 = -25;

	t68 = ((x281<(x282/x283))/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x285 = 489564U;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = 187U;
	int32_t t69 = -390411216;

	t69 = ((x285<(x286/x287))/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = INT32_MAX;
	static int32_t x292 = -1;

	t70 = ((x289<(x290/x291))/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 1006725U;
	int32_t x294 = INT32_MIN;
	static int8_t x296 = -1;
	int32_t t71 = -2098670;

	t71 = ((x293<(x294/x295))/x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x298 = INT32_MIN;
	static uint64_t x299 = 15LLU;
	volatile int32_t t72 = -12683462;

	t72 = ((x297<(x298/x299))/x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -63;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	int32_t t73 = 0;

	t73 = ((x301<(x302/x303))/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = 3886786LL;
	static uint32_t x307 = 3308U;

	t74 = ((x305<(x306/x307))/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MIN;
	uint16_t x310 = 8U;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;

	t75 = ((x309<(x310/x311))/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x313 = 125773548150679LLU;
	int32_t x314 = -2;
	int16_t x315 = -1;

	t76 = ((x313<(x314/x315))/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MAX;
	int32_t x319 = 4;
	int8_t x320 = 45;
	int32_t t77 = -1681;

	t77 = ((x317<(x318/x319))/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = 50;
	int64_t x326 = INT64_MIN;
	uint64_t x328 = 2576502575482694LLU;
	uint64_t t78 = 3668837108929718LLU;

	t78 = ((x325<(x326/x327))/x328);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = -1;
	int8_t x330 = INT8_MAX;
	int64_t x331 = 5699LL;
	volatile int32_t x332 = -1;

	t79 = ((x329<(x330/x331))/x332);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int8_t x342 = 12;
	int64_t x343 = 2068609069816599LL;
	int8_t x344 = 15;
	static int32_t t80 = -408;

	t80 = ((x341<(x342/x343))/x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x345 = INT64_MIN;
	uint16_t x346 = 83U;
	int8_t x347 = 20;
	static int16_t x348 = 1;
	int32_t t81 = -235230515;

	t81 = ((x345<(x346/x347))/x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = 4202U;

	t82 = ((x349<(x350/x351))/x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	uint16_t x354 = 7U;
	static int16_t x356 = INT16_MAX;

	t83 = ((x353<(x354/x355))/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 15U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;

	t84 = ((x357<(x358/x359))/x360);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 18600136LLU;
	int32_t x364 = INT32_MIN;
	volatile int32_t t85 = -321562884;

	t85 = ((x361<(x362/x363))/x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x365 = 354694557U;
	static int32_t x366 = 4094;
	uint64_t x367 = 179226898015580001LLU;
	int8_t x368 = 19;
	int32_t t86 = -1056657931;

	t86 = ((x365<(x366/x367))/x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = 11;
	volatile uint16_t x371 = 20287U;
	volatile int32_t t87 = 29143870;

	t87 = ((x369<(x370/x371))/x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	volatile uint64_t x376 = 10723985829158109LLU;
	uint64_t t88 = 267525367LLU;

	t88 = ((x373<(x374/x375))/x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MAX;
	static uint32_t x379 = 4730U;
	volatile int8_t x380 = 6;
	static int32_t t89 = 42;

	t89 = ((x377<(x378/x379))/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MAX;
	volatile int32_t t90 = -707;

	t90 = ((x381<(x382/x383))/x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x385 = 63;
	int32_t x386 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t91 = 43542784;

	t91 = ((x385<(x386/x387))/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = -1;
	volatile int32_t t92 = -48655292;

	t92 = ((x389<(x390/x391))/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = INT16_MAX;
	int64_t x399 = -1923263180035771LL;

	t93 = ((x397<(x398/x399))/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	static uint64_t x403 = 919902070LLU;
	uint8_t x404 = 2U;
	int32_t t94 = 18846;

	t94 = ((x401<(x402/x403))/x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = 263314759851465LLU;
	int64_t x406 = INT64_MAX;
	uint64_t x407 = 28240LLU;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t95 = 411533939;

	t95 = ((x405<(x406/x407))/x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x409 = 498126LLU;
	int16_t x410 = INT16_MAX;
	int32_t x411 = -100605;
	volatile uint32_t x412 = 1142U;
	static volatile uint32_t t96 = 6489U;

	t96 = ((x409<(x410/x411))/x412);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = -1;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = 40U;
	int16_t x416 = -250;
	static volatile int32_t t97 = 69;

	t97 = ((x413<(x414/x415))/x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = 26U;
	static volatile int64_t x418 = INT64_MIN;
	int64_t x419 = INT64_MIN;
	int8_t x420 = -1;
	volatile int32_t t98 = 2171182;

	t98 = ((x417<(x418/x419))/x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x422 = 400844095LL;
	static int32_t t99 = -217837052;

	t99 = ((x421<(x422/x423))/x424);

	if (t99 != -1) { NG(); } else { ; }
	
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
