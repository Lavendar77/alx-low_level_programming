#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Entry Point
 * @d: struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
