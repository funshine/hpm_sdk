/*
 * Copyright (c) 2021-2023 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */


#ifndef HPM_LAN8720A_REGS_H
#define HPM_LAN8720A_REGS_H

typedef enum {
    LAN8720A_BMCR                        = 0,   /* 0x0: Basic Mode Control Register */
    LAN8720A_BMSR                        = 1,   /* 0x1: (Basic Mode Status Register */
    LAN8720A_PHYID1                      = 2,   /* 0x2: PHY Identifier Register 1 */
    LAN8720A_PHYID2                      = 3,   /* 0x3: PHY Identifier Register 2 */
    LAN8720A_PHYCTRL                     = 31,  /* 0x1F: PHY Specific Control Register */
} LAN8720A_REG_Type;


/* Bitfield definition for register: BMCR */
/*
 * RESET (RW/SC)
 *
* This bit sets the status and control registers of the PHY in the
 * default state. This bit is self-clearing.
 * 1: Software reset  0: Normal operation
 * Register 0 and register 1 will return to default values after a
 * software reset (set Bit15 to 1).
 * This action may change the internal PHY state and the state of the
 * physical link associated with the PHY.
 */
#define LAN8720A_BMCR_RESET_MASK  (0x8000U)
#define LAN8720A_BMCR_RESET_SHIFT (15U)
#define LAN8720A_BMCR_RESET_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_RESET_SHIFT) & LAN8720A_BMCR_RESET_MASK)
#define LAN8720A_BMCR_RESET_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_RESET_MASK) >> LAN8720A_BMCR_RESET_SHIFT)

/*
 * LOOPBACK (RW)
 *
 * This bit enables loopback of transmit data nibbles TXD3:0 to the
 * receive data path.
 * 1: Enable loopback  0: Normal operation
 */
#define LAN8720A_BMCR_LOOPBACK_MASK  (0x4000U)
#define LAN8720A_BMCR_LOOPBACK_SHIFT (14U)
#define LAN8720A_BMCR_LOOPBACK_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_LOOPBACK_SHIFT) & LAN8720A_BMCR_LOOPBACK_MASK)
#define LAN8720A_BMCR_LOOPBACK_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_LOOPBACK_MASK) >> LAN8720A_BMCR_LOOPBACK_SHIFT)

/*
 * SPEED0 (RW)
 *
 * This bit sets the network speed.
 * 1: 100Mbps  0: 10Mbps
 * After completing auto negotiation, this bit will reflect the speed
 * status.
 * 1: 100Base-T  0: 10Base-T
 * When 100Base-FX mode is enabled, this bit=1 and is read only.
 */
#define LAN8720A_BMCR_SPEED0_MASK  (0x2000U)
#define LAN8720A_BMCR_SPEED0_SHIFT (13U)
#define LAN8720A_BMCR_SPEED0_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_SPEED0_SHIFT) & LAN8720A_BMCR_SPEED0_MASK)
#define LAN8720A_BMCR_SPEED0_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_SPEED0_MASK) >> LAN8720A_BMCR_SPEED0_SHIFT)

/*
 * ANE (RW)
 *
 * This bit enables/disables the NWay auto-negotiation function.
 * 1: Enable auto-negotiation; bits 0:13 and 0:8 will be ignored
 * 0: Disable auto-negotiation; bits 0:13 and 0:8 will determine the
 * link speed and the data transfer mode, respectively
 * When 100Base-FX mode is enabled, this bit=0 and is read only.
 */
#define LAN8720A_BMCR_ANE_MASK  (0x1000U)
#define LAN8720A_BMCR_ANE_SHIFT (12U)
#define LAN8720A_BMCR_ANE_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_ANE_SHIFT) & LAN8720A_BMCR_ANE_MASK)
#define LAN8720A_BMCR_ANE_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_ANE_MASK) >> LAN8720A_BMCR_ANE_SHIFT)

