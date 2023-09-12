#include <stdio.h>
#include <stdlib.h>
#include "sll.h"

int main()
{
    int n, data, choice = 1;
    while (choice != 0)
    {
	printf("\n1. Create a list of n nodes");
	printf("\n2. Insert at the beginning");
	printf("\n3. Insert at the end");
	printf("\n4. Delete from beginning");
	printf("\n5. Delete from the end");
	printf("\n6. Display");
	printf("\n0. Exit");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	    printf("Enter the number of nodes: ");
	    scanf("%d", &n);
	    create(n);
	    break;
	case 2:
	    printf("Enter the data to be inserted at the beginning: ");
	    scanf("%d", &data);
	    insert_beg(data);
	    break;
	case 3:
	    printf("Enter the data to be inserted at the end: ");
	    scanf("%d", &data);
	    insert_end(data);
	    break;
	case 4:
	    delete_beg();
	    break;
	case 5:
	    delete_end();
	    break;
	case 6:
	    display();
	    break;
	case 0:
	    exit(0);
	    break;
	default:
	    printf("Invalid choice");
	}
    }
    return 0;
}

