/*
 ============================================================================
Lesson 5 function
Ex2_homework4
Created on : 3/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial (int f){
	if(f>1)
    return f*factorial(f-1);
}

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int num;
	printf("enter a positive integer : ");
	scanf("%d",&num);
	printf("factorial of %d is %d",num,factorial(num));
	return 0;

}
