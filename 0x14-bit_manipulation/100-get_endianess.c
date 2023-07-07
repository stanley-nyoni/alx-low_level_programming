#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big, 1 if little
*/

int get_endianness(void)
{
	unsigned int i;
	char *x;

	i = 1;
	x = (char *) &c;

	return ((int)*c);
}
