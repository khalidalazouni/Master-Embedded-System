/*
 ============================================================================
 Name        : LIFO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "LIFO.h"

LIFO_STATUS LIFO_INIT (LIFO_BUF* lifo, element_type* buf , element_type length )
{
	if(buf == NULL)
		return LIFO_NULL;
	lifo->base = buf;
	lifo->head = buf;
	lifo->length = length;
	lifo->count = 0;
	return LIFO_NO_ERRO;
}


LIFO_STATUS LIFO_PUSH (LIFO_BUF* lifo,element_type data_push )
{
	if(!lifo->head || !lifo->base)
		return LIFO_NULL;
	if(lifo->count == lifo->length)
		return LIFO_FULL;

	*(lifo->head)=data_push;
	lifo->head++;
	lifo->count++;
	return LIFO_NO_ERRO;

}

LIFO_STATUS LIFO_POP  (LIFO_BUF* lifo,element_type* data_POP)
{
	if(!lifo->head || !lifo->base)
		return LIFO_NULL;
	if(lifo->count == 0)
		return LIFO_EMPTY;
	lifo->head--;
	*data_POP=*(lifo->head);
	lifo->count--;
	return LIFO_NO_ERRO;
}

void PRINT_LIFO (LIFO_BUF* lifo)
{
	element_type* temp;
	int i;
	if(lifo->count == 0)
		printf("\n LIFO IS EMPTY ");
	temp=lifo->base;
	printf("\n===== PRINT LIFO====\n");
	for(i=0;i<lifo->count;i++)
	{
		printf("\t %x\n",*temp);
		temp++;
	}

}
