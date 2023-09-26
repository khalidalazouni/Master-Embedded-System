/*
 * FIFO.h
 *
 *  Created on: Sep 26, 2023
 *      Author: vip
 */

#ifndef FIFO_H_
#define FIFO_H_
#include"stdio.h"
#include"stdint.h"

//data tpes
#define element_type   uint8_t

typedef struct
{
	element_type* base;
	element_type* head;
	element_type* tail;
	element_type length;
	element_type count;
}FIFO_BUF;

typedef enum{
	FIFO_NO_ERROR,
	FIFO_EMPTY,
	FIFO_FULL,
	FIFO_NULL
}FIFO_STATUS;

//FUNCTIONS PROTOTYPES
FIFO_STATUS fifo_init(FIFO_BUF* fifo,element_type* buf,uint32_t buf_length);
FIFO_STATUS fifo_enqueue(FIFO_BUF* fifo,element_type* data_enq);
FIFO_STATUS fifo_dequeue(FIFO_BUF* fifo,element_type* data_deq);
void print_buf(FIFO_BUF* fifo);
FIFO_STATUS fifo_is_full(FIFO_BUF* fifo);




#endif /* FIFO_H_ */
