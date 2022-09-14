/*
 * header.h
 *
 *  Created on: Jul 11, 2022
 *      Author: PC
 */

#ifndef HEADER_H_
#define HEADER_H_

#define MAX_TASK 5U
#define TASK_STACK_SIZE (1024U)
#define SCHEDULER_STACK_SIZE (1024U)
#define SRAM_SIZE (128*1024)
#define SRAM_START (0x20000000U)
#define SRAM_END ((SRAM_START)+(SRAM_SIZE))

#define TASK1_STACK_START (SRAM_END)
#define TASK2_STACK_START ((SRAM_END)-(TASK_STACK_SIZE))
#define TASK3_STACK_START ((SRAM_END)-(2*TASK_STACK_SIZE))
#define TASK4_STACK_START ((SRAM_END)-(3*TASK_STACK_SIZE))
#define IDLE_STACK_START ((SRAM_END)-(4*TASK_STACK_SIZE))
#define SCHEDULER_STACK_START ((SRAM_END)-(5*SCHEDULER_STACK_SIZE))

#define SYSTICK_TIME (1e-3)
#define CLOCK_FREQUENCY (16e6)
#define SYSTICK_COUNT (SYSTICK_TIME*CLOCK_FREQUENCY)

#define SYST_CSR (0xE000E010U)
#define SYST_RVR (0xE000E014U)

#define XPSR (0x01000000U)
#define LR (0xFFFFFFFD)

#define SHCRS (0xE000ED24U)

#define ICSR (0xE000ED04U)
typedef enum
{
	blocked = 0, ready = 1
} state_e;

typedef struct
{
	void (*pFun)(void);
	uint32_t PSP;
//	uint32_t stack_startAddr;
	uint32_t blockCount;
	state_e currentState;

} task_t;

typedef struct
{
	uint32_t systickCounterEnable :1;
	uint32_t systickInterruptEnable :1;
	uint32_t clockSource :1; //0 for external 1 for internal
	uint32_t reserved1 :13;
	uint32_t countFlag :1;
	uint32_t reserved2 :15;
} sysTickContol_t;

typedef struct
{
	uint32_t count :24;
	uint32_t reserved :8;
} sysTickCount_t;

typedef struct
{
	uint32_t notReq :16;
	uint32_t memoryFault_Enable :1;
	uint32_t busFault_Enable :1;
	uint32_t usageFault_Enable :1;
	uint32_t reserved :13;
} faultEnable_t;

#endif /* HEADER_H_ */
