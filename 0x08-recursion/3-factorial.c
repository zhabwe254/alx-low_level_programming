#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	int i;


	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}

	return (i);
}
