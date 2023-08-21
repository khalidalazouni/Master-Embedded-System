/*
 ============================================================================
Lesson 8
Ex1_homework6
Created on : 21/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	int m=29;
	int* ab;
	printf("Address of m : %p\nValue of m :%d\n",&m,m);
	ab=&m;
	printf("Address of pointer ab :%p \nContent of pointer ab :%d\n ",&ab,*ab);
	m=34;
	printf("Address of pointer ab :%p \nContent of pointer ab :%d\n ",&ab,*ab);
	m=7;
	printf("Address of m :%p \nValue of m :%d",ab,*ab);
}

