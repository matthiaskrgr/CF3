#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int32_t t1 = 11878;
uint16_t x12 = 1929U;
int32_t t2 = 321317;
uint8_t x15 = 118U;
static uint8_t x17 = 17U;
static int32_t x18 = -1078577;
volatile int32_t x22 = INT32_MAX;
uint16_t x23 = 171U;
volatile int64_t x27 = INT64_MIN;
volatile int32_t t7 = -676;
volatile uint8_t x35 = UINT8_MAX;
int32_t x37 = INT32_MIN;
int8_t x43 = INT8_MAX;
volatile int32_t t10 = 38567218;
int64_t x53 = INT64_MIN;
int64_t x59 = -3066388LL;
uint32_t x60 = 3U;
int8_t x62 = INT8_MIN;
uint16_t x72 = UINT16_MAX;
static int32_t t17 = -1;
int16_t x78 = 329;
static int32_t t19 = 2;
int8_t x87 = INT8_MIN;
int8_t x89 = -1;
volatile int8_t x94 = -1;
static int32_t t23 = 54624;
volatile uint16_t x105 = 2U;
int64_t x107 = -1LL;
uint32_t x110 = 35U;
int32_t t27 = -32212;
uint8_t x113 = 1U;
static uint16_t x120 = 2U;
uint16_t x137 = 2U;
volatile int32_t t34 = -1733279;
volatile int32_t x144 = -546;
uint8_t x150 = UINT8_MAX;
int64_t x152 = -1LL;
int8_t x153 = INT8_MIN;
int64_t x154 = INT64_MAX;
uint64_t x157 = 235669261772LLU;
int8_t x158 = -17;
uint64_t x159 = 256531932732548LLU;
volatile int16_t x163 = INT16_MAX;
int8_t x166 = INT8_MIN;
int32_t x167 = 213764491;
static volatile int32_t x172 = INT32_MAX;
volatile int32_t t42 = 4;
uint16_t x174 = 15U;
volatile int8_t x181 = -1;
volatile int32_t t46 = -51830343;
static volatile int64_t x190 = INT64_MIN;
static int32_t x191 = INT32_MIN;
static int32_t t51 = -450282;
int64_t x220 = -1LL;
int8_t x221 = INT8_MIN;
int64_t x229 = -19472236251438495LL;
int32_t t57 = -51;
uint16_t x234 = UINT16_MAX;
volatile uint8_t x235 = UINT8_MAX;
volatile int32_t t58 = 34576;
int8_t x240 = -1;
int8_t x244 = INT8_MIN;
int32_t t60 = 87;
int16_t x245 = INT16_MAX;
static volatile int8_t x247 = 0;
static volatile int32_t t61 = 357;
uint16_t x251 = UINT16_MAX;
int32_t x252 = -1;
static int32_t t63 = -6357534;
uint32_t x259 = 0U;
uint16_t x261 = UINT16_MAX;
static volatile int32_t t65 = -600;
int32_t x265 = -211998428;
volatile int16_t x271 = 3;
static int32_t x276 = INT32_MAX;
static volatile uint64_t x280 = UINT64_MAX;
static volatile int16_t x281 = INT16_MIN;
int32_t x283 = -30;
volatile int8_t x284 = INT8_MIN;
int64_t x286 = INT64_MAX;
int16_t x293 = -232;
int32_t x294 = -1;
uint16_t x296 = 2U;
volatile uint16_t x298 = 699U;
int64_t x300 = -1LL;
static volatile uint32_t x303 = UINT32_MAX;
volatile int64_t x304 = INT64_MAX;
int32_t t75 = -128465;
uint64_t x305 = 25378861139535044LLU;
volatile int32_t t76 = -207;
int32_t t77 = -1;
int16_t x315 = -12189;
int32_t x316 = INT32_MIN;
volatile int32_t t79 = 1;
static int8_t x326 = INT8_MAX;
volatile uint16_t x329 = UINT16_MAX;
static volatile int64_t x331 = INT64_MIN;
int32_t x334 = INT32_MIN;
int32_t t84 = -12482857;
volatile int32_t t85 = 164576230;
volatile int32_t t86 = 655355;
volatile int32_t t87 = -3773;
uint32_t x355 = UINT32_MAX;
static int32_t t88 = -1187;
int32_t t90 = 792962990;
volatile uint16_t x369 = 28903U;
uint32_t x373 = 5U;
int8_t x374 = INT8_MIN;
int64_t x381 = 724718840LL;
static int64_t x392 = 7041LL;
uint8_t x397 = 86U;
volatile uint32_t x398 = 1U;
int64_t x399 = INT64_MIN;


