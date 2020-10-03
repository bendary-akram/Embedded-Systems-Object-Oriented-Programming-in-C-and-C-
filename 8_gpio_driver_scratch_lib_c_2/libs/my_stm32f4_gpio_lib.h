/*
 * my_stm32f4_gpio_lib.h
 *
 *  Created on: Sep 16, 2020
 *      Author: akram
 */

#ifndef LIBS_MY_STM32F4_GPIO_LIB_H_
#define LIBS_MY_STM32F4_GPIO_LIB_H_

#include "hal/inc/my_stm32f4_gpio_driver.h"


#define GPIO_PIN_0	(0)
#define GPIO_PIN_1	(1)
#define GPIO_PIN_2	(2)
#define GPIO_PIN_3	(3)
#define GPIO_PIN_4	(4)
#define GPIO_PIN_5	(5)
#define GPIO_PIN_6	(6)
#define GPIO_PIN_7	(7)
#define GPIO_PIN_8	(8)
#define GPIO_PIN_9	(9)
#define GPIO_PIN_10	(10)
#define GPIO_PIN_11	(11)
#define GPIO_PIN_12	(12)
#define GPIO_PIN_13	(13)
#define GPIO_PIN_14	(14)
#define GPIO_PIN_15	(15)
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
#define GPIO_OTYPER_0	(1UL<<GPIO_PIN_0)
#define GPIO_OTYPER_1	(1UL<<GPIO_PIN_1)
#define GPIO_OTYPER_2	(1UL<<GPIO_PIN_2)
#define GPIO_OTYPER_3	(1UL<<GPIO_PIN_3)
#define GPIO_OTYPER_4	(1UL<<GPIO_PIN_4)
#define GPIO_OTYPER_5	(1UL<<GPIO_PIN_5)
#define GPIO_OTYPER_6	(1UL<<GPIO_PIN_6)
#define GPIO_OTYPER_7	(1UL<<GPIO_PIN_7)
#define GPIO_OTYPER_8	(1UL<<GPIO_PIN_8)
#define GPIO_OTYPER_9	(1UL<<GPIO_PIN_9)
#define GPIO_OTYPER_10	(1UL<<GPIO_PIN_10)
#define GPIO_OTYPER_11	(1UL<<GPIO_PIN_11)
#define GPIO_OTYPER_12	(1UL<<GPIO_PIN_12)
#define GPIO_OTYPER_13	(1UL<<GPIO_PIN_13)
#define GPIO_OTYPER_14	(1UL<<GPIO_PIN_14)
#define GPIO_OTYPER_15	(1UL<<GPIO_PIN_15)

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
#define GPIO_IDR_0	(1UL<<GPIO_PIN_0)
#define GPIO_IDR_1	(1UL<<GPIO_PIN_1)
#define GPIO_IDR_2	(1UL<<GPIO_PIN_2)
#define GPIO_IDR_3	(1UL<<GPIO_PIN_3)
#define GPIO_IDR_4	(1UL<<GPIO_PIN_4)
#define GPIO_IDR_5	(1UL<<GPIO_PIN_5)
#define GPIO_IDR_6	(1UL<<GPIO_PIN_6)
#define GPIO_IDR_7	(1UL<<GPIO_PIN_7)
#define GPIO_IDR_8	(1UL<<GPIO_PIN_8)
#define GPIO_IDR_9	(1UL<<GPIO_PIN_9)
#define GPIO_IDR_10	(1UL<<GPIO_PIN_10)
#define GPIO_IDR_11	(1UL<<GPIO_PIN_11)
#define GPIO_IDR_12	(1UL<<GPIO_PIN_12)
#define GPIO_IDR_13	(1UL<<GPIO_PIN_13)
#define GPIO_IDR_14	(1UL<<GPIO_PIN_14)
#define GPIO_IDR_15	(1UL<<GPIO_PIN_15)

/*GPIOx_ODR Register bits*/
#define GPIO_ODR_0	(1UL<<GPIO_PIN_0)
#define GPIO_ODR_1	(1UL<<GPIO_PIN_1)
#define GPIO_ODR_2	(1UL<<GPIO_PIN_2)
#define GPIO_ODR_3	(1UL<<GPIO_PIN_3)
#define GPIO_ODR_4	(1UL<<GPIO_PIN_4)
#define GPIO_ODR_5	(1UL<<GPIO_PIN_5)
#define GPIO_ODR_6	(1UL<<GPIO_PIN_6)
#define GPIO_ODR_7	(1UL<<GPIO_PIN_7)
#define GPIO_ODR_8	(1UL<<GPIO_PIN_8)
#define GPIO_ODR_9	(1UL<<GPIO_PIN_9)
#define GPIO_ODR_10	(1UL<<GPIO_PIN_10)
#define GPIO_ODR_11	(1UL<<GPIO_PIN_11)
#define GPIO_ODR_12	(1UL<<GPIO_PIN_12)
#define GPIO_ODR_13	(1UL<<GPIO_PIN_13)
#define GPIO_ODR_14	(1UL<<GPIO_PIN_14)
#define GPIO_ODR_15	(1UL<<GPIO_PIN_15)

