#include "holberton.h"

/**
* _strlen - xD
* @s: string
* Return: i
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		*s++;
	}

	return (i);
}
