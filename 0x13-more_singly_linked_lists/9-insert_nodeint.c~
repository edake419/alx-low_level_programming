#include "lists.h"
#include "stdio.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a particular position
 * @head: Pointer  to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *n_node, *current;
    unsigned int i;

    if (head == NULL)
        return NULL;

    if (idx == 0)
        return add_nodeint(head, n);

    current = *head;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
        return NULL;

    n_node = malloc(sizeof(listint_t));
    if (n_node == NULL)
        return NULL;

    n_node->n = n;
    n_node->next = current->next;
    current->next = n_node;

    return n_node;
}
