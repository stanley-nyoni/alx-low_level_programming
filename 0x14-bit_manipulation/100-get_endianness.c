#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, else 1
*/

int get_endianness(void)
{
	char *byte;
	unsigned int num;

	num = 1;
	byte = (char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
