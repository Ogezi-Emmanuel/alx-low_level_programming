#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (i);
}
