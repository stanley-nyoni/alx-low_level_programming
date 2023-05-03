#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning
*@head: head pointer to the list
*@n: node data
*
* Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
