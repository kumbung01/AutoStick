/*
 * uart_cdc_if.c
 *
 *  Created on: Mar 23, 2020
 *      Author: Administrator
 */

#include "uart_cdc_if.h"

UART_HandleTypeDef *pUartHandler;

void InitUartQueue(pUARTQUEUE pQueue)
{
    pQueue->data = pQueue->head = pQueue->tail = 0;

}

void InitUartHandler(UART_HandleTypeDef *UartHandler)
{
	pUartHandler=UartHandler;
}

void PutDataToUartQueue(pUARTQUEUE pQueue, uint8 data)
{
    if (pQueue->data == QUEUE_BUFFER_LENGTH)
        GetDataFromUartQueue(pQueue);
    pQueue->Buffer[pQueue->head++] = data;
    if (pQueue->head == QUEUE_BUFFER_LENGTH) pQueue->head = 0;
    pQueue->data++;
}


uint8 GetDataFromUartQueue(pUARTQUEUE pQueue)
{
    uint8 ch;

    ch = pQueue->Buffer[pQueue->tail++];
    if (pQueue->tail == QUEUE_BUFFER_LENGTH) pQueue->tail = 0;
    pQueue->data--;
    return ch;
}