/*
 * PWD (RW)
 *
 * This bit turns down the power of the PHY chip, including the
 * internal crystal oscillator circuit.
 * The MDC, MDIO is still alive for accessing the MAC.
 * 1: Power down  0: Normal operation
 */
#define LAN8720A_BMCR_PWD_MASK  (0x0800U)
#define LAN8720A_BMCR_PWD_SHIFT (11U)
#define LAN8720A_BMCR_PWD_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_PWD_SHIFT) & LAN8720A_BMCR_PWD_MASK)
#define LAN8720A_BMCR_PWD_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_PWD_MASK) >> LAN8720A_BMCR_PWD_SHIFT)

/*
 * ISOLATE (RW)
 *
 * 1: Electrically isolate the PHY from MII/GMII/RGMII/RSGMII.
 * PHY is still able to respond to MDC/MDIO.
 * 0: Normal operation
 */
#define LAN8720A_BMCR_ISOLATE_MASK  (0x0400U)
#define LAN8720A_BMCR_ISOLATE_SHIFT (10U)
#define LAN8720A_BMCR_ISOLATE_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_ISOLATE_SHIFT) & LAN8720A_BMCR_ISOLATE_MASK)
#define LAN8720A_BMCR_ISOLATE_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_ISOLATE_MASK) >> LAN8720A_BMCR_ISOLATE_SHIFT)

/*
 * RESTART_AN (RW/SC)
 *
 * This bit allows the NWay auto-negotiation function to be reset.
 * 1: Re-start auto-negotiation  0: Normal operation
 */
#define LAN8720A_BMCR_RESTART_AN_MASK  (0x0200U)
#define LAN8720A_BMCR_RESTART_AN_SHIFT (9U)
#define LAN8720A_BMCR_RESTART_AN_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_RESTART_AN_SHIFT) & LAN8720A_BMCR_RESTART_AN_MASK)
#define LAN8720A_BMCR_RESTART_AN_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_RESTART_AN_MASK) >> LAN8720A_BMCR_RESTART_AN_SHIFT)

/*
 * DUPLEX (RW)
 *
 * This bit sets the duplex mode if auto-negotiation is disabled (bit
 * 0:12=0).
 * 1: Full duplex  0: Half duplex
 * After completing auto-negotiation, this bit will reflect the duplex
 * status.
 * 1: Full duplex  0: Half duplex
 */
#define LAN8720A_BMCR_DUPLEX_MASK  (0x0100U)
#define LAN8720A_BMCR_DUPLEX_SHIFT (8U)
#define LAN8720A_BMCR_DUPLEX_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_DUPLEX_SHIFT) & LAN8720A_BMCR_DUPLEX_MASK)
#define LAN8720A_BMCR_DUPLEX_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_DUPLEX_MASK) >> LAN8720A_BMCR_DUPLEX_SHIFT)

/*
 * COLLISION_TEST (RW)
 *
 * Collision Test.
 * 1: Collision test enabled
 * 0: Normal operation
 * When set, this bit will cause the COL signal to be asserted in
 * response to the TXEN assertion within 512-bit times. The COL
 * signal will be de-asserted within 4-bit times in response to the
 * TXEN de-assertion.
 */
#define LAN8720A_BMCR_COLLISION_TEST_MASK  (0x0080U)
#define LAN8720A_BMCR_COLLISION_TEST_SHIFT (7U)
#define LAN8720A_BMCR_COLLISION_TEST_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_COLLISION_TEST_SHIFT) & LAN8720A_BMCR_COLLISION_TEST_MASK)
#define LAN8720A_BMCR_COLLISION_TEST_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_COLLISION_TEST_MASK) >> LAN8720A_BMCR_COLLISION_TEST_SHIFT)

/*
 * SPEED1 (RW)
 *
 * Speed Select Bit 1.
 * Refer to bit 13.
 */
