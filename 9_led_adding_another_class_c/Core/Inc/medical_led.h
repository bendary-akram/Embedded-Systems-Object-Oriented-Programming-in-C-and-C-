/*
 * medical_led.h
 *
 *  Created on: Oct 3, 2020
 *      Author: akram
 */

#ifndef INC_MEDICAL_LED_H_
#define INC_MEDICAL_LED_H_
#include "led.h"

typedef enum{
	INFRARED		=910,
	NEAR_INFRARED	=880
}LedWaveLength_Type;

typedef struct{
	Led_Type super;
	LedWaveLength_Type wavelength;
}MedicalLed_Type;

void MedicalLed_ctor(MedicalLed_Type * const me,LedWaveLength_Type _wavelength,LedColor_Type _color,LedState_Type _state);
LedWaveLength_Type MedicalLed_getWavelength(MedicalLed_Type * const me);
void MedicalLed_setWavelength(MedicalLed_Type * const me,LedWaveLength_Type _wavelength);

#endif /* INC_MEDICAL_LED_H_ */
