#include "holberton.h"

/**
* fizz_buzz - xD
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if ((i % 3) == 0 && (i % 5) == 0)
				printf("FizzBuzz ");
			if ((i % 3) == 0)
				printf("Fizz ");
			if ((i % 5) == 0)
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
}

/**
* main - Main entry
* Return: 0
*/

int main(void)
{
	fizz_buzz();
	return (0);
}
