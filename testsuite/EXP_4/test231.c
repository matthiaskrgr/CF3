#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 13921288;
int32_t x18 = INT32_MAX;
uint64_t x19 = 547576991971LLU;
int32_t x25 = INT32_MIN;
uint16_t x26 = UINT16_MAX;
int32_t t5 = -162;
int32_t x30 = INT32_MAX;
static volatile uint8_t x32 = 7U;
volatile int64_t x36 = INT64_MIN;
static int32_t x48 = INT32_MIN;
volatile uint16_t x52 = 24U;
static int32_t t9 = 7640;
uint8_t x59 = UINT8_MAX;
int16_t x65 = INT16_MIN;
int8_t x66 = -1;
volatile int32_t t11 = -7245080;
uint64_t x73 = UINT64_MAX;
static int16_t x74 = INT16_MAX;
int32_t t13 = -42091;
int8_t x80 = 17;
static uint32_t x86 = UINT32_MAX;
int8_t x90 = 23;
int16_t x91 = 380;
volatile int8_t x94 = 6;
uint32_t x101 = 286U;
static uint16_t x104 = 86U;
volatile int8_t x113 = -62;
int64_t x115 = 4843472LL;
volatile uint64_t x118 = UINT64_MAX;
int8_t x122 = 19;
static volatile uint16_t x128 = UINT16_MAX;
volatile int64_t x130 = INT64_MAX;
volatile int64_t x133 = -15LL;
int32_t t30 = -3224015;
volatile uint16_t x154 = UINT16_MAX;
volatile int32_t t34 = -27072;
int64_t x166 = INT64_MIN;
volatile int8_t x168 = INT8_MIN;
uint32_t x178 = UINT32_MAX;
volatile int32_t t38 = -1;
int32_t x182 = INT32_MIN;
volatile uint16_t x183 = 994U;
int32_t t44 = 465687364;
volatile uint8_t x214 = 25U;
volatile uint16_t x215 = UINT16_MAX;
uint16_t x216 = 3545U;
uint16_t x220 = 541U;
static uint64_t x222 = 123837369LLU;
volatile int32_t t47 = -248393;
static uint64_t x233 = 2LLU;
volatile int64_t x245 = 11104457LL;
int32_t t52 = -38;
static int32_t x255 = 56;
volatile int32_t t54 = 23980042;
volatile uint16_t x257 = UINT16_MAX;
int16_t x259 = INT16_MIN;
volatile int32_t x264 = -968181311;
uint16_t x271 = 3704U;
int16_t x277 = INT16_MAX;
uint8_t x290 = 40U;
volatile int32_t t61 = 1826;
int32_t t63 = -24033;
uint64_t x318 = 2047183707158LLU;
int32_t x322 = -985;
volatile int16_t x323 = INT16_MIN;
int32_t x326 = -1;
uint8_t x331 = UINT8_MAX;
static int64_t x344 = INT64_MIN;
static int32_t x351 = 312802;
int8_t x352 = INT8_MAX;
static int32_t t72 = 980013;
static int32_t x356 = INT32_MAX;
int8_t x357 = 53;
int16_t x360 = INT16_MAX;
int32_t x367 = INT32_MAX;
volatile int32_t t75 = -22;
int8_t x369 = INT8_MIN;
int16_t x376 = INT16_MIN;
int64_t x381 = -1084LL;
static int32_t t78 = -167930;
uint8_t x388 = UINT8_MAX;
volatile int32_t x390 = -1;
volatile int32_t t80 = -119;
uint16_t x393 = UINT16_MAX;
static int8_t x394 = INT8_MAX;
static volatile int32_t x396 = -1;
uint8_t x404 = UINT8_MAX;
static int32_t t83 = 1024;
int8_t x409 = INT8_MIN;
static int32_t t85 = 6596;
int32_t x420 = INT32_MIN;
int64_t x421 = -1LL;
int32_t x424 = -105610;
int64_t x431 = 29699052468819LL;
volatile int32_t t88 = -3731;
int64_t x437 = -1LL;
uint16_t x444 = 5389U;
int16_t x451 = INT16_MAX;
volatile int32_t t92 = 278613;
int64_t x455 = INT64_MAX;
volatile int16_t x456 = 2718;
volatile int8_t x457 = -1;
int64_t x462 = INT64_MAX;
static int32_t x466 = -3401515;
volatile int16_t x479 = -4;


