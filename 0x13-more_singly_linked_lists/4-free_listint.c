#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
