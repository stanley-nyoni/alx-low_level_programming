#include "main.h"

/**
* print_last_digit - Prints the kast digit of a number.
*
* @i: input number (integer).
*
* Return: Last digit
*/

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
