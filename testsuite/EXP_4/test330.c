
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

int16_t x3 = INT16_MAX;
uint32_t x6 = UINT32_MAX;
static volatile int32_t x7 = -61;
int8_t x14 = INT8_MIN;
int16_t x15 = INT16_MIN;
int32_t t3 = -2019179;
static uint64_t x20 = 1002480695119LLU;
int32_t t4 = 18324076;
int32_t x33 = INT32_MIN;
uint8_t x34 = 10U;
volatile uint16_t x36 = 0U;
int64_t x40 = -1LL;
int32_t x49 = INT32_MIN;
static int64_t x54 = INT64_MIN;
volatile uint16_t x60 = UINT16_MAX;
int8_t x68 = -1;
uint64_t x70 = UINT64_MAX;
static int16_t x82 = 1;
static int64_t x88 = INT64_MIN;
int32_t x110 = INT32_MAX;
int8_t x119 = -1;
uint32_t x124 = 29U;
int32_t x139 = -1;
static volatile int32_t t31 = 15329630;
int8_t x170 = -43;
int32_t t39 = -24793668;
volatile int16_t x182 = INT16_MIN;
int16_t x185 = 812;
int32_t t43 = -574555172;
int32_t t44 = -5783;
int64_t x202 = 914556558LL;
uint8_t x210 = UINT8_MAX;
volatile int8_t x213 = -1;
int32_t x214 = INT32_MAX;
volatile int32_t x215 = 7460214;
int32_t t49 = 22246;
int32_t x217 = INT32_MIN;
int8_t x226 = INT8_MAX;
int8_t x227 = -1;
volatile int32_t t52 = 1026546133;
static int64_t x230 = INT64_MIN;
int32_t x237 = -3097437;
int32_t t55 = 1;
static uint64_t x248 = 1LLU;
int32_t x250 = 344099317;
volatile uint32_t x262 = 5U;
int32_t x268 = -6706369;
volatile uint64_t x273 = 47693602072LLU;
uint64_t x274 = UINT64_MAX;
volatile uint16_t x276 = UINT16_MAX;
int64_t x288 = INT64_MIN;
volatile uint64_t x296 = 3LLU;
static int8_t x300 = INT8_MAX;
uint64_t x303 = UINT64_MAX;
int16_t x307 = INT16_MAX;
volatile int32_t t72 = -973;
int16_t x309 = -1;
int32_t x313 = INT32_MIN;
volatile int32_t t74 = -1287;
uint8_t x321 = 62U;
static int32_t x323 = -1;
uint8_t x324 = UINT8_MAX;
int16_t x331 = INT16_MIN;
int16_t x356 = -21;
int8_t x362 = 1;
volatile uint32_t x367 = UINT32_MAX;
int16_t x371 = -1;
static int8_t x372 = INT8_MIN;
volatile int8_t x373 = -61;
int8_t x375 = INT8_MIN;
static int8_t x378 = INT8_MIN;
uint8_t x379 = 13U;
int32_t x380 = INT32_MAX;
uint16_t x382 = 623U;
static int16_t x384 = INT16_MIN;
static int8_t x387 = INT8_MIN;
int32_t x389 = 16039829;
volatile int32_t t89 = -86;
int8_t x393 = -1;
int64_t x406 = INT64_MAX;
int32_t t92 = 3;
int16_t x411 = INT16_MAX;
static int32_t x412 = 38;
int16_t x416 = -5332;
int64_t x417 = 133462880LL;
uint8_t x418 = 6U;
volatile int32_t t95 = 879534;
volatile int16_t x425 = INT16_MAX;
volatile int16_t x427 = INT16_MIN;
volatile int32_t t99 = 25089;
int16_t x439 = INT16_MIN;
int32_t t100 = -6;
uint8_t x445 = 16U;
volatile uint32_t x448 = UINT32_MAX;
int64_t x449 = INT64_MIN;
uint64_t x450 = 6101142794718651570LLU;
static volatile uint32_t x451 = UINT32_MAX;
static int8_t x452 = 6;
int16_t x463 = -500;
volatile int32_t t106 = -8409;
volatile int64_t x472 = INT64_MIN;
static uint32_t x473 = 234U;
int64_t x474 = INT64_MIN;
int32_t t109 = 113;
volatile int32_t x488 = INT32_MIN;
int32_t x489 = INT32_MAX;
int64_t x490 = 48423LL;
static int64_t x493 = INT64_MAX;
int32_t t113 = 1;
int32_t x505 = -1;
int8_t x508 = INT8_MIN;
int32_t x526 = INT32_MIN;
static int8_t x541 = INT8_MAX;
static uint32_t x550 = 0U;
static int64_t x552 = -1LL;
int64_t x553 = INT64_MIN;
int64_t x554 = -3517730LL;
int32_t t128 = 87269;
int32_t x565 = -1;
int64_t x566 = INT64_MIN;
static int8_t x573 = -1;
int16_t x575 = INT16_MIN;
volatile int32_t t130 = 250;
int16_t x578 = INT16_MIN;
volatile int32_t t132 = 62113;
int8_t x589 = INT8_MIN;
int32_t x594 = INT32_MIN;
int32_t t135 = 49;
int8_t x604 = INT8_MIN;
uint16_t x608 = UINT16_MAX;
static volatile int32_t t137 = 0;
int32_t t138 = 965052917;
int16_t x613 = INT16_MIN;
volatile uint64_t x616 = UINT64_MAX;
int32_t t139 = -3;
uint32_t x626 = 671U;
volatile int8_t x633 = INT8_MIN;
int16_t x634 = -1;
int32_t x636 = -1;
int8_t x646 = INT8_MIN;
uint16_t x649 = UINT16_MAX;
int32_t t148 = 132913;
uint16_t x653 = 663U;
static int64_t x654 = INT64_MIN;
static volatile uint32_t x657 = 31078883U;
int16_t x658 = 1;
int8_t x668 = INT8_MIN;
volatile int32_t x671 = INT32_MIN;
int64_t x673 = -19011573257LL;
volatile int32_t t154 = 0;
uint8_t x689 = UINT8_MAX;
int32_t t158 = 11481029;
uint64_t x693 = 5933674LLU;
volatile int16_t x702 = INT16_MIN;
static int8_t x704 = 0;
int32_t t160 = -201;
int8_t x709 = INT8_MIN;
static uint64_t x710 = 240840443163LLU;
uint64_t x720 = 90152360905850250LLU;
int32_t x721 = -3486;
static int64_t x728 = INT64_MIN;
uint64_t x756 = 29796569LLU;
int64_t x760 = INT64_MIN;
int8_t x762 = 0;
static int64_t x763 = INT64_MIN;
int8_t x768 = 1;
volatile int32_t t174 = -118031800;
uint32_t x772 = UINT32_MAX;
int8_t x773 = INT8_MIN;
uint8_t x774 = UINT8_MAX;
static volatile int64_t x782 = -30659036303312945LL;
int64_t x801 = -1LL;
volatile int32_t t182 = 2550164;
int64_t x805 = INT64_MIN;
uint64_t x806 = 2758851478743931268LLU;
volatile int32_t x808 = -6;
static int8_t x816 = 18;
int32_t t185 = -109;
uint32_t x824 = UINT32_MAX;
volatile int32_t t186 = -482291;
uint32_t x831 = UINT32_MAX;
static int32_t t188 = -56;
int16_t x834 = 7589;
int8_t x836 = 21;
volatile uint16_t x840 = 7U;
int8_t x845 = 4;
volatile int8_t x851 = -49;
static volatile uint16_t x852 = 1552U;
volatile int32_t t193 = 11;
int8_t x865 = INT8_MAX;
static uint32_t x870 = 0U;
static uint16_t x875 = 19971U;


