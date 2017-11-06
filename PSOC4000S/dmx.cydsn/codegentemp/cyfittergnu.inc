/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* ADC_1_AdcInput */
.set ADC_1_AdcInput__0__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set ADC_1_AdcInput__0__HSIOM_MASK, 0x0F000000
.set ADC_1_AdcInput__0__HSIOM_SHIFT, 24
.set ADC_1_AdcInput__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__0__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__0__MASK, 0x40
.set ADC_1_AdcInput__0__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__0__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__0__PORT, 3
.set ADC_1_AdcInput__0__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__0__SHIFT, 6
.set ADC_1_AdcInput__1__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__1__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__1__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__1__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__1__HSIOM, CYREG_HSIOM_PORT_SEL3
.set ADC_1_AdcInput__1__HSIOM_MASK, 0xF0000000
.set ADC_1_AdcInput__1__HSIOM_SHIFT, 28
.set ADC_1_AdcInput__1__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__1__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__1__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__1__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__1__MASK, 0x80
.set ADC_1_AdcInput__1__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__1__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__1__PORT, 3
.set ADC_1_AdcInput__1__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__1__SHIFT, 7
.set ADC_1_AdcInput__2__DR, CYREG_GPIO_PRT2_DR
.set ADC_1_AdcInput__2__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set ADC_1_AdcInput__2__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set ADC_1_AdcInput__2__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set ADC_1_AdcInput__2__HSIOM, CYREG_HSIOM_PORT_SEL2
.set ADC_1_AdcInput__2__HSIOM_MASK, 0x0000F000
.set ADC_1_AdcInput__2__HSIOM_SHIFT, 12
.set ADC_1_AdcInput__2__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__2__INTR, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__2__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__2__INTSTAT, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__2__MASK, 0x08
.set ADC_1_AdcInput__2__PC, CYREG_GPIO_PRT2_PC
.set ADC_1_AdcInput__2__PC2, CYREG_GPIO_PRT2_PC2
.set ADC_1_AdcInput__2__PORT, 2
.set ADC_1_AdcInput__2__PS, CYREG_GPIO_PRT2_PS
.set ADC_1_AdcInput__2__SHIFT, 3
.set ADC_1_AdcInput__3__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__3__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__3__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__3__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__3__HSIOM, CYREG_HSIOM_PORT_SEL3
.set ADC_1_AdcInput__3__HSIOM_MASK, 0x000000F0
.set ADC_1_AdcInput__3__HSIOM_SHIFT, 4
.set ADC_1_AdcInput__3__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__3__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__3__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__3__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__3__MASK, 0x02
.set ADC_1_AdcInput__3__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__3__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__3__PORT, 3
.set ADC_1_AdcInput__3__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__3__SHIFT, 1
.set ADC_1_AdcInput__4__DR, CYREG_GPIO_PRT0_DR
.set ADC_1_AdcInput__4__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set ADC_1_AdcInput__4__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set ADC_1_AdcInput__4__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set ADC_1_AdcInput__4__HSIOM, CYREG_HSIOM_PORT_SEL0
.set ADC_1_AdcInput__4__HSIOM_MASK, 0x000000F0
.set ADC_1_AdcInput__4__HSIOM_SHIFT, 4
.set ADC_1_AdcInput__4__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__4__INTR, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__4__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__4__INTSTAT, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__4__MASK, 0x02
.set ADC_1_AdcInput__4__PC, CYREG_GPIO_PRT0_PC
.set ADC_1_AdcInput__4__PC2, CYREG_GPIO_PRT0_PC2
.set ADC_1_AdcInput__4__PORT, 0
.set ADC_1_AdcInput__4__PS, CYREG_GPIO_PRT0_PS
.set ADC_1_AdcInput__4__SHIFT, 1
.set ADC_1_AdcInput__5__DR, CYREG_GPIO_PRT2_DR
.set ADC_1_AdcInput__5__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set ADC_1_AdcInput__5__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set ADC_1_AdcInput__5__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set ADC_1_AdcInput__5__HSIOM, CYREG_HSIOM_PORT_SEL2
.set ADC_1_AdcInput__5__HSIOM_MASK, 0xF0000000
.set ADC_1_AdcInput__5__HSIOM_SHIFT, 28
.set ADC_1_AdcInput__5__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__5__INTR, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__5__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__5__INTSTAT, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__5__MASK, 0x80
.set ADC_1_AdcInput__5__PC, CYREG_GPIO_PRT2_PC
.set ADC_1_AdcInput__5__PC2, CYREG_GPIO_PRT2_PC2
.set ADC_1_AdcInput__5__PORT, 2
.set ADC_1_AdcInput__5__PS, CYREG_GPIO_PRT2_PS
.set ADC_1_AdcInput__5__SHIFT, 7
.set ADC_1_AdcInput__6__DR, CYREG_GPIO_PRT4_DR
.set ADC_1_AdcInput__6__DR_CLR, CYREG_GPIO_PRT4_DR_CLR
.set ADC_1_AdcInput__6__DR_INV, CYREG_GPIO_PRT4_DR_INV
.set ADC_1_AdcInput__6__DR_SET, CYREG_GPIO_PRT4_DR_SET
.set ADC_1_AdcInput__6__HSIOM, CYREG_HSIOM_PORT_SEL4
.set ADC_1_AdcInput__6__HSIOM_MASK, 0x0000F000
.set ADC_1_AdcInput__6__HSIOM_SHIFT, 12
.set ADC_1_AdcInput__6__INTCFG, CYREG_GPIO_PRT4_INTR_CFG
.set ADC_1_AdcInput__6__INTR, CYREG_GPIO_PRT4_INTR
.set ADC_1_AdcInput__6__INTR_CFG, CYREG_GPIO_PRT4_INTR_CFG
.set ADC_1_AdcInput__6__INTSTAT, CYREG_GPIO_PRT4_INTR
.set ADC_1_AdcInput__6__MASK, 0x08
.set ADC_1_AdcInput__6__PC, CYREG_GPIO_PRT4_PC
.set ADC_1_AdcInput__6__PC2, CYREG_GPIO_PRT4_PC2
.set ADC_1_AdcInput__6__PORT, 4
.set ADC_1_AdcInput__6__PS, CYREG_GPIO_PRT4_PS
.set ADC_1_AdcInput__6__SHIFT, 3
.set ADC_1_AdcInput__7__DR, CYREG_GPIO_PRT1_DR
.set ADC_1_AdcInput__7__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set ADC_1_AdcInput__7__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set ADC_1_AdcInput__7__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set ADC_1_AdcInput__7__HSIOM, CYREG_HSIOM_PORT_SEL1
.set ADC_1_AdcInput__7__HSIOM_MASK, 0x00000F00
.set ADC_1_AdcInput__7__HSIOM_SHIFT, 8
.set ADC_1_AdcInput__7__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set ADC_1_AdcInput__7__INTR, CYREG_GPIO_PRT1_INTR
.set ADC_1_AdcInput__7__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set ADC_1_AdcInput__7__INTSTAT, CYREG_GPIO_PRT1_INTR
.set ADC_1_AdcInput__7__MASK, 0x04
.set ADC_1_AdcInput__7__PC, CYREG_GPIO_PRT1_PC
.set ADC_1_AdcInput__7__PC2, CYREG_GPIO_PRT1_PC2
.set ADC_1_AdcInput__7__PORT, 1
.set ADC_1_AdcInput__7__PS, CYREG_GPIO_PRT1_PS
.set ADC_1_AdcInput__7__SHIFT, 2
.set ADC_1_AdcInput__8__DR, CYREG_GPIO_PRT0_DR
.set ADC_1_AdcInput__8__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set ADC_1_AdcInput__8__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set ADC_1_AdcInput__8__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set ADC_1_AdcInput__8__HSIOM, CYREG_HSIOM_PORT_SEL0
.set ADC_1_AdcInput__8__HSIOM_MASK, 0x000F0000
.set ADC_1_AdcInput__8__HSIOM_SHIFT, 16
.set ADC_1_AdcInput__8__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__8__INTR, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__8__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__8__INTSTAT, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__8__MASK, 0x10
.set ADC_1_AdcInput__8__PC, CYREG_GPIO_PRT0_PC
.set ADC_1_AdcInput__8__PC2, CYREG_GPIO_PRT0_PC2
.set ADC_1_AdcInput__8__PORT, 0
.set ADC_1_AdcInput__8__PS, CYREG_GPIO_PRT0_PS
.set ADC_1_AdcInput__8__SHIFT, 4
.set ADC_1_AdcInput__9__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__9__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__9__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__9__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__9__HSIOM, CYREG_HSIOM_PORT_SEL3
.set ADC_1_AdcInput__9__HSIOM_MASK, 0x00F00000
.set ADC_1_AdcInput__9__HSIOM_SHIFT, 20
.set ADC_1_AdcInput__9__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__9__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__9__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__9__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__9__MASK, 0x20
.set ADC_1_AdcInput__9__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__9__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__9__PORT, 3
.set ADC_1_AdcInput__9__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__9__SHIFT, 5
.set ADC_1_AdcInput__Ch0__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__Ch0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__Ch0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__Ch0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__Ch0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch0__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch0__MASK, 0x40
.set ADC_1_AdcInput__Ch0__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__Ch0__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__Ch0__PORT, 3
.set ADC_1_AdcInput__Ch0__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__Ch0__SHIFT, 6
.set ADC_1_AdcInput__Ch1__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__Ch1__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__Ch1__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__Ch1__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__Ch1__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch1__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch1__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch1__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch1__MASK, 0x80
.set ADC_1_AdcInput__Ch1__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__Ch1__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__Ch1__PORT, 3
.set ADC_1_AdcInput__Ch1__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__Ch1__SHIFT, 7
.set ADC_1_AdcInput__Ch2__DR, CYREG_GPIO_PRT2_DR
.set ADC_1_AdcInput__Ch2__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set ADC_1_AdcInput__Ch2__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set ADC_1_AdcInput__Ch2__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set ADC_1_AdcInput__Ch2__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__Ch2__INTR, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__Ch2__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__Ch2__INTSTAT, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__Ch2__MASK, 0x08
.set ADC_1_AdcInput__Ch2__PC, CYREG_GPIO_PRT2_PC
.set ADC_1_AdcInput__Ch2__PC2, CYREG_GPIO_PRT2_PC2
.set ADC_1_AdcInput__Ch2__PORT, 2
.set ADC_1_AdcInput__Ch2__PS, CYREG_GPIO_PRT2_PS
.set ADC_1_AdcInput__Ch2__SHIFT, 3
.set ADC_1_AdcInput__Ch3__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__Ch3__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__Ch3__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__Ch3__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__Ch3__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch3__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch3__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch3__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch3__MASK, 0x02
.set ADC_1_AdcInput__Ch3__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__Ch3__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__Ch3__PORT, 3
.set ADC_1_AdcInput__Ch3__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__Ch3__SHIFT, 1
.set ADC_1_AdcInput__Ch4__DR, CYREG_GPIO_PRT0_DR
.set ADC_1_AdcInput__Ch4__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set ADC_1_AdcInput__Ch4__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set ADC_1_AdcInput__Ch4__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set ADC_1_AdcInput__Ch4__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__Ch4__INTR, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__Ch4__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__Ch4__INTSTAT, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__Ch4__MASK, 0x02
.set ADC_1_AdcInput__Ch4__PC, CYREG_GPIO_PRT0_PC
.set ADC_1_AdcInput__Ch4__PC2, CYREG_GPIO_PRT0_PC2
.set ADC_1_AdcInput__Ch4__PORT, 0
.set ADC_1_AdcInput__Ch4__PS, CYREG_GPIO_PRT0_PS
.set ADC_1_AdcInput__Ch4__SHIFT, 1
.set ADC_1_AdcInput__Ch5__DR, CYREG_GPIO_PRT2_DR
.set ADC_1_AdcInput__Ch5__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set ADC_1_AdcInput__Ch5__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set ADC_1_AdcInput__Ch5__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set ADC_1_AdcInput__Ch5__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__Ch5__INTR, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__Ch5__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set ADC_1_AdcInput__Ch5__INTSTAT, CYREG_GPIO_PRT2_INTR
.set ADC_1_AdcInput__Ch5__MASK, 0x80
.set ADC_1_AdcInput__Ch5__PC, CYREG_GPIO_PRT2_PC
.set ADC_1_AdcInput__Ch5__PC2, CYREG_GPIO_PRT2_PC2
.set ADC_1_AdcInput__Ch5__PORT, 2
.set ADC_1_AdcInput__Ch5__PS, CYREG_GPIO_PRT2_PS
.set ADC_1_AdcInput__Ch5__SHIFT, 7
.set ADC_1_AdcInput__Ch6__DR, CYREG_GPIO_PRT4_DR
.set ADC_1_AdcInput__Ch6__DR_CLR, CYREG_GPIO_PRT4_DR_CLR
.set ADC_1_AdcInput__Ch6__DR_INV, CYREG_GPIO_PRT4_DR_INV
.set ADC_1_AdcInput__Ch6__DR_SET, CYREG_GPIO_PRT4_DR_SET
.set ADC_1_AdcInput__Ch6__INTCFG, CYREG_GPIO_PRT4_INTR_CFG
.set ADC_1_AdcInput__Ch6__INTR, CYREG_GPIO_PRT4_INTR
.set ADC_1_AdcInput__Ch6__INTR_CFG, CYREG_GPIO_PRT4_INTR_CFG
.set ADC_1_AdcInput__Ch6__INTSTAT, CYREG_GPIO_PRT4_INTR
.set ADC_1_AdcInput__Ch6__MASK, 0x08
.set ADC_1_AdcInput__Ch6__PC, CYREG_GPIO_PRT4_PC
.set ADC_1_AdcInput__Ch6__PC2, CYREG_GPIO_PRT4_PC2
.set ADC_1_AdcInput__Ch6__PORT, 4
.set ADC_1_AdcInput__Ch6__PS, CYREG_GPIO_PRT4_PS
.set ADC_1_AdcInput__Ch6__SHIFT, 3
.set ADC_1_AdcInput__Ch7__DR, CYREG_GPIO_PRT1_DR
.set ADC_1_AdcInput__Ch7__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set ADC_1_AdcInput__Ch7__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set ADC_1_AdcInput__Ch7__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set ADC_1_AdcInput__Ch7__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set ADC_1_AdcInput__Ch7__INTR, CYREG_GPIO_PRT1_INTR
.set ADC_1_AdcInput__Ch7__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set ADC_1_AdcInput__Ch7__INTSTAT, CYREG_GPIO_PRT1_INTR
.set ADC_1_AdcInput__Ch7__MASK, 0x04
.set ADC_1_AdcInput__Ch7__PC, CYREG_GPIO_PRT1_PC
.set ADC_1_AdcInput__Ch7__PC2, CYREG_GPIO_PRT1_PC2
.set ADC_1_AdcInput__Ch7__PORT, 1
.set ADC_1_AdcInput__Ch7__PS, CYREG_GPIO_PRT1_PS
.set ADC_1_AdcInput__Ch7__SHIFT, 2
.set ADC_1_AdcInput__Ch8__DR, CYREG_GPIO_PRT0_DR
.set ADC_1_AdcInput__Ch8__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set ADC_1_AdcInput__Ch8__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set ADC_1_AdcInput__Ch8__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set ADC_1_AdcInput__Ch8__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__Ch8__INTR, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__Ch8__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set ADC_1_AdcInput__Ch8__INTSTAT, CYREG_GPIO_PRT0_INTR
.set ADC_1_AdcInput__Ch8__MASK, 0x10
.set ADC_1_AdcInput__Ch8__PC, CYREG_GPIO_PRT0_PC
.set ADC_1_AdcInput__Ch8__PC2, CYREG_GPIO_PRT0_PC2
.set ADC_1_AdcInput__Ch8__PORT, 0
.set ADC_1_AdcInput__Ch8__PS, CYREG_GPIO_PRT0_PS
.set ADC_1_AdcInput__Ch8__SHIFT, 4
.set ADC_1_AdcInput__Ch9__DR, CYREG_GPIO_PRT3_DR
.set ADC_1_AdcInput__Ch9__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set ADC_1_AdcInput__Ch9__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set ADC_1_AdcInput__Ch9__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set ADC_1_AdcInput__Ch9__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch9__INTR, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch9__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set ADC_1_AdcInput__Ch9__INTSTAT, CYREG_GPIO_PRT3_INTR
.set ADC_1_AdcInput__Ch9__MASK, 0x20
.set ADC_1_AdcInput__Ch9__PC, CYREG_GPIO_PRT3_PC
.set ADC_1_AdcInput__Ch9__PC2, CYREG_GPIO_PRT3_PC2
.set ADC_1_AdcInput__Ch9__PORT, 3
.set ADC_1_AdcInput__Ch9__PS, CYREG_GPIO_PRT3_PS
.set ADC_1_AdcInput__Ch9__SHIFT, 5