void f0(void) {
	int64_t x5 = -1LL;
	int32_t x6 = -1;
	int8_t x7 = INT8_MIN;
	uint64_t x8 = 4LLU;
	volatile int32_t t0 = -266;

	t0 = (x5<=(x6%(x7-x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 14645LLU;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	int64_t x12 = 78971955LL;
	volatile int32_t t1 = -241;

	t1 = (x9<=(x10%(x11-x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 9;
	volatile uint32_t x14 = 166U;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;

	t2 = (x13<=(x14%(x15-x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static uint64_t x20 = 35245702919948LLU;
	int32_t t3 = -46;

	t3 = (x17<=(x18%(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = UINT32_MAX;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 10152504U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -1935070;

	t4 = (x21<=(x22%(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x27 = -22;
	uint32_t x28 = 229400U;

	t5 = (x25<=(x26%(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 42337U;
	int16_t x31 = INT16_MIN;
	static volatile int32_t t6 = 60210;

	t6 = (x29<=(x30%(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MAX;
	int64_t x35 = -134264LL;
	int32_t t7 = 110;

	t7 = (x33<=(x34%(x35-x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = -1795;
	volatile int8_t x47 = -2;
	volatile int32_t t8 = -15;

	t8 = (x45<=(x46%(x47-x48)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 3U;
	static int16_t x51 = -980;

	t9 = (x49<=(x50%(x51-x52)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int16_t x60 = 1;
	volatile int32_t t10 = -2348237;

	t10 = (x57<=(x58%(x59-x60)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x67 = -62;
	uint64_t x68 = 71258706531982LLU;

	t11 = (x65<=(x66%(x67-x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = 56;
	int16_t x71 = 0;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t12 = 66;

	t12 = (x69<=(x70%(x71-x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x75 = 9U;
	uint64_t x76 = 467926270409966LLU;

	t13 = (x73<=(x74%(x75-x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	volatile int32_t t14 = 282;

	t14 = (x77<=(x78%(x79-x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x81 = 3964;
	static uint64_t x82 = 46LLU;
	int16_t x83 = INT16_MAX;
	static uint8_t x84 = 0U;
	volatile int32_t t15 = 103327634;

	t15 = (x81<=(x82%(x83-x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -1;
	volatile uint8_t x87 = 13U;
	volatile uint32_t x88 = 1443827U;
	static volatile int32_t t16 = -1;

	t16 = (x85<=(x86%(x87-x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 18U;
	int64_t x92 = 72386LL;
	volatile int32_t t17 = 5431;

	t17 = (x89<=(x90%(x91-x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x93 = 4868744655565180548LLU;
	static int8_t x95 = INT8_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t18 = 1554263;

	t18 = (x93<=(x94%(x95-x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = INT32_MIN;
	uint64_t x98 = 3394023052012LLU;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -3LL;
	int32_t t19 = -3873;

	t19 = (x97<=(x98%(x99-x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x102 = 647140519178229LL;
	int16_t x103 = INT16_MAX;
	static volatile int32_t t20 = -77926852;

	t20 = (x101<=(x102%(x103-x104)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MAX;
	static volatile uint16_t x106 = 3329U;
	int16_t x107 = -1;
	uint16_t x108 = 26U;
	volatile int32_t t21 = 3;

	t21 = (x105<=(x106%(x107-x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MAX;
	volatile int32_t x111 = INT32_MAX;
	uint16_t x112 = UINT16_MAX;
	int32_t t22 = -1249434;

	t22 = (x109<=(x110%(x111-x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x114 = 80U;
	int16_t x116 = -1;
	int32_t t23 = -1;

	t23 = (x113<=(x114%(x115-x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 5348U;
	int32_t t24 = -42007;

	t24 = (x117<=(x118%(x119-x120)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = INT64_MAX;
	int32_t x123 = 183;
	static volatile uint8_t x124 = 11U;
	int32_t t25 = -51;

	t25 = (x121<=(x122%(x123-x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = 1;
	int16_t x126 = INT16_MAX;
	static uint8_t x127 = 1U;
	int32_t t26 = -54111;

	t26 = (x125<=(x126%(x127-x128)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	int64_t x132 = 3158981060LL;
	volatile int32_t t27 = 1866;

	t27 = (x129<=(x130%(x131-x132)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	static uint16_t x136 = UINT16_MAX;
	int32_t t28 = 2778194;

	t28 = (x133<=(x134%(x135-x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 1522128U;
	int16_t x138 = -1;
	volatile int8_t x139 = 0;
	static uint32_t x140 = 846U;
	volatile int32_t t29 = 192525317;

	t29 = (x137<=(x138%(x139-x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	static int32_t x143 = -1;
	int8_t x144 = INT8_MIN;

	t30 = (x141<=(x142%(x143-x144)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 1705LL;
	int64_t x146 = INT64_MIN;
	int16_t x147 = 5233;
	int64_t x148 = -31417LL;
	int32_t t31 = 79468;

	t31 = (x145<=(x146%(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x149 = INT32_MAX;
	volatile int16_t x150 = -2;
	int8_t x151 = INT8_MAX;
	int8_t x152 = 6;
	volatile int32_t t32 = 16758359;

	t32 = (x149<=(x150%(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x155 = 31U;
	static uint32_t x156 = 638U;
	int32_t t33 = -110;

	t33 = (x153<=(x154%(x155-x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x157 = INT8_MIN;
	int64_t x158 = 1LL;
	volatile uint64_t x159 = UINT64_MAX;
	uint8_t x160 = 30U;

	t34 = (x157<=(x158%(x159-x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 0U;
	uint64_t x167 = 72LLU;
	int32_t t35 = -4086481;

	t35 = (x165<=(x166%(x167-x168)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 31338817LLU;
	int8_t x170 = -1;
	volatile uint64_t x171 = 2LLU;
	uint32_t x172 = 227388277U;
	int32_t t36 = 85;

	t36 = (x169<=(x170%(x171-x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x173 = -58;
	uint64_t x174 = 9LLU;
	static int16_t x175 = -1;
	int16_t x176 = -3430;
	volatile int32_t t37 = -260198;

	t37 = (x173<=(x174%(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 7423119052044LLU;
	int8_t x179 = 18;
	int16_t x180 = -837;

	t38 = (x177<=(x178%(x179-x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = INT16_MIN;
	uint64_t x184 = 496196792786412LLU;
	static volatile int32_t t39 = 33;

	t39 = (x181<=(x182%(x183-x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	static int16_t x186 = INT16_MAX;
	uint8_t x187 = 82U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t40 = 61407;

	t40 = (x185<=(x186%(x187-x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x189 = UINT32_MAX;
	static int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 1U;
	volatile int32_t t41 = -5;

	t41 = (x189<=(x190%(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 66949322303LLU;
	uint32_t x196 = UINT32_MAX;
	int32_t t42 = -67;

	t42 = (x193<=(x194%(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = 24370LL;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = 575LL;
	volatile int32_t t43 = 0;

	t43 = (x201<=(x202%(x203-x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = 232U;
	static int16_t x206 = INT16_MAX;
	uint16_t x207 = 34U;
	int8_t x208 = INT8_MAX;

	t44 = (x205<=(x206%(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x213 = -1560288;
	static volatile int32_t t45 = 3787040;

	t45 = (x213<=(x214%(x215-x216)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = 1U;
	static int32_t x219 = -627183;
	volatile int32_t t46 = -642844;

	t46 = (x217<=(x218%(x219-x220)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x221 = INT16_MAX;
	static volatile uint8_t x223 = 50U;
	static volatile uint8_t x224 = 7U;

	t47 = (x221<=(x222%(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = -1;
	static int32_t x230 = INT32_MIN;
	static int64_t x231 = 2LL;
	int64_t x232 = 42691340552485LL;
	int32_t t48 = -83700;

	t48 = (x229<=(x230%(x231-x232)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x234 = UINT64_MAX;
	static volatile int8_t x235 = 1;
	int8_t x236 = -1;
	volatile int32_t t49 = 82614;

	t49 = (x233<=(x234%(x235-x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = -141;
	static volatile int32_t x238 = INT32_MIN;
	static int16_t x239 = 103;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t50 = 16469389;

	t50 = (x237<=(x238%(x239-x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = 6U;
	uint16_t x242 = 1938U;
	static int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	volatile int32_t t51 = -2600865;

	t51 = (x241<=(x242%(x243-x244)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = INT64_MAX;
	int8_t x247 = INT8_MAX;
	int16_t x248 = INT16_MAX;

	t52 = (x245<=(x246%(x247-x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = 3448LL;
	int64_t x250 = -1LL;
	uint32_t x251 = 3142178U;
	uint32_t x252 = 335U;
	volatile int32_t t53 = 159863;

	t53 = (x249<=(x250%(x251-x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MAX;
	static int16_t x256 = INT16_MIN;

	t54 = (x253<=(x254%(x255-x256)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x258 = INT8_MIN;
	static volatile int8_t x260 = INT8_MIN;
	volatile int32_t t55 = 242216005;

	t55 = (x257<=(x258%(x259-x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = 11LL;
	int8_t x262 = -23;
	int8_t x263 = INT8_MIN;
	volatile int32_t t56 = -4;

	t56 = (x261<=(x262%(x263-x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = -2464;
	int16_t x270 = INT16_MIN;
	int8_t x272 = INT8_MAX;
	volatile int32_t t57 = 1;

	t57 = (x269<=(x270%(x271-x272)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	uint8_t x276 = 71U;
	volatile int32_t t58 = -6998;

	t58 = (x273<=(x274%(x275-x276)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x278 = 11140278U;
	int32_t x279 = INT32_MIN;
	volatile int64_t x280 = -291936625233274585LL;
	int32_t t59 = 0;

	t59 = (x277<=(x278%(x279-x280)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x291 = 25U;
	uint16_t x292 = 1U;
	volatile int32_t t60 = -37;

	t60 = (x289<=(x290%(x291-x292)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x293 = 677787401;
	int64_t x294 = -1LL;
	static int16_t x295 = 3856;
	uint8_t x296 = 1U;

	t61 = (x293<=(x294%(x295-x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static volatile int16_t x298 = -643;
	int16_t x299 = -115;
	volatile int64_t x300 = -190906LL;
	volatile int32_t t62 = -19;

	t62 = (x297<=(x298%(x299-x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = -1;
	int16_t x302 = -5418;
	volatile int64_t x303 = INT64_MIN;
	volatile int32_t x304 = -1;

	t63 = (x301<=(x302%(x303-x304)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = -1;
	int16_t x307 = -1;
	volatile int16_t x308 = INT16_MAX;
	int32_t t64 = -337304;

	t64 = (x305<=(x306%(x307-x308)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x313 = -1LL;
	static uint64_t x314 = 20350261224348800LLU;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;
	int32_t t65 = -142;

	t65 = (x313<=(x314%(x315-x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = -1;
	volatile uint32_t x319 = UINT32_MAX;
	volatile uint16_t x320 = 49U;
	int32_t t66 = 54694;

	t66 = (x317<=(x318%(x319-x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = INT32_MIN;
	int16_t x324 = -1;
	int32_t t67 = 956484139;

	t67 = (x321<=(x322%(x323-x324)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MAX;
	volatile int64_t x327 = -1LL;
	int32_t x328 = 1;
	volatile int32_t t68 = 832985574;

	t68 = (x325<=(x326%(x327-x328)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MIN;
	volatile int16_t x330 = INT16_MIN;
	int32_t x332 = 5;
	volatile int32_t t69 = 4;

	t69 = (x329<=(x330%(x331-x332)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x337 = 0U;
	volatile int16_t x338 = INT16_MAX;
	volatile int16_t x339 = INT16_MIN;
	static int64_t x340 = -1LL;
	int32_t t70 = 151566060;

	t70 = (x337<=(x338%(x339-x340)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	volatile int32_t t71 = 63611;

	t71 = (x341<=(x342%(x343-x344)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x349 = 27U;
	uint8_t x350 = 14U;

	t72 = (x349<=(x350%(x351-x352)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x353 = 2U;
	volatile uint16_t x354 = UINT16_MAX;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t t73 = -6287605;

	t73 = (x353<=(x354%(x355-x356)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x358 = 2919563136435069LLU;
	int32_t x359 = -1;
	int32_t t74 = 3877800;

	t74 = (x357<=(x358%(x359-x360)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = -1;
	static uint64_t x366 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;

	t75 = (x365<=(x366%(x367-x368)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x370 = INT64_MAX;
	static volatile int32_t x371 = INT32_MIN;
	int16_t x372 = -231;
	volatile int32_t t76 = 29177280;

	t76 = (x369<=(x370%(x371-x372)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x373 = 5U;
	uint64_t x374 = UINT64_MAX;
	static volatile int8_t x375 = 53;
	volatile int32_t t77 = -27;

	t77 = (x373<=(x374%(x375-x376)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x382 = -1LL;
	uint8_t x383 = 59U;
	uint16_t x384 = 644U;

	t78 = (x381<=(x382%(x383-x384)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 13U;
	static uint64_t x387 = UINT64_MAX;
	static volatile int32_t t79 = 14807;

	t79 = (x385<=(x386%(x387-x388)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x389 = 16929U;
	volatile int16_t x391 = INT16_MIN;
	static int8_t x392 = 17;

	t80 = (x389<=(x390%(x391-x392)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x395 = -30991LL;
	int32_t t81 = -916;

	t81 = (x393<=(x394%(x395-x396)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = 161;
	static int32_t x403 = -1;
	int32_t t82 = -4727698;

	t82 = (x401<=(x402%(x403-x404)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x405 = INT8_MAX;
	int64_t x406 = -231182660931LL;
	int64_t x407 = INT64_MAX;
	uint16_t x408 = UINT16_MAX;

	t83 = (x405<=(x406%(x407-x408)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x410 = 7496U;
	uint32_t x411 = 3U;
	volatile uint8_t x412 = 47U;
	static int32_t t84 = -28724795;

	t84 = (x409<=(x410%(x411-x412)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = 10LL;
	int8_t x414 = INT8_MAX;
	int8_t x415 = 1;
	int8_t x416 = INT8_MAX;

	t85 = (x413<=(x414%(x415-x416)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = 5760257LL;
	uint8_t x418 = 13U;
	uint64_t x419 = 63969001LLU;
	int32_t t86 = -75;

	t86 = (x417<=(x418%(x419-x420)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x422 = 157U;
	uint32_t x423 = UINT32_MAX;
	volatile int32_t t87 = -513099022;

	t87 = (x421<=(x422%(x423-x424)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = -1;
	static int16_t x430 = -1;
	uint64_t x432 = 226LLU;

	t88 = (x429<=(x430%(x431-x432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x438 = INT32_MAX;
	volatile int16_t x439 = -2;
	int32_t x440 = INT32_MIN;
	int32_t t89 = 632056127;

	t89 = (x437<=(x438%(x439-x440)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x441 = 56192LL;
	int32_t x442 = -787;
	volatile int16_t x443 = -1;
	int32_t t90 = 2;

	t90 = (x441<=(x442%(x443-x444)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x445 = UINT64_MAX;
	uint16_t x446 = 1U;
	int16_t x447 = -1;
	uint16_t x448 = 102U;
	int32_t t91 = -390392444;

	t91 = (x445<=(x446%(x447-x448)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x449 = -1;
	int16_t x450 = -114;
	int64_t x452 = INT64_MAX;

	t92 = (x449<=(x450%(x451-x452)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x453 = INT64_MIN;
	uint16_t x454 = UINT16_MAX;
	int32_t t93 = 715070;

	t93 = (x453<=(x454%(x455-x456)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x458 = 5558217LL;
	int16_t x459 = -16;
	int16_t x460 = INT16_MIN;
	volatile int32_t t94 = -1;

	t94 = (x457<=(x458%(x459-x460)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = INT64_MAX;
	int32_t x463 = -855749;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t95 = -201;

	t95 = (x461<=(x462%(x463-x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x465 = UINT8_MAX;
	int32_t x467 = -12478;
	int32_t x468 = -1291;
	int32_t t96 = 45;

	t96 = (x465<=(x466%(x467-x468)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x469 = -3986;
	static int16_t x470 = -14628;
	int16_t x471 = -1;
	static uint64_t x472 = 124638119258966940LLU;
	volatile int32_t t97 = -35398950;

	t97 = (x469<=(x470%(x471-x472)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = 151;
	int8_t x475 = -30;
	uint8_t x476 = 9U;
	static int32_t t98 = -3090;

	t98 = (x473<=(x474%(x475-x476)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	int32_t x478 = -1;
	static volatile uint16_t x480 = 7026U;
	static volatile int32_t t99 = 211732344;

	t99 = (x477<=(x478%(x479-x480)));

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
