#include "main.h"

/**
* string_toupper - changes all lowercase letters to uppercase
*@str: input string
* Return: character in uppercase
*/

char *string_toupper(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
