#include "holberton.h"

/**
* print_square - prints square of #
* @size: square
*/

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
