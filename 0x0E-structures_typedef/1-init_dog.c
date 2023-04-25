#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: struct dog type to be initialized.
 * @name: string name of the dog.
 * @age: float age of the dog.
 * @owner: dog owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
