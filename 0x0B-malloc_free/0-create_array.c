#include "main.h"

/**
 * create_array - create an array of chars, and initializes it
 * with a specific char
 * @size: size of the char
 * @c: the char
 * Return: NULL if size = 0 and if it fails, otherwise return
 * a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array(i) = c;
	}

	return (array);
}
