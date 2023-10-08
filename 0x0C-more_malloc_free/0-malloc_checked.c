#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to be allocated
 * Return: a pointer to the allocated memory, if malloc fails, it
 * causes normal process termination with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
