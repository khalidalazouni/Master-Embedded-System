#include "CA.h"
#include "DC.h"
#include "US.h"


void setup()
{
	US_init();
	DC_init();
	CA_STATE=state(CA_waiting);
	US_STATE=state(US_busy);
	DC_STATE=state(DC_idel);


}

int main()
{
	setbuf(stdout,0);
	volatile int i;
	setup();
	while(1)
	{
		US_STATE();
		CA_STATE();
		DC_STATE();


		for(i=0;i<1000;i++);
	}
	return 0;
}
