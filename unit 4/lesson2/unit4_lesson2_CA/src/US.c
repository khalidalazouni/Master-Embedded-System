#include "US.h"


int US_distance = 0;
US_state_t US_state_id =US_busy;
void (*US_STATE)()=state (US_busy);

int US_get_distance_random (int low , int high )
{
	int rand_num;
	rand_num=(rand() % (high - low + 1)) +low;
	return rand_num;

}




void US_init()
{
	printf("\n===US IS INIT===");

}
state_define(US_busy)
{

	US_state_id=US_busy;
	printf("\n=====US_busy======\n");

	US_distance=US_get_distance_random(45,55);


	printf("\nUS send distance to >>>CA   US_distance =%d\n ",US_distance);

	US_set_distance(US_distance);

	US_STATE=state(US_busy);
}



