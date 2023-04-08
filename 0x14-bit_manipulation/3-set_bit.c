#include <stdio.h>
#include "main.h"

/**
 * set_bit - Function that sets the value
 * of a bit to 1 at a given index.
 * @n: param1
 * @index: param2
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 32)
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
	}
	return (1);
}
