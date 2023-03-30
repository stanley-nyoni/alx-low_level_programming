#include "main.h"

/**
* leet - encodes a string into 1337
*@str: input string
*
* Return: pointer to char
*/

char *leet(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		if (str[i] == 65 || str[i] == 97)
		{
			str[i] = '4';
		}
		else if (str[i] == 69 || str[i] == 101)
		{
			str[i] = '3';
		}
		else if (str[i] == 79 || str[i] == 111)
		{
			str[i] = '0';
		}
		else if (str[i] == 84 || str[i] == 116)
		{
			str[i] = '7';
		}
		else if (str[i] == 76 || str[i] == 108)
		{
			str[i] = '1';
		}
	}
	return (str);
}
