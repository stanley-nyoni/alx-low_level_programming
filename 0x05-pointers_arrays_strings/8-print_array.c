#include <stdio.h>
#include "main.h"

/**
* print_array - prints the elements of an array of integers
* @a: input array
* @n: input number of elements
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
