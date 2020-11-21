#include "holberton.h"

/**
* main - Main entry
*
* Return: 0
**/

int main(void)
{
	int n, sum = 0;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
