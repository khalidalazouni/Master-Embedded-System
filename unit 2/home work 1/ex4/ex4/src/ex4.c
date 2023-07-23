/*
 ============================================================================
Lesson 3 c basics
Ex4_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	float n1,n2;
	float product=0;
	printf("enter two numbers\n");
	scanf("%f%f",&n1,&n2);
	product=n1*n2;
	printf("the product is %f",product);

	return 0;
}
