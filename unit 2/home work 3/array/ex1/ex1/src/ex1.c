/*
 ============================================================================
Lesson 4 array
Ex1_homework3
Created on : 27/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;
	printf("enter the elements of 1st matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter a%d%d : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nenter the elements of 2st matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter b%d%d : ",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum of matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%f\t",sum[i][j]);
		}
		printf("\n");
	}
}



