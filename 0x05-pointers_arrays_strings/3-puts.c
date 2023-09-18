#include "main.h"

/**
 * _puts - writes a function that prints a string, then a new line
 * @str: the string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
