#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = INT32_MIN;
int64_t x8 = INT64_MIN;
volatile int32_t t2 = 11;
int64_t x17 = -1LL;
uint16_t x30 = 12275U;
int16_t x38 = INT16_MIN;
int8_t x39 = -1;
static volatile int32_t t7 = -31;
uint64_t x53 = 383006308LLU;
int16_t x77 = -1;
volatile int16_t x80 = INT16_MIN;
uint64_t x104 = 988299758733703LLU;
uint16_t x107 = 150U;
volatile int32_t x111 = 0;
uint8_t x113 = UINT8_MAX;
int8_t x115 = INT8_MAX;
static volatile uint64_t t19 = 45834285205LLU;
static int8_t x131 = INT8_MIN;
int32_t t22 = 98500;
int8_t x136 = INT8_MAX;
volatile uint16_t x143 = 1808U;
uint8_t x151 = 75U;
int16_t x152 = INT16_MAX;
static int8_t x156 = INT8_MIN;
int64_t x167 = INT64_MAX;
int16_t x170 = INT16_MAX;
volatile int32_t t28 = -4687037;
volatile uint8_t x185 = UINT8_MAX;
static int16_t x187 = INT16_MIN;
volatile int64_t t30 = -262105222181LL;
static volatile uint16_t x192 = 1U;
int8_t x199 = 15;
static volatile int32_t t33 = -363;
volatile uint16_t x222 = UINT16_MAX;
int64_t x230 = -1348971133061019042LL;
int64_t t39 = -5209122266607169LL;
int16_t x255 = -1;
int16_t x257 = 6;
int16_t x263 = -1;
int8_t x266 = INT8_MIN;
uint64_t x267 = UINT64_MAX;
int64_t x269 = INT64_MIN;
static int8_t x272 = INT8_MAX;
volatile uint32_t x278 = UINT32_MAX;
uint16_t x280 = 1U;
int64_t x282 = -1LL;
uint16_t x296 = UINT16_MAX;
int32_t x304 = INT32_MIN;
static int16_t x308 = -102;
static volatile int32_t t51 = 99863851;
static uint8_t x316 = 26U;
uint8_t x334 = 0U;
volatile int32_t x341 = -1;
int32_t x342 = -1;
int16_t x343 = -1;
int8_t x358 = 8;
static volatile uint64_t x372 = 40335LLU;
int32_t x374 = -1267253;
volatile int32_t t63 = 66;
int16_t x379 = INT16_MAX;
static volatile int16_t x382 = -961;
int16_t x384 = -1;
uint16_t x386 = 127U;
static int8_t x391 = INT8_MIN;
static uint32_t x396 = 675U;
static int64_t x412 = 9LL;
volatile int64_t t70 = 172789251LL;
int16_t x420 = -1392;
volatile int64_t t72 = 1LL;
static int16_t x421 = -1;
int32_t x458 = -1;
uint8_t x464 = UINT8_MAX;
static volatile int32_t t78 = -3673926;
int16_t x467 = -1;
int16_t x469 = -1;
static volatile int16_t x470 = 10280;
static volatile int32_t x472 = INT32_MAX;
uint8_t x478 = 28U;
volatile uint64_t t83 = 1244901898LLU;
int8_t x501 = -1;
static uint16_t x515 = 863U;
uint32_t x517 = UINT32_MAX;
int64_t t90 = 171LL;
uint8_t x523 = UINT8_MAX;
int64_t t91 = 7203LL;
int16_t x525 = INT16_MIN;
static int8_t x526 = -1;
uint32_t x538 = UINT32_MAX;
int16_t x540 = 75;
int32_t x553 = -1;
int16_t x554 = INT16_MIN;
static uint8_t x555 = UINT8_MAX;


