#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -19;
volatile int8_t x10 = INT8_MIN;
volatile int8_t x34 = INT8_MAX;
int8_t x35 = INT8_MIN;
int16_t x38 = INT16_MIN;
uint8_t x44 = UINT8_MAX;
int16_t x48 = -1;
volatile int8_t x50 = -55;
uint64_t x51 = 8619450033980LLU;
static int32_t x52 = 35;
int32_t t13 = -5640215;
int64_t x60 = 125588034899LL;
int16_t x65 = -44;
static int64_t x68 = INT64_MIN;
uint32_t x70 = UINT32_MAX;
volatile int32_t x71 = -1002;
int8_t x73 = INT8_MIN;
int64_t x75 = -344755016LL;
volatile uint32_t t18 = 123395U;
uint16_t x81 = 2297U;
volatile int16_t x84 = -2;
volatile uint8_t x85 = UINT8_MAX;
uint8_t x88 = 59U;
uint32_t x89 = 63U;
int32_t x100 = INT32_MAX;
static int32_t x108 = INT32_MIN;
uint8_t x116 = 0U;
volatile uint64_t t29 = 16747287990659146LLU;
int32_t t31 = 69389820;
static volatile int32_t x130 = INT32_MIN;
uint64_t x133 = 70592227720382LLU;
static int8_t x134 = INT8_MIN;
uint64_t t33 = 278320026831394LLU;
uint64_t x139 = 7LLU;
int8_t x141 = 61;
int32_t x146 = -1;
uint64_t x157 = 333359009LLU;
uint64_t t39 = 3254893021697551178LLU;
int16_t x168 = INT16_MIN;
uint16_t x173 = 4U;
uint8_t x178 = 32U;
volatile int32_t t44 = 10787292;
int64_t x184 = -3390146LL;
uint32_t x185 = 1143U;
int32_t x190 = -77;
int16_t x191 = -121;
uint32_t x194 = UINT32_MAX;
int16_t x199 = INT16_MIN;
int32_t x201 = -268826;
static int8_t x203 = INT8_MIN;
int8_t x212 = 0;
static int16_t x215 = INT16_MIN;
volatile int32_t t53 = 90;
volatile uint8_t x218 = 0U;
int8_t x223 = 40;
volatile uint64_t t56 = 13092211275042LLU;
static int32_t x233 = INT32_MIN;
int64_t x235 = -1LL;
volatile int32_t x239 = -1;
int32_t t62 = -1;
volatile int32_t x253 = INT32_MIN;
static volatile int32_t t63 = -384111;
uint16_t x258 = 366U;
static int64_t t66 = 3914212374538019LL;
int8_t x270 = INT8_MAX;
int8_t x275 = -3;
int32_t x277 = INT32_MIN;
int16_t x278 = INT16_MAX;
static uint64_t x285 = 135LLU;
int64_t x286 = 2171207LL;
int32_t x287 = 982;
int32_t x288 = INT32_MIN;
uint64_t t71 = 113315395143520LLU;
int32_t x289 = 30187854;
volatile uint64_t x296 = UINT64_MAX;
uint64_t t73 = 264LLU;
static int32_t x302 = INT32_MIN;
uint16_t x315 = UINT16_MAX;
int32_t t78 = -12273911;
static volatile int32_t t79 = 36951873;
int8_t x321 = 1;
static int64_t x322 = -20469129826752574LL;
volatile int64_t x323 = INT64_MIN;
volatile int32_t x326 = INT32_MIN;
int8_t x328 = -1;
static int64_t x329 = 33155LL;
int32_t x332 = INT32_MIN;
uint32_t t84 = 48988446U;
int8_t x341 = INT8_MAX;
volatile int64_t x342 = -1LL;
int32_t x349 = -1;
static volatile uint8_t x351 = 4U;
int16_t x359 = INT16_MAX;
int64_t x361 = INT64_MAX;
volatile int64_t t90 = 1LL;
static volatile int16_t x367 = -4;
volatile int64_t t91 = 46530548388LL;
static int8_t x377 = INT8_MAX;
uint64_t x378 = UINT64_MAX;
int64_t t95 = 8652679483LL;
uint8_t x385 = UINT8_MAX;
int8_t x390 = 1;
int8_t x394 = -1;
uint32_t x396 = 270U;
uint32_t t98 = 712824U;
volatile int16_t x398 = -1;


