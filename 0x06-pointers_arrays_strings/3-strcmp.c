#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	n = s1[i] - s2[i];
	return (n);
}
