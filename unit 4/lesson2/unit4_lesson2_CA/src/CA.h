#ifndef CA_H_
#define CA_H_
#include "state.h"
#include "stdio.h"
#include "stdlib.h"

typedef enum {
	CA_waiting,
	CA_driving
}CA_state_t;

state_define(CA_waiting);
state_define(CA_driving);

extern void (*CA_STATE)() ;



#endif /* CA_H_ */
