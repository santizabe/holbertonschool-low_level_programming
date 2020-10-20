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
	dog_t *new_dog;
	char *copy1, *copy2;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}
	copy1 = malloc(sizeof(name));
	if (!copy1)
	{
		free(copy1);
		return (NULL);
	}
	copy1 = _strdup(name);
	copy2 = malloc(sizeof(name));
	if (!copy2)
	{
		free(copy2);
		return (NULL);
	}
	copy2 = _strdup(owner);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}

