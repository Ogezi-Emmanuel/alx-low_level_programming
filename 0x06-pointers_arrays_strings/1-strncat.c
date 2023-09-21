#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of string
 * @src: source of string
 * @n: the highest number of bytes that can be used
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (i);
}
