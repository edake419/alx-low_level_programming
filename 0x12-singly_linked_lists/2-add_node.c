#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be added as the new node's str element
 *
 * Return: The address of the new element, or NULL if it failed
 *         The str needs to be duplicated
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

    if (!head || !str)
                return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
        {
                free(new_node);
                return (NULL);
        }
	/*new_node->len = len;*/
	new_node->next = (*head);
	*head = new_node;

	return (*head);
}
