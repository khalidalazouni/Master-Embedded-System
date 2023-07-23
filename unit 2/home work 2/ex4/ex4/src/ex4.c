/*
 ============================================================================

Lesson 3 c basics
Ex4_homework2
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	float n;
	printf("enter the number\n");
	scanf("%f",&n);
	if(n>0)
	{
		printf("%f is a positive number",n);

	}
	else if (n<0)
	{
		printf("%f is a negative number",n);
	}
	else
	{
		printf("you entered zero");
	}
}
