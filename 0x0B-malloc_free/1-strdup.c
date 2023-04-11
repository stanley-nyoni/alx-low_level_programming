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

	if (str == NULL || j == 0)
	{
		return (NULL);
	}

	copy = (char *) malloc((sizeof(char)) * j + 1);


	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		*(copy + i) = *(str + i);

	}
	*(copy + i) = '\0';

	free(str);

	return (copy);

}
