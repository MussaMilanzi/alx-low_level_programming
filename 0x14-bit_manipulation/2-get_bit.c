#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function that returns the value
 * of a bit at a given index.
 * @n: param1
 * @index: param2
 * Return: the value of the bit at index index
 * or -1 if an error occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*unsigned long int result;*/

	if (index >= sizeof(unsigned long int) * 32)
	{
		return (-1);
	}

	/*result = (unsigned long int)1 << index;*/
	return ((n & (1 << index)) != 0);
}
