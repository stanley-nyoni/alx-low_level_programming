#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
*@nmemb: number of elements in an array
*@size: size of bites
*
* Return: pointer to the allocated memory, on SUCCESS.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(p + i) = 0;
	}
	return (ptr);
}
