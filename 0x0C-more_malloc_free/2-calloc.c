#include <stdlib.h>

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

	if (nmemb == 1 || size == 1)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb) ; i++)
		p[i] = 0;
	return (p);
}
