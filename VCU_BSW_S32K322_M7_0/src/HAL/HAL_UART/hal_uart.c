/*
 * hal_uart.c
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */
#include "hal_uart.h"
#include "Lpuart_Uart_Ip.h"

void HAL_Uart_Init(uint8 Instance, Lpuart_Uart_Ip_UserConfigType * UartConfigType)
{
	 Lpuart_Uart_Ip_Init(Instance, UartConfigType);
}

void HAL_Uart_SendData(uint8_t instance, uint8_t * txPayload, uint8_t Payload_Size)
{
	uint32_t BytesRemaning = 0;
	Lpuart_Uart_Ip_GetTransmitStatus(instance, &BytesRemaning);
	/* Send data via LPUART */
	if(BytesRemaning == 0)
	{
		Lpuart_Uart_Ip_AsyncSend(instance, txPayload, Payload_Size);
	}
}

void HAL_Uart_ReceiveData(uint8_t instance, uint8_t * RxPayload, uint8_t Payload_Size)
{
	uint32_t BytesRemaning = 0;
	Lpuart_Uart_Ip_GetReceiveStatus(instance, &BytesRemaning);
	if(BytesRemaning == 0)
	{
		Lpuart_Uart_Ip_AsyncReceive(instance, RxPayload, Payload_Size);
	}
}
