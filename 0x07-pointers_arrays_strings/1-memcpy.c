#include "main.h"

/**
 * _memcpy - copies n bytes from mem area src to
 * memory area dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes of memory
 * Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (i);
}
