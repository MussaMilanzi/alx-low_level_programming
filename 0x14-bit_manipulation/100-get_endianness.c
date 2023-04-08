#include <stdio.h>
#include  "main.h"

/**
 * get_endianness - function that checks the endianness
 * @void: param
 * Return: 0
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *) &i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
