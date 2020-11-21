#include "holberton.h"

/**
* main - Entry point
* Return: 0
**/

int main(void)
{
	double a = 0, b = 1, temp1, temp2;
	int c, sum;

	for (c = 0; b < 4000001 ; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
