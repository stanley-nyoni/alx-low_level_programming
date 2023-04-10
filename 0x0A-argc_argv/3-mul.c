#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two arguments
*@argc: arg count
*@argv: array of pointers to string
*
*Return: 0 on success, 1 on Error
*/

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;
	int flag = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		flag = 0;
	}
	else
	{
		printf("Error\n");
		flag = 1;
	}
	return (flag);
}
