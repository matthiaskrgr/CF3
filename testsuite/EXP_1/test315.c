
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

int8_t x2 = -1;
static volatile uint32_t x10 = 315601U;
int16_t x16 = -50;
volatile int32_t x28 = -1023;
int8_t x29 = INT8_MIN;
int64_t x30 = 2LL;
volatile int8_t x32 = 18;
volatile int32_t t7 = 62;
int16_t x33 = -1;
uint64_t x41 = UINT64_MAX;
int64_t x52 = -1LL;
volatile int32_t t12 = -75;
int64_t x57 = -1LL;
int16_t x61 = INT16_MIN;
int16_t x62 = INT16_MIN;
int16_t x65 = INT16_MIN;
int32_t t16 = 274900829;
int32_t x74 = INT32_MIN;
volatile int32_t x75 = INT32_MIN;
int64_t x78 = INT64_MAX;
int64_t x81 = INT64_MAX;
int16_t x85 = INT16_MAX;
int32_t x92 = 0;
static volatile int32_t t22 = 0;
int8_t x93 = 3;
uint32_t x94 = 160002U;
static int64_t x101 = INT64_MAX;
uint64_t x105 = UINT64_MAX;
static int16_t x106 = 1;
int8_t x116 = 14;
static int64_t x117 = 46LL;
static uint32_t x120 = 15U;
int16_t x122 = INT16_MIN;
volatile int32_t x123 = INT32_MIN;
uint64_t x124 = 11394LLU;
int32_t x125 = INT32_MIN;
static uint16_t x128 = 86U;
volatile int32_t t31 = 116;
volatile int64_t x135 = -5745026152522201LL;
volatile int32_t t33 = 215735973;
volatile int32_t x139 = -1;
static int16_t x141 = INT16_MIN;
int64_t x142 = INT64_MIN;
volatile int64_t x143 = INT64_MIN;
int64_t x146 = -1LL;
int32_t t36 = -293;
volatile int16_t x155 = -1;
static int16_t x156 = -1;
static uint16_t x158 = 18U;
static uint64_t x159 = UINT64_MAX;
volatile int32_t x167 = -1;
int64_t x169 = -1LL;
static uint8_t x170 = 60U;
volatile uint64_t x177 = UINT64_MAX;
static volatile int8_t x190 = 37;
volatile uint32_t x193 = 18U;
int16_t x201 = INT16_MAX;
uint64_t x205 = 205424727567LLU;
volatile int32_t t50 = 1;
uint8_t x215 = UINT8_MAX;
static int32_t x219 = -1692;
static volatile uint32_t x237 = 1U;
int32_t x238 = INT32_MAX;
uint64_t x243 = 2538540796911812LLU;
int32_t t54 = -3632606;
int64_t x251 = INT64_MAX;
int16_t x252 = 27;
static int32_t x255 = INT32_MIN;
uint16_t x256 = UINT16_MAX;
volatile uint8_t x258 = 49U;
uint16_t x262 = 37U;
static uint8_t x263 = 49U;
volatile uint16_t x270 = 29U;
uint8_t x272 = 26U;
int32_t x276 = INT32_MAX;
volatile int32_t x281 = INT32_MIN;
int8_t x291 = 63;
int16_t x301 = -1;
static volatile int32_t t67 = 1676;
volatile int32_t t69 = -388408882;
static volatile uint64_t x319 = 1869LLU;
int32_t t72 = 353;
int16_t x334 = -1;
static int32_t t73 = -9522;
int16_t x342 = -1;
uint8_t x345 = UINT8_MAX;
int32_t t75 = 22;
int8_t x351 = INT8_MIN;
uint32_t x357 = 201103464U;
uint16_t x359 = UINT16_MAX;
volatile int64_t x374 = 68447LL;
int8_t x375 = -1;
int32_t x378 = INT32_MIN;
int8_t x383 = -1;
volatile int32_t t85 = 117085;
int8_t x392 = INT8_MIN;
int32_t t86 = 0;
volatile int64_t x396 = 4040389397061094054LL;
static int32_t x398 = INT32_MIN;
uint32_t x400 = UINT32_MAX;
uint64_t x401 = UINT64_MAX;
uint16_t x409 = 7U;
volatile int8_t x419 = INT8_MIN;
static int8_t x427 = 4;
static int8_t x428 = INT8_MIN;
uint32_t x434 = 376668890U;
uint32_t x442 = 174592U;
int64_t x444 = INT64_MAX;
uint32_t x450 = 27U;
int8_t x452 = -16;
int64_t x461 = -1LL;
static volatile int64_t x470 = INT64_MAX;
uint8_t x473 = 0U;
volatile uint16_t x476 = 18U;
int16_t x478 = -3;
uint32_t x479 = 1242838U;
static volatile int32_t t104 = 2;
uint8_t x482 = UINT8_MAX;
int32_t x486 = 493013811;
volatile int64_t x497 = -1LL;
int32_t x498 = 757;
int32_t x499 = 207;
uint32_t x500 = 274913428U;
int16_t x505 = -1;
int8_t x507 = -23;
static int32_t t111 = -28735;
uint16_t x511 = 13U;
static uint64_t x513 = 8391855117195489LLU;
volatile int32_t t113 = -1064047718;
static volatile int64_t x519 = -1LL;
int32_t x527 = INT32_MIN;
static int32_t x530 = -5885516;
static int8_t x537 = INT8_MAX;
uint64_t x538 = 38LLU;
volatile int32_t t119 = 6;
int32_t x547 = -167529166;
int32_t t122 = 1;
static uint64_t x572 = 1LLU;
int32_t t126 = -1599910;
int64_t x579 = -1LL;
uint32_t x583 = 6746U;
int64_t x592 = INT64_MIN;
uint64_t x593 = 259792948501LLU;
static uint32_t x597 = 8130U;
int16_t x599 = 2625;
int16_t x617 = -1;
int16_t x624 = INT16_MAX;
int16_t x625 = INT16_MIN;
static int32_t t138 = -1;
uint32_t x635 = UINT32_MAX;
int32_t x640 = INT32_MAX;
volatile int32_t t140 = 56834906;
int32_t x644 = -1;
static volatile uint16_t x648 = UINT16_MAX;
volatile int32_t t142 = -7;
int8_t x650 = INT8_MAX;
uint8_t x651 = 6U;
volatile int32_t t143 = 527194291;
int8_t x653 = INT8_MIN;
volatile int32_t t144 = -1712;
int32_t t146 = 311059133;
int64_t x672 = INT64_MIN;
static volatile int32_t t147 = 32777;
int64_t x677 = -1LL;
int8_t x685 = -13;
volatile int32_t t152 = 537;
volatile int32_t x695 = -89652;
uint8_t x701 = 0U;
uint16_t x703 = 787U;
volatile int16_t x709 = -1;
uint64_t x731 = 545903007407LLU;
volatile int64_t x736 = INT64_MAX;
int64_t x758 = -639571484894598LL;
int32_t x762 = -827127;
static int16_t x764 = -58;
int32_t x772 = -3;
int32_t x773 = -1;
int8_t x775 = INT8_MAX;
uint16_t x778 = 0U;
volatile int32_t t169 = -956;
static int32_t t170 = -2944;
static uint16_t x787 = 355U;
int8_t x792 = -1;
int32_t x794 = INT32_MIN;
int8_t x802 = INT8_MIN;
uint64_t x808 = UINT64_MAX;
volatile int32_t t176 = -15668015;
volatile int8_t x819 = -1;
volatile uint32_t x825 = 18858U;
int8_t x827 = -1;
int64_t x828 = -1LL;
static volatile int64_t x829 = INT64_MIN;
int8_t x833 = INT8_MIN;
int8_t x834 = -9;
static int8_t x848 = 57;
int64_t x851 = 20554LL;
uint8_t x853 = 11U;
volatile int32_t t188 = -4;
int16_t x889 = 144;
uint16_t x890 = 12699U;
volatile int32_t x898 = INT32_MIN;
volatile int8_t x908 = -1;
uint64_t x911 = 107323442418497204LLU;
volatile int8_t x912 = -1;
volatile int32_t t198 = -363213;
volatile int32_t x916 = 6092;


