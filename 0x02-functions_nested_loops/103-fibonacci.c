#include "holberton.h"

/**
* main - Entry point
* Return: 0
**/

int main(void)
{
	int a = 1, b = 2, temp;
	int sum = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		temp = b;
		b += a;
		a = temp;
	}
	printf("%d\n", sum);

	return (0);
}
