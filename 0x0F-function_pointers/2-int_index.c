#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
* @array: array to be searched in
* @size: size of the array
* @cmp: func that compares the int to any other
* Return: i if success, otherwise returns -1
*
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
			return (-1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}
