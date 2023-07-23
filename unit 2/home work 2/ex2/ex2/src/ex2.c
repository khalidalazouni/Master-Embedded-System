/*
 ============================================================================
Lesson 3 c basics
Ex2_homework2
Created on : 23/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char n;
	printf("enter an alphapet:\n");
	scanf("%c",&n);
	switch (n){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowel",n);
		break;
	default :
		printf("%c is a consonant",n);
		break;
	}
}
