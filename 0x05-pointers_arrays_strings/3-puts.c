#include "holberton.h"

/**
* _puts - puts
* @str: str
*
*/

void _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(str[i]);
		*str++;
	}
	_putchar('\n');
}
