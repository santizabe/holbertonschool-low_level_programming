#include "holberton.h"

/**
 * print_last_digit - Does some stuff
 * @i: int to be evaluated
 * Return: Last digit of i
 **/

int print_last_digit(int i)
{
	if (i > 9)
	{
		_putchar((i % 10) + '0');
	}
	else
	{
		if (i < 0)
		{
			i *= -1;
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i + '0');
			return (i);
		}
	}

	return (i % 10);
}
