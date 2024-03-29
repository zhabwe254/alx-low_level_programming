i#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t linked list.
 * @h: Pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next = NULL;
	listint_t *loop_node = NULL;

	while (current)
	{
		size++;
		next = current->next;
		current->next = NULL;

	if (next && next >= current)
	{
		loop_node = current;
		break;
	}

	current = next;
	}

	if (loop_node)
	{
		*h = NULL;
		return (size);
	}

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;

	return (size);
}
