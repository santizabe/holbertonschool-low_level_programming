#include "holberton.h"

/**
* _puts_recursion - A function
* @s: string to be printed
* Return: Nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
