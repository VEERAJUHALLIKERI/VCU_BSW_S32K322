/*
 * hal_uart.h
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_UART_HAL_UART_H_
#define HAL_HAL_UART_HAL_UART_H_

#include "stdint.h"
#include "Lpuart_Uart_Ip_Cfg.h"

void HAL_Uart_Init(uint8 Instance, Lpuart_Uart_Ip_UserConfigType * UartConfigType);
void HAL_Uart_SendData(uint8_t instance, uint8_t * txPayload, uint8_t Payload_Size);
void HAL_Uart_ReceiveData(uint8_t instance, uint8_t * RxPayload, uint8_t Payload_Size);

#endif /* HAL_HAL_UART_HAL_UART_H_ */
