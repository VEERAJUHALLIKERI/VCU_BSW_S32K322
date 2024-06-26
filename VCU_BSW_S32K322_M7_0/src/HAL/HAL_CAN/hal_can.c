/*
 * hal_can.c
 *
 *  Created on: 26-Apr-2024
 *      Author: INTEL
 */

#include "hal_can.h"
#include "FlexCAN_Ip.h"
#include "FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.h"

void HAL_CAN_Init(uint8_t instance,Flexcan_Ip_StateType * CanInitState, Flexcan_Ip_ConfigType * CanConfigType)
{
	/* can initialization */
	FlexCAN_Ip_Init(instance, CanInitState, CanConfigType);
}

void HAL_CAN_SendData(uint8_t instance, uint8_t MailBox,uint32_t MessageId, uint8_t* payload)
{

	/* CAN Receive messageS filters */
    Flexcan_Ip_DataInfoType rx_info = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = 8u,
            .is_polling = TRUE,
            .is_remote = FALSE
    };

    /* Send the information via CAN */
    if(FlexCAN_Ip_GetTransferStatus(instance, MailBox) != FLEXCAN_STATUS_BUSY)
    {
    	FlexCAN_Ip_Send(instance, MailBox, &rx_info, MessageId, payload);
    }

}

void HAL_CAN_ReceiveData(uint8_t instance, uint8_t MailBox, Flexcan_Ip_MsgBuffType* RxMsgBuf)
{
	if(FlexCAN_Ip_GetTransferStatus(instance, MailBox) != FLEXCAN_STATUS_BUSY)
	{
		/* Start receiving data in RX_MAILBOX. */
		FlexCAN_Ip_Receive(instance, MailBox, RxMsgBuf, 1);
	}
}

