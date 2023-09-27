#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *start, *end;

	if (s == NULL)
 	return (0);

	while (s[len] != '\0')
		len++;

	start = s;
	end = s + len - 1;

	while (end > start)
	{
		if (*start != *end)
			return (0);

		start++;
		end--;
	}

	return (1);
}
