#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * given as a parameter on each element of an array
 * @array: array that points to first element
 * @size: lenght of an array
 * @action: function pointer to a function thta need
 * to be executed at each elect in array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
