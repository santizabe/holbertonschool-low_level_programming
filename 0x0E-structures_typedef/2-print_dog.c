#include "dog.h"
#include "stdio.h"

/**
* print_dog - prints dog struct
* @d: struct to be printed
*
*/

void print_dog(struct dog *d)
{
	char *nil = "(nil)\n";

	if (!d)
		return;

	if (d->name)
		printf("Name: %s\n", (*d).name);
	else
		printf("%s", nil);

	if (d->age)
		printf("Age: %.1f\n", d->age);
	else
		printf("%s", nil);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("%s", nil);
}
