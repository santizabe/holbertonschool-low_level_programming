#include "holberton.h"

/**
* puts_half - Puts half
* @str: a string
*
*/

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len = (len + 1) / 2;


	if (len % 2 == 0)
	{
		while (str[len] != '\0')
		{
			_putchar(str[len - 1]);
			len++;
		}
	}
	else
	{
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
