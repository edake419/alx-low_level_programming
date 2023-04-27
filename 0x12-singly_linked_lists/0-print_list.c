#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of the list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h != 0 && h->str == 0)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