void f0(void) {
	volatile uint8_t x2 = 0U;
	uint16_t x3 = 2062U;
	int16_t x4 = -1;
	int32_t t0 = -45436;

	t0 = ((x1<=x2)&(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 906U;
	int32_t x6 = 74691;
	int64_t x7 = 25000161505LL;
	static uint8_t x8 = 4U;

	t1 = ((x5<=x6)&(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 521U;
	int8_t x10 = -1;
	int16_t x11 = -4120;

	t2 = ((x9<=x10)&(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 13U;
	static int8_t x14 = INT8_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 1001894;

	t3 = ((x13<=x14)&(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 1702;

	t4 = ((x17<=x18)&(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -87;
	volatile int32_t x24 = INT32_MAX;
	static volatile int32_t t5 = 724;

	t5 = ((x21<=x22)&(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	int32_t t6 = 3672544;

	t6 = ((x25<=x26)&(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	volatile int16_t x32 = -5462;

	t7 = ((x29<=x30)&(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 10U;
	int32_t x34 = INT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t8 = 11;

	t8 = ((x33<=x34)&(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = -3;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 2320U;
	int32_t t9 = 16;

	t9 = ((x37<=x38)&(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int64_t x42 = INT64_MAX;
	int32_t x44 = -1;

	t10 = ((x41<=x42)&(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	volatile uint16_t x46 = 0U;
	int8_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	static int32_t t11 = 463310044;

	t11 = ((x45<=x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 9U;
	uint8_t x51 = UINT8_MAX;
	static volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -654;

	t12 = ((x49<=x50)&(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	static uint64_t x55 = 13317578834633219LLU;
	uint32_t x56 = 25321963U;
	int32_t t13 = 1876182;

	t13 = ((x53<=x54)&(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 2U;
	volatile int32_t t14 = 1;

	t14 = ((x57<=x58)&(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint32_t x63 = 773913303U;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -10670357;

	t15 = ((x61<=x62)&(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -751186524798LL;
	int8_t x66 = -1;
	static int8_t x67 = -1;
	volatile uint32_t x68 = 3531455U;
	volatile int32_t t16 = -1;

	t16 = ((x65<=x66)&(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -4112893;
	volatile uint16_t x70 = UINT16_MAX;
	int16_t x71 = INT16_MIN;

	t17 = ((x69<=x70)&(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	static int16_t x76 = INT16_MIN;
	static int32_t t18 = 155413715;

	t18 = ((x73<=x74)&(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 6951010778058345LL;
	int64_t x79 = -1LL;
	uint16_t x80 = 0U;

	t19 = ((x77<=x78)&(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x82 = -667288332;
	int64_t x83 = -962LL;
	int16_t x84 = -1;
	int32_t t20 = 0;

	t20 = ((x81<=x82)&(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	uint8_t x86 = 91U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -21067;

	t21 = ((x85<=x86)&(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 6855LLU;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 57357810;

	t22 = ((x89<=x90)&(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -31;
	int32_t x95 = INT32_MIN;
	int16_t x96 = 8227;

	t23 = ((x93<=x94)&(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	volatile uint32_t x99 = 218U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 0;

	t24 = ((x97<=x98)&(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	volatile int16_t x102 = INT16_MAX;
	int64_t x103 = -362743481523669LL;
	uint32_t x104 = 2U;
	int32_t t25 = -13;

	t25 = ((x101<=x102)&(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 2283U;
	uint16_t x108 = 26U;
	int32_t t26 = -250;

	t26 = ((x105<=x106)&(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;

	t27 = ((x109<=x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x114 = UINT16_MAX;
	volatile uint16_t x115 = 13U;
	uint64_t x116 = 5LLU;
	volatile int32_t t28 = 113099;

	t28 = ((x113<=x114)&(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1375;
	int64_t x118 = -253LL;
	int16_t x119 = -1;
	int32_t t29 = 157116729;

	t29 = ((x117<=x118)&(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MAX;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -3;
	volatile int32_t t30 = 1;

	t30 = ((x121<=x122)&(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	int8_t x126 = INT8_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	static int64_t x128 = INT64_MAX;
	volatile int32_t t31 = -4911;

	t31 = ((x125<=x126)&(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = 4U;
	uint8_t x131 = 0U;
	int32_t x132 = 766691;
	int32_t t32 = -17;

	t32 = ((x129<=x130)&(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 10U;
	int32_t x134 = INT32_MIN;
	int16_t x135 = 0;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -1;

	t33 = ((x133<=x134)&(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = INT64_MAX;
	int32_t x140 = -1;

	t34 = ((x137<=x138)&(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = UINT64_MAX;
	volatile uint8_t x142 = 23U;
	int8_t x143 = 0;
	int32_t t35 = 56966;

	t35 = ((x141<=x142)&(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = -503;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = -588397;

	t36 = ((x145<=x146)&(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int32_t x151 = -2435;
	static volatile int32_t t37 = 740150;

	t37 = ((x149<=x150)&(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x155 = 3U;
	int64_t x156 = -1394LL;
	volatile int32_t t38 = 641608300;

	t38 = ((x153<=x154)&(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x160 = 25U;
	static int32_t t39 = 0;

	t39 = ((x157<=x158)&(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -55205LL;
	static volatile int64_t x162 = INT64_MIN;
	volatile int8_t x164 = INT8_MIN;
	static int32_t t40 = -1;

	t40 = ((x161<=x162)&(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static int32_t x168 = 2;
	int32_t t41 = -1061;

	t41 = ((x165<=x166)&(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 0LL;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;

	t42 = ((x169<=x170)&(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 16U;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = INT64_MIN;
	static int32_t t43 = -8704456;

	t43 = ((x173<=x174)&(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int8_t x179 = 0;
	int16_t x180 = -1;
	volatile int32_t t44 = 94425;

	t44 = ((x177<=x178)&(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -5972560263397177LL;
	static int8_t x183 = -1;
	uint16_t x184 = 35U;
	volatile int32_t t45 = 5496;

	t45 = ((x181<=x182)&(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = INT32_MIN;
	int16_t x187 = 4507;
	volatile int32_t x188 = INT32_MIN;

	t46 = ((x185<=x186)&(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	static uint8_t x192 = 23U;
	volatile int32_t t47 = -114;

	t47 = ((x189<=x190)&(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 66443386U;
	uint8_t x194 = 88U;
	int64_t x195 = INT64_MAX;
	static uint8_t x196 = 57U;
	int32_t t48 = 90822;

	t48 = ((x193<=x194)&(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 25LLU;
	static int32_t x198 = INT32_MAX;
	int64_t x199 = 1036098676056360814LL;
	volatile uint8_t x200 = 10U;
	int32_t t49 = -1702823;

	t49 = ((x197<=x198)&(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = 10;
	int32_t x203 = INT32_MIN;
	static int8_t x204 = 0;
	static volatile int32_t t50 = 105016;

	t50 = ((x201<=x202)&(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	static uint8_t x207 = 1U;
	int16_t x208 = INT16_MIN;

	t51 = ((x205<=x206)&(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int8_t x210 = -1;
	static uint32_t x211 = 4024U;
	int64_t x212 = INT64_MIN;
	int32_t t52 = 72966596;

	t52 = ((x209<=x210)&(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 2826;
	static int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = 16253748209LLU;
	int8_t x216 = 17;
	int32_t t53 = 0;

	t53 = ((x213<=x214)&(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = INT16_MIN;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t54 = -1197616;

	t54 = ((x217<=x218)&(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 204555574U;
	volatile int32_t t55 = 63;

	t55 = ((x221<=x222)&(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = 209;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = 0LLU;
	int32_t t56 = -406004694;

	t56 = ((x225<=x226)&(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 62084785948889788LLU;

	t57 = ((x229<=x230)&(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 2030277;
	static int8_t x236 = INT8_MIN;

	t58 = ((x233<=x234)&(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MIN;
	static int8_t x239 = -1;
	volatile int32_t t59 = 33073165;

	t59 = ((x237<=x238)&(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	uint8_t x242 = 74U;
	int8_t x243 = -1;

	t60 = ((x241<=x242)&(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = UINT16_MAX;
	volatile int16_t x248 = -1;

	t61 = ((x245<=x246)&(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 2910590;
	static int32_t x250 = INT32_MAX;
	volatile int32_t t62 = 30;

	t62 = ((x249<=x250)&(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 3;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	volatile int32_t x256 = -1760;

	t63 = ((x253<=x254)&(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 64LLU;
	int16_t x258 = INT16_MIN;
	int64_t x260 = -8942LL;
	volatile int32_t t64 = 1669080;

	t64 = ((x257<=x258)&(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = 346684LL;
	uint8_t x263 = 4U;
	volatile uint32_t x264 = 163590U;

	t65 = ((x261<=x262)&(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MAX;
	static int16_t x267 = INT16_MIN;
	int32_t x268 = -2108289;
	static int32_t t66 = -1001760;

	t66 = ((x265<=x266)&(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 16;
	uint16_t x270 = UINT16_MAX;
	static int64_t x272 = -1LL;
	static int32_t t67 = 2357;

	t67 = ((x269<=x270)&(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 40U;
	int32_t x274 = -150298;
	uint64_t x275 = 101387989636490LLU;
	static int32_t t68 = -108175152;

	t68 = ((x273<=x274)&(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 24;
	static uint16_t x278 = 215U;
	int8_t x279 = INT8_MIN;
	static volatile int32_t t69 = -325;

	t69 = ((x277<=x278)&(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 3770600573106912541LL;
	int32_t t70 = 1;

	t70 = ((x281<=x282)&(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x287 = -1;
	uint32_t x288 = 2356586U;
	int32_t t71 = 136;

	t71 = ((x285<=x286)&(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 4333557407779169984LL;
	volatile int16_t x290 = INT16_MAX;
	volatile int8_t x291 = INT8_MIN;
	int64_t x292 = 62604LL;
	int32_t t72 = 0;

	t72 = ((x289<=x290)&(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x295 = INT64_MAX;
	int32_t t73 = 152206;

	t73 = ((x293<=x294)&(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 56309126LLU;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = 6277;

	t74 = ((x297<=x298)&(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -772623449348420LL;
	uint64_t x302 = 484110642430443554LLU;

	t75 = ((x301<=x302)&(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	static int64_t x308 = INT64_MIN;

	t76 = ((x305<=x306)&(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	static uint64_t x312 = 6894697035337LLU;

	t77 = ((x309<=x310)&(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = INT64_MAX;
	int64_t x314 = INT64_MAX;
	volatile int32_t t78 = -2563;

	t78 = ((x313<=x314)&(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 4LLU;
	int32_t x318 = 7589419;
	int32_t x319 = INT32_MIN;
	static volatile int32_t x320 = 30;

	t79 = ((x317<=x318)&(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -7;

	t80 = ((x321<=x322)&(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int16_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;
	int32_t t81 = -141;

	t81 = ((x325<=x326)&(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = -1;
	static int64_t x332 = -1076955788982279745LL;
	int32_t t82 = -51;

	t82 = ((x329<=x330)&(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static volatile uint16_t x335 = 313U;
	static int16_t x336 = INT16_MIN;
	static int32_t t83 = 1;

	t83 = ((x333<=x334)&(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = -1LL;

	t84 = ((x337<=x338)&(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -155497099398LL;
	uint64_t x342 = 1LLU;
	int16_t x343 = 521;
	volatile int8_t x344 = 0;

	t85 = ((x341<=x342)&(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = 1;
	int64_t x346 = INT64_MIN;
	static int64_t x347 = INT64_MIN;
	int64_t x348 = 7104188709857LL;

	t86 = ((x345<=x346)&(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	uint16_t x350 = 6789U;
	int8_t x351 = 0;
	int32_t x352 = -16365321;

	t87 = ((x349<=x350)&(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -278806;
	int16_t x354 = INT16_MIN;
	volatile int32_t x356 = INT32_MAX;

	t88 = ((x353<=x354)&(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	static int64_t x359 = INT64_MAX;
	int64_t x360 = INT64_MAX;
	int32_t t89 = -240923216;

	t89 = ((x357<=x358)&(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 29U;
	int32_t x362 = INT32_MAX;
	volatile int8_t x363 = INT8_MAX;
	static int16_t x364 = -310;

	t90 = ((x361<=x362)&(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	static int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 337U;
	int32_t t91 = 3797150;

	t91 = ((x365<=x366)&(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x370 = 1;
	static uint16_t x371 = 11U;
	static int8_t x372 = INT8_MAX;
	int32_t t92 = -4;

	t92 = ((x369<=x370)&(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x375 = 15U;
	int32_t x376 = -1;
	int32_t t93 = 27;

	t93 = ((x373<=x374)&(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = -1;
	int64_t x379 = -1LL;
	volatile int16_t x380 = INT16_MIN;
	int32_t t94 = 0;

	t94 = ((x377<=x378)&(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = -1;
	static int16_t x384 = INT16_MIN;
	int32_t t95 = 0;

	t95 = ((x381<=x382)&(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint32_t x386 = 396U;
	volatile uint8_t x387 = 14U;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 3913894;

	t96 = ((x385<=x386)&(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	volatile int32_t t97 = 94417;

	t97 = ((x389<=x390)&(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 46305U;
	int64_t x394 = -1LL;
	uint8_t x395 = 12U;
	int16_t x396 = 2;
	int32_t t98 = 175724;

	t98 = ((x393<=x394)&(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x400 = UINT64_MAX;
	static int32_t t99 = -69180096;

	t99 = ((x397<=x398)&(x399==x400));

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
