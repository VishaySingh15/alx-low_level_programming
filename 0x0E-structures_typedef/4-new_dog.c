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
	char *name_copy = name, *owner_copy = owner;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	
	return (dog);
}
