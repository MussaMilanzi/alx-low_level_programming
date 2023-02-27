#include "main.h"

/**
 * swap_int - Program that swap two number
 * @a: var 1
 * @b: var 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
