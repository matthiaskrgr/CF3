#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
int32_t x5 = INT32_MAX;
volatile uint32_t x8 = 129U;
static volatile int8_t x17 = -27;
int32_t x18 = -1;
uint32_t x23 = UINT32_MAX;
int64_t x25 = 3547322LL;
int16_t x26 = INT16_MIN;
uint8_t x27 = 46U;
int32_t x29 = -1;
int8_t x34 = 24;
static int8_t x36 = INT8_MIN;
volatile int32_t t8 = -6215279;
int8_t x40 = INT8_MIN;
uint64_t x41 = UINT64_MAX;
volatile int32_t x43 = -1;
static int32_t x47 = INT32_MAX;
int32_t t11 = 253;
int32_t t12 = 6435;
static int64_t x61 = -32400LL;
int32_t t16 = 104;
int32_t x70 = -1;
int64_t x72 = INT64_MAX;
volatile int32_t t17 = 939482;
int64_t x73 = INT64_MIN;
static volatile int8_t x76 = INT8_MIN;
int32_t t20 = 31;
int32_t x86 = INT32_MIN;
int32_t x90 = INT32_MIN;
volatile int32_t t22 = 60;
volatile int8_t x93 = INT8_MIN;
int64_t x95 = -1LL;
int16_t x110 = INT16_MAX;
int32_t x112 = -321932;
int16_t x116 = -1;
int8_t x122 = -1;
static volatile int8_t x124 = -1;
int32_t x125 = 4;
int64_t x126 = INT64_MAX;
int32_t x140 = 1178;
uint32_t x143 = UINT32_MAX;
int32_t t35 = 56;
static volatile uint32_t x148 = UINT32_MAX;
static int16_t x152 = INT16_MIN;
uint16_t x156 = 5772U;
int16_t x159 = INT16_MIN;
volatile int32_t t39 = 1;
static uint32_t x167 = 617481U;
static volatile int32_t t41 = -449049;
static volatile uint8_t x169 = 1U;
uint64_t x181 = 3LLU;
int32_t t45 = 952;
int16_t x187 = INT16_MIN;
static int64_t x196 = INT64_MAX;
int16_t x198 = -1;
uint16_t x200 = 3U;
int32_t t49 = 352;
int32_t t50 = 13;
volatile uint64_t x206 = 14289717555075886LLU;
int32_t x214 = INT32_MAX;
int8_t x220 = INT8_MAX;
volatile int32_t t54 = 1315;
static int32_t t55 = -10347;
int64_t x234 = INT64_MAX;
static int16_t x239 = INT16_MAX;
uint64_t x242 = 398462795338586LLU;
int32_t x248 = INT32_MIN;
int32_t t62 = 2;
int8_t x255 = INT8_MAX;
static uint32_t x262 = 55U;
int32_t t65 = 43334;
uint16_t x265 = 0U;
static uint8_t x267 = 1U;
volatile int32_t t67 = 10545116;
int32_t x273 = -52686596;
int32_t x275 = 54774;
static uint64_t x276 = 279114LLU;
int32_t t68 = 293675;
volatile int8_t x280 = INT8_MIN;
volatile int32_t t70 = -438;
int64_t x286 = -1LL;
volatile uint8_t x288 = UINT8_MAX;
volatile int32_t t71 = -58;
volatile int32_t t73 = -1394;
int32_t x302 = 233823894;
static int32_t x304 = INT32_MIN;
uint64_t x305 = UINT64_MAX;
uint8_t x307 = 0U;
int64_t x310 = INT64_MAX;
int16_t x312 = INT16_MIN;
static volatile int64_t x317 = 7299LL;
volatile int16_t x318 = INT16_MIN;
int8_t x319 = -11;
int16_t x320 = 0;
volatile int32_t x321 = -1;
int8_t x325 = -1;
static int8_t x328 = INT8_MIN;
volatile int32_t x332 = -98;
volatile int32_t t83 = 45124947;
volatile uint32_t x338 = UINT32_MAX;
static int32_t x341 = -1;
uint32_t x343 = UINT32_MAX;
uint32_t x344 = 40578510U;
int32_t t85 = 243794902;
volatile int8_t x345 = -1;
static int16_t x347 = 1507;
static int32_t x349 = 1;
static volatile uint32_t x355 = 6548U;
int16_t x359 = INT16_MIN;
volatile uint8_t x360 = 103U;
int16_t x364 = 9;
volatile int64_t x365 = INT64_MIN;
volatile uint32_t x370 = 2778U;
static volatile int64_t x371 = INT64_MIN;
volatile int32_t t95 = 35308;
int16_t x398 = INT16_MIN;


