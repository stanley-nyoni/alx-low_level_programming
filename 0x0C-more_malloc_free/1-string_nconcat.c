#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates 2 strings
*@s1: string one
*@s2: string two
*@n: number of bytes from string two to be copied
*
* Return: pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			*(str + i) = *(s1 + i);
		else
			*(str + i) = *(s2 + (i - len1));
	}
	*(str + i) = '\0';

	return (str);
}
