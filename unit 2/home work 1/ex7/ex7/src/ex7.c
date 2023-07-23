/*
 ============================================================================
Lesson 3 c basics
Ex7_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	float a,b;
	printf("enter the value of a:\n");
	scanf("%f",&a);
	printf("enter the value of b:\n");
	scanf("%f",&b);
	a=b+a;
	b=a-b;
	a=a-b;
	printf("after swapping a=%f\nafter swapping b=%f",a,b);



}
