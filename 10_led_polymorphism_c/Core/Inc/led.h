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
typedef struct
{
	struct LedVtable_Type const * vptr;	/*virtual pointer*/
	LedColor_Type color;
	LedState_Type state;
}Led_Type;

/*Led virtual pointer*/
struct LedVtable_Type{
	void (*run_diagnostics)(Led_Type const * const me);
	uint32_t (*compute_efficiency)(Led_Type const * const me);
};

/* if we used the following way , it will give you compiler error
 * typedef struct {
	void (*run_diagnostics)(Led_Type const * const me);
	uint32_t (*compute_efficiency)(Led_Type const * const me);
}LedVtable_Type;
 *
 * */

/*interface for led class*/
void led_ctor(Led_Type * const me,LedColor_Type _color,LedState_Type _state);
void led_setState(Led_Type * const me,LedState_Type _state);
LedState_Type led_getState(Led_Type * const me);


/*method 1*/
/*add inline as we implement the function in header file*/
/*and we used inline to reduce the overhead of function calling*/
/*to make the compiler to supports inline , you should enable C99 mode*/
static inline void Led_runDiagnostics_vcall(Led_Type const * const me){
	(*me->vptr->run_diagnostics)(me);
}
static inline uint32_t Led_computeEffi_vcall(Led_Type const * const me){
	return (*me->vptr->compute_efficiency)(me);
}

/*method 2*/
#define LED_RUN_DIAG_VCALL(me) ((*me->vptr->run_diagnostics)(me))
#define LED_GET_EFFI_VCALL(me) ((*me->vptr->compute_efficiency)(me))

///////////////////////////////////////////

void runSystemDiagnostics(Led_Type const *led_modules[]);
void computeLedEffs(Led_Type const * led_modules[]);
#endif /* INC_LED_H_ */
