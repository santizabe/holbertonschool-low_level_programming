#include "holberton.h"

/**
* rev_string - xD
* @s: xD
*/

void rev_string(char *s)
{
	int i = 0, j, k;
	char *t = s, temp;

	while (*t)
	{
		i++;
		*t++;
	}
	k = i;
	i -= 1;
	for (j = 0; i >= j; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
	s[k] = '\0';
}
