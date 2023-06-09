/*
 * SPDX-FileCopyrightText: 2020-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_IO_MUX_REG_H_
#define _SOC_IO_MUX_REG_H_

#include "soc/soc.h"

/* The following are the bit fields for PERIPHS_IO_MUX_x_U registers */
/* Output enable in sleep mode */
#define SLP_OE (BIT(0))
#define SLP_OE_M (BIT(0))
#define SLP_OE_V 1
#define SLP_OE_S 0
/* Pin used for wakeup from sleep */
#define SLP_SEL (BIT(1))
#define SLP_SEL_M (BIT(1))
#define SLP_SEL_V 1
#define SLP_SEL_S 1
/* Pulldown enable in sleep mode */
#define SLP_PD (BIT(2))
#define SLP_PD_M (BIT(2))
#define SLP_PD_V 1
#define SLP_PD_S 2
/* Pullup enable in sleep mode */
#define SLP_PU (BIT(3))
#define SLP_PU_M (BIT(3))
#define SLP_PU_V 1
#define SLP_PU_S 3
/* Input enable in sleep mode */
#define SLP_IE (BIT(4))
#define SLP_IE_M (BIT(4))
#define SLP_IE_V 1
#define SLP_IE_S 4
/* Drive strength in sleep mode */
#define SLP_DRV 0x3
#define SLP_DRV_M (SLP_DRV_V << SLP_DRV_S)
#define SLP_DRV_V 0x3
#define SLP_DRV_S 5
/* Pulldown enable */
#define FUN_PD (BIT(7))
#define FUN_PD_M (BIT(7))
#define FUN_PD_V 1
#define FUN_PD_S 7
/* Pullup enable */
#define FUN_PU (BIT(8))
#define FUN_PU_M (BIT(8))
#define FUN_PU_V 1
#define FUN_PU_S 8
/* Input enable */
#define FUN_IE (BIT(9))
#define FUN_IE_M (FUN_IE_V << FUN_IE_S)
#define FUN_IE_V 1
#define FUN_IE_S 9
/* Drive strength */
#define FUN_DRV 0x3
#define FUN_DRV_M (FUN_DRV_V << FUN_DRV_S)
#define FUN_DRV_V 0x3
#define FUN_DRV_S 10
/* Function select (possible values are defined for each pin as FUNC_pinname_function below) */
#define MCU_SEL 0x7
#define MCU_SEL_M (MCU_SEL_V << MCU_SEL_S)
#define MCU_SEL_V 0x7
#define MCU_SEL_S 12

#define PIN_SLP_INPUT_ENABLE(PIN_NAME)      SET_PERI_REG_MASK(PIN_NAME,SLP_IE)
#define PIN_SLP_INPUT_DISABLE(PIN_NAME)     CLEAR_PERI_REG_MASK(PIN_NAME,SLP_IE)
#define PIN_SLP_OUTPUT_ENABLE(PIN_NAME)     SET_PERI_REG_MASK(PIN_NAME,SLP_OE)
#define PIN_SLP_OUTPUT_DISABLE(PIN_NAME)    CLEAR_PERI_REG_MASK(PIN_NAME,SLP_OE)
#define PIN_SLP_PULLUP_ENABLE(PIN_NAME)     SET_PERI_REG_MASK(PIN_NAME,SLP_PU)
#define PIN_SLP_PULLUP_DISABLE(PIN_NAME)    CLEAR_PERI_REG_MASK(PIN_NAME,SLP_PU)
#define PIN_SLP_PULLDOWN_ENABLE(PIN_NAME)   SET_PERI_REG_MASK(PIN_NAME,SLP_PD)
#define PIN_SLP_PULLDOWN_DISABLE(PIN_NAME)  CLEAR_PERI_REG_MASK(PIN_NAME,SLP_PD)
#define PIN_SLP_SEL_ENABLE(PIN_NAME)        SET_PERI_REG_MASK(PIN_NAME,SLP_SEL)
#define PIN_SLP_SEL_DISABLE(PIN_NAME)       CLEAR_PERI_REG_MASK(PIN_NAME,SLP_SEL)


