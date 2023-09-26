#include "LIFO.h"

#define LIFO1_LENGTH 5
#define LIFO2_LENGTH 7
element_type buf1[LIFO1_LENGTH];
int main ()
{
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	LIFO_BUF uart_buf;
	LIFO_BUF i2c_buf;
	element_type data=0;
	uint32_t i;
	element_type* i2c_pt=(element_type*)malloc(LIFO2_LENGTH * sizeof(element_type));
	LIFO_INIT(&uart_buf, buf1, LIFO1_LENGTH);
	LIFO_INIT(&i2c_buf, i2c_pt,LIFO2_LENGTH);
	for(i=0;i<5;i++)
	{
		printf("\nLIFO PUSH DATA=%X " ,i);
		if(LIFO_PUSH(&uart_buf,i)==LIFO_NO_ERRO)
			printf("\nLIFO PUSH DATA = %X IS DONE ",i);
		else
			printf("\nLIFO PUSH DATA = %X FAILED ",i);
	}

	PRINT_LIFO(&uart_buf);

	for(i=0;i<7;i++)
	{
		printf("\nLIFO PUSH DATA=%X " ,i);
		if(LIFO_PUSH(&i2c_buf,i)==LIFO_NO_ERRO)
			printf("\nLIFO PUSH DATA = %X IS DONE ",i);
		else
			printf("\nLIFO PUSH DATA = %X FAILED ",i);
	}
	PRINT_LIFO(&i2c_buf);


	if(LIFO_POP(&uart_buf, &data)==LIFO_NO_ERRO)
		printf("LIFO POP DATA =%X IS DONE\n",data);
	else
		printf("LIFO POP DATA =%X FAILD\n",data);
	PRINT_LIFO(&uart_buf);


	if(LIFO_POP(&i2c_buf, &data)==LIFO_NO_ERRO)
		printf("LIFO POP DATA =%X IS DONE\n",data);
	else
		printf("LIFO POP DATA =%X FAILD\n",data);

	PRINT_LIFO(&i2c_buf);
	return 0;






}
