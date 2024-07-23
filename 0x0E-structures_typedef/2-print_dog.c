#include "dog.h"
#include "stdio.h"

/**
 * print_dog - entery point
 * @d: god printed by us
 * Return: void (Sucess)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
