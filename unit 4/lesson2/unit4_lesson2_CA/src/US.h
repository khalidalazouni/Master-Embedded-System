#ifndef US_H_
#define US_H_
#include "state.h"
#include "stdio.h"
#include "stdlib.h"

typedef enum {
	US_busy
}US_state_t;

state_define(US_busy);
void US_init();


extern void (*US_STATE)() ;





#endif /* US_H_ */
