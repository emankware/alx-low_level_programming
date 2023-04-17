#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  a function that frees dogs.
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name); /* Free name memory*/
	free(d->owner); /* Free owner memory*/
	free(d); /* Free dog memory*/
	}
}
