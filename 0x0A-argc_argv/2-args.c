#include "holberton.h"

/**
* main - Entry mode
* @ac: arguments count
* @av: arguments vector
* Return: 0
*/

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
