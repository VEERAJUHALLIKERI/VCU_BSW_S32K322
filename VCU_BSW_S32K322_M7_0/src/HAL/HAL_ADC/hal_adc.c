/*
 * hal_adc.c
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */

#include "hal_adc.h"
#include "IntCtrl_Ip.h"
#include "Adc_Sar_Ip_BOARD_InitPeripherals_PBcfg.h"
#include "Adc_Sar_Ip.h"

void HAL_ADC_Init(uint32_t Instance, IRQn_Type IrqNum, IntCtrl_Ip_IrqHandlerType NewHandler,Adc_Sar_Ip_ConfigType * ADC_ConfigType)
{
	Adc_Sar_Ip_Init(Instance, ADC_ConfigType);
	IntCtrl_Ip_InstallHandler(IrqNum, NewHandler, NULL_PTR);
	IntCtrl_Ip_EnableIrq(IrqNum);
	Adc_Sar_Ip_DoCalibration(Instance);
	Adc_Sar_Ip_EnableNotifications(Instance, ADC_SAR_IP_NOTIF_FLAG_NORMAL_ENDCHAIN);
}

void HAL_ADC_SwConTrig(uint32 Instance)
{
	Adc_Sar_Ip_StartConversion(Instance, ADC_SAR_IP_CONV_CHAIN_NORMAL);
}

void HAL_ADC0_EndOfChainNotif(void)
{

}

void HAL_ADC1_EndOfChainNotif(void)
{

}
