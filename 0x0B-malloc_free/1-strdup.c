#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - copy the string given as a parameter
*@str: input string to be copied
*
*Return: pointer to duplicate string
*/

char *_strdup(char *str)
{
	int i, j;
	char *copy;

	j = 0;
	while (*(str + j) != '\0')
	{
		j++;
	}

	copy = (char *) malloc((sizeof(char)) * j + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		*(copy + i) = *(str + i);
	}
	
	if (copy == NULL)
	{
		return (NULL);
	}

	return (copy);
	free(copy);
}
