/*
 * hal_gpio.h
 *
 *  Created on: Sep 13, 2020
 *      Author: akram
 */

#include <stdio.h>

#define __IO	volatile

/*GPIOx Registers Bits*/

/*GPIOx_MODER Register bits*/
#define GPIO_MODER_0	(1UL<<0)
#define GPIO_MODER_1	(1UL<<2)
#define GPIO_MODER_2	(1UL<<4)
#define GPIO_MODER_3	(1UL<<6)
#define GPIO_MODER_4	(1UL<<8)
#define GPIO_MODER_5	(1UL<<10)
#define GPIO_MODER_6	(1UL<<12)
#define GPIO_MODER_7	(1UL<<14)
#define GPIO_MODER_8	(1UL<<16)
#define GPIO_MODER_9	(1UL<<18)
#define GPIO_MODER_10	(1UL<<20)
#define GPIO_MODER_11	(1UL<<22)
#define GPIO_MODER_12	(1UL<<24)
#define GPIO_MODER_13	(1UL<<26)
#define GPIO_MODER_14	(1UL<<28)
#define GPIO_MODER_15	(1UL<<30)

/*GPIOx_OTYPER Register bits*/
#define GPIO_OTYPER_0	(1UL<<0)
#define GPIO_OTYPER_1	(1UL<<1)
#define GPIO_OTYPER_2	(1UL<<2)
#define GPIO_OTYPER_3	(1UL<<3)
#define GPIO_OTYPER_4	(1UL<<4)
#define GPIO_OTYPER_5	(1UL<<5)
#define GPIO_OTYPER_6	(1UL<<6)
#define GPIO_OTYPER_7	(1UL<<7)
#define GPIO_OTYPER_8	(1UL<<8)
#define GPIO_OTYPER_9	(1UL<<9)
#define GPIO_OTYPER_10	(1UL<<10)
#define GPIO_OTYPER_11	(1UL<<11)
#define GPIO_OTYPER_12	(1UL<<12)
#define GPIO_OTYPER_13	(1UL<<13)
#define GPIO_OTYPER_14	(1UL<<14)
#define GPIO_OTYPER_15	(1UL<<15)

/*GPIOx_OSPEEDR Register bits*/
#define GPIO_OSPEEDR_0	(1UL<<0)
#define GPIO_OSPEEDR_1	(1UL<<2)
#define GPIO_OSPEEDR_2	(1UL<<4)
#define GPIO_OSPEEDR_3	(1UL<<6)
#define GPIO_OSPEEDR_4	(1UL<<8)
#define GPIO_OSPEEDR_5	(1UL<<10)
#define GPIO_OSPEEDR_6	(1UL<<12)
#define GPIO_OSPEEDR_7	(1UL<<14)
#define GPIO_OSPEEDR_8	(1UL<<16)
#define GPIO_OSPEEDR_9	(1UL<<18)
#define GPIO_OSPEEDR_10	(1UL<<20)
#define GPIO_OSPEEDR_11	(1UL<<22)
#define GPIO_OSPEEDR_12	(1UL<<24)
#define GPIO_OSPEEDR_13	(1UL<<26)
#define GPIO_OSPEEDR_14	(1UL<<28)
#define GPIO_OSPEEDR_15	(1UL<<30)

/*GPIOx_PUPDR Register bits*/
#define GPIO_PUPDR_0	(1UL<<0)
#define GPIO_PUPDR_1	(1UL<<2)
#define GPIO_PUPDR_2	(1UL<<4)
#define GPIO_PUPDR_3	(1UL<<6)
#define GPIO_PUPDR_4	(1UL<<8)
#define GPIO_PUPDR_5	(1UL<<10)
#define GPIO_PUPDR_6	(1UL<<12)
#define GPIO_PUPDR_7	(1UL<<14)
#define GPIO_PUPDR_8	(1UL<<16)
#define GPIO_PUPDR_9	(1UL<<18)
#define GPIO_PUPDR_10	(1UL<<20)
#define GPIO_PUPDR_11	(1UL<<22)
#define GPIO_PUPDR_12	(1UL<<24)
#define GPIO_PUPDR_13	(1UL<<26)
#define GPIO_PUPDR_14	(1UL<<28)
#define GPIO_PUPDR_15	(1UL<<30)

/*GPIOx_IDR Register bits*/
#define GPIO_IDR_0	(1UL<<0)
#define GPIO_IDR_1	(1UL<<1)
#define GPIO_IDR_2	(1UL<<2)
#define GPIO_IDR_3	(1UL<<3)
#define GPIO_IDR_4	(1UL<<4)
#define GPIO_IDR_5	(1UL<<5)
#define GPIO_IDR_6	(1UL<<6)
#define GPIO_IDR_7	(1UL<<7)
#define GPIO_IDR_8	(1UL<<8)
#define GPIO_IDR_9	(1UL<<9)
#define GPIO_IDR_10	(1UL<<10)
#define GPIO_IDR_11	(1UL<<11)
#define GPIO_IDR_12	(1UL<<12)
#define GPIO_IDR_13	(1UL<<13)
#define GPIO_IDR_14	(1UL<<14)
#define GPIO_IDR_15	(1UL<<15)

