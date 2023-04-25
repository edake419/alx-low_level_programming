#include "dog.h"
#include <stdio.h>

/**
* free_dog - function that frees dog
* @d: free dog struct
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
