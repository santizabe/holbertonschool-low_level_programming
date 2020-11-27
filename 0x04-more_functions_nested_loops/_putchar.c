#include "unistd.h"

/**
 * _putchar - putchar. Puts a character on the screen
 * @c: char to print
 * Return: 0 if succeeded, 1 if else
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
