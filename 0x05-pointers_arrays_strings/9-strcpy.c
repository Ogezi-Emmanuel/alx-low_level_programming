#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the null
 * to the buffer pointed to by dest
 * @dest: destination of string
 * @src: source of string
 * Return: the original destination
 */

char *_strcpy(char *dest, char *src)
{
	int *i = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (i);
}
