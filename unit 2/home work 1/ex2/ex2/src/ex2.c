/*
 ============================================================================
Lesson 3 c basics
Ex2_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int N;
	printf("please enter an integer number");
	scanf("%d",&N);
	printf("the number you enterd is %d",N);
}
