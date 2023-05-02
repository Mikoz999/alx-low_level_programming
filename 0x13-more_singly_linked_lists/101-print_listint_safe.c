#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        return (0);

    slow = head;
    fast = head->next;

    while (fast != NULL && fast->next != NULL && fast != slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;
        count++;
    }

    if (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        printf("-> [%p] %d\n", (void *)fast, fast->n);
        count++;
    }
    else
    {
        while (slow != NULL)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            slow = slow->next;
            count++;
        }
    }

    if (fast != NULL && fast->next != NULL)
    {
        printf("-> [%p] %d\n", (void *)fast, fast->n);
        exit(98);
    }

    return (count);
}

