#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string containing a binary number
 *
 * Return: The converted number, or 0 if an invalid character is found.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bit = b[i] - '0';
		result = (result << 1) | bit;
	}

	return (result);
}
