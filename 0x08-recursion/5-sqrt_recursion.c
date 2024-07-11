#include "main.h"

/**
 * power - auxiliary function to find the natural square root recursively
 * @n: the number to find the square root of
 * @i: the current number to check
 *
 * Return: the natural square root or -1 if not found
 */
int power(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (power(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (power(n, 0));
}