#define PIN_INPUT_ENABLE(PIN_NAME)               SET_PERI_REG_MASK(PIN_NAME,FUN_IE)
#define PIN_INPUT_DISABLE(PIN_NAME)              CLEAR_PERI_REG_MASK(PIN_NAME,FUN_IE)
#define PIN_SET_DRV(PIN_NAME, drv)            REG_SET_FIELD(PIN_NAME, FUN_DRV, (drv));
#define PIN_PULLUP_DIS(PIN_NAME)                 REG_CLR_BIT(PIN_NAME, FUN_PU)
#define PIN_PULLUP_EN(PIN_NAME)                  REG_SET_BIT(PIN_NAME, FUN_PU)
#define PIN_PULLDWN_DIS(PIN_NAME)             REG_CLR_BIT(PIN_NAME, FUN_PD)
#define PIN_PULLDWN_EN(PIN_NAME)              REG_SET_BIT(PIN_NAME, FUN_PD)
#define PIN_FUNC_SELECT(PIN_NAME, FUNC)      REG_SET_FIELD(PIN_NAME, MCU_SEL, FUNC)

#define IO_MUX_GPIO0_REG        PERIPHS_IO_MUX_XTAL_32K_P_U
#define IO_MUX_GPIO1_REG        PERIPHS_IO_MUX_XTAL_32K_N_U
#define IO_MUX_GPIO2_REG        PERIPHS_IO_MUX_GPIO2_U
#define IO_MUX_GPIO3_REG        PERIPHS_IO_MUX_GPIO3_U
#define IO_MUX_GPIO4_REG        PERIPHS_IO_MUX_MTMS_U
#define IO_MUX_GPIO5_REG        PERIPHS_IO_MUX_MTDI_U
#define IO_MUX_GPIO6_REG        PERIPHS_IO_MUX_MTCK_U
#define IO_MUX_GPIO7_REG        PERIPHS_IO_MUX_MTDO_U
#define IO_MUX_GPIO8_REG        PERIPHS_IO_MUX_GPIO8_U
#define IO_MUX_GPIO9_REG        PERIPHS_IO_MUX_GPIO9_U
#define IO_MUX_GPIO10_REG       PERIPHS_IO_MUX_GPIO10_U
#define IO_MUX_GPIO11_REG       PERIPHS_IO_MUX_VDD_SPI_U
#define IO_MUX_GPIO12_REG       PERIPHS_IO_MUX_SPIHD_U
#define IO_MUX_GPIO13_REG       PERIPHS_IO_MUX_SPIWP_U
#define IO_MUX_GPIO14_REG       PERIPHS_IO_MUX_SPICS0_U
#define IO_MUX_GPIO15_REG       PERIPHS_IO_MUX_SPICLK_U
#define IO_MUX_GPIO16_REG       PERIPHS_IO_MUX_SPID_U
#define IO_MUX_GPIO17_REG       PERIPHS_IO_MUX_SPIQ_U
#define IO_MUX_GPIO18_REG       PERIPHS_IO_MUX_GPIO18_U
#define IO_MUX_GPIO19_REG       PERIPHS_IO_MUX_GPIO19_U
#define IO_MUX_GPIO20_REG       PERIPHS_IO_MUX_U0RXD_U
#define IO_MUX_GPIO21_REG       PERIPHS_IO_MUX_U0TXD_U
#define IO_MUX_GPIO22_REG       PERIPHS_IO_MUX_GPIO22_U
#define IO_MUX_GPIO23_REG       PERIPHS_IO_MUX_GPIO23_U
#define IO_MUX_GPIO24_REG       PERIPHS_IO_MUX_GPIO24_U
#define IO_MUX_GPIO25_REG       PERIPHS_IO_MUX_GPIO25_U
#define IO_MUX_GPIO26_REG       PERIPHS_IO_MUX_GPIO26_U
#define IO_MUX_GPIO27_REG       PERIPHS_IO_MUX_GPIO27_U
#define IO_MUX_GPIO28_REG       PERIPHS_IO_MUX_GPIO28_U
#define IO_MUX_GPIO29_REG       PERIPHS_IO_MUX_GPIO29_U
#define IO_MUX_GPIO30_REG       PERIPHS_IO_MUX_GPIO30_U
#define IO_MUX_GPIO31_REG       PERIPHS_IO_MUX_GPIO31_U
#define IO_MUX_GPIO32_REG       PERIPHS_IO_MUX_GPIO32_U
#define IO_MUX_GPIO33_REG       PERIPHS_IO_MUX_GPIO33_U
#define IO_MUX_GPIO34_REG       PERIPHS_IO_MUX_GPIO34_U
#define IO_MUX_GPIO35_REG       PERIPHS_IO_MUX_GPIO35_U
#define IO_MUX_GPIO36_REG       PERIPHS_IO_MUX_GPIO36_U
#define IO_MUX_GPIO37_REG       PERIPHS_IO_MUX_GPIO37_U
#define IO_MUX_GPIO38_REG       PERIPHS_IO_MUX_GPIO38_U
#define IO_MUX_GPIO39_REG       PERIPHS_IO_MUX_GPIO39_U
#define IO_MUX_GPIO40_REG       PERIPHS_IO_MUX_GPIO40_U

