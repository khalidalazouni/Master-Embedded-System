/*
 ============================================================================
Lesson 3 c basics
Ex4_homework1
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char a;
	printf("enter a character");
	scanf("%c",&a);
	printf("the ASCII value of the character is =%d",a);
	return 0;
}
