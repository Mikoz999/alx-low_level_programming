#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 *
 * Return: The length of @s.
 */
int _strlen(const char *s)
{
        int len = 0;

        while (s[len] != '\0')
                len++;

        return (len);
}

/**
 * _strdup - Duplicates a string.
 * @src: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(const char *src)
{
        char *dest;
        int len = 0;

        while (src[len] != '\0')
                len++;

        dest = malloc(sizeof(char) * (len + 1));
        if (dest == NULL)
                return (NULL);

        for (len = 0; src[len] != '\0'; len++)
                dest[len] = src[len];

        dest[len] = '\0';
        return (dest);
}

/**
 * add_node_end - Adds a new node to the end of a list_t list.
 * @head: A pointer to a pointer to the first element of the list.
 * @str: The string to store in the new node.
 *
 * Return: A pointer to the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new_node, *last_node;
        char *new_str;

        if (str == NULL)
                return (NULL);

        new_str = _strdup(str);
        if (new_str == NULL)
                return (NULL);

        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
        {
                free(new_str);
                return (NULL);
        }

        new_node->str = new_str;
        new_node->len = _strlen(str);
        new_node->next = NULL;

        if (*head == NULL)
        {
                *head = new_node;
                return (*head);
        }

        last_node = *head;
        while (last_node->next != NULL)
                last_node = last_node->next;

        last_node->next = new_node;
        return (*head);
}

