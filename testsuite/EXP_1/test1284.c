#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = UINT32_MAX;
static int16_t x3 = -913;
volatile int32_t t1 = 130689514;
uint8_t x12 = UINT8_MAX;
uint8_t x19 = 8U;
uint64_t x29 = 7895LLU;
static int8_t x31 = INT8_MIN;
static int16_t x35 = 6;
volatile int8_t x46 = -1;
uint64_t x62 = 2321946363038397LLU;
int64_t x69 = INT64_MIN;
volatile int8_t x71 = INT8_MIN;
uint8_t x75 = UINT8_MAX;
int64_t x77 = INT64_MAX;
uint32_t x80 = UINT32_MAX;
uint16_t x92 = 179U;
volatile int32_t t22 = -156170;
uint8_t x93 = UINT8_MAX;
volatile int32_t t23 = -10222931;
int8_t x99 = -1;
int16_t x101 = -15071;
int32_t x105 = 2;
int32_t t27 = 3234914;
uint64_t x114 = 1692852530895782LLU;
volatile int64_t x119 = INT64_MIN;
volatile int32_t t29 = -4407;
int32_t x121 = INT32_MIN;
int16_t x123 = INT16_MAX;
uint32_t x126 = 3U;
int16_t x133 = -1;
int32_t x136 = -1;
int8_t x146 = INT8_MIN;
int8_t x149 = INT8_MAX;
static int16_t x153 = INT16_MIN;
int64_t x155 = INT64_MIN;
int32_t x157 = 0;
uint8_t x162 = UINT8_MAX;
volatile int32_t t40 = 2;
int16_t x167 = -1;
uint64_t x168 = 195694027LLU;
int64_t x169 = INT64_MIN;
volatile int16_t x171 = -42;
volatile uint32_t x172 = UINT32_MAX;
volatile uint64_t x186 = 28586635LLU;
int8_t x188 = -7;
volatile int32_t t46 = 339;
uint8_t x189 = 5U;
uint16_t x197 = 2918U;
volatile int32_t t49 = -2;
static int64_t x205 = INT64_MIN;
int32_t x208 = 268455;
volatile int32_t t51 = 1864319;
uint16_t x219 = UINT16_MAX;
int32_t x225 = INT32_MIN;
static int8_t x226 = INT8_MIN;
int16_t x228 = INT16_MIN;
static volatile int64_t x230 = -1LL;
volatile int32_t t59 = 1040586045;
volatile uint32_t x247 = 13254U;
static int8_t x249 = INT8_MIN;
volatile int8_t x250 = 1;
int32_t x252 = -1;
static int64_t x262 = -999376745283461659LL;
static volatile int32_t t66 = -387805;
static volatile int32_t t69 = 6;
int16_t x281 = INT16_MIN;
int16_t x283 = 3491;
static int32_t t71 = -56366380;
volatile uint16_t x303 = 1876U;
volatile uint16_t x307 = 2U;
int16_t x312 = -1;
volatile int32_t t77 = -27166;
int8_t x316 = -6;
static volatile int32_t t78 = 3055;
volatile int32_t t79 = -2010;
static volatile int32_t t80 = -806274;
int32_t x326 = -235164;
static int32_t t81 = -101;
static uint32_t x342 = 508971219U;
int16_t x346 = 1;
int8_t x350 = INT8_MAX;
static uint64_t x358 = 4574185817619LLU;
volatile int32_t t89 = 15167540;
int32_t x368 = INT32_MIN;
int32_t t92 = -5388;
volatile int8_t x373 = INT8_MIN;
int16_t x374 = INT16_MIN;
volatile int32_t t94 = 777682656;
int8_t x383 = -1;
uint16_t x384 = UINT16_MAX;
static int64_t x391 = INT64_MIN;
static int32_t t97 = 25537891;
int8_t x397 = INT8_MIN;
uint64_t x398 = 19506139179143LLU;
volatile int32_t t99 = 1;


