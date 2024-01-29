/*
 * Copyright (c) 2021-2023 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef HPM_LAN8720A_H
#define HPM_LAN8720A_H

/*---------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------
 */
#include "hpm_enet_phy.h"
#include "hpm_common.h"
#include "hpm_enet_regs.h"
/*---------------------------------------------------------------------
 *  Macro Const Definitions
 *---------------------------------------------------------------------
 */
#ifndef LAN8720A_ADDR
#define LAN8720A_ADDR (0U)
#endif

#define LAN8720A_ID1  (0x07U)
#define LAN8720A_ID2  (0x30U)

/*---------------------------------------------------------------------
 *  Typedef Struct Declarations
 *---------------------------------------------------------------------
 */
typedef struct {
    bool loopback;
    uint8_t speed;
    bool auto_negotiation;
    uint8_t duplex;
} lan8720a_config_t;

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */
/*---------------------------------------------------------------------
 * Exported Functions
 *---------------------------------------------------------------------
 */
void lan8720a_reset(ENET_Type *ptr);
void lan8720a_basic_mode_default_config(ENET_Type *ptr, lan8720a_config_t *config);
bool lan8720a_basic_mode_init(ENET_Type *ptr, lan8720a_config_t *config);
void lan8720a_get_phy_status(ENET_Type *ptr, enet_phy_status_t *status);

#if defined(__cplusplus)
}
#endif /* __cplusplus */
#endif /* HPM_LAN8720A_H */
