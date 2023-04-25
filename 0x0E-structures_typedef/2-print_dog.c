#include "dog.h"
#include <stdio.h>

/**
*print_dog - function that prints a dog
*
*@d: struct dog
* Return void
*/

void print_dog(struct dog *d)
{
	if (d != 0)
    {
        if (d->name == 0)
		d->name = "(nil)";
        if (d->owner == 0)
		d->owner = "(nil)";
        printf("Name: %s\n", d->name);
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner);
    }
}
