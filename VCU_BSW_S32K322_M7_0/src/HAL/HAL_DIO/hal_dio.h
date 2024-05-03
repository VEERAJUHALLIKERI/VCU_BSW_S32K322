/*
 * hal_dio.h
 *
 *  Created on: 23-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_HAL_DIO_DIO_H_
#define HAL_HAL_HAL_DIO_DIO_H_

#include"Siul2_Dio_Ip.h"
#include"Siul2_Port_Ip.h"

void HAL_DIO_PinInit(uint32_t PinCounts, Siul2_Port_Ip_PinSettingsConfig * PinSettingsConfig);
Siul2_Dio_Ip_PinsLevelType HAL_DIO_GetPinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber);
void HAL_DIO_UpdatePinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber,Siul2_Dio_Ip_PinsLevelType value);

#endif /* HAL_HAL_HAL_DIO_DIO_H_ */
