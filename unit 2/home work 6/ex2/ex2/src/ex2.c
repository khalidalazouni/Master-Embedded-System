/*
 ============================================================================
 Lesson 8
Ex2_homework6
Created on : 21/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char arr[26];
	char* p;
	int i=0;
	p=arr;
	for(i=0;i<26;i++){
		*p=i+'A';
		p++;
	}
	p=arr;
	printf("The Alphabets are :\n");
	for(i=0;i<26;i++){
		printf("%c ",*p);
		p++;
	}

}
