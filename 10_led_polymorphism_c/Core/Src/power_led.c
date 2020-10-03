/*
 * power_led.c
 *
 *  Created on: Sep 12, 2020
 *      Author: akram
 */

#include "power_led.h"






void PowerLed_ctor(PowerLed_Type * me,
			LedColor_Type _color,
			LedState_Type _state,
			LedCurrent_Type _current,
			LedDiameter_Type _diameter,
			LedVoltage_Type _voltage)
{
	static const struct LedVtable_Type vtable={
			(void (*)(Led_Type const * const  m))&PowerLed_runDiagnostics,
			(uint32_t (*)(Led_Type const * const m ))&PowerLed_computeEffi
	};
	led_ctor(&me->super,_color,_state);
	me->current=_current;
	me->diameter=_diameter;
	me->voltage=_voltage;

	me->super.vptr=&vtable;
}

void PowerLed_setCurrent(PowerLed_Type * me,LedCurrent_Type _current)
{
	me->current=_current;
}
led_elec_type PowerLed_getCurrent(PowerLed_Type const * me)
{
	return((led_elec_type)me->current);
}
void PowerLed_setDiameter(PowerLed_Type * me,LedDiameter_Type _diameter)
{
	me->diameter=_diameter;
}
led_dim_type PowerLed_getDiameter(PowerLed_Type const * me)
{
	return((led_dim_type)me->diameter);
}
void PowerLed_setVoltage(PowerLed_Type * me,LedVoltage_Type _voltage)
{
	me->voltage=_voltage;
}
led_elec_type PowerLed_getVoltage(PowerLed_Type const * me)
{
	return((led_elec_type)me->voltage);

}

led_elec_type PowerLed_computePower(PowerLed_Type const * me)
{
	return((led_elec_type)me->voltage*me->current);

}

void PowerLed_runDiagnostics(PowerLed_Type const * const me){
	/*Dummy effictancy calculation*/
	for(int i=0;i<20;i++)
		printf("power led Diago \n\r");
}
uint32_t PowerLed_computeEffi(PowerLed_Type const * const me){
	/*dummy effictancy calculation*/
	uint16_t in_2=50;
	uint16_t in_3=100;
	uint16_t out=100;
	uint16_t eff;

	/*if diameter is Diam_7MM out = in_1*/
	out= me->diameter==Diam_7MM?in_2:in_3;
	eff=(in_3/in_2)-out;

	printf("power led eff is %d \n\r",eff);

	return eff;
}



