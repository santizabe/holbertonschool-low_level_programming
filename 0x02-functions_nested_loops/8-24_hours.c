#include "holberton.h"

/**
* comments
*
**/

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0, b = 0; a < 3 && b < 10; b++)
	{
		for (c = 0, d = 0; c < 6 && d < 10; d++)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
			if (d == 9)
			{
				c++;
				d = 0;
			}
		}
		if (a == 2 && b == 3)
			break;
		if (b == 9)
		{
			a++;
			b = 0;
		}
	}
}
