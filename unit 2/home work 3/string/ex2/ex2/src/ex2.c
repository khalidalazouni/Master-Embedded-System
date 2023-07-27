/*
 ============================================================================
Lesson 4 string
Ex2_homework3
Created on : 27/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char string[100];
	int i;
	printf("enter a string : ");
	gets(string);
	for(i=0;string[i]!='\0';i++);
    printf("lenght of string is %d",i);


}
