:#include <stdio.h>
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
	int i, j;
	int sum = 0;
	int flag = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				flag = 1;
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (flag);
}
