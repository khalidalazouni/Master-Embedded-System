/*
 ============================================================================
 Lesson 8
Ex3_homework6
Created on : 21/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char string[11];
	char* p;
	int i;
	printf("Input a string : ");
	gets(string);
	p=string+10;
	printf("Reverse of the string is : ");
	for(i=0;i<11;i++){
		printf("%c",*p);
		p--;
	}
}
