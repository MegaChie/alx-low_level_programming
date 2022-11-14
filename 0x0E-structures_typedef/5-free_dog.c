#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a structure from memory
 * @d: pointer to structure
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
