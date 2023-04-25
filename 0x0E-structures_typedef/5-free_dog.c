#include "dog.h"
#include <stdio.h>
#include <stdlib.h

/**
* free_dog - function that frees dog
* @d: free dog struct
*/

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
