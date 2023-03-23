#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that return all the sum
 * of the parameters
 * @n: integer
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
