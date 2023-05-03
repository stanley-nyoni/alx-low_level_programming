#include "lists.h"

/**
*print_listint - prints all elements of a listint_t list
*@h: head pointer to list to print its elements
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
