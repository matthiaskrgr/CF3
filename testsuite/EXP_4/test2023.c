#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 619022U;
uint64_t x16 = UINT64_MAX;
int64_t x21 = INT64_MIN;
uint64_t x24 = 3267518182117531904LLU;
volatile int16_t x29 = 988;
int8_t x30 = -1;
int8_t x38 = 4;
int32_t x42 = -31;
volatile int64_t x46 = INT64_MAX;
int32_t t11 = -4591799;
int8_t x54 = -1;
int32_t t14 = -224;
int16_t x64 = INT16_MIN;
int16_t x82 = INT16_MAX;
int64_t x83 = -2718326689005097LL;
static uint8_t x84 = 30U;
volatile int32_t t20 = 10107;
uint8_t x85 = UINT8_MAX;
int32_t x86 = INT32_MAX;
static uint8_t x88 = 1U;
int8_t x97 = INT8_MIN;
int16_t x113 = -1;
static int32_t t29 = 36;
uint16_t x124 = UINT16_MAX;
int32_t t31 = -756914665;
int64_t x131 = -512470388856047486LL;
volatile uint16_t x137 = UINT16_MAX;
int8_t x139 = INT8_MIN;
static int16_t x141 = -262;
volatile int32_t t37 = 352819;
int32_t x158 = -1;
static volatile int32_t t39 = 25;
int32_t x164 = INT32_MAX;
volatile int64_t x168 = INT64_MIN;
volatile uint8_t x175 = UINT8_MAX;
int32_t t43 = 19;
int16_t x180 = INT16_MIN;
static volatile int32_t t44 = -93;
int16_t x181 = INT16_MIN;
int16_t x183 = INT16_MIN;
int32_t t46 = -5;
uint8_t x193 = UINT8_MAX;
static int32_t t48 = 6;
int16_t x197 = 1;
int64_t x199 = 246793193182923LL;
int16_t x203 = INT16_MIN;
int32_t x206 = -7067;
uint64_t x207 = UINT64_MAX;
uint32_t x210 = 6U;
volatile uint64_t x212 = 98514867295877557LLU;
static int16_t x213 = -1;
volatile int32_t t53 = -232298;
static int32_t x218 = -1;
static int16_t x222 = 30;
uint64_t x224 = UINT64_MAX;
static int32_t x228 = INT32_MAX;
volatile int16_t x235 = 16;
uint32_t x238 = 2678772U;
volatile int16_t x241 = INT16_MIN;
uint16_t x246 = 1U;
static uint64_t x250 = 2232773052LLU;
int16_t x254 = -1;
static int8_t x257 = INT8_MIN;
uint64_t x264 = 13533137724614LLU;
int32_t x267 = INT32_MAX;
int32_t x269 = 789133825;
int32_t t67 = 11;
int16_t x274 = INT16_MIN;
uint16_t x275 = 1136U;
uint32_t x287 = 792U;
static uint64_t x293 = 40969LLU;
static uint16_t x299 = 1U;
int8_t x301 = 3;
static int8_t x304 = INT8_MAX;
int32_t x308 = -1;
static int32_t t77 = -172;
static int16_t x315 = INT16_MAX;
int32_t t78 = -3;
int64_t x320 = INT64_MAX;
static volatile uint16_t x321 = UINT16_MAX;
static int32_t t81 = -1;
int32_t t82 = 2;
volatile int8_t x338 = INT8_MIN;
volatile int16_t x341 = 0;
uint64_t x343 = 6139641LLU;
int8_t x345 = INT8_MIN;
volatile uint32_t x347 = 1321585U;
int32_t x348 = INT32_MIN;
uint8_t x353 = UINT8_MAX;
volatile int64_t x359 = INT64_MIN;
static int8_t x363 = INT8_MIN;
int16_t x367 = INT16_MIN;
int32_t x378 = INT32_MAX;
volatile int32_t t94 = -662;
static uint32_t x391 = 1052063101U;
uint8_t x397 = 87U;
int8_t x399 = INT8_MIN;


