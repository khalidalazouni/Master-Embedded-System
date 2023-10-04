#include "DC.h"

int DC_speed =0;
DC_state_t DC_state_id =DC_idel;

void (*DC_STATE)()=state(DC_idel) ;

void DC_init()
{
	printf("\n===DC_MOTO IS INIT ====\n");

}


void DC_motor_set_speed (int speed)
{
	DC_speed=speed;
	DC_STATE=state(DC_busy);

	printf("\nDC_motor receive speed from CA speed=%d\n",DC_speed);


}
state_define(DC_idel)
{
	DC_state_id=DC_idel;
	printf("\n=======DC_idle=====\n");
	DC_STATE=state(DC_idel);

}
state_define(DC_busy)
{
	DC_state_id=DC_busy;
	printf("\n=======DC_busy======\n ");
	printf("\n set motor speed speed =%d\n",DC_speed);
	DC_STATE=state(DC_idel);

}