void f0(void) {
	static uint8_t x1 = 4U;
	int8_t x2 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 3912;

	t0 = (x1<=(x2^(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int32_t x7 = -1;
	volatile int32_t t1 = -513221914;

	t1 = (x5<=(x6^(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = 498;
	int8_t x10 = INT8_MIN;
	uint64_t x11 = 1700441910116462LLU;
	int16_t x12 = -1;
	int32_t t2 = -210286936;

	t2 = (x9<=(x10^(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	static volatile int8_t x14 = 1;
	uint8_t x15 = 0U;
	static uint32_t x16 = 886582560U;
	int32_t t3 = -294714794;

	t3 = (x13<=(x14^(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -3116194;

	t4 = (x17<=(x18^(x19&x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static uint64_t x22 = 1274027LLU;
	volatile int64_t x24 = -1LL;
	static volatile int32_t t5 = 8194306;

	t5 = (x21<=(x22^(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x28 = 11U;
	int32_t t6 = -3;

	t6 = (x25<=(x26^(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -14278;
	int32_t t7 = 322501415;

	t7 = (x29<=(x30^(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 2;
	int16_t x35 = 1;

	t8 = (x33<=(x34^(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -2;
	static volatile int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = 9;

	t9 = (x37<=(x38^(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = -4;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -2;

	t10 = (x41<=(x42^(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	volatile int16_t x46 = INT16_MAX;
	int64_t x48 = INT64_MIN;

	t11 = (x45<=(x46^(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1952;
	int32_t x50 = INT32_MIN;
	volatile int32_t x51 = INT32_MAX;
	uint8_t x52 = 1U;

	t12 = (x49<=(x50^(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	static uint32_t x55 = 7734384U;
	int64_t x56 = -1LL;
	volatile int32_t t13 = -410872;

	t13 = (x53<=(x54^(x55&x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 16;
	int8_t x58 = 0;
	static int8_t x59 = -2;
	volatile int64_t x60 = -1LL;
	volatile int32_t t14 = -11;

	t14 = (x57<=(x58^(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = 29U;
	uint64_t x63 = 4513642LLU;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -10065988;

	t15 = (x61<=(x62^(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	static volatile int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = UINT16_MAX;

	t16 = (x65<=(x66^(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1073114162357665LL;
	static int8_t x71 = 20;

	t17 = (x69<=(x70^(x71&x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int64_t x75 = -1LL;
	volatile int32_t t18 = -37090;

	t18 = (x73<=(x74^(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int32_t x78 = INT32_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	static volatile int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -1654;

	t19 = (x77<=(x78^(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 231753719460872346LLU;
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = -1517LL;
	int64_t x84 = 0LL;

	t20 = (x81<=(x82^(x83&x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = 0;

	t21 = (x85<=(x86^(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -50;
	static volatile int16_t x91 = -1;
	uint8_t x92 = 23U;

	t22 = (x89<=(x90^(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 0;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 8252;

	t23 = (x93<=(x94^(x95&x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile int8_t x98 = INT8_MAX;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;
	int32_t t24 = -425;

	t24 = (x97<=(x98^(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 56U;
	static int8_t x102 = INT8_MAX;
	volatile int16_t x103 = -1;
	int16_t x104 = 1;
	int32_t t25 = -1;

	t25 = (x101<=(x102^(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -1LL;
	int32_t t26 = -3164;

	t26 = (x105<=(x106^(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 6U;
	static uint64_t x111 = 12404950930LLU;
	static volatile int32_t t27 = -468;

	t27 = (x109<=(x110^(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -1LL;
	int32_t t28 = -53478;

	t28 = (x113<=(x114^(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	static int8_t x118 = 7;
	static int64_t x119 = INT64_MIN;
	int16_t x120 = -1;
	int32_t t29 = 500871993;

	t29 = (x117<=(x118^(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 211LL;
	static volatile int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 0;

	t30 = (x121<=(x122^(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x127 = 465;
	int16_t x128 = 854;
	static volatile int32_t t31 = -31905047;

	t31 = (x125<=(x126^(x127&x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 1;
	int64_t x130 = INT64_MIN;
	int8_t x131 = -19;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -22559726;

	t32 = (x129<=(x130^(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = -2;
	uint64_t x136 = 5638829380LLU;
	int32_t t33 = 1592;

	t33 = (x133<=(x134^(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 8U;
	int8_t x138 = 0;
	int8_t x139 = INT8_MIN;
	int32_t t34 = 125957;

	t34 = (x137<=(x138^(x139&x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MAX;
	int16_t x144 = INT16_MIN;

	t35 = (x141<=(x142^(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x145 = 0U;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	static int32_t t36 = 6654076;

	t36 = (x145<=(x146^(x147&x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MAX;
	uint16_t x151 = UINT16_MAX;
	int32_t t37 = -187;

	t37 = (x149<=(x150^(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MAX;
	int64_t x154 = 111314LL;
	int32_t x155 = 58143889;
	int32_t t38 = -8313993;

	t38 = (x153<=(x154^(x155&x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 9U;
	int32_t x158 = -1;
	static int16_t x160 = 1677;

	t39 = (x157<=(x158^(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MAX;
	uint8_t x164 = 12U;
	static volatile int32_t t40 = 3;

	t40 = (x161<=(x162^(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -5166360746LL;
	int16_t x166 = INT16_MIN;
	int64_t x168 = INT64_MAX;

	t41 = (x165<=(x166^(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = 1514633U;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 3903LLU;
	volatile int32_t t42 = 2520;

	t42 = (x169<=(x170^(x171&x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 3962289U;
	volatile int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 5;

	t43 = (x173<=(x174^(x175&x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	int16_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = 55;
	volatile int32_t t44 = 44;

	t44 = (x177<=(x178^(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = UINT32_MAX;
	int32_t x183 = -1;
	int32_t x184 = INT32_MIN;

	t45 = (x181<=(x182^(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint32_t x186 = 1754023150U;
	volatile int8_t x188 = -1;
	int32_t t46 = -14201;

	t46 = (x185<=(x186^(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 13U;
	uint16_t x190 = 230U;
	int8_t x191 = 1;
	int32_t x192 = -1;
	volatile int32_t t47 = 1067;

	t47 = (x189<=(x190^(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = UINT16_MAX;
	uint8_t x194 = 26U;
	int16_t x195 = -1;
	int32_t t48 = -19749587;

	t48 = (x193<=(x194^(x195&x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int8_t x199 = -1;

	t49 = (x197<=(x198^(x199&x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 119U;
	uint64_t x202 = 1883296091343372944LLU;
	int32_t x203 = INT32_MIN;
	volatile uint32_t x204 = 40U;

	t50 = (x201<=(x202^(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = 18LL;
	volatile int32_t t51 = 47;

	t51 = (x205<=(x206^(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 397093U;
	volatile uint16_t x210 = UINT16_MAX;
	static int64_t x211 = -1LL;
	static int8_t x212 = -1;
	int32_t t52 = 121024;

	t52 = (x209<=(x210^(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 1073529304928811LLU;
	static uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MAX;
	int32_t t53 = -1;

	t53 = (x213<=(x214^(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = 3064724461LL;
	int8_t x218 = 3;
	volatile int32_t x219 = 1;

	t54 = (x217<=(x218^(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	uint64_t x222 = 17845647692LLU;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MAX;

	t55 = (x221<=(x222^(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 231801332LLU;
	int8_t x228 = 1;
	int32_t t56 = -14;

	t56 = (x225<=(x226^(x227&x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 3U;
	static volatile uint64_t x230 = 62143084759503121LLU;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = -1;
	int32_t t57 = -121;

	t57 = (x229<=(x230^(x231&x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 3111;

	t58 = (x233<=(x234^(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -7432;

	t59 = (x237<=(x238^(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int8_t x243 = 7;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 0;

	t60 = (x241<=(x242^(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 392790;
	uint64_t x246 = 84LLU;
	int32_t x247 = INT32_MIN;
	volatile int32_t t61 = 1138;

	t61 = (x245<=(x246^(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -3;
	volatile int8_t x250 = INT8_MIN;
	int8_t x251 = -1;
	int8_t x252 = 27;

	t62 = (x249<=(x250^(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 3887U;
	volatile uint16_t x254 = 4U;
	int64_t x256 = -1996LL;
	int32_t t63 = 0;

	t63 = (x253<=(x254^(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = -763;
	int8_t x259 = -1;
	int8_t x260 = INT8_MAX;
	int32_t t64 = 374;

	t64 = (x257<=(x258^(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint32_t x263 = UINT32_MAX;
	uint64_t x264 = UINT64_MAX;

	t65 = (x261<=(x262^(x263&x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	static int32_t t66 = -363212;

	t66 = (x265<=(x266^(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MAX;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;

	t67 = (x269<=(x270^(x271&x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;

	t68 = (x273<=(x274^(x275&x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 3507226LLU;
	uint16_t x278 = 50U;
	static int16_t x279 = INT16_MIN;
	volatile int32_t t69 = -20527;

	t69 = (x277<=(x278^(x279&x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 10866U;
	int32_t x282 = INT32_MIN;
	volatile uint32_t x283 = 3U;
	static volatile int8_t x284 = -17;

	t70 = (x281<=(x282^(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MAX;
	static int32_t x287 = INT32_MIN;

	t71 = (x285<=(x286^(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -1;
	int32_t t72 = -999031185;

	t72 = (x289<=(x290^(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	static int32_t x295 = INT32_MIN;
	uint8_t x296 = 6U;

	t73 = (x293<=(x294^(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int8_t x298 = -31;
	int16_t x299 = INT16_MIN;
	static int64_t x300 = -1LL;
	volatile int32_t t74 = 17555;

	t74 = (x297<=(x298^(x299&x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -6539;
	uint64_t x303 = 514953336905227995LLU;
	int32_t t75 = 82914161;

	t75 = (x301<=(x302^(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -1287;
	uint32_t x308 = 88U;
	int32_t t76 = 6761230;

	t76 = (x305<=(x306^(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 1027102801788LL;
	static uint8_t x311 = UINT8_MAX;
	static volatile int32_t t77 = -4;

	t77 = (x309<=(x310^(x311&x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -4;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = -122779;

	t78 = (x313<=(x314^(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t t79 = 99;

	t79 = (x317<=(x318^(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MAX;
	static volatile int8_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;
	int32_t t80 = 92;

	t80 = (x321<=(x322^(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x326 = 56772666587LLU;
	volatile uint16_t x327 = 8U;
	volatile int32_t t81 = 5895;

	t81 = (x325<=(x326^(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	static int32_t t82 = 409163;

	t82 = (x329<=(x330^(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	static uint16_t x334 = 0U;
	volatile int32_t x335 = -1;
	uint8_t x336 = 4U;

	t83 = (x333<=(x334^(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 140473U;
	static uint16_t x339 = UINT16_MAX;
	int32_t x340 = -10;
	int32_t t84 = 0;

	t84 = (x337<=(x338^(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x342 = 24U;

	t85 = (x341<=(x342^(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = -1;
	uint64_t x348 = 0LLU;
	int32_t t86 = -3013;

	t86 = (x345<=(x346^(x347&x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 404052306;

	t87 = (x349<=(x350^(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = 434;
	int16_t x354 = INT16_MIN;
	uint32_t x356 = 0U;
	static volatile int32_t t88 = 14036208;

	t88 = (x353<=(x354^(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = 2U;
	int32_t x358 = INT32_MIN;
	volatile int32_t t89 = 191133;

	t89 = (x357<=(x358^(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = 271758LLU;
	int64_t x363 = INT64_MIN;
	int32_t t90 = 2615097;

	t90 = (x361<=(x362^(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static int8_t x368 = -12;
	volatile int32_t t91 = -269787;

	t91 = (x365<=(x366^(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = 1326;

	t92 = (x369<=(x370^(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	uint16_t x374 = 527U;
	static int32_t x375 = 376;
	static int16_t x376 = 20;
	volatile int32_t t93 = 31232;

	t93 = (x373<=(x374^(x375&x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	int16_t x378 = 14;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	int32_t t94 = 2308394;

	t94 = (x377<=(x378^(x379&x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 37U;
	int64_t x382 = -1LL;
	int16_t x383 = -37;
	int16_t x384 = -10;

	t95 = (x381<=(x382^(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -3341;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 34443430904258281LLU;
	volatile int32_t t96 = 477;

	t96 = (x385<=(x386^(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = -1;
	int8_t x390 = 7;
	int64_t x391 = -522536631573985702LL;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t97 = 17153;

	t97 = (x389<=(x390^(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = 2;
	int16_t x396 = -1;
	static int32_t t98 = 3972050;

	t98 = (x393<=(x394^(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 160U;
	int64_t x399 = INT64_MIN;
	uint16_t x400 = 72U;
	int32_t t99 = 277220;

	t99 = (x397<=(x398^(x399&x400)));

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
