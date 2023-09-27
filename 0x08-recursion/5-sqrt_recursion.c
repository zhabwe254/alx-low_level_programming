#include "main.h"

/**
 * _sqrt_recursion_helper - helper function to calculate the square root
 * @n: number to calculate the square root of
 * @i: possible square root
 *
 * Return: square root of n or -1 if n does not have a natural square root
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root of n or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_recursion_helper(n, 1));
}