void f0(void) {
	int64_t x1 = -15882LL;
	int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MIN;
	uint8_t x4 = 5U;
	int32_t t0 = 253964;

	t0 = (x1==(x2^(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint32_t x6 = 0U;
	static int8_t x7 = 63;
	uint8_t x8 = 0U;
	int32_t t1 = 2386;

	t1 = (x5==(x6^(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 12928052593LLU;
	uint64_t x10 = 2046993133387LLU;
	int8_t x11 = -48;
	int16_t x12 = 151;
	volatile int32_t t2 = 7;

	t2 = (x9==(x10^(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 934379090U;
	int16_t x15 = -426;
	volatile int32_t t3 = -895;

	t3 = (x13==(x14^(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MAX;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -756378080;

	t4 = (x17==(x18^(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	static int8_t x23 = INT8_MIN;
	volatile int32_t t5 = -351744730;

	t5 = (x21==(x22^(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 125;
	static int32_t x26 = INT32_MAX;
	static int64_t x27 = -1LL;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -47143;

	t6 = (x25==(x26^(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -211799340;

	t7 = (x29==(x30^(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = 1;
	volatile int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -23386;

	t8 = (x33==(x34^(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static uint16_t x39 = UINT16_MAX;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = 3587;

	t9 = (x37==(x38^(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 221218LLU;
	uint32_t x43 = 966U;
	volatile int16_t x44 = -1;
	volatile int32_t t10 = -67671928;

	t10 = (x41==(x42^(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = INT64_MIN;
	int32_t x47 = 13840489;
	volatile uint8_t x48 = UINT8_MAX;

	t11 = (x45==(x46^(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = 3052567802926006756LLU;
	uint64_t x52 = 12LLU;
	int32_t t12 = 239823725;

	t12 = (x49==(x50^(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = 29U;
	int32_t t13 = -305769192;

	t13 = (x53==(x54^(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	static int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MAX;

	t14 = (x57==(x58^(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 368U;
	int8_t x63 = INT8_MIN;
	volatile int32_t t15 = 7738;

	t15 = (x61==(x62^(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile uint8_t x66 = 56U;
	uint16_t x67 = UINT16_MAX;
	static int64_t x68 = INT64_MIN;
	int32_t t16 = -14273;

	t16 = (x65==(x66^(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	volatile uint16_t x71 = 2716U;
	uint16_t x72 = 459U;
	volatile int32_t t17 = -1980801;

	t17 = (x69==(x70^(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -4413762719679LL;
	volatile int64_t x74 = -1LL;
	static uint8_t x75 = UINT8_MAX;
	int16_t x76 = -1;
	static int32_t t18 = -2;

	t18 = (x73==(x74^(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 1U;
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = 1069U;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 84729756;

	t19 = (x77==(x78^(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 8U;

	t20 = (x81==(x82^(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = INT32_MIN;
	int32_t t21 = 5542040;

	t21 = (x85==(x86^(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = 24;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 964211860;

	t22 = (x89==(x90^(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 26479LLU;
	int64_t x94 = INT64_MIN;
	int32_t x95 = -3178;
	uint16_t x96 = UINT16_MAX;
	static int32_t t23 = -1;

	t23 = (x93==(x94^(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 956330644744406268LLU;
	static uint8_t x99 = UINT8_MAX;
	volatile uint32_t x100 = 78643U;
	int32_t t24 = 1412;

	t24 = (x97==(x98^(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	static volatile uint16_t x102 = 106U;
	static uint32_t x103 = 1137U;
	uint16_t x104 = 3U;
	static volatile int32_t t25 = 1;

	t25 = (x101==(x102^(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 519980066254LL;
	volatile uint64_t x106 = UINT64_MAX;
	volatile int8_t x107 = 0;
	int16_t x108 = -1;
	int32_t t26 = 3;

	t26 = (x105==(x106^(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 2;
	static int64_t x110 = -1LL;
	uint16_t x111 = 4792U;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -192802532;

	t27 = (x109==(x110^(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MAX;
	int8_t x115 = -11;
	volatile int16_t x116 = 6009;
	volatile int32_t t28 = -3783;

	t28 = (x113==(x114^(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -20;
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 228750U;

	t29 = (x117==(x118^(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 910489091LLU;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = -13256554;

	t30 = (x121==(x122^(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	static uint64_t x126 = 4598943931890911694LLU;
	int64_t x127 = -3133105922092534LL;
	volatile uint64_t x128 = 11278971100194LLU;

	t31 = (x125==(x126^(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -27;
	static int8_t x130 = -21;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -246407;

	t32 = (x129==(x130^(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1371151992LL;
	int16_t x134 = -2;
	static uint32_t x135 = UINT32_MAX;
	volatile int32_t x136 = INT32_MAX;
	int32_t t33 = 10248927;

	t33 = (x133==(x134^(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x138 = INT64_MAX;
	volatile int16_t x140 = -1;
	int32_t t34 = 0;

	t34 = (x137==(x138^(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = INT8_MAX;
	volatile int8_t x143 = -1;
	int8_t x144 = INT8_MIN;
	static int32_t t35 = 0;

	t35 = (x141==(x142^(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = 1746339170791480LL;
	int16_t x147 = -1;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = -847358114;

	t36 = (x145==(x146^(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 20853099109120487LL;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1319619759193119532LL;
	int32_t x152 = 128120118;

	t37 = (x149==(x150^(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 220U;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	uint16_t x156 = 147U;
	int32_t t38 = -1;

	t38 = (x153==(x154^(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint64_t x159 = 9154920272887467LLU;
	int8_t x160 = INT8_MAX;

	t39 = (x157==(x158^(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = 7111;
	static int64_t x162 = 0LL;
	int8_t x163 = 1;
	volatile int32_t t40 = 245475818;

	t40 = (x161==(x162^(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 12;
	volatile int64_t x166 = INT64_MIN;
	uint64_t x167 = 641LLU;
	static int32_t t41 = 202742621;

	t41 = (x165==(x166^(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	volatile int32_t x170 = INT32_MIN;
	static volatile uint64_t x171 = 391078928LLU;
	int16_t x172 = -1;
	static int32_t t42 = -29569868;

	t42 = (x169==(x170^(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	static volatile int16_t x176 = -1;

	t43 = (x173==(x174^(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 0U;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MIN;

	t44 = (x177==(x178^(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 240U;
	uint16_t x184 = 16101U;
	volatile int32_t t45 = 12;

	t45 = (x181==(x182^(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 2663859291LLU;
	static uint16_t x188 = 5U;

	t46 = (x185==(x186^(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 30U;
	uint8_t x190 = UINT8_MAX;
	static uint16_t x191 = 364U;
	volatile int8_t x192 = -1;
	static int32_t t47 = 1;

	t47 = (x189==(x190^(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = 463307LL;
	volatile int16_t x195 = INT16_MIN;
	uint32_t x196 = 38554128U;

	t48 = (x193==(x194^(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = INT8_MIN;
	uint8_t x200 = 6U;
	int32_t t49 = -1510241;

	t49 = (x197==(x198^(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -2;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = -12;

	t50 = (x201==(x202^(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 28019U;
	volatile uint8_t x208 = 3U;
	static int32_t t51 = -6160485;

	t51 = (x205==(x206^(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	int8_t x211 = INT8_MAX;
	int32_t t52 = -670878;

	t52 = (x209==(x210^(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 12788U;
	static uint16_t x215 = 29U;
	uint16_t x216 = UINT16_MAX;

	t53 = (x213==(x214^(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	volatile uint16_t x219 = 39U;
	uint32_t x220 = 120U;
	static volatile int32_t t54 = -1;

	t54 = (x217==(x218^(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 192;
	int64_t x223 = INT64_MIN;
	volatile int32_t t55 = -9796;

	t55 = (x221==(x222^(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile int8_t x226 = -1;
	volatile uint64_t x227 = UINT64_MAX;
	static volatile int32_t t56 = 3;

	t56 = (x225==(x226^(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = -11;
	volatile int32_t x230 = -1;
	int32_t x231 = 14;
	int32_t x232 = -1;
	int32_t t57 = 50934;

	t57 = (x229==(x230^(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	static volatile int8_t x234 = -1;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = 1;

	t58 = (x233==(x234^(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -6763313667973LL;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 1390125366U;
	static volatile int32_t t59 = 4513921;

	t59 = (x237==(x238^(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -1;

	t60 = (x241==(x242^(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -43442256LL;
	volatile int32_t t61 = -45965;

	t61 = (x245==(x246^(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 30U;
	int8_t x251 = INT8_MAX;
	int16_t x252 = -1;
	int32_t t62 = -11738;

	t62 = (x249==(x250^(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x255 = -1;
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t63 = -14504;

	t63 = (x253==(x254^(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 16275085;

	t64 = (x257==(x258^(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 0U;
	volatile int8_t x262 = 37;
	uint32_t x263 = UINT32_MAX;
	int32_t t65 = -332835;

	t65 = (x261==(x262^(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	static uint32_t x266 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 72522581;

	t66 = (x265==(x266^(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -1LL;
	int64_t x271 = 76688290LL;
	uint32_t x272 = UINT32_MAX;

	t67 = (x269==(x270^(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 5655;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -183;

	t68 = (x273==(x274^(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 12U;
	int64_t x278 = -2295995981067LL;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = UINT64_MAX;
	int32_t t69 = 18188362;

	t69 = (x277==(x278^(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	static volatile uint8_t x282 = 103U;
	static volatile int8_t x283 = 34;
	int32_t x284 = -20;
	volatile int32_t t70 = 1;

	t70 = (x281==(x282^(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x285 = -3;
	static int64_t x286 = INT64_MAX;
	uint32_t x288 = 1555U;
	volatile int32_t t71 = -1;

	t71 = (x285==(x286^(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 811U;
	uint8_t x291 = 88U;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 1117022;

	t72 = (x289==(x290^(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x294 = -23;
	volatile uint16_t x295 = UINT16_MAX;
	int64_t x296 = -476135264123752LL;
	int32_t t73 = -84557603;

	t73 = (x293==(x294^(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 97U;
	volatile int16_t x298 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -19642;

	t74 = (x297==(x298^(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = -1;
	volatile uint32_t x303 = 4U;
	int32_t t75 = 28;

	t75 = (x301==(x302^(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int32_t x306 = INT32_MAX;
	int64_t x307 = 8434703406056194LL;
	int32_t t76 = -358;

	t76 = (x305==(x306^(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	int64_t x310 = 22357901LL;
	volatile int16_t x311 = INT16_MIN;
	volatile int16_t x312 = -2;

	t77 = (x309==(x310^(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	uint16_t x314 = 554U;
	uint16_t x316 = 970U;

	t78 = (x313==(x314^(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -63;
	static int32_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = 44;

	t79 = (x317==(x318^(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = -21;
	static volatile uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -262033669;

	t80 = (x321==(x322^(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 33901621154239052LLU;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = 2251U;

	t81 = (x325==(x326^(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 2912U;
	int16_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	static int64_t x332 = INT64_MIN;

	t82 = (x329==(x330^(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = -1;
	int64_t x334 = -13266609874920LL;
	int8_t x335 = INT8_MIN;
	int64_t x336 = 81733053250510LL;
	volatile int32_t t83 = 6;

	t83 = (x333==(x334^(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int8_t x339 = 0;
	static uint64_t x340 = UINT64_MAX;
	int32_t t84 = 17513;

	t84 = (x337==(x338^(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 14355861345378413LLU;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 555;

	t85 = (x341==(x342^(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	int32_t t86 = 74;

	t86 = (x345==(x346^(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = UINT32_MAX;
	static uint8_t x352 = 1U;
	int32_t t87 = 6575;

	t87 = (x349==(x350^(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = -8211843;

	t88 = (x353==(x354^(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int8_t x358 = -3;
	uint8_t x360 = 20U;
	static volatile int32_t t89 = -99676438;

	t89 = (x357==(x358^(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static int64_t x362 = INT64_MIN;
	static int8_t x364 = -1;
	volatile int32_t t90 = -203660782;

	t90 = (x361==(x362^(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	volatile int32_t x366 = 77;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 14374;

	t91 = (x365==(x366^(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = -1;
	uint8_t x371 = 22U;
	static volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -1;

	t92 = (x369==(x370^(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 7301U;
	static int8_t x374 = -1;
	volatile uint32_t x375 = 171235U;
	uint16_t x376 = 2478U;
	int32_t t93 = 349;

	t93 = (x373==(x374^(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1046;
	static int64_t x379 = INT64_MIN;
	int16_t x380 = 0;

	t94 = (x377==(x378^(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -4269406;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = 787443189263LL;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -387;

	t95 = (x381==(x382^(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 3;
	volatile int16_t x386 = -3011;
	int64_t x387 = -1LL;
	static int64_t x388 = INT64_MIN;
	int32_t t96 = -5433;

	t96 = (x385==(x386^(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MAX;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = -4;

	t97 = (x389==(x390^(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MAX;
	volatile uint64_t x395 = 0LLU;
	uint64_t x396 = 46172704LLU;
	volatile int32_t t98 = -1;

	t98 = (x393==(x394^(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x398 = 449U;
	volatile int64_t x400 = 2869806993052LL;
	volatile int32_t t99 = -31122891;

	t99 = (x397==(x398^(x399|x400)));

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
