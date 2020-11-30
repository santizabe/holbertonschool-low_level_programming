#include "holberton.h"

/**
 * cap_string - capitalizes all words
 * @s: string
 *
 * Return: uppercase string
 */
char *cap_string(char *s)
{
	char com[] = " \t\n,;.!?\"(){}";
	int i = 0, j;

	if (s[0] > 96 && s[0] < 123)
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		for (j = 0; j < 14; j++)
			if (s[i] == com[j] && (s[i + 1] > 96 && s[i + 1] < 123))
				s[i + 1] = s[i + 1] - 32;

		i++;
	}

	return (s);
}
