#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile int32_t x4 = -9;
int32_t t1 = 10422;
int64_t x9 = INT64_MAX;
uint16_t x12 = UINT16_MAX;
static uint32_t x14 = 257499U;
volatile uint16_t x21 = 10827U;
volatile int32_t t5 = -6;
static int32_t x25 = INT32_MIN;
uint16_t x29 = 2U;
static volatile uint32_t x32 = 2149U;
int8_t x33 = 14;
int64_t x34 = INT64_MIN;
volatile int32_t x35 = 73255884;
int32_t t8 = 14;
int64_t x43 = -480896LL;
int32_t t13 = -1328762;
volatile int32_t t14 = 3542732;
static volatile uint16_t x65 = 384U;
uint16_t x75 = 13950U;
volatile int64_t x79 = 112283754590LL;
uint32_t x88 = UINT32_MAX;
uint64_t x89 = 7447611LLU;
volatile int16_t x91 = INT16_MIN;
int32_t x95 = INT32_MIN;
int32_t t23 = 640;
int16_t x98 = -1;
int32_t x103 = -1;
volatile int32_t x111 = 1;
static uint64_t x116 = 53689217418LLU;
volatile int32_t t28 = 60022;
static uint16_t x118 = 3U;
int32_t x123 = -44479697;
volatile int32_t t31 = 70;
uint16_t x130 = UINT16_MAX;
static volatile int32_t t34 = -32847181;
static volatile int16_t x151 = INT16_MAX;
int32_t t37 = 128707;
int64_t x155 = 58232786847LL;
volatile int32_t x158 = -7858113;
static int8_t x159 = -1;
int32_t t39 = -1233;
uint64_t x171 = 8208216167830088201LLU;
int16_t x183 = -1;
volatile int32_t t45 = -28984625;
volatile int32_t t47 = 986;
uint16_t x193 = UINT16_MAX;
static int8_t x194 = INT8_MAX;
int32_t t48 = 69;
static uint8_t x199 = 0U;
volatile int32_t t50 = 2016715;
uint32_t x206 = UINT32_MAX;
uint64_t x208 = UINT64_MAX;
uint64_t x212 = 43499942333LLU;
static uint64_t x214 = UINT64_MAX;
static int8_t x216 = INT8_MIN;
volatile int32_t t53 = 63496;
uint8_t x217 = 28U;
volatile int64_t x219 = INT64_MIN;
static uint64_t x226 = 392LLU;
int64_t x227 = INT64_MIN;
volatile uint32_t x236 = 1617191U;
int64_t x238 = INT64_MAX;
uint16_t x242 = 47U;
static int32_t x244 = INT32_MAX;
static int64_t x251 = INT64_MIN;
static int32_t t63 = 21;
int64_t x257 = -1LL;
static uint8_t x269 = 112U;
int8_t x274 = -36;
int32_t t68 = 14;
uint16_t x288 = 174U;
int32_t t71 = 297566;
static int64_t x291 = -1LL;
int64_t x294 = INT64_MIN;
int32_t x295 = -1;
static int8_t x297 = INT8_MIN;
int8_t x298 = -1;
uint8_t x304 = 22U;
uint8_t x305 = 12U;
volatile int32_t t76 = 100392;
int32_t t77 = -22;
uint8_t x318 = 0U;
static int16_t x323 = INT16_MIN;
volatile int8_t x325 = INT8_MIN;
int32_t x326 = -1;
volatile int32_t t82 = 23172182;
int8_t x334 = INT8_MAX;
int32_t x347 = -10373237;
int8_t x350 = -1;
static volatile int32_t t87 = 233281;
volatile int16_t x353 = INT16_MIN;
static uint8_t x355 = 18U;
int16_t x359 = INT16_MIN;
uint64_t x362 = 5069137900856732248LLU;
volatile uint8_t x364 = 5U;
static int64_t x376 = 3LL;
static int64_t x378 = INT64_MAX;
int32_t x380 = -1;
int8_t x387 = -4;
static int8_t x390 = INT8_MIN;
volatile int32_t t97 = 56008;
int8_t x393 = INT8_MIN;
int32_t t98 = 1;
uint32_t x399 = UINT32_MAX;