void f0(void) {
	int64_t x5 = INT64_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	volatile uint64_t t0 = 16LLU;

	t0 = (x5+((x6-x7)-x8));

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x9 = INT32_MAX;
	int8_t x10 = INT8_MAX;
	static volatile int64_t x11 = -1LL;
	int32_t x12 = INT32_MAX;
	int64_t t1 = 14753678LL;

	t1 = (x9+((x10-x11)-x12));

	if (t1 != 128LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 4U;
	volatile int8_t x14 = -1;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MIN;

	t2 = (x13+((x14-x15)-x16));

	if (t2 != 32899) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	int64_t x19 = -25910LL;
	int32_t x20 = INT32_MIN;
	int64_t t3 = -1200LL;

	t3 = (x17+((x18-x19)-x20));

	if (t3 != -9223372034707266251LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 5365557023LLU;
	static uint8_t x26 = 47U;
	static volatile uint16_t x27 = UINT16_MAX;
	int8_t x28 = 1;
	uint64_t t4 = 6555LLU;

	t4 = (x25+((x26-x27)-x28));

	if (t4 != 5365491534LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 68;
	uint16_t x31 = 170U;
	int32_t x32 = 408403;
	volatile int32_t t5 = -6328373;

	t5 = (x29+((x30-x31)-x32));

	if (t5 != -396230) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile uint8_t x35 = 6U;
	static int8_t x36 = INT8_MAX;
	int32_t t6 = -22211;

	t6 = (x33+((x34-x35)-x36));

	if (t6 != 32506) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int8_t x40 = 0;

	t7 = (x37+((x38-x39)-x40));

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 10LL;
	uint32_t x42 = UINT32_MAX;
	volatile int8_t x43 = INT8_MIN;
	volatile uint32_t x44 = 2937U;
	int64_t t8 = 9371151LL;

	t8 = (x41+((x42-x43)-x44));

	if (t8 != 4294964496LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 5U;
	volatile uint16_t x50 = 11U;
	static int16_t x51 = 12939;
	uint32_t x52 = 92U;
	uint32_t t9 = 857297496U;

	t9 = (x49+((x50-x51)-x52));

	if (t9 != 4294954281U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = UINT32_MAX;
	static int64_t x55 = 2579298939398150LL;
	int32_t x56 = 115;
	volatile uint64_t t10 = 6413117731028457562LLU;

	t10 = (x53+((x54-x55)-x56));

	if (t10 != 18444164779448126954LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 1U;
	int64_t x66 = INT64_MIN;
	int16_t x67 = 0;
	int64_t x68 = -113466681LL;
	int64_t t11 = 749336925LL;

	t11 = (x65+((x66-x67)-x68));

	if (t11 != -9223372036741309126LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	volatile uint16_t x74 = UINT16_MAX;
	uint32_t x75 = UINT32_MAX;
	uint8_t x76 = 87U;
	volatile uint32_t t12 = 1411126U;

	t12 = (x73+((x74-x75)-x76));

	if (t12 != 65448U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x78 = 321U;
	int8_t x79 = INT8_MIN;
	volatile int32_t t13 = -17462413;

	t13 = (x77+((x78-x79)-x80));

	if (t13 != 33216) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = 1;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = 48810164LLU;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t14 = 1789328443524610578LLU;

	t14 = (x93+((x94-x95)-x96));

	if (t14 != 18446744073660741453LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	static uint16_t x99 = UINT16_MAX;
	int16_t x100 = INT16_MIN;
	volatile int64_t t15 = 0LL;

	t15 = (x97+((x98-x99)-x100));

	if (t15 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x101 = 246814350022001LLU;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	uint64_t t16 = 125468LLU;

	t16 = (x101+((x102-x103)-x104));

	if (t16 != 9222630551446064107LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = 644;
	uint64_t x106 = 1847207743841LLU;
	volatile uint16_t x108 = 9U;
	volatile uint64_t t17 = 375359LLU;

	t17 = (x105+((x106-x107)-x108));

	if (t17 != 1847207744326LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x109 = 0U;
	uint16_t x110 = 7208U;
	volatile int32_t x112 = INT32_MAX;
	static volatile int32_t t18 = 453;

	t18 = (x109+((x110-x111)-x112));

	if (t18 != -2147476439) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x114 = 20994341;
	uint64_t x116 = UINT64_MAX;

	t19 = (x113+((x114-x115)-x116));

	if (t19 != 20994470LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = 0U;
	int16_t x118 = 867;
	uint8_t x119 = 86U;
	static int16_t x120 = INT16_MIN;
	int32_t t20 = -48496;

	t20 = (x117+((x118-x119)-x120));

	if (t20 != 33549) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = -1;
	int32_t x126 = -58435;
	int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	uint32_t t21 = 1U;

	t21 = (x125+((x126-x127)-x128));

	if (t21 != 4294908862U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MAX;
	static volatile uint16_t x132 = 65U;

	t22 = (x129+((x130-x131)-x132));

	if (t22 != -32578) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x133 = 856541LL;
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = UINT16_MAX;
	volatile int64_t t23 = -22451LL;

	t23 = (x133+((x134-x135)-x136));

	if (t23 != 791134LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MIN;
	static uint32_t x142 = 5607U;
	static int16_t x144 = -8;
	uint32_t t24 = 4212806U;

	t24 = (x141+((x142-x143)-x144));

	if (t24 != 2147487455U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x149 = 3432U;
	uint8_t x150 = UINT8_MAX;
	int32_t t25 = 6969035;

	t25 = (x149+((x150-x151)-x152));

	if (t25 != -29155) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x153 = 41163490LLU;
	static uint16_t x154 = UINT16_MAX;
	int32_t x155 = 0;
	uint64_t t26 = 1919843752761LLU;

	t26 = (x153+((x154-x155)-x156));

	if (t26 != 41229153LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = -2102197191494789674LL;
	static int64_t x166 = INT64_MAX;
	volatile int16_t x168 = 410;
	volatile int64_t t27 = 531644565278554LL;

	t27 = (x165+((x166-x167)-x168));

	if (t27 != -2102197191494790084LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x169 = UINT16_MAX;
	uint16_t x171 = 2U;
	int8_t x172 = INT8_MAX;

	t28 = (x169+((x170-x171)-x172));

	if (t28 != 98173) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = UINT16_MAX;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = -1LL;
	static int64_t t29 = -58076480306742035LL;

	t29 = (x181+((x182-x183)-x184));

	if (t29 != 4295032576LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x186 = INT64_MIN;
	int64_t x188 = -3455816LL;

	t30 = (x185+((x186-x187)-x188));

	if (t30 != -9223372036851286969LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x189 = 1U;
	uint32_t x190 = 320U;
	int16_t x191 = INT16_MAX;
	uint32_t t31 = 161250331U;

	t31 = (x189+((x190-x191)-x192));

	if (t31 != 4294934849U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = -1217311427417227LL;
	uint64_t x194 = 205912904879LLU;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t32 = 389447890LLU;

	t32 = (x193+((x194-x195)-x196));

	if (t32 != 9222154931340296228LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = 196693;
	int16_t x200 = 8;

	t33 = (x197+((x198-x199)-x200));

	if (t33 != -2147286978) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x201 = 15887U;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;
	static int64_t t34 = 31386125576186LL;

	t34 = (x201+((x202-x203)-x204));

	if (t34 != -9223372034707276272LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x206 = 7LL;
	int16_t x207 = INT16_MAX;
	volatile int16_t x208 = -1;
	int64_t t35 = 282574LL;

	t35 = (x205+((x206-x207)-x208));

	if (t35 != -2147516407LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x209 = 6236;
	static int32_t x210 = 26100481;
	static uint32_t x211 = 46U;
	volatile uint16_t x212 = UINT16_MAX;
	uint32_t t36 = 198705720U;

	t36 = (x209+((x210-x211)-x212));

	if (t36 != 26041136U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x221 = 13619;
	int16_t x223 = INT16_MIN;
	static uint16_t x224 = UINT16_MAX;
	int32_t t37 = -15456709;

	t37 = (x221+((x222-x223)-x224));

	if (t37 != 46387) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x229 = -1;
	uint32_t x231 = 28U;
	uint64_t x232 = 13LLU;
	uint64_t t38 = 212LLU;

	t38 = (x229+((x230-x231)-x232));

	if (t38 != 17097772940648532532LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x233 = -1;
	int64_t x234 = -1LL;
	volatile int16_t x235 = 5062;
	static int64_t x236 = 1008LL;

	t39 = (x233+((x234-x235)-x236));

	if (t39 != -6072LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x241 = UINT32_MAX;
	int64_t x242 = -1324LL;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	int64_t t40 = 8303457085465207LL;

	t40 = (x241+((x242-x243)-x244));

	if (t40 != 4294966100LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x253 = INT16_MAX;
	uint16_t x254 = 1170U;
	uint16_t x256 = 20U;
	int32_t t41 = -36324195;

	t41 = (x253+((x254-x255)-x256));

	if (t41 != 33918) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x258 = -8080;
	static volatile uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = 6;
	volatile int32_t t42 = 4303184;

	t42 = (x257+((x258-x259)-x260));

	if (t42 != -73615) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x261 = 14660498040882LL;
	static int32_t x262 = -1;
	int64_t x264 = -1382282LL;
	static int64_t t43 = -1012108946501LL;

	t43 = (x261+((x262-x263)-x264));

	if (t43 != 14660499423164LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x265 = 123U;
	uint8_t x268 = 11U;
	uint64_t t44 = 142039697922557103LLU;

	t44 = (x265+((x266-x267)-x268));

	if (t44 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x270 = INT16_MAX;
	static uint8_t x271 = 11U;
	int64_t t45 = 71681854704311612LL;

	t45 = (x269+((x270-x271)-x272));

	if (t45 != -9223372036854743179LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x277 = 2402156U;
	volatile int64_t x279 = -1LL;
	static volatile int64_t t46 = 13213956LL;

	t46 = (x277+((x278-x279)-x280));

	if (t46 != 4297369451LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x281 = UINT16_MAX;
	static int32_t x283 = -1;
	int16_t x284 = INT16_MAX;
	volatile int64_t t47 = 85176404852LL;

	t47 = (x281+((x282-x283)-x284));

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 32U;
	uint64_t x288 = 354LLU;
	volatile uint64_t t48 = 31979768130557433LLU;

	t48 = (x285+((x286-x287)-x288));

	if (t48 != 18446744071562034814LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	uint16_t x295 = 1U;
	volatile int32_t t49 = 15516251;

	t49 = (x293+((x294-x295)-x296));

	if (t49 != -65792) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x301 = -1;
	volatile uint64_t x302 = 375939315418164783LLU;
	static volatile uint16_t x303 = 111U;
	uint64_t t50 = 15854174290656678LLU;

	t50 = (x301+((x302-x303)-x304));

	if (t50 != 375939317565648319LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x305 = 56U;
	volatile uint16_t x306 = UINT16_MAX;
	int32_t x307 = -1;

	t51 = (x305+((x306-x307)-x308));

	if (t51 != 65694) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = UINT8_MAX;
	uint8_t x315 = 0U;
	static int64_t t52 = -34527631153595563LL;

	t52 = (x313+((x314-x315)-x316));

	if (t52 != 228LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x325 = 2669251;
	int16_t x326 = INT16_MAX;
	int8_t x327 = -24;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t53 = -273;

	t53 = (x325+((x326-x327)-x328));

	if (t53 != 2636507) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x329 = 10U;
	static int64_t x330 = -2LL;
	int16_t x331 = -1;
	volatile int64_t x332 = 69920LL;
	int64_t t54 = -7472LL;

	t54 = (x329+((x330-x331)-x332));

	if (t54 != -69911LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x333 = 2351U;
	int16_t x335 = INT16_MAX;
	static int64_t x336 = -1647336540958766LL;
	volatile int64_t t55 = -144LL;

	t55 = (x333+((x334-x335)-x336));

	if (t55 != 1647336540928350LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint16_t x338 = 907U;
	static volatile uint64_t x339 = 615569LLU;
	static volatile int64_t x340 = -14258421LL;
	uint64_t t56 = 2374LLU;

	t56 = (x337+((x338-x339)-x340));

	if (t56 != 13644014LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x344 = -4;
	static int32_t t57 = 0;

	t57 = (x341+((x342-x343)-x344));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x345 = -189;
	static int16_t x346 = INT16_MIN;
	volatile int32_t x347 = INT32_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t58 = -3677086;

	t58 = (x345+((x346-x347)-x348));

	if (t58 != 2147450692) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int16_t x350 = 249;
	static volatile uint32_t x351 = UINT32_MAX;
	int32_t x352 = -310641;
	volatile uint64_t t59 = 103998577515918LLU;

	t59 = (x349+((x350-x351)-x352));

	if (t59 != 310890LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x357 = INT64_MAX;
	volatile int8_t x359 = -1;
	int64_t x360 = INT64_MAX;
	int64_t t60 = 1922585668393232511LL;

	t60 = (x357+((x358-x359)-x360));

	if (t60 != 9LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x365 = INT8_MIN;
	int32_t x366 = 5186539;
	uint64_t x367 = UINT64_MAX;
	volatile uint32_t x368 = UINT32_MAX;
	uint64_t t61 = 23370346305764LLU;

	t61 = (x365+((x366-x367)-x368));

	if (t61 != 18446744069419770733LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MAX;
	uint16_t x371 = 1U;
	static volatile uint64_t t62 = 44381628530284LLU;

	t62 = (x369+((x370-x371)-x372));

	if (t62 != 9223372036854735599LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = 8219;
	uint8_t x375 = 100U;
	int16_t x376 = -3;

	t63 = (x373+((x374-x375)-x376));

	if (t63 != -1259131) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x377 = INT8_MAX;
	int64_t x378 = -1LL;
	int64_t x380 = -1LL;
	static int64_t t64 = -12639680LL;

	t64 = (x377+((x378-x379)-x380));

	if (t64 != -32640LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x381 = -1;
	int16_t x383 = INT16_MAX;
	int32_t t65 = 9423083;

	t65 = (x381+((x382-x383)-x384));

	if (t65 != -33728) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x385 = 7;
	uint64_t x387 = 5388661543665135561LLU;
	uint32_t x388 = UINT32_MAX;
	static uint64_t t66 = 6747655587916242216LLU;

	t66 = (x385+((x386-x387)-x388));

	if (t66 != 13058082525749448894LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x389 = 45790LLU;
	volatile uint8_t x390 = 2U;
	uint64_t x392 = 5613LLU;
	static uint64_t t67 = 8149731LLU;

	t67 = (x389+((x390-x391)-x392));

	if (t67 != 40307LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 1899792310071785LLU;
	int64_t x395 = 2897109609137644394LL;
	static volatile uint64_t t68 = 37843LLU;

	t68 = (x393+((x394-x395)-x396));

	if (t68 != 6328162220027202524LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = 1608;
	int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t69 = -1005211306;

	t69 = (x401+((x402-x403)-x404));

	if (t69 != 1608) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x409 = -54943910617LL;
	int64_t x410 = -1LL;
	static volatile int8_t x411 = 3;

	t70 = (x409+((x410-x411)-x412));

	if (t70 != -54943910630LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x413 = -1LL;
	volatile uint16_t x414 = 129U;
	int16_t x415 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;
	static int64_t t71 = -42833172513886480LL;

	t71 = (x413+((x414-x415)-x416));

	if (t71 != 32897LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x417 = -1;
	volatile int64_t x418 = -1318831063566LL;
	uint8_t x419 = UINT8_MAX;

	t72 = (x417+((x418-x419)-x420));

	if (t72 != -1318831062430LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x422 = 85281251U;
	volatile int32_t x423 = INT32_MIN;
	int8_t x424 = 1;
	static volatile uint32_t t73 = 15339060U;

	t73 = (x421+((x422-x423)-x424));

	if (t73 != 2232764897U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x433 = 65061853302LL;
	static uint64_t x434 = UINT64_MAX;
	uint32_t x435 = UINT32_MAX;
	static int32_t x436 = INT32_MIN;
	volatile uint64_t t74 = 2856570645LLU;

	t74 = (x433+((x434-x435)-x436));

	if (t74 != 62914369654LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x441 = INT8_MIN;
	uint8_t x442 = 0U;
	uint32_t x443 = 163U;
	int8_t x444 = -1;
	volatile uint32_t t75 = 521661U;

	t75 = (x441+((x442-x443)-x444));

	if (t75 != 4294967006U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x449 = INT64_MIN;
	static int16_t x450 = INT16_MAX;
	int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	static int64_t t76 = 13536926LL;

	t76 = (x449+((x450-x451)-x452));

	if (t76 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x457 = 1U;
	volatile uint8_t x459 = UINT8_MAX;
	static int8_t x460 = 1;
	int32_t t77 = 791831;

	t77 = (x457+((x458-x459)-x460));

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x461 = 24U;
	int8_t x462 = 0;
	uint16_t x463 = UINT16_MAX;

	t78 = (x461+((x462-x463)-x464));

	if (t78 != -65766) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x465 = 3U;
	int64_t x466 = -1LL;
	static uint64_t x468 = 77904LLU;
	static uint64_t t79 = 22249045LLU;

	t79 = (x465+((x466-x467)-x468));

	if (t79 != 18446744073709473715LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x471 = INT16_MIN;
	volatile int32_t t80 = 48330;

	t80 = (x469+((x470-x471)-x472));

	if (t80 != -2147440600) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x473 = UINT16_MAX;
	int64_t x474 = 67701244085745056LL;
	int8_t x475 = INT8_MIN;
	volatile uint16_t x476 = 7U;
	int64_t t81 = 4146539068580LL;

	t81 = (x473+((x474-x475)-x476));

	if (t81 != 67701244085810712LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x477 = -1LL;
	int8_t x479 = INT8_MAX;
	static int16_t x480 = 0;
	int64_t t82 = 123717039758294LL;

	t82 = (x477+((x478-x479)-x480));

	if (t82 != -100LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x481 = 1708963LLU;
	static volatile int32_t x482 = 12099;
	uint32_t x483 = UINT32_MAX;
	int32_t x484 = INT32_MIN;

	t83 = (x481+((x482-x483)-x484));

	if (t83 != 2149204711LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x489 = INT16_MAX;
	uint64_t x490 = UINT64_MAX;
	static volatile uint64_t x491 = 29426964377108727LLU;
	int32_t x492 = INT32_MIN;
	static volatile uint64_t t84 = 223700956LLU;

	t84 = (x489+((x490-x491)-x492));

	if (t84 != 18417317111479959303LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x493 = 1275872U;
	static int16_t x494 = -2126;
	uint32_t x495 = 74U;
	int8_t x496 = 1;
	volatile uint32_t t85 = 102087670U;

	t85 = (x493+((x494-x495)-x496));

	if (t85 != 1273671U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x497 = 4822504LLU;
	int32_t x498 = 14;
	int8_t x499 = INT8_MAX;
	int16_t x500 = -5960;
	volatile uint64_t t86 = 16993971918586LLU;

	t86 = (x497+((x498-x499)-x500));

	if (t86 != 4828351LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x502 = 444U;
	uint8_t x503 = 0U;
	static volatile int16_t x504 = 1;
	static uint32_t t87 = 1142282218U;

	t87 = (x501+((x502-x503)-x504));

	if (t87 != 442U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x505 = 1400042877U;
	int64_t x506 = -1LL;
	int8_t x507 = -1;
	volatile int32_t x508 = 32324992;
	volatile int64_t t88 = -6941767LL;

	t88 = (x505+((x506-x507)-x508));

	if (t88 != 1367717885LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x513 = INT16_MIN;
	int64_t x514 = -1LL;
	int32_t x516 = 1;
	int64_t t89 = -3658031LL;

	t89 = (x513+((x514-x515)-x516));

	if (t89 != -33633LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x518 = 63U;
	int8_t x519 = -57;
	int64_t x520 = 14184069260LL;

	t90 = (x517+((x518-x519)-x520));

	if (t90 != -9889101845LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x521 = UINT8_MAX;
	static int64_t x522 = -13892501979LL;
	int8_t x524 = 4;

	t91 = (x521+((x522-x523)-x524));

	if (t91 != -13892501983LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x527 = 6591U;
	static int32_t x528 = INT32_MIN;
	uint32_t t92 = 2057419964U;

	t92 = (x525+((x526-x527)-x528));

	if (t92 != 2147444288U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x529 = INT8_MAX;
	int8_t x530 = INT8_MAX;
	uint32_t x531 = 119301810U;
	static uint64_t x532 = 267869313243687LLU;
	uint64_t t93 = 84234573LLU;

	t93 = (x529+((x530-x531)-x532));

	if (t93 != 18446476208571973669LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x533 = 3096241754547LLU;
	int16_t x534 = INT16_MIN;
	int64_t x535 = -1LL;
	static int8_t x536 = INT8_MIN;
	volatile uint64_t t94 = 102739LLU;

	t94 = (x533+((x534-x535)-x536));

	if (t94 != 3096241721908LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x537 = INT32_MIN;
	volatile uint8_t x539 = 15U;
	static uint32_t t95 = 384U;

	t95 = (x537+((x538-x539)-x540));

	if (t95 != 2147483557U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x541 = -25;
	int32_t x542 = 1222783;
	int8_t x543 = -1;
	static uint32_t x544 = 87U;
	static uint32_t t96 = 73U;

	t96 = (x541+((x542-x543)-x544));

	if (t96 != 1222672U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x545 = -2;
	int16_t x546 = INT16_MIN;
	static int16_t x547 = 18;
	int16_t x548 = -1;
	static int32_t t97 = 0;

	t97 = (x545+((x546-x547)-x548));

	if (t97 != -32787) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x549 = 37U;
	int16_t x550 = INT16_MIN;
	uint16_t x551 = UINT16_MAX;
	int8_t x552 = 27;
	volatile uint32_t t98 = 1245318U;

	t98 = (x549+((x550-x551)-x552));

	if (t98 != 4294869003U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x556 = INT8_MIN;
	static volatile int32_t t99 = 325335362;

	t99 = (x553+((x554-x555)-x556));

	if (t99 != -32896) { NG(); } else { ; }
	
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
