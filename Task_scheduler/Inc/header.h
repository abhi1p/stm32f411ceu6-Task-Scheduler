/*
 * header.h
 *
 *  Created on: 09-Jul-2022
 *      Author: PC
 */

#ifndef HEADER_H_
#define HEADER_H_

#define MAX_TASK 4
#define TASK_STACK (1024U)
#define SCHEDULER_STACK (1024U)
#define SRAM_START (0x20000000U)
#define SRAM_END ((SRAM_START)+(128*1024))
#define T1_STACK_START (SRAM_END)
#define T2_STACK_START ((SRAM_END)-(1*TASK_STACK))
#define T3_STACK_START ((SRAM_END)-(2*TASK_STACK))
#define T4_STACK_START ((SRAM_END)-(3*TASK_STACK))
#define SCHEDULER_TASK_START ((SRAM_END)-(4*TASK_STACK))

#define CLOCK (16e6)
#define REQUIRED_SYSTICK_DELAY (1e-3)

#define XPSR 0x01000000U
#define LR 0xFFFFFFFDU

#define SHCRS 0xE000ED24U

#endif /* HEADER_H_ */
