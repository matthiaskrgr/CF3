#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1U;
int32_t x2 = INT32_MIN;
uint8_t x4 = 6U;
uint32_t t0 = 3162U;
uint64_t x8 = 88342109915LLU;
static uint64_t x10 = 8483578197LLU;
static volatile int8_t x11 = INT8_MAX;
int32_t x14 = -1;
static uint8_t x20 = 36U;
int32_t x22 = INT32_MIN;
int64_t t6 = -172641561105425LL;
static volatile uint64_t t8 = 5893114616LLU;
uint64_t x37 = 95LLU;
static int32_t x39 = INT32_MAX;
uint8_t x41 = 3U;
int64_t x45 = INT64_MIN;
static uint32_t x53 = 272U;
volatile uint32_t t13 = 27235U;
uint32_t x59 = 2470U;
int8_t x62 = -1;
int64_t x71 = INT64_MIN;
uint16_t x72 = 26397U;
int8_t x89 = INT8_MIN;
uint32_t x92 = UINT32_MAX;
int16_t x100 = 0;
static volatile uint32_t t24 = 1235452U;
uint32_t x104 = 5U;
static uint64_t t25 = 104665721513897649LLU;
static int64_t x105 = -120243203LL;
int8_t x109 = INT8_MAX;
int16_t x110 = INT16_MIN;
int8_t x111 = INT8_MAX;
volatile int64_t x112 = -1LL;
int32_t x116 = INT32_MAX;
uint32_t x119 = UINT32_MAX;
int8_t x120 = -7;
static int64_t x123 = -124LL;
int64_t x124 = 1747LL;
volatile uint64_t t31 = 4169935930796544LLU;
volatile int64_t t32 = 22627837765LL;
int16_t x137 = -226;
int32_t t34 = 811538;
uint64_t x142 = 1302479558634799274LLU;
int16_t x143 = -1;
uint8_t x144 = 5U;
static uint16_t x154 = 2022U;
volatile int64_t t39 = -395187528722525LL;
volatile int64_t t40 = -9LL;
int64_t t41 = -12LL;
int16_t x170 = INT16_MIN;
uint32_t x173 = 40043194U;
int32_t x174 = INT32_MAX;
uint32_t x178 = 138670U;
volatile uint32_t x179 = 1267U;
int16_t x184 = 127;
int8_t x186 = 0;
int16_t x193 = INT16_MAX;
int32_t x195 = 1061434743;
static int8_t x199 = -6;
uint32_t t49 = 3671759U;
int64_t x202 = INT64_MIN;
uint64_t t50 = 14956LLU;
static int8_t x206 = INT8_MIN;
uint8_t x207 = UINT8_MAX;
volatile int64_t x211 = -319360559992314LL;
int16_t x216 = 3;
int8_t x222 = INT8_MIN;
volatile uint64_t x224 = UINT64_MAX;
static int8_t x227 = INT8_MIN;
uint16_t x228 = 174U;
int32_t t56 = -21;
volatile uint8_t x229 = 85U;
int16_t x233 = INT16_MIN;
int16_t x238 = -1;
volatile int64_t x240 = 387219946728LL;
int64_t t59 = 1LL;
int16_t x241 = INT16_MIN;
volatile int32_t x243 = 122553860;
int32_t x248 = 4;
int64_t x251 = -1LL;
int64_t t62 = 32826575950688332LL;
uint16_t x255 = 26U;
volatile uint64_t x276 = 12293949316LLU;
static int32_t x278 = -1;
int16_t x280 = INT16_MIN;
static uint64_t t69 = 563280918918LLU;
static int32_t t71 = -128249;
uint8_t x294 = UINT8_MAX;
volatile int8_t x297 = 2;
static int64_t x299 = -559292821099683453LL;
static int16_t x300 = INT16_MIN;
static int64_t t74 = -45LL;
int64_t x301 = INT64_MIN;
int32_t x310 = INT32_MIN;
uint8_t x334 = 28U;
int16_t x341 = INT16_MIN;
uint16_t x346 = 0U;
int64_t t86 = 1123016927174339314LL;
int64_t x349 = -1LL;
volatile int64_t x354 = -1LL;
volatile int32_t t89 = 1;
volatile uint64_t t90 = 14284LLU;
int16_t x367 = INT16_MIN;
static int16_t x371 = INT16_MIN;
int32_t x375 = INT32_MAX;
volatile int64_t t94 = 0LL;
static volatile int8_t x385 = INT8_MIN;
volatile uint64_t x386 = 8063084744832639LLU;
int64_t x390 = 158358412567868739LL;
static int16_t x395 = -60;


