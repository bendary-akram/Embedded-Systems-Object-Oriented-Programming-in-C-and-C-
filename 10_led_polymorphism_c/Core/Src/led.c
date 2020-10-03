/*
 * led.c
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */
#include "led.h"
#include "uart_driver.h"


static void run_dianostics(Led_Type const * const me);
static uint32_t compute_efficiency(Led_Type const * const me);


void led_ctor(Led_Type * const me,LedColor_Type _color,LedState_Type _state)
{
	/*INIT the virtual table*/
	static const struct LedVtable_Type vtable={
			&run_dianostics,
			&compute_efficiency,
	};
		me->vptr=&vtable;

		me->color=_color;
		me->state=_state;

		  __HAL_RCC_GPIOA_CLK_ENABLE();

		switch(me->color)
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
void led_setState(Led_Type * const me,LedState_Type _state)
{
	me->state=_state;

	switch(me->color)
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
		printf("The Orange Led is set to %d\n\r",me->state);
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
		printf("The Green Led is set to %d\n\r",me->state);
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
		printf("The Red Led is set to %d\n\r",me->state);
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
		printf("The Blue Led is set to %d\n\r",me->state);
		break;

	}
}
LedState_Type led_getState(Led_Type * const me)
{
	switch(me->color)
	{
	case LD3_ORANGE:
		printf("The Orange Led is currently %d\n\r",me->state);
		break;
	case LD4_GREEN:
		printf("The Green Led is currently %d\n\r",me->state);
		break;
	case LD5_RED:
		printf("The Red Led is currently %d\n\r",me->state);
		break;
	case LD6_BLUE:
		printf("The Blue Led is currently %d\n\r",me->state);
		break;

	}
	return(	me->state);
}


static void run_dianostics(Led_Type const * const me){
	(void)me;
}
static uint32_t compute_efficiency(Led_Type const * const me){
	(void)me;
	return 0U;
}

/*Polymorphism at work*/


void runSystemDiagnostics(Led_Type const *led_modules[]){
int i;
  for(i =0;led_modules[i] !=(Led_Type *)0;i++){

		Led_runDiagnostics_vcall(led_modules[i]);

}

}
void computeLedEffs(Led_Type const * led_modules[]){


	 int i;
	   for(i =0;led_modules[i] !=(Led_Type *)0;i++){

       Led_computeEffi_vcall(led_modules[i]);

		 }


}
