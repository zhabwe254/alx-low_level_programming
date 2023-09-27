#include "main.h"

/**
 * check - helper function to determine if number is prime
 * @a: integer
 * @b: integer
 * Return: 1 if prime, 0 if not
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	if (a > b / 2)
	{
		return (1);
	}
	return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: integer
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check(2, n));
}
