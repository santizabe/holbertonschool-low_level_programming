#include "holberton.h"

/**
* print_array - print array
* @a: a
* @n: n
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (*a)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			break;
		i++;
	}
	if (n <= 0)
		printf("\n");
	else
		printf("%d\n", a[n - 1]);
}
