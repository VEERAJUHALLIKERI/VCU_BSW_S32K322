/*
 * hal_dio.c
 *
 *  Created on: 23-Apr-2024
 *      Author: INTEL
 */


#include "hal_dio.h"

#include"Siul2_Dio_Ip.h"
#include"Siul2_Dio_Ip_Cfg.h"
#include"Siul2_Port_Ip_Cfg.h"
#include"Siul2_Port_Ip.h"

void HAL_DIO_PinInit(uint32_t PinCounts, Siul2_Port_Ip_PinSettingsConfig * PinSettingsConfig)
{
	Siul2_Port_Ip_Init(PinCounts, PinSettingsConfig);
}

Siul2_Dio_Ip_PinsLevelType HAL_DIO_GetPinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber)
{
	bool Pin_Status = false;
	Pin_Status = Siul2_Dio_Ip_ReadPin(GpioBase, PinNumber);
	return Pin_Status;
}

void HAL_DIO_UpdatePinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber,Siul2_Dio_Ip_PinsLevelType value)
{
	Siul2_Dio_Ip_WritePin(GpioBase, PinNumber, value);
}
