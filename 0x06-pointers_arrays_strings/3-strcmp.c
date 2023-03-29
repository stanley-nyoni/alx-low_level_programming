#include "main.h"

/**
* _strcmp - compares two strings
*@s1: input string
*@s2: input string
*
* Return: 15 if s1 is greater or eqaul to s2,
*-15 if s2 is greater or equal to s1, 0 if both strings are equal.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (flag == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		flag = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (flag);
}
