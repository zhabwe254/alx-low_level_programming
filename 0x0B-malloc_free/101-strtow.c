#include <stdlib.h>
£include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str) {
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
				in_word = 0;
		} 

	else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
	{
		if (str == NULL || *str == '\0')
			return (NULL);

		int num_words = count_words(str);

		if (num_words == 0)
		return (NULL);

	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	
	if (words == NULL)
		return (NULL);

	int i = 0;
	int in_word = 0;
	char *word_start = (NULL);

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				int word_len = str - word_start;
				words[i] = (char *)malloc((word_len + 1) * sizeof(char));
				if (words[i] == NULL)
				{
					for (int j = 0; j < i; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				for (int j = 0; j < word_len; j++)
					words[i][j] = word_start[j];
				words[i][word_len] = '\0';
				i++;
				in_word = 0;
			}
		}
		else
			{
				if (!in_word)
			{
				in_word = 1;
				word_start = str;
			}
		}
		str++;
	}

	if (in_word)
	{
		int word_len = str - word_start;

		words[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (int j = 0; j <= i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (int j = 0; j < word_len; j++)
			words[i][j] = word_start[j];
		words[i][word_len] = '\0';
		i++;
	}

	words[num_words] = NULL;
	return (words);
}
