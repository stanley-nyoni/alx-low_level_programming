#include <stdio.h>
/**
* main - Entry point
*
* Description: using ASCII to print lowercase letters in revers
* Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
