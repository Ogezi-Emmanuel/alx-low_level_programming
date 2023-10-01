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
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
 * is_palindrome_recursive - function that checks if a string is a palindrome
 * @s: the string to check
 * @a: starting index
 * @z: ending index
 * Return: 1 if its a palindrome, 0 otherwise
 */

int is_palindrome_recursive(char *s,int a, int z)
{
	if (*(s + a) == *(s + z))
	{
		if ( a == z || a == z + 1)
		{
			return (1);
		}
		return (0 + is_palindrome_recursive(s, a + 1, z - 1));
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if its a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (is_palindrome_recursive(s, 0, str_len(s) - 1));
}
