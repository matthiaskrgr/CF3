#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 3U;
uint8_t x3 = UINT8_MAX;
int8_t x6 = INT8_MAX;
volatile uint32_t x7 = 31333204U;
uint32_t t1 = 443516065U;
int64_t x13 = INT64_MIN;
uint16_t x14 = 38U;
int32_t x17 = 741;
static volatile int32_t x29 = 1;
static int64_t x30 = INT64_MIN;
uint16_t x39 = UINT16_MAX;
int16_t x44 = INT16_MIN;
static int32_t x47 = -18;
int32_t x48 = -1;
uint64_t x51 = 2522690LLU;
int32_t x52 = -1;
volatile uint64_t t10 = 1LLU;
static volatile int32_t x53 = -1;
int8_t x58 = INT8_MIN;
int64_t x59 = -1LL;
volatile uint8_t x60 = 2U;
static volatile int64_t t12 = 1674454736935911LL;
int16_t x62 = -2997;
int8_t x65 = -1;
volatile uint64_t t14 = 16247229751353674LLU;
int8_t x70 = -1;
uint64_t x72 = 2082477LLU;
uint8_t x75 = UINT8_MAX;
static int64_t t16 = 0LL;
uint64_t x78 = UINT64_MAX;
int64_t x81 = INT64_MAX;
uint32_t x95 = UINT32_MAX;
static uint64_t x96 = UINT64_MAX;
uint32_t x101 = 14135380U;
volatile uint32_t t22 = 2324U;
int64_t x109 = INT64_MIN;
int64_t x117 = INT64_MIN;
int8_t x128 = 8;
int64_t x131 = -1LL;
int32_t x138 = -240;
uint8_t x140 = 0U;
static volatile uint64_t t30 = 832094LLU;
volatile int64_t t31 = -137309956LL;
static int8_t x148 = -1;
int32_t x150 = 330286;
int16_t x151 = -1;
int8_t x157 = -1;
volatile int32_t x163 = INT32_MIN;
uint64_t x170 = 3LLU;
int32_t x173 = INT32_MIN;
int32_t x181 = -1;
static int8_t x195 = INT8_MIN;
int8_t x201 = INT8_MIN;
static int64_t x210 = INT64_MAX;
uint32_t x214 = UINT32_MAX;
uint8_t x218 = UINT8_MAX;
int16_t x221 = -1;
volatile int64_t t51 = -9866781237090LL;
volatile uint16_t x237 = UINT16_MAX;
uint64_t t54 = 851LLU;
volatile uint64_t x250 = UINT64_MAX;
static int32_t x254 = 860969;
uint16_t x262 = UINT16_MAX;
int64_t t59 = -70142190LL;
uint8_t x273 = UINT8_MAX;
int64_t x274 = -73420042317LL;
uint8_t x278 = 1U;
int32_t t61 = -1;
uint8_t x281 = 1U;
int16_t x283 = -1;
int64_t t62 = INT64_MAX;
static volatile int16_t x285 = -2;
volatile uint32_t t63 = 974U;
volatile int64_t x290 = -1LL;
volatile int32_t t67 = INT32_MIN;
static int8_t x313 = -27;
uint64_t x314 = UINT64_MAX;
volatile int8_t x318 = -1;
int8_t x319 = 51;
volatile int64_t t71 = 1135013762LL;
uint64_t x336 = 186889066086868286LLU;
int64_t x342 = INT64_MAX;
volatile int32_t x344 = -1;
uint32_t x352 = 2078U;
int16_t x354 = -1447;
volatile uint64_t x365 = 199267026965515LLU;
volatile uint64_t t78 = 5LLU;
int64_t x372 = -34LL;
int16_t x374 = INT16_MIN;
static uint16_t x375 = 2U;
int64_t t80 = -14542595184552905LL;
volatile int16_t x377 = INT16_MAX;
int8_t x380 = INT8_MIN;
uint8_t x384 = 3U;
static volatile uint64_t t83 = 265302LLU;
static int32_t x392 = -1;
int8_t x393 = INT8_MAX;
int32_t x402 = INT32_MIN;
int16_t x408 = INT16_MIN;
int8_t x409 = -5;
uint8_t x417 = UINT8_MAX;
int16_t x425 = INT16_MIN;
static int8_t x429 = INT8_MIN;
int8_t x437 = -1;
uint16_t x438 = UINT16_MAX;
volatile uint32_t x445 = 7822U;
volatile int8_t x447 = INT8_MAX;
volatile uint8_t x453 = 3U;
static int64_t x454 = -1LL;


