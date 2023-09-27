#include "main.h"

/**
 * wildcmp - compares strings and returns 1 the strings are identical,returns 0
 * @s1: first string to compare
 * @s2: second string to compare, may contain wildcard character *
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
			return (1);
		return (0);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (wildcmp(s1, s2 + 1))
			return (1);
		return (wildcmp((s1 + 1, s2)));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
