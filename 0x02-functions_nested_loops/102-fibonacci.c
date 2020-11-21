#include "holberton.h"

/**
* main - xD
* Return: 0
**/

int main(void)
{
	double a = 0, b = 1, temp1, temp2;
	int c;

	for (c = 1; c < 51; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (c < 50)
			printf("%0.f, ", b);
	}
	printf("%0.f\n", b);

	return (0);
}