/* Value to set in IO Mux to use a pin as GPIO. */
#define PIN_FUNC_GPIO								1

#define GPIO_PAD_PULLUP(num) do{PIN_PULLDWN_DIS(IOMUX_REG_GPIO##num);PIN_PULLUP_EN(IOMUX_REG_GPIO##num);}while(0)
#define GPIO_PAD_PULLDOWN(num) do{PIN_PULLUP_DIS(IOMUX_REG_GPIO##num);PIN_PULLDWN_EN(IOMUX_REG_GPIO##num);}while(0)
#define GPIO_PAD_SET_DRV(num, drv) PIN_SET_DRV(IOMUX_REG_GPIO##num, drv)

#define SPI_HD_GPIO_NUM  12
#define SPI_WP_GPIO_NUM  13
#define SPI_CS0_GPIO_NUM 14
#define SPI_CLK_GPIO_NUM 15
#define SPI_D_GPIO_NUM   16
#define SPI_Q_GPIO_NUM   17

#define SD_CLK_GPIO_NUM 12
#define SD_CMD_GPIO_NUM 11
#define SD_DATA0_GPIO_NUM 13
#define SD_DATA1_GPIO_NUM 14
#define SD_DATA2_GPIO_NUM 9
#define SD_DATA3_GPIO_NUM 10

#define MAX_RTC_GPIO_NUM 5
#define MAX_PAD_GPIO_NUM 40
#define MAX_GPIO_NUM    44

#define REG_IO_MUX_BASE DR_REG_IO_MUX_BASE
#define PIN_CTRL                          (REG_IO_MUX_BASE +0x00)
#define PAD_POWER_SEL                               BIT(15)
#define PAD_POWER_SEL_V                             0x1
#define PAD_POWER_SEL_M                             BIT(15)
#define PAD_POWER_SEL_S                             15


#define PAD_POWER_SWITCH_DELAY                      0x7
#define PAD_POWER_SWITCH_DELAY_V                    0x7
#define PAD_POWER_SWITCH_DELAY_M                    (PAD_POWER_SWITCH_DELAY_V << PAD_POWER_SWITCH_DELAY_S)
#define PAD_POWER_SWITCH_DELAY_S                    12


#define CLK_OUT3                                    0xf
#define CLK_OUT3_V                                  CLK_OUT3
#define CLK_OUT3_S                                  8
#define CLK_OUT3_M                                  (CLK_OUT3_V << CLK_OUT3_S)
#define CLK_OUT2                                    0xf
#define CLK_OUT2_V                                  CLK_OUT2
#define CLK_OUT2_S                                  4
#define CLK_OUT2_M                                  (CLK_OUT2_V << CLK_OUT2_S)
#define CLK_OUT1                                    0xf
#define CLK_OUT1_V                                  CLK_OUT1
#define CLK_OUT1_S                                  0
#define CLK_OUT1_M                                  (CLK_OUT1_V << CLK_OUT1_S)

#define PERIPHS_IO_MUX_XTAL_32K_P_U       (REG_IO_MUX_BASE +0x04)
#define FUNC_XTAL_32K_P_GPIO0                       1
#define FUNC_XTAL_32K_P_GPIO0_0                     0

#define PERIPHS_IO_MUX_XTAL_32K_N_U       (REG_IO_MUX_BASE +0x08)
#define FUNC_XTAL_32K_N_GPIO1                       1
#define FUNC_XTAL_32K_N_GPIO1_0                     0

#define PERIPHS_IO_MUX_GPIO2_U            (REG_IO_MUX_BASE +0x0c)
#define FUNC_GPIO2_FSPIQ                            2
#define FUNC_GPIO2_GPIO2                            1
#define FUNC_GPIO2_GPIO2_0                          0

#define PERIPHS_IO_MUX_GPIO3_U            (REG_IO_MUX_BASE +0x10)
#define FUNC_GPIO3_GPIO3                            1
#define FUNC_GPIO3_GPIO3_0                          0

#define PERIPHS_IO_MUX_MTMS_U             (REG_IO_MUX_BASE +0x14)
#define FUNC_MTMS_FSPIHD                            2
#define FUNC_MTMS_GPIO4                             1
#define FUNC_MTMS_MTMS                              0

