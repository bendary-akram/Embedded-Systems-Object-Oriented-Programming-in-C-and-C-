/*
 * main.c
 *
 *  Created on: Sep 13, 2020
 *      Author: akram
 */
#include "hal/inc/my_stm32f4_gpio_driver.h"

#define LED_PORT	(GPIOD)

#define	LED_ORANGE_PIN	(13)//(GPIO_PIN_13)
#define	LED_GREEN_PIN	(12)
#define	LED_RED_PIN		(14)
#define	LED_BLUE_PIN	(15)

#define	LED_ORANGE_ODR	(1U<<LED_ORANGE_PIN)//(GPIO_PIN_13)
#define	LED_GREEN_ODR	(1U<<LED_GREEN_PIN)
#define	LED_RED_ODR		(1U<<LED_RED_PIN)
#define	LED_BLUE_ODR	(1U<<LED_BLUE_PIN)


#define	LED_ORANGE_MODE_BIT	(1U<<26)
#define	LED_GREEN_MODE_BIT	(1U<<24)
#define	LED_RED_MODE_BIT	(1U<<28)
#define	LED_BLUE_MODE_BIT	(1U<<30)

int main(void)
{
	RCC->Cr|=(1UL<<16)|(1UL<<0);
	RCC->Ahb1enr|=(1<<3);

	  LED_PORT->Moder|=LED_ORANGE_MODE_BIT;

	  LED_PORT->Odr |=LED_ORANGE_ODR;



	while(1)
	{
		for(int i=0;i<999999;i++)
		{}
		  LED_PORT->Odr &=~LED_ORANGE_ODR;

			for(int i=0;i<999999;i++)
			{}
			  LED_PORT->Odr |=LED_ORANGE_ODR;
	}

return 0;
}

