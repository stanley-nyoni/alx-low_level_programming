#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at a given position
* @idx: index
* @n: integer
* @h: head pointer
*
* Return: address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	unsigned int count = 0;
	dlistint_t *p, *ptr;
	unsigned int i = 1;

	p = *h;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}

	if (idx > count || *h == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;

		ptr = *h;
		while (i < idx)
		{
			ptr = ptr->next;
			i++;
		}
		temp->next = ptr->next;
		ptr->next->prev = temp;
		ptr->next = temp;
		temp->prev = ptr;
	}
	return (temp);
}
