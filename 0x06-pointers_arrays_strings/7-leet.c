#include "main.h"

/**
* leet - encodes a string into 1337
*@str: input string
*
* Return: pointer to char
*/

char *leet(char *str)
{
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int nums[] = {52, 51, 48, 55, 49};
	int i;
	int j = 0;

	while (*(str + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + j) == lower[i] || *(str + j) == upper[i])
			{
				*(str + j) = nums[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
