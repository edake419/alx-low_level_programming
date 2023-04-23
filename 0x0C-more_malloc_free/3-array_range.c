#include "main.h"

/**
* array_range - creates an array of min and max integers
* Return array if successful
*/

int *array_range(int min, int max)
{
	int *a, i = 0, b = min;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (NULL);
	while (i <= max - min)
		a[i++] = b++;
	return (a);
}
