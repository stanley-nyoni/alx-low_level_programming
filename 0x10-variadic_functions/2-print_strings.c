#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - prints strings
*@seperator: string to be printed bwtween strings
*@n: number of strings passed to the function
*
* Return: nothing
*/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{

		s = va_arg(str, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < (n - 1))
			if (seperator)
				printf("%s", seperator);
	}
	printf("\n");
	va_end(str);
}
