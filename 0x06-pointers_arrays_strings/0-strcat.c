#include "main.h"

/**
* _strcat - concateenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int len1, len2;
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}
	return (dest);
}
