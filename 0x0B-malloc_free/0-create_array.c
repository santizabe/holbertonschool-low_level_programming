#include "holberton.h"

/**
* create_array - creates an array
* @size: size of the array
* @c: char whom will be filled the array
* Return: Pointer to 1st element of the array
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = malloc((sizeof(char) * size) + 1);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; array[i]; i++)
		array[i] = c;
	array[i] = '\0';

	return (array);
}