/* ADC_1_CSD */
.set ADC_1_CSD__ADC_CTL, CYREG_CSD_ADC_CTL
.set ADC_1_CSD__CMOD_PAD, 1
.set ADC_1_CSD__CSD_CONFIG, CYREG_CSD_CONFIG
.set ADC_1_CSD__CSD_INTR, CYREG_CSD_INTR
.set ADC_1_CSD__CSD_INTR_SET, CYREG_CSD_INTR_SET
.set ADC_1_CSD__CSD_NUMBER, 0
.set ADC_1_CSD__CSD_STATUS, CYREG_CSD_STATUS
.set ADC_1_CSD__CSDCMP, CYREG_CSD_CSDCMP
.set ADC_1_CSD__CSH_TANK_PAD, 2
.set ADC_1_CSD__CSHIELD_PAD, 4
.set ADC_1_CSD__HSCMP, CYREG_CSD_HSCMP
.set ADC_1_CSD__INTR_MASK, CYREG_CSD_INTR_MASK
.set ADC_1_CSD__REFGEN, CYREG_CSD_REFGEN
.set ADC_1_CSD__RESULT_VAL1, CYREG_CSD_RESULT_VAL1
.set ADC_1_CSD__RESULT_VAL2, CYREG_CSD_RESULT_VAL2
.set ADC_1_CSD__SENSE_DUTY, CYREG_CSD_SENSE_DUTY
.set ADC_1_CSD__SENSE_PERIOD, CYREG_CSD_SENSE_PERIOD
.set ADC_1_CSD__SEQ_INIT_CNT, CYREG_CSD_SEQ_INIT_CNT
.set ADC_1_CSD__SEQ_NORM_CNT, CYREG_CSD_SEQ_NORM_CNT
.set ADC_1_CSD__SEQ_START, CYREG_CSD_SEQ_START
.set ADC_1_CSD__SEQ_TIME, CYREG_CSD_SEQ_TIME
.set ADC_1_CSD__SW_AMUXBUF_SEL, CYREG_CSD_SW_AMUXBUF_SEL
.set ADC_1_CSD__SW_BYP_SEL, CYREG_CSD_SW_BYP_SEL
.set ADC_1_CSD__SW_CMP_N_SEL, CYREG_CSD_SW_CMP_N_SEL
.set ADC_1_CSD__SW_CMP_P_SEL, CYREG_CSD_SW_CMP_P_SEL
.set ADC_1_CSD__SW_DSI_SEL, CYREG_CSD_SW_DSI_SEL
.set ADC_1_CSD__SW_FW_MOD_SEL, CYREG_CSD_SW_FW_MOD_SEL
.set ADC_1_CSD__SW_FW_TANK_SEL, CYREG_CSD_SW_FW_TANK_SEL
.set ADC_1_CSD__SW_HS_N_SEL, CYREG_CSD_SW_HS_N_SEL
.set ADC_1_CSD__SW_HS_P_SEL, CYREG_CSD_SW_HS_P_SEL
.set ADC_1_CSD__SW_REFGEN_SEL, CYREG_CSD_SW_REFGEN_SEL
.set ADC_1_CSD__SW_RES, CYREG_CSD_SW_RES
.set ADC_1_CSD__SW_SHIELD_SEL, CYREG_CSD_SW_SHIELD_SEL
.set ADC_1_CSD__VREF_EXT_PAD, 8

