/*
 ============================================================================
Lesson 8
Ex4_homework6
Created on : 21/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXIMUM 15
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int arr[MAXIMUM];
	int* p;
	int i,n;
	printf("Input the number of elements to store in the array (max 15) :");
	scanf("%d",&n);
	printf("Input 5 number of elements in the array:\n");
	p=arr;
	for(i=0;i<n;i++){
		printf("element %d :",i+1);
		scanf("%d",&arr[i]);
		p++;

	}
	printf("The elements of array in reverse order are :");
	for(i=n;i>=0;i--){
		printf("element %d : %d\n",i+1,*p);
		p--;
	}


}
