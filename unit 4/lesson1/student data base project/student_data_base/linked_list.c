#include "linked_list.h"
struct Sstudent* gp_first_student = NULL;

void Add_student (){
	struct Sstudent* P_new_student ;
	struct Sstudent* P_last_student;
	if(gp_first_student == NULL)
	{

		P_new_student = (struct Sstudent*)malloc (sizeof(struct Sstudent));
		gp_first_student = P_new_student;
		P_new_student->P_next_student=NULL;
	}
	else
	{
		P_last_student = gp_first_student;
		while(P_last_student->P_next_student)
		{
			P_last_student =P_last_student->P_next_student;
		}
		P_new_student = (struct Sstudent*)malloc (sizeof(struct Sstudent));
		P_last_student->P_next_student =P_new_student;
		P_new_student->P_next_student=NULL;
	}
	fill_new_student(P_new_student);
}

void fill_new_student (struct Sstudent* new_student)
{
	char temp_var[40];
	printf("\nenter id : \n");
	gets(temp_var);
	new_student->student.id=atoi(temp_var);

	printf("\nenter student name : \n");
	gets(new_student->student.name);


	printf("\nenter student height : \n");
	gets(temp_var);
	new_student->student.height=atof(temp_var);
}

int delete_student()
{
	int selected_id;
	char temp_var [40];
	printf("\nenter the student id to be deleted\n");
	gets(temp_var);
	selected_id=atoi(temp_var);
	if(gp_first_student)
	{
		struct Sstudent* P_selected_student=gp_first_student ;
		struct Sstudent* P_previous_student =NULL;
		while(P_selected_student)
		{
			if(P_selected_student->student.id==selected_id)
			{
				if(P_previous_student)
				{
					P_previous_student->P_next_student=P_selected_student->P_next_student;
				}
				else
				{
					gp_first_student=P_selected_student->P_next_student;
				}
				free(P_selected_student);
				return 1;
			}
			P_previous_student=P_selected_student;
			P_selected_student=P_selected_student->P_next_student;

		}

	}
	printf("\ncan not find the id \n");
	return 0;
}

void view_students()
{
	int count=1;
	struct Sstudent* P_current_student=gp_first_student;
	if(gp_first_student==NULL)
		printf("===EMPTY LIST===");
	while(P_current_student)
	{
		printf("\nRecord number : %d \n",count);
		printf("\nid number  : %d \n",P_current_student->student.id);
		printf("\nstudent name  : %s \n",P_current_student->student.name);
		printf("\nstudent height  : %f \n",P_current_student->student.height);
		P_current_student=P_current_student->P_next_student;
		count++;
	}
}
void delete_all_students()
{
	struct Sstudent* P_current_student = gp_first_student;
	if(gp_first_student==NULL)
		printf("===EMPTY LIST ===");
	while(P_current_student)
	{
		struct Sstudent* P_temp=P_current_student;
		P_current_student=P_current_student->P_next_student;
		free(P_temp);
	}
	gp_first_student=NULL;

}
void get_node_index()
{
	int index;
	struct Sstudent* P_index=gp_first_student;
	int count=1;
	printf("\nenter the index\n");
	scanf("%d",&index);
	if(gp_first_student==NULL)
		printf("==empty list==");
	else
	{


		while(P_index)
		{
			if(count==index)
			{
				printf("\nRecord number : %d \n",count);
				printf("\nid number  : %d \n",P_index->student.id);
				printf("\nstudent name  : %s \n",P_index->student.name);
				printf("\nstudent height  : %f \n",P_index->student.height);
				break;
			}

			P_index=P_index->P_next_student;
			count++;


		}
		if(P_index==NULL)
			printf("\nwrong index\n");
	}

}

void number_of_students()
{
	struct Sstudent* P_count=gp_first_student;
	int count;
	if(gp_first_student==NULL)
		printf("==empty list==");
	else
	{
		while(P_count)
		{
			P_count=P_count->P_next_student;
			count++;
		}
	}
	printf("\nnumber of students = %d\n",count);

}
void number_of_node_from_end(int index)
{
	struct Sstudent* P_main=gp_first_student;
	struct Sstudent* P_ref=gp_first_student;
	printf("\nenter the number of student from the end\n");
	scanf("%d",&index);
	if(gp_first_student==NULL)
		printf("==empty list==");
	else
	{
		while(index)
		{
			if(P_ref==NULL)
				break;
			P_ref=P_ref->P_next_student;
			index--;
		}
		if(index!=0)
		{
			printf("\ninde not exist\n ");
		}
		else
		{
			while(P_ref)
			{
				P_ref=P_ref->P_next_student;
				P_main=P_main->P_next_student;
			}
		}
		printf("\nid number  : %d \n",P_main->student.id);
		printf("\nstudent name  : %s \n",P_main->student.name);
		printf("\nstudent height  : %f \n",P_main->student.height);

	}


}
void git_middle_node()
{
	struct Sstudent* P_slow=gp_first_student;
	struct Sstudent* P_fast=gp_first_student;
	if(gp_first_student==NULL)
		printf("==empty list==");
	else
	{
		while((P_fast->P_next_student!=NULL)&&(P_slow->P_next_student!=NULL))
		{
			P_fast=P_fast->P_next_student->P_next_student;
			P_slow=P_slow->P_next_student;

		}
		printf("\nid number  : %d \n",P_slow->student.id);
		printf("\nstudent name  : %s \n",P_slow->student.name);
		printf("\nstudent height  : %f \n",P_slow->student.height);


	}


}
void reverse_LinkedList ()
{
	struct Sstudent* P_current=gp_first_student;
	struct Sstudent* P_next=NULL;
	struct Sstudent* P_prev=NULL;
	if(gp_first_student==NULL)
			printf("==empty list==");
	else
	{
		while(P_current)
		{
			P_next=P_current->P_next_student;
			P_current->P_next_student=P_prev;
			P_prev=P_current;
			P_current=P_next;
		}
		gp_first_student=P_prev;
		printf("\nreverse is done \n");



	}


}


