#include "main.h"

/**
 * is_prime_number - checks if a given integer is a prime number
 *
 * @n: the integer to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);

/**
 * Loop from 2 up to n/2 and check if n is divisible by any of those numbers.
 * If n is divisible, it is not a prime number and we can
 *
 * Return 0 if n is divisible, thus it is not a prime number.
 */

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
