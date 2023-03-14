#include "main.h"
#include <stdlib.h>
/**
  *_strdup - function that returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string passed.
  *@str: param
  *Return: Awalys 0
  */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int size, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	pstr = malloc(sizeof(char) * (size + 1));

	/*check if malloc was successful*/
	if (pstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pstr[i] = str[i];
	}
	pstr[size] = '\0';
	return (pstr);

}
