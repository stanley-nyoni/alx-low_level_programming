#include <stdio.h>

/**
* main - prints all the arguments it recieves
*@argc: argument count
*@argv: array of pointers to string
*
*Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
