/*
 * my_stm32f4_gpio_driver.h
 *
 *  Created on: Sep 15, 2020
 *      Author: akram
 */

#ifndef HAL_INC_MY_STM32F4_GPIO_DRIVER_H_
#define HAL_INC_MY_STM32F4_GPIO_DRIVER_H_

#include <stdio.h>

#define __IO	volatile


////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
/*GPIOx Registers*/
typedef struct{
	__IO uint32_t Moder;
	__IO uint32_t Otyper;
__IO uint32_t Ospeedr;
__IO uint32_t Pupdr;
__IO uint32_t Idr;
__IO uint32_t Odr;
__IO uint32_t Bsrr;
__IO uint32_t Lckr;
__IO uint32_t Afrl;
__IO uint32_t Afrh;
}Gpio_Type;



/*RCC Registers*/
typedef struct{
__IO uint32_t Cr;
__IO uint32_t Pllcfgr;
__IO uint32_t Cfgr;
__IO uint32_t Cir;
__IO uint32_t Ahb1rstr;
__IO uint32_t Ahb2rstr;
__IO uint32_t Ahb3rstr;
__IO uint32_t Reserved_1;
__IO uint32_t Apb1rstr;
__IO uint32_t Apb2rstr;
__IO uint32_t Reserved_2;
__IO uint32_t Reserved_3;
__IO uint32_t Ahb1enr;
__IO uint32_t Ahb2enr;
__IO uint32_t Ahb3enr;
__IO uint32_t Reserved_4;
__IO uint32_t Apb1enr;
__IO uint32_t Apb2enr;
__IO uint32_t Reserved_5;
__IO uint32_t Reserved_6;
__IO uint32_t Ahb1lpenr;
__IO uint32_t Ahb2lpenr;
__IO uint32_t Ahb3lpenr;
__IO uint32_t Reserved_7;
__IO uint32_t Apb1lpenr;
__IO uint32_t Apb2lpenr;
__IO uint32_t Reserved_8;
__IO uint32_t Reserved_9;
__IO uint32_t Bdcr;
__IO uint32_t Csr;
__IO uint32_t Reserved_10;
__IO uint32_t Reserved_11;
__IO uint32_t Sscgr;
__IO uint32_t Plli2scfgr;
__IO uint32_t Pllsaicfgr;
__IO uint32_t Dckcfgr;
}Rcc_Type;

#define PERIPH_BASE			(0x40000000)
#define AHB1_BASE			(PERIPH_BASE + 0x20000UL)//(0x40020000)

#define GPIOA		( Gpio_Type *)(AHB1_BASE + 0x00U)
#define GPIOB		( Gpio_Type *)(AHB1_BASE + 0x400U)
#define GPIOC		( Gpio_Type *)(AHB1_BASE + 0x800U)//(0x40020800)
#define GPIOD		( Gpio_Type *)(AHB1_BASE + 0xC00U)//(0x40020C00)
#define GPIOE		( Gpio_Type *)(AHB1_BASE + 0x1000U)//(0x40021000)
#define GPIOF		( Gpio_Type *)(AHB1_BASE + 0x1400U)//(0x40021400)
#define GPIOG		( Gpio_Type *)(AHB1_BASE + 0x1800U)//(0x40021800)
#define GPIOH		( Gpio_Type *)(AHB1_BASE + 0x1C00U)//(0x40021C00)
#define GPIOI		( Gpio_Type *)(AHB1_BASE + 0x2200U)//(0x40022000)


#define RCC		((volatile Rcc_Type *)(AHB1_BASE + 0x3800U))//0x40023800)

#endif /* HAL_INC_MY_STM32F4_GPIO_DRIVER_H_ */
