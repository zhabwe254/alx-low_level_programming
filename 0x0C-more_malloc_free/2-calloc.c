#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: If successful, a pointer to the allocated memory. Otherwise, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return ((void *) mem);
}
