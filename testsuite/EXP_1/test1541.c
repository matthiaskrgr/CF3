
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

int8_t x1 = INT8_MAX;
static uint8_t x2 = 114U;
uint8_t x3 = 111U;
int64_t x13 = INT64_MIN;
uint32_t x14 = 2U;
int32_t x19 = -1599101;
int16_t x20 = -1;
static int8_t x27 = 8;
int32_t x28 = -1;
int64_t x29 = 4LL;
int64_t x37 = INT64_MIN;
int64_t x46 = 24873740LL;
volatile int32_t x51 = -744365047;
volatile uint8_t x52 = 40U;
volatile int8_t x63 = 1;
int64_t x77 = -1LL;
int8_t x80 = -2;
int16_t x82 = -1;
static volatile int64_t t19 = -81868LL;
uint32_t x89 = 8884U;
volatile uint64_t t21 = 3LLU;
volatile uint8_t x94 = 0U;
volatile int64_t x95 = INT64_MIN;
int64_t t22 = 412016782646LL;
static int16_t x101 = -1;
int16_t x110 = -1;
uint16_t x113 = 217U;
static int16_t x117 = 0;
uint64_t t27 = 12LLU;
static uint32_t x128 = 4U;
int32_t x138 = -1;
volatile int32_t x145 = -602;
uint8_t x150 = 54U;
volatile int32_t t34 = 51828833;
uint64_t x156 = UINT64_MAX;
volatile int16_t x157 = 1846;
uint8_t x162 = 2U;
static volatile uint64_t x163 = UINT64_MAX;
int32_t x164 = INT32_MAX;
int32_t t39 = -110650;
static int64_t x176 = 37785434165526LL;
static int64_t t40 = -7281452034756LL;
static int8_t x187 = 2;
static volatile uint8_t x189 = 6U;
uint32_t x193 = UINT32_MAX;
int32_t x194 = INT32_MAX;
static int32_t t48 = 4128;
volatile uint16_t x214 = UINT16_MAX;
int32_t x217 = -22;
int32_t x221 = -37510062;
uint64_t x236 = UINT64_MAX;
volatile uint64_t t53 = 26560LLU;
int32_t x238 = -1;
uint8_t x252 = UINT8_MAX;
int64_t x257 = 1508589018LL;
int32_t x258 = INT32_MAX;
static volatile int16_t x260 = 205;
static int16_t x264 = INT16_MAX;
volatile int32_t t60 = 5684;
int32_t t63 = -1369;
volatile int32_t x281 = INT32_MIN;
uint64_t x286 = UINT64_MAX;
volatile uint64_t x288 = UINT64_MAX;
static uint8_t x289 = 52U;
int32_t x293 = INT32_MIN;
uint32_t x295 = 1902U;
uint32_t x297 = 21534U;
int16_t x301 = 532;
static int16_t x303 = INT16_MIN;
volatile int32_t t69 = 143741;
volatile int16_t x311 = INT16_MIN;
volatile int64_t x314 = -1LL;
uint32_t x315 = 19597U;
volatile int32_t x323 = -1;
uint16_t x333 = 91U;
uint8_t x341 = 26U;
int64_t x343 = -45712343049920LL;
volatile int32_t x345 = INT32_MIN;
uint32_t x361 = UINT32_MAX;
int8_t x367 = INT8_MIN;
int64_t x373 = -104156076067315LL;
int64_t x377 = 56777721846LL;
static int64_t x387 = INT64_MIN;
int8_t x390 = -1;
int8_t x392 = 7;
int8_t x397 = -1;
static volatile uint32_t t87 = 0U;
static int64_t t88 = -23508267710746LL;
int64_t x409 = -363852143614092807LL;
uint64_t x410 = 299LLU;
static int8_t x414 = -10;
volatile int32_t x443 = 9;
int16_t x444 = INT16_MAX;
int16_t x450 = INT16_MAX;
volatile int8_t x456 = INT8_MIN;
volatile int32_t t97 = -3550388;
static uint64_t x459 = 86358929923248723LLU;
int8_t x473 = INT8_MIN;
volatile int16_t x474 = INT16_MIN;
int32_t x475 = -732230;
uint32_t x483 = 1334U;
volatile uint32_t t103 = 29U;
static int8_t x486 = -1;
int8_t x491 = 11;
int32_t t105 = 706503;
int32_t t107 = -838;
int64_t x511 = INT64_MIN;
volatile int64_t x516 = INT64_MAX;
int64_t x517 = -1LL;
int8_t x519 = -1;
uint64_t t112 = 12767239438LLU;
uint8_t x525 = 6U;
int32_t x528 = INT32_MIN;
volatile uint32_t x544 = UINT32_MAX;
uint64_t x545 = 13176140LLU;
uint8_t x548 = UINT8_MAX;
volatile int32_t t118 = -1;
volatile int32_t x568 = -1;
int8_t x572 = INT8_MIN;
uint32_t t122 = 3594U;
int64_t x595 = INT64_MIN;
int16_t x605 = INT16_MIN;
int16_t x614 = -1;
static int64_t x621 = -430163653482LL;
static uint64_t t131 = 54LLU;
volatile int32_t x626 = 35981153;
static volatile uint32_t t133 = 1U;
volatile int8_t x635 = INT8_MAX;
int16_t x636 = -135;
uint8_t x640 = UINT8_MAX;
static int8_t x645 = INT8_MAX;
uint8_t x649 = UINT8_MAX;
static volatile int8_t x654 = -1;
int32_t t139 = 0;
uint32_t x665 = 263881265U;
uint32_t x672 = 4354759U;
static int64_t x674 = INT64_MIN;
volatile uint8_t x681 = UINT8_MAX;
volatile uint16_t x682 = 2891U;
int8_t x691 = -1;
int16_t x696 = INT16_MIN;
volatile int64_t x708 = 2LL;
uint64_t x709 = 822144059401LLU;
uint16_t x710 = 10251U;
uint16_t x719 = 10U;
volatile int8_t x727 = -1;
volatile int64_t x731 = INT64_MAX;
int64_t x737 = 1430LL;
int64_t x741 = -3276179436LL;
uint8_t x743 = 3U;
volatile int8_t x753 = INT8_MIN;
int64_t x756 = INT64_MAX;
uint32_t x766 = 34082745U;
uint32_t x769 = UINT32_MAX;
uint16_t x773 = 21151U;
uint8_t x775 = UINT8_MAX;
static volatile int32_t t164 = 9122509;
volatile int64_t t166 = 0LL;
int64_t x785 = INT64_MIN;
volatile uint8_t x794 = 2U;
int8_t x795 = INT8_MAX;
int32_t t168 = 9;
int64_t x800 = -1LL;
static volatile int64_t t169 = 158983LL;
int64_t x801 = INT64_MIN;
int16_t x802 = INT16_MAX;
uint16_t x803 = 16U;
int8_t x804 = INT8_MAX;
int32_t t170 = -42769846;
int32_t x814 = INT32_MIN;
volatile int16_t x817 = -78;
int16_t x820 = INT16_MAX;
volatile int32_t t173 = 134877589;
int32_t x827 = INT32_MAX;
int16_t x833 = -1;
int64_t t175 = 403718400966LL;
uint64_t x844 = 903487884584557007LLU;
uint64_t t177 = 3450644111968LLU;
uint64_t x848 = 4233196971LLU;
volatile int32_t t182 = -23;
static volatile uint32_t x871 = 12445U;
int8_t x892 = -1;
int8_t x893 = 2;
uint8_t x895 = UINT8_MAX;
static int64_t t190 = 6567183LL;
volatile int32_t x898 = -202;
volatile int64_t x902 = -1LL;
int64_t x907 = INT64_MAX;
int64_t x908 = -56246144312822184LL;
static int32_t x922 = -1150304;
int32_t x931 = INT32_MAX;
uint32_t x932 = UINT32_MAX;
uint16_t x940 = 34U;
uint32_t x941 = 0U;
int64_t x942 = INT64_MIN;


