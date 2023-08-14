/*
 ============================================================================
Lesson 6,7 function
Ex1_homework5
Created on : 14/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */
#include <stdio.h>
struct student {
	char name [32];
	int roll_number;
	float marks;
}s;
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	printf("enter information of student \n");
	printf("enter name :");
	scanf("%s",&s.name);
	printf("enter roll number : ");
	scanf("%d",&s.roll_number);
	printf("enter marks : ");
	scanf("%f",&s.marks);
	printf("disblaying information\n");
	printf("name : %s \nRoll : %d \nmarks : %f",s.name,s.roll_number,s.marks);
}