#define LAN8720A_BMCR_SPEED1_MASK  (0x0040U)
#define LAN8720A_BMCR_SPEED1_SHIFT (6U)
#define LAN8720A_BMCR_SPEED1_SET(x) (((uint16_t)(x) << LAN8720A_BMCR_SPEED1_SHIFT) & LAN8720A_BMCR_SPEED1_MASK)
#define LAN8720A_BMCR_SPEED1_GET(x) (((uint16_t)(x) & LAN8720A_BMCR_SPEED1_MASK) >> LAN8720A_BMCR_SPEED1_SHIFT)

/* Bitfield definition for register: BMSR */
/*
 * 100BASE_T4 (RO)
 *
 * 1: Enable 100Base-T4 support
 * 0: Suppress 100Base-T4 support
 */
#define LAN8720A_BMSR_100BASE_T4_MASK (0x8000U)
#define LAN8720A_BMSR_100BASE_T4_SHIFT (15U)
#define LAN8720A_BMSR_100BASE_T4_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_100BASE_T4_MASK) >> LAN8720A_BMSR_100BASE_T4_SHIFT)

/*
 * 100BASE_TX_FULL (RO)
 *
 * 1: Enable 100Base-TX full duplex support
 * 0: Suppress 100Base-TX full duplex support
 */
#define LAN8720A_BMSR_100BASE_TX_FULL_MASK (0x4000U)
#define LAN8720A_BMSR_100BASE_TX_FULL_SHIFT (14U)
#define LAN8720A_BMSR_100BASE_TX_FULL_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_100BASE_TX_FULL_MASK) >> LAN8720A_BMSR_100BASE_TX_FULL_SHIFT)

/*
 * 100BASE_TX_HALF (RO)
 *
 * 1: Enable 100Base-TX half duplex support
 * 0: Suppress 100Base-TX half duplex support
 */
#define LAN8720A_BMSR_100BASE_TX_HALF_MASK (0x2000U)
#define LAN8720A_BMSR_100BASE_TX_HALF_SHIFT (13U)
#define LAN8720A_BMSR_100BASE_TX_HALF_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_100BASE_TX_HALF_MASK) >> LAN8720A_BMSR_100BASE_TX_HALF_SHIFT)

/*
 * 10BASE_T_FULL (RO)
 *
 * 1: Enable 10Base-T full duplex support
 * 0: Suppress 10Base-T full duplex support
 */
#define LAN8720A_BMSR_10BASE_T_FULL_MASK (0x1000U)
#define LAN8720A_BMSR_10BASE_T_FULL_SHIFT (12U)
#define LAN8720A_BMSR_10BASE_T_FULL_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_10BASE_T_FULL_MASK) >> LAN8720A_BMSR_10BASE_T_FULL_SHIFT)

/*
 * 10BASE_T_HALF (RO)
 *
 * 1: Enable 10Base-T half duplex support
 * 0: Suppress 10Base-T half duplex support
 */
#define LAN8720A_BMSR_10BASE_T_HALF_MASK (0x800U)
#define LAN8720A_BMSR_10BASE_T_HALF_SHIFT (11U)
#define LAN8720A_BMSR_10BASE_T_HALF_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_10BASE_T_HALF_MASK) >> LAN8720A_BMSR_10BASE_T_HALF_SHIFT)

/*
 * PREAMBLE_SUPPRESSION (RO)
 *
 * The LAN8720AF/FL/FN will accept management frames
 * with preamble suppressed.
 * A minimum of 32 preamble bits are required for the first
 * management interface read/write transaction after reset.
 * One idle bit is required between any two management
 * transactions as per IEEE 802.3u specifications.
 */
#define LAN8720A_BMSR_PREAMBLE_SUPPRESSION_MASK (0x40U)
#define LAN8720A_BMSR_PREAMBLE_SUPPRESSION_SHIFT (6U)
#define LAN8720A_BMSR_PREAMBLE_SUPPRESSION_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_PREAMBLE_SUPPRESSION_MASK) >> LAN8720A_BMSR_PREAMBLE_SUPPRESSION_SHIFT)

