#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - function which list number of linked list
 *@h: header
 *Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
