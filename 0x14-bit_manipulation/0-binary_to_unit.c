#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A pointer to a null-terminated binary string.
 *
 * This function takes a binary string consisting of '0' and '1' characters
 * and converts it into an unsigned integer (unsigned int). If the input
 * string is invalid (contains characters other than '0' and '1') or NULL,
 * the function returns 0.
 *
 * Return: The converted unsigned integer, or 0 if there's an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result * 2) + (*b - '0');
		b++;
	}

	return (result);
}
