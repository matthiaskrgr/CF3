#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile int32_t t1 = -1;
uint64_t x11 = 746315795076LLU;
static uint32_t x13 = 820707343U;
static int16_t x18 = 251;
volatile int32_t t4 = 347;
static int16_t x25 = -13;
static volatile int64_t x26 = -93197465633348522LL;
static volatile int8_t x31 = -1;
static int8_t x36 = 17;
int16_t x46 = INT16_MAX;
int8_t x48 = -1;
static volatile int32_t t11 = 816;
static int8_t x57 = INT8_MAX;
volatile int32_t t14 = -2;
int32_t t16 = -302;
int16_t x77 = INT16_MAX;
uint32_t x79 = 8U;
uint32_t x83 = UINT32_MAX;
int32_t x87 = -5;
static uint16_t x92 = UINT16_MAX;
static volatile int32_t t21 = 6113;
uint32_t x96 = UINT32_MAX;
int32_t x106 = INT32_MIN;
uint16_t x116 = UINT16_MAX;
int8_t x123 = INT8_MIN;
int32_t t29 = 112;
uint64_t x137 = 23587785163LLU;
int16_t x142 = INT16_MAX;
volatile int32_t t34 = 3;
int16_t x155 = INT16_MAX;
int32_t t37 = 12289944;
int64_t x160 = -285500247912227957LL;
int32_t t39 = -396137096;
int32_t x174 = 2739;
static int8_t x176 = INT8_MIN;
volatile uint32_t x178 = UINT32_MAX;
int32_t t42 = -30799;
volatile int64_t x190 = INT64_MAX;
int32_t x197 = INT32_MAX;
static volatile int32_t t47 = -242462;
static int16_t x211 = -1;
int32_t t51 = 2594930;
uint32_t x217 = 483583792U;
uint16_t x218 = 16315U;
uint8_t x220 = 2U;
int16_t x222 = INT16_MAX;
uint16_t x226 = 6U;
int16_t x228 = INT16_MIN;
int8_t x232 = 3;
uint64_t x235 = UINT64_MAX;
uint16_t x239 = 738U;
static uint8_t x254 = 13U;
uint32_t x255 = UINT32_MAX;
static uint8_t x259 = 1U;
volatile int8_t x268 = INT8_MIN;
static int64_t x271 = INT64_MIN;
int16_t x273 = 12;
volatile int32_t x274 = INT32_MAX;
int32_t t67 = 96899;
static int16_t x286 = INT16_MAX;
int16_t x292 = -414;
uint8_t x295 = 96U;
static volatile int32_t t70 = 33;
static int8_t x297 = INT8_MAX;
int16_t x299 = -1;
static int64_t x303 = INT64_MIN;
volatile int32_t x308 = INT32_MIN;
static volatile int32_t t74 = -3503039;
volatile uint32_t x317 = 0U;
int64_t x319 = -1LL;
int64_t x323 = 192322117371LL;
volatile int8_t x324 = 12;
uint64_t x330 = 1108207180475998LLU;
int32_t x333 = 9435081;
uint8_t x334 = 2U;
uint16_t x337 = 13248U;
int32_t x342 = INT32_MIN;
int32_t x344 = INT32_MAX;
int32_t x347 = -1;
volatile int32_t t83 = -612725;
static int32_t t84 = -911523207;
static uint32_t x354 = 11300U;
int64_t x359 = -1LL;
static uint16_t x360 = UINT16_MAX;
int64_t x362 = -1LL;
volatile int32_t t87 = -1;
int16_t x366 = 3355;
uint32_t x367 = 129335675U;
static uint32_t x369 = UINT32_MAX;
static volatile int64_t x371 = INT64_MIN;
volatile int32_t x375 = INT32_MIN;
uint32_t x382 = 76U;
int16_t x383 = 8342;
volatile uint32_t x388 = 1515982U;
uint32_t x393 = UINT32_MAX;
int64_t x396 = -77343406262627LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = 157302470829836101LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 3163;

	t0 = ((x1/(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 81U;
	int16_t x8 = -1;

	t1 = ((x5/(x6|x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = 58832203557917776LL;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 1328;

	t2 = ((x9/(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint32_t x15 = 182726615U;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 24298;

	t3 = ((x13/(x14|x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -3;
	static uint8_t x19 = 1U;
	int64_t x20 = -1LL;

	t4 = ((x17/(x18|x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 8958491LLU;
	static int32_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 54346;

	t5 = ((x21/(x22|x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = -1;
	volatile int32_t t6 = 67281;

	t6 = ((x25/(x26|x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	int64_t x30 = INT64_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 0;

	t7 = ((x29/(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 810;
	int32_t x34 = INT32_MIN;
	static uint16_t x35 = 7U;
	int32_t t8 = 1;

	t8 = ((x33/(x34|x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -3;
	int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -155;

	t9 = ((x37/(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -1LL;
	volatile int8_t x42 = 24;
	uint16_t x43 = 715U;
	int8_t x44 = -1;
	int32_t t10 = 51957;

	t10 = ((x41/(x42|x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int8_t x47 = 11;

	t11 = ((x45/(x46|x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 14U;
	int16_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	uint32_t x52 = UINT32_MAX;
	static int32_t t12 = -1070;

	t12 = ((x49/(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 27U;
	volatile int32_t x59 = INT32_MAX;
	static volatile int16_t x60 = INT16_MAX;
	static int32_t t13 = 7037140;

	t13 = ((x57/(x58|x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 422565332477081026LLU;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61/(x62|x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -1;
	int32_t x68 = 34;
	int32_t t15 = 209171048;

	t15 = ((x65/(x66|x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int16_t x70 = -1;
	int32_t x71 = -27;
	uint64_t x72 = 470602564073473LLU;

	t16 = ((x69/(x70|x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -1LL;
	volatile uint32_t x74 = 0U;
	int64_t x75 = -1LL;
	uint8_t x76 = 10U;
	int32_t t17 = -336;

	t17 = ((x73/(x74|x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t18 = -518416;

	t18 = ((x77/(x78|x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -2;
	int8_t x82 = INT8_MIN;
	uint8_t x84 = UINT8_MAX;
	static int32_t t19 = -821;

	t19 = ((x81/(x82|x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 106791500LLU;
	static volatile int32_t x86 = -1;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 233857;

	t20 = ((x85/(x86|x87))<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 1238964052195913LLU;
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;

	t21 = ((x89/(x90|x91))<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = 4U;
	uint64_t x95 = 1281991671929928901LLU;
	volatile int32_t t22 = 11929;

	t22 = ((x93/(x94|x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	uint64_t x98 = 5560245736052751LLU;
	uint8_t x99 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t23 = -71;

	t23 = ((x97/(x98|x99))<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 3182U;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = 1;
	volatile uint32_t x104 = 25U;
	volatile int32_t t24 = 59629;

	t24 = ((x101/(x102|x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 5;
	int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	volatile int32_t t25 = -1700921;

	t25 = ((x105/(x106|x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x109 = 4U;
	int16_t x110 = -1;
	static volatile int16_t x111 = -1;
	static int8_t x112 = 34;
	volatile int32_t t26 = 11019428;

	t26 = ((x109/(x110|x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	int64_t x115 = -1038621701959LL;
	volatile int32_t t27 = 5245047;

	t27 = ((x113/(x114|x115))<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	volatile uint8_t x118 = 0U;
	uint64_t x119 = 338940191978LLU;
	int32_t x120 = 401;
	static volatile int32_t t28 = 6306338;

	t28 = ((x117/(x118|x119))<=x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	int8_t x124 = -31;

	t29 = ((x121/(x122|x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MAX;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 728U;
	int16_t x128 = 86;
	volatile int32_t t30 = 675420730;

	t30 = ((x125/(x126|x127))<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -219;
	uint32_t x130 = 117427U;
	int64_t x131 = 2300603276883LL;
	volatile int64_t x132 = INT64_MIN;
	int32_t t31 = -59493183;

	t31 = ((x129/(x130|x131))<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MAX;
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t32 = -3;

	t32 = ((x133/(x134|x135))<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x138 = 52483595640660884LLU;
	volatile int64_t x139 = -1LL;
	int16_t x140 = -1;
	int32_t t33 = -13;

	t33 = ((x137/(x138|x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -1;

	t34 = ((x141/(x142|x143))<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 3808087238586794LLU;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 321766903U;
	static volatile int32_t x148 = INT32_MIN;
	volatile int32_t t35 = 2317698;

	t35 = ((x145/(x146|x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x149 = INT16_MIN;
	volatile int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MAX;
	int64_t x152 = INT64_MAX;
	int32_t t36 = 14002816;

	t36 = ((x149/(x150|x151))<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 513340;
	int64_t x154 = -6248057784197LL;
	uint16_t x156 = 6U;

	t37 = ((x153/(x154|x155))<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = -61092;
	int64_t x158 = INT64_MIN;
	uint64_t x159 = 3LLU;
	volatile int32_t t38 = 0;

	t38 = ((x157/(x158|x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -13;
	int64_t x166 = 5LL;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;

	t39 = ((x165/(x166|x167))<=x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 55016346451018359LLU;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t40 = -26;

	t40 = ((x169/(x170|x171))<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	int32_t t41 = 132104928;

	t41 = ((x173/(x174|x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = -1;
	uint8_t x179 = 0U;
	int16_t x180 = INT16_MAX;

	t42 = ((x177/(x178|x179))<=x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -1;
	uint64_t x182 = 231275LLU;
	int64_t x183 = INT64_MAX;
	int32_t x184 = 116;
	volatile int32_t t43 = -56;

	t43 = ((x181/(x182|x183))<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = INT32_MIN;
	volatile int64_t x186 = -1LL;
	static uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 5122U;
	int32_t t44 = -12049;

	t44 = ((x185/(x186|x187))<=x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = INT8_MIN;
	volatile uint8_t x191 = 22U;
	static int8_t x192 = INT8_MIN;
	static int32_t t45 = -113323294;

	t45 = ((x189/(x190|x191))<=x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 2970589U;
	int8_t x194 = -3;
	uint16_t x195 = 548U;
	static uint64_t x196 = UINT64_MAX;
	int32_t t46 = -34236265;

	t46 = ((x193/(x194|x195))<=x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x198 = -1;
	int8_t x199 = 1;
	uint16_t x200 = 58U;

	t47 = ((x197/(x198|x199))<=x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = INT64_MIN;
	uint64_t x202 = 2277125068245522LLU;
	int64_t x203 = 3933727383LL;
	int64_t x204 = INT64_MIN;
	static int32_t t48 = 41;

	t48 = ((x201/(x202|x203))<=x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = -1;
	static int32_t x206 = INT32_MIN;
	static int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t49 = 14520;

	t49 = ((x205/(x206|x207))<=x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MAX;
	static int16_t x212 = -3688;
	volatile int32_t t50 = -208;

	t50 = ((x209/(x210|x211))<=x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = 74458093U;
	volatile int16_t x215 = -1;
	int32_t x216 = 325722899;

	t51 = ((x213/(x214|x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x219 = 4630331LLU;
	volatile int32_t t52 = 228081335;

	t52 = ((x217/(x218|x219))<=x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = 7U;
	int8_t x223 = -1;
	static uint64_t x224 = 1LLU;
	volatile int32_t t53 = 0;

	t53 = ((x221/(x222|x223))<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 7U;
	int16_t x227 = INT16_MIN;
	volatile int32_t t54 = 3625652;

	t54 = ((x225/(x226|x227))<=x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = -6;
	volatile int16_t x230 = 30;
	static int16_t x231 = INT16_MAX;
	int32_t t55 = -304;

	t55 = ((x229/(x230|x231))<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 10941444U;
	static int32_t x234 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t56 = 54335;

	t56 = ((x233/(x234|x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -92279970922LL;
	int16_t x238 = INT16_MIN;
	uint32_t x240 = 265125U;
	static int32_t t57 = -24;

	t57 = ((x237/(x238|x239))<=x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	volatile uint64_t x243 = 3226473785272652942LLU;
	static int64_t x244 = 15193LL;
	int32_t t58 = 218268799;

	t58 = ((x241/(x242|x243))<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 8U;
	uint8_t x246 = 1U;
	static int8_t x247 = INT8_MAX;
	int32_t x248 = -1;
	int32_t t59 = -4046;

	t59 = ((x245/(x246|x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = 12;
	static int16_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = 72;
	volatile int32_t t60 = 81;

	t60 = ((x249/(x250|x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	static uint64_t x256 = 194777771147013217LLU;
	int32_t t61 = 0;

	t61 = ((x253/(x254|x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x257 = UINT8_MAX;
	int16_t x258 = 7;
	static int8_t x260 = -11;
	volatile int32_t t62 = -13701116;

	t62 = ((x257/(x258|x259))<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	int32_t x264 = -1414375;
	volatile int32_t t63 = -2014434;

	t63 = ((x261/(x262|x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MAX;
	int32_t x266 = INT32_MAX;
	volatile uint64_t x267 = 56774094LLU;
	int32_t t64 = 5;

	t64 = ((x265/(x266|x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 168931186138575LLU;
	int32_t x270 = -214;
	int64_t x272 = INT64_MAX;
	volatile int32_t t65 = 78459;

	t65 = ((x269/(x270|x271))<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x275 = -1;
	volatile uint16_t x276 = 3458U;
	int32_t t66 = 535146271;

	t66 = ((x273/(x274|x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = INT8_MIN;
	uint8_t x282 = 7U;
	uint8_t x283 = 7U;
	int32_t x284 = INT32_MIN;

	t67 = ((x281/(x282|x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int8_t x287 = INT8_MAX;
	static int16_t x288 = -1;
	static volatile int32_t t68 = 1;

	t68 = ((x285/(x286|x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	static uint64_t x290 = UINT64_MAX;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t69 = 128746394;

	t69 = ((x289/(x290|x291))<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = INT8_MAX;
	static uint64_t x296 = 34344704144885422LLU;

	t70 = ((x293/(x294|x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x298 = INT8_MAX;
	volatile uint64_t x300 = 13444323LLU;
	int32_t t71 = 19;

	t71 = ((x297/(x298|x299))<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = 5U;
	uint8_t x304 = 3U;
	volatile int32_t t72 = 249376;

	t72 = ((x301/(x302|x303))<=x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int64_t x306 = INT64_MIN;
	uint8_t x307 = 9U;
	volatile int32_t t73 = 2591;

	t73 = ((x305/(x306|x307))<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MAX;
	static volatile int64_t x310 = -115053218803385LL;
	volatile int64_t x311 = INT64_MIN;
	uint16_t x312 = 480U;

	t74 = ((x309/(x310|x311))<=x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = 0U;
	uint8_t x314 = 14U;
	uint64_t x315 = 440858171LLU;
	static int16_t x316 = INT16_MIN;
	int32_t t75 = -166460950;

	t75 = ((x313/(x314|x315))<=x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t76 = 845985275;

	t76 = ((x317/(x318|x319))<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -3;
	int16_t x322 = INT16_MIN;
	static int32_t t77 = -48692526;

	t77 = ((x321/(x322|x323))<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = -1;
	volatile int8_t x326 = -1;
	int32_t x327 = -799015003;
	static int32_t x328 = -1;
	volatile int32_t t78 = -57051;

	t78 = ((x325/(x326|x327))<=x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x329 = 1;
	static uint8_t x331 = 53U;
	static int64_t x332 = INT64_MAX;
	int32_t t79 = -3;

	t79 = ((x329/(x330|x331))<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x335 = INT64_MIN;
	uint32_t x336 = 1U;
	int32_t t80 = -283017;

	t80 = ((x333/(x334|x335))<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x338 = INT64_MIN;
	int32_t x339 = 3928;
	static uint32_t x340 = 49099879U;
	int32_t t81 = -710612;

	t81 = ((x337/(x338|x339))<=x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = 0U;
	uint16_t x343 = 13U;
	int32_t t82 = 741370;

	t82 = ((x341/(x342|x343))<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	static uint32_t x346 = 14236U;
	volatile int16_t x348 = -1;

	t83 = ((x345/(x346|x347))<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x349 = 1U;
	static volatile int8_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = -28616612714586LL;

	t84 = ((x349/(x350|x351))<=x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x353 = INT64_MAX;
	int32_t x355 = -1;
	int16_t x356 = -75;
	int32_t t85 = 1;

	t85 = ((x353/(x354|x355))<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = -1LL;
	int32_t x358 = -10624157;
	static int32_t t86 = 15;

	t86 = ((x357/(x358|x359))<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 184U;
	uint8_t x363 = UINT8_MAX;
	static uint8_t x364 = UINT8_MAX;

	t87 = ((x361/(x362|x363))<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x365 = 1U;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = -3409425;

	t88 = ((x365/(x366|x367))<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x370 = INT8_MIN;
	int16_t x372 = 574;
	int32_t t89 = -672;

	t89 = ((x369/(x370|x371))<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	static int8_t x374 = INT8_MIN;
	volatile int16_t x376 = INT16_MAX;
	static int32_t t90 = -75393683;

	t90 = ((x373/(x374|x375))<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = INT32_MAX;
	int8_t x378 = 39;
	int64_t x379 = INT64_MIN;
	static int64_t x380 = 1643249574LL;
	static int32_t t91 = -763886;

	t91 = ((x377/(x378|x379))<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 217;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t92 = 249;

	t92 = ((x381/(x382|x383))<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	static uint32_t x386 = 28779U;
	uint32_t x387 = UINT32_MAX;
	static int32_t t93 = -2837;

	t93 = ((x385/(x386|x387))<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MAX;
	static int64_t x391 = INT64_MIN;
	volatile int16_t x392 = -1;
	int32_t t94 = -2380930;

	t94 = ((x389/(x390|x391))<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x394 = INT8_MIN;
	static volatile int32_t x395 = -1;
	volatile int32_t t95 = 15821803;

	t95 = ((x393/(x394|x395))<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	uint8_t x399 = 56U;
	uint64_t x400 = UINT64_MAX;
	int32_t t96 = -636958505;

	t96 = ((x397/(x398|x399))<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 27314U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	volatile int32_t x404 = -1;
	int32_t t97 = 168;

	t97 = ((x401/(x402|x403))<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	static int8_t x406 = 5;
	volatile uint32_t x407 = 830U;
	uint16_t x408 = 10468U;
	static volatile int32_t t98 = 1018486177;

	t98 = ((x405/(x406|x407))<=x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x409 = UINT64_MAX;
	static int64_t x410 = -11LL;
	int16_t x411 = INT16_MIN;
	int8_t x412 = 1;
	volatile int32_t t99 = 0;

	t99 = ((x409/(x410|x411))<=x412);

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