#define PERIPHS_IO_MUX_MTDI_U             (REG_IO_MUX_BASE +0x18)
#define FUNC_MTDI_FSPIWP                            2
#define FUNC_MTDI_GPIO5                             1
#define FUNC_MTDI_MTDI                              0

#define PERIPHS_IO_MUX_MTCK_U             (REG_IO_MUX_BASE +0x1c)
#define FUNC_MTCK_FSPICLK                           2
#define FUNC_MTCK_GPIO6                             1
#define FUNC_MTCK_MTCK                              0

#define PERIPHS_IO_MUX_MTDO_U             (REG_IO_MUX_BASE +0x20)
#define FUNC_MTDO_FSPID                             2
#define FUNC_MTDO_GPIO7                             1
#define FUNC_MTDO_MTDO                              0

#define PERIPHS_IO_MUX_GPIO8_U            (REG_IO_MUX_BASE +0x24)
#define FUNC_GPIO8_GPIO8                            1
#define FUNC_GPIO8_GPIO8_0                          0

#define PERIPHS_IO_MUX_GPIO9_U            (REG_IO_MUX_BASE +0x28)
#define FUNC_GPIO9_GPIO9                            1
#define FUNC_GPIO9_GPIO9_0                          0

#define PERIPHS_IO_MUX_GPIO10_U           (REG_IO_MUX_BASE +0x2c)
#define FUNC_GPIO10_FSPICS0                         2
#define FUNC_GPIO10_GPIO10                          1
#define FUNC_GPIO10_GPIO10_0                        0

#define PERIPHS_IO_MUX_VDD_SPI_U          (REG_IO_MUX_BASE +0x30)
#define FUNC_VDD_SPI_GPIO11                         1
#define FUNC_VDD_SPI_GPIO11_0                       0

#define PERIPHS_IO_MUX_SPIHD_U            (REG_IO_MUX_BASE +0x34)
#define FUNC_SPIHD_GPIO12                           1
#define FUNC_SPIHD_SPIHD                            0

#define PERIPHS_IO_MUX_SPIWP_U            (REG_IO_MUX_BASE +0x38)
#define FUNC_SPIWP_GPIO13                           1
#define FUNC_SPIWP_SPIWP                            0

#define PERIPHS_IO_MUX_SPICS0_U           (REG_IO_MUX_BASE +0x3c)
#define FUNC_SPICS0_GPIO14                          1
#define FUNC_SPICS0_SPICS0                          0

#define PERIPHS_IO_MUX_SPICLK_U           (REG_IO_MUX_BASE +0x40)
#define FUNC_SPICLK_GPIO15                          1
#define FUNC_SPICLK_SPICLK                          0

#define PERIPHS_IO_MUX_SPID_U             (REG_IO_MUX_BASE +0x44)
#define FUNC_SPID_GPIO16                            1
#define FUNC_SPID_SPID                              0

#define PERIPHS_IO_MUX_SPIQ_U             (REG_IO_MUX_BASE +0x48)
#define FUNC_SPIQ_GPIO17                            1
#define FUNC_SPIQ_SPIQ                              0

#define PERIPHS_IO_MUX_GPIO18_U           (REG_IO_MUX_BASE +0x4c)
#define FUNC_GPIO18_GPIO18                          1
#define FUNC_GPIO18_GPIO18_0                        0

#define PERIPHS_IO_MUX_GPIO19_U           (REG_IO_MUX_BASE +0x50)
#define FUNC_GPIO19_GPIO19                          1
#define FUNC_GPIO19_GPIO19_0                        0

#define PERIPHS_IO_MUX_U0RXD_U            (REG_IO_MUX_BASE +0x54)
#define FUNC_U0RXD_GPIO20                           1
#define FUNC_U0RXD_U0RXD                            0

#define PERIPHS_IO_MUX_U0TXD_U            (REG_IO_MUX_BASE +0x58)
#define FUNC_U0TXD_GPIO21                           1
#define FUNC_U0TXD_U0TXD                            0

#define PERIPHS_IO_MUX_GPIO22_U           (REG_IO_MUX_BASE +0x5c)
#define FUNC_GPIO22_GPIO22                          1
#define FUNC_GPIO22_GPIO22_0                        0

#define PERIPHS_IO_MUX_GPIO23_U           (REG_IO_MUX_BASE +0x60)
#define FUNC_GPIO23_GPIO23                          1
#define FUNC_GPIO23_GPIO23_0                        0

