#include "holberton.h"

/**
 * _calloc - allocates memory for an initialized buffer
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	int i;
	int max;

	if (nmemb < 0 || size < 0)
		return (NULL);
	max = size * nmemb;
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max ; i++)
		p[i] = 0;
	return (p);
}
