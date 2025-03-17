/*
 * Copyright (c) 2023, Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.h =============
 *  Configured MSPM0 DriverLib module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSPM0L130X
 *  by the SysConfig tool.
 */
#ifndef ti_msp_dl_config_h
#define ti_msp_dl_config_h

#define CONFIG_MSPM0L130X
#define CONFIG_MSPM0L1306

#if defined(__ti_version__) || defined(__TI_COMPILER_VERSION__)
#define SYSCONFIG_WEAK __attribute__((weak))
#elif defined(__IAR_SYSTEMS_ICC__)
#define SYSCONFIG_WEAK __weak
#elif defined(__GNUC__)
#define SYSCONFIG_WEAK __attribute__((weak))
#endif

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/driverlib.h>
#include <ti/driverlib/m0p/dl_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform all required MSP DL initialization
 *
 *  This function should be called once at a point before any use of
 *  MSP DL.
 */


/* clang-format off */

#define POWER_STARTUP_DELAY                                                (16)


#define CPUCLK_FREQ                                                     32000000



/* Defines for PWM_0 */
#define PWM_0_INST                                                         TIMG1
#define PWM_0_INST_IRQHandler                                   TIMG1_IRQHandler
#define PWM_0_INST_INT_IRQN                                     (TIMG1_INT_IRQn)
#define PWM_0_INST_CLK_FREQ                                               250000
/* GPIO defines for channel 0 */
#define GPIO_PWM_0_C0_PORT                                                 GPIOA
#define GPIO_PWM_0_C0_PIN                                          DL_GPIO_PIN_7
#define GPIO_PWM_0_C0_IOMUX                                       (IOMUX_PINCM8)
#define GPIO_PWM_0_C0_IOMUX_FUNC                      IOMUX_PINCM8_PF_TIMG1_CCP0
#define GPIO_PWM_0_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_0_C1_PORT                                                 GPIOA
#define GPIO_PWM_0_C1_PIN                                          DL_GPIO_PIN_1
#define GPIO_PWM_0_C1_IOMUX                                       (IOMUX_PINCM2)
#define GPIO_PWM_0_C1_IOMUX_FUNC                      IOMUX_PINCM2_PF_TIMG1_CCP1
#define GPIO_PWM_0_C1_IDX                                    DL_TIMER_CC_1_INDEX

/* Defines for PWM_1 */
#define PWM_1_INST                                                         TIMG2
#define PWM_1_INST_IRQHandler                                   TIMG2_IRQHandler
#define PWM_1_INST_INT_IRQN                                     (TIMG2_INT_IRQn)
#define PWM_1_INST_CLK_FREQ                                              8000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_1_C0_PORT                                                 GPIOA
#define GPIO_PWM_1_C0_PIN                                          DL_GPIO_PIN_3
#define GPIO_PWM_1_C0_IOMUX                                       (IOMUX_PINCM4)
#define GPIO_PWM_1_C0_IOMUX_FUNC                      IOMUX_PINCM4_PF_TIMG2_CCP0
#define GPIO_PWM_1_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_1_C1_PORT                                                 GPIOA
#define GPIO_PWM_1_C1_PIN                                         DL_GPIO_PIN_22
#define GPIO_PWM_1_C1_IOMUX                                      (IOMUX_PINCM23)
#define GPIO_PWM_1_C1_IOMUX_FUNC                     IOMUX_PINCM23_PF_TIMG2_CCP1
#define GPIO_PWM_1_C1_IDX                                    DL_TIMER_CC_1_INDEX



/* Defines for TIMER_0 */
#define TIMER_0_INST                                                     (TIMG0)
#define TIMER_0_INST_IRQHandler                                 TIMG0_IRQHandler
#define TIMER_0_INST_INT_IRQN                                   (TIMG0_INT_IRQn)
#define TIMER_0_INST_LOAD_VALUE                                            (99U)




/* Port definition for Pin Group xuj_out1 */
#define xuj_out1_PORT                                                    (GPIOA)

/* Defines for PIN_9: GPIOA.27 with pinCMx 28 on package pin 31 */
#define xuj_out1_PIN_9_PIN                                      (DL_GPIO_PIN_27)
#define xuj_out1_PIN_9_IOMUX                                     (IOMUX_PINCM28)
/* Port definition for Pin Group xuj_out2 */
#define xuj_out2_PORT                                                    (GPIOA)

/* Defines for PIN_10: GPIOA.25 with pinCMx 26 on package pin 29 */
#define xuj_out2_PIN_10_PIN                                     (DL_GPIO_PIN_25)
#define xuj_out2_PIN_10_IOMUX                                    (IOMUX_PINCM26)
/* Port definition for Pin Group xuj_out3 */
#define xuj_out3_PORT                                                    (GPIOA)

