#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory of a dog instance
 * @d: Pointer to the dog instance to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
