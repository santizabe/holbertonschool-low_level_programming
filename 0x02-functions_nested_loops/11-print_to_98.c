#include "holberton.h"

/**
* print_to_98 - prints nat to 98
* @a: set point
**/

void print_to_98(int a)
{
	if (a != 98)
	{
		printf("%d, ", a);
		if (a > 98)
			print_to_98(a - 1);
		else
			print_to_98(a + 1);
	}
	else
		printf("%d\n", a);
}