void f0(void) {
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 0;

	t0 = (x1<=(x2==(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int16_t x6 = INT16_MIN;
	volatile uint8_t x7 = 47U;
	static volatile int8_t x8 = 2;

	t1 = (x5<=(x6==(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 1572477LLU;
	uint64_t x11 = UINT64_MAX;
	static int32_t t2 = 11;

	t2 = (x9<=(x10==(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = -872335510;
	int32_t t3 = 380;

	t3 = (x13<=(x14==(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -148LL;
	int64_t x19 = -1LL;
	int64_t x20 = -1688233LL;
	static int32_t t4 = -12488683;

	t4 = (x17<=(x18==(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = -5;
	volatile uint16_t x24 = UINT16_MAX;

	t5 = (x21<=(x22==(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	static uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 28109;

	t6 = (x25<=(x26==(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = INT32_MAX;
	int8_t x31 = -18;
	volatile int32_t t7 = 78;

	t7 = (x29<=(x30==(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x36 = -30LL;

	t8 = (x33<=(x34==(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 5649539680743327LLU;
	static int8_t x38 = INT8_MIN;
	volatile int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 1;

	t9 = (x37<=(x38==(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 924U;
	int64_t x42 = -1LL;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -2144681;

	t10 = (x41<=(x42==(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 8U;
	int16_t x46 = -1;
	int32_t x47 = -1;
	int8_t x48 = -3;
	volatile int32_t t11 = 69;

	t11 = (x45<=(x46==(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	volatile int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = 27;

	t12 = (x49<=(x50==(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = INT32_MIN;
	static int32_t x56 = INT32_MIN;

	t13 = (x53<=(x54==(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	volatile uint8_t x58 = 0U;
	static volatile int64_t x59 = -268069868579LL;
	volatile int16_t x60 = -3806;

	t14 = (x57<=(x58==(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -99730434LL;
	int32_t x62 = 7070;
	uint64_t x63 = 5482738857630LLU;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -13;

	t15 = (x61<=(x62==(x63&x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = 825LLU;
	static uint16_t x67 = 392U;
	uint32_t x68 = 51U;
	int32_t t16 = -132252414;

	t16 = (x65<=(x66==(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 509U;
	int64_t x70 = 928098966683593LL;
	int64_t x71 = -1LL;
	volatile uint16_t x72 = 5640U;
	volatile int32_t t17 = -42872;

	t17 = (x69<=(x70==(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 365U;
	volatile uint8_t x74 = 0U;
	uint64_t x76 = 10435100947LLU;
	volatile int32_t t18 = 9990550;

	t18 = (x73<=(x74==(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int32_t x78 = INT32_MIN;
	int8_t x80 = -2;
	int32_t t19 = -405;

	t19 = (x77<=(x78==(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	uint32_t x84 = 3984716U;
	int32_t t20 = -290816293;

	t20 = (x81<=(x82==(x83&x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = INT32_MIN;
	uint32_t x86 = UINT32_MAX;
	static volatile int8_t x87 = INT8_MIN;
	volatile int32_t t21 = 100;

	t21 = (x85<=(x86==(x87&x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	int8_t x92 = 1;
	volatile int32_t t22 = 11644;

	t22 = (x89<=(x90==(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 62U;
	uint16_t x94 = 0U;
	uint32_t x96 = UINT32_MAX;

	t23 = (x93<=(x94==(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1311532648900252178LLU;
	int64_t x99 = INT64_MIN;
	int16_t x100 = -1;
	volatile int32_t t24 = -2364;

	t24 = (x97<=(x98==(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = -2;
	volatile int16_t x104 = -1;
	volatile int32_t t25 = 31571;

	t25 = (x101<=(x102==(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = -1879606500LL;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	static int32_t t26 = 221727;

	t26 = (x105<=(x106==(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -8;
	uint64_t x110 = 2285645841LLU;
	int16_t x112 = -1;
	volatile int32_t t27 = 395835;

	t27 = (x109<=(x110==(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 25493U;
	static int64_t x114 = INT64_MIN;
	volatile int32_t x115 = INT32_MAX;

	t28 = (x113<=(x114==(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int32_t x119 = -2;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 5817315;

	t29 = (x117<=(x118==(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static volatile int32_t x122 = -8;
	int64_t x124 = INT64_MIN;
	static int32_t t30 = 10;

	t30 = (x121<=(x122==(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = 3U;
	static volatile int8_t x128 = INT8_MIN;

	t31 = (x125<=(x126==(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint32_t x131 = 265U;
	volatile int64_t x132 = -1LL;
	volatile int32_t t32 = 91115386;

	t32 = (x129<=(x130==(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -1;
	int32_t x134 = INT32_MAX;
	volatile uint8_t x135 = 3U;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -17136;

	t33 = (x133<=(x134==(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	uint32_t x138 = 2U;
	int32_t x139 = -1;
	static int8_t x140 = INT8_MAX;

	t34 = (x137<=(x138==(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 4022264U;
	uint8_t x144 = 55U;
	volatile int32_t t35 = 45;

	t35 = (x141<=(x142==(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1LLU;
	static volatile int8_t x146 = -1;
	int64_t x147 = -11932LL;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -2321;

	t36 = (x145<=(x146==(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 3U;
	static volatile uint8_t x150 = UINT8_MAX;
	static int32_t x152 = -1;

	t37 = (x149<=(x150==(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 3434631;
	volatile int16_t x154 = INT16_MAX;
	static int16_t x156 = 579;
	volatile int32_t t38 = -588940;

	t38 = (x153<=(x154==(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int16_t x160 = INT16_MAX;

	t39 = (x157<=(x158==(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 0U;
	int64_t x162 = INT64_MAX;
	uint8_t x163 = 1U;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -1574;

	t40 = (x161<=(x162==(x163&x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = 4594332206LLU;
	volatile int64_t x167 = INT64_MIN;
	int32_t x168 = -8;
	static int32_t t41 = 1355850;

	t41 = (x165<=(x166==(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	volatile uint8_t x170 = 125U;
	int16_t x172 = -1;
	int32_t t42 = -18;

	t42 = (x169<=(x170==(x171&x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 896LLU;
	int64_t x174 = INT64_MIN;
	static int32_t x175 = 721;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 1;

	t43 = (x173<=(x174==(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 733773U;
	uint16_t x178 = 12U;
	static volatile uint8_t x179 = 13U;
	static volatile int16_t x180 = -24;
	volatile int32_t t44 = -79765;

	t44 = (x177<=(x178==(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -1LL;
	static volatile int32_t x182 = -1;
	static volatile uint64_t x184 = 106225LLU;

	t45 = (x181<=(x182==(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 14365;
	int8_t x186 = INT8_MAX;
	int8_t x187 = 4;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 9651;

	t46 = (x185<=(x186==(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MAX;
	static uint16_t x191 = UINT16_MAX;
	uint64_t x192 = UINT64_MAX;

	t47 = (x189<=(x190==(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x195 = 78LL;
	static uint32_t x196 = 1965580U;

	t48 = (x193<=(x194==(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 1U;
	static uint64_t x198 = UINT64_MAX;
	int16_t x200 = -12813;
	int32_t t49 = 1777;

	t49 = (x197<=(x198==(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -390406569;
	int32_t x202 = -2214117;
	int32_t x203 = -1;
	static uint64_t x204 = 12463809337LLU;

	t50 = (x201<=(x202==(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 2817U;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 59540231;

	t51 = (x205<=(x206==(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MAX;
	static int16_t x211 = INT16_MIN;
	volatile int32_t t52 = 70333599;

	t52 = (x209<=(x210==(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -254;
	static int8_t x215 = INT8_MIN;

	t53 = (x213<=(x214==(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x218 = INT16_MIN;
	static int32_t x220 = -2982506;
	volatile int32_t t54 = 1867571;

	t54 = (x217<=(x218==(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1U;
	static int32_t x222 = INT32_MIN;
	static int32_t x223 = INT32_MAX;
	volatile int16_t x224 = -470;
	int32_t t55 = 2;

	t55 = (x221<=(x222==(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -13;
	static int64_t x228 = -14LL;
	int32_t t56 = -100017;

	t56 = (x225<=(x226==(x227&x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 3822LLU;
	volatile int8_t x230 = 1;
	static uint16_t x231 = UINT16_MAX;
	static uint8_t x232 = 16U;
	volatile int32_t t57 = 2000;

	t57 = (x229<=(x230==(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = -1;
	uint16_t x235 = 2U;
	volatile int32_t t58 = 822527;

	t58 = (x233<=(x234==(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1;
	static int8_t x239 = 0;
	volatile uint64_t x240 = 2115431LLU;
	volatile int32_t t59 = 1804794;

	t59 = (x237<=(x238==(x239&x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	static volatile int32_t t60 = -701781;

	t60 = (x241<=(x242==(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	static int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	static int32_t t61 = -614342879;

	t61 = (x245<=(x246==(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	uint16_t x250 = 1349U;
	uint32_t x252 = 96U;
	volatile int32_t t62 = 6236;

	t62 = (x249<=(x250==(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	static volatile uint16_t x254 = 10U;
	static uint32_t x255 = 9U;
	static int64_t x256 = INT64_MIN;

	t63 = (x253<=(x254==(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 9U;
	static uint32_t x259 = UINT32_MAX;
	int16_t x260 = -1;
	volatile int32_t t64 = -26793;

	t64 = (x257<=(x258==(x259&x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 4U;
	volatile int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	int16_t x264 = INT16_MAX;
	int32_t t65 = -6;

	t65 = (x261<=(x262==(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 1U;
	volatile int64_t x266 = INT64_MIN;
	uint32_t x267 = 496609U;
	int32_t x268 = INT32_MAX;
	int32_t t66 = 255;

	t66 = (x265<=(x266==(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = 1;
	int8_t x271 = -3;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 20;

	t67 = (x269<=(x270==(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int8_t x275 = -1;
	static uint32_t x276 = 20982U;

	t68 = (x273<=(x274==(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	volatile uint16_t x278 = 1702U;
	volatile int32_t x279 = INT32_MAX;
	uint32_t x280 = 44U;
	int32_t t69 = -4357;

	t69 = (x277<=(x278==(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	uint16_t x282 = 0U;
	int64_t x283 = -1LL;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = -145;

	t70 = (x281<=(x282==(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 118;
	uint32_t x286 = UINT32_MAX;
	volatile int64_t x287 = -1LL;

	t71 = (x285<=(x286==(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = -1193;
	uint32_t x292 = UINT32_MAX;
	int32_t t72 = -57324010;

	t72 = (x289<=(x290==(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int32_t x296 = -4464063;
	static int32_t t73 = 8732;

	t73 = (x293<=(x294==(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x299 = -1;
	int64_t x300 = -1LL;
	volatile int32_t t74 = -4;

	t74 = (x297<=(x298==(x299&x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -30LL;
	volatile int64_t x302 = -1LL;
	int32_t x303 = INT32_MIN;
	int32_t t75 = -752409492;

	t75 = (x301<=(x302==(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x306 = 3;
	int8_t x307 = -1;
	uint64_t x308 = 277318LLU;

	t76 = (x305<=(x306==(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = 1;
	volatile int8_t x311 = INT8_MIN;
	uint64_t x312 = 130594979071014LLU;

	t77 = (x309<=(x310==(x311&x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static uint64_t x314 = UINT64_MAX;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = -1;
	volatile int32_t t78 = 1;

	t78 = (x313<=(x314==(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int64_t x319 = -236978547485LL;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = -8;

	t79 = (x317<=(x318==(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	static int8_t x322 = INT8_MIN;
	uint32_t x324 = 3175467U;
	int32_t t80 = -387993332;

	t80 = (x321<=(x322==(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x327 = 14140352U;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = 120059910;

	t81 = (x325<=(x326==(x327&x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = -1;
	int8_t x331 = -1;
	uint16_t x332 = 916U;

	t82 = (x329<=(x330==(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 135524U;
	volatile int64_t x335 = -515144014379LL;
	int8_t x336 = INT8_MAX;
	static int32_t t83 = -1656;

	t83 = (x333<=(x334==(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 210LLU;
	static int64_t x338 = INT64_MAX;
	static int64_t x339 = INT64_MIN;
	volatile uint8_t x340 = 31U;
	static int32_t t84 = -47643;

	t84 = (x337<=(x338==(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -1;
	int64_t x342 = -1LL;
	volatile uint32_t x343 = 444897U;
	int16_t x344 = -1615;
	int32_t t85 = 784356;

	t85 = (x341<=(x342==(x343&x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = -1;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = 171;

	t86 = (x345<=(x346==(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	static volatile int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;

	t87 = (x349<=(x350==(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x354 = INT8_MIN;
	uint32_t x356 = 66729510U;
	int32_t t88 = 7730828;

	t88 = (x353<=(x354==(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 15637393797808024LLU;
	int32_t x358 = -22864;
	int8_t x360 = INT8_MAX;
	int32_t t89 = 180469;

	t89 = (x357<=(x358==(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x361 = 3050U;
	static int16_t x363 = 2;
	static int32_t t90 = 23;

	t90 = (x361<=(x362==(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 0;
	uint8_t x366 = 12U;
	int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = 45U;
	volatile int32_t t91 = -911650396;

	t91 = (x365<=(x366==(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	uint32_t x370 = 82860U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -1;
	int32_t t92 = 184600832;

	t92 = (x369<=(x370==(x371&x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int16_t x374 = 3;
	volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t t93 = 849;

	t93 = (x373<=(x374==(x375&x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	static int32_t x379 = -1;
	static volatile int32_t t94 = 342461;

	t94 = (x377<=(x378==(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 388U;
	uint16_t x382 = 5819U;
	int8_t x383 = -1;
	static uint64_t x384 = 505932LLU;
	int32_t t95 = 18163412;

	t95 = (x381<=(x382==(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int64_t x386 = -8222319079436LL;
	volatile int32_t x388 = 1849979;
	int32_t t96 = 14;

	t96 = (x385<=(x386==(x387&x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 8952143886703001LLU;
	uint8_t x391 = 1U;
	static int32_t x392 = 317392970;

	t97 = (x389<=(x390==(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -7;
	static volatile int64_t x395 = -256697033250205863LL;
	int8_t x396 = INT8_MIN;

	t98 = (x393<=(x394==(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1051719493503783LL;
	int8_t x398 = INT8_MAX;
	uint64_t x400 = 105236539LLU;
	int32_t t99 = 115784;

	t99 = (x397<=(x398==(x399&x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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
