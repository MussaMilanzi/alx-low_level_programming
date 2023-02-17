#include <stdio.h>
/**
 * main - Program prints the lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
