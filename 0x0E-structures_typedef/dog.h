B#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
* struct dog - structure for Holberton project
* @name: Well..
* @age: Ight..
* @owner: Don't give a f..
* Pd: F*ck you Django
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
