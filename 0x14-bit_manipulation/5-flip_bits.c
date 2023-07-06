#include "main.h"

/**
* flip_bits - returns the number of bits you would need
*  to flip to get from one number to another.
*@n: no 1
*@m: no 2
*
* Return: no of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			x++;
		}
	}
	return (x);
}
