/*
 ============================================================================

Lesson 4 string
Ex1_homework3
Created on : 27/7/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char s[100],character;
	int i,f=0;
	printf("enter a string : ");
	gets(s);
	printf("\nenter a character to find frequency : ");
	scanf("%c",&character);
	for(i=0;i<100;i++){
		if(s[i]==character){
			f++;
		}

	}
	printf("the frequency of %c = %d",character,f);

}
