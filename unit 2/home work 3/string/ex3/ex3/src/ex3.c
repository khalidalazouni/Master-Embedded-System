/*
 ============================================================================
Lesson 4 string
Ex3_homework3
Created on : 27/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char string[100];
	char reve[100];
	int l,i;
	printf("enter the string :");
	gets(string);
	l=strlen(string)-1;
	for(i=0;string[i]!='\0';i++){
		reve[i]=string[l-i];
	}
	reve[i]='\0';
	printf("the reversed string is :%s",reve);
}