#define PERIPHS_IO_MUX_GPIO24_U           (REG_IO_MUX_BASE +0x64)
#define FUNC_GPIO24_GPIO24                          1
#define FUNC_GPIO24_GPIO24_0                        0

#define PERIPHS_IO_MUX_GPIO25_U           (REG_IO_MUX_BASE +0x68)
#define FUNC_GPIO25_GPIO25                          1
#define FUNC_GPIO25_GPIO25_0                        0

#define PERIPHS_IO_MUX_GPIO26_U           (REG_IO_MUX_BASE +0x6c)
#define FUNC_GPIO26_GPIO26                          1
#define FUNC_GPIO26_GPIO26_0                        0

#define PERIPHS_IO_MUX_GPIO27_U           (REG_IO_MUX_BASE +0x70)
#define FUNC_GPIO27_GPIO27                          1
#define FUNC_GPIO27_GPIO27_0                        0

#define PERIPHS_IO_MUX_GPIO28_U           (REG_IO_MUX_BASE +0x74)
#define FUNC_GPIO28_GPIO28                          1
#define FUNC_GPIO28_GPIO28_0                        0

#define PERIPHS_IO_MUX_GPIO29_U           (REG_IO_MUX_BASE +0x78)
#define FUNC_GPIO29_GPIO29                          1
#define FUNC_GPIO29_GPIO29_0                        0

#define PERIPHS_IO_MUX_GPIO30_U           (REG_IO_MUX_BASE +0x7c)
#define FUNC_GPIO30_GPIO30                          1
#define FUNC_GPIO30_GPIO30_0                        0

#define PERIPHS_IO_MUX_GPIO31_U           (REG_IO_MUX_BASE +0x80)
#define FUNC_GPIO31_GPIO31                          1
#define FUNC_GPIO31_GPIO31_0                        0

#define PERIPHS_IO_MUX_GPIO32_U           (REG_IO_MUX_BASE +0x84)
#define FUNC_GPIO32_GPIO32                          1
#define FUNC_GPIO32_GPIO32_0                        0

#define PERIPHS_IO_MUX_GPIO33_U           (REG_IO_MUX_BASE +0x88)
#define FUNC_GPIO33_GPIO33                          1
#define FUNC_GPIO33_GPIO33_0                        0

#define PERIPHS_IO_MUX_GPIO34_U           (REG_IO_MUX_BASE +0x8c)
#define FUNC_GPIO34_GPIO34                          1
#define FUNC_GPIO34_GPIO34_0                        0

#define PERIPHS_IO_MUX_GPIO35_U           (REG_IO_MUX_BASE +0x90)
#define FUNC_GPIO35_GPIO35                          1
#define FUNC_GPIO35_GPIO35_0                        0

#define PERIPHS_IO_MUX_GPIO36_U           (REG_IO_MUX_BASE +0x94)
#define FUNC_GPIO36_GPIO36                          1
#define FUNC_GPIO36_GPIO36_0                        0

#define PERIPHS_IO_MUX_GPIO37_U           (REG_IO_MUX_BASE +0x98)
#define FUNC_GPIO37_GPIO37                          1
#define FUNC_GPIO37_GPIO37_0                        0

#define PERIPHS_IO_MUX_GPIO38_U           (REG_IO_MUX_BASE +0x9c)
#define FUNC_GPIO38_GPIO38                          1
#define FUNC_GPIO38_GPIO38_0                        0

#define PERIPHS_IO_MUX_GPIO39_U           (REG_IO_MUX_BASE +0xa0)
#define FUNC_GPIO39_GPIO39                          1
#define FUNC_GPIO39_GPIO39_0                        0

#define PERIPHS_IO_MUX_GPIO40_U           (REG_IO_MUX_BASE +0xa4)
#define FUNC_GPIO40_GPIO40                          1
#define FUNC_GPIO40_GPIO40_0                        0

/** IO_MUX_DATE_REG register
 *  IO MUX Version Control Register
 */
#define IO_MUX_DATE_REG (DR_REG_IO_MUX_BASE + 0xfc)
/** IO_MUX_REG_DATE : R/W; bitpos: [27:0]; default: 33628944;
 *  Version control register
 */
#define IO_MUX_REG_DATE    0x0FFFFFFFU
#define IO_MUX_REG_DATE_M  (IO_MUX_REG_DATE_V << IO_MUX_REG_DATE_S)
#define IO_MUX_REG_DATE_V  0x0FFFFFFFU
#define IO_MUX_REG_DATE_S  0
#define IO_MUX_DATE_VERSION 0x2012310

#endif
