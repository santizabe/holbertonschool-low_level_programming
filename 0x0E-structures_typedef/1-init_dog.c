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
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
