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
	int flag = 0;
	int rtn = 0;

	if (array && size && cmp)
	{

		if (size <= 0)
		{
			rtn = -1;
		}

		for (i = 0; i < size; i++)
		{
			flag = cmp(array[i]);
			if (flag != 0)
			{
				rtn = i;
				break;
			}

		}
		if (flag == 0)
		{
			rtn = -1;
		}
	}
	return (rtn);
}
