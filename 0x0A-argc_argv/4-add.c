#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positve integers
*@argc: arg count
*@argv: array of pointers to string
*
*Return: 0 on success, 1 on Error
*/

int main(int argc, char *argv[])
{
	int i, z, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		sum += atoi(argv[z]);
	}
	printf("%d\n", sum);
	return (0);
}
