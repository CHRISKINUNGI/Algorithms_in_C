#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *pointer;
}node;

void inserting(node**list, int element)
{
	/* make a node using malloc */
        node *Head = malloc(sizeof(node));

	if (Head == NULL)
	{
		perror("malloc Error");
	}
	
	Head -> data = element;
	Head -> pointer = *list;
	*list = Head;
}

void initialising(node**list, int element)
{
       	*list = malloc(sizeof(node));
	(*list) -> data = element;
	(*list) -> pointer = NULL;
}
/**
 * Description:impimentingg single linked lists
 *
 * main - program execussion starts here
 *
 * Return: 0 succecfull terminati
 *
 */

int main(void)
{
	struct node *list1;
        initialising(&list1,10);
	inserting(&list1, 10);

	return (0);
}
