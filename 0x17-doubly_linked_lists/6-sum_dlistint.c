#include "lists.h"

/**
* sum_dlistint - gets the sum of all the data
* @head: head pointer
*
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
