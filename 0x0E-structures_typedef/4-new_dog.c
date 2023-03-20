#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Initializes the details of a new dog
 * @name: Pointer to dog name
 * @age: dog age
 * @owner: Pointer to dog owner
 * Return: pointer to dog structure if true, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(age))
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