void f0(void) {
    	int8_t x1 = 0;
	uint16_t x2 = UINT16_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 4373;

    t0 = (x1==(x2<=(x3-x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = UINT32_MAX;
	int64_t x8 = -15980809616LL;
	int32_t t1 = -3188;

    t1 = (x5==(x6<=(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = 63724551326LL;
	static int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 8;

    t2 = (x9==(x10<=(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x13 = 0;
	static uint8_t x16 = 25U;

    t3 = (x13==(x14<=(x15-x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 32597U;
	int32_t x18 = -61636845;
	int8_t x19 = -13;

    t4 = (x17==(x18<=(x19-x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 28155962634LLU;
	uint32_t x22 = 27U;
	uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 3U;
	volatile int32_t t5 = -1892999;

    t5 = (x21==(x22<=(x23-x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 823U;
	int64_t x30 = -16660390318LL;
	volatile uint16_t x31 = UINT16_MAX;
	int64_t x32 = 6708LL;
	volatile int32_t t6 = -6397;

    t6 = (x29==(x30<=(x31-x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x35 = 81355635830536LLU;
	volatile int32_t t7 = -274421564;

    t7 = (x33==(x34<=(x35-x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x38 = 1449;
	int32_t x39 = -1;
	int32_t t8 = -1653878;

    t8 = (x37==(x38<=(x39-x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	volatile int16_t x42 = INT16_MAX;
	int32_t x43 = 15427642;
	int16_t x44 = INT16_MAX;
	volatile int32_t t9 = -341628601;

    t9 = (x41==(x42<=(x43-x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -11;
	int64_t x46 = INT64_MIN;
	int32_t x47 = -1137739;
	int16_t x48 = -1;
	int32_t t10 = 612842274;

    t10 = (x45==(x46<=(x47-x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = -1;
	uint32_t x51 = 239492U;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t11 = 96;

    t11 = (x49==(x50<=(x51-x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x53 = 24U;
	static int32_t x55 = INT32_MIN;
	static uint64_t x56 = 369466526309LLU;
	static volatile int32_t t12 = 7350069;

    t12 = (x53==(x54<=(x55-x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	static int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	static int32_t t13 = 0;

    t13 = (x57==(x58<=(x59-x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	int8_t x62 = -1;
	uint8_t x63 = 57U;
	int32_t x64 = -1;
	volatile int32_t t14 = -41240;

    t14 = (x61==(x62<=(x63-x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	static volatile uint8_t x66 = UINT8_MAX;
	static volatile uint64_t x67 = 545355098436261721LLU;
	int32_t t15 = 256;

    t15 = (x65==(x66<=(x67-x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x69 = 1093U;
	static volatile int64_t x71 = -15396634LL;
	uint32_t x72 = 236386U;
	volatile int32_t t16 = -2924;

    t16 = (x69==(x70<=(x71-x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = 1035714LL;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MAX;
	static volatile int32_t t17 = 6;

    t17 = (x73==(x74<=(x75-x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x81 = INT32_MAX;
	int16_t x83 = -1;
	static int16_t x84 = -437;
	static int32_t t18 = -12441;

    t18 = (x81==(x82<=(x83-x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 25183U;
	static int32_t x86 = 12395;
	int64_t x87 = INT64_MIN;
	int32_t t19 = 6706;

    t19 = (x85==(x86<=(x87-x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x93 = -12705;
	int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	volatile int8_t x96 = -1;
	int32_t t20 = 960868777;

    t20 = (x93==(x94<=(x95-x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = 574226;
	int32_t x98 = INT32_MIN;
	int64_t x99 = 3489199676279739LL;
	int8_t x100 = -1;
	int32_t t21 = 107183;

    t21 = (x97==(x98<=(x99-x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = -93805140;
	volatile int16_t x102 = INT16_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 125831716U;
	int32_t t22 = 45183701;

    t22 = (x101==(x102<=(x103-x104)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x109 = -1;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t23 = 400;

    t23 = (x109==(x110<=(x111-x112)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = 6644;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 84005300162083034LLU;
	static uint32_t x116 = 387U;
	static volatile int32_t t24 = -36495784;

    t24 = (x113==(x114<=(x115-x116)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x117 = INT32_MAX;
	uint8_t x118 = 1U;
	int32_t x120 = 14;
	volatile int32_t t25 = 1658105;

    t25 = (x117==(x118<=(x119-x120)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MAX;
	static uint16_t x123 = 1U;
	volatile int32_t t26 = -6577970;

    t26 = (x121==(x122<=(x123-x124)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 1U;
	static int8_t x126 = 5;
	int8_t x127 = 3;
	uint8_t x128 = 4U;
	int32_t t27 = -14;

    t27 = (x125==(x126<=(x127-x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = INT64_MIN;
	uint16_t x130 = 1088U;
	int32_t x131 = INT32_MAX;
	static int16_t x132 = INT16_MAX;
	int32_t t28 = -20524;

    t28 = (x129==(x130<=(x131-x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = 38U;
	uint32_t x134 = 497571041U;
	int32_t x135 = 11;
	int16_t x136 = INT16_MAX;
	int32_t t29 = 685789;

    t29 = (x133==(x134<=(x135-x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = 0;
	int16_t x138 = -1;
	volatile int64_t x140 = -1LL;
	int32_t t30 = 9539;

    t30 = (x137==(x138<=(x139-x140)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = -1;
	int64_t x142 = INT64_MAX;
	int8_t x143 = 33;
	int16_t x144 = -3;

    t31 = (x141==(x142<=(x143-x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x145 = -1101453;
	uint8_t x146 = 0U;
	uint64_t x147 = 58558009036LLU;
	int64_t x148 = INT64_MIN;
	static volatile int32_t t32 = 77106024;

    t32 = (x145==(x146<=(x147-x148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = 55800LLU;
	int64_t x150 = -1LL;
	int64_t x151 = -1537358262700LL;
	int32_t x152 = INT32_MIN;
	int32_t t33 = 192060;

    t33 = (x149==(x150<=(x151-x152)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x153 = -1LL;
	int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	static uint64_t x156 = 38818993916932254LLU;
	static int32_t t34 = -12162;

    t34 = (x153==(x154<=(x155-x156)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = INT32_MIN;
	volatile int8_t x158 = -20;
	static int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -1;
	int32_t t35 = -45493;

    t35 = (x157==(x158<=(x159-x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	static int32_t t36 = 8487245;

    t36 = (x161==(x162<=(x163-x164)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x165 = 9663884LLU;
	static volatile uint8_t x166 = 2U;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = UINT8_MAX;
	static int32_t t37 = 1;

    t37 = (x165==(x166<=(x167-x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = UINT16_MAX;
	uint8_t x171 = 0U;
	uint8_t x172 = 1U;
	volatile int32_t t38 = 29199;

    t38 = (x169==(x170<=(x171-x172)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = -983982755LL;
	int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;

    t39 = (x173==(x174<=(x175-x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MIN;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = 54;
	int8_t x180 = INT8_MIN;
	int32_t t40 = 270290;

    t40 = (x177==(x178<=(x179-x180)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x181 = -1;
	int64_t x183 = -1LL;
	volatile uint16_t x184 = 25U;
	int32_t t41 = -3442;

    t41 = (x181==(x182<=(x183-x184)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x186 = INT8_MIN;
	uint32_t x187 = 244414828U;
	int32_t x188 = INT32_MIN;
	volatile int32_t t42 = 29;

    t42 = (x185==(x186<=(x187-x188)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x189 = 7U;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 10U;
	static uint64_t x192 = 122632042909150252LLU;

    t43 = (x189==(x190<=(x191-x192)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x193 = -60979974385LL;
	volatile uint8_t x194 = 4U;
	static uint32_t x195 = 1425479U;
	uint32_t x196 = 43312U;

    t44 = (x193==(x194<=(x195-x196)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = -28082783;
	uint8_t x200 = 63U;
	int32_t t45 = 345;

    t45 = (x197==(x198<=(x199-x200)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t46 = -1;

    t46 = (x201==(x202<=(x203-x204)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x205 = UINT8_MAX;
	int64_t x206 = 26990594976LL;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = UINT16_MAX;
	int32_t t47 = -1607;

    t47 = (x205==(x206<=(x207-x208)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	uint32_t x212 = 179270U;
	int32_t t48 = 227517;

    t48 = (x209==(x210<=(x211-x212)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x216 = 202510180;

    t49 = (x213==(x214<=(x215-x216)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = -116;
	static volatile int32_t t50 = 828703;

    t50 = (x217==(x218<=(x219-x220)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x221 = 2192U;
	volatile int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t51 = 583798128;

    t51 = (x221==(x222<=(x223-x224)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = -236;
	int8_t x228 = -1;

    t52 = (x225==(x226<=(x227-x228)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x229 = 3503534239130LLU;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = -3LL;
	int32_t t53 = -4819888;

    t53 = (x229==(x230<=(x231-x232)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = 1;
	static volatile int8_t x236 = -11;
	static int32_t t54 = -62967029;

    t54 = (x233==(x234<=(x235-x236)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;

    t55 = (x237==(x238<=(x239-x240)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x241 = INT64_MAX;
	static volatile int8_t x242 = -60;
	volatile int32_t x243 = -114383413;
	int64_t x244 = -1LL;
	int32_t t56 = 7;

    t56 = (x241==(x242<=(x243-x244)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	uint8_t x247 = 2U;
	volatile int32_t t57 = 1418846;

    t57 = (x245==(x246<=(x247-x248)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = INT64_MAX;
	uint16_t x251 = 222U;
	int64_t x252 = INT64_MAX;
	int32_t t58 = 455555;

    t58 = (x249==(x250<=(x251-x252)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = -1;
	uint64_t x254 = 754950506808LLU;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = 35U;
	int32_t t59 = -7630;

    t59 = (x253==(x254<=(x255-x256)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = 0;
	int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	int32_t t60 = 10569;

    t60 = (x257==(x258<=(x259-x260)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x261 = 76151956948240597LLU;
	volatile uint32_t x263 = 5U;
	uint64_t x264 = 944LLU;
	volatile int32_t t61 = 1;

    t61 = (x261==(x262<=(x263-x264)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x265 = 23524260817859007LLU;
	volatile int64_t x266 = -1LL;
	static int64_t x267 = INT64_MIN;
	volatile int32_t t62 = 369747545;

    t62 = (x265==(x266<=(x267-x268)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MAX;
	int32_t x271 = 1383;
	uint16_t x272 = 1U;
	static int32_t t63 = 849574;

    t63 = (x269==(x270<=(x271-x272)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x275 = INT16_MIN;
	int32_t t64 = -130127864;

    t64 = (x273==(x274<=(x275-x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = 2057U;
	static uint8_t x280 = 1U;
	static int32_t t65 = 140;

    t65 = (x277==(x278<=(x279-x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = 3816092833208805LL;
	volatile int16_t x282 = -3;
	uint32_t x283 = 2U;
	uint64_t x284 = 14LLU;
	int32_t t66 = -224;

    t66 = (x281==(x282<=(x283-x284)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MIN;
	int64_t x286 = -388165LL;
	volatile uint64_t x287 = 59520861267LLU;
	static int32_t t67 = 7593;

    t67 = (x285==(x286<=(x287-x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = -1;
	int32_t x290 = 11691627;
	volatile uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MAX;
	volatile int32_t t68 = 699;

    t68 = (x289==(x290<=(x291-x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	int32_t t69 = -474864357;

    t69 = (x293==(x294<=(x295-x296)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 1U;
	volatile int32_t x299 = INT32_MAX;
	volatile int32_t t70 = 7;

    t70 = (x297==(x298<=(x299-x300)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = 399630U;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t71 = -142710685;

    t71 = (x301==(x302<=(x303-x304)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = UINT64_MAX;
	uint8_t x306 = 105U;
	int32_t x308 = INT32_MAX;

    t72 = (x305==(x306<=(x307-x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x310 = INT32_MIN;
	int8_t x311 = 1;
	int8_t x312 = 0;
	volatile int32_t t73 = -322876457;

    t73 = (x309==(x310<=(x311-x312)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MAX;
	uint16_t x316 = 31U;

    t74 = (x313==(x314<=(x315-x316)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x317 = -931LL;
	volatile int16_t x318 = INT16_MAX;
	volatile int16_t x319 = 29;
	int8_t x320 = -1;
	volatile int32_t t75 = -1680952;

    t75 = (x317==(x318<=(x319-x320)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x322 = 5U;
	int32_t t76 = -62093;

    t76 = (x321==(x322<=(x323-x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x329 = 417U;
	int64_t x330 = 926398553939LL;
	uint64_t x332 = UINT64_MAX;
	static int32_t t77 = 2683798;

    t77 = (x329==(x330<=(x331-x332)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x341 = 4068690756595LLU;
	int8_t x342 = INT8_MIN;
	volatile uint64_t x343 = 75704LLU;
	volatile int8_t x344 = -1;
	int32_t t78 = 1291;

    t78 = (x341==(x342<=(x343-x344)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x345 = 1U;
	int64_t x346 = 74934LL;
	volatile int32_t x347 = -1;
	int8_t x348 = -1;
	volatile int32_t t79 = 141206;

    t79 = (x345==(x346<=(x347-x348)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x353 = 108;
	volatile int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static volatile int32_t t80 = 0;

    t80 = (x353==(x354<=(x355-x356)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x357 = INT32_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile uint64_t x359 = 3121867537799252479LLU;
	int8_t x360 = -1;
	volatile int32_t t81 = -2;

    t81 = (x357==(x358<=(x359-x360)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x361 = 14515250LLU;
	int32_t x363 = INT32_MIN;
	static uint64_t x364 = UINT64_MAX;
	static int32_t t82 = -3485155;

    t82 = (x361==(x362<=(x363-x364)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x365 = 7U;
	uint32_t x366 = 128963885U;
	static volatile int32_t x368 = INT32_MAX;
	int32_t t83 = 7;

    t83 = (x365==(x366<=(x367-x368)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x369 = 88949LLU;
	volatile int32_t x370 = INT32_MIN;
	int32_t t84 = -14753;

    t84 = (x369==(x370<=(x371-x372)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x374 = -1;
	int8_t x376 = INT8_MAX;
	int32_t t85 = -76364180;

    t85 = (x373==(x374<=(x375-x376)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = INT8_MIN;
	static int32_t t86 = 164177;

    t86 = (x377==(x378<=(x379-x380)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x381 = INT64_MIN;
	uint16_t x383 = UINT16_MAX;
	volatile int32_t t87 = 19;

    t87 = (x381==(x382<=(x383-x384)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = 3LL;
	int16_t x386 = -1;
	int64_t x388 = INT64_MIN;
	int32_t t88 = -6946433;

    t88 = (x385==(x386<=(x387-x388)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x390 = -1;
	uint64_t x391 = 3379063843LLU;
	int16_t x392 = -1;

    t89 = (x389==(x390<=(x391-x392)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x394 = -14661;
	int16_t x395 = INT16_MIN;
	static int64_t x396 = INT64_MIN;
	static volatile int32_t t90 = 696290740;

    t90 = (x393==(x394<=(x395-x396)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x397 = 14U;
	static int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -634LL;
	int16_t x400 = 1;
	volatile int32_t t91 = -3289011;

    t91 = (x397==(x398<=(x399-x400)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x405 = 2;
	int16_t x407 = -7193;
	uint32_t x408 = 167U;

    t92 = (x405==(x406<=(x407-x408)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = 12;
	static uint32_t x410 = 309735U;
	static int32_t t93 = -30619;

    t93 = (x409==(x410<=(x411-x412)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x413 = -2;
	static uint8_t x414 = 32U;
	volatile int16_t x415 = INT16_MIN;
	int32_t t94 = -40536;

    t94 = (x413==(x414<=(x415-x416)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;

    t95 = (x417==(x418<=(x419-x420)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x421 = -8123LL;
	int8_t x422 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	static volatile uint16_t x424 = UINT16_MAX;
	int32_t t96 = 528838183;

    t96 = (x421==(x422<=(x423-x424)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x426 = -8;
	uint64_t x428 = UINT64_MAX;
	int32_t t97 = 9949;

    t97 = (x425==(x426<=(x427-x428)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x429 = 52U;
	int16_t x430 = 1766;
	volatile int8_t x431 = INT8_MAX;
	volatile int64_t x432 = -557044707455601295LL;
	int32_t t98 = 6;

    t98 = (x429==(x430<=(x431-x432)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x433 = -1LL;
	volatile uint8_t x434 = 119U;
	int16_t x435 = -8544;
	int16_t x436 = 91;

    t99 = (x433==(x434<=(x435-x436)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x437 = 27U;
	volatile int64_t x438 = 365513423077789LL;
	int16_t x440 = INT16_MIN;

    t100 = (x437==(x438<=(x439-x440)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x441 = 89756680901620LL;
	int32_t x442 = INT32_MIN;
	int8_t x443 = -55;
	int32_t x444 = INT32_MIN;
	static int32_t t101 = 2;

    t101 = (x441==(x442<=(x443-x444)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x446 = INT8_MAX;
	int32_t x447 = -1;
	volatile int32_t t102 = 546739;

    t102 = (x445==(x446<=(x447-x448)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t t103 = 190436412;

    t103 = (x449==(x450<=(x451-x452)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = 2U;
	int64_t x454 = INT64_MIN;
	static volatile uint32_t x455 = 127U;
	int16_t x456 = INT16_MIN;
	volatile int32_t t104 = -4;

    t104 = (x453==(x454<=(x455-x456)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x457 = UINT16_MAX;
	static int32_t x458 = -35006244;
	volatile uint8_t x459 = 54U;
	uint16_t x460 = 40U;
	volatile int32_t t105 = 31;

    t105 = (x457==(x458<=(x459-x460)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x461 = 8097040U;
	static int64_t x462 = 672742249718LL;
	int8_t x464 = 39;

    t106 = (x461==(x462<=(x463-x464)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x465 = INT8_MAX;
	int8_t x466 = INT8_MAX;
	uint32_t x467 = 670U;
	volatile int8_t x468 = INT8_MIN;
	int32_t t107 = 3313;

    t107 = (x465==(x466<=(x467-x468)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x469 = 4280;
	int64_t x470 = -360999144102489LL;
	static volatile int16_t x471 = INT16_MIN;
	int32_t t108 = -191425683;

    t108 = (x469==(x470<=(x471-x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x475 = INT32_MIN;
	uint32_t x476 = 48573009U;

    t109 = (x473==(x474<=(x475-x476)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x477 = 71U;
	static volatile int16_t x478 = INT16_MIN;
	int64_t x479 = -1LL;
	static uint32_t x480 = 13028134U;
	volatile int32_t t110 = 10;

    t110 = (x477==(x478<=(x479-x480)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	uint8_t x486 = 0U;
	int64_t x487 = -2286824692741273118LL;
	static volatile int32_t t111 = -3520002;

    t111 = (x485==(x486<=(x487-x488)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 28332U;
	static int32_t t112 = 440852300;

    t112 = (x489==(x490<=(x491-x492)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x494 = INT16_MIN;
	int16_t x495 = -1;
	volatile int8_t x496 = INT8_MIN;

    t113 = (x493==(x494<=(x495-x496)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x497 = -796698973LL;
	volatile int64_t x498 = -1LL;
	volatile int16_t x499 = 2;
	int16_t x500 = INT16_MIN;
	int32_t t114 = 2996898;

    t114 = (x497==(x498<=(x499-x500)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x501 = 2U;
	volatile int16_t x502 = -1;
	int16_t x503 = INT16_MIN;
	uint8_t x504 = 2U;
	int32_t t115 = 42224;

    t115 = (x501==(x502<=(x503-x504)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x506 = INT16_MIN;
	volatile int32_t x507 = -1;
	static int32_t t116 = 5722;

    t116 = (x505==(x506<=(x507-x508)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = 5;
	uint16_t x510 = 26203U;
	static int8_t x511 = 1;
	uint16_t x512 = 1U;
	static volatile int32_t t117 = 26430;

    t117 = (x509==(x510<=(x511-x512)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x513 = UINT64_MAX;
	int32_t x514 = -1;
	static uint32_t x515 = 800U;
	volatile int32_t x516 = -86940395;
	static volatile int32_t t118 = 2;

    t118 = (x513==(x514<=(x515-x516)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x517 = INT64_MAX;
	uint16_t x518 = UINT16_MAX;
	int8_t x519 = INT8_MAX;
	int8_t x520 = INT8_MAX;
	volatile int32_t t119 = -5;

    t119 = (x517==(x518<=(x519-x520)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x521 = INT16_MIN;
	int32_t x522 = INT32_MAX;
	uint16_t x523 = 185U;
	static int16_t x524 = 476;
	volatile int32_t t120 = 29546;

    t120 = (x521==(x522<=(x523-x524)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x525 = INT64_MIN;
	volatile int64_t x527 = -1LL;
	volatile int32_t x528 = -9040309;
	int32_t t121 = 281;

    t121 = (x525==(x526<=(x527-x528)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = INT8_MIN;
	volatile int64_t x530 = INT64_MIN;
	uint32_t x531 = 4U;
	int8_t x532 = -1;
	int32_t t122 = -110140;

    t122 = (x529==(x530<=(x531-x532)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x542 = -1;
	uint16_t x543 = 10951U;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t123 = 123926;

    t123 = (x541==(x542<=(x543-x544)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x546 = -1;
	int8_t x547 = INT8_MIN;
	int64_t x548 = INT64_MIN;
	static volatile int32_t t124 = 10;

    t124 = (x545==(x546<=(x547-x548)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x549 = 0U;
	static volatile int64_t x551 = -12472888255285LL;
	volatile int32_t t125 = -1;

    t125 = (x549==(x550<=(x551-x552)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x555 = -779054662;
	int32_t x556 = -10;
	int32_t t126 = 127808985;

    t126 = (x553==(x554<=(x555-x556)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x557 = -1;
	volatile int64_t x558 = INT64_MAX;
	uint8_t x559 = UINT8_MAX;
	uint64_t x560 = 10140666234250LLU;
	volatile int32_t t127 = 0;

    t127 = (x557==(x558<=(x559-x560)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = -53196466;
	static uint8_t x562 = 6U;
	int32_t x563 = -8775;
	uint8_t x564 = 11U;

    t128 = (x561==(x562<=(x563-x564)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x567 = INT16_MAX;
	volatile int8_t x568 = -1;
	volatile int32_t t129 = 102824948;

    t129 = (x565==(x566<=(x567-x568)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x574 = 10493LL;
	uint32_t x576 = UINT32_MAX;

    t130 = (x573==(x574<=(x575-x576)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = INT16_MAX;
	int8_t x579 = INT8_MIN;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t131 = -82671;

    t131 = (x577==(x578<=(x579-x580)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x585 = INT8_MAX;
	volatile uint8_t x586 = 98U;
	static int32_t x587 = -1;
	uint64_t x588 = UINT64_MAX;

    t132 = (x585==(x586<=(x587-x588)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x590 = -1;
	int16_t x591 = -9;
	uint16_t x592 = 0U;
	static int32_t t133 = 7394065;

    t133 = (x589==(x590<=(x591-x592)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x593 = INT16_MAX;
	static uint32_t x595 = 243131793U;
	int16_t x596 = 75;
	volatile int32_t t134 = -2530;

    t134 = (x593==(x594<=(x595-x596)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x597 = 15U;
	int64_t x598 = INT64_MAX;
	static uint64_t x599 = UINT64_MAX;
	int32_t x600 = -438;

    t135 = (x597==(x598<=(x599-x600)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x601 = 2586937869400411LL;
	uint64_t x602 = 21763796443723271LLU;
	static uint64_t x603 = 1673314309846413269LLU;
	int32_t t136 = 12220;

    t136 = (x601==(x602<=(x603-x604)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x605 = 525U;
	uint64_t x606 = 104697LLU;
	static int32_t x607 = INT32_MAX;

    t137 = (x605==(x606<=(x607-x608)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = -1;
	int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = 2471U;

    t138 = (x609==(x610<=(x611-x612)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x614 = INT32_MIN;
	int16_t x615 = INT16_MIN;

    t139 = (x613==(x614<=(x615-x616)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x618 = -1;
	volatile int16_t x619 = INT16_MIN;
	uint8_t x620 = 0U;
	int32_t t140 = -1038045905;

    t140 = (x617==(x618<=(x619-x620)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x621 = INT8_MAX;
	static uint32_t x622 = UINT32_MAX;
	uint8_t x623 = 4U;
	int16_t x624 = 39;
	static int32_t t141 = 34;

    t141 = (x621==(x622<=(x623-x624)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x625 = INT8_MAX;
	int8_t x627 = 6;
	int64_t x628 = -8857259324043962LL;
	int32_t t142 = -9864173;

    t142 = (x625==(x626<=(x627-x628)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x629 = INT16_MIN;
	uint16_t x630 = 17367U;
	int16_t x631 = INT16_MIN;
	volatile uint16_t x632 = 7U;
	int32_t t143 = 4234;

    t143 = (x629==(x630<=(x631-x632)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x635 = UINT32_MAX;
	volatile int32_t t144 = -9237816;

    t144 = (x633==(x634<=(x635-x636)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = -30974;
	int16_t x638 = INT16_MAX;
	int16_t x639 = INT16_MAX;
	static volatile uint64_t x640 = UINT64_MAX;
	int32_t t145 = -755572742;

    t145 = (x637==(x638<=(x639-x640)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x641 = 15;
	static volatile uint16_t x642 = 4472U;
	volatile int32_t x643 = INT32_MAX;
	static int8_t x644 = INT8_MAX;
	int32_t t146 = -1251;

    t146 = (x641==(x642<=(x643-x644)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x645 = 2U;
	uint64_t x647 = 2365LLU;
	uint16_t x648 = 6253U;
	static int32_t t147 = -22137;

    t147 = (x645==(x646<=(x647-x648)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x650 = -1;
	int32_t x651 = -471904;
	static int16_t x652 = INT16_MIN;

    t148 = (x649==(x650<=(x651-x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x655 = UINT32_MAX;
	uint32_t x656 = 68193144U;
	int32_t t149 = 217086;

    t149 = (x653==(x654<=(x655-x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x659 = 31423566U;
	int16_t x660 = 2936;
	volatile int32_t t150 = 117136859;

    t150 = (x657==(x658<=(x659-x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x661 = INT8_MIN;
	int64_t x662 = INT64_MAX;
	static int8_t x663 = INT8_MIN;
	volatile int8_t x664 = INT8_MAX;
	static volatile int32_t t151 = 53;

    t151 = (x661==(x662<=(x663-x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x665 = INT8_MIN;
	volatile uint8_t x666 = 52U;
	volatile int64_t x667 = INT64_MIN;
	volatile int32_t t152 = 12854676;

    t152 = (x665==(x666<=(x667-x668)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x669 = 2973LL;
	uint16_t x670 = UINT16_MAX;
	int8_t x672 = INT8_MIN;
	volatile int32_t t153 = 57002;

    t153 = (x669==(x670<=(x671-x672)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x674 = UINT8_MAX;
	int16_t x675 = INT16_MIN;
	int8_t x676 = INT8_MIN;

    t154 = (x673==(x674<=(x675-x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x677 = INT8_MIN;
	volatile uint16_t x678 = UINT16_MAX;
	int8_t x679 = INT8_MIN;
	static volatile uint64_t x680 = 5939932LLU;
	int32_t t155 = -1;

    t155 = (x677==(x678<=(x679-x680)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x681 = 0U;
	static int32_t x682 = INT32_MAX;
	static volatile int64_t x683 = -3LL;
	uint16_t x684 = 21973U;
	static int32_t t156 = -2;

    t156 = (x681==(x682<=(x683-x684)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x685 = 59LL;
	static int32_t x686 = INT32_MIN;
	volatile uint64_t x687 = 1917LLU;
	int64_t x688 = INT64_MAX;
	volatile int32_t t157 = -16745337;

    t157 = (x685==(x686<=(x687-x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x690 = 513706761U;
	int16_t x691 = INT16_MIN;
	int16_t x692 = 13912;

    t158 = (x689==(x690<=(x691-x692)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x694 = INT32_MIN;
	uint64_t x695 = UINT64_MAX;
	int8_t x696 = 0;
	volatile int32_t t159 = -1956;

    t159 = (x693==(x694<=(x695-x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x701 = INT32_MIN;
	int64_t x703 = 323597259684716582LL;

    t160 = (x701==(x702<=(x703-x704)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = INT16_MIN;
	static volatile int16_t x706 = INT16_MAX;
	static uint64_t x707 = UINT64_MAX;
	uint32_t x708 = 130U;
	static int32_t t161 = 16390710;

    t161 = (x705==(x706<=(x707-x708)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x711 = 295947049U;
	volatile int8_t x712 = 2;
	int32_t t162 = 8;

    t162 = (x709==(x710<=(x711-x712)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x713 = 18172LLU;
	uint64_t x714 = 1382176167LLU;
	uint64_t x715 = 65685618LLU;
	int8_t x716 = -5;
	int32_t t163 = -85367;

    t163 = (x713==(x714<=(x715-x716)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = -1;
	static volatile int8_t x719 = INT8_MIN;
	static volatile int32_t t164 = -999454562;

    t164 = (x717==(x718<=(x719-x720)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x722 = INT8_MIN;
	volatile uint64_t x723 = 110416960516LLU;
	int64_t x724 = INT64_MAX;
	volatile int32_t t165 = -6205082;

    t165 = (x721==(x722<=(x723-x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x725 = UINT8_MAX;
	int8_t x726 = INT8_MIN;
	int32_t x727 = -1;
	int32_t t166 = -1;

    t166 = (x725==(x726<=(x727-x728)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = INT16_MIN;
	static volatile int16_t x730 = -1;
	static uint16_t x731 = 213U;
	volatile int32_t x732 = -1;
	volatile int32_t t167 = 8;

    t167 = (x729==(x730<=(x731-x732)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x733 = INT8_MAX;
	int32_t x734 = -1;
	uint16_t x735 = UINT16_MAX;
	static int64_t x736 = INT64_MAX;
	volatile int32_t t168 = 1;

    t168 = (x733==(x734<=(x735-x736)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x738 = -24828406469471LL;
	int16_t x739 = -1;
	uint64_t x740 = 67697174033634LLU;
	volatile int32_t t169 = 2;

    t169 = (x737==(x738<=(x739-x740)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x741 = 3U;
	static int32_t x742 = INT32_MAX;
	int8_t x743 = INT8_MIN;
	uint16_t x744 = UINT16_MAX;
	int32_t t170 = 2694783;

    t170 = (x741==(x742<=(x743-x744)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = 1;
	volatile int16_t x755 = -1;
	int32_t t171 = 145875;

    t171 = (x753==(x754<=(x755-x756)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x757 = 6843;
	uint64_t x758 = 17227425436572322LLU;
	static int64_t x759 = -6757597994319098LL;
	volatile int32_t t172 = 23674280;

    t172 = (x757==(x758<=(x759-x760)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x761 = -1;
	volatile int64_t x764 = -4774LL;
	static volatile int32_t t173 = -13143;

    t173 = (x761==(x762<=(x763-x764)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x765 = -268;
	uint64_t x766 = 111609071249189LLU;
	uint32_t x767 = 1094646U;

    t174 = (x765==(x766<=(x767-x768)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x769 = 5;
	volatile int32_t x770 = INT32_MIN;
	uint16_t x771 = UINT16_MAX;
	int32_t t175 = 129575675;

    t175 = (x769==(x770<=(x771-x772)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x775 = 1U;
	static volatile int64_t x776 = 31938194695995067LL;
	volatile int32_t t176 = -393350760;

    t176 = (x773==(x774<=(x775-x776)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	int32_t x778 = INT32_MIN;
	uint8_t x779 = 2U;
	volatile int64_t x780 = INT64_MAX;
	volatile int32_t t177 = 1046408;

    t177 = (x777==(x778<=(x779-x780)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x781 = UINT16_MAX;
	volatile int16_t x783 = 7955;
	volatile uint64_t x784 = 4137672158138635LLU;
	volatile int32_t t178 = -2555184;

    t178 = (x781==(x782<=(x783-x784)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x785 = -1LL;
	static int64_t x786 = 24802235LL;
	int64_t x787 = 6869833512130LL;
	static int8_t x788 = 28;
	int32_t t179 = 199712106;

    t179 = (x785==(x786<=(x787-x788)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x793 = 5U;
	uint8_t x794 = 1U;
	uint64_t x795 = 15LLU;
	int64_t x796 = INT64_MIN;
	volatile int32_t t180 = -128049336;

    t180 = (x793==(x794<=(x795-x796)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x797 = 224U;
	int64_t x798 = INT64_MAX;
	static uint64_t x799 = UINT64_MAX;
	uint16_t x800 = UINT16_MAX;
	int32_t t181 = 32214;

    t181 = (x797==(x798<=(x799-x800)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x802 = 79U;
	int64_t x803 = INT64_MIN;
	static int64_t x804 = INT64_MIN;

    t182 = (x801==(x802<=(x803-x804)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x807 = UINT32_MAX;
	int32_t t183 = -11494;

    t183 = (x805==(x806<=(x807-x808)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x809 = 5345U;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -1;
	int16_t x812 = 1;
	static int32_t t184 = 2015109;

    t184 = (x809==(x810<=(x811-x812)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	volatile uint16_t x814 = UINT16_MAX;
	static int32_t x815 = -1;

    t185 = (x813==(x814<=(x815-x816)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MAX;
	int16_t x823 = 6;

    t186 = (x821==(x822<=(x823-x824)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x825 = 10U;
	uint8_t x826 = UINT8_MAX;
	static volatile uint32_t x827 = 385770108U;
	uint16_t x828 = 3U;
	volatile int32_t t187 = 10467;

    t187 = (x825==(x826<=(x827-x828)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x829 = 4;
	static volatile int64_t x830 = INT64_MAX;
	int32_t x832 = INT32_MAX;

    t188 = (x829==(x830<=(x831-x832)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x833 = UINT16_MAX;
	static int16_t x835 = -12;
	volatile int32_t t189 = -4269659;

    t189 = (x833==(x834<=(x835-x836)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x837 = INT64_MIN;
	static int64_t x838 = INT64_MIN;
	uint16_t x839 = UINT16_MAX;
	volatile int32_t t190 = 124;

    t190 = (x837==(x838<=(x839-x840)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x846 = INT32_MIN;
	volatile int32_t x847 = INT32_MIN;
	int32_t x848 = -2975570;
	volatile int32_t t191 = -6;

    t191 = (x845==(x846<=(x847-x848)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x849 = 7769263840649492LLU;
	uint32_t x850 = UINT32_MAX;
	volatile int32_t t192 = 20935682;

    t192 = (x849==(x850<=(x851-x852)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x853 = INT16_MIN;
	uint16_t x854 = 1U;
	uint64_t x855 = 23177LLU;
	uint8_t x856 = 5U;

    t193 = (x853==(x854<=(x855-x856)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x857 = INT32_MAX;
	volatile int8_t x858 = INT8_MIN;
	volatile uint32_t x859 = 24667455U;
	int16_t x860 = -506;
	static volatile int32_t t194 = -654;

    t194 = (x857==(x858<=(x859-x860)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x866 = -1;
	int64_t x867 = -267735492LL;
	static int32_t x868 = INT32_MIN;
	int32_t t195 = -5804;

    t195 = (x865==(x866<=(x867-x868)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x869 = INT32_MIN;
	int64_t x871 = -1LL;
	static uint16_t x872 = 101U;
	int32_t t196 = -1472946;

    t196 = (x869==(x870<=(x871-x872)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x873 = -1;
	int16_t x874 = -1;
	int32_t x876 = 346000614;
	volatile int32_t t197 = -619824;

    t197 = (x873==(x874<=(x875-x876)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x877 = 8U;
	int8_t x878 = INT8_MIN;
	uint64_t x879 = UINT64_MAX;
	volatile int64_t x880 = INT64_MAX;
	int32_t t198 = 102;

    t198 = (x877==(x878<=(x879-x880)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x881 = 89708700LL;
	volatile int16_t x882 = -1;
	int32_t x883 = INT32_MIN;
	uint32_t x884 = 2231U;
	static volatile int32_t t199 = -1412;

    t199 = (x881==(x882<=(x883-x884)));

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

