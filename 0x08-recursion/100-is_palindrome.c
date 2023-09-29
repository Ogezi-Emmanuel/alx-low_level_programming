#include "main.h"

/**
 * is_palindrome_recursive - function that checks if a string is a palindrome
 * @a: pointer to the beginning of the string
 * @z: pointer to the end of the string
 * Return: 1 if its a palindrome, 0 otherwise
 */

int is_palindrome_recursive(char *a, char *z)
{
	if (a >= b)
	{
		return (1);
	}

	if (*a != *b)
	{
		return (0);
	}

	return (is_palindrome_recursive(a + 1, z - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if its a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = 0;
	char *end = s;

	while (*end)
	{
		length++;
		end++;
	}

	return (is_palindrome_recursive(s, s + length - 1));
}
