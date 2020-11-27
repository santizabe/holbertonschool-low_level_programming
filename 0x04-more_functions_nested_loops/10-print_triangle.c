#include "holberton.h"

/**
* print_triangle - :p
* @size: xd
*
*/

void print_triangle(int size)
{
	int a = 0, b, c, e;

	if (size <= 0)
		_putchar('\n');
	if (size == 1)
		_putchar('#');
	else
	{
	while (a < size)
	{
		e = a;
		for (b = 0, c = 1; b < size; b++, c++)
		{
			if (e < size - c)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
		a++;
	}
	}
}
