#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if its a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (*s != '\0')
	{
		length++;
	}

	i = 0;
	j = length - 1;

	while ( i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}

		i++;
		j--;
	}

	return (1);
}
