
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

static uint16_t x1 = UINT16_MAX;
uint64_t x6 = UINT64_MAX;
volatile uint32_t x7 = 26432U;
uint32_t x10 = 161U;
uint64_t x12 = 3893973LLU;
int32_t x17 = INT32_MAX;
volatile int32_t t4 = 748677;
int32_t x26 = 25322;
volatile int32_t t6 = -4089;
int32_t x30 = INT32_MIN;
volatile int8_t x32 = INT8_MIN;
int16_t x38 = 11;
uint32_t x45 = UINT32_MAX;
volatile int32_t t15 = -534140740;
static volatile int32_t t16 = 578;
uint64_t x70 = 767330821893504094LLU;
uint64_t x71 = 11008980LLU;
int64_t x83 = INT64_MIN;
int32_t x87 = INT32_MAX;
int8_t x88 = INT8_MAX;
int64_t x90 = 2008367246785923LL;
static int8_t x95 = -1;
uint16_t x105 = 489U;
static int32_t x106 = -1;
int32_t t27 = -27304369;
uint64_t x115 = 121LLU;
int32_t t28 = -26593679;
static uint16_t x117 = 17287U;
int32_t t29 = 339450;
int32_t x144 = INT32_MIN;
int32_t x145 = INT32_MIN;
static int64_t x148 = 48256330LL;
volatile int32_t t36 = -7983826;
int64_t x149 = -1LL;
int8_t x155 = -7;
static volatile int32_t x162 = INT32_MIN;
int8_t x166 = INT8_MIN;
uint64_t x168 = 2761LLU;
volatile uint64_t x176 = 2969LLU;
int32_t t43 = 63436681;
int8_t x177 = INT8_MIN;
int32_t t44 = 37575;
int16_t x183 = INT16_MAX;
static int32_t t46 = -1391;
int32_t t47 = -651787;
uint16_t x194 = UINT16_MAX;
uint8_t x195 = 3U;
int32_t t48 = 1766850;
int32_t x200 = 29942946;
volatile int32_t t50 = 71;
int8_t x206 = -41;
volatile int32_t t52 = 4;
volatile int8_t x227 = INT8_MIN;
uint64_t x229 = 148608833785LLU;
int64_t x235 = -103930LL;
uint16_t x236 = UINT16_MAX;
static int32_t x238 = INT32_MAX;
int16_t x239 = -467;
uint64_t x253 = 6020306988143768038LLU;
static int16_t x255 = INT16_MAX;
int16_t x257 = 4268;
int8_t x266 = INT8_MIN;
int32_t x272 = -1;
uint8_t x274 = UINT8_MAX;
uint32_t x280 = UINT32_MAX;
volatile int32_t t72 = -31215;
int16_t x304 = -1;
int32_t t76 = -78;
int16_t x309 = INT16_MAX;
int32_t t79 = 11133;
static volatile uint32_t x322 = UINT32_MAX;
int16_t x324 = INT16_MIN;
volatile uint8_t x328 = 0U;
uint8_t x332 = 2U;
uint16_t x335 = UINT16_MAX;
volatile int32_t t83 = 37087;
int8_t x338 = -1;
int32_t x339 = -360805;
int16_t x341 = 15513;
int64_t x342 = 16666067805104LL;
volatile int64_t x345 = INT64_MIN;
int8_t x368 = -1;
uint16_t x371 = UINT16_MAX;
int16_t x373 = INT16_MAX;
uint32_t x375 = UINT32_MAX;
static volatile int32_t t93 = 6262;
static int8_t x378 = 2;
int8_t x386 = INT8_MIN;
volatile uint16_t x397 = UINT16_MAX;
volatile uint32_t x398 = UINT32_MAX;
int32_t x400 = -180926;
static uint16_t x409 = 54U;
static uint32_t x413 = UINT32_MAX;
volatile int32_t x414 = INT32_MAX;
int32_t t103 = -99731;
static int8_t x419 = INT8_MAX;
uint16_t x420 = 11U;
uint64_t x425 = 30400LLU;
static int32_t x428 = INT32_MAX;
int16_t x429 = INT16_MIN;
static int32_t t107 = -79;
int64_t x433 = 444204LL;
volatile int32_t t108 = -5587176;
uint8_t x438 = UINT8_MAX;
volatile uint32_t x439 = 7U;
int32_t x442 = INT32_MAX;
volatile uint16_t x443 = 21898U;
static int64_t x444 = INT64_MIN;
uint16_t x445 = 1U;
volatile int32_t x448 = 769;
int32_t t113 = -1838;
int32_t x464 = -1;
int64_t x466 = INT64_MIN;
volatile int32_t t117 = -4;
int8_t x479 = -24;
int16_t x489 = INT16_MIN;
static volatile int32_t t124 = 128973228;
uint32_t x502 = 3266U;
static volatile uint32_t x508 = UINT32_MAX;
static volatile int64_t x509 = INT64_MIN;
int16_t x512 = INT16_MAX;
volatile int16_t x519 = 4081;
volatile int32_t t129 = -2379;
uint8_t x523 = UINT8_MAX;
volatile int32_t t130 = -782486365;
uint8_t x528 = 1U;
volatile uint64_t x533 = 147888483514122LLU;
uint64_t x536 = 218129766779LLU;
int32_t t134 = 3527;
int64_t x543 = INT64_MAX;
volatile int16_t x547 = -6;
int32_t x556 = INT32_MIN;
static volatile int32_t t138 = 14;
uint8_t x564 = 1U;
int32_t t142 = 103231;
static volatile int64_t x575 = INT64_MIN;
static volatile uint8_t x580 = 1U;
volatile int32_t t144 = 7671170;
uint32_t x587 = 27U;
static volatile int32_t t148 = -315;
static int8_t x607 = INT8_MIN;
static int16_t x608 = INT16_MIN;
uint32_t x610 = 7781027U;
uint32_t x611 = UINT32_MAX;
int16_t x613 = -2;
volatile uint32_t x614 = UINT32_MAX;
volatile int32_t t155 = -1946864;
volatile int32_t x626 = -1;
int32_t t156 = 118;
int8_t x629 = -1;
uint16_t x633 = UINT16_MAX;
uint8_t x634 = UINT8_MAX;
uint8_t x642 = 18U;
uint32_t x644 = 2623801U;
volatile int32_t t160 = 0;
volatile uint64_t x646 = 1398058398LLU;
uint16_t x650 = UINT16_MAX;
volatile int16_t x653 = 80;
volatile int32_t x659 = 12;
volatile int32_t t164 = 0;
int16_t x663 = -98;
int16_t x666 = -205;
volatile int32_t t167 = -3;
uint32_t x676 = 7648U;
int32_t t168 = -217655;
int8_t x686 = -1;
int16_t x693 = INT16_MIN;
int64_t x698 = 1LL;
volatile int32_t t174 = 8867;
int64_t x703 = INT64_MIN;
static int16_t x711 = INT16_MIN;
volatile int64_t x718 = -304150342790LL;
int32_t t179 = 228050;
int64_t x722 = INT64_MAX;
int32_t t180 = 6433;
static int32_t x728 = 78;
uint8_t x731 = 1U;
static volatile int32_t t182 = -34948;
int32_t t184 = 12612746;
volatile uint16_t x741 = UINT16_MAX;
volatile int32_t x742 = INT32_MIN;
volatile int64_t x750 = INT64_MIN;
int8_t x754 = INT8_MIN;
uint16_t x755 = 1923U;
uint8_t x756 = 59U;
int8_t x760 = 4;
int32_t x764 = INT32_MAX;
static int32_t t191 = -139444;
int32_t x772 = INT32_MIN;
static uint16_t x773 = 0U;
int16_t x775 = INT16_MAX;
volatile int16_t x784 = -1;
static int32_t x787 = -5;
int8_t x791 = INT8_MAX;
volatile uint8_t x792 = 5U;
uint32_t x795 = UINT32_MAX;


