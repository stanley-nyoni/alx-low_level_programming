#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer to an array of chars
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		j++;
	}

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	x = j;
	for (j = 0; j <= x; k++, j++)
		str[k] = s2[j];

	return (str);
}
