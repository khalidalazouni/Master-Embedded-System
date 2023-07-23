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
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122))){
		printf("%c is an alphabet",ch);
	}
	else{
		printf("%c is not an alphabet",ch);
	}
}
