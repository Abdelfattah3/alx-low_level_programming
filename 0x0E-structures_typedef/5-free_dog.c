#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees the allocated memory
* @d : pointer to the struct dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
