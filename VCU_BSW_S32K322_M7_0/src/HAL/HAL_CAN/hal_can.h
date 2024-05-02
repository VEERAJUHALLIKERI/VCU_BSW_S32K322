/*
 * hal_can.h
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */

#ifndef HAL_HAL_CAN_HAL_CAN_H_
#define HAL_HAL_CAN_HAL_CAN_H_

#include "stdint.h"
#include "FlexCAN_Ip_Types.h"

void HAL_CAN_Init(void);
void HAL_CAN_SendData(uint8_t instance, uint8_t MailBox,uint32_t MessageId, uint8_t* payload);
void HAL_CAN_ReceiveData(uint8_t instance, uint8_t MailBox, Flexcan_Ip_MsgBuffType* RxMsgBuf);



#endif /* HAL_HAL_CAN_HAL_CAN_H_ */
