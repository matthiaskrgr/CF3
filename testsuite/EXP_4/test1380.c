#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = INT32_MIN;
static volatile uint32_t x9 = UINT32_MAX;
volatile uint64_t x10 = UINT64_MAX;
volatile int32_t x14 = INT32_MAX;
int64_t x15 = INT64_MAX;
uint64_t x16 = UINT64_MAX;
uint32_t x19 = UINT32_MAX;
int32_t x20 = -965256;
int16_t x22 = 0;
volatile int16_t x23 = -1;
uint64_t t6 = 1LLU;
int8_t x29 = -19;
uint16_t x32 = UINT16_MAX;
int64_t x36 = 275276086150LL;
volatile int32_t x37 = INT32_MAX;
volatile uint16_t x39 = UINT16_MAX;
int64_t x41 = 1740678840505414728LL;
int16_t x43 = INT16_MIN;
volatile uint32_t x44 = 30218046U;
volatile int64_t x50 = -1LL;
int16_t x51 = -1;
uint32_t x54 = 10457U;
int8_t x55 = INT8_MIN;
static int16_t x59 = INT16_MIN;
static uint8_t x60 = 24U;
uint64_t t14 = 3861788562563904LLU;
volatile int64_t t18 = -1946LL;
volatile uint64_t t21 = 676947862144LLU;
int32_t x109 = -1;
volatile uint8_t x111 = 0U;
volatile int64_t x112 = INT64_MAX;
uint32_t x113 = 4039337U;
uint64_t x116 = 760249LLU;
int8_t x118 = INT8_MIN;
uint64_t t28 = 1LLU;
static volatile uint32_t x130 = 11451297U;
uint32_t x133 = 63130472U;
uint32_t t31 = 455704U;
static volatile int32_t x144 = INT32_MIN;
int64_t t33 = INT64_MIN;
static volatile uint16_t x152 = 422U;
volatile uint64_t x154 = UINT64_MAX;
static int8_t x161 = -1;
volatile int16_t x169 = 3990;
int32_t t39 = 60;
static int16_t x173 = INT16_MIN;
static int16_t x181 = INT16_MAX;
int8_t x188 = -1;
volatile int16_t x191 = -3;
int64_t x194 = 34760083826507LL;
uint16_t x195 = 1U;
volatile uint16_t x196 = UINT16_MAX;
volatile int32_t x199 = -4196;
int32_t t46 = 387;
int16_t x201 = INT16_MAX;
int8_t x203 = -1;
uint8_t x212 = UINT8_MAX;
int16_t x223 = 81;
volatile int32_t t52 = -403;
uint64_t x236 = 3949160302461577LLU;
int8_t x238 = -1;
int16_t x241 = INT16_MAX;
static int16_t x243 = INT16_MIN;
volatile int32_t x246 = 11;
uint8_t x248 = 123U;
int8_t x249 = -1;
int64_t x250 = 26705949757275LL;
int64_t x254 = INT64_MIN;
int32_t x256 = -1;
uint32_t x260 = 740U;
volatile int64_t t60 = INT64_MAX;
int8_t x262 = INT8_MIN;
uint64_t t61 = 5494069529LLU;
volatile int32_t t64 = -234;
static uint16_t x283 = 859U;
volatile int32_t t66 = 17046;
uint8_t x289 = 20U;
int16_t x290 = -2473;
volatile uint32_t x295 = 3752U;
int32_t x296 = -5;
uint64_t x304 = 3194LLU;
volatile int16_t x305 = -17;
int16_t x307 = 1;
volatile int32_t t72 = 1010530051;
static int16_t x309 = INT16_MAX;
int8_t x311 = -1;
volatile uint64_t t73 = 231933443LLU;
volatile int64_t x315 = INT64_MAX;
int16_t x316 = INT16_MAX;
int64_t x321 = 261277261728073535LL;
int16_t x324 = -1;
int32_t x328 = INT32_MIN;
volatile int32_t t77 = -981634981;
uint32_t x337 = 6023U;
volatile int32_t x346 = -21265816;
static int16_t x347 = -1;
volatile int64_t t80 = 4452853LL;
volatile uint32_t t81 = 34U;
uint8_t x356 = 1U;
static volatile uint32_t x364 = 5U;
int32_t x367 = INT32_MIN;
volatile uint64_t t85 = 1552750LLU;
int64_t x372 = INT64_MAX;
uint32_t x377 = 2U;
static uint16_t x378 = 1U;
int32_t x381 = INT32_MAX;
int32_t x383 = 0;
int32_t x387 = INT32_MIN;
static uint64_t t91 = 14LLU;
uint64_t x398 = UINT64_MAX;
static uint16_t x400 = UINT16_MAX;
int16_t x401 = INT16_MAX;
int8_t x402 = -1;
int32_t x410 = INT32_MIN;
int32_t x411 = INT32_MIN;
static int64_t x415 = INT64_MIN;
static int64_t x420 = 32LL;
int32_t t98 = -651758;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int8_t x2 = INT8_MIN;
	volatile uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;

	t0 = (x1-(x2*(x3<x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 2208152309294655158LL;
	volatile int8_t x6 = INT8_MAX;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -52354284LL;

	t1 = (x5-(x6*(x7<x8)));

	if (t1 != 2208152309294655158LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = 37144LLU;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 1634993252529LLU;

	t2 = (x9-(x10*(x11<x12)));

	if (t2 != 4294967296LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 301U;
	volatile int32_t t3 = -3415106;

	t3 = (x13-(x14*(x15<x16)));

	if (t3 != -2147483346) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = -3115;
	static volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17-(x18*(x19<x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = 360131717;

	t5 = (x21-(x22*(x23<x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 405U;
	uint64_t x26 = 688486778648648LLU;
	static int64_t x27 = INT64_MIN;
	volatile uint64_t x28 = UINT64_MAX;

	t6 = (x25-(x26*(x27<x28)));

	if (t6 != 18446055586930903373LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 1;
	volatile uint64_t x31 = 464275597936969224LLU;
	volatile int32_t t7 = -203;

	t7 = (x29-(x30*(x31<x32)));

	if (t7 != -19) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1616837;
	int8_t x34 = 1;
	uint32_t x35 = 837263U;
	static volatile int32_t t8 = 4;

	t8 = (x33-(x34*(x35<x36)));

	if (t8 != 1616836) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = INT32_MAX;

	t9 = (x37-(x38*(x39<x40)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = 19344U;
	volatile int64_t t10 = 30LL;

	t10 = (x41-(x42*(x43<x44)));

	if (t10 != 1740678840505414728LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -9LL;
	volatile uint16_t x46 = 7798U;
	static volatile uint8_t x47 = 1U;
	static int16_t x48 = INT16_MAX;
	volatile int64_t t11 = -30895LL;

	t11 = (x45-(x46*(x47<x48)));

	if (t11 != -7807LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -15;
	volatile uint16_t x52 = 20U;
	volatile int64_t t12 = 54465LL;

	t12 = (x49-(x50*(x51<x52)));

	if (t12 != -14LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 1U;
	int64_t x56 = INT64_MAX;
	volatile uint32_t t13 = 21361U;

	t13 = (x53-(x54*(x55<x56)));

	if (t13 != 4294956840U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;

	t14 = (x57-(x58*(x59<x60)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 0U;
	int32_t x62 = 679527;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = 3;
	volatile int32_t t15 = -8;

	t15 = (x61-(x62*(x63<x64)));

	if (t15 != -679527) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MAX;
	uint8_t x67 = 0U;
	int8_t x68 = INT8_MAX;
	uint64_t t16 = 6583LLU;

	t16 = (x65-(x66*(x67<x68)));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = -1;
	int16_t x74 = -427;
	static uint64_t x75 = UINT64_MAX;
	static int8_t x76 = INT8_MAX;
	int32_t t17 = 202893424;

	t17 = (x73-(x74*(x75<x76)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -7LL;
	int16_t x82 = 1;
	static int64_t x83 = INT64_MIN;
	int16_t x84 = 0;

	t18 = (x81-(x82*(x83<x84)));

	if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	int32_t x87 = 1707;
	volatile int16_t x88 = 1;
	int32_t t19 = INT32_MIN;

	t19 = (x85-(x86*(x87<x88)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	uint16_t x90 = 0U;
	uint32_t x91 = 4203153U;
	static uint32_t x92 = 11108U;
	volatile int32_t t20 = -77543;

	t20 = (x89-(x90*(x91<x92)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 347982734LLU;
	int8_t x94 = 25;
	int64_t x95 = 68394721360LL;
	uint8_t x96 = 32U;

	t21 = (x93-(x94*(x95<x96)));

	if (t21 != 347982734LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 52938902U;
	int64_t x102 = 12774744811LL;
	uint8_t x103 = UINT8_MAX;
	volatile int8_t x104 = INT8_MIN;
	int64_t t22 = 58LL;

	t22 = (x101-(x102*(x103<x104)));

	if (t22 != 52938902LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x105 = 8811U;
	uint16_t x106 = 1146U;
	int8_t x107 = -1;
	uint64_t x108 = 116714496648LLU;
	volatile int32_t t23 = 105;

	t23 = (x105-(x106*(x107<x108)));

	if (t23 != 8811) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -1;
	int32_t t24 = -18028;

	t24 = (x109-(x110*(x111<x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x114 = 52;
	int16_t x115 = INT16_MAX;
	static volatile uint32_t t25 = 0U;

	t25 = (x113-(x114*(x115<x116)));

	if (t25 != 4039285U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x117 = UINT32_MAX;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -1;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x117-(x118*(x119<x120)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = -1LL;
	int16_t x122 = -12406;
	uint16_t x123 = 470U;
	uint32_t x124 = UINT32_MAX;
	static volatile int64_t t27 = -63829407851509453LL;

	t27 = (x121-(x122*(x123<x124)));

	if (t27 != 12405LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = 4823951382353359LLU;
	int32_t x127 = 50;
	static uint16_t x128 = 13307U;

	t28 = (x125-(x126*(x127<x128)));

	if (t28 != 18441920120179714609LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = UINT16_MAX;
	int64_t x131 = -1LL;
	static int32_t x132 = INT32_MIN;
	uint32_t t29 = 2U;

	t29 = (x129-(x130*(x131<x132)));

	if (t29 != 65535U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x134 = -1;
	static uint32_t x135 = 418827U;
	static int32_t x136 = INT32_MIN;
	uint32_t t30 = 30U;

	t30 = (x133-(x134*(x135<x136)));

	if (t30 != 63130473U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = 11779584U;
	volatile uint32_t x138 = 392712822U;
	int16_t x139 = INT16_MAX;
	int32_t x140 = INT32_MIN;

	t31 = (x137-(x138*(x139<x140)));

	if (t31 != 11779584U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 660;
	static uint32_t x142 = 22419463U;
	volatile uint32_t x143 = 972152U;
	uint32_t t32 = 1000835887U;

	t32 = (x141-(x142*(x143<x144)));

	if (t32 != 4272548493U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	static volatile int8_t x146 = 8;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t x148 = -1;

	t33 = (x145-(x146*(x147<x148)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -3;
	int16_t x150 = INT16_MIN;
	static uint16_t x151 = 15487U;
	int32_t t34 = 265133966;

	t34 = (x149-(x150*(x151<x152)));

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = 4821233350704939LL;
	int16_t x155 = -2;
	int64_t x156 = -1LL;
	uint64_t t35 = 7551507LLU;

	t35 = (x153-(x154*(x155<x156)));

	if (t35 != 4821233350704940LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -126473LL;
	volatile int64_t x158 = INT64_MIN;
	int64_t x159 = -1LL;
	int8_t x160 = -1;
	static volatile int64_t t36 = 88LL;

	t36 = (x157-(x158*(x159<x160)));

	if (t36 != -126473LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x162 = -281486;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t37 = -484294319;

	t37 = (x161-(x162*(x163<x164)));

	if (t37 != 281485) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x165 = 8U;
	int32_t x166 = -1;
	uint16_t x167 = UINT16_MAX;
	uint8_t x168 = 1U;
	int32_t t38 = 0;

	t38 = (x165-(x166*(x167<x168)));

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x170 = -44729560;
	static volatile int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;

	t39 = (x169-(x170*(x171<x172)));

	if (t39 != 44733550) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MIN;
	static volatile int16_t x175 = 3;
	int64_t x176 = INT64_MIN;
	int32_t t40 = -7;

	t40 = (x173-(x174*(x175<x176)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = INT32_MAX;
	volatile uint32_t x178 = 1482716U;
	int16_t x179 = -5400;
	uint32_t x180 = 46U;
	uint32_t t41 = 111U;

	t41 = (x177-(x178*(x179<x180)));

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x182 = 2;
	int16_t x183 = INT16_MIN;
	volatile uint32_t x184 = UINT32_MAX;
	int32_t t42 = -122645528;

	t42 = (x181-(x182*(x183<x184)));

	if (t42 != 32765) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x185 = UINT8_MAX;
	int32_t x186 = 756708;
	volatile uint16_t x187 = UINT16_MAX;
	int32_t t43 = -14720733;

	t43 = (x185-(x186*(x187<x188)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = -1;
	int64_t x190 = 1LL;
	uint64_t x192 = 5095192134990LLU;
	static volatile int64_t t44 = -1504419151391LL;

	t44 = (x189-(x190*(x191<x192)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = INT16_MIN;
	int64_t t45 = -16088302711357868LL;

	t45 = (x193-(x194*(x195<x196)));

	if (t45 != -34760083859275LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -1;
	int8_t x198 = -1;
	uint64_t x200 = 17287600731LLU;

	t46 = (x197-(x198*(x199<x200)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t47 = -7;

	t47 = (x201-(x202*(x203<x204)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 65LLU;
	int8_t x210 = 1;
	int32_t x211 = INT32_MAX;
	static uint64_t t48 = 0LLU;

	t48 = (x209-(x210*(x211<x212)));

	if (t48 != 65LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x213 = -1LL;
	static int8_t x214 = INT8_MIN;
	uint32_t x215 = UINT32_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	volatile int64_t t49 = -475LL;

	t49 = (x213-(x214*(x215<x216)));

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 217LLU;
	uint32_t x219 = 0U;
	uint8_t x220 = 55U;
	uint64_t t50 = 5253670818LLU;

	t50 = (x217-(x218*(x219<x220)));

	if (t50 != 18446744073709551398LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = -1;
	static int8_t x222 = INT8_MIN;
	uint16_t x224 = 243U;
	int32_t t51 = 131;

	t51 = (x221-(x222*(x223<x224)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	static uint32_t x227 = 3276U;
	uint16_t x228 = 203U;

	t52 = (x225-(x226*(x227<x228)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MAX;
	static int8_t x230 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	uint8_t x232 = UINT8_MAX;
	int32_t t53 = -1755955;

	t53 = (x229-(x230*(x231<x232)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = 313293;
	int16_t x234 = 11514;
	int8_t x235 = INT8_MIN;
	volatile int32_t t54 = 681;

	t54 = (x233-(x234*(x235<x236)));

	if (t54 != 313293) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	volatile int32_t x239 = INT32_MIN;
	volatile int16_t x240 = -1;
	static int32_t t55 = 513010284;

	t55 = (x237-(x238*(x239<x240)));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x242 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;
	uint64_t t56 = 198391740LLU;

	t56 = (x241-(x242*(x243<x244)));

	if (t56 != 32768LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 10U;
	int32_t x247 = 21;
	static volatile int32_t t57 = -2;

	t57 = (x245-(x246*(x247<x248)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x251 = 323467415324073551LLU;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t58 = 11062263896912LL;

	t58 = (x249-(x250*(x251<x252)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x253 = 34U;
	uint32_t x255 = UINT32_MAX;
	int64_t t59 = 790LL;

	t59 = (x253-(x254*(x255<x256)));

	if (t59 != 34LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x257 = INT64_MAX;
	int64_t x258 = -24264009767LL;
	static int8_t x259 = INT8_MIN;

	t60 = (x257-(x258*(x259<x260)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 2LLU;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MAX;

	t61 = (x261-(x262*(x263<x264)));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x265 = UINT8_MAX;
	int16_t x266 = 0;
	int32_t x267 = 10822;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t62 = -40064630;

	t62 = (x265-(x266*(x267<x268)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 12U;
	static uint32_t x270 = UINT32_MAX;
	static int32_t x271 = INT32_MAX;
	volatile uint32_t x272 = 6U;
	static volatile uint32_t t63 = 11551614U;

	t63 = (x269-(x270*(x271<x272)));

	if (t63 != 12U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	int32_t x275 = -1;
	volatile int32_t x276 = INT32_MIN;

	t64 = (x273-(x274*(x275<x276)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MAX;
	static int8_t x279 = -2;
	static uint16_t x280 = 28715U;
	volatile int32_t t65 = -2;

	t65 = (x277-(x278*(x279<x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = -5;
	int16_t x284 = INT16_MIN;

	t66 = (x281-(x282*(x283<x284)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -10;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	uint32_t x288 = 3384U;
	volatile int32_t t67 = -117576157;

	t67 = (x285-(x286*(x287<x288)));

	if (t67 != -137) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x291 = 0;
	volatile uint64_t x292 = UINT64_MAX;
	int32_t t68 = -53270791;

	t68 = (x289-(x290*(x291<x292)));

	if (t68 != 2493) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = UINT8_MAX;
	uint32_t t69 = 2601586U;

	t69 = (x293-(x294*(x295<x296)));

	if (t69 != 4294967040U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	volatile uint32_t x299 = 23310U;
	int64_t x300 = -131433322LL;
	volatile int32_t t70 = 0;

	t70 = (x297-(x298*(x299<x300)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	int64_t x302 = -1LL;
	uint64_t x303 = 104LLU;
	int64_t t71 = 445776478371710LL;

	t71 = (x301-(x302*(x303<x304)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x306 = INT32_MIN;
	uint64_t x308 = 37117240353601LLU;

	t72 = (x305-(x306*(x307<x308)));

	if (t72 != 2147483631) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x310 = UINT64_MAX;
	int16_t x312 = -13;

	t73 = (x309-(x310*(x311<x312)));

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = -2824381602244574LL;
	int64_t t74 = -7LL;

	t74 = (x313-(x314*(x315<x316)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = 37U;
	uint8_t x323 = 103U;
	static volatile int64_t t75 = -970041833085LL;

	t75 = (x321-(x322*(x323<x324)));

	if (t75 != 261277261728073535LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 1U;
	int16_t x326 = INT16_MAX;
	int64_t x327 = -42385608057167LL;
	volatile int32_t t76 = -35079;

	t76 = (x325-(x326*(x327<x328)));

	if (t76 != -32766) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = 0;
	uint16_t x330 = 5712U;
	volatile uint64_t x331 = 365467LLU;
	int16_t x332 = INT16_MIN;

	t77 = (x329-(x330*(x331<x332)));

	if (t77 != -5712) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x338 = 23;
	int16_t x339 = INT16_MAX;
	static uint64_t x340 = UINT64_MAX;
	uint32_t t78 = 2556822U;

	t78 = (x337-(x338*(x339<x340)));

	if (t78 != 6000U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x341 = -2601321904061LL;
	volatile uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	volatile uint64_t x344 = 793542LLU;
	volatile int64_t t79 = 8938595435860470LL;

	t79 = (x341-(x342*(x343<x344)));

	if (t79 != -2601321969596LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -3666476475LL;
	volatile int8_t x348 = INT8_MIN;

	t80 = (x345-(x346*(x347<x348)));

	if (t80 != -3666476475LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = 34U;
	uint32_t x350 = 30U;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;

	t81 = (x349-(x350*(x351<x352)));

	if (t81 != 34U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = -5054326;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 122U;
	int32_t t82 = 31957099;

	t82 = (x353-(x354*(x355<x356)));

	if (t82 != -5054326) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = UINT8_MAX;
	static int32_t x359 = 25398;
	int16_t x360 = INT16_MAX;
	static int32_t t83 = -48590;

	t83 = (x357-(x358*(x359<x360)));

	if (t83 != -383) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = 1U;
	int8_t x362 = -50;
	uint64_t x363 = 7146213LLU;
	static volatile int32_t t84 = 30853;

	t84 = (x361-(x362*(x363<x364)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = 3U;
	uint64_t x366 = 9319329980LLU;
	volatile int8_t x368 = INT8_MIN;

	t85 = (x365-(x366*(x367<x368)));

	if (t85 != 18446744064390221639LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x369 = -3;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int32_t t86 = -253924;

	t86 = (x369-(x370*(x371<x372)));

	if (t86 != 2147483645) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x373 = UINT16_MAX;
	volatile uint32_t x374 = 1791355568U;
	uint16_t x375 = 403U;
	int16_t x376 = -1;
	uint32_t t87 = 178567527U;

	t87 = (x373-(x374*(x375<x376)));

	if (t87 != 65535U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x379 = 1;
	static int64_t x380 = INT64_MAX;
	uint32_t t88 = 23139U;

	t88 = (x377-(x378*(x379<x380)));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x382 = 51322280781178LLU;
	volatile int64_t x384 = -69LL;
	uint64_t t89 = 5633954620190LLU;

	t89 = (x381-(x382*(x383<x384)));

	if (t89 != 2147483647LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = UINT64_MAX;
	static volatile int8_t x386 = -1;
	int8_t x388 = 0;
	volatile uint64_t t90 = 503291041348798514LLU;

	t90 = (x385-(x386*(x387<x388)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 1620115LLU;
	int8_t x390 = 2;
	uint64_t x391 = 5898417893126948431LLU;
	static volatile int64_t x392 = 501682LL;

	t91 = (x389-(x390*(x391<x392)));

	if (t91 != 1620115LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	volatile uint8_t x395 = 1U;
	volatile int64_t x396 = INT64_MIN;
	int32_t t92 = INT32_MIN;

	t92 = (x393-(x394*(x395<x396)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x399 = 12U;
	static volatile uint64_t t93 = 3334LLU;

	t93 = (x397-(x398*(x399<x400)));

	if (t93 != 65536LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x403 = INT64_MAX;
	volatile int16_t x404 = 1794;
	static volatile int32_t t94 = 6662267;

	t94 = (x401-(x402*(x403<x404)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MAX;
	static int8_t x406 = 32;
	int64_t x407 = -1LL;
	uint16_t x408 = 3U;
	int32_t t95 = -226412;

	t95 = (x405-(x406*(x407<x408)));

	if (t95 != 2147483615) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = -1LL;
	int32_t x412 = INT32_MIN;
	int64_t t96 = -67005789LL;

	t96 = (x409-(x410*(x411<x412)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x413 = 368U;
	int16_t x414 = 1;
	int64_t x416 = -707740051629225LL;
	int32_t t97 = -54782676;

	t97 = (x413-(x414*(x415<x416)));

	if (t97 != 367) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = -1;
	int32_t x418 = -81008;
	static int64_t x419 = 0LL;

	t98 = (x417-(x418*(x419<x420)));

	if (t98 != 81007) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = -1LL;
	static int16_t x422 = INT16_MAX;
	int64_t x423 = INT64_MAX;
	volatile int16_t x424 = 222;
	volatile int64_t t99 = -92092LL;

	t99 = (x421-(x422*(x423<x424)));

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
