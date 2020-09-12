/*
 * uart_driver.cpp
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */

#include "uart_driver.h"
#include "stm32f4xx_hal.h"

static void uart_gpio_init(void)
{
	/*GPIO clock init */
	__HAL_RCC_GPIOA_CLK_ENABLE();

	/*init gpio as alternative function*/
	GPIOA->MODER|= (0x02UL<<GPIO_MODER_MODER2_Pos)|(0x02UL<<GPIO_MODER_MODER3_Pos);	//alternative function
	GPIOA->OSPEEDR|= (3<<GPIO_OSPEEDR_OSPEED2_Pos)|(3<<GPIO_OSPEEDR_OSPEED3_Pos);	//Very high speed
	GPIOA->PUPDR|= (1<<GPIO_PUPDR_PUPD2_Pos)|(1<<GPIO_PUPDR_PUPD3_Pos);	//PUll up
	GPIOA->AFR[0]|= (7<<GPIO_AFRL_AFSEL2_Pos)|(7<<GPIO_AFRL_AFSEL3_Pos);	//AF7 as uart2

}

void uart2_Init(void)
{
	uint32_t pclk=0;
	/*inir uart pins*/
	uart_gpio_init();
	/*uart clock init */
	__HAL_RCC_USART2_CLK_ENABLE();
	// tx and rx enable
	USART2->CR1|=USART_CR1_RE|USART_CR1_TE;
	//baud rate
	pclk = HAL_RCC_GetPCLK1Freq();
	USART2->BRR  = UART_BRR_SAMPLING16(pclk, 115200);
	/*uart enable*/
	USART2->CR1|=USART_CR1_UE;
}


uint8_t uart_send_byte(uint8_t ch)
{
	while(!(USART2->SR & (USART_SR_TXE))){} //TXE
	USART2->DR=ch;
	return ch;
}

void uart_send_data(uint8_t *datap,uint32_t size)
{
	uint32_t i=0;
	while(i<size)
	{
		uart_send_byte(*datap++);
		i++;
	}
}

int receive_byte(void)
{
	while(!(USART2->SR & (USART_SR_RXNE))){} //RXNE
	return USART2->DR;
}
#ifdef __GNUC__
/* You need this if you want use to redirect printf to uart */
int __io_putchar(int ch)
{
	uint8_t c[1];
	c[0] = ch & 0x00FF;
	uart_send_byte(c[0]);

	return ch;
}

int _read(int file, char *ptr, int len)
{
	int DataIdx;
	int c;
	for (DataIdx = 0; DataIdx < len; DataIdx++)
	{
		c=receive_byte();
		*ptr++ =c;

		if(c=='\r')
		{
			return (DataIdx+1);
		}
	}
return len;
}
#else

struct __FILE {int handle;};
FILE __stdin = {0};
FILE __stdout = {1};
FILE __stderr = {2};

int fgetc( FILE *f)
{
	int c;
	c=receive_byte();
	if(c=='\r')
	{
		uart_send_byte(c);
		c='\n';
	}
	uart_send_byte(c);
return c;
}
int fputc( int c,FILE *f)
{
	return uart_send_byte(c);

}

#endif




