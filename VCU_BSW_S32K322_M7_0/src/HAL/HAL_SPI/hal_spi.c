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

void hal_spi_init(void)
{
	 Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_Instance_0_BOARD_InitPeripherals);
	 Lpspi_Ip_UpdateFrameSize(&Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_Instance_0_BOARD_InitPeripherals, 8U);
	 Lpspi_Ip_UpdateLsb(&Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_Instance_0_BOARD_InitPeripherals, FALSE);
	 Lpspi_Ip_UpdateTransferMode(Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_Instance_0_BOARD_InitPeripherals.Instance,LPSPI_IP_INTERRUPT);
}

void hal_spi_TxRxTransferData(Lpspi_Ip_ExternalDeviceType *External_Driver, uint8_t *TxBuf, uint8_t *RxBuf, uint16_t PayloadSize)
{
	Lpspi_Ip_SyncTransmit(External_Driver, TxBuf, RxBuf, PayloadSize, SPI_TXRX_TIMEOUT);
}
