#include "holberton.h"

/**
* _strdup - dups a str
* @str: src
* Return: newstr if good, NULL else
*
*/

char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new = malloc(i * sizeof(char) + 1);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';

	return (new);
}
