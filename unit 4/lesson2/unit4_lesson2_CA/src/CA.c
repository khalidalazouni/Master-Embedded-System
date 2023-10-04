#include "CA.h"

int CA_speed =0;
int CA_threeshold = 50;
int CA_distance = 0;
CA_state_t CA_state_id =CA_waiting;

void (*CA_STATE)()=state(CA_waiting) ;

void US_set_distance (int distance)
{
	CA_distance=distance;
	printf("\nCA received signal from US>> distance=%d",CA_distance);

	(CA_distance <= CA_threeshold )? (CA_STATE = state(CA_waiting)) : (CA_STATE= state(CA_driving));
}


state_define(CA_waiting)
{

	CA_state_id=CA_waiting;
	printf(" \n======CA_waiting======\n");

	CA_speed=0;
	printf("CA send speed to DC_motor speed =%d",CA_speed);
	DC_motor_set_speed (CA_speed);
}

state_define(CA_driving)
{
	CA_state_id=CA_driving;
	printf(" \n======CA_driving======\n ");

	CA_speed=30;
	printf("CA send speed to DC_motor speed =%d",CA_speed);

	DC_motor_set_speed (CA_speed);

}
