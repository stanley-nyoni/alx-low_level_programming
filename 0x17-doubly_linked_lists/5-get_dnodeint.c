#include "lists.h"

/**
* get_dnodeint_at_index - get node at index
* @head: head pointer
* @index: nth node
*
* Return: node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;
	unsigned int count = 0;
	dlistint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = head;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	if (index > count)
		return (NULL);

	while (i <= index)
	{
		if (i == index)
			temp = head;
		head = head->next;
		i++;
	}
	return (temp);
}
