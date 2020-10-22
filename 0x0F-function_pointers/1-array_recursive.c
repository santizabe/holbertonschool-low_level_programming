#include "function_pointers.h"

/**
 *
 * Comments..
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j, i = 0;
	int a, *new_array;

	if (action)
		{
			if (i < size)
				{
					a = array[i];
					i++;
					action(a);
					new_array = malloc(sizeof(int) * size);
					if (new_array == NULL)
						{
						free(new_array);
						return;
						}
					for (j = 0; j < size - 1; j++, i++)
						new_array[j] = array[i];
					array_iterator(new_array, size - 1, action);
					free(new_array);
				}
		}
	else
		return;
}
