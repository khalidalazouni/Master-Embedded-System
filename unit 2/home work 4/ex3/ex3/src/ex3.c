/*
 ============================================================================
Lesson 5 function
Ex1_homework4
Created on : 3/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
void reverse (char string[] ,int n){
	char temp;
	static int i=0;
	temp=string[i];
	string[i]=string[n-1];
	string[n-1]=temp;
	i++;
	if(i==n)
		return;
	reverse(string,n-1);
}
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	char st [100];
	int l;
	printf("enter a sentence :");
	gets(st);
	l=strlen(st);
	reverse(st,l);
	printf("%s",st);
}
