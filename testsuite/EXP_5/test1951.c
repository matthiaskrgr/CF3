#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int16_t x4 = INT16_MIN;
volatile int32_t t1 = 1423120;
volatile int64_t t13 = INT64_MIN;
int32_t t14 = 66783336;
int32_t x61 = INT32_MIN;
volatile uint16_t x63 = 18259U;
int32_t t15 = INT32_MIN;
int64_t x80 = -1LL;
int32_t x81 = -12;
uint32_t x93 = 23U;
int16_t x99 = INT16_MAX;
volatile uint64_t t24 = 2LLU;
int64_t x104 = INT64_MAX;
uint32_t x108 = 1800012U;
static uint8_t x110 = 3U;
static uint16_t x111 = UINT16_MAX;
int8_t x112 = 0;
int32_t x113 = INT32_MIN;
int8_t x119 = 11;
volatile int32_t t29 = 1;
volatile int32_t t31 = 48282990;
uint16_t x130 = 308U;
int8_t x131 = INT8_MIN;
int64_t x133 = -173661081973102616LL;
uint8_t x138 = 11U;
uint32_t x146 = 1U;
uint32_t x149 = 16494767U;
static volatile int16_t x151 = INT16_MAX;
static int64_t x153 = -226956646407LL;
static int64_t x155 = INT64_MIN;
int32_t x157 = 1046964542;
int32_t t39 = -55389335;
volatile int8_t x162 = INT8_MIN;
int64_t x170 = -1LL;
uint8_t x171 = 19U;
volatile int64_t t43 = 13008325782986LL;
int32_t t44 = 59246;
volatile int64_t t45 = INT64_MIN;
int64_t x189 = INT64_MAX;
volatile int64_t t47 = INT64_MAX;
int32_t x196 = INT32_MAX;
int32_t t50 = 1961223;
uint64_t x206 = UINT64_MAX;
volatile uint8_t x214 = 13U;
uint8_t x216 = 85U;
static int8_t x218 = INT8_MIN;
int64_t x220 = 11LL;
static int8_t x221 = INT8_MIN;
uint64_t x222 = 5628LLU;
volatile int8_t x224 = -1;
volatile int32_t t56 = 9;
int32_t x232 = INT32_MIN;
int64_t x235 = INT64_MAX;
uint16_t x237 = UINT16_MAX;
static volatile uint32_t x242 = UINT32_MAX;
uint8_t x248 = 1U;
int32_t t63 = -29319792;
volatile int32_t x257 = 33827;
static volatile uint16_t x260 = UINT16_MAX;
volatile uint64_t x269 = 59294259LLU;
uint32_t x271 = 37272127U;
uint32_t x273 = UINT32_MAX;
uint32_t t68 = UINT32_MAX;
int32_t x299 = INT32_MAX;
int32_t x300 = INT32_MIN;
int16_t x305 = INT16_MAX;
volatile uint16_t x312 = UINT16_MAX;
uint8_t x315 = 7U;
volatile int16_t x316 = INT16_MAX;
int64_t x325 = INT64_MAX;
int32_t x326 = INT32_MAX;
int64_t x328 = 1LL;
int32_t x333 = 10421124;
static int16_t x334 = 38;
uint8_t x335 = 1U;
int8_t x342 = INT8_MIN;
volatile int16_t x346 = -1;
volatile int32_t t86 = -2735;
int32_t t88 = 17;
static uint16_t x357 = 5U;
static uint8_t x364 = UINT8_MAX;
int16_t x367 = INT16_MIN;
static uint16_t x371 = UINT16_MAX;
volatile int64_t t92 = -1325754517761974759LL;
int16_t x377 = -125;
static uint32_t x382 = UINT32_MAX;
volatile uint32_t x386 = 52665423U;
static volatile int32_t t96 = -74102;
static int32_t x391 = 751;
int16_t x393 = 0;
int32_t t98 = 785820042;
int16_t x397 = INT16_MAX;
static uint32_t x398 = 522456U;
static volatile int32_t t99 = -31;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	int32_t t0 = INT32_MIN;

	t0 = (x1+((x2|x3)==x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static int32_t x6 = INT32_MAX;
	static volatile uint64_t x7 = 129575150LLU;
	uint32_t x8 = 2282U;

	t1 = (x5+((x6|x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -22;
	int64_t x10 = INT64_MAX;
	static int8_t x11 = -1;
	int16_t x12 = -995;
	static volatile int32_t t2 = -335159805;

	t2 = (x9+((x10|x11)==x12));

	if (t2 != -22) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 53U;
	uint16_t x16 = 370U;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x13+((x14|x15)==x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	volatile uint64_t x18 = UINT64_MAX;
	static uint64_t x19 = 25367LLU;
	int32_t x20 = -1;
	volatile int32_t t4 = 1080118;

	t4 = (x17+((x18|x19)==x20));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 6012U;
	int32_t t5 = INT32_MIN;

	t5 = (x21+((x22|x23)==x24));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 8123679621LL;
	uint64_t x26 = 1939074666317LLU;
	int16_t x27 = INT16_MIN;
	static uint32_t x28 = 247903568U;
	volatile int64_t t6 = -331260926LL;

	t6 = (x25+((x26|x27)==x28));

	if (t6 != 8123679621LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MAX;
	volatile int8_t x32 = -1;
	static int32_t t7 = -150928287;

	t7 = (x29+((x30|x31)==x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = INT8_MAX;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = -1038557;

	t8 = (x33+((x34|x35)==x36));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static volatile uint8_t x38 = 99U;
	static uint32_t x39 = 1788477757U;
	int64_t x40 = INT64_MAX;
	int32_t t9 = -866;

	t9 = (x37+((x38|x39)==x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	int32_t x43 = 32560;
	int64_t x44 = -3370820LL;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41+((x42|x43)==x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 602LLU;
	volatile int8_t x46 = INT8_MAX;
	volatile uint64_t x47 = 148668072469224853LLU;
	int16_t x48 = -1;
	volatile uint64_t t11 = 273787417058754758LLU;

	t11 = (x45+((x46|x47)==x48));

	if (t11 != 602LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint64_t x50 = 1LLU;
	volatile uint32_t x51 = UINT32_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 7415109;

	t12 = (x49+((x50|x51)==x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MIN;
	static int64_t x55 = INT64_MIN;
	static volatile uint8_t x56 = UINT8_MAX;

	t13 = (x53+((x54|x55)==x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 87622417;
	int8_t x58 = 1;
	static uint32_t x59 = 1U;
	static volatile uint64_t x60 = UINT64_MAX;

	t14 = (x57+((x58|x59)==x60));

	if (t14 != 87622417) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	static uint8_t x64 = 2U;

	t15 = (x61+((x62|x63)==x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -15361;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = 1LLU;
	uint16_t x68 = 2U;
	volatile int32_t t16 = -8821291;

	t16 = (x65+((x66|x67)==x68));

	if (t16 != -15361) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 1741634671LLU;
	int8_t x72 = -3;
	int64_t t17 = INT64_MIN;

	t17 = (x69+((x70|x71)==x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 40U;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -3135058LL;
	uint8_t x76 = 1U;
	uint32_t t18 = 0U;

	t18 = (x73+((x74|x75)==x76));

	if (t18 != 40U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile uint16_t x78 = 3U;
	volatile int16_t x79 = -205;
	int64_t t19 = INT64_MIN;

	t19 = (x77+((x78|x79)==x80));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t20 = -2350331;

	t20 = (x81+((x82|x83)==x84));

	if (t20 != -12) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int8_t x86 = INT8_MAX;
	uint16_t x87 = 14U;
	int64_t x88 = -7173036575LL;
	volatile int32_t t21 = 1008267;

	t21 = (x85+((x86|x87)==x88));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	static volatile int32_t x92 = INT32_MAX;
	int32_t t22 = -5;

	t22 = (x89+((x90|x91)==x92));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = -14900114397719979LL;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	volatile uint32_t t23 = 235059U;

	t23 = (x93+((x94|x95)==x96));

	if (t23 != 23U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 6184452861405LLU;
	int64_t x98 = 14444651878116LL;
	uint32_t x100 = 3520U;

	t24 = (x97+((x98|x99)==x100));

	if (t24 != 6184452861405LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 41U;
	int8_t x102 = -1;
	volatile uint64_t x103 = UINT64_MAX;
	volatile int32_t t25 = 139655412;

	t25 = (x101+((x102|x103)==x104));

	if (t25 != 41) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	volatile int32_t t26 = 5996;

	t26 = (x105+((x106|x107)==x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 4450207U;
	static uint32_t t27 = 81971099U;

	t27 = (x109+((x110|x111)==x112));

	if (t27 != 4450207U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = 1140734LLU;
	uint64_t x115 = 40976013LLU;
	uint8_t x116 = 25U;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x113+((x114|x115)==x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 0;
	uint64_t x118 = 2808333LLU;
	int64_t x120 = -1LL;

	t29 = (x117+((x118|x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 1800U;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = 614;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -52;

	t30 = (x121+((x122|x123)==x124));

	if (t30 != 1800) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 3U;
	uint32_t x126 = 1U;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MAX;

	t31 = (x125+((x126|x127)==x128));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = UINT16_MAX;
	volatile uint64_t x132 = 709969530935412975LLU;
	volatile int32_t t32 = 1;

	t32 = (x129+((x130|x131)==x132));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x134 = 113U;
	int64_t x135 = 102574LL;
	int8_t x136 = -1;
	volatile int64_t t33 = -24LL;

	t33 = (x133+((x134|x135)==x136));

	if (t33 != -173661081973102616LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 9LLU;
	static uint8_t x139 = 0U;
	volatile uint8_t x140 = 0U;
	uint64_t t34 = 170078381627778955LLU;

	t34 = (x137+((x138|x139)==x140));

	if (t34 != 9LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 26585777835370839LL;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	uint64_t x144 = 676182LLU;
	volatile int64_t t35 = -3088148274116LL;

	t35 = (x141+((x142|x143)==x144));

	if (t35 != 26585777835370839LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -70;
	uint16_t x147 = 24926U;
	uint32_t x148 = 16415728U;
	int32_t t36 = -1;

	t36 = (x145+((x146|x147)==x148));

	if (t36 != -70) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = UINT16_MAX;
	int64_t x152 = 9925390173LL;
	volatile uint32_t t37 = 162U;

	t37 = (x149+((x150|x151)==x152));

	if (t37 != 16494767U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -17525;
	uint8_t x156 = UINT8_MAX;
	static int64_t t38 = 51711856695380LL;

	t38 = (x153+((x154|x155)==x156));

	if (t38 != -226956646407LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = -128524752;
	static uint16_t x159 = 3075U;
	static int32_t x160 = -1;

	t39 = (x157+((x158|x159)==x160));

	if (t39 != 1046964542) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x163 = 55421LLU;
	uint16_t x164 = UINT16_MAX;
	int64_t t40 = INT64_MAX;

	t40 = (x161+((x162|x163)==x164));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	volatile uint32_t x166 = 1412293251U;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1211;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x165+((x166|x167)==x168));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 2081477755U;
	uint64_t x172 = UINT64_MAX;
	volatile uint32_t t42 = 0U;

	t42 = (x169+((x170|x171)==x172));

	if (t42 != 2081477756U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = 26U;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = INT64_MIN;

	t43 = (x173+((x174|x175)==x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 96;
	uint32_t x178 = 52863U;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;

	t44 = (x177+((x178|x179)==x180));

	if (t44 != 96) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = 6398;
	int64_t x183 = INT64_MAX;
	int64_t x184 = -1LL;

	t45 = (x181+((x182|x183)==x184));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -8117;
	volatile uint16_t x186 = 1U;
	volatile int8_t x187 = 35;
	static int8_t x188 = INT8_MIN;
	int32_t t46 = 198;

	t46 = (x185+((x186|x187)==x188));

	if (t46 != -8117) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 3;
	int32_t x191 = 98;
	volatile int8_t x192 = -1;

	t47 = (x189+((x190|x191)==x192));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 3U;
	volatile int64_t t48 = -728751113618822855LL;

	t48 = (x193+((x194|x195)==x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = 2803U;
	static int64_t x200 = INT64_MAX;
	volatile int32_t t49 = INT32_MIN;

	t49 = (x197+((x198|x199)==x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = 3465;
	static int32_t x203 = -1;
	static volatile int8_t x204 = INT8_MIN;

	t50 = (x201+((x202|x203)==x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int32_t x207 = 704;
	uint16_t x208 = 92U;
	int64_t t51 = INT64_MIN;

	t51 = (x205+((x206|x207)==x208));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = -52;
	uint16_t x212 = 14U;
	volatile int32_t t52 = -1508;

	t52 = (x209+((x210|x211)==x212));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 2309929597361LL;
	uint8_t x215 = UINT8_MAX;
	volatile int64_t t53 = 707LL;

	t53 = (x213+((x214|x215)==x216));

	if (t53 != 2309929597361LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static uint8_t x219 = 2U;
	int32_t t54 = 346317;

	t54 = (x217+((x218|x219)==x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x223 = UINT32_MAX;
	static int32_t t55 = 24762;

	t55 = (x221+((x222|x223)==x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = 98U;
	volatile int8_t x228 = -1;

	t56 = (x225+((x226|x227)==x228));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	static uint64_t x230 = 5354967592587529265LLU;
	uint8_t x231 = 60U;
	volatile int32_t t57 = 32603;

	t57 = (x229+((x230|x231)==x232));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	uint32_t x234 = 519203531U;
	int64_t x236 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x233+((x234|x235)==x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x238 = UINT8_MAX;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 443U;
	static volatile int32_t t59 = -1886229;

	t59 = (x237+((x238|x239)==x240));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -67874;

	t60 = (x241+((x242|x243)==x244));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 1228281875LLU;
	int64_t x246 = -8143LL;
	int16_t x247 = INT16_MAX;
	static uint64_t t61 = 1972LLU;

	t61 = (x245+((x246|x247)==x248));

	if (t61 != 1228281875LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 3713U;
	uint64_t x250 = UINT64_MAX;
	static int8_t x251 = -21;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = -20842;

	t62 = (x249+((x250|x251)==x252));

	if (t62 != 3713) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -29;
	static int8_t x254 = INT8_MIN;
	static uint16_t x255 = 19U;
	int16_t x256 = -1;

	t63 = (x253+((x254|x255)==x256));

	if (t63 != -29) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -1;
	int64_t x259 = -24LL;
	volatile int32_t t64 = 1;

	t64 = (x257+((x258|x259)==x260));

	if (t64 != 33827) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = 4510;
	uint8_t x262 = 29U;
	int8_t x263 = INT8_MAX;
	static int8_t x264 = -1;
	volatile int32_t t65 = -46918318;

	t65 = (x261+((x262|x263)==x264));

	if (t65 != 4510) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -26;
	volatile int32_t x266 = -1;
	uint16_t x267 = 11436U;
	static int32_t x268 = 4740469;
	volatile int32_t t66 = 957973120;

	t66 = (x265+((x266|x267)==x268));

	if (t66 != -26) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 1013U;
	volatile int16_t x272 = INT16_MAX;
	uint64_t t67 = 1094LLU;

	t67 = (x269+((x270|x271)==x272));

	if (t67 != 59294259LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = INT64_MIN;
	int16_t x275 = -374;
	int64_t x276 = INT64_MIN;

	t68 = (x273+((x274|x275)==x276));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 189195052LLU;
	int64_t x279 = INT64_MIN;
	volatile uint64_t x280 = UINT64_MAX;
	int32_t t69 = 1;

	t69 = (x277+((x278|x279)==x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	volatile uint16_t x282 = 4936U;
	static int64_t x283 = 1552813465309182LL;
	static volatile uint8_t x284 = 1U;
	static int32_t t70 = -98;

	t70 = (x281+((x282|x283)==x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1995U;
	uint8_t x286 = 2U;
	volatile uint8_t x287 = UINT8_MAX;
	int8_t x288 = 0;
	static uint32_t t71 = 201788U;

	t71 = (x285+((x286|x287)==x288));

	if (t71 != 1995U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -56LL;
	int32_t x290 = -1;
	volatile uint16_t x291 = UINT16_MAX;
	static int32_t x292 = INT32_MAX;
	int64_t t72 = -28561LL;

	t72 = (x289+((x290|x291)==x292));

	if (t72 != -56LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 170U;
	static int16_t x294 = 1;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 271362;

	t73 = (x293+((x294|x295)==x296));

	if (t73 != 170) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 836324511;
	uint16_t x298 = 144U;
	int32_t t74 = -1219730;

	t74 = (x297+((x298|x299)==x300));

	if (t74 != 836324511) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	uint16_t x302 = 31998U;
	volatile uint64_t x303 = 19296860LLU;
	int32_t x304 = INT32_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (x301+((x302|x303)==x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x306 = INT16_MIN;
	uint8_t x307 = 14U;
	volatile int64_t x308 = 906086940058487LL;
	int32_t t76 = 9089357;

	t76 = (x305+((x306|x307)==x308));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 793631478581LLU;
	int32_t x310 = 1566088;
	volatile int64_t x311 = INT64_MAX;
	volatile uint64_t t77 = 37LLU;

	t77 = (x309+((x310|x311)==x312));

	if (t77 != 793631478581LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int8_t x314 = 4;
	volatile int64_t t78 = -1LL;

	t78 = (x313+((x314|x315)==x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static volatile uint64_t x318 = UINT64_MAX;
	static uint16_t x319 = 437U;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317+((x318|x319)==x320));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint32_t x322 = 60215U;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = 867;
	volatile int64_t t80 = INT64_MAX;

	t80 = (x321+((x322|x323)==x324));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = -1;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x325+((x326|x327)==x328));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 0U;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 1179603;

	t82 = (x329+((x330|x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = -359268;

	t83 = (x333+((x334|x335)==x336));

	if (t83 != 10421124) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = -462LL;
	uint16_t x340 = 14U;
	volatile int32_t t84 = 3429;

	t84 = (x337+((x338|x339)==x340));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = 0U;
	static int8_t x343 = -45;
	int8_t x344 = INT8_MAX;
	volatile int32_t t85 = -543093;

	t85 = (x341+((x342|x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	volatile uint8_t x347 = 1U;
	volatile uint8_t x348 = 12U;

	t86 = (x345+((x346|x347)==x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -2;
	uint32_t x350 = 2U;
	static volatile int8_t x351 = INT8_MAX;
	volatile int32_t x352 = INT32_MIN;
	int32_t t87 = 7925;

	t87 = (x349+((x350|x351)==x352));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	volatile int8_t x354 = -1;
	int64_t x355 = 11398LL;
	static int16_t x356 = -3541;

	t88 = (x353+((x354|x355)==x356));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 30U;
	static volatile int32_t t89 = 4711;

	t89 = (x357+((x358|x359)==x360));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	int64_t t90 = INT64_MIN;

	t90 = (x361+((x362|x363)==x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint8_t x366 = 28U;
	volatile int64_t x368 = INT64_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x365+((x366|x367)==x368));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 15168517666LL;
	uint32_t x370 = 11391498U;
	int8_t x372 = INT8_MIN;

	t92 = (x369+((x370|x371)==x372));

	if (t92 != 15168517666LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = -163457678;
	uint32_t x375 = 81368U;
	uint8_t x376 = 4U;
	volatile int32_t t93 = -24062;

	t93 = (x373+((x374|x375)==x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = -4;
	static uint64_t x379 = 0LLU;
	int64_t x380 = 38LL;
	volatile int32_t t94 = 57557;

	t94 = (x377+((x378|x379)==x380));

	if (t94 != -125) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	int32_t x383 = -8499;
	int32_t x384 = 1266762;
	volatile int32_t t95 = INT32_MAX;

	t95 = (x381+((x382|x383)==x384));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = INT16_MIN;
	static int64_t x387 = -1LL;
	volatile uint16_t x388 = UINT16_MAX;

	t96 = (x385+((x386|x387)==x388));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x389+((x390|x391)==x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = 268;
	int8_t x395 = -1;
	int8_t x396 = INT8_MAX;

	t98 = (x393+((x394|x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x399 = -1;
	uint16_t x400 = 27U;

	t99 = (x397+((x398|x399)==x400));

	if (t99 != 32767) { NG(); } else { ; }
	
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
