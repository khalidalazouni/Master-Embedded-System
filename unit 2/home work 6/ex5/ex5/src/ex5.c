/*
 ============================================================================
Lesson 8
Ex5_homework6
Created on : 21/8/2023
Author:Khalid walid alazouni
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Exmployee{
	char name[10];
	int id;
};
int main(void) {
	setbuf(stdout,NULL); //TO SOLVE INPUT/OUTPUT BUFFER BUG
	struct Exmployee emp1={"ahmed",1001},emp2={"khalid",10002};
	struct Exmployee* arr[2]={&emp1,&emp2};
	struct Exmployee (*(*p)[2])=&arr;
	printf("Employee 1 name :%s\n",(*(*(*p))).name);
	printf("Exmployee 1 ID :%d\n",(*(*(*p))).id);
	printf("Employee 2 name :%s\n",(*(*(*p+1))).name);
	printf("Exmployee 2 ID :%d\n",(*(*(*p+1))).id);
}
