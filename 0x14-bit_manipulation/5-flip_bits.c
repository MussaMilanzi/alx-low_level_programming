#include <stdio.h>
#include "main.h"
/**
 * flip_bits -  function that returns the number of
 * bits you would need to flip to get
 * from one number to another.
 * @n: param1
 * @m: param2
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int result;

	result = n ^ m;

	for (; result != 0; i++)
	{
		result &= (result - 1);
	}
	return (i);
}
