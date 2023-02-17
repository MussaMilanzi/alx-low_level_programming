#include <stdio.h>
/**
 * main - Program that prints lower and uppercase alphabelt
 * Return: Always 0
 */
int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	put('\n');
	return (0);
}
