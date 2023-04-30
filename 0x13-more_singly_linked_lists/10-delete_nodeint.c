#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current, *temp;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;
    while (count < index - 1)
    {
        if (current->next == NULL)
            return (-1);
        count++;
        current = current->next;
    }

    temp = current->next;
    if (temp == NULL)
        return (-1);

    current->next = temp->next;
    free(temp);
    return (1);
}

