#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @accept: val2
 * @s: val1
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, m;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
				m = 1;
			}
		if (m == 0)
		{
			return (n);
		}
	}
	return (0);
}
