#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = UINT8_MAX;
volatile uint32_t x3 = UINT32_MAX;
volatile int32_t t1 = 31;
static int32_t x10 = -66054935;
static int32_t t2 = 0;
uint64_t x27 = 27710559285713LLU;
int32_t x28 = INT32_MAX;
uint64_t x30 = 397022995510LLU;
static volatile int64_t t9 = 211133991999291993LL;
volatile int16_t x51 = 223;
int8_t x58 = 9;
int64_t x60 = -1LL;
volatile uint32_t x65 = 11040123U;
uint16_t x66 = 91U;
int64_t x68 = INT64_MIN;
volatile uint8_t x70 = UINT8_MAX;
volatile int16_t x71 = -9;
int32_t t17 = 167915240;
int16_t x80 = 8632;
uint8_t x82 = 34U;
uint64_t t19 = 10982LLU;
int16_t x88 = 2;
volatile int8_t x96 = INT8_MAX;
int16_t x106 = INT16_MIN;
int8_t x107 = INT8_MIN;
volatile int16_t x108 = -7165;
volatile int8_t x109 = INT8_MIN;
uint64_t x111 = 27497492115LLU;
volatile int32_t t25 = -638;
int16_t x119 = -127;
int64_t x127 = -131777LL;
volatile int16_t x129 = INT16_MAX;
int32_t t28 = -42;
int16_t x134 = -1;
static volatile uint64_t t30 = 19594321423929LLU;
int32_t x151 = 0;
int16_t x178 = INT16_MIN;
int32_t x187 = -795;
int8_t x192 = -1;
int8_t x193 = INT8_MIN;
int64_t x194 = INT64_MIN;
int16_t x200 = INT16_MAX;
static int64_t x203 = INT64_MAX;
int64_t x204 = INT64_MIN;
volatile int16_t x205 = INT16_MIN;
int32_t x206 = INT32_MIN;
uint32_t x209 = 1837U;
int16_t x218 = 259;
uint16_t x219 = UINT16_MAX;
int8_t x222 = INT8_MIN;
int16_t x229 = INT16_MAX;
int64_t x231 = -1LL;
static int64_t x239 = -905405392806970511LL;
volatile int32_t t55 = -256;
int32_t t56 = 4;
int64_t x252 = INT64_MIN;
uint8_t x258 = 0U;
volatile uint64_t t59 = 782706370761629322LLU;
int64_t x261 = -1LL;
int64_t x265 = 301805286270LL;
int32_t x267 = -1;
static volatile int8_t x268 = 11;
int16_t x271 = 1520;
int8_t x281 = INT8_MAX;
int16_t x286 = INT16_MIN;
volatile uint64_t x290 = 28768778LLU;
uint16_t x299 = 12U;
volatile uint32_t x302 = UINT32_MAX;
static int32_t x307 = INT32_MIN;
int8_t x309 = INT8_MIN;
int64_t x312 = INT64_MIN;
int8_t x315 = INT8_MAX;
volatile int16_t x325 = -10939;
uint64_t x327 = 2818LLU;
uint64_t x329 = 272574984838LLU;
uint32_t x333 = UINT32_MAX;
static uint32_t x336 = 1011748123U;
static volatile uint16_t x346 = 377U;
static int32_t x347 = INT32_MIN;
volatile int32_t x352 = INT32_MAX;
int32_t t79 = -8450;
int32_t x354 = -1;
volatile uint8_t x357 = UINT8_MAX;
int8_t x361 = INT8_MAX;
int8_t x363 = INT8_MAX;
int16_t x365 = INT16_MIN;
static volatile int32_t t83 = 219;
static uint32_t x369 = UINT32_MAX;
int32_t x370 = INT32_MAX;
static int16_t x373 = -1;
uint8_t x379 = 4U;
uint64_t x383 = 8286LLU;
int32_t x388 = INT32_MAX;
int32_t x391 = INT32_MIN;
uint32_t t89 = 79369544U;
int8_t x393 = INT8_MIN;
int8_t x396 = -56;
int8_t x397 = -1;
uint8_t x398 = 33U;
static int32_t t91 = -443;
uint16_t x409 = 22U;
int8_t x410 = 18;
uint8_t x413 = 15U;
volatile int32_t t95 = INT32_MAX;
static int16_t x425 = INT16_MIN;
volatile int32_t t98 = 165;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint16_t x4 = 153U;
	int32_t t0 = 15;

	t0 = (x1-(x2<=(x3|x4)));

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 71U;
	static int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	static uint32_t x8 = 124827817U;

	t1 = (x5-(x6<=(x7|x8)));

	if (t1 != 70) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 27U;
	int32_t x11 = INT32_MAX;
	static uint8_t x12 = 1U;

	t2 = (x9-(x10<=(x11|x12)));

	if (t2 != 26) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2U;
	static int16_t x14 = -1;
	int8_t x15 = INT8_MAX;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -481170;

	t3 = (x13-(x14<=(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x18 = 114152LLU;
	int8_t x19 = -1;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = 255972873;

	t4 = (x17-(x18<=(x19|x20)));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static uint32_t x22 = 2261336U;
	uint8_t x23 = 0U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -11094;

	t5 = (x21-(x22<=(x23|x24)));

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1895LLU;
	uint8_t x26 = 31U;
	static uint64_t t6 = 39009362025410639LLU;

	t6 = (x25-(x26<=(x27|x28)));

	if (t6 != 1894LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -57;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 833167;

	t7 = (x29-(x30<=(x31|x32)));

	if (t7 != -58) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 3381592LL;
	int64_t x38 = -458315LL;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = -1;
	int64_t t8 = 196740133LL;

	t8 = (x37-(x38<=(x39|x40)));

	if (t8 != 3381591LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 275127341562665788LL;
	int64_t x42 = -69257213661348LL;
	int64_t x43 = 92608LL;
	uint16_t x44 = 0U;

	t9 = (x41-(x42<=(x43|x44)));

	if (t9 != 275127341562665787LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	volatile int8_t x46 = -21;
	int32_t x47 = 5887;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = -22970;

	t10 = (x45-(x46<=(x47|x48)));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -1;
	static int32_t x50 = INT32_MIN;
	int64_t x52 = -6039626429314LL;
	int32_t t11 = 2044788;

	t11 = (x49-(x50<=(x51|x52)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = 391249189349LL;
	static volatile uint16_t x54 = 91U;
	int32_t x55 = INT32_MAX;
	volatile int8_t x56 = 0;
	int64_t t12 = -886338094599974081LL;

	t12 = (x53-(x54<=(x55|x56)));

	if (t12 != 391249189348LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -2LL;
	volatile int32_t x59 = INT32_MAX;
	int64_t t13 = 3082LL;

	t13 = (x57-(x58<=(x59|x60)));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 18U;
	volatile uint16_t x62 = UINT16_MAX;
	int64_t x63 = 21003333LL;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t14 = -142980;

	t14 = (x61-(x62<=(x63|x64)));

	if (t14 != 18) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x67 = INT16_MIN;
	static volatile uint32_t t15 = 4294U;

	t15 = (x65-(x66<=(x67|x68)));

	if (t15 != 11040123U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	volatile int16_t x72 = -1;
	int32_t t16 = -130582;

	t16 = (x69-(x70<=(x71|x72)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = 0;
	static int16_t x75 = INT16_MAX;
	int8_t x76 = 24;

	t17 = (x73-(x74<=(x75|x76)));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 1948LLU;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	uint64_t t18 = 11955833427LLU;

	t18 = (x77-(x78<=(x79|x80)));

	if (t18 != 1948LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 1856318LLU;
	volatile int64_t x83 = -1LL;
	uint64_t x84 = 163LLU;

	t19 = (x81-(x82<=(x83|x84)));

	if (t19 != 1856317LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = 134638338802413LL;
	static volatile uint32_t x86 = 236446194U;
	int8_t x87 = INT8_MIN;
	static volatile int64_t t20 = -83864045LL;

	t20 = (x85-(x86<=(x87|x88)));

	if (t20 != 134638338802412LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = 0U;
	int8_t x94 = 2;
	int64_t x95 = INT64_MAX;
	int32_t t21 = 467031;

	t21 = (x93-(x94<=(x95|x96)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	static volatile uint8_t x98 = 1U;
	static volatile int32_t x99 = 203233;
	int8_t x100 = 0;
	volatile int32_t t22 = -314120241;

	t22 = (x97-(x98<=(x99|x100)));

	if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = -6LL;
	int64_t t23 = -1533103221920LL;

	t23 = (x105-(x106<=(x107|x108)));

	if (t23 != -7LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x110 = 3U;
	int32_t x112 = INT32_MIN;
	int32_t t24 = 14719;

	t24 = (x109-(x110<=(x111|x112)));

	if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x114 = 125199261525581256LLU;
	uint64_t x115 = 5113LLU;
	static int8_t x116 = -1;

	t25 = (x113-(x114<=(x115|x116)));

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 117U;
	uint32_t x118 = 1316243U;
	int8_t x120 = INT8_MIN;
	int32_t t26 = -964537869;

	t26 = (x117-(x118<=(x119|x120)));

	if (t26 != 116) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	uint8_t x126 = 2U;
	int64_t x128 = -1LL;
	static int64_t t27 = -14106518209219LL;

	t27 = (x125-(x126<=(x127|x128)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MIN;
	volatile uint16_t x131 = 958U;
	int8_t x132 = -15;

	t28 = (x129-(x130<=(x131|x132)));

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 26U;
	uint64_t x135 = UINT64_MAX;
	uint8_t x136 = 1U;
	volatile uint32_t t29 = 17496U;

	t29 = (x133-(x134<=(x135|x136)));

	if (t29 != 25U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 816434432954042LLU;
	int32_t x138 = -877382;
	int16_t x139 = INT16_MIN;
	volatile uint8_t x140 = 30U;

	t30 = (x137-(x138<=(x139|x140)));

	if (t30 != 816434432954041LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = 260541894LL;
	static int8_t x142 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t31 = -3456699377123510LL;

	t31 = (x141-(x142<=(x143|x144)));

	if (t31 != 260541894LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = INT64_MIN;
	static int8_t x146 = 1;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x145-(x146<=(x147|x148)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 1;
	int16_t x150 = INT16_MAX;
	int16_t x152 = -1;
	static int32_t t33 = -2889079;

	t33 = (x149-(x150<=(x151|x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	static int32_t x154 = 1;
	volatile int32_t x155 = -1;
	static int16_t x156 = -1;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x153-(x154<=(x155|x156)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	volatile uint32_t x158 = 2U;
	int8_t x159 = -59;
	int32_t x160 = 8686;
	static volatile int32_t t35 = -1902;

	t35 = (x157-(x158<=(x159|x160)));

	if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 958;
	uint32_t x162 = 2155571U;
	static int64_t x163 = 3553655139182342LL;
	uint32_t x164 = 919798066U;
	volatile int32_t t36 = -457;

	t36 = (x161-(x162<=(x163|x164)));

	if (t36 != 957) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = -3965114163034111LL;
	volatile int32_t t37 = 6567;

	t37 = (x165-(x166<=(x167|x168)));

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = 4;
	int32_t x170 = -3;
	int16_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	int32_t t38 = -176596610;

	t38 = (x169-(x170<=(x171|x172)));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	volatile int32_t x176 = 648837310;
	int32_t t39 = 9262;

	t39 = (x173-(x174<=(x175|x176)));

	if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x177 = INT16_MAX;
	static uint64_t x179 = 2212566085LLU;
	int64_t x180 = INT64_MAX;
	volatile int32_t t40 = 932215560;

	t40 = (x177-(x178<=(x179|x180)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = 0U;
	volatile uint8_t x182 = 120U;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 498LLU;
	volatile int32_t t41 = 45;

	t41 = (x181-(x182<=(x183|x184)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	uint32_t x188 = 12997U;
	int32_t t42 = -259774697;

	t42 = (x185-(x186<=(x187|x188)));

	if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = 20U;
	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	uint32_t t43 = 402U;

	t43 = (x189-(x190<=(x191|x192)));

	if (t43 != 19U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x195 = 5567;
	int16_t x196 = 30;
	static int32_t t44 = -250;

	t44 = (x193-(x194<=(x195|x196)));

	if (t44 != -129) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MAX;
	volatile uint8_t x198 = 1U;
	uint8_t x199 = 3U;
	int32_t t45 = -3;

	t45 = (x197-(x198<=(x199|x200)));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 26;
	static int16_t x202 = 3608;
	int32_t t46 = -244;

	t46 = (x201-(x202<=(x203|x204)));

	if (t46 != 26) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x207 = 211340616;
	volatile int64_t x208 = INT64_MIN;
	volatile int32_t t47 = 16888;

	t47 = (x205-(x206<=(x207|x208)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x210 = 2009U;
	uint8_t x211 = 2U;
	int64_t x212 = INT64_MAX;
	uint32_t t48 = 35214356U;

	t48 = (x209-(x210<=(x211|x212)));

	if (t48 != 1836U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x213 = -336LL;
	uint8_t x214 = 124U;
	volatile int8_t x215 = INT8_MIN;
	uint32_t x216 = UINT32_MAX;
	int64_t t49 = -254588292717155529LL;

	t49 = (x213-(x214<=(x215|x216)));

	if (t49 != -337LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x220 = -3;
	int32_t t50 = INT32_MIN;

	t50 = (x217-(x218<=(x219|x220)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1;
	volatile int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t51 = 109418434;

	t51 = (x221-(x222<=(x223|x224)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x225 = 7;
	int8_t x226 = 0;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t52 = 46584;

	t52 = (x225-(x226<=(x227|x228)));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x230 = INT16_MIN;
	static int64_t x232 = INT64_MAX;
	int32_t t53 = -920633575;

	t53 = (x229-(x230<=(x231|x232)));

	if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = 4;
	static int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t54 = -12055663;

	t54 = (x233-(x234<=(x235|x236)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = 33;
	volatile int32_t x238 = -1;
	static volatile int32_t x240 = INT32_MIN;

	t55 = (x237-(x238<=(x239|x240)));

	if (t55 != 33) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = 0;
	static int8_t x246 = INT8_MIN;
	uint8_t x247 = 102U;
	volatile int16_t x248 = INT16_MIN;

	t56 = (x245-(x246<=(x247|x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = 0;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -1LL;
	int32_t t57 = -1;

	t57 = (x249-(x250<=(x251|x252)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	static int32_t x254 = 198;
	static uint16_t x255 = 44U;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t58 = -1;

	t58 = (x253-(x254<=(x255|x256)));

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x257 = 1365943179969997010LLU;
	int64_t x259 = INT64_MIN;
	volatile int16_t x260 = INT16_MIN;

	t59 = (x257-(x258<=(x259|x260)));

	if (t59 != 1365943179969997010LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int32_t x264 = -4721;
	volatile int64_t t60 = 68808868628216LL;

	t60 = (x261-(x262<=(x263|x264)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x266 = 144670LLU;
	int64_t t61 = 103382019LL;

	t61 = (x265-(x266<=(x267|x268)));

	if (t61 != 301805286269LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -125611740185LL;
	static volatile int8_t x270 = INT8_MIN;
	uint64_t x272 = 3LLU;
	int64_t t62 = -1109679163546LL;

	t62 = (x269-(x270<=(x271|x272)));

	if (t62 != -125611740185LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 0U;
	uint64_t x274 = 28655999154LLU;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t63 = -104;

	t63 = (x273-(x274<=(x275|x276)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MAX;
	int8_t x279 = -1;
	int64_t x280 = -2923154379LL;
	int32_t t64 = 154291;

	t64 = (x277-(x278<=(x279|x280)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x282 = 494903U;
	volatile int8_t x283 = INT8_MIN;
	static uint32_t x284 = UINT32_MAX;
	int32_t t65 = -83009;

	t65 = (x281-(x282<=(x283|x284)));

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = 194U;
	int64_t x287 = -1LL;
	volatile int8_t x288 = INT8_MIN;
	uint32_t t66 = 2982U;

	t66 = (x285-(x286<=(x287|x288)));

	if (t66 != 193U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = 41LL;
	static volatile int64_t x291 = 93LL;
	int32_t x292 = -2031;
	int64_t t67 = 832887103LL;

	t67 = (x289-(x290<=(x291|x292)));

	if (t67 != 40LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = 2256673;
	int8_t x300 = -9;
	uint32_t t68 = UINT32_MAX;

	t68 = (x297-(x298<=(x299|x300)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x301 = INT64_MIN;
	volatile int16_t x303 = -5;
	int8_t x304 = INT8_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x301-(x302<=(x303|x304)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = UINT8_MAX;
	static volatile uint16_t x308 = UINT16_MAX;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (x305-(x306<=(x307|x308)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	int32_t t71 = 38084;

	t71 = (x309-(x310<=(x311|x312)));

	if (t71 != -129) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MIN;
	static volatile int8_t x314 = -1;
	int8_t x316 = -1;
	int32_t t72 = 23;

	t72 = (x313-(x314<=(x315|x316)));

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x317 = 27U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	int8_t x320 = 0;
	uint32_t t73 = 89872067U;

	t73 = (x317-(x318<=(x319|x320)));

	if (t73 != 27U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x326 = 222175791U;
	int16_t x328 = -1572;
	volatile int32_t t74 = 2802328;

	t74 = (x325-(x326<=(x327|x328)));

	if (t74 != -10940) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	uint64_t t75 = 26615179922LLU;

	t75 = (x329-(x330<=(x331|x332)));

	if (t75 != 272574984837LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = 2U;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x333-(x334<=(x335|x336)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = -39;
	static int16_t x343 = 6831;
	int8_t x344 = INT8_MAX;
	volatile int32_t t77 = 134656145;

	t77 = (x341-(x342<=(x343|x344)));

	if (t77 != 126) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = 142307LLU;
	static volatile uint8_t x348 = 2U;
	static uint64_t t78 = 2645366951533LLU;

	t78 = (x345-(x346<=(x347|x348)));

	if (t78 != 142307LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x349 = INT8_MIN;
	uint16_t x350 = 53U;
	uint32_t x351 = 1867U;

	t79 = (x349-(x350<=(x351|x352)));

	if (t79 != -129) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	int32_t x355 = 99;
	volatile uint16_t x356 = 11U;
	int64_t t80 = -70173573163585720LL;

	t80 = (x353-(x354<=(x355|x356)));

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = 45;
	int64_t x360 = -3LL;
	int32_t t81 = 1167;

	t81 = (x357-(x358<=(x359|x360)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x362 = -583LL;
	int16_t x364 = INT16_MIN;
	int32_t t82 = 173;

	t82 = (x361-(x362<=(x363|x364)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x366 = INT32_MIN;
	uint16_t x367 = UINT16_MAX;
	static int64_t x368 = 38971137765LL;

	t83 = (x365-(x366<=(x367|x368)));

	if (t83 != -32769) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x371 = 23;
	int16_t x372 = INT16_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x369-(x370<=(x371|x372)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x374 = -513414842432LL;
	static int8_t x375 = INT8_MIN;
	uint8_t x376 = 0U;
	volatile int32_t t85 = 6;

	t85 = (x373-(x374<=(x375|x376)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = 460;
	uint16_t x380 = 1292U;
	uint64_t t86 = 4LLU;

	t86 = (x377-(x378<=(x379|x380)));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 29;
	static int64_t x384 = 333098443LL;
	int32_t t87 = -239701419;

	t87 = (x381-(x382<=(x383|x384)));

	if (t87 != -129) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 6U;
	volatile uint16_t x387 = UINT16_MAX;
	volatile uint64_t t88 = 20979LLU;

	t88 = (x385-(x386<=(x387|x388)));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = 888673U;
	static int16_t x390 = -1;
	int8_t x392 = INT8_MIN;

	t89 = (x389-(x390<=(x391|x392)));

	if (t89 != 888673U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x394 = INT64_MAX;
	static int32_t x395 = -1;
	volatile int32_t t90 = 6190;

	t90 = (x393-(x394<=(x395|x396)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x399 = INT16_MIN;
	int16_t x400 = 63;

	t91 = (x397-(x398<=(x399|x400)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x401 = UINT8_MAX;
	int64_t x402 = INT64_MIN;
	int16_t x403 = -406;
	int64_t x404 = INT64_MIN;
	int32_t t92 = 107306;

	t92 = (x401-(x402<=(x403|x404)));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x411 = 1U;
	int64_t x412 = INT64_MIN;
	int32_t t93 = 1219;

	t93 = (x409-(x410<=(x411|x412)));

	if (t93 != 22) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x414 = INT32_MIN;
	static uint16_t x415 = 21806U;
	static int32_t x416 = INT32_MIN;
	static volatile int32_t t94 = 110929078;

	t94 = (x413-(x414<=(x415|x416)));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -1314;
	int64_t x420 = -1LL;

	t95 = (x417-(x418<=(x419|x420)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = 7294;
	int8_t x422 = INT8_MIN;
	static volatile int64_t x423 = 0LL;
	int64_t x424 = INT64_MIN;
	int32_t t96 = -603696;

	t96 = (x421-(x422<=(x423|x424)));

	if (t96 != 7294) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x426 = -1;
	volatile int32_t x427 = -1;
	int16_t x428 = INT16_MIN;
	int32_t t97 = -6;

	t97 = (x425-(x426<=(x427|x428)));

	if (t97 != -32769) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MAX;
	uint16_t x430 = 0U;
	int32_t x431 = 269247;
	int64_t x432 = INT64_MIN;

	t98 = (x429-(x430<=(x431|x432)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = UINT64_MAX;
	static int32_t x434 = -1;
	int32_t x435 = INT32_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t99 = 18308641053331LLU;

	t99 = (x433-(x434<=(x435|x436)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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
