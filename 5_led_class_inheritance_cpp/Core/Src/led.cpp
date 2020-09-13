/*
 * led.cpp
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */
#include "led.h"
#include "uart_driver.h"

Led::Led(LedColor_Type _color,LedState_Type _state)
/*option 2*/
:color(_color),
 state(_state)
{
	/*option 1*/
		//this->color=_color;
		//this->state=_state;

		  __HAL_RCC_GPIOA_CLK_ENABLE();

		switch(this->color)
		{
		case LD3_ORANGE:
			  LED_PORT->MODER|=LED_ORANGE_MODE_BIT;
			  if(_state==ON)
			  {
				  LED_PORT->ODR |=LED_ORANGE_ODR;
			  }
			  else
			  {
				  LED_PORT->ODR &=~LED_ORANGE_ODR;
			  }

			printf("The Orange Led is initialized\n\r");
			break;
		case LD4_GREEN:
			  LED_PORT->MODER|=LED_GREEN_MODE_BIT;
			  if(_state==ON)
			  {
				  LED_PORT->ODR |=LED_GREEN_ODR;
			  }
			  else
			  {
				  LED_PORT->ODR &=~LED_GREEN_ODR;
			  }
			printf("The Green Led is initialized\n\r");
			break;
		case LD5_RED:
			  LED_PORT->MODER|=LED_RED_ODR;
			  if(_state==ON)
			  {
				  LED_PORT->ODR |=LED_RED_ODR;
			  }
			  else
			  {
				  LED_PORT->ODR &=~LED_ORANGE_ODR;
			  }
			printf("The Red Led is initialized\n\r");
			break;
		case LD6_BLUE:
			  LED_PORT->MODER|=LED_BLUE_MODE_BIT;
			  if(_state==ON)
			  {
				  LED_PORT->ODR |=LED_BLUE_ODR;
			  }
			  else
			  {
				  LED_PORT->ODR &=~LED_BLUE_ODR;
			  }
			printf("The Blue Led is initialized\n\r");
			break;

		}

}
void Led::setState(LedState_Type _state)
{
	this->state=_state;

	switch(this->color)
	{
	case LD3_ORANGE:
		  if(_state==ON)
		  {
			  LED_PORT->ODR |=LED_ORANGE_ODR;
		  }
		  else
		  {
			  LED_PORT->ODR &=~LED_ORANGE_ODR;
		  }
		printf("The Orange Led is set to %d\n\r",this->state);
		break;
	case LD4_GREEN:
		  if(_state==ON)
		  {
			  LED_PORT->ODR |=LED_GREEN_ODR;
		  }
		  else
		  {
			  LED_PORT->ODR &=~LED_GREEN_ODR;
		  }
		printf("The Green Led is set to %d\n\r",this->state);
		break;
	case LD5_RED:
		  if(_state==ON)
		  {
			  LED_PORT->ODR |=LED_RED_ODR;
		  }
		  else
		  {
			  LED_PORT->ODR &=~LED_RED_ODR;
		  }
		printf("The Red Led is set to %d\n\r",this->state);
		break;
	case LD6_BLUE:
		  if(_state==ON)
		  {
			  LED_PORT->ODR |=LED_BLUE_ODR;
		  }
		  else
		  {
			  LED_PORT->ODR &=~LED_BLUE_ODR;
		  }
		printf("The Blue Led is set to %d\n\r",this->state);
		break;

	}
}
LedState_Type Led::getState(void)
{
	switch(this->color)
	{
	case LD3_ORANGE:
		printf("The Orange Led is currently %d\n\r",this->state);
		break;
	case LD4_GREEN:
		printf("The Green Led is currently %d\n\r",this->state);
		break;
	case LD5_RED:
		printf("The Red Led is currently %d\n\r",this->state);
		break;
	case LD6_BLUE:
		printf("The Blue Led is currently %d\n\r",this->state);
		break;

	}
	return(	this->state);
}




