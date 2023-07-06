#include "main.h"

/**
* binary_to_uint- converts a binary number to an unsigned int.
*
* @b: pointer to a  binary string
*
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, base2;

	if (b == NULL)
	{
		return (0);
	}

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			x += base2;
		}
	}
	return (x);
}
