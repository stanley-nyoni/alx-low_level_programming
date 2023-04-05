#include "main.h"

/**
* factorial - returns the factorial given number
*@n: input no.
*
*Return: factorial of input no.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
