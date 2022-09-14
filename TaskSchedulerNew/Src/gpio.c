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
volatile pinMode_t *pGPIOx_MODE;
volatile outputData_t *pGPIOx_OUT;

uint32_t modeRegisterAddress(port_e port)
{
	uint32_t addr;
	if (port == A)
	{
		addr = GPIOA_MODE_ADDR;
		pRCC_AHB1ENR->GPIOA_EN = 1;
	}
	else if (port == B)
	{
		addr = GPIOB_MODE_ADDR;
		pRCC_AHB1ENR->GPIOB_EN = 1;
	}
	else if (port == C)
	{
		addr = GPIOC_MODE_ADDR;
		pRCC_AHB1ENR->GPIOC_EN = 1;
	}
	else if (port == D)
	{
		addr = GPIOD_MODE_ADDR;
		pRCC_AHB1ENR->GPIOD_EN = 1;
	}
	else if (port == E)
	{
		addr = GPIOE_MODE_ADDR;
		pRCC_AHB1ENR->GPIOE_EN = 1;
	}
	else if (port == H)
	{
		addr = GPIOH_MODE_ADDR;
		pRCC_AHB1ENR->GPIOH_EN = 1;
	}
	return addr;

}
uint32_t outputRegisterAddress(port_e port)
{
	uint32_t addr;
	if (port == A)
		addr = GPIOA_OUT_ADDR;
	else if (port == B)
		addr = GPIOB_OUT_ADDR;
	else if (port == C)
		addr = GPIOC_OUT_ADDR;
	else if (port == D)
		addr = GPIOD_OUT_ADDR;
	else if (port == E)
		addr = GPIOE_OUT_ADDR;
	else if (port == H)
		addr = GPIOH_OUT_ADDR;
	return addr;
}
void pinMode(pin_e pin, port_e port, mode_e mode)
{

	pGPIOx_MODE = (pinMode_t*) modeRegisterAddress(port);
	if (pin == 0)
	{
		pGPIOx_MODE->pin0 = mode;
	}
	else if (pin == 1)
	{

		pGPIOx_MODE->pin1 = mode;
	}
	else if (pin == 2)
	{

		pGPIOx_MODE->pin2 = mode;
	}
	else if (pin == 3)
	{

		pGPIOx_MODE->pin3 = mode;
	}
	else if (pin == 4)
	{

		pGPIOx_MODE->pin4 = mode;
	}
	else if (pin == 5)
	{

		pGPIOx_MODE->pin5 = mode;
	}
	else if (pin == 6)
	{

		pGPIOx_MODE->pin6 = mode;
	}
	else if (pin == 7)
	{

		pGPIOx_MODE->pin7 = mode;
	}
	else if (pin == 8)
	{

		pGPIOx_MODE->pin8 = mode;
	}
	else if (pin == 9)
	{

		pGPIOx_MODE->pin9 = mode;
	}
	else if (pin == 10)
	{

		pGPIOx_MODE->pin10 = mode;
	}
	else if (pin == 11)
	{

		pGPIOx_MODE->pin11 = mode;
	}
	else if (pin == 12)
	{

		pGPIOx_MODE->pin12 = mode;
	}
	else if (pin == 13)
	{

		pGPIOx_MODE->pin13 = mode;
	}
	else if (pin == 14)
	{

		pGPIOx_MODE->pin14 = mode;
	}
	else if (pin == 15)
	{

		pGPIOx_MODE->pin15 = mode;
	}
}

void pinOutput(pin_e pin, port_e port, out_e out)
{
	pGPIOx_OUT = (outputData_t*) outputRegisterAddress(port);
	if (pin == 0)
	{
		pGPIOx_OUT->pin0 = out;
	}
	else if (pin == 1)
	{

		pGPIOx_OUT->pin1 = out;
	}
	else if (pin == 2)
	{

		pGPIOx_OUT->pin2 = out;
	}
	else if (pin == 3)
	{

		pGPIOx_OUT->pin3 = out;
	}
	else if (pin == 4)
	{

		pGPIOx_OUT->pin4 = out;
	}
	else if (pin == 5)
	{

		pGPIOx_OUT->pin5 = out;
	}
	else if (pin == 6)
	{

		pGPIOx_OUT->pin6 = out;
	}
	else if (pin == 7)
	{

		pGPIOx_OUT->pin7 = out;
	}
	else if (pin == 8)
	{

		pGPIOx_OUT->pin8 = out;
	}
	else if (pin == 9)
	{

		pGPIOx_OUT->pin9 = out;
	}
	else if (pin == 10)
	{

		pGPIOx_OUT->pin10 = out;
	}
	else if (pin == 11)
	{

		pGPIOx_OUT->pin11 = out;
	}
	else if (pin == 12)
	{

		pGPIOx_OUT->pin12 = out;
	}
	else if (pin == 13)
	{

		pGPIOx_OUT->pin13 = out;
	}
	else if (pin == 14)
	{

		pGPIOx_OUT->pin14 = out;
	}
	else if (pin == 15)
	{

		pGPIOx_OUT->pin15 = out;
	}
}
#endif
