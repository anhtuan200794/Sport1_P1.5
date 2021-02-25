/*
 *  uart.c
 *
 *  Created on: Dec 25, 2020
 *      Author: Tuan NA
 */

#include "gpio.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
/******************************************************************************/
/*                              DECLARE VARIABLE                              */
/******************************************************************************/

/******************************************************************************/
/*                              FUNCTION                                      */
/******************************************************************************/

void GPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(CHECK_GPIO_CLK, ENABLE);
    /* Configure the GPIO_BUTTON pin */
    GPIO_InitStructure.GPIO_Pin = CHECK_GPIO_Pin;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_Init(CHECK_GPIO_PORT, &GPIO_InitStructure);
}

uint8_t GPIO_GET_STATUS(void)
{
    uint8_t Pin_status = 0x00;
    Pin_status = GPIO_ReadInputDataBit(CHECK_GPIO_PORT,CHECK_GPIO_Pin);
    return Pin_status;
}
