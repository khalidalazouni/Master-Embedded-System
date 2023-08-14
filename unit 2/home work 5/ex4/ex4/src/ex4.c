/*
 ============================================================================
Lesson 6,7 function
Ex4_homework5
Created on : 14/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
struct student {
	int roll;
	char name [32];
	float marks;
}info[10];
int main(void) {
	int i;
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	printf("enter information of students : \n");
	for(i=1;i<11;i++){
		printf("for roll number %d\n",i);
		printf("enter name : ");
		scanf("%s",&info[i].name);
		printf("enter marks : ");
		scanf("%f",&info[i].marks);
	}
	printf("display information of students : \n");
	for(i=1;i<11;i++){
		printf("information for roll number %d\n",i);
		printf("name :%s\n ",info[i].name);
		printf("marks : %f\n",info[i].marks);
	}

}
