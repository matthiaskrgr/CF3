
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

static uint64_t x1 = 117680LLU;
static volatile uint8_t x2 = 7U;
int8_t x13 = -1;
volatile int32_t t3 = -82;
int8_t x23 = -6;
uint64_t x24 = 41458651611LLU;
static int16_t x27 = -1;
uint64_t x35 = 6072LLU;
uint16_t x50 = UINT16_MAX;
uint8_t x51 = 1U;
uint64_t x52 = 232979995725941LLU;
volatile int32_t x54 = 4041506;
uint64_t t11 = 366752LLU;
volatile int8_t x64 = INT8_MIN;
int8_t x65 = 11;
int8_t x66 = 0;
int64_t x74 = INT64_MIN;
static int32_t t16 = 362360126;
static uint64_t x78 = UINT64_MAX;
volatile uint64_t t17 = 41LLU;
int16_t x96 = -7;
int32_t x98 = -2;
uint8_t x103 = UINT8_MAX;
int32_t t23 = 29;
static int8_t x108 = INT8_MIN;
int8_t x109 = -2;
int64_t x112 = 697LL;
int64_t x116 = 14462LL;
int64_t x118 = -379373079811035LL;
uint32_t x135 = 1U;
int8_t x142 = INT8_MAX;
static int64_t x146 = INT64_MIN;
static uint16_t x148 = 38U;
static uint8_t x149 = UINT8_MAX;
volatile int32_t x157 = 80;
static int16_t x159 = 9;
int64_t x161 = INT64_MAX;
static uint16_t x165 = 2U;
int32_t t38 = 358599336;
int64_t x172 = INT64_MIN;
uint64_t x173 = 57812693375763837LLU;
uint64_t t40 = 15747140462LLU;
uint32_t x178 = 14614U;
volatile int16_t x181 = -168;
volatile uint64_t x183 = UINT64_MAX;
int64_t x186 = INT64_MIN;
volatile uint64_t t43 = 131006409499194345LLU;
static int32_t t44 = 755;
static int16_t x193 = INT16_MAX;
static int32_t x196 = INT32_MIN;
int32_t t45 = -927;
int32_t t46 = -8579569;
int16_t x201 = INT16_MAX;
volatile int16_t x208 = -1;
uint32_t x215 = 104686U;
int8_t x222 = -2;
uint32_t x223 = UINT32_MAX;
uint64_t x236 = 2478389LLU;
volatile uint32_t t55 = 360002853U;
uint32_t x238 = UINT32_MAX;
volatile int32_t t59 = -14936153;
static uint64_t x257 = 352597684LLU;
volatile int32_t x260 = -154192224;
uint8_t x262 = 0U;
int8_t x263 = INT8_MIN;
int32_t x269 = 373677544;
int8_t x273 = 0;
static int32_t x279 = INT32_MIN;
int32_t t67 = -57578;
static volatile int8_t x287 = INT8_MIN;
volatile int32_t t68 = -278500;
volatile uint16_t x289 = UINT16_MAX;
int32_t x290 = INT32_MIN;
uint16_t x294 = 0U;
int8_t x298 = INT8_MIN;
uint64_t t71 = 27372LLU;
uint8_t x303 = UINT8_MAX;
int8_t x304 = -6;
uint16_t x306 = UINT16_MAX;
int32_t x310 = -1;
int32_t t74 = -233414;
int16_t x316 = -1;
uint64_t x323 = 159304LLU;
volatile uint32_t x330 = 687U;
volatile int16_t x331 = INT16_MIN;
volatile uint64_t x332 = 378LLU;
int8_t x336 = INT8_MIN;
static int32_t x338 = -1060374;
uint8_t x345 = UINT8_MAX;
volatile int64_t x349 = INT64_MAX;
volatile int64_t x350 = 24443079070695LL;
int32_t x352 = INT32_MIN;
int16_t x353 = INT16_MIN;
static int16_t x356 = INT16_MIN;
uint16_t x374 = 13917U;
volatile int64_t t89 = -128770700992717LL;
uint64_t x378 = 29012199501LLU;
int64_t x380 = 6LL;
static volatile int16_t x396 = INT16_MIN;
volatile uint32_t t93 = 2299U;
static int64_t x407 = -1832693729LL;
static int8_t x414 = INT8_MIN;
uint16_t x415 = UINT16_MAX;
uint64_t x416 = 3484705301505LLU;
int8_t x418 = 3;
int64_t x422 = INT64_MAX;
uint64_t x425 = 11473LLU;
static int8_t x427 = -31;
int32_t t101 = -28;
volatile int8_t x464 = INT8_MIN;
volatile int16_t x466 = 318;
static uint64_t x468 = 52567590430LLU;
int32_t x475 = INT32_MIN;
static int64_t x483 = INT64_MIN;
int8_t x488 = -5;
static int32_t t110 = 2214;
uint32_t x492 = UINT32_MAX;
volatile int32_t t112 = -209;
int16_t x505 = INT16_MIN;
uint32_t x512 = 235793406U;
int32_t t116 = -320;
uint32_t x513 = UINT32_MAX;
uint32_t x517 = UINT32_MAX;
volatile uint32_t t120 = 615477U;
int64_t x531 = INT64_MIN;
int32_t t121 = 30212117;
int32_t t122 = -515364318;
static int64_t x539 = -1LL;
volatile uint32_t x550 = 12992606U;
volatile int64_t x554 = INT64_MIN;
static int32_t x558 = INT32_MIN;
uint32_t x559 = 1148U;
static uint64_t x561 = 15334525LLU;
static volatile uint64_t t128 = 5304741847246LLU;
int32_t x568 = INT32_MIN;
int64_t x575 = -1LL;
int32_t t131 = -62353;
static int16_t x581 = INT16_MAX;
int64_t x583 = 2907243LL;
int16_t x585 = INT16_MAX;
int16_t x589 = -1;
int16_t x600 = INT16_MIN;
static int16_t x601 = -221;
volatile int8_t x602 = -1;
int32_t x607 = INT32_MIN;
uint32_t t139 = 88832U;
int32_t x621 = 5;
uint64_t x623 = UINT64_MAX;
uint32_t x625 = 59U;
uint64_t x629 = 186828439625LLU;
uint64_t x639 = UINT64_MAX;
static uint16_t x647 = 46U;
volatile uint32_t x653 = 36U;
volatile uint32_t t148 = 5847095U;
int64_t x664 = 277LL;
volatile int8_t x665 = INT8_MIN;
int8_t x666 = INT8_MAX;
volatile int32_t t155 = 980523;
volatile uint32_t x686 = 2705U;
static int8_t x688 = INT8_MIN;
int32_t t156 = 208;
volatile int16_t x693 = -6259;
int32_t x702 = INT32_MAX;
int64_t x703 = INT64_MIN;
static int16_t x709 = INT16_MIN;
uint16_t x712 = 1747U;
int16_t x714 = -1;
static int64_t x715 = 214620603483542LL;
volatile uint32_t t163 = 1452915868U;
static uint64_t x719 = UINT64_MAX;
int16_t x723 = INT16_MIN;
uint16_t x726 = 156U;
volatile int32_t t168 = -111619758;
static int16_t x737 = -11;
static int32_t x739 = -1;
int64_t x745 = -1LL;
int32_t x750 = INT32_MAX;
int8_t x751 = -3;
static volatile uint32_t x756 = 1765744U;
static int32_t t173 = -7;
int32_t x761 = 812;
int8_t x763 = INT8_MIN;
int32_t x764 = INT32_MIN;
static uint32_t x765 = 84915U;
uint16_t x767 = 1961U;
volatile int8_t x770 = 0;
int64_t x771 = -1LL;
int64_t x772 = -24706171721LL;
int32_t x777 = -609;
static uint16_t x785 = UINT16_MAX;
uint16_t x786 = UINT16_MAX;
int16_t x790 = 1492;
int16_t x792 = -87;
uint64_t t182 = 381406451LLU;
volatile uint32_t t183 = 275708713U;
volatile int64_t t184 = 2164292649393408331LL;
int16_t x809 = -1;
volatile int32_t t185 = 1;
int64_t x816 = -309024501628244141LL;
int32_t t186 = 4079;
int8_t x833 = -1;
int8_t x835 = INT8_MIN;
uint8_t x836 = UINT8_MAX;
volatile int64_t x861 = -31959LL;
uint16_t x864 = 75U;
uint32_t x872 = 359468171U;
static uint64_t x873 = UINT64_MAX;
uint32_t x876 = 32083U;
static volatile uint32_t x887 = UINT32_MAX;


