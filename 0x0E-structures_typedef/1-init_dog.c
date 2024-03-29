#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes the structure dog
 * @d: Pointer to structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: return d - pointer to structure
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
