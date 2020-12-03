#include "holberton.h"

/**
* main - Entry mode
* @ac: arguments count
* @av: arguments vector
* Return: 0
*/

int main(int ac, char **av)
{
	int i, j;

	if (ac != 3)
		puts("Error");
	else
	{
		i = atoi(av[1]);
		j = atoi(av[2]);
		printf("%d\n", i * j);
	}

	return (0);
}
