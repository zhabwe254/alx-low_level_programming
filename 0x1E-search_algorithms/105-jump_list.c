#include "search_algos.h"

/**
 * jump_list - Searches for a value using Jump search
 * @list: Pointer to the head of the list to search
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer to the first node value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = 0;

	while (list->index < size && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		prev = list->index;
		while (list->next != NULL && list->index < (prev + step))
			list = list->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, list->index);
	printf("Value checked at index [%lu] = [%d]\n", prev, list->n);

	while (prev <= list->index && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->next == NULL || list->index > size)
			break;
		list = list->next;
	}

	if (list->n == value)
		return (list);

	return (NULL);
}
