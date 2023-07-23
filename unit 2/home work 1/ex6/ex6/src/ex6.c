/*
 ============================================================================
Lesson 3 c basics
Ex6_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	float a,b;
	float temp;
	printf("enter value of a:\n");
	scanf("%f",&a);
	printf("enter value of b:\n");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping value of a : %f\nafter swapping value of b =%f",a,b);

	return 0;
}
