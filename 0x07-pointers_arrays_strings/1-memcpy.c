#include "main.h"

/**
* _memcpy - copies memory area
*@dest: destination
*@src: source
*@n:bytes from memory area to be filled
*
* Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
