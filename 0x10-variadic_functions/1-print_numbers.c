#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers,
 * followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list agr;
	unsigned int i;

	va_start(agr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(agr, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(agr);
}
