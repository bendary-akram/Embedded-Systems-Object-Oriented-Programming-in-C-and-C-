/*
 * power_led.cpp
 *
 *  Created on: Sep 13, 2020
 *      Author: akram
 */

#include "power_led.h"



PowerLed::PowerLed(LedColor_Type _color,
			LedState_Type _state,
			LedCurrent_Type _current,
			LedDiameter_Type _diameter,
			LedVoltage_Type _voltage):
			Led(_color,_state),
			current(_current),
			diameter(_diameter),
			voltage(_voltage)
{
}

void PowerLed::setCurrent(LedCurrent_Type _current)
{
	this->current=_current;
}
led_elec_type PowerLed::getCurrent(void)
{
	return((led_elec_type)this->current);
}
void PowerLed::setDiameter(LedDiameter_Type _diameter)
{
	this->diameter=_diameter;
}
led_dim_type PowerLed::getDiameter(void)
{
	return((led_dim_type)this->diameter);
}
void PowerLed::setVoltage(LedVoltage_Type _voltage)
{
	this->voltage=_voltage;
}
led_elec_type PowerLed::getVoltage(void)
{
	return((led_elec_type)this->voltage);

}

led_elec_type PowerLed::computePower(void)
{
	return((led_elec_type)this->voltage*this->current);

}









