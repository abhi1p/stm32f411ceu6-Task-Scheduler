/*
 * task.h
 *
 *  Created on: Jul 11, 2022
 *      Author: PC
 */
#include<stdint.h>
#ifndef TASK_H_
#define TASK_H_

void task1();
void task2();
void task3();
void task4();
void idle();

void systick_init();
void task_stack_init();
void dummy_stack_init();
__attribute__((naked))void scheduler_stack_init();
__attribute__((naked))void sp_to_psp();
uint32_t get_psp();
uint32_t get_msp();
void enableAllFaultMonitoring();
void set_psp(uint32_t psp);
void updateTask();
void updateGlobalCount();

void unblockTask();
void task_delay(uint32_t tick_count);
#endif /* TASK_H_ */
