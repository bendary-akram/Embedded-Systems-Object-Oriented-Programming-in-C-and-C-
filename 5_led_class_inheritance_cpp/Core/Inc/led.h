/*
 * led.h
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include <stdio.h>
#include "stm32f4xx.h"

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
/*
 * 1 change the struct to class
 * 2- add all function inside it
 * 3- change led_ctor to Led as class name to be clas constractor
 * 4- remove me pointer as by default there is this pointer*/
class Led{
private:
	LedColor_Type color;
	LedState_Type state;

public:
	Led(LedColor_Type _color,LedState_Type _state);
	void setState(LedState_Type _state);
	LedState_Type getState(void);
};

/*interface for led class*/



#endif /* INC_LED_H_ */
