/*
 * gpio.c
 *
 *  Created on: 09-Jul-2022
 *      Author: PC
 */

#include "gpio.h"
#if 1

volatile gpioClockEnable_t *const pRCC_AHB1ENR =
		(gpioClockEnable_t*) RCC_AHB1ENR;
volatile pinMode_t *const pGPIOA_MODE = (pinMode_t*) GPIOA_MODE;
volatile outputData_t *const pGPIOA_OUT = (outputData_t*) GPIOA_OUT;
void pinMode(pin_e pin, mode_e mode)
{
	pRCC_AHB1ENR->GPIOA_EN = 1;
	if (pin == 0)
	{
		pGPIOA_MODE->pin0 = mode;
	}
	else if (pin == 1)
	{

		pGPIOA_MODE->pin1 = mode;
	}
	else if (pin == 2)
	{

		pGPIOA_MODE->pin2 = mode;
	}
	else if (pin == 3)
	{

		pGPIOA_MODE->pin3 = mode;
	}
	else if (pin == 4)
	{

		pGPIOA_MODE->pin4 = mode;
	}
}

void pinOutput(pin_e pin, out_e out)
{
	if (pin == 0)
	{
		pGPIOA_OUT->pin0 = out;
	}
	else if (pin == 1)
	{

		pGPIOA_OUT->pin1 = out;
	}
	else if (pin == 2)
	{

		pGPIOA_OUT->pin2 = out;
	}
	else if (pin == 3)
	{

		pGPIOA_OUT->pin3 = out;
	}
	else if (pin == 4)
	{

		pGPIOA_OUT->pin4 = out;
	}
}
#endif
