#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 2266;
static uint16_t x13 = UINT16_MAX;
uint32_t x17 = 3U;
int16_t x29 = INT16_MIN;
int8_t x34 = -1;
int32_t x36 = -112;
uint16_t x47 = UINT16_MAX;
int8_t x48 = INT8_MAX;
static volatile int32_t t11 = -318;
static uint64_t t12 = 17705644543626LLU;
uint8_t x58 = UINT8_MAX;
uint64_t x62 = UINT64_MAX;
int32_t t15 = 498403;
static int64_t x67 = INT64_MIN;
volatile uint8_t x68 = 0U;
int32_t x74 = INT32_MIN;
static int64_t x78 = 432078LL;
volatile int64_t x79 = INT64_MAX;
volatile uint16_t x80 = 1608U;
volatile uint32_t x82 = 8647078U;
int8_t x86 = INT8_MIN;
uint64_t x89 = 104LLU;
uint64_t x101 = 25LLU;
int32_t t25 = 2843;
int32_t x108 = INT32_MIN;
volatile int8_t x110 = INT8_MIN;
int16_t x112 = -1;
static uint8_t x113 = 14U;
int32_t t28 = 21141;
int32_t x120 = -99818792;
static volatile uint16_t x124 = 4417U;
int32_t t36 = -8804;
uint8_t x150 = 3U;
static int64_t x156 = INT64_MAX;
static uint32_t x158 = UINT32_MAX;
int16_t x159 = INT16_MIN;
int32_t x166 = -62;
int32_t x170 = INT32_MIN;
int32_t x184 = INT32_MAX;
uint32_t x185 = UINT32_MAX;
static int8_t x186 = -1;
int32_t t46 = 1;
int32_t x192 = -1;
volatile int32_t x195 = -1;
volatile int32_t t48 = INT32_MAX;
volatile int8_t x200 = INT8_MAX;
volatile int16_t x211 = -1;
int32_t t53 = 5;
volatile int32_t t54 = 3348;
volatile uint64_t x222 = UINT64_MAX;
uint32_t x224 = 203226326U;
uint32_t t55 = 10722U;
uint8_t x225 = 0U;
int64_t x241 = INT64_MAX;
volatile int8_t x242 = -1;
int64_t x245 = INT64_MIN;
volatile int8_t x248 = 26;
volatile int32_t x255 = INT32_MIN;
volatile uint8_t x256 = UINT8_MAX;
int8_t x261 = -1;
static int16_t x263 = INT16_MIN;
int8_t x264 = -4;
int64_t x266 = -1LL;
int64_t x272 = INT64_MAX;
int64_t t67 = INT64_MAX;
uint32_t x273 = 41533U;
static int32_t x279 = -346;
static uint32_t x281 = UINT32_MAX;
static volatile uint32_t t70 = 221U;
volatile int32_t t73 = 821212988;
static int64_t x299 = 181916461061LL;
volatile int32_t t76 = INT32_MIN;
volatile int16_t x310 = -6000;
uint16_t x311 = 8U;
volatile int8_t x315 = 6;
volatile int32_t t78 = -252;
volatile int32_t t79 = INT32_MIN;
int16_t x323 = INT16_MIN;
static int32_t x335 = -1;
uint32_t x336 = 486549354U;
int64_t x343 = INT64_MIN;
volatile int32_t t85 = 703;
int64_t x348 = -1LL;
uint32_t x351 = 12U;
static uint64_t x353 = UINT64_MAX;
uint32_t x358 = UINT32_MAX;
int32_t t90 = 470738729;
int32_t x366 = INT32_MAX;
static uint8_t x367 = UINT8_MAX;
uint16_t x374 = 7U;
static int32_t t93 = 1373292;
static int32_t x384 = INT32_MIN;
static uint64_t x387 = 0LLU;
int8_t x388 = INT8_MIN;
int16_t x392 = INT16_MIN;
volatile int16_t x394 = INT16_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	int32_t x3 = 1;
	volatile int16_t x4 = 6;
	volatile int32_t t0 = 950852770;

	t0 = (((x1<x2)<x3)|x4);

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 37696931U;
	int32_t x7 = -7047178;
	int8_t x8 = -1;
	volatile int32_t t1 = 325;

	t1 = (((x5<x6)<x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 90571651U;
	uint32_t x10 = 337614086U;
	int8_t x11 = INT8_MIN;
	volatile int64_t x12 = -1LL;
	int64_t t2 = 1LL;

	t2 = (((x9<x10)<x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	volatile uint8_t x15 = 2U;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 1051349786;

	t3 = (((x13<x14)<x15)|x16);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 5U;
	uint8_t x19 = 41U;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 11;

	t4 = (((x17<x18)<x19)|x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = 576777033LLU;
	static uint64_t t5 = 150240468065760131LLU;

	t5 = (((x21<x22)<x23)|x24);

	if (t5 != 576777033LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -259668;

	t6 = (((x25<x26)<x27)|x28);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -325078650375788LL;
	int8_t x31 = -12;
	int8_t x32 = -5;
	static int32_t t7 = -17;

	t7 = (((x29<x30)<x31)|x32);

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 93U;
	uint16_t x35 = 228U;
	volatile int32_t t8 = -1;

	t8 = (((x33<x34)<x35)|x36);

	if (t8 != -111) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -10;
	int8_t x38 = INT8_MAX;
	uint64_t x39 = 64131507253508778LLU;
	volatile int64_t x40 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = (((x37<x38)<x39)|x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static int32_t x42 = 4160;
	int32_t x43 = -1;
	int64_t x44 = -1LL;
	static volatile int64_t t10 = 3175448219LL;

	t10 = (((x41<x42)<x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint8_t x46 = 98U;

	t11 = (((x45<x46)<x47)|x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	static uint32_t x51 = UINT32_MAX;
	uint64_t x52 = 1972LLU;

	t12 = (((x49<x50)<x51)|x52);

	if (t12 != 1973LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 229602503440108764LL;
	uint32_t x54 = 2U;
	static int64_t x55 = INT64_MAX;
	int8_t x56 = -4;
	volatile int32_t t13 = 2;

	t13 = (((x53<x54)<x55)|x56);

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	int32_t x59 = -177721531;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = -119;

	t14 = (((x57<x58)<x59)|x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1004LLU;
	uint16_t x63 = 54U;
	int8_t x64 = INT8_MAX;

	t15 = (((x61<x62)<x63)|x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	int8_t x66 = -51;
	int32_t t16 = -761693;

	t16 = (((x65<x66)<x67)|x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = -856521;
	volatile uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -147;
	int32_t t17 = -779749;

	t17 = (((x69<x70)<x71)|x72);

	if (t17 != -147) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int64_t x75 = -1LL;
	uint8_t x76 = 48U;
	volatile int32_t t18 = 1695116;

	t18 = (((x73<x74)<x75)|x76);

	if (t18 != 48) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	static volatile int32_t t19 = 9;

	t19 = (((x77<x78)<x79)|x80);

	if (t19 != 1609) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	int32_t x83 = 32;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 52;

	t20 = (((x81<x82)<x83)|x84);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	uint16_t x87 = 126U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -21364LL;

	t21 = (((x85<x86)<x87)|x88);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = 285U;
	volatile int32_t x91 = 22;
	int8_t x92 = 0;
	static int32_t t22 = -627;

	t22 = (((x89<x90)<x91)|x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 606622340072LL;
	uint64_t x94 = 72042489873LLU;
	volatile int64_t x95 = 137426375979LL;
	volatile int16_t x96 = -1;
	int32_t t23 = 102086;

	t23 = (((x93<x94)<x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MAX;
	volatile int32_t x100 = INT32_MIN;
	int32_t t24 = 573133202;

	t24 = (((x97<x98)<x99)|x100);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 45LLU;
	int64_t x103 = -14353LL;
	static int32_t x104 = -1;

	t25 = (((x101<x102)<x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 29013299710187641LL;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t t26 = 91375;

	t26 = (((x105<x106)<x107)|x108);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	volatile int32_t t27 = -3;

	t27 = (((x109<x110)<x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = INT64_MAX;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;

	t28 = (((x113<x114)<x115)|x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	int32_t t29 = -100487;

	t29 = (((x117<x118)<x119)|x120);

	if (t29 != -99818792) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	static volatile int32_t t30 = -2563;

	t30 = (((x121<x122)<x123)|x124);

	if (t30 != 4417) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint32_t x126 = 492130U;
	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = 5410597740LLU;
	uint64_t t31 = 2874025040LLU;

	t31 = (((x125<x126)<x127)|x128);

	if (t31 != 5410597741LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 0U;
	uint8_t x131 = 4U;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = -1;

	t32 = (((x129<x130)<x131)|x132);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 9685318399760LL;
	volatile int8_t x134 = -1;
	static volatile int64_t x135 = INT64_MIN;
	volatile int32_t x136 = INT32_MIN;
	int32_t t33 = INT32_MIN;

	t33 = (((x133<x134)<x135)|x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 161777LLU;
	int16_t x138 = -8949;
	int64_t x139 = -1131903879294LL;
	static volatile int32_t x140 = INT32_MAX;
	int32_t t34 = INT32_MAX;

	t34 = (((x137<x138)<x139)|x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = INT32_MAX;

	t35 = (((x141<x142)<x143)|x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = INT8_MAX;
	int16_t x147 = -1278;
	int8_t x148 = -1;

	t36 = (((x145<x146)<x147)|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	uint32_t x151 = 285794795U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 82;

	t37 = (((x149<x150)<x151)|x152);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = -28116218;
	int64_t t38 = INT64_MAX;

	t38 = (((x153<x154)<x155)|x156);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	volatile int64_t t39 = INT64_MAX;

	t39 = (((x157<x158)<x159)|x160);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 920510946;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (((x161<x162)<x163)|x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	static int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = -112644LL;

	t41 = (((x165<x166)<x167)|x168);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static uint16_t x171 = 642U;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t42 = -26630;

	t42 = (((x169<x170)<x171)|x172);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	uint16_t x176 = 1004U;
	volatile int32_t t43 = -58408;

	t43 = (((x173<x174)<x175)|x176);

	if (t43 != 1004) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = -54;
	int32_t x179 = 1;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 1079819;

	t44 = (((x177<x178)<x179)|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -2865834879703LL;
	int16_t x182 = INT16_MIN;
	static volatile int8_t x183 = 1;
	int32_t t45 = INT32_MAX;

	t45 = (((x181<x182)<x183)|x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x187 = 247U;
	uint16_t x188 = 6160U;

	t46 = (((x185<x186)<x187)|x188);

	if (t46 != 6161) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MIN;
	volatile int32_t t47 = 1;

	t47 = (((x189<x190)<x191)|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	static volatile int64_t x194 = -497603LL;
	static volatile int32_t x196 = INT32_MAX;

	t48 = (((x193<x194)<x195)|x196);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 88U;
	static int64_t x198 = INT64_MIN;
	volatile uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = -4;

	t49 = (((x197<x198)<x199)|x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = 18063276LL;
	int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 3;

	t50 = (((x201<x202)<x203)|x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 2U;
	volatile int32_t t51 = 7;

	t51 = (((x205<x206)<x207)|x208);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 5;
	volatile uint8_t x210 = 2U;
	int8_t x212 = -1;
	volatile int32_t t52 = 5;

	t52 = (((x209<x210)<x211)|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 9824;
	static uint64_t x214 = 5886180LLU;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 101U;

	t53 = (((x213<x214)<x215)|x216);

	if (t53 != 101) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = INT32_MIN;
	int8_t x219 = -14;
	uint8_t x220 = 66U;

	t54 = (((x217<x218)<x219)|x220);

	if (t54 != 66) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int64_t x223 = INT64_MIN;

	t55 = (((x221<x222)<x223)|x224);

	if (t55 != 203226326U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x226 = -29;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -16796;

	t56 = (((x225<x226)<x227)|x228);

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = -1;
	int8_t x231 = -1;
	static int32_t x232 = INT32_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (((x229<x230)<x231)|x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -758;
	int8_t x234 = -1;
	volatile uint16_t x235 = UINT16_MAX;
	int32_t x236 = 502;
	int32_t t58 = 163045941;

	t58 = (((x233<x234)<x235)|x236);

	if (t58 != 503) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	int8_t x238 = -1;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -180063;

	t59 = (((x237<x238)<x239)|x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = -1;
	static uint8_t x244 = 3U;
	int32_t t60 = 6420;

	t60 = (((x241<x242)<x243)|x244);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	static volatile int32_t t61 = 1526;

	t61 = (((x245<x246)<x247)|x248);

	if (t61 != 27) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MAX;
	uint32_t x251 = 1068804758U;
	uint8_t x252 = UINT8_MAX;
	static int32_t t62 = -176;

	t62 = (((x249<x250)<x251)|x252);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = 787170LL;
	int32_t t63 = -4;

	t63 = (((x253<x254)<x255)|x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 3268U;
	static uint32_t x259 = 118036068U;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = -1;

	t64 = (((x257<x258)<x259)|x260);

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = 272007345U;
	volatile int32_t t65 = -5712502;

	t65 = (((x261<x262)<x263)|x264);

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 29689695089614LLU;
	int32_t x267 = -644900799;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = -721942479;

	t66 = (((x265<x266)<x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -5;
	volatile int64_t x270 = INT64_MAX;
	uint64_t x271 = 1891LLU;

	t67 = (((x269<x270)<x271)|x272);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 12U;
	volatile uint64_t x275 = UINT64_MAX;
	volatile uint64_t x276 = 156072LLU;
	uint64_t t68 = 1986095287160006LLU;

	t68 = (((x273<x274)<x275)|x276);

	if (t68 != 156073LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -41;
	uint8_t x278 = UINT8_MAX;
	uint16_t x280 = 0U;
	static int32_t t69 = -148168881;

	t69 = (((x277<x278)<x279)|x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x282 = 1U;
	static uint16_t x283 = 1840U;
	uint32_t x284 = 1115947690U;

	t70 = (((x281<x282)<x283)|x284);

	if (t70 != 1115947691U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = -6376309;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (((x285<x286)<x287)|x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = -8;
	uint8_t x291 = 3U;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = -4208;

	t72 = (((x289<x290)<x291)|x292);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	uint16_t x294 = 61U;
	int16_t x295 = -3120;
	volatile uint8_t x296 = UINT8_MAX;

	t73 = (((x293<x294)<x295)|x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 2888U;
	int8_t x298 = INT8_MAX;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 23;

	t74 = (((x297<x298)<x299)|x300);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 3U;
	int8_t x302 = INT8_MAX;
	int8_t x303 = 0;
	int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x301<x302)<x303)|x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MAX;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;

	t76 = (((x305<x306)<x307)|x308);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x312 = 0;
	volatile int32_t t77 = 2;

	t77 = (((x309<x310)<x311)|x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	volatile int8_t x316 = INT8_MAX;

	t78 = (((x313<x314)<x315)|x316);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;

	t79 = (((x317<x318)<x319)|x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 0;
	static int16_t x322 = INT16_MIN;
	int16_t x324 = INT16_MAX;
	int32_t t80 = 113835123;

	t80 = (((x321<x322)<x323)|x324);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = 0;
	int8_t x328 = INT8_MAX;
	int32_t t81 = -3651;

	t81 = (((x325<x326)<x327)|x328);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -1;

	t82 = (((x329<x330)<x331)|x332);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 1205U;
	int64_t x334 = INT64_MAX;
	uint32_t t83 = 6609640U;

	t83 = (((x333<x334)<x335)|x336);

	if (t83 != 486549354U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = 1U;
	int32_t t84 = -1;

	t84 = (((x337<x338)<x339)|x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static int64_t x342 = -32505571LL;
	int16_t x344 = -1;

	t85 = (((x341<x342)<x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = UINT64_MAX;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MAX;
	volatile int64_t t86 = 16422399LL;

	t86 = (((x345<x346)<x347)|x348);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	uint16_t x350 = 455U;
	static int16_t x352 = -1;
	static int32_t t87 = -14659;

	t87 = (((x349<x350)<x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = 86781922LL;
	uint8_t x355 = 108U;
	int64_t x356 = INT64_MAX;
	int64_t t88 = INT64_MAX;

	t88 = (((x353<x354)<x355)|x356);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 1;
	int32_t x359 = -62017;
	static int64_t x360 = -34284762644944203LL;
	int64_t t89 = 143429323149995724LL;

	t89 = (((x357<x358)<x359)|x360);

	if (t89 != -34284762644944203LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 6U;
	uint32_t x362 = 18114840U;
	static int16_t x363 = INT16_MIN;
	static volatile int32_t x364 = 254;

	t90 = (((x361<x362)<x363)|x364);

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = -1;
	volatile int64_t x368 = -1LL;
	volatile int64_t t91 = -16227881LL;

	t91 = (((x365<x366)<x367)|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = -1LL;
	static int8_t x372 = -3;
	volatile int32_t t92 = -28524;

	t92 = (((x369<x370)<x371)|x372);

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = UINT8_MAX;
	static int8_t x375 = 12;
	int8_t x376 = 1;

	t93 = (((x373<x374)<x375)|x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1664115684485LLU;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 413258254670483LLU;
	volatile uint64_t t94 = 2095894166996LLU;

	t94 = (((x377<x378)<x379)|x380);

	if (t94 != 413258254670483LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -36627278308287236LL;
	static uint32_t x382 = 914246U;
	static volatile uint8_t x383 = 79U;
	static int32_t t95 = 1;

	t95 = (((x381<x382)<x383)|x384);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	volatile int32_t t96 = -43037;

	t96 = (((x385<x386)<x387)|x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MIN;
	volatile uint32_t x391 = UINT32_MAX;
	volatile int32_t t97 = 1726638;

	t97 = (((x389<x390)<x391)|x392);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 5U;
	volatile int32_t x395 = INT32_MIN;
	volatile int8_t x396 = 6;
	volatile int32_t t98 = -460;

	t98 = (((x393<x394)<x395)|x396);

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 0U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	static uint64_t x400 = 4193393295503894622LLU;
	volatile uint64_t t99 = 1930573LLU;

	t99 = (((x397<x398)<x399)|x400);

	if (t99 != 4193393295503894622LLU) { NG(); } else { ; }
	
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
