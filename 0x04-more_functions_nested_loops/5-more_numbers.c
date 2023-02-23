#include "main.h"

/**
 * more_numbers - Fuction that print 10times number
 * Return: 0
 */

void more_numbers(void)
{
	int count, i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
