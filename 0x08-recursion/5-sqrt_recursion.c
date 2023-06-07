#include "main.h"

/**
 * sqrt_check - Checks for the square root of a number using recursion.
 * @n: The number to find the square root of.
 * @x: The potential square root.
 *
 * Return: The square root if found, -1 if not.
 */
int sqrt_check(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt_check(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root if found, -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_check(n, 0));
}

