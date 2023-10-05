i#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_valid_number - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 if valid, 0 otherwise.
 */
int is_valid_number(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
	if (str[i] < '0' || str[i] > '9')
	return (0);
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(const char *num1, const char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), result_len = len1 + len2;
	int *result = (int *)calloc(result_len, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
	for (int j = len2 - 1; j >= 0; j--)
	{
	int product = (num1[i] - '0') * (num2[j] - '0');
	int sum = product + result[i + j + 1];

	result[i + j + 1] = sum % 10;
	result[i + j] += sum / 10;
	}
	}

	int i = 0;

	while (i < result_len - 1 && result[i] == 0)
	i++;

	for (; i < result_len; i++)
	printf("%d", result[i]);
	printf("\n");
	free(result);
}

/**
 * main - Entry point.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])
	{
	printf("Error\n");
	return (98);
	}

	multiply(argv[1], argv[2]);
	return (0);
}
