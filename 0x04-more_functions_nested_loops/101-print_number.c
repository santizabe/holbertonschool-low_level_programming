#include "holberton.h"

/**
* print_number - F
* @n: ok
*
*/

void print_number(int n)
{
	int a = 1, i, c, temp;

	if (n <= 0)
	{
		if (n == 0)
			_putchar('0');
		else
		{
			_putchar('-');
			n *= -1;
		}
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
		_putchar((c % 10) + '0');
		a++;
	}
}
