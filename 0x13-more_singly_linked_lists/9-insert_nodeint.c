#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value to be added to the new node
 *
 * Return: pointer to the head of the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *current, *new_node;

    if (head == NULL)
        return (NULL);

    if (idx == 0 || *head == NULL)
        return (add_nodeint(head, n));

    current = *head;

    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
        return (NULL);

    new_node = add_nodeint(&current->next, n);

    return (new_node);
}

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, int n)
{
    listint_t *new_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (*head);
}

/**
 * create_nodeint - creates a new node with given value
 * @n: integer value to be added to the new node
 *
 * Return: pointer to the new node
 */
listint_t *create_nodeint(int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    return (new_node);
}

