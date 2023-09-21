#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer array to be reversed
 * @n: number of elements of the array
 */

int reverse_array(int *a, int n)
{
	int x;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;

		i++;
		j--;
	}
}
