#include "main.h"

/**
 * is_prime_check - Checks if a number is prime using recursion.
 * @n: The number to check.
 * @x: The divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_check(int n, int x)
{
	if (n < 2 || n % x == 0)
		return (0);
	else if (x > n / 2)
		return (1);
	else
		return (is_prime_check(n, x + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_check(n, 2));
}

