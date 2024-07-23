#include "dog.h"
#include "stdio.h"

/**
 * free_dog - entery point
 * @d: param 1
 * Return: void (sucess)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner)
		free(d);
	}
}
