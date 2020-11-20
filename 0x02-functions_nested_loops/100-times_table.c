#include "holberton.h"

/**
* print_times_table - prints n table
* @n: just a char
**/

void print_times_table(int n)
{
	int a = 0, b = 0;

	if (n < 0 || n > 16)
		return;
	for (; b < (n + 1); a++)
	{
		if ((b * a) < 10)
			_putchar((b * a) + '0');
		else
		{
			if ((a * b) > 99)
			{
				_putchar(((a * b) / 100) + '0');
				_putchar((((a * b) / 10) % 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			else
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
		}
		if (a < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		if ((a * b) < 100)
			_putchar(' ');
		if ((a * b) < 10)
			_putchar(' ');
		if (a == n)
		{
			b++;
			a = -1;
			_putchar('\n');
		}
	}
}
