#include "main.h"

/**
* set_bit - sets the value og a bit to 1 at an index given
* @n: number
* @index: index
*
* Return: 1 success, -1 fails
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
