#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
