#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = 900;
int32_t t1 = 1;
static int8_t x9 = INT8_MIN;
int8_t x11 = INT8_MAX;
static int16_t x12 = -1728;
volatile int32_t t3 = 1016;
int32_t x25 = INT32_MIN;
uint16_t x28 = 0U;
static volatile int32_t t6 = 35493936;
static uint8_t x34 = UINT8_MAX;
static volatile int32_t t8 = -416354;
volatile int64_t x39 = 7439738LL;
uint16_t x41 = 7268U;
uint8_t x50 = 126U;
int32_t t12 = -346645409;
static uint32_t x61 = UINT32_MAX;
int32_t t21 = 8065;
int16_t x96 = INT16_MAX;
int64_t x98 = INT64_MIN;
int16_t x100 = INT16_MIN;
volatile int32_t x105 = INT32_MIN;
volatile int64_t x107 = -1LL;
uint64_t x109 = 1537403978577LLU;
volatile int32_t x114 = -1;
volatile int64_t x115 = -4LL;
int32_t x116 = -1;
int64_t x117 = -228LL;
uint64_t x119 = UINT64_MAX;
static int64_t x120 = INT64_MIN;
uint16_t x125 = 0U;
uint64_t x127 = 60LLU;
uint32_t x141 = 301448537U;
int16_t x150 = -1;
volatile int32_t t37 = -167;
static uint64_t x164 = 5517087417844LLU;
volatile int32_t t40 = -375;
int64_t x168 = INT64_MIN;
static int16_t x170 = -2;
static uint64_t x171 = UINT64_MAX;
int32_t t42 = -22826018;
int32_t t44 = -796;
uint32_t x202 = UINT32_MAX;
int64_t x203 = INT64_MIN;
int8_t x204 = 1;
volatile uint32_t x205 = 0U;
static int16_t x206 = INT16_MIN;
volatile int16_t x210 = -8754;
static volatile int64_t x211 = INT64_MIN;
int32_t t51 = -363;
uint8_t x227 = 29U;
int8_t x231 = INT8_MIN;
int32_t t56 = 3011;
volatile uint32_t x238 = 5245342U;
static uint16_t x240 = 15U;
int32_t x242 = INT32_MIN;
uint64_t x243 = 7527387399911655593LLU;
static int64_t x245 = INT64_MAX;
int16_t x246 = INT16_MIN;
volatile int8_t x252 = INT8_MAX;
uint32_t x254 = 30104851U;
volatile int32_t x260 = -4625894;
static int8_t x262 = INT8_MIN;
static uint8_t x271 = UINT8_MAX;
volatile int8_t x280 = INT8_MIN;
int32_t t68 = -7031650;
int32_t x287 = INT32_MAX;
uint32_t x288 = UINT32_MAX;
int32_t x289 = -1;
uint16_t x293 = 253U;
static int32_t x294 = INT32_MAX;
volatile int32_t x296 = INT32_MIN;
static int8_t x299 = INT8_MIN;
int32_t t75 = 24;
int32_t x311 = INT32_MIN;
int8_t x314 = -1;
volatile int8_t x320 = INT8_MIN;
int32_t t78 = -6629;
uint16_t x326 = UINT16_MAX;
volatile uint8_t x329 = UINT8_MAX;
uint8_t x333 = 11U;
int64_t x336 = INT64_MIN;
int16_t x342 = -48;
uint8_t x346 = 59U;
volatile uint8_t x347 = 6U;
volatile int16_t x351 = INT16_MIN;
volatile int32_t t88 = 549;
int16_t x366 = INT16_MAX;
static volatile int8_t x368 = INT8_MAX;
int16_t x371 = 0;
int16_t x374 = INT16_MAX;
volatile int32_t t92 = 399;
uint32_t x378 = UINT32_MAX;
static int32_t x383 = -1;
int16_t x393 = 21;
int8_t x395 = 1;
int32_t t98 = -2;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	int8_t x3 = INT8_MAX;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = 79643335;

	t0 = ((x1%(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 58408832673085688LLU;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MIN;

	t1 = ((x5%(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	volatile int32_t t2 = 1458;

	t2 = ((x9%(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	int8_t x16 = INT8_MAX;

	t3 = ((x13%(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 534;
	volatile uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 1U;
	static volatile int32_t t4 = 3540855;

	t4 = ((x17%(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 106U;
	int64_t x22 = -27090883739575LL;
	int64_t x23 = INT64_MIN;
	static int64_t x24 = -1LL;
	int32_t t5 = -127531293;

	t5 = ((x21%(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;

	t6 = ((x25%(x26|x27))==x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = -1902792LL;
	int64_t x31 = INT64_MIN;
	static uint8_t x32 = UINT8_MAX;
	int32_t t7 = 785970841;

	t7 = ((x29%(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 886U;
	int64_t x35 = -1LL;
	uint32_t x36 = 66778U;

	t8 = ((x33%(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 6U;
	int16_t x38 = -1;
	int16_t x40 = 11821;
	volatile int32_t t9 = -363955;

	t9 = ((x37%(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	uint32_t x43 = 2711521U;
	static volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -12533;

	t10 = ((x41%(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int8_t x46 = 12;
	uint16_t x47 = 1U;
	uint16_t x48 = 117U;
	volatile int32_t t11 = 28;

	t11 = ((x45%(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static uint64_t x51 = 977872509362894LLU;
	int16_t x52 = -25;

	t12 = ((x49%(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1647U;
	volatile int16_t x54 = -507;
	int16_t x55 = INT16_MAX;
	int64_t x56 = -939099881LL;
	static volatile int32_t t13 = 1876;

	t13 = ((x53%(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	uint32_t x58 = 235688325U;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 19U;
	int32_t t14 = -207;

	t14 = ((x57%(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	volatile uint8_t x64 = 0U;
	int32_t t15 = 1212;

	t15 = ((x61%(x62|x63))==x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1403;
	int8_t x67 = -11;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = -982353;

	t16 = ((x65%(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	int8_t x70 = 0;
	int16_t x71 = 369;
	static uint32_t x72 = 213191895U;
	volatile int32_t t17 = 12;

	t17 = ((x69%(x70|x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 76640009037045138LL;
	int8_t x74 = 0;
	int16_t x75 = -1809;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 1050107708;

	t18 = ((x73%(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int32_t x78 = INT32_MIN;
	static uint64_t x79 = 1LLU;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -416316852;

	t19 = ((x77%(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -1818779;

	t20 = ((x81%(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 560162U;
	volatile int64_t x86 = INT64_MIN;
	static uint8_t x87 = UINT8_MAX;
	uint64_t x88 = UINT64_MAX;

	t21 = ((x85%(x86|x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 0U;
	static volatile int16_t x90 = -8964;
	volatile uint8_t x91 = 0U;
	volatile int8_t x92 = -9;
	volatile int32_t t22 = 0;

	t22 = ((x89%(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MAX;
	static int32_t x94 = INT32_MIN;
	int32_t x95 = 28;
	static int32_t t23 = -793230;

	t23 = ((x93%(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int16_t x99 = INT16_MIN;
	int32_t t24 = 209;

	t24 = ((x97%(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 62204846015027244LL;
	int16_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int16_t x104 = 1;
	int32_t t25 = -687;

	t25 = ((x101%(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x106 = 3U;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = 12;

	t26 = ((x105%(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 38U;
	int64_t x111 = 23778457470568357LL;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 5990140;

	t27 = ((x109%(x110|x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t t28 = 52;

	t28 = ((x113%(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	int32_t t29 = -130621;

	t29 = ((x117%(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MAX;
	static uint64_t x123 = 27603345660295736LLU;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -467645;

	t30 = ((x121%(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	int8_t x128 = -1;
	static volatile int32_t t31 = 200077;

	t31 = ((x125%(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MAX;
	volatile uint8_t x130 = 1U;
	int32_t x131 = 0;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 1578364;

	t32 = ((x129%(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int32_t x135 = 52279336;
	volatile int64_t x136 = INT64_MAX;
	int32_t t33 = -274;

	t33 = ((x133%(x134|x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = -1;
	int8_t x139 = -1;
	uint16_t x140 = 27U;
	volatile int32_t t34 = 27;

	t34 = ((x137%(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -2;
	int16_t x143 = 463;
	int64_t x144 = -54997LL;
	int32_t t35 = 2384402;

	t35 = ((x141%(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 3538022U;
	static int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = 19233;

	t36 = ((x145%(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -7123;
	int16_t x151 = -15624;
	int32_t x152 = 6;

	t37 = ((x149%(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static int64_t x154 = -791557580703631LL;
	static int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MAX;
	int32_t t38 = 10275974;

	t38 = ((x153%(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 12809062936859LLU;
	uint16_t x158 = 2318U;
	volatile int16_t x159 = INT16_MAX;
	static uint16_t x160 = 2219U;
	volatile int32_t t39 = 732665599;

	t39 = ((x157%(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 255U;
	volatile int8_t x162 = -1;
	int8_t x163 = INT8_MAX;

	t40 = ((x161%(x162|x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	static uint8_t x166 = 29U;
	static int16_t x167 = INT16_MIN;
	int32_t t41 = 158;

	t41 = ((x165%(x166|x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 14U;
	volatile uint16_t x172 = UINT16_MAX;

	t42 = ((x169%(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 13U;
	uint32_t x174 = 21478432U;
	volatile int16_t x175 = INT16_MAX;
	volatile uint32_t x176 = 15919604U;
	int32_t t43 = -53713043;

	t43 = ((x173%(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	static int8_t x182 = -1;
	int32_t x183 = 11;
	int8_t x184 = INT8_MIN;

	t44 = ((x181%(x182|x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = UINT32_MAX;
	static volatile uint16_t x186 = 37U;
	uint32_t x187 = 505076957U;
	int64_t x188 = -1LL;
	int32_t t45 = -428168880;

	t45 = ((x185%(x186|x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = 7367LL;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	int32_t x192 = -8291607;
	volatile int32_t t46 = 19883;

	t46 = ((x189%(x190|x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 188U;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 76281425LLU;
	static int64_t x196 = -1LL;
	int32_t t47 = -16;

	t47 = ((x193%(x194|x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 10816U;
	static int8_t x198 = 0;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = UINT32_MAX;
	int32_t t48 = 10;

	t48 = ((x197%(x198|x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MAX;
	volatile int32_t t49 = -8001;

	t49 = ((x201%(x202|x203))==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = -2397363;

	t50 = ((x205%(x206|x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	int8_t x212 = INT8_MIN;

	t51 = ((x209%(x210|x211))==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	int32_t x214 = -1;
	int16_t x215 = INT16_MAX;
	volatile uint8_t x216 = 13U;
	int32_t t52 = -232;

	t52 = ((x213%(x214|x215))==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x217 = INT32_MAX;
	int8_t x218 = INT8_MIN;
	int8_t x219 = -1;
	int64_t x220 = -122636790444LL;
	static int32_t t53 = -1844454;

	t53 = ((x217%(x218|x219))==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = -30;
	uint32_t x223 = 324766U;
	int8_t x224 = -1;
	volatile int32_t t54 = 103706207;

	t54 = ((x221%(x222|x223))==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	static int16_t x226 = -1;
	volatile uint64_t x228 = 1858965986LLU;
	int32_t t55 = 602620;

	t55 = ((x225%(x226|x227))==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	volatile uint8_t x230 = 11U;
	uint64_t x232 = UINT64_MAX;

	t56 = ((x229%(x230|x231))==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t57 = 15;

	t57 = ((x233%(x234|x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	int32_t x239 = INT32_MIN;
	volatile int32_t t58 = -104;

	t58 = ((x237%(x238|x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -1;
	static uint32_t x244 = 128911569U;
	volatile int32_t t59 = 678602;

	t59 = ((x241%(x242|x243))==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x247 = -1LL;
	uint32_t x248 = 265U;
	int32_t t60 = 2890884;

	t60 = ((x245%(x246|x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = 0;
	uint16_t x250 = 174U;
	static int16_t x251 = INT16_MAX;
	volatile int32_t t61 = -2047;

	t61 = ((x249%(x250|x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = -1;
	volatile int8_t x255 = 0;
	int64_t x256 = -84690907899771LL;
	volatile int32_t t62 = 2;

	t62 = ((x253%(x254|x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = -1;
	volatile int32_t x258 = INT32_MIN;
	int16_t x259 = -417;
	volatile int32_t t63 = -2125;

	t63 = ((x257%(x258|x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	volatile uint32_t x263 = 78351U;
	volatile int8_t x264 = INT8_MIN;
	volatile int32_t t64 = -1;

	t64 = ((x261%(x262|x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	static uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	int64_t x268 = -56456294965LL;
	int32_t t65 = 492014873;

	t65 = ((x265%(x266|x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x269 = 110175402;
	int64_t x270 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t66 = 404766;

	t66 = ((x269%(x270|x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 1743072LL;
	static volatile uint8_t x274 = 22U;
	static volatile int16_t x275 = INT16_MIN;
	volatile int32_t x276 = 251143;
	static volatile int32_t t67 = -19;

	t67 = ((x273%(x274|x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MAX;
	static int64_t x278 = 43834721079994LL;
	static int16_t x279 = 12465;

	t68 = ((x277%(x278|x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = -1;
	volatile int32_t x283 = INT32_MIN;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t69 = -14209;

	t69 = ((x281%(x282|x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	volatile int32_t t70 = -593972779;

	t70 = ((x285%(x286|x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = -6;
	uint16_t x291 = 20U;
	int64_t x292 = 33815LL;
	static int32_t t71 = 174766;

	t71 = ((x289%(x290|x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x295 = 123U;
	volatile int32_t t72 = 52284;

	t72 = ((x293%(x294|x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = -3583;
	int64_t x300 = 32LL;
	int32_t t73 = 8237758;

	t73 = ((x297%(x298|x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t74 = 734026;

	t74 = ((x301%(x302|x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	volatile uint64_t x306 = 638930432LLU;
	volatile int16_t x307 = INT16_MAX;
	uint64_t x308 = 1228553647030LLU;

	t75 = ((x305%(x306|x307))==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 3U;
	int32_t x312 = INT32_MAX;
	volatile int32_t t76 = 0;

	t76 = ((x309%(x310|x311))==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x313 = INT16_MIN;
	static int16_t x315 = -1;
	int8_t x316 = -1;
	volatile int32_t t77 = -277199439;

	t77 = ((x313%(x314|x315))==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;

	t78 = ((x317%(x318|x319))==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	volatile int8_t x324 = 0;
	volatile int32_t t79 = -1;

	t79 = ((x321%(x322|x323))==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MAX;
	static int32_t x327 = INT32_MIN;
	int32_t x328 = -1;
	volatile int32_t t80 = 5158698;

	t80 = ((x325%(x326|x327))==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t81 = -1;

	t81 = ((x329%(x330|x331))==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x334 = 6;
	int64_t x335 = INT64_MIN;
	static volatile int32_t t82 = -3728281;

	t82 = ((x333%(x334|x335))==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x337 = -1;
	int16_t x338 = -1;
	volatile int64_t x339 = -30106943489LL;
	volatile int16_t x340 = INT16_MIN;
	int32_t t83 = 121287;

	t83 = ((x337%(x338|x339))==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x341 = 4U;
	uint8_t x343 = 1U;
	static volatile int8_t x344 = INT8_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x341%(x342|x343))==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	volatile int64_t x348 = -1LL;
	volatile int32_t t85 = 14;

	t85 = ((x345%(x346|x347))==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 23561U;
	int16_t x352 = INT16_MIN;
	int32_t t86 = -2025319;

	t86 = ((x349%(x350|x351))==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	static int32_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	int32_t t87 = -5443715;

	t87 = ((x353%(x354|x355))==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MIN;
	static uint32_t x359 = UINT32_MAX;
	static uint32_t x360 = 17563U;

	t88 = ((x357%(x358|x359))==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 110U;
	uint8_t x362 = 8U;
	int16_t x363 = INT16_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t89 = 3805462;

	t89 = ((x361%(x362|x363))==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = 835651134;
	uint32_t x367 = 2638461U;
	volatile int32_t t90 = 1100;

	t90 = ((x365%(x366|x367))==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	int16_t x372 = 1;
	volatile int32_t t91 = -120;

	t91 = ((x369%(x370|x371))==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = -1;
	int64_t x375 = -3681LL;
	uint32_t x376 = 4U;

	t92 = ((x373%(x374|x375))==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x379 = 20352628501LLU;
	int16_t x380 = 8611;
	static int32_t t93 = -62007;

	t93 = ((x377%(x378|x379))==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = 30;
	uint32_t x382 = 2768U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t94 = -102947;

	t94 = ((x381%(x382|x383))==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = 252U;
	int8_t x386 = 29;
	int64_t x387 = INT64_MIN;
	int8_t x388 = -1;
	volatile int32_t t95 = -115;

	t95 = ((x385%(x386|x387))==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 2U;
	uint16_t x390 = 4U;
	int32_t x391 = 14850865;
	int64_t x392 = 33886259324374816LL;
	volatile int32_t t96 = 983591;

	t96 = ((x389%(x390|x391))==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x394 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t97 = -1342;

	t97 = ((x393%(x394|x395))==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x397 = INT32_MAX;
	uint8_t x398 = 0U;
	int32_t x399 = INT32_MIN;
	int64_t x400 = -5538LL;

	t98 = ((x397%(x398|x399))==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x401 = 65086;
	volatile uint64_t x402 = UINT64_MAX;
	int16_t x403 = 8279;
	volatile uint32_t x404 = UINT32_MAX;
	volatile int32_t t99 = 69;

	t99 = ((x401%(x402|x403))==x404);

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
