#include "holberton.h"

/**
* print_rev - xD
* @s: xD
*
*/

void print_rev(char *s)
{
	int i = 0;
	char *b = s;

	while (b[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
