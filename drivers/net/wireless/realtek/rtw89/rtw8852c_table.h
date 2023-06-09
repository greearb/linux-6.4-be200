/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/* Copyright(c) 2019-2022  Realtek Corporation
 */

#ifndef __RTW89_8852C_TABLE_H__
#define __RTW89_8852C_TABLE_H__

#include "core.h"

extern const struct rtw89_phy_table rtw89_8852c_phy_bb_table;
extern const struct rtw89_phy_table rtw89_8852c_phy_bb_gain_table;
extern const struct rtw89_phy_table rtw89_8852c_phy_radioa_table;
extern const struct rtw89_phy_table rtw89_8852c_phy_radiob_table;
extern const struct rtw89_phy_table rtw89_8852c_phy_nctl_table;
extern const struct rtw89_txpwr_table rtw89_8852c_byr_table;
extern const struct rtw89_phy_tssi_dbw_table rtw89_8852c_tssi_dbw_table;
extern const struct rtw89_txpwr_track_cfg rtw89_8852c_trk_cfg;
extern const u8 rtw89_8852c_tx_shape[RTW89_BAND_MAX][RTW89_RS_TX_SHAPE_NUM]
				    [RTW89_REGD_NUM];
extern const struct rtw89_rfe_parms rtw89_8852c_dflt_parms;

#endif