/* ADC_1_IDACComp */
.set ADC_1_IDACComp__CONFIG, CYREG_CSD_CONFIG
.set ADC_1_IDACComp__IDAC, CYREG_CSD_IDACB
.set ADC_1_IDACComp__POSITION, 1

/* ADC_1_ISR */
.set ADC_1_ISR__INTC_CLR_EN_REG, CYREG_CM0P_ICER
.set ADC_1_ISR__INTC_CLR_PD_REG, CYREG_CM0P_ICPR
.set ADC_1_ISR__INTC_MASK, 0x400
.set ADC_1_ISR__INTC_NUMBER, 10
.set ADC_1_ISR__INTC_PRIOR_MASK, 0xC00000
.set ADC_1_ISR__INTC_PRIOR_NUM, 3
.set ADC_1_ISR__INTC_PRIOR_REG, CYREG_CM0P_IPR2
.set ADC_1_ISR__INTC_SET_EN_REG, CYREG_CM0P_ISER
.set ADC_1_ISR__INTC_SET_PD_REG, CYREG_CM0P_ISPR

/* ADC_1_ModClk */
.set ADC_1_ModClk__CTRL_REGISTER, CYREG_PERI_PCLK_CTL2
.set ADC_1_ModClk__DIV_ID, 0x00000040
.set ADC_1_ModClk__DIV_REGISTER, CYREG_PERI_DIV_16_CTL0
.set ADC_1_ModClk__PA_DIV_ID, 0x000000FF

