#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -372145LL;
volatile int32_t t1 = 1156;
int64_t x10 = INT64_MIN;
volatile int16_t x11 = 1288;
volatile uint16_t x14 = 24598U;
int64_t x18 = INT64_MIN;
uint8_t x20 = UINT8_MAX;
volatile uint64_t t5 = 2350830899488086311LLU;
static int8_t x25 = -1;
static volatile uint32_t t6 = 84U;
uint16_t x34 = 374U;
static int32_t t8 = 7834;
uint16_t x38 = 5U;
uint64_t x40 = 2872544LLU;
int8_t x42 = -1;
uint8_t x44 = UINT8_MAX;
volatile uint64_t t10 = 9630868074082994LLU;
volatile int32_t x48 = -1;
volatile uint16_t x49 = 1U;
uint64_t x51 = 356604903106795LLU;
static int16_t x53 = -9;
volatile int32_t x54 = INT32_MAX;
volatile int64_t x58 = 1706570LL;
static volatile int8_t x61 = 0;
int32_t x62 = INT32_MAX;
int16_t x64 = 160;
int64_t t15 = 4795339895LL;
static int64_t x72 = -1LL;
volatile int32_t x83 = INT32_MIN;
int16_t x87 = INT16_MIN;
int32_t x88 = INT32_MAX;
volatile int32_t t21 = 133134451;
static volatile int8_t x92 = INT8_MAX;
static volatile int32_t x96 = INT32_MIN;
static volatile int32_t t24 = 940317;
int64_t x118 = INT64_MAX;
uint32_t x121 = 299U;
uint8_t x127 = 25U;
uint64_t t31 = 9168LLU;
int32_t x131 = INT32_MAX;
static volatile int32_t x135 = -105872436;
volatile int32_t t35 = 3718891;
volatile int8_t x148 = -1;
uint64_t t37 = 228941222546LLU;
volatile int64_t t38 = 18133562679363LL;
uint16_t x157 = 2020U;
int8_t x165 = -1;
int32_t x166 = -469;
int64_t x172 = 49494676407068716LL;
uint64_t t42 = 18904013LLU;
static int32_t x176 = INT32_MAX;
volatile int64_t t44 = 21763314809451817LL;
volatile uint16_t x185 = UINT16_MAX;
int64_t x186 = -1LL;
int16_t x189 = INT16_MAX;
volatile int32_t x193 = -1;
volatile int32_t x196 = 251;
uint8_t x203 = UINT8_MAX;
int32_t x208 = 245448979;
volatile uint32_t x211 = 829789U;
static int8_t x212 = INT8_MIN;
int32_t t53 = -114;
volatile int16_t x228 = -5543;
int32_t x235 = 355231;
volatile int32_t x238 = 0;
int32_t t60 = -418126854;
int8_t x245 = INT8_MIN;
int64_t x248 = INT64_MIN;
static volatile uint8_t x249 = 1U;
int32_t x251 = -488;
volatile int8_t x252 = INT8_MAX;
volatile uint64_t t63 = 849840904LLU;
int8_t x259 = INT8_MIN;
uint32_t x271 = UINT32_MAX;
int32_t x272 = 2056664;
uint32_t x275 = 38432U;
volatile int16_t x278 = INT16_MIN;
int16_t x286 = INT16_MIN;
static int32_t t72 = 12;
volatile int64_t t73 = 1LL;
uint8_t x301 = UINT8_MAX;
int64_t x314 = INT64_MIN;
volatile int64_t t78 = -1LL;
static int16_t x319 = INT16_MAX;
int64_t x326 = INT64_MIN;
static uint32_t x329 = 15436104U;
int16_t x332 = INT16_MIN;
volatile int32_t t83 = -29113939;
static int8_t x339 = INT8_MIN;
uint64_t t84 = 43145224LLU;
int64_t x354 = INT64_MAX;
static int64_t t88 = 412564447579LL;
volatile uint8_t x364 = 119U;
volatile int32_t t91 = 2553;
volatile uint64_t x370 = 14697987963404LLU;
volatile uint64_t t92 = 1907146253261654184LLU;
int64_t x373 = 10283955LL;
static int16_t x374 = 0;
static volatile int64_t t93 = 7LL;
uint64_t x379 = 6699237597293LLU;
volatile uint64_t t94 = 60034LLU;
uint64_t x391 = 2083698922745115LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int64_t x2 = INT64_MIN;
	uint32_t x4 = 2078939U;
	volatile int64_t t0 = 2164820985816944LL;

	t0 = ((x1^x2)^(x3|x4));

	if (t0 != -1313LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -72719549;
	int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int8_t x8 = 16;

	t1 = ((x5^x6)^(x7|x8));

	if (t1 != 2074764099) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -14884039143040269LL;
	uint32_t x12 = 73U;
	volatile int64_t t2 = 3626LL;

	t2 = ((x9^x10)^(x11|x12));

	if (t2 != 9208487997711736762LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x15 = 24;
	int8_t x16 = INT8_MAX;
	static int32_t t3 = 553675277;

	t3 = ((x13^x14)^(x15|x16));

	if (t3 != 24598) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 644U;
	uint16_t x19 = 2344U;
	volatile int64_t t4 = -3552366LL;

	t4 = ((x17^x18)^(x19|x20));

	if (t4 != -9223372036854772869LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MAX;
	volatile uint64_t x23 = 1323822176641468LLU;
	int64_t x24 = INT64_MIN;

	t5 = ((x21^x22)^(x23|x24));

	if (t5 != 9224695859031417276LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static int16_t x27 = INT16_MIN;
	uint32_t x28 = 28U;

	t6 = ((x25^x26)^(x27|x28));

	if (t6 != 2147516387U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 112453889286384LLU;
	int8_t x30 = INT8_MIN;
	static int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t7 = 54094065LLU;

	t7 = ((x29^x30)^(x31|x32));

	if (t7 != 112453889286287LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	static uint8_t x36 = 0U;

	t8 = ((x33^x34)^(x35|x36));

	if (t8 != -32375) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	static int8_t x39 = INT8_MAX;
	volatile uint64_t t9 = 116526467948403831LLU;

	t9 = ((x37^x38)^(x39|x40));

	if (t9 != 18446744073706689786LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1079LLU;
	int32_t x43 = -4800;

	t10 = ((x41^x42)^(x43|x44));

	if (t10 != 5687LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 5896;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MAX;
	volatile int64_t t11 = 270738LL;

	t11 = ((x45^x46)^(x47|x48));

	if (t11 != 9223372036854769911LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 2662214770680LL;
	int32_t x52 = INT32_MIN;
	uint64_t t12 = 1825624076LLU;

	t12 = ((x49^x50)^(x51|x52));

	if (t12 != 18446741412252661522LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = INT8_MIN;
	int64_t x56 = 68LL;
	static int64_t t13 = -121352LL;

	t13 = ((x53^x54)^(x55|x56));

	if (t13 != 2147483596LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MAX;
	int64_t t14 = -1LL;

	t14 = ((x57^x58)^(x59|x60));

	if (t14 != 1706549LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MIN;

	t15 = ((x61^x62)^(x63|x64));

	if (t15 != -9223372034707292321LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int64_t x66 = INT64_MAX;
	uint32_t x67 = UINT32_MAX;
	static int64_t x68 = -1LL;
	static volatile int64_t t16 = 1766458111362642027LL;

	t16 = ((x65^x66)^(x67|x68));

	if (t16 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	volatile int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	volatile int64_t t17 = -145174160934370LL;

	t17 = ((x69^x70)^(x71|x72));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	static int8_t x74 = INT8_MAX;
	static int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = 22066;

	t18 = ((x73^x74)^(x75|x76));

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int64_t x78 = INT64_MAX;
	int16_t x79 = -86;
	static int16_t x80 = -15;
	int64_t t19 = 1907403529288711LL;

	t19 = ((x77^x78)^(x79|x80));

	if (t19 != 4LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	int64_t x82 = -129927015285LL;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = 10022392185193962LL;

	t20 = ((x81^x82)^(x83|x84));

	if (t20 != -129927015285LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 86U;
	volatile int8_t x86 = INT8_MAX;

	t21 = ((x85^x86)^(x87|x88));

	if (t21 != -42) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint64_t x90 = 149647180187208LLU;
	uint8_t x91 = 4U;
	volatile uint64_t t22 = 7LLU;

	t22 = ((x89^x90)^(x91|x92));

	if (t22 != 18446594426529364424LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 16992456712149LL;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	volatile int64_t t23 = -65LL;

	t23 = ((x93^x94)^(x95|x96));

	if (t23 != -16992456712150LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 47U;
	int8_t x98 = -1;
	volatile int32_t x99 = INT32_MAX;
	int8_t x100 = INT8_MIN;

	t24 = ((x97^x98)^(x99|x100));

	if (t24 != 47) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	int16_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t25 = -372132848LL;

	t25 = ((x101^x102)^(x103|x104));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 5258;
	volatile int32_t x106 = 73034194;
	volatile uint16_t x107 = 14002U;
	uint64_t x108 = 15121473744027LLU;
	uint64_t t26 = 1509171LLU;

	t26 = ((x105^x106)^(x107|x108));

	if (t26 != 15121410180067LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 1LLU;
	volatile int8_t x110 = -1;
	int32_t x111 = -1;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t27 = 23794394LLU;

	t27 = ((x109^x110)^(x111|x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = -1;
	int8_t x114 = -1;
	uint8_t x115 = 29U;
	volatile uint16_t x116 = 1523U;
	static int32_t t28 = -28075;

	t28 = ((x113^x114)^(x115|x116));

	if (t28 != 1535) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 11U;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = 1;
	volatile int64_t t29 = -62349057LL;

	t29 = ((x117^x118)^(x119|x120));

	if (t29 != 9223372036854775563LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = 0;
	int8_t x123 = 1;
	int32_t x124 = INT32_MIN;
	volatile uint32_t t30 = 1U;

	t30 = ((x121^x122)^(x123|x124));

	if (t30 != 2147483946U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 356625345218935LLU;
	volatile int64_t x126 = INT64_MIN;
	static uint64_t x128 = UINT64_MAX;

	t31 = ((x125^x126)^(x127|x128));

	if (t31 != 9223015411509556872LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -555080083;
	static int16_t x130 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -160853;

	t32 = ((x129^x130)^(x131|x132));

	if (t32 != -555066990) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 7859773727LL;
	volatile uint32_t x134 = 6807U;
	static int64_t x136 = -173733LL;
	int64_t t33 = -228169904899LL;

	t33 = ((x133^x134)^(x135|x136));

	if (t33 != -7859642281LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 2158U;
	int16_t x138 = -1;
	static int64_t x139 = -16361951170471863LL;
	int32_t x140 = INT32_MAX;
	static volatile int64_t t34 = 3333491801133248703LL;

	t34 = ((x137^x138)^(x139|x140));

	if (t34 != -16361950644533138LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1577;
	uint16_t x142 = 37U;
	volatile uint8_t x143 = UINT8_MAX;
	volatile uint16_t x144 = 10U;

	t35 = ((x141^x142)^(x143|x144));

	if (t35 != -1779) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	static volatile int64_t x146 = 1523894836921071LL;
	volatile int8_t x147 = INT8_MAX;
	static int64_t t36 = -9LL;

	t36 = ((x145^x146)^(x147|x148));

	if (t36 != -1523894836920849LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;

	t37 = ((x149^x150)^(x151|x152));

	if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = 0;
	uint32_t x155 = 181520354U;
	volatile int32_t x156 = 17;

	t38 = ((x153^x154)^(x155|x156));

	if (t38 != 9223372036673255436LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 26233U;
	int64_t x159 = 1592354952291LL;
	uint8_t x160 = 8U;
	int64_t t39 = 80034552798776292LL;

	t39 = ((x157^x158)^(x159|x160));

	if (t39 != 1592354944502LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 2372LL;
	static int16_t x162 = INT16_MIN;
	uint8_t x163 = 22U;
	static int32_t x164 = INT32_MIN;
	int64_t t40 = 1LL;

	t40 = ((x161^x162)^(x163|x164));

	if (t40 != 2147453266LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x167 = INT8_MIN;
	static int64_t x168 = -29533LL;
	int64_t t41 = -823908383155733641LL;

	t41 = ((x165^x166)^(x167|x168));

	if (t41 != -393LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 3681252535LLU;

	t42 = ((x169^x170)^(x171|x172));

	if (t42 != 9173877358259635008LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	int16_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	static volatile int32_t t43 = -15;

	t43 = ((x173^x174)^(x175|x176));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	int32_t x179 = 101;
	uint16_t x180 = 2U;

	t44 = ((x177^x178)^(x179|x180));

	if (t44 != 9223372036854743143LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -1LL;
	int64_t t45 = -5442555171LL;

	t45 = ((x181^x182)^(x183|x184));

	if (t45 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 16847656LL;

	t46 = ((x185^x186)^(x187|x188));

	if (t46 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	int64_t x192 = -1LL;
	volatile int64_t t47 = 860655928670847775LL;

	t47 = ((x189^x190)^(x191|x192));

	if (t47 != 32640LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	int8_t x195 = INT8_MIN;
	volatile uint64_t t48 = 494543529741757594LLU;

	t48 = ((x193^x194)^(x195|x196));

	if (t48 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 3;
	uint32_t x198 = 113U;
	int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;
	int64_t t49 = -12069329451LL;

	t49 = ((x197^x198)^(x199|x200));

	if (t49 != -115LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	static int64_t x202 = INT64_MIN;
	int32_t x204 = -1;
	int64_t t50 = INT64_MIN;

	t50 = ((x201^x202)^(x203|x204));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = -1;
	int64_t x206 = -1LL;
	volatile int64_t x207 = 2913LL;
	int64_t t51 = -55473LL;

	t51 = ((x205^x206)^(x207|x208));

	if (t51 != 245451635LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 3U;
	uint32_t x210 = UINT32_MAX;
	uint32_t t52 = 488933U;

	t52 = ((x209^x210)^(x211|x212));

	if (t52 != 33U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = 880;
	static volatile int16_t x215 = INT16_MIN;
	volatile int8_t x216 = INT8_MIN;

	t53 = ((x213^x214)^(x215|x216));

	if (t53 != -31985) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = 52478261759207866LL;
	static int8_t x218 = INT8_MIN;
	static int8_t x219 = -58;
	static uint8_t x220 = UINT8_MAX;
	int64_t t54 = 714790165105586LL;

	t54 = ((x217^x218)^(x219|x220));

	if (t54 != 52478261759207877LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -217LL;
	int8_t x222 = -4;
	int16_t x223 = -1;
	int16_t x224 = INT16_MAX;
	volatile int64_t t55 = 221LL;

	t55 = ((x221^x222)^(x223|x224));

	if (t55 != -220LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	static uint32_t x226 = UINT32_MAX;
	int32_t x227 = INT32_MIN;
	static int64_t t56 = 21317LL;

	t56 = ((x225^x226)^(x227|x228));

	if (t56 != -9223372032559814055LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 523308301454LL;
	uint32_t x230 = 791408285U;
	static int32_t x231 = -471324351;
	volatile int16_t x232 = INT16_MAX;
	volatile int64_t t57 = 12413LL;

	t57 = ((x229^x230)^(x231|x232));

	if (t57 != -523527164436LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x233 = UINT32_MAX;
	uint32_t x234 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	uint32_t t58 = 70679064U;

	t58 = ((x233^x234)^(x235|x236));

	if (t58 != 4294962079U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -216463;
	uint32_t x239 = 166583U;
	int32_t x240 = INT32_MIN;
	uint32_t t59 = 391U;

	t59 = ((x237^x238)^(x239|x240));

	if (t59 != 2147367110U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 357U;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile uint8_t x244 = UINT8_MAX;

	t60 = ((x241^x242)^(x243|x244));

	if (t60 != 2147451290) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 5U;
	int64_t t61 = 274717595LL;

	t61 = ((x245^x246)^(x247|x248));

	if (t61 != 9223372036854775674LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = 14;
	int32_t t62 = 379511;

	t62 = ((x249^x250)^(x251|x252));

	if (t62 != -400) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 12U;
	volatile int8_t x254 = 52;
	uint64_t x255 = 1526065908980015268LLU;
	int32_t x256 = -1;

	t63 = ((x253^x254)^(x255|x256));

	if (t63 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 2694U;
	int32_t x258 = -1;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = 531751235U;

	t64 = ((x257^x258)^(x259|x260));

	if (t64 != 2694U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	volatile uint8_t x262 = 5U;
	volatile int64_t x263 = INT64_MIN;
	int32_t x264 = -1071674730;
	volatile uint64_t t65 = 1024843165731981LLU;

	t65 = ((x261^x262)^(x263|x264));

	if (t65 != 1071674732LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = 3U;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -1;

	t66 = ((x265^x266)^(x267|x268));

	if (t66 != 2147483523) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 3283;
	uint64_t x270 = 1LLU;
	volatile uint64_t t67 = 285448LLU;

	t67 = ((x269^x270)^(x271|x272));

	if (t67 != 4294964013LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 2U;
	uint32_t x274 = 4U;
	int8_t x276 = -1;
	static volatile uint32_t t68 = 37204237U;

	t68 = ((x273^x274)^(x275|x276));

	if (t68 != 4294967289U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 6;
	static volatile int16_t x279 = 244;
	int64_t x280 = INT64_MIN;
	int64_t t69 = -21145257LL;

	t69 = ((x277^x278)^(x279|x280));

	if (t69 != 9223372036854743282LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = -1;
	static volatile int32_t x284 = INT32_MAX;
	int32_t t70 = 8381955;

	t70 = ((x281^x282)^(x283|x284));

	if (t70 != -32641) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = -156457;
	int32_t t71 = 0;

	t71 = ((x285^x286)^(x287|x288));

	if (t71 != 58152) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = 0;
	uint16_t x291 = UINT16_MAX;
	static int16_t x292 = INT16_MAX;

	t72 = ((x289^x290)^(x291|x292));

	if (t72 != -65409) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	static uint16_t x294 = UINT16_MAX;
	uint16_t x295 = 32596U;
	volatile int32_t x296 = 569034;

	t73 = ((x293^x294)^(x295|x296));

	if (t73 != -9223372036854251487LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = 634;
	uint8_t x299 = 0U;
	uint16_t x300 = 1U;
	volatile int32_t t74 = -1620629;

	t74 = ((x297^x298)^(x299|x300));

	if (t74 != -2147483013) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 1675U;
	uint16_t x303 = UINT16_MAX;
	static int16_t x304 = -104;
	int32_t t75 = 11688137;

	t75 = ((x301^x302)^(x303|x304));

	if (t75 != -1653) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int8_t x307 = 1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = ((x305^x306)^(x307|x308));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	uint8_t x310 = 3U;
	int32_t x311 = -1;
	int32_t x312 = 194368;
	volatile int64_t t77 = 10949459672LL;

	t77 = ((x309^x310)^(x311|x312));

	if (t77 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 26756961303888LL;
	uint8_t x315 = UINT8_MAX;
	static int8_t x316 = INT8_MAX;

	t78 = ((x313^x314)^(x315|x316));

	if (t78 != -9223345279893471825LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	volatile int8_t x318 = INT8_MIN;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -6814726;

	t79 = ((x317^x318)^(x319|x320));

	if (t79 != 32640) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = 7031U;
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = -4018LL;
	static int8_t x324 = -1;
	volatile int64_t t80 = 116528786977292436LL;

	t80 = ((x321^x322)^(x323|x324));

	if (t80 != -4294960265LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	static volatile uint64_t x328 = 4543218589100LLU;
	volatile uint64_t t81 = 27400889LLU;

	t81 = ((x325^x326)^(x327|x328));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -120;
	volatile int64_t x331 = 7616252LL;
	volatile int64_t t82 = -168LL;

	t82 = ((x329^x330)^(x331|x332));

	if (t82 != -4279517124LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 11U;
	int16_t x334 = INT16_MIN;
	uint16_t x335 = 27U;
	static int32_t x336 = INT32_MAX;

	t83 = ((x333^x334)^(x335|x336));

	if (t83 != -2147450892) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 20LLU;
	uint32_t x338 = 66934394U;
	static uint32_t x340 = 697201957U;

	t84 = ((x337^x338)^(x339|x340));

	if (t84 != 4228032971LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 0;
	uint64_t x342 = 202512048LLU;
	static uint32_t x343 = 982U;
	uint8_t x344 = 9U;
	uint64_t t85 = 1349572LLU;

	t85 = ((x341^x342)^(x343|x344));

	if (t85 != 202511727LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	static uint64_t x346 = 0LLU;
	int8_t x347 = -1;
	int8_t x348 = INT8_MAX;
	uint64_t t86 = 31LLU;

	t86 = ((x345^x346)^(x347|x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	static uint16_t x350 = UINT16_MAX;
	static volatile uint8_t x351 = 13U;
	uint64_t x352 = 495111506LLU;
	volatile uint64_t t87 = 1002204281435844LLU;

	t87 = ((x349^x350)^(x351|x352));

	if (t87 != 18446744073214479648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MIN;

	t88 = ((x353^x354)^(x355|x356));

	if (t88 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	static int64_t x358 = -1LL;
	static volatile uint8_t x359 = 116U;
	int16_t x360 = 237;
	int64_t t89 = -1217686725079LL;

	t89 = ((x357^x358)^(x359|x360));

	if (t89 != 253LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = INT32_MAX;
	static volatile int64_t t90 = 1697118478663878072LL;

	t90 = ((x361^x362)^(x363|x364));

	if (t90 != 2147483520LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	volatile int16_t x366 = 3174;
	volatile uint16_t x367 = UINT16_MAX;
	static int8_t x368 = INT8_MIN;

	t91 = ((x365^x366)^(x367|x368));

	if (t91 != -29594) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int16_t x371 = 7;
	int32_t x372 = -1;

	t92 = ((x369^x370)^(x371|x372));

	if (t92 != 18446729375721617932LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x375 = 31456372253952382LL;
	volatile uint8_t x376 = 1U;

	t93 = ((x373^x374)^(x375|x376));

	if (t93 != 31456372260496076LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	uint16_t x380 = 0U;

	t94 = ((x377^x378)^(x379|x380));

	if (t94 != 6699237580690LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 8U;
	volatile uint64_t t95 = 132091048LLU;

	t95 = ((x381^x382)^(x383|x384));

	if (t95 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	static int64_t x387 = -1LL;
	static uint16_t x388 = UINT16_MAX;
	static volatile int64_t t96 = 413964450697787LL;

	t96 = ((x385^x386)^(x387|x388));

	if (t96 != 128LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -477;
	uint8_t x390 = 121U;
	static int16_t x392 = INT16_MIN;
	uint64_t t97 = 1576LLU;

	t97 = ((x389^x390)^(x391|x392));

	if (t97 != 4929LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 94U;
	int64_t x395 = -21LL;
	int32_t x396 = INT32_MIN;
	static int64_t t98 = 5744992786LL;

	t98 = ((x393^x394)^(x395|x396));

	if (t98 != 2147483573LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	int32_t x399 = 3;
	volatile int32_t x400 = INT32_MIN;
	volatile int64_t t99 = 19646894250LL;

	t99 = ((x397^x398)^(x399|x400));

	if (t99 != 9223372034707357692LL) { NG(); } else { ; }
	
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
