/*startup.c 
khalid alazouni*/
#include <Platform_Types.h>

extern int main(void);

void Reset_Handler (void);
void Defualt_Handler (void);
void NMI_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void HardFalt_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void MemmoryManagement_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void BusFault_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void UsageFault_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;


static uint32 stack_top [256]; 

void (*const g_p_fc_vectors[])() __attribute__((section(".vectors")))={
(void(*)()) ((uint32)stack_top + sizeof(stack_top)), 
&Reset_Handler , 
&NMI_Handler,
&HardFalt_Handler , 
&MemmoryManagement_Handler,
&BusFault_Handler , 
&UsageFault_Handler,
};


extern uint32 _E_text;
extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;



void Reset_Handler (void){
	uint32 Data_Size = (uint8*)&_E_data - (uint8*)&_S_data ;
	uint8* ptr_src = (uint8*)&_E_text;
	uint8* ptr_dis = (uint8*)&_S_data;
	for(int i=0 ; i<Data_Size ; i++)
	{
		*((uint8*)ptr_dis)=*((uint8*)ptr_src);
		(uint8*)ptr_dis++;
		(uint8*)ptr_src++;
	}

	uint32 Bss_Size = (uint8*)_E_bss - (uint8*)_S_bss ;
	ptr_dis = (uint8*)&_S_bss;
	for(int i=0 ; i<Bss_Size ; i++)
	{
		*((uint8*)ptr_dis)=(uint8)0;
		(uint8*)ptr_dis++;

	}

	main ();
}

void Defualt_Handler (void){
	Reset_Handler ();
}