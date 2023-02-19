#include <stdio.h>
/**
 * main - Program that prints two digits
 * Return: 0
 */
int main(void)
{

	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 100; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 99 || j != 100)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
