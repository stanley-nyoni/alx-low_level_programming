#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: pointer to str
*
* Return: converted no.
* 0 if theres one or more chars in @b
*/

unsigned int binary_to_uint(const char *b)
{
	int len, base2;
	unsigned int x;

	if (!b)
		return (0);
	x = 0;
	len = 0;
	while (b[len] != '\0')
		len++;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			x += base2;
	}
	return (x);
}
