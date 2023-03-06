#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: byte copied
 * @src: area of bytes to copy
 * @dest: area to copy n bytes to
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + 1) = *(src + 1);
	}
	return (*dest);
}
