#include "function_pointers.h"


/**
 * array_iterator - Iterates over an array
 * @array: Array to be iterated
 * @size: size of the array
 * @action: function to be callbacked
 * Return: Nothingx
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
