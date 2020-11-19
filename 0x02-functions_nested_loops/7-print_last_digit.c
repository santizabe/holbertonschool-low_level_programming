#include "holberton.h"

/**
 * print_last_digit - Does some stuff
 * @i: int to be evaluated
 * Return: Last digit of i
 **/

int print_last_digit(int i)
{
	return (_putchar((i % 10) + '0'));
}
