#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
uint16_t x8 = UINT16_MAX;
volatile int32_t x10 = -19008;
volatile int32_t x11 = INT32_MIN;
volatile int16_t x20 = -372;
volatile uint16_t x23 = 0U;
int32_t x24 = -1;
uint8_t x28 = UINT8_MAX;
int32_t t6 = -240912;
static uint8_t x29 = 0U;
uint8_t x37 = 8U;
int64_t x38 = INT64_MAX;
volatile int32_t t9 = -4555;
int32_t x42 = INT32_MIN;
static uint8_t x44 = 70U;
static int8_t x50 = INT8_MIN;
static uint32_t x52 = 1001U;
int16_t x53 = -1;
volatile int16_t x59 = INT16_MAX;
int32_t x66 = 0;
int16_t x80 = -1;
static uint32_t x81 = 6125U;
uint16_t x82 = 368U;
uint32_t x83 = 512205U;
static volatile int64_t x88 = -1LL;
uint16_t x105 = 1U;
static int16_t x113 = -1;
int64_t x117 = 121961898069089292LL;
int16_t x119 = 19;
int8_t x122 = -1;
uint64_t x123 = UINT64_MAX;
int32_t x128 = INT32_MAX;
int64_t x137 = 215518511481001LL;
volatile int32_t t36 = -49;
int16_t x151 = 4362;
static int8_t x154 = -1;
int32_t x155 = -3059;
int8_t x161 = INT8_MIN;
int16_t x162 = -1;
static int8_t x163 = INT8_MAX;
int32_t x164 = -6202;
int16_t x165 = 11;
uint64_t x167 = UINT64_MAX;
volatile int32_t t41 = -264103;
uint64_t x172 = 14352003LLU;
uint64_t x174 = 105LLU;
int16_t x177 = 670;
int64_t x179 = INT64_MIN;
int64_t x180 = INT64_MIN;
int64_t x182 = -1LL;
static int8_t x184 = INT8_MIN;
volatile int32_t t46 = 45391945;
static int32_t x190 = INT32_MIN;
int64_t x194 = -1LL;
uint8_t x202 = 1U;
static int32_t x206 = -1;
int16_t x208 = INT16_MAX;
static volatile int32_t t51 = -60197;
uint32_t x210 = UINT32_MAX;
int64_t x217 = 638167844LL;
int16_t x225 = INT16_MIN;
volatile int32_t t56 = 6060321;
int16_t x229 = 23;
int32_t t57 = -157841;
static int8_t x234 = INT8_MIN;
static volatile int8_t x240 = -1;
volatile int16_t x243 = INT16_MIN;
volatile int8_t x245 = INT8_MIN;
int64_t x248 = 133LL;
static volatile int16_t x252 = -1;
static volatile int32_t t62 = -1188;
int32_t t63 = 398;
static int64_t x257 = INT64_MIN;
int64_t x260 = -1LL;
uint16_t x262 = 5341U;
int32_t x264 = INT32_MIN;
volatile int32_t t66 = 234;
int8_t x272 = 43;
int8_t x273 = INT8_MIN;
static int16_t x277 = INT16_MAX;
volatile int64_t x287 = INT64_MIN;
int32_t x293 = -1;
int8_t x294 = INT8_MAX;
int16_t x297 = INT16_MIN;
int32_t t74 = -57;
uint32_t x305 = UINT32_MAX;
static int32_t x309 = 21917;
int64_t x310 = INT64_MIN;
uint16_t x312 = 1U;
int8_t x317 = -1;
uint64_t x322 = 1575024LLU;
uint32_t x327 = 2U;
int16_t x336 = INT16_MIN;
int8_t x348 = INT8_MIN;
volatile int32_t t87 = 14407792;
int8_t x367 = INT8_MIN;
uint16_t x372 = 1963U;
volatile int32_t t92 = 1115382;
volatile int32_t t93 = 112702;
uint64_t x378 = 1693LLU;
static int32_t t95 = -3;
int32_t x386 = -1;
static int64_t x396 = -1LL;
uint32_t x397 = 10604U;
volatile int32_t t99 = 54138;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int16_t x4 = -1;
	volatile int32_t t0 = -11855;

	t0 = ((x1==(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1U;
	int8_t x6 = -1;
	int32_t x7 = -937;
	volatile int32_t t1 = -893731811;

	t1 = ((x5==(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 118193U;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -31;

	t2 = ((x9==(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	volatile uint32_t x14 = 145U;
	int64_t x15 = -1LL;
	static int64_t x16 = -1LL;
	int32_t t3 = -15488941;

	t3 = ((x13==(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 48LLU;
	int64_t x18 = 152777525022292LL;
	int64_t x19 = INT64_MIN;
	static volatile int32_t t4 = -4723074;

	t4 = ((x17==(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static uint8_t x22 = 0U;
	static volatile int32_t t5 = 11412;

	t5 = ((x21==(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -5600;
	int16_t x26 = -1;
	volatile int64_t x27 = -1LL;

	t6 = ((x25==(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 4188933U;
	static int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 3243;

	t7 = ((x29==(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static int16_t x34 = INT16_MIN;
	uint8_t x35 = 1U;
	static uint64_t x36 = 2683744409899164670LLU;
	int32_t t8 = 7002;

	t8 = ((x33==(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x39 = 2574;
	int8_t x40 = INT8_MIN;

	t9 = ((x37==(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 46218236U;
	static int32_t x43 = INT32_MAX;
	volatile int32_t t10 = 1456035;

	t10 = ((x41==(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 2U;
	volatile int8_t x46 = INT8_MIN;
	int64_t x47 = -4943492LL;
	uint16_t x48 = 235U;
	volatile int32_t t11 = -13211;

	t11 = ((x45==(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 3U;
	static volatile int32_t x51 = 2;
	int32_t t12 = 1;

	t12 = ((x49==(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = -1;
	static uint32_t x55 = 8134U;
	uint32_t x56 = 254U;
	volatile int32_t t13 = -20;

	t13 = ((x53==(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -304563028271819288LL;
	static int8_t x58 = INT8_MIN;
	uint64_t x60 = 68083137365LLU;
	volatile int32_t t14 = 6;

	t14 = ((x57==(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x62 = 1;
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 22;

	t15 = ((x61==(x62|x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	volatile int32_t x67 = -1;
	uint64_t x68 = 943339800733LLU;
	int32_t t16 = -4223964;

	t16 = ((x65==(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static int64_t x70 = -1LL;
	int64_t x71 = -1LL;
	volatile int32_t x72 = INT32_MIN;
	int32_t t17 = 334;

	t17 = ((x69==(x70|x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MAX;
	int64_t x75 = -5LL;
	int32_t x76 = -2964865;
	int32_t t18 = -105;

	t18 = ((x73==(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1193U;
	int32_t x78 = -1;
	int64_t x79 = INT64_MIN;
	volatile int32_t t19 = 15;

	t19 = ((x77==(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x84 = UINT8_MAX;
	static int32_t t20 = -60992;

	t20 = ((x81==(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 26U;
	uint32_t x86 = 368719783U;
	static volatile uint32_t x87 = 1751439U;
	volatile int32_t t21 = 3331;

	t21 = ((x85==(x86|x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = INT32_MIN;
	static volatile int8_t x92 = -37;
	static volatile int32_t t22 = 2;

	t22 = ((x89==(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int8_t x94 = 0;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 6732250;

	t23 = ((x93==(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static volatile int8_t x98 = 3;
	volatile int16_t x99 = INT16_MIN;
	int32_t x100 = -489867948;
	int32_t t24 = -31;

	t24 = ((x97==(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 20285516U;
	static volatile int32_t x102 = 3941080;
	static uint8_t x103 = 1U;
	static volatile int64_t x104 = -46041896LL;
	int32_t t25 = -4052892;

	t25 = ((x101==(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MAX;
	volatile int8_t x108 = -40;
	volatile int32_t t26 = 75479983;

	t26 = ((x105==(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MIN;
	volatile int16_t x111 = 0;
	int16_t x112 = 0;
	volatile int32_t t27 = 13901880;

	t27 = ((x109==(x110|x111))==x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -5535;
	int64_t x115 = -1LL;
	uint8_t x116 = 3U;
	static volatile int32_t t28 = 103554;

	t28 = ((x113==(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	volatile int16_t x120 = INT16_MAX;
	static int32_t t29 = 79363;

	t29 = ((x117==(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 284;

	t30 = ((x121==(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 3057;
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 2U;
	int32_t t31 = -102565;

	t31 = ((x125==(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	int16_t x131 = INT16_MIN;
	int32_t x132 = 527209242;
	int32_t t32 = -210;

	t32 = ((x129==(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 922644LL;
	volatile int8_t x134 = -1;
	static int32_t x135 = -4726;
	int8_t x136 = -3;
	volatile int32_t t33 = 0;

	t33 = ((x133==(x134|x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	uint8_t x139 = UINT8_MAX;
	uint64_t x140 = 5003719380499063LLU;
	volatile int32_t t34 = 409;

	t34 = ((x137==(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int64_t x143 = -1LL;
	int16_t x144 = -1;
	int32_t t35 = -2919663;

	t35 = ((x141==(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -47;
	int32_t x146 = 321395;
	int64_t x147 = -1LL;
	uint8_t x148 = 1U;

	t36 = ((x145==(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 2801;
	volatile int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -57;

	t37 = ((x149==(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 0;

	t38 = ((x153==(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile int32_t x158 = -1;
	volatile uint16_t x159 = 953U;
	volatile int32_t x160 = 5672;
	int32_t t39 = -54324056;

	t39 = ((x157==(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t t40 = -532180;

	t40 = ((x161==(x162|x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -2624640;
	uint8_t x168 = 0U;

	t41 = ((x165==(x166|x167))==x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = -1;
	int32_t t42 = -1029512;

	t42 = ((x169==(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -47424LL;
	int16_t x175 = -1005;
	static volatile int16_t x176 = INT16_MIN;
	static int32_t t43 = -61298650;

	t43 = ((x173==(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	volatile int32_t t44 = -987764;

	t44 = ((x177==(x178|x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 1U;
	volatile int8_t x183 = -10;
	int32_t t45 = 8661;

	t45 = ((x181==(x182|x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	volatile int16_t x186 = INT16_MIN;
	static int8_t x187 = -5;
	int32_t x188 = INT32_MAX;

	t46 = ((x185==(x186|x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint16_t x191 = 17U;
	volatile int64_t x192 = INT64_MIN;
	int32_t t47 = 132309591;

	t47 = ((x189==(x190|x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 23048U;
	uint16_t x195 = 1U;
	int32_t x196 = -2953;
	int32_t t48 = -7691886;

	t48 = ((x193==(x194|x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 422U;
	int8_t x198 = -1;
	uint8_t x199 = 4U;
	volatile uint8_t x200 = 3U;
	int32_t t49 = -307;

	t49 = ((x197==(x198|x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 1;
	int8_t x203 = 1;
	volatile uint32_t x204 = 44U;
	int32_t t50 = -46;

	t50 = ((x201==(x202|x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 1U;
	static int64_t x207 = INT64_MAX;

	t51 = ((x205==(x206|x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -883799743051LL;
	uint64_t x211 = 13059210LLU;
	uint16_t x212 = 2387U;
	int32_t t52 = -54128;

	t52 = ((x209==(x210|x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	int32_t x216 = 0;
	volatile int32_t t53 = -918;

	t53 = ((x213==(x214|x215))==x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = -1;
	int64_t x219 = -17863467639LL;
	int32_t x220 = INT32_MAX;
	int32_t t54 = -7134367;

	t54 = ((x217==(x218|x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x221 = 824239805322691LLU;
	uint8_t x222 = 38U;
	static volatile int8_t x223 = INT8_MIN;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 8016589;

	t55 = ((x221==(x222|x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 56533827451692LLU;
	int8_t x227 = 27;
	int32_t x228 = INT32_MIN;

	t56 = ((x225==(x226|x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 1863069654LLU;
	uint64_t x232 = 1679970897986459LLU;

	t57 = ((x229==(x230|x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 4U;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = -150;

	t58 = ((x233==(x234|x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -163;
	int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	volatile int32_t t59 = -171;

	t59 = ((x237==(x238|x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x241 = 1U;
	static int32_t x242 = INT32_MAX;
	static int8_t x244 = 1;
	volatile int32_t t60 = -4;

	t60 = ((x241==(x242|x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = -2;
	uint16_t x247 = 162U;
	int32_t t61 = 86680;

	t61 = ((x245==(x246|x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int32_t x250 = -1;
	volatile uint64_t x251 = UINT64_MAX;

	t62 = ((x249==(x250|x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	static uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 25195U;

	t63 = ((x253==(x254|x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x258 = 7410;
	int32_t x259 = INT32_MIN;
	volatile int32_t t64 = -9;

	t64 = ((x257==(x258|x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 0;
	uint8_t x263 = 110U;
	volatile int32_t t65 = 0;

	t65 = ((x261==(x262|x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	volatile uint8_t x268 = 24U;

	t66 = ((x265==(x266|x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 23U;
	volatile uint64_t x270 = 12822927561LLU;
	volatile uint32_t x271 = UINT32_MAX;
	static volatile int32_t t67 = -22;

	t67 = ((x269==(x270|x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = 812045641984LL;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 13873;

	t68 = ((x273==(x274|x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 8U;
	uint32_t x279 = 1362474U;
	uint16_t x280 = 5115U;
	volatile int32_t t69 = -17;

	t69 = ((x277==(x278|x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -9;
	static int16_t x282 = -492;
	int64_t x283 = INT64_MAX;
	uint16_t x284 = 0U;
	int32_t t70 = 66670;

	t70 = ((x281==(x282|x283))==x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int64_t x286 = -431746464498465731LL;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -3;

	t71 = ((x285==(x286|x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	int64_t x292 = -454028393630867964LL;
	volatile int32_t t72 = -5022981;

	t72 = ((x289==(x290|x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 4010758;

	t73 = ((x293==(x294|x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MAX;
	int32_t x299 = INT32_MAX;
	static int8_t x300 = INT8_MIN;

	t74 = ((x297==(x298|x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 8;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = 4U;
	uint32_t x304 = UINT32_MAX;
	int32_t t75 = -829599621;

	t75 = ((x301==(x302|x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	static uint8_t x308 = 0U;
	volatile int32_t t76 = -6;

	t76 = ((x305==(x306|x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x311 = 458450803079049260LLU;
	int32_t t77 = 56;

	t77 = ((x309==(x310|x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	int16_t x314 = -36;
	static volatile uint32_t x315 = 5659U;
	volatile uint32_t x316 = 232U;
	static int32_t t78 = 12661;

	t78 = ((x313==(x314|x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x318 = 350849797727936LLU;
	uint8_t x319 = 3U;
	uint8_t x320 = 101U;
	int32_t t79 = 1815;

	t79 = ((x317==(x318|x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	uint8_t x323 = 17U;
	static int32_t x324 = -1;
	volatile int32_t t80 = -2;

	t80 = ((x321==(x322|x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x328 = -1;
	static volatile int32_t t81 = -1;

	t81 = ((x325==(x326|x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	uint8_t x330 = 14U;
	int64_t x331 = 1733978LL;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = 871052201;

	t82 = ((x329==(x330|x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 17U;
	int64_t x334 = -1LL;
	static int8_t x335 = INT8_MIN;
	int32_t t83 = -2288;

	t83 = ((x333==(x334|x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	volatile int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MAX;
	int32_t t84 = 0;

	t84 = ((x337==(x338|x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	static volatile int16_t x342 = INT16_MAX;
	volatile uint32_t x343 = 31453045U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 1561198;

	t85 = ((x341==(x342|x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 10;
	int8_t x346 = INT8_MIN;
	static uint16_t x347 = UINT16_MAX;
	volatile int32_t t86 = -161782036;

	t86 = ((x345==(x346|x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 2U;
	int8_t x350 = -8;
	static volatile uint16_t x351 = 61U;
	static volatile uint8_t x352 = 0U;

	t87 = ((x349==(x350|x351))==x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -18;
	uint32_t x354 = 52273U;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -34;

	t88 = ((x353==(x354|x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -233975783;
	int32_t x358 = INT32_MAX;
	static uint16_t x359 = UINT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 185;

	t89 = ((x357==(x358|x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	static uint32_t x362 = 16885U;
	uint8_t x363 = 24U;
	static uint32_t x364 = 114U;
	int32_t t90 = -714;

	t90 = ((x361==(x362|x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -1;
	int32_t x368 = -1;
	int32_t t91 = -1;

	t91 = ((x365==(x366|x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint8_t x370 = UINT8_MAX;
	static uint32_t x371 = 192103U;

	t92 = ((x369==(x370|x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = INT8_MIN;

	t93 = ((x373==(x374|x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 2;
	int8_t x379 = -1;
	int8_t x380 = INT8_MAX;
	static volatile int32_t t94 = -24897;

	t94 = ((x377==(x378|x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = 3U;
	volatile uint16_t x384 = 3282U;

	t95 = ((x381==(x382|x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -2289;

	t96 = ((x385==(x386|x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 21LLU;
	int8_t x390 = INT8_MAX;
	volatile int16_t x391 = -1;
	int32_t x392 = -1;
	volatile int32_t t97 = 12;

	t97 = ((x389==(x390|x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 4289121509547LLU;
	int16_t x394 = -1;
	int32_t x395 = INT32_MIN;
	volatile int32_t t98 = -7;

	t98 = ((x393==(x394|x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = 15LL;
	static int32_t x399 = -8126;
	volatile int8_t x400 = INT8_MIN;

	t99 = ((x397==(x398|x399))==x400);

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
