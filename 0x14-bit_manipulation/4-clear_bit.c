#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number
* @index: index
*
* Return: 1 success, -1 fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	if (*n & x)
		*n ^= x;

	return (1);
}
