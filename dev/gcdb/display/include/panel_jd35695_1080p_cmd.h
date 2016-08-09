/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PANEL_JD35695_1080P_CMD_H_
#define _PANEL_JD35695_1080P_CMD_H_

/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config jd35695_1080p_cmd_panel_data = {
	"qcom,mdss_dsi_jd35695_1080p_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 1, "DISPLAY_1", 3, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution jd35695_1080p_cmd_panel_res = {
	1080, 1920, 100, 82, 8, 3, 7, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info jd35695_1080p_cmd_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char jd35695_1080p_cmd_on_cmd0[] = {
	0x01, 0x02, 0xFF, 0x10
// 	15 01 00 00 00 00 02 FF 10
};

/*
				      15 01 00 00 00 00 02 FF 10
				      15 01 00 00 00 00 02 35 00
				      39 01 00 00 00 00 05 2a 00 00 04 37
				      39 01 00 00 00 00 05 2b 00 00 07 7f

				      29 01 00 00 00 00 03 44 05 00
				      15 01 00 00 00 00 02 FF E0
				      15 01 00 00 00 00 02 B5 86
				      15 01 00 00 00 00 02 B6 77
				      15 01 00 00 00 00 02 B8 AD
				      15 01 00 00 00 00 02 FB 01
				      15 01 00 00 00 00 02 FF 10
*/

static char jd35695_1080p_cmd_on_cmd1[] = {
	0xb0, 0x03, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd2[] = {
	0x11, 0x00, 0x05, 0x80
};

static char jd35695_1080p_cmd_on_cmd3[] = {
	0x51, 0xff, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd4[] = {
	0x53, 0x24, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd5[] = {
	0xff, 0x23, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd6[] = {
	0x08, 0x05, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd7[] = {
	0x46, 0x90, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd8[] = {
	0xff, 0x10, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd9[] = {
	0xff, 0xf0, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd10[] = {
	0x92, 0x01, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd11[] = {
	0xff, 0x10, 0x15, 0x80
};

static char jd35695_1080p_cmd_on_cmd12[] = {
	0x29, 0x00, 0x05, 0x80
};


static struct mipi_dsi_cmd jd35695_1080p_cmd_on_command[] = {
	{0x4 , jd35695_1080p_cmd_on_cmd0, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd1, 0x00},
	{0x3 , jd35695_1080p_cmd_on_cmd2, 0x78},
	{0x4 , jd35695_1080p_cmd_on_cmd3, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd4, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd5, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd6, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd7, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd8, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd9, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd10, 0x00},
	{0x4 , jd35695_1080p_cmd_on_cmd11, 0x00},
	{0x3 , jd35695_1080p_cmd_on_cmd12, 0x28}
};

#define JD35695_1080P_CMD_ON_COMMAND 13


static char jd35695_1080p_cmdoff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char jd35695_1080p_cmdoff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jd35695_1080p_cmd_off_command[] = {
	{0x4 , jd35695_1080p_cmdoff_cmd0, 0},
	{0x4 , jd35695_1080p_cmdoff_cmd1, 0}
};

#define JD35695_1080P_CMD_OFF_COMMAND 2


static struct command_state jd35695_1080p_cmd_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info jd35695_1080p_cmd_command_panel = {
	0, 1, 1, 1, 1, 0x2c, 0x3c, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info jd35695_1080p_cmd_video_panel = {
	0, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration jd35695_1080p_cmd_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t jd35695_1080p_cmd_timings[] = {
	0xE7, 0x43, 0x37, 0x00, 0x60, 0x6C, 0x39, 0x45, 0x5b, 0x03, 0x04, 0x00
};

static struct panel_timing jd35695_1080p_cmd_timing_info = {
	0x0, 0x04, 0x20, 0x3e
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence jd35695_1080p_cmd_panel_reset_seq = {
	{ 1, 0, 1, }, { 10, 10, 10, }, 2
// dtsi:	<1 11>, <0 2>, <1 12>
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/
static struct backlight jd35695_1080p_cmd_backlight = {
	1, 1, 4095, 100, 1, "PMI8994"
};

#endif /*_PANEL_jd35695_1080P_CMD_H_*/
