#include "holberton.h"

/**
* print_times_table - prints n table
* @n: just a char
**/

void print_times_table(int n)
{
	int a = 0, b = 0, c;

	if (n > 15 || n < 0)
		return;
	while (b < (n + 1))
	{
		if ((b * a) < 10)
			_putchar((b * a) + '0');
		else
		{
			c = b * a;
			if (c > 99)
			{
				_putchar((c / 100) + '0');
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		a++;
		if (a <= n)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * b) < 100)
			{
				_putchar(' ');
				if ((a * b) < 10)
					_putchar(' ');
			}
		}
		if (a == (n + 1))
		{
			b++;
			a = 0;
			_putchar('\n');
		}
	}
}
