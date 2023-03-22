#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function thta searches for integer
 * @array: array that points to elements in aarray
 * @size: array length
 * @cmp: pointer to a function to be used to
 * compare values
 *
 * Return : 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
