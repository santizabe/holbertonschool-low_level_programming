#include "holberton.h"

/**
* str_concat - concats strings
* @s1: s1
* @s2: s2
* Return: new str
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	;
	j = i;
	for (i = 0; s2[i]; i++)
	;

	new = malloc((i + j) * sizeof(char) + 1);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		new[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		new[i] = s2[j];
	new[i] = '\0';

	return (new);
}
