
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 0U;
int64_t x13 = -1LL;
int8_t x15 = 2;
volatile int32_t t4 = 1469875;
uint8_t x21 = 7U;
int16_t x22 = -1;
static int16_t x23 = INT16_MIN;
uint16_t x28 = 43U;
int32_t t8 = 103;
static int32_t x40 = -3645;
static uint32_t x47 = 800522384U;
uint64_t x50 = 382004085243455LLU;
static int16_t x51 = INT16_MIN;
static volatile uint64_t x57 = 11738552558LLU;
static int64_t x58 = INT64_MAX;
uint64_t x60 = 8077575291214365LLU;
int32_t x61 = 654796447;
volatile int32_t t15 = 7145455;
int16_t x65 = INT16_MAX;
uint16_t x70 = UINT16_MAX;
static int16_t x72 = INT16_MAX;
static volatile uint64_t x78 = 147674066LLU;
static volatile uint64_t x81 = 2411LLU;
uint64_t x82 = 2629550781438LLU;
volatile int16_t x86 = INT16_MIN;
static int8_t x91 = -1;
volatile int32_t x102 = -929779;
int32_t t27 = 8716;
volatile int16_t x117 = -857;
volatile int32_t x120 = INT32_MAX;
uint32_t x121 = UINT32_MAX;
static int8_t x131 = INT8_MIN;
int32_t x135 = 38203;
int8_t x137 = INT8_MIN;
int64_t x139 = -1LL;
uint64_t x147 = 35833213189776071LLU;
int16_t x149 = 6;
static int64_t x150 = -930876425LL;
int32_t t38 = 133913;
volatile int32_t t39 = -25;
int16_t x164 = INT16_MAX;
int32_t x169 = -1;
uint32_t x171 = 4631U;
volatile int32_t t43 = 6;
volatile uint32_t x179 = 43446U;
int8_t x181 = -1;
int8_t x183 = -1;
uint16_t x188 = 63U;
int64_t x191 = INT64_MIN;
uint32_t x192 = 465U;
int8_t x200 = INT8_MAX;
int32_t t49 = 47;
volatile int32_t t50 = 3401;
uint64_t x206 = 4672275437441LLU;
static volatile int32_t t52 = 9493;
static int8_t x213 = 15;
static int32_t t53 = -7269;
volatile int32_t t58 = -257803;
uint32_t x238 = UINT32_MAX;
uint8_t x239 = 1U;
uint32_t x248 = 452938534U;
volatile int32_t x249 = INT32_MIN;
int16_t x263 = -1;
volatile int32_t x268 = 746114791;
volatile uint64_t x269 = 14LLU;
int8_t x270 = INT8_MIN;
volatile uint64_t x273 = UINT64_MAX;
volatile int8_t x274 = INT8_MIN;
uint16_t x277 = 44U;
int32_t x279 = INT32_MAX;
static uint64_t x284 = 240300715107226LLU;
int32_t x285 = -265;
int64_t x289 = INT64_MAX;
int64_t x291 = INT64_MAX;
int8_t x293 = 8;
volatile int64_t x297 = INT64_MIN;
volatile uint64_t x298 = 4317749808743LLU;
volatile int32_t t74 = 63;
static int32_t t75 = -940428;
static uint16_t x307 = 4455U;
volatile int8_t x308 = -1;
int8_t x314 = -1;
int8_t x316 = INT8_MAX;
static volatile int32_t t79 = -1019584434;
volatile int8_t x323 = INT8_MAX;
int8_t x332 = INT8_MAX;
volatile int32_t t82 = 15;
volatile int32_t x342 = 1;
volatile int32_t t86 = 2600900;
int16_t x351 = INT16_MAX;
uint16_t x357 = 106U;
static volatile uint8_t x358 = 14U;
static int64_t x360 = INT64_MIN;
int32_t t89 = 201838841;
int32_t x364 = INT32_MAX;
int32_t x371 = INT32_MIN;
volatile int32_t x375 = -1;
uint8_t x378 = UINT8_MAX;
int32_t t94 = 40;
uint8_t x385 = UINT8_MAX;
uint64_t x392 = 4116449668190081698LLU;
int16_t x396 = -1;
static int64_t x400 = -1LL;
int8_t x406 = -1;
int32_t x407 = 179;
int32_t x412 = -2957;
int32_t t102 = 492;
volatile uint8_t x414 = UINT8_MAX;
volatile uint64_t x415 = UINT64_MAX;
static int8_t x422 = 0;
int8_t x423 = INT8_MIN;
static uint8_t x424 = 52U;
int32_t x427 = INT32_MIN;
static int8_t x434 = -1;
volatile int16_t x435 = INT16_MIN;
int16_t x442 = INT16_MIN;
int32_t x444 = 4322;
int16_t x449 = INT16_MAX;
static uint16_t x450 = 2U;
volatile int8_t x452 = INT8_MAX;
int16_t x454 = INT16_MIN;
volatile uint8_t x474 = 31U;
int16_t x477 = INT16_MIN;
uint16_t x479 = 1613U;
int16_t x493 = INT16_MAX;
int64_t x498 = 1121649537788646747LL;
volatile uint8_t x522 = 10U;
int64_t x524 = -43145484218LL;
uint8_t x525 = 28U;
uint64_t x532 = 29135845771060LLU;
int32_t x543 = INT32_MIN;
int16_t x556 = -1;
static int32_t t138 = 23635312;
uint32_t x559 = 365604177U;
int8_t x561 = INT8_MIN;
int64_t x563 = 2089812602462941283LL;
static volatile int64_t x572 = INT64_MAX;
volatile int32_t t142 = 627981;
int64_t x574 = -1LL;
int64_t x579 = -1LL;
uint32_t x581 = 38535U;
int32_t t146 = 1535900;
uint8_t x591 = 54U;
int64_t x592 = 2759032589542LL;
int8_t x600 = INT8_MIN;
int8_t x602 = INT8_MIN;
int8_t x604 = 20;
int8_t x610 = INT8_MAX;
uint64_t x612 = 3994988LLU;
volatile int8_t x618 = INT8_MAX;
static volatile int8_t x620 = INT8_MIN;
int32_t t154 = -1165192;
int8_t x621 = INT8_MIN;
int8_t x623 = INT8_MIN;
static int32_t x624 = INT32_MIN;
volatile int32_t t155 = 41413;
int64_t x629 = -1LL;
volatile int16_t x631 = INT16_MAX;
static volatile int32_t t158 = 62320172;
volatile int8_t x641 = INT8_MAX;
int64_t x646 = 1065062680LL;
static int32_t x649 = INT32_MIN;
int16_t x650 = INT16_MIN;
static int32_t t162 = 6928409;
static volatile int32_t t163 = 219;
int32_t x658 = -1;
uint64_t x672 = 29LLU;
int16_t x679 = INT16_MIN;
volatile uint64_t x683 = 318497521443079LLU;
int64_t x689 = -2393LL;
uint16_t x691 = 12U;
int32_t x693 = INT32_MIN;
volatile int32_t t174 = -1;
int32_t x702 = INT32_MIN;
static int32_t t175 = -21029;
static uint64_t x711 = 1LLU;
int8_t x718 = INT8_MIN;
volatile int32_t t179 = -1767;
int16_t x723 = -19;
int8_t x728 = -1;
int16_t x730 = INT16_MIN;
static int16_t x734 = -291;
int64_t x738 = -1LL;
int64_t x739 = -1LL;
static int16_t x742 = INT16_MIN;
uint64_t x746 = UINT64_MAX;
static volatile int32_t t186 = 1;
int32_t x752 = -1;
volatile int32_t t189 = -352;
int16_t x761 = INT16_MIN;
int32_t t190 = 0;
int32_t x776 = -46938;
uint16_t x784 = UINT16_MAX;
uint32_t x795 = 0U;
volatile int8_t x800 = INT8_MIN;
volatile int32_t t199 = -30589100;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile uint8_t x2 = 4U;
	volatile int16_t x3 = INT16_MAX;
	static int32_t x4 = -97651089;
	int32_t t0 = -7405;

    t0 = (x1>(x2*(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -191924203313430LL;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 28;

    t1 = (x5>(x6*(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 7U;
	int8_t x10 = -53;
	volatile int16_t x11 = -2484;
	volatile int32_t t2 = -810823379;

    t2 = (x9>(x10*(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	uint32_t x16 = 30936752U;
	volatile int32_t t3 = 15;

    t3 = (x13>(x14*(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MAX;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = -1;

    t4 = (x17>(x18*(x19>x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x24 = -104;
	int32_t t5 = -192;

    t5 = (x21>(x22*(x23>x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MIN;
	int16_t x27 = 0;
	static volatile int32_t t6 = 199294412;

    t6 = (x25>(x26*(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = UINT8_MAX;
	volatile uint64_t x30 = 989587049LLU;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -482503459;

    t7 = (x29>(x30*(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 20U;
	uint64_t x34 = 135777896555103042LLU;
	volatile uint8_t x35 = 24U;
	uint64_t x36 = 1340866032616LLU;

    t8 = (x33>(x34*(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint8_t x38 = 25U;
	int8_t x39 = -1;
	static volatile int32_t t9 = -114907;

    t9 = (x37>(x38*(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 16533;

    t10 = (x41>(x42*(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	static uint32_t x46 = 3684061U;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -501738154;

    t11 = (x45>(x46*(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x52 = -1;
	int32_t t12 = 8;

    t12 = (x49>(x50*(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	volatile int64_t x54 = INT64_MAX;
	uint8_t x55 = 4U;
	int8_t x56 = -58;
	volatile int32_t t13 = 9070;

    t13 = (x53>(x54*(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = INT32_MAX;
	volatile int32_t t14 = -32018370;

    t14 = (x57>(x58*(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x62 = -1LL;
	int64_t x63 = 912198LL;
	static int8_t x64 = 0;

    t15 = (x61>(x62*(x63>x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x66 = 28U;
	int8_t x67 = 1;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = 0;

    t16 = (x65>(x66*(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 0U;
	static volatile uint32_t x71 = 27U;
	int32_t t17 = 2098;

    t17 = (x69>(x70*(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = 5907;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = -1;
	static int32_t t18 = -6810289;

    t18 = (x73>(x74*(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	volatile uint32_t x79 = UINT32_MAX;
	static volatile int64_t x80 = 0LL;
	volatile int32_t t19 = 1;

    t19 = (x77>(x78*(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x83 = -1;
	static int32_t x84 = 5771;
	volatile int32_t t20 = -6;

    t20 = (x81>(x82*(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	int8_t x87 = -12;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = 0;

    t21 = (x85>(x86*(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	uint16_t x90 = 3U;
	int16_t x92 = -1;
	int32_t t22 = 6771;

    t22 = (x89>(x90*(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	uint8_t x94 = 0U;
	int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 0;

    t23 = (x93>(x94*(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 2716744289189582LLU;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MIN;
	static volatile uint32_t x100 = 44680U;
	int32_t t24 = 1300339;

    t24 = (x97>(x98*(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = UINT16_MAX;
	int16_t x103 = -8;
	uint64_t x104 = 795122LLU;
	volatile int32_t t25 = -341317;

    t25 = (x101>(x102*(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	static int16_t x107 = 15556;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 76;

    t26 = (x105>(x106*(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	volatile uint32_t x110 = UINT32_MAX;
	volatile int32_t x111 = 4206746;
	static int64_t x112 = INT64_MIN;

    t27 = (x109>(x110*(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	volatile uint8_t x114 = 125U;
	static volatile int16_t x115 = INT16_MAX;
	int16_t x116 = 0;
	static volatile int32_t t28 = -9;

    t28 = (x113>(x114*(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = 6037629527189LL;
	int64_t x119 = -1LL;
	volatile int32_t t29 = 862866827;

    t29 = (x117>(x118*(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = 1;

    t30 = (x121>(x122*(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1091U;
	int32_t x126 = -1;
	volatile uint16_t x127 = 13269U;
	int32_t x128 = -1;
	volatile int32_t t31 = 429298308;

    t31 = (x125>(x126*(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 20U;
	int8_t x132 = -1;
	volatile int32_t t32 = 107;

    t32 = (x129>(x130*(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MAX;
	static int8_t x134 = INT8_MAX;
	static int64_t x136 = INT64_MIN;
	static volatile int32_t t33 = -64515691;

    t33 = (x133>(x134*(x135>x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int64_t x140 = -1LL;
	volatile int32_t t34 = -27764;

    t34 = (x137>(x138*(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 1U;
	int8_t x142 = INT8_MIN;
	static volatile uint8_t x143 = 113U;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = -214;

    t35 = (x141>(x142*(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	static int64_t x148 = -1LL;
	int32_t t36 = -15785;

    t36 = (x145>(x146*(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x151 = -2598663851289979054LL;
	static int64_t x152 = -1LL;
	static volatile int32_t t37 = 654;

    t37 = (x149>(x150*(x151>x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 198U;
	volatile uint64_t x154 = 791123439025584LLU;
	int16_t x155 = -1;
	int64_t x156 = INT64_MAX;

    t38 = (x153>(x154*(x155>x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	volatile int8_t x158 = INT8_MIN;
	static uint64_t x159 = 65750432271723438LLU;
	static uint64_t x160 = 467359LLU;

    t39 = (x157>(x158*(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 16U;
	int8_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t t40 = 234;

    t40 = (x161>(x162*(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MIN;
	uint8_t x166 = 59U;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -3365546;

    t41 = (x165>(x166*(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = 12;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 373;

    t42 = (x169>(x170*(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -187986328;
	int64_t x174 = 6882850165051LL;
	int8_t x175 = -5;
	int64_t x176 = -20150728248LL;

    t43 = (x173>(x174*(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MIN;
	static uint16_t x178 = 314U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t44 = -96;

    t44 = (x177>(x178*(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -1911074;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 1;

    t45 = (x181>(x182*(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = 101U;
	volatile int64_t x186 = 80264288478793205LL;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t t46 = 735;

    t46 = (x185>(x186*(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 416721721LLU;
	uint8_t x190 = UINT8_MAX;
	static int32_t t47 = 1705;

    t47 = (x189>(x190*(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	volatile int32_t x194 = 3827295;
	int64_t x195 = INT64_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -5;

    t48 = (x193>(x194*(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 17U;
	volatile int64_t x198 = 139LL;
	int16_t x199 = 58;

    t49 = (x197>(x198*(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	volatile uint16_t x202 = 22U;
	int32_t x203 = 377318;
	volatile int16_t x204 = INT16_MAX;

    t50 = (x201>(x202*(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	uint8_t x207 = 16U;
	int64_t x208 = -1LL;
	volatile int32_t t51 = -218192425;

    t51 = (x205>(x206*(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MAX;
	volatile int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	int16_t x212 = -1;

    t52 = (x209>(x210*(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MIN;
	volatile int16_t x215 = -1;
	int32_t x216 = -1;

    t53 = (x213>(x214*(x215>x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	volatile int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	volatile int8_t x220 = -3;
	int32_t t54 = -868;

    t54 = (x217>(x218*(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = INT32_MIN;
	static int64_t x223 = INT64_MIN;
	uint8_t x224 = 13U;
	int32_t t55 = -110789780;

    t55 = (x221>(x222*(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = -11497449577283742LL;
	uint8_t x227 = UINT8_MAX;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -2;

    t56 = (x225>(x226*(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 1;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 1U;
	int32_t t57 = -323673;

    t57 = (x229>(x230*(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = 1;
	static int8_t x236 = 34;

    t58 = (x233>(x234*(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 645U;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -32745321;

    t59 = (x237>(x238*(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1;
	static volatile uint8_t x242 = UINT8_MAX;
	volatile uint8_t x243 = 95U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -23;

    t60 = (x241>(x242*(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 7606275300264LLU;
	uint64_t x246 = 87418LLU;
	static uint16_t x247 = UINT16_MAX;
	volatile int32_t t61 = 18252;

    t61 = (x245>(x246*(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x250 = UINT32_MAX;
	volatile int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MIN;
	int32_t t62 = -947399939;

    t62 = (x249>(x250*(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 33552094U;
	int32_t x254 = -1;
	int32_t x255 = INT32_MAX;
	static int64_t x256 = 78LL;
	volatile int32_t t63 = 3943;

    t63 = (x253>(x254*(x255>x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -1;
	int16_t x258 = -1;
	int32_t x259 = 6041727;
	uint32_t x260 = 1696121420U;
	volatile int32_t t64 = 5157341;

    t64 = (x257>(x258*(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 21U;
	uint64_t x262 = 41382073193769LLU;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 1;

    t65 = (x261>(x262*(x263>x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	volatile int64_t x266 = INT64_MIN;
	int32_t x267 = -1;
	static int32_t t66 = -187085054;

    t66 = (x265>(x266*(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x271 = 14087050LLU;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = -210104;

    t67 = (x269>(x270*(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	static int32_t t68 = -92304802;

    t68 = (x273>(x274*(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = 11324130;
	int16_t x280 = -6208;
	static int32_t t69 = -201347294;

    t69 = (x277>(x278*(x279>x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -11323196;
	volatile int32_t x282 = -3;
	int64_t x283 = -1LL;
	static int32_t t70 = 5963;

    t70 = (x281>(x282*(x283>x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = 19768722251203LL;
	int8_t x287 = -1;
	static int16_t x288 = INT16_MAX;
	int32_t t71 = 1783787;

    t71 = (x285>(x286*(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = 3U;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 11209;

    t72 = (x289>(x290*(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = INT32_MIN;
	static int8_t x295 = INT8_MAX;
	uint32_t x296 = 0U;
	int32_t t73 = -156580683;

    t73 = (x293>(x294*(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = INT16_MIN;
	int16_t x300 = -1;

    t74 = (x297>(x298*(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = 12487885U;
	static int8_t x302 = 1;
	static int8_t x303 = -1;
	int8_t x304 = INT8_MIN;

    t75 = (x301>(x302*(x303>x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	uint32_t x306 = 0U;
	static int32_t t76 = 276108948;

    t76 = (x305>(x306*(x307>x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	int8_t x310 = -3;
	static int16_t x311 = INT16_MAX;
	volatile int64_t x312 = -1LL;
	volatile int32_t t77 = 9800675;

    t77 = (x309>(x310*(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -76;
	int64_t x315 = 1639369032885585676LL;
	volatile int32_t t78 = -67971;

    t78 = (x313>(x314*(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 1175971LL;
	uint64_t x318 = 1369062LLU;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -1;

    t79 = (x317>(x318*(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -59980;
	uint8_t x322 = UINT8_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 92652;

    t80 = (x321>(x322*(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = INT8_MAX;
	static int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 43151891;

    t81 = (x325>(x326*(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	uint32_t x330 = UINT32_MAX;
	static uint16_t x331 = UINT16_MAX;

    t82 = (x329>(x330*(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 143213;

    t83 = (x333>(x334*(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MAX;
	uint8_t x338 = 48U;
	static uint16_t x339 = UINT16_MAX;
	static int8_t x340 = -1;
	int32_t t84 = -87;

    t84 = (x337>(x338*(x339>x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 903395;

    t85 = (x341>(x342*(x343>x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	int16_t x346 = -7345;
	uint16_t x347 = 806U;
	int16_t x348 = 407;

    t86 = (x345>(x346*(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 2;
	int16_t x350 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	int32_t t87 = 205325;

    t87 = (x349>(x350*(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = 403;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 621U;
	int32_t t88 = 13691796;

    t88 = (x353>(x354*(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x359 = INT32_MIN;

    t89 = (x357>(x358*(x359>x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 1;
	int32_t x362 = 447;
	static int64_t x363 = INT64_MIN;
	volatile int32_t t90 = 188503611;

    t90 = (x361>(x362*(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MAX;
	volatile int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MAX;
	int16_t x368 = 0;
	volatile int32_t t91 = 5615779;

    t91 = (x365>(x366*(x367>x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 15U;
	int64_t x370 = -4618934LL;
	int32_t x372 = 9682;
	int32_t t92 = -1867938;

    t92 = (x369>(x370*(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -3;
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	int32_t t93 = -9097176;

    t93 = (x373>(x374*(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -440;
	volatile uint32_t x379 = 6U;
	static volatile int32_t x380 = -2220833;

    t94 = (x377>(x378*(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	int32_t x382 = -58829;
	uint32_t x383 = 7430237U;
	int64_t x384 = INT64_MAX;
	int32_t t95 = 0;

    t95 = (x381>(x382*(x383>x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x386 = 7923U;
	static volatile uint32_t x387 = 106894994U;
	uint8_t x388 = 1U;
	volatile int32_t t96 = -22011956;

    t96 = (x385>(x386*(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	volatile int64_t x390 = INT64_MIN;
	volatile int16_t x391 = 0;
	int32_t t97 = -2804;

    t97 = (x389>(x390*(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = 0;
	volatile int8_t x394 = -1;
	int32_t x395 = -1;
	volatile int32_t t98 = 1;

    t98 = (x393>(x394*(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	volatile int16_t x399 = -649;
	volatile int32_t t99 = 239603179;

    t99 = (x397>(x398*(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	volatile int8_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	int64_t x404 = 5575150639243406LL;
	volatile int32_t t100 = -203391159;

    t100 = (x401>(x402*(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -1LL;
	volatile int16_t x408 = INT16_MAX;
	int32_t t101 = 0;

    t101 = (x405>(x406*(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	int32_t x411 = 728;

    t102 = (x409>(x410*(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x413 = -1LL;
	volatile int64_t x416 = INT64_MAX;
	int32_t t103 = 1;

    t103 = (x413>(x414*(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = 95U;
	int32_t x418 = 23626;
	int32_t x419 = INT32_MIN;
	int32_t x420 = 4319419;
	volatile int32_t t104 = -174;

    t104 = (x417>(x418*(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 4U;
	int32_t t105 = 94;

    t105 = (x421>(x422*(x423>x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = 32305463U;
	uint16_t x426 = 1088U;
	int64_t x428 = 5740672849650803LL;
	volatile int32_t t106 = -52017726;

    t106 = (x425>(x426*(x427>x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = 1;
	int64_t x430 = -943339762403155420LL;
	static volatile uint8_t x431 = 0U;
	int8_t x432 = -1;
	volatile int32_t t107 = -253651;

    t107 = (x429>(x430*(x431>x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	static volatile uint16_t x436 = 2U;
	volatile int32_t t108 = -755831;

    t108 = (x433>(x434*(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MAX;
	static int8_t x438 = 1;
	static uint32_t x439 = 1674U;
	int8_t x440 = -1;
	volatile int32_t t109 = -15;

    t109 = (x437>(x438*(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static uint8_t x443 = UINT8_MAX;
	int32_t t110 = 17340846;

    t110 = (x441>(x442*(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	static int8_t x446 = INT8_MIN;
	static int16_t x447 = -1;
	int64_t x448 = -1LL;
	static int32_t t111 = 0;

    t111 = (x445>(x446*(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x451 = INT32_MIN;
	volatile int32_t t112 = 184213744;

    t112 = (x449>(x450*(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1628125731554570LL;
	volatile uint64_t x455 = UINT64_MAX;
	int8_t x456 = INT8_MIN;
	volatile int32_t t113 = -3999547;

    t113 = (x453>(x454*(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	uint64_t x460 = 25661277208613738LLU;
	static volatile int32_t t114 = -8113;

    t114 = (x457>(x458*(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	int16_t x462 = -637;
	static uint8_t x463 = 0U;
	int16_t x464 = -1;
	static volatile int32_t t115 = 33486;

    t115 = (x461>(x462*(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 1723857517U;
	static int8_t x466 = -18;
	volatile int16_t x467 = 976;
	static uint32_t x468 = 127764430U;
	static int32_t t116 = -460902703;

    t116 = (x465>(x466*(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 1U;
	static uint32_t x470 = UINT32_MAX;
	int64_t x471 = INT64_MIN;
	uint8_t x472 = 53U;
	volatile int32_t t117 = 135337;

    t117 = (x469>(x470*(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -77064795768578406LL;
	static int16_t x475 = INT16_MIN;
	int32_t x476 = INT32_MAX;
	volatile int32_t t118 = 0;

    t118 = (x473>(x474*(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = 0LL;
	static volatile uint32_t x480 = UINT32_MAX;
	int32_t t119 = 10674;

    t119 = (x477>(x478*(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = UINT16_MAX;
	int8_t x482 = INT8_MIN;
	static volatile int32_t x483 = INT32_MIN;
	volatile uint8_t x484 = 81U;
	volatile int32_t t120 = 3492975;

    t120 = (x481>(x482*(x483>x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	uint32_t x486 = 318364U;
	int32_t x487 = -363;
	static int64_t x488 = -1LL;
	volatile int32_t t121 = -7375;

    t121 = (x485>(x486*(x487>x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x489 = UINT32_MAX;
	int64_t x490 = 10057221LL;
	volatile uint8_t x491 = 30U;
	int32_t x492 = -44550;
	int32_t t122 = -96057;

    t122 = (x489>(x490*(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -1;
	volatile uint32_t x495 = UINT32_MAX;
	int8_t x496 = 52;
	int32_t t123 = -262800;

    t123 = (x493>(x494*(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	static volatile int32_t x499 = INT32_MIN;
	int64_t x500 = -5266871LL;
	int32_t t124 = 4418;

    t124 = (x497>(x498*(x499>x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = INT64_MAX;
	int32_t x503 = INT32_MIN;
	volatile uint16_t x504 = 0U;
	volatile int32_t t125 = -44150078;

    t125 = (x501>(x502*(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile int32_t x506 = 14641792;
	int16_t x507 = INT16_MAX;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t126 = 840;

    t126 = (x505>(x506*(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	uint32_t x510 = UINT32_MAX;
	static int32_t x511 = INT32_MIN;
	uint64_t x512 = 7517134LLU;
	int32_t t127 = 1243;

    t127 = (x509>(x510*(x511>x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 1;
	int8_t x514 = 0;
	volatile int64_t x515 = INT64_MAX;
	int16_t x516 = 27;
	static int32_t t128 = 53;

    t128 = (x513>(x514*(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 2U;
	int64_t x518 = -2638499831LL;
	int8_t x519 = INT8_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	int32_t t129 = 834560;

    t129 = (x517>(x518*(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MAX;
	uint64_t x523 = 789LLU;
	int32_t t130 = -7670;

    t130 = (x521>(x522*(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = INT8_MIN;
	uint32_t x527 = 5U;
	int8_t x528 = -11;
	volatile int32_t t131 = -59794878;

    t131 = (x525>(x526*(x527>x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x529 = 2181625461228LL;
	static int8_t x530 = -3;
	static int8_t x531 = INT8_MIN;
	volatile int32_t t132 = 35498130;

    t132 = (x529>(x530*(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 36LLU;
	int16_t x534 = 24;
	int64_t x535 = 33LL;
	int32_t x536 = INT32_MAX;
	static int32_t t133 = -1;

    t133 = (x533>(x534*(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = UINT32_MAX;
	int8_t x538 = -2;
	volatile uint8_t x539 = 46U;
	volatile int8_t x540 = INT8_MAX;
	volatile int32_t t134 = -669;

    t134 = (x537>(x538*(x539>x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MAX;
	int64_t x542 = -6922LL;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t135 = -1838;

    t135 = (x541>(x542*(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 3U;
	int8_t x546 = -1;
	int64_t x547 = 3392816LL;
	int64_t x548 = -1LL;
	int32_t t136 = -2122991;

    t136 = (x545>(x546*(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static int64_t x550 = -4576547585688117018LL;
	int16_t x551 = INT16_MAX;
	uint32_t x552 = 1U;
	volatile int32_t t137 = -2;

    t137 = (x549>(x550*(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = 0;
	volatile int8_t x554 = -1;
	volatile uint32_t x555 = 943003402U;

    t138 = (x553>(x554*(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	int32_t x558 = INT32_MIN;
	int16_t x560 = 1;
	volatile int32_t t139 = -170618;

    t139 = (x557>(x558*(x559>x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x562 = 1118U;
	static uint16_t x564 = 3U;
	volatile int32_t t140 = -383976218;

    t140 = (x561>(x562*(x563>x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	int64_t x566 = -1LL;
	int64_t x567 = INT64_MIN;
	volatile uint8_t x568 = UINT8_MAX;
	volatile int32_t t141 = 3873;

    t141 = (x565>(x566*(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MIN;
	uint32_t x570 = 30U;
	int8_t x571 = INT8_MAX;

    t142 = (x569>(x570*(x571>x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 13U;
	int16_t x575 = -4;
	static int32_t x576 = INT32_MAX;
	static int32_t t143 = -27;

    t143 = (x573>(x574*(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	volatile uint32_t x578 = 67751U;
	static uint32_t x580 = 2768448U;
	static int32_t t144 = 1;

    t144 = (x577>(x578*(x579>x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x582 = 23544218LLU;
	int16_t x583 = -977;
	uint32_t x584 = 238667724U;
	volatile int32_t t145 = 175393497;

    t145 = (x581>(x582*(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = 2128U;
	uint64_t x586 = 77343283LLU;
	int8_t x587 = INT8_MIN;
	int16_t x588 = INT16_MIN;

    t146 = (x585>(x586*(x587>x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MAX;
	volatile int32_t t147 = -5335;

    t147 = (x589>(x590*(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = 28718;
	volatile int16_t x594 = INT16_MIN;
	static int16_t x595 = 3;
	int8_t x596 = INT8_MAX;
	volatile int32_t t148 = -238;

    t148 = (x593>(x594*(x595>x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 1906079153415196317LLU;
	uint16_t x598 = 20582U;
	static int8_t x599 = -1;
	volatile int32_t t149 = 491940450;

    t149 = (x597>(x598*(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = 73;
	int8_t x603 = -1;
	int32_t t150 = 737;

    t150 = (x601>(x602*(x603>x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x605 = 16U;
	uint16_t x606 = UINT16_MAX;
	uint64_t x607 = 157LLU;
	static uint8_t x608 = 1U;
	volatile int32_t t151 = 1;

    t151 = (x605>(x606*(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 50781017U;
	uint16_t x611 = 26521U;
	int32_t t152 = -1062822862;

    t152 = (x609>(x610*(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = UINT8_MAX;
	static int16_t x614 = INT16_MIN;
	int64_t x615 = -54LL;
	static volatile int64_t x616 = 16542001199763212LL;
	static volatile int32_t t153 = 63;

    t153 = (x613>(x614*(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -417317LL;
	volatile uint32_t x619 = 200U;

    t154 = (x617>(x618*(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x622 = 454848854LL;

    t155 = (x621>(x622*(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	uint32_t x626 = 102933U;
	static int16_t x627 = -7;
	volatile int16_t x628 = INT16_MIN;
	int32_t t156 = -2;

    t156 = (x625>(x626*(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x630 = INT32_MIN;
	static int64_t x632 = -77472653939338216LL;
	static int32_t t157 = 308;

    t157 = (x629>(x630*(x631>x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = 209323052;
	static int64_t x634 = 105807230LL;
	int16_t x635 = INT16_MIN;
	uint16_t x636 = UINT16_MAX;

    t158 = (x633>(x634*(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1065U;
	uint32_t x638 = 14476093U;
	volatile uint8_t x639 = UINT8_MAX;
	int32_t x640 = INT32_MIN;
	volatile int32_t t159 = -57;

    t159 = (x637>(x638*(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = INT8_MAX;
	uint64_t x643 = 17937329LLU;
	volatile uint16_t x644 = 4091U;
	volatile int32_t t160 = -1253;

    t160 = (x641>(x642*(x643>x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	volatile uint32_t x647 = UINT32_MAX;
	int16_t x648 = 0;
	int32_t t161 = -30382;

    t161 = (x645>(x646*(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x651 = -1;
	uint8_t x652 = UINT8_MAX;

    t162 = (x649>(x650*(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = 682;
	uint8_t x654 = 58U;
	uint8_t x655 = 120U;
	volatile int8_t x656 = INT8_MAX;

    t163 = (x653>(x654*(x655>x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = -1;
	int32_t x659 = INT32_MIN;
	static int32_t x660 = INT32_MIN;
	volatile int32_t t164 = 245465482;

    t164 = (x657>(x658*(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	int32_t x662 = 27805;
	volatile int16_t x663 = -1;
	int64_t x664 = 3607777233LL;
	static volatile int32_t t165 = 244066;

    t165 = (x661>(x662*(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x665 = 1U;
	uint8_t x666 = 7U;
	int8_t x667 = 14;
	static uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = -19;

    t166 = (x665>(x666*(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 128761244LL;
	int32_t x670 = -1;
	static uint32_t x671 = 1U;
	static int32_t t167 = -57540069;

    t167 = (x669>(x670*(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	uint16_t x674 = UINT16_MAX;
	int32_t x675 = INT32_MAX;
	int64_t x676 = -1170LL;
	int32_t t168 = 2;

    t168 = (x673>(x674*(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int16_t x678 = -9487;
	uint16_t x680 = 1U;
	volatile int32_t t169 = -3202;

    t169 = (x677>(x678*(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = 0;
	int64_t x682 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;
	int32_t t170 = 799;

    t170 = (x681>(x682*(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = 123821U;
	uint16_t x688 = 42U;
	int32_t t171 = -119380;

    t171 = (x685>(x686*(x687>x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x690 = 1U;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = 11577328;

    t172 = (x689>(x690*(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x694 = INT8_MIN;
	volatile int64_t x695 = -1LL;
	uint16_t x696 = 18245U;
	volatile int32_t t173 = 1;

    t173 = (x693>(x694*(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 4520204U;
	volatile int8_t x698 = -1;
	int16_t x699 = INT16_MIN;
	volatile int64_t x700 = -1LL;

    t174 = (x697>(x698*(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MIN;
	uint64_t x703 = UINT64_MAX;
	int32_t x704 = INT32_MAX;

    t175 = (x701>(x702*(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int8_t x706 = INT8_MAX;
	uint8_t x707 = UINT8_MAX;
	int16_t x708 = INT16_MIN;
	static volatile int32_t t176 = 2037;

    t176 = (x705>(x706*(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = -1LL;
	int16_t x710 = 13;
	uint16_t x712 = 0U;
	volatile int32_t t177 = -980824;

    t177 = (x709>(x710*(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = -8308;
	uint8_t x715 = 2U;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t178 = -18975;

    t178 = (x713>(x714*(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 74U;
	int32_t x719 = -3446;
	volatile int64_t x720 = INT64_MIN;

    t179 = (x717>(x718*(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -23452415125650046LL;
	volatile int64_t x722 = INT64_MIN;
	int32_t x724 = 18;
	int32_t t180 = 99766;

    t180 = (x721>(x722*(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	volatile int64_t x726 = 13442080988LL;
	int8_t x727 = INT8_MIN;
	volatile int32_t t181 = -3633;

    t181 = (x725>(x726*(x727>x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	volatile int64_t x731 = -29LL;
	static volatile uint16_t x732 = 24502U;
	int32_t t182 = -36850;

    t182 = (x729>(x730*(x731>x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = -1;
	int16_t x735 = 0;
	static uint16_t x736 = 16U;
	volatile int32_t t183 = 41;

    t183 = (x733>(x734*(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x740 = -158443535;
	static volatile int32_t t184 = 5649032;

    t184 = (x737>(x738*(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x741 = UINT16_MAX;
	static int32_t x743 = INT32_MIN;
	uint16_t x744 = 11U;
	int32_t t185 = -159674;

    t185 = (x741>(x742*(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = 499;
	int32_t x747 = 7;
	static int64_t x748 = INT64_MAX;

    t186 = (x745>(x746*(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = -1LL;
	uint32_t x750 = UINT32_MAX;
	int32_t x751 = -1;
	int32_t t187 = -1;

    t187 = (x749>(x750*(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	uint16_t x754 = 8U;
	volatile int32_t x755 = -1;
	int32_t x756 = INT32_MAX;
	int32_t t188 = -106135434;

    t188 = (x753>(x754*(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 457454LL;
	int16_t x758 = -329;
	static int32_t x759 = -1870854;
	volatile int64_t x760 = -1LL;

    t189 = (x757>(x758*(x759>x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 266838078762745LLU;
	volatile uint16_t x763 = UINT16_MAX;
	static volatile int16_t x764 = INT16_MIN;

    t190 = (x761>(x762*(x763>x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 904824562U;
	static uint16_t x767 = UINT16_MAX;
	volatile int64_t x768 = INT64_MAX;
	int32_t t191 = 6;

    t191 = (x765>(x766*(x767>x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x769 = UINT32_MAX;
	volatile int16_t x770 = INT16_MIN;
	int32_t x771 = INT32_MIN;
	int16_t x772 = INT16_MIN;
	volatile int32_t t192 = 34016864;

    t192 = (x769>(x770*(x771>x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	volatile int64_t x774 = 2015382079466092LL;
	static uint16_t x775 = 524U;
	volatile int32_t t193 = 215;

    t193 = (x773>(x774*(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 141391438U;
	volatile uint16_t x778 = UINT16_MAX;
	static uint16_t x779 = UINT16_MAX;
	uint16_t x780 = 1266U;
	volatile int32_t t194 = 144;

    t194 = (x777>(x778*(x779>x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x781 = -1;
	int32_t x782 = INT32_MIN;
	volatile int64_t x783 = -1LL;
	static int32_t t195 = 9;

    t195 = (x781>(x782*(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	uint64_t x786 = 15234714LLU;
	volatile int8_t x787 = INT8_MIN;
	uint8_t x788 = 58U;
	static volatile int32_t t196 = -1;

    t196 = (x785>(x786*(x787>x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MIN;
	static int8_t x790 = INT8_MIN;
	volatile uint16_t x791 = 128U;
	int64_t x792 = INT64_MAX;
	volatile int32_t t197 = -1900;

    t197 = (x789>(x790*(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -5;
	uint8_t x794 = 2U;
	uint16_t x796 = 6145U;
	int32_t t198 = 3203733;

    t198 = (x793>(x794*(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = INT8_MAX;
	volatile uint16_t x799 = UINT16_MAX;

    t199 = (x797>(x798*(x799>x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

