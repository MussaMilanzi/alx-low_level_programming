#include <stdio.h>
/**
 * main - Program that prints all natural numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
