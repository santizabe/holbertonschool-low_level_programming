#include "holberton.h"

/**
* main - Entry mode
* @ac: arguments count
* @av: arguments vector
* Return: 0
*/

int main(int ac, char **av)
{
	int i = 1, j;

	if (validate(av) == -1)
	{
		puts("Error");
		return (1);
	}
	else
	{
		if (ac < 3)
			puts("0");
		else
		{
			while (i < ac)
			{
				if (av[i + 1] == av[ac - 1])
					j = atoi(av[i + 1]);
				i++;
			}
			i = ac - 2;
			while (i > 0)
			{
				j += atoi(av[i]);
				i--;
			}
			printf("%d\n", j);
		}
	}

	return (0);
}

/**
* validate - validates if there's just allowed characters
* @av: args vector
* Return: -1 on error
*/

int validate(char **av)
{
	int i, j;

	for (i = 1; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				continue;
			else
			{
				if (av[i][j] == '-' && j == 0)
				{
					if (av[i][j + 1] != '\0')
						continue;
					else
						return (-1);
				}
				else
					return (-1);
			}
		}
	}

	return (0);
}
