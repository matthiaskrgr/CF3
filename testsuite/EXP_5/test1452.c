#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3290920;
static int32_t x5 = INT32_MIN;
int64_t x14 = INT64_MAX;
volatile int32_t x16 = INT32_MIN;
int32_t x18 = -1828233;
uint64_t x21 = 441199LLU;
static volatile int32_t t5 = 150;
int32_t x26 = 8;
int64_t x27 = -106543LL;
int32_t t6 = -43677;
static volatile int32_t x32 = 28360486;
int32_t x33 = -1;
int16_t x38 = INT16_MIN;
int16_t x43 = INT16_MIN;
volatile uint8_t x44 = 26U;
volatile int32_t t10 = 29604;
int8_t x45 = INT8_MIN;
int8_t x46 = INT8_MAX;
int64_t x54 = -1LL;
uint8_t x62 = 3U;
int16_t x64 = INT16_MAX;
static volatile int64_t x66 = 153357LL;
int32_t t16 = 18925;
int16_t x75 = -1;
int8_t x76 = -1;
static volatile int32_t t18 = 2635275;
int64_t x77 = 699427959795137LL;
uint64_t x80 = UINT64_MAX;
int32_t t19 = 24545;
int64_t x82 = -1LL;
volatile int32_t t20 = 63;
int32_t x86 = -1;
int16_t x89 = INT16_MAX;
int32_t t22 = 1;
static volatile int16_t x98 = INT16_MIN;
int64_t x104 = -84480055584491LL;
int16_t x105 = 0;
static volatile int16_t x107 = -201;
uint8_t x110 = 3U;
int32_t x112 = INT32_MAX;
uint64_t x119 = 662406392206929LLU;
int32_t x120 = -1;
int16_t x121 = INT16_MAX;
uint8_t x138 = UINT8_MAX;
int64_t x144 = -1LL;
int64_t x150 = -1LL;
static int32_t x154 = INT32_MIN;
uint64_t x162 = 2651902240382851244LLU;
volatile uint64_t x165 = UINT64_MAX;
uint32_t x169 = 4U;
volatile int16_t x171 = -1;
volatile int64_t x183 = -29101377704493677LL;
static uint16_t x186 = UINT16_MAX;
int32_t x196 = 7;
int8_t x199 = INT8_MAX;
static uint8_t x202 = 47U;
int64_t x205 = INT64_MIN;
volatile uint8_t x207 = 32U;
volatile int32_t t51 = -337;
static int64_t x225 = -1LL;
int32_t x230 = -175236;
int16_t x231 = -1;
int32_t t57 = -4103264;
uint8_t x233 = UINT8_MAX;
int64_t x234 = 9050532LL;
uint16_t x246 = 171U;
volatile int32_t t61 = 1;
uint16_t x249 = 9458U;
uint16_t x252 = 13U;
int16_t x253 = INT16_MIN;
uint64_t x254 = UINT64_MAX;
int32_t t63 = 22;
int16_t x263 = -1;
volatile int32_t t65 = -7005;
uint64_t x265 = UINT64_MAX;
static int16_t x266 = -12;
int16_t x267 = INT16_MIN;
int16_t x271 = INT16_MIN;
volatile int64_t x272 = 2048387LL;
int32_t x275 = -93921;
int8_t x276 = 43;
uint64_t x283 = 299598164230910LLU;
int32_t x288 = INT32_MAX;
static int32_t x289 = INT32_MAX;
static int32_t t72 = 409;
uint8_t x296 = 1U;
volatile int32_t t73 = -3912;
int32_t t74 = -2102;
volatile int8_t x301 = INT8_MIN;
volatile int32_t t75 = -5;
int32_t x305 = INT32_MIN;
int32_t t76 = 36881538;
uint64_t x311 = 1169LLU;
int8_t x315 = INT8_MAX;
int64_t x318 = INT64_MIN;
volatile int8_t x319 = INT8_MIN;
int16_t x320 = INT16_MAX;
volatile int32_t t80 = -2044296;
static uint32_t x326 = 60U;
volatile int16_t x328 = INT16_MAX;
uint64_t x330 = 287559206815894LLU;
int8_t x337 = INT8_MAX;
int32_t t84 = 1800;
uint16_t x343 = 14U;
volatile int32_t t85 = -439667;
int8_t x345 = INT8_MIN;
int16_t x352 = -1549;
int16_t x358 = -1;
volatile int64_t x359 = 2677239713987LL;
volatile int32_t t90 = -6700;
volatile int16_t x369 = INT16_MAX;
int32_t x371 = INT32_MIN;
static int16_t x374 = 7561;
int32_t x379 = INT32_MIN;
static int32_t t94 = 8;
int32_t x383 = 7;
static int16_t x388 = 5027;
uint8_t x391 = 0U;
int64_t x394 = -1LL;
int8_t x399 = 26;


