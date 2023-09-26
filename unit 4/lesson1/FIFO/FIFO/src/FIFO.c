/*
 ============================================================================
 Name        : FIFO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "FIFO.h"

FIFO_STATUS fifo_init(FIFO_BUF* fifo,element_type* buf,uint32_t buf_length)
{
	if(buf==NULL)
		return FIFO_NULL;
	fifo->base=buf;
	fifo->tail=buf;
	fifo->head=buf;
	fifo->length=buf_length;
	fifo->count=0;

	return FIFO_NO_ERROR;

}

FIFO_STATUS fifo_is_full(FIFO_BUF* fifo)
{
	if(!fifo->base || !fifo->head ||!fifo->tail)
		return FIFO_NULL;
	if(fifo->count == fifo->length)
	{
		return FIFO_FULL;
	}
	return FIFO_NO_ERROR;
}

FIFO_STATUS fifo_enqueue(FIFO_BUF* fifo,element_type* data_enq)
{
	if(fifo_is_full(fifo) == FIFO_NO_ERROR)
	{
		*(fifo->head)= *data_enq;
		fifo->count++;
		if(fifo->head == (fifo->base + fifo->length * sizeof(element_type)))
			fifo->head = fifo->base;

		else
			fifo->head++;

		return FIFO_NO_ERROR;
	}

	else
	{
		printf("\nFIFO ENQUEUE FAILD\n");
		return fifo_is_full(fifo);
	}
}

FIFO_STATUS fifo_dequeue(FIFO_BUF* fifo,element_type* data_deq)
{
	if(!fifo->base || !fifo->head ||!fifo->tail)
		return FIFO_NULL;
	if(fifo->count ==0 ){
		printf("\nfifo is empty\n");
		return FIFO_EMPTY;
	}
	*data_deq=*(fifo->tail);
	fifo->count--;
	if(fifo->tail == (fifo->base + fifo->length * sizeof(element_type)))
		fifo->tail = fifo->base;
	else
		fifo->tail++;

	return FIFO_NO_ERROR;
}

void print_buf(FIFO_BUF* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count ==0 )
			printf("fifo is empty");
	temp=fifo->tail;
	printf("\n=====FIFO_PRINT=====\n");
	for(i=0; i<fifo->count;i++)
	{
		printf("\t %x\n",*temp);
		temp++;
	}

}
