/*
 * medical_led.c
 *
 *  Created on: Oct 3, 2020
 *      Author: akram
 */
#include "medical_led.h"

void MedicalLed_ctor(MedicalLed_Type * const me,LedWaveLength_Type _wavelength,LedColor_Type _color,LedState_Type _state)
{
	me->wavelength=_wavelength;
	me->super.color=_color;
	me->super.state=_state;

}
LedWaveLength_Type MedicalLed_getWavelength(MedicalLed_Type * const me){
	return(me->wavelength);
}
void MedicalLed_setWavelength(MedicalLed_Type * const me,LedWaveLength_Type _wavelength){
	me->wavelength=_wavelength;
}

