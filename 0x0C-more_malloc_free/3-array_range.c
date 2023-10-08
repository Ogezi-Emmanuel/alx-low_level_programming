#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: the pointer to the newly created array, if
 * min > max or if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = 1 + (max - min);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
