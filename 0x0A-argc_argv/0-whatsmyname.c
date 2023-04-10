#include <stdio.h>

/**
* main - prints the name of own program
*@argc: argument count
*@argv: array of pointer to strings
*
* Return: Always 0.
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
