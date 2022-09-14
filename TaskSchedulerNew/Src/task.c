/*
 * task.c
 *
 *  Created on: Jul 11, 2022
 *      Author: PC
 */


#include"task.h"
#include<stdio.h>
#include"header.h"
#include"gpio.h"
#include"delay.h"
void task1()
{

	while(1)
	{
		printf("1\n");
		pinOutput(0, A, high);
		task_delay(1000);
		pinOutput(0, A, low);
		task_delay(1000);


	}

}
void task2()
{

	while(1)
	{
		printf("2\n");
		pinOutput(2, A, high);
		task_delay(500);
		pinOutput(2, A, low);
		task_delay(500);
	}

}
void task3()
{

	while(1)
	{
		printf("3\n");
		pinOutput(4, A, high);
		task_delay(250);
		pinOutput(4, A, low);
		task_delay(250);
	}

}
void task4()
{

	while(1)
	{
		printf("4\n");
		pinOutput(13, C, low);
		task_delay(125);
		pinOutput(13, C, high);
		task_delay(125);
	}

}
void idle()
{
	while(1);
}

void enableAllFaultMonitoring()
{
	volatile faultEnable_t *const ptr=(faultEnable_t*)SHCRS;
	ptr->busFault_Enable=1;
	ptr->memoryFault_Enable=1;
	ptr->usageFault_Enable=1;
}
