#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
static int32_t t1 = -13332;
int16_t x9 = -1;
static uint8_t x17 = 1U;
volatile uint32_t t4 = 713U;
static volatile int32_t t5 = -2230217;
int32_t t6 = 128594330;
uint16_t x37 = 0U;
int8_t x39 = -1;
int32_t t9 = -260;
volatile int32_t t10 = -8554;
static volatile int16_t x49 = INT16_MAX;
volatile int8_t x51 = -21;
int8_t x54 = 29;
static int16_t x59 = 1;
uint32_t x67 = 15U;
static uint32_t x68 = UINT32_MAX;
volatile int32_t t17 = 0;
int8_t x73 = INT8_MIN;
static int64_t t18 = 1316779LL;
uint8_t x77 = 22U;
int16_t x83 = INT16_MIN;
int32_t t20 = INT32_MIN;
uint64_t x88 = UINT64_MAX;
static uint64_t x91 = UINT64_MAX;
volatile int32_t t24 = 32818498;
volatile int8_t x101 = INT8_MIN;
static int32_t x104 = INT32_MIN;
int8_t x107 = INT8_MIN;
int64_t t26 = 27LL;
int8_t x112 = INT8_MAX;
static int8_t x120 = 1;
int8_t x123 = 0;
volatile uint64_t t30 = 12462LLU;
int64_t x127 = INT64_MIN;
int32_t x131 = -89053717;
volatile int64_t x146 = INT64_MAX;
uint64_t x154 = 3LLU;
static volatile int32_t x161 = -1;
static int32_t t40 = 1067;
uint64_t x165 = 48854668LLU;
volatile int8_t x172 = INT8_MIN;
int16_t x173 = INT16_MIN;
volatile int16_t x174 = INT16_MAX;
static volatile uint32_t x175 = UINT32_MAX;
volatile int16_t x179 = -1;
int64_t t44 = 778042LL;
int32_t t45 = 1032710;
int32_t x187 = 1;
int16_t x189 = 14;
volatile int32_t t47 = -801511;
uint16_t x197 = 358U;
static int32_t x199 = INT32_MAX;
uint32_t x200 = 6U;
uint32_t x202 = UINT32_MAX;
int64_t x203 = INT64_MIN;
uint16_t x208 = 4571U;
volatile int8_t x215 = 48;
int32_t t54 = -909028064;
int8_t x221 = INT8_MIN;
uint32_t x222 = 9484047U;
volatile int32_t x229 = 64168634;
int64_t x230 = INT64_MAX;
uint32_t x234 = UINT32_MAX;
int64_t x239 = INT64_MIN;
int64_t x243 = 221658622174466823LL;
int8_t x252 = -1;
int16_t x260 = 1453;
int64_t x261 = 869LL;
int64_t t64 = -158789LL;
int64_t x266 = INT64_MIN;
static uint16_t x274 = 54U;
int8_t x276 = INT8_MAX;
static int64_t x277 = INT64_MIN;
volatile int32_t t68 = INT32_MIN;
static volatile int16_t x282 = INT16_MIN;
uint32_t x285 = 1U;
int32_t t71 = -12397233;
volatile uint32_t t72 = UINT32_MAX;
int32_t t75 = -6120926;
static volatile uint16_t x309 = 237U;
uint32_t x311 = 184788U;
int32_t t76 = -28477600;
static uint16_t x318 = 100U;
volatile int16_t x321 = 127;
int32_t x328 = -1;
int64_t x336 = -223733LL;
int64_t t83 = -1481333595544841208LL;
int8_t x348 = 0;
int64_t x353 = -2818370809LL;
int8_t x356 = INT8_MIN;
int8_t x357 = INT8_MAX;
uint16_t x359 = 473U;
volatile int32_t t88 = 237859507;
uint64_t x365 = 835LLU;
volatile int32_t t89 = 19617801;
uint32_t x375 = UINT32_MAX;
static uint16_t x376 = UINT16_MAX;
volatile int32_t t91 = -1;
static int16_t x378 = -2;
int32_t x381 = 111;
uint64_t x386 = 7412834633550492LLU;
int32_t x397 = -1;
int16_t x398 = INT16_MIN;
uint64_t x406 = 113690892LLU;
int8_t x407 = 0;
uint16_t x408 = 1U;


