#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
*The memory is set to zero
*If nmemb or size is 0, then _calloc returns NULL
*If malloc fails, then _calloc returns NULL
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	
	if (nmemb || size == 0){
		return (NULL);
	}
	void *a;
	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);
	_memset(a, 0, (nmemb * size));
	return (a);
}
