#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Function that sets the value
 * of a bit to 0 at a given index.
 * @n: param1
 * @index: param2
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 32)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
	}
	return (1);
}
