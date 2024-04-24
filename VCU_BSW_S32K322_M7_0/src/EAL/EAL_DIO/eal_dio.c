/*
 * eal_dio.c
 *
 *  Created on: 23-Apr-2024
 *      Author: INTEL
 */

#include "hal_dio.h"
#include "eal_dio_cfg.h"

void eal_dio_GetCombinedPinStatus(void)
{
	eal_dio_Input_st.sense_ccp = dio_hal_GetPinStatus(PORT_IN_SENSE_CCP, PIN_IN_SENSE_CCP);
	eal_dio_Input_st.sense_cpp = dio_hal_GetPinStatus(PORT_IN_SENSE_CPP, PIN_IN_SENSE_CPP);
	eal_dio_Input_st.sense_vdc = dio_hal_GetPinStatus(PORT_IN_SENSE_VDC, PIN_IN_SENSE_VDC);
	eal_dio_Input_st.int1_imu  = dio_hal_GetPinStatus(PORT_IN_INT1_IMU, PIN_IN_INT1_IMU);
	eal_dio_Input_st.int2_imu  = dio_hal_GetPinStatus(PORT_IN_INT2_IMU, PIN_IN_INT2_IMU);
	eal_dio_Input_st.som_cts   = dio_hal_GetPinStatus(PORT_IN_SOM_CTS, PIN_IN_SOM_CTS);
}

void eal_dio_UpdateCombinedPinStatus(void)
{
	dio_hal_UpdatePinStatus(PORT_OUT_CAN_STB, PIN_OUT_CAN_STB, eal_dio_Output_st.can_stb);
	dio_hal_UpdatePinStatus(PORT_OUT_EN_HSI, PIN_OUT_EN_HSI, eal_dio_Output_st.en_hsi);
	dio_hal_UpdatePinStatus(PORT_OUT_BOOT_BLE, PIN_OUT_BOOT_BLE, eal_dio_Output_st.boost_ble);
	dio_hal_UpdatePinStatus(PORT_OUT_RST_BLE, PIN_OUT_RST_BLE, eal_dio_Output_st.rst_ble);
	dio_hal_UpdatePinStatus(PORT_OUT_PWR_AMPL, PIN_OUT_PWR_AMPL, eal_dio_Output_st.pwr_ampl);
	dio_hal_UpdatePinStatus(PORT_OUT_PWRKEY_SOM, PIN_OUT_PWRKEY_SOM, eal_dio_Output_st.pwrkey_som);
	dio_hal_UpdatePinStatus(PORT_OUT_DE_CONN, PIN_OUT_DE_CONN, eal_dio_Output_st.de_conn);
	dio_hal_UpdatePinStatus(PORT_OUT_WP_EEPROM, PIN_OUT_WP_EEPROM, eal_dio_Output_st.wp_eeprom);
	dio_hal_UpdatePinStatus(PORT_OUT_CS0_HS1, PIN_OUT_CS0_HS1, eal_dio_Output_st.cs0_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_CS1_HS1, PIN_OUT_CS1_HS1, eal_dio_Output_st.cs1_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_CS0_HS2, PIN_OUT_CS0_HS2, eal_dio_Output_st.cs0_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_CS1_HS2, PIN_OUT_CS1_HS2, eal_dio_Output_st.cs1_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_CS0_HS3, PIN_OUT_CS0_HS3, eal_dio_Output_st.cs0_hs3);
	dio_hal_UpdatePinStatus(PORT_OUT_CS1_HS3, PIN_OUT_CS1_HS3, eal_dio_Output_st.cs1_hs3);
	dio_hal_UpdatePinStatus(PORT_OUT_SPLY_THR, PIN_OUT_SPLY_THR, eal_dio_Output_st.sply_thr);
	dio_hal_UpdatePinStatus(PORT_OUT_HH_HS3, PIN_OUT_HH_HS3, eal_dio_Output_st.hh_hs3);
	dio_hal_UpdatePinStatus(PORT_OUT_HL_HS1, PIN_OUT_HL_HS1, eal_dio_Output_st.hl_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_LI_HS1, PIN_OUT_LI_HS1, eal_dio_Output_st.li_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_RI_HS2, PIN_OUT_RI_HS2, eal_dio_Output_st.ri_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_HR_HS3, PIN_OUT_HR_HS3, eal_dio_Output_st.hr_hs3);
	dio_hal_UpdatePinStatus(PORT_OUT_MCUS_HS1, PIN_OUT_MCUS_HS1, eal_dio_Output_st.mcus_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_ESCL1_HS2, PIN_OUT_ESCL1_HS2, eal_dio_Output_st.escl1_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_BL_HS2, PIN_OUT_BL_HS2, eal_dio_Output_st.bl_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_RTS_SOM, PIN_OUT_RTS_SOM, eal_dio_Output_st.rts_som);
	dio_hal_UpdatePinStatus(PORT_OUT_CS_DSI, PIN_OUT_CS_DSI, eal_dio_Output_st.cs_dsi);
	dio_hal_UpdatePinStatus(PORT_OUT_EX12_HS1, PIN_OUT_EX12_HS1, eal_dio_Output_st.ex12_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_FRST_HS2, PIN_OUT_FRST_HS2, eal_dio_Output_st.frst_hs2);
	dio_hal_UpdatePinStatus(PORT_OUT_FRST_HS1, PIN_OUT_FRST_HS1, eal_dio_Output_st.frst_hs1);
	dio_hal_UpdatePinStatus(PORT_OUT_ESCL2_HS2, PIN_OUT_ESCL2_HS2, eal_dio_Output_st.escl2_hs2);
}
