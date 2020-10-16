#include "holberton.h"

/**
* malloc_checked - Checks if something mallocd succesfully or not
* @b: size to be mallocd
* Return: pointer to buffer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
