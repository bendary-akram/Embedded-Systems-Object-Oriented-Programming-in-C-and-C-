/*
 * power_led.h
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */

#ifndef INC_POWER_LED_H_
#define INC_POWER_LED_H_
#include "led.h"
#include <stdio.h>

typedef uint8_t		led_elec_type;
typedef uint32_t	led_dim_type;

typedef enum
{
	CURR_LOW	=10,	//low current
	CURR_NORMAL	=20,	//Normal current
	CURR_HIGH	=35,	//Normal current
	CURR_VERY_HIGH	=60,	//Normal current
}LedCurrent_Type;

typedef enum
{
	Diam_2MM	=2,	/*2MM*/
	Diam_5MM	=5,
	Diam_7MM	=7,

}LedDiameter_Type;
typedef enum
{
	VOL_LOW=3,		/*3 voltage*/
	VOL_NORMAL=5,	/*5 V*/
	VOL_HIGH=9		// 9 v
}LedVoltage_Type;

typedef struct
{
	Led_Type super;
	LedCurrent_Type current;
	LedDiameter_Type diameter;
	LedVoltage_Type voltage;
}PowerLed_Type;

void PowerLed_ctor(PowerLed_Type * me,
			LedColor_Type _color,
			LedState_Type _state,
			LedCurrent_Type _current,
			LedDiameter_Type _diameter,
			LedVoltage_Type _voltage);

void PowerLed_setCurrent(PowerLed_Type * me,LedCurrent_Type _current);
led_elec_type PowerLed_getCurrent(PowerLed_Type const * me);

void PowerLed_setDiameter(PowerLed_Type * me,LedDiameter_Type _diameter);
led_dim_type PowerLed_getDiameter(PowerLed_Type const * me);

void PowerLed_setVoltage(PowerLed_Type * me,LedVoltage_Type _voltage);
led_elec_type PowerLed_getVoltage(PowerLed_Type const * me);

led_elec_type PowerLed_computePower(PowerLed_Type const * me);

void PowerLed_runDiagnostics(PowerLed_Type const * const me);
uint32_t PowerLed_computeEffi(PowerLed_Type const * const me);

#endif /* INC_POWER_LED_H_ */

