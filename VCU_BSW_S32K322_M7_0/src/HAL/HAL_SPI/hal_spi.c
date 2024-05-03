/*
 * hal_spi.c
 *
 *  Created on: 25-Apr-2024
 *      Author: INTEL
 */

#include "Lpspi_Ip_Sa_BOARD_InitPeripherals_PBcfg.h"
#include "Lpspi_Ip.h"
#include "Lpspi_Ip_Cfg.h"
#include "hal_spi.h"

void hal_spi_init(Lpspi_Ip_ConfigType * SPIConfigType, Lpspi_Ip_ExternalDeviceType * ExtDeviceType)
{
	 Lpspi_Ip_Init(SPIConfigType);
	 Lpspi_Ip_UpdateFrameSize(ExtDeviceType, 8U);
	 Lpspi_Ip_UpdateLsb(ExtDeviceType, FALSE);
	 Lpspi_Ip_UpdateTransferMode(SPIConfigType->Instance,LPSPI_IP_INTERRUPT);
}

void hal_spi_TxRxTransferData(Lpspi_Ip_ExternalDeviceType *External_Driver, uint8_t *TxBuf, uint8_t *RxBuf, uint16_t PayloadSize)
{
	Lpspi_Ip_SyncTransmit(External_Driver, TxBuf, RxBuf, PayloadSize, SPI_TXRX_TIMEOUT);
}
