#include "function_pointers.h"

/**
* int_index - searches for an index
*@array: array of elements
*@size: size of the array of elements
*@cmp: pointer to a function that takes an int and returns int
*
* Return: -1 if size <= 0, or if no match.
* index of element if matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
