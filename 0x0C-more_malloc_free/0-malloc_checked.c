#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory
*@b: number of bytes
*
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr =  malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