void f0(void) {
	static volatile int16_t x1 = -5;
	int16_t x2 = -185;
	uint64_t x3 = UINT64_MAX;
	static int8_t x4 = 2;

	t0 = (x1<((x2<x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 12U;
	uint32_t x7 = 12706U;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -1785;

	t1 = (x5<((x6<x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -9;
	int16_t x10 = 242;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -7;

	t2 = (x9<((x10<x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13<((x14<x15)==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 23U;
	volatile uint64_t x19 = UINT64_MAX;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 151;

	t4 = (x17<((x18<x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = -1;
	static volatile int32_t x23 = INT32_MAX;
	int64_t x24 = -15LL;

	t5 = (x21<((x22<x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2349U;
	static int32_t x28 = 58;

	t6 = (x25<((x26<x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = -1;
	volatile int32_t t7 = 0;

	t7 = (x29<((x30<x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 68U;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -3103497506258575LL;
	volatile int32_t t8 = -56409747;

	t8 = (x33<((x34<x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x39 = -1;
	volatile uint64_t x40 = 234LLU;
	volatile int32_t t9 = -217;

	t9 = (x37<((x38<x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = -235179392;
	uint32_t x42 = 990840U;

	t10 = (x41<((x42<x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MAX;
	int64_t x48 = 9763LL;
	static volatile int32_t t11 = -31336;

	t11 = (x45<((x46<x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 25374699795LLU;
	uint16_t x50 = 1838U;
	static uint8_t x51 = 0U;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -5898743;

	t12 = (x49<((x50<x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 1;
	int64_t x55 = -92358440LL;
	uint32_t x56 = 1278917649U;
	int32_t t13 = -213;

	t13 = (x53<((x54<x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MAX;
	int32_t x60 = 3535932;
	int32_t t14 = 450;

	t14 = (x57<((x58<x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 15;
	uint64_t x63 = UINT64_MAX;
	int32_t t15 = 308178;

	t15 = (x61<((x62<x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -17;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 94U;

	t16 = (x65<((x66<x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile int64_t x70 = -1LL;
	static int16_t x71 = 0;
	static volatile uint32_t x72 = 968924U;
	static int32_t t17 = 934;

	t17 = (x69<((x70<x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 1255;
	int32_t x74 = -1384;

	t18 = (x73<((x74<x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -1;
	int32_t x79 = INT32_MIN;

	t19 = (x77<((x78<x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -19;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 144959003LLU;

	t20 = (x81<((x82<x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	volatile int8_t x87 = -8;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 768254457;

	t21 = (x85<((x86<x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 0U;
	volatile uint32_t x91 = 16U;
	int64_t x92 = -31LL;

	t22 = (x89<((x90<x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = 2532;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 801653542;

	t23 = (x93<((x94<x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 79U;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = -10;
	int32_t t24 = 27052664;

	t24 = (x97<((x98<x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	int16_t x102 = INT16_MAX;
	uint64_t x103 = 1057LLU;
	volatile int32_t t25 = -301;

	t25 = (x101<((x102<x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x106 = 1594U;
	uint16_t x108 = 1U;
	volatile int32_t t26 = 2607;

	t26 = (x105<((x106<x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	static int8_t x111 = INT8_MIN;
	volatile int32_t t27 = 442231154;

	t27 = (x109<((x110<x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = 5;
	uint64_t x115 = 9LLU;
	static int64_t x116 = -5532LL;
	volatile int32_t t28 = 522;

	t28 = (x113<((x114<x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 6;
	uint32_t x118 = 317U;
	volatile int32_t t29 = -658482;

	t29 = (x117<((x118<x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -7642;
	static int8_t x123 = INT8_MIN;
	uint64_t x124 = 80684274930847274LLU;
	int32_t t30 = 2322260;

	t30 = (x121<((x122<x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -28987178LL;
	volatile int8_t x126 = -1;
	static int64_t x127 = 1LL;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 68273998;

	t31 = (x125<((x126<x127)==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = -218022900;
	volatile int32_t x132 = INT32_MAX;
	int32_t t32 = 0;

	t32 = (x129<((x130<x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 0LLU;
	uint32_t x134 = 984786904U;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -253;

	t33 = (x133<((x134<x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x139 = -1;
	uint32_t x140 = 252524735U;
	int32_t t34 = -5454628;

	t34 = (x137<((x138<x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 10635159U;
	uint64_t x143 = 3286LLU;
	int32_t t35 = 25;

	t35 = (x141<((x142<x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 142142492971324758LLU;
	static uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 161859645;

	t36 = (x145<((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	int8_t x151 = -3;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -3;

	t37 = (x149<((x150<x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 12212U;
	int64_t x155 = INT64_MIN;
	volatile uint16_t x156 = 15487U;
	int32_t t38 = 240883362;

	t38 = (x153<((x154<x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MAX;
	static volatile uint16_t x159 = 2387U;
	volatile int32_t x160 = INT32_MAX;
	int32_t t39 = -2197255;

	t39 = (x157<((x158<x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 1642444977372LLU;
	volatile int32_t x163 = -123334;
	static volatile uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = -150;

	t40 = (x161<((x162<x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = -1;
	int16_t x168 = -647;
	int32_t t41 = 113674668;

	t41 = (x165<((x166<x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 3962780251LL;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -59;

	t42 = (x169<((x170<x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	static volatile uint16_t x175 = 15225U;
	uint8_t x176 = 0U;
	static int32_t t43 = -72978;

	t43 = (x173<((x174<x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;
	int32_t t44 = 25;

	t44 = (x177<((x178<x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 5969U;
	int32_t x182 = INT32_MIN;
	static uint16_t x184 = 14U;
	volatile int32_t t45 = -878;

	t45 = (x181<((x182<x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 961U;
	int64_t x187 = -120110530LL;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = 11;

	t46 = (x185<((x186<x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	static uint64_t x192 = 2067LLU;
	volatile int32_t t47 = -983795;

	t47 = (x189<((x190<x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 49628292083815LLU;
	int32_t t48 = -772781;

	t48 = (x193<((x194<x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 51U;
	int32_t x198 = INT32_MAX;
	uint64_t x200 = 48LLU;
	int32_t t49 = -446650244;

	t49 = (x197<((x198<x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 3;
	uint16_t x203 = 1006U;
	int64_t x204 = INT64_MAX;
	int32_t t50 = -2751330;

	t50 = (x201<((x202<x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -433;
	static int8_t x208 = INT8_MAX;

	t51 = (x205<((x206<x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = 482006934;
	static int16_t x211 = -1;
	int16_t x212 = -1;
	int32_t t52 = 10540186;

	t52 = (x209<((x210<x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -23027162136335222LL;
	uint8_t x214 = 66U;
	volatile int8_t x215 = -44;
	static uint64_t x216 = 23743675067LLU;
	int32_t t53 = -1;

	t53 = (x213<((x214<x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	uint64_t x218 = UINT64_MAX;
	static int32_t x219 = INT32_MIN;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = 87926;

	t54 = (x217<((x218<x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = -1LL;
	static uint32_t x222 = 93047736U;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = -103151;
	volatile int32_t t55 = -3;

	t55 = (x221<((x222<x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 1;

	t56 = (x225<((x226<x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 258854220;
	volatile uint16_t x232 = UINT16_MAX;

	t57 = (x229<((x230<x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = -239048496LL;
	volatile int8_t x236 = 1;
	int32_t t58 = 116272329;

	t58 = (x233<((x234<x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -1;
	volatile int16_t x240 = 416;
	int32_t t59 = 121104752;

	t59 = (x237<((x238<x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 22LLU;
	volatile uint32_t x242 = 360282U;
	uint64_t x243 = 1298061593334852LLU;
	uint16_t x244 = 0U;
	volatile int32_t t60 = 29;

	t60 = (x241<((x242<x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	static uint32_t x247 = 57U;
	int32_t x248 = INT32_MIN;

	t61 = (x245<((x246<x247)==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -19;
	int64_t x251 = 19799662808LL;
	volatile int32_t t62 = 2060;

	t62 = (x249<((x250<x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;

	t63 = (x253<((x254<x255)==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 12405057LL;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 617745858046603358LLU;
	static volatile int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -947830;

	t64 = (x257<((x258<x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 2;
	int16_t x262 = INT16_MIN;
	int32_t x264 = INT32_MAX;

	t65 = (x261<((x262<x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -21107690;

	t66 = (x265<((x266<x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	static int8_t x270 = INT8_MIN;
	volatile int32_t t67 = 47801;

	t67 = (x269<((x270<x271)==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = -498;
	static int32_t t68 = 10174;

	t68 = (x273<((x274<x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -10;
	uint8_t x278 = 61U;
	static uint8_t x279 = 0U;
	int8_t x280 = -1;
	int32_t t69 = 6578624;

	t69 = (x277<((x278<x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -35071485LL;
	static uint8_t x282 = 15U;
	volatile int16_t x284 = -1;
	int32_t t70 = 1669442;

	t70 = (x281<((x282<x283)==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = 1;
	static volatile int32_t x286 = -435;
	static uint64_t x287 = 434799960LLU;
	static volatile int32_t t71 = 0;

	t71 = (x285<((x286<x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 2U;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;

	t72 = (x289<((x290<x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int8_t x294 = INT8_MIN;
	uint32_t x295 = 27606949U;

	t73 = (x293<((x294<x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -655279060;
	volatile int8_t x298 = -39;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 6652198;

	t74 = (x297<((x298<x299)==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x302 = -9;
	int64_t x303 = -7806LL;
	uint32_t x304 = UINT32_MAX;

	t75 = (x301<((x302<x303)==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;

	t76 = (x305<((x306<x307)==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static uint32_t x310 = UINT32_MAX;
	uint64_t x312 = UINT64_MAX;
	int32_t t77 = -31;

	t77 = (x309<((x310<x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -232;
	static int8_t x314 = INT8_MIN;
	int64_t x316 = 2322637893LL;
	int32_t t78 = -5105291;

	t78 = (x313<((x314<x315)==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 3923298824297125LL;
	int32_t t79 = 3657;

	t79 = (x317<((x318<x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	static volatile int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -1;

	t80 = (x321<((x322<x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	static int32_t x327 = 630826085;
	int32_t t81 = 57248;

	t81 = (x325<((x326<x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 6071113385LLU;
	uint8_t x331 = 60U;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t82 = -1;

	t82 = (x329<((x330<x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	static uint64_t x335 = 2846643667745981LLU;
	int16_t x336 = -3;
	int32_t t83 = 607116899;

	t83 = (x333<((x334<x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	static int8_t x339 = 8;
	volatile uint8_t x340 = UINT8_MAX;

	t84 = (x337<((x338<x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = INT64_MIN;
	uint64_t x344 = 101447507478534LLU;

	t85 = (x341<((x342<x343)==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 49U;
	static volatile int8_t x347 = -6;
	int8_t x348 = -1;
	volatile int32_t t86 = 321391245;

	t86 = (x345<((x346<x347)==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	uint8_t x350 = 9U;
	static int64_t x351 = -2188911558321503280LL;
	static int32_t t87 = 93002;

	t87 = (x349<((x350<x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 3919U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 480934832057LLU;
	static volatile int64_t x356 = -1LL;
	volatile int32_t t88 = -14538214;

	t88 = (x353<((x354<x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = 334LL;
	static int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -400;

	t89 = (x357<((x358<x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile uint32_t x362 = 488470295U;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = -1;

	t90 = (x361<((x362<x363)==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 27U;
	int32_t x368 = 268332;
	volatile int32_t t91 = -288503;

	t91 = (x365<((x366<x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = -900229489;

	t92 = (x369<((x370<x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	int64_t x375 = -1LL;
	uint16_t x376 = 1U;
	static volatile int32_t t93 = -111935923;

	t93 = (x373<((x374<x375)==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	int16_t x380 = INT16_MIN;

	t94 = (x377<((x378<x379)==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 972U;
	uint64_t x382 = 4988879127080LLU;
	static int16_t x384 = 1114;
	int32_t t95 = 143;

	t95 = (x381<((x382<x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 6U;
	uint64_t x386 = 232188184656779LLU;
	static int64_t x387 = INT64_MIN;
	int32_t t96 = -13531;

	t96 = (x385<((x386<x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 4;
	uint64_t x390 = UINT64_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t97 = -52052;

	t97 = (x389<((x390<x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x393 = 32LLU;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	static int32_t t98 = -5366;

	t98 = (x393<((x394<x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	volatile int8_t x398 = INT8_MIN;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = -279;

	t99 = (x397<((x398<x399)==x400));

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
