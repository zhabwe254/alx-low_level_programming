#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (index starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	current = current->next;

	if (current == NULL || current->next == NULL)
	return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
