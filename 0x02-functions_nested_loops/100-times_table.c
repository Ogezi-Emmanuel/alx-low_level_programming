#include "main.h"

/**
 * print_times_table - prints time table
 * @n: the number of times table
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		_putchar(NULL);
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				putchar(i * j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
