#include "search_algos.h"

/**
 * advanced_binary - Searches value using Advanced Binary search
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive function for Advanced Binary search
 * @array: Pointer to the first element of the array to search
 * @low: Lowest index to search
 * @high: Highest index to search
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		mid = low + (high - low) / 2;

		if ((mid == 0 || array[mid - 1] < value) && array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}

	return (-1);
}
