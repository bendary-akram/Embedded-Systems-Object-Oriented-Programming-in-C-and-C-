/*
 * led.c
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */
#include "led.h"
#include "uart_driver.h"

void led_ctor(Led_Type * const me,LedColor_Type _color,LedState_Type _state)
{
	me->color=_color;
	me->state=_state;
}
void led_setState(Led_Type * const me,LedState_Type _state)
{
	me->state=_state;
	/*for debugging*/
//	printf("The %d Led is set to %d\n\r",me->color,me->state);
	switch(me->color)
	{
	case LD3_ORANGE:
		printf("The Orange Led is set to %d\n\r",me->state);
		break;
	case LD4_GREEN:
		printf("The Green Led is set to %d\n\r",me->state);
		break;
	case LD5_RED:
		printf("The Red Led is set to %d\n\r",me->state);
		break;
	case LD6_BLUE:
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

