#include "holberton.h"

/**
* main - xD
* Return: Largest prime
*/

int main(void)
{
	unsigned long int i = 2, b, x = 612852475143;

	while (i <= x)
	{
		b = x % i;
		if (b == 0)
		{
			if (x == i)
				printf("%lu\n", i);
			x = x / i;
			i = 2;
		}
		else
		{
			if (i >= 3)
			{
				i += 2;
				if (i % 3 == 0)
					i += 2;
			}
			else
				i++;
		}
	}

	return (0);
}
