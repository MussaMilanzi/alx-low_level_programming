#include "main.h"

/**
 * _strlen_recursion - function that return length
 * of string
 * @s: string param
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(s + 1);
	return (1 + i);
}
