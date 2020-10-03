/*
 * medical_led.c
 *
 *  Created on: Oct 3, 2020
 *      Author: akram
 */
#include "medical_led.h"

void MedicalLed_ctor(MedicalLed_Type * const me,LedWaveLength_Type _wavelength,LedColor_Type _color,LedState_Type _state)
{
	static const struct LedVtable_Type vtable={
			(void (*)(Led_Type const * const  m))&MedicalLed_runDiagnostics,
			(uint32_t (*)(Led_Type const * const m ))&MedicalLed_computeEffi
	};
	/*me->super->vptr is intialized insde the following function*/
	led_ctor(&me->super,_color,_state);

	me->wavelength=_wavelength;
	/*me->super->vptr is reinitialized to overwrite the previous init*/
	me->super.vptr=&vtable;

}
LedWaveLength_Type MedicalLed_getWavelength(MedicalLed_Type * const me){
	return(me->wavelength);
}
void MedicalLed_setWavelength(MedicalLed_Type * const me,LedWaveLength_Type _wavelength){
	me->wavelength=_wavelength;
}


void MedicalLed_runDiagnostics(MedicalLed_Type const * const me)
{
	/*Dummy effictancy calculation*/
	for(int i=0;i<20;i++)
		printf("medical led Diago \n\r");

}
uint32_t MedicalLed_computeEffi(MedicalLed_Type const * const me){

	/*dummey effictancy calculation*/
	uint16_t in_2=50;
	uint16_t in_3=100;
	uint16_t out=100;
	uint16_t eff;

	/*if wavelength is INFRA out = in_1*/
	out= me->wavelength==INFRARED?in_2:in_3;
	eff=(in_3/in_2)-out;

	printf("medical led eff is %d \n\r",eff);

	return eff;
}
