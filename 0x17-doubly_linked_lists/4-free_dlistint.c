#include "lists.h"

/**
* free_dlistint - frees a list
* @head: head pointer
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *nextNode;

	temp = head;
	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);
		temp = nextNode;
	}
}
