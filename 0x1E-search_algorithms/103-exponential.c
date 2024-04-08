#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);
	return (binary_search(array, size, value, prev, (bound < size) ? bound : size - 1));
}
