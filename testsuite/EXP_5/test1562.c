
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

static uint64_t x1 = UINT64_MAX;
int64_t x6 = INT64_MIN;
static volatile int64_t x11 = 0LL;
static int16_t x20 = INT16_MAX;
uint8_t x37 = 1U;
uint64_t x45 = 487585377333LLU;
static int64_t x47 = INT64_MIN;
volatile int64_t x48 = 0LL;
int16_t x49 = 282;
int32_t x52 = INT32_MAX;
static int8_t x53 = INT8_MIN;
int32_t x56 = INT32_MAX;
static int64_t x60 = INT64_MIN;
volatile uint32_t x61 = 2796U;
int16_t x71 = INT16_MAX;
int16_t x73 = 178;
int64_t x74 = INT64_MAX;
uint64_t x76 = 428LLU;
volatile int32_t t18 = 0;
int8_t x84 = -26;
static int32_t t22 = -2019190;
volatile int64_t x96 = -63293LL;
static int8_t x98 = 1;
int32_t x101 = INT32_MIN;
int32_t t25 = -337315;
uint16_t x112 = 117U;
int32_t t27 = -62059867;
static int8_t x120 = INT8_MIN;
static int32_t x121 = 0;
int8_t x125 = -1;
int32_t x136 = -382120;
int32_t t34 = -264;
int32_t x146 = -1;
uint32_t x147 = 329764065U;
int16_t x148 = INT16_MIN;
volatile int32_t t36 = -34720;
uint64_t x155 = 289014LLU;
int64_t x159 = 430144629LL;
uint16_t x161 = 6412U;
uint16_t x163 = UINT16_MAX;
volatile int32_t t41 = 3689;
volatile uint64_t x170 = 311093407LLU;
static int32_t x182 = -1;
uint16_t x194 = UINT16_MAX;
uint8_t x195 = 9U;
volatile uint8_t x205 = 1U;
static int8_t x207 = INT8_MIN;
uint64_t x214 = 31130LLU;
int16_t x216 = INT16_MAX;
volatile int8_t x222 = INT8_MAX;
int32_t t55 = -12;
int8_t x227 = -1;
volatile int32_t t59 = -126068596;
int8_t x250 = -34;
int32_t t62 = -11;
int32_t x253 = INT32_MIN;
static int16_t x257 = INT16_MIN;
uint64_t x260 = 153186281802997740LLU;
int32_t x267 = 99190;
static int32_t x269 = -1;
volatile int64_t x278 = -1LL;
int8_t x279 = INT8_MAX;
int64_t x282 = 87LL;
int32_t x283 = INT32_MIN;
static int64_t x287 = INT64_MAX;
int8_t x289 = INT8_MAX;
int32_t x290 = -1;
static volatile int32_t t73 = -189933;
int64_t x306 = INT64_MIN;
int32_t t77 = 592845;
static uint32_t x313 = UINT32_MAX;
int8_t x319 = INT8_MAX;
uint16_t x321 = UINT16_MAX;
int8_t x323 = INT8_MAX;
int8_t x328 = 1;
int64_t x336 = INT64_MIN;
static uint64_t x341 = UINT64_MAX;
int8_t x352 = INT8_MIN;
uint32_t x362 = 4U;
volatile int32_t t91 = -5921;
static uint8_t x373 = UINT8_MAX;
volatile uint64_t x380 = UINT64_MAX;
int32_t x381 = INT32_MIN;
static uint64_t x387 = UINT64_MAX;
static int64_t x397 = INT64_MIN;
int64_t x402 = INT64_MAX;
static int8_t x405 = INT8_MAX;
static int8_t x410 = -1;
uint8_t x414 = 1U;
int64_t x416 = 61LL;
volatile int32_t t103 = -8138;
volatile int64_t x418 = INT64_MAX;
uint16_t x423 = 3714U;
static int32_t t106 = 61179;
int16_t x456 = -1;
uint8_t x464 = UINT8_MAX;
volatile int32_t t115 = -6882;
int32_t t116 = -3739;
static uint16_t x475 = 15231U;
uint8_t x477 = 88U;
int8_t x482 = 61;
int32_t x487 = 13164127;
volatile int32_t x488 = INT32_MIN;
int64_t x490 = INT64_MAX;
volatile int64_t x494 = -3184602LL;
static int32_t x495 = INT32_MAX;
uint8_t x496 = 3U;
volatile int32_t t124 = -118873;
uint32_t x502 = UINT32_MAX;
int8_t x518 = INT8_MIN;
volatile int32_t x520 = -6;
volatile int32_t t131 = -446024;
int32_t x529 = -1;
int8_t x530 = INT8_MIN;
volatile uint64_t x532 = 1135390918LLU;
uint16_t x533 = 18155U;
int8_t x535 = 52;
uint8_t x536 = 1U;
uint16_t x538 = 81U;
static int32_t x539 = INT32_MIN;
volatile int32_t t134 = 4;
volatile int32_t t135 = 14524113;
volatile uint16_t x548 = 326U;
uint64_t x550 = 2735078263LLU;
uint64_t x566 = 241794232600504LLU;
static int8_t x567 = INT8_MIN;
volatile int32_t t141 = -195;
static volatile int8_t x571 = INT8_MAX;
volatile uint8_t x584 = 1U;
int8_t x586 = INT8_MIN;
uint8_t x587 = UINT8_MAX;
int64_t x597 = 43LL;
static volatile int32_t t149 = -6335119;
int8_t x606 = 1;
int32_t x612 = -1;
int64_t x613 = INT64_MIN;
int64_t x623 = INT64_MIN;
volatile int32_t t155 = 83;
uint64_t x631 = 726913LLU;
volatile int16_t x640 = 5;
volatile int32_t t160 = -5777526;
int16_t x647 = INT16_MIN;
static uint64_t x648 = 267163949LLU;
uint8_t x651 = UINT8_MAX;
static int64_t x656 = -1LL;
volatile int32_t t163 = 1;
int16_t x659 = -1;
uint32_t x660 = 3696703U;
volatile int32_t t165 = 13425768;
static volatile int32_t t167 = 1;
static int32_t x674 = INT32_MIN;
static volatile int32_t t168 = 19;
volatile int32_t t169 = 47;
static int32_t x685 = 0;
uint16_t x688 = 3782U;
int16_t x692 = INT16_MIN;
static volatile uint32_t x704 = UINT32_MAX;
uint64_t x708 = 54LLU;
static uint8_t x711 = 20U;
uint32_t x713 = 181U;
int32_t x716 = -389050440;
int16_t x724 = -1;
volatile int16_t x726 = INT16_MIN;
static volatile int32_t t184 = -1744222;
int64_t x742 = -1LL;
volatile int32_t x749 = INT32_MAX;
int32_t x753 = INT32_MIN;
int64_t x757 = -1LL;
static int8_t x767 = -15;
volatile int32_t t192 = -1625993;
int16_t x773 = -1;
int64_t x775 = -1LL;
int32_t t193 = -325998724;
int32_t x779 = -1;
int64_t x782 = INT64_MIN;
volatile int32_t t196 = -4932;
int32_t t197 = -16294086;
static uint32_t x794 = UINT32_MAX;


