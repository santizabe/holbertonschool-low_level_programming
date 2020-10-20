#include "dog.h"

/**
* init_dog - initializes dog struct
* @d: The other structure
* @name: Dog's name
* @age: Dawg's age
* @owner: Puppy's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = d;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
