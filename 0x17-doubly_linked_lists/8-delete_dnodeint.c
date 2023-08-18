#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at given index
* @head: head pointer
* @index: index
*
* Return: 1 success, otherwise -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 1;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (count == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			else
				*head = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