void f0(void) {
    	int8_t x2 = 60;
	int32_t x3 = -3502982;
	static uint8_t x4 = 35U;
	int32_t t0 = 6258;

    t0 = (x1==((x2==x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	static int16_t x7 = 47;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -601095;

    t1 = (x5==((x6==x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 2U;
	int16_t x10 = -15948;
	int16_t x12 = -1;
	volatile int32_t t2 = -467166;

    t2 = (x9==((x10==x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -2;
	static uint16_t x14 = UINT16_MAX;
	static uint64_t x15 = 55LLU;
	volatile int16_t x16 = -6;
	volatile int32_t t3 = -200905;

    t3 = (x13==((x14==x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -423;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -2431191;

    t4 = (x17==((x18==x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	uint8_t x22 = 47U;
	uint8_t x23 = UINT8_MAX;
	static int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -4015679;

    t5 = (x21==((x22==x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int8_t x26 = 1;
	volatile int16_t x27 = -498;
	static int16_t x28 = -1;
	static volatile int32_t t6 = 661;

    t6 = (x25==((x26==x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 702261LLU;
	uint64_t x30 = 75371042LLU;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 115U;
	volatile int32_t t7 = -5203435;

    t7 = (x29==((x30==x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int8_t x34 = INT8_MAX;
	int32_t x35 = 725;
	static int16_t x36 = -1;
	volatile int32_t t8 = 334836535;

    t8 = (x33==((x34==x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 23491U;
	static volatile uint16_t x39 = 640U;
	int64_t x40 = INT64_MIN;
	static volatile int32_t t9 = 11644;

    t9 = (x37==((x38==x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = -1446947;

    t10 = (x41==((x42==x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = 9159001831LL;
	volatile int32_t t11 = 58;

    t11 = (x45==((x46==x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MIN;
	static uint64_t x51 = 351629LLU;
	static volatile int32_t t12 = -166;

    t12 = (x49==((x50==x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = 432626663171981LL;
	int8_t x55 = -16;
	int32_t t13 = -813;

    t13 = (x53==((x54==x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MAX;
	volatile int8_t x59 = 30;
	int32_t t14 = -846;

    t14 = (x57==((x58==x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = 38;
	static uint8_t x63 = 58U;
	static int64_t x64 = 1281605133923LL;
	volatile int32_t t15 = 2086;

    t15 = (x61==((x62==x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile int64_t x66 = -1LL;
	volatile int8_t x67 = -1;
	uint8_t x68 = 39U;
	int32_t t16 = 0;

    t16 = (x65==((x66==x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint16_t x70 = 0U;
	int16_t x72 = 1;
	int32_t t17 = 6743;

    t17 = (x69==((x70==x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x75 = -120581150;

    t18 = (x73==((x74==x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -12;
	int8_t x78 = INT8_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 3749123;

    t19 = (x77==((x78==x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -21;
	int8_t x83 = -1;
	volatile int32_t t20 = 0;

    t20 = (x81==((x82==x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	static int16_t x86 = -44;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -40;

    t21 = (x85==((x86==x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 133282U;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MAX;
	volatile int16_t x92 = -1;

    t22 = (x89==((x90==x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 945438U;
	uint8_t x94 = 1U;
	volatile int16_t x95 = -1;
	volatile int32_t t23 = -2;

    t23 = (x93==((x94==x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 4697;
	int8_t x99 = -13;
	volatile int32_t x100 = -1;
	int32_t t24 = 126;

    t24 = (x97==((x98==x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 58405476819LLU;

    t25 = (x101==((x102==x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	static int16_t x106 = INT16_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	static int16_t x108 = INT16_MAX;
	static int32_t t26 = -1427487;

    t26 = (x105==((x106==x107)^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint8_t x110 = 1U;
	int32_t x111 = -1;

    t27 = (x109==((x110==x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x114 = 53U;
	int32_t x115 = -1;
	uint16_t x116 = 99U;
	int32_t t28 = -3;

    t28 = (x113==((x114==x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 7479110U;
	uint8_t x118 = 0U;
	int64_t x119 = INT64_MIN;
	int32_t t29 = 125343032;

    t29 = (x117==((x118==x119)^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = UINT16_MAX;
	int8_t x123 = -1;
	int32_t x124 = -846425;
	int32_t t30 = 41774524;

    t30 = (x121==((x122==x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = INT32_MIN;
	uint8_t x127 = 36U;
	uint8_t x128 = 2U;
	volatile int32_t t31 = 3585;

    t31 = (x125==((x126==x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	volatile int64_t x130 = 0LL;
	static int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	static int32_t t32 = 16919409;

    t32 = (x129==((x130==x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = -7442785043430LL;
	uint32_t x135 = UINT32_MAX;
	static volatile int32_t t33 = 258;

    t33 = (x133==((x134==x135)^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 28808092581619LL;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;

    t34 = (x137==((x138==x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -59LL;
	uint16_t x142 = 90U;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 127846908;

    t35 = (x141==((x142==x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MIN;

    t36 = (x145==((x146==x147)^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MAX;
	int32_t x151 = -1;
	static volatile uint64_t x152 = 430986LLU;
	int32_t t37 = -1294;

    t37 = (x149==((x150==x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 199U;
	static int8_t x154 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -776530;

    t38 = (x153==((x154==x155)^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 138800134LLU;
	uint8_t x158 = 7U;
	int8_t x160 = 42;
	int32_t t39 = 7;

    t39 = (x157==((x158==x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = INT32_MAX;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = -4812425;

    t40 = (x161==((x162==x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 3U;
	volatile int8_t x166 = INT8_MAX;
	int32_t x167 = -1;
	static int8_t x168 = INT8_MAX;

    t41 = (x165==((x166==x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 29U;
	volatile int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MAX;
	int32_t t42 = -113;

    t42 = (x169==((x170==x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 7730685;
	uint32_t x175 = 114869130U;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -306853112;

    t43 = (x173==((x174==x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int32_t x178 = 217440;
	volatile uint8_t x179 = 106U;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 7033014;

    t44 = (x177==((x178==x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 31;
	volatile int16_t x183 = -1;
	static uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = -384434;

    t45 = (x181==((x182==x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 65U;
	volatile int16_t x186 = 178;
	int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MAX;
	volatile int32_t t46 = -767282202;

    t46 = (x185==((x186==x187)^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = -342;
	uint16_t x190 = 3326U;
	uint16_t x191 = 3U;
	uint16_t x192 = 5107U;
	int32_t t47 = 38;

    t47 = (x189==((x190==x191)^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 10LLU;
	static volatile int64_t x196 = INT64_MIN;
	int32_t t48 = -37;

    t48 = (x193==((x194==x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	volatile int8_t x198 = -1;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = 0U;
	int32_t t49 = 1709590;

    t49 = (x197==((x198==x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = -15;
	int32_t x202 = INT32_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	static volatile uint64_t x204 = UINT64_MAX;
	int32_t t50 = -447707;

    t50 = (x201==((x202==x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x206 = 42U;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 2006;

    t51 = (x205==((x206==x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	static uint16_t x210 = 27U;
	volatile uint8_t x211 = 80U;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 22226;

    t52 = (x209==((x210==x211)^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	int8_t x215 = -8;
	int32_t t53 = -15365014;

    t53 = (x213==((x214==x215)^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	int16_t x218 = 2966;
	volatile int8_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	static volatile int32_t t54 = -11;

    t54 = (x217==((x218==x219)^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = UINT64_MAX;
	uint16_t x223 = 8222U;
	static uint8_t x224 = UINT8_MAX;

    t55 = (x221==((x222==x223)^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 59U;
	uint16_t x226 = 6U;
	uint32_t x228 = 13713861U;
	static volatile int32_t t56 = -112195026;

    t56 = (x225==((x226==x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	static int16_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = -438218;
	volatile int32_t t57 = 57301;

    t57 = (x229==((x230==x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 3638U;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = 70;
	int32_t t58 = -124220;

    t58 = (x233==((x234==x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 6255322173333718LLU;
	uint32_t x240 = 1414923513U;

    t59 = (x237==((x238==x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -242;
	volatile uint8_t x242 = UINT8_MAX;
	uint32_t x243 = 301322766U;
	static int64_t x244 = -561755983524038LL;
	int32_t t60 = 12077;

    t60 = (x241==((x242==x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static volatile uint32_t x246 = 88178011U;
	static uint64_t x247 = 194573245628516LLU;
	int16_t x248 = INT16_MIN;
	static int32_t t61 = -1518;

    t61 = (x245==((x246==x247)^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 96U;
	uint8_t x251 = 4U;
	volatile int16_t x252 = 11764;

    t62 = (x249==((x250==x251)^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x254 = 7793;
	int64_t x255 = -1LL;
	int8_t x256 = -1;
	static int32_t t63 = 958549043;

    t63 = (x253==((x254==x255)^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MIN;
	static uint8_t x259 = 60U;
	static volatile int32_t t64 = -1018404;

    t64 = (x257==((x258==x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	static int32_t x262 = INT32_MIN;
	static uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 0U;
	volatile int32_t t65 = 281691013;

    t65 = (x261==((x262==x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	static int32_t x268 = -282618;
	volatile int32_t t66 = -36686;

    t66 = (x265==((x266==x267)^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MIN;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MAX;
	int32_t t67 = -1785829;

    t67 = (x269==((x270==x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MAX;
	volatile int8_t x274 = 39;
	static uint8_t x275 = UINT8_MAX;
	int16_t x276 = -1;
	static int32_t t68 = -28847;

    t68 = (x273==((x274==x275)^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x277 = 0U;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -35460352;

    t69 = (x277==((x278==x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MAX;
	uint8_t x284 = 1U;
	volatile int32_t t70 = -53939;

    t70 = (x281==((x282==x283)^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -583;
	static int64_t x286 = INT64_MIN;
	int8_t x288 = -40;
	int32_t t71 = 101490;

    t71 = (x285==((x286==x287)^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	static volatile int32_t t72 = -2795519;

    t72 = (x289==((x290==x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 1544963;
	int64_t x294 = INT64_MIN;
	static volatile int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;

    t73 = (x293==((x294==x295)^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MAX;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = 1;

    t74 = (x297==((x298==x299)^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MIN;
	int64_t x303 = -13LL;
	uint32_t x304 = 2053565U;
	int32_t t75 = 6242;

    t75 = (x301==((x302==x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 29183219926LLU;
	static int32_t t76 = 976422;

    t76 = (x305==((x306==x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	static int64_t x312 = -8592163301884LL;

    t77 = (x309==((x310==x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x314 = UINT64_MAX;
	static uint8_t x315 = 12U;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = -1;

    t78 = (x313==((x314==x315)^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 10083919U;
	uint8_t x318 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 253760;

    t79 = (x317==((x318==x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x322 = 133769713U;
	static uint64_t x324 = 2110246195LLU;
	static int32_t t80 = -2985;

    t80 = (x321==((x322==x323)^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 3U;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = INT8_MIN;
	volatile int32_t t81 = -2002055;

    t81 = (x325==((x326==x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -21;
	uint8_t x330 = 61U;
	int16_t x331 = INT16_MIN;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -104433040;

    t82 = (x329==((x330==x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	int16_t x334 = INT16_MAX;
	int64_t x335 = -1LL;
	volatile int32_t t83 = 1;

    t83 = (x333==((x334==x335)^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	static uint8_t x338 = 40U;
	int64_t x339 = -1LL;
	static int8_t x340 = 13;
	int32_t t84 = -1;

    t84 = (x337==((x338==x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x342 = 17U;
	int32_t x343 = 755;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -8263030;

    t85 = (x341==((x342==x343)^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = -31;
	int8_t x346 = INT8_MAX;
	uint64_t x347 = 1336454486339LLU;
	uint64_t x348 = 62916LLU;
	volatile int32_t t86 = -4;

    t86 = (x345==((x346==x347)^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	static uint32_t x350 = UINT32_MAX;
	volatile int64_t x351 = INT64_MIN;
	int32_t t87 = 1;

    t87 = (x349==((x350==x351)^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 7817178256LLU;
	static uint32_t x354 = UINT32_MAX;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 3U;
	volatile int32_t t88 = 7;

    t88 = (x353==((x354==x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint32_t x358 = 821U;
	uint16_t x359 = 8U;
	static uint8_t x360 = 11U;
	int32_t t89 = 147207529;

    t89 = (x357==((x358==x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -4263292704187561363LL;
	static volatile int8_t x363 = -7;
	uint64_t x364 = 217790613273327LLU;
	static int32_t t90 = 1817;

    t90 = (x361==((x362==x363)^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MAX;
	int64_t x367 = 18951888LL;
	uint64_t x368 = 23392873LLU;

    t91 = (x365==((x366==x367)^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int64_t x370 = 172043LL;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;
	static int32_t t92 = 266360129;

    t92 = (x369==((x370==x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	static volatile int32_t x376 = -1;
	static int32_t t93 = -130569096;

    t93 = (x373==((x374==x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x378 = 103U;
	volatile int64_t x379 = INT64_MAX;
	volatile int32_t t94 = -8;

    t94 = (x377==((x378==x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x382 = -56;
	int32_t x383 = 57;
	uint64_t x384 = 4047030567580722239LLU;
	int32_t t95 = 25;

    t95 = (x381==((x382==x383)^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = UINT16_MAX;
	static int8_t x386 = -1;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = -678364206;

    t96 = (x385==((x386==x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	static int8_t x390 = 18;
	volatile int8_t x391 = -29;
	static int32_t x392 = INT32_MIN;
	int32_t t97 = 190;

    t97 = (x389==((x390==x391)^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int64_t x396 = 24494205LL;
	volatile int32_t t98 = 1;

    t98 = (x393==((x394==x395)^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x398 = INT16_MAX;
	int16_t x399 = -1;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 444440;

    t99 = (x397==((x398==x399)^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -12LL;
	static uint64_t x403 = 3785075992479LLU;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t100 = -7365;

    t100 = (x401==((x402==x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	int8_t x408 = -1;
	volatile int32_t t101 = -5221682;

    t101 = (x405==((x406==x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x409 = INT16_MIN;
	int8_t x411 = -1;
	int64_t x412 = INT64_MAX;
	volatile int32_t t102 = -6056;

    t102 = (x409==((x410==x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = -1;
	static uint32_t x415 = UINT32_MAX;

    t103 = (x413==((x414==x415)^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	uint8_t x419 = 1U;
	static uint32_t x420 = UINT32_MAX;
	static volatile int32_t t104 = 2163;

    t104 = (x417==((x418==x419)^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	uint16_t x422 = 419U;
	int16_t x424 = INT16_MIN;
	int32_t t105 = 2431;

    t105 = (x421==((x422==x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int16_t x426 = -7;
	int32_t x427 = INT32_MIN;
	volatile int64_t x428 = INT64_MAX;

    t106 = (x425==((x426==x427)^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	volatile int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t107 = -26019861;

    t107 = (x429==((x430==x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 31067875246LLU;
	int32_t x434 = 1;
	int64_t x435 = INT64_MIN;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t108 = 0;

    t108 = (x433==((x434==x435)^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	static int64_t x438 = INT64_MAX;
	int16_t x439 = -1;
	uint16_t x440 = 1U;
	static volatile int32_t t109 = 106854505;

    t109 = (x437==((x438==x439)^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 8898854929643LLU;
	uint64_t x442 = 1LLU;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t110 = -28918973;

    t110 = (x441==((x442==x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	volatile int16_t x446 = INT16_MIN;
	static volatile uint32_t x447 = 1203547U;
	uint64_t x448 = 10073568368049505LLU;
	int32_t t111 = -48;

    t111 = (x445==((x446==x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	static volatile int32_t x450 = INT32_MIN;
	uint64_t x451 = 2299413832901449398LLU;
	uint8_t x452 = 4U;
	static int32_t t112 = 108555591;

    t112 = (x449==((x450==x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = -1;
	uint32_t x455 = UINT32_MAX;
	static volatile int32_t t113 = 264;

    t113 = (x453==((x454==x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 4U;
	uint64_t x458 = 714653755LLU;
	int64_t x459 = INT64_MIN;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = 6;

    t114 = (x457==((x458==x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = INT32_MIN;
	uint8_t x462 = 0U;
	static int8_t x463 = -1;

    t115 = (x461==((x462==x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = -1LL;
	int64_t x466 = INT64_MAX;
	int8_t x467 = -1;
	uint8_t x468 = 2U;

    t116 = (x465==((x466==x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 100U;
	uint32_t x470 = 46601341U;
	int32_t x471 = INT32_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 44;

    t117 = (x469==((x470==x471)^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 196277LLU;
	int64_t x476 = INT64_MIN;
	static volatile int32_t t118 = 1;

    t118 = (x473==((x474==x475)^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x478 = INT8_MAX;
	int16_t x479 = 3410;
	static uint8_t x480 = UINT8_MAX;
	volatile int32_t t119 = -19;

    t119 = (x477==((x478==x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	int8_t x483 = INT8_MIN;
	static int8_t x484 = 14;
	int32_t t120 = -649489;

    t120 = (x481==((x482==x483)^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MAX;
	int32_t x486 = INT32_MIN;
	volatile int32_t t121 = -1045;

    t121 = (x485==((x486==x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	volatile int16_t x491 = -4365;
	int64_t x492 = 813908LL;
	volatile int32_t t122 = -188281;

    t122 = (x489==((x490==x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x493 = -1;
	int32_t t123 = -66278;

    t123 = (x493==((x494==x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	uint32_t x498 = UINT32_MAX;
	int32_t x499 = -1;
	static uint32_t x500 = UINT32_MAX;

    t124 = (x497==((x498==x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x503 = INT16_MAX;
	static uint8_t x504 = 127U;
	int32_t t125 = 0;

    t125 = (x501==((x502==x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	static uint16_t x507 = UINT16_MAX;
	uint32_t x508 = 517275540U;
	int32_t t126 = 261739;

    t126 = (x505==((x506==x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	volatile int16_t x510 = INT16_MIN;
	int64_t x511 = 41357LL;
	int64_t x512 = -1LL;
	static volatile int32_t t127 = -516710;

    t127 = (x509==((x510==x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MAX;
	volatile uint64_t x514 = 1573670406832897LLU;
	uint64_t x515 = 159801333785LLU;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t128 = -15;

    t128 = (x513==((x514==x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -15602410LL;
	static int64_t x519 = -5290058653156036LL;
	int32_t t129 = 0;

    t129 = (x517==((x518==x519)^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -525;
	int64_t x522 = 89791753319900638LL;
	uint32_t x523 = 154U;
	int32_t x524 = -482844891;
	int32_t t130 = 23648;

    t130 = (x521==((x522==x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 14675U;
	static int16_t x527 = INT16_MAX;
	int16_t x528 = -1457;

    t131 = (x525==((x526==x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x531 = 8;
	volatile int32_t t132 = -896;

    t132 = (x529==((x530==x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = 1U;
	int32_t t133 = 16018;

    t133 = (x533==((x534==x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = -22185295;
	int64_t x540 = -1LL;

    t134 = (x537==((x538==x539)^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	uint16_t x542 = 441U;
	uint32_t x543 = UINT32_MAX;
	int16_t x544 = INT16_MIN;

    t135 = (x541==((x542==x543)^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 54;
	static uint16_t x546 = 508U;
	static volatile uint8_t x547 = 98U;
	int32_t t136 = -30099964;

    t136 = (x545==((x546==x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int32_t x551 = 346;
	int8_t x552 = INT8_MAX;
	int32_t t137 = -27734;

    t137 = (x549==((x550==x551)^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x554 = INT16_MIN;
	static uint32_t x555 = UINT32_MAX;
	static int16_t x556 = -1;
	volatile int32_t t138 = 8305243;

    t138 = (x553==((x554==x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	uint16_t x558 = 1U;
	volatile int32_t x559 = -1;
	static int16_t x560 = INT16_MAX;
	static int32_t t139 = 0;

    t139 = (x557==((x558==x559)^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	int16_t x562 = 11294;
	volatile int32_t x563 = -1;
	uint8_t x564 = UINT8_MAX;
	static volatile int32_t t140 = -9449762;

    t140 = (x561==((x562==x563)^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -1241811918LL;
	uint64_t x568 = UINT64_MAX;

    t141 = (x565==((x566==x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	int64_t x570 = -1LL;
	int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 1629910;

    t142 = (x569==((x570==x571)^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x573 = 39U;
	int32_t x574 = INT32_MIN;
	volatile int64_t x575 = INT64_MAX;
	int32_t x576 = INT32_MAX;
	volatile int32_t t143 = -1;

    t143 = (x573==((x574==x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 2U;
	int32_t x578 = 317603;
	volatile int32_t x579 = -1;
	uint32_t x580 = 2748560U;
	volatile int32_t t144 = -49;

    t144 = (x577==((x578==x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = -1;
	volatile int32_t x582 = INT32_MAX;
	int8_t x583 = INT8_MIN;
	volatile int32_t t145 = 649;

    t145 = (x581==((x582==x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 2U;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t146 = -12691906;

    t146 = (x585==((x586==x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MAX;
	static uint8_t x591 = 27U;
	volatile uint64_t x592 = 74652LLU;
	volatile int32_t t147 = 0;

    t147 = (x589==((x590==x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MIN;
	int16_t x595 = INT16_MIN;
	static int16_t x596 = INT16_MIN;
	static int32_t t148 = 0;

    t148 = (x593==((x594==x595)^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x598 = INT8_MAX;
	uint8_t x599 = 84U;
	static int16_t x600 = -1;

    t149 = (x597==((x598==x599)^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	uint32_t x602 = UINT32_MAX;
	int64_t x603 = INT64_MAX;
	int64_t x604 = -1639253325LL;
	int32_t t150 = 2714699;

    t150 = (x601==((x602==x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	static volatile int8_t x607 = -7;
	static int64_t x608 = -26983005817487887LL;
	volatile int32_t t151 = 1536025;

    t151 = (x605==((x606==x607)^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x609 = 162200U;
	volatile int32_t x610 = INT32_MIN;
	static int8_t x611 = INT8_MIN;
	int32_t t152 = 542776;

    t152 = (x609==((x610==x611)^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = -1;
	static uint64_t x615 = UINT64_MAX;
	int8_t x616 = 1;
	int32_t t153 = 6;

    t153 = (x613==((x614==x615)^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 28;
	int8_t x618 = -1;
	int64_t x619 = -1LL;
	volatile int64_t x620 = INT64_MIN;
	int32_t t154 = -1798;

    t154 = (x617==((x618==x619)^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	volatile int64_t x622 = INT64_MAX;
	static uint8_t x624 = UINT8_MAX;

    t155 = (x621==((x622==x623)^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	static uint16_t x626 = 24555U;
	int32_t x627 = -1;
	volatile int32_t x628 = INT32_MIN;
	volatile int32_t t156 = -7;

    t156 = (x625==((x626==x627)^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	uint64_t x630 = 1LLU;
	int16_t x632 = 0;
	int32_t t157 = -49;

    t157 = (x629==((x630==x631)^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	int8_t x634 = -2;
	uint64_t x635 = 18432778LLU;
	uint8_t x636 = 7U;
	volatile int32_t t158 = -570647;

    t158 = (x633==((x634==x635)^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	volatile uint32_t x638 = 2U;
	volatile uint16_t x639 = UINT16_MAX;
	volatile int32_t t159 = 8203209;

    t159 = (x637==((x638==x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	static int16_t x642 = 3;
	int64_t x643 = -1LL;
	uint64_t x644 = 3928840430447LLU;

    t160 = (x641==((x642==x643)^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 372U;
	uint64_t x646 = 42187LLU;
	static volatile int32_t t161 = 3905;

    t161 = (x645==((x646==x647)^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	int64_t x650 = -8734353LL;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t162 = 37136688;

    t162 = (x649==((x650==x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	volatile int8_t x654 = 0;
	volatile int64_t x655 = -348948313LL;

    t163 = (x653==((x654==x655)^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -3462LL;
	volatile int64_t x658 = 1221123501974LL;
	volatile int32_t t164 = -10;

    t164 = (x657==((x658==x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	int8_t x662 = INT8_MIN;
	static volatile uint64_t x663 = UINT64_MAX;
	int32_t x664 = -12453;

    t165 = (x661==((x662==x663)^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	int8_t x666 = 9;
	uint8_t x667 = UINT8_MAX;
	static int32_t x668 = INT32_MAX;
	volatile int32_t t166 = -236;

    t166 = (x665==((x666==x667)^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 3LL;
	uint64_t x670 = UINT64_MAX;
	static int16_t x671 = -121;
	volatile int64_t x672 = INT64_MAX;

    t167 = (x669==((x670==x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 22U;
	static volatile int32_t x675 = INT32_MIN;
	uint16_t x676 = UINT16_MAX;

    t168 = (x673==((x674==x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x677 = 15U;
	uint16_t x678 = 28U;
	int16_t x679 = INT16_MIN;
	static int8_t x680 = INT8_MIN;

    t169 = (x677==((x678==x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 26;
	static int8_t x682 = INT8_MAX;
	uint64_t x683 = 0LLU;
	int16_t x684 = 3;
	volatile int32_t t170 = -446193645;

    t170 = (x681==((x682==x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = INT16_MIN;
	int32_t x687 = 51;
	volatile int32_t t171 = 181464;

    t171 = (x685==((x686==x687)^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int8_t x690 = -7;
	int16_t x691 = 4;
	volatile int32_t t172 = -10217711;

    t172 = (x689==((x690==x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x693 = 18830680U;
	volatile uint16_t x694 = 4360U;
	uint8_t x695 = UINT8_MAX;
	int16_t x696 = INT16_MAX;
	int32_t t173 = 262;

    t173 = (x693==((x694==x695)^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 58U;
	int32_t x698 = INT32_MIN;
	int16_t x699 = INT16_MAX;
	uint32_t x700 = UINT32_MAX;
	int32_t t174 = -151;

    t174 = (x697==((x698==x699)^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	int64_t x702 = INT64_MIN;
	static volatile uint16_t x703 = 68U;
	volatile int32_t t175 = -642;

    t175 = (x701==((x702==x703)^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = 9256;
	volatile int8_t x707 = INT8_MAX;
	volatile int32_t t176 = 3;

    t176 = (x705==((x706==x707)^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x709 = UINT64_MAX;
	volatile int64_t x710 = INT64_MIN;
	volatile int32_t x712 = INT32_MIN;
	int32_t t177 = 447951641;

    t177 = (x709==((x710==x711)^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x714 = UINT32_MAX;
	static int32_t x715 = -1;
	int32_t t178 = 0;

    t178 = (x713==((x714==x715)^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -47;
	int16_t x718 = INT16_MIN;
	int16_t x719 = -740;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 110;

    t179 = (x717==((x718==x719)^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = INT32_MIN;
	static volatile uint64_t x722 = 130801954LLU;
	int16_t x723 = INT16_MAX;
	int32_t t180 = -243230963;

    t180 = (x721==((x722==x723)^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 1;
	int32_t x727 = INT32_MIN;
	uint32_t x728 = UINT32_MAX;
	int32_t t181 = 12010087;

    t181 = (x725==((x726==x727)^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = 7;
	static volatile int16_t x730 = 300;
	int8_t x731 = -3;
	static uint64_t x732 = UINT64_MAX;
	volatile int32_t t182 = -30567736;

    t182 = (x729==((x730==x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = INT64_MIN;
	uint8_t x735 = UINT8_MAX;
	int64_t x736 = 38995067467LL;
	volatile int32_t t183 = 30127630;

    t183 = (x733==((x734==x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = INT16_MAX;
	volatile uint16_t x738 = UINT16_MAX;
	volatile int64_t x739 = 0LL;
	int64_t x740 = INT64_MIN;

    t184 = (x737==((x738==x739)^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	int16_t x743 = INT16_MIN;
	uint64_t x744 = 4632000225LLU;
	volatile int32_t t185 = -116481319;

    t185 = (x741==((x742==x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 1U;
	int64_t x746 = INT64_MIN;
	uint16_t x747 = UINT16_MAX;
	volatile uint16_t x748 = 106U;
	volatile int32_t t186 = -707320;

    t186 = (x745==((x746==x747)^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = 261181548788078LL;
	int32_t x751 = -174646;
	uint64_t x752 = 2078923257838586LLU;
	int32_t t187 = 834049143;

    t187 = (x749==((x750==x751)^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = -1;
	uint64_t x755 = UINT64_MAX;
	volatile uint8_t x756 = 2U;
	int32_t t188 = -84662322;

    t188 = (x753==((x754==x755)^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x758 = INT64_MIN;
	volatile uint64_t x759 = 52875787281022LLU;
	int32_t x760 = INT32_MIN;
	static volatile int32_t t189 = 3472586;

    t189 = (x757==((x758==x759)^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x761 = 270492444734972282LLU;
	static volatile int16_t x762 = INT16_MIN;
	int32_t x763 = INT32_MIN;
	uint16_t x764 = 21U;
	int32_t t190 = -143261840;

    t190 = (x761==((x762==x763)^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	uint16_t x766 = 1185U;
	int16_t x768 = -1;
	int32_t t191 = 551328;

    t191 = (x765==((x766==x767)^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 11U;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = UINT64_MAX;
	uint32_t x772 = 350U;

    t192 = (x769==((x770==x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x774 = INT32_MIN;
	int16_t x776 = INT16_MIN;

    t193 = (x773==((x774==x775)^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 36659636U;
	int64_t x778 = 88422891608LL;
	uint16_t x780 = 3144U;
	int32_t t194 = -22335;

    t194 = (x777==((x778==x779)^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	static volatile int64_t x783 = -1LL;
	uint64_t x784 = UINT64_MAX;
	int32_t t195 = -303136;

    t195 = (x781==((x782==x783)^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = INT16_MAX;
	int8_t x786 = INT8_MAX;
	static uint64_t x787 = 5LLU;
	int32_t x788 = 139475;

    t196 = (x785==((x786==x787)^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 3319097U;
	uint64_t x790 = 59447119481203LLU;
	uint32_t x791 = 1436713016U;
	static uint64_t x792 = 59052096174LLU;

    t197 = (x789==((x790==x791)^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x795 = -250;
	uint8_t x796 = 0U;
	volatile int32_t t198 = -48;

    t198 = (x793==((x794==x795)^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	volatile uint64_t x798 = UINT64_MAX;
	uint8_t x799 = 0U;
	static volatile uint8_t x800 = UINT8_MAX;
	int32_t t199 = -20;

    t199 = (x797==((x798==x799)^x800));

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

