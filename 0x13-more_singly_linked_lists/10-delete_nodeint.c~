#include <stdio.h>
#include <lists.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @head: pointer to the address to head of list
 * @index: index of the node to be deleted
 *
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *before;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    for (i = 0; i < index; i++)
    {
        before = current;
        current = current->next;

        if (!current)
            return (-1);
    }

    before->next = current->next;
    free(current);

    return (1);
}