/* BLUE */
.set BLUE_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT2_CC
.set BLUE_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT2_CC_BUFF
.set BLUE_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT2_COUNTER
.set BLUE_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT2_CTRL
.set BLUE_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT2_INTR
.set BLUE_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT2_INTR_MASK
.set BLUE_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT2_INTR_MASKED
.set BLUE_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT2_INTR_SET
.set BLUE_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT2_PERIOD
.set BLUE_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT2_PERIOD_BUFF
.set BLUE_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT2_STATUS
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x04
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 2
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x400
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 10
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x4000000
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 26
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x40000
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 18
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x04
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 2
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x04
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 2
.set BLUE_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 2
.set BLUE_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT2_TR_CTRL0
.set BLUE_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT2_TR_CTRL1
.set BLUE_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT2_TR_CTRL2

/* BluePin */
.set BluePin__0__DR, CYREG_GPIO_PRT3_DR
.set BluePin__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set BluePin__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set BluePin__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set BluePin__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set BluePin__0__HSIOM_MASK, 0x000F0000
.set BluePin__0__HSIOM_SHIFT, 16
.set BluePin__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set BluePin__0__INTR, CYREG_GPIO_PRT3_INTR
.set BluePin__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set BluePin__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set BluePin__0__MASK, 0x10
.set BluePin__0__PC, CYREG_GPIO_PRT3_PC
.set BluePin__0__PC2, CYREG_GPIO_PRT3_PC2
.set BluePin__0__PORT, 3
.set BluePin__0__PS, CYREG_GPIO_PRT3_PS
.set BluePin__0__SHIFT, 4
.set BluePin__DR, CYREG_GPIO_PRT3_DR
.set BluePin__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set BluePin__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set BluePin__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set BluePin__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set BluePin__INTR, CYREG_GPIO_PRT3_INTR
.set BluePin__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set BluePin__INTSTAT, CYREG_GPIO_PRT3_INTR
.set BluePin__MASK, 0x10
.set BluePin__PC, CYREG_GPIO_PRT3_PC
.set BluePin__PC2, CYREG_GPIO_PRT3_PC2
.set BluePin__PORT, 3
.set BluePin__PS, CYREG_GPIO_PRT3_PS
.set BluePin__SHIFT, 4

