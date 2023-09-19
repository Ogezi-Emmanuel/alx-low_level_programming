#include "main.h"

/**
 * puts2 - prints every character of a string, starting
 * with the first character, followed by a new line
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(s[i]);
		i += 2;
	}

	putchar('\n');
}
