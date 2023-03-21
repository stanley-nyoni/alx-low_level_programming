#include "main.h"

/**
* _islower - check for lowercase character.
*
* @c: THe character from ASCII table
*Return: 1 if lowercase. 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
