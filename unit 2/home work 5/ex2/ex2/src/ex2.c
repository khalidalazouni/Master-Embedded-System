/*
 ============================================================================
Lesson 6,7 function
Ex2_homework5
Created on : 14/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
struct distance{
	int feet;
	float inch;
}d1,d2;
int main(void) {
	int sum_feet;
	float sum_inch;
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	printf("enter information for first distance\n");
	printf("enter feet : ");
	scanf("%d",&d1.feet);
	printf("enter inch : ");
	scanf("%f",&d1.inch);
	printf("enter information for second distance\n");
	printf("enter feet : ");
	scanf("%d",&d2.feet);
	printf("enter inch : ");
	scanf("%f",&d2.inch);
	sum_feet=d1.feet+d2.feet;
	sum_inch=d1.inch+d2.inch;
	if(sum_inch>=12){
		sum_feet++;
		sum_inch=12-sum_inch;
	}
	printf("sum of distance = %d '%.1f' ",sum_feet,sum_inch);
}