void f0(void) {
    	static volatile uint16_t x1 = UINT16_MAX;
	int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 4749;

    t0 = (((x1-x2)>x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -22788LL;
	uint8_t x6 = 88U;
	volatile uint8_t x7 = 0U;
	uint32_t x8 = 0U;
	int32_t t1 = 406430;

    t1 = (((x5-x6)>x7)!=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint16_t x11 = 27U;
	volatile uint64_t x12 = UINT64_MAX;
	int32_t t2 = 44;

    t2 = (((x9-x10)>x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 65814U;
	int32_t x14 = INT32_MAX;
	static volatile uint16_t x15 = 18U;
	static volatile int32_t t3 = -1325;

    t3 = (((x13-x14)>x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = UINT32_MAX;
	volatile int32_t x18 = 122;
	static uint32_t x19 = 54U;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -26;

    t4 = (((x17-x18)>x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 487461117LLU;
	int8_t x22 = INT8_MIN;
	static uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 1237;

    t5 = (((x21-x22)>x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	static uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 14038887231658482LLU;
	volatile int32_t t6 = 654;

    t6 = (((x25-x26)>x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x31 = -2;

    t7 = (((x29-x30)>x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = 22939U;
	volatile int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = 6420;

    t8 = (((x33-x34)>x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = 3567350;

    t9 = (((x37-x38)>x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x42 = 1121U;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -1;
	volatile int32_t t10 = -3753172;

    t10 = (((x41-x42)>x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	static int16_t x46 = -510;
	static uint16_t x47 = 24207U;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 0;

    t11 = (((x45-x46)>x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 83933U;
	int32_t x50 = -180352;
	static uint8_t x51 = 11U;

    t12 = (((x49-x50)>x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -1LL;
	int8_t x54 = -1;
	int32_t x55 = 24;
	static uint16_t x56 = UINT16_MAX;
	int32_t t13 = -7853633;

    t13 = (((x53-x54)>x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	static uint64_t x59 = 12442619156308LLU;
	static int16_t x60 = -8;
	int32_t t14 = 37;

    t14 = (((x57-x58)>x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MAX;
	int32_t t15 = 14318;

    t15 = (((x61-x62)>x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = -1;
	int16_t x67 = INT16_MIN;
	int8_t x68 = 1;

    t16 = (((x65-x66)>x67)!=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -1LL;
	uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = -1;
	int32_t x72 = -1;
	static volatile int32_t t17 = 0;

    t17 = (((x69-x70)>x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -33;
	volatile uint16_t x76 = 1U;
	int32_t t18 = 5308531;

    t18 = (((x73-x74)>x75)!=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	static int16_t x79 = 8088;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 0;

    t19 = (((x77-x78)>x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = INT64_MAX;
	int64_t x83 = -18038036643LL;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = 30;

    t20 = (((x81-x82)>x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -1;
	int16_t x87 = -1432;
	int32_t x88 = -1;
	int32_t t21 = -125943116;

    t21 = (((x85-x86)>x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint8_t x90 = 1U;
	uint32_t x91 = 81971138U;

    t22 = (((x89-x90)>x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x95 = 63147809U;
	int32_t x96 = 1;
	int32_t t23 = -428725137;

    t23 = (((x93-x94)>x95)!=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x97 = UINT32_MAX;
	int8_t x98 = -14;
	uint8_t x99 = 13U;
	static int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 1;

    t24 = (((x97-x98)>x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = 4;
	static uint64_t x103 = 10LLU;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 6963147;

    t25 = (((x101-x102)>x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x107 = 905U;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -1484205;

    t26 = (((x105-x106)>x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -558959647;
	int32_t x110 = 34931;
	uint32_t x111 = 0U;
	volatile uint64_t x112 = 35922088957074LLU;
	int32_t t27 = 1;

    t27 = (((x109-x110)>x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	volatile int32_t x115 = 0;
	int32_t t28 = 355082661;

    t28 = (((x113-x114)>x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x118 = INT8_MAX;
	static int16_t x119 = INT16_MAX;
	volatile int32_t t29 = 6;

    t29 = (((x117-x118)>x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	volatile int32_t t30 = 705;

    t30 = (((x121-x122)>x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	uint64_t x127 = 278370LLU;

    t31 = (((x125-x126)>x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static uint16_t x130 = 0U;
	uint64_t x131 = 836700299555317LLU;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = 88;

    t32 = (((x129-x130)>x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	static int32_t x134 = 9061;
	static volatile int16_t x136 = -1;

    t33 = (((x133-x134)>x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	static uint16_t x140 = 3360U;
	volatile int32_t t34 = 778263837;

    t34 = (((x137-x138)>x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -61655;

    t35 = (((x141-x142)>x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x145 = 20U;
	int8_t x147 = 0;
	int16_t x148 = -1;

    t36 = (((x145-x146)>x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	static uint64_t x151 = 5312569995889589226LLU;
	int8_t x152 = 1;
	volatile int32_t t37 = -12344;

    t37 = (((x149-x150)>x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = UINT8_MAX;
	int64_t x154 = 4460181752411031LL;
	volatile int32_t t38 = 2079;

    t38 = (((x153-x154)>x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -55;
	int16_t x160 = 52;
	volatile int32_t t39 = -1027760;

    t39 = (((x157-x158)>x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = INT16_MAX;
	int64_t x162 = 254068695439942LL;
	uint16_t x163 = 26906U;
	int32_t x164 = 1032400921;
	volatile int32_t t40 = 214676407;

    t40 = (((x161-x162)>x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	int8_t x166 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 1699;

    t41 = (((x165-x166)>x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x171 = 448U;
	static int8_t x172 = -1;
	volatile int32_t t42 = 1;

    t42 = (((x169-x170)>x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x178 = 3949U;
	static uint64_t x179 = UINT64_MAX;
	uint8_t x180 = 2U;
	static int32_t t43 = -14492;

    t43 = (((x177-x178)>x179)!=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	static uint16_t x182 = 2U;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 77609698U;
	volatile int32_t t44 = -280;

    t44 = (((x181-x182)>x183)!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = -1;
	volatile int32_t x191 = INT32_MIN;
	int8_t x192 = 0;
	int32_t t45 = -10037185;

    t45 = (((x189-x190)>x191)!=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x194 = UINT8_MAX;
	uint8_t x195 = UINT8_MAX;
	uint32_t x196 = 99553543U;
	int32_t t46 = 49652;

    t46 = (((x193-x194)>x195)!=x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x197 = -1LL;
	volatile int32_t x198 = INT32_MAX;
	volatile int16_t x199 = INT16_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	static volatile int32_t t47 = -193248;

    t47 = (((x197-x198)>x199)!=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x202 = 30217960U;
	static int32_t x203 = INT32_MIN;
	static int16_t x204 = 2;
	volatile int32_t t48 = 30;

    t48 = (((x201-x202)>x203)!=x204);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = -18032931LL;
	int16_t x207 = -814;
	static int8_t x208 = -1;
	volatile int32_t t49 = 30384;

    t49 = (((x205-x206)>x207)!=x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = 1125578LL;
	int64_t x212 = INT64_MIN;

    t50 = (((x209-x210)>x211)!=x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x213 = UINT16_MAX;
	int64_t x214 = -1LL;
	int64_t x216 = INT64_MAX;
	volatile int32_t t51 = -32;

    t51 = (((x213-x214)>x215)!=x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = -24511314291786LL;
	uint32_t x218 = UINT32_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t52 = 490;

    t52 = (((x217-x218)>x219)!=x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x239 = 5005U;
	int64_t x240 = -498335344LL;
	volatile int32_t t53 = 16;

    t53 = (((x237-x238)>x239)!=x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x241 = 24003U;
	int16_t x242 = INT16_MIN;
	static uint32_t x244 = 3183U;

    t54 = (((x241-x242)>x243)!=x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x249 = -6;
	int32_t x250 = INT32_MIN;
	static int32_t t55 = -177172;

    t55 = (((x249-x250)>x251)!=x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x253 = 12791U;
	uint16_t x254 = 242U;
	int32_t t56 = 2437;

    t56 = (((x253-x254)>x255)!=x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = 1;
	int64_t x259 = -144914LL;
	int16_t x260 = INT16_MIN;
	int32_t t57 = -133667;

    t57 = (((x257-x258)>x259)!=x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = 2952138264262LL;
	static volatile uint8_t x264 = 45U;
	int32_t t58 = -340752;

    t58 = (((x261-x262)>x263)!=x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = INT8_MIN;
	uint16_t x266 = 67U;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	static volatile int32_t t59 = 17;

    t59 = (((x265-x266)>x267)!=x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = -1;
	uint32_t x271 = UINT32_MAX;
	int32_t t60 = 12812589;

    t60 = (((x269-x270)>x271)!=x272);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x273 = 154886283U;
	static volatile int8_t x274 = -1;
	int64_t x275 = 134809554014444156LL;
	volatile int32_t t61 = 25433503;

    t61 = (((x273-x274)>x275)!=x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x282 = -1;
	uint32_t x283 = 7U;
	int64_t x284 = -32495503148960506LL;
	int32_t t62 = -1;

    t62 = (((x281-x282)>x283)!=x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x285 = -1;
	volatile uint8_t x286 = 23U;
	volatile int16_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t63 = -590275;

    t63 = (((x285-x286)>x287)!=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x289 = 750857068U;
	int16_t x290 = INT16_MAX;
	uint16_t x292 = 4672U;
	volatile int32_t t64 = 15362066;

    t64 = (((x289-x290)>x291)!=x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x293 = 1216467163971985704LLU;
	volatile int16_t x294 = 2;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t65 = -6146192;

    t65 = (((x293-x294)>x295)!=x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x302 = INT32_MIN;
	volatile int16_t x303 = INT16_MAX;
	uint64_t x304 = 64978740925LLU;
	volatile int32_t t66 = -74399;

    t66 = (((x301-x302)>x303)!=x304);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = 161U;
	uint64_t x308 = 2103009335050490LLU;

    t67 = (((x305-x306)>x307)!=x308);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = -2;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MAX;
	int16_t x312 = -1;
	int32_t t68 = 435;

    t68 = (((x309-x310)>x311)!=x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = INT8_MAX;
	volatile int16_t x314 = INT16_MIN;
	static volatile int32_t x315 = -1058141282;
	uint8_t x316 = 3U;

    t69 = (((x313-x314)>x315)!=x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x317 = -2265901684275548LL;
	uint32_t x318 = 113939983U;
	int16_t x320 = -3907;
	int32_t t70 = -1;

    t70 = (((x317-x318)>x319)!=x320);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x325 = INT16_MAX;
	uint64_t x326 = 0LLU;
	int64_t x327 = -1LL;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t71 = -16952;

    t71 = (((x325-x326)>x327)!=x328);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x329 = -1LL;
	int32_t x330 = INT32_MAX;
	volatile uint8_t x331 = 56U;
	volatile int32_t x332 = -1;

    t72 = (((x329-x330)>x331)!=x332);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x333 = -1;
	uint32_t x335 = UINT32_MAX;
	static int64_t x336 = -1LL;

    t73 = (((x333-x334)>x335)!=x336);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	int64_t x343 = INT64_MAX;
	int16_t x344 = 2;
	int32_t t74 = -33904464;

    t74 = (((x341-x342)>x343)!=x344);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x346 = INT16_MAX;
	static uint16_t x347 = 2510U;
	volatile uint32_t x348 = 2805757U;

    t75 = (((x345-x346)>x347)!=x348);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = -1LL;
	int16_t x352 = INT16_MIN;
	volatile int32_t t76 = -52594045;

    t76 = (((x349-x350)>x351)!=x352);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x353 = -1;
	volatile int8_t x354 = -1;
	uint64_t x355 = 1152794491304LLU;
	int16_t x356 = 1;
	volatile int32_t t77 = 6949;

    t77 = (((x353-x354)>x355)!=x356);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x358 = UINT16_MAX;
	uint64_t x360 = 983911623851747610LLU;
	volatile int32_t t78 = -251092;

    t78 = (((x357-x358)>x359)!=x360);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x361 = INT64_MAX;
	uint8_t x362 = 2U;
	static int16_t x363 = INT16_MIN;
	volatile int8_t x364 = -1;
	static int32_t t79 = 22;

    t79 = (((x361-x362)>x363)!=x364);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = INT32_MAX;
	static uint8_t x366 = 44U;
	int16_t x367 = -1;
	int64_t x368 = INT64_MIN;
	volatile int32_t t80 = -11143;

    t80 = (((x365-x366)>x367)!=x368);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = INT8_MIN;
	uint8_t x370 = 0U;
	volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = 0;
	int32_t t81 = 0;

    t81 = (((x369-x370)>x371)!=x372);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x373 = 248;
	int64_t x376 = -1LL;
	volatile int32_t t82 = -35306822;

    t82 = (((x373-x374)>x375)!=x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x377 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t83 = -367;

    t83 = (((x377-x378)>x379)!=x380);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x381 = 1040006;
	uint8_t x382 = UINT8_MAX;
	int64_t x384 = -254013785LL;
	volatile int32_t t84 = 3;

    t84 = (((x381-x382)>x383)!=x384);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MIN;
	volatile int8_t x387 = INT8_MAX;
	int64_t x388 = 1069LL;

    t85 = (((x385-x386)>x387)!=x388);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x389 = -2424;
	uint16_t x390 = 13U;
	int32_t x391 = -1;

    t86 = (((x389-x390)>x391)!=x392);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x393 = INT8_MAX;
	uint16_t x394 = 186U;
	static int8_t x395 = 31;
	volatile int32_t t87 = 109;

    t87 = (((x393-x394)>x395)!=x396);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x397 = -1;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t t88 = 3;

    t88 = (((x397-x398)>x399)!=x400);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x402 = -126;
	volatile int16_t x403 = INT16_MIN;
	static int32_t x404 = 7;
	int32_t t89 = -658511;

    t89 = (((x401-x402)>x403)!=x404);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MAX;
	volatile int16_t x407 = INT16_MIN;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t90 = 9;

    t90 = (((x405-x406)>x407)!=x408);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x410 = INT16_MIN;
	static int32_t x411 = -1;
	int32_t x412 = -1;
	int32_t t91 = -554960;

    t91 = (((x409-x410)>x411)!=x412);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x417 = -4031762156031415LL;
	int32_t x418 = INT32_MIN;
	uint16_t x420 = UINT16_MAX;
	int32_t t92 = 51848876;

    t92 = (((x417-x418)>x419)!=x420);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x425 = 3U;
	static uint16_t x426 = 6U;
	static int32_t t93 = -47353;

    t93 = (((x425-x426)>x427)!=x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x433 = INT32_MIN;
	volatile int32_t x435 = 22799;
	int8_t x436 = INT8_MIN;
	volatile int32_t t94 = 3;

    t94 = (((x433-x434)>x435)!=x436);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MAX;
	uint32_t x440 = 8248U;
	int32_t t95 = -39;

    t95 = (((x437-x438)>x439)!=x440);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x441 = 2259557827140LLU;
	int16_t x443 = INT16_MIN;
	int32_t t96 = 63296;

    t96 = (((x441-x442)>x443)!=x444);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	int16_t x447 = -90;
	volatile int16_t x448 = INT16_MIN;
	static volatile int32_t t97 = -50763;

    t97 = (((x445-x446)>x447)!=x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x449 = -1;
	int32_t x451 = INT32_MIN;
	volatile int32_t t98 = 0;

    t98 = (((x449-x450)>x451)!=x452);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x453 = 87LL;
	static uint8_t x454 = UINT8_MAX;
	int8_t x455 = 0;
	static int16_t x456 = -1;
	int32_t t99 = -18;

    t99 = (((x453-x454)>x455)!=x456);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x462 = INT8_MIN;
	int64_t x463 = INT64_MAX;
	int16_t x464 = INT16_MIN;
	volatile int32_t t100 = -207;

    t100 = (((x461-x462)>x463)!=x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = -47;
	uint64_t x466 = 49LLU;
	volatile uint8_t x467 = UINT8_MAX;
	int64_t x468 = INT64_MAX;
	int32_t t101 = -9414298;

    t101 = (((x465-x466)>x467)!=x468);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x469 = 37827682LL;
	int32_t x471 = INT32_MIN;
	static volatile int64_t x472 = 10148445267LL;
	int32_t t102 = -1;

    t102 = (((x469-x470)>x471)!=x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x474 = INT16_MAX;
	static volatile int16_t x475 = 19;
	int32_t t103 = -59;

    t103 = (((x473-x474)>x475)!=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x477 = INT16_MIN;
	int8_t x480 = INT8_MIN;

    t104 = (((x477-x478)>x479)!=x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x481 = INT8_MIN;
	volatile int64_t x483 = INT64_MAX;
	int16_t x484 = INT16_MIN;
	int32_t t105 = 13290669;

    t105 = (((x481-x482)>x483)!=x484);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x485 = INT16_MIN;
	static int8_t x487 = INT8_MAX;
	int64_t x488 = INT64_MIN;
	static int32_t t106 = -1;

    t106 = (((x485-x486)>x487)!=x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint32_t x490 = UINT32_MAX;
	static int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MAX;
	volatile int32_t t107 = 21653;

    t107 = (((x489-x490)>x491)!=x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x493 = 472642311LL;
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 4U;
	int8_t x496 = INT8_MIN;
	int32_t t108 = 800;

    t108 = (((x493-x494)>x495)!=x496);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t t109 = -16;

    t109 = (((x497-x498)>x499)!=x500);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x501 = -37146LL;
	int64_t x502 = -48038LL;
	uint16_t x503 = UINT16_MAX;
	int64_t x504 = -24LL;
	volatile int32_t t110 = -58803;

    t110 = (((x501-x502)>x503)!=x504);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x506 = INT64_MAX;
	int32_t x508 = INT32_MIN;

    t111 = (((x505-x506)>x507)!=x508);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x509 = INT32_MAX;
	static int16_t x510 = 3633;
	volatile int64_t x512 = INT64_MIN;
	int32_t t112 = -1;

    t112 = (((x509-x510)>x511)!=x512);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x514 = UINT8_MAX;
	static volatile int8_t x515 = INT8_MAX;
	int16_t x516 = INT16_MAX;

    t113 = (((x513-x514)>x515)!=x516);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x517 = -1;
	int16_t x518 = INT16_MIN;
	int32_t x520 = 0;
	volatile int32_t t114 = 57;

    t114 = (((x517-x518)>x519)!=x520);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x521 = 1550579219048LLU;
	int32_t x522 = -1036;
	uint8_t x523 = UINT8_MAX;
	static volatile int16_t x524 = 41;
	int32_t t115 = -380705;

    t115 = (((x521-x522)>x523)!=x524);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x525 = 36959562LL;
	int16_t x526 = INT16_MIN;
	int64_t x528 = INT64_MAX;
	static volatile int32_t t116 = -234;

    t116 = (((x525-x526)>x527)!=x528);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x529 = -1;
	int16_t x531 = -1;
	static int64_t x532 = INT64_MAX;
	static volatile int32_t t117 = 655;

    t117 = (((x529-x530)>x531)!=x532);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int64_t x534 = 11050397469LL;
	volatile uint32_t x535 = UINT32_MAX;
	static int16_t x536 = INT16_MIN;
	static int32_t t118 = -39;

    t118 = (((x533-x534)>x535)!=x536);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x539 = INT8_MAX;
	int32_t x540 = INT32_MAX;

    t119 = (((x537-x538)>x539)!=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x541 = INT8_MAX;
	static int32_t x542 = INT32_MAX;
	int64_t x543 = -1LL;
	uint16_t x544 = 28803U;
	int32_t t120 = -10;

    t120 = (((x541-x542)>x543)!=x544);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x545 = INT16_MIN;
	static int64_t x546 = -1LL;
	int64_t x548 = -31322845LL;
	static volatile int32_t t121 = 2796;

    t121 = (((x545-x546)>x547)!=x548);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x549 = INT64_MIN;
	uint64_t x550 = 130LLU;
	uint64_t x551 = UINT64_MAX;
	uint32_t x552 = 165U;

    t122 = (((x549-x550)>x551)!=x552);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x553 = -1638008LL;
	volatile uint16_t x554 = 99U;
	int64_t x555 = 32193655852LL;
	int8_t x556 = INT8_MIN;
	static int32_t t123 = -996190205;

    t123 = (((x553-x554)>x555)!=x556);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = UINT16_MAX;
	static volatile int32_t x558 = -1;
	int32_t x559 = INT32_MAX;
	int32_t x560 = 905287779;
	int32_t t124 = 33;

    t124 = (((x557-x558)>x559)!=x560);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x565 = 5U;
	int64_t x566 = INT64_MAX;
	int32_t x567 = -806601;
	int16_t x568 = -1;
	volatile int32_t t125 = 1;

    t125 = (((x565-x566)>x567)!=x568);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x569 = -1;
	int64_t x570 = -233LL;
	int64_t x571 = INT64_MAX;

    t126 = (((x569-x570)>x571)!=x572);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x577 = INT64_MAX;
	int64_t x578 = 1043792257899161392LL;
	static int64_t x580 = -3308391277LL;
	int32_t t127 = -42694675;

    t127 = (((x577-x578)>x579)!=x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x581 = -1;
	volatile int8_t x582 = -1;
	volatile uint16_t x584 = UINT16_MAX;
	volatile int32_t t128 = -13399266;

    t128 = (((x581-x582)>x583)!=x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x585 = INT16_MAX;
	uint16_t x586 = UINT16_MAX;
	uint16_t x587 = 7982U;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t129 = -1420;

    t129 = (((x585-x586)>x587)!=x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x589 = UINT8_MAX;
	int16_t x590 = 6467;
	uint16_t x591 = 9U;
	volatile int32_t t130 = 197;

    t130 = (((x589-x590)>x591)!=x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x594 = INT64_MIN;
	volatile uint8_t x595 = 2U;
	uint8_t x596 = UINT8_MAX;
	int32_t t131 = -251;

    t131 = (((x593-x594)>x595)!=x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x598 = INT8_MIN;
	int64_t x600 = -1LL;
	int32_t t132 = -11036;

    t132 = (((x597-x598)>x599)!=x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x605 = 11U;
	static int8_t x606 = -9;
	uint16_t x607 = 20268U;
	uint32_t x608 = 471799929U;
	int32_t t133 = 0;

    t133 = (((x605-x606)>x607)!=x608);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x609 = 3LL;
	int64_t x610 = INT64_MAX;
	volatile int16_t x611 = 467;
	uint32_t x612 = 1686346927U;
	volatile int32_t t134 = 11;

    t134 = (((x609-x610)>x611)!=x612);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = UINT32_MAX;
	int8_t x614 = -2;
	volatile int16_t x615 = -1;
	uint32_t x616 = 8U;
	volatile int32_t t135 = -42102;

    t135 = (((x613-x614)>x615)!=x616);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x618 = UINT32_MAX;
	int8_t x619 = -1;
	int16_t x620 = -21;
	volatile int32_t t136 = 18579090;

    t136 = (((x617-x618)>x619)!=x620);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = INT8_MAX;
	static uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MAX;
	int32_t t137 = 6126;

    t137 = (((x621-x622)>x623)!=x624);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x626 = UINT16_MAX;
	static volatile uint8_t x627 = 4U;
	int8_t x628 = 1;

    t138 = (((x625-x626)>x627)!=x628);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x633 = 4286U;
	uint8_t x634 = 4U;
	static int16_t x636 = INT16_MAX;
	volatile int32_t t139 = -2582201;

    t139 = (((x633-x634)>x635)!=x636);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MIN;
	int8_t x639 = 25;

    t140 = (((x637-x638)>x639)!=x640);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x641 = -1;
	int32_t x642 = INT32_MIN;
	volatile int64_t x643 = INT64_MIN;
	int32_t t141 = 1792492;

    t141 = (((x641-x642)>x643)!=x644);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MAX;
	static uint32_t x647 = UINT32_MAX;

    t142 = (((x645-x646)>x647)!=x648);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = 242015447;
	int8_t x652 = 32;

    t143 = (((x649-x650)>x651)!=x652);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x654 = 41U;
	int32_t x655 = INT32_MAX;
	static volatile int16_t x656 = -9331;

    t144 = (((x653-x654)>x655)!=x656);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x657 = -4995;
	int16_t x658 = INT16_MIN;
	static int8_t x659 = INT8_MIN;
	uint64_t x660 = 223LLU;
	volatile int32_t t145 = 285;

    t145 = (((x657-x658)>x659)!=x660);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x661 = 21U;
	int32_t x662 = -13;
	volatile int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MAX;

    t146 = (((x661-x662)>x663)!=x664);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x669 = -12;
	uint64_t x670 = 14078693LLU;
	static volatile int64_t x671 = INT64_MAX;

    t147 = (((x669-x670)>x671)!=x672);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x673 = 18U;
	uint32_t x674 = 531518817U;
	volatile int8_t x675 = -1;
	static volatile int16_t x676 = -1933;
	volatile int32_t t148 = -9491025;

    t148 = (((x673-x674)>x675)!=x676);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x678 = -1;
	uint8_t x679 = 30U;
	uint32_t x680 = 6980602U;
	volatile int32_t t149 = 153620223;

    t149 = (((x677-x678)>x679)!=x680);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x681 = INT32_MIN;
	uint64_t x682 = UINT64_MAX;
	static int16_t x683 = INT16_MIN;
	static volatile uint32_t x684 = 29852337U;
	static volatile int32_t t150 = -2720;

    t150 = (((x681-x682)>x683)!=x684);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x686 = 12U;
	static uint16_t x687 = UINT16_MAX;
	static uint64_t x688 = UINT64_MAX;
	int32_t t151 = -365;

    t151 = (((x685-x686)>x687)!=x688);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x689 = -1LL;
	int8_t x690 = -1;
	uint64_t x691 = 873173027759394LLU;
	volatile int64_t x692 = -23895LL;

    t152 = (((x689-x690)>x691)!=x692);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x693 = 5U;
	uint16_t x694 = UINT16_MAX;
	int32_t x696 = -1742;
	int32_t t153 = 963698;

    t153 = (((x693-x694)>x695)!=x696);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x697 = 142U;
	int8_t x698 = INT8_MAX;
	volatile int32_t x699 = 5927;
	int8_t x700 = -1;
	int32_t t154 = 3;

    t154 = (((x697-x698)>x699)!=x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x702 = -1;
	int16_t x704 = -1;
	volatile int32_t t155 = 114180;

    t155 = (((x701-x702)>x703)!=x704);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x705 = -1;
	int8_t x706 = INT8_MIN;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = 30105830842711LLU;
	volatile int32_t t156 = 1755;

    t156 = (((x705-x706)>x707)!=x708);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x710 = UINT8_MAX;
	volatile int32_t x711 = INT32_MIN;
	int64_t x712 = INT64_MAX;
	static int32_t t157 = -22736;

    t157 = (((x709-x710)>x711)!=x712);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x713 = UINT8_MAX;
	int32_t x714 = -1;
	uint32_t x715 = 8405U;
	int8_t x716 = INT8_MAX;
	int32_t t158 = -31;

    t158 = (((x713-x714)>x715)!=x716);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x721 = -1;
	static uint8_t x722 = UINT8_MAX;
	static int64_t x723 = 5473354792LL;
	static uint8_t x724 = 1U;
	volatile int32_t t159 = -3607;

    t159 = (((x721-x722)>x723)!=x724);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x729 = INT16_MIN;
	int16_t x730 = INT16_MIN;
	static int16_t x732 = -14;
	static int32_t t160 = -2390;

    t160 = (((x729-x730)>x731)!=x732);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x733 = -1LL;
	int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	int32_t t161 = -72324671;

    t161 = (((x733-x734)>x735)!=x736);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = 1;
	uint64_t x742 = UINT64_MAX;
	uint8_t x743 = UINT8_MAX;
	uint8_t x744 = UINT8_MAX;
	int32_t t162 = -159;

    t162 = (((x741-x742)>x743)!=x744);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x745 = 436560;
	static uint16_t x746 = UINT16_MAX;
	static uint8_t x747 = 34U;
	uint32_t x748 = 62U;
	volatile int32_t t163 = -48715;

    t163 = (((x745-x746)>x747)!=x748);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x749 = INT8_MIN;
	volatile int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MAX;
	int64_t x752 = INT64_MAX;
	static int32_t t164 = -31642023;

    t164 = (((x749-x750)>x751)!=x752);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x757 = UINT32_MAX;
	int64_t x759 = INT64_MAX;
	int64_t x760 = INT64_MIN;
	static int32_t t165 = -913454;

    t165 = (((x757-x758)>x759)!=x760);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x761 = UINT64_MAX;
	uint16_t x763 = 64U;
	int32_t t166 = 2996845;

    t166 = (((x761-x762)>x763)!=x764);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x769 = -1LL;
	uint64_t x770 = 4906LLU;
	int64_t x771 = INT64_MAX;
	static volatile int32_t t167 = -603729366;

    t167 = (((x769-x770)>x771)!=x772);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x774 = INT16_MIN;
	int64_t x776 = 4987498LL;
	volatile int32_t t168 = 0;

    t168 = (((x773-x774)>x775)!=x776);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x777 = INT16_MAX;
	int16_t x779 = -1;
	int64_t x780 = INT64_MAX;

    t169 = (((x777-x778)>x779)!=x780);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x781 = INT64_MIN;
	volatile int8_t x782 = -1;
	int8_t x783 = INT8_MAX;
	static int16_t x784 = -1;

    t170 = (((x781-x782)>x783)!=x784);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x785 = 0;
	volatile int64_t x786 = -1LL;
	uint8_t x788 = 1U;
	volatile int32_t t171 = -1;

    t171 = (((x785-x786)>x787)!=x788);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x789 = 3U;
	static uint16_t x790 = UINT16_MAX;
	static uint32_t x791 = UINT32_MAX;
	int32_t t172 = 45980262;

    t172 = (((x789-x790)>x791)!=x792);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x793 = 12LLU;
	static uint16_t x795 = 665U;
	int16_t x796 = INT16_MIN;
	int32_t t173 = -3;

    t173 = (((x793-x794)>x795)!=x796);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 2601695LLU;
	static uint32_t x799 = 20436U;
	int16_t x800 = -1;
	static int32_t t174 = 114428275;

    t174 = (((x797-x798)>x799)!=x800);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x801 = 7827730343742984LLU;
	int16_t x803 = INT16_MIN;
	int32_t x804 = 2;
	int32_t t175 = 3630;

    t175 = (((x801-x802)>x803)!=x804);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x805 = 3U;
	static volatile int32_t x806 = 12;
	static uint8_t x807 = 54U;

    t176 = (((x805-x806)>x807)!=x808);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x809 = 494080341293258596LLU;
	volatile uint64_t x810 = 144792765044728LLU;
	static volatile int32_t x811 = INT32_MIN;
	static int32_t x812 = -1;
	int32_t t177 = -1530841;

    t177 = (((x809-x810)>x811)!=x812);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x817 = 75782;
	int32_t x818 = INT32_MAX;
	static volatile uint8_t x820 = 0U;
	volatile int32_t t178 = -503;

    t178 = (((x817-x818)>x819)!=x820);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x821 = -1;
	uint16_t x822 = 33U;
	static int64_t x823 = 736598495LL;
	int8_t x824 = INT8_MIN;
	volatile int32_t t179 = 236863;

    t179 = (((x821-x822)>x823)!=x824);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x826 = 2U;
	static volatile int32_t t180 = -190831268;

    t180 = (((x825-x826)>x827)!=x828);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x830 = INT32_MIN;
	uint8_t x831 = 26U;
	static uint64_t x832 = 5643062730714LLU;
	static volatile int32_t t181 = -42033;

    t181 = (((x829-x830)>x831)!=x832);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;
	int32_t t182 = -4407;

    t182 = (((x833-x834)>x835)!=x836);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x841 = INT8_MIN;
	int16_t x842 = 1379;
	static int8_t x843 = -1;
	uint16_t x844 = UINT16_MAX;
	static volatile int32_t t183 = 266272;

    t183 = (((x841-x842)>x843)!=x844);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x845 = -1;
	uint8_t x846 = 4U;
	int32_t x847 = INT32_MAX;
	int32_t t184 = 62235;

    t184 = (((x845-x846)>x847)!=x848);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = INT32_MIN;
	static volatile int64_t x850 = -506LL;
	int64_t x852 = -15255434345031717LL;
	volatile int32_t t185 = 1003152790;

    t185 = (((x849-x850)>x851)!=x852);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x854 = -1;
	uint8_t x855 = 13U;
	static int8_t x856 = -1;
	int32_t t186 = 0;

    t186 = (((x853-x854)>x855)!=x856);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x857 = 102LLU;
	uint64_t x858 = 213843565238520503LLU;
	uint16_t x859 = 30U;
	int8_t x860 = INT8_MIN;
	int32_t t187 = -7190614;

    t187 = (((x857-x858)>x859)!=x860);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x861 = 924147U;
	uint8_t x862 = UINT8_MAX;
	int16_t x863 = -1;
	static volatile int16_t x864 = INT16_MAX;

    t188 = (((x861-x862)>x863)!=x864);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x865 = 211872116503655LLU;
	int16_t x866 = 31;
	uint16_t x867 = 63U;
	int16_t x868 = -1;
	static volatile int32_t t189 = 1573;

    t189 = (((x865-x866)>x867)!=x868);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x869 = -104217;
	uint32_t x870 = UINT32_MAX;
	volatile int16_t x871 = 6;
	uint16_t x872 = 1U;
	int32_t t190 = -62;

    t190 = (((x869-x870)>x871)!=x872);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x873 = INT8_MIN;
	int16_t x874 = 2082;
	static volatile int32_t x875 = 489742528;
	static int8_t x876 = INT8_MIN;
	volatile int32_t t191 = -241;

    t191 = (((x873-x874)>x875)!=x876);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x877 = 336;
	static int8_t x878 = INT8_MAX;
	uint32_t x879 = 282789U;
	volatile int64_t x880 = -1LL;
	static int32_t t192 = 6;

    t192 = (((x877-x878)>x879)!=x880);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x885 = -1103198560LL;
	volatile int32_t x886 = INT32_MIN;
	uint64_t x887 = 136685LLU;
	volatile int8_t x888 = -23;
	static int32_t t193 = -328;

    t193 = (((x885-x886)>x887)!=x888);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x891 = INT32_MIN;
	int32_t x892 = -1;
	int32_t t194 = -6477890;

    t194 = (((x889-x890)>x891)!=x892);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x893 = -1254LL;
	volatile int16_t x894 = -16;
	uint64_t x895 = UINT64_MAX;
	uint8_t x896 = 18U;
	static volatile int32_t t195 = 2;

    t195 = (((x893-x894)>x895)!=x896);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x897 = -27060748811LL;
	uint16_t x899 = 218U;
	int32_t x900 = INT32_MAX;
	volatile int32_t t196 = -4072735;

    t196 = (((x897-x898)>x899)!=x900);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x905 = 43U;
	int8_t x906 = INT8_MIN;
	int32_t x907 = 33;
	int32_t t197 = 0;

    t197 = (((x905-x906)>x907)!=x908);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x909 = 2851;
	static int8_t x910 = INT8_MIN;

    t198 = (((x909-x910)>x911)!=x912);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x913 = INT32_MIN;
	int64_t x914 = 46824296792043LL;
	int32_t x915 = -62778;
	volatile int32_t t199 = -926720859;

    t199 = (((x913-x914)>x915)!=x916);

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

