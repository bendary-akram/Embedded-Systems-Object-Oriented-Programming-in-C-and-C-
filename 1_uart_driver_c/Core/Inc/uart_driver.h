/*
 * uart_driver.h
 *
 *  Created on: Sep 11, 2020
 *      Author: akram
 */

#ifndef INC_UART_DRIVER_H_
#define INC_UART_DRIVER_H_
#include <stdio.h>

void uart2_Init(void);
void uart_send_data(uint8_t *datap,uint32_t size);
uint8_t uart_send_byte(uint8_t ch);
int receive_byte(void);


#endif /* INC_UART_DRIVER_H_ */
