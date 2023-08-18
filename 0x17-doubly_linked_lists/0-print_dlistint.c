#include "lists.h"

/**
* print_dlistint - print all the elements of a dlistint_t list
* @h: head pointer
*
* Return: number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
