#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

void create(int n)
{
    int data, i;
    struct node *newNode;
    if (n >= 1)
    {
	head = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data of node 1: ");
	scanf("%d", &data);
	head->data = data;
	head->prev = NULL;
	head->next = NULL;
	tail = head;
	for (i = 2; i <= n; i++)
	{
	    newNode = (struct node *)malloc(sizeof(struct node));
	    printf("Enter the data of node %d: ", i);
	    scanf("%d", &data);
	    newNode->data = data;
	    newNode->prev = tail;
	    newNode->next = NULL;
	    tail->next = newNode;
	    tail = newNode;
	}
	printf("DOUBLY LINKED LIST CREATED SUCCESSFULLY");
    }
}

void insert_beg(int data)
{
    struct node *newNode;
    if (head == NULL)
    {
	printf("List is empty");
    }
    else
    {
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
	printf("NODE INSERTED SUCCESSFULLY AT THE BEGINNING");
    }
}

void insert_end(int data)
{
    struct node *newNode;
    if (head == NULL)
    {
	printf("List is empty");
    }
    else
    {
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
	printf("NODE INSERTED SUCCESSFULLY AT THE END");
    }
}

void delete_beg()
{
    struct node *toDelete;
    if (head == NULL)
    {
	printf("List is empty");
    }
    else
    {
	toDelete = head;
        head = head->next;
        head->prev = NULL;
        printf("NODE DELETED SUCCESSFULLY FROM THE BEGINNING");
        free(toDelete);
    }
}

void delete_end()
{
    struct node *toDelete;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        toDelete = tail;
        tail = tail->prev;
        tail->next = NULL;
        printf("NODE DELETED SUCCESSFULLY FROM THE END");
        free(toDelete);
    }
}

void display()
{
    struct node *temp;
    int n = 1;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");
        while (temp != NULL)
        {
            printf("Data %d = %d\t", n, temp->data);
            n++;
            temp = temp->next;
        }
    }
}