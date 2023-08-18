#include "lists.h"

/**
* add_dnodeint_end - add new node at the end of a list
* @head: head pointer
* @n: integer
*
* Return: address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *p;
	dlistint_t *ptr;
	int len = 0;
	int i = 1;

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	p = *head;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (i < len)
		{
			ptr = ptr->next;
			i++;
		}
		ptr->next = temp;
		temp->prev = ptr;

	}
	return (temp);
}
