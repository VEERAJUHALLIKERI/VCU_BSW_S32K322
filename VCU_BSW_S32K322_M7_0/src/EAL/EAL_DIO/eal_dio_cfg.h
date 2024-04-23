/*
 * eal_dio_cfg.h
 *
 *  Created on: 23-Apr-2024
 *      Author: INTEL
 */

#ifndef EAL_EAL_DIO_EAL_DIO_CFG_H_
#define EAL_EAL_DIO_EAL_DIO_CFG_H_


#include "stdint.h"

/* Input GPIO pins */
#define PORT_IN_SENSE_CCP				PTE
#define PIN_IN_SENSE_CCP				16

#define PORT_IN_SENSE_CPP				PTD
#define PIN_IN_SENSE_CPP				01

#define PORT_IN_SENSE_VDC				PTD
#define PIN_IN_SENSE_VDC				0

#define PORT_IN_INT1_IMU				PTD
#define PIN_IN_INT1_IMU					15

#define PORT_IN_INT2_IMU				PTE
#define PIN_IN_INT2_IMU					09

#define PORT_IN_SOM_CTS					PTC
#define PIN_IN_SOM_CTS					08



/* Output GPIO pins */
#define PORT_OUT_CAN_STB				PTE
#define PIN_OUT_CAN_STB					11

#define PORT_OUT_EN_HSI					PTE
#define PIN_OUT_EN_HSI					03

#define PORT_OUT_BOOT_BLE				PTE
#define PIN_OUT_BOOT_BLE				12

#define PORT_OUT_RST_BLE				PTD
#define PIN_OUT_RST_BLE					17

#define PORT_OUT_PWR_AMPL				PTD
#define PIN_OUT_PWR_AMPL				16

#define PORT_OUT_PWRKEY_SOM				PTE
#define PIN_OUT_PWRKEY_SOM				08

#define PORT_OUT_DE_CONN				PTB
#define PIN_OUT_DE_CONN					05

#define PORT_OUT_WP_EEPROM				PTB
#define PIN_OUT_WP_EEPROM				04

#define PORT_OUT_CS0_HS1				PTD
#define PIN_OUT_CS0_HS1					07

#define PORT_OUT_CS1_HS1				PTD
#define PIN_OUT_CS1_HS1					06

#define PORT_OUT_CS0_HS2				PTD
#define PIN_OUT_CS0_HS2					05

#define PORT_OUT_CS1_HS2				PTD
#define PIN_OUT_CS1_HS2					12

#define PORT_OUT_CS0_HS3				PTD
#define PIN_OUT_CS0_HS3					11

#define PORT_OUT_CS1_HS3				PTD
#define PIN_OUT_CS1_HS3					10

#define PORT_OUT_SPLY_THR				PTC
#define PIN_OUT_SPLY_THR				01

#define PORT_OUT_HH_HS3					PTC
#define PIN_OUT_HH_HS3					17

#define PORT_OUT_HL_HS1					PTC
#define PIN_OUT_HL_HS1					16

#define PORT_OUT_LI_HS1					PTC
#define PIN_OUT_LI_HS1					15

#define PORT_OUT_RI_HS2					PTC
#define PIN_OUT_RI_HS2					14

#define PORT_OUT_HR_HS3					PTB
#define PIN_OUT_HR_HS3					03

#define PORT_OUT_MCUS_HS1				PTB
#define PIN_OUT_MCUS_HS1				02

#define PORT_OUT_ESCL1_HS2				PTC
#define PIN_OUT_ESCL1_HS2				13

#define PORT_OUT_BL_HS2					PTC
#define PIN_OUT_BL_HS2					12

#define PORT_OUT_RTS_SOM				PTC
#define PIN_OUT_RTS_SOM					09

#define PORT_OUT_CS_DSI					PTB
#define PIN_OUT_CS_DSI					17

#define PORT_OUT_EX12_HS1				PTB
#define PIN_OUT_EX12_HS1				12

#define PORT_OUT_FRST_HS2				PTB
#define PIN_OUT_FRST_HS2				10

#define PORT_OUT_FRST_HS1				PTB
#define PIN_OUT_FRST_HS1				11

#define PORT_OUT_ESCL2_HS2				PTC
#define PIN_OUT_ESCL2_HS2				0


/* user defined data type for the output */
#pragma pack(1)
typedef struct
{

	uint32_t can_stb	:	1;
	uint32_t en_hsi		:	1;
	uint32_t boost_ble	:	1;
	uint32_t rst_ble	:	1;
	uint32_t pwr_ampl	:	1;
	uint32_t pwrkey_som	:	1;
	uint32_t de_conn	:	1;
	uint32_t wp_eeprom	:	1;
	uint32_t cs0_hs1	:	1;
	uint32_t cs1_hs1	:	1;
	uint32_t cs0_hs2	:	1;
	uint32_t cs1_hs2	:	1;
	uint32_t cs0_hs3	:	1;
	uint32_t cs1_hs3	:	1;
	uint32_t sply_thr	:	1;
	uint32_t hh_hs3		:	1;
	uint32_t hl_hs1		:	1;
	uint32_t li_hs1		:	1;
	uint32_t ri_hs2		:	1;
	uint32_t hr_hs3		:	1;
	uint32_t mcus_hs1	:	1;
	uint32_t escl1_hs2	:	1;
	uint32_t bl_hs2		:	1;
	uint32_t rts_som	:	1;
	uint32_t cs_dsi		:	1;
	uint32_t ex12_hs1	:	1;
	uint32_t frst_hs2	:	1;
	uint32_t frst_hs1	:	1;
	uint32_t escl2_hs2	:	1;

}eal_dio_Output_st_t;


/* user defined data type for the input */
#pragma pack(1)
typedef struct
{
	uint8_t sense_ccp 	: 	1;
	uint8_t sense_cpp 	: 	1;
	uint8_t sense_vdc 	: 	1;
	uint8_t int1_imu  	:	1;
	uint8_t int2_imu  	: 	1;
	uint8_t som_cts		:	1;
}eal_dio_Input_st_t;



/* extern variables*/
extern eal_dio_Input_st_t 	eal_dio_Input_st;
extern eal_dio_Output_st_t 	eal_dio_Output_st;

#endif /* EAL_EAL_DIO_EAL_DIO_CFG_H_ */
