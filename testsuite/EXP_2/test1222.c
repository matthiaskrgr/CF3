#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = INT64_MIN;
static uint32_t x5 = 1634U;
volatile int16_t x6 = 4;
int32_t x7 = INT32_MAX;
int8_t x14 = INT8_MIN;
int32_t t4 = -6855007;
int32_t x26 = INT32_MIN;
int32_t x27 = -1;
uint64_t t8 = 1042510762893LLU;
static uint64_t x37 = UINT64_MAX;
volatile uint8_t x49 = 14U;
uint8_t x53 = 3U;
int32_t x54 = -1;
volatile int32_t t13 = -106537;
volatile int16_t x59 = -824;
int64_t x62 = INT64_MIN;
uint32_t t16 = 10495U;
int16_t x76 = 3;
static int16_t x84 = INT16_MIN;
uint16_t x90 = 47U;
volatile uint8_t x98 = 6U;
int32_t x99 = 2848900;
int32_t x104 = -71057166;
int32_t x109 = INT32_MIN;
static int32_t x112 = -1329;
volatile int32_t t27 = 114935180;
volatile int16_t x115 = INT16_MIN;
volatile uint8_t x119 = 16U;
static int32_t x120 = INT32_MIN;
int16_t x122 = INT16_MIN;
int64_t x124 = -1LL;
volatile uint16_t x128 = UINT16_MAX;
int64_t x130 = INT64_MIN;
int8_t x133 = INT8_MIN;
volatile uint16_t x138 = 0U;
volatile int64_t t35 = -1516387608246031LL;
int8_t x145 = INT8_MIN;
static int8_t x146 = INT8_MAX;
int32_t x161 = INT32_MAX;
static int8_t x172 = INT8_MIN;
uint32_t x173 = UINT32_MAX;
uint16_t x197 = 228U;
int64_t x199 = INT64_MIN;
uint16_t x200 = 1U;
int8_t x206 = -1;
static int64_t x207 = INT64_MIN;
static uint16_t x211 = UINT16_MAX;
int16_t x219 = 478;
int64_t x220 = 1LL;
int32_t x227 = INT32_MIN;
int8_t x232 = -1;
uint32_t x235 = 499872U;
volatile int64_t t58 = 171214LL;
uint32_t x237 = UINT32_MAX;
int8_t x238 = INT8_MIN;
uint16_t x240 = UINT16_MAX;
static uint8_t x256 = 58U;
volatile int16_t x259 = 2;
static int32_t t64 = 12762446;
int32_t x265 = 0;
uint64_t x272 = UINT64_MAX;
int16_t x273 = 0;
static int16_t x278 = -1;
static int8_t x280 = -1;
static uint32_t x282 = 3819U;
volatile uint64_t t70 = UINT64_MAX;
int16_t x294 = -5267;
int32_t t73 = 99;
static int32_t x297 = 3989;
int32_t x298 = -5419884;
uint8_t x312 = UINT8_MAX;
int32_t t77 = -129512658;
volatile int8_t x313 = INT8_MIN;
static int16_t x323 = INT16_MIN;
int16_t x324 = INT16_MIN;
static int64_t x326 = INT64_MIN;
uint8_t x330 = 1U;
int64_t x335 = -1LL;
volatile int64_t t83 = INT64_MIN;
static int64_t x337 = INT64_MIN;
static int16_t x340 = INT16_MIN;
static volatile int32_t x347 = INT32_MIN;
int32_t x351 = 6;
volatile uint32_t t88 = 3302U;
static int8_t x357 = INT8_MIN;
int16_t x363 = INT16_MIN;
static int16_t x364 = INT16_MIN;
volatile int64_t x374 = -1LL;
static int8_t x378 = INT8_MAX;
int8_t x382 = INT8_MIN;
static volatile int32_t t97 = -76;
uint32_t x399 = UINT32_MAX;
int64_t x400 = -1LL;
static volatile int64_t t99 = -38614572LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = INT64_MIN;

	t0 = ((x1*(x2==x3))^x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x8 = UINT16_MAX;
	volatile uint32_t t1 = 163530673U;

	t1 = ((x5*(x6==x7))^x8);

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -542717070163224LL;
	uint16_t x10 = 4U;
	int8_t x11 = 2;
	int64_t x12 = 32220835357LL;
	int64_t t2 = 12569837077763483LL;

	t2 = ((x9*(x10==x11))^x12);

	if (t2 != 32220835357LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 0U;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = ((x13*(x14==x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 522;
	uint64_t x18 = 3716747956LLU;
	uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 4U;

	t4 = ((x17*(x18==x19))^x20);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2U;
	static int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MAX;
	uint64_t x24 = 308402012388550437LLU;
	uint64_t t5 = 91639736032268925LLU;

	t5 = ((x21*(x22==x23))^x24);

	if (t5 != 308402012388550437LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1114561136857702761LL;
	int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = ((x25*(x26==x27))^x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MIN;
	static int16_t x31 = INT16_MIN;
	static volatile uint16_t x32 = 29U;
	static int32_t t7 = -14108;

	t7 = ((x29*(x30==x31))^x32);

	if (t7 != 29) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 267379194059LLU;
	volatile int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = 0U;
	volatile uint16_t x36 = 481U;

	t8 = ((x33*(x34==x35))^x36);

	if (t8 != 481LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 571725213069048LL;
	int16_t x39 = INT16_MAX;
	static uint8_t x40 = 4U;
	uint64_t t9 = 1177437117LLU;

	t9 = ((x37*(x38==x39))^x40);

	if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 299254885490487917LLU;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MIN;
	volatile int8_t x44 = 0;
	volatile uint64_t t10 = 296846699803797750LLU;

	t10 = ((x41*(x42==x43))^x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = INT8_MAX;
	volatile int32_t x48 = -347328;
	int32_t t11 = 127;

	t11 = ((x45*(x46==x47))^x48);

	if (t11 != -347328) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x50 = UINT32_MAX;
	static volatile int16_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 1;

	t12 = ((x49*(x50==x51))^x52);

	if (t12 != -32754) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x55 = INT64_MAX;
	static int8_t x56 = INT8_MAX;

	t13 = ((x53*(x54==x55))^x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = -420349988;
	int8_t x60 = INT8_MAX;
	static volatile int64_t t14 = -160004549562852LL;

	t14 = ((x57*(x58==x59))^x60);

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	uint64_t x63 = 3050600LLU;
	static int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = -19339;

	t15 = ((x61*(x62==x63))^x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = UINT32_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 15386988U;

	t16 = ((x65*(x66==x67))^x68);

	if (t16 != 15386988U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x71 = -10;
	uint64_t x72 = 815672994072335012LLU;
	static volatile uint64_t t17 = 1429903LLU;

	t17 = ((x69*(x70==x71))^x72);

	if (t17 != 815672994072335012LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = 25;

	t18 = ((x73*(x74==x75))^x76);

	if (t18 != -32765) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int32_t x78 = 345;
	static int16_t x79 = 1;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = ((x77*(x78==x79))^x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = -2;
	uint16_t x82 = 2U;
	int8_t x83 = 44;
	volatile int32_t t20 = 240934968;

	t20 = ((x81*(x82==x83))^x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = -1;
	uint8_t x88 = 87U;
	volatile int32_t t21 = 240;

	t21 = ((x85*(x86==x87))^x88);

	if (t21 != 87) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 7688650171568781LL;
	uint16_t x91 = 62U;
	int16_t x92 = INT16_MIN;
	volatile int64_t t22 = 0LL;

	t22 = ((x89*(x90==x91))^x92);

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 518335U;
	static int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	volatile int8_t x96 = -31;
	volatile uint32_t t23 = 194816U;

	t23 = ((x93*(x94==x95))^x96);

	if (t23 != 4294967265U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 104166605615LLU;
	volatile uint32_t x100 = 4632U;
	volatile uint64_t t24 = 13888LLU;

	t24 = ((x97*(x98==x99))^x100);

	if (t24 != 4632LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 4178U;
	volatile int8_t x102 = 31;
	volatile uint8_t x103 = 4U;
	volatile int32_t t25 = -28057137;

	t25 = ((x101*(x102==x103))^x104);

	if (t25 != -71057166) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1807;
	static int32_t x106 = 9823262;
	static int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 128039827;

	t26 = ((x105*(x106==x107))^x108);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x110 = 48U;
	int64_t x111 = INT64_MAX;

	t27 = ((x109*(x110==x111))^x112);

	if (t27 != -1329) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	uint8_t x116 = 0U;
	volatile int32_t t28 = -1751;

	t28 = ((x113*(x114==x115))^x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static int16_t x118 = -1;
	volatile int64_t t29 = 34564684885554291LL;

	t29 = ((x117*(x118==x119))^x120);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 12796161U;
	int64_t x123 = -322911802LL;
	int64_t t30 = 93LL;

	t30 = ((x121*(x122==x123))^x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 1466LL;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	volatile int64_t t31 = -165394498LL;

	t31 = ((x125*(x126==x127))^x128);

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -11126150072LL;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	volatile int64_t t32 = 439882664578LL;

	t32 = ((x129*(x130==x131))^x132);

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = -1;
	uint16_t x136 = 18U;
	volatile int32_t t33 = 753699002;

	t33 = ((x133*(x134==x135))^x136);

	if (t33 != 18) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 0;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	static int32_t t34 = 7000;

	t34 = ((x137*(x138==x139))^x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 1U;
	uint8_t x144 = 29U;

	t35 = ((x141*(x142==x143))^x144);

	if (t35 != 29LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x147 = -124695902LL;
	int32_t x148 = -1;
	volatile int32_t t36 = 5065;

	t36 = ((x145*(x146==x147))^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1;
	volatile int32_t x150 = -6648933;
	int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -25;
	static volatile int32_t t37 = 73403;

	t37 = ((x149*(x150==x151))^x152);

	if (t37 != -25) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	volatile int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	static int64_t x156 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = ((x153*(x154==x155))^x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = ((x157*(x158==x159))^x160);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -62306LL;
	static int32_t x163 = INT32_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161*(x162==x163))^x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	int16_t x166 = -4438;
	static volatile uint64_t x167 = 671523681004750LLU;
	uint16_t x168 = 36U;
	static int32_t t41 = 146889;

	t41 = ((x165*(x166==x167))^x168);

	if (t41 != 36) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MAX;
	int8_t x170 = -1;
	uint64_t x171 = 3359111LLU;
	volatile int32_t t42 = 78611169;

	t42 = ((x169*(x170==x171))^x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	static volatile int8_t x176 = INT8_MIN;
	uint32_t t43 = 346U;

	t43 = ((x173*(x174==x175))^x176);

	if (t43 != 4294967168U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 30427713U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t44 = INT64_MIN;

	t44 = ((x177*(x178==x179))^x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 86U;
	static int16_t x182 = INT16_MIN;
	int32_t x183 = 2037;
	uint32_t x184 = UINT32_MAX;
	static uint32_t t45 = UINT32_MAX;

	t45 = ((x181*(x182==x183))^x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = UINT16_MAX;
	static int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -1;

	t46 = ((x185*(x186==x187))^x188);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -1;
	static int8_t x190 = INT8_MIN;
	uint8_t x191 = 32U;
	volatile int8_t x192 = -3;
	static int32_t t47 = 0;

	t47 = ((x189*(x190==x191))^x192);

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	uint16_t x194 = 9731U;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t x196 = 12845;
	int32_t t48 = -3;

	t48 = ((x193*(x194==x195))^x196);

	if (t48 != 12845) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 7LLU;
	volatile int32_t t49 = 315175;

	t49 = ((x197*(x198==x199))^x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile uint8_t x202 = 0U;
	static int64_t x203 = 115528LL;
	uint16_t x204 = 28U;
	int32_t t50 = 76181067;

	t50 = ((x201*(x202==x203))^x204);

	if (t50 != 28) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MAX;
	int8_t x208 = -1;
	int32_t t51 = -1754774;

	t51 = ((x205*(x206==x207))^x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	int8_t x212 = -13;
	static volatile uint32_t t52 = 74U;

	t52 = ((x209*(x210==x211))^x212);

	if (t52 != 4294967283U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 62034105456683LLU;
	static int64_t x214 = 6091LL;
	static int32_t x215 = -9229;
	uint16_t x216 = UINT16_MAX;
	uint64_t t53 = 15LLU;

	t53 = ((x213*(x214==x215))^x216);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	int8_t x218 = 1;
	volatile int64_t t54 = 176LL;

	t54 = ((x217*(x218==x219))^x220);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	static volatile uint8_t x222 = 3U;
	int32_t x223 = 10;
	int16_t x224 = -1;
	int32_t t55 = -179222287;

	t55 = ((x221*(x222==x223))^x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 7U;
	volatile uint32_t x226 = UINT32_MAX;
	int32_t x228 = 7111;
	volatile int32_t t56 = -1;

	t56 = ((x225*(x226==x227))^x228);

	if (t56 != 7111) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = 5;
	uint16_t x231 = 14U;
	int32_t t57 = -119;

	t57 = ((x229*(x230==x231))^x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 2019LL;
	int8_t x234 = INT8_MIN;
	static int16_t x236 = -1;

	t58 = ((x233*(x234==x235))^x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x239 = 1;
	uint32_t t59 = 596U;

	t59 = ((x237*(x238==x239))^x240);

	if (t59 != 65535U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int64_t x242 = -1LL;
	static uint32_t x243 = 127U;
	uint64_t x244 = 927309198LLU;
	uint64_t t60 = 1801053079LLU;

	t60 = ((x241*(x242==x243))^x244);

	if (t60 != 927309198LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	static volatile int16_t x246 = INT16_MIN;
	static int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = ((x245*(x246==x247))^x248);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	volatile uint8_t x250 = 0U;
	int32_t x251 = -1;
	volatile int8_t x252 = -13;
	int64_t t62 = 30421284581583208LL;

	t62 = ((x249*(x250==x251))^x252);

	if (t62 != -13LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MAX;
	int64_t x254 = -12828797LL;
	static int64_t x255 = 131217364LL;
	int32_t t63 = -7;

	t63 = ((x253*(x254==x255))^x256);

	if (t63 != 58) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint32_t x258 = 381486U;
	int32_t x260 = 28444;

	t64 = ((x257*(x258==x259))^x260);

	if (t64 != 28444) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = 370959688569111LL;
	volatile uint16_t x262 = 7681U;
	static int64_t x263 = INT64_MAX;
	uint32_t x264 = UINT32_MAX;
	int64_t t65 = 735615575LL;

	t65 = ((x261*(x262==x263))^x264);

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x266 = 21631346191LLU;
	int16_t x267 = 12317;
	int64_t x268 = -1LL;
	static int64_t t66 = -41937017183794302LL;

	t66 = ((x265*(x266==x267))^x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 6037U;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = -5LL;
	uint64_t t67 = UINT64_MAX;

	t67 = ((x269*(x270==x271))^x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t68 = INT64_MIN;

	t68 = ((x273*(x274==x275))^x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	static int16_t x279 = INT16_MAX;
	static volatile int32_t t69 = -291132473;

	t69 = ((x277*(x278==x279))^x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	int8_t x284 = -1;

	t70 = ((x281*(x282==x283))^x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 9U;
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = UINT32_MAX;
	volatile int32_t x288 = 474;
	int32_t t71 = 482798465;

	t71 = ((x285*(x286==x287))^x288);

	if (t71 != 474) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = -1;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 2U;
	int64_t t72 = -5878863236057546LL;

	t72 = ((x289*(x290==x291))^x292);

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int16_t x295 = 193;
	int32_t x296 = -63661059;

	t73 = ((x293*(x294==x295))^x296);

	if (t73 != -63661059) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x299 = -3442;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 6003;

	t74 = ((x297*(x298==x299))^x300);

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x302 = -1LL;
	uint16_t x303 = 23U;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x301*(x302==x303))^x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	uint32_t x306 = 13U;
	static int32_t x307 = -1;
	volatile uint16_t x308 = 235U;
	volatile int32_t t76 = -395;

	t76 = ((x305*(x306==x307))^x308);

	if (t76 != 235) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;

	t77 = ((x309*(x310==x311))^x312);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = 0;
	uint32_t x315 = UINT32_MAX;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x313*(x314==x315))^x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 57U;
	int32_t x318 = 1813548;
	static volatile int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t79 = 644863U;

	t79 = ((x317*(x318==x319))^x320);

	if (t79 != 4294934528U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 5U;
	static int32_t x322 = 23;
	volatile uint32_t t80 = 24224U;

	t80 = ((x321*(x322==x323))^x324);

	if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 19364187LL;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

	t81 = ((x325*(x326==x327))^x328);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x331 = 0;
	static uint32_t x332 = 466113U;
	static volatile uint64_t t82 = 49LLU;

	t82 = ((x329*(x330==x331))^x332);

	if (t82 != 466113LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 1U;
	int16_t x334 = -3379;
	int64_t x336 = INT64_MIN;

	t83 = ((x333*(x334==x335))^x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = INT64_MIN;
	static uint16_t x339 = 21U;
	static volatile int64_t t84 = -385878LL;

	t84 = ((x337*(x338==x339))^x340);

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 0;
	int8_t x342 = INT8_MIN;
	static int8_t x343 = INT8_MIN;
	int64_t x344 = -8203816803543LL;
	int64_t t85 = 416067442878LL;

	t85 = ((x341*(x342==x343))^x344);

	if (t85 != -8203816803543LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = 14149865703LLU;
	uint32_t x348 = 97052216U;
	uint32_t t86 = 727288619U;

	t86 = ((x345*(x346==x347))^x348);

	if (t86 != 97052216U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 52U;
	int8_t x350 = -31;
	uint32_t x352 = UINT32_MAX;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x349*(x350==x351))^x352);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 3250129U;
	volatile int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MAX;

	t88 = ((x353*(x354==x355))^x356);

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -71133;

	t89 = ((x357*(x358==x359))^x360);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 419U;
	volatile uint32_t t90 = 25478969U;

	t90 = ((x361*(x362==x363))^x364);

	if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = UINT32_MAX;
	volatile uint64_t x366 = 110903628LLU;
	volatile int16_t x367 = -1;
	static uint16_t x368 = UINT16_MAX;
	uint32_t t91 = 1269030U;

	t91 = ((x365*(x366==x367))^x368);

	if (t91 != 65535U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MAX;
	uint64_t x371 = 7LLU;
	volatile int16_t x372 = -431;
	volatile int32_t t92 = 76324139;

	t92 = ((x369*(x370==x371))^x372);

	if (t92 != -431) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = 2U;
	int16_t x375 = 3700;
	volatile uint8_t x376 = 8U;
	int32_t t93 = 43;

	t93 = ((x373*(x374==x375))^x376);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 94702801;
	uint8_t x379 = 6U;
	static uint16_t x380 = UINT16_MAX;
	static volatile int32_t t94 = -328333;

	t94 = ((x377*(x378==x379))^x380);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 1262690LLU;
	volatile uint8_t x383 = 1U;
	int16_t x384 = INT16_MIN;
	uint64_t t95 = 6419588039LLU;

	t95 = ((x381*(x382==x383))^x384);

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 9U;
	int8_t x387 = -1;
	int16_t x388 = -1;
	int32_t t96 = 26;

	t96 = ((x385*(x386==x387))^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 1U;
	uint8_t x390 = 11U;
	static int32_t x391 = 34821839;
	int16_t x392 = INT16_MIN;

	t97 = ((x389*(x390==x391))^x392);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	int32_t x394 = INT32_MIN;
	volatile int8_t x395 = INT8_MAX;
	volatile int8_t x396 = -1;
	int32_t t98 = 1527291;

	t98 = ((x393*(x394==x395))^x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MAX;

	t99 = ((x397*(x398==x399))^x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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