void f0(void) {
	int16_t x1 = 1;
	volatile int64_t x2 = 194829722562LL;
	int64_t x3 = -346933493613LL;
	int32_t x4 = INT32_MIN;

	t0 = (x1^((x2<=x3)|x4));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 2205U;
	uint16_t x7 = 5959U;
	int32_t x8 = 145109;
	int32_t t1 = -5361;

	t1 = (x5^((x6<=x7)|x8));

	if (t1 != 144938) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	static int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	static int64_t t2 = 26761196424465149LL;

	t2 = (x9^((x10<=x11)|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 0LL;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 7U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -2534462LL;

	t3 = (x13^((x14<=x15)|x16));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = -2236991599380257LL;
	int32_t x20 = -217604382;
	int32_t t4 = 99686643;

	t4 = (x17^((x18<=x19)|x20));

	if (t4 != 217587426) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 583LLU;
	int64_t x22 = INT64_MAX;
	int16_t x23 = -1;
	static int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = 3610LLU;

	t5 = (x21^((x22<=x23)|x24));

	if (t5 != 9223372036854775224LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 20U;
	volatile int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	volatile int8_t x28 = INT8_MIN;
	static int32_t t6 = -7424;

	t6 = (x25^((x26<=x27)|x28));

	if (t6 != -107) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = -3559443LL;
	volatile int64_t x32 = -2402193794729422LL;
	int64_t t7 = 119781622484985LL;

	t7 = (x29^((x30<=x31)|x32));

	if (t7 != 2402193794729421LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	int64_t t8 = 0LL;

	t8 = (x33^((x34<=x35)|x36));

	if (t8 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int8_t x39 = INT8_MAX;
	volatile int64_t x40 = INT64_MIN;
	static int64_t t9 = 52791LL;

	t9 = (x37^((x38<=x39)|x40));

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	static volatile uint32_t x42 = UINT32_MAX;
	int32_t x43 = -81597042;
	volatile int64_t t10 = -13859LL;

	t10 = (x41^((x42<=x43)|x44));

	if (t10 != -256LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int8_t x46 = INT8_MIN;
	static int32_t x47 = -1;
	int32_t t11 = 1;

	t11 = (x45^((x46<=x47)|x48));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 448790425U;
	uint32_t t12 = 152166293U;

	t12 = (x49^((x50<=x51)|x52));

	if (t12 != 448790458U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int32_t x54 = INT32_MIN;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = 27;

	t13 = (x53^((x54<=x55)|x56));

	if (t13 != -101) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = 406935307281733914LLU;
	volatile uint8_t x59 = UINT8_MAX;
	int64_t t14 = 132302160549796555LL;

	t14 = (x57^((x58<=x59)|x60));

	if (t14 != -125588023981LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = -1;
	int64_t x63 = INT64_MIN;
	volatile uint32_t x64 = UINT32_MAX;
	uint32_t t15 = 5914475U;

	t15 = (x61^((x62<=x63)|x64));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	int64_t t16 = 16606808834LL;

	t16 = (x65^((x66<=x67)|x68));

	if (t16 != 9223372036854775764LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 12996LLU;

	t17 = (x69^((x70<=x71)|x72));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = -1LL;
	uint32_t x76 = UINT32_MAX;

	t18 = (x73^((x74<=x75)|x76));

	if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = -3844605;
	volatile int32_t x78 = 42;
	static volatile int16_t x79 = 1;
	int64_t x80 = INT64_MAX;
	volatile int64_t t19 = 0LL;

	t19 = (x77^((x78<=x79)|x80));

	if (t19 != -9223372036850931204LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 26710LL;
	volatile int64_t x83 = -1LL;
	int32_t t20 = -131017;

	t20 = (x81^((x82<=x83)|x84));

	if (t20 != -2297) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MAX;
	int32_t t21 = 9101;

	t21 = (x85^((x86<=x87)|x88));

	if (t21 != 196) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	static uint64_t x92 = 69316445948LLU;
	volatile uint64_t t22 = 106126723LLU;

	t22 = (x89^((x90<=x91)|x92));

	if (t22 != 69316445890LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	volatile int64_t x95 = INT64_MIN;
	uint64_t x96 = 27LLU;
	uint64_t t23 = 598220154LLU;

	t23 = (x93^((x94<=x95)|x96));

	if (t23 != 9223372036854775835LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = -1;
	static uint8_t x99 = 1U;
	int32_t t24 = 1294783;

	t24 = (x97^((x98<=x99)|x100));

	if (t24 != -2147450881) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 190991793903LLU;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = 17;
	uint64_t t25 = 15LLU;

	t25 = (x101^((x102<=x103)|x104));

	if (t25 != 190991793918LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static uint32_t x106 = 568U;
	uint16_t x107 = 6126U;
	volatile int32_t t26 = 5;

	t26 = (x105^((x106<=x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MAX;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MIN;
	uint64_t t27 = 1319105LLU;

	t27 = (x109^((x110<=x111)|x112));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 2U;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 2U;
	static uint32_t t28 = 83206236U;

	t28 = (x113^((x114<=x115)|x116));

	if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 839581549368756LLU;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = INT16_MIN;
	static uint8_t x120 = 17U;

	t29 = (x117^((x118<=x119)|x120));

	if (t29 != 839581549368741LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MAX;
	static uint32_t x123 = 799722048U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = -212374376295LL;

	t30 = (x121^((x122<=x123)|x124));

	if (t30 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = -31;

	t31 = (x125^((x126<=x127)|x128));

	if (t31 != 30) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 6092755748LLU;

	t32 = (x129^((x130<=x131)|x132));

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = 0;
	int16_t x136 = INT16_MIN;

	t33 = (x133^((x134<=x135)|x136));

	if (t33 != 18446673481481829567LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = INT64_MIN;
	int8_t x140 = 0;
	int32_t t34 = 5457;

	t34 = (x137^((x138<=x139)|x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 90424U;
	volatile uint64_t x144 = 3239956744230LLU;
	volatile uint64_t t35 = 152583940LLU;

	t35 = (x141^((x142<=x143)|x144));

	if (t35 != 3239956744218LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = 53;
	uint64_t x147 = UINT64_MAX;
	static uint16_t x148 = UINT16_MAX;
	int32_t t36 = 3298915;

	t36 = (x145^((x146<=x147)|x148));

	if (t36 != 65482) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	volatile int16_t x150 = -177;
	static int64_t x151 = INT64_MIN;
	uint16_t x152 = UINT16_MAX;
	volatile int64_t t37 = 480131401364LL;

	t37 = (x149^((x150<=x151)|x152));

	if (t37 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile int64_t x154 = -1LL;
	int8_t x155 = -6;
	int64_t x156 = -1LL;
	static volatile int64_t t38 = 346085542626610LL;

	t38 = (x153^((x154<=x155)|x156));

	if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -287LL;
	uint8_t x159 = 1U;
	static int32_t x160 = INT32_MAX;

	t39 = (x157^((x158<=x159)|x160));

	if (t39 != 1814124638LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	static int8_t x162 = -1;
	uint8_t x163 = 11U;
	volatile uint16_t x164 = 310U;
	int32_t t40 = -4;

	t40 = (x161^((x162<=x163)|x164));

	if (t40 != 32456) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	static int64_t t41 = -2448622538698939203LL;

	t41 = (x165^((x166<=x167)|x168));

	if (t41 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -3;
	int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -13;
	static volatile int32_t t42 = 23;

	t42 = (x169^((x170<=x171)|x172));

	if (t42 != 14) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = INT16_MIN;
	static int64_t x175 = 1LL;
	volatile uint64_t x176 = 261LLU;
	volatile uint64_t t43 = 380LLU;

	t43 = (x173^((x174<=x175)|x176));

	if (t43 != 257LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int16_t x179 = -421;
	int8_t x180 = INT8_MIN;

	t44 = (x177^((x178<=x179)|x180));

	if (t44 != 2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 0U;
	int32_t x182 = -1;
	volatile uint8_t x183 = 0U;
	volatile int64_t t45 = -1481950195349LL;

	t45 = (x181^((x182<=x183)|x184));

	if (t45 != -3390145LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	volatile int32_t x188 = -1;
	static volatile uint32_t t46 = 14U;

	t46 = (x185^((x186<=x187)|x188));

	if (t46 != 4294966152U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	int32_t x192 = 0;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x189^((x190<=x191)|x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int16_t x195 = INT16_MAX;
	int8_t x196 = -52;
	int32_t t48 = -8960;

	t48 = (x193^((x194<=x195)|x196));

	if (t48 != 32716) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int8_t x198 = INT8_MAX;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = -3;

	t49 = (x197^((x198<=x199)|x200));

	if (t49 != 2147483520) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 545489135982725572LLU;
	volatile int64_t x204 = INT64_MAX;
	static int64_t t50 = -180831LL;

	t50 = (x201^((x202<=x203)|x204));

	if (t50 != -9223372036854506983LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile int16_t x206 = INT16_MIN;
	int64_t x207 = -83665051937101LL;
	volatile uint32_t x208 = 14U;
	static volatile uint32_t t51 = 338100131U;

	t51 = (x205^((x206<=x207)|x208));

	if (t51 != 4294934542U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 3801U;
	int8_t x210 = -3;
	uint16_t x211 = UINT16_MAX;
	int32_t t52 = 3746;

	t52 = (x209^((x210<=x211)|x212));

	if (t52 != 3800) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	volatile uint8_t x214 = 8U;
	int8_t x216 = INT8_MAX;

	t53 = (x213^((x214<=x215)|x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x219 = -896;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 2;

	t54 = (x217^((x218<=x219)|x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 2808;
	int16_t x222 = -51;
	static int16_t x224 = -1;
	int32_t t55 = -7271;

	t55 = (x221^((x222<=x223)|x224));

	if (t55 != -2809) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int16_t x226 = INT16_MIN;
	uint64_t x227 = 19665705090153607LLU;
	volatile uint32_t x228 = UINT32_MAX;

	t56 = (x225^((x226<=x227)|x228));

	if (t56 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 1;

	t57 = (x229^((x230<=x231)|x232));

	if (t57 != -65409) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = -1LL;
	static uint8_t x236 = 3U;
	int32_t t58 = -11572654;

	t58 = (x233^((x234<=x235)|x236));

	if (t58 != -2147483645) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	volatile int16_t x238 = -4555;
	volatile int8_t x240 = -1;
	int32_t t59 = -30;

	t59 = (x237^((x238<=x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = UINT16_MAX;
	int64_t x242 = 2243474724602778LL;
	int64_t x243 = INT64_MIN;
	volatile int8_t x244 = -30;
	volatile int32_t t60 = 15533322;

	t60 = (x241^((x242<=x243)|x244));

	if (t60 != -65507) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 187805354U;
	uint8_t x246 = 14U;
	int8_t x247 = -1;
	static volatile uint64_t x248 = 8LLU;
	uint64_t t61 = 355950LLU;

	t61 = (x245^((x246<=x247)|x248));

	if (t61 != 187805346LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 650U;
	int16_t x251 = INT16_MAX;
	volatile int16_t x252 = INT16_MIN;

	t62 = (x249^((x250<=x251)|x252));

	if (t62 != 32641) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -1;
	int64_t x255 = -5179LL;
	volatile int32_t x256 = 3;

	t63 = (x253^((x254<=x255)|x256));

	if (t63 != -2147483645) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile int32_t x259 = 3986947;
	int32_t x260 = -1;
	static int32_t t64 = -109866435;

	t64 = (x257^((x258<=x259)|x260));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = 13U;
	int8_t x264 = INT8_MAX;
	int64_t t65 = -26136065LL;

	t65 = (x261^((x262<=x263)|x264));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MAX;
	int8_t x266 = -9;
	uint16_t x267 = UINT16_MAX;
	volatile uint16_t x268 = 22U;

	t66 = (x265^((x266<=x267)|x268));

	if (t66 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int32_t x271 = INT32_MAX;
	volatile uint64_t x272 = 1008631LLU;
	static uint64_t t67 = 1698507792194LLU;

	t67 = (x269^((x270<=x271)|x272));

	if (t67 != 18446744073708542984LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static uint8_t x274 = UINT8_MAX;
	int16_t x276 = 100;
	int32_t t68 = 12725;

	t68 = (x273^((x274<=x275)|x276));

	if (t68 != -101) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x279 = 412740844U;
	int32_t x280 = -371127036;
	int32_t t69 = 75;

	t69 = (x277^((x278<=x279)|x280));

	if (t69 != 1776356613) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 57U;
	int64_t x282 = -1LL;
	static int16_t x283 = INT16_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t70 = -37475621293496LL;

	t70 = (x281^((x282<=x283)|x284));

	if (t70 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f71(void) {


	t71 = (x285^((x286<=x287)|x288));

	if (t71 != 18446744071562068103LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	static int8_t x291 = -1;
	volatile int16_t x292 = 0;
	int32_t t72 = -7;

	t72 = (x289^((x290<=x291)|x292));

	if (t72 != 30187855) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 88U;
	int16_t x294 = 197;
	static volatile int16_t x295 = INT16_MIN;

	t73 = (x293^((x294<=x295)|x296));

	if (t73 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	static int32_t x298 = 0;
	uint32_t x299 = 131203941U;
	int16_t x300 = INT16_MIN;
	int64_t t74 = 841055092563723LL;

	t74 = (x297^((x298<=x299)|x300));

	if (t74 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = 0;
	int16_t x303 = INT16_MAX;
	int16_t x304 = 10716;
	int32_t t75 = -29836227;

	t75 = (x301^((x302<=x303)|x304));

	if (t75 != 10717) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -57;
	static int16_t x306 = INT16_MIN;
	static uint8_t x307 = UINT8_MAX;
	static volatile int16_t x308 = -58;
	volatile int32_t t76 = -27378520;

	t76 = (x305^((x306<=x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	int16_t x312 = 10;
	volatile int32_t t77 = 4974;

	t77 = (x309^((x310<=x311)|x312));

	if (t77 != -12) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MAX;
	uint64_t x314 = 287113248333233734LLU;
	volatile int32_t x316 = INT32_MIN;

	t78 = (x313^((x314<=x315)|x316));

	if (t78 != -2147483521) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int32_t x318 = -54175;
	uint64_t x319 = UINT64_MAX;
	static int32_t x320 = -5140;

	t79 = (x317^((x318<=x319)|x320));

	if (t79 != 5138) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x324 = INT8_MAX;
	int32_t t80 = -2581784;

	t80 = (x321^((x322<=x323)|x324));

	if (t80 != 126) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 7481U;
	volatile int32_t x327 = INT32_MIN;
	int32_t t81 = 10077;

	t81 = (x325^((x326<=x327)|x328));

	if (t81 != -7482) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = 11692;
	volatile uint8_t x331 = UINT8_MAX;
	int64_t t82 = 176LL;

	t82 = (x329^((x330<=x331)|x332));

	if (t82 != -2147450493LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -1;
	volatile uint8_t x334 = 49U;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -4233;

	t83 = (x333^((x334<=x335)|x336));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 133175242U;
	int64_t x338 = INT64_MAX;
	int64_t x339 = -54525429140294LL;
	static int16_t x340 = INT16_MAX;

	t84 = (x337^((x338<=x339)|x340));

	if (t84 != 133195829U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 1U;
	static volatile int32_t t85 = 36166520;

	t85 = (x341^((x342<=x343)|x344));

	if (t85 != 126) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int32_t x346 = INT32_MAX;
	int16_t x347 = -1;
	static uint64_t x348 = 61725923388308LLU;
	static volatile uint64_t t86 = 2047924344226LLU;

	t86 = (x345^((x346<=x347)|x348));

	if (t86 != 18446682347786163307LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x350 = UINT64_MAX;
	int16_t x352 = -2;
	static int32_t t87 = 1;

	t87 = (x349^((x350<=x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static volatile int8_t x354 = -1;
	static int32_t x355 = 14470;
	int64_t x356 = -1LL;
	static int64_t t88 = 11229664LL;

	t88 = (x353^((x354<=x355)|x356));

	if (t88 != -65536LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MAX;
	int64_t x360 = 195889LL;
	int64_t t89 = -3734324363633558LL;

	t89 = (x357^((x358<=x359)|x360));

	if (t89 != 2147287758LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t x363 = INT32_MIN;
	uint8_t x364 = 121U;

	t90 = (x361^((x362<=x363)|x364));

	if (t90 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MIN;
	static volatile uint8_t x368 = 102U;

	t91 = (x365^((x366<=x367)|x368));

	if (t91 != -9223372036854775705LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 124;
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -1;
	int32_t t92 = -1669;

	t92 = (x369^((x370<=x371)|x372));

	if (t92 != -125) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 6756LL;
	int64_t x374 = INT64_MIN;
	volatile int64_t x375 = -103LL;
	volatile uint64_t x376 = 430993645718LLU;
	static uint64_t t93 = 224528302LLU;

	t93 = (x373^((x374<=x375)|x376));

	if (t93 != 430993652467LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x379 = -376408337;
	volatile int32_t x380 = -1;
	static int32_t t94 = 220402;

	t94 = (x377^((x378<=x379)|x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 148340624U;
	int32_t x382 = -2;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MAX;

	t95 = (x381^((x382<=x383)|x384));

	if (t95 != 9223372036706435183LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -1;
	int64_t x387 = INT64_MAX;
	volatile int16_t x388 = -1;
	volatile int32_t t96 = 105842604;

	t96 = (x385^((x386<=x387)|x388));

	if (t96 != -256) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 23100207890038LLU;
	uint16_t x391 = 317U;
	int32_t x392 = INT32_MAX;
	uint64_t t97 = 102117511826230LLU;

	t97 = (x389^((x390<=x391)|x392));

	if (t97 != 23098607829385LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int8_t x395 = INT8_MIN;

	t98 = (x393^((x394<=x395)|x396));

	if (t98 != 4294967025U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -1;
	volatile int64_t x399 = INT64_MAX;
	int32_t x400 = 41419;
	int32_t t99 = 4600;

	t99 = (x397^((x398<=x399)|x400));

	if (t99 != -41420) { NG(); } else { ; }
	
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
