#include "lists.h"
#include "stdio.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *n_node, *l_node;

    if (head == NULL)
        return (NULL);

    n_node = malloc(sizeof(listint_t));
    if (n_node == NULL)
        return (NULL);

    n_node->n = n;
    n_node->next = NULL;

    if (*head == NULL)
    {
        *head = n_node;
        return (n_node);
    }

    l_node = *head;
    while (l_node->next != NULL)
        l_node = l_node->next;

    l_node->next = n_node;

    return (n_node);
}
