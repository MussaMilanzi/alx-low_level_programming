#include "main.h"
#include <string.h>

/**
 * _strlen - Prints lenght of string
 * @s: var s
 * Return: 0
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
