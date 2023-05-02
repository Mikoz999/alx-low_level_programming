#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop_node;

	if (!head)
		exit(98);

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current > current->next)
		{
			loop_node = current->next;
			while (current > loop_node)
			{
				printf("[%p] %d\n", (void *)loop_node, loop_node->n);
				count++;
				loop_node = loop_node->next;
			}
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}

