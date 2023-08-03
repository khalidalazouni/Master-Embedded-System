/*
 ============================================================================
Lesson 5 function
Ex1_homework4
Created on : 3/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */
#include <stdio.h>
# define TRUE 1
#define FALSE 0
void find_prime_numbers (int n,int z){
	int isprime = TRUE;
	int i,j;
	printf("prime numbers between %d and %d are : ",n ,z);
	for(i=n;i<z;i++){
		if(i==1||i==0){
			continue;
		}
		for(j=2;j<(i/2);j++){
			if(i%j==0){
				isprime=FALSE;
				break;
			}
		}
		if(isprime==TRUE)
			printf("%d ",i);
		else
			isprime=TRUE;
	}
}
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int a,b;
	printf("enter two numbers (intervals)\n");
	scanf("%d%d",&a,&b);
	find_prime_numbers(a,b);
}
