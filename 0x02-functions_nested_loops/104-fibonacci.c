#include "holberton.h"

/**
* main - xD
* Return: 0
**/

int main(void)
{
	long double a = 0, b = 1, temp1, temp2;
	int c;

	for (c = 0; c < 93; c++)
	{
		temp1 = a;
		temp2 = b;
		a = temp2;
		b = temp1 + a;
		if (c < 92)
			printf("%.0Lf, ", b);
	}
	printf("19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026\n");

	return (0);
}
