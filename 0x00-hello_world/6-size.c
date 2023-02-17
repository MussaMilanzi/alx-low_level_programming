#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int j;
	long int b;
	long long int m;
	float c;

printf("Size of a char: %i byte(s)\n", sizeof(x));
printf("Size of a int: %i byte(s)\n", sizeof(j));
printf("Size of a long int: %i byte(s)\n", sizeof(b));
printf("Size of a long long int: %i byte(s)\n", sizeof(m));
printf("Size of a float: %i byte(s)\n", sizeof(c));
return (0);
}
