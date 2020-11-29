#include "holberton.h"

/**
* puts2 - puts every 2
* @str: str
*
*/

void puts2(char *str)
{
	int i = 0, j = 0;
	char *str1 = str;

	while (*str1)
	{
		i++;
		*str1++;
	}
	if (i % 2 == 0)
		i -= 1;
	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
