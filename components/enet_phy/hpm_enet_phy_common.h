/*
 * Copyright (c) 2021-2023 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */
#ifndef HPM_ENET_PHY_COMMON_H
#define HPM_ENET_PHY_COMMON_H

#if defined(__USE_DP83867) && __USE_DP83867
    #include "hpm_dp83867.h"
    #include "hpm_dp83867_regs.h"
#endif

#if defined(__USE_RTL8211) && __USE_RTL8211
    #include "hpm_rtl8211.h"
#if defined(RTL8211FD) && RTL8211FD
    #include "hpm_rtl8211fd_regs.h"
#else
    #include "hpm_rtl8211_regs.h"
#endif
#endif

#if defined(__USE_DP83848) && __USE_DP83848
    #include "hpm_dp83848.h"
    #include "hpm_dp83848_regs.h"
#endif

#if defined(__USE_RTL8201) && __USE_RTL8201
    #include "hpm_rtl8201.h"
    #include "hpm_rtl8201_regs.h"
#endif

#if defined(__USE_LAN8720A) && __USE_LAN8720A
    #include "hpm_lan8720a.h"
    #include "hpm_lan8720a_regs.h"
#endif

#endif /* HPM_ENET_PHY_H */
