#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 * Return: a pointer to the allocated and initialized memory, if nmemb or
 * size is zero, or if malloc fails, it return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
