#include "holberton.h"

/**
* main - xD
* Return: 0
**/

int main(void)
{
	long double a = 0, b = 1, temp1, temp2;
	int c;

	for (c = 0; c < 98; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (c < 97)
			printf("%.0Lf, ", b);
	}
	printf("%.0Lf\n", b);

	return (0);
}
