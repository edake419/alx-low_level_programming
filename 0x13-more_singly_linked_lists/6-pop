#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int n;
    listint_t *tmp;

    if (*head == NULL)
        return 0;

    n = (*head)->n;
    tmp = *head;
    *head = (*head)->next;
    free(tmp);

    return n;
}
