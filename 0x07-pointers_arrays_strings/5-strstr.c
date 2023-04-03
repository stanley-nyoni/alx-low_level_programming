#include "main.h"

/**
*_strstr - locates a substring
*@haystack: input string
*@needle: substring
*
* Return: pointer to char
*/

char *_strstr(char *haystack, char *needle)
{
	char *xhaystack;
	char *yneedle;

	while (*haystack != '\0')
	{
		xhaystack = haystack;
		yneedle = needle;

		while (*haystack != '\0' && *yneedle != '\0' && *haystack == *yneedle)
		{
			haystack++;
			yneedle++;
		}
		if (!*yneedle)
			return (xhaystack);
		haystack = xhaystack + 1;
	}
	return (0);
}
