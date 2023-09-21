#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of characters to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (i);
}
