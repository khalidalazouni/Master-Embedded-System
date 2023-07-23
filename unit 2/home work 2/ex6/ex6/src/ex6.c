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
	int n,i;
	int sum=0;
	printf("enter an integer\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("sum =%d",sum);

}
