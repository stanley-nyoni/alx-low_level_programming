#include "main.h"

/**
* rev_string - reverses a string
*@s: input string
*
* Return: void
*/

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j;
	char ch;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j < (len / 2); j++)
	{
		ch = s[j];
		s[j] = s[len - 1- j];
		s[len - 1- j] = ch;
	}
}
