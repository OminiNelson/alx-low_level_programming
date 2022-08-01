#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dogs
 *
 * Return: void or nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
