#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	data = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (data);
}