void f0(void) {
	uint64_t x2 = 26507LLU;
	int8_t x4 = -1;
	uint64_t t0 = 39LLU;

	t0 = (x1^(x2&(x3+x4)));

	if (t0 != 137LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1008;
	int32_t x8 = -82260232;

	t1 = (x5^(x6&(x7+x8)));

	if (t1 != 956U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint8_t x10 = UINT8_MAX;
	static int32_t x11 = -1;
	volatile uint16_t x12 = 212U;
	int32_t t2 = 269;

	t2 = (x9^(x10&(x11+x12)));

	if (t2 != 2147483436) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 3830051469LLU;

	t3 = (x13^(x14&(x15+x16)));

	if (t3 != 9223372036854775846LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 107U;
	uint8_t x19 = 28U;
	static int64_t x20 = -1LL;
	int64_t t4 = -797965219789267090LL;

	t4 = (x17^(x18&(x19+x20)));

	if (t4 != 750LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	uint16_t x26 = 13U;
	int8_t x27 = INT8_MIN;
	volatile int64_t x28 = INT64_MAX;
	volatile int64_t t5 = -4482LL;

	t5 = (x25^(x26&(x27+x28)));

	if (t5 != -115LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x31 = -3;
	int16_t x32 = -1;
	volatile int64_t t6 = 3179321LL;

	t6 = (x29^(x30&(x31+x32)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 75026903017LLU;

	t7 = (x37^(x38&(x39+x40)));

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	static int32_t x43 = INT32_MAX;
	int32_t t8 = -1396;

	t8 = (x41^(x42&(x43+x44)));

	if (t8 != 65280) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 0U;
	int8_t x46 = 17;
	static volatile int32_t t9 = 44398;

	t9 = (x45^(x46&(x47+x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MAX;
	volatile int32_t x50 = -1;

	t10 = (x49^(x50&(x51+x52)));

	if (t10 != 2522686LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = 550554911LL;
	volatile int16_t x55 = 7;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = 431565333491LL;

	t11 = (x53^(x54&(x55+x56)));

	if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 435;

	t12 = (x57^(x58&(x59+x60)));

	if (t12 != 435LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = INT16_MIN;
	int16_t x63 = -333;
	uint16_t x64 = 944U;
	volatile int32_t t13 = 33046069;

	t13 = (x61^(x62&(x63+x64)));

	if (t13 != -32701) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = -1LL;
	uint64_t x67 = 44840909921760LLU;
	volatile int16_t x68 = INT16_MIN;

	t14 = (x65^(x66&(x67+x68)));

	if (t14 != 18446699232799662623LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -6;
	int16_t x71 = -978;
	uint64_t t15 = 982383LLU;

	t15 = (x69^(x70&(x71+x72)));

	if (t15 != 18446744073707470113LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	static int8_t x74 = -1;
	int64_t x76 = 234269337629329LL;

	t16 = (x73^(x74&(x75+x76)));

	if (t16 != 234269337629551LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x77 = -1LL;
	volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = 7;
	static volatile uint64_t t17 = 22031977498281LLU;

	t17 = (x77^(x78&(x79+x80)));

	if (t17 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = INT8_MAX;
	static int32_t x83 = INT32_MIN;
	static uint32_t x84 = 5629184U;
	int64_t t18 = INT64_MAX;

	t18 = (x81^(x82&(x83+x84)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = 19U;
	volatile uint32_t x86 = 1607U;
	int16_t x87 = -119;
	int16_t x88 = INT16_MIN;
	uint32_t t19 = 7U;

	t19 = (x85^(x86&(x87+x88)));

	if (t19 != 1554U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	static uint64_t x94 = UINT64_MAX;
	uint64_t t20 = 676692LLU;

	t20 = (x93^(x94&(x95+x96)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x97 = UINT16_MAX;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MIN;
	volatile uint32_t x100 = 1740U;
	volatile int64_t t21 = 553499859369543693LL;

	t21 = (x97^(x98&(x99+x100)));

	if (t21 != 63795LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;

	t22 = (x101^(x102&(x103+x104)));

	if (t22 != 14110548U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x110 = 5036;
	static volatile int64_t x111 = -1LL;
	static int32_t x112 = INT32_MAX;
	static volatile int64_t t23 = -8070LL;

	t23 = (x109^(x110&(x111+x112)));

	if (t23 != -9223372036854770772LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 344268010;
	static volatile int64_t x114 = INT64_MIN;
	int8_t x115 = 11;
	static int32_t x116 = -27894;
	static int64_t t24 = -2170167636331910179LL;

	t24 = (x113^(x114&(x115+x116)));

	if (t24 != -9223372036510507798LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x118 = 185U;
	int8_t x119 = 15;
	int32_t x120 = INT32_MIN;
	volatile int64_t t25 = -327172LL;

	t25 = (x117^(x118&(x119+x120)));

	if (t25 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t26 = 31;

	t26 = (x121^(x122&(x123+x124)));

	if (t26 != 2147451135) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	static uint64_t x126 = 59592042LLU;
	int16_t x127 = INT16_MAX;
	static volatile uint64_t t27 = 8547313953752735027LLU;

	t27 = (x125^(x126&(x127+x128)));

	if (t27 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -426;
	volatile int16_t x130 = -5;
	int8_t x132 = -1;
	volatile int64_t t28 = 80LL;

	t28 = (x129^(x130&(x131+x132)));

	if (t28 != 428LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = -13732266;
	int32_t x134 = INT32_MAX;
	static int8_t x135 = -5;
	int32_t x136 = -60;
	volatile int32_t t29 = 98;

	t29 = (x133^(x134&(x135+x136)));

	if (t29 != -2133751319) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x139 = 46156073LLU;

	t30 = (x137^(x138&(x139+x140)));

	if (t30 != 18446744073663395456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int16_t x142 = INT16_MAX;
	int64_t x143 = 1440913484LL;
	volatile int64_t x144 = -59LL;

	t31 = (x141^(x142&(x143+x144)));

	if (t31 != 4294961134LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 0U;
	int16_t x146 = 3657;
	int16_t x147 = 3;
	volatile int32_t t32 = 7273;

	t32 = (x145^(x146&(x147+x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x152 = 120U;
	volatile int32_t t33 = 65;

	t33 = (x149^(x150&(x151+x152)));

	if (t33 != 89) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 3U;
	uint32_t x154 = 101999U;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MIN;
	uint32_t t34 = 225063424U;

	t34 = (x153^(x154&(x155+x156)));

	if (t34 != 101996U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = 2835LLU;
	uint32_t x159 = 2U;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t35 = 77553384365513LLU;

	t35 = (x157^(x158&(x159+x160)));

	if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = -28;
	volatile int8_t x164 = 1;
	uint64_t t36 = 5048882288892602488LLU;

	t36 = (x161^(x162&(x163+x164)));

	if (t36 != 2147483647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 865U;
	static int16_t x166 = -7;
	static volatile uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 97U;
	uint32_t t37 = 4627502U;

	t37 = (x165^(x166&(x167+x168)));

	if (t37 != 769U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x169 = 0U;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -10;
	uint64_t t38 = 357322LLU;

	t38 = (x169^(x170&(x171+x172)));

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = INT64_MAX;
	int64_t x175 = -1LL;
	int64_t x176 = -39712281LL;
	volatile int64_t t39 = -5325449573593676LL;

	t39 = (x173^(x174&(x175+x176)));

	if (t39 != -9223372034747004442LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x182 = 1;
	uint8_t x183 = 116U;
	int32_t x184 = INT32_MIN;
	volatile int32_t t40 = 45;

	t40 = (x181^(x182&(x183+x184)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = 3U;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -1;
	uint32_t t41 = 71331U;

	t41 = (x185^(x186&(x187+x188)));

	if (t41 != 4294934524U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	volatile int8_t x192 = 15;
	int32_t t42 = -1;

	t42 = (x189^(x190&(x191+x192)));

	if (t42 != -65650) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 851646812168LLU;
	volatile int16_t x194 = -1;
	static int16_t x196 = -1;
	uint64_t t43 = 27974378397LLU;

	t43 = (x193^(x194&(x195+x196)));

	if (t43 != 18446743222062739319LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	static volatile int64_t t44 = 32455195LL;

	t44 = (x201^(x202&(x203+x204)));

	if (t44 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = 9U;
	int64_t x206 = -12953994164116011LL;
	int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile int64_t t45 = -14743LL;

	t45 = (x205^(x206&(x207+x208)));

	if (t45 != -12953994164148855LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int64_t t46 = -17400LL;

	t46 = (x209^(x210&(x211+x212)));

	if (t46 != -65282LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	int16_t x215 = 16324;
	int16_t x216 = INT16_MIN;
	volatile uint32_t t47 = 5U;

	t47 = (x213^(x214&(x215+x216)));

	if (t47 != 2147467204U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x217 = 852829U;
	volatile uint8_t x219 = 5U;
	volatile int8_t x220 = 0;
	uint32_t t48 = 17U;

	t48 = (x217^(x218&(x219+x220)));

	if (t48 != 852824U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = -24;
	static uint64_t x224 = 37242660LLU;
	volatile uint64_t t49 = 6LLU;

	t49 = (x221^(x222&(x223+x224)));

	if (t49 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	static volatile int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t50 = 1;

	t50 = (x225^(x226&(x227+x228)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -1;
	static int64_t x230 = 1LL;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = UINT8_MAX;

	t51 = (x229^(x230&(x231+x232)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 6904U;
	int16_t x234 = INT16_MAX;
	volatile int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t52 = 31;

	t52 = (x233^(x234&(x235+x236)));

	if (t52 != 6791) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x238 = 1;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t53 = 3419;

	t53 = (x237^(x238&(x239+x240)));

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 3132875508506041LLU;
	uint8_t x246 = 19U;
	uint32_t x247 = 4057952U;
	int16_t x248 = INT16_MIN;

	t54 = (x245^(x246&(x247+x248)));

	if (t54 != 3132875508506041LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile uint16_t x252 = 4U;
	uint64_t t55 = 41583571017LLU;

	t55 = (x249^(x250&(x251+x252)));

	if (t55 != 2147483388LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -101988;
	uint64_t x255 = 5182112168900LLU;
	volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t56 = 1057948504LLU;

	t56 = (x253^(x254&(x255+x256)));

	if (t56 != 18446744073709179548LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x257 = 12U;
	static int64_t x258 = INT64_MIN;
	int32_t x259 = -81;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t57 = 29745161LL;

	t57 = (x257^(x258&(x259+x260)));

	if (t57 != 12LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 16U;
	static volatile int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	volatile uint32_t t58 = 0U;

	t58 = (x261^(x262&(x263+x264)));

	if (t58 != 32623U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	volatile int16_t x272 = INT16_MIN;

	t59 = (x269^(x270&(x271+x272)));

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	static volatile int64_t t60 = 29LL;

	t60 = (x273^(x274&(x275+x276)));

	if (t60 != 9223371961287249740LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = 25689U;
	int16_t x279 = 3;
	int16_t x280 = INT16_MAX;

	t61 = (x277^(x278&(x279+x280)));

	if (t61 != 25689) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x282 = -1;
	static int64_t x284 = INT64_MAX;

	t62 = (x281^(x282&(x283+x284)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 0U;
	int16_t x288 = 15348;

	t63 = (x285^(x286&(x287+x288)));

	if (t63 != 4294952062U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x289 = 2U;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = 1133601372697868130LL;
	uint64_t t64 = 377627471940334456LLU;

	t64 = (x289^(x290&(x291+x292)));

	if (t64 != 1133601372697868131LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x293 = INT32_MAX;
	int8_t x294 = 1;
	int32_t x295 = INT32_MIN;
	static int16_t x296 = 15;
	volatile int32_t t65 = 78;

	t65 = (x293^(x294&(x295+x296)));

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 17732329517533LLU;
	volatile int8_t x307 = -1;
	static volatile uint16_t x308 = UINT16_MAX;
	uint64_t t66 = 3181448359LLU;

	t66 = (x305^(x306&(x307+x308)));

	if (t66 != 18446744073709506083LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x309 = INT32_MIN;
	int16_t x310 = 1;
	volatile int16_t x311 = INT16_MIN;
	static uint16_t x312 = 62U;

	t67 = (x309^(x310&(x311+x312)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x315 = 1;
	static int8_t x316 = -10;
	static volatile uint64_t t68 = 0LLU;

	t68 = (x313^(x314&(x315+x316)));

	if (t68 != 18LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = INT32_MIN;
	uint32_t x320 = 11U;
	static uint32_t t69 = 278U;

	t69 = (x317^(x318&(x319+x320)));

	if (t69 != 2147483710U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 759784LL;
	static int16_t x323 = -1;
	int64_t x324 = -1LL;
	int64_t t70 = -179196163895034LL;

	t70 = (x321^(x322&(x323+x324)));

	if (t70 != -2146723864LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -14LL;
	int64_t x332 = -5LL;

	t71 = (x329^(x330&(x331+x332)));

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x333 = 0;
	int64_t x334 = -1LL;
	volatile uint64_t x335 = 275397576764409LLU;
	volatile uint64_t t72 = 16959483LLU;

	t72 = (x333^(x334&(x335+x336)));

	if (t72 != 187164463663632695LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x337 = 10255U;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile int64_t t73 = -9686303LL;

	t73 = (x337^(x338&(x339+x340)));

	if (t73 != 9223372036854753295LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -1;
	static volatile int8_t x343 = INT8_MIN;
	volatile int64_t t74 = -902509001605898LL;

	t74 = (x341^(x342&(x343+x344)));

	if (t74 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x349 = 1856867006843LLU;
	static uint8_t x350 = 46U;
	uint16_t x351 = 6U;
	static volatile uint64_t t75 = 121177990894LLU;

	t75 = (x349^(x350&(x351+x352)));

	if (t75 != 1856867006815LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MAX;
	static int16_t x355 = INT16_MIN;
	int64_t x356 = -3LL;
	static volatile int64_t t76 = -4557381724991960LL;

	t76 = (x353^(x354&(x355+x356)));

	if (t76 != -64090LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int32_t x358 = INT32_MIN;
	static uint64_t x359 = UINT64_MAX;
	static uint8_t x360 = 9U;
	static volatile uint64_t t77 = 105108043998LLU;

	t77 = (x357^(x358&(x359+x360)));

	if (t77 != 65535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x366 = -5;
	int8_t x367 = 3;
	static int8_t x368 = INT8_MIN;

	t78 = (x365^(x366&(x367+x368)));

	if (t78 != 18446544806682585992LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = -1754077231829716LL;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 28U;
	static volatile int64_t t79 = -3831575LL;

	t79 = (x369^(x370&(x371+x372)));

	if (t79 != 1754077231829676LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x373 = 3U;
	int64_t x376 = -1LL;

	t80 = (x373^(x374&(x375+x376)));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x378 = 5;
	static int16_t x379 = 2922;
	volatile int32_t t81 = -3150403;

	t81 = (x377^(x378&(x379+x380)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint32_t x383 = 555U;
	uint32_t t82 = 158704U;

	t82 = (x381^(x382&(x383+x384)));

	if (t82 != 32255U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x385 = 17436017155773762LLU;
	uint8_t x386 = 6U;
	int8_t x387 = 6;
	static volatile uint64_t x388 = 294683458176445LLU;

	t83 = (x385^(x386&(x387+x388)));

	if (t83 != 17436017155773760LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	static volatile int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	volatile int64_t t84 = 102201634792114LL;

	t84 = (x389^(x390&(x391+x392)));

	if (t84 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t85 = 1789594;

	t85 = (x393^(x394&(x395+x396)));

	if (t85 != -2147483521) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x397 = 77LLU;
	int32_t x398 = INT32_MIN;
	volatile int32_t x399 = 292;
	int16_t x400 = -1;
	volatile uint64_t t86 = 7370638LLU;

	t86 = (x397^(x398&(x399+x400)));

	if (t86 != 77LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x401 = 25062U;
	static int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MAX;
	int32_t t87 = -5790100;

	t87 = (x401^(x402&(x403+x404)));

	if (t87 != 25062) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = -2;
	static int64_t x407 = 2013859168150723179LL;
	int64_t t88 = 5767LL;

	t88 = (x405^(x406&(x407+x408)));

	if (t88 != -2013859168150690326LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x410 = 1U;
	volatile int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MAX;
	int64_t t89 = -63115584016LL;

	t89 = (x409^(x410&(x411+x412)));

	if (t89 != -6LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = INT16_MIN;
	static volatile int64_t x414 = 979800474LL;
	int64_t x415 = 1374LL;
	static uint16_t x416 = 241U;
	volatile int64_t t90 = -16577374248277LL;

	t90 = (x413^(x414&(x415+x416)));

	if (t90 != -32758LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x418 = 2;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = 530271249;
	int32_t t91 = 58761;

	t91 = (x417^(x418&(x419+x420)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x421 = INT8_MIN;
	static volatile uint32_t x422 = 3883U;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = 526077961U;
	static volatile uint32_t t92 = 979396877U;

	t92 = (x421^(x422&(x423+x424)));

	if (t92 != 4294967176U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x426 = INT32_MIN;
	int32_t x427 = -1;
	uint16_t x428 = 15177U;
	static volatile int32_t t93 = -3246;

	t93 = (x425^(x426&(x427+x428)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x430 = 6;
	volatile int64_t x431 = -24LL;
	uint32_t x432 = 43305503U;
	int64_t t94 = -52071614217122LL;

	t94 = (x429^(x430&(x431+x432)));

	if (t94 != -122LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	static volatile int16_t x435 = INT16_MIN;
	volatile int32_t x436 = -1;
	int32_t t95 = -55489574;

	t95 = (x433^(x434&(x435+x436)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x439 = 1263683591458465LLU;
	static int8_t x440 = -13;
	uint64_t t96 = 3912516312311844410LLU;

	t96 = (x437^(x438&(x439+x440)));

	if (t96 != 18446744073709498731LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x446 = 15688;
	int32_t x448 = -1;
	uint32_t t97 = 2032154775U;

	t97 = (x445^(x446&(x447+x448)));

	if (t97 != 7878U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -14;
	static uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 53U;
	static int32_t t98 = 108;

	t98 = (x449^(x450&(x451+x452)));

	if (t98 != -57) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MAX;
	volatile int64_t t99 = -1992LL;

	t99 = (x453^(x454&(x455+x456)));

	if (t99 != 2147483645LL) { NG(); } else { ; }
	
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
