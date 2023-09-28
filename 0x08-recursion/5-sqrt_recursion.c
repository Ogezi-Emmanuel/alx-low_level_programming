#include "main.h"

/**
 * find_sqrt - function to find the square root recursively
 * @n: the number
 * @i: the guess number for the square root
 * Return: the sqare root of n if found or -1 if not found
 */

int find_sqrt(int n, int i)
{
	int square = i * i;

	if (square == n)
	{
		return (i);
	}

	if (square > n)
	{
		return (-1);
	}

	return (find_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: the number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || (n != 0 && n < 2))
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_sqrt(n, 1));
}
