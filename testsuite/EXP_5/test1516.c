#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = 301541700;
static uint8_t x18 = 9U;
volatile uint8_t x21 = 16U;
volatile uint16_t x22 = 75U;
volatile int16_t x23 = INT16_MAX;
uint8_t x24 = UINT8_MAX;
int64_t x26 = INT64_MIN;
int8_t x28 = -1;
int32_t t6 = 2;
volatile int32_t x29 = INT32_MIN;
int32_t x31 = 1377;
uint64_t x36 = UINT64_MAX;
volatile int32_t t9 = 0;
int8_t x42 = INT8_MIN;
int16_t x44 = 6;
int16_t x46 = 10;
int32_t t11 = -8615679;
int64_t x51 = INT64_MIN;
uint64_t x56 = 34067305180906389LLU;
uint64_t x62 = 465LLU;
uint16_t x64 = 3U;
uint32_t x68 = UINT32_MAX;
int8_t x73 = INT8_MIN;
int64_t x74 = INT64_MIN;
int8_t x80 = -1;
static volatile int64_t x84 = 44LL;
int8_t x94 = INT8_MAX;
int32_t x102 = INT32_MIN;
static uint32_t x103 = 8U;
volatile int8_t x108 = -1;
int32_t t26 = 36318;
volatile int32_t x109 = INT32_MIN;
int16_t x110 = -7515;
int16_t x117 = -1;
uint16_t x131 = UINT16_MAX;
volatile int32_t t32 = 5681943;
uint8_t x133 = 19U;
static int16_t x135 = INT16_MIN;
int16_t x143 = INT16_MIN;
volatile int8_t x148 = INT8_MIN;
int32_t t36 = 338;
static int8_t x154 = INT8_MAX;
int8_t x155 = -3;
volatile int16_t x171 = -1;
uint8_t x173 = 25U;
volatile int8_t x174 = INT8_MAX;
uint16_t x175 = 210U;
uint32_t x176 = UINT32_MAX;
static uint64_t x178 = 458LLU;
int16_t x184 = 2245;
int32_t t46 = -37258;
volatile uint32_t x191 = UINT32_MAX;
int64_t x195 = -2022681601245429LL;
uint16_t x197 = 11U;
int64_t x198 = INT64_MAX;
static volatile int32_t x206 = INT32_MIN;
int8_t x219 = -26;
int32_t x226 = INT32_MIN;
volatile int32_t t57 = 568153;
uint16_t x233 = UINT16_MAX;
int8_t x242 = -1;
uint32_t x246 = 1394050U;
static int16_t x249 = INT16_MIN;
int32_t t65 = 7654;
int32_t x265 = 87593;
int64_t x272 = -2657379268817LL;
int64_t x276 = 1LL;
static volatile int32_t t68 = 376246490;
int64_t x278 = INT64_MIN;
int64_t x282 = -58957LL;
uint16_t x286 = 861U;
static int16_t x295 = -1;
static uint64_t x297 = 3LLU;
volatile int16_t x302 = INT16_MIN;
static volatile uint8_t x307 = 1U;
int8_t x310 = 3;
int64_t x317 = 2586611876705LL;
int16_t x322 = INT16_MAX;
static uint64_t x332 = 2LLU;
int16_t x333 = INT16_MIN;
uint64_t x334 = 3885LLU;
uint16_t x343 = 4U;
uint8_t x345 = UINT8_MAX;
volatile int8_t x348 = INT8_MIN;
static uint8_t x350 = 0U;
static int16_t x353 = INT16_MIN;
volatile int16_t x357 = INT16_MIN;
int64_t x358 = INT64_MAX;
int8_t x360 = -11;
volatile int32_t t91 = 43772;
int16_t x371 = -1;
uint16_t x372 = UINT16_MAX;
uint32_t x374 = UINT32_MAX;
volatile int32_t t93 = 3;
volatile uint8_t x379 = 1U;
static int32_t x384 = -29941;
volatile int32_t t95 = 1538;
int64_t x386 = INT64_MIN;
static volatile uint8_t x392 = 1U;
int32_t x398 = 1919;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	int32_t x2 = 667886713;
	int64_t x3 = 146LL;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 428535;

	t0 = (x1==((x2<x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int16_t x6 = INT16_MIN;
	int8_t x7 = -2;
	uint32_t x8 = 5782172U;
	volatile int32_t t1 = -99982423;

	t1 = (x5==((x6<x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = -202088205766LL;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -18686;

	t2 = (x9==((x10<x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile int8_t x14 = -1;
	int64_t x15 = INT64_MAX;
	int8_t x16 = 17;

	t3 = (x13==((x14<x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	static int32_t x19 = 41477491;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -507250;

	t4 = (x17==((x18<x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t t5 = 216;

	t5 = (x21==((x22<x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	volatile int32_t x27 = INT32_MIN;

	t6 = (x25==((x26<x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MIN;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = -44475895;

	t7 = (x29==((x30<x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	volatile uint8_t x34 = 46U;
	static uint64_t x35 = 421055154629753LLU;
	volatile int32_t t8 = 7;

	t8 = (x33==((x34<x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint64_t x38 = 139441245LLU;
	int32_t x39 = INT32_MAX;
	uint8_t x40 = 7U;

	t9 = (x37==((x38<x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 90;
	int8_t x43 = INT8_MAX;
	int32_t t10 = -4015;

	t10 = (x41==((x42<x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 433U;
	uint8_t x47 = 105U;
	int64_t x48 = INT64_MAX;

	t11 = (x45==((x46<x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -422117453LL;
	uint64_t x50 = UINT64_MAX;
	uint8_t x52 = 36U;
	int32_t t12 = -12945147;

	t12 = (x49==((x50<x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 3241645U;
	uint64_t x54 = UINT64_MAX;
	static int16_t x55 = INT16_MIN;
	static volatile int32_t t13 = 125383;

	t13 = (x53==((x54<x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	static uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -366600548;

	t14 = (x57==((x58<x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint32_t x63 = 28013U;
	volatile int32_t t15 = 15801;

	t15 = (x61==((x62<x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 0U;
	int32_t x66 = INT32_MIN;
	int32_t x67 = -5650;
	int32_t t16 = 111;

	t16 = (x65==((x66<x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = 106009622;
	static int64_t x70 = INT64_MAX;
	int64_t x71 = 1LL;
	int8_t x72 = -14;
	volatile int32_t t17 = 0;

	t17 = (x69==((x70<x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x75 = INT32_MIN;
	int64_t x76 = -11791357294LL;
	int32_t t18 = -828;

	t18 = (x73==((x74<x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 6204LLU;
	volatile uint16_t x79 = UINT16_MAX;
	static int32_t t19 = -1;

	t19 = (x77==((x78<x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	static volatile int32_t t20 = 51273;

	t20 = (x81==((x82<x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 202U;
	static int32_t x86 = -264111052;
	static uint8_t x87 = 13U;
	uint32_t x88 = 1171028U;
	int32_t t21 = 11604;

	t21 = (x85==((x86<x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 2070365284165057663LLU;
	static uint32_t x90 = 244600974U;
	uint64_t x91 = 6537402519772LLU;
	int8_t x92 = 11;
	int32_t t22 = 19163;

	t22 = (x89==((x90<x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	volatile int32_t t23 = -7;

	t23 = (x93==((x94<x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static int16_t x98 = INT16_MAX;
	int64_t x99 = -1LL;
	int32_t x100 = -29693;
	int32_t t24 = -181;

	t24 = (x97==((x98<x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int8_t x104 = 0;
	int32_t t25 = -18925354;

	t25 = (x101==((x102<x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 21706104LL;
	static volatile int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MAX;

	t26 = (x105==((x106<x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = INT16_MIN;
	uint64_t x112 = 9038756090958416LLU;
	static int32_t t27 = -47886;

	t27 = (x109==((x110<x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MAX;
	volatile int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	volatile int32_t t28 = 56611;

	t28 = (x113==((x114<x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = UINT16_MAX;
	static int8_t x119 = -39;
	static volatile int16_t x120 = -208;
	int32_t t29 = -479640;

	t29 = (x117==((x118<x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	static volatile int64_t x122 = 1201237732125078442LL;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t30 = -1;

	t30 = (x121==((x122<x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -17891;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	static int16_t x128 = 0;
	int32_t t31 = -69700913;

	t31 = (x125==((x126<x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1031978390672LLU;
	int8_t x130 = 0;
	int32_t x132 = INT32_MIN;

	t32 = (x129==((x130<x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 12;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = -1;

	t33 = (x133==((x134<x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 4U;
	static volatile int64_t x138 = INT64_MAX;
	int16_t x139 = -1;
	static int16_t x140 = -474;
	int32_t t34 = 473587355;

	t34 = (x137==((x138<x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = 124599091;
	uint64_t x144 = 58940LLU;
	int32_t t35 = -1;

	t35 = (x141==((x142<x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	int32_t x146 = -1;
	int64_t x147 = INT64_MIN;

	t36 = (x145==((x146<x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	int64_t x152 = 2920073442278087690LL;
	static int32_t t37 = -3712;

	t37 = (x149==((x150<x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 8521927139084LLU;
	volatile uint32_t x156 = 3U;
	volatile int32_t t38 = -10012;

	t38 = (x153==((x154<x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	int32_t t39 = 2220;

	t39 = (x157==((x158<x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = -4036986;

	t40 = (x161==((x162<x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	static volatile int64_t x166 = -2274147875LL;
	volatile uint16_t x167 = UINT16_MAX;
	uint16_t x168 = UINT16_MAX;
	static int32_t t41 = -1016;

	t41 = (x165==((x166<x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -2;
	static int64_t x170 = -1LL;
	static uint64_t x172 = 30910LLU;
	volatile int32_t t42 = 12;

	t42 = (x169==((x170<x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t t43 = -6850;

	t43 = (x173==((x174<x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -1LL;
	int16_t x179 = 497;
	static int64_t x180 = INT64_MAX;
	volatile int32_t t44 = -62275172;

	t44 = (x177==((x178<x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 1355547LLU;
	volatile int32_t t45 = 14;

	t45 = (x181==((x182<x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -25;
	static uint8_t x186 = 45U;
	static int8_t x187 = INT8_MAX;
	volatile int16_t x188 = INT16_MIN;

	t46 = (x185==((x186<x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = -11;
	int8_t x192 = INT8_MAX;
	static int32_t t47 = -339617;

	t47 = (x189==((x190<x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile uint8_t x194 = UINT8_MAX;
	static int8_t x196 = INT8_MAX;
	int32_t t48 = -3598;

	t48 = (x193==((x194<x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x199 = UINT64_MAX;
	int16_t x200 = -1;
	volatile int32_t t49 = 138117965;

	t49 = (x197==((x198<x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static int32_t x202 = INT32_MAX;
	int8_t x203 = 1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = 3538418;

	t50 = (x201==((x202<x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	volatile uint16_t x208 = 5U;
	volatile int32_t t51 = 12953;

	t51 = (x205==((x206<x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = 80840660;
	int64_t x212 = 3807559LL;
	static volatile int32_t t52 = -1461;

	t52 = (x209==((x210<x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = -105LL;
	int32_t t53 = -657;

	t53 = (x213==((x214<x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 24;
	uint8_t x218 = 4U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -1;

	t54 = (x217==((x218<x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2449252U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 0;

	t55 = (x221==((x222<x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 15203674811LLU;
	volatile int32_t x227 = 27;
	int32_t x228 = -1;
	int32_t t56 = -18;

	t56 = (x225==((x226<x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = 28640LL;
	volatile int64_t x230 = -205826LL;
	static volatile int16_t x231 = -244;
	int8_t x232 = INT8_MIN;

	t57 = (x229==((x230<x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = INT64_MAX;
	static volatile int8_t x235 = INT8_MIN;
	static int16_t x236 = 1;
	volatile int32_t t58 = 127;

	t58 = (x233==((x234<x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	volatile uint8_t x238 = 11U;
	static int8_t x239 = 0;
	static uint32_t x240 = 1302402733U;
	static int32_t t59 = -13524242;

	t59 = (x237==((x238<x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 6U;
	volatile uint64_t x243 = UINT64_MAX;
	uint64_t x244 = 7493163866152744LLU;
	volatile int32_t t60 = -269;

	t60 = (x241==((x242<x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 3U;
	int32_t t61 = 815880436;

	t61 = (x245==((x246<x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -5937;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -40957;

	t62 = (x249==((x250<x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -6348;
	volatile uint16_t x254 = 180U;
	volatile int32_t x255 = 3468918;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -61272297;

	t63 = (x253==((x254<x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 4146U;
	static int32_t x258 = 1131;
	uint8_t x259 = 25U;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = 8;

	t64 = (x257==((x258<x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int64_t x262 = -1LL;
	static int64_t x263 = -1LL;
	uint64_t x264 = UINT64_MAX;

	t65 = (x261==((x262<x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = 20766520428LL;
	int16_t x268 = -1;
	static volatile int32_t t66 = -18389661;

	t66 = (x265==((x266<x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = UINT16_MAX;
	static int32_t x270 = -8632469;
	int32_t x271 = -1;
	int32_t t67 = -48548;

	t67 = (x269==((x270<x271)^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -839;
	int32_t x274 = -69508;
	static volatile int64_t x275 = 131718752LL;

	t68 = (x273==((x274<x275)^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -199LL;
	volatile int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	int32_t t69 = 6816657;

	t69 = (x277==((x278<x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int32_t x283 = -1;
	volatile int64_t x284 = -61406235429806903LL;
	volatile int32_t t70 = -1;

	t70 = (x281==((x282<x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MAX;
	uint16_t x287 = 14U;
	int8_t x288 = 1;
	static int32_t t71 = 84478892;

	t71 = (x285==((x286<x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 0U;
	int32_t x290 = INT32_MIN;
	int32_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t72 = -3004;

	t72 = (x289==((x290<x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -41197612323LL;
	uint32_t x294 = 154298U;
	static int32_t x296 = -127603;
	int32_t t73 = 867;

	t73 = (x293==((x294<x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MAX;
	static int32_t t74 = -3213127;

	t74 = (x297==((x298<x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = -1LL;
	static int32_t t75 = 2032152;

	t75 = (x301==((x302<x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -61225427;

	t76 = (x305==((x306<x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int32_t x311 = -1867877;
	uint32_t x312 = 42131232U;
	static int32_t t77 = 13172;

	t77 = (x309==((x310<x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = 259;
	int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t78 = -2715801;

	t78 = (x313==((x314<x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x318 = 1U;
	static volatile uint64_t x319 = UINT64_MAX;
	static int16_t x320 = -1;
	int32_t t79 = 13;

	t79 = (x317==((x318<x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x323 = UINT16_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 1373428;

	t80 = (x321==((x322<x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MAX;
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = -6973;

	t81 = (x325==((x326<x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	int8_t x330 = -1;
	int8_t x331 = 6;
	int32_t t82 = -209044;

	t82 = (x329==((x330<x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = -3;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = -3968657;

	t83 = (x333==((x334<x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 14409;
	int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	int32_t x340 = 97;
	volatile int32_t t84 = 15;

	t84 = (x337==((x338<x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 6;
	int64_t x342 = -278LL;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 7064420;

	t85 = (x341==((x342<x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = INT16_MIN;
	uint8_t x347 = 0U;
	int32_t t86 = 14815208;

	t86 = (x345==((x346<x347)^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 29;

	t87 = (x349==((x350<x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	int32_t x355 = INT32_MIN;
	volatile int32_t x356 = -1;
	volatile int32_t t88 = -2;

	t88 = (x353==((x354<x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x359 = INT64_MAX;
	volatile int32_t t89 = 108;

	t89 = (x357==((x358<x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 47539912;
	int8_t x362 = INT8_MIN;
	int64_t x363 = -82975006LL;
	uint64_t x364 = UINT64_MAX;
	int32_t t90 = 851437;

	t90 = (x361==((x362<x363)^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x365 = UINT8_MAX;
	static volatile int16_t x366 = 0;
	static uint16_t x367 = 14U;
	int64_t x368 = INT64_MIN;

	t91 = (x365==((x366<x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	int32_t t92 = 149;

	t92 = (x369==((x370<x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	static uint64_t x375 = 42639788152954513LLU;
	uint32_t x376 = UINT32_MAX;

	t93 = (x373==((x374<x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	static uint32_t x378 = UINT32_MAX;
	int32_t x380 = -24;
	int32_t t94 = 3098873;

	t94 = (x377==((x378<x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	int64_t x382 = -1LL;
	static int16_t x383 = -1;

	t95 = (x381==((x382<x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	static int16_t x387 = -1;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -2877;

	t96 = (x385==((x386<x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	uint8_t x390 = 6U;
	volatile int8_t x391 = INT8_MAX;
	static volatile int32_t t97 = -6;

	t97 = (x389==((x390<x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	static volatile uint16_t x394 = 58U;
	int8_t x395 = -1;
	static int8_t x396 = INT8_MAX;
	volatile int32_t t98 = 12;

	t98 = (x393==((x394<x395)^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	static volatile uint16_t x400 = 15498U;
	int32_t t99 = 14757;

	t99 = (x397==((x398<x399)^x400));

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
