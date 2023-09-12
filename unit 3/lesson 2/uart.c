#include "uart.h"
#define UART0DR    *((volatile unsigned int *) (( unsigned int *)0x101f1000 ))
void Uart_Send_String (unsigned char * pt_st)
{
	while(*pt_st!='\0')
	{
		UART0DR = (unsigned int)*pt_st;
		pt_st++;

	}

}