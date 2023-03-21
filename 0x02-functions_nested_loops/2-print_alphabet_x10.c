#include "main.h"

/**
* print_alphabet_x10 - Prints alphabet in lowercase 10 times.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
