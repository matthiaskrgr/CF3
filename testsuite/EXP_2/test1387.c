#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 37U;
int16_t x12 = INT16_MIN;
volatile int64_t x13 = INT64_MAX;
int32_t t3 = 147;
uint32_t x20 = UINT32_MAX;
int16_t x28 = INT16_MAX;
int32_t t7 = -13373953;
int64_t x34 = -1LL;
volatile int64_t x37 = 527453977LL;
int16_t x40 = INT16_MIN;
int64_t x41 = INT64_MIN;
int8_t x45 = -1;
uint32_t x48 = 13069U;
int64_t x52 = -1LL;
uint16_t x56 = 1U;
int32_t x64 = INT32_MIN;
static int16_t x67 = INT16_MAX;
int32_t x68 = INT32_MIN;
int8_t x70 = INT8_MIN;
uint32_t x76 = 22769U;
int16_t x77 = INT16_MIN;
static volatile uint32_t x82 = 1134809U;
static int8_t x83 = INT8_MIN;
int32_t t20 = 718;
static int32_t x85 = -753733771;
volatile int32_t t21 = 452462;
volatile int8_t x94 = INT8_MIN;
int16_t x97 = 9;
volatile int32_t x100 = -32002141;
static volatile int32_t t24 = 810912;
uint64_t x106 = UINT64_MAX;
uint8_t x110 = 0U;
uint8_t x120 = 3U;
int16_t x122 = -1;
static uint8_t x126 = 2U;
static uint16_t x129 = 32354U;
volatile int32_t t33 = 908504;
static uint8_t x137 = 1U;
int16_t x141 = INT16_MAX;
uint16_t x143 = 5U;
volatile int32_t t36 = 6810;
static int64_t x153 = -1LL;
static int64_t x156 = INT64_MIN;
static uint16_t x157 = 1403U;
volatile int16_t x171 = INT16_MIN;
int64_t x174 = -3647634081LL;
volatile uint64_t x175 = 3398618658514822103LLU;
static uint64_t x176 = 15736034LLU;
int32_t x177 = INT32_MIN;
static uint16_t x178 = 2221U;
int32_t t44 = -1;
int32_t x181 = 330781716;
int32_t t45 = -795;
static int8_t x186 = INT8_MIN;
int64_t x192 = INT64_MIN;
uint8_t x194 = UINT8_MAX;
int16_t x196 = INT16_MAX;
uint64_t x201 = UINT64_MAX;
static volatile uint8_t x206 = UINT8_MAX;
static volatile int32_t x207 = INT32_MAX;
volatile int16_t x216 = 0;
volatile int32_t t53 = 0;
int32_t x220 = 45;
int64_t x222 = 2LL;
int32_t x225 = INT32_MIN;
static int32_t x226 = INT32_MIN;
static volatile int32_t t56 = -18141630;
uint8_t x231 = 1U;
volatile int32_t t57 = 28436074;
volatile int32_t t58 = 854;
int64_t x242 = -38557729209525LL;
volatile int32_t t61 = -9;
int8_t x251 = INT8_MIN;
int64_t x254 = -1LL;
int32_t t63 = 272380;
volatile int8_t x258 = INT8_MAX;
int32_t t64 = 359202;
volatile int32_t x266 = -1;
int64_t x269 = -1LL;
int16_t x273 = INT16_MAX;
int16_t x277 = INT16_MAX;
uint16_t x287 = UINT16_MAX;
int16_t x290 = INT16_MAX;
static volatile int16_t x291 = INT16_MIN;
static int32_t t72 = 405118;
volatile uint8_t x293 = UINT8_MAX;
volatile int32_t x297 = 1186674;
int8_t x298 = 22;
int8_t x300 = -1;
static int8_t x304 = INT8_MAX;
int64_t x305 = 212878423765583LL;
uint32_t x306 = UINT32_MAX;
int8_t x308 = INT8_MIN;
static volatile uint16_t x313 = UINT16_MAX;
int8_t x315 = INT8_MIN;
int16_t x319 = -1;
static uint8_t x326 = UINT8_MAX;
static volatile int32_t x327 = 53;
int32_t x335 = INT32_MIN;
int32_t x340 = INT32_MIN;
int64_t x342 = INT64_MIN;
uint32_t x344 = UINT32_MAX;
uint8_t x346 = 19U;
int32_t x353 = INT32_MAX;
int64_t x356 = -1LL;
uint16_t x357 = UINT16_MAX;
int32_t x358 = -1;
static int8_t x361 = INT8_MIN;
int64_t x362 = 17160412329039LL;
volatile int64_t x374 = INT64_MIN;
volatile int32_t t93 = -113723051;
uint32_t x388 = 1U;
volatile uint32_t x390 = 383324853U;
volatile int64_t x395 = -1LL;
int32_t x398 = INT32_MIN;
static int8_t x399 = INT8_MAX;


