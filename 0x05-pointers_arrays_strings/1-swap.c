#include <stdio.h>

/**
* swap_int - swaps
* @a: a
* @b: b
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