void f0(void) {
	static int8_t x3 = INT8_MIN;

	t0 = (((x1|x2)^x3)|x4);

	if (t0 != 2147483527U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int16_t x6 = 266;
	int16_t x7 = INT16_MIN;
	uint64_t t1 = 808LLU;

	t1 = (((x5|x6)^x7)|x8);

	if (t1 != 88342134783LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 4011;
	uint32_t x12 = 722706U;
	static volatile uint64_t t2 = 13911933106278LLU;

	t2 = (((x9|x10)^x11)|x12);

	if (t2 != 8483712914LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 17U;
	int64_t x15 = INT64_MIN;
	int8_t x16 = 1;
	static volatile int64_t t3 = INT64_MAX;

	t3 = (((x13|x14)^x15)|x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int32_t x18 = -1;
	static int64_t x19 = -1LL;
	int64_t t4 = -14912841761074LL;

	t4 = (((x17|x18)^x19)|x20);

	if (t4 != -4294967260LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint64_t x23 = 110LLU;
	int32_t x24 = -1;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (((x21|x22)^x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 8U;
	int64_t x26 = -117393551LL;
	int16_t x27 = 1;
	volatile uint16_t x28 = 21344U;

	t6 = (((x25|x26)^x27)|x28);

	if (t6 != -117377160LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static int8_t x30 = INT8_MAX;
	int8_t x31 = -13;
	uint8_t x32 = 3U;
	volatile int32_t t7 = -795;

	t7 = (((x29|x30)^x31)|x32);

	if (t7 != -113) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 76U;
	volatile uint64_t x35 = 10LLU;
	int16_t x36 = 1;

	t8 = (((x33|x34)^x35)|x36);

	if (t8 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	volatile uint8_t x40 = 126U;
	volatile uint64_t t9 = 45689924261240213LLU;

	t9 = (((x37|x38)^x39)|x40);

	if (t9 != 2147451006LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = 7136919034LLU;
	int8_t x43 = INT8_MIN;
	volatile int8_t x44 = INT8_MIN;
	volatile uint64_t t10 = 29033LLU;

	t10 = (((x41|x42)^x43)|x44);

	if (t10 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = 0;
	uint64_t x47 = 47791557914470LLU;
	uint16_t x48 = UINT16_MAX;
	static volatile uint64_t t11 = 4084857537631094LLU;

	t11 = (((x45|x46)^x47)|x48);

	if (t11 != 9223419828412743679LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -2;
	static uint16_t x50 = UINT16_MAX;
	static int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (((x49|x50)^x51)|x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	volatile int16_t x56 = INT16_MIN;

	t13 = (((x53|x54)^x55)|x56);

	if (t13 != 4294967184U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	static uint32_t x58 = 28130U;
	volatile uint32_t x60 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (((x57|x58)^x59)|x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x63 = 15480767;
	uint8_t x64 = 94U;
	int64_t t15 = 14229LL;

	t15 = (((x61|x62)^x63)|x64);

	if (t15 != -15480738LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	uint32_t x66 = 305478U;
	int8_t x67 = INT8_MIN;
	int64_t x68 = 571961LL;
	int64_t t16 = -443LL;

	t16 = (((x65|x66)^x67)|x68);

	if (t16 != 2147221247LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1574;
	static uint8_t x70 = UINT8_MAX;
	static int64_t t17 = INT64_MAX;

	t17 = (((x69|x70)^x71)|x72);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = -1;
	int32_t t18 = -5069;

	t18 = (((x73|x74)^x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 275;
	uint64_t x78 = 28777357332LLU;
	uint16_t x79 = 26U;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t19 = 22027127LLU;

	t19 = (((x77|x78)^x79)|x80);

	if (t19 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 0U;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 3466328U;
	static uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x81|x82)^x83)|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	volatile int64_t x86 = -1LL;
	int32_t x87 = -1;
	int16_t x88 = -1;
	volatile int64_t t21 = -792281613LL;

	t21 = (((x85|x86)^x87)|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	volatile int8_t x91 = 10;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (((x89|x90)^x91)|x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -22;
	int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 49876544U;
	int64_t t23 = INT64_MAX;

	t23 = (((x93|x94)^x95)|x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MIN;
	volatile uint32_t x99 = 53227U;

	t24 = (((x97|x98)^x99)|x100);

	if (t24 != 4294914155U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 7731491LLU;
	int8_t x102 = 44;
	static int64_t x103 = -51186549884LL;

	t25 = (((x101|x102)^x103)|x104);

	if (t25 != 18446744022530572975LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = INT32_MIN;
	static int32_t x108 = INT32_MIN;
	volatile int64_t t26 = 78428910795LL;

	t26 = (((x105|x106)^x107)|x108);

	if (t26 != -120243203LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t t27 = -4000054928599LL;

	t27 = (((x109|x110)^x111)|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 4861;
	volatile uint8_t x114 = 2U;
	uint64_t x115 = 37267060412891LLU;
	uint64_t t28 = 2100864729070LLU;

	t28 = (((x113|x114)^x115)|x116);

	if (t28 != 37267431227391LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -165929600873LL;
	uint32_t x118 = 250U;
	static int64_t t29 = 127045312859840542LL;

	t29 = (((x117|x118)^x119)|x120);

	if (t29 != -7LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = -1;
	static uint32_t x122 = 26870094U;
	int64_t t30 = 37960746LL;

	t30 = (((x121|x122)^x123)|x124);

	if (t30 != -4294965509LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	static uint64_t x126 = 523359844612589988LLU;
	int64_t x127 = INT64_MIN;
	volatile int32_t x128 = INT32_MIN;

	t31 = (((x125|x126)^x127)|x128);

	if (t31 != 18446744073639755775LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int64_t x130 = -990117LL;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MIN;

	t32 = (((x129|x130)^x131)|x132);

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MIN;
	int16_t x135 = -4;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t33 = INT64_MAX;

	t33 = (((x133|x134)^x135)|x136);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 0U;
	int8_t x139 = -29;
	static volatile int8_t x140 = -1;

	t34 = (((x137|x138)^x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x141 = 1U;
	volatile uint64_t t35 = 7136704760LLU;

	t35 = (((x141|x142)^x143)|x144);

	if (t35 != 17144264515074752341LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	static volatile int64_t t36 = 13106410269216284LL;

	t36 = (((x145|x146)^x147)|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 5U;
	int32_t x150 = -10;
	static int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 14841295;

	t37 = (((x149|x150)^x151)|x152);

	if (t37 != -32649) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 55809U;
	int16_t x155 = 3;
	volatile int64_t x156 = 15655368LL;
	static volatile int64_t t38 = -50955018629299125LL;

	t38 = (((x153|x154)^x155)|x156);

	if (t38 != 15663084LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	volatile int64_t x158 = INT64_MIN;
	static uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;

	t39 = (((x157|x158)^x159)|x160);

	if (t39 != -256LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	int64_t x162 = INT64_MAX;
	uint16_t x163 = 13U;
	int8_t x164 = INT8_MAX;

	t40 = (((x161|x162)^x163)|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -3683783355027054LL;
	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -1;

	t41 = (((x165|x166)^x167)|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 4U;
	uint8_t x171 = 1U;
	volatile uint64_t x172 = 88LLU;
	uint64_t t42 = 29LLU;

	t42 = (((x169|x170)^x171)|x172);

	if (t42 != 18446744073709518941LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x175 = 16093007688LL;
	int8_t x176 = -2;
	volatile int64_t t43 = 46LL;

	t43 = (((x173|x174)^x175)|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t44 = 185U;

	t44 = (((x177|x178)^x179)|x180);

	if (t44 != 4294967261U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 200LLU;
	uint64_t x182 = UINT64_MAX;
	volatile int8_t x183 = INT8_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x181|x182)^x183)|x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 2;
	uint16_t x187 = 14U;
	volatile int64_t x188 = INT64_MAX;
	int64_t t46 = INT64_MAX;

	t46 = (((x185|x186)^x187)|x188);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 623U;
	static int16_t x190 = -5092;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 12717U;
	int64_t t47 = -16098LL;

	t47 = (((x189|x190)^x191)|x192);

	if (t47 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -1;
	static uint8_t x196 = 31U;
	static int32_t t48 = -7400;

	t48 = (((x193|x194)^x195)|x196);

	if (t48 != -1061434721) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int8_t x198 = INT8_MIN;
	int32_t x200 = -1892;

	t49 = (((x197|x198)^x199)|x200);

	if (t49 != 4294965405U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	uint64_t x203 = 1068736525216658LLU;
	uint32_t x204 = 80U;

	t50 = (((x201|x202)^x203)|x204);

	if (t50 != 9224440773379970173LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 178;

	t51 = (((x205|x206)^x207)|x208);

	if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	uint64_t x210 = 247264649729866109LLU;
	static int32_t x212 = INT32_MAX;
	volatile uint64_t t52 = 189967493LLU;

	t52 = (((x209|x210)^x211)|x212);

	if (t52 != 319360883228671LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 12500LL;
	static int32_t x214 = -1;
	static int16_t x215 = INT16_MIN;
	volatile int64_t t53 = 401197LL;

	t53 = (((x213|x214)^x215)|x216);

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static uint64_t x218 = 23872959277LLU;
	static int32_t x219 = INT32_MIN;
	static volatile int8_t x220 = -1;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x217|x218)^x219)|x220);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 27138721LLU;
	uint32_t x223 = 30987973U;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x221|x222)^x223)|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MAX;
	volatile int8_t x226 = 0;

	t56 = (((x225|x226)^x227)|x228);

	if (t56 != -2147483393) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = 11273;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	static volatile int64_t t57 = -2178548771934LL;

	t57 = (((x229|x230)^x231)|x232);

	if (t57 != -21411LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	int64_t x235 = INT64_MAX;
	int32_t x236 = -2;
	int64_t t58 = 732410LL;

	t58 = (((x233|x234)^x235)|x236);

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int16_t x239 = INT16_MIN;

	t59 = (((x237|x238)^x239)|x240);

	if (t59 != 387219947519LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	int16_t x244 = -13;
	volatile int32_t t60 = 64270820;

	t60 = (((x241|x242)^x243)|x244);

	if (t60 != -9) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	int32_t t61 = 185073807;

	t61 = (((x245|x246)^x247)|x248);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 2565U;
	int64_t x250 = INT64_MAX;
	int8_t x252 = -1;

	t62 = (((x249|x250)^x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 113U;
	static int64_t x254 = -222205LL;
	int64_t x256 = -8LL;
	static volatile int64_t t63 = -4025274LL;

	t63 = (((x253|x254)^x255)|x256);

	if (t63 != -7LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 63U;
	int64_t x258 = -1LL;
	volatile uint8_t x259 = UINT8_MAX;
	static int16_t x260 = 1;
	volatile int64_t t64 = -473417LL;

	t64 = (((x257|x258)^x259)|x260);

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = -23;
	static int8_t x263 = -6;
	uint64_t x264 = 3132962640452LLU;
	uint64_t t65 = 523149258LLU;

	t65 = (((x261|x262)^x263)|x264);

	if (t65 != 3132962640471LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MAX;
	static int8_t x267 = INT8_MIN;
	uint8_t x268 = 2U;
	int64_t t66 = 141940766338430983LL;

	t66 = (((x265|x266)^x267)|x268);

	if (t66 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	static volatile int8_t x270 = -1;
	uint16_t x271 = 1U;
	volatile uint8_t x272 = 8U;
	int32_t t67 = -399859;

	t67 = (((x269|x270)^x271)|x272);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	uint8_t x275 = 79U;
	volatile uint64_t t68 = 219445291769967475LLU;

	t68 = (((x273|x274)^x275)|x276);

	if (t68 != 18446744073118599119LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 72911381LLU;
	volatile uint8_t x279 = 6U;

	t69 = (((x277|x278)^x279)|x280);

	if (t69 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = 0;
	static int16_t x284 = INT16_MAX;
	volatile int64_t t70 = -664841LL;

	t70 = (((x281|x282)^x283)|x284);

	if (t70 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 3U;
	static int16_t x288 = INT16_MAX;

	t71 = (((x285|x286)^x287)|x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	static int8_t x291 = -1;
	volatile uint8_t x292 = 1U;
	int64_t t72 = -15LL;

	t72 = (((x289|x290)^x291)|x292);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 693LLU;
	int32_t x295 = INT32_MIN;
	static int8_t x296 = -1;
	uint64_t t73 = UINT64_MAX;

	t73 = (((x293|x294)^x295)|x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 88391811U;

	t74 = (((x297|x298)^x299)|x300);

	if (t74 != -24320LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = -1;
	int64_t x303 = 44742093692LL;
	int32_t x304 = INT32_MIN;
	int64_t t75 = 220083988718LL;

	t75 = (((x301|x302)^x303)|x304);

	if (t75 != -1792420733LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	static int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 2U;
	volatile int32_t t76 = 351629877;

	t76 = (((x305|x306)^x307)|x308);

	if (t76 != -2147483521) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 286007U;
	int64_t x311 = -1LL;
	volatile uint8_t x312 = 4U;
	volatile int64_t t77 = 17971022649843LL;

	t77 = (((x309|x310)^x311)|x312);

	if (t77 != -2147769652LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MIN;
	volatile int64_t x314 = 689019710858153575LL;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MAX;
	volatile int64_t t78 = -33838619741590054LL;

	t78 = (((x313|x314)^x315)|x316);

	if (t78 != 8534352326162481151LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 1916;
	int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -13213678;

	t79 = (((x317|x318)^x319)|x320);

	if (t79 != -1793) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = UINT32_MAX;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = 26;
	int32_t x324 = INT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (((x321|x322)^x323)|x324);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 6U;
	volatile uint32_t x326 = 225U;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	volatile int64_t t81 = -231417LL;

	t81 = (((x325|x326)^x327)|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x329 = 5;
	int32_t x330 = INT32_MIN;
	static int32_t x331 = INT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 283150;

	t82 = (((x329|x330)^x331)|x332);

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -3;
	int16_t x335 = -1;
	int8_t x336 = -1;
	static int32_t t83 = 1525029;

	t83 = (((x333|x334)^x335)|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int16_t x338 = INT16_MAX;
	static int16_t x339 = -1;
	int32_t x340 = 2393;
	int32_t t84 = -13;

	t84 = (((x337|x338)^x339)|x340);

	if (t84 != -63143) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x342 = 50714496LL;
	volatile uint8_t x343 = 1U;
	int32_t x344 = INT32_MIN;
	volatile int64_t t85 = 3714808519808754LL;

	t85 = (((x341|x342)^x343)|x344);

	if (t85 != -10367LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 4U;
	int32_t x347 = -7;
	static volatile int64_t x348 = INT64_MIN;

	t86 = (((x345|x346)^x347)|x348);

	if (t86 != -3LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x350 = 0U;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t87 = -13382LL;

	t87 = (((x349|x350)^x351)|x352);

	if (t87 != -256LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1949360LLU;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MAX;
	uint64_t t88 = 29044117392221324LLU;

	t88 = (((x353|x354)^x355)|x356);

	if (t88 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 8979U;
	int32_t x358 = -1;
	uint8_t x359 = 5U;
	int8_t x360 = INT8_MIN;

	t89 = (((x357|x358)^x359)|x360);

	if (t89 != -6) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = 4125LLU;
	uint16_t x363 = 63U;
	volatile int16_t x364 = -245;

	t90 = (((x361|x362)^x363)|x364);

	if (t90 != 18446744073709551403LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 1470U;
	int32_t x366 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	int64_t t91 = 318642419LL;

	t91 = (((x365|x366)^x367)|x368);

	if (t91 != -9223372034707323458LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -220342;
	volatile uint64_t x372 = 8391056828971237LLU;
	volatile uint64_t t92 = 50258LLU;

	t92 = (((x369|x370)^x371)|x372);

	if (t92 != 8391056829168623LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t93 = 8;

	t93 = (((x373|x374)^x375)|x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -1LL;
	volatile int8_t x378 = -1;
	volatile int32_t x379 = -1;
	int32_t x380 = -1;

	t94 = (((x377|x378)^x379)|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int64_t x382 = 137968366262933462LL;
	int32_t x383 = 3662866;
	int16_t x384 = INT16_MIN;
	static int64_t t95 = -512619780059578924LL;

	t95 = (((x381|x382)^x383)|x384);

	if (t95 != -19475LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = -5;
	int16_t x388 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (((x385|x386)^x387)|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static int8_t x391 = 1;
	volatile int64_t x392 = INT64_MAX;
	static int64_t t97 = -6762745LL;

	t97 = (((x389|x390)^x391)|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = 1685;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = -3123;

	t98 = (((x393|x394)^x395)|x396);

	if (t98 != -1711) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MAX;
	int16_t x399 = -1;
	int64_t x400 = 242768396539034268LL;
	static int64_t t99 = 442LL;

	t99 = (((x397|x398)^x399)|x400);

	if (t99 != 242768396539034268LL) { NG(); } else { ; }
	
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
