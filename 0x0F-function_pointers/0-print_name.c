#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name
 * @f: arg2
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
