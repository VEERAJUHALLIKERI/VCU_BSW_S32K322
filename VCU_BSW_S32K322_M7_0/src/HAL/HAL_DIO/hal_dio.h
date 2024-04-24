/*
 * hal_dio.h
 *
 *  Created on: 23-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_DIO_HAL_DIO_H_
#define HAL_HAL_DIO_HAL_DIO_H_

#include"Siul2_Dio_Ip.h"
#include"Siul2_Port_Ip.h"

void dio_hal_PinInit(void);
Siul2_Dio_Ip_PinsLevelType dio_hal_GetPinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber);
void dio_hal_UpdatePinStatus(Siul2_Dio_Ip_GpioType *GpioBase, Siul2_Dio_Ip_PinsChannelType PinNumber,Siul2_Dio_Ip_PinsLevelType value);

#endif /* HAL_HAL_DIO_HAL_DIO_H_ */