void f0(void) {
    	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 0U;

    t0 = (((x1==x2)|x3)+x4);

    if (t0 != 110U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	static int8_t x6 = -1;
	int8_t x7 = INT8_MAX;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 183869296587LLU;

    t1 = (((x5==x6)|x7)+x8);

    if (t1 != 126LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t2 = 1454217U;

    t2 = (((x13==x14)|x15)+x16);

    if (t2 != 4294967167U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 1425U;
	static uint64_t x18 = UINT64_MAX;
	volatile int32_t t3 = 1;

    t3 = (((x17==x18)|x19)+x20);

    if (t3 != -1599102) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = INT64_MIN;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	volatile int16_t x24 = INT16_MAX;
	int32_t t4 = -45;

    t4 = (((x21==x22)|x23)+x24);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = -1;
	int8_t x26 = -1;
	volatile int32_t t5 = -248;

    t5 = (((x25==x26)|x27)+x28);

    if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x30 = 1;
	uint32_t x31 = 56017U;
	volatile uint8_t x32 = UINT8_MAX;
	volatile uint32_t t6 = 28905U;

    t6 = (((x29==x30)|x31)+x32);

    if (t6 != 56272U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -11290;
	static int32_t x34 = INT32_MAX;
	uint8_t x35 = 13U;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -178LL;

    t7 = (((x33==x34)|x35)+x36);

    if (t7 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x38 = UINT64_MAX;
	int64_t x39 = -1LL;
	uint8_t x40 = UINT8_MAX;
	int64_t t8 = 471271844LL;

    t8 = (((x37==x38)|x39)+x40);

    if (t8 != 254LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static int64_t x43 = -1LL;
	int32_t x44 = -1;
	volatile int64_t t9 = 1LL;

    t9 = (((x41==x42)|x43)+x44);

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = 0;
	int64_t x47 = -1LL;
	uint64_t x48 = 592LLU;
	uint64_t t10 = 6970042853217LLU;

    t10 = (((x45==x46)|x47)+x48);

    if (t10 != 591LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	volatile int32_t t11 = -28;

    t11 = (((x49==x50)|x51)+x52);

    if (t11 != -744365007) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x53 = -116190782470293584LL;
	uint64_t x54 = 1012457377019LLU;
	static int8_t x55 = INT8_MIN;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t12 = -924;

    t12 = (((x53==x54)|x55)+x56);

    if (t12 != -32896) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x57 = UINT16_MAX;
	int64_t x58 = INT64_MIN;
	int64_t x59 = 26987LL;
	static uint8_t x60 = 81U;
	static volatile int64_t t13 = 3326639672LL;

    t13 = (((x57==x58)|x59)+x60);

    if (t13 != 27068LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int8_t x62 = -2;
	int32_t x64 = INT32_MIN;
	int32_t t14 = 0;

    t14 = (((x61==x62)|x63)+x64);

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 21U;
	int8_t x66 = INT8_MAX;
	uint32_t x67 = 0U;
	static int16_t x68 = INT16_MIN;
	static volatile uint32_t t15 = 5U;

    t15 = (((x65==x66)|x67)+x68);

    if (t15 != 4294934528U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 438758437468221856LLU;
	int32_t x70 = 48;
	int32_t x71 = -3630500;
	uint8_t x72 = 9U;
	volatile int32_t t16 = -310662456;

    t16 = (((x69==x70)|x71)+x72);

    if (t16 != -3630491) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -229007529;

    t17 = (((x73==x74)|x75)+x76);

    if (t17 != 2147483519) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x78 = -1403162051136LL;
	static uint8_t x79 = 7U;
	static int32_t t18 = -69;

    t18 = (((x77==x78)|x79)+x80);

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 232296969;
	int8_t x83 = -1;
	int64_t x84 = -1351210522LL;

    t19 = (((x81==x82)|x83)+x84);

    if (t19 != -1351210523LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = -19LL;
	uint32_t x86 = 14210U;
	int16_t x87 = 1;
	static int8_t x88 = INT8_MIN;
	int32_t t20 = -203;

    t20 = (((x85==x86)|x87)+x88);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x90 = 790681994215121580LL;
	static volatile uint32_t x91 = 468040933U;
	uint64_t x92 = 55795253947330LLU;

    t21 = (((x89==x90)|x91)+x92);

    if (t21 != 55795721988263LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x93 = -24;
	volatile uint32_t x96 = UINT32_MAX;

    t22 = (((x93==x94)|x95)+x96);

    if (t22 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x97 = 6651587533LLU;
	uint32_t x98 = 384006U;
	int64_t x99 = 419445702713930115LL;
	int8_t x100 = -1;
	static volatile int64_t t23 = -261928940650554LL;

    t23 = (((x97==x98)|x99)+x100);

    if (t23 != 419445702713930114LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x102 = 337725U;
	volatile int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = 10948181LLU;

    t24 = (((x101==x102)|x103)+x104);

    if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	uint64_t x111 = 1247684010023LLU;
	int8_t x112 = INT8_MIN;
	uint64_t t25 = 38312787LLU;

    t25 = (((x109==x110)|x111)+x112);

    if (t25 != 1247684009895LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x114 = 12444;
	volatile int64_t x115 = -1LL;
	uint64_t x116 = 668726311378LLU;
	uint64_t t26 = 4LLU;

    t26 = (((x113==x114)|x115)+x116);

    if (t26 != 668726311377LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x118 = 7928560443LLU;
	uint64_t x119 = 608LLU;
	static int32_t x120 = INT32_MIN;

    t27 = (((x117==x118)|x119)+x120);

    if (t27 != 18446744071562068576LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x121 = INT8_MIN;
	static uint16_t x122 = UINT16_MAX;
	uint16_t x123 = 10049U;
	uint16_t x124 = 20U;
	static volatile int32_t t28 = 1030293;

    t28 = (((x121==x122)|x123)+x124);

    if (t28 != 10069) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -22;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;
	static uint32_t t29 = 1U;

    t29 = (((x125==x126)|x127)+x128);

    if (t29 != 4294934532U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 2075058U;
	int32_t x130 = -4876815;
	int64_t x131 = INT64_MIN;
	int64_t x132 = 58964089754135242LL;
	static int64_t t30 = 1382709162814654LL;

    t30 = (((x129==x130)|x131)+x132);

    if (t30 != -9164407947100640566LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x137 = 1U;
	uint16_t x139 = 104U;
	uint64_t x140 = 311012LLU;
	volatile uint64_t t31 = 11902LLU;

    t31 = (((x137==x138)|x139)+x140);

    if (t31 != 311116LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1143194LL;
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = 14;
	int16_t x144 = INT16_MAX;
	volatile int32_t t32 = 846470;

    t32 = (((x141==x142)|x143)+x144);

    if (t32 != 32781) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x146 = -415;
	static uint64_t x147 = 185989663698327669LLU;
	int32_t x148 = INT32_MIN;
	static volatile uint64_t t33 = 125561217300LLU;

    t33 = (((x145==x146)|x147)+x148);

    if (t33 != 185989661550844021LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = -1;
	static int32_t x151 = 348335053;
	static int32_t x152 = 143836;

    t34 = (((x149==x150)|x151)+x152);

    if (t34 != 348478889) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 1304278240703583LLU;
	uint8_t x154 = 54U;
	uint64_t x155 = 4076228804LLU;
	uint64_t t35 = 208433784231LLU;

    t35 = (((x153==x154)|x155)+x156);

    if (t35 != 4076228803LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x158 = -1LL;
	int16_t x159 = -1;
	int64_t x160 = -1LL;
	volatile int64_t t36 = -155058246LL;

    t36 = (((x157==x158)|x159)+x160);

    if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = -1;
	uint64_t t37 = 24349LLU;

    t37 = (((x161==x162)|x163)+x164);

    if (t37 != 2147483646LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = 45843U;
	static uint64_t x166 = 2892054805LLU;
	volatile int8_t x167 = -1;
	int16_t x168 = INT16_MIN;
	int32_t t38 = -161720892;

    t38 = (((x165==x166)|x167)+x168);

    if (t38 != -32769) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x169 = -1;
	uint16_t x170 = 1U;
	volatile int16_t x171 = 380;
	int16_t x172 = INT16_MIN;

    t39 = (((x169==x170)|x171)+x172);

    if (t39 != -32388) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = INT64_MAX;
	uint16_t x174 = 8U;
	uint32_t x175 = 650641223U;

    t40 = (((x173==x174)|x175)+x176);

    if (t40 != 37786084806749LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = -1;
	static int16_t x178 = -1;
	uint8_t x179 = 0U;
	int8_t x180 = 1;
	int32_t t41 = 60588687;

    t41 = (((x177==x178)|x179)+x180);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t42 = -116;

    t42 = (((x185==x186)|x187)+x188);

    if (t42 != 258) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = 248427783873898713LL;
	volatile int64_t t43 = -125LL;

    t43 = (((x189==x190)|x191)+x192);

    if (t43 != 248427781726415065LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x195 = 25;
	static int8_t x196 = INT8_MIN;
	static volatile int32_t t44 = -222;

    t44 = (((x193==x194)|x195)+x196);

    if (t44 != -103) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 37799409U;
	int32_t x198 = 134950309;
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 0U;
	uint64_t t45 = UINT64_MAX;

    t45 = (((x197==x198)|x199)+x200);

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MIN;
	uint64_t x202 = 40146065544656507LLU;
	uint32_t x203 = 13U;
	int32_t x204 = -1;
	static volatile uint32_t t46 = 1684U;

    t46 = (((x201==x202)|x203)+x204);

    if (t46 != 12U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = 648381870;
	static int32_t x206 = INT32_MIN;
	volatile int8_t x207 = -1;
	int8_t x208 = -20;
	volatile int32_t t47 = 4214191;

    t47 = (((x205==x206)|x207)+x208);

    if (t47 != -21) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x209 = -1LL;
	static uint8_t x210 = 0U;
	int8_t x211 = INT8_MIN;
	static uint16_t x212 = 1U;

    t48 = (((x209==x210)|x211)+x212);

    if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = -1;
	int8_t x215 = -1;
	static int32_t x216 = 6;
	static int32_t t49 = 3653769;

    t49 = (((x213==x214)|x215)+x216);

    if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = -168LL;
	int8_t x220 = INT8_MAX;
	volatile int64_t t50 = -312LL;

    t50 = (((x217==x218)|x219)+x220);

    if (t50 != -41LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x222 = INT32_MAX;
	int32_t x223 = -45;
	int32_t x224 = INT32_MAX;
	volatile int32_t t51 = 249;

    t51 = (((x221==x222)|x223)+x224);

    if (t51 != 2147483602) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x229 = 65202536U;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t52 = 760672933285847LL;

    t52 = (((x229==x230)|x231)+x232);

    if (t52 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = 11;
	static int16_t x235 = -1;

    t53 = (((x233==x234)|x235)+x236);

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x237 = 1879U;
	int16_t x239 = -23;
	int8_t x240 = 0;
	volatile int32_t t54 = 5824;

    t54 = (((x237==x238)|x239)+x240);

    if (t54 != -23) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = UINT8_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	int8_t x244 = -14;
	uint64_t t55 = 74482LLU;

    t55 = (((x241==x242)|x243)+x244);

    if (t55 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile uint16_t x247 = 5U;
	volatile int16_t x248 = INT16_MIN;
	int32_t t56 = 3021604;

    t56 = (((x245==x246)|x247)+x248);

    if (t56 != -32763) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = INT64_MAX;
	int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MIN;
	volatile int32_t t57 = -835;

    t57 = (((x249==x250)|x251)+x252);

    if (t57 != -2147483392) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x253 = INT32_MIN;
	int16_t x254 = 54;
	int64_t x255 = -1LL;
	static int16_t x256 = -1;
	volatile int64_t t58 = -114735644LL;

    t58 = (((x253==x254)|x255)+x256);

    if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x259 = 3;
	volatile int32_t t59 = 30766;

    t59 = (((x257==x258)|x259)+x260);

    if (t59 != 208) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x262 = -52457;
	volatile int8_t x263 = -1;

    t60 = (((x261==x262)|x263)+x264);

    if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x265 = 1781598270LLU;
	int64_t x266 = -15269107LL;
	static int32_t x267 = INT32_MAX;
	volatile int16_t x268 = -1;
	static int32_t t61 = 19245396;

    t61 = (((x265==x266)|x267)+x268);

    if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x269 = 262023336821305385LLU;
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = 32410;
	int64_t x272 = -1LL;
	int64_t t62 = -65LL;

    t62 = (((x269==x270)|x271)+x272);

    if (t62 != 32409LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	static int8_t x279 = INT8_MIN;
	int8_t x280 = -1;

    t63 = (((x277==x278)|x279)+x280);

    if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x282 = UINT8_MAX;
	static int64_t x283 = -1LL;
	volatile int8_t x284 = INT8_MIN;
	int64_t t64 = -1994LL;

    t64 = (((x281==x282)|x283)+x284);

    if (t64 != -129LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = INT8_MAX;
	uint8_t x287 = 11U;
	uint64_t t65 = 2855893307304869658LLU;

    t65 = (((x285==x286)|x287)+x288);

    if (t65 != 10LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x290 = 104936375U;
	int64_t x291 = -115711LL;
	int16_t x292 = INT16_MIN;
	volatile int64_t t66 = -3920285326LL;

    t66 = (((x289==x290)|x291)+x292);

    if (t66 != -148479LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x294 = UINT64_MAX;
	volatile int16_t x296 = 1;
	uint32_t t67 = 401U;

    t67 = (((x293==x294)|x295)+x296);

    if (t67 != 1903U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -2;
	uint64_t t68 = 327996LLU;

    t68 = (((x297==x298)|x299)+x300);

    if (t68 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x302 = -1;
	int8_t x304 = INT8_MAX;

    t69 = (((x301==x302)|x303)+x304);

    if (t69 != -32641) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x305 = UINT64_MAX;
	int64_t x306 = -1LL;
	volatile int8_t x307 = 0;
	static volatile int16_t x308 = INT16_MAX;
	int32_t t70 = 599;

    t70 = (((x305==x306)|x307)+x308);

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x309 = 620U;
	int8_t x310 = -1;
	static int64_t x312 = INT64_MAX;
	int64_t t71 = 5801525774042539LL;

    t71 = (((x309==x310)|x311)+x312);

    if (t71 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = -1;
	uint32_t x316 = UINT32_MAX;
	static uint32_t t72 = 8U;

    t72 = (((x313==x314)|x315)+x316);

    if (t72 != 19596U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x321 = 13427916LLU;
	volatile uint8_t x322 = 0U;
	volatile int32_t x324 = -7008;
	volatile int32_t t73 = 0;

    t73 = (((x321==x322)|x323)+x324);

    if (t73 != -7009) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x325 = INT64_MIN;
	static int64_t x326 = INT64_MAX;
	volatile uint32_t x327 = UINT32_MAX;
	volatile int16_t x328 = -1;
	volatile uint32_t t74 = 3U;

    t74 = (((x325==x326)|x327)+x328);

    if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x334 = UINT32_MAX;
	int16_t x335 = 70;
	int32_t x336 = -1;
	volatile int32_t t75 = 26505;

    t75 = (((x333==x334)|x335)+x336);

    if (t75 != 69) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x337 = -1311990805832655LL;
	int8_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int16_t x340 = -3892;
	static int32_t t76 = 0;

    t76 = (((x337==x338)|x339)+x340);

    if (t76 != -3765) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x342 = 357U;
	volatile int8_t x344 = INT8_MIN;
	static int64_t t77 = -500549LL;

    t77 = (((x341==x342)|x343)+x344);

    if (t77 != -45712343050048LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x346 = 1036;
	static volatile int32_t x347 = INT32_MIN;
	int64_t x348 = -28738640291979378LL;
	volatile int64_t t78 = 46272613932019927LL;

    t78 = (((x345==x346)|x347)+x348);

    if (t78 != -28738642439463026LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = 2;
	int8_t x350 = 1;
	volatile uint16_t x351 = UINT16_MAX;
	static int8_t x352 = INT8_MAX;
	static int32_t t79 = 233874290;

    t79 = (((x349==x350)|x351)+x352);

    if (t79 != 65662) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x362 = UINT8_MAX;
	int16_t x363 = -1;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t80 = 13;

    t80 = (((x361==x362)|x363)+x364);

    if (t80 != 126) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 0U;
	int32_t x368 = INT32_MAX;
	int32_t t81 = -1454575;

    t81 = (((x365==x366)|x367)+x368);

    if (t81 != 2147483519) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x374 = -1;
	uint8_t x375 = 27U;
	volatile uint64_t x376 = 1674091803155539656LLU;
	uint64_t t82 = 1628LLU;

    t82 = (((x373==x374)|x375)+x376);

    if (t82 != 1674091803155539683LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x378 = 1603U;
	volatile int32_t x379 = -52587;
	int16_t x380 = 13840;
	static volatile int32_t t83 = 1;

    t83 = (((x377==x378)|x379)+x380);

    if (t83 != -38747) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x385 = -7;
	int64_t x386 = INT64_MAX;
	static int64_t x388 = 8171432073276340LL;
	volatile int64_t t84 = 531056352969LL;

    t84 = (((x385==x386)|x387)+x388);

    if (t84 != -9215200604781499468LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x389 = -1LL;
	uint16_t x391 = UINT16_MAX;
	int32_t t85 = -1900062;

    t85 = (((x389==x390)|x391)+x392);

    if (t85 != 65542) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = -1;
	volatile uint64_t x394 = 217898837606660LLU;
	int16_t x395 = INT16_MIN;
	int64_t x396 = -22922821LL;
	int64_t t86 = -4423LL;

    t86 = (((x393==x394)|x395)+x396);

    if (t86 != -22955589LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 28U;

    t87 = (((x397==x398)|x399)+x400);

    if (t87 != 4294967196U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x401 = INT16_MIN;
	uint32_t x402 = 59153597U;
	int64_t x403 = -1LL;
	static uint32_t x404 = 275002202U;

    t88 = (((x401==x402)|x403)+x404);

    if (t88 != 275002201LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MAX;
	int32_t t89 = -95871;

    t89 = (((x409==x410)|x411)+x412);

    if (t89 != 2147483519) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	static volatile uint16_t x416 = 0U;
	static int32_t t90 = -7982507;

    t90 = (((x413==x414)|x415)+x416);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = 3U;
	uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MAX;
	volatile uint32_t t91 = 1866U;

    t91 = (((x417==x418)|x419)+x420);

    if (t91 != 32766U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x421 = -1;
	int32_t x422 = -1;
	int32_t x423 = INT32_MIN;
	volatile uint16_t x424 = UINT16_MAX;
	volatile int32_t t92 = -9014;

    t92 = (((x421==x422)|x423)+x424);

    if (t92 != -2147418112) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x429 = INT8_MAX;
	static int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	static int64_t x432 = 263833208LL;
	volatile int64_t t93 = 672995LL;

    t93 = (((x429==x430)|x431)+x432);

    if (t93 != -1883650440LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x441 = INT32_MAX;
	int8_t x442 = 0;
	int32_t t94 = -12054390;

    t94 = (((x441==x442)|x443)+x444);

    if (t94 != 32776) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x445 = 108U;
	static int8_t x446 = 4;
	volatile uint32_t x447 = 335U;
	uint32_t x448 = 1415570U;
	uint32_t t95 = 155U;

    t95 = (((x445==x446)|x447)+x448);

    if (t95 != 1415905U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x449 = 26U;
	volatile int64_t x451 = INT64_MIN;
	static uint32_t x452 = 0U;
	volatile int64_t t96 = INT64_MIN;

    t96 = (((x449==x450)|x451)+x452);

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = 286716092858628647LLU;
	static int64_t x454 = 4010LL;
	static int32_t x455 = -1;

    t97 = (((x453==x454)|x455)+x456);

    if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MIN;
	uint8_t x460 = 5U;
	static uint64_t t98 = 6218LLU;

    t98 = (((x457==x458)|x459)+x460);

    if (t98 != 86358929923248728LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x465 = 49U;
	volatile int16_t x466 = 124;
	volatile uint64_t x467 = 19381166724LLU;
	static int64_t x468 = -370598315320876615LL;
	static uint64_t t99 = 35665LLU;

    t99 = (((x465==x466)|x467)+x468);

    if (t99 != 18076145777769841725LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x469 = INT8_MAX;
	static int8_t x470 = 51;
	int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t100 = -1929827;

    t100 = (((x469==x470)|x471)+x472);

    if (t100 != -32896) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x476 = -14;
	int32_t t101 = -74383;

    t101 = (((x473==x474)|x475)+x476);

    if (t101 != -732244) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MIN;
	static uint16_t x479 = 1U;
	int16_t x480 = 135;
	int32_t t102 = -42;

    t102 = (((x477==x478)|x479)+x480);

    if (t102 != 136) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x481 = 925747263;
	static uint16_t x482 = 15U;
	uint8_t x484 = 47U;

    t103 = (((x481==x482)|x483)+x484);

    if (t103 != 1381U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x485 = INT64_MAX;
	static int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t104 = -22007;

    t104 = (((x485==x486)|x487)+x488);

    if (t104 != -256) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MAX;
	static int8_t x492 = 2;

    t105 = (((x489==x490)|x491)+x492);

    if (t105 != 13) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x493 = 3153U;
	static uint16_t x494 = 3425U;
	volatile uint64_t x495 = 3543939620595142LLU;
	int32_t x496 = INT32_MIN;
	uint64_t t106 = 1725804506068180345LLU;

    t106 = (((x493==x494)|x495)+x496);

    if (t106 != 3543937473111494LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x497 = 1U;
	int16_t x498 = -13;
	static int8_t x499 = INT8_MAX;
	int16_t x500 = -613;

    t107 = (((x497==x498)|x499)+x500);

    if (t107 != -486) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x505 = 112590291153LLU;
	static int8_t x506 = INT8_MAX;
	volatile int32_t x507 = INT32_MAX;
	int64_t x508 = INT64_MIN;
	int64_t t108 = 2LL;

    t108 = (((x505==x506)|x507)+x508);

    if (t108 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x509 = INT16_MIN;
	static uint8_t x510 = 14U;
	volatile int8_t x512 = INT8_MAX;
	int64_t t109 = 624LL;

    t109 = (((x509==x510)|x511)+x512);

    if (t109 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x513 = UINT32_MAX;
	static uint16_t x514 = 3U;
	int8_t x515 = -1;
	volatile int64_t t110 = 346910135582924985LL;

    t110 = (((x513==x514)|x515)+x516);

    if (t110 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x518 = 3U;
	int8_t x520 = -1;
	int32_t t111 = 1741;

    t111 = (((x517==x518)|x519)+x520);

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x521 = -1787;
	static volatile int64_t x522 = -1LL;
	uint64_t x523 = UINT64_MAX;
	static int16_t x524 = INT16_MIN;

    t112 = (((x521==x522)|x523)+x524);

    if (t112 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x526 = UINT8_MAX;
	static uint16_t x527 = UINT16_MAX;
	volatile int32_t t113 = -7;

    t113 = (((x525==x526)|x527)+x528);

    if (t113 != -2147418113) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x529 = UINT64_MAX;
	int16_t x530 = INT16_MIN;
	static uint32_t x531 = 57253597U;
	static uint16_t x532 = 253U;
	static uint32_t t114 = 118U;

    t114 = (((x529==x530)|x531)+x532);

    if (t114 != 57253850U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x541 = -25;
	uint16_t x542 = UINT16_MAX;
	int8_t x543 = INT8_MAX;
	uint32_t t115 = 0U;

    t115 = (((x541==x542)|x543)+x544);

    if (t115 != 126U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x546 = -1;
	volatile uint16_t x547 = 89U;
	int32_t t116 = -34644425;

    t116 = (((x545==x546)|x547)+x548);

    if (t116 != 344) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x549 = 1;
	uint8_t x550 = UINT8_MAX;
	int8_t x551 = 2;
	int8_t x552 = -1;
	volatile int32_t t117 = -408;

    t117 = (((x549==x550)|x551)+x552);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x553 = INT32_MAX;
	volatile int8_t x554 = 26;
	static volatile int16_t x555 = INT16_MAX;
	volatile int16_t x556 = 34;

    t118 = (((x553==x554)|x555)+x556);

    if (t118 != 32801) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x557 = 126;
	static volatile uint32_t x558 = UINT32_MAX;
	volatile int64_t x559 = INT64_MAX;
	int16_t x560 = -1;
	static volatile int64_t t119 = 1557783LL;

    t119 = (((x557==x558)|x559)+x560);

    if (t119 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x561 = -1;
	static uint32_t x562 = UINT32_MAX;
	int8_t x563 = INT8_MIN;
	volatile int8_t x564 = INT8_MAX;
	volatile int32_t t120 = 590562311;

    t120 = (((x561==x562)|x563)+x564);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x565 = -1;
	static int32_t x566 = -3;
	uint32_t x567 = 5999U;
	uint32_t t121 = 14262521U;

    t121 = (((x565==x566)|x567)+x568);

    if (t121 != 5998U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x569 = -70960134;
	static uint16_t x570 = 22U;
	volatile uint32_t x571 = UINT32_MAX;

    t122 = (((x569==x570)|x571)+x572);

    if (t122 != 4294967167U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x573 = 2422U;
	int32_t x574 = INT32_MIN;
	uint16_t x575 = 1162U;
	static int16_t x576 = 0;
	int32_t t123 = 3979980;

    t123 = (((x573==x574)|x575)+x576);

    if (t123 != 1162) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x577 = -1;
	int8_t x578 = -1;
	int16_t x579 = -1;
	uint64_t x580 = 107228707330LLU;
	uint64_t t124 = 6117686LLU;

    t124 = (((x577==x578)|x579)+x580);

    if (t124 != 107228707329LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x581 = 105U;
	uint8_t x582 = UINT8_MAX;
	uint16_t x583 = UINT16_MAX;
	int16_t x584 = INT16_MIN;
	volatile int32_t t125 = -804903521;

    t125 = (((x581==x582)|x583)+x584);

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	int32_t x594 = -1;
	int32_t x596 = INT32_MAX;
	int64_t t126 = 62052289110LL;

    t126 = (((x593==x594)|x595)+x596);

    if (t126 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x597 = 27121991262LLU;
	volatile int8_t x598 = INT8_MIN;
	uint32_t x599 = 84903U;
	uint64_t x600 = 60794700117LLU;
	uint64_t t127 = 112289LLU;

    t127 = (((x597==x598)|x599)+x600);

    if (t127 != 60794785020LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = -1;
	static int32_t t128 = -84330929;

    t128 = (((x605==x606)|x607)+x608);

    if (t128 != 254) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x613 = INT32_MAX;
	static uint16_t x615 = 4U;
	uint32_t x616 = UINT32_MAX;
	uint32_t t129 = 547U;

    t129 = (((x613==x614)|x615)+x616);

    if (t129 != 3U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x617 = 2U;
	volatile uint64_t x618 = 94412429LLU;
	int8_t x619 = INT8_MIN;
	int64_t x620 = INT64_MAX;
	static int64_t t130 = 2323538772122025292LL;

    t130 = (((x617==x618)|x619)+x620);

    if (t130 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x622 = INT8_MIN;
	volatile uint64_t x623 = 116853149841098438LLU;
	int16_t x624 = 21;

    t131 = (((x621==x622)|x623)+x624);

    if (t131 != 116853149841098459LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x625 = INT32_MAX;
	int32_t x627 = 4198522;
	volatile uint8_t x628 = 9U;
	int32_t t132 = -29743219;

    t132 = (((x625==x626)|x627)+x628);

    if (t132 != 4198531) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x629 = INT32_MIN;
	static uint32_t x630 = UINT32_MAX;
	volatile uint32_t x631 = 100U;
	static int8_t x632 = -15;

    t133 = (((x629==x630)|x631)+x632);

    if (t133 != 85U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x633 = INT16_MAX;
	volatile int8_t x634 = INT8_MIN;
	volatile int32_t t134 = 19888357;

    t134 = (((x633==x634)|x635)+x636);

    if (t134 != -8) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x637 = INT16_MIN;
	uint32_t x638 = 483396U;
	static uint32_t x639 = 2074491953U;
	uint32_t t135 = 1214922U;

    t135 = (((x637==x638)|x639)+x640);

    if (t135 != 2074492208U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x641 = -21285824159428008LL;
	uint64_t x642 = 19LLU;
	static int64_t x643 = -2507962LL;
	volatile int8_t x644 = 1;
	volatile int64_t t136 = 204747487LL;

    t136 = (((x641==x642)|x643)+x644);

    if (t136 != -2507961LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x646 = -1LL;
	int64_t x647 = INT64_MIN;
	static volatile uint32_t x648 = UINT32_MAX;
	volatile int64_t t137 = 0LL;

    t137 = (((x645==x646)|x647)+x648);

    if (t137 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x650 = 12079U;
	static volatile int64_t x651 = INT64_MAX;
	int8_t x652 = INT8_MIN;
	volatile int64_t t138 = 257524537LL;

    t138 = (((x649==x650)|x651)+x652);

    if (t138 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x653 = UINT32_MAX;
	int32_t x655 = INT32_MIN;
	uint8_t x656 = 0U;

    t139 = (((x653==x654)|x655)+x656);

    if (t139 != -2147483647) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x657 = 3U;
	static int64_t x658 = 1140124LL;
	int8_t x659 = -1;
	int16_t x660 = -125;
	int32_t t140 = 13333;

    t140 = (((x657==x658)|x659)+x660);

    if (t140 != -126) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	static int64_t x662 = INT64_MIN;
	volatile int32_t x663 = 16426;
	static uint64_t x664 = 3570350434455694LLU;
	static volatile uint64_t t141 = 5406777LLU;

    t141 = (((x661==x662)|x663)+x664);

    if (t141 != 3570350434472120LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x666 = INT16_MIN;
	int16_t x667 = -17;
	uint64_t x668 = UINT64_MAX;
	uint64_t t142 = 257766279LLU;

    t142 = (((x665==x666)|x667)+x668);

    if (t142 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x669 = UINT16_MAX;
	uint8_t x670 = UINT8_MAX;
	uint8_t x671 = 0U;
	volatile uint32_t t143 = 270U;

    t143 = (((x669==x670)|x671)+x672);

    if (t143 != 4354759U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x673 = INT64_MIN;
	uint32_t x675 = 23689U;
	int16_t x676 = INT16_MIN;
	volatile uint32_t t144 = 261775247U;

    t144 = (((x673==x674)|x675)+x676);

    if (t144 != 4294958217U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x683 = -1;
	static uint16_t x684 = UINT16_MAX;
	static int32_t t145 = 354421;

    t145 = (((x681==x682)|x683)+x684);

    if (t145 != 65534) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x689 = 1266;
	uint32_t x690 = 356885U;
	int32_t x692 = -1;
	static int32_t t146 = -1;

    t146 = (((x689==x690)|x691)+x692);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x694 = INT64_MIN;
	uint16_t x695 = 0U;
	static volatile int32_t t147 = 7426792;

    t147 = (((x693==x694)|x695)+x696);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x697 = 1726319U;
	uint8_t x698 = UINT8_MAX;
	uint32_t x699 = 51U;
	int8_t x700 = INT8_MIN;
	uint32_t t148 = 647407368U;

    t148 = (((x697==x698)|x699)+x700);

    if (t148 != 4294967219U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x705 = INT64_MIN;
	uint32_t x706 = 887U;
	volatile uint8_t x707 = 1U;
	int64_t t149 = -1451085321LL;

    t149 = (((x705==x706)|x707)+x708);

    if (t149 != 3LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x711 = INT16_MIN;
	int64_t x712 = 5525LL;
	volatile int64_t t150 = -179214284354547152LL;

    t150 = (((x709==x710)|x711)+x712);

    if (t150 != -27243LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x718 = 1180U;
	int32_t x720 = INT32_MIN;
	volatile int32_t t151 = 256675729;

    t151 = (((x717==x718)|x719)+x720);

    if (t151 != -2147483638) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x721 = 2;
	int32_t x722 = -115255663;
	int8_t x723 = -1;
	volatile uint16_t x724 = 214U;
	int32_t t152 = -4;

    t152 = (((x721==x722)|x723)+x724);

    if (t152 != 213) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x726 = -1;
	int16_t x728 = INT16_MIN;
	int32_t t153 = 9196;

    t153 = (((x725==x726)|x727)+x728);

    if (t153 != -32769) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x729 = INT16_MAX;
	static uint8_t x730 = 78U;
	uint64_t x732 = 99731657LLU;
	static uint64_t t154 = 26008376021LLU;

    t154 = (((x729==x730)|x731)+x732);

    if (t154 != 9223372036954507464LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x733 = 86123U;
	static volatile int8_t x734 = INT8_MAX;
	int32_t x735 = -1;
	int32_t x736 = INT32_MAX;
	volatile int32_t t155 = -36627;

    t155 = (((x733==x734)|x735)+x736);

    if (t155 != 2147483646) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x738 = INT8_MIN;
	volatile int32_t x739 = 57984396;
	static int8_t x740 = -23;
	static int32_t t156 = 7;

    t156 = (((x737==x738)|x739)+x740);

    if (t156 != 57984373) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x742 = INT32_MAX;
	static int8_t x744 = 1;
	volatile int32_t t157 = 49217814;

    t157 = (((x741==x742)|x743)+x744);

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x746 = INT32_MAX;
	volatile int8_t x747 = -19;
	volatile int32_t x748 = -1;
	static volatile int32_t t158 = -440876942;

    t158 = (((x745==x746)|x747)+x748);

    if (t158 != -20) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x754 = INT16_MAX;
	uint64_t x755 = 137759751275658108LLU;
	volatile uint64_t t159 = 17629LLU;

    t159 = (((x753==x754)|x755)+x756);

    if (t159 != 9361131788130433915LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x757 = INT8_MAX;
	static uint32_t x758 = UINT32_MAX;
	volatile uint32_t x759 = 2988131U;
	int32_t x760 = INT32_MIN;
	volatile uint32_t t160 = 297330U;

    t160 = (((x757==x758)|x759)+x760);

    if (t160 != 2150471779U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x761 = -1;
	volatile int16_t x762 = INT16_MIN;
	int32_t x763 = INT32_MAX;
	int16_t x764 = -1499;
	volatile int32_t t161 = -1593;

    t161 = (((x761==x762)|x763)+x764);

    if (t161 != 2147482148) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x765 = 104U;
	volatile uint32_t x767 = UINT32_MAX;
	int16_t x768 = -3109;
	static volatile uint32_t t162 = 1275U;

    t162 = (((x765==x766)|x767)+x768);

    if (t162 != 4294964186U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x770 = -1;
	uint32_t x771 = 3U;
	static int64_t x772 = 26303606981613LL;
	volatile int64_t t163 = 0LL;

    t163 = (((x769==x770)|x771)+x772);

    if (t163 != 26303606981616LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x774 = INT32_MIN;
	uint16_t x776 = 61U;

    t164 = (((x773==x774)|x775)+x776);

    if (t164 != 316) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x777 = INT32_MIN;
	uint64_t x778 = 87406LLU;
	int64_t x779 = 1LL;
	static int8_t x780 = INT8_MIN;
	int64_t t165 = -21110713161192608LL;

    t165 = (((x777==x778)|x779)+x780);

    if (t165 != -127LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x781 = INT32_MIN;
	int64_t x782 = 86603474133LL;
	int32_t x783 = -285;
	int64_t x784 = INT64_MAX;

    t166 = (((x781==x782)|x783)+x784);

    if (t166 != 9223372036854775522LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x786 = 23;
	static int64_t x787 = -1LL;
	int32_t x788 = INT32_MAX;
	volatile int64_t t167 = -14968LL;

    t167 = (((x785==x786)|x787)+x788);

    if (t167 != 2147483646LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x793 = UINT32_MAX;
	volatile int32_t x796 = INT32_MIN;

    t168 = (((x793==x794)|x795)+x796);

    if (t168 != -2147483521) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x797 = UINT32_MAX;
	uint16_t x798 = UINT16_MAX;
	static int32_t x799 = -1;

    t169 = (((x797==x798)|x799)+x800);

    if (t169 != -2LL) { NG(); } else { ; }
	
}

void f170(void) {
    

    t170 = (((x801==x802)|x803)+x804);

    if (t170 != 143) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x809 = INT16_MAX;
	static volatile int8_t x810 = INT8_MAX;
	uint16_t x811 = 16619U;
	static uint64_t x812 = UINT64_MAX;
	volatile uint64_t t171 = 56LLU;

    t171 = (((x809==x810)|x811)+x812);

    if (t171 != 16618LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x813 = 269551049763427617LLU;
	static uint8_t x815 = 52U;
	static uint16_t x816 = 262U;
	int32_t t172 = 3372836;

    t172 = (((x813==x814)|x815)+x816);

    if (t172 != 314) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x818 = 3U;
	volatile int8_t x819 = INT8_MIN;

    t173 = (((x817==x818)|x819)+x820);

    if (t173 != 32639) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x825 = -1;
	volatile int8_t x826 = -4;
	int8_t x828 = INT8_MIN;
	static volatile int32_t t174 = -1;

    t174 = (((x825==x826)|x827)+x828);

    if (t174 != 2147483519) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x834 = INT8_MIN;
	volatile uint8_t x835 = 1U;
	int64_t x836 = 41225914659LL;

    t175 = (((x833==x834)|x835)+x836);

    if (t175 != 41225914660LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x837 = INT32_MAX;
	static volatile int64_t x838 = INT64_MIN;
	int16_t x839 = -14;
	volatile uint32_t x840 = 1309717406U;
	static uint32_t t176 = 15855U;

    t176 = (((x837==x838)|x839)+x840);

    if (t176 != 1309717392U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x841 = -4;
	uint16_t x842 = UINT16_MAX;
	int16_t x843 = INT16_MIN;

    t177 = (((x841==x842)|x843)+x844);

    if (t177 != 903487884584524239LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x845 = 2;
	int8_t x846 = 1;
	int32_t x847 = INT32_MIN;
	volatile uint64_t t178 = 1850458LLU;

    t178 = (((x845==x846)|x847)+x848);

    if (t178 != 2085713323LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x849 = UINT32_MAX;
	int64_t x850 = INT64_MAX;
	int16_t x851 = INT16_MIN;
	static int8_t x852 = 15;
	int32_t t179 = 0;

    t179 = (((x849==x850)|x851)+x852);

    if (t179 != -32753) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x853 = INT64_MAX;
	int8_t x854 = 0;
	int64_t x855 = -771045318LL;
	int64_t x856 = -1LL;
	int64_t t180 = 34480851269LL;

    t180 = (((x853==x854)|x855)+x856);

    if (t180 != -771045319LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x857 = 4107U;
	int64_t x858 = -1LL;
	uint64_t x859 = 5473710190895LLU;
	uint32_t x860 = UINT32_MAX;
	uint64_t t181 = 36920LLU;

    t181 = (((x857==x858)|x859)+x860);

    if (t181 != 5478005158190LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x861 = -1;
	uint8_t x862 = 3U;
	int16_t x863 = INT16_MIN;
	int32_t x864 = -2335;

    t182 = (((x861==x862)|x863)+x864);

    if (t182 != -35103) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x865 = INT16_MAX;
	int16_t x866 = INT16_MAX;
	int8_t x867 = INT8_MIN;
	static int64_t x868 = -1LL;
	static int64_t t183 = 457LL;

    t183 = (((x865==x866)|x867)+x868);

    if (t183 != -128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x869 = INT8_MAX;
	static uint64_t x870 = 370033170LLU;
	int8_t x872 = INT8_MAX;
	volatile uint32_t t184 = 60U;

    t184 = (((x869==x870)|x871)+x872);

    if (t184 != 12572U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x873 = INT64_MIN;
	volatile uint64_t x874 = 4881695147407745LLU;
	static volatile int16_t x875 = -905;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t185 = -36536;

    t185 = (((x873==x874)|x875)+x876);

    if (t185 != 64630) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x877 = INT64_MIN;
	int16_t x878 = INT16_MIN;
	int8_t x879 = 15;
	int32_t x880 = -1;
	volatile int32_t t186 = -114739773;

    t186 = (((x877==x878)|x879)+x880);

    if (t186 != 14) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x881 = UINT16_MAX;
	static uint64_t x882 = 28LLU;
	uint64_t x883 = UINT64_MAX;
	uint16_t x884 = UINT16_MAX;
	volatile uint64_t t187 = 75213431820LLU;

    t187 = (((x881==x882)|x883)+x884);

    if (t187 != 65534LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x885 = INT64_MIN;
	uint8_t x886 = 82U;
	static volatile int32_t x887 = -1;
	int16_t x888 = INT16_MIN;
	volatile int32_t t188 = -1090310;

    t188 = (((x885==x886)|x887)+x888);

    if (t188 != -32769) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = INT32_MAX;
	volatile int16_t x891 = INT16_MIN;
	volatile int32_t t189 = 968470;

    t189 = (((x889==x890)|x891)+x892);

    if (t189 != -32769) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x894 = 107U;
	static int64_t x896 = INT64_MIN;

    t190 = (((x893==x894)|x895)+x896);

    if (t190 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x897 = 2535305534177943LLU;
	volatile int8_t x899 = 1;
	volatile int64_t x900 = 44LL;
	volatile int64_t t191 = -213283LL;

    t191 = (((x897==x898)|x899)+x900);

    if (t191 != 45LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x901 = INT16_MIN;
	static int32_t x903 = -45;
	static uint8_t x904 = UINT8_MAX;
	volatile int32_t t192 = -5728648;

    t192 = (((x901==x902)|x903)+x904);

    if (t192 != 210) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = INT32_MAX;
	static uint8_t x906 = 2U;
	volatile int64_t t193 = 4LL;

    t193 = (((x905==x906)|x907)+x908);

    if (t193 != 9167125892541953623LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x917 = 21;
	volatile int16_t x918 = INT16_MAX;
	uint8_t x919 = 1U;
	uint32_t x920 = UINT32_MAX;
	uint32_t t194 = 492508U;

    t194 = (((x917==x918)|x919)+x920);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x921 = INT8_MAX;
	volatile int8_t x923 = -1;
	static uint16_t x924 = UINT16_MAX;
	volatile int32_t t195 = -74172;

    t195 = (((x921==x922)|x923)+x924);

    if (t195 != 65534) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x925 = INT64_MIN;
	uint64_t x926 = 313072990LLU;
	uint64_t x927 = 1992604927980925LLU;
	int64_t x928 = -1LL;
	uint64_t t196 = 361306009188LLU;

    t196 = (((x925==x926)|x927)+x928);

    if (t196 != 1992604927980924LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x929 = -1118LL;
	uint8_t x930 = 58U;
	uint32_t t197 = 3U;

    t197 = (((x929==x930)|x931)+x932);

    if (t197 != 2147483646U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x937 = 43U;
	volatile uint32_t x938 = UINT32_MAX;
	static int32_t x939 = 64118338;
	int32_t t198 = 139;

    t198 = (((x937==x938)|x939)+x940);

    if (t198 != 64118372) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x943 = INT8_MAX;
	volatile int8_t x944 = -1;
	volatile int32_t t199 = 4916168;

    t199 = (((x941==x942)|x943)+x944);

    if (t199 != 126) { NG(); } else { ; }
	
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

