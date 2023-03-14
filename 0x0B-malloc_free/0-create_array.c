#include "main.h"
#include <stdlib.h>
/**
  *create_array - cunction that creates an
  *array of chars and initializes it with a specific char.
  *@size: array len
  *@c: var2
  *Return: Awalys 0
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);

}
