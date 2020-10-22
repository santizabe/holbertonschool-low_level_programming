#include "function_pointers.h"

/**
 * print_name - callback a func
 * @name: name to be printed
 * @f: Function to be callbacked
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
	else
		return;
}
