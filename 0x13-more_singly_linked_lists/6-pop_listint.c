#include "lists.h"

/**
* pop_listint - deletes the head of node of a list
*@head: head pointer
*
* Return: data of the head node
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;

	data = temp->n;

	h = temp->next;

	free(temp);
	*head = h;

	return (data);
}