/* Defines for PIN_11: GPIOA.24 with pinCMx 25 on package pin 28 */
#define xuj_out3_PIN_11_PIN                                     (DL_GPIO_PIN_24)
#define xuj_out3_PIN_11_IOMUX                                    (IOMUX_PINCM25)
/* Port definition for Pin Group xuj_out4 */
#define xuj_out4_PORT                                                    (GPIOA)

/* Defines for PIN_12: GPIOA.17 with pinCMx 18 on package pin 21 */
#define xuj_out4_PIN_12_PIN                                     (DL_GPIO_PIN_17)
#define xuj_out4_PIN_12_IOMUX                                    (IOMUX_PINCM18)
/* Port definition for Pin Group xuj_out5 */
#define xuj_out5_PORT                                                    (GPIOA)

/* Defines for PIN_13: GPIOA.18 with pinCMx 19 on package pin 22 */
#define xuj_out5_PIN_13_PIN                                     (DL_GPIO_PIN_18)
#define xuj_out5_PIN_13_IOMUX                                    (IOMUX_PINCM19)
/* Port definition for Pin Group BUZZER */
#define BUZZER_PORT                                                      (GPIOA)

/* Defines for PIN_8: GPIOA.2 with pinCMx 3 on package pin 6 */
#define BUZZER_PIN_8_PIN                                         (DL_GPIO_PIN_2)
#define BUZZER_PIN_8_IOMUX                                        (IOMUX_PINCM3)
/* Port definition for Pin Group AIN1 */
#define AIN1_PORT                                                        (GPIOA)

/* Defines for PIN_0: GPIOA.5 with pinCMx 6 on package pin 9 */
#define AIN1_PIN_0_PIN                                           (DL_GPIO_PIN_5)
#define AIN1_PIN_0_IOMUX                                          (IOMUX_PINCM6)
/* Defines for PIN_1: GPIOA.6 with pinCMx 7 on package pin 10 */
#define AIN1_PIN_1_PIN                                           (DL_GPIO_PIN_6)
#define AIN1_PIN_1_IOMUX                                          (IOMUX_PINCM7)
/* Port definition for Pin Group BIN */
#define BIN_PORT                                                         (GPIOA)

/* Defines for PIN_2: GPIOA.15 with pinCMx 16 on package pin 19 */
#define BIN_PIN_2_PIN                                           (DL_GPIO_PIN_15)
#define BIN_PIN_2_IOMUX                                          (IOMUX_PINCM16)
/* Defines for PIN_3: GPIOA.16 with pinCMx 17 on package pin 20 */
#define BIN_PIN_3_PIN                                           (DL_GPIO_PIN_16)
#define BIN_PIN_3_IOMUX                                          (IOMUX_PINCM17)
/* Port definition for Pin Group AIN2 */
#define AIN2_PORT                                                        (GPIOA)

/* Defines for PIN_4: GPIOA.11 with pinCMx 12 on package pin 15 */
#define AIN2_PIN_4_PIN                                          (DL_GPIO_PIN_11)
#define AIN2_PIN_4_IOMUX                                         (IOMUX_PINCM12)
/* Defines for PIN_5: GPIOA.10 with pinCMx 11 on package pin 14 */
#define AIN2_PIN_5_PIN                                          (DL_GPIO_PIN_10)
#define AIN2_PIN_5_IOMUX                                         (IOMUX_PINCM11)
/* Port definition for Pin Group BIN0 */
#define BIN0_PORT                                                        (GPIOA)

/* Defines for PIN_6: GPIOA.8 with pinCMx 9 on package pin 12 */
#define BIN0_PIN_6_PIN                                           (DL_GPIO_PIN_8)
#define BIN0_PIN_6_IOMUX                                          (IOMUX_PINCM9)
/* Defines for PIN_7: GPIOA.9 with pinCMx 10 on package pin 13 */
#define BIN0_PIN_7_PIN                                           (DL_GPIO_PIN_9)
#define BIN0_PIN_7_IOMUX                                         (IOMUX_PINCM10)



/* clang-format on */

void SYSCFG_DL_init(void);
void SYSCFG_DL_initPower(void);
void SYSCFG_DL_GPIO_init(void);
void SYSCFG_DL_SYSCTL_init(void);
void SYSCFG_DL_PWM_0_init(void);
void SYSCFG_DL_PWM_1_init(void);
void SYSCFG_DL_TIMER_0_init(void);

void SYSCFG_DL_SYSTICK_init(void);


#ifdef __cplusplus
}
#endif

#endif /* ti_msp_dl_config_h */