void f0(void) {
	uint64_t x1 = 11882LLU;
	int8_t x3 = 1;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = -61108396LL;

	t0 = (((x1/x2)<x3)|x4);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x6 = INT8_MAX;
	volatile int32_t x7 = -877911291;
	int8_t x8 = -1;

	t1 = (((x5/x6)<x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 129955;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -847616140;

	t2 = (((x9/x10)<x11)|x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -46632;
	volatile int8_t x14 = -1;
	static int8_t x15 = -1;
	int32_t x16 = -1241639;
	int32_t t3 = 249367;

	t3 = (((x13/x14)<x15)|x16);

	if (t3 != -1241639) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 5U;
	int16_t x19 = -1;
	uint32_t x20 = 76U;

	t4 = (((x17/x18)<x19)|x20);

	if (t4 != 77U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 39U;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 48U;
	int8_t x24 = INT8_MAX;

	t5 = (((x21/x22)<x23)|x24);

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = 47;
	int8_t x28 = -1;

	t6 = (((x25/x26)<x27)|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	volatile int64_t x30 = 1519254240539512LL;
	static volatile int64_t x31 = INT64_MIN;
	uint8_t x32 = 126U;
	static int32_t t7 = 0;

	t7 = (((x29/x30)<x31)|x32);

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = UINT8_MAX;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (((x33/x34)<x35)|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int16_t x40 = 7933;

	t9 = (((x37/x38)<x39)|x40);

	if (t9 != 7933) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	static int64_t x42 = INT64_MIN;
	int32_t x43 = 16673604;
	uint8_t x44 = 1U;

	t10 = (((x41/x42)<x43)|x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint16_t x46 = UINT16_MAX;
	static uint16_t x47 = 8U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -516;

	t11 = (((x45/x46)<x47)|x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 117795U;
	volatile uint32_t x52 = 29931351U;
	volatile uint32_t t12 = 2U;

	t12 = (((x49/x50)<x51)|x52);

	if (t12 != 29931351U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 3;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

	t13 = (((x53/x54)<x55)|x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1077086321966LLU;
	int32_t x58 = -1;
	static uint16_t x60 = 20756U;
	int32_t t14 = 263294;

	t14 = (((x57/x58)<x59)|x60);

	if (t14 != 20757) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 8073212757167089711LLU;
	int64_t x63 = -85399552465LL;
	static uint16_t x64 = 3269U;
	int32_t t15 = -6;

	t15 = (((x61/x62)<x63)|x64);

	if (t15 != 3269) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	uint32_t t16 = UINT32_MAX;

	t16 = (((x65/x66)<x67)|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	static uint32_t x71 = 11U;
	static int32_t x72 = INT32_MIN;

	t17 = (((x69/x70)<x71)|x72);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;

	t18 = (((x73/x74)<x75)|x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	int64_t x79 = -1LL;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = (((x77/x78)<x79)|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = -8;
	int32_t x84 = INT32_MIN;

	t20 = (((x81/x82)<x83)|x84);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = 3319306LL;
	static int8_t x86 = 42;
	int8_t x87 = -1;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x85/x86)<x87)|x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static int16_t x90 = INT16_MIN;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -1028038;

	t22 = (((x89/x90)<x91)|x92);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -28;
	int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MAX;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (((x93/x94)<x95)|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static int32_t x98 = 3108545;
	uint8_t x99 = UINT8_MAX;
	volatile int8_t x100 = -1;

	t24 = (((x97/x98)<x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x102 = 55266U;
	static int16_t x103 = -15860;
	volatile int32_t t25 = 0;

	t25 = (((x101/x102)<x103)|x104);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = 16253;
	int64_t x106 = INT64_MIN;
	int64_t x108 = -1LL;

	t26 = (((x105/x106)<x107)|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -27;
	static uint16_t x110 = 6U;
	static uint64_t x111 = 1969138374128649LLU;
	volatile int32_t t27 = -19834411;

	t27 = (((x109/x110)<x111)|x112);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -9004122;

	t28 = (((x113/x114)<x115)|x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 13482905063664LLU;
	volatile int32_t x118 = -1;
	int8_t x119 = 41;
	int32_t t29 = 556426517;

	t29 = (((x117/x118)<x119)|x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint64_t x124 = 7119LLU;

	t30 = (((x121/x122)<x123)|x124);

	if (t30 != 7119LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static int16_t x126 = INT16_MIN;
	static uint64_t x128 = 25181LLU;
	volatile uint64_t t31 = 24287881587LLU;

	t31 = (((x125/x126)<x127)|x128);

	if (t31 != 25181LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	int8_t x132 = -31;
	int32_t t32 = -34500074;

	t32 = (((x129/x130)<x131)|x132);

	if (t32 != -31) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 149813LL;
	uint64_t x134 = 3LLU;
	static int32_t x135 = 561963798;
	int64_t x136 = INT64_MIN;
	int64_t t33 = -6LL;

	t33 = (((x133/x134)<x135)|x136);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -860;
	int64_t x138 = INT64_MAX;
	volatile int8_t x139 = 23;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 52236064461LL;

	t34 = (((x137/x138)<x139)|x140);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 5U;
	static int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	int64_t x144 = 22982482640423LL;
	static volatile int64_t t35 = -2767926041LL;

	t35 = (((x141/x142)<x143)|x144);

	if (t35 != 22982482640423LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x147 = 2U;
	uint16_t x148 = 1207U;
	int32_t t36 = 0;

	t36 = (((x145/x146)<x147)|x148);

	if (t36 != 1207) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static uint16_t x150 = 2446U;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -1;

	t37 = (((x149/x150)<x151)|x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x155 = -1LL;
	int16_t x156 = -1;
	int32_t t38 = 145;

	t38 = (((x153/x154)<x155)|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 104U;
	uint8_t x158 = 16U;
	int32_t x159 = -9845195;
	int64_t x160 = 602485837786LL;
	volatile int64_t t39 = -232LL;

	t39 = (((x157/x158)<x159)|x160);

	if (t39 != 602485837786LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	uint16_t x164 = 29375U;

	t40 = (((x161/x162)<x163)|x164);

	if (t40 != 29375) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	static int64_t x168 = 192508234LL;
	static int64_t t41 = -2419190497LL;

	t41 = (((x165/x166)<x167)|x168);

	if (t41 != 192508235LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 2250873U;
	volatile int64_t x170 = -1LL;
	int8_t x171 = 7;
	volatile int32_t t42 = 182777;

	t42 = (((x169/x170)<x171)|x172);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x176 = INT64_MAX;
	volatile int64_t t43 = INT64_MAX;

	t43 = (((x173/x174)<x175)|x176);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = 255227;
	uint64_t x178 = 24780932LLU;
	int64_t x180 = INT64_MIN;

	t44 = (((x177/x178)<x179)|x180);

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 2684306;
	int32_t x182 = 1;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MAX;

	t45 = (((x181/x182)<x183)|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MAX;
	int16_t x188 = 34;
	int32_t t46 = -168;

	t46 = (((x185/x186)<x187)|x188);

	if (t46 != 34) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MIN;

	t47 = (((x189/x190)<x191)|x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	static int64_t x194 = -130348866LL;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -283402LL;

	t48 = (((x193/x194)<x195)|x196);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MAX;
	volatile uint32_t t49 = 2600U;

	t49 = (((x197/x198)<x199)|x200);

	if (t49 != 7U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x204 = 158U;
	int32_t t50 = 119666490;

	t50 = (((x201/x202)<x203)|x204);

	if (t50 != 158) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	int32_t t51 = 82937129;

	t51 = (((x205/x206)<x207)|x208);

	if (t51 != 4571) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 20U;
	int32_t x210 = INT32_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	static int16_t x212 = INT16_MAX;
	int32_t t52 = 1557;

	t52 = (((x209/x210)<x211)|x212);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 144U;
	static uint8_t x214 = UINT8_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -28599358;

	t53 = (((x213/x214)<x215)|x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MIN;
	static int64_t x219 = INT64_MAX;
	uint16_t x220 = 1U;

	t54 = (((x217/x218)<x219)|x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = 454096;
	volatile uint64_t x224 = 32799LLU;
	volatile uint64_t t55 = 20166778269LLU;

	t55 = (((x221/x222)<x223)|x224);

	if (t55 != 32799LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x231 = INT16_MIN;
	static int32_t x232 = INT32_MIN;
	static int32_t t56 = INT32_MIN;

	t56 = (((x229/x230)<x231)|x232);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -195748897603514410LL;
	static int64_t x235 = 0LL;
	volatile int64_t x236 = INT64_MAX;
	volatile int64_t t57 = INT64_MAX;

	t57 = (((x233/x234)<x235)|x236);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x237 = 74U;
	uint8_t x238 = UINT8_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t58 = 921388370;

	t58 = (((x237/x238)<x239)|x240);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = -1;
	int16_t x242 = 26;
	uint8_t x244 = UINT8_MAX;
	int32_t t59 = -3;

	t59 = (((x241/x242)<x243)|x244);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = -1;
	volatile uint32_t x247 = UINT32_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t60 = -4392076;

	t60 = (((x245/x246)<x247)|x248);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 4U;
	int8_t x250 = INT8_MAX;
	int16_t x251 = 1;
	volatile int32_t t61 = -76;

	t61 = (((x249/x250)<x251)|x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MAX;
	static volatile int32_t x254 = -1;
	int64_t x255 = INT64_MAX;
	static int16_t x256 = -1;
	int32_t t62 = -3;

	t62 = (((x253/x254)<x255)|x256);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	int16_t x259 = -7061;
	volatile int32_t t63 = -1;

	t63 = (((x257/x258)<x259)|x260);

	if (t63 != 1453) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;

	t64 = (((x261/x262)<x263)|x264);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = UINT64_MAX;
	uint16_t x267 = 8605U;
	int16_t x268 = INT16_MIN;
	int32_t t65 = 22546;

	t65 = (((x265/x266)<x267)|x268);

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x269 = 5243U;
	int8_t x270 = -41;
	uint8_t x271 = UINT8_MAX;
	int64_t x272 = 215319899971781LL;
	static volatile int64_t t66 = -286752687LL;

	t66 = (((x269/x270)<x271)|x272);

	if (t66 != 215319899971781LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = 509;
	int16_t x275 = -1;
	int32_t t67 = 30145345;

	t67 = (((x273/x274)<x275)|x276);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MAX;
	static volatile int32_t x280 = INT32_MIN;

	t68 = (((x277/x278)<x279)|x280);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 1U;
	static volatile uint32_t x283 = 1U;
	uint64_t x284 = 139151005949549850LLU;
	uint64_t t69 = 360581827158132LLU;

	t69 = (((x281/x282)<x283)|x284);

	if (t69 != 139151005949549851LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	static int8_t x288 = -1;
	volatile int32_t t70 = -300379020;

	t70 = (((x285/x286)<x287)|x288);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x289 = 2;
	volatile uint64_t x290 = 796995711LLU;
	volatile uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 452U;

	t71 = (((x289/x290)<x291)|x292);

	if (t71 != 453) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = UINT32_MAX;
	static volatile uint32_t x296 = UINT32_MAX;

	t72 = (((x293/x294)<x295)|x296);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = 6786;
	uint8_t x298 = 11U;
	uint16_t x299 = UINT16_MAX;
	volatile uint16_t x300 = 13U;
	static int32_t t73 = -44;

	t73 = (((x297/x298)<x299)|x300);

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x301 = -331229LL;
	int64_t x302 = -759819352LL;
	volatile int16_t x303 = 35;
	volatile int16_t x304 = -1;
	int32_t t74 = -12008972;

	t74 = (((x301/x302)<x303)|x304);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 124U;
	int64_t x307 = 308763128LL;
	volatile int32_t x308 = 2722;

	t75 = (((x305/x306)<x307)|x308);

	if (t75 != 2723) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x310 = INT64_MIN;
	int32_t x312 = -1;

	t76 = (((x309/x310)<x311)|x312);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t77 = 10549;

	t77 = (((x317/x318)<x319)|x320);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = -1;
	volatile int8_t x324 = INT8_MAX;
	int32_t t78 = 209;

	t78 = (((x321/x322)<x323)|x324);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -2155;
	int64_t x326 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	volatile int32_t t79 = -4284;

	t79 = (((x325/x326)<x327)|x328);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MAX;
	int16_t x331 = -1;
	static uint64_t x332 = 62877141376877LLU;
	volatile uint64_t t80 = 19099272948657LLU;

	t80 = (((x329/x330)<x331)|x332);

	if (t80 != 62877141376877LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1363LL;
	uint8_t x334 = UINT8_MAX;
	uint8_t x335 = 57U;
	static int64_t t81 = 213LL;

	t81 = (((x333/x334)<x335)|x336);

	if (t81 != -223733LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 3U;
	int16_t x338 = -2115;
	static int64_t x339 = INT64_MAX;
	int32_t x340 = -1;
	volatile int32_t t82 = -387750756;

	t82 = (((x337/x338)<x339)|x340);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x341 = INT32_MIN;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -7;
	volatile int64_t x344 = INT64_MIN;

	t83 = (((x341/x342)<x343)|x344);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x345 = INT16_MIN;
	static uint32_t x346 = 104U;
	uint16_t x347 = 6407U;
	int32_t t84 = -1;

	t84 = (((x345/x346)<x347)|x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x349 = INT32_MIN;
	uint8_t x350 = 1U;
	int8_t x351 = INT8_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x349/x350)<x351)|x352);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = -156833890;
	static volatile int8_t x355 = 1;
	volatile int32_t t86 = -117470;

	t86 = (((x353/x354)<x355)|x356);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x358 = 37364229293905851LLU;
	int32_t x360 = 3743;
	int32_t t87 = -7230038;

	t87 = (((x357/x358)<x359)|x360);

	if (t87 != 3743) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = -37;
	int8_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	static int16_t x364 = INT16_MAX;

	t88 = (((x361/x362)<x363)|x364);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x366 = 21U;
	int32_t x367 = -1;
	volatile int16_t x368 = -16;

	t89 = (((x365/x366)<x367)|x368);

	if (t89 != -15) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = -1;
	static volatile int64_t x370 = 2313412792LL;
	volatile uint64_t x371 = UINT64_MAX;
	int16_t x372 = -1;
	static int32_t t90 = -187922;

	t90 = (((x369/x370)<x371)|x372);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = 2620;
	int32_t x374 = INT32_MIN;

	t91 = (((x373/x374)<x375)|x376);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = 2408U;
	int8_t x379 = INT8_MAX;
	int32_t x380 = -107155;
	volatile int32_t t92 = 183;

	t92 = (((x377/x378)<x379)|x380);

	if (t92 != -107155) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x382 = -1;
	static int8_t x383 = INT8_MAX;
	static int8_t x384 = INT8_MAX;
	static int32_t t93 = -740369;

	t93 = (((x381/x382)<x383)|x384);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MIN;
	static int16_t x387 = -1;
	int16_t x388 = INT16_MIN;
	int32_t t94 = -670818651;

	t94 = (((x385/x386)<x387)|x388);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	uint8_t x394 = 21U;
	int32_t x395 = -16;
	volatile int8_t x396 = -1;
	static volatile int32_t t95 = -9366769;

	t95 = (((x393/x394)<x395)|x396);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x399 = 24;
	volatile uint64_t x400 = 2840073LLU;
	volatile uint64_t t96 = 15480LLU;

	t96 = (((x397/x398)<x399)|x400);

	if (t96 != 2840073LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x401 = INT64_MAX;
	uint16_t x402 = 10607U;
	int32_t x403 = INT32_MIN;
	volatile int8_t x404 = -1;
	int32_t t97 = 1025087881;

	t97 = (((x401/x402)<x403)|x404);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	volatile int32_t t98 = 20668;

	t98 = (((x405/x406)<x407)|x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = 0;
	int64_t x410 = 469LL;
	int16_t x411 = 0;
	int32_t x412 = INT32_MIN;
	static int32_t t99 = INT32_MIN;

	t99 = (((x409/x410)<x411)|x412);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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
