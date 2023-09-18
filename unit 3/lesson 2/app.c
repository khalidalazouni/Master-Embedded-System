#include "uart.h"
unsigned char string[100]= "learn_in_depth=<khalid>";
void main (void)
{
	Uart_Send_String(string);
}