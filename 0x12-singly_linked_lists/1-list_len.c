#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * list_len - finds the number of nodes in a list_t linked list
  * @h: singly linked list
  * Return: number of elements in the linked list
  */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
