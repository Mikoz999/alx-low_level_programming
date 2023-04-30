#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    size_t count = 0;
    int loop_flag = 0;

    if (head == NULL)
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
        printf("[%p] %d\n", (void *)head, head->n);
        count++;

        while (head != fast)
        {
            head = head->next;
            printf("[%p] %d\n", (void *)head, head->n);
            count++;
        }

        printf("-> [%p] %d\n", (void *)head, head->n);
        count++;
    }
    else
    {
        while (head != NULL)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
            count++;
        }
    }

    return (count);
}

