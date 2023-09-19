/*arm-cortexm-4 
khalid alazouni*/

#include "Platform_Types.h"
#define SYSCTL_add          0x400FE000
#define GPIOF_add           0x40025000
#define SYSCTL_RCGC2_R      *(volatile uint32 *)(SYSCTL_add + 0x108)
#define GPIO_PORTF_DATA_R   *(volatile uint32 *)(GPIOF_add + 0x3FC )
#define GPIO_PORTF_DIR_R    *(volatile uint32 *)(GPIOF_add + 0x400 )
#define GPIO_PORTF_DEN_R    *(volatile uint32 *)(GPIOF_add + 0x51c )

typedef union
{
	vuint32 All_pins;
	struct
	{
		vuint32 reserved:3;
		vuint32 p_3:1;
	}pin;
}R_GPIO;

volatile R_GPIO* Ptr_GPIO_DATA = (volatile R_GPIO* )(GPIOF_add + 0x3FC );
volatile R_GPIO* Ptr_GPIO_DIR =  (volatile R_GPIO* )(GPIOF_add + 0x400 );
volatile R_GPIO* Ptr_GPIO_DEN =  (volatile R_GPIO* )(GPIOF_add + 0x51C );




int main(void)
{
	uint32 i , delay_count;
	SYSCTL_RCGC2_R = 0x00000020;
	for(delay_count=0 ; delay_count<5000 ; delay_count++); 
	Ptr_GPIO_DIR->pin.p_3=1;
	Ptr_GPIO_DEN->pin.p_3=1;
	Ptr_GPIO_DATA->pin.p_3=0;
   
   while(1)
	{
		Ptr_GPIO_DATA->pin.p_3=1;
		for( i=0;i<5000;i++);
		Ptr_GPIO_DATA->pin.p_3=0;
		for( i=0;i<5000;i++);
	}



}
