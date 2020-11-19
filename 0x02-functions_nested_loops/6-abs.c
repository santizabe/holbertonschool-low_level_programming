#include "holberton.h"
#define CHAR_BIT 8

/**
 *_abs - Entry point
 * _abs - main
 * @n : return
 * Return: 1 o 0
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
