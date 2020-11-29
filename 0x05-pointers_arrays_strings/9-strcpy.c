#include "holberton.h"
/**
 * *_strcpy - copies a string
 * @dest: parameter
 * @src: parameter
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;
	char *cpy = src;

	for (i = 0; cpy[i]; i++)
	;
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
