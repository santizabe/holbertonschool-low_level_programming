#include "holberton.h"

/**
* print_diagonal - print_diagonal
* @n: n
*/

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		if (i >= 1)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n < 1)
		_putchar('\n');
}
