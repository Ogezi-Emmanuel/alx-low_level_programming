#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: the string inputed
 * Return: a pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *i = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}

		str++;
	}

	return (i);
}
