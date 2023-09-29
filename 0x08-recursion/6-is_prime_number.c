#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: the number being inputed
 * Return: 1 if the input is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int i;
	int j;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	for (j = 3; j * j <= n; j++)
	{
		if (n % j == 0)
		{
			return (0);
		}

	return (1);
}
