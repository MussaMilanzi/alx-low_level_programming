#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Function that returns the sum of a and b.
 * @a: interger1
 * @b: interger2
 *
 * Return: Aways 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the difference of a and b
 * @a: interger1
 * @b: interger2
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: int1
 * @b: int2
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: int1
 * @b: int2
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: int1
 * @b: intb
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
