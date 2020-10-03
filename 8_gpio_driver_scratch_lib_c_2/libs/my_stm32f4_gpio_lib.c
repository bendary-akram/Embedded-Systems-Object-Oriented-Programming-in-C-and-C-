/*
 * my_stm32f4_gpio_lib.c
 *
 *  Created on: Sep 16, 2020
 *      Author: akram
 */

#include "libs/my_stm32f4_gpio_lib.h"
#define GPIO_NUMBER	16U
#define GPIO_MODE (0x03U)
#define GPIO_MODER_MODER0 (0x3U<<0)
#define GPIO_PUPDR_PUPDR0	(0x3U<<0)

//void LIB_GPIO_Init(Gpio_Type *GPIOx,GPIO_InitTypeDef *GPIO_Init)
//{
//	if((GPIO_Init->Mode==GPIO_MODER_OUTPUT_PP)||(GPIO_Init->Mode==GPIO_MODER_AF_PP))
//	{
//		GPIOx->Moder|=(GPIO_Init->Mode << (GPIO_Init->Pin*GPIO_MODER_NO_BITS));
//	}
//	else
//	{
//		GPIOx->Moder &=~(0x03 << GPIO_Init->Pin);
//	}
//
//
//}

void LIB_GPIO_Init(Gpio_Type *GPIOx, GPIO_InitTypeDef *GPIO_Init) {

	uint32_t position;
	uint32_t ioposition = 0x00U;
	uint32_t iocurrent = 0x00U;
	uint32_t temp = 0x00U;

	/* Configure the port pins */
	for (position = 0U; position < GPIO_NUMBER; position++) {
		/* Get the IO position */
		ioposition = 0x01U << position;
		/* Get the current IO position */
		iocurrent = (uint32_t) (1<<GPIO_Init->Pin) & ioposition;

		if (iocurrent == ioposition) {
			/* Configure IO Direction mode (Input, Output) */
			temp = GPIOx->Moder;
			temp &= ~(GPIO_MODER_MODER0 << (position * 2U));
			temp |= ((GPIO_Init->Mode & GPIO_MODE) << (position * 2U));
			GPIOx->Moder = temp;

			/* Activate the Pull-up or Pull down resistor for the current IO */
			temp = GPIOx->Pupdr;
			temp &= ~(GPIO_PUPDR_PUPDR0 << (position * 2U));
			temp |= ((GPIO_Init->Pull) << (position * 2U));
			GPIOx->Pupdr = temp;
		}
	}
}

GPIO_PinState LIB_GPIO_ReadPin(Gpio_Type *GPIOx,uint16_t GPIO_Pin){
	GPIO_PinState state=GPIO_PIN_RESET;

	if(GPIOx->Idr & (1<<GPIO_Pin))
	{
		state=GPIO_PIN_SET;
	}

	return (state);
}

void LIB_GPIO_WritePin(Gpio_Type *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState){

	if(PinState==GPIO_PIN_RESET)
	{
		GPIOx->Bsrr |=((uint32_t)(1<<GPIO_Pin)<<16U);
	}
	else
	{
		GPIOx->Bsrr |=(1<<GPIO_Pin);
	}
}
void LIB_GPIO_TogglePin(Gpio_Type *GPIOx,uint16_t GPIO_Pin){

	if(GPIOx->Odr & (1<<GPIO_Pin))
	{
		GPIOx->Odr &=~(1<<GPIO_Pin);

	}
	else
	{
		GPIOx->Odr |=(1<<GPIO_Pin);
	}
}


void __LIB_RCC_GPIOA_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOA_EN;

}
void __LIB_RCC_GPIOB_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOB_EN;

}
void __LIB_RCC_GPIOC_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOC_EN;

}
void __LIB_RCC_GPIOD_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOD_EN;

}
void __LIB_RCC_GPIOE_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOE_EN;

}
void __LIB_RCC_GPIOH_CLK_ENABLE(void){
	RCC->Ahb1enr|= GPIOH_EN;

}
