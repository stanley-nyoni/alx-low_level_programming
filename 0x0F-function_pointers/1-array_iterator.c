#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - executes a function given as a parameter
*@array: array of elements to execute the function
*@size: size of the array
*@action: pointer to a function that takes in integer and returns nothing
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
