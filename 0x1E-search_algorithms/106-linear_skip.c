#include "search_algos.h"

/**
 * linear_skip - Searches for a value using Linear search
 * @list: Pointer to the head of the skip list to search
 * @value: Value to search for
 *
 * Return: A pointer to the first node value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *prev;

	if (list == NULL)
		return (NULL);

	express = list->express;
	prev = list;

	while (express != NULL && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		prev = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, express ? express->index : prev->index);
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (prev != NULL && prev->n == value)
		return (prev);

	return (NULL);
}
