#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -37650812;
volatile int64_t x16 = INT64_MIN;
int8_t x19 = -1;
uint32_t x20 = UINT32_MAX;
static volatile uint32_t t4 = 69643097U;
int32_t x21 = 1407;
int32_t x26 = -7610433;
uint64_t x27 = 26959201047LLU;
int8_t x29 = 1;
static volatile int32_t x30 = -8155;
int64_t x33 = INT64_MIN;
volatile int8_t x42 = 30;
int32_t x55 = -1;
uint32_t x56 = 758U;
volatile int8_t x65 = -1;
uint16_t x66 = 1376U;
int16_t x67 = 197;
int64_t x71 = -1LL;
int64_t t16 = 85834LL;
int64_t x75 = -1LL;
int8_t x77 = -1;
int16_t x82 = -5691;
static int16_t x84 = -2767;
volatile int64_t t19 = 1045451LL;
int32_t x86 = INT32_MIN;
uint16_t x87 = 70U;
int16_t x92 = -1;
volatile int64_t t22 = -41510226LL;
int64_t x97 = INT64_MAX;
int32_t x99 = -23;
int32_t x104 = -8293443;
volatile int32_t x105 = -1;
int8_t x132 = -1;
int32_t x149 = -1;
uint64_t x161 = 10LLU;
uint64_t x162 = 223148467LLU;
int16_t x170 = -1;
int32_t t40 = -301;
int8_t x192 = -1;
int8_t x195 = -1;
int64_t x196 = INT64_MAX;
int8_t x200 = -1;
static int16_t x204 = 3547;
static volatile int32_t x212 = -1;
uint64_t t47 = 56548150171467449LLU;
uint16_t x216 = 145U;
int64_t t48 = 5115926167304LL;
uint64_t x222 = UINT64_MAX;
int16_t x234 = INT16_MIN;
int16_t x235 = INT16_MIN;
int64_t t53 = 209648939499LL;
int16_t x248 = -1;
volatile int32_t t55 = -27572;
int64_t t57 = 91128638252730399LL;
int32_t x264 = INT32_MIN;
uint64_t x265 = 2914614273926478LLU;
int64_t t60 = 6074812877147LL;
int8_t x273 = INT8_MIN;
uint32_t x278 = UINT32_MAX;
int16_t x280 = INT16_MIN;
uint16_t x285 = 1308U;
int8_t x286 = -1;
int8_t x288 = INT8_MIN;
int8_t x290 = INT8_MIN;
int16_t x295 = INT16_MAX;
int32_t t66 = -125;
int8_t x310 = INT8_MAX;
uint8_t x314 = 3U;
uint32_t x316 = 1871U;
uint8_t x318 = 0U;
uint64_t x322 = UINT64_MAX;
int32_t x331 = INT32_MIN;
int32_t x333 = -1;
volatile int32_t t73 = -8435;
int16_t x342 = INT16_MIN;
volatile uint32_t x347 = 1745529U;
volatile uint64_t x348 = 7453596368LLU;
volatile int8_t x355 = INT8_MIN;
uint16_t x360 = 7657U;
static volatile int64_t x367 = INT64_MAX;
uint8_t x368 = UINT8_MAX;
volatile int8_t x373 = INT8_MAX;
int16_t x375 = INT16_MIN;
volatile uint32_t t81 = 178603U;
int32_t x383 = 222;
int8_t x385 = INT8_MIN;
volatile int32_t t84 = 2173;
uint64_t x389 = UINT64_MAX;
int64_t x397 = 946139804373LL;
uint64_t t87 = 500261216LLU;
int64_t x412 = INT64_MIN;
static int64_t x414 = INT64_MAX;
int64_t t90 = 73LL;
int16_t x417 = INT16_MIN;
static volatile int64_t t93 = -11414858648LL;
static volatile int32_t x432 = 926;
static int64_t t94 = 988146493463443990LL;
int16_t x435 = -1;
volatile uint64_t x436 = 1346327313693288LLU;
static volatile uint32_t t96 = 126632981U;
static int32_t x442 = -1;
static uint64_t x445 = UINT64_MAX;
int16_t x446 = 1;
int64_t x453 = 4521LL;
volatile uint32_t x454 = UINT32_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	volatile int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -2164;

	t0 = (x1-(x2-(x3<x4)));

	if (t0 != -32640) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int64_t x8 = 0LL;

	t1 = (x5-(x6-(x7<x8)));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1514;
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	uint64_t t2 = 1467143LLU;

	t2 = (x9-(x10-(x11<x12)));

	if (t2 != 1516LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -222;
	volatile int8_t x14 = -1;
	int8_t x15 = -1;
	int32_t t3 = 2;

	t3 = (x13-(x14-(x15<x16)));

	if (t3 != -221) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	static uint32_t x18 = 458722099U;

	t4 = (x17-(x18-(x19<x20)));

	if (t4 != 3836245196U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x22 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	volatile int64_t x24 = INT64_MIN;
	uint64_t t5 = 53258811023590LLU;

	t5 = (x21-(x22-(x23<x24)));

	if (t5 != 1408LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 47;
	volatile int8_t x28 = 2;
	int32_t t6 = -45031847;

	t6 = (x25-(x26-(x27<x28)));

	if (t6 != 7610480) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = 18;
	static int16_t x32 = 6435;
	volatile int32_t t7 = -3762;

	t7 = (x29-(x30-(x31<x32)));

	if (t7 != 8157) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint64_t x35 = 3531778399LLU;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t8 = -490277LL;

	t8 = (x33-(x34-(x35<x36)));

	if (t8 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 25050U;
	static volatile uint32_t x39 = 4983242U;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -13677215;

	t9 = (x37-(x38-(x39<x40)));

	if (t9 != 40486) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint64_t x43 = 20LLU;
	static uint8_t x44 = UINT8_MAX;
	static int64_t t10 = -249211178308LL;

	t10 = (x41-(x42-(x43<x44)));

	if (t10 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int64_t x46 = -3866631293LL;
	volatile int16_t x47 = -1;
	volatile int64_t x48 = -1LL;
	volatile int64_t t11 = -21570941770940143LL;

	t11 = (x45-(x46-(x47<x48)));

	if (t11 != 3866598525LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MAX;
	uint64_t x54 = 96196373LLU;
	volatile uint64_t t12 = 30449762657LLU;

	t12 = (x53-(x54-(x55<x56)));

	if (t12 != 2051287274LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	static int8_t x58 = -1;
	int16_t x59 = -1;
	int32_t x60 = 2;
	static int32_t t13 = -1;

	t13 = (x57-(x58-(x59<x60)));

	if (t13 != 257) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	int8_t x63 = -15;
	int32_t x64 = INT32_MAX;
	int64_t t14 = -2085921602510476LL;

	t14 = (x61-(x62-(x63<x64)));

	if (t14 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x68 = 3306441059769LLU;
	static volatile int32_t t15 = 511;

	t15 = (x65-(x66-(x67<x68)));

	if (t15 != -1376) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1014419547;
	int64_t x70 = -1LL;
	volatile int64_t x72 = -1LL;

	t16 = (x69-(x70-(x71<x72)));

	if (t16 != -1014419546LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = -127286377781LL;
	uint16_t x76 = 807U;
	int64_t t17 = -50785624291977LL;

	t17 = (x73-(x74-(x75<x76)));

	if (t17 != -9223371909568398026LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = 16276;
	int8_t x79 = INT8_MIN;
	static volatile int64_t x80 = INT64_MIN;
	int32_t t18 = -12;

	t18 = (x77-(x78-(x79<x80)));

	if (t18 != -16277) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = -1LL;
	int64_t x83 = INT64_MIN;

	t19 = (x81-(x82-(x83<x84)));

	if (t19 != 5691LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x85 = -20635669;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 1865;

	t20 = (x85-(x86-(x87<x88)));

	if (t20 != 2126847979) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 26383U;
	uint16_t x91 = UINT16_MAX;
	volatile uint64_t t21 = 3071269798LLU;

	t21 = (x89-(x90-(x91<x92)));

	if (t21 != 18446744073709525232LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x93 = -138465980LL;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = -1;
	volatile uint64_t x96 = 3404821910839LLU;

	t22 = (x93-(x94-(x95<x96)));

	if (t22 != 2009017668LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x98 = 2392U;
	uint8_t x100 = UINT8_MAX;
	int64_t t23 = -627122005473096403LL;

	t23 = (x97-(x98-(x99<x100)));

	if (t23 != 9223372036854773416LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 1;
	volatile uint16_t x102 = 24U;
	int32_t x103 = INT32_MIN;
	volatile int32_t t24 = -224;

	t24 = (x101-(x102-(x103<x104)));

	if (t24 != -22) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = 2272047U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MAX;
	static volatile uint32_t t25 = 203451U;

	t25 = (x105-(x106-(x107<x108)));

	if (t25 != 4292695249U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	volatile uint8_t x114 = UINT8_MAX;
	int64_t x115 = 0LL;
	uint16_t x116 = 13341U;
	volatile int32_t t26 = -551;

	t26 = (x113-(x114-(x115<x116)));

	if (t26 != -33022) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 14765U;
	uint32_t x118 = 42750830U;
	static int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;
	volatile uint32_t t27 = 166111403U;

	t27 = (x117-(x118-(x119<x120)));

	if (t27 != 4252231231U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MAX;
	int64_t x122 = INT64_MAX;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 6U;
	int64_t t28 = 626120LL;

	t28 = (x121-(x122-(x123<x124)));

	if (t28 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 0;
	static int32_t x126 = -40772053;
	int32_t x127 = -48052198;
	static uint32_t x128 = UINT32_MAX;
	int32_t t29 = 7402187;

	t29 = (x125-(x126-(x127<x128)));

	if (t29 != 40772054) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 49U;
	volatile uint16_t x130 = 188U;
	int16_t x131 = -2968;
	volatile int32_t t30 = -68;

	t30 = (x129-(x130-(x131<x132)));

	if (t30 != -138) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = -1;
	int64_t x134 = -1LL;
	uint8_t x135 = 25U;
	volatile int8_t x136 = INT8_MAX;
	volatile int64_t t31 = -2293141646307245LL;

	t31 = (x133-(x134-(x135<x136)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MAX;
	static int8_t x138 = -1;
	uint8_t x139 = UINT8_MAX;
	static int8_t x140 = 0;
	volatile int32_t t32 = 123;

	t32 = (x137-(x138-(x139<x140)));

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 89227863U;
	static uint8_t x142 = 0U;
	volatile int32_t x143 = -113353;
	volatile uint16_t x144 = 1769U;
	static uint32_t t33 = 11755U;

	t33 = (x141-(x142-(x143<x144)));

	if (t33 != 89227864U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = -1141;
	int16_t x147 = -15;
	int16_t x148 = 1;
	volatile int32_t t34 = 108580;

	t34 = (x145-(x146-(x147<x148)));

	if (t34 != -2147482506) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x150 = -1;
	int32_t x151 = 98;
	uint32_t x152 = 302585U;
	int32_t t35 = 1858001;

	t35 = (x149-(x150-(x151<x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x158 = 1508563258309006LLU;
	volatile int32_t x159 = -1;
	uint16_t x160 = 1539U;
	volatile uint64_t t36 = 5949630336663LLU;

	t36 = (x157-(x158-(x159<x160)));

	if (t36 != 18445235510451242610LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x163 = 294U;
	int16_t x164 = INT16_MAX;
	volatile uint64_t t37 = 12LLU;

	t37 = (x161-(x162-(x163<x164)));

	if (t37 != 18446744073486403160LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = INT64_MIN;
	int16_t x171 = -1;
	volatile int64_t x172 = 8994159558918723LL;
	static volatile int64_t t38 = 7209299LL;

	t38 = (x169-(x170-(x171<x172)));

	if (t38 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x174 = UINT8_MAX;
	uint16_t x175 = 1U;
	volatile int16_t x176 = INT16_MAX;
	int32_t t39 = -20;

	t39 = (x173-(x174-(x175<x176)));

	if (t39 != 32513) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = 115;
	int16_t x178 = INT16_MAX;
	volatile int8_t x179 = -57;
	volatile int32_t x180 = INT32_MIN;

	t40 = (x177-(x178-(x179<x180)));

	if (t40 != -32652) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -4407929898320113LL;
	uint32_t x186 = 3456U;
	static volatile uint32_t x187 = 1959U;
	int32_t x188 = -1;
	int64_t t41 = -78534873LL;

	t41 = (x185-(x186-(x187<x188)));

	if (t41 != -4407929898323568LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = -1;
	int16_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	volatile int32_t t42 = 10606224;

	t42 = (x189-(x190-(x191<x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 6485U;
	uint16_t x194 = 0U;
	volatile uint32_t t43 = 178856U;

	t43 = (x193-(x194-(x195<x196)));

	if (t43 != 6486U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MAX;
	volatile uint16_t x198 = 6U;
	uint8_t x199 = 20U;
	static int32_t t44 = 81692077;

	t44 = (x197-(x198-(x199<x200)));

	if (t44 != 32761) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 31627148;
	uint64_t x202 = 9LLU;
	uint16_t x203 = 321U;
	uint64_t t45 = 9244114332LLU;

	t45 = (x201-(x202-(x203<x204)));

	if (t45 != 31627140LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	volatile uint16_t x208 = UINT16_MAX;
	static int32_t t46 = 7;

	t46 = (x205-(x206-(x207<x208)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 10283652442412364LLU;
	static volatile uint16_t x210 = 80U;
	static uint32_t x211 = 1278U;

	t47 = (x209-(x210-(x211<x212)));

	if (t47 != 10283652442412285LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = INT8_MIN;
	int64_t x214 = 1LL;
	static uint32_t x215 = 4937574U;

	t48 = (x213-(x214-(x215<x216)));

	if (t48 != -129LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = -1LL;
	uint16_t x223 = 4U;
	int8_t x224 = -1;
	volatile uint64_t t49 = 4132788151906114LLU;

	t49 = (x221-(x222-(x223<x224)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x225 = -64494977683LL;
	int8_t x226 = -1;
	static int64_t x227 = -49634117214476408LL;
	volatile uint32_t x228 = 0U;
	int64_t t50 = -3795863581442LL;

	t50 = (x225-(x226-(x227<x228)));

	if (t50 != -64494977681LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = 47;
	uint32_t x231 = 896U;
	int64_t x232 = -1392651534LL;
	static int32_t t51 = -823;

	t51 = (x229-(x230-(x231<x232)));

	if (t51 != 32720) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x233 = INT32_MIN;
	uint16_t x236 = UINT16_MAX;
	int32_t t52 = -6415105;

	t52 = (x233-(x234-(x235<x236)));

	if (t52 != -2147450879) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = 0LL;
	int16_t x242 = INT16_MAX;
	volatile uint8_t x243 = 23U;
	static uint16_t x244 = 0U;

	t53 = (x241-(x242-(x243<x244)));

	if (t53 != -32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = INT8_MIN;
	volatile uint64_t x247 = 14014LLU;
	static int32_t t54 = -24346;

	t54 = (x245-(x246-(x247<x248)));

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1;
	static int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MAX;
	static int64_t x252 = 368614LL;

	t55 = (x249-(x250-(x251<x252)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = 104;
	int64_t x254 = -1LL;
	uint8_t x255 = 28U;
	volatile uint8_t x256 = 63U;
	volatile int64_t t56 = -3391297755524LL;

	t56 = (x253-(x254-(x255<x256)));

	if (t56 != 106LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = -7LL;
	static volatile int16_t x258 = INT16_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int32_t x260 = INT32_MIN;

	t57 = (x257-(x258-(x259<x260)));

	if (t57 != 32761LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 8123976200301LLU;
	int64_t x262 = 926037264777419185LL;
	static uint8_t x263 = UINT8_MAX;
	uint64_t t58 = 421899397643737LLU;

	t58 = (x261-(x262-(x263<x264)));

	if (t58 != 17520714932908332732LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x266 = UINT32_MAX;
	static int64_t x267 = -1LL;
	volatile int32_t x268 = 59;
	uint64_t t59 = 230674LLU;

	t59 = (x265-(x266-(x267<x268)));

	if (t59 != 2914609978959184LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	volatile int64_t x270 = -45748611056LL;
	int8_t x271 = -16;
	static int16_t x272 = -1;

	t60 = (x269-(x270-(x271<x272)));

	if (t60 != -9223371991106164751LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = -1860736;
	volatile int64_t x276 = INT64_MIN;
	volatile uint32_t t61 = 66865U;

	t61 = (x273-(x274-(x275<x276)));

	if (t61 != 4294967169U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = -173386030512084484LL;
	int8_t x279 = -1;
	int64_t t62 = -63615684393516LL;

	t62 = (x277-(x278-(x279<x280)));

	if (t62 != -173386034807051779LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x287 = UINT8_MAX;
	volatile int32_t t63 = -39;

	t63 = (x285-(x286-(x287<x288)));

	if (t63 != 1309) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	int16_t x292 = -1;
	volatile int32_t t64 = 5;

	t64 = (x289-(x290-(x291<x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -1;
	uint8_t x294 = 0U;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t65 = -1;

	t65 = (x293-(x294-(x295<x296)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = -14;
	int8_t x302 = 8;
	static int64_t x303 = INT64_MIN;
	volatile int16_t x304 = -74;

	t66 = (x301-(x302-(x303<x304)));

	if (t66 != -21) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = 11U;
	static uint16_t x311 = UINT16_MAX;
	volatile int64_t x312 = -1LL;
	volatile int32_t t67 = -43686229;

	t67 = (x309-(x310-(x311<x312)));

	if (t67 != -116) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x313 = -3;
	int32_t x315 = 66284923;
	volatile int32_t t68 = 443915;

	t68 = (x313-(x314-(x315<x316)));

	if (t68 != -6) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x317 = 6;
	int16_t x319 = 54;
	int8_t x320 = -7;
	static volatile int32_t t69 = 136;

	t69 = (x317-(x318-(x319<x320)));

	if (t69 != 6) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x321 = 473740919832441189LL;
	int64_t x323 = -1LL;
	uint64_t x324 = 572LLU;
	volatile uint64_t t70 = 6271388166725891LLU;

	t70 = (x321-(x322-(x323<x324)));

	if (t70 != 473740919832441190LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = INT16_MIN;
	volatile int16_t x330 = 8;
	uint8_t x332 = 1U;
	int32_t t71 = -727;

	t71 = (x329-(x330-(x331<x332)));

	if (t71 != -32775) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x334 = INT16_MIN;
	uint16_t x335 = 0U;
	int32_t x336 = -268;
	volatile int32_t t72 = -415864933;

	t72 = (x333-(x334-(x335<x336)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MAX;
	int16_t x338 = 71;
	int16_t x339 = INT16_MAX;
	uint16_t x340 = 2U;

	t73 = (x337-(x338-(x339<x340)));

	if (t73 != 32696) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = 182;
	static int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t74 = 11982222;

	t74 = (x341-(x342-(x343<x344)));

	if (t74 != 32951) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int8_t x346 = -2;
	volatile int32_t t75 = -71;

	t75 = (x345-(x346-(x347<x348)));

	if (t75 != 258) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = 0LL;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = UINT32_MAX;
	uint16_t x352 = UINT16_MAX;
	static int64_t t76 = 970919460860009LL;

	t76 = (x349-(x350-(x351<x352)));

	if (t76 != 32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x353 = 101979219344529940LL;
	static int16_t x354 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t77 = 38355427229LL;

	t77 = (x353-(x354-(x355<x356)));

	if (t77 != 101979219344529941LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = -71367286130LL;
	int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MAX;
	int64_t t78 = 2567LL;

	t78 = (x357-(x358-(x359<x360)));

	if (t78 != -71367286002LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 3U;
	static uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	volatile int32_t x364 = 65;
	volatile uint32_t t79 = 2072013770U;

	t79 = (x361-(x362-(x363<x364)));

	if (t79 != 5U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = 7149335235209LLU;
	volatile uint64_t t80 = 954LLU;

	t80 = (x365-(x366-(x367<x368)));

	if (t80 != 18446736924374316406LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x374 = UINT32_MAX;
	uint8_t x376 = 0U;

	t81 = (x373-(x374-(x375<x376)));

	if (t81 != 129U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MAX;
	int64_t x378 = 354LL;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile int64_t t82 = -847346809975LL;

	t82 = (x377-(x378-(x379<x380)));

	if (t82 != -227LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t83 = 2522156;

	t83 = (x381-(x382-(x383<x384)));

	if (t83 != 32895) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x386 = UINT16_MAX;
	static uint8_t x387 = 95U;
	int16_t x388 = -15374;

	t84 = (x385-(x386-(x387<x388)));

	if (t84 != -65663) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x390 = 1;
	static int64_t x391 = 2262847368271167501LL;
	int8_t x392 = INT8_MAX;
	static volatile uint64_t t85 = 1LLU;

	t85 = (x389-(x390-(x391<x392)));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = -1;
	static int64_t x394 = -174326465309680LL;
	volatile uint32_t x395 = 1U;
	uint16_t x396 = 52U;
	volatile int64_t t86 = 3089625795323LL;

	t86 = (x393-(x394-(x395<x396)));

	if (t86 != 174326465309680LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x398 = 147693942406207197LLU;
	int16_t x399 = INT16_MIN;
	int8_t x400 = -35;

	t87 = (x397-(x398-(x399<x400)));

	if (t87 != 18299051077443148793LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -109;
	uint32_t x406 = 49642149U;
	int64_t x407 = -1LL;
	int64_t x408 = INT64_MIN;
	static uint32_t t88 = 407159U;

	t88 = (x405-(x406-(x407<x408)));

	if (t88 != 4245325038U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = INT32_MAX;
	volatile int64_t x411 = INT64_MAX;
	volatile int32_t t89 = -94370814;

	t89 = (x409-(x410-(x411<x412)));

	if (t89 != -2147483392) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x413 = 0U;
	uint8_t x415 = 40U;
	uint32_t x416 = 355U;

	t90 = (x413-(x414-(x415<x416)));

	if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x418 = 224050170322LLU;
	uint64_t x419 = 559865970LLU;
	uint32_t x420 = UINT32_MAX;
	uint64_t t91 = 3698715LLU;

	t91 = (x417-(x418-(x419<x420)));

	if (t91 != 18446743849659348527LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = 534061249249114LL;
	int64_t x423 = 5895431LL;
	static uint8_t x424 = 8U;
	int64_t t92 = 142691382LL;

	t92 = (x421-(x422-(x423<x424)));

	if (t92 != -534061249281882LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -1LL;
	volatile uint16_t x426 = 24U;
	static int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MAX;

	t93 = (x425-(x426-(x427<x428)));

	if (t93 != -24LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x429 = INT32_MIN;
	int64_t x430 = -15896518LL;
	uint32_t x431 = UINT32_MAX;

	t94 = (x429-(x430-(x431<x432)));

	if (t94 != -2131587130LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = -23;
	uint64_t x434 = 42LLU;
	uint64_t t95 = 1LLU;

	t95 = (x433-(x434-(x435<x436)));

	if (t95 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = INT16_MIN;
	static volatile uint32_t x438 = UINT32_MAX;
	uint16_t x439 = 2696U;
	static int64_t x440 = -215190120LL;

	t96 = (x437-(x438-(x439<x440)));

	if (t96 != 4294934529U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	uint32_t x443 = 1287025988U;
	int16_t x444 = INT16_MIN;
	int64_t t97 = -1LL;

	t97 = (x441-(x442-(x443<x444)));

	if (t97 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x447 = 43;
	uint16_t x448 = UINT16_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x445-(x446-(x447<x448)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x455 = 11U;
	volatile uint16_t x456 = UINT16_MAX;
	int64_t t99 = 113221100783232LL;

	t99 = (x453-(x454-(x455<x456)));

	if (t99 != -4294962773LL) { NG(); } else { ; }
	
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
