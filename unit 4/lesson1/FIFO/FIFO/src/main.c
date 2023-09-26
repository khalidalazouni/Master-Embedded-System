#include"FIFO.h"

#define BUFF1_LENGTH  5
element_type buff1[BUFF1_LENGTH];
int main ()
{
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	FIFO_BUF uart_buf;
	element_type temp=0;
	uint32_t i;
	if(fifo_init(&uart_buf, buff1, BUFF1_LENGTH)==FIFO_NO_ERROR)
		printf("\nFIFO INIT DONE\n");
	for(i=0;i<7;i++)
	{
		printf("\nFIFO ENQUEUE DATA = %X",i);
		if(fifo_enqueue(&uart_buf, &i)==FIFO_NO_ERROR)
			printf("\nFIFO ENQUEUE DATA =%X IS DONE",i);
		else
			printf("\nFIFO ENQUEUE DATA =%X FAILD",i);
	}
	print_buf(&uart_buf);
	if(fifo_dequeue(&uart_buf, &temp)==FIFO_NO_ERROR)
		printf("\nFIFO DEQUEUE DATA =%X DONE",temp);
	else
		printf("\nFIFO DEQUEUE DATA =%X FAILD",temp);
	if(fifo_dequeue(&uart_buf, &temp)==FIFO_NO_ERROR)
		printf("\nFIFO DEQUEUE DATA =%X DONE",temp);
	else
		printf("\nFIFO DEQUEUE DATA =%X FAILD",temp);
	print_buf(&uart_buf);
	for(i=0;i<8;i++)
		{
			printf("\nFIFO ENQUEUE DATA = %X",i);
			if(fifo_enqueue(&uart_buf, &i)==FIFO_NO_ERROR)
				printf("\nFIFO ENQUEUE DATA =%X IS DONE",i);
			else
				printf("\nFIFO ENQUEUE DATA=%X FAILD\n",i);
		}
		print_buf(&uart_buf);
		return 0;

}
