#include "holberton.h"

/**
* times_table - prints 9 table
**/

void times_table(void)
{
	int a = 0, b = 0, c;

	while (b < 10)
	{
		if ((b * a) < 10)
			_putchar((b * a) + '0');
		else
		{
			c = b * a;
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		a++;
		if (a < 9)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * b) < 10)
				_putchar(' ');
		}
		if (a == 9)
		{
			b++;
			a = 0;
			_putchar('\n');
		}
	}
}
