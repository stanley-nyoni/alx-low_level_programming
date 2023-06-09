#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of the list
*@head: head pointer
*@index: index of the node
*
*Return: nth node
* NULL, if node doesnt exit
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
