/****************************************************************************
 * arch/xtensa/src/esp32s3/hardware/esp32s3_nrx.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_NRX_H
#define __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_NRX_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "esp32s3_soc.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Some of the WiFi RX control registers.
 * PU/PD fields defined here are used in sleep related functions.
 */

#define NRXPD_CTRL (DR_REG_NRX_BASE + 0x00d4)

#define NRX_CHAN_EST_FORCE_PU (BIT(7))
#define NRX_CHAN_EST_FORCE_PU_M (BIT(7))
#define NRX_CHAN_EST_FORCE_PU_V 1
#define NRX_CHAN_EST_FORCE_PU_S 7

#define NRX_CHAN_EST_FORCE_PD (BIT(6))
#define NRX_CHAN_EST_FORCE_PD_M (BIT(6))
#define NRX_CHAN_EST_FORCE_PD_V 1
#define NRX_CHAN_EST_FORCE_PD_S 6

#define NRX_RX_ROT_FORCE_PU (BIT(5))
#define NRX_RX_ROT_FORCE_PU_M (BIT(5))
#define NRX_RX_ROT_FORCE_PU_V 1
#define NRX_RX_ROT_FORCE_PU_S 5

#define NRX_RX_ROT_FORCE_PD (BIT(4))
#define NRX_RX_ROT_FORCE_PD_M (BIT(4))
#define NRX_RX_ROT_FORCE_PD_V 1
#define NRX_RX_ROT_FORCE_PD_S 4

#define NRX_VIT_FORCE_PU (BIT(3))
#define NRX_VIT_FORCE_PU_M (BIT(3))
#define NRX_VIT_FORCE_PU_V 1
#define NRX_VIT_FORCE_PU_S 3

#define NRX_VIT_FORCE_PD (BIT(2))
#define NRX_VIT_FORCE_PD_M (BIT(2))
#define NRX_VIT_FORCE_PD_V 1
#define NRX_VIT_FORCE_PD_S 2

#define NRX_DEMAP_FORCE_PU (BIT(1))
#define NRX_DEMAP_FORCE_PU_M (BIT(1))
#define NRX_DEMAP_FORCE_PU_V 1
#define NRX_DEMAP_FORCE_PU_S 1

#define NRX_DEMAP_FORCE_PD (BIT(0))
#define NRX_DEMAP_FORCE_PD_M (BIT(0))
#define NRX_DEMAP_FORCE_PD_V 1
#define NRX_DEMAP_FORCE_PD_S 0

#endif /* __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_NRX_H */
