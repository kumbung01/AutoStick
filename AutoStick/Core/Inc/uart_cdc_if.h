/*
 * uart_cdc_if.h
 *
 *  Created on: Mar 23, 2020
 *      Author: Administrator
 */

#ifndef UART_CDC_IF_H_
#define UART_CDC_IF_H_

#ifdef __cplusplus
extern "C" {
#endif

#define QUEUE_BUFFER_LENGTH 1024

#include "stm32f1xx_hal.h"
#include "types.h"

typedef struct
{
    int head, tail, data;
    uint8 Buffer[QUEUE_BUFFER_LENGTH];
}UARTQUEUE, *pUARTQUEUE;

extern UART_HandleTypeDef *pUartHandler;


void InitUartQueue(pUARTQUEUE pQueue);
void PutDataToUartQueue(pUARTQUEUE pQueue, uint8 data);
uint8 GetDataFromUartQueue(pUARTQUEUE pQueue);

#ifdef __cplusplus
}
#endif

#endif /* UART_CDC_IF_H_ */