/* Clock_1 */
.set Clock_1__CTRL_REGISTER, CYREG_PERI_PCLK_CTL5
.set Clock_1__DIV_ID, 0x00000042
.set Clock_1__DIV_REGISTER, CYREG_PERI_DIV_16_CTL2
.set Clock_1__PA_DIV_ID, 0x000000FF

/* GREEN */
.set GREEN_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT0_CC
.set GREEN_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT0_CC_BUFF
.set GREEN_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT0_COUNTER
.set GREEN_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT0_CTRL
.set GREEN_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT0_INTR
.set GREEN_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT0_INTR_MASK
.set GREEN_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT0_INTR_MASKED
.set GREEN_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT0_INTR_SET
.set GREEN_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT0_PERIOD
.set GREEN_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT0_PERIOD_BUFF
.set GREEN_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT0_STATUS
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x01
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 0
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x100
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 8
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x1000000
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 24
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x10000
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 16
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x01
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 0
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x01
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 0
.set GREEN_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 0
.set GREEN_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT0_TR_CTRL0
.set GREEN_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT0_TR_CTRL1
.set GREEN_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT0_TR_CTRL2

/* GreenPin */
.set GreenPin__0__DR, CYREG_GPIO_PRT2_DR
.set GreenPin__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set GreenPin__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set GreenPin__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set GreenPin__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set GreenPin__0__HSIOM_MASK, 0x000F0000
.set GreenPin__0__HSIOM_SHIFT, 16
.set GreenPin__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set GreenPin__0__INTR, CYREG_GPIO_PRT2_INTR
.set GreenPin__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set GreenPin__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set GreenPin__0__MASK, 0x10
.set GreenPin__0__PC, CYREG_GPIO_PRT2_PC
.set GreenPin__0__PC2, CYREG_GPIO_PRT2_PC2
.set GreenPin__0__PORT, 2
.set GreenPin__0__PS, CYREG_GPIO_PRT2_PS
.set GreenPin__0__SHIFT, 4
.set GreenPin__DR, CYREG_GPIO_PRT2_DR
.set GreenPin__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set GreenPin__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set GreenPin__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set GreenPin__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set GreenPin__INTR, CYREG_GPIO_PRT2_INTR
.set GreenPin__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set GreenPin__INTSTAT, CYREG_GPIO_PRT2_INTR
.set GreenPin__MASK, 0x10
.set GreenPin__PC, CYREG_GPIO_PRT2_PC
.set GreenPin__PC2, CYREG_GPIO_PRT2_PC2
.set GreenPin__PORT, 2
.set GreenPin__PS, CYREG_GPIO_PRT2_PS
.set GreenPin__SHIFT, 4

