#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a dog struct
 * @d: struct name
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
