#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length = length - 1; length >= 0; length--)
	{
		putchar(s[length]);
	}
}
