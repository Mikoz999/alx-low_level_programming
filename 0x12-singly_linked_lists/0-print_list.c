#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The linked list to be printed.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t nodes = 0;

    for (; h; h = h->next)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        nodes++;
    }

    return nodes;
}

