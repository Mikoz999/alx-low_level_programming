#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add new nodes to thelist_t list
 * @head: current place in the list_t list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (str == NULL || head == NULL)
        return NULL;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return new_node;
}