/*
 * AUTO_NEGOTIATION_COMPLETE (RO)
 *
 * 1: Auto-negotiation process completed
 * 0: Auto-negotiation process not completed
 */
#define LAN8720A_BMSR_AUTO_NEGOTIATION_COMPLETE_MASK (0x20U)
#define LAN8720A_BMSR_AUTO_NEGOTIATION_COMPLETE_SHIFT (5U)
#define LAN8720A_BMSR_AUTO_NEGOTIATION_COMPLETE_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_AUTO_NEGOTIATION_COMPLETE_MASK) >> LAN8720A_BMSR_AUTO_NEGOTIATION_COMPLETE_SHIFT)

/*
 * REMOTE_FAULT (RC)
 *
 * 1: Remote fault condition detected (cleared on read)
 * 0: No remote fault condition detected
 * When in 100Base-FX mode, this bit means an in-band
 * signal Far-End-Fault has been detected (see 8.10 Far End
 * Fault Indication, page 39).
 */
#define LAN8720A_BMSR_REMOTE_FAULT_MASK (0x10U)
#define LAN8720A_BMSR_REMOTE_FAULT_SHIFT (4U)
#define LAN8720A_BMSR_REMOTE_FAULT_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_REMOTE_FAULT_MASK) >> LAN8720A_BMSR_REMOTE_FAULT_SHIFT)

/*
 * AUTO_NEGOTIATION_ABILITY (RO)
 *
 * 1: PHY is able to perform auto-negotiation
 * 0: PHY is not able to perform auto-negotiation
 */
#define LAN8720A_BMSR_AUTO_NEGOTIATION_ABILITY_MASK (0x8U)
#define LAN8720A_BMSR_AUTO_NEGOTIATION_ABILITY_SHIFT (3U)
#define LAN8720A_BMSR_AUTO_NEGOTIATION_ABILITY_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_AUTO_NEGOTIATION_ABILITY_MASK) >> LAN8720A_BMSR_AUTO_NEGOTIATION_ABILITY_SHIFT)

/*
 * LINK_STATUS (RO)
 *
 * 1: Valid link established
 * 0: No valid link established
 * This bit indicates whether the link was lost since the last
 * read. For the current link status, read this register twice.
 */
#define LAN8720A_BMSR_LINK_STATUS_MASK (0x4U)
#define LAN8720A_BMSR_LINK_STATUS_SHIFT (2U)
#define LAN8720A_BMSR_LINK_STATUS_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_LINK_STATUS_MASK) >> LAN8720A_BMSR_LINK_STATUS_SHIFT)

/*
 * JABBER_DETECT (RO)
 *
 * 1: Jabber condition detected
 * 0: No jabber condition detected
 */
#define LAN8720A_BMSR_JABBER_DETECT_MASK (0x2U)
#define LAN8720A_BMSR_JABBER_DETECT_SHIFT (1U)
#define LAN8720A_BMSR_JABBER_DETECT_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_JABBER_DETECT_MASK) >> LAN8720A_BMSR_JABBER_DETECT_SHIFT)

/*
 * EXTENDED_CAPABILITY (RO)
 *
 * 1: Extended register capable (permanently=1)
 * 0: Not extended register capable
 */
#define LAN8720A_BMSR_EXTENDED_CAPABILITY_MASK (0x1U)
#define LAN8720A_BMSR_EXTENDED_CAPABILITY_SHIFT (0U)
#define LAN8720A_BMSR_EXTENDED_CAPABILITY_GET(x) (((uint16_t)(x) & LAN8720A_BMSR_EXTENDED_CAPABILITY_MASK) >> LAN8720A_BMSR_EXTENDED_CAPABILITY_SHIFT)

