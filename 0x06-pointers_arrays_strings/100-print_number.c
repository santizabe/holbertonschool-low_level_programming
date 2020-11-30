#include "holberton.h"

/**
* print_number - F
* @n: ok
*
*/

void print_number(int n)
{
	int a = 1, i, c, temp, mod;

	if (n <= 0)
	{
		if (n == 0)
			_putchar('0');
		else
			_putchar('-');
	}
	c = n;
	for (i = 0; c != 0; i++)
		c /= 10;
	temp = i;
	while (a <= temp)
	{
		i = temp;
		c = n;
		while ((i - a) > 0)
		{
			c /= 10;
			i--;
		}
		mod = c % 10;
		if (mod < 0)
			mod *= -1;
		_putchar(mod + '0');
		a++;
	}
}
