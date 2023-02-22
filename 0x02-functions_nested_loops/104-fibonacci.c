#include <stdio.h>
/**
 * main - Fibonacci
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("%d\n", a + b);
	return (0);
}
