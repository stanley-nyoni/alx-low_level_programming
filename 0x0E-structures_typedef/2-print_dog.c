#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints a struct dog
*@d: variable of type struct dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("(nil)");
	}
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
