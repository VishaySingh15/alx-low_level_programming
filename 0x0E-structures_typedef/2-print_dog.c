#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the dog structure details
 * @d: Pointer to structure
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Name: %f\n", d->age);
		}

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s", d->owner)
		}
	}
}
