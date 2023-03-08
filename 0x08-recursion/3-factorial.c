#include "main.h"

/**
 * factorial - function that return factorial
 * of a number
 * @n: factorial
 * Return: 0
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
