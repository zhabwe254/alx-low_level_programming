#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: Input string to split.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or on failure.
 */
char **strtow(char *str)
{
	int i, n, k = 0, len = 0;
	char *str_arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			len++;
	}
	len++;

	str_arr = malloc(sizeof(char *) * (len + 1));
	if (str_arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)

	{
		for (n = 0; str[k] != '\0' && str[k] != ' '; n++)
		{
			str_arr[i][n] = str[k];
			k++;
		}
	str_arr[i][n] = '\0';
	k++;
	}
	str_arr[len] = NULL;

	return (str_arr);
}

