/*
 * ser_init.c
 *
 *  Created on: 24-Apr-2024
 *      Author: INTEL
 */

#include "Clock_Ip.h"
#include "Clock_Ip_Cfg.h"

void software_Initilization(void)
{

}

void Hardware_Initilization(void)
{
	 Clock_Ip_Init(Clock_Ip_aClockConfig);
}
