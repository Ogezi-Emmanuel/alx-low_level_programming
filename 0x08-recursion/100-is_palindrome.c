#include "main.h"

/**
 * str_len - function to calculate the length of a string
 * @s: the string
 * Return: the length of the string
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + str_len(s + 1));
}

/**
 * is_palindrome_recursive - function that checks if a string is a palindrome
 * @s: the string to check
 * @a: pointer to the beginning of the string
 * @z: pointer to the end of the string
 * Return: 1 if its a palindrome, 0 otherwise
 */

int is_palindrome_recursive(char *s,int a, int z)
{
	if (a >= z)
	{
		return (1);
	}

	if (s[a] != a[z])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, a + 1, z - 1))
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if its a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = str_len(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
