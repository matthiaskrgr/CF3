#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MIN;
int64_t x4 = 0LL;
int64_t x5 = INT64_MIN;
volatile int8_t x12 = 5;
uint8_t x14 = 1U;
static int32_t t7 = 1342106;
uint32_t x33 = 1498069201U;
uint64_t x34 = 104888405603186LLU;
int32_t x36 = INT32_MIN;
volatile int32_t t8 = 96023229;
int32_t x40 = -1359;
int32_t t9 = 2616186;
static int64_t x50 = -1LL;
int8_t x53 = INT8_MAX;
int8_t x55 = INT8_MIN;
int32_t x59 = 18185442;
uint64_t x60 = 6653253047315258LLU;
volatile int32_t t14 = 256352175;
uint16_t x61 = 20U;
int32_t x62 = INT32_MIN;
int32_t t15 = 686;
volatile int32_t t17 = 1;
volatile int32_t x73 = -3476;
int32_t t18 = 6;
int8_t x91 = 0;
volatile uint8_t x95 = 1U;
int64_t x101 = INT64_MAX;
int8_t x105 = INT8_MIN;
uint32_t x109 = 4021U;
volatile uint32_t x113 = 16U;
int8_t x115 = 48;
volatile int32_t t30 = 1;
volatile uint64_t x126 = 15363018LLU;
static volatile int32_t t31 = -374567;
int32_t t32 = 104912;
static volatile uint8_t x133 = 1U;
uint32_t x139 = 29U;
volatile uint8_t x140 = UINT8_MAX;
int64_t x141 = -1LL;
static int16_t x144 = 75;
int16_t x146 = -1;
int8_t x149 = -1;
static int8_t x151 = -1;
static int64_t x159 = 2728966806250376LL;
int32_t t39 = 860079;
int8_t x171 = INT8_MIN;
uint32_t x180 = 404892U;
static volatile int8_t x182 = INT8_MIN;
volatile uint32_t x185 = UINT32_MAX;
volatile int32_t t47 = -2951;
int8_t x195 = 1;
int8_t x200 = 1;
static volatile uint32_t x204 = 18U;
static int64_t x205 = INT64_MAX;
uint32_t x220 = 48163U;
int32_t t55 = 494924;
int16_t x233 = 1;
int8_t x236 = INT8_MIN;
int64_t x237 = -1LL;
uint32_t x256 = 0U;
static volatile int8_t x263 = INT8_MIN;
int32_t t65 = 24;
volatile int64_t x268 = INT64_MIN;
static int32_t x269 = -469192659;
int64_t x273 = INT64_MIN;
int16_t x279 = INT16_MIN;
int32_t x282 = INT32_MAX;
int32_t x283 = -1;
uint32_t x288 = 5U;
int16_t x290 = INT16_MIN;
int8_t x301 = INT8_MAX;
static volatile int32_t t77 = -1942934;
int8_t x315 = INT8_MIN;
uint64_t x317 = 22649006695441LLU;
uint16_t x320 = 73U;
volatile int32_t x323 = INT32_MIN;
int64_t x325 = -4LL;
volatile int8_t x332 = -17;
int16_t x334 = -10;
uint64_t x337 = UINT64_MAX;
uint64_t x343 = 6065161019069LLU;
int32_t t85 = 65499918;
static uint32_t x347 = 964687979U;
uint64_t x348 = UINT64_MAX;
int16_t x353 = INT16_MAX;
uint16_t x355 = 1363U;
int32_t t88 = -12611600;
int64_t x358 = -7109707741986LL;
int8_t x364 = INT8_MIN;
volatile int32_t x370 = -1;
volatile int32_t t93 = -5157199;
volatile uint8_t x377 = UINT8_MAX;
static volatile int64_t x384 = INT64_MIN;
int64_t x388 = INT64_MAX;
volatile uint32_t x391 = 2783647U;
static uint16_t x394 = UINT16_MAX;
uint64_t x398 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	static volatile int32_t t0 = -105;

	t0 = ((x1<x2)&(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int8_t x7 = INT8_MAX;
	int8_t x8 = -1;
	int32_t t1 = -35;

	t1 = ((x5<x6)&(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = -1LL;
	volatile int32_t t2 = 3784519;

	t2 = ((x9<x10)&(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int32_t x15 = -1;
	static int8_t x16 = -1;
	int32_t t3 = -2583208;

	t3 = ((x13<x14)&(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = 14U;
	static int64_t x18 = 0LL;
	int32_t x19 = -4;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -976373536;

	t4 = ((x17<x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1110818454U;
	uint64_t x22 = 442212LLU;
	static uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 305U;
	static volatile int32_t t5 = -8069572;

	t5 = ((x21<x22)&(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int8_t x26 = 10;
	int8_t x27 = 1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 274592;

	t6 = ((x25<x26)&(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MAX;
	int16_t x31 = -472;
	uint64_t x32 = UINT64_MAX;

	t7 = ((x29<x30)&(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = INT16_MIN;

	t8 = ((x33<x34)&(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 193507811U;
	uint64_t x38 = 24051877000379LLU;
	volatile int16_t x39 = -1;

	t9 = ((x37<x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	static int32_t x42 = -2;
	int64_t x43 = INT64_MAX;
	int8_t x44 = -56;
	volatile int32_t t10 = 1050;

	t10 = ((x41<x42)&(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	int32_t x46 = -1;
	volatile uint16_t x47 = 2U;
	uint32_t x48 = 63922933U;
	int32_t t11 = 210512226;

	t11 = ((x45<x46)&(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1864;
	volatile int32_t x51 = INT32_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 552204;

	t12 = ((x49<x50)&(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x54 = UINT64_MAX;
	volatile int32_t x56 = INT32_MIN;
	int32_t t13 = 12989;

	t13 = ((x53<x54)&(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	uint32_t x58 = 2U;

	t14 = ((x57<x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = -404;
	volatile int8_t x64 = -1;

	t15 = ((x61<x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int8_t x66 = 1;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 11873;

	t16 = ((x65<x66)&(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static int64_t x70 = 21LL;
	static uint64_t x71 = 301025LLU;
	static uint16_t x72 = UINT16_MAX;

	t17 = ((x69<x70)&(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	static uint64_t x75 = 89934233224163088LLU;
	uint8_t x76 = 2U;

	t18 = ((x73<x74)&(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int32_t x78 = INT32_MAX;
	uint32_t x79 = 1507U;
	int8_t x80 = -1;
	volatile int32_t t19 = 58392;

	t19 = ((x77<x78)&(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 950690478390LLU;
	static int64_t x82 = -273338LL;
	volatile uint16_t x83 = UINT16_MAX;
	int32_t x84 = 63;
	int32_t t20 = 1;

	t20 = ((x81<x82)&(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	volatile int64_t x88 = -210172LL;
	volatile int32_t t21 = -3;

	t21 = ((x85<x86)&(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	int64_t x92 = -1LL;
	static int32_t t22 = -194;

	t22 = ((x89<x90)&(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	int8_t x96 = 14;
	volatile int32_t t23 = 13101;

	t23 = ((x93<x94)&(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint64_t x98 = 2405934820141LLU;
	uint8_t x99 = 25U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 39568979;

	t24 = ((x97<x98)&(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = -30;
	uint32_t x103 = 1623868U;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 267334;

	t25 = ((x101<x102)&(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = 1LLU;
	static volatile int64_t x107 = INT64_MIN;
	int64_t x108 = 23848590816LL;
	static volatile int32_t t26 = -12;

	t26 = ((x105<x106)&(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 837U;
	int32_t x111 = -1;
	static int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = -57214;

	t27 = ((x109<x110)&(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x114 = INT16_MAX;
	volatile int64_t x116 = 16009039630825628LL;
	volatile int32_t t28 = -9651;

	t28 = ((x113<x114)&(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x118 = -1;
	uint16_t x119 = 13U;
	static int32_t x120 = 113;
	volatile int32_t t29 = -3365;

	t29 = ((x117<x118)&(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 61U;
	int32_t x122 = -1;
	static int16_t x123 = 14;
	volatile int16_t x124 = INT16_MIN;

	t30 = ((x121<x122)&(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 117191559425LLU;
	static int16_t x127 = 17;
	static int32_t x128 = INT32_MIN;

	t31 = ((x125<x126)&(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static volatile uint64_t x130 = UINT64_MAX;
	int32_t x131 = -1;
	int8_t x132 = INT8_MAX;

	t32 = ((x129<x130)&(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 167573U;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t33 = 206165;

	t33 = ((x133<x134)&(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile uint32_t x138 = 475U;
	volatile int32_t t34 = 4183785;

	t34 = ((x137<x138)&(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = 34992480771LL;
	int32_t x143 = -1;
	volatile int32_t t35 = -5381754;

	t35 = ((x141<x142)&(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x147 = 299851U;
	uint16_t x148 = 54U;
	volatile int32_t t36 = -1779;

	t36 = ((x145<x146)&(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 13622670;

	t37 = ((x149<x150)&(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int16_t x154 = -975;
	int64_t x155 = 9370044LL;
	static uint64_t x156 = 5697782426960309LLU;
	int32_t t38 = 541;

	t38 = ((x153<x154)&(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	static volatile int32_t x158 = -700299345;
	uint8_t x160 = UINT8_MAX;

	t39 = ((x157<x158)&(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	volatile uint8_t x162 = UINT8_MAX;
	volatile uint32_t x163 = 127U;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -33075;

	t40 = ((x161<x162)&(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 0;
	volatile int16_t x166 = INT16_MIN;
	uint16_t x167 = 139U;
	int8_t x168 = INT8_MIN;
	static int32_t t41 = 4787;

	t41 = ((x165<x166)&(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int8_t x170 = INT8_MIN;
	volatile int16_t x172 = INT16_MIN;
	int32_t t42 = -47849;

	t42 = ((x169<x170)&(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 40U;
	static uint64_t x174 = 454858750LLU;
	uint8_t x175 = 38U;
	int8_t x176 = 3;
	int32_t t43 = 0;

	t43 = ((x173<x174)&(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = -6489366;
	static int8_t x179 = -1;
	volatile int32_t t44 = -160;

	t44 = ((x177<x178)&(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	uint8_t x183 = 5U;
	static int16_t x184 = -3;
	int32_t t45 = -19830;

	t45 = ((x181<x182)&(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = -150;
	uint16_t x187 = UINT16_MAX;
	static int32_t x188 = -4;
	static int32_t t46 = 55488;

	t46 = ((x185<x186)&(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x190 = -17545193859409LL;
	uint8_t x191 = 7U;
	volatile int32_t x192 = INT32_MIN;

	t47 = ((x189<x190)&(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 11U;
	int8_t x194 = -1;
	volatile int8_t x196 = -1;
	volatile int32_t t48 = -6;

	t48 = ((x193<x194)&(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 0;
	static int32_t x198 = INT32_MAX;
	uint64_t x199 = UINT64_MAX;
	int32_t t49 = -163289033;

	t49 = ((x197<x198)&(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -404672;
	static volatile int16_t x202 = 21;
	uint32_t x203 = 1490454947U;
	int32_t t50 = -711086;

	t50 = ((x201<x202)&(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x206 = 9014336;
	int8_t x207 = 8;
	static int32_t x208 = 417479072;
	volatile int32_t t51 = -1;

	t51 = ((x205<x206)&(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MAX;
	static uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 970052082;

	t52 = ((x209<x210)&(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = 1265LLU;
	int16_t x215 = -1;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = 0;

	t53 = ((x213<x214)&(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = -1;
	static int32_t t54 = -657;

	t54 = ((x217<x218)&(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;

	t55 = ((x221<x222)&(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint16_t x226 = 5774U;
	int16_t x227 = -1;
	uint64_t x228 = 339800LLU;
	volatile int32_t t56 = -1400;

	t56 = ((x225<x226)&(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int32_t x230 = INT32_MAX;
	uint8_t x231 = 20U;
	uint64_t x232 = 1083122026003LLU;
	volatile int32_t t57 = 338718414;

	t57 = ((x229<x230)&(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = -911569476;
	volatile uint64_t x235 = 1743LLU;
	static int32_t t58 = 47;

	t58 = ((x233<x234)&(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 311;
	int8_t x239 = -1;
	volatile uint32_t x240 = 1U;
	static volatile int32_t t59 = -332;

	t59 = ((x237<x238)&(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 3694649761LLU;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MAX;
	int32_t t60 = 31883;

	t60 = ((x241<x242)&(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -92355631;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 60758LLU;
	volatile int32_t t61 = -218;

	t61 = ((x245<x246)&(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	uint64_t x250 = UINT64_MAX;
	volatile int8_t x251 = 0;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -48;

	t62 = ((x249<x250)&(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	volatile uint16_t x254 = UINT16_MAX;
	static int64_t x255 = -1LL;
	volatile int32_t t63 = 15872;

	t63 = ((x253<x254)&(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -27;
	int32_t x258 = -6;
	uint32_t x259 = 825501046U;
	uint32_t x260 = 256090U;
	volatile int32_t t64 = -34;

	t64 = ((x257<x258)&(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	static int32_t x262 = INT32_MAX;
	volatile int32_t x264 = INT32_MIN;

	t65 = ((x261<x262)&(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MAX;
	volatile int32_t t66 = -4258163;

	t66 = ((x265<x266)&(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = -1;
	static int32_t t67 = -881;

	t67 = ((x269<x270)&(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int16_t x276 = 10601;
	int32_t t68 = -1;

	t68 = ((x273<x274)&(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 1412LLU;
	int64_t x278 = -1LL;
	int8_t x280 = 30;
	int32_t t69 = 671;

	t69 = ((x277<x278)&(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int64_t x284 = -3294505LL;
	volatile int32_t t70 = 0;

	t70 = ((x281<x282)&(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 60390214LLU;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t t71 = 16;

	t71 = ((x285<x286)&(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -1;
	int8_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 1617665;

	t72 = ((x289<x290)&(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int64_t x294 = INT64_MAX;
	int64_t x295 = 2LL;
	int64_t x296 = 27220109LL;
	volatile int32_t t73 = -275164;

	t73 = ((x293<x294)&(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 12;
	static uint32_t x298 = 4569853U;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = 45416226LLU;
	volatile int32_t t74 = 334645678;

	t74 = ((x297<x298)&(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = INT64_MAX;
	volatile int16_t x303 = 4426;
	static int16_t x304 = -1;
	volatile int32_t t75 = 39637265;

	t75 = ((x301<x302)&(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 52U;
	uint8_t x306 = UINT8_MAX;
	volatile uint8_t x307 = 4U;
	volatile int64_t x308 = 736587717270364468LL;
	volatile int32_t t76 = 14220168;

	t76 = ((x305<x306)&(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -2;
	int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MAX;
	int64_t x312 = -1LL;

	t77 = ((x309<x310)&(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	volatile int64_t x314 = INT64_MIN;
	uint16_t x316 = 111U;
	static volatile int32_t t78 = -11940699;

	t78 = ((x313<x314)&(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x318 = -1LL;
	int16_t x319 = -1;
	volatile int32_t t79 = -3;

	t79 = ((x317<x318)&(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 13030U;
	static volatile uint16_t x322 = 1385U;
	volatile int16_t x324 = INT16_MIN;
	static int32_t t80 = 10370;

	t80 = ((x321<x322)&(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	static uint32_t x327 = UINT32_MAX;
	volatile int16_t x328 = -6;
	int32_t t81 = 1;

	t81 = ((x325<x326)&(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 0;
	int8_t x330 = -41;
	volatile uint64_t x331 = 267355689254LLU;
	volatile int32_t t82 = -5495;

	t82 = ((x329<x330)&(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x335 = 40967U;
	volatile int32_t x336 = -1;
	int32_t t83 = 3740397;

	t83 = ((x333<x334)&(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x338 = UINT8_MAX;
	uint16_t x339 = UINT16_MAX;
	static volatile int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x337<x338)&(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MIN;
	volatile int64_t x344 = 504438752373162836LL;

	t85 = ((x341<x342)&(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int16_t x346 = INT16_MIN;
	volatile int32_t t86 = -811253;

	t86 = ((x345<x346)&(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	volatile int32_t x351 = 14475648;
	uint16_t x352 = 1685U;
	int32_t t87 = 1;

	t87 = ((x349<x350)&(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = 1U;
	static int32_t x356 = INT32_MIN;

	t88 = ((x353<x354)&(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 3;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = -1;
	int32_t t89 = -2599276;

	t89 = ((x357<x358)&(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	static int16_t x362 = INT16_MAX;
	volatile int8_t x363 = -1;
	int32_t t90 = -76396;

	t90 = ((x361<x362)&(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static volatile int16_t x366 = INT16_MIN;
	int8_t x367 = -1;
	volatile int64_t x368 = -1LL;
	volatile int32_t t91 = -30634793;

	t91 = ((x365<x366)&(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x371 = 135417765672093LLU;
	static int32_t x372 = 124189;
	int32_t t92 = -1604805;

	t92 = ((x369<x370)&(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	static volatile int32_t x374 = -1;
	static uint32_t x375 = UINT32_MAX;
	int8_t x376 = 1;

	t93 = ((x373<x374)&(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	static int16_t x379 = -649;
	uint8_t x380 = 0U;
	int32_t t94 = 1885;

	t94 = ((x377<x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	int8_t x382 = 2;
	static int64_t x383 = INT64_MAX;
	volatile int32_t t95 = 34;

	t95 = ((x381<x382)&(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static volatile int32_t t96 = 708702;

	t96 = ((x385<x386)&(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x390 = -6;
	uint64_t x392 = 3799079939LLU;
	volatile int32_t t97 = -32960351;

	t97 = ((x389<x390)&(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	int16_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 2035875;

	t98 = ((x393<x394)&(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 50;
	uint8_t x399 = UINT8_MAX;
	uint32_t x400 = 821546548U;
	volatile int32_t t99 = -6585;

	t99 = ((x397<x398)&(x399<x400));

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
