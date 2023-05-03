#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns a particular node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    
    for (i = 0; i < index; i++)
    {
        if (head == NULL)
            return NULL;

        head = head->next;
    }

    return head;
}
