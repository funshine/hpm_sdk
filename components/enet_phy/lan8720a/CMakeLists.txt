# Copyright (c) 2021-2023 HPMicro
# SPDX-License-Identifier: BSD-3-Clause

sdk_compile_definitions(-D__USE_LAN8720A=1)

sdk_inc(.)
sdk_inc(../)
sdk_src(hpm_lan8720a.c)
