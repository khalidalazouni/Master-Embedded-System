/*
 ============================================================================
Lesson 4 array
Ex5_homework3
Created on : 27/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */
#include <stdio.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int n,i,arr[100],search,location;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the values :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nenter the element to be searched for : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(arr[i]==search){
			location=i+1;
			break;
		}
	}
	if(i<n){
	printf("number found at location = %d",location);
	}
	else
	{
		printf("number not founbd ");
	}
}

