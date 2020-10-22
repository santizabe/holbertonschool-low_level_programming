#include "3-calc.h"

/**
 * main - gets the input and executes the operations
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{

	int a, b, c;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '/' && argv[2][0] != '+' && argv[2][0]
		!= '-' && argv[2][0] != '*'
		&& argv[2][0] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	c = get_op_func(argv[2])(a, b);

	printf("%d\n", c);

	return (0);
}