/*GPIOx_ODR Register bits*/
#define GPIO_ODR_0	(1UL<<0)
#define GPIO_ODR_1	(1UL<<1)
#define GPIO_ODR_2	(1UL<<2)
#define GPIO_ODR_3	(1UL<<3)
#define GPIO_ODR_4	(1UL<<4)
#define GPIO_ODR_5	(1UL<<5)
#define GPIO_ODR_6	(1UL<<6)
#define GPIO_ODR_7	(1UL<<7)
#define GPIO_ODR_8	(1UL<<8)
#define GPIO_ODR_9	(1UL<<9)
#define GPIO_ODR_10	(1UL<<10)
#define GPIO_ODR_11	(1UL<<11)
#define GPIO_ODR_12	(1UL<<12)
#define GPIO_ODR_13	(1UL<<13)
#define GPIO_ODR_14	(1UL<<14)
#define GPIO_ODR_15	(1UL<<15)

/*GPIOx_BSRR Register bits*/
#define GPIO_BS_0	(1UL<<0)
#define GPIO_BS_1	(1UL<<1)
#define GPIO_BS_2	(1UL<<2)
#define GPIO_BS_3	(1UL<<3)
#define GPIO_BS_4	(1UL<<4)
#define GPIO_BS_5	(1UL<<5)
#define GPIO_BS_6	(1UL<<6)
#define GPIO_BS_7	(1UL<<7)
#define GPIO_BS_8	(1UL<<8)
#define GPIO_BS_9	(1UL<<9)
#define GPIO_BS_10	(1UL<<10)
#define GPIO_BS_11	(1UL<<11)
#define GPIO_BS_12	(1UL<<12)
#define GPIO_BS_13	(1UL<<13)
#define GPIO_BS_14	(1UL<<14)
#define GPIO_BS_15	(1UL<<15)
#define GPIO_BR_0	(1UL<<16)
#define GPIO_BR_1	(1UL<<17)
#define GPIO_BR_2	(1UL<<18)
#define GPIO_BR_3	(1UL<<19)
#define GPIO_BR_4	(1UL<<20)
#define GPIO_BR_5	(1UL<<21)
#define GPIO_BR_6	(1UL<<22)
#define GPIO_BR_7	(1UL<<23)
#define GPIO_BR_8	(1UL<<24)
#define GPIO_BR_9	(1UL<<25)
#define GPIO_BR_10	(1UL<<26)
#define GPIO_BR_11	(1UL<<27)
#define GPIO_BR_12	(1UL<<28)
#define GPIO_BR_13	(1UL<<29)
#define GPIO_BR_14	(1UL<<30)
#define GPIO_BR_15	(1UL<<31)


/*GPIOx_LCK Register bits*/
#define GPIO_LCK_0	(1UL<<0)
#define GPIO_LCK_1	(1UL<<1)
#define GPIO_LCK_2	(1UL<<2)
#define GPIO_LCK_3	(1UL<<3)
#define GPIO_LCK_4	(1UL<<4)
#define GPIO_LCK_5	(1UL<<5)
#define GPIO_LCK_6	(1UL<<6)
#define GPIO_LCK_7	(1UL<<7)
#define GPIO_LCK_8	(1UL<<8)
#define GPIO_LCK_9	(1UL<<9)
#define GPIO_LCK_10	(1UL<<10)
#define GPIO_LCK_11	(1UL<<11)
#define GPIO_LCK_12	(1UL<<12)
#define GPIO_LCK_13	(1UL<<13)
#define GPIO_LCK_14	(1UL<<14)
#define GPIO_LCK_15	(1UL<<15)
#define GPIO_LCK	(1UL<<16)

/*GPIOx_AFR Register bits*/
#define GPIO_AFRL_0		(1UL<<0)
#define GPIO_AFRL_1		(1UL<<4)
#define GPIO_AFRL_2		(1UL<<8)
#define GPIO_AFRL_3		(1UL<<12)
#define GPIO_AFRL_4		(1UL<<16)
#define GPIO_AFRL_5		(1UL<<20)
#define GPIO_AFRL_6		(1UL<<24)
#define GPIO_AFRL_7		(1UL<<28)
#define GPIO_AFRH_8		(1UL<<0)
#define GPIO_AFRH_9		(1UL<<4)
#define GPIO_AFRH_10	(1UL<<8)
#define GPIO_AFRH_11	(1UL<<12)
#define GPIO_AFRH_12	(1UL<<16)
#define GPIO_AFRH_13	(1UL<<20)
#define GPIO_AFRH_14	(1UL<<24)
#define GPIO_AFRH_15	(1UL<<28)

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

#define GPIOA		(volatile Gpio_Type *)(AHB1_BASE + 0x00U)
#define GPIOB		(volatile Gpio_Type *)(AHB1_BASE + 0x400U)
#define GPIOC		(volatile Gpio_Type *)(AHB1_BASE + 0x800U)//(0x40020800)
#define GPIOD		(volatile Gpio_Type *)(AHB1_BASE + 0xC00U)//(0x40020C00)
#define GPIOE		(volatile Gpio_Type *)(AHB1_BASE + 0x1000U)//(0x40021000)
#define GPIOF		(volatile Gpio_Type *)(AHB1_BASE + 0x1400U)//(0x40021400)
#define GPIOG		(volatile Gpio_Type *)(AHB1_BASE + 0x1800U)//(0x40021800)
#define GPIOH		(volatile Gpio_Type *)(AHB1_BASE + 0x1C00U)//(0x40021C00)
#define GPIOI		(volatile Gpio_Type *)(AHB1_BASE + 0x2200U)//(0x40022000)


#define RCC		((volatile Rcc_Type *)(AHB1_BASE + 0x3800U))//0x40023800)



