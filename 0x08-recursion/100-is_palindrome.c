#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: The string to determine the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - Checks if the string is a palindrome.
 * @s: The base address of the string.
 * @i: The left index.
 * @j: The right index.
 * Return: Returns 1 if the string is a palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Checks if the string is a palindrome.
 * @s: The base address of the string.
 *
 * Return: Returns 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
