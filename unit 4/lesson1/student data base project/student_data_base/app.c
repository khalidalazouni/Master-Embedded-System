#include "linked_list.h"

void main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char temp[40];
	int index_end;
	while(1)
	{
		printf("\nchoose one of the following options \n ");
		printf("\n1. Add Student\n");
		printf("\n2. delete Student\n");
		printf("\n3. view all Students\n");
		printf("\n4. delete all Students\n");
		printf("\n5. git node index\n ");
		printf("\n6. git number of students\n");
		printf("\n7. git student number from the end\n");
		printf("\n8. git middle node\n");
		printf("\n9. reverse students\n");
		printf("\nenter option number");

		gets(temp);
		switch (atoi(temp))
		{
		case 1:
			Add_student();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students();
			break;
		case 4:
			delete_all_students();
			break;
		case 5:
			get_node_index();
			break;
		case 6:
			number_of_students();
			break;
		case 7:
			printf("\nenter the number of student from the end\n");
			scanf("%d",&index_end);
			number_of_node_from_end(index_end);
			break;
		case 8:
			git_middle_node();
			break;
		case 9:
			reverse_LinkedList();
			break;
		default:
			printf("\nwrong option");
			break;

		}


	}

}

