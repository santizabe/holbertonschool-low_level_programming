#include "holberton.h"

/**
* create_array - creates an array
* @size: size of the array
* @c: char whom will be filled the array
* Return: Pointer to 1st element of the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (i <= size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
