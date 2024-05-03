/*
 * hal_adc.h
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_ADC_HAL_ADC_H_
#define HAL_HAL_ADC_HAL_ADC_H_


#include "stdint.h"
#include "IntCtrl_Ip_TypesDef.h"
#include "Adc_Sar_Ip_BOARD_InitPeripherals_PBcfg.h"

void HAL_ADC_Init(uint32_t Instance, IRQn_Type IrqNum, IntCtrl_Ip_IrqHandlerType NewHandler,Adc_Sar_Ip_ConfigType * ADC_ConfigType);
void HAL_ADC_SwConTrig(uint32 Instance);
void HAL_ADC0_EndOfChainNotif(void);
void HAL_ADC1_EndOfChainNotif(void);

#endif /* HAL_HAL_ADC_HAL_ADC_H_ */
