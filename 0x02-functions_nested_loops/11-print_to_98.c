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

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
