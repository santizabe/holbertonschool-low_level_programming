#include "dog.h"

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	ptr[j] = '\0';
	return (ptr);
}

/**
* new_dog - new dog
* @name: name
* @age: age
* @owner: owner
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogy;

	new_dogy = malloc(sizeof(dog_t));
	if (!new_dogy)
	{
		return (NULL);
	}
	new_dogy->name = _strdup(name);
	if (!new_dogy->name)
	{
		free(new_dogy);
		return (NULL);
	}
	new_dogy->age = age;
	new_dogy->owner = _strdup(owner);
	if (!new_dogy->owner)
	{
		free(new_dogy->name);
		free(new_dogy);
		return (NULL);
	}
	return (new_dogy);
}
