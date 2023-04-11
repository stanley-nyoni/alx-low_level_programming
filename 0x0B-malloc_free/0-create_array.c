#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
*@size: size of an array of chars
*@c: input char
*
* Return: Always 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc((sizeof(char)) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	return (str);
	free(str);
}
