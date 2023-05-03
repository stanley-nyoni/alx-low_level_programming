#include "lists.h"

/**
* free_listint2 - fress a linked list
*@head: head pointer
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *p;

	if (head != NULL)
	{
		p = *head;

		while ((temp = p) != NULL)
		{
			p = p->next;
			free(temp);
		}
		*head = NULL;
	}
}
