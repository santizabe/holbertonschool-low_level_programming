#include "holberton.h"

/**
* print_line - xD
* @n: xD
*
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
