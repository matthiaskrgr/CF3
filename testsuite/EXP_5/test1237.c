#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int16_t x10 = -152;
int64_t x19 = INT64_MIN;
int64_t x25 = INT64_MIN;
static volatile int32_t x28 = -232;
int64_t x30 = -7LL;
int64_t x32 = -1552047LL;
uint16_t x37 = 9U;
volatile uint16_t x39 = 22U;
static volatile uint64_t x45 = 479315966639542302LLU;
int16_t x47 = INT16_MIN;
volatile int8_t x48 = INT8_MIN;
int32_t t12 = -7026;
int16_t x58 = -4985;
int64_t t16 = 7774631612LL;
static uint16_t x76 = 30715U;
volatile uint32_t x79 = UINT32_MAX;
int8_t x89 = INT8_MAX;
uint16_t x92 = UINT16_MAX;
volatile int32_t t21 = -5958535;
int64_t x93 = INT64_MIN;
volatile int32_t x100 = 54650965;
int32_t t23 = 0;
int32_t x101 = -5042738;
int64_t x108 = -278LL;
static int32_t x109 = -1;
static volatile int32_t t27 = 201668;
volatile int32_t x117 = INT32_MIN;
static int8_t x118 = -1;
static volatile uint64_t x122 = 4640741931372LLU;
int32_t x124 = -1;
uint32_t x129 = 6576712U;
int16_t x136 = INT16_MIN;
volatile int64_t t32 = 0LL;
uint8_t x137 = 112U;
volatile uint32_t x138 = 559917492U;
static uint8_t x139 = 80U;
int16_t x140 = -1;
static int16_t x143 = -1;
uint32_t x147 = 3U;
uint16_t x162 = 11U;
int32_t t40 = INT32_MAX;
static int16_t x170 = INT16_MAX;
volatile uint8_t x178 = UINT8_MAX;
int64_t x184 = INT64_MAX;
uint8_t x186 = 97U;
volatile uint64_t t45 = UINT64_MAX;
int8_t x192 = -3;
uint8_t x195 = UINT8_MAX;
uint64_t x196 = UINT64_MAX;
static volatile uint16_t x199 = 1369U;
int8_t x209 = 13;
uint16_t x211 = UINT16_MAX;
static volatile int64_t t51 = -16289686969LL;
volatile int64_t x215 = INT64_MAX;
static volatile int16_t x217 = 498;
uint64_t x221 = 102139633973277LLU;
static uint32_t x228 = 3662308U;
int64_t t55 = INT64_MIN;
int8_t x231 = -1;
volatile uint16_t x237 = UINT16_MAX;
int8_t x242 = INT8_MAX;
uint16_t x243 = 32036U;
int16_t x244 = INT16_MIN;
uint64_t x247 = UINT64_MAX;
uint64_t x249 = 173100360LLU;
volatile uint32_t x250 = 662067U;
volatile int8_t x252 = -1;
static int8_t x257 = -1;
uint32_t x272 = 14U;
int32_t x273 = 17;
volatile int8_t x276 = -1;
volatile int32_t t67 = 438037;
static uint64_t x277 = 5178LLU;
uint32_t x286 = 0U;
int64_t x291 = INT64_MIN;
int64_t x295 = INT64_MIN;
static uint16_t x301 = UINT16_MAX;
int8_t x309 = -1;
int64_t x315 = INT64_MIN;
volatile int64_t t79 = -113720970583LL;
volatile uint8_t x327 = 12U;
static volatile int32_t t82 = -1809737;
uint32_t x338 = UINT32_MAX;
uint8_t x339 = UINT8_MAX;
uint64_t x341 = 22039361LLU;
int64_t x342 = INT64_MIN;
volatile uint64_t t84 = 123196735101375LLU;
int16_t x345 = INT16_MIN;
volatile uint16_t x347 = UINT16_MAX;
int8_t x364 = INT8_MIN;
uint64_t t92 = UINT64_MAX;
int16_t x377 = -1;
static volatile int32_t t93 = 54036;
int32_t t94 = 2803;
int32_t x394 = 442;
int16_t x396 = 1;
uint32_t t99 = 1836585U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int8_t x2 = 0;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 251373259;

	t0 = (x1-((x2==x3)%x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -1;
	volatile int64_t x7 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 196277;

	t1 = (x5-((x6==x7)%x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 17U;
	static int8_t x11 = INT8_MAX;
	int32_t x12 = -1;
	int32_t t2 = -53210;

	t2 = (x9-((x10==x11)%x12));

	if (t2 != 17) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	uint64_t x15 = 1LLU;
	volatile uint16_t x16 = 16911U;
	volatile int32_t t3 = 19638129;

	t3 = (x13-((x14==x15)%x16));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -3971;
	int16_t x18 = INT16_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 41577385;

	t4 = (x17-((x18==x19)%x20));

	if (t4 != -3971) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	uint16_t x22 = 223U;
	volatile int64_t x23 = 58349670LL;
	uint32_t x24 = 111467177U;
	volatile int64_t t5 = 174616LL;

	t5 = (x21-((x22==x23)%x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 117U;
	static int64_t t6 = INT64_MIN;

	t6 = (x25-((x26==x27)%x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = -1;
	static int32_t x31 = INT32_MIN;
	int64_t t7 = 115LL;

	t7 = (x29-((x30==x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 1;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = INT64_MAX;
	static uint64_t x36 = 9663485LLU;
	uint64_t t8 = 3968238362LLU;

	t8 = (x33-((x34==x35)%x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = UINT16_MAX;
	static int16_t x40 = -1;
	static volatile int32_t t9 = 502686;

	t9 = (x37-((x38==x39)%x40));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 27486U;
	static uint64_t x42 = 3209033276871131LLU;
	int16_t x43 = INT16_MIN;
	volatile int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -294867719383387944LL;

	t10 = (x41-((x42==x43)%x44));

	if (t10 != 27486LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = 24;
	uint64_t t11 = 15908705848555717LLU;

	t11 = (x45-((x46==x47)%x48));

	if (t11 != 479315966639542302LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = (x49-((x50==x51)%x52));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int8_t x54 = -6;
	int8_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	int64_t t13 = 40718850LL;

	t13 = (x53-((x54==x55)%x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 28360351125LL;
	uint32_t x59 = 8661U;
	uint8_t x60 = UINT8_MAX;
	int64_t t14 = 2LL;

	t14 = (x57-((x58==x59)%x60));

	if (t14 != 28360351125LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MAX;
	static int8_t x64 = 1;
	static volatile int32_t t15 = -1683;

	t15 = (x61-((x62==x63)%x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int32_t x66 = -1;
	int64_t x67 = 175850878629657004LL;
	volatile int64_t x68 = 3282792125443904LL;

	t16 = (x65-((x66==x67)%x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = 2735LL;
	static int16_t x71 = -1;
	int64_t x72 = -484173LL;
	volatile int64_t t17 = 943LL;

	t17 = (x69-((x70==x71)%x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = 8416U;
	int16_t x75 = -1;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73-((x74==x75)%x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	volatile uint64_t x78 = 3866370LLU;
	int64_t x80 = INT64_MIN;
	int64_t t19 = -6305961532023LL;

	t19 = (x77-((x78==x79)%x80));

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 31451LL;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MAX;
	static int16_t x88 = INT16_MAX;
	volatile int64_t t20 = 2954600697874343LL;

	t20 = (x85-((x86==x87)%x88));

	if (t20 != 31451LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;

	t21 = (x89-((x90==x91)%x92));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x94 = 883;
	int64_t x95 = -504060705351400LL;
	int32_t x96 = INT32_MIN;
	int64_t t22 = INT64_MIN;

	t22 = (x93-((x94==x95)%x96));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 12U;
	uint32_t x98 = 60U;
	int16_t x99 = INT16_MIN;

	t23 = (x97-((x98==x99)%x100));

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = 28509796199277186LLU;
	static int64_t x103 = INT64_MIN;
	uint64_t x104 = 166559149670LLU;
	volatile uint64_t t24 = 171LLU;

	t24 = (x101-((x102==x103)%x104));

	if (t24 != 18446744073704508878LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	uint16_t x107 = 1987U;
	int64_t t25 = INT64_MIN;

	t25 = (x105-((x106==x107)%x108));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = -2432;
	uint16_t x111 = 32731U;
	static uint32_t x112 = 7U;
	uint32_t t26 = UINT32_MAX;

	t26 = (x109-((x110==x111)%x112));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 252U;
	int64_t x114 = -98899396759214LL;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = INT16_MIN;

	t27 = (x113-((x114==x115)%x116));

	if (t27 != 252) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x119 = -454940011;
	int8_t x120 = -5;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x117-((x118==x119)%x120));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	int64_t x123 = INT64_MAX;
	int32_t t29 = 9792;

	t29 = (x121-((x122==x123)%x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 6;
	int64_t x126 = -23431187139LL;
	uint8_t x127 = 24U;
	int8_t x128 = 1;
	volatile int32_t t30 = -129943285;

	t30 = (x125-((x126==x127)%x128));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 179U;
	volatile uint32_t t31 = 9967262U;

	t31 = (x129-((x130==x131)%x132));

	if (t31 != 6576711U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -2414132107271143LL;
	static volatile int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;

	t32 = (x133-((x134==x135)%x136));

	if (t32 != -2414132107271143LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t t33 = 2;

	t33 = (x137-((x138==x139)%x140));

	if (t33 != 112) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MAX;
	int8_t x142 = -1;
	int8_t x144 = 7;
	int32_t t34 = 47546952;

	t34 = (x141-((x142==x143)%x144));

	if (t34 != 32766) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -327908LL;
	volatile int8_t x146 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	int64_t t35 = -2112721LL;

	t35 = (x145-((x146==x147)%x148));

	if (t35 != -327908LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = -373;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1;
	static volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t36 = 4039920;

	t36 = (x149-((x150==x151)%x152));

	if (t36 != -373) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int64_t x154 = 28168388LL;
	static int32_t x155 = INT32_MAX;
	int8_t x156 = INT8_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x153-((x154==x155)%x156));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t38 = 181640;

	t38 = (x157-((x158==x159)%x160));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -3;
	int64_t x163 = 927679585264LL;
	static int64_t x164 = -1LL;
	volatile int64_t t39 = -78541LL;

	t39 = (x161-((x162==x163)%x164));

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MAX;
	uint64_t x166 = 53133413LLU;
	static int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;

	t40 = (x165-((x166==x167)%x168));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x169 = 121664347U;
	int16_t x171 = 2642;
	int8_t x172 = INT8_MAX;
	volatile uint32_t t41 = 4540U;

	t41 = (x169-((x170==x171)%x172));

	if (t41 != 121664347U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	volatile int64_t x174 = -931032961849LL;
	int32_t x175 = INT32_MIN;
	volatile int16_t x176 = -22;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x173-((x174==x175)%x176));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = 6LL;
	uint64_t x179 = 78998211621269365LLU;
	int64_t x180 = -10LL;
	int64_t t43 = 12968LL;

	t43 = (x177-((x178==x179)%x180));

	if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 1186U;
	int32_t x182 = INT32_MIN;
	int64_t x183 = 118699847LL;
	static int64_t t44 = -703328LL;

	t44 = (x181-((x182==x183)%x184));

	if (t44 != 1186LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x185 = UINT64_MAX;
	static int8_t x187 = 15;
	static uint16_t x188 = UINT16_MAX;

	t45 = (x185-((x186==x187)%x188));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int8_t x190 = -1;
	uint32_t x191 = 41431U;
	static int32_t t46 = -540852057;

	t46 = (x189-((x190==x191)%x192));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	volatile uint32_t x194 = 747975U;
	volatile uint64_t t47 = 329860957189LLU;

	t47 = (x193-((x194==x195)%x196));

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = -1LL;
	static uint16_t x198 = 187U;
	int64_t x200 = 57745409LL;
	int64_t t48 = 713631642736329LL;

	t48 = (x197-((x198==x199)%x200));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MAX;
	volatile int8_t x202 = 18;
	volatile int8_t x203 = -16;
	static int64_t x204 = INT64_MIN;
	int64_t t49 = -46392792332LL;

	t49 = (x201-((x202==x203)%x204));

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 29099210U;
	int16_t x206 = INT16_MAX;
	uint32_t x207 = UINT32_MAX;
	static uint8_t x208 = 1U;
	static volatile uint32_t t50 = 5269738U;

	t50 = (x205-((x206==x207)%x208));

	if (t50 != 29099210U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x210 = -1;
	volatile int64_t x212 = -1LL;

	t51 = (x209-((x210==x211)%x212));

	if (t51 != 13LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x213 = 198682897431230LL;
	int64_t x214 = -1LL;
	volatile int8_t x216 = -1;
	volatile int64_t t52 = -21633153497LL;

	t52 = (x213-((x214==x215)%x216));

	if (t52 != 198682897431230LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x218 = INT64_MIN;
	volatile int32_t x219 = -779;
	static volatile int8_t x220 = INT8_MIN;
	int32_t t53 = -1;

	t53 = (x217-((x218==x219)%x220));

	if (t53 != 498) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = UINT16_MAX;
	uint16_t x223 = 634U;
	int64_t x224 = -1LL;
	uint64_t t54 = 15629428726136876LLU;

	t54 = (x221-((x222==x223)%x224));

	if (t54 != 102139633973277LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;

	t55 = (x225-((x226==x227)%x228));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -1167817LL;
	int16_t x230 = INT16_MIN;
	int16_t x232 = -1;
	volatile int64_t t56 = 0LL;

	t56 = (x229-((x230==x231)%x232));

	if (t56 != -1167817LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x233 = 4292476859288707409LLU;
	volatile int32_t x234 = 1;
	uint16_t x235 = UINT16_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t57 = 121272826157LLU;

	t57 = (x233-((x234==x235)%x236));

	if (t57 != 4292476859288707409LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = INT32_MAX;
	int32_t x239 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t58 = -1;

	t58 = (x237-((x238==x239)%x240));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x241 = 11902U;
	int32_t t59 = 1675973;

	t59 = (x241-((x242==x243)%x244));

	if (t59 != 11902) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = INT8_MAX;
	int8_t x246 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t60 = -20;

	t60 = (x245-((x246==x247)%x248));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t t61 = 0LLU;

	t61 = (x249-((x250==x251)%x252));

	if (t61 != 173100360LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = UINT8_MAX;
	uint16_t x254 = 221U;
	uint32_t x255 = 1794397849U;
	int64_t x256 = -1LL;
	volatile int64_t t62 = 17969LL;

	t62 = (x253-((x254==x255)%x256));

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x258 = -1;
	volatile int64_t x259 = INT64_MAX;
	uint16_t x260 = 2U;
	volatile int32_t t63 = -19980;

	t63 = (x257-((x258==x259)%x260));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	volatile int8_t x263 = 0;
	static int32_t x264 = 42614;
	int32_t t64 = 91369;

	t64 = (x261-((x262==x263)%x264));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = 11U;
	static int32_t x267 = -58682;
	int32_t x268 = 3;
	int32_t t65 = 756555;

	t65 = (x265-((x266==x267)%x268));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	static volatile int16_t x270 = 45;
	int8_t x271 = -15;
	uint32_t t66 = 83063828U;

	t66 = (x269-((x270==x271)%x272));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x274 = UINT32_MAX;
	static int16_t x275 = INT16_MIN;

	t67 = (x273-((x274==x275)%x276));

	if (t67 != 17) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x278 = 3269;
	int8_t x279 = 0;
	static int8_t x280 = -1;
	uint64_t t68 = 826LLU;

	t68 = (x277-((x278==x279)%x280));

	if (t68 != 5178LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = -1;
	int16_t x282 = -18;
	static int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	static int32_t t69 = -19;

	t69 = (x281-((x282==x283)%x284));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MAX;
	uint32_t x287 = 118420U;
	int8_t x288 = 2;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x285-((x286==x287)%x288));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 123497LLU;
	int64_t x290 = INT64_MIN;
	uint8_t x292 = 25U;
	volatile uint64_t t71 = 1021717590LLU;

	t71 = (x289-((x290==x291)%x292));

	if (t71 != 123496LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x294 = 60U;
	volatile int32_t x296 = INT32_MIN;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x293-((x294==x295)%x296));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = -45;
	uint64_t x298 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 1U;
	volatile int32_t t73 = -89;

	t73 = (x297-((x298==x299)%x300));

	if (t73 != -45) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x302 = UINT64_MAX;
	int32_t x303 = 5887801;
	int16_t x304 = INT16_MAX;
	volatile int32_t t74 = 0;

	t74 = (x301-((x302==x303)%x304));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = -1LL;
	volatile int16_t x306 = INT16_MAX;
	volatile uint32_t x307 = 1596U;
	int16_t x308 = INT16_MAX;
	static volatile int64_t t75 = 32249993LL;

	t75 = (x305-((x306==x307)%x308));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x310 = -1;
	uint16_t x311 = 3467U;
	volatile uint64_t x312 = 14LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x309-((x310==x311)%x312));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -1;
	volatile uint32_t x314 = 754U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t77 = -49;

	t77 = (x313-((x314==x315)%x316));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x317 = INT8_MAX;
	int8_t x318 = 9;
	uint32_t x319 = 616181788U;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t78 = 866;

	t78 = (x317-((x318==x319)%x320));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = -10;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;

	t79 = (x321-((x322==x323)%x324));

	if (t79 != -11LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MIN;
	volatile uint64_t x326 = 34523034023216LLU;
	int32_t x328 = 3;
	static volatile int32_t t80 = INT32_MIN;

	t80 = (x325-((x326==x327)%x328));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = INT8_MIN;
	static int32_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t81 = 4772314U;

	t81 = (x329-((x330==x331)%x332));

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 3U;
	volatile uint32_t x334 = 12241U;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = -1;

	t82 = (x333-((x334==x335)%x336));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = -1;
	int8_t x340 = -1;
	static int32_t t83 = -124032644;

	t83 = (x337-((x338==x339)%x340));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x343 = INT64_MIN;
	volatile int8_t x344 = INT8_MIN;

	t84 = (x341-((x342==x343)%x344));

	if (t84 != 22039360LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x346 = -1;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t85 = -6593;

	t85 = (x345-((x346==x347)%x348));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MAX;
	volatile int64_t x350 = INT64_MIN;
	int32_t x351 = 149988854;
	int32_t x352 = INT32_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x349-((x350==x351)%x352));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = 76U;
	int16_t x355 = INT16_MAX;
	uint32_t x356 = 27U;
	uint32_t t87 = 1026199482U;

	t87 = (x353-((x354==x355)%x356));

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 1131U;
	int32_t t88 = INT32_MIN;

	t88 = (x357-((x358==x359)%x360));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MAX;
	int32_t t89 = -3581763;

	t89 = (x361-((x362==x363)%x364));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x365 = 402835LLU;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = -31495131LL;
	uint8_t x368 = UINT8_MAX;
	uint64_t t90 = 546413839LLU;

	t90 = (x365-((x366==x367)%x368));

	if (t90 != 402835LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 5U;
	uint8_t x370 = 55U;
	uint32_t x371 = 295810U;
	int8_t x372 = INT8_MIN;
	int32_t t91 = -572015;

	t91 = (x369-((x370==x371)%x372));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint64_t x374 = 13649253LLU;
	int64_t x375 = -1LL;
	uint32_t x376 = UINT32_MAX;

	t92 = (x373-((x374==x375)%x376));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = 250336378577LLU;
	int16_t x380 = INT16_MAX;

	t93 = (x377-((x378==x379)%x380));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -20;
	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = INT16_MIN;

	t94 = (x381-((x382==x383)%x384));

	if (t94 != -20) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = 1675;
	uint32_t x386 = 8224464U;
	int32_t x387 = 139;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t95 = 17962854933741710LLU;

	t95 = (x385-((x386==x387)%x388));

	if (t95 != 1675LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MAX;
	int8_t x390 = 0;
	volatile int32_t x391 = -1;
	int16_t x392 = 955;
	static volatile int32_t t96 = INT32_MAX;

	t96 = (x389-((x390==x391)%x392));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x393-((x394==x395)%x396));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	static int8_t x399 = INT8_MAX;
	uint16_t x400 = 7U;
	int64_t t98 = INT64_MIN;

	t98 = (x397-((x398==x399)%x400));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x401 = 3456359U;
	int32_t x402 = INT32_MIN;
	static uint64_t x403 = 5431481LLU;
	volatile int16_t x404 = 6620;

	t99 = (x401-((x402==x403)%x404));

	if (t99 != 3456359U) { NG(); } else { ; }
	
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
