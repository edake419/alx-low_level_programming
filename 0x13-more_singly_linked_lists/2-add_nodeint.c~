#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to the head of the list
 * @n: value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newnode;

    if (head == NULL)
        return (NULL);

    newnode = malloc(sizeof(listint_t));
    if (newnode == NULL)
        return (NULL);

    newnode->n = n;
    newnode->next = *head;
    *head = newnode;

    return (newnode);
}
