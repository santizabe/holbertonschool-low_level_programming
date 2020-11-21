#include "holberton.h"

/**
* main - xD
* Return: 0
**/

int main(void)
{
	unsigned int a = 0, b = 1, temp1, temp2;
	int c;

	for (c = 0; c < 99; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (c < 99)
                printf("%u, ", b);
	}
	printf("%u\n", b);

	return (0);
}
