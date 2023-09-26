/*
 * LIFO.h
 *
 *  Created on: Sep 26, 2023
 *      Author: vip
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

#define element_type   uint8_t
// tpedefinitions

typedef struct {
	element_type* base;
	element_type* head;
	element_type length;
	element_type count;

}LIFO_BUF;

typedef enum
{
	LIFO_NO_ERRO,
	LIFO_FULL,
	LIFO_NULL,
	LIFO_EMPTY
}LIFO_STATUS;


//FUNCTIONS PROTOTYPES
LIFO_STATUS LIFO_INIT (LIFO_BUF* lifo, element_type* buf , element_type length );
LIFO_STATUS LIFO_PUSH (LIFO_BUF* lifo,element_type data_push );
LIFO_STATUS LIFO_POP  (LIFO_BUF* lifo,element_type* data_POP);
void PRINT_LIFO (LIFO_BUF* lifo);


#endif /* LIFO_H_ */
