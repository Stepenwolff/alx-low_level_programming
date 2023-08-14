#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to the struct dog to free.
 *
 * Description: Releases the memory allocated for a struct dog,
 * including its name, owner, and the struct itself.
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
