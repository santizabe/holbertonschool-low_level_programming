#include "holberton.h"

/**
* print_times_table - prints n table
* @n: just a char
**/

void print_times_table(int n)
{
	int a, b = 0;

	if (n < 0 || n > 16)
		return;
	for (a = 0; a < (n + 1); a++)
	{
		for (b = 0; b < (n + 1); b++)
		{
			if ((a * b) < 10)
				_putchar((a * b) + '0');
			else
			{
				if ((a * b) > 99)
				{
					_putchar(((a * b) / 100) + '0');
					_putchar((((a * b) / 10) % 10) + '0');
				}
				else
					_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
				if (((b + 1) * a) < 100)
					_putchar(' ');
				if (((b + 1) * a) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
