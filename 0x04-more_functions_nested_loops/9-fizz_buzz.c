#include "holberton.h"

/**
* main - xD
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if ((i % 3) == 0 && (i % 5) == 0)
				printf("FizzBuzz ");
			else if ((i % 3) == 0)
				printf("Fizz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
