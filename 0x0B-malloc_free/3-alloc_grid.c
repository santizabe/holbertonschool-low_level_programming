#include "holberton.h"

/**
* alloc_grid - Hello
* @width: hello
* @height: Hello v2.0
* Return: Hello
*/

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