/*GPIOx_BSRR Register bits*/
#define GPIO_BS_0	(1UL<<GPIO_PIN_0)
#define GPIO_BS_1	(1UL<<GPIO_PIN_1)
#define GPIO_BS_2	(1UL<<GPIO_PIN_2)
#define GPIO_BS_3	(1UL<<GPIO_PIN_3)
#define GPIO_BS_4	(1UL<<GPIO_PIN_4)
#define GPIO_BS_5	(1UL<<GPIO_PIN_5)
#define GPIO_BS_6	(1UL<<GPIO_PIN_6)
#define GPIO_BS_7	(1UL<<GPIO_PIN_7)
#define GPIO_BS_8	(1UL<<GPIO_PIN_8)
#define GPIO_BS_9	(1UL<<GPIO_PIN_9)
#define GPIO_BS_10	(1UL<<GPIO_PIN_10)
#define GPIO_BS_11	(1UL<<GPIO_PIN_11)
#define GPIO_BS_12	(1UL<<GPIO_PIN_12)
#define GPIO_BS_13	(1UL<<GPIO_PIN_13)
#define GPIO_BS_14	(1UL<<GPIO_PIN_14)
#define GPIO_BS_15	(1UL<<GPIO_PIN_15)
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
#define GPIO_LCK_0	(1UL<<GPIO_PIN_0)
#define GPIO_LCK_1	(1UL<<GPIO_PIN_1)
#define GPIO_LCK_2	(1UL<<GPIO_PIN_2)
#define GPIO_LCK_3	(1UL<<GPIO_PIN_3)
#define GPIO_LCK_4	(1UL<<GPIO_PIN_4)
#define GPIO_LCK_5	(1UL<<GPIO_PIN_5)
#define GPIO_LCK_6	(1UL<<GPIO_PIN_6)
#define GPIO_LCK_7	(1UL<<GPIO_PIN_7)
#define GPIO_LCK_8	(1UL<<GPIO_PIN_8)
#define GPIO_LCK_9	(1UL<<GPIO_PIN_9)
#define GPIO_LCK_10	(1UL<<GPIO_PIN_10)
#define GPIO_LCK_11	(1UL<<GPIO_PIN_11)
#define GPIO_LCK_12	(1UL<<GPIO_PIN_12)
#define GPIO_LCK_13	(1UL<<GPIO_PIN_13)
#define GPIO_LCK_14	(1UL<<GPIO_PIN_14)
#define GPIO_LCK_15	(1UL<<GPIO_PIN_15)
#define GPIO_LCK

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


#define GPIO_MODER_NO_BITS		(0x02U)

#define GPIO_MODER_INPUT		(0x00U)
#define GPIO_MODER_OUTPUT_PP	(0x01U)
#define GPIO_MODER_AF_PP	(0x02U)

#define GPIO_NOPULL			(0x00U)
#define GPIO_PULLUP			(0x01U)
#define GPIO_PULLDOWN		(0x02U)


#define GPIOA_EN (1<<0)
#define GPIOB_EN (1<<1)
#define GPIOC_EN (1<<2)
#define GPIOD_EN (1<<3)
#define GPIOE_EN (1<<4)
#define GPIOH_EN (1<<5)


typedef struct{
uint32_t	Pin;
uint32_t	Mode;
uint32_t	Pull;
uint32_t	Speed;
uint32_t	Alternate;
}GPIO_InitTypeDef;

typedef enum
{
	GPIO_PIN_RESET=0,
	GPIO_PIN_SET=1,

}GPIO_PinState;


void LIB_GPIO_Init(Gpio_Type *GPIOx,GPIO_InitTypeDef *GPIO_Init);
GPIO_PinState LIB_GPIO_ReadPin(Gpio_Type *GPIOx,uint16_t GPIO_Pin);
void LIB_GPIO_WritePin(Gpio_Type *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState);
void LIB_GPIO_TogglePin(Gpio_Type *GPIOx,uint16_t GPIO_Pin);

void __LIB_RCC_GPIOA_CLK_ENABLE(void);
void __LIB_RCC_GPIOB_CLK_ENABLE(void);
void __LIB_RCC_GPIOC_CLK_ENABLE(void);
void __LIB_RCC_GPIOD_CLK_ENABLE(void);
void __LIB_RCC_GPIOE_CLK_ENABLE(void);
void __LIB_RCC_GPIOH_CLK_ENABLE(void);


#endif /* LIBS_MY_STM32F4_GPIO_LIB_H_ */
