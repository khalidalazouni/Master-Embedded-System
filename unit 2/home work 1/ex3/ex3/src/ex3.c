/*
 ============================================================================
Lesson 3 c basics
Ex3_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int n1,n2;
	int sum=0;
	printf("please enter two numbers");
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;
	printf("the sum is %d",sum);

	return 0;
}
