#include <stdio.h>

/**
* reset_to_98 - resets any int to 98
* @n: char to be reseted
*/

void reset_to_98(int *n)
{
	int **b;

	b = &n;
	**b = 98;
}
