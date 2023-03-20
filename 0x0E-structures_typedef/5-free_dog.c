#include "dog.h"
#include <stdio.h>

/**
 * free_dog - a fuction that frees dogs
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owneer);
		free(d);
	}
}
