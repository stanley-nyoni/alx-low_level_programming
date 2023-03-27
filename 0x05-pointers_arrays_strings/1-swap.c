#include "main.h"

/**
* swap_int - swap the values of 2 integers
*@a: input number
*@b: input number
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
