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

class PowerLed:public Led
{
private:
	LedCurrent_Type current;
	LedDiameter_Type diameter;
	LedVoltage_Type voltage;
public:
	PowerLed(LedColor_Type _color,
			LedState_Type _state,
			LedCurrent_Type _current,
			LedDiameter_Type _diameter,
			LedVoltage_Type _voltage);

	void setCurrent(LedCurrent_Type _current);
	led_elec_type getCurrent(void);

	void setDiameter(LedDiameter_Type _diameter);
	led_dim_type getDiameter(void);

	void setVoltage(LedVoltage_Type _voltage);
	led_elec_type getVoltage(void);

	led_elec_type computePower(void);
};




#endif /* INC_POWER_LED_H_ */

