/*
 ============================================================================

Lesson 3 c basics
Ex1_homework2
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int n;
	printf("enter an integer you want to check :\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is an even number ",n);
	}
	else{
		printf("%d is an odd number",n);
	}

}
