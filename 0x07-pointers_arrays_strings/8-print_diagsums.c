#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: var1
 * @size: var2
 */
void print_diagsums(int *a, int size)
{
int i;

unsigned int result1, result2;

result1 = 0;
result2 = 0;
for (i = 0; i < size; i++)
{
result1 += a[(size * i) + i];
result2 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", result1, result2);
}
