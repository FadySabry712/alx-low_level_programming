#include "dog.h"

/**
 * init_dog - entery point
 * @d: param 1
 * @name: dugd's name
 * @age: dog's age
 * @owner: owners's name
 * Return: void (Sucess)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
