/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "Register.h"
#include "Platform_Types.h"
#include <stdlib.h>

typedef union
{
	vuint32 All_pins;
	struct
	{
		vuint32 reserved:13;
		vuint32 p_13:1;
	}pin;
}R_ODR;

volatile R_ODR* Ptr_ODR = (volatile R_ODR* )(GPIO_Base_Address  + 0x0C );

void* _sbrk(int incr)
{
	extern unsigned int _E_bss;
	extern unsigned int _heap_End;
	static unsigned char* heap_ptr=NULL;
	unsigned char* prev_heap_ptr = NULL;
	if(heap_ptr == NULL)
	{
		heap_ptr = (unsigned char*) &_E_bss;
	}

	prev_heap_ptr = heap_ptr ;

	if((heap_ptr + incr) > ((unsigned char*)&_heap_End))
		return (void*) NULL;

	heap_ptr += incr;
	return (void*) prev_heap_ptr ;
}


int main(void)
{
	int *p =(int*)malloc(4);
	free(p);
	uint32 i;
	RCC_APB2ENR |=(1<<2);
	GPIO_CRH    &=0xff0fffff;
	GPIO_CRH    |=0x00200000;
	while(1)
	{
		Ptr_ODR->pin.p_13=1;
		for( i=0;i<5000;i++);
		Ptr_ODR->pin.p_13=0;
		for( i=0;i<5000;i++);
	}



}
