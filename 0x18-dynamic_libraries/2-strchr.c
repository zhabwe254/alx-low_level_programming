#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
	return (NULL);
	}

	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (*s == '\0' && c == '\0')
	{
	return (s);
	}

	return (NULL);
}
