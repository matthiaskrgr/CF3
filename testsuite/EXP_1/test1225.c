#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -2;
uint8_t x10 = 14U;
static uint64_t x11 = 105090359204669LLU;
uint16_t x13 = 8233U;
volatile uint64_t t2 = 2878973182LLU;
int32_t x18 = INT32_MIN;
int32_t x21 = -1939965;
int16_t x25 = INT16_MIN;
int16_t x27 = INT16_MIN;
uint16_t x28 = 12020U;
int32_t t5 = 277;
uint16_t x29 = UINT16_MAX;
static uint8_t x35 = 51U;
int16_t x39 = INT16_MIN;
volatile int16_t x45 = 0;
int8_t x48 = INT8_MAX;
static int32_t x51 = 30601121;
int32_t x53 = INT32_MIN;
int8_t x66 = 15;
int32_t t14 = 6132;
volatile int32_t x72 = -1;
static int16_t x79 = -1;
int32_t x85 = INT32_MAX;
static int16_t x89 = 63;
int16_t x98 = -1;
int64_t x99 = INT64_MIN;
static int16_t x101 = 0;
int32_t x106 = -1;
static int16_t x126 = -1;
volatile int32_t x132 = INT32_MIN;
volatile uint64_t x137 = 218LLU;
int64_t x141 = 3522221911908LL;
int64_t x142 = INT64_MIN;
int8_t x146 = INT8_MIN;
volatile uint16_t x147 = 104U;
volatile uint32_t x148 = 289U;
volatile uint16_t x149 = 334U;
int32_t x153 = -1;
int8_t x162 = 38;
static volatile int8_t x164 = INT8_MAX;
int8_t x167 = INT8_MIN;
uint64_t x168 = 896LLU;
static int16_t x170 = INT16_MIN;
volatile int64_t x178 = INT64_MIN;
int16_t x179 = 5272;
static uint32_t x180 = 517U;
volatile uint32_t t41 = 55890U;
int16_t x185 = INT16_MAX;
volatile int8_t x190 = -1;
uint64_t t46 = 383088539LLU;
volatile int8_t x202 = INT8_MIN;
uint8_t x209 = UINT8_MAX;
volatile int16_t x213 = -1;
static uint32_t t50 = 1411813956U;
volatile int32_t x217 = -8452;
int32_t t52 = -6924435;
uint8_t x225 = UINT8_MAX;
int8_t x227 = 30;
int8_t x237 = 29;
uint16_t x239 = UINT16_MAX;
volatile uint64_t x245 = UINT64_MAX;
volatile int64_t t58 = -2820LL;
int32_t x250 = 893942;
volatile int32_t t62 = -37;
volatile int16_t x278 = 0;
static int8_t x279 = -1;
static int64_t t66 = 2152219185479288LL;
int64_t x282 = -1LL;
int8_t x283 = 29;
uint8_t x284 = UINT8_MAX;
int32_t t67 = 4872295;
volatile int8_t x288 = INT8_MAX;
int8_t x299 = INT8_MIN;
volatile int32_t t71 = 569458867;
uint16_t x301 = 2365U;
int16_t x307 = -1;
static int64_t x311 = -449LL;
int8_t x317 = INT8_MAX;
uint64_t x319 = UINT64_MAX;
volatile uint32_t t77 = 4803U;
static int32_t x330 = INT32_MIN;
int64_t x332 = -1LL;
volatile uint32_t t79 = 8285433U;
uint32_t x341 = 11U;
int8_t x346 = -1;
int16_t x347 = INT16_MIN;
static int64_t t82 = 822903LL;
int16_t x355 = INT16_MIN;
uint8_t x360 = 10U;
volatile int32_t t85 = 79895;
uint16_t x367 = 11660U;
volatile int32_t t87 = 93553;
int8_t x380 = INT8_MAX;
uint64_t x385 = 52974LLU;
int64_t x386 = -3796781932098LL;
int16_t x388 = 378;
uint8_t x394 = 0U;
uint32_t x400 = UINT32_MAX;
int64_t x406 = INT64_MIN;
int64_t x408 = 29451041LL;
int16_t x418 = INT16_MIN;
int32_t x420 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint8_t x2 = 34U;
	volatile uint16_t x3 = 2U;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = 0;

	t0 = (((x1==x2)/x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x12 = UINT8_MAX;
	static volatile uint64_t t1 = 159581234511079LLU;

	t1 = (((x9==x10)/x11)*x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 28U;
	int32_t x15 = INT32_MAX;
	static volatile uint64_t x16 = 1164LLU;

	t2 = (((x13==x14)/x15)*x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 35623978835938928LLU;
	volatile int8_t x19 = 3;
	uint32_t x20 = 1U;
	static uint32_t t3 = 3405575U;

	t3 = (((x17==x18)/x19)*x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = 466;
	volatile int64_t x23 = -1LL;
	static int64_t x24 = INT64_MIN;
	volatile int64_t t4 = -1173156LL;

	t4 = (((x21==x22)/x23)*x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = UINT32_MAX;

	t5 = (((x25==x26)/x27)*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -7132346057250334LL;
	volatile int16_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile int32_t t6 = 1400;

	t6 = (((x29==x30)/x31)*x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MAX;
	int32_t x34 = INT32_MAX;
	int64_t x36 = INT64_MAX;
	int64_t t7 = 1646437940LL;

	t7 = (((x33==x34)/x35)*x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	int16_t x38 = INT16_MIN;
	uint8_t x40 = 51U;
	int32_t t8 = -116528134;

	t8 = (((x37==x38)/x39)*x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -3711;
	static volatile uint8_t x42 = UINT8_MAX;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = 85;
	int32_t t9 = 0;

	t9 = (((x41==x42)/x43)*x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x46 = 73618570U;
	int16_t x47 = INT16_MIN;
	int32_t t10 = -2006269;

	t10 = (((x45==x46)/x47)*x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile int16_t x50 = -15874;
	static uint32_t x52 = 444U;
	volatile uint32_t t11 = 28744U;

	t11 = (((x49==x50)/x51)*x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = INT16_MAX;
	int16_t x55 = 1034;
	static int8_t x56 = -61;
	volatile int32_t t12 = 380494516;

	t12 = (((x53==x54)/x55)*x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 543;
	int64_t x58 = INT64_MAX;
	int8_t x59 = -7;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t13 = 156;

	t13 = (((x57==x58)/x59)*x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = -1LL;
	static volatile int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MAX;

	t14 = (((x65==x66)/x67)*x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	static int16_t x71 = INT16_MAX;
	int32_t t15 = 1161986;

	t15 = (((x69==x70)/x71)*x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 65403507U;
	static int16_t x74 = -2;
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int32_t t16 = -15729540;

	t16 = (((x73==x74)/x75)*x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t17 = -1;

	t17 = (((x77==x78)/x79)*x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x81 = -1LL;
	int8_t x82 = -1;
	static volatile int32_t x83 = INT32_MIN;
	int16_t x84 = -1;
	static volatile int32_t t18 = 8;

	t18 = (((x81==x82)/x83)*x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MAX;
	static uint8_t x87 = 95U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t19 = 74207278523LL;

	t19 = (((x85==x86)/x87)*x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = -1LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -10605717LL;
	int64_t t20 = 0LL;

	t20 = (((x89==x90)/x91)*x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 1;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -174355;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t21 = -821;

	t21 = (((x93==x94)/x95)*x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -937457;
	uint16_t x100 = UINT16_MAX;
	static int64_t t22 = -967LL;

	t22 = (((x97==x98)/x99)*x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x102 = -8004657LL;
	static uint32_t x103 = 51477U;
	int32_t x104 = -20;
	volatile uint32_t t23 = 31777U;

	t23 = (((x101==x102)/x103)*x104);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t24 = 8851;

	t24 = (((x105==x106)/x107)*x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x113 = 468412097024LLU;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 1091430609LLU;
	int8_t x116 = -1;
	static uint64_t t25 = 6987074311LLU;

	t25 = (((x113==x114)/x115)*x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	volatile uint8_t x118 = 3U;
	int32_t x119 = INT32_MIN;
	static int64_t x120 = -5LL;
	volatile int64_t t26 = 3344086376280LL;

	t26 = (((x117==x118)/x119)*x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 3LL;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = 275U;
	static uint16_t x124 = UINT16_MAX;
	int32_t t27 = 3;

	t27 = (((x121==x122)/x123)*x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = -1;
	volatile int32_t x127 = INT32_MIN;
	int64_t x128 = -1LL;
	int64_t t28 = 274404966135973LL;

	t28 = (((x125==x126)/x127)*x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x129 = INT16_MIN;
	static int64_t x130 = INT64_MAX;
	static int8_t x131 = -1;
	volatile int32_t t29 = -4;

	t29 = (((x129==x130)/x131)*x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 5U;
	uint16_t x136 = 21676U;
	int32_t t30 = -25;

	t30 = (((x133==x134)/x135)*x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x138 = 0U;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 0;
	int32_t t31 = 734;

	t31 = (((x137==x138)/x139)*x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x143 = 192U;
	volatile int32_t x144 = 7296345;
	static int32_t t32 = 5127;

	t32 = (((x141==x142)/x143)*x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = INT16_MAX;
	static volatile uint32_t t33 = 359490313U;

	t33 = (((x145==x146)/x147)*x148);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MAX;
	volatile uint32_t x151 = 585763106U;
	volatile uint64_t x152 = UINT64_MAX;
	static uint64_t t34 = 799LLU;

	t34 = (((x149==x150)/x151)*x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MAX;
	int8_t x155 = 1;
	int8_t x156 = -1;
	static volatile int32_t t35 = -5413258;

	t35 = (((x153==x154)/x155)*x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	volatile int64_t x158 = INT64_MAX;
	int32_t x159 = -94;
	volatile uint32_t x160 = 84U;
	uint32_t t36 = 96U;

	t36 = (((x157==x158)/x159)*x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = -713783183;
	static volatile int16_t x163 = 168;
	volatile int32_t t37 = 300;

	t37 = (((x161==x162)/x163)*x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MAX;
	int8_t x166 = INT8_MAX;
	static uint64_t t38 = 41537719422169LLU;

	t38 = (((x165==x166)/x167)*x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = -1;
	static uint8_t x171 = 53U;
	int16_t x172 = -7345;
	int32_t t39 = -432885;

	t39 = (((x169==x170)/x171)*x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x173 = INT8_MAX;
	static uint32_t x174 = 214506914U;
	volatile int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t40 = -7;

	t40 = (((x173==x174)/x175)*x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 0;

	t41 = (((x177==x178)/x179)*x180);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = 10;
	uint16_t x182 = 0U;
	static int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t42 = 17;

	t42 = (((x181==x182)/x183)*x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = INT16_MIN;
	uint8_t x187 = 106U;
	int16_t x188 = -2227;
	static volatile int32_t t43 = 41;

	t43 = (((x185==x186)/x187)*x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	static uint32_t x191 = 38U;
	int64_t x192 = INT64_MAX;
	int64_t t44 = -1019195LL;

	t44 = (((x189==x190)/x191)*x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x193 = 46797U;
	volatile int8_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	uint64_t x196 = 646LLU;
	volatile uint64_t t45 = 1057LLU;

	t45 = (((x193==x194)/x195)*x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x197 = 2146896973U;
	volatile int8_t x198 = INT8_MIN;
	uint64_t x199 = 1535877LLU;
	static int16_t x200 = INT16_MIN;

	t46 = (((x197==x198)/x199)*x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 4348008U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t47 = -1998;

	t47 = (((x201==x202)/x203)*x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int32_t x206 = -1;
	int64_t x207 = INT64_MAX;
	uint64_t x208 = 1386403459LLU;
	volatile uint64_t t48 = 1812958124LLU;

	t48 = (((x205==x206)/x207)*x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = 981798LL;
	int16_t x211 = -1;
	static int8_t x212 = INT8_MIN;
	static volatile int32_t t49 = -8038;

	t49 = (((x209==x210)/x211)*x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x214 = 2U;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = 88507723U;

	t50 = (((x213==x214)/x215)*x216);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = 0;
	static int32_t t51 = -14;

	t51 = (((x217==x218)/x219)*x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -3028LL;
	uint16_t x222 = 2536U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -6189;

	t52 = (((x221==x222)/x223)*x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = UINT8_MAX;
	volatile int16_t x228 = 15;
	volatile int32_t t53 = 23424072;

	t53 = (((x225==x226)/x227)*x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x229 = 430499679U;
	static volatile int16_t x230 = INT16_MIN;
	int64_t x231 = -1LL;
	int32_t x232 = 0;
	int64_t t54 = -2964593388LL;

	t54 = (((x229==x230)/x231)*x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x233 = -1;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = -1;
	int64_t x236 = INT64_MIN;
	int64_t t55 = -8496041095LL;

	t55 = (((x233==x234)/x235)*x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x238 = -62973407;
	int32_t x240 = INT32_MAX;
	int32_t t56 = -29;

	t56 = (((x237==x238)/x239)*x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 146885298746LLU;
	int32_t x243 = INT32_MAX;
	static int64_t x244 = -1LL;
	int64_t t57 = 163LL;

	t57 = (((x241==x242)/x243)*x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x246 = 1LLU;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;

	t58 = (((x245==x246)/x247)*x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x249 = 57581397474403LLU;
	int32_t x251 = 307;
	static uint64_t x252 = 29586832467194366LLU;
	uint64_t t59 = 2LLU;

	t59 = (((x249==x250)/x251)*x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	static uint32_t x255 = 171U;
	static volatile uint8_t x256 = UINT8_MAX;
	uint32_t t60 = 195U;

	t60 = (((x253==x254)/x255)*x256);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = -1LL;
	int16_t x259 = 203;
	int16_t x260 = 31;
	int32_t t61 = -739867;

	t61 = (((x257==x258)/x259)*x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = -8;
	static int32_t x264 = 2028602;

	t62 = (((x261==x262)/x263)*x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static uint32_t x266 = UINT32_MAX;
	int16_t x267 = -1;
	int32_t x268 = -1;
	volatile int32_t t63 = -583633;

	t63 = (((x265==x266)/x267)*x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 148399878U;
	volatile uint32_t x271 = 15U;
	int8_t x272 = INT8_MIN;
	static uint32_t t64 = 6U;

	t64 = (((x269==x270)/x271)*x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	int8_t x275 = -3;
	int8_t x276 = INT8_MAX;
	volatile int32_t t65 = -7813637;

	t65 = (((x273==x274)/x275)*x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MIN;
	int64_t x280 = INT64_MAX;

	t66 = (((x277==x278)/x279)*x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = UINT16_MAX;

	t67 = (((x281==x282)/x283)*x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	static uint8_t x286 = 6U;
	uint32_t x287 = 919483696U;
	uint32_t t68 = 1641047637U;

	t68 = (((x285==x286)/x287)*x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MIN;
	static volatile int8_t x291 = INT8_MIN;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t69 = 84;

	t69 = (((x289==x290)/x291)*x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = UINT64_MAX;
	static volatile uint64_t x294 = 73044LLU;
	int64_t x295 = -2074828785886672LL;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t70 = -18478LL;

	t70 = (((x293==x294)/x295)*x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = 1253;
	volatile int8_t x300 = -1;

	t71 = (((x297==x298)/x299)*x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = -1;
	uint8_t x303 = 1U;
	int32_t x304 = 1;
	volatile int32_t t72 = 8;

	t72 = (((x301==x302)/x303)*x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MAX;
	volatile int16_t x306 = -1;
	volatile uint32_t x308 = UINT32_MAX;
	volatile uint32_t t73 = 13581945U;

	t73 = (((x305==x306)/x307)*x308);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = 0;
	volatile int8_t x310 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	static volatile int64_t t74 = -567809LL;

	t74 = (((x309==x310)/x311)*x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x318 = -1;
	volatile uint16_t x320 = 14449U;
	volatile uint64_t t75 = 38LLU;

	t75 = (((x317==x318)/x319)*x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = 1517U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t76 = 1719;

	t76 = (((x321==x322)/x323)*x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x325 = UINT32_MAX;
	int16_t x326 = 1;
	int16_t x327 = 1;
	uint32_t x328 = 692U;

	t77 = (((x325==x326)/x327)*x328);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x329 = INT8_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t t78 = -568998508138297700LL;

	t78 = (((x329==x330)/x331)*x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = -1;
	uint32_t x336 = UINT32_MAX;

	t79 = (((x333==x334)/x335)*x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 10U;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t80 = 878887432357332675LLU;

	t80 = (((x341==x342)/x343)*x344);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MAX;
	int8_t x348 = 3;
	volatile int32_t t81 = -1275956;

	t81 = (((x345==x346)/x347)*x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = -16;
	int64_t x350 = 1LL;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;

	t82 = (((x349==x350)/x351)*x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 6008454437821521599LLU;
	int32_t x354 = INT32_MIN;
	uint8_t x356 = 3U;
	int32_t t83 = -90;

	t83 = (((x353==x354)/x355)*x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x357 = 65U;
	static uint64_t x358 = 44217320080025LLU;
	int64_t x359 = 47LL;
	int64_t t84 = 0LL;

	t84 = (((x357==x358)/x359)*x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x361 = -28LL;
	int8_t x362 = -8;
	static int32_t x363 = 1;
	int32_t x364 = INT32_MAX;

	t85 = (((x361==x362)/x363)*x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = 1U;
	static uint16_t x368 = 9416U;
	volatile int32_t t86 = 73848596;

	t86 = (((x365==x366)/x367)*x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = 108707LLU;
	int64_t x370 = -291703LL;
	volatile int32_t x371 = -2944147;
	volatile int8_t x372 = -1;

	t87 = (((x369==x370)/x371)*x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = -3726317841997781LL;
	static int64_t x374 = INT64_MIN;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = 4194;
	static volatile int32_t t88 = 102;

	t88 = (((x373==x374)/x375)*x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	uint64_t t89 = 332785LLU;

	t89 = (((x377==x378)/x379)*x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = 43052800120924981LL;
	uint32_t x383 = UINT32_MAX;
	uint16_t x384 = UINT16_MAX;
	uint32_t t90 = 702732712U;

	t90 = (((x381==x382)/x383)*x384);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x387 = -163749552012896173LL;
	volatile int64_t t91 = -114527139685532LL;

	t91 = (((x385==x386)/x387)*x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x389 = UINT64_MAX;
	int32_t x390 = -1;
	static int8_t x391 = -1;
	volatile int16_t x392 = INT16_MIN;
	static int32_t t92 = 7448;

	t92 = (((x389==x390)/x391)*x392);

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	volatile uint64_t x395 = 1165LLU;
	int16_t x396 = INT16_MAX;
	uint64_t t93 = 0LLU;

	t93 = (((x393==x394)/x395)*x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MAX;
	uint64_t x398 = 211737894432557068LLU;
	volatile int16_t x399 = INT16_MIN;
	volatile uint32_t t94 = 0U;

	t94 = (((x397==x398)/x399)*x400);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x401 = -1;
	volatile int8_t x402 = 0;
	uint16_t x403 = 1U;
	uint64_t x404 = 1287616LLU;
	uint64_t t95 = 4014598759387820LLU;

	t95 = (((x401==x402)/x403)*x404);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -46;
	uint8_t x407 = 58U;
	int64_t t96 = 235LL;

	t96 = (((x405==x406)/x407)*x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 0;
	uint8_t x410 = UINT8_MAX;
	volatile uint32_t x411 = UINT32_MAX;
	uint32_t x412 = UINT32_MAX;
	uint32_t t97 = 27315U;

	t97 = (((x409==x410)/x411)*x412);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = INT16_MIN;
	int8_t x419 = INT8_MAX;
	int32_t t98 = 0;

	t98 = (((x417==x418)/x419)*x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = 0;
	int32_t x423 = INT32_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t99 = 22205LL;

	t99 = (((x421==x422)/x423)*x424);

	if (t99 != 0LL) { NG(); } else { ; }
	
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