void f0(void) {
    	int16_t x3 = INT16_MAX;
	uint16_t x4 = 14340U;
	static volatile uint64_t t0 = 281234811007171198LLU;

    t0 = (x1-(x2!=(x3>x4)));

    if (t0 != 117679LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = 3;
	int32_t x10 = 6;
	int64_t x11 = INT64_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -45991368;

    t1 = (x9-(x10!=(x11>x12)));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	static volatile int32_t x16 = 43781;
	volatile int32_t t2 = -6298187;

    t2 = (x13-(x14!=(x15>x16)));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MIN;
	volatile int64_t x19 = -29392220702751LL;
	volatile uint16_t x20 = 73U;

    t3 = (x17-(x18!=(x19>x20)));

    if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	uint32_t x22 = 7267333U;
	static volatile int32_t t4 = -18;

    t4 = (x21-(x22!=(x23>x24)));

    if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 4413;
	int32_t x26 = -16194395;
	int32_t x28 = INT32_MAX;
	static volatile int32_t t5 = -95748;

    t5 = (x25-(x26!=(x27>x28)));

    if (t5 != 4412) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -787;
	uint64_t x30 = 89986709LLU;
	int8_t x31 = 3;
	int32_t x32 = -1;
	static volatile int32_t t6 = -1;

    t6 = (x29-(x30!=(x31>x32)));

    if (t6 != -788) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = -94719;
	int16_t x34 = INT16_MAX;
	uint64_t x36 = 5LLU;
	static volatile int32_t t7 = -827;

    t7 = (x33-(x34!=(x35>x36)));

    if (t7 != -94720) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	int64_t x39 = 260431122765026LL;
	static uint32_t x40 = UINT32_MAX;
	int32_t t8 = -27;

    t8 = (x37-(x38!=(x39>x40)));

    if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x45 = INT8_MAX;
	uint32_t x46 = 2U;
	static int64_t x47 = 319LL;
	int8_t x48 = -16;
	volatile int32_t t9 = 4442;

    t9 = (x45-(x46!=(x47>x48)));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	static volatile int32_t t10 = -162055589;

    t10 = (x49-(x50!=(x51>x52)));

    if (t10 != -32769) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 357948123768949706LLU;
	volatile uint8_t x55 = 4U;
	uint64_t x56 = 2387628108086033383LLU;

    t11 = (x53-(x54!=(x55>x56)));

    if (t11 != 357948123768949705LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x57 = -34;
	volatile uint32_t x58 = UINT32_MAX;
	static uint32_t x59 = 2803503U;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t12 = 482422;

    t12 = (x57-(x58!=(x59>x60)));

    if (t12 != -35) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x61 = 183U;
	int64_t x62 = -1LL;
	volatile int8_t x63 = INT8_MIN;
	static volatile uint32_t t13 = 547U;

    t13 = (x61-(x62!=(x63>x64)));

    if (t13 != 182U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x67 = -1;
	uint64_t x68 = 214641LLU;
	volatile int32_t t14 = -15889;

    t14 = (x65-(x66!=(x67>x68)));

    if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x69 = -1;
	int16_t x70 = 687;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t15 = 64523;

    t15 = (x69-(x70!=(x71>x72)));

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = UINT16_MAX;
	int64_t x75 = INT64_MIN;
	int64_t x76 = -1LL;

    t16 = (x73-(x74!=(x75>x76)));

    if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x77 = 1261006LLU;
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = -7438138150LL;

    t17 = (x77-(x78!=(x79>x80)));

    if (t17 != 1261005LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x81 = 0U;
	uint16_t x82 = 453U;
	volatile int16_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t18 = 222786706;

    t18 = (x81-(x82!=(x83>x84)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 7U;
	volatile int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	int32_t t19 = 1583;

    t19 = (x85-(x86!=(x87>x88)));

    if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 21;
	uint8_t x91 = 88U;
	volatile int32_t x92 = INT32_MIN;
	int32_t t20 = -1;

    t20 = (x89-(x90!=(x91>x92)));

    if (t20 != -129) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 5585784259940312756LLU;
	int64_t x94 = INT64_MIN;
	static uint8_t x95 = UINT8_MAX;
	uint64_t t21 = 5821077607LLU;

    t21 = (x93-(x94!=(x95>x96)));

    if (t21 != 5585784259940312755LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x97 = 63272LLU;
	volatile uint16_t x99 = UINT16_MAX;
	static volatile int16_t x100 = -1;
	volatile uint64_t t22 = 1780990LLU;

    t22 = (x97-(x98!=(x99>x100)));

    if (t22 != 63271LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -1;
	uint16_t x102 = 3346U;
	volatile uint64_t x104 = 4409LLU;

    t23 = (x101-(x102!=(x103>x104)));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 51;
	static int64_t x106 = INT64_MAX;
	volatile uint64_t x107 = UINT64_MAX;
	volatile int32_t t24 = 3;

    t24 = (x105-(x106!=(x107>x108)));

    if (t24 != 50) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = INT32_MAX;
	volatile int32_t x111 = -1;
	volatile int32_t t25 = 321953;

    t25 = (x109-(x110!=(x111>x112)));

    if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	int64_t x114 = 15162560115536LL;
	uint16_t x115 = 1U;
	volatile int32_t t26 = 12455;

    t26 = (x113-(x114!=(x115>x116)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = 5748573LL;
	static volatile int16_t x119 = INT16_MIN;
	static int64_t x120 = INT64_MIN;
	int64_t t27 = 1924301215262105LL;

    t27 = (x117-(x118!=(x119>x120)));

    if (t27 != 5748572LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = -1LL;
	int64_t x122 = -1LL;
	int16_t x123 = -3446;
	static int32_t x124 = -1;
	volatile int64_t t28 = 27012909835LL;

    t28 = (x121-(x122!=(x123>x124)));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MAX;
	int8_t x127 = 0;
	volatile int64_t x128 = -271278LL;
	static volatile int64_t t29 = -33525523929763457LL;

    t29 = (x125-(x126!=(x127>x128)));

    if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MAX;
	uint16_t x130 = UINT16_MAX;
	uint16_t x131 = 2U;
	volatile int32_t x132 = INT32_MIN;
	static int32_t t30 = 6974041;

    t30 = (x129-(x130!=(x131>x132)));

    if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x133 = 2U;
	int16_t x134 = INT16_MIN;
	int8_t x136 = 12;
	volatile int32_t t31 = 96;

    t31 = (x133-(x134!=(x135>x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = 7890277LLU;
	volatile uint32_t x138 = UINT32_MAX;
	int64_t x139 = 36984LL;
	uint8_t x140 = UINT8_MAX;
	volatile uint64_t t32 = 2594407277605981180LLU;

    t32 = (x137-(x138!=(x139>x140)));

    if (t32 != 7890276LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -290004008LL;
	static int32_t t33 = -160;

    t33 = (x141-(x142!=(x143>x144)));

    if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x145 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	static int32_t t34 = -970867332;

    t34 = (x145-(x146!=(x147>x148)));

    if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x150 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = -1LL;
	int32_t t35 = 13205;

    t35 = (x149-(x150!=(x151>x152)));

    if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x158 = INT32_MIN;
	volatile int32_t x160 = -1;
	volatile int32_t t36 = 34349798;

    t36 = (x157-(x158!=(x159>x160)));

    if (t36 != 79) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x162 = 68U;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MAX;
	int64_t t37 = 163684767989634LL;

    t37 = (x161-(x162!=(x163>x164)));

    if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = 63;
	uint64_t x168 = 7LLU;

    t38 = (x165-(x166!=(x167>x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -1LL;
	static uint8_t x170 = 15U;
	int8_t x171 = INT8_MAX;
	volatile int64_t t39 = 60505133LL;

    t39 = (x169-(x170!=(x171>x172)));

    if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x174 = INT8_MIN;
	uint8_t x175 = 14U;
	int8_t x176 = 44;

    t40 = (x173-(x174!=(x175>x176)));

    if (t40 != 57812693375763836LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint32_t x177 = UINT32_MAX;
	uint64_t x179 = 784684667904546490LLU;
	static volatile int16_t x180 = 1;
	uint32_t t41 = 731U;

    t41 = (x177-(x178!=(x179>x180)));

    if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = INT32_MIN;
	int64_t x184 = -1LL;
	static volatile int32_t t42 = -4037549;

    t42 = (x181-(x182!=(x183>x184)));

    if (t42 != -169) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = UINT64_MAX;
	int16_t x187 = INT16_MAX;
	volatile uint16_t x188 = UINT16_MAX;

    t43 = (x185-(x186!=(x187>x188)));

    if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	static int32_t x190 = INT32_MIN;
	int16_t x191 = 0;
	int64_t x192 = -1LL;

    t44 = (x189-(x190!=(x191>x192)));

    if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x194 = 238U;
	int64_t x195 = -1304020683LL;

    t45 = (x193-(x194!=(x195>x196)));

    if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = 898;
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = -16912694774LL;
	uint16_t x200 = 1742U;

    t46 = (x197-(x198!=(x199>x200)));

    if (t46 != 897) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MAX;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t47 = 32733;

    t47 = (x201-(x202!=(x203>x204)));

    if (t47 != 32766) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x205 = 39253638LLU;
	volatile uint16_t x206 = 2506U;
	volatile int64_t x207 = INT64_MIN;
	uint64_t t48 = 3772617573LLU;

    t48 = (x205-(x206!=(x207>x208)));

    if (t48 != 39253637LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = 0;
	static int64_t x210 = -1LL;
	static int16_t x211 = INT16_MAX;
	int8_t x212 = -4;
	volatile int32_t t49 = 589143172;

    t49 = (x209-(x210!=(x211>x212)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = INT8_MIN;
	static uint64_t x214 = 47LLU;
	volatile int16_t x216 = INT16_MIN;
	int32_t t50 = 9622;

    t50 = (x213-(x214!=(x215>x216)));

    if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x217 = 642U;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MAX;
	static int8_t x220 = 58;
	uint32_t t51 = 37756143U;

    t51 = (x217-(x218!=(x219>x220)));

    if (t51 != 641U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t52 = 1819915814LLU;

    t52 = (x221-(x222!=(x223>x224)));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x225 = 107U;
	int8_t x226 = INT8_MIN;
	static uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t53 = -7930616;

    t53 = (x225-(x226!=(x227>x228)));

    if (t53 != 106) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x229 = INT32_MAX;
	static int16_t x230 = -825;
	int8_t x231 = -24;
	int64_t x232 = 19LL;
	static int32_t t54 = -12909;

    t54 = (x229-(x230!=(x231>x232)));

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x233 = 4273U;
	int8_t x234 = 43;
	static int64_t x235 = INT64_MIN;

    t55 = (x233-(x234!=(x235>x236)));

    if (t55 != 4272U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x237 = UINT64_MAX;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1002228027431LL;
	uint64_t t56 = 57766428992LLU;

    t56 = (x237-(x238!=(x239>x240)));

    if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x241 = 4499U;
	int16_t x242 = INT16_MAX;
	int8_t x243 = 51;
	volatile int8_t x244 = 0;
	volatile int32_t t57 = -46421109;

    t57 = (x241-(x242!=(x243>x244)));

    if (t57 != 4498) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = INT16_MAX;
	int32_t x246 = 0;
	int32_t x247 = INT32_MAX;
	int16_t x248 = 23;
	int32_t t58 = 368;

    t58 = (x245-(x246!=(x247>x248)));

    if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MAX;
	volatile int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 0;

    t59 = (x249-(x250!=(x251>x252)));

    if (t59 != 126) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x253 = -7;
	uint8_t x254 = 41U;
	int16_t x255 = INT16_MIN;
	static uint8_t x256 = 49U;
	volatile int32_t t60 = 9545;

    t60 = (x253-(x254!=(x255>x256)));

    if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x258 = INT8_MAX;
	volatile int8_t x259 = 0;
	volatile uint64_t t61 = 39160825LLU;

    t61 = (x257-(x258!=(x259>x260)));

    if (t61 != 352597683LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x261 = INT64_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t62 = INT64_MIN;

    t62 = (x261-(x262!=(x263>x264)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x265 = INT64_MAX;
	int32_t x266 = -290064;
	volatile uint16_t x267 = UINT16_MAX;
	uint8_t x268 = 0U;
	int64_t t63 = -4330192446035138LL;

    t63 = (x265-(x266!=(x267>x268)));

    if (t63 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x270 = INT16_MAX;
	uint64_t x271 = 32868349018960LLU;
	int8_t x272 = -1;
	volatile int32_t t64 = -38;

    t64 = (x269-(x270!=(x271>x272)));

    if (t64 != 373677543) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x274 = -1;
	int32_t x275 = INT32_MAX;
	int32_t x276 = -16731488;
	int32_t t65 = -227782936;

    t65 = (x273-(x274!=(x275>x276)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	static int64_t x280 = INT64_MAX;
	volatile int32_t t66 = -317680;

    t66 = (x277-(x278!=(x279>x280)));

    if (t66 != -32769) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -10171;
	volatile uint32_t x282 = 1656773074U;
	int16_t x283 = INT16_MAX;
	uint32_t x284 = 2U;

    t67 = (x281-(x282!=(x283>x284)));

    if (t67 != -10172) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = -971979;
	uint8_t x286 = UINT8_MAX;
	static volatile uint16_t x288 = UINT16_MAX;

    t68 = (x285-(x286!=(x287>x288)));

    if (t68 != -971980) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x291 = 6589;
	uint8_t x292 = 83U;
	volatile int32_t t69 = -3861921;

    t69 = (x289-(x290!=(x291>x292)));

    if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -28424846988670256LL;
	uint32_t x295 = 6858583U;
	int32_t x296 = -1;
	int64_t t70 = -4014630149349400440LL;

    t70 = (x293-(x294!=(x295>x296)));

    if (t70 != -28424846988670256LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x299 = -1LL;
	static int32_t x300 = 16;

    t71 = (x297-(x298!=(x299>x300)));

    if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = -1;
	static int8_t x302 = -1;
	int32_t t72 = 749614;

    t72 = (x301-(x302!=(x303>x304)));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x305 = -1LL;
	volatile int64_t x307 = -1904LL;
	int16_t x308 = 1;
	int64_t t73 = -79285LL;

    t73 = (x305-(x306!=(x307>x308)));

    if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MAX;

    t74 = (x309-(x310!=(x311>x312)));

    if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 2U;
	int32_t x315 = INT32_MIN;
	uint64_t t75 = 7890490996363LLU;

    t75 = (x313-(x314!=(x315>x316)));

    if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = 1U;
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	uint16_t x320 = 98U;
	static int32_t t76 = -23944;

    t76 = (x317-(x318!=(x319>x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x321 = -22;
	volatile uint32_t x322 = 1801311539U;
	uint8_t x324 = 13U;
	volatile int32_t t77 = 2124;

    t77 = (x321-(x322!=(x323>x324)));

    if (t77 != -23) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = -1;
	static int16_t x326 = -1;
	int16_t x327 = -2;
	int64_t x328 = INT64_MIN;
	volatile int32_t t78 = -7031;

    t78 = (x325-(x326!=(x327>x328)));

    if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 416319U;
	uint32_t t79 = 11U;

    t79 = (x329-(x330!=(x331>x332)));

    if (t79 != 416318U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 1U;
	volatile uint32_t x335 = UINT32_MAX;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (x333-(x334!=(x335>x336)));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = -1;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = 2U;
	volatile int32_t t81 = 151;

    t81 = (x337-(x338!=(x339>x340)));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x346 = UINT8_MAX;
	static uint8_t x347 = 2U;
	int8_t x348 = INT8_MIN;
	int32_t t82 = -2028134;

    t82 = (x345-(x346!=(x347>x348)));

    if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x351 = 0;
	int64_t t83 = 539083LL;

    t83 = (x349-(x350!=(x351>x352)));

    if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x354 = INT8_MIN;
	int64_t x355 = 541881000094LL;
	volatile int32_t t84 = 11870630;

    t84 = (x353-(x354!=(x355>x356)));

    if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	int16_t x359 = 2753;
	static int64_t x360 = -17843LL;
	static volatile int32_t t85 = 3660;

    t85 = (x357-(x358!=(x359>x360)));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x361 = 62518372U;
	static int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	static volatile uint32_t t86 = 402845U;

    t86 = (x361-(x362!=(x363>x364)));

    if (t86 != 62518371U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x366 = -1;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t87 = -6367;

    t87 = (x365-(x366!=(x367>x368)));

    if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x369 = 25;
	uint64_t x370 = 102116849LLU;
	static volatile uint8_t x371 = 31U;
	int64_t x372 = INT64_MIN;
	int32_t t88 = -331617;

    t88 = (x369-(x370!=(x371>x372)));

    if (t88 != 24) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MAX;
	static uint32_t x375 = UINT32_MAX;
	volatile int64_t x376 = INT64_MAX;

    t89 = (x373-(x374!=(x375>x376)));

    if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x377 = 35484666U;
	uint8_t x379 = 52U;
	volatile uint32_t t90 = 43461U;

    t90 = (x377-(x378!=(x379>x380)));

    if (t90 != 35484665U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MIN;
	static volatile int16_t x384 = -1;
	volatile int32_t t91 = -826254;

    t91 = (x381-(x382!=(x383>x384)));

    if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x393 = 198864U;
	int32_t x394 = 3;
	int32_t x395 = INT32_MIN;
	static uint32_t t92 = 59490574U;

    t92 = (x393-(x394!=(x395>x396)));

    if (t92 != 198863U) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x397 = 97U;
	int16_t x398 = INT16_MIN;
	int32_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;

    t93 = (x397-(x398!=(x399>x400)));

    if (t93 != 96U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t94 = 602LLU;

    t94 = (x401-(x402!=(x403>x404)));

    if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x405 = 30;
	int32_t x406 = INT32_MAX;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t95 = 48445506;

    t95 = (x405-(x406!=(x407>x408)));

    if (t95 != 29) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x409 = UINT64_MAX;
	static uint16_t x410 = 17330U;
	int32_t x411 = -1;
	uint8_t x412 = UINT8_MAX;
	uint64_t t96 = 11LLU;

    t96 = (x409-(x410!=(x411>x412)));

    if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x413 = -1;
	int32_t t97 = 3251;

    t97 = (x413-(x414!=(x415>x416)));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x417 = -5;
	int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t98 = 1195552;

    t98 = (x417-(x418!=(x419>x420)));

    if (t98 != -6) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x421 = INT16_MIN;
	int8_t x423 = INT8_MAX;
	uint64_t x424 = 9375865LLU;
	int32_t t99 = 0;

    t99 = (x421-(x422!=(x423>x424)));

    if (t99 != -32769) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x426 = -28498355LL;
	static int32_t x428 = INT32_MIN;
	volatile uint64_t t100 = 606439556266316090LLU;

    t100 = (x425-(x426!=(x427>x428)));

    if (t100 != 11472LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x429 = 1U;
	volatile int8_t x430 = INT8_MIN;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = -31;

    t101 = (x429-(x430!=(x431>x432)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = 0;
	uint32_t x434 = 9691503U;
	uint16_t x435 = 0U;
	static int64_t x436 = INT64_MIN;
	int32_t t102 = 329684;

    t102 = (x433-(x434!=(x435>x436)));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x437 = 6;
	static volatile int8_t x438 = INT8_MAX;
	uint32_t x439 = 3161U;
	static int64_t x440 = -1LL;
	int32_t t103 = -18288185;

    t103 = (x437-(x438!=(x439>x440)));

    if (t103 != 5) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x445 = INT8_MIN;
	int64_t x446 = 208823393384LL;
	int8_t x447 = -19;
	int16_t x448 = INT16_MIN;
	int32_t t104 = 1416;

    t104 = (x445-(x446!=(x447>x448)));

    if (t104 != -129) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x461 = INT8_MAX;
	int64_t x462 = 18051451LL;
	int32_t x463 = INT32_MAX;
	static volatile int32_t t105 = -1751249;

    t105 = (x461-(x462!=(x463>x464)));

    if (t105 != 126) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x465 = 1U;
	volatile uint64_t x467 = 387743107101396404LLU;
	int32_t t106 = 14892989;

    t106 = (x465-(x466!=(x467>x468)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x469 = -205;
	uint32_t x470 = 1030U;
	static uint64_t x471 = UINT64_MAX;
	volatile uint64_t x472 = 3595443786152445LLU;
	volatile int32_t t107 = 1014920;

    t107 = (x469-(x470!=(x471>x472)));

    if (t107 != -206) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x473 = -57622;
	int16_t x474 = -19;
	int8_t x476 = -7;
	static int32_t t108 = 358;

    t108 = (x473-(x474!=(x475>x476)));

    if (t108 != -57623) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x481 = INT32_MIN;
	volatile int16_t x482 = 0;
	int64_t x484 = 52LL;
	volatile int32_t t109 = INT32_MIN;

    t109 = (x481-(x482!=(x483>x484)));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = INT8_MAX;
	static volatile uint16_t x486 = 2U;
	uint32_t x487 = 31261324U;

    t110 = (x485-(x486!=(x487>x488)));

    if (t110 != 126) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x489 = 773577429769LLU;
	volatile int16_t x490 = -3221;
	int16_t x491 = 2;
	static volatile uint64_t t111 = 21580LLU;

    t111 = (x489-(x490!=(x491>x492)));

    if (t111 != 773577429768LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	static volatile uint32_t x495 = UINT32_MAX;
	uint16_t x496 = 1305U;

    t112 = (x493-(x494!=(x495>x496)));

    if (t112 != -129) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x497 = INT8_MAX;
	int16_t x498 = 0;
	uint64_t x499 = UINT64_MAX;
	static int32_t x500 = 457;
	static volatile int32_t t113 = 149767769;

    t113 = (x497-(x498!=(x499>x500)));

    if (t113 != 126) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x501 = INT16_MIN;
	static int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	int64_t x504 = INT64_MAX;
	int32_t t114 = 751535;

    t114 = (x501-(x502!=(x503>x504)));

    if (t114 != -32769) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x506 = UINT32_MAX;
	uint8_t x507 = 40U;
	static int16_t x508 = INT16_MAX;
	static int32_t t115 = 192571925;

    t115 = (x505-(x506!=(x507>x508)));

    if (t115 != -32769) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x509 = INT16_MAX;
	int16_t x510 = -1;
	int32_t x511 = INT32_MAX;

    t116 = (x509-(x510!=(x511>x512)));

    if (t116 != 32766) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x514 = UINT64_MAX;
	static volatile uint8_t x515 = 1U;
	int8_t x516 = INT8_MIN;
	uint32_t t117 = 364230706U;

    t117 = (x513-(x514!=(x515>x516)));

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x518 = INT16_MIN;
	uint16_t x519 = 18U;
	int16_t x520 = INT16_MIN;
	volatile uint32_t t118 = 2219616U;

    t118 = (x517-(x518!=(x519>x520)));

    if (t118 != 4294967294U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x521 = INT8_MAX;
	int32_t x522 = INT32_MAX;
	uint8_t x523 = 45U;
	int16_t x524 = INT16_MIN;
	int32_t t119 = 40;

    t119 = (x521-(x522!=(x523>x524)));

    if (t119 != 126) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x525 = 16098U;
	int32_t x526 = -1;
	int32_t x527 = INT32_MIN;
	uint8_t x528 = 0U;

    t120 = (x525-(x526!=(x527>x528)));

    if (t120 != 16097U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x529 = 4905;
	int32_t x530 = INT32_MIN;
	volatile int8_t x532 = INT8_MIN;

    t121 = (x529-(x530!=(x531>x532)));

    if (t121 != 4904) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x533 = UINT16_MAX;
	int16_t x534 = INT16_MIN;
	int32_t x535 = 74347;
	int32_t x536 = -28;

    t122 = (x533-(x534!=(x535>x536)));

    if (t122 != 65534) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x537 = INT32_MAX;
	volatile int16_t x538 = -1;
	uint32_t x540 = UINT32_MAX;
	int32_t t123 = 10462;

    t123 = (x537-(x538!=(x539>x540)));

    if (t123 != 2147483646) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x545 = 2059U;
	int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	int32_t t124 = 4467;

    t124 = (x545-(x546!=(x547>x548)));

    if (t124 != 2058) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x549 = INT32_MAX;
	static int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MAX;
	volatile int32_t t125 = 19460;

    t125 = (x549-(x550!=(x551>x552)));

    if (t125 != 2147483646) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x553 = UINT16_MAX;
	static volatile uint8_t x555 = 58U;
	uint32_t x556 = 812724U;
	int32_t t126 = -422356516;

    t126 = (x553-(x554!=(x555>x556)));

    if (t126 != 65534) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x557 = 0;
	uint32_t x560 = 6U;
	volatile int32_t t127 = 251706;

    t127 = (x557-(x558!=(x559>x560)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x562 = 80U;
	volatile uint32_t x563 = 9101U;
	int16_t x564 = INT16_MAX;

    t128 = (x561-(x562!=(x563>x564)));

    if (t128 != 15334524LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x565 = INT16_MAX;
	int8_t x566 = INT8_MAX;
	volatile int64_t x567 = INT64_MIN;
	volatile int32_t t129 = 154291;

    t129 = (x565-(x566!=(x567>x568)));

    if (t129 != 32766) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x569 = 7;
	uint16_t x570 = UINT16_MAX;
	int8_t x571 = INT8_MIN;
	volatile int16_t x572 = -1;
	int32_t t130 = 208;

    t130 = (x569-(x570!=(x571>x572)));

    if (t130 != 6) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x573 = INT32_MAX;
	volatile int8_t x574 = INT8_MIN;
	static int32_t x576 = -3348159;

    t131 = (x573-(x574!=(x575>x576)));

    if (t131 != 2147483646) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x577 = UINT16_MAX;
	int64_t x578 = -141LL;
	int32_t x579 = -1;
	volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t132 = 2339;

    t132 = (x577-(x578!=(x579>x580)));

    if (t132 != 65534) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x582 = 7175U;
	int64_t x584 = INT64_MAX;
	volatile int32_t t133 = -79774;

    t133 = (x581-(x582!=(x583>x584)));

    if (t133 != 32766) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x586 = 11U;
	static volatile int64_t x587 = -1LL;
	uint64_t x588 = 145679014103773LLU;
	int32_t t134 = -565954;

    t134 = (x585-(x586!=(x587>x588)));

    if (t134 != 32766) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x590 = 7579;
	static uint64_t x591 = 7351LLU;
	int64_t x592 = -3679LL;
	int32_t t135 = 0;

    t135 = (x589-(x590!=(x591>x592)));

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x597 = 981;
	int16_t x598 = INT16_MIN;
	uint8_t x599 = UINT8_MAX;
	int32_t t136 = 3372235;

    t136 = (x597-(x598!=(x599>x600)));

    if (t136 != 980) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x603 = UINT64_MAX;
	int16_t x604 = 193;
	int32_t t137 = -12007054;

    t137 = (x601-(x602!=(x603>x604)));

    if (t137 != -222) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x605 = -1LL;
	int16_t x606 = 21;
	int8_t x608 = -1;
	int64_t t138 = -1031LL;

    t138 = (x605-(x606!=(x607>x608)));

    if (t138 != -2LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = UINT64_MAX;
	int8_t x612 = -1;

    t139 = (x609-(x610!=(x611>x612)));

    if (t139 != 4294967294U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x617 = UINT8_MAX;
	volatile int8_t x618 = INT8_MIN;
	int8_t x619 = -27;
	volatile uint16_t x620 = 1U;
	int32_t t140 = -5506809;

    t140 = (x617-(x618!=(x619>x620)));

    if (t140 != 254) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x622 = 4802879440671960LLU;
	volatile int8_t x624 = INT8_MIN;
	volatile int32_t t141 = 51;

    t141 = (x621-(x622!=(x623>x624)));

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x626 = INT8_MIN;
	int16_t x627 = INT16_MIN;
	uint32_t x628 = UINT32_MAX;
	static volatile uint32_t t142 = 1080832U;

    t142 = (x625-(x626!=(x627>x628)));

    if (t142 != 58U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x630 = INT32_MIN;
	int16_t x631 = -17;
	static int32_t x632 = -1;
	volatile uint64_t t143 = 192602911292115LLU;

    t143 = (x629-(x630!=(x631>x632)));

    if (t143 != 186828439624LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x633 = 1745U;
	static int64_t x634 = -1116LL;
	uint16_t x635 = 7445U;
	int8_t x636 = 1;
	uint32_t t144 = 6928052U;

    t144 = (x633-(x634!=(x635>x636)));

    if (t144 != 1744U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x637 = 8;
	int64_t x638 = -929765440684176062LL;
	volatile int16_t x640 = INT16_MIN;
	int32_t t145 = 6;

    t145 = (x637-(x638!=(x639>x640)));

    if (t145 != 7) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x645 = 3619;
	static int16_t x646 = -1;
	int8_t x648 = -1;
	volatile int32_t t146 = 18;

    t146 = (x645-(x646!=(x647>x648)));

    if (t146 != 3618) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x649 = INT16_MIN;
	static int8_t x650 = INT8_MIN;
	int16_t x651 = INT16_MIN;
	int16_t x652 = INT16_MIN;
	volatile int32_t t147 = -323864712;

    t147 = (x649-(x650!=(x651>x652)));

    if (t147 != -32769) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x654 = 130117663LLU;
	int32_t x655 = -1;
	int16_t x656 = -1823;

    t148 = (x653-(x654!=(x655>x656)));

    if (t148 != 35U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = INT8_MAX;
	int8_t x658 = INT8_MAX;
	uint8_t x659 = 1U;
	static int32_t x660 = 54213;
	int32_t t149 = 304;

    t149 = (x657-(x658!=(x659>x660)));

    if (t149 != 126) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x661 = INT16_MAX;
	int8_t x662 = -1;
	uint32_t x663 = UINT32_MAX;
	volatile int32_t t150 = -7883753;

    t150 = (x661-(x662!=(x663>x664)));

    if (t150 != 32766) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x667 = -19;
	int64_t x668 = INT64_MIN;
	volatile int32_t t151 = 1;

    t151 = (x665-(x666!=(x667>x668)));

    if (t151 != -129) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = 11301625232LL;
	uint32_t x671 = UINT32_MAX;
	volatile uint32_t x672 = UINT32_MAX;
	volatile uint64_t t152 = 28978720144LLU;

    t152 = (x669-(x670!=(x671>x672)));

    if (t152 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = 10;
	int16_t x675 = 1596;
	static int16_t x676 = INT16_MIN;
	uint32_t t153 = 1095520969U;

    t153 = (x673-(x674!=(x675>x676)));

    if (t153 != 4294967294U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile uint32_t x678 = UINT32_MAX;
	int64_t x679 = INT64_MIN;
	int64_t x680 = INT64_MIN;
	static int32_t t154 = 7879;

    t154 = (x677-(x678!=(x679>x680)));

    if (t154 != 254) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = 7770;
	int32_t x682 = INT32_MIN;
	volatile uint64_t x683 = 433LLU;
	static int8_t x684 = 20;

    t155 = (x681-(x682!=(x683>x684)));

    if (t155 != 7769) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x687 = -21;

    t156 = (x685-(x686!=(x687>x688)));

    if (t156 != -32769) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x689 = UINT16_MAX;
	volatile uint32_t x690 = 0U;
	static int32_t x691 = -1;
	volatile int64_t x692 = -670LL;
	volatile int32_t t157 = 1669161;

    t157 = (x689-(x690!=(x691>x692)));

    if (t157 != 65534) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x694 = INT16_MAX;
	int64_t x695 = INT64_MIN;
	int32_t x696 = INT32_MAX;
	volatile int32_t t158 = -579;

    t158 = (x693-(x694!=(x695>x696)));

    if (t158 != -6260) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x697 = UINT32_MAX;
	uint32_t x698 = UINT32_MAX;
	volatile int32_t x699 = -1;
	int16_t x700 = 7068;
	static uint32_t t159 = 18391331U;

    t159 = (x697-(x698!=(x699>x700)));

    if (t159 != 4294967294U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x701 = -1594501750135483LL;
	int8_t x704 = INT8_MAX;
	static int64_t t160 = 31940935LL;

    t160 = (x701-(x702!=(x703>x704)));

    if (t160 != -1594501750135484LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x705 = -1;
	int32_t x706 = 640;
	int8_t x707 = INT8_MIN;
	int64_t x708 = INT64_MAX;
	int32_t t161 = 35;

    t161 = (x705-(x706!=(x707>x708)));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x710 = 3U;
	uint8_t x711 = UINT8_MAX;
	int32_t t162 = 0;

    t162 = (x709-(x710!=(x711>x712)));

    if (t162 != -32769) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x713 = 150771U;
	volatile int64_t x716 = -363LL;

    t163 = (x713-(x714!=(x715>x716)));

    if (t163 != 150770U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x717 = 10;
	int16_t x718 = 2261;
	int8_t x720 = -1;
	volatile int32_t t164 = 3458;

    t164 = (x717-(x718!=(x719>x720)));

    if (t164 != 9) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x721 = 1812;
	uint64_t x722 = 84477856550082510LLU;
	static int8_t x724 = INT8_MIN;
	int32_t t165 = -213;

    t165 = (x721-(x722!=(x723>x724)));

    if (t165 != 1811) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x725 = INT8_MAX;
	int16_t x727 = 40;
	int32_t x728 = INT32_MIN;
	volatile int32_t t166 = -55972;

    t166 = (x725-(x726!=(x727>x728)));

    if (t166 != 126) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = -1;
	int16_t x730 = 3792;
	int64_t x731 = -364464856720109LL;
	static volatile int64_t x732 = 172718LL;
	static int32_t t167 = 1;

    t167 = (x729-(x730!=(x731>x732)));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile uint32_t x734 = 33U;
	uint32_t x735 = 0U;
	volatile int8_t x736 = -1;

    t168 = (x733-(x734!=(x735>x736)));

    if (t168 != 254) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x738 = INT32_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t169 = 9;

    t169 = (x737-(x738!=(x739>x740)));

    if (t169 != -12) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = -1;
	static volatile int16_t x742 = INT16_MIN;
	static int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MIN;
	int32_t t170 = 7076365;

    t170 = (x741-(x742!=(x743>x744)));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x746 = INT32_MAX;
	volatile int64_t x747 = INT64_MIN;
	uint64_t x748 = 1689LLU;
	int64_t t171 = 723444938LL;

    t171 = (x745-(x746!=(x747>x748)));

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x749 = INT64_MAX;
	int16_t x752 = INT16_MAX;
	int64_t t172 = 3011154216756355LL;

    t172 = (x749-(x750!=(x751>x752)));

    if (t172 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x753 = -5183216;
	volatile int8_t x754 = 15;
	uint16_t x755 = 6235U;

    t173 = (x753-(x754!=(x755>x756)));

    if (t173 != -5183217) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = 32512U;
	int8_t x758 = 2;
	volatile int64_t x759 = -1LL;
	uint64_t x760 = UINT64_MAX;
	int32_t t174 = 6021;

    t174 = (x757-(x758!=(x759>x760)));

    if (t174 != 32511) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x762 = 36;
	int32_t t175 = -937200;

    t175 = (x761-(x762!=(x763>x764)));

    if (t175 != 811) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x766 = 1404116355890LLU;
	volatile int16_t x768 = INT16_MAX;
	uint32_t t176 = 264U;

    t176 = (x765-(x766!=(x767>x768)));

    if (t176 != 84914U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x769 = -1;
	int32_t t177 = -368224170;

    t177 = (x769-(x770!=(x771>x772)));

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x773 = -1;
	int32_t x774 = INT32_MIN;
	uint16_t x775 = 5830U;
	uint8_t x776 = 4U;
	volatile int32_t t178 = 599660;

    t178 = (x773-(x774!=(x775>x776)));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x778 = INT16_MIN;
	static volatile int64_t x779 = 3441LL;
	static int8_t x780 = INT8_MIN;
	static int32_t t179 = 28073615;

    t179 = (x777-(x778!=(x779>x780)));

    if (t179 != -610) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x781 = INT64_MAX;
	static int16_t x782 = -1;
	static uint32_t x783 = UINT32_MAX;
	int32_t x784 = -1;
	volatile int64_t t180 = 3357325LL;

    t180 = (x781-(x782!=(x783>x784)));

    if (t180 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x787 = 245462860932LL;
	static int64_t x788 = 456004LL;
	int32_t t181 = -754387;

    t181 = (x785-(x786!=(x787>x788)));

    if (t181 != 65534) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	static uint64_t x791 = UINT64_MAX;

    t182 = (x789-(x790!=(x791>x792)));

    if (t182 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x801 = 465089996U;
	int8_t x802 = INT8_MAX;
	int64_t x803 = INT64_MAX;
	volatile int64_t x804 = INT64_MIN;

    t183 = (x801-(x802!=(x803>x804)));

    if (t183 != 465089995U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	uint8_t x807 = 60U;
	int64_t x808 = -4174003LL;

    t184 = (x805-(x806!=(x807>x808)));

    if (t184 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x810 = UINT8_MAX;
	static uint16_t x811 = 24U;
	uint64_t x812 = UINT64_MAX;

    t185 = (x809-(x810!=(x811>x812)));

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x813 = INT8_MIN;
	static uint8_t x814 = 1U;
	int8_t x815 = -2;

    t186 = (x813-(x814!=(x815>x816)));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x817 = -1;
	static uint8_t x818 = UINT8_MAX;
	volatile uint64_t x819 = 35LLU;
	int8_t x820 = 48;
	int32_t t187 = -14168317;

    t187 = (x817-(x818!=(x819>x820)));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x829 = INT16_MAX;
	static uint16_t x830 = 1992U;
	int32_t x831 = 120;
	volatile int32_t x832 = INT32_MIN;
	volatile int32_t t188 = 1;

    t188 = (x829-(x830!=(x831>x832)));

    if (t188 != 32766) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x834 = 1;
	volatile int32_t t189 = 1;

    t189 = (x833-(x834!=(x835>x836)));

    if (t189 != -2) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x837 = 5537;
	uint64_t x838 = UINT64_MAX;
	static int8_t x839 = INT8_MIN;
	int32_t x840 = INT32_MIN;
	int32_t t190 = -977895650;

    t190 = (x837-(x838!=(x839>x840)));

    if (t190 != 5536) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x841 = INT16_MIN;
	int32_t x842 = INT32_MIN;
	volatile uint16_t x843 = UINT16_MAX;
	int8_t x844 = INT8_MIN;
	volatile int32_t t191 = 1048872;

    t191 = (x841-(x842!=(x843>x844)));

    if (t191 != -32769) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x849 = UINT8_MAX;
	volatile uint64_t x850 = UINT64_MAX;
	static int64_t x851 = -1LL;
	static int8_t x852 = INT8_MIN;
	int32_t t192 = 741766503;

    t192 = (x849-(x850!=(x851>x852)));

    if (t192 != 254) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x857 = INT32_MAX;
	int32_t x858 = INT32_MIN;
	int64_t x859 = 0LL;
	static int32_t x860 = -1;
	static int32_t t193 = -46;

    t193 = (x857-(x858!=(x859>x860)));

    if (t193 != 2147483646) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x862 = INT32_MIN;
	int64_t x863 = -1LL;
	int64_t t194 = 7LL;

    t194 = (x861-(x862!=(x863>x864)));

    if (t194 != -31960LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x865 = -1LL;
	uint16_t x866 = 313U;
	uint16_t x867 = 2486U;
	uint64_t x868 = 7681982845915LLU;
	volatile int64_t t195 = -16361440LL;

    t195 = (x865-(x866!=(x867>x868)));

    if (t195 != -2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x869 = INT32_MAX;
	volatile int32_t x870 = INT32_MIN;
	uint8_t x871 = UINT8_MAX;
	int32_t t196 = 4315;

    t196 = (x869-(x870!=(x871>x872)));

    if (t196 != 2147483646) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x874 = 31U;
	static uint64_t x875 = UINT64_MAX;
	uint64_t t197 = 482527658268LLU;

    t197 = (x873-(x874!=(x875>x876)));

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x877 = UINT32_MAX;
	int16_t x878 = INT16_MAX;
	int16_t x879 = INT16_MIN;
	static int32_t x880 = -1;
	volatile uint32_t t198 = 1U;

    t198 = (x877-(x878!=(x879>x880)));

    if (t198 != 4294967294U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x885 = -1;
	uint32_t x886 = 41U;
	uint64_t x888 = 9571LLU;
	int32_t t199 = 529;

    t199 = (x885-(x886!=(x887>x888)));

    if (t199 != -2) { NG(); } else { ; }
	
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

