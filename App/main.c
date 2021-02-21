/*
 * Copyright (c) 2021
 * ViTech
 * All Rights Reserved
 *
 *
 * Description:
 *
 * Author: TuanNA
 *
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "stm32f10x.h"
#include "system_stm32f10x.h"
#include "stm32f10x_usart.h"
#include "systick.h"
#include "uart.h"

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func   main
 * @brief  None
 * @param  
 * @retval None
 */
int main(void)
{
    SystemInit();
    SYSTICK_Init();
    NVIC_Config_Init();
    UART_Init_All();
  while(1)
    {
        // BLUETOOTH_Proc();
        // POWER_Proc();
        // if(ble_SetLock == 1)
        // {
        //     ble_SetLock = 0;
        //     BLUETOOTH_Send(buff, sizeof(buff));
        // }
        // if(checkconnect == 1)
        // {
        //     checkconnect = 0;
        //     POWER_Send(buff, sizeof(buff));
        // }
	}
}