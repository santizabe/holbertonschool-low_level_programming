#include "holberton.h"
/**
 * _strcmp - Campares two strings
 * @s1: Firts string
 * @s2: Secomd string
 * Return: an integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;
	int c;


	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			c = 0;
			break;
		}
	}

	if (s1[i] != s2[i])
	{
		if (s1[i] < s2[i])
			c = s1[i] - s2[i];
		else if (s1[i] > s2[i])
			c = s1[i] - s2[i];
	}

	return (c);
}