void f0(void) {
	static uint64_t x1 = 3469LLU;
	int32_t x4 = -89129620;
	int32_t t0 = -1;

	t0 = (((x1==x2)==x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint16_t x6 = 8815U;
	volatile int32_t x7 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;

	t1 = (((x5==x6)==x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 608U;
	static uint32_t x10 = 7910U;
	int64_t x11 = INT64_MIN;
	static int32_t t2 = 98278;

	t2 = (((x9==x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -637343621297820170LL;
	int32_t x14 = 681440;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -807683759;

	t3 = (((x13==x14)==x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 133U;
	static int64_t x18 = -1LL;
	static volatile uint16_t x20 = 934U;
	static int32_t t4 = 2;

	t4 = (((x17==x18)==x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 292U;
	uint16_t x22 = 401U;
	int64_t x23 = -885883703878192LL;
	int64_t x24 = -129400LL;
	volatile int32_t t5 = 295;

	t5 = (((x21==x22)==x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint32_t x26 = 1428029U;
	volatile uint8_t x27 = UINT8_MAX;
	uint64_t x28 = 30280507LLU;
	int32_t t6 = -873;

	t6 = (((x25==x26)==x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = -61;
	volatile int32_t t7 = -1782381;

	t7 = (((x29==x30)==x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 755825U;
	volatile int16_t x34 = -1;
	int64_t x36 = -1LL;
	static int32_t t8 = -10426754;

	t8 = (((x33==x34)==x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	static volatile int16_t x38 = 3673;
	int8_t x39 = INT8_MIN;
	int64_t x40 = -405684281LL;
	static int32_t t9 = 7689;

	t9 = (((x37==x38)==x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	static uint64_t x42 = 2939420LLU;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -1;
	volatile int32_t t10 = -21;

	t10 = (((x41==x42)==x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = -1;
	int64_t x47 = INT64_MIN;
	static uint32_t x48 = 475545U;
	int32_t t11 = -2;

	t11 = (((x45==x46)==x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 0U;
	static int64_t x50 = INT64_MIN;
	volatile int64_t x51 = INT64_MIN;
	static int16_t x52 = 178;
	int32_t t12 = 183148033;

	t12 = (((x49==x50)==x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 19U;
	static volatile uint8_t x54 = UINT8_MAX;
	uint8_t x55 = 1U;
	static volatile uint16_t x56 = 20U;
	int32_t t13 = 1552677;

	t13 = (((x53==x54)==x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static volatile int64_t x58 = -1LL;
	static volatile int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t14 = -13518802;

	t14 = (((x57==x58)==x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int8_t x63 = -3;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = -29;

	t15 = (((x61==x62)==x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint8_t x66 = 47U;
	static volatile int32_t x67 = INT32_MAX;
	int64_t x68 = 14229LL;
	volatile int32_t t16 = -11;

	t16 = (((x65==x66)==x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x70 = INT16_MAX;
	volatile int32_t x72 = INT32_MAX;
	static volatile int32_t t17 = 14;

	t17 = (((x69==x70)==x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MIN;
	static volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = -194006870;

	t18 = (((x73==x74)==x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 20;
	int64_t x79 = 303957034627417LL;
	volatile int32_t t19 = -415177876;

	t19 = (((x77==x78)==x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 3;
	int32_t x82 = INT32_MIN;
	volatile uint64_t x83 = 2015762379605LLU;
	int64_t x84 = 3LL;
	int32_t t20 = 174;

	t20 = (((x81==x82)==x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	volatile uint64_t x86 = 4999413294469LLU;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 29040;

	t21 = (((x85==x86)==x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -153LL;
	static uint8_t x90 = 12U;
	uint16_t x91 = 1U;

	t22 = (((x89==x90)==x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	static uint64_t x96 = UINT64_MAX;

	t23 = (((x93==x94)==x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	uint32_t x98 = 494198U;
	uint16_t x100 = 14U;
	int32_t t24 = -5949670;

	t24 = (((x97==x98)==x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 1U;
	int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = UINT64_MAX;
	int32_t t25 = -40875;

	t25 = (((x101==x102)==x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	int8_t x107 = 1;
	volatile int16_t x108 = -1;
	static int32_t t26 = -143889326;

	t26 = (((x105==x106)==x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 0;
	static int32_t x110 = INT32_MIN;
	static int8_t x111 = -1;
	int8_t x112 = -31;

	t27 = (((x109==x110)==x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1343917889U;
	uint32_t x115 = 536440U;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 142436216;

	t28 = (((x113==x114)==x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 8050088U;
	uint8_t x118 = 14U;
	int16_t x120 = INT16_MIN;

	t29 = (((x117==x118)==x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = INT16_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -64941391;

	t30 = (((x121==x122)==x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 9410U;
	int64_t x127 = -1LL;
	volatile uint8_t x128 = 41U;
	volatile int32_t t31 = 3717;

	t31 = (((x125==x126)==x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	static volatile int16_t x130 = INT16_MIN;
	static uint8_t x131 = UINT8_MAX;
	int8_t x132 = -1;
	static int32_t t32 = 129;

	t32 = (((x129==x130)==x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -12869;
	static volatile uint16_t x135 = UINT16_MAX;
	static int32_t t33 = 5502904;

	t33 = (((x133==x134)==x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 4U;
	uint32_t x138 = 174896U;
	static uint16_t x139 = 1U;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -4;

	t34 = (((x137==x138)==x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	int64_t x143 = 1965746LL;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t35 = -119103;

	t35 = (((x141==x142)==x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int16_t x147 = 10573;
	volatile uint32_t x148 = 8909979U;
	static volatile int32_t t36 = 5377937;

	t36 = (((x145==x146)==x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x150 = 8U;
	int8_t x151 = INT8_MIN;
	static uint64_t x152 = 140148090LLU;
	int32_t t37 = 1715723;

	t37 = (((x149==x150)==x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	static uint64_t x156 = 423226182778186LLU;
	static volatile int32_t t38 = -21;

	t38 = (((x153==x154)==x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MAX;
	static volatile int8_t x159 = INT8_MAX;
	static int16_t x160 = -1;
	static volatile int32_t t39 = 1538;

	t39 = (((x157==x158)==x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 12U;
	volatile int64_t x163 = INT64_MAX;
	volatile uint16_t x164 = 154U;

	t40 = (((x161==x162)==x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MAX;
	volatile int32_t x166 = INT32_MIN;
	volatile int32_t t41 = 1;

	t41 = (((x165==x166)==x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x170 = 4U;
	static volatile int32_t t42 = -75;

	t42 = (((x169==x170)==x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int64_t x174 = 1265853433LL;
	int16_t x175 = -1;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -1040;

	t43 = (((x173==x174)==x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x178 = 86U;
	uint32_t x179 = 974112768U;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -24;

	t44 = (((x177==x178)==x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = -1;
	int32_t x182 = INT32_MAX;
	volatile int8_t x183 = INT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 13;

	t45 = (((x181==x182)==x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -25;
	static volatile int32_t x187 = INT32_MAX;

	t46 = (((x185==x186)==x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	int32_t t47 = -2339858;

	t47 = (((x189==x190)==x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 26U;
	static uint8_t x194 = 113U;
	uint32_t x195 = 5288U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -2670368;

	t48 = (((x193==x194)==x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = 1;
	uint32_t x199 = 0U;
	static int32_t x200 = INT32_MAX;

	t49 = (((x197==x198)==x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	static uint64_t x202 = UINT64_MAX;
	static int16_t x203 = INT16_MAX;
	volatile uint64_t x204 = 21504262679487823LLU;
	static volatile int32_t t50 = -223384015;

	t50 = (((x201==x202)==x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 2U;
	static uint8_t x207 = UINT8_MAX;

	t51 = (((x205==x206)==x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int64_t x210 = -1LL;
	volatile int64_t x211 = 1496915485394169LL;
	int32_t x212 = -2013458;
	static int32_t t52 = 8190;

	t52 = (((x209==x210)==x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = INT16_MIN;
	int64_t x215 = 3534320063081LL;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 259;

	t53 = (((x213==x214)==x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -160871125;
	static uint16_t x218 = 2445U;
	static int8_t x220 = 5;
	volatile int32_t t54 = 248013476;

	t54 = (((x217==x218)==x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	uint8_t x224 = 20U;
	int32_t t55 = 1;

	t55 = (((x221==x222)==x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x227 = INT16_MIN;
	static int32_t t56 = -3018;

	t56 = (((x225==x226)==x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int8_t x231 = INT8_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -38497354;

	t57 = (((x229==x230)==x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	static volatile uint16_t x235 = 91U;
	volatile int16_t x236 = INT16_MIN;
	int32_t t58 = -107389732;

	t58 = (((x233==x234)==x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	static int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = INT8_MIN;

	t59 = (((x237==x238)==x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	uint64_t x242 = 675389LLU;
	static int8_t x243 = -2;
	volatile int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = 1;

	t60 = (((x241==x242)==x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	static uint8_t x246 = UINT8_MAX;
	int32_t x248 = INT32_MAX;
	static int32_t t61 = 2246;

	t61 = (((x245==x246)==x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x251 = -1;
	static volatile int32_t t62 = -100885;

	t62 = (((x249==x250)==x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int16_t x254 = 12;
	volatile uint32_t x255 = 708694958U;
	uint16_t x256 = 28U;
	int32_t t63 = -13536;

	t63 = (((x253==x254)==x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	int16_t x258 = -25;
	volatile int16_t x259 = -14314;
	int64_t x260 = INT64_MAX;
	volatile int32_t t64 = -150259;

	t64 = (((x257==x258)==x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static uint16_t x263 = UINT16_MAX;
	int64_t x264 = INT64_MAX;
	int32_t t65 = -751002;

	t65 = (((x261==x262)==x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	volatile int32_t x266 = INT32_MIN;
	uint64_t x267 = 147868239LLU;
	volatile uint64_t x268 = UINT64_MAX;

	t66 = (((x265==x266)==x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 822U;
	int64_t x270 = -932647LL;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 50U;
	volatile int32_t t67 = 239;

	t67 = (((x269==x270)==x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 32824333U;
	int16_t x274 = INT16_MAX;
	int8_t x275 = 0;
	static int32_t x276 = INT32_MAX;
	int32_t t68 = -11112082;

	t68 = (((x273==x274)==x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -17511189370848LL;
	static uint64_t x280 = 1908LLU;

	t69 = (((x277==x278)==x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x282 = 27314809485548307LLU;
	int64_t x284 = 3513697LL;
	static volatile int32_t t70 = -31535941;

	t70 = (((x281==x282)==x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x286 = -1;
	static uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 2U;

	t71 = (((x285==x286)==x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 3U;
	int64_t x291 = 60597752439463LL;
	uint32_t x292 = 1414U;
	static int32_t t72 = -597;

	t72 = (((x289==x290)==x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	int32_t x294 = 27185;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = 868U;
	int32_t t73 = -25904854;

	t73 = (((x293==x294)==x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 15978U;
	static uint16_t x298 = 18U;
	volatile int8_t x299 = -14;
	uint8_t x300 = 1U;
	volatile int32_t t74 = 27184115;

	t74 = (((x297==x298)==x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = UINT32_MAX;
	volatile int32_t x304 = -1;
	int32_t t75 = 22995702;

	t75 = (((x301==x302)==x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -1;
	int32_t x306 = -7963;
	static int32_t x308 = -1909571;
	volatile int32_t t76 = 2;

	t76 = (((x305==x306)==x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = 1470469173089488LLU;
	volatile int32_t x311 = INT32_MAX;

	t77 = (((x309==x310)==x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 4459230432LLU;
	uint8_t x314 = 5U;
	int32_t x315 = INT32_MIN;

	t78 = (((x313==x314)==x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -233;
	int64_t x318 = INT64_MAX;
	int32_t x319 = -113;
	int8_t x320 = INT8_MIN;

	t79 = (((x317==x318)==x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = INT64_MAX;
	volatile uint32_t x323 = 1601584120U;
	static int64_t x324 = -1313330577LL;

	t80 = (((x321==x322)==x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x327 = -1LL;
	volatile int8_t x328 = -1;

	t81 = (((x325==x326)==x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	static uint32_t x330 = UINT32_MAX;
	static uint64_t x331 = 1363133892334LLU;
	volatile int32_t x332 = -1;
	int32_t t82 = -17832647;

	t82 = (((x329==x330)==x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MIN;
	volatile int64_t x335 = -14933927270448891LL;
	uint16_t x336 = 2U;
	static int32_t t83 = 3223960;

	t83 = (((x333==x334)==x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	uint8_t x339 = 0U;
	static int16_t x340 = INT16_MIN;
	int32_t t84 = -2805889;

	t84 = (((x337==x338)==x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 23U;
	volatile int32_t t85 = -2205988;

	t85 = (((x341==x342)==x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 1016019346U;
	int32_t t86 = 2924;

	t86 = (((x345==x346)==x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	static volatile int64_t x351 = INT64_MAX;
	uint16_t x352 = 34U;
	volatile int32_t t87 = 108;

	t87 = (((x349==x350)==x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 236303342322852044LLU;
	int64_t x354 = -1LL;
	static uint8_t x355 = 25U;
	static uint16_t x356 = UINT16_MAX;
	int32_t t88 = 42;

	t88 = (((x353==x354)==x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MAX;
	static volatile int64_t x359 = INT64_MAX;
	uint64_t x360 = UINT64_MAX;

	t89 = (((x357==x358)==x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = 2800023U;
	static uint32_t x363 = 97721U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -149814969;

	t90 = (((x361==x362)==x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -6109;
	volatile int32_t t91 = -4490;

	t91 = (((x365==x366)==x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = INT16_MAX;
	int64_t x370 = 65139LL;
	uint8_t x371 = 30U;
	uint32_t x372 = UINT32_MAX;

	t92 = (((x369==x370)==x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x375 = -9LL;
	uint16_t x376 = UINT16_MAX;
	int32_t t93 = 262404;

	t93 = (((x373==x374)==x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MAX;
	static int16_t x379 = -1;
	static int8_t x380 = -1;

	t94 = (((x377==x378)==x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	static int32_t x382 = -20;
	static int32_t t95 = -1780125;

	t95 = (((x381==x382)==x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 12361906930080562LLU;
	int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	static uint8_t x388 = 9U;
	volatile int32_t t96 = 90451;

	t96 = (((x385==x386)==x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = 1;
	static int64_t x392 = INT64_MAX;

	t97 = (((x389==x390)==x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 875U;
	int64_t x394 = -1LL;
	static uint8_t x395 = 3U;
	uint32_t x396 = 56214308U;
	volatile int32_t t98 = 62337;

	t98 = (((x393==x394)==x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MAX;

	t99 = (((x397==x398)==x399)<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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
