


#ifndef STATE_H_
#define STATE_H_

#define state_define(_stateFUNC)  void ST_##_stateFUNC()
#define state(state_name)   ST_##state_name


void US_set_distance (int distance);
void DC_motor_set_speed (int speed);

#endif /* STATE_H_ */