/* RED */
.set RED_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT1_CC
.set RED_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT1_CC_BUFF
.set RED_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT1_COUNTER
.set RED_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT1_CTRL
.set RED_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT1_INTR
.set RED_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT1_INTR_MASK
.set RED_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT1_INTR_MASKED
.set RED_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT1_INTR_SET
.set RED_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT1_PERIOD
.set RED_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT1_PERIOD_BUFF
.set RED_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT1_STATUS
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x02
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 1
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x200
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 9
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x2000000
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 25
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x20000
.set RED_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 17
.set RED_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set RED_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x02
.set RED_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 1
.set RED_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set RED_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x02
.set RED_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 1
.set RED_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 1
.set RED_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT1_TR_CTRL0
.set RED_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT1_TR_CTRL1
.set RED_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT1_TR_CTRL2

/* RedPin */
.set RedPin__0__DR, CYREG_GPIO_PRT2_DR
.set RedPin__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set RedPin__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set RedPin__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set RedPin__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set RedPin__0__HSIOM_MASK, 0x0F000000
.set RedPin__0__HSIOM_SHIFT, 24
.set RedPin__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set RedPin__0__INTR, CYREG_GPIO_PRT2_INTR
.set RedPin__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set RedPin__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set RedPin__0__MASK, 0x40
.set RedPin__0__PC, CYREG_GPIO_PRT2_PC
.set RedPin__0__PC2, CYREG_GPIO_PRT2_PC2
.set RedPin__0__PORT, 2
.set RedPin__0__PS, CYREG_GPIO_PRT2_PS
.set RedPin__0__SHIFT, 6
.set RedPin__DR, CYREG_GPIO_PRT2_DR
.set RedPin__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set RedPin__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set RedPin__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set RedPin__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set RedPin__INTR, CYREG_GPIO_PRT2_INTR
.set RedPin__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set RedPin__INTSTAT, CYREG_GPIO_PRT2_INTR
.set RedPin__MASK, 0x40
.set RedPin__PC, CYREG_GPIO_PRT2_PC
.set RedPin__PC2, CYREG_GPIO_PRT2_PC2
.set RedPin__PORT, 2
.set RedPin__PS, CYREG_GPIO_PRT2_PS
.set RedPin__SHIFT, 6

