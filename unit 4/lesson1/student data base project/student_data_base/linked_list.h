/*
 * linked_list.h
 *
 *  Created on: Sep 23, 2023
 *      Author: vip
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"


//type definitions
struct data{
	int id;
	char name [40];
	float height;
};

struct Sstudent {
	struct data student;
	struct Sstudent * P_next_student;
};




//functions prototypes
void Add_student ();
void fill_new_student (struct Sstudent* new_student);
int delete_student();
void delete_all_students();
void view_students();
void get_node_index();
void number_of_students();
void number_of_node_from_end(int index);
void git_middle_node();
void reverse_LinkedList();







#endif /* LINKED_LIST_H_ */
