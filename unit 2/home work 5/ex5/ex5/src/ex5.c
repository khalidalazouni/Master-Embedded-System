/*
 ============================================================================
Lesson 6,7 function
Ex5_homework5
Created on : 14/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#define pi 3.14159
#define circle_area(x)  pi*x*x
int main(void) {
	float r,area;
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	printf("enter the radius : ");
	scanf("%f",&r);
	area=circle_area(r);
	printf("area =%.2f ",area);

}
