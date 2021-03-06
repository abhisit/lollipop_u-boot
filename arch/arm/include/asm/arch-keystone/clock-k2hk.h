/*
 * K2HK: Clock management APIs
 *
 * (C) Copyright 2012-2014
 *     Texas Instruments Incorporated, <www.ti.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __ASM_ARCH_CLOCK_K2HK_H
#define __ASM_ARCH_CLOCK_K2HK_H

enum ext_clk_e {
	sys_clk,
	alt_core_clk,
	pa_clk,
	tetris_clk,
	ddr3a_clk,
	ddr3b_clk,
	mcm_clk,
	pcie_clk,
	sgmii_srio_clk,
	xgmii_clk,
	usb_clk,
	rp1_clk,
	ext_clk_count /* number of external clocks */
};

extern unsigned int external_clk[ext_clk_count];

enum clk_e {
	core_pll_clk,
	pass_pll_clk,
	tetris_pll_clk,
	ddr3a_pll_clk,
	ddr3b_pll_clk,
	sys_clk0_clk,
	sys_clk0_1_clk,
	sys_clk0_2_clk,
	sys_clk0_3_clk,
	sys_clk0_4_clk,
	sys_clk0_6_clk,
	sys_clk0_8_clk,
	sys_clk0_12_clk,
	sys_clk0_24_clk,
	sys_clk1_clk,
	sys_clk1_3_clk,
	sys_clk1_4_clk,
	sys_clk1_6_clk,
	sys_clk1_12_clk,
	sys_clk2_clk,
	sys_clk3_clk
};

#define KS2_CLK1_6 sys_clk0_6_clk

/* PLL identifiers */
enum pll_type_e {
	CORE_PLL,
	PASS_PLL,
	TETRIS_PLL,
	DDR3A_PLL,
	DDR3B_PLL,
};

enum {
	SPD800,
	SPD1000,
	SPD1200,
	SPD1350,
	SPD1400,
	SPD_RSV
};

#define CORE_PLL_799    {CORE_PLL,	13,	1,	2}
#define CORE_PLL_983    {CORE_PLL,	16,	1,	2}
#define CORE_PLL_999	{CORE_PLL,	122,	15,	1}
#define CORE_PLL_1167   {CORE_PLL,	19,	1,	2}
#define CORE_PLL_1228   {CORE_PLL,	20,	1,	2}
#define CORE_PLL_1200	{CORE_PLL,	625,	32,	2}
#define PASS_PLL_1228   {PASS_PLL,	20,	1,	2}
#define PASS_PLL_983    {PASS_PLL,	16,	1,	2}
#define PASS_PLL_1050   {PASS_PLL,	205,    12,	2}
#define TETRIS_PLL_500  {TETRIS_PLL,	8,	1,	2}
#define TETRIS_PLL_750  {TETRIS_PLL,	12,	1,	2}
#define TETRIS_PLL_800	{TETRIS_PLL,	32,	5,	1}
#define TETRIS_PLL_687  {TETRIS_PLL,	11,	1,	2}
#define TETRIS_PLL_625  {TETRIS_PLL,	10,	1,	2}
#define TETRIS_PLL_812  {TETRIS_PLL,	13,	1,	2}
#define TETRIS_PLL_875  {TETRIS_PLL,	14,	1,	2}
#define TETRIS_PLL_1000	{TETRIS_PLL,	40,	5,	1}
#define TETRIS_PLL_1188 {TETRIS_PLL,	19,	2,	1}
#define TETRIS_PLL_1200 {TETRIS_PLL,	48,	5,	1}
#define TETRIS_PLL_1350	{TETRIS_PLL,	54,	5,	1}
#define TETRIS_PLL_1375 {TETRIS_PLL,	22,	2,	1}
#define TETRIS_PLL_1400 {TETRIS_PLL,	56,	5,	1}
#define DDR3_PLL_200(x)	{DDR3##x##_PLL,	4,	1,	2}
#define DDR3_PLL_400(x)	{DDR3##x##_PLL,	16,	1,	4}
#define DDR3_PLL_800(x)	{DDR3##x##_PLL,	16,	1,	2}
#define DDR3_PLL_333(x)	{DDR3##x##_PLL,	20,	1,	6}

#endif
