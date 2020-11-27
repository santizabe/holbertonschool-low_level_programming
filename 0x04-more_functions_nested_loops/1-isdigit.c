#include "holberton.h"

/**
* _isdigit - isdigit
* @a: a
* Return: 1 if digit, else 0
*/

int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
