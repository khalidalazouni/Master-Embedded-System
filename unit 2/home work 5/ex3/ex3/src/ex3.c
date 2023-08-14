/*
 ============================================================================
Lesson 6,7 function
Ex3_homework5
Created on : 14/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
struct complex_number{
	float real;
	float imaginary;
}n1,n2,sum;

int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	printf("for 1st complex number : \n");
	printf("enter real and imaginary number respectively : ");
	scanf("%f %f",&n1.real,&n1.imaginary);
	printf("for 2st complex number : \n");
	printf("enter real and imaginary number respectively : ");
	scanf("%f %f",&n2.real,&n2.imaginary);
	sum.real=n1.real+n2.real;
	sum.imaginary=n1.imaginary+n2.imaginary;
	printf("sum = %.1f + %.1fi",sum.real,sum.imaginary);

}
