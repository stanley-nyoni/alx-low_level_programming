#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: argument count
*@argv: array of pointers to strings
*
*Return: Always 0
*/

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
