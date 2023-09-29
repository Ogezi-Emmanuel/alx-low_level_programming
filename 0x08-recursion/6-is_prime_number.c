#include "main.h"

/**
 * is_prime_recursive - function to check if the number is a prime
 * @n: the number
 * @i: the current divisor
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, i + 1));
}


/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: the number
 * Return: 1 if the input is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
