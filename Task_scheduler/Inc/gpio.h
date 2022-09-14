/*
 * gpio.h
 *
 *  Created on: 09-Jul-2022
 *      Author: PC
 */
#include<stdint.h>
#ifndef GPIO_H_
#define GPIO_H_

#define RCC_ADDR 0x40023800U
#define RCC_AHB1ENR ((RCC_ADDR)+(0x30))
#define GPIOA_ADDR 0x40020000U
#define GPIOA_MODE ((GPIOA_ADDR)+(0x00))
#define GPIOA_OUT ((GPIOA_ADDR)+(0x14))

typedef struct
{
	uint32_t GPIOA_EN :1;
	uint32_t GPIOB_EN :1;
	uint32_t GPIOC_EN :1;
	uint32_t GPIOD_EN :1;
	uint32_t GPIOE_EN :1;
	uint32_t RESERVED1 :2;
	uint32_t GPIOH_EN :1;
	uint32_t RESERVED2 :4;
	uint32_t CRC_EN :1;
	uint32_t RESERVED3 :8;
	uint32_t DMA1_EN :1;
	uint32_t DMA2_EN :1;
	uint32_t RESERVED4 :9;
} gpioClockEnable_t;

typedef struct
{
	uint32_t pin0 :2;
	uint32_t pin1 :2;
	uint32_t pin2 :2;
	uint32_t pin3 :2;
	uint32_t pin4 :2;
	uint32_t pin5 :2;
	uint32_t pin6 :2;
	uint32_t pin7 :2;
	uint32_t pin8 :2;
	uint32_t pin9 :2;
	uint32_t pin10 :2;
	uint32_t pin11 :2;
	uint32_t pin12 :2;
	uint32_t pin13 :2;
	uint32_t pin14 :2;
	uint32_t pin15 :2;

} pinMode_t;
typedef struct
{
	uint32_t pin0 :1;
	uint32_t pin1 :1;
	uint32_t pin2 :1;
	uint32_t pin3 :1;
	uint32_t pin4 :1;
	uint32_t pin5 :1;
	uint32_t pin6 :1;
	uint32_t pin7 :1;
	uint32_t pin8 :1;
	uint32_t pin9 :1;
	uint32_t pin10 :1;
	uint32_t pin11 :1;
	uint32_t pin12 :1;
	uint32_t pin13 :1;
	uint32_t pin14 :1;
	uint32_t pin15 :1;
	uint32_t reserved :16;

} outputData_t;
typedef enum
{
	pin0 = 0,
	pin1 = 1,
	pin2 = 2,
	pin3 = 3,
	pin4 = 4,
	pin5 = 5,
	pin6 = 6,
	pin7 = 7,
	pin8 = 8,
	pin9 = 9,
	pin10 = 10,
	pin11 = 11,
	pin12 = 12,
	pin13 = 13,
	pin14 = 14,
	pin15 = 15
} pin_e;

typedef enum
{
	input = 0x00, output = 0x01, altFun = 0x10, analog = 0x11
} mode_e;

typedef enum
{
	high = 1, low = 0
} out_e;


void pinMode(pin_e pin, mode_e mode);
void pinOutput(pin_e pin, out_e out);
#endif /* GPIO_H_ */
