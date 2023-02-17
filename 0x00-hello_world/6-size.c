#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int i;
	long int b;
	long long int m;
	float c;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
