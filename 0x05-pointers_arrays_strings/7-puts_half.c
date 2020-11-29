#include "holberton.h"

/**
* puts_half - Puts half
* @str: a string
*
*/

void puts_half(char *str)
{
	int i, j;

	i = _strlen(str);
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
}

/**
* _strlen - xD
* @s: string
* Return: i
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
