#ifndef DC_H_
#define DC_H_
#include "state.h"
#include "stdio.h"
#include "stdlib.h"

typedef enum {
	DC_idel,
	DC_busy
}DC_state_t;

state_define(DC_idel);
state_define(DC_busy);
void DC_init ();

extern void (*DC_STATE)() ;



#endif /* DC_H_ */
