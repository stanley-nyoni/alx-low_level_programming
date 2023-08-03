#include "main.h"

/**
* flip_bits - gets the no of bits needed to flip
* to get from one no to another
* @n: 1st number
* @m: 2nd number 
*
* Return: the number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
	}
	return (0);
}