/* UART */
.set UART_ISR__INTC_CLR_EN_REG, CYREG_CM0P_ICER
.set UART_ISR__INTC_CLR_PD_REG, CYREG_CM0P_ICPR
.set UART_ISR__INTC_MASK, 0x80
.set UART_ISR__INTC_NUMBER, 7
.set UART_ISR__INTC_PRIOR_MASK, 0xC0000000
.set UART_ISR__INTC_PRIOR_NUM, 3
.set UART_ISR__INTC_PRIOR_REG, CYREG_CM0P_IPR1
.set UART_ISR__INTC_SET_EN_REG, CYREG_CM0P_ISER
.set UART_ISR__INTC_SET_PD_REG, CYREG_CM0P_ISPR
.set UART_rx__0__DR, CYREG_GPIO_PRT1_DR
.set UART_rx__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set UART_rx__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set UART_rx__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set UART_rx__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set UART_rx__0__HSIOM_GPIO, 0
.set UART_rx__0__HSIOM_I2C, 14
.set UART_rx__0__HSIOM_I2C_SCL, 14
.set UART_rx__0__HSIOM_MASK, 0x0000000F
.set UART_rx__0__HSIOM_SHIFT, 0
.set UART_rx__0__HSIOM_SPI, 15
.set UART_rx__0__HSIOM_SPI_MOSI, 15
.set UART_rx__0__HSIOM_UART, 9
.set UART_rx__0__HSIOM_UART_RX, 9
.set UART_rx__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set UART_rx__0__INTR, CYREG_GPIO_PRT1_INTR
.set UART_rx__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set UART_rx__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set UART_rx__0__MASK, 0x01
.set UART_rx__0__PC, CYREG_GPIO_PRT1_PC
.set UART_rx__0__PC2, CYREG_GPIO_PRT1_PC2
.set UART_rx__0__PORT, 1
.set UART_rx__0__PS, CYREG_GPIO_PRT1_PS
.set UART_rx__0__SHIFT, 0
.set UART_rx__DR, CYREG_GPIO_PRT1_DR
.set UART_rx__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set UART_rx__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set UART_rx__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set UART_rx__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set UART_rx__INTR, CYREG_GPIO_PRT1_INTR
.set UART_rx__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set UART_rx__INTSTAT, CYREG_GPIO_PRT1_INTR
.set UART_rx__MASK, 0x01
.set UART_rx__PC, CYREG_GPIO_PRT1_PC
.set UART_rx__PC2, CYREG_GPIO_PRT1_PC2
.set UART_rx__PORT, 1
.set UART_rx__PS, CYREG_GPIO_PRT1_PS
.set UART_rx__SHIFT, 0
.set UART_SCB__CTRL, CYREG_SCB0_CTRL
.set UART_SCB__EZ_DATA0, CYREG_SCB0_EZ_DATA0
.set UART_SCB__EZ_DATA1, CYREG_SCB0_EZ_DATA1
.set UART_SCB__EZ_DATA10, CYREG_SCB0_EZ_DATA10
.set UART_SCB__EZ_DATA11, CYREG_SCB0_EZ_DATA11
.set UART_SCB__EZ_DATA12, CYREG_SCB0_EZ_DATA12
.set UART_SCB__EZ_DATA13, CYREG_SCB0_EZ_DATA13
.set UART_SCB__EZ_DATA14, CYREG_SCB0_EZ_DATA14
.set UART_SCB__EZ_DATA15, CYREG_SCB0_EZ_DATA15
.set UART_SCB__EZ_DATA16, CYREG_SCB0_EZ_DATA16
.set UART_SCB__EZ_DATA17, CYREG_SCB0_EZ_DATA17
.set UART_SCB__EZ_DATA18, CYREG_SCB0_EZ_DATA18
.set UART_SCB__EZ_DATA19, CYREG_SCB0_EZ_DATA19
.set UART_SCB__EZ_DATA2, CYREG_SCB0_EZ_DATA2
.set UART_SCB__EZ_DATA20, CYREG_SCB0_EZ_DATA20
.set UART_SCB__EZ_DATA21, CYREG_SCB0_EZ_DATA21
.set UART_SCB__EZ_DATA22, CYREG_SCB0_EZ_DATA22
.set UART_SCB__EZ_DATA23, CYREG_SCB0_EZ_DATA23
.set UART_SCB__EZ_DATA24, CYREG_SCB0_EZ_DATA24
.set UART_SCB__EZ_DATA25, CYREG_SCB0_EZ_DATA25
.set UART_SCB__EZ_DATA26, CYREG_SCB0_EZ_DATA26
.set UART_SCB__EZ_DATA27, CYREG_SCB0_EZ_DATA27
.set UART_SCB__EZ_DATA28, CYREG_SCB0_EZ_DATA28
.set UART_SCB__EZ_DATA29, CYREG_SCB0_EZ_DATA29
.set UART_SCB__EZ_DATA3, CYREG_SCB0_EZ_DATA3
.set UART_SCB__EZ_DATA30, CYREG_SCB0_EZ_DATA30
.set UART_SCB__EZ_DATA31, CYREG_SCB0_EZ_DATA31
.set UART_SCB__EZ_DATA4, CYREG_SCB0_EZ_DATA4
.set UART_SCB__EZ_DATA5, CYREG_SCB0_EZ_DATA5
.set UART_SCB__EZ_DATA6, CYREG_SCB0_EZ_DATA6
.set UART_SCB__EZ_DATA7, CYREG_SCB0_EZ_DATA7
.set UART_SCB__EZ_DATA8, CYREG_SCB0_EZ_DATA8
.set UART_SCB__EZ_DATA9, CYREG_SCB0_EZ_DATA9
.set UART_SCB__I2C_CFG, CYREG_SCB0_I2C_CFG
.set UART_SCB__I2C_CTRL, CYREG_SCB0_I2C_CTRL
.set UART_SCB__I2C_M_CMD, CYREG_SCB0_I2C_M_CMD
.set UART_SCB__I2C_S_CMD, CYREG_SCB0_I2C_S_CMD
.set UART_SCB__I2C_STATUS, CYREG_SCB0_I2C_STATUS
.set UART_SCB__INTR_CAUSE, CYREG_SCB0_INTR_CAUSE
.set UART_SCB__INTR_I2C_EC, CYREG_SCB0_INTR_I2C_EC
.set UART_SCB__INTR_I2C_EC_MASK, CYREG_SCB0_INTR_I2C_EC_MASK
.set UART_SCB__INTR_I2C_EC_MASKED, CYREG_SCB0_INTR_I2C_EC_MASKED
.set UART_SCB__INTR_M, CYREG_SCB0_INTR_M
.set UART_SCB__INTR_M_MASK, CYREG_SCB0_INTR_M_MASK
.set UART_SCB__INTR_M_MASKED, CYREG_SCB0_INTR_M_MASKED
.set UART_SCB__INTR_M_SET, CYREG_SCB0_INTR_M_SET
.set UART_SCB__INTR_RX, CYREG_SCB0_INTR_RX
.set UART_SCB__INTR_RX_MASK, CYREG_SCB0_INTR_RX_MASK
.set UART_SCB__INTR_RX_MASKED, CYREG_SCB0_INTR_RX_MASKED
.set UART_SCB__INTR_RX_SET, CYREG_SCB0_INTR_RX_SET
.set UART_SCB__INTR_S, CYREG_SCB0_INTR_S
.set UART_SCB__INTR_S_MASK, CYREG_SCB0_INTR_S_MASK
.set UART_SCB__INTR_S_MASKED, CYREG_SCB0_INTR_S_MASKED
.set UART_SCB__INTR_S_SET, CYREG_SCB0_INTR_S_SET
.set UART_SCB__INTR_SPI_EC, CYREG_SCB0_INTR_SPI_EC
.set UART_SCB__INTR_SPI_EC_MASK, CYREG_SCB0_INTR_SPI_EC_MASK
.set UART_SCB__INTR_SPI_EC_MASKED, CYREG_SCB0_INTR_SPI_EC_MASKED
.set UART_SCB__INTR_TX, CYREG_SCB0_INTR_TX
.set UART_SCB__INTR_TX_MASK, CYREG_SCB0_INTR_TX_MASK
.set UART_SCB__INTR_TX_MASKED, CYREG_SCB0_INTR_TX_MASKED
.set UART_SCB__INTR_TX_SET, CYREG_SCB0_INTR_TX_SET
.set UART_SCB__RX_CTRL, CYREG_SCB0_RX_CTRL
.set UART_SCB__RX_FIFO_CTRL, CYREG_SCB0_RX_FIFO_CTRL
.set UART_SCB__RX_FIFO_RD, CYREG_SCB0_RX_FIFO_RD
.set UART_SCB__RX_FIFO_RD_SILENT, CYREG_SCB0_RX_FIFO_RD_SILENT
.set UART_SCB__RX_FIFO_STATUS, CYREG_SCB0_RX_FIFO_STATUS
.set UART_SCB__RX_MATCH, CYREG_SCB0_RX_MATCH
.set UART_SCB__SPI_CTRL, CYREG_SCB0_SPI_CTRL
.set UART_SCB__SPI_STATUS, CYREG_SCB0_SPI_STATUS
.set UART_SCB__SS0_POSISTION, 0
.set UART_SCB__SS1_POSISTION, 1
.set UART_SCB__SS2_POSISTION, 2
.set UART_SCB__SS3_POSISTION, 3
.set UART_SCB__STATUS, CYREG_SCB0_STATUS
.set UART_SCB__TX_CTRL, CYREG_SCB0_TX_CTRL
.set UART_SCB__TX_FIFO_CTRL, CYREG_SCB0_TX_FIFO_CTRL
.set UART_SCB__TX_FIFO_STATUS, CYREG_SCB0_TX_FIFO_STATUS
.set UART_SCB__TX_FIFO_WR, CYREG_SCB0_TX_FIFO_WR
.set UART_SCB__UART_CTRL, CYREG_SCB0_UART_CTRL
.set UART_SCB__UART_FLOW_CTRL, CYREG_SCB0_UART_FLOW_CTRL
.set UART_SCB__UART_RX_CTRL, CYREG_SCB0_UART_RX_CTRL
.set UART_SCB__UART_RX_STATUS, CYREG_SCB0_UART_RX_STATUS
.set UART_SCB__UART_TX_CTRL, CYREG_SCB0_UART_TX_CTRL
.set UART_SCBCLK__CTRL_REGISTER, CYREG_PERI_PCLK_CTL0
.set UART_SCBCLK__DIV_ID, 0x00000041
.set UART_SCBCLK__DIV_REGISTER, CYREG_PERI_DIV_16_CTL1
.set UART_SCBCLK__PA_DIV_ID, 0x000000FF

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 4000000
.set CYDEV_BCLK__HFCLK__KHZ, 4000
.set CYDEV_BCLK__HFCLK__MHZ, 4
.set CYDEV_BCLK__SYSCLK__HZ, 2000000
.set CYDEV_BCLK__SYSCLK__KHZ, 2000
.set CYDEV_BCLK__SYSCLK__MHZ, 2
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 16
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x190111A9
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 16
.set CYDEV_CHIP_MEMBER_4D, 12
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 17
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 15
.set CYDEV_CHIP_MEMBER_4I, 21
.set CYDEV_CHIP_MEMBER_4J, 13
.set CYDEV_CHIP_MEMBER_4K, 14
.set CYDEV_CHIP_MEMBER_4L, 20
.set CYDEV_CHIP_MEMBER_4M, 19
.set CYDEV_CHIP_MEMBER_4N, 9
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 18
.set CYDEV_CHIP_MEMBER_4Q, 11
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 22
.set CYDEV_CHIP_MEMBER_FM3, 26
.set CYDEV_CHIP_MEMBER_FM4, 27
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 23
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 24
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 25
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4J
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 0
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4J_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 8
.set CYDEV_DFT_SELECT_CLK1, 9
.set CYDEV_HEAP_SIZE, 0
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 0
.set CYIPBLOCK_m0s8cpussv3_VERSION, 1
.set CYIPBLOCK_m0s8csdv2_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8wco_VERSION, 1
.set CYIPBLOCK_s8srsslt_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif