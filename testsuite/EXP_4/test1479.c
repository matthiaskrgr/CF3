#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = UINT8_MAX;
int32_t x10 = -1;
int64_t x26 = -1LL;
int16_t x31 = -58;
int16_t x33 = INT16_MAX;
int64_t x37 = -1LL;
volatile int16_t x38 = -1;
int16_t x44 = INT16_MIN;
int64_t x46 = INT64_MIN;
static int32_t t13 = -51963;
uint32_t x57 = 3U;
uint64_t x59 = 866697806142LLU;
volatile int32_t t14 = 3199;
uint64_t x70 = 27368220787554LLU;
uint8_t x79 = 7U;
volatile int32_t t19 = -359055390;
uint64_t x81 = 2LLU;
int16_t x84 = -49;
int32_t t20 = 116336038;
static int64_t x85 = INT64_MAX;
int8_t x87 = INT8_MAX;
uint8_t x89 = 5U;
volatile int32_t t22 = -56;
int64_t x96 = -1LL;
int32_t t23 = 92000010;
int64_t x101 = -1LL;
int16_t x104 = -1;
int8_t x113 = INT8_MAX;
int32_t x118 = 3;
static int64_t x121 = INT64_MIN;
int32_t x124 = INT32_MAX;
int32_t x128 = -54011670;
static uint16_t x129 = 3U;
static int16_t x135 = INT16_MIN;
uint16_t x145 = 1U;
int64_t x148 = INT64_MAX;
volatile int32_t t36 = 657516133;
uint32_t x155 = 173121U;
volatile int32_t t40 = -25;
int16_t x165 = INT16_MIN;
int32_t x170 = INT32_MIN;
static int32_t t42 = -3398;
int64_t x173 = -429LL;
int8_t x184 = -1;
int32_t t45 = -158346;
int64_t x189 = -12429363LL;
volatile uint8_t x192 = UINT8_MAX;
static volatile int32_t t49 = 3;
int8_t x203 = -1;
int8_t x206 = -17;
volatile int16_t x208 = INT16_MIN;
static int32_t x211 = INT32_MAX;
int64_t x214 = INT64_MAX;
int8_t x215 = INT8_MAX;
volatile uint8_t x218 = 20U;
uint64_t x219 = UINT64_MAX;
static int32_t x220 = -1;
int32_t x223 = 6333014;
static int32_t t56 = 8837;
int16_t x233 = INT16_MIN;
static volatile uint64_t x238 = UINT64_MAX;
int16_t x240 = 71;
int8_t x241 = INT8_MIN;
volatile int32_t x243 = 2;
uint8_t x246 = 111U;
int8_t x247 = 1;
int32_t x249 = -1;
volatile int16_t x251 = INT16_MIN;
int8_t x254 = INT8_MIN;
int64_t x258 = 64033777966767232LL;
static int16_t x261 = INT16_MIN;
int8_t x271 = 6;
volatile int32_t x273 = INT32_MIN;
volatile int32_t t68 = -30008;
int16_t x281 = 1798;
volatile uint8_t x282 = 1U;
int16_t x294 = INT16_MAX;
uint32_t x304 = UINT32_MAX;
volatile int32_t t76 = 266134;
volatile int64_t x311 = 296117564586969150LL;
int32_t t79 = 105160;
int32_t t81 = 885415298;
uint32_t x332 = UINT32_MAX;
static int64_t x334 = INT64_MAX;
uint8_t x338 = 113U;
int32_t t84 = 681586;
int32_t t85 = -652;
int64_t x345 = INT64_MIN;
volatile uint64_t x346 = 3993395481154301709LLU;
uint64_t x347 = 1777LLU;
int16_t x349 = INT16_MIN;
int16_t x353 = 0;
int8_t x354 = INT8_MAX;
volatile uint32_t x356 = 1450233U;
uint8_t x358 = 45U;
int64_t x369 = -1LL;
int16_t x373 = INT16_MIN;
volatile uint32_t x375 = UINT32_MAX;
int32_t t94 = 0;
uint8_t x386 = 22U;
volatile int32_t t97 = -99649;
int8_t x395 = INT8_MIN;
static int32_t t99 = -19633;


void f0(void) {
	uint64_t x1 = 3550078LLU;
	int64_t x2 = 65970097043LL;
	uint16_t x3 = 759U;
	uint32_t x4 = 0U;
	static int32_t t0 = 30430666;

	t0 = (x1<=(x2<=(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -5LL;
	uint32_t x6 = 87U;
	uint32_t x7 = 1019617U;
	int32_t t1 = -330009;

	t1 = (x5<=(x6<=(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -3570299358LL;
	int8_t x11 = -1;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 62;

	t2 = (x9<=(x10<=(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -15404029;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	uint64_t x16 = 730646707561773096LLU;
	static volatile int32_t t3 = 813830231;

	t3 = (x13<=(x14<=(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -55;
	static int32_t x18 = 38049;
	int32_t x19 = INT32_MIN;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -9683;

	t4 = (x17<=(x18<=(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static int32_t x22 = -1281;
	volatile int16_t x23 = 2;
	int8_t x24 = -5;
	volatile int32_t t5 = 347453113;

	t5 = (x21<=(x22<=(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int64_t x27 = -1333031LL;
	int16_t x28 = 23;
	int32_t t6 = -8;

	t6 = (x25<=(x26<=(x27<x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	static uint32_t x32 = UINT32_MAX;
	int32_t t7 = -243024098;

	t7 = (x29<=(x30<=(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int8_t x35 = -1;
	volatile int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = 1;

	t8 = (x33<=(x34<=(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	uint16_t x40 = 177U;
	static volatile int32_t t9 = -7;

	t9 = (x37<=(x38<=(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = UINT16_MAX;
	static uint16_t x43 = 11303U;
	volatile int32_t t10 = 469981017;

	t10 = (x41<=(x42<=(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -41343111;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -86926;

	t11 = (x45<=(x46<=(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile uint32_t x50 = 469U;
	int32_t x51 = -791501;
	int64_t x52 = INT64_MAX;
	static volatile int32_t t12 = -38138742;

	t12 = (x49<=(x50<=(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int32_t x54 = INT32_MAX;
	uint32_t x55 = 114U;
	int64_t x56 = -7249611459LL;

	t13 = (x53<=(x54<=(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	volatile uint16_t x60 = 44U;

	t14 = (x57<=(x58<=(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 13463029178348563LL;
	int32_t x62 = -131;
	uint16_t x63 = 3U;
	static uint16_t x64 = 147U;
	static int32_t t15 = 103291;

	t15 = (x61<=(x62<=(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 6U;
	static uint8_t x66 = 3U;
	int64_t x67 = INT64_MAX;
	int16_t x68 = -1;
	volatile int32_t t16 = -4428;

	t16 = (x65<=(x66<=(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile int8_t x71 = INT8_MIN;
	uint32_t x72 = 9U;
	int32_t t17 = -1444462;

	t17 = (x69<=(x70<=(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 7;

	t18 = (x73<=(x74<=(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 123LLU;
	int64_t x78 = -21084835925LL;
	int64_t x80 = 5908LL;

	t19 = (x77<=(x78<=(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;

	t20 = (x81<=(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 210;

	t21 = (x85<=(x86<=(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 34236757U;
	int64_t x91 = -20729309530972LL;
	int8_t x92 = INT8_MIN;

	t22 = (x89<=(x90<=(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = 1;
	static int32_t x95 = INT32_MIN;

	t23 = (x93<=(x94<=(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = 33U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -3228217;

	t24 = (x97<=(x98<=(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MIN;
	static int64_t x103 = 209LL;
	volatile int32_t t25 = 220;

	t25 = (x101<=(x102<=(x103<x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	uint16_t x107 = 134U;
	int64_t x108 = -1LL;
	int32_t t26 = 84542829;

	t26 = (x105<=(x106<=(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 27LLU;
	static int64_t x110 = 16060701785233LL;
	static uint64_t x111 = 118929574LLU;
	uint16_t x112 = 1763U;
	int32_t t27 = 1712;

	t27 = (x109<=(x110<=(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x114 = -38446339870142LL;
	static uint8_t x115 = 5U;
	uint32_t x116 = 116232U;
	int32_t t28 = -796;

	t28 = (x113<=(x114<=(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 659698050U;
	int16_t x119 = -1;
	static int8_t x120 = 33;
	volatile int32_t t29 = -216553;

	t29 = (x117<=(x118<=(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MIN;
	volatile int32_t t30 = -57786935;

	t30 = (x121<=(x122<=(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	int16_t x126 = 1006;
	int32_t x127 = -50918;
	int32_t t31 = 1200711;

	t31 = (x125<=(x126<=(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 796469063190766156LL;
	static int64_t x131 = INT64_MAX;
	int32_t x132 = 35682;
	volatile int32_t t32 = -241707;

	t32 = (x129<=(x130<=(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 178384U;
	uint64_t x136 = 597029160477791443LLU;
	int32_t t33 = -3158950;

	t33 = (x133<=(x134<=(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static int64_t x138 = -1LL;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 1;

	t34 = (x137<=(x138<=(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 9425;

	t35 = (x141<=(x142<=(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	volatile int32_t x147 = INT32_MAX;

	t36 = (x145<=(x146<=(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -177;
	volatile int64_t x150 = -132854864191634LL;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 435;

	t37 = (x149<=(x150<=(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -235LL;
	volatile int16_t x154 = -1;
	uint64_t x156 = 2LLU;
	static volatile int32_t t38 = 11;

	t38 = (x153<=(x154<=(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static int32_t x158 = 0;
	volatile uint64_t x159 = 6LLU;
	int32_t x160 = -7329;
	int32_t t39 = -83651132;

	t39 = (x157<=(x158<=(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	static int32_t x164 = -1;

	t40 = (x161<=(x162<=(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = 6;
	uint8_t x167 = 0U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -1487457;

	t41 = (x165<=(x166<=(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;

	t42 = (x169<=(x170<=(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -155;
	int32_t x175 = INT32_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -3132290;

	t43 = (x173<=(x174<=(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 18;
	int16_t x178 = 15;
	int16_t x179 = INT16_MIN;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 756;

	t44 = (x177<=(x178<=(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	volatile int32_t x182 = INT32_MIN;
	volatile int32_t x183 = -3174463;

	t45 = (x181<=(x182<=(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	static int16_t x186 = -1;
	static uint8_t x187 = 5U;
	int64_t x188 = -7647998786150346LL;
	int32_t t46 = -6593;

	t46 = (x185<=(x186<=(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -838323;
	static uint8_t x191 = UINT8_MAX;
	volatile int32_t t47 = 0;

	t47 = (x189<=(x190<=(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 2171U;
	int8_t x194 = INT8_MIN;
	int8_t x195 = 41;
	static volatile int16_t x196 = -21;
	static volatile int32_t t48 = -7;

	t48 = (x193<=(x194<=(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 105902154514LLU;
	static uint32_t x198 = UINT32_MAX;
	volatile int8_t x199 = -1;
	volatile int16_t x200 = INT16_MIN;

	t49 = (x197<=(x198<=(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = -1LL;
	int64_t x204 = -1LL;
	static int32_t t50 = 228290396;

	t50 = (x201<=(x202<=(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int64_t x207 = INT64_MAX;
	static volatile int32_t t51 = 1463;

	t51 = (x205<=(x206<=(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -1LL;
	int16_t x210 = -3;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 5;

	t52 = (x209<=(x210<=(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 23272103U;
	int16_t x216 = -1;
	volatile int32_t t53 = -647;

	t53 = (x213<=(x214<=(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t t54 = -20907;

	t54 = (x217<=(x218<=(x219<x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 57000;

	t55 = (x221<=(x222<=(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	volatile int16_t x227 = 13527;
	uint8_t x228 = UINT8_MAX;

	t56 = (x225<=(x226<=(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 3801U;
	int64_t x230 = -7LL;
	uint8_t x231 = 1U;
	uint16_t x232 = UINT16_MAX;
	int32_t t57 = 0;

	t57 = (x229<=(x230<=(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = -31;
	static volatile int32_t t58 = -1;

	t58 = (x233<=(x234<=(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 25;
	int32_t x239 = INT32_MIN;
	int32_t t59 = 956631548;

	t59 = (x237<=(x238<=(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int16_t x244 = 23;
	int32_t t60 = -18305710;

	t60 = (x241<=(x242<=(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int32_t x248 = 36294;
	volatile int32_t t61 = 405851355;

	t61 = (x245<=(x246<=(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -259171;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -228248381;

	t62 = (x249<=(x250<=(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static int8_t x255 = INT8_MIN;
	uint64_t x256 = 5076448832LLU;
	int32_t t63 = 1356059;

	t63 = (x253<=(x254<=(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x257 = INT32_MIN;
	int32_t x259 = INT32_MAX;
	uint64_t x260 = 11LLU;
	int32_t t64 = -2;

	t64 = (x257<=(x258<=(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	uint32_t x263 = 40U;
	uint8_t x264 = 13U;
	volatile int32_t t65 = -2196742;

	t65 = (x261<=(x262<=(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -3;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	static volatile uint32_t x268 = 427457U;
	int32_t t66 = -275943;

	t66 = (x265<=(x266<=(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -373;
	int16_t x270 = -1;
	int8_t x272 = 0;
	static int32_t t67 = 19;

	t67 = (x269<=(x270<=(x271<x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 92U;
	static uint32_t x276 = 1841U;

	t68 = (x273<=(x274<=(x275<x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 50585678;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int16_t x280 = 169;
	volatile int32_t t69 = -12575;

	t69 = (x277<=(x278<=(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x283 = INT32_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -153;

	t70 = (x281<=(x282<=(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -6913;
	volatile uint64_t x286 = 14LLU;
	volatile int16_t x287 = -3464;
	static int64_t x288 = INT64_MIN;
	static int32_t t71 = -22;

	t71 = (x285<=(x286<=(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = -53;
	static int16_t x291 = 1;
	uint32_t x292 = 0U;
	volatile int32_t t72 = 5092676;

	t72 = (x289<=(x290<=(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x293 = -1LL;
	int8_t x295 = INT8_MAX;
	volatile int8_t x296 = 0;
	volatile int32_t t73 = -156587;

	t73 = (x293<=(x294<=(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int64_t x298 = INT64_MIN;
	int32_t x299 = -427369;
	uint16_t x300 = 16U;
	int32_t t74 = 2379;

	t74 = (x297<=(x298<=(x299<x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static uint32_t x302 = 7736831U;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = -1660130;

	t75 = (x301<=(x302<=(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	static uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 7U;
	uint16_t x308 = 715U;

	t76 = (x305<=(x306<=(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	volatile uint16_t x310 = 0U;
	int64_t x312 = INT64_MAX;
	int32_t t77 = 2;

	t77 = (x309<=(x310<=(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = 1;
	volatile int64_t x315 = -1LL;
	int16_t x316 = 14;
	static volatile int32_t t78 = -14300545;

	t78 = (x313<=(x314<=(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 65U;
	static volatile uint8_t x318 = 5U;
	uint16_t x319 = 42U;
	uint32_t x320 = 11U;

	t79 = (x317<=(x318<=(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MAX;
	int64_t x323 = 492445935935158LL;
	static volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = 20313228;

	t80 = (x321<=(x322<=(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint8_t x326 = UINT8_MAX;
	volatile int16_t x327 = -1931;
	int32_t x328 = 397;

	t81 = (x325<=(x326<=(x327<x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -15LL;
	volatile int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	int32_t t82 = 42;

	t82 = (x329<=(x330<=(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x333 = 35909276LL;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = 29463U;
	volatile int32_t t83 = -107021;

	t83 = (x333<=(x334<=(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -455933LL;
	int16_t x339 = INT16_MIN;
	volatile int32_t x340 = 23604882;

	t84 = (x337<=(x338<=(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static uint32_t x342 = 7115520U;
	uint8_t x343 = 2U;
	int16_t x344 = -1;

	t85 = (x341<=(x342<=(x343<x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x348 = -1;
	int32_t t86 = 0;

	t86 = (x345<=(x346<=(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -386155336;
	int32_t x351 = INT32_MAX;
	volatile int8_t x352 = INT8_MIN;
	int32_t t87 = 0;

	t87 = (x349<=(x350<=(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x355 = -1594326906265187LL;
	int32_t t88 = 34;

	t88 = (x353<=(x354<=(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x359 = 11U;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 178119751;

	t89 = (x357<=(x358<=(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -1LL;
	uint8_t x363 = 44U;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = -32;

	t90 = (x361<=(x362<=(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = 150202;
	int32_t x366 = INT32_MAX;
	uint8_t x367 = 69U;
	volatile int32_t x368 = -1;
	int32_t t91 = -44414164;

	t91 = (x365<=(x366<=(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = 132;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = INT32_MAX;
	int32_t t92 = 169982;

	t92 = (x369<=(x370<=(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 14U;
	int64_t x376 = -1LL;
	volatile int32_t t93 = -10;

	t93 = (x373<=(x374<=(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 13098U;
	static int32_t x378 = -468975576;
	volatile uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MAX;

	t94 = (x377<=(x378<=(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -14;
	uint64_t x384 = 8331168860094004734LLU;
	static int32_t t95 = 7658;

	t95 = (x381<=(x382<=(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x385 = 54620U;
	volatile int32_t x387 = 42885639;
	uint64_t x388 = 143402LLU;
	volatile int32_t t96 = 8740426;

	t96 = (x385<=(x386<=(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	volatile int8_t x391 = -2;
	volatile int32_t x392 = -1;

	t97 = (x389<=(x390<=(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 700U;
	volatile int8_t x394 = 0;
	static uint16_t x396 = 23231U;
	int32_t t98 = -32877781;

	t98 = (x393<=(x394<=(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int8_t x398 = -1;
	int16_t x399 = -1;
	static int16_t x400 = -9;

	t99 = (x397<=(x398<=(x399<x400)));

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
