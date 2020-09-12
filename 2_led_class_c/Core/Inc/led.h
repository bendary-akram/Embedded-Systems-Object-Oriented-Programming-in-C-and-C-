/*
 * led.h
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include <stdio.h>

/*leds*/
typedef enum
{
	LD3_ORANGE=0,
	LD4_GREEN,
	LD5_RED,
	LD6_BLUE
}LedColor_Type;

/*led stats*/
typedef enum
{
	OFF=0,
	ON
}LedState_Type;

/*LEDs attributes*/
typedef struct
{
	LedColor_Type color;
	LedState_Type state;
}Led_Type;

/*interface for led class*/
void led_ctor(Led_Type * const me,LedColor_Type _color,LedState_Type _state);
void led_setState(Led_Type * const me,LedState_Type _state);
LedState_Type led_getState(Led_Type * const me);


#endif /* INC_LED_H_ */
