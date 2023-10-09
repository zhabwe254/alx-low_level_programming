#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	nl = 0;
	while (name[nl])
		nl++;

	ol = 0;
	while (owner[ol])
		ol++;

	dog->name = malloc(nl + 1);
	dog->owner = malloc(ol + 1);

	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= nl; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= ol; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
