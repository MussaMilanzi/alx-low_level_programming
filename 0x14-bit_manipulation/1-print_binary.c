#include <stdio.h>
#include "main.h"

/**
 * print_binary - Function that prints the
 * binary representation of a number.
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{

	/**
	* unsigned long int result;
	* int i;
	*
	* for (i = 7; i >= 0; i--)
	* {
	* result = (unsigned long int)1 << i;
	* _putchar((n & result) ? '1' : '0');
	* }
	* _putchar('\n');
	*/

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