void f0(void) {
    	volatile int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = -14944116;

    t0 = (x1!=(x2<=(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 117668434;

    t1 = (x5!=(x6<=(x7==x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 0;
	int16_t x11 = INT16_MAX;
	int32_t t2 = -31520770;

    t2 = (x9!=(x10<=(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 782U;
	uint8_t x14 = 1U;
	int16_t x15 = -1;
	static int8_t x16 = INT8_MAX;
	int32_t t3 = 462270;

    t3 = (x13!=(x14<=(x15==x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = 30LL;
	int32_t x19 = -1;
	volatile int16_t x20 = 9;

    t4 = (x17!=(x18<=(x19==x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	static int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = -318709;

    t5 = (x21!=(x22<=(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MIN;
	volatile int32_t x27 = 6;
	volatile int16_t x28 = INT16_MIN;

    t6 = (x25!=(x26<=(x27==x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x31 = 76282U;
	static volatile int32_t t7 = -813;

    t7 = (x29!=(x30<=(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 12U;
	uint32_t x34 = UINT32_MAX;
	static int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 198258323;

    t8 = (x33!=(x34<=(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -2;
	static int32_t x39 = INT32_MIN;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = -84973928;

    t9 = (x37!=(x38<=(x39==x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 635U;
	int16_t x42 = -8;
	int64_t x43 = -1LL;
	uint32_t x44 = 1067U;
	int32_t t10 = 151037;

    t10 = (x41!=(x42<=(x43==x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	volatile uint32_t x48 = 3787U;
	int32_t t11 = 1;

    t11 = (x45!=(x46<=(x47==x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -1;
	int32_t x50 = INT32_MAX;
	int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 1776;

    t12 = (x49!=(x50<=(x51==x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -9;
	static int8_t x54 = INT8_MAX;
	int8_t x55 = -8;
	uint64_t x56 = 159395814466915881LLU;
	volatile int32_t t13 = -2323527;

    t13 = (x53!=(x54<=(x55==x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = 2896336731526662LLU;
	static volatile int32_t t14 = -139116238;

    t14 = (x57!=(x58<=(x59==x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	uint8_t x62 = 80U;
	int64_t x63 = 299117220LL;
	int16_t x64 = 22;

    t15 = (x61!=(x62<=(x63==x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x65 = 2035147094477LLU;
	uint16_t x66 = 0U;
	uint8_t x67 = 9U;
	int32_t x68 = INT32_MIN;

    t16 = (x65!=(x66<=(x67==x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 172;
	uint8_t x72 = 2U;
	static int32_t t17 = -280963;

    t17 = (x69!=(x70<=(x71==x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 226;
	static int32_t x74 = INT32_MAX;
	volatile int8_t x75 = INT8_MAX;
	static int64_t x76 = 174639192LL;
	volatile int32_t t18 = -3180;

    t18 = (x73!=(x74<=(x75==x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	int16_t x79 = 1648;
	uint8_t x80 = 6U;
	int32_t t19 = 1603542;

    t19 = (x77!=(x78<=(x79==x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 2;
	int64_t x82 = 1593462LL;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -61;

    t20 = (x81!=(x82<=(x83==x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	static int32_t x86 = INT32_MIN;
	int32_t t21 = -1;

    t21 = (x85!=(x86<=(x87==x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint64_t x91 = 2699LLU;
	int8_t x92 = INT8_MIN;
	static int32_t t22 = 127946506;

    t22 = (x89!=(x90<=(x91==x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	volatile int64_t x94 = 37052955249LL;
	static uint16_t x96 = UINT16_MAX;
	int32_t t23 = 103948;

    t23 = (x93!=(x94<=(x95==x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	uint64_t x98 = 5363806772901653LLU;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = INT8_MIN;
	static int32_t t24 = 15227;

    t24 = (x97!=(x98<=(x99==x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = 20574U;
	int16_t x102 = INT16_MAX;
	static int8_t x103 = -1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -22;

    t25 = (x101!=(x102<=(x103==x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = -342328LL;
	int8_t x108 = -1;
	int32_t t26 = -6;

    t26 = (x105!=(x106<=(x107==x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = -1;
	volatile uint8_t x110 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -1LL;

    t27 = (x109!=(x110<=(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x113 = 549U;
	int8_t x114 = -18;
	static uint32_t x116 = 15790715U;

    t28 = (x113!=(x114<=(x115==x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 107394LLU;
	int8_t x119 = -1;
	uint16_t x120 = UINT16_MAX;

    t29 = (x117!=(x118<=(x119==x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 3928U;
	int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = 612348463LLU;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -180;

    t30 = (x121!=(x122<=(x123==x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 1U;
	uint32_t x128 = 4383U;
	volatile int32_t t31 = 46;

    t31 = (x125!=(x126<=(x127==x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	volatile uint16_t x130 = 124U;
	int16_t x131 = -78;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = -2539126;

    t32 = (x129!=(x130<=(x131==x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	static int64_t x135 = 32418155091254249LL;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 1;

    t33 = (x133!=(x134<=(x135==x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	uint16_t x138 = 22U;
	volatile int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = 239376171;

    t34 = (x137!=(x138<=(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	uint32_t x142 = 6055108U;
	uint8_t x143 = 0U;
	int32_t t35 = -444816671;

    t35 = (x141!=(x142<=(x143==x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x146 = 26;
	volatile int16_t x147 = INT16_MIN;

    t36 = (x145!=(x146<=(x147==x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = 33;
	static volatile int16_t x151 = 11158;
	int64_t x152 = 3790LL;
	volatile int32_t t37 = -2441699;

    t37 = (x149!=(x150<=(x151==x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 26U;
	int64_t x154 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 564412602;

    t38 = (x153!=(x154<=(x155==x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 2;

    t39 = (x157!=(x158<=(x159==x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	static uint64_t x163 = UINT64_MAX;
	static uint8_t x164 = 3U;
	volatile int32_t t40 = -1;

    t40 = (x161!=(x162<=(x163==x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	uint16_t x167 = 8U;
	volatile int32_t t41 = 1920;

    t41 = (x165!=(x166<=(x167==x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 5;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 64504827U;
	int8_t x172 = 1;
	int32_t t42 = 45183858;

    t42 = (x169!=(x170<=(x171==x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -1;

    t43 = (x173!=(x174<=(x175==x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x178 = INT8_MAX;
	static int8_t x179 = INT8_MAX;
	uint32_t x180 = 130010098U;

    t44 = (x177!=(x178<=(x179==x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = 0;
	uint16_t x182 = UINT16_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = -99;

    t45 = (x181!=(x182<=(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 2U;
	static int32_t x186 = INT32_MAX;
	int16_t x187 = -6;
	int16_t x188 = -1;

    t46 = (x185!=(x186<=(x187==x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = UINT64_MAX;
	static int8_t x190 = -53;
	int8_t x191 = -1;
	int8_t x192 = INT8_MAX;

    t47 = (x189!=(x190<=(x191==x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	volatile int16_t x196 = -1;

    t48 = (x193!=(x194<=(x195==x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int32_t x198 = -93681629;
	int64_t x199 = INT64_MIN;
	static volatile int32_t t49 = 13;

    t49 = (x197!=(x198<=(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MAX;
	uint32_t x203 = 115520292U;
	int16_t x204 = INT16_MIN;

    t50 = (x201!=(x202<=(x203==x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int64_t x207 = 179124374065LL;
	static int64_t x208 = -113793480515LL;
	int32_t t51 = 1140252;

    t51 = (x205!=(x206<=(x207==x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	int64_t x210 = -1LL;
	int64_t x211 = -8094544973784LL;
	int64_t x212 = 114550LL;

    t52 = (x209!=(x210<=(x211==x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 25739711521936645LL;
	static volatile uint64_t x214 = 104486474181034215LLU;
	int16_t x215 = INT16_MAX;
	uint8_t x216 = UINT8_MAX;
	static int32_t t53 = 0;

    t53 = (x213!=(x214<=(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	int32_t x219 = -1;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = -14064725;

    t54 = (x217!=(x218<=(x219==x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 10599402LLU;
	int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t55 = -8;

    t55 = (x221!=(x222<=(x223==x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	uint64_t x228 = 147LLU;
	volatile int32_t t56 = 148463686;

    t56 = (x225!=(x226<=(x227==x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 27U;
	int8_t x231 = INT8_MAX;
	uint16_t x232 = 3777U;
	volatile int32_t t57 = -4704;

    t57 = (x229!=(x230<=(x231==x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	volatile int16_t x234 = INT16_MAX;
	volatile int32_t t58 = -221;

    t58 = (x233!=(x234<=(x235==x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 12223255168LLU;
	int32_t x240 = -1;
	int32_t t59 = -29;

    t59 = (x237!=(x238<=(x239==x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int8_t x243 = 3;
	int8_t x244 = INT8_MAX;
	int32_t t60 = -3982;

    t60 = (x241!=(x242<=(x243==x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 8U;
	uint32_t x246 = 1010U;
	volatile int16_t x247 = INT16_MIN;
	static int16_t x248 = 5;
	int32_t t61 = -6;

    t61 = (x245!=(x246<=(x247==x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	static int64_t x250 = 4974298782141LL;
	uint32_t x251 = 212U;
	static int16_t x252 = -215;
	int32_t t62 = 202543384;

    t62 = (x249!=(x250<=(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = INT32_MIN;
	int64_t x256 = -1LL;
	volatile int32_t t63 = -1;

    t63 = (x253!=(x254<=(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 15984913628985776LLU;
	int64_t x259 = 65681232371LL;
	int64_t x260 = INT64_MAX;
	int32_t t64 = 5022771;

    t64 = (x257!=(x258<=(x259==x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = -1LL;
	int8_t x262 = 8;
	int16_t x263 = INT16_MAX;
	static uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 139;

    t65 = (x261!=(x262<=(x263==x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	uint8_t x267 = 44U;
	volatile int16_t x268 = INT16_MIN;
	static int32_t t66 = 98;

    t66 = (x265!=(x266<=(x267==x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -55707982;
	static int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t t67 = 4884467;

    t67 = (x269!=(x270<=(x271==x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int8_t x275 = -1;
	uint16_t x276 = 15019U;
	int32_t t68 = 557263520;

    t68 = (x273!=(x274<=(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	uint8_t x278 = UINT8_MAX;
	static int64_t x279 = INT64_MIN;
	static volatile int32_t t69 = -2;

    t69 = (x277!=(x278<=(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x281 = INT32_MAX;
	static volatile int32_t x282 = -2250;
	int8_t x283 = -1;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = 0;

    t70 = (x281!=(x282<=(x283==x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = 38712336704341LL;
	static uint8_t x288 = 33U;
	int32_t t71 = 582262;

    t71 = (x285!=(x286<=(x287==x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = 10050;
	int16_t x290 = INT16_MIN;
	static int64_t x291 = INT64_MAX;
	int16_t x292 = -13;

    t72 = (x289!=(x290<=(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MAX;
	static volatile int16_t x296 = INT16_MIN;
	int32_t t73 = -208079;

    t73 = (x293!=(x294<=(x295==x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = 199U;
	int32_t t74 = 315012796;

    t74 = (x297!=(x298<=(x299==x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	uint16_t x303 = 1U;
	volatile int32_t t75 = -9107726;

    t75 = (x301!=(x302<=(x303==x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	int32_t x306 = INT32_MAX;
	int64_t x307 = -1LL;
	static volatile uint8_t x308 = 0U;

    t76 = (x305!=(x306<=(x307==x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = 3977LL;
	int64_t x311 = -483893LL;
	volatile int32_t x312 = -16776828;
	volatile int32_t t77 = 34485557;

    t77 = (x309!=(x310<=(x311==x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = -1LL;
	int16_t x314 = 7580;
	volatile int32_t x315 = -47373;
	int8_t x316 = -1;
	int32_t t78 = -1;

    t78 = (x313!=(x314<=(x315==x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 20808913286894LLU;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = 47U;
	uint64_t x320 = 7208959LLU;

    t79 = (x317!=(x318<=(x319==x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int32_t x323 = 140520;
	volatile int32_t t80 = 0;

    t80 = (x321!=(x322<=(x323==x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MAX;
	volatile uint64_t x327 = UINT64_MAX;
	static int32_t t81 = -448;

    t81 = (x325!=(x326<=(x327==x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint64_t x330 = 723785620633483LLU;
	int8_t x331 = INT8_MAX;
	volatile int32_t t82 = -6;

    t82 = (x329!=(x330<=(x331==x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	int16_t x334 = -1;
	static uint64_t x336 = 368LLU;

    t83 = (x333!=(x334<=(x335==x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 108U;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 1899;

    t84 = (x337!=(x338<=(x339==x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x343 = INT64_MAX;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 206903;

    t85 = (x341!=(x342<=(x343==x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 7U;
	volatile int32_t t86 = 1098034;

    t86 = (x345!=(x346<=(x347==x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MIN;
	int64_t x351 = 1993868356LL;
	int32_t x352 = INT32_MIN;
	static int32_t t87 = 6324;

    t87 = (x349!=(x350<=(x351==x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x353 = UINT32_MAX;
	volatile uint64_t x354 = 403600112LLU;
	volatile uint64_t x355 = 43551573356LLU;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -6;

    t88 = (x353!=(x354<=(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 34U;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = 10;
	uint16_t x360 = 7U;
	int32_t t89 = -497;

    t89 = (x357!=(x358<=(x359==x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x361 = 57U;
	uint16_t x362 = 112U;
	int64_t x363 = -49145LL;
	int32_t x364 = 189;
	volatile int32_t t90 = 1;

    t90 = (x361!=(x362<=(x363==x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	int32_t t91 = 2;

    t91 = (x365!=(x366<=(x367==x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MAX;
	volatile int8_t x370 = INT8_MIN;
	int8_t x372 = -1;
	volatile int32_t t92 = 0;

    t92 = (x369!=(x370<=(x371==x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = 3026552690989LL;
	uint64_t x376 = 815463259LLU;

    t93 = (x373!=(x374<=(x375==x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int32_t x379 = 2;
	static int32_t x380 = 12;
	int32_t t94 = -3351;

    t94 = (x377!=(x378<=(x379==x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = -5419;
	int64_t x382 = 8888725125LL;
	int8_t x383 = 14;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = -1869;

    t95 = (x381!=(x382<=(x383==x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = 38U;
	int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MAX;
	static volatile int32_t t96 = 178473;

    t96 = (x385!=(x386<=(x387==x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 0U;
	int16_t x390 = -1;
	uint32_t x391 = 1U;
	int16_t x392 = INT16_MAX;
	int32_t t97 = 12377;

    t97 = (x389!=(x390<=(x391==x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1895;
	int32_t x394 = -1;
	uint8_t x395 = 13U;
	uint8_t x396 = 2U;
	int32_t t98 = -25553;

    t98 = (x393!=(x394<=(x395==x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x399 = 13291881U;
	volatile int32_t t99 = -6451;

    t99 = (x397!=(x398<=(x399==x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 12U;
	uint8_t x402 = 28U;
	int16_t x403 = INT16_MIN;
	volatile uint8_t x404 = 88U;
	volatile int32_t t100 = 27404;

    t100 = (x401!=(x402<=(x403==x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = 133074813;
	uint8_t x406 = 0U;
	volatile uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MAX;
	volatile int32_t t101 = -1420813;

    t101 = (x405!=(x406<=(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = -6;
	int16_t x411 = 109;
	static volatile uint64_t x412 = UINT64_MAX;
	volatile int32_t t102 = 119;

    t102 = (x409!=(x410<=(x411==x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x415 = UINT8_MAX;
	static uint8_t x416 = UINT8_MAX;

    t103 = (x413!=(x414<=(x415==x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int64_t x418 = INT64_MIN;
	volatile int32_t t104 = 3436;

    t104 = (x417!=(x418<=(x419==x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 51U;
	volatile int32_t x422 = INT32_MAX;
	uint8_t x423 = 2U;
	uint16_t x424 = 4U;
	static volatile int32_t t105 = -10;

    t105 = (x421!=(x422<=(x423==x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MIN;
	uint64_t x427 = 659146583LLU;
	volatile int32_t t106 = -1914843;

    t106 = (x425!=(x426<=(x427==x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x430 = UINT64_MAX;
	static int64_t x431 = -1LL;
	static int64_t x432 = INT64_MIN;

    t107 = (x429!=(x430<=(x431==x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x434 = 532U;
	static int8_t x435 = INT8_MAX;
	int64_t x436 = -124618LL;

    t108 = (x433!=(x434<=(x435==x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint64_t x437 = UINT64_MAX;
	static uint64_t x440 = 28LLU;
	volatile int32_t t109 = -1617;

    t109 = (x437!=(x438<=(x439==x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = INT32_MIN;
	int32_t t110 = 81310167;

    t110 = (x441!=(x442<=(x443==x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = 0;
	int8_t x447 = INT8_MIN;
	volatile int32_t t111 = -12526819;

    t111 = (x445!=(x446<=(x447==x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 41055842478933LL;
	int16_t x450 = INT16_MIN;
	int64_t x451 = INT64_MIN;
	int64_t x452 = 2127428555594661LL;
	int32_t t112 = 325639078;

    t112 = (x449!=(x450<=(x451==x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x454 = 50;
	int64_t x455 = -1LL;
	volatile int64_t x456 = 0LL;

    t113 = (x453!=(x454<=(x455==x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x458 = -5;
	uint8_t x459 = UINT8_MAX;
	uint64_t x460 = 698807764279952LLU;
	volatile int32_t t114 = -6524;

    t114 = (x457!=(x458<=(x459==x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -207;
	int8_t x462 = -1;
	uint64_t x463 = UINT64_MAX;
	volatile int32_t t115 = 1007158;

    t115 = (x461!=(x462<=(x463==x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -952481LL;
	int8_t x467 = INT8_MIN;
	int8_t x468 = 29;
	volatile int32_t t116 = 6460;

    t116 = (x465!=(x466<=(x467==x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	volatile uint32_t x470 = 35888U;
	uint16_t x471 = 7U;
	static uint32_t x472 = 459061077U;

    t117 = (x469!=(x470<=(x471==x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = 0;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 4U;
	int32_t t118 = 1;

    t118 = (x473!=(x474<=(x475==x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MAX;
	int8_t x478 = 1;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = -13;

    t119 = (x477!=(x478<=(x479==x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 14746859LL;
	int16_t x482 = INT16_MIN;
	volatile int16_t x483 = -4;
	uint8_t x484 = 16U;
	volatile int32_t t120 = 116574483;

    t120 = (x481!=(x482<=(x483==x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int64_t x486 = INT64_MIN;
	int64_t x487 = -514LL;
	int64_t x488 = INT64_MIN;
	volatile int32_t t121 = -22;

    t121 = (x485!=(x486<=(x487==x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x490 = INT8_MIN;
	static int32_t x491 = 1206;
	volatile uint32_t x492 = UINT32_MAX;
	static volatile int32_t t122 = -520649;

    t122 = (x489!=(x490<=(x491==x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	int32_t x494 = -12;
	static volatile uint64_t x495 = 8036765LLU;
	uint16_t x496 = 0U;
	volatile int32_t t123 = 957413510;

    t123 = (x493!=(x494<=(x495==x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	uint64_t x498 = 133948366777861LLU;
	int16_t x499 = 3;
	static volatile int8_t x500 = -1;

    t124 = (x497!=(x498<=(x499==x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	int32_t x503 = -18619;
	int32_t x504 = -5736;
	int32_t t125 = -18281876;

    t125 = (x501!=(x502<=(x503==x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MIN;
	static volatile int32_t t126 = -1;

    t126 = (x505!=(x506<=(x507==x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = -1;
	int64_t x511 = 19974704LL;
	static volatile int32_t t127 = -127011;

    t127 = (x509!=(x510<=(x511==x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 31;
	int64_t x514 = -1LL;
	int8_t x515 = INT8_MAX;
	static int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = 867;

    t128 = (x513!=(x514<=(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = INT64_MIN;
	static volatile uint16_t x518 = 24U;
	int16_t x520 = INT16_MIN;

    t129 = (x517!=(x518<=(x519==x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int32_t x522 = -1;
	int64_t x524 = INT64_MIN;

    t130 = (x521!=(x522<=(x523==x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 2U;
	uint16_t x526 = UINT16_MAX;
	static uint32_t x527 = UINT32_MAX;
	static int32_t t131 = -36;

    t131 = (x525!=(x526<=(x527==x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x530 = INT16_MIN;
	volatile int16_t x531 = -1;
	int8_t x532 = INT8_MAX;
	static int32_t t132 = -247587;

    t132 = (x529!=(x530<=(x531==x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MIN;
	volatile int32_t x535 = INT32_MAX;
	volatile int32_t t133 = -114332079;

    t133 = (x533!=(x534<=(x535==x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	uint16_t x538 = 489U;
	int8_t x539 = INT8_MIN;
	int64_t x540 = INT64_MAX;

    t134 = (x537!=(x538<=(x539==x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 17U;
	int8_t x542 = INT8_MIN;
	uint8_t x544 = 127U;
	static int32_t t135 = 38842778;

    t135 = (x541!=(x542<=(x543==x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = -1;
	static int32_t x548 = INT32_MIN;
	volatile int32_t t136 = -3174887;

    t136 = (x545!=(x546<=(x547==x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x549 = INT32_MIN;
	volatile int32_t x550 = -932331936;
	int32_t x551 = INT32_MAX;
	uint16_t x552 = 3U;
	int32_t t137 = 603050103;

    t137 = (x549!=(x550<=(x551==x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 1904059264031664622LLU;
	uint64_t x554 = UINT64_MAX;
	int8_t x555 = INT8_MIN;

    t138 = (x553!=(x554<=(x555==x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	int32_t x558 = -1;
	int16_t x559 = INT16_MIN;
	volatile int32_t x560 = 14928886;
	static volatile int32_t t139 = 241;

    t139 = (x557!=(x558<=(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	static uint8_t x562 = 104U;
	int8_t x563 = -1;
	int32_t t140 = -961107360;

    t140 = (x561!=(x562<=(x563==x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	volatile uint8_t x566 = 46U;
	int16_t x567 = INT16_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -844161;

    t141 = (x565!=(x566<=(x567==x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int8_t x570 = INT8_MAX;
	int64_t x571 = -1251682LL;
	int64_t x572 = INT64_MAX;

    t142 = (x569!=(x570<=(x571==x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = -1LL;
	uint16_t x574 = 90U;
	uint32_t x576 = UINT32_MAX;
	volatile int32_t t143 = 6437;

    t143 = (x573!=(x574<=(x575==x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -821044157535466511LL;
	uint64_t x578 = UINT64_MAX;
	static uint64_t x579 = 358LLU;

    t144 = (x577!=(x578<=(x579==x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	uint8_t x582 = UINT8_MAX;
	volatile int32_t x583 = INT32_MAX;
	uint8_t x584 = 9U;
	volatile int32_t t145 = -327;

    t145 = (x581!=(x582<=(x583==x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = 102U;
	uint16_t x586 = UINT16_MAX;
	int64_t x588 = INT64_MAX;
	int32_t t146 = -34;

    t146 = (x585!=(x586<=(x587==x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 3U;
	static volatile int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MIN;
	uint32_t x592 = 47U;
	volatile int32_t t147 = 70955785;

    t147 = (x589!=(x590<=(x591==x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 124681538U;
	int64_t x594 = -74663161LL;
	static int16_t x595 = -692;
	uint64_t x596 = UINT64_MAX;

    t148 = (x593!=(x594<=(x595==x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile uint16_t x598 = 7544U;
	volatile int64_t x599 = INT64_MIN;
	uint16_t x600 = 16668U;
	static volatile int32_t t149 = 6175696;

    t149 = (x597!=(x598<=(x599==x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	static int32_t x602 = 13;
	int32_t x603 = INT32_MAX;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = -57;

    t150 = (x601!=(x602<=(x603==x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 1439326667LL;
	static volatile int16_t x606 = 2883;
	int32_t t151 = 27921111;

    t151 = (x605!=(x606<=(x607==x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 3877U;
	volatile int32_t x612 = INT32_MAX;
	int32_t t152 = 7721;

    t152 = (x609!=(x610<=(x611==x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x615 = INT32_MIN;
	int8_t x616 = INT8_MIN;
	int32_t t153 = -782626913;

    t153 = (x613!=(x614<=(x615==x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -12576905047LL;
	int64_t x618 = INT64_MAX;
	int8_t x619 = 31;
	static int16_t x620 = INT16_MIN;
	volatile int32_t t154 = -66973958;

    t154 = (x617!=(x618<=(x619==x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = UINT32_MAX;
	static volatile uint64_t x622 = 122518637938454120LLU;
	uint32_t x623 = UINT32_MAX;
	volatile int32_t x624 = -424;

    t155 = (x621!=(x622<=(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -81196023378445LL;
	volatile uint8_t x627 = 2U;
	uint16_t x628 = 46U;

    t156 = (x625!=(x626<=(x627==x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 10LLU;
	static uint16_t x631 = UINT16_MAX;
	static int32_t x632 = -50602329;
	int32_t t157 = 1314248;

    t157 = (x629!=(x630<=(x631==x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x635 = INT32_MAX;
	static int32_t x636 = 192817856;
	static int32_t t158 = -7939696;

    t158 = (x633!=(x634<=(x635==x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 30U;
	uint64_t x638 = UINT64_MAX;
	int64_t x639 = -1605522018668025791LL;
	volatile uint32_t x640 = UINT32_MAX;
	volatile int32_t t159 = 0;

    t159 = (x637!=(x638<=(x639==x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = 1133613658706194LL;
	uint16_t x643 = UINT16_MAX;

    t160 = (x641!=(x642<=(x643==x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 3646805433LL;
	uint16_t x647 = 505U;
	uint16_t x648 = 19U;
	volatile int32_t t161 = 49533277;

    t161 = (x645!=(x646<=(x647==x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = UINT8_MAX;
	int8_t x651 = INT8_MAX;
	uint32_t x652 = UINT32_MAX;
	volatile int32_t t162 = 867;

    t162 = (x649!=(x650<=(x651==x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x654 = 58U;
	uint32_t x655 = 98442707U;
	volatile int8_t x656 = INT8_MIN;
	int32_t t163 = 2109403;

    t163 = (x653!=(x654<=(x655==x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 260LL;
	int32_t x658 = 5677937;
	int32_t x660 = -1;

    t164 = (x657!=(x658<=(x659==x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -67864803LL;
	int16_t x662 = INT16_MIN;
	int8_t x664 = INT8_MIN;
	static int32_t t165 = 24;

    t165 = (x661!=(x662<=(x663==x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 2416U;
	int8_t x667 = -1;
	int32_t x668 = 114918813;
	volatile int32_t t166 = 1;

    t166 = (x665!=(x666<=(x667==x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	volatile uint16_t x670 = 1467U;
	int8_t x671 = -1;
	static int16_t x672 = INT16_MIN;

    t167 = (x669!=(x670<=(x671==x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = UINT32_MAX;
	uint16_t x674 = 0U;
	uint64_t x675 = 548779639275064LLU;

    t168 = (x673!=(x674<=(x675==x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 983056U;
	static int32_t x678 = -1;
	uint16_t x679 = 2U;
	volatile int32_t x680 = -1;
	volatile int32_t t169 = -212078437;

    t169 = (x677!=(x678<=(x679==x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 81344913U;
	uint16_t x682 = UINT16_MAX;
	int16_t x683 = INT16_MIN;
	volatile int32_t x684 = -1;
	volatile int32_t t170 = -111733428;

    t170 = (x681!=(x682<=(x683==x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x685 = INT16_MIN;
	uint64_t x687 = 50891LLU;
	uint16_t x688 = 76U;
	static int32_t t171 = 1;

    t171 = (x685!=(x686<=(x687==x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -158LL;
	int64_t x690 = INT64_MIN;
	int32_t x691 = 47067;
	static int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 15;

    t172 = (x689!=(x690<=(x691==x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x694 = INT32_MIN;
	static int64_t x695 = 1276745408012983091LL;
	volatile int32_t x696 = -1;
	int32_t t173 = -66396303;

    t173 = (x693!=(x694<=(x695==x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	static volatile int16_t x699 = INT16_MAX;
	int8_t x700 = -1;

    t174 = (x697!=(x698<=(x699==x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MIN;
	volatile uint32_t x704 = 5U;
	volatile int32_t t175 = -1;

    t175 = (x701!=(x702<=(x703==x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 1;
	int64_t x706 = INT64_MIN;
	static int8_t x707 = 1;
	uint64_t x708 = 11772550705LLU;
	volatile int32_t t176 = 0;

    t176 = (x705!=(x706<=(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 112U;
	int64_t x710 = INT64_MIN;
	int64_t x712 = -1LL;
	int32_t t177 = -441;

    t177 = (x709!=(x710<=(x711==x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 1;
	static int64_t x714 = -1LL;
	int64_t x715 = -1LL;
	volatile int32_t x716 = 0;
	volatile int32_t t178 = 23721947;

    t178 = (x713!=(x714<=(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = UINT64_MAX;
	volatile uint16_t x719 = 6U;
	int8_t x720 = 1;

    t179 = (x717!=(x718<=(x719==x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	uint8_t x723 = UINT8_MAX;
	int8_t x724 = -1;

    t180 = (x721!=(x722<=(x723==x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = INT16_MIN;
	static int8_t x726 = -38;
	int32_t x727 = INT32_MAX;
	volatile int32_t t181 = 4377;

    t181 = (x725!=(x726<=(x727==x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = 1;
	volatile uint16_t x730 = 7U;
	volatile int32_t x732 = -1;

    t182 = (x729!=(x730<=(x731==x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = 54U;
	static int16_t x734 = INT16_MIN;
	uint8_t x735 = 83U;
	int32_t x736 = -1;
	volatile int32_t t183 = 1798614;

    t183 = (x733!=(x734<=(x735==x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = -1;
	int16_t x738 = 150;
	static volatile uint64_t x739 = 874350591456616LLU;
	volatile int64_t x740 = INT64_MIN;

    t184 = (x737!=(x738<=(x739==x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x743 = -2;
	int64_t x744 = -27104685088482LL;
	volatile int32_t t185 = -195;

    t185 = (x741!=(x742<=(x743==x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x745 = 108211433LLU;
	int16_t x746 = -1;
	static uint8_t x747 = UINT8_MAX;
	static uint64_t x748 = 21211555142154661LLU;
	static int32_t t186 = 1;

    t186 = (x745!=(x746<=(x747==x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MAX;
	static volatile int8_t x751 = INT8_MIN;
	int64_t x752 = INT64_MAX;
	volatile int32_t t187 = -6545342;

    t187 = (x749!=(x750<=(x751==x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 4955524218465400LLU;
	int32_t t188 = -31174;

    t188 = (x753!=(x754<=(x755==x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	int32_t x759 = INT32_MAX;
	int32_t t189 = -71;

    t189 = (x757!=(x758<=(x759==x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 2;
	int32_t x762 = -1;
	int64_t x763 = INT64_MIN;
	volatile int32_t t190 = -60103218;

    t190 = (x761!=(x762<=(x763==x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 1946932730U;
	int16_t x766 = INT16_MIN;
	static volatile int32_t x767 = INT32_MIN;
	int32_t x768 = -108634;

    t191 = (x765!=(x766<=(x767==x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MIN;
	static int64_t x770 = INT64_MIN;
	int32_t x771 = -405;
	volatile int32_t t192 = -269748862;

    t192 = (x769!=(x770<=(x771==x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x774 = 2243089369391LLU;
	int8_t x776 = 7;
	volatile int32_t t193 = -1084;

    t193 = (x773!=(x774<=(x775==x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = 1799;
	int16_t x778 = INT16_MIN;
	static int32_t x779 = -395;
	static volatile int64_t x780 = -1LL;
	volatile int32_t t194 = 73;

    t194 = (x777!=(x778<=(x779==x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	static uint16_t x782 = 11553U;
	uint64_t x783 = 5592335526322LLU;
	int32_t t195 = -1094010;

    t195 = (x781!=(x782<=(x783==x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -18822LL;
	volatile int16_t x786 = INT16_MAX;
	uint32_t x788 = 31828U;
	int32_t t196 = -954;

    t196 = (x785!=(x786<=(x787==x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	int8_t x790 = INT8_MAX;
	int32_t t197 = 2;

    t197 = (x789!=(x790<=(x791==x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -8;
	static int8_t x794 = -24;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -44;

    t198 = (x793!=(x794<=(x795==x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -13;
	int64_t x798 = INT64_MIN;
	static uint8_t x799 = UINT8_MAX;
	static volatile int64_t x800 = INT64_MAX;
	volatile int32_t t199 = 1;

    t199 = (x797!=(x798<=(x799==x800)));

    if (t199 != 1) { NG(); } else { ; }
	
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