/* Bitfield definition for register: PHYID1 */
/*
 * OUI_MSB (RO)
 *
 * Composed of the 6 th  to 21 st  bits of the Organizationally Unique
 * Identifier (OUI), respectively.
 */
#define LAN8720A_PHYID1_OUI_MSB_MASK  (0xFFFFU)
#define LAN8720A_PHYID1_OUI_MSB_SHIFT (0U)
#define LAN8720A_PHYID1_OUI_MSB_GET(x) (((uint16_t)(x) & LAN8720A_PHYID1_OUI_MSB_MASK) >> LAN8720A_PHYID1_OUI_MSB_SHIFT)

/* Bitfield definition for register: PHYID2 */
/*
 * OUI_LSB (RO)
 *
 * Assigned to the 0 through 5 th  bits of the OUI.  RO  110010
 */
#define LAN8720A_PHYID2_OUI_LSB_MASK  (0xFC00U)
#define LAN8720A_PHYID2_OUI_LSB_SHIFT (10U)
#define LAN8720A_PHYID2_OUI_LSB_GET(x) (((uint16_t)(x) & LAN8720A_PHYID2_OUI_LSB_MASK) >> LAN8720A_PHYID2_OUI_LSB_SHIFT)

/*
 * MODEL_NUMBER (RO)
 *
 * Model Number
 */
#define LAN8720A_PHYID2_MODEL_NUMBER_MASK (0x3F0U)
#define LAN8720A_PHYID2_MODEL_NUMBER_SHIFT (4U)
#define LAN8720A_PHYID2_MODEL_NUMBER_GET(x) (((uint16_t)(x) & LAN8720A_PHYID2_MODEL_NUMBER_MASK) >> LAN8720A_PHYID2_MODEL_NUMBER_SHIFT)

/*
 * REVISION_NUMBER (RO)
 *
 * Revision Number
 */
#define LAN8720A_PHYID2_REVISION_NUMBER_MASK (0xFU)
#define LAN8720A_PHYID2_REVISION_NUMBER_SHIFT (0U)
#define LAN8720A_PHYID2_REVISION_NUMBER_GET(x) (((uint16_t)(x) & LAN8720A_PHYID2_REVISION_NUMBER_MASK) >> LAN8720A_PHYID2_REVISION_NUMBER_SHIFT)

/* Bitfield definition for register: PHYCTRL */
/*
 * PHYCTRL (RW)
 *
 * PHY Special Control/Status Register
 */
#define LAN8720A_PHYCTRL_HCDSPEED_MASK (0x001CU)
#define LAN8720A_PHYCTRL_HCDSPEED_SHIFT (2U)
#define LAN8720A_PHYCTRL_HCDSPEED_GET(x) (((uint16_t)(x) & LAN8720A_PHYCTRL_HCDSPEED_MASK) >> LAN8720A_PHYCTRL_HCDSPEED_SHIFT)

/*
 * SPEED (RO)
 *
 * Revision Number
 */
#define LAN8720A_PHYCTRL_SPEED_MASK (0x000CU)
#define LAN8720A_PHYCTRL_SPEED_SHIFT (2U)
#define LAN8720A_PHYCTRL_SPEED_GET(x) (((uint16_t)(x) & LAN8720A_PHYCTRL_SPEED_MASK) >> LAN8720A_PHYCTRL_SPEED_SHIFT)


/*
 * SPEED (RO)
 *
 * Revision Number
 */
#define LAN8720A_PHYCTRL_DUPLEX_MASK (0x0010U)
#define LAN8720A_PHYCTRL_DUPLEX_SHIFT (4U)
#define LAN8720A_PHYCTRL_DUPLEX_GET(x) (((uint16_t)(x) & LAN8720A_PHYCTRL_DUPLEX_MASK) >> LAN8720A_PHYCTRL_DUPLEX_SHIFT)

#endif /* LAN8720A_REGS_H */
