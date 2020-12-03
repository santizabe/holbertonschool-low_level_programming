#include "holberton.h"

/**
*
*
*
*
*/

int **alloc_grid(int width, int height)
{
	int **hello, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	hello = malloc(height * sizeof(int));
	if (hello == NULL)
	{
		free(hello);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		hello[i] = malloc(width * sizeof(int));
		if (hello[i] == NULL)
		{
			free(hello[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			hello[i][j] = 0;
		}
	}

	return (hello);
}
