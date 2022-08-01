#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
