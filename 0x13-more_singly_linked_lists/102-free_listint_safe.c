#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head node.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow = *h;
    listint_t *fast = *h;
    size_t count = 0;
    int loop_flag = 0;

    if (h == NULL || *h == NULL)
        return (0);

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            loop_flag = 1;
            break;
        }
    }

    if (loop_flag)
    {
        slow = *h;
        while (slow != fast)
        {
            *h = (*h)->next;
            free(slow);
            count++;
            slow = *h;
        }

        *h = NULL;
        free(fast);
        count++;
    }
    else
    {
        while (*h != NULL)
        {
            fast = (*h)->next;
            free(*h);
            count++;
            *h = fast;
        }
    }

    return (count);
}

