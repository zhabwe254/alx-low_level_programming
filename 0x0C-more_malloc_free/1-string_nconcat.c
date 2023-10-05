
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate (up to n bytes).
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: If successful, pointer to concatenated string. Otherwise, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat = malloc((s1_len + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
