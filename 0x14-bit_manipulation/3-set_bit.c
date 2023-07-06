#include "main.h"

/**
* set_bit - sets the value of a bit at index to 1
*
*@n: unsigned long int
*@index: index
*
* Return: 1 on success, -1 failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
