/*
 * hal_spi.h
 *
 *  Created on: 25-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_SPI_HAL_SPI_H_
#define HAL_HAL_SPI_HAL_SPI_H_

#define SPI_TXRX_TIMEOUT	50


void hal_spi_init(Lpspi_Ip_ConfigType * SPIConfigType, Lpspi_Ip_ExternalDeviceType * ExtDeviceType);
void hal_spi_TxRxTransferData(Lpspi_Ip_ExternalDeviceType *External_Driver, uint8_t *TxBuf, uint8_t *RxBuf, uint16_t PayloadSize);


#endif /* HAL_HAL_SPI_HAL_SPI_H_ */
