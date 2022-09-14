/*
 * delay.h
 *
 *  Created on: Jul 11, 2022
 *      Author: PC
 */
#include<stdint.h>
#ifndef DELAY_H_
#define DELAY_H_

#define DELAY_1MS (1250U)
#define DELAY_1S (1000U*DELAY_1MS)
#define DELAY_500MS (500U*DELAY_1MS)
#define DELAY_250MS (250U*DELAY_1MS)
#define DELAY_125MS (125U*DELAY_1MS)

void delay(uint32_t count);
#endif /* DELAY_H_ */
