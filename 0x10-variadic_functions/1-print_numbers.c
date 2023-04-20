#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - print numbers
*@seperator: string to seperate numbers
*@n: number of integers passed to a function
*
* Return: 0 on success
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

		va_start(list, n);

			for (i = 0; i < n; i++)
			{
				num = va_arg(list, int);
				printf("%d", num);
				if (seperator && i < n - 1)
					printf("%s", seperator);
			}
	printf("\n");
	va_end(list);
}
