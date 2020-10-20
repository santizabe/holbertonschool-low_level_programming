#include "dog.h"
#include "stdio.h"

/**
* comments
*
*
*/

void print_dog(struct dog *d)
{
	struct dog *e;

	e = d;
	if (!e)
		return;
	if (e->name == NULL)
		e->name = "(nil)";

	printf("Name: %s\n", e->name);
	if (e->age)
		printf("Age: %.1f\n", e->age);
	else
		printf("(nil)\n");
	if (e->owner)
		printf("Owner: %s\n", e->owner);
	else
		printf("(nil)\n");
}
