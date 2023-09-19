#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int x;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}

	for (x = j; x < i; x++)
	{
		putchar(str[x]);
	}

	putchar ('\n');
}
