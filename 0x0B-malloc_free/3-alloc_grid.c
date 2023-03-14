#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: param1
 * @height: param2
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **pgrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pgrid = malloc(height * sizeof(int *));
	if (pgrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pgrid[i] = malloc(width * sizeof(int));
		if (pgrid[i] == NULL)
		{
			while (i >= 0)
				free(pgrid[i--]);
			free(pgrid);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			pgrid[i][j] = 0;
	}

	return (pgrid);
}
