/*
 ============================================================================
Lesson 5 function
Ex4_homework4
Created on : 3/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calc_power(int x,int y){
	if(y>1){

		return x*calc_power(x,y-1);
	}
}
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int n,p;
	printf("enter base number :  \n");
	scanf("%d",&n);
	printf("enter power number (positive number ): ");
	scanf("%d",&p);
	calc_power(n,p);
	printf("%d^%d = %d",n,p,calc_power(n,p));
}
