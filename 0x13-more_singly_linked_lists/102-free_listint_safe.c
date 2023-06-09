#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next_node;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		if ((void *)current <= (void *)next_node)
		{
			*h = NULL;
			return (count);
		}
		current = next_node;
	}
	*h = NULL;
	return (count);
}

