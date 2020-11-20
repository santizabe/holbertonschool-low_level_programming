#include "holberton.h"

/**
 * print_last_digit - Does some stuff
 * @i: int to be evaluated
 * Return: Last digit of i
 **/

int print_last_digit(int i)
{
	int a;

	if (i < 0)
	{
		a = i % 10;
		a = a * -1;
	}
	else
		a = i % 10;
	_putchar(a + '0');
	return (a);
}
