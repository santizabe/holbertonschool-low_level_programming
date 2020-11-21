#include "holberton.h"

/**
* main - Entry point
* Return: 0
**/

int main(void)
{
	unsigned int a = 0, b = 1, temp1, temp2;
	unsigned int c, sum;

	for (c = 1; b < 4000000 ; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (b % 2 == 0 && b / 2 == 1)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
