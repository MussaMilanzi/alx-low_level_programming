#include "main.h"

/**
 * rev_string - Print String
 * @s: var s
 * Return: 0
 */

void rev_string(char *s)
{
	char m = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;

		m = s[i];
		s[i] = s[c];
		s[c] = m;
	}
}