void f0(void) {
	int16_t x2 = 16067;
	int64_t x3 = -2472LL;
	int16_t x4 = -1;
	int32_t t0 = 1;

	t0 = ((x1*(x2<x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 6U;
	int16_t x6 = INT16_MAX;
	int32_t x7 = -1;
	uint32_t x8 = 20186008U;
	int32_t t1 = 115;

	t1 = ((x5*(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MAX;
	volatile int32_t t2 = -37233;

	t2 = ((x9*(x10<x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 66U;
	volatile uint64_t x15 = 5061LLU;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13*(x14<x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	int64_t x19 = 61769144855429LL;
	static int32_t t4 = 261;

	t4 = ((x17*(x18<x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -14908;

	t5 = ((x21*(x22<x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint32_t x26 = UINT32_MAX;
	uint16_t x27 = UINT16_MAX;
	int32_t t6 = 738;

	t6 = ((x25*(x26<x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MAX;
	int32_t x31 = -2583;
	volatile int64_t x32 = INT64_MAX;

	t7 = ((x29*(x30<x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 48U;
	int16_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -902;

	t8 = ((x33*(x34<x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int8_t x39 = 6;
	volatile int32_t t9 = 7;

	t9 = ((x37*(x38<x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = 571;
	int8_t x43 = -2;
	volatile int16_t x44 = 338;
	int32_t t10 = 43;

	t10 = ((x41*(x42<x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = 63U;
	uint8_t x47 = 0U;
	int32_t t11 = 1;

	t11 = ((x45*(x46<x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 1U;
	static int32_t x50 = -70;
	int16_t x51 = -1;
	static volatile int32_t t12 = -291783;

	t12 = ((x49*(x50<x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -2;
	uint64_t x54 = UINT64_MAX;
	volatile uint64_t x55 = 243318506192867738LLU;
	int32_t t13 = 299;

	t13 = ((x53*(x54<x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 796U;
	volatile int32_t x58 = 13;
	static uint16_t x59 = 13887U;
	int32_t x60 = 2;
	int32_t t14 = -2408;

	t14 = ((x57*(x58<x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int32_t t15 = -63593;

	t15 = ((x61*(x62<x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -82;
	static int16_t x66 = INT16_MIN;
	volatile int32_t t16 = 8318290;

	t16 = ((x65*(x66<x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = 2987;
	volatile uint32_t x71 = 8264U;
	static uint32_t x72 = 235561U;
	int32_t t17 = -195;

	t17 = ((x69*(x70<x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 12835128LLU;
	int32_t x74 = INT32_MIN;
	uint8_t x75 = 0U;
	int32_t t18 = -446;

	t18 = ((x73*(x74<x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 1017;

	t19 = ((x77*(x78<x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int64_t x84 = INT64_MIN;

	t20 = ((x81*(x82<x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x86 = 120;
	volatile uint16_t x87 = 4301U;
	uint8_t x88 = UINT8_MAX;

	t21 = ((x85*(x86<x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 487U;
	int8_t x90 = -1;
	static int32_t x91 = 0;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = -91;

	t22 = ((x89*(x90<x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 89490394255806897LL;
	int64_t x95 = -2LL;
	static int32_t x96 = -250;
	volatile int32_t t23 = -284058;

	t23 = ((x93*(x94<x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 27U;

	t24 = ((x97*(x98<x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = -41;
	volatile int8_t x103 = INT8_MIN;
	int8_t x104 = -1;
	int32_t t25 = -492;

	t25 = ((x101*(x102<x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 3U;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = 179;

	t26 = ((x105*(x106<x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 3148458U;
	static int32_t x111 = INT32_MAX;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = -146088082;

	t27 = ((x109*(x110<x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = -73;
	static volatile int16_t x115 = -1;
	static int16_t x116 = INT16_MAX;
	int32_t t28 = -11562;

	t28 = ((x113*(x114<x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = INT64_MIN;
	uint8_t x119 = 58U;
	int32_t t29 = 1022316297;

	t29 = ((x117*(x118<x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	int16_t x123 = 12;
	volatile uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = 64979;

	t30 = ((x121*(x122<x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	static volatile uint32_t x128 = 106829U;
	volatile int32_t t31 = 16711498;

	t31 = ((x125*(x126<x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = 48785194;
	uint64_t x131 = 1394450LLU;
	uint64_t x132 = 202194586832LLU;
	int32_t t32 = -3834;

	t32 = ((x129*(x130<x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 3LLU;
	uint16_t x134 = UINT16_MAX;
	static int16_t x135 = 2;
	uint32_t x136 = 94613142U;

	t33 = ((x133*(x134<x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 55;

	t34 = ((x137*(x138<x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x142 = 15948U;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -839;

	t35 = ((x141*(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	volatile uint64_t x146 = 2592971493487773LLU;
	static volatile int32_t x147 = 1106458;
	int32_t x148 = -296;

	t36 = ((x145*(x146<x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MIN;
	static int16_t x150 = -3;
	int32_t x151 = 10;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 1091;

	t37 = ((x149*(x150<x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	int8_t x155 = -1;
	volatile int32_t t38 = 0;

	t38 = ((x153*(x154<x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	uint16_t x160 = 3544U;
	int32_t t39 = -708;

	t39 = ((x157*(x158<x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 4773302439044372LLU;
	int8_t x162 = INT8_MAX;
	uint16_t x163 = UINT16_MAX;
	volatile int8_t x164 = -1;
	volatile int32_t t40 = 723734004;

	t40 = ((x161*(x162<x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = 2787;

	t41 = ((x165*(x166<x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 9157LLU;
	uint32_t x170 = 3819U;
	static int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 1743;

	t42 = ((x169*(x170<x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = 6208517048541LL;
	static volatile int32_t t43 = 21;

	t43 = ((x173*(x174<x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x179 = INT32_MIN;
	static volatile int64_t x180 = INT64_MIN;

	t44 = ((x177*(x178<x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 223990U;
	int8_t x183 = 4;
	uint32_t x184 = 2186U;

	t45 = ((x181*(x182<x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 19U;
	static int64_t x187 = INT64_MAX;
	volatile uint16_t x188 = 14U;
	int32_t t46 = 33558;

	t46 = ((x185*(x186<x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	static int8_t x190 = -1;
	volatile int32_t x191 = -1;
	volatile int32_t t47 = 8;

	t47 = ((x189*(x190<x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 47U;
	int32_t x195 = -28;
	volatile int32_t t48 = 47149;

	t48 = ((x193*(x194<x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 11494415784565996LLU;
	int16_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 245183;

	t49 = ((x197*(x198<x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 3U;
	int32_t t50 = -215047529;

	t50 = ((x201*(x202<x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = 3135;
	static int8_t x208 = INT8_MAX;
	static volatile int32_t t51 = -29185055;

	t51 = ((x205*(x206<x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 58U;
	int64_t x210 = 472674LL;
	int64_t x211 = -1LL;
	static volatile uint8_t x212 = 9U;
	volatile int32_t t52 = 8802;

	t52 = ((x209*(x210<x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 128114419LLU;
	uint32_t x215 = 609278U;

	t53 = ((x213*(x214<x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	static int32_t x218 = -1;
	volatile int8_t x219 = -1;
	int32_t t54 = 987;

	t54 = ((x217*(x218<x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;
	int32_t t55 = -249776420;

	t55 = ((x221*(x222<x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = INT8_MIN;
	static int8_t x228 = -1;

	t56 = ((x225*(x226<x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = INT8_MIN;
	uint64_t x232 = 5LLU;

	t57 = ((x229*(x230<x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -1LL;
	uint8_t x234 = 10U;
	volatile int64_t x235 = -2489502LL;
	int8_t x236 = INT8_MIN;

	t58 = ((x233*(x234<x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	int64_t x238 = INT64_MAX;
	int8_t x239 = -1;
	static uint32_t x240 = 13U;
	int32_t t59 = -13;

	t59 = ((x237*(x238<x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int32_t x243 = INT32_MIN;
	volatile int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = 948885600;

	t60 = ((x241*(x242<x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -121;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 25102971945LLU;
	int64_t x248 = 498LL;

	t61 = ((x245*(x246<x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	static int32_t x250 = 0;
	int16_t x252 = INT16_MIN;
	int32_t t62 = -41733585;

	t62 = ((x249*(x250<x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static uint16_t x255 = 5U;
	int32_t x256 = -58664470;

	t63 = ((x253*(x254<x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 2U;
	uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 8600926U;

	t64 = ((x257*(x258<x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 7U;
	int64_t x262 = -1800000015377LL;
	int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = 36LLU;
	int32_t t65 = 2018;

	t65 = ((x261*(x262<x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int8_t x268 = 34;
	int32_t t66 = -256;

	t66 = ((x265*(x266<x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 7U;
	int32_t x271 = -1;
	static volatile uint32_t x272 = 64U;
	int32_t t67 = 261085;

	t67 = ((x269*(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	int8_t x275 = 8;
	volatile uint64_t x276 = 943638659490643LLU;
	int32_t t68 = -3239571;

	t68 = ((x273*(x274<x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MAX;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 1;

	t69 = ((x277*(x278<x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	int32_t x282 = INT32_MIN;
	int16_t x283 = 2;
	int8_t x284 = -1;
	volatile int32_t t70 = 14693;

	t70 = ((x281*(x282<x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = -72886677;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -4364;

	t71 = ((x285*(x286<x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	volatile uint32_t x292 = UINT32_MAX;

	t72 = ((x289*(x290<x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = INT64_MAX;
	static int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 6;

	t73 = ((x293*(x294<x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x299 = 87U;
	int32_t t74 = -10;

	t74 = ((x297*(x298<x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = -756;
	uint8_t x303 = 4U;
	volatile int32_t t75 = 255;

	t75 = ((x301*(x302<x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x307 = INT64_MIN;
	int32_t t76 = 37389425;

	t76 = ((x305*(x306<x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static int64_t x310 = INT64_MAX;
	int32_t x311 = -1;
	static volatile int32_t x312 = INT32_MAX;
	int32_t t77 = -20289;

	t77 = ((x309*(x310<x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x314 = UINT16_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t78 = -988;

	t78 = ((x313*(x314<x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	uint16_t x320 = 197U;
	int32_t t79 = 1;

	t79 = ((x317*(x318<x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	volatile int64_t x322 = INT64_MIN;
	uint8_t x323 = 1U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -390788253;

	t80 = ((x321*(x322<x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 81LLU;
	int8_t x328 = -21;
	int32_t t81 = 110;

	t81 = ((x325*(x326<x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	static volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 18U;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = 590399;

	t82 = ((x329*(x330<x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 1LL;
	uint64_t x334 = 60174585953783LLU;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = 6;

	t83 = ((x333*(x334<x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = UINT8_MAX;
	volatile uint32_t x339 = UINT32_MAX;
	int32_t t84 = 632878811;

	t84 = ((x337*(x338<x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	int32_t t85 = 228046;

	t85 = ((x341*(x342<x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -48;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -183085263;
	int32_t t86 = 11864;

	t86 = ((x345*(x346<x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MAX;
	volatile uint64_t x351 = 2LLU;
	static volatile uint16_t x352 = 45U;
	volatile int32_t t87 = 573196;

	t87 = ((x349*(x350<x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = INT8_MIN;
	volatile uint8_t x355 = 5U;
	volatile int32_t t88 = -627806;

	t88 = ((x353*(x354<x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = INT16_MIN;
	volatile int32_t x360 = INT32_MAX;
	int32_t t89 = 3825;

	t89 = ((x357*(x358<x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x363 = 974;
	int16_t x364 = 1;
	int32_t t90 = 10846;

	t90 = ((x361*(x362<x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 565670169247893241LLU;
	int8_t x366 = 0;
	int32_t x367 = 3382302;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t91 = -6;

	t91 = ((x365*(x366<x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	uint32_t x370 = 40U;
	int8_t x371 = -1;
	static int8_t x372 = INT8_MAX;
	int32_t t92 = -8294406;

	t92 = ((x369*(x370<x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	static int32_t x375 = -19938599;
	static volatile uint32_t x376 = 15U;

	t93 = ((x373*(x374<x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 5;
	static uint16_t x378 = UINT16_MAX;
	int32_t x379 = 7;
	volatile int16_t x380 = -1;
	volatile int32_t t94 = 13674;

	t94 = ((x377*(x378<x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -1;
	int32_t t95 = 30363;

	t95 = ((x381*(x382<x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 15U;
	volatile int16_t x386 = 126;
	int8_t x387 = INT8_MIN;
	static volatile int32_t t96 = -291942325;

	t96 = ((x385*(x386<x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MAX;
	int32_t t97 = -812442154;

	t97 = ((x389*(x390<x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	uint64_t x394 = UINT64_MAX;
	int16_t x396 = -7;
	volatile int32_t t98 = 697116764;

	t98 = ((x393*(x394<x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	static int32_t x400 = -1;
	volatile int32_t t99 = 198;

	t99 = ((x397*(x398<x399))<x400);

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
