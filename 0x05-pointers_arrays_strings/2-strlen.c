#include "main.h"

/**
* _strlen - return the length of a string
*@s: input string
*
* Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
