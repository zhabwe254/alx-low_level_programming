#include "main.h"

/**
 * str_checker - Determine if two strings are identical or similar.
 * @s1: Base address of the first string.
 * @s2: Base address of the second string.
 * @i: Left index for the first string.
 * @j: Special index (joker) for the second string.
 * Return: 1 if the strings are identical or similar, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - two strings can be considered identical or similar.
 * @s1: Base address of the first string.
 * @s2: Base address of the second string.
 *
 * Return: 1 if the strings are identical or similar, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
